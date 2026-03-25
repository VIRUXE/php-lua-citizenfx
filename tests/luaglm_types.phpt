--TEST--
LuaGLM native types (Vector, Matrix, Quat)
--SKIPIF--
<?php if (!extension_loaded("lua")) print "skip"; ?>
--FILE--
<?php 
$l = new lua();

echo "Testing Vectors:\n";
$res = $l->eval("return vec3(1.0, 2.0, 3.0)");
print_r($res);

echo "\nTesting Quaternions:\n";
$res = $l->eval("return quat(1.0, 0.0, 0.0, 0.0)");
print_r($res);

echo "\nTesting Matrix 3x3:\n";
$res = $l->eval("return mat3x3(vec3(1,0,0), vec3(0,1,0), vec3(0,0,1))");
print_r($res);

echo "\nTesting GLM Math (Dot Product):\n";
$res = $l->eval("return dot(vec3(1,0,0), vec3(1,0,0))");
echo $res, "\n";

echo "\nTesting GLM Namespace (Right Vector):\n";
$res = $l->eval("return glm.right()");
print_r($res);

?>
--EXPECTF--
Testing Vectors:
Array
(
    [x] => 1
    [y] => 2
    [z] => 3
)

Testing Quaternions:
Array
(
    [x] => 0
    [y] => 0
    [z] => 0
    [w] => 1
)

Testing Matrix 3x3:
Array
(
)

Testing GLM Math (Dot Product):
1

Testing GLM Namespace (Right Vector):
Array
(
    [x] => 1
    [y] => 0
    [z] => 0
)
