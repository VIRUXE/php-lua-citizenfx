#ifndef PHP_LUA_MANGLING_H
#define PHP_LUA_MANGLING_H

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

extern "C" {
    void* _Z12luaL_addgsubP11luaL_BufferPKcS2_S2_(...);
    void _Z15luaL_addlstringP11luaL_BufferPKcm(luaL_Buffer *B, const char *s, size_t l);
    void _Z14luaL_addstringP11luaL_BufferPKc(luaL_Buffer *B, const char *s);
    void _Z13luaL_addvalueP11luaL_Buffer(luaL_Buffer *B);
    int _Z13luaL_argerrorP9lua_StateiPKc(lua_State *L, int arg, const char *extramsg);
    void _Z13luaL_buffinitP9lua_StateP11luaL_Buffer(lua_State *L, luaL_Buffer *B);
    char * _Z17luaL_buffinitsizeP9lua_StateP11luaL_Bufferm(lua_State *L, luaL_Buffer *B, size_t sz);
    int _Z13luaL_callmetaP9lua_StateiPKc(lua_State *L, int obj, const char *e);
    void _Z13luaL_checkanyP9lua_Statei(lua_State *L, int arg);
    lua_Integer _Z17luaL_checkintegerP9lua_Statei(lua_State *L, int arg);
    const char * _Z17luaL_checklstringP9lua_StateiPm(lua_State *L, int arg,                                                           size_t *l);
    lua_Number _Z16luaL_checknumberP9lua_Statei(lua_State *L, int arg);
    int _Z16luaL_checkoptionP9lua_StateiPKcPKS2_(lua_State *L, int arg, const char *def,                                    const char *const lst[]);
    void _Z15luaL_checkstackP9lua_StateiPKc(lua_State *L, int sz, const char *msg);
    void _Z14luaL_checktypeP9lua_Stateii(lua_State *L, int arg, int t);
    void * _Z15luaL_checkudataP9lua_StateiPKc(lua_State *L, int ud, const char *tname);
    void _Z18luaL_checkversion_P9lua_Statedm(lua_State *L, lua_Number ver, size_t sz);
    int _Z10luaL_errorP9lua_StatePKcz(lua_State *L, const char *fmt, ...);
    int _Z15luaL_execresultP9lua_Statei(lua_State *L, int stat);
    int _Z15luaL_fileresultP9lua_StateiPKc(lua_State *L, int stat, const char *fname);
    int _Z17luaL_getmetafieldP9lua_StateiPKc(lua_State *L, int obj, const char *e);
    int _Z16luaL_getsubtableP9lua_StateiPKc(lua_State *L, int idx, const char *fname);
    const char * _Z9luaL_gsubP9lua_StatePKcS2_S2_(lua_State *L, const char *s,                                     const char *p, const char *r);
    lua_Integer _Z8luaL_lenP9lua_Statei(lua_State *L, int idx);
    int _Z16luaL_loadbufferxP9lua_StatePKcmS2_S2_(lua_State *L, const char *buff, size_t sz,                                    const char *name, const char *mode);
    int _Z14luaL_loadfilexP9lua_StatePKcS2_(lua_State *L, const char *filename,                                                const char *mode);
    int _Z15luaL_loadstringP9lua_StatePKc(lua_State *L, const char *s);
    int _Z17luaL_newmetatableP9lua_StatePKc(lua_State *L, const char *tname);
    lua_State * _Z13luaL_newstatev(void);
    void _Z13luaL_openlibsP9lua_State(lua_State *L);
    lua_Integer _Z15luaL_optintegerP9lua_Stateix(lua_State *L, int arg,                                           lua_Integer def);
    const char * _Z15luaL_optlstringP9lua_StateiPKcPm(lua_State *L, int arg,                                           const char *def, size_t *l);
    lua_Number _Z14luaL_optnumberP9lua_Stateid(lua_State *L, int arg, lua_Number def);
    char * _Z17luaL_prepbuffsizeP11luaL_Bufferm(luaL_Buffer *B, size_t sz);
    void _Z15luaL_pushresultP11luaL_Buffer(luaL_Buffer *B);
    void _Z19luaL_pushresultsizeP11luaL_Bufferm(luaL_Buffer *B, size_t sz);
    int _Z8luaL_refP9lua_Statei(lua_State *L, int t);
    void _Z13luaL_requirefP9lua_StatePKcPFiS0_Ei(lua_State *L, const char *modname,                                  lua_CFunction openf, int glb);
    void _Z13luaL_setfuncsP9lua_StatePK8luaL_Regi(lua_State *L, const luaL_Reg *l, int nup);
    void _Z17luaL_setmetatableP9lua_StatePKc(lua_State *L, const char *tname);
    void * _Z14luaL_testudataP9lua_StateiPKc(lua_State *L, int ud, const char *tname);
    const char * _Z14luaL_tolstringP9lua_StateiPm(lua_State *L, int idx, size_t *len);
    void _Z14luaL_tracebackP9lua_StateS0_PKci(lua_State *L, lua_State *L1,                                   const char *msg, int level);
    int _Z14luaL_typeerrorP9lua_StateiPKc(lua_State *L, int arg, const char *tname);
    void _Z10luaL_unrefP9lua_Stateii(lua_State *L, int t, int ref);
    void _Z10luaL_whereP9lua_Statei(lua_State *L, int lvl);
    void* _Z17luaVec_dimensionsi(...);
    void* _Z10lua_ToHashP9lua_Stateii(...);
    int _Z12lua_absindexP9lua_Statei(lua_State *L, int idx);
    void _Z9lua_arithP9lua_Statei(lua_State *L, int op);
    lua_CFunction _Z11lua_atpanicP9lua_StatePFiS0_E(lua_State *L, lua_CFunction panicf);
    void _Z9lua_callkP9lua_StateiilPFiS0_ilE(lua_State *L, int nargs, int nresults,                            lua_KContext ctx, lua_KFunction k);
    int _Z14lua_checkstackP9lua_Statei(lua_State *L, int n);
    void _Z14lua_clonetableP9lua_Stateii(lua_State *L, int fromidx, int toidx);
    void _Z9lua_closeP9lua_State(lua_State *L);
    void _Z13lua_closeslotP9lua_Statei(lua_State *L, int idx);
    int _Z11lua_compareP9lua_Stateiii(lua_State *L, int idx1, int idx2, int op);
    void _Z10lua_concatP9lua_Statei(lua_State *L, int n);
    void _Z8lua_copyP9lua_Stateii(lua_State *L, int fromidx, int toidx);
    void _Z15lua_createtableP9lua_Stateii(lua_State *L, int narr, int nrec);
    int _Z8lua_dumpP9lua_StatePFiS0_PKvmPvES3_i(lua_State *L, lua_Writer writer, void *data, int strip);
    int _Z9lua_errorP9lua_State(lua_State *L);
    int _Z6lua_gcP9lua_Stateiz(lua_State *L, int what, ...);
    lua_Alloc _Z13lua_getallocfP9lua_StatePPv(lua_State *L, void **ud);
    int _Z12lua_getfieldP9lua_StateiPKc(lua_State *L, int idx, const char *k);
    int _Z13lua_getglobalP9lua_StatePKc(lua_State *L, const char *name);
    lua_Hook _Z11lua_gethookP9lua_State(lua_State *L);
    int _Z16lua_gethookcountP9lua_State(lua_State *L);
    int _Z15lua_gethookmaskP9lua_State(lua_State *L);
    int _Z8lua_getiP9lua_Stateix(lua_State *L, int idx, lua_Integer n);
    int _Z11lua_getinfoP9lua_StatePKcP9lua_Debug(lua_State *L, const char *what, lua_Debug *ar);
    int _Z17lua_getiuservalueP9lua_Stateii(lua_State *L, int idx, int n);
    const char * _Z12lua_getlocalP9lua_StatePK9lua_Debugi(lua_State *L, const lua_Debug *ar, int n);
    int _Z16lua_getmetatableP9lua_Statei(lua_State *L, int objindex);
    int _Z12lua_getstackP9lua_StateiP9lua_Debug(lua_State *L, int level, lua_Debug *ar);
    int _Z12lua_gettableP9lua_Statei(lua_State *L, int idx);
    int _Z10lua_gettopP9lua_State(lua_State *L);
    const char * _Z14lua_getupvalueP9lua_Stateii(lua_State *L, int funcindex, int n);
    void* _Z12lua_getvalueP9lua_Statei(...);
    int _Z15lua_iscfunctionP9lua_Statei(lua_State *L, int idx);
    int _Z13lua_isintegerP9lua_Statei(lua_State *L, int idx);
    void* _Z12lua_ismatrixP9lua_StateiPiS1_(...);
    int _Z12lua_isnumberP9lua_Statei(lua_State *L, int idx);
    int _Z12lua_isstringP9lua_Statei(lua_State *L, int idx);
    int _Z16lua_isstringblobP9lua_Statei(lua_State *L, int idx);
    int _Z14lua_isuserdataP9lua_Statei(lua_State *L, int idx);
    void* _Z12lua_isvectorP9lua_Stateii(...);
    int _Z15lua_isyieldableP9lua_State(lua_State *L);
    void _Z7lua_lenP9lua_Statei(lua_State *L, int idx);
    int _Z8lua_loadP9lua_StatePFPKcS0_PvPmES3_S2_S2_(lua_State *L, lua_Reader reader, void *dt,                           const char *chunkname, const char *mode);
    lua_State * _Z12lua_newstatePFPvS_S_mmES_(lua_Alloc f, void *ud);
    lua_State * _Z13lua_newthreadP9lua_State(lua_State *L);
    void * _Z17lua_newuserdatauvP9lua_Statemi(lua_State *L, size_t sz, int nuvalue);
    int _Z8lua_nextP9lua_Statei(lua_State *L, int idx);
    int _Z10lua_pcallkP9lua_StateiiilPFiS0_ilE(lua_State *L, int nargs, int nresults, int errfunc,                             lua_KContext ctx, lua_KFunction k);
    char * _Z12lua_pushblobP9lua_Statem(lua_State *L, size_t len);
    void _Z15lua_pushbooleanP9lua_Statei(lua_State *L, int b);
    void _Z16lua_pushcclosureP9lua_StatePFiS0_Ei(lua_State *L, lua_CFunction fn, int n);
    const char * _Z15lua_pushfstringP9lua_StatePKcz(lua_State *L, const char *fmt, ...);
    void _Z15lua_pushintegerP9lua_Statex(lua_State *L, lua_Integer n);
    void _Z21lua_pushlightuserdataP9lua_StatePv(lua_State *L, void *p);
    const char * _Z15lua_pushlstringP9lua_StatePKcm(lua_State *L, const char *s, size_t len);
    void* _Z14lua_pushmatrixP9lua_StateP8lua_Mat4(...);
    void _Z11lua_pushnilP9lua_State(lua_State *L);
    void _Z14lua_pushnumberP9lua_Stated(lua_State *L, lua_Number n);
    const char * _Z14lua_pushstringP9lua_StatePKc(lua_State *L, const char *s);
    int _Z14lua_pushthreadP9lua_State(lua_State *L);
    void _Z13lua_pushvalueP9lua_Statei(lua_State *L, int idx);
    void* _Z14lua_pushvectorP9lua_State11lua_CFloat4i(...);
    const char * _Z16lua_pushvfstringP9lua_StatePKcP13__va_list_tag(lua_State *L, const char *fmt,                                                       va_list argp);
    int _Z12lua_rawequalP9lua_Stateii(lua_State *L, int idx1, int idx2);
    int _Z10lua_rawgetP9lua_Statei(lua_State *L, int idx);
    int _Z11lua_rawgetiP9lua_Stateix(lua_State *L, int idx, lua_Integer n);
    int _Z11lua_rawgetpP9lua_StateiPKv(lua_State *L, int idx, const void *p);
    lua_Unsigned _Z10lua_rawlenP9lua_Statei(lua_State *L, int idx);
    void _Z10lua_rawsetP9lua_Statei(lua_State *L, int idx);
    void _Z11lua_rawsetiP9lua_Stateix(lua_State *L, int idx, lua_Integer n);
    void _Z11lua_rawsetpP9lua_StateiPKv(lua_State *L, int idx, const void *p);
    int _Z15lua_resetthreadP9lua_State(lua_State *L);
    int _Z10lua_resumeP9lua_StateS0_iPi(lua_State *L, lua_State *from, int narg,                                int *nres);
    void _Z10lua_rotateP9lua_Stateii(lua_State *L, int idx, int n);
    void _Z13lua_setallocfP9lua_StatePFPvS1_S1_mmES1_(lua_State *L, lua_Alloc f, void *ud);
    int _Z18lua_setcstacklimitP9lua_Statej(lua_State *L, unsigned int limit);
    void _Z12lua_setfieldP9lua_StateiPKc(lua_State *L, int idx, const char *k);
    void _Z13lua_setglobalP9lua_StatePKc(lua_State *L, const char *name);
    void _Z11lua_sethookP9lua_StatePFvS0_P9lua_DebugEii(lua_State *L, lua_Hook func, int mask, int count);
    void _Z8lua_setiP9lua_Stateix(lua_State *L, int idx, lua_Integer n);
    int _Z17lua_setiuservalueP9lua_Stateii(lua_State *L, int idx, int n);
    const char * _Z12lua_setlocalP9lua_StatePK9lua_Debugi(lua_State *L, const lua_Debug *ar, int n);
    int _Z16lua_setmetatableP9lua_Statei(lua_State *L, int objindex);
    void _Z12lua_settableP9lua_Statei(lua_State *L, int idx);
    void _Z10lua_settopP9lua_Statei(lua_State *L, int idx);
    const char * _Z14lua_setupvalueP9lua_Stateii(lua_State *L, int funcindex, int n);
    void _Z12lua_setwarnfP9lua_StatePFvPvPKciES1_(lua_State *L, lua_WarnFunction f, void *ud);
    int _Z10lua_statusP9lua_State(lua_State *L);
    size_t _Z18lua_stringtonumberP9lua_StatePKc(lua_State *L, const char *s);
    int _Z13lua_tabletypeP9lua_Statei(lua_State *L, int idx);
    int _Z13lua_tobooleanP9lua_Statei(lua_State *L, int idx);
    lua_CFunction _Z15lua_tocfunctionP9lua_Statei(lua_State *L, int idx);
    void _Z11lua_tocloseP9lua_Statei(lua_State *L, int idx);
    lua_Integer _Z14lua_tointegerxP9lua_StateiPi(lua_State *L, int idx, int *isnum);
    const char     * _Z13lua_tolstringP9lua_StateiPm(lua_State *L, int idx, size_t *len);
    void* _Z12lua_tomatrixP9lua_StateiP8lua_Mat4(...);
    lua_Number _Z13lua_tonumberxP9lua_StateiPi(lua_State *L, int idx, int *isnum);
    const void     * _Z13lua_topointerP9lua_Statei(lua_State *L, int idx);
    void* _Z12lua_toprotosP9lua_Statei(...);
    char * _Z16lua_tostringblobP9lua_StateiPm(lua_State *L, int idx, size_t *len);
    lua_State      * _Z12lua_tothreadP9lua_Statei(lua_State *L, int idx);
    void	       * _Z14lua_touserdataP9lua_Statei(lua_State *L, int idx);
    void* _Z12lua_tovectorP9lua_StateiiP11lua_CFloat4(...);
    int _Z8lua_typeP9lua_Statei(lua_State *L, int idx);
    const char     * _Z12lua_typenameP9lua_Statei(lua_State *L, int tp);
    void * _Z13lua_upvalueidP9lua_Stateii(lua_State *L, int fidx, int n);
    void _Z15lua_upvaluejoinP9lua_Stateiiii(lua_State *L, int fidx1, int n1,                                                int fidx2, int n2);
    lua_Number _Z11lua_versionP9lua_State(lua_State *L);
    void _Z11lua_warningP9lua_StatePKci(lua_State *L, const char *msg, int tocont);
    void _Z13lua_wipetableP9lua_Statei(lua_State *L, int idx);
    void _Z9lua_xmoveP9lua_StateS0_i(lua_State *from, lua_State *to, int n);
    int _Z10lua_yieldkP9lua_StateilPFiS0_ilE(lua_State *L, int nresults, lua_KContext ctx,                                lua_KFunction k);
    int _Z12luaopen_baseP9lua_State(lua_State *L);
    int _Z17luaopen_coroutineP9lua_State(lua_State *L);
    int _Z13luaopen_debugP9lua_State(lua_State *L);
    int _Z10luaopen_ioP9lua_State(lua_State *L);
    int _Z12luaopen_mathP9lua_State(lua_State *L);
    int _Z10luaopen_osP9lua_State(lua_State *L);
    int _Z15luaopen_packageP9lua_State(lua_State *L);
    int _Z14luaopen_stringP9lua_State(lua_State *L);
    int _Z13luaopen_tableP9lua_State(lua_State *L);
    int _Z12luaopen_utf8P9lua_State(lua_State *L);
}

