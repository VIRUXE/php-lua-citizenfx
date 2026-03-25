--TEST--
LuaGLM memory stability loop
--SKIPIF--
<?php if (!extension_loaded("lua")) print "skip"; ?>
--FILE--
<?php 
for ($i = 0; $i < 100; $i++) {
    $l = new lua();
    $l->eval("local v = vec3(1,2,3); local q = quat(1,0,0,0); local m = mat3x3(1)");
    unset($l);
}
echo "Done loop without crashing\n";
?>
--EXPECT--
Done loop without crashing
