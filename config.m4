PHP_ARG_WITH(lua, for lua support,
[  --with-lua=[DIR]    Include php lua support])

if test "$PHP_LUA" != "no"; then
  # Force citizen-lua-dist paths
  LUA_INCLUDE_DIR=/root/citizen-lua-dist/include
  LUA_LIB_DIR=/root/citizen-lua-dist/lib
  LUA_LIB_SUFFIX=lua54

  if test -r $LUA_INCLUDE_DIR/lua.h; then
    AC_MSG_RESULT(found FiveM Lua headers in $LUA_INCLUDE_DIR)
  else
    AC_MSG_ERROR(FiveM Lua headers not found in $LUA_INCLUDE_DIR)
  fi

  PHP_ADD_INCLUDE($LUA_INCLUDE_DIR)
  PHP_ADD_LIBRARY_WITH_PATH($LUA_LIB_SUFFIX, $LUA_LIB_DIR, LUA_SHARED_LIBADD) 
  PHP_SUBST(LUA_SHARED_LIBADD)
  
  # Ensure we link with C++ because citizen-lua uses GLM/C++
  PHP_REQUIRE_CXX()
  
  PHP_NEW_EXTENSION(lua, lua.cpp lua_closure.cpp, $ext_shared)
fi