#define luaL_addgsub _Z12luaL_addgsubP11luaL_BufferPKcS2_S2_
#define luaL_addlstring _Z15luaL_addlstringP11luaL_BufferPKcm
#define luaL_addstring _Z14luaL_addstringP11luaL_BufferPKc
#define luaL_addvalue _Z13luaL_addvalueP11luaL_Buffer
#define luaL_argerror _Z13luaL_argerrorP9lua_StateiPKc
#define luaL_buffinit _Z13luaL_buffinitP9lua_StateP11luaL_Buffer
#define luaL_buffinitsize _Z17luaL_buffinitsizeP9lua_StateP11luaL_Bufferm
#define luaL_callmeta _Z13luaL_callmetaP9lua_StateiPKc
#define luaL_checkany _Z13luaL_checkanyP9lua_Statei
#define luaL_checkinteger _Z17luaL_checkintegerP9lua_Statei
#define luaL_checklstring _Z17luaL_checklstringP9lua_StateiPm
#define luaL_checknumber _Z16luaL_checknumberP9lua_Statei
#define luaL_checkoption _Z16luaL_checkoptionP9lua_StateiPKcPKS2_
#define luaL_checkstack _Z15luaL_checkstackP9lua_StateiPKc
#define luaL_checktype _Z14luaL_checktypeP9lua_Stateii
#define luaL_checkudata _Z15luaL_checkudataP9lua_StateiPKc
#define luaL_checkversion_ _Z18luaL_checkversion_P9lua_Statedm
#define luaL_error _Z10luaL_errorP9lua_StatePKcz
#define luaL_execresult _Z15luaL_execresultP9lua_Statei
#define luaL_fileresult _Z15luaL_fileresultP9lua_StateiPKc
#define luaL_getmetafield _Z17luaL_getmetafieldP9lua_StateiPKc
#define luaL_getsubtable _Z16luaL_getsubtableP9lua_StateiPKc
#define luaL_gsub _Z9luaL_gsubP9lua_StatePKcS2_S2_
#define luaL_len _Z8luaL_lenP9lua_Statei
#define luaL_loadbufferx _Z16luaL_loadbufferxP9lua_StatePKcmS2_S2_
#define luaL_loadfilex _Z14luaL_loadfilexP9lua_StatePKcS2_
#define luaL_loadstring _Z15luaL_loadstringP9lua_StatePKc
#define luaL_newmetatable _Z17luaL_newmetatableP9lua_StatePKc
#define luaL_newstate _Z13luaL_newstatev
#define luaL_openlibs _Z13luaL_openlibsP9lua_State
#define luaL_optinteger _Z15luaL_optintegerP9lua_Stateix
#define luaL_optlstring _Z15luaL_optlstringP9lua_StateiPKcPm
#define luaL_optnumber _Z14luaL_optnumberP9lua_Stateid
#define luaL_prepbuffsize _Z17luaL_prepbuffsizeP11luaL_Bufferm
#define luaL_pushresult _Z15luaL_pushresultP11luaL_Buffer
#define luaL_pushresultsize _Z19luaL_pushresultsizeP11luaL_Bufferm
#define luaL_ref _Z8luaL_refP9lua_Statei
#define luaL_requiref _Z13luaL_requirefP9lua_StatePKcPFiS0_Ei
#define luaL_setfuncs _Z13luaL_setfuncsP9lua_StatePK8luaL_Regi
#define luaL_setmetatable _Z17luaL_setmetatableP9lua_StatePKc
#define luaL_testudata _Z14luaL_testudataP9lua_StateiPKc
#define luaL_tolstring _Z14luaL_tolstringP9lua_StateiPm
#define luaL_traceback _Z14luaL_tracebackP9lua_StateS0_PKci
#define luaL_typeerror _Z14luaL_typeerrorP9lua_StateiPKc
#define luaL_unref _Z10luaL_unrefP9lua_Stateii
#define luaL_where _Z10luaL_whereP9lua_Statei
#define luaVec_dimensions _Z17luaVec_dimensionsi
#define lua_ToHash _Z10lua_ToHashP9lua_Stateii
#define lua_absindex _Z12lua_absindexP9lua_Statei
#define lua_arith _Z9lua_arithP9lua_Statei
#define lua_atpanic _Z11lua_atpanicP9lua_StatePFiS0_E
#define lua_callk _Z9lua_callkP9lua_StateiilPFiS0_ilE
#define lua_checkstack _Z14lua_checkstackP9lua_Statei
#define lua_clonetable _Z14lua_clonetableP9lua_Stateii
#define lua_close _Z9lua_closeP9lua_State
#define lua_closeslot _Z13lua_closeslotP9lua_Statei
#define lua_compare _Z11lua_compareP9lua_Stateiii
#define lua_concat _Z10lua_concatP9lua_Statei
#define lua_copy _Z8lua_copyP9lua_Stateii
#define lua_createtable _Z15lua_createtableP9lua_Stateii
#define lua_dump _Z8lua_dumpP9lua_StatePFiS0_PKvmPvES3_i
#define lua_error _Z9lua_errorP9lua_State
#define lua_gc _Z6lua_gcP9lua_Stateiz
#define lua_getallocf _Z13lua_getallocfP9lua_StatePPv
#define lua_getfield _Z12lua_getfieldP9lua_StateiPKc
#define lua_getglobal _Z13lua_getglobalP9lua_StatePKc
#define lua_gethook _Z11lua_gethookP9lua_State
#define lua_gethookcount _Z16lua_gethookcountP9lua_State
#define lua_gethookmask _Z15lua_gethookmaskP9lua_State
#define lua_geti _Z8lua_getiP9lua_Stateix
#define lua_getinfo _Z11lua_getinfoP9lua_StatePKcP9lua_Debug
#define lua_getiuservalue _Z17lua_getiuservalueP9lua_Stateii
#define lua_getlocal _Z12lua_getlocalP9lua_StatePK9lua_Debugi
#define lua_getmetatable _Z16lua_getmetatableP9lua_Statei
#define lua_getstack _Z12lua_getstackP9lua_StateiP9lua_Debug
#define lua_gettable _Z12lua_gettableP9lua_Statei
#define lua_gettop _Z10lua_gettopP9lua_State
#define lua_getupvalue _Z14lua_getupvalueP9lua_Stateii
#define lua_getvalue _Z12lua_getvalueP9lua_Statei
#define lua_iscfunction _Z15lua_iscfunctionP9lua_Statei
#define lua_isinteger _Z13lua_isintegerP9lua_Statei
#define lua_ismatrix _Z12lua_ismatrixP9lua_StateiPiS1_
#define lua_isnumber _Z12lua_isnumberP9lua_Statei
#define lua_isstring _Z12lua_isstringP9lua_Statei
#define lua_isstringblob _Z16lua_isstringblobP9lua_Statei
#define lua_isuserdata _Z14lua_isuserdataP9lua_Statei
#define lua_isvector _Z12lua_isvectorP9lua_Stateii
#define lua_isyieldable _Z15lua_isyieldableP9lua_State
#define lua_len _Z7lua_lenP9lua_Statei
#define lua_load _Z8lua_loadP9lua_StatePFPKcS0_PvPmES3_S2_S2_
#define lua_newstate _Z12lua_newstatePFPvS_S_mmES_
#define lua_newthread _Z13lua_newthreadP9lua_State
#define lua_newuserdatauv _Z17lua_newuserdatauvP9lua_Statemi
#define lua_next _Z8lua_nextP9lua_Statei
#define lua_pcallk _Z10lua_pcallkP9lua_StateiiilPFiS0_ilE
#define lua_pushblob _Z12lua_pushblobP9lua_Statem
#define lua_pushboolean _Z15lua_pushbooleanP9lua_Statei
#define lua_pushcclosure _Z16lua_pushcclosureP9lua_StatePFiS0_Ei
#define lua_pushfstring _Z15lua_pushfstringP9lua_StatePKcz
#define lua_pushinteger _Z15lua_pushintegerP9lua_Statex
#define lua_pushlightuserdata _Z21lua_pushlightuserdataP9lua_StatePv
#define lua_pushlstring _Z15lua_pushlstringP9lua_StatePKcm
#define lua_pushmatrix _Z14lua_pushmatrixP9lua_StateP8lua_Mat4
#define lua_pushnil _Z11lua_pushnilP9lua_State
#define lua_pushnumber _Z14lua_pushnumberP9lua_Stated
#define lua_pushstring _Z14lua_pushstringP9lua_StatePKc
#define lua_pushthread _Z14lua_pushthreadP9lua_State
#define lua_pushvalue _Z13lua_pushvalueP9lua_Statei
#define lua_pushvector _Z14lua_pushvectorP9lua_State11lua_CFloat4i
#define lua_pushvfstring _Z16lua_pushvfstringP9lua_StatePKcP13__va_list_tag
#define lua_rawequal _Z12lua_rawequalP9lua_Stateii
#define lua_rawget _Z10lua_rawgetP9lua_Statei
#define lua_rawgeti _Z11lua_rawgetiP9lua_Stateix
#define lua_rawgetp _Z11lua_rawgetpP9lua_StateiPKv
#define lua_rawlen _Z10lua_rawlenP9lua_Statei
#define lua_rawset _Z10lua_rawsetP9lua_Statei
#define lua_rawseti _Z11lua_rawsetiP9lua_Stateix
#define lua_rawsetp _Z11lua_rawsetpP9lua_StateiPKv
#define lua_resetthread _Z15lua_resetthreadP9lua_State
#define lua_resume _Z10lua_resumeP9lua_StateS0_iPi
#define lua_rotate _Z10lua_rotateP9lua_Stateii
#define lua_setallocf _Z13lua_setallocfP9lua_StatePFPvS1_S1_mmES1_
#define lua_setcstacklimit _Z18lua_setcstacklimitP9lua_Statej
#define lua_setfield _Z12lua_setfieldP9lua_StateiPKc
#define lua_setglobal _Z13lua_setglobalP9lua_StatePKc
#define lua_sethook _Z11lua_sethookP9lua_StatePFvS0_P9lua_DebugEii
#define lua_seti _Z8lua_setiP9lua_Stateix
#define lua_setiuservalue _Z17lua_setiuservalueP9lua_Stateii
#define lua_setlocal _Z12lua_setlocalP9lua_StatePK9lua_Debugi
#define lua_setmetatable _Z16lua_setmetatableP9lua_Statei
#define lua_settable _Z12lua_settableP9lua_Statei
#define lua_settop _Z10lua_settopP9lua_Statei
#define lua_setupvalue _Z14lua_setupvalueP9lua_Stateii
#define lua_setwarnf _Z12lua_setwarnfP9lua_StatePFvPvPKciES1_
#define lua_status _Z10lua_statusP9lua_State
#define lua_stringtonumber _Z18lua_stringtonumberP9lua_StatePKc
#define lua_tabletype _Z13lua_tabletypeP9lua_Statei
#define lua_toboolean _Z13lua_tobooleanP9lua_Statei
#define lua_tocfunction _Z15lua_tocfunctionP9lua_Statei
#define lua_toclose _Z11lua_tocloseP9lua_Statei
#define lua_tointegerx _Z14lua_tointegerxP9lua_StateiPi
#define lua_tolstring _Z13lua_tolstringP9lua_StateiPm
#define lua_tomatrix _Z12lua_tomatrixP9lua_StateiP8lua_Mat4
#define lua_tonumberx _Z13lua_tonumberxP9lua_StateiPi
#define lua_topointer _Z13lua_topointerP9lua_Statei
#define lua_toprotos _Z12lua_toprotosP9lua_Statei
#define lua_tostringblob _Z16lua_tostringblobP9lua_StateiPm
#define lua_tothread _Z12lua_tothreadP9lua_Statei
#define lua_touserdata _Z14lua_touserdataP9lua_Statei
#define lua_tovector _Z12lua_tovectorP9lua_StateiiP11lua_CFloat4
#define lua_type _Z8lua_typeP9lua_Statei
#define lua_typename _Z12lua_typenameP9lua_Statei
#define lua_upvalueid _Z13lua_upvalueidP9lua_Stateii
#define lua_upvaluejoin _Z15lua_upvaluejoinP9lua_Stateiiii
#define lua_version _Z11lua_versionP9lua_State
#define lua_warning _Z11lua_warningP9lua_StatePKci
#define lua_wipetable _Z13lua_wipetableP9lua_Statei
#define lua_xmove _Z9lua_xmoveP9lua_StateS0_i
#define lua_yieldk _Z10lua_yieldkP9lua_StateilPFiS0_ilE
#define luaopen_base _Z12luaopen_baseP9lua_State
#define luaopen_coroutine _Z17luaopen_coroutineP9lua_State
#define luaopen_debug _Z13luaopen_debugP9lua_State
#define luaopen_io _Z10luaopen_ioP9lua_State
#define luaopen_math _Z12luaopen_mathP9lua_State
#define luaopen_os _Z10luaopen_osP9lua_State
#define luaopen_package _Z15luaopen_packageP9lua_State
#define luaopen_string _Z14luaopen_stringP9lua_State
#define luaopen_table _Z13luaopen_tableP9lua_State
#define luaopen_utf8 _Z12luaopen_utf8P9lua_State

#endif
