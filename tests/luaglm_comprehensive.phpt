--TEST--
Comprehensive LuaGLM Extended Features
--SKIPIF--
<?php if (!extension_loaded("lua")) print "skip"; ?>
--FILE--
<?php 
$l = new lua();

$testScript = <<<'LUA'
-- 1. Constructors and Native Types
local v2 = vec2(1, 2)
local v3 = vec3(1, 2, 3)
local v4 = vec4(1, 2, 3, 4)
local iv3 = ivec3(10, 20, 30)
local bv2 = bvec2(true, false)
local q = quat(1, 0, 0, 0)
local m3 = mat3x3(1.0)
local m4 = mat4x4(1.0)

-- 2. Global Math Aliases (Grit-Lua)
local d = dot(v3, v3)
local c = cross(vec3(1,0,0), vec3(0,1,0))
local n = norm(v3)
local sl = slerp(q, quat(0, 1, 0, 0), 0.5)

-- 3. GLM Namespace
local g_right = glm.right()
local g_up = glm.up()
local g_fwd = glm.forward()
local g_inv = glm.inverse(m3)

-- 4. FiveM Specifics
local hash = `prop_cs_burger_01` -- JOAT Hash (Backticks)

return {
    types = {
        v2 = v2,
        v3 = v3,
        v4 = v4,
        iv3 = iv3,
        bv2 = bv2,
        q = q,
        m3 = m3,
        m4 = m4
    },
    math = {
        dot = d,
        cross = c,
        norm = n,
        slerp = sl
    },
    glm = {
        right = g_right,
        up = g_up,
        fwd = g_fwd
    },
    fivem = {
        hash = hash
    }
}
LUA;

$res = $l->eval($testScript);

echo "--- VECTORS ---\n";
print_r($res['types']['v2']);
print_r($res['types']['v3']);
print_r($res['types']['v4']);
print_r($res['types']['iv3']);

echo "\n--- QUATERNION ---\n";
print_r($res['types']['q']);

echo "\n--- MATH ---\n";
echo "Dot: " . $res['math']['dot'] . "\n";
echo "Cross Z: " . $res['math']['cross']['z'] . "\n";
echo "Hash: " . $res['fivem']['hash'] . "\n";

echo "\n--- GLM NATIVES ---\n";
print_r($res['glm']['right']);
print_r($res['glm']['up']);
print_r($res['glm']['fwd']);

?>
--EXPECTF--
--- VECTORS ---
Array
(
    [x] => 1
    [y] => 2
)
Array
(
    [x] => 1
    [y] => 2
    [z] => 3
)
Array
(
    [x] => 1
    [y] => 2
    [z] => 3
    [w] => 4
)
Array
(
    [x] => 10
    [y] => 20
    [z] => 30
)

--- QUATERNION ---
Array
(
    [x] => 0
    [y] => 0
    [z] => 0
    [w] => 1
)

--- MATH ---
Dot: 14
Cross Z: 1
Hash: -2054442544

--- GLM NATIVES ---
Array
(
    [x] => 1
    [y] => 0
    [z] => 0
)
Array
(
    [x] => 0
    [y] => 0
    [z] => 1
)
Array
(
    [x] => 0
    [y] => 1
    [z] => 0
)
