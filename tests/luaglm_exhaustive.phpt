--TEST--
Exhaustive LuaGLM Extended Features Test
--SKIPIF--
<?php if (!extension_loaded("lua")) print "skip"; ?>
--FILE--
<?php 
$l = new lua();

$testScript = <<<'LUA'
local results = {}

-- 1. Detailed Constructors
results.vec = {
    v2 = vec2(1, 2),
    v3 = vec3(1, 2, 3),
    v4 = vec4(1, 2, 3, 4),
    iv3 = ivec3(10, 20, 30),
    bv2 = bvec2(true, false),
}

-- 2. Quaternions and Matrices
results.quat_mat = {
    q = quat(1, 0, 0, 0),
    m3 = mat3x3(1.0),
    m4 = mat4x4(1.0),
    trs = glm.trs(vec3(1,2,3), quat(1,0,0,0), vec3(1,1,1))
}

-- 3. GLM Common/Math Functions
results.glm_common = {
    signP = glm.signP(-5.0),
    hypot = glm.hypot(3.0, 4.0),
    abs_v = glm.abs(vec3(-1, -2, -3)),
    sincos_s = { glm.sincos(0.5) },
    deg = glm.deg(math.pi),
    rad = glm.rad(180.0)
}

-- 4. Euler Angles
results.euler = {
    ex = glm.quatEulerAngleX(45.0),
    ey = glm.quatEulerAngleY(45.0),
    ez = glm.quatEulerAngleZ(45.0),
    exyz = glm.quatEulerAngleXYZ(10, 20, 30)
}

-- 5. Geometry API
-- AABB
local amin, amax = glm.aabb.new(vec3(0,0,0), vec3(1,1,1), vec3(0.5, 0.5, 0.5))
results.geometry = {
    aabb = { min = amin, max = amax },
    sphere_aabb = { glm.aabb.aabbFromSphere(vec3(0,0,0), 5.0) }
}

-- 6. Grit-Lua Compatibility
results.grit = {
    dot = glm.dot(vec3(1,0,0), vec3(1,0,0)),
    cross = glm.cross(vec3(1,0,0), vec3(0,1,0)),
    inv_q = glm.inverse(quat(1,0,0,0))
}

-- 7. Constants
results.constants = {
    huge = huge,
    feps = feps
}

-- 8. FiveM JOAT
results.fivem = {
    joaat_backtick = `prop_cs_burger_01`,
    joaat_func = joaat("prop_cs_burger_01")
}

return results
LUA;

try {
    $res = $l->eval($testScript);
    
    echo "--- VECTORS ---\n";
    echo "v3: x=" . $res['vec']['v3']['x'] . ", y=" . $res['vec']['v3']['y'] . ", z=" . $res['vec']['v3']['z'] . "\n";
    echo "iv3: x=" . $res['vec']['iv3']['x'] . "\n";

    echo "\n--- QUAT/MAT ---\n";
    echo "quat.w: " . $res['quat_mat']['q']['w'] . "\n";
    echo "trs.m00: " . (isset($res['quat_mat']['trs']) ? "exists" : "missing") . "\n";

    echo "\n--- COMMON ---\n";
    echo "signP: " . $res['glm_common']['signP'] . "\n";
    echo "hypot: " . $res['glm_common']['hypot'] . "\n";
    echo "deg: " . round($res['glm_common']['deg'], 2) . "\n";

    echo "\n--- GEOMETRY ---\n";
    echo "aabb min.x: " . $res['geometry']['aabb']['min']['x'] . "\n";
    echo "aabb max.z: " . $res['geometry']['aabb']['max']['z'] . "\n";

    echo "\n--- FIVEM ---\n";
    echo "JOAAT MATCH: " . ($res['fivem']['joaat_backtick'] == $res['fivem']['joaat_func'] ? "YES" : "NO") . " (" . $res['fivem']['joaat_backtick'] . ")\n";

} catch (Throwable $e) {
    echo "ERROR: " . $e->getMessage() . "\n";
}

?>
--EXPECTF--
--- VECTORS ---
v3: x=1, y=2, z=3
iv3: x=10

--- QUAT/MAT ---
quat.w: 1
trs.m00: exists

--- COMMON ---
signP: -1
hypot: 5
deg: 180

--- GEOMETRY ---
aabb min.x: 0
aabb max.z: 1

--- FIVEM ---
JOAAT MATCH: YES (-2054442544)
