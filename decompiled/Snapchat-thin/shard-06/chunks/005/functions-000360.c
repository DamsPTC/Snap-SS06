/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a0f8dc; end: 104a0f913; -[GTLRQuery invalidateQuery] */

void FUN_104a0f8dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1e6400(param_1,param_2,1);
  func_0x00010c17fb40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c198130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setExecutionParameters__112643a68,0);
  return;
}



/* Entry: 104a0f914; end: 104a0f993; -[GTLRQuery executionParameters] */

void FUN_104a0f914(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae0e0;
    _objc_alloc();
    func_0x00010bfee200();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a0f994; end: 104a0f9e3; -[GTLRQuery setExecutionParameters:] */

void FUN_104a0f994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a0f9e4; end: 104a0fa1f; -[GTLRQuery hasExecutionParameters] */

undefined8 FUN_104a0f9e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf9b240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd9fe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a0fa20; end: 104a0fab7; +[GTLRQuery nextRequestID] */

void FUN_104a0fa20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae128;
  func_0x00010bf39c40(PTR_PTR_1126ae128);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  lRam00000001136a0560 = lRam00000001136a0560 + 1;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da6b98);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a0fab8; end: 104a0fb5f; -[GTLRQuery setJSONValue:forKey:] */

void FUN_104a0fab8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bdc18a0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (puVar1 == (undefined *)0x0)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64e0(param_1,param_2,puVar1);
  }
  func_0x00010c220220(puVar1,param_2,param_3,param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a0fb60; end: 104a0fbcb; -[GTLRQuery JSONValueForKey:] */

void FUN_104a0fb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc18a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a0fbcc; end: 104a0fc8f; -[GTLRQuery setCacheChild:forKey:] */

void FUN_104a0fbcc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar2 = *(long *)(param_1 + 8);
  if ((param_3 == 0) || (lVar2 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c220220(lVar2,param_2,param_3,param_4);
    _objc_release(param_4);
  }
  else {
    _objc_retain();
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c030a20();
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = *(long *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a0fc90; end: 104a0fc97; -[GTLRQuery cacheChildForKey:] */

void FUN_104a0fc90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0)
  ;
  return;
}



/* Entry: 104a0fc98; end: 104a0fc9f; +[GTLRQuery parameterNameMap] */

undefined8 FUN_104a0fc98(void)

{
  return 0;
}



/* Entry: 104a0fca0; end: 104a0fca7; +[GTLRQuery arrayPropertyToClassMap] */

undefined8 FUN_104a0fca0(void)

{
  return 0;
}



/* Entry: 104a0fca8; end: 104a0fd1f; +[GTLRQuery initialize] */

void FUN_104a0fca8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam00000001136a0568 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bfee200();
    puVar3 = puRam00000001136a0568;
    puRam00000001136a0568 = puVar2;
    _objc_release(puVar3);
  }
  if (puRam00000001136a0570 != (undefined *)0x0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bfee200();
  lVar1 = (long)puRam00000001136a0570;
  puRam00000001136a0570 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a0fd20; end: 104a0fd77; +[GTLRQuery propertyToJSONKeyMapForClass:] */

void FUN_104a0fd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae120;
  puVar1 = PTR_s_parameterNameMap_1125255e0;
  puVar3 = PTR_PTR_1126ae128;
  func_0x00010bf39c40(PTR_PTR_1126ae128);
                    /* WARNING: Could not recover jumptable at 0x00010c0cadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_mergedClassDictionaryForSelector_112610580,puVar1,param_3,puVar3,
             uRam00000001136a0568);
  return;
}



/* Entry: 104a0fd78; end: 104a0fdcf; +[GTLRQuery arrayPropertyToClassMapForClass:] */

void FUN_104a0fd78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae120;
  puVar1 = PTR_s_arrayPropertyToClassMap_1125255d8;
  puVar3 = PTR_PTR_1126ae128;
  func_0x00010bf39c40(PTR_PTR_1126ae128);
                    /* WARNING: Could not recover jumptable at 0x00010c0cadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_mergedClassDictionaryForSelector_112610580,puVar1,param_3,puVar3,
             uRam00000001136a0570);
  return;
}



/* Entry: 104a0fdd0; end: 104a0fdd7; -[GTLRQuery objectClassResolver] */

undefined8 FUN_104a0fdd0(void)

{
  return 0;
}



/* Entry: 104a0fdd8; end: 104a0fde3; +[GTLRQuery ancestorClass] */

void FUN_104a0fdd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae128,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a0fde4; end: 104a0fe47; +[GTLRQuery resolveInstanceMethod:] */

void FUN_104a0fde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae120;
  func_0x00010c13aa40();
  if (((ulong)puVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_1126e34e0;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_resolveInstanceMethod__11254da90,param_3);
  }
  return;
}



/* Entry: 104a0fe48; end: 104a0fe53; -[GTLRQuery additionalURLQueryParameters] */

void FUN_104a0fe48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 104a0fe54; end: 104a0fe5b; -[GTLRQuery setAdditionalURLQueryParameters:] */

void FUN_104a0fe54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0fe5c; end: 104a0fe67; -[GTLRQuery additionalHTTPHeaders] */

void FUN_104a0fe5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 104a0fe68; end: 104a0fe6f; -[GTLRQuery setAdditionalHTTPHeaders:] */

void FUN_104a0fe68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0fe70; end: 104a0fe7b; -[GTLRQuery bodyObject] */

void FUN_104a0fe70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 104a0fe7c; end: 104a0fe83; -[GTLRQuery setBodyObject:] */

void FUN_104a0fe7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a0fe84; end: 104a0fe8f; -[GTLRQuery completionBlock] */

void FUN_104a0fe84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 104a0fe90; end: 104a0fe97; -[GTLRQuery setCompletionBlock:] */

void FUN_104a0fe90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0fe98; end: 104a0fea3; -[GTLRQuery downloadAsDataObjectType] */

void FUN_104a0fe98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 104a0fea4; end: 104a0feab; -[GTLRQuery setDownloadAsDataObjectType:] */

void FUN_104a0fea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0feac; end: 104a0feb3; -[GTLRQuery expectedObjectClass] */

undefined8 FUN_104a0feac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a0feb4; end: 104a0febb; -[GTLRQuery setExpectedObjectClass:] */

void FUN_104a0feb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 104a0febc; end: 104a0fec7; -[GTLRQuery httpMethod] */

void FUN_104a0febc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 104a0fec8; end: 104a0fecf; -[GTLRQuery JSON] */

undefined8 FUN_104a0fec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104a0fed0; end: 104a0fedb; -[GTLRQuery setJSON:] */

void FUN_104a0fed0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 104a0fedc; end: 104a0fee7; -[GTLRQuery loggingName] */

void FUN_104a0fedc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 104a0fee8; end: 104a0feef; -[GTLRQuery setLoggingName:] */

void FUN_104a0fee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0fef0; end: 104a0fefb; -[GTLRQuery pathParameterNames] */

void FUN_104a0fef0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 104a0fefc; end: 104a0ff07; -[GTLRQuery pathURITemplate] */

void FUN_104a0fefc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 104a0ff08; end: 104a0ff13; -[GTLRQuery isQueryInvalid] */

byte FUN_104a0ff08(long param_1)

{
  return *(byte *)(param_1 + 0x18) & 1;
}



/* Entry: 104a0ff14; end: 104a0ff1b; -[GTLRQuery setQueryInvalid:] */

void FUN_104a0ff14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 104a0ff1c; end: 104a0ff27; -[GTLRQuery requestID] */

void FUN_104a0ff1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 104a0ff28; end: 104a0ff2f; -[GTLRQuery setRequestID:] */

void FUN_104a0ff28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0ff30; end: 104a0ff3b; -[GTLRQuery resumableUploadPathURITemplateOverride] */

void FUN_104a0ff30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x80,1);
  return;
}



/* Entry: 104a0ff3c; end: 104a0ff43; -[GTLRQuery setResumableUploadPathURITemplateOverride:] */

void FUN_104a0ff3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0ff44; end: 104a0ff4f; -[GTLRQuery shouldSkipAuthorization] */

byte FUN_104a0ff44(long param_1)

{
  return *(byte *)(param_1 + 0x19) & 1;
}



/* Entry: 104a0ff50; end: 104a0ff57; -[GTLRQuery setShouldSkipAuthorization:] */

void FUN_104a0ff50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 104a0ff58; end: 104a0ff63; -[GTLRQuery simpleUploadPathURITemplateOverride] */

void FUN_104a0ff58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x88,1);
  return;
}



/* Entry: 104a0ff64; end: 104a0ff6b; -[GTLRQuery setSimpleUploadPathURITemplateOverride:] */

void FUN_104a0ff64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0ff6c; end: 104a0ff77; -[GTLRQuery uploadParameters] */

void FUN_104a0ff6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 104a0ff78; end: 104a0ff7f; -[GTLRQuery setUploadParameters:] */

void FUN_104a0ff78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0ff80; end: 104a0ff8b; -[GTLRQuery useMediaDownloadService] */

byte FUN_104a0ff80(long param_1)

{
  return *(byte *)(param_1 + 0x1a) & 1;
}



/* Entry: 104a0ff8c; end: 104a0ff93; -[GTLRQuery setUseMediaDownloadService:] */

void FUN_104a0ff8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 104a0ff94; end: 104a1006b; -[GTLRQuery .cxx_destruct] */

void FUN_104a0ff94(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a1006c; end: 104a103bf; +[GTLRRuntimeCommon objectFromJSON:defaultClass:objectClassResolver:isCacheable:] */

void FUN_104a1006c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
                  undefined1 *param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined1 uVar13;
  undefined **unaff_x19;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined1 uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar17;
  long unaff_x28;
  undefined **ppuVar18;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined auStack_230 [128];
  long lStack_1b0;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar10 = param_5;
  ppuVar12 = param_6;
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  ppuVar14 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  ppuVar15 = param_3;
  if ((int)ppuVar14 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar14 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)ppuVar14 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar4 = param_3;
      func_0x00010c075f00(param_3,param_2,puVar1);
      ppuVar14 = param_3;
      if ((int)ppuVar4 != 0) {
        puVar1 = PTR_PTR_1126ae0f8;
        func_0x00010bf39c40(PTR_PTR_1126ae0f8);
        puVar5 = param_4;
        func_0x00010c071ae0(param_4,param_2,puVar1);
        if ((int)puVar5 == 0) {
          unaff_x19 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          puVar1 = PTR_PTR_1126ae100;
          func_0x00010bf39c40(PTR_PTR_1126ae100);
          puVar5 = param_4;
          func_0x00010c071ae0(param_4,param_2,puVar1);
          if ((int)puVar5 == 0) {
            ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf39c40();
            puVar1 = param_4;
            func_0x00010c071ae0();
            if ((int)puVar1 == 0) goto LAB_104a103a4;
            FUN_104a1cc24();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104a103ac;
          }
          ppuVar14 = (undefined **)PTR_PTR_1126ae100;
          func_0x00010bf8b4c0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar14 = (undefined **)PTR_PTR_1126ae0f8;
          func_0x00010bf65520();
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_104a1012c;
      }
      ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf39c40();
      ppuVar4 = param_3;
      func_0x00010c075f00();
      if (((ulong)ppuVar4 & 1) != 0) {
LAB_104a103a4:
        _objc_retain();
LAB_104a103ac:
        uVar13 = 0;
        goto joined_r0x000104a1025c;
      }
      ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010bf39c40();
      ppuVar4 = param_3;
      func_0x00010c075f00();
      if ((int)ppuVar4 != 0) goto LAB_104a103a4;
      ppuVar14 = (undefined **)0x0;
      goto LAB_104a10130;
    }
    ppuVar4 = param_3;
    ppuStack_138 = param_6;
    _objc_retain();
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuVar15 = ppuVar4;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(ppuVar14,param_2,ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    ppuVar15 = &puStack_130;
    puVar2 = auStack_f0;
    puVar10 = (undefined1 *)0x10;
    ppuVar3 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      unaff_x28 = *plStack_120;
      do {
        unaff_x19 = (undefined **)0x0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(ppuVar4);
          }
          ppuVar12 = (undefined **)0x0;
          unaff_x27 = param_1;
          func_0x00010c0e0140(param_1,param_2,*(undefined8 *)(lStack_128 + (long)unaff_x19 * 8),
                              param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar14,param_2,unaff_x27);
          _objc_release(unaff_x27);
          unaff_x19 = (undefined **)((long)unaff_x19 + 1);
        } while (ppuVar3 != unaff_x19);
        ppuVar15 = &puStack_130;
        puVar2 = auStack_f0;
        puVar10 = (undefined1 *)0x10;
        ppuVar3 = ppuVar4;
        func_0x00010bf52a60();
        unaff_x26 = 0;
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar4);
    uVar13 = 1;
    param_6 = ppuStack_138;
  }
  else {
    if (param_4 == (undefined *)0x0) {
LAB_104a10104:
      param_4 = PTR_PTR_1126ae0f0;
      func_0x00010bf39c40();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
      puVar1 = param_4;
      func_0x00010c071ae0(param_4,param_2,puVar2);
      if ((int)puVar1 != 0) goto LAB_104a10104;
    }
    ppuVar14 = (undefined **)PTR_PTR_1126ae0f0;
    puVar2 = param_4;
    puVar10 = param_5;
    func_0x00010c0dfee0();
    _objc_retainAutoreleasedReturnValue();
LAB_104a1012c:
    unaff_x19 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
LAB_104a10130:
    uVar13 = 1;
  }
joined_r0x000104a1025c:
  if (param_6 != (undefined **)0x0) {
    *(undefined1 *)param_6 = uVar13;
  }
  _objc_release(param_5);
  ppuVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar9 = &uStack_270;
  pcStack_148 = FUN_104a103c0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar2;
  puVar11 = puVar10;
  lStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  ppuStack_188 = param_6;
  uStack_180 = param_1;
  ppuStack_178 = ppuVar14;
  puStack_170 = param_4;
  puStack_168 = param_5;
  ppuStack_160 = param_3;
  ppuStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar3 = ppuVar15;
  func_0x00010c075f00(ppuVar15,param_2,puVar5);
  ppuVar14 = ppuVar15;
  if ((int)ppuVar3 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar3 = ppuVar15;
    func_0x00010c075f00(ppuVar15,param_2,puVar5);
    if (((ulong)ppuVar3 & 1) != 0) {
LAB_104a10468:
      _objc_retain();
      goto LAB_104a10470;
    }
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
    ppuVar3 = ppuVar15;
    func_0x00010c075f00(ppuVar15,param_2,puVar5);
    if ((int)ppuVar3 != 0) goto LAB_104a10468;
    puVar5 = PTR_PTR_1126ae0f0;
    func_0x00010bf39c40(PTR_PTR_1126ae0f0);
    ppuVar3 = ppuVar15;
    func_0x00010c075f00(ppuVar15,param_2,puVar5);
    if ((int)ppuVar3 != 0) {
      func_0x00010bdc18a0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar14 == (undefined **)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010c1b64e0(ppuVar15,param_2,puVar6);
        _objc_release(puVar6);
        ppuVar14 = ppuVar15;
        func_0x00010bdc18a0();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_104a106ac:
      uVar16 = 1;
      uVar13 = 1;
      if (puVar2 == (undefined *)0x0) goto LAB_104a106b8;
      goto LAB_104a1047c;
    }
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar3 = ppuVar15;
    func_0x00010c075f00(ppuVar15,param_2,puVar5);
    if ((int)ppuVar3 == 0) {
      puVar5 = PTR_PTR_1126ae0f8;
      func_0x00010bf39c40(PTR_PTR_1126ae0f8);
      ppuVar4 = ppuVar15;
      func_0x00010c075f00(ppuVar15,param_2,puVar5);
      if ((int)ppuVar4 == 0) {
        puVar5 = PTR_PTR_1126ae100;
        func_0x00010bf39c40(PTR_PTR_1126ae100);
        ppuVar4 = ppuVar15;
        func_0x00010c075f00(ppuVar15,param_2,puVar5);
        if ((int)ppuVar4 == 0) {
          ppuVar14 = (undefined **)0x0;
          goto LAB_104a10648;
        }
        func_0x00010c086000();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bdc1ec0();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104a106ac;
    }
    ppuVar3 = ppuVar15;
    _objc_retain();
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuVar7 = ppuVar3;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(ppuVar14,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain();
    puVar1 = auStack_230;
    puVar11 = (undefined1 *)0x10;
    ppuVar7 = ppuVar3;
    func_0x00010bf52a60();
    if (ppuVar7 != (undefined **)0x0) {
      lVar17 = *plStack_260;
      do {
        ppuVar18 = (undefined **)0x0;
        do {
          if (*plStack_260 != lVar17) {
            _objc_enumerationMutation(ppuVar3);
          }
          ppuVar8 = ppuVar4;
          func_0x00010c085f20(ppuVar4,param_2,*(undefined8 *)(lStack_268 + (long)ppuVar18 * 8),
                              puVar2,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar14,param_2,ppuVar8);
          _objc_release(ppuVar8);
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        } while (ppuVar7 != ppuVar18);
        puVar1 = auStack_230;
        puVar11 = (undefined1 *)0x10;
        ppuVar7 = ppuVar3;
        puVar9 = &uStack_270;
        func_0x00010bf52a60(ppuVar3,param_2,&uStack_270,puVar1,0x10);
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    puVar5 = (undefined *)puVar9;
LAB_104a10648:
    uVar16 = 1;
  }
  else {
    func_0x00010bf51e00();
LAB_104a10470:
    uVar16 = 0;
    uVar13 = 0;
    if (puVar2 != (undefined *)0x0) {
LAB_104a1047c:
      uVar16 = uVar13;
      puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
      puVar6 = puVar2;
      func_0x00010c071ae0(puVar2,param_2,puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
        ppuVar4 = ppuVar15;
        func_0x00010c075f00(ppuVar15,param_2,puVar5);
        if ((puVar2 != (undefined *)0x0) && (((ulong)ppuVar4 & 1) == 0)) {
          func_0x00010c075f00(ppuVar15,param_2,puVar2);
          puVar5 = puVar2;
        }
      }
    }
  }
LAB_104a106b8:
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = uVar16;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  ppuVar14 = ppuVar12;
  func_0x00010c0dff20(ppuVar12,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar14 == (undefined **)0x0) {
    puVar2 = puVar1;
    func_0x00010c0f8ec0(puVar1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c071ae0(puVar1,param_2,puVar11);
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = puVar1;
      _class_getSuperclass(puVar1);
      func_0x00010c0cada0(ppuVar15,param_2,puVar5,puVar6,puVar11,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar15 == (undefined **)0x0) goto LAB_104a107e4;
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,ppuVar15);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_104a107e4:
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)0x0;
    }
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bef7f60(puVar5,param_2,puVar2);
    }
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(ppuVar12,param_2,ppuVar14,puVar1);
    _objc_release(puVar5);
    _objc_release(ppuVar15);
    _objc_release(puVar2);
  }
  _objc_sync_exit(ppuVar12);
  _objc_release(ppuVar12);
  _objc_release(ppuVar12);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return;
}



/* Entry: 104a103c0; end: 104a1070f; +[GTLRRuntimeCommon jsonFromAPIObject:expectedClass:isCacheable:] */

void FUN_104a103c0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined1 *param_5,undefined *param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_4;
  puVar6 = param_5;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  puVar7 = param_3;
  if ((int)puVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar3 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
LAB_104a10468:
      _objc_retain();
      goto LAB_104a10470;
    }
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
    puVar3 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)puVar3 != 0) goto LAB_104a10468;
    puVar2 = PTR_PTR_1126ae0f0;
    func_0x00010bf39c40(PTR_PTR_1126ae0f0);
    puVar3 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)puVar3 != 0) {
      func_0x00010bdc18a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar7;
        func_0x00010c1b64e0(param_3,param_2,puVar7);
        _objc_release(puVar7);
        puVar7 = param_3;
        func_0x00010bdc18a0();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_104a106ac:
      uVar8 = 1;
      uVar1 = 1;
      if (param_4 == (undefined *)0x0) goto LAB_104a106b8;
      goto LAB_104a1047c;
    }
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)puVar3 == 0) {
      puVar2 = PTR_PTR_1126ae0f8;
      func_0x00010bf39c40(PTR_PTR_1126ae0f8);
      puVar3 = param_3;
      func_0x00010c075f00(param_3,param_2,puVar2);
      if ((int)puVar3 == 0) {
        puVar2 = PTR_PTR_1126ae100;
        func_0x00010bf39c40(PTR_PTR_1126ae100);
        puVar3 = param_3;
        func_0x00010c075f00(param_3,param_2,puVar2);
        if ((int)puVar3 == 0) {
          puVar7 = (undefined *)0x0;
          goto LAB_104a10648;
        }
        func_0x00010c086000();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bdc1ec0();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104a106ac;
    }
    puVar2 = param_3;
    _objc_retain();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar10 = puVar2;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(puVar7,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    puVar10 = auStack_f0;
    puVar6 = (undefined1 *)0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          uVar4 = param_1;
          func_0x00010c085f20(param_1,param_2,*(undefined8 *)(lStack_128 + (long)puVar10 * 8),
                              param_4,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7,param_2,uVar4);
          _objc_release(uVar4);
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar10 = auStack_f0;
        puVar6 = (undefined1 *)0x10;
        puVar3 = puVar2;
        puVar5 = &uStack_130;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,puVar10,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar2 = (undefined *)puVar5;
LAB_104a10648:
    uVar8 = 1;
  }
  else {
    func_0x00010bf51e00();
LAB_104a10470:
    uVar8 = 0;
    uVar1 = 0;
    if (param_4 != (undefined *)0x0) {
LAB_104a1047c:
      uVar8 = uVar1;
      puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
      puVar3 = param_4;
      func_0x00010c071ae0(param_4,param_2,puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
        puVar3 = param_3;
        func_0x00010c075f00(param_3,param_2,puVar2);
        if ((param_4 != (undefined *)0x0) && (((ulong)puVar3 & 1) == 0)) {
          func_0x00010c075f00(param_3,param_2,param_4);
          puVar2 = param_4;
        }
      }
    }
  }
LAB_104a106b8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  puVar7 = param_6;
  func_0x00010c0dff20(param_6,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar3 = puVar10;
    func_0x00010c0f8ec0(puVar10,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010c071ae0(puVar10,param_2,puVar6);
    if (((ulong)puVar7 & 1) == 0) {
      puVar7 = puVar10;
      _class_getSuperclass(puVar10);
      func_0x00010c0cada0(param_3,param_2,puVar2,puVar7,puVar6,param_6);
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == (undefined *)0x0) goto LAB_104a107e4;
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_104a107e4:
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      param_3 = (undefined *)0x0;
    }
    if (puVar3 != (undefined *)0x0) {
      func_0x00010bef7f60(puVar2,param_2,puVar3);
    }
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(param_6,param_2,puVar7,puVar10);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puVar3);
  }
  _objc_sync_exit(param_6);
  _objc_release(param_6);
  _objc_release(param_6);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104a10710; end: 104a108ab; +[GTLRRuntimeCommon mergedClassDictionaryForSelector:startClass:ancestorClass:cache:] */

void FUN_104a10710(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  puVar1 = param_6;
  func_0x00010c0dff20(param_6,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) goto LAB_104a10854;
  uVar2 = param_4;
  func_0x00010c0f8ec0(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c071ae0(param_4,param_2,param_5);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_4;
    _class_getSuperclass(param_4);
    func_0x00010c0cada0(param_1,param_2,param_3,uVar3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) goto LAB_104a107e4;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_104a107e4:
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
  }
  if (uVar2 != 0) {
    func_0x00010bef7f60(puVar4,param_2,uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_6,param_2,puVar1,param_4);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar2);
LAB_104a10854:
  _objc_sync_exit(param_6);
  _objc_release(param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a108ac; end: 104a1126f; +[GTLRRuntimeCommon resolveInstanceMethod:onClass:] */

undefined **
FUN_104a108ac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  puVar18 = param_3;
  _sel_getName();
  puVar3 = puVar18;
  _strlen();
  cVar2 = (puVar18 + (long)puVar3)[-1];
  puVar3 = param_3;
  _sel_getName();
  puVar4 = puVar3;
  _strlen();
  puVar18 = puVar4 + -4;
  if (cVar2 != ':') {
    puVar18 = puVar4;
  }
  lVar17 = 3;
  if (cVar2 != ':') {
    lVar17 = 0;
  }
  ppuVar5 = param_4;
  func_0x00010bf02900();
  _class_getSuperclass();
  if (ppuVar5 != param_4) {
    puVar4 = puVar3 + lVar17;
    do {
      ppuVar15 = param_4;
      _class_copyPropertyList(param_4,0);
      if (ppuVar15 != (undefined **)0x0) {
        puVar6 = *ppuVar15;
        ppuVar10 = ppuVar15;
        while (puVar6 != (undefined *)0x0) {
          _property_getAttributes();
          puVar7 = puVar6;
          _strstr();
          if ((puVar7 != (undefined *)0x0) && (puVar7[2] == ',' || puVar7[2] == '\0')) {
            if ((cVar2 == ':') || (_strstr(puVar6,",G"), puVar6 == (undefined *)0x0)) {
LAB_104a109e0:
              puVar7 = *ppuVar10;
              _property_getName();
              puVar6 = puVar7;
              _strlen();
              if ((puVar18 != puVar6) ||
                 (puVar6 = puVar4, _strncasecmp(puVar4,puVar7,1), (int)puVar6 != 0))
              goto LAB_104a10a28;
              if ((undefined *)0x1 < puVar18) {
                puVar6 = puVar4 + 1;
                _strncmp(puVar6,puVar7 + 1,puVar18 + -1);
                if ((int)puVar6 != 0) goto LAB_104a10a28;
              }
            }
            else {
              for (lVar17 = 0; (cVar1 = (puVar6 + 2)[lVar17], cVar1 != '\0' && (cVar1 != ','));
                  lVar17 = lVar17 + 1) {
              }
              puVar7 = puVar3;
              _strncmp(puVar3,puVar6 + 2,lVar17);
              if (((int)puVar7 != 0) || (puVar3[lVar17] != '\0')) goto LAB_104a109e0;
            }
            puVar6 = *ppuVar10;
            _free(ppuVar15);
            if (puVar6 != (undefined *)0x0) {
              if (param_4 == (undefined **)0x0) {
                return (undefined **)0x0;
              }
              if ((bRam00000001136a0578 & 1) == 0) {
                bRam00000001136a0578 = 1;
                plVar14 = (long *)0x1130a48c8;
                lVar17 = 0xc;
                do {
                  lVar8 = *plVar14;
                  if (lVar8 != 0) {
                    _objc_getClass();
                    plVar14[1] = lVar8;
                    if (lVar8 == 0) {
                      FUN_104a1cdec(plVar14);
                    }
                  }
                  plVar14 = plVar14 + 7;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
              }
              puVar18 = puVar6;
              _property_getAttributes();
              puVar3 = puVar18;
              _strstr();
              if (puVar3 == (undefined *)0x0) {
                return (undefined **)0x0;
              }
              if (puVar3[2] != ',' && puVar3[2] != '\0') {
                return (undefined **)0x0;
              }
              ppuVar5 = &PTR_s_Tq_1130a48a8;
              lVar17 = 0xc;
              while( true ) {
                puVar7 = *ppuVar5;
                puVar3 = puVar7;
                _strlen(puVar7);
                puVar4 = puVar18;
                _strncmp(puVar18,puVar7,puVar3);
                if ((int)puVar4 == 0) break;
                ppuVar5 = ppuVar5 + 7;
                lVar17 = lVar17 + -1;
                if (lVar17 == 0) {
                  return (undefined **)0x0;
                }
              }
              ppuVar15 = (undefined **)ppuVar5[5];
              if (*(char *)(ppuVar5 + 6) == '\x01') {
                _strdup();
                puVar9 = puVar18 + 3;
                _strchr(puVar9,0x22);
                if (puVar9 != (undefined1 *)0x0) {
                  *puVar9 = 0;
                  ppuVar15 = (undefined **)(puVar18 + 3);
                  _objc_getClass();
                }
                _free(puVar18);
              }
              _property_getName(puVar6);
              ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = param_4;
              func_0x00010bf02900();
              func_0x00010c118d80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar11;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar12 == (undefined **)0x0) {
                ppuVar12 = ppuVar10;
                _objc_retain();
              }
              if (ppuVar5[1] == (undefined *)0xc) {
                ppuVar13 = param_4;
                func_0x00010bf02900();
                func_0x00010bf0a060();
                _objc_retainAutoreleasedReturnValue();
                ppuVar16 = ppuVar13;
                func_0x00010c0dff20();
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(ppuVar13);
              }
              else {
                ppuVar16 = (undefined **)0x0;
              }
              puVar18 = ppuVar5[1];
              if (cVar2 != ':') {
                ppuVar13 = ppuVar12;
                _objc_retain();
                if ((long)puVar18 < 9) {
                  if (5 < (long)puVar18) {
                    if (puVar18 == (undefined *)0x6) {
                      pcStack_80 = (code *)0x104a11a50;
                      puStack_78 = &UNK_1107be2c0;
                    }
                    else if (puVar18 == (undefined *)0x7) {
                      pcStack_80 = FUN_104a11ab8;
                      puStack_78 = &UNK_1107be2f0;
                    }
                    else {
                      if (puVar18 != (undefined *)0x8) goto LAB_104a11230;
                      pcStack_80 = FUN_104a11afc;
                      puStack_78 = &UNK_1107be320;
                    }
LAB_104a111f8:
                    uStack_88 = 0xc2000000;
                    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                    ppuVar15 = ppuVar13;
                    _objc_retain();
                    ppuStack_70 = ppuVar15;
                    goto LAB_104a11208;
                  }
                  if (puVar18 == (undefined *)0x3) {
                    pcStack_80 = FUN_104a11928;
                    puStack_78 = &UNK_1107be230;
                    goto LAB_104a111f8;
                  }
                  if (puVar18 == (undefined *)0x4) {
                    pcStack_80 = (code *)0x104a11988;
                    puStack_78 = &UNK_1107be260;
                    goto LAB_104a111f8;
                  }
                  if (puVar18 == (undefined *)0x5) {
                    pcStack_80 = FUN_104a119e8;
                    puStack_78 = &UNK_1107be290;
                    goto LAB_104a111f8;
                  }
                }
                else {
                  if ((long)puVar18 < 0xc) {
                    if (puVar18 == (undefined *)0x9) {
                      pcStack_80 = FUN_104a11d18;
                      puStack_78 = &UNK_1107be3b0;
                    }
                    else if (puVar18 == (undefined *)0xa) {
                      pcStack_80 = FUN_104a11b08;
                      puStack_78 = &UNK_1107be350;
                    }
                    else {
                      if (puVar18 != (undefined *)0xb) goto LAB_104a11230;
                      pcStack_80 = (code *)0x104a11c10;
                      puStack_78 = &UNK_1107be380;
                    }
                    goto LAB_104a111f8;
                  }
                  if (puVar18 == (undefined *)0xc) {
                    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_88 = 0xc2000000;
                    pcStack_80 = (code *)0x104a11ec0;
                    puStack_78 = &UNK_1107be410;
                    ppuVar15 = ppuVar13;
                    _objc_retain();
                    ppuStack_70 = ppuVar15;
                    ppuStack_68 = ppuVar16;
                  }
                  else {
                    if (puVar18 == (undefined *)0xd) {
                      pcStack_80 = (code *)0x104a11fe0;
                      puStack_78 = &UNK_1107be440;
                      goto LAB_104a111f8;
                    }
                    if (puVar18 != (undefined *)0xe) goto LAB_104a11230;
                    if (ppuVar15 == (undefined **)0x0) {
                      ppuVar15 = (undefined **)PTR_PTR_1126ae0f0;
                      func_0x00010bf39c40();
                    }
                    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_88 = 0xc2000000;
                    pcStack_80 = FUN_104a11d64;
                    puStack_78 = &UNK_1107be3e0;
                    ppuVar16 = ppuVar13;
                    _objc_retain();
                    ppuStack_70 = ppuVar16;
                    ppuStack_68 = ppuVar15;
                  }
LAB_104a11208:
                  ppuVar15 = &puStack_90;
                  _objc_retainBlock(ppuVar15);
                  ppuVar16 = ppuVar15;
                  _imp_implementationWithBlock();
                  _objc_release(ppuVar15);
                  _objc_release(ppuStack_70);
                }
LAB_104a11230:
                _objc_release(ppuVar13);
                lVar17 = 0x18;
                goto LAB_104a1123c;
              }
              ppuVar15 = ppuVar12;
              _objc_retain();
              if ((long)puVar18 < 9) {
                if (5 < (long)puVar18) {
                  if (puVar18 == (undefined *)0x6) {
                    pcStack_80 = (code *)0x104a113c8;
                    puStack_78 = &UNK_1107be080;
                  }
                  else if (puVar18 == (undefined *)0x7) {
                    pcStack_80 = FUN_104a11440;
                    puStack_78 = &UNK_1107be0b0;
                  }
                  else {
                    if (puVar18 != (undefined *)0x8) goto LAB_104a111c0;
                    pcStack_80 = FUN_104a11468;
                    puStack_78 = &UNK_1107be0e0;
                  }
                  goto LAB_104a1118c;
                }
                if (puVar18 == (undefined *)0x3) {
                  pcStack_80 = FUN_104a11270;
                  puStack_78 = &UNK_1107bdff0;
                  goto LAB_104a1118c;
                }
                if (puVar18 == (undefined *)0x4) {
                  pcStack_80 = (code *)0x104a112e0;
                  puStack_78 = &UNK_1107be020;
                  goto LAB_104a1118c;
                }
                if (puVar18 == (undefined *)0x5) {
                  pcStack_80 = FUN_104a11350;
                  puStack_78 = &UNK_1107be050;
                  goto LAB_104a1118c;
                }
              }
              else {
                if ((long)puVar18 < 0xc) {
                  if (puVar18 == (undefined *)0x9) {
                    pcStack_80 = FUN_104a11684;
                    puStack_78 = &UNK_1107be170;
                  }
                  else if (puVar18 == (undefined *)0xa) {
                    pcStack_80 = FUN_104a114c4;
                    puStack_78 = &UNK_1107be110;
                  }
                  else {
                    if (puVar18 != (undefined *)0xb) goto LAB_104a111c0;
                    pcStack_80 = (code *)0x104a115a4;
                    puStack_78 = &UNK_1107be140;
                  }
                }
                else if (puVar18 == (undefined *)0xc) {
                  pcStack_80 = (code *)0x104a117cc;
                  puStack_78 = &UNK_1107be1d0;
                  ppuStack_68 = ppuVar16;
                }
                else if (puVar18 == (undefined *)0xd) {
                  pcStack_80 = FUN_104a11874;
                  puStack_78 = &UNK_1107be200;
                }
                else {
                  if (puVar18 != (undefined *)0xe) goto LAB_104a111c0;
                  pcStack_80 = FUN_104a11690;
                  puStack_78 = &UNK_1107be1a0;
                }
LAB_104a1118c:
                uStack_88 = 0xc2000000;
                puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                ppuVar13 = &puStack_90;
                ppuVar16 = ppuVar15;
                _objc_retain();
                ppuStack_70 = ppuVar16;
                _objc_retainBlock(ppuVar13);
                ppuVar16 = ppuVar13;
                _imp_implementationWithBlock();
                _objc_release(ppuVar13);
                _objc_release(ppuStack_70);
              }
LAB_104a111c0:
              _objc_release(ppuVar15);
              lVar17 = 0x10;
LAB_104a1123c:
              _class_addMethod(param_4,param_3,ppuVar16,*(undefined8 *)((long)ppuVar5 + lVar17));
              _objc_release(ppuVar12);
              _objc_release(ppuVar11);
              _objc_release(ppuVar10);
              return param_4;
            }
            goto LAB_104a10a3c;
          }
LAB_104a10a28:
          ppuVar10 = ppuVar10 + 1;
          puVar6 = *ppuVar10;
        }
        _free(ppuVar15);
      }
LAB_104a10a3c:
      _class_getSuperclass();
    } while (param_4 != ppuVar5);
  }
  return (undefined **)0x0;
}



/* Entry: 104a11270; end: 104a1134f;  */

void FUN_104a11270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6500(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a11350; end: 104a1143f;  */

void FUN_104a11350(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df740(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6500(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a11440; end: 104a11467;  */

void FUN_104a11440(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)PTR__kCFBooleanTrue_11034ab90;
  if (param_3 == 0) {
    puVar1 = (undefined8 *)PTR__kCFBooleanFalse_11034ab88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setJSONValue_forKey__11264b368,*puVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a11468; end: 104a114c3;  */

void FUN_104a11468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  func_0x00010bf51e00(param_3);
  func_0x00010c1b6500(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a114c4; end: 104a11683;  */

void FUN_104a114c4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_2);
  func_0x00010bf39c40(puVar1);
  puVar1 = param_3;
  func_0x00010c075f00();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_3;
    func_0x00010bdc1ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    _objc_retain(param_3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
  }
  func_0x00010c1b6500(param_2);
  func_0x00010c175040(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a11684; end: 104a1168f;  */

void FUN_104a11684(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setJSONValue_forKey__11264b368,param_3,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a11690; end: 104a11873;  */

void FUN_104a11690(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_2);
  func_0x00010bf39c40(puVar1);
  puVar1 = param_3;
  func_0x00010c075f00();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_3;
    func_0x00010bdc18a0();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == (undefined *)0x0) || (puVar1 != (undefined *)0x0)) {
      puVar2 = puVar1;
      _objc_retain(puVar1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64e0(param_3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bdc18a0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = param_3;
    _objc_retain(param_3);
    _objc_release(puVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
  }
  func_0x00010c1b6500(param_2);
  func_0x00010c175040(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a11874; end: 104a11927;  */

void FUN_104a11874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae120;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c085f20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6500(param_2);
  func_0x00010c175040(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104a11928; end: 104a119e7;  */

undefined8 FUN_104a11928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bdc1a00(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_104a1cc24();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0b4ca0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104a119e8; end: 104a11ab7;  */

undefined4 FUN_104a119e8(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bdc1a00(param_3,param_3,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_104a1cc24();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfb2c80(uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104a11ab8; end: 104a11afb;  */

undefined8 FUN_104a11ab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdc1a00(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104a11afc; end: 104a11b07;  */

void FUN_104a11afc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_JSONValueForKey__11254e020,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a11b08; end: 104a11d17;  */

void FUN_104a11b08(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = param_2;
  func_0x00010bf26400();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010bdc1a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
    puVar3 = puVar2;
    func_0x00010c075f00();
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR_PTR_1126ae0f8;
      func_0x00010bf65520(PTR_PTR_1126ae0f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar4 = puVar3;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined *)0x0;
    }
    func_0x00010c175040(param_2);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    puVar3 = puVar1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a11d18; end: 104a11d63;  */

void FUN_104a11d18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdc1a00(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_104a1cc24();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a11d64; end: 104a120e7;  */

void FUN_104a11d64(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = param_2;
  func_0x00010bf26400();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010bdc1a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar4 = puVar2;
    func_0x00010c075f00();
    if ((int)puVar4 == 0) {
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
      puVar4 = puVar2;
      func_0x00010c075f00();
      if ((int)puVar4 == 0) {
        if (puVar2 == (undefined *)0x0) {
          puVar4 = (undefined *)0x0;
        }
        else {
          puVar4 = puVar2;
          _objc_retain(puVar2);
        }
      }
      else {
        func_0x00010c175040(param_2);
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar3 = param_2;
      func_0x00010c0dfde0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae0f0;
      func_0x00010c0dfee0(PTR_PTR_1126ae0f0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c175040(param_2);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  else {
    puVar4 = puVar1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a120e8; end: 104a120ef; -[GTLRBatchResponsePart contentID] */

undefined8 FUN_104a120e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a120f0; end: 104a120f7; -[GTLRBatchResponsePart setContentID:] */

void FUN_104a120f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a120f8; end: 104a120ff; -[GTLRBatchResponsePart headers] */

undefined8 FUN_104a120f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a12100; end: 104a1210b; -[GTLRBatchResponsePart setHeaders:] */

void FUN_104a12100(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104a1210c; end: 104a12113; -[GTLRBatchResponsePart JSON] */

undefined8 FUN_104a1210c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a12114; end: 104a1211f; -[GTLRBatchResponsePart setJSON:] */

void FUN_104a12114(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104a12120; end: 104a12127; -[GTLRBatchResponsePart parseError] */

undefined8 FUN_104a12120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a12128; end: 104a12133; -[GTLRBatchResponsePart setParseError:] */

void FUN_104a12128(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104a12134; end: 104a1213b; -[GTLRBatchResponsePart statusCode] */

undefined8 FUN_104a12134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a1213c; end: 104a12143; -[GTLRBatchResponsePart setStatusCode:] */

void FUN_104a1213c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 104a12144; end: 104a1214b; -[GTLRBatchResponsePart statusString] */

undefined8 FUN_104a12144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a1214c; end: 104a12153; -[GTLRBatchResponsePart setStatusString:] */

void FUN_104a1214c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a12154; end: 104a121a7; -[GTLRBatchResponsePart .cxx_destruct] */

void FUN_104a12154(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a121a8; end: 104a123a7; -[GTLRService requestUserAgent] */

void FUN_104a121a8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  if (puVar1 != (undefined *)0x0) {
    _objc_retain();
    goto LAB_104a12388;
  }
  puVar2 = param_1;
  func_0x00010c291200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar4 = puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010bf249e0(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
LAB_104a12254:
      puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x00010c0b6660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      puVar3 = puVar1;
      func_0x00010bf24a60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      puVar3 = puVar1;
      if ((int)puVar4 != 0) goto LAB_104a12254;
    }
    puVar4 = puVar3;
    FUN_104a57e7c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_retain();
  puVar2 = puVar4;
  func_0x00010c11f440();
  puVar1 = puVar4;
  if (puVar2 == (undefined *)0x7fffffffffffffff) {
    func_0x000104a0cfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_104a57b2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c291240();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db2d98;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db2d98,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da6d78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar5);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
LAB_104a12388:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a123a8; end: 104a1240f; -[GTLRService setMainBundleIDRestrictionWithAPIKey:] */

void FUN_104a123a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c160920();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160940(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a12410; end: 104a1255b; -[GTLRService requestForURL:ETag:httpMethod:ticket:completion:] */

void FUN_104a12410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104a1255c;
  puStack_78 = &UNK_1107be480;
  lStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_90);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a1255c; end: 104a12643;  */

void FUN_104a1255c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf58600(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a12644; end: 104a127d7; -[GTLRService createRequestForURL:ETag:httpMethod:ticket:] */

void FUN_104a12644(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _dispatch_assert_queue_V2(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8);
  func_0x00010c057900(0x404e000000000000);
  _objc_release(param_3);
  func_0x00010c136f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110e2d8f8);
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1a4fc0(puVar1,param_2,param_5);
  }
  uVar3 = param_4;
  func_0x00010c08fa60();
  if (uVar3 == 0) goto LAB_104a127a8;
  if ((param_5 == 0) ||
     (lVar2 = param_5,
     func_0x00010bf32ee0(param_5,param_2,&PTR____CFConstantStringClassReference_110deec98),
     lVar2 == 0)) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110ea5298;
  }
  else {
    uVar3 = param_4;
    func_0x00010bfda7c0(param_4,param_2,&PTR____CFConstantStringClassReference_110da6d98);
    lVar2 = param_5;
    func_0x00010bf32ee0(param_5,param_2,&PTR____CFConstantStringClassReference_110deecb8);
    if ((lVar2 == 0) ||
       (lVar2 = param_5,
       func_0x00010bf32ee0(param_5,param_2,&PTR____CFConstantStringClassReference_110deecd8),
       lVar2 == 0)) {
      if ((uVar3 & 1) != 0) goto LAB_104a127a8;
    }
    else {
      lVar2 = param_5;
      func_0x00010bf32ee0(param_5,param_2,&PTR____CFConstantStringClassReference_110f79bb8);
      if (lVar2 != 0 || (uVar3 & 1) != 0) goto LAB_104a127a8;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110da6db8;
  }
  func_0x00010c2201e0(puVar1,param_2,param_4,ppuVar4);
LAB_104a127a8:
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a127d8; end: 104a129bb; -[GTLRService objectRequestForURL:object:contentType:contentLength:ETag:httpMethod:additionalHeaders:ticket:completion:] */

void FUN_104a127d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain();
  if ((param_4 != 0) && (param_7 == 0)) {
    func_0x00010bdc18a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    param_7 = param_4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104a129bc;
  puStack_90 = &UNK_1107be4b0;
  uStack_88 = param_1;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_9;
  uStack_68 = param_11;
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c135560(param_1,param_2,param_3,param_7,param_8,param_10,&puStack_a8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 104a129bc; end: 104a12a27;  */

void FUN_104a129bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfd2480(uVar1);
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a12a28; end: 104a12ab3;  */

void FUN_104a12a28(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  return;
}



/* Entry: 104a12ab4; end: 104a12d6f; -[GTLRService handleRequestCompletion:contentType:contentLength:additionalHeaders:] */

void FUN_104a12ab4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  puVar3 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010c2201e0(param_3);
  func_0x00010c2201e0(param_3);
  func_0x00010c2201e0(param_3);
  if (param_5 != 0) {
    func_0x00010c2201e0(param_3);
  }
  func_0x00010befcfe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = param_1;
        func_0x00010c0dff20(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2201e0(param_3);
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_retain();
  _objc_release(param_1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain();
  lVar1 = param_6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_1e0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1e0 != lVar6) {
          _objc_enumerationMutation(param_6);
        }
        lVar2 = param_6;
        func_0x00010c0dff20(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2201e0(param_3);
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_6;
      puVar3 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_104a12d70;
  lStack_220 = param_6;
  lStack_218 = param_5;
  uStack_210 = param_4;
  lStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _dispatch_assert_queue_not_V2(*(undefined8 *)(lVar1 + 0x28));
  uVar4 = 0;
  _dispatch_semaphore_create();
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x3032000000;
  pcStack_238 = FUN_104a12e9c;
  uStack_230 = 0x104a12eac;
  uStack_228 = 0;
  _objc_retain();
  func_0x00010c135540(lVar1);
  _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
  uVar5 = puStack_248[5];
  _objc_retain(uVar5);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_250,8);
  _objc_release(uStack_228);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104a12d70; end: 104a12e9b; -[GTLRService requestForQuery:] */

void FUN_104a12d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _dispatch_assert_queue_not_V2(*(undefined8 *)(param_1 + 0x28));
  uVar1 = 0;
  _dispatch_semaphore_create();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104a12e9c;
  uStack_40 = 0x104a12eac;
  uStack_38 = 0;
  _objc_retain();
  func_0x00010c135540(param_1);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a12e9c; end: 104a12eb3;  */

void FUN_104a12e9c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104a12eb4; end: 104a12f5b;  */

void FUN_104a12eb4(long param_1,undefined8 param_2)

{
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(param_2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a12f5c; end: 104a12fd7; -[GTLRService requestForQuery:completion:] */

void FUN_104a12f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf28660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135540(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a12fd8; end: 104a13203; -[GTLRService requestForQuery:completionQueue:completion:] */

void FUN_104a12fd8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bdc2f40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bdc0d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar5 = puVar1;
  if (puVar3 != (undefined *)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dc1758;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae140;
    puVar4 = puVar1;
    func_0x00010beec820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc34a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  uVar6 = param_3;
  func_0x00010bfe4c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104a13204;
  puStack_a0 = &UNK_1107be540;
  puStack_98 = param_1;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain();
  func_0x00010c135560(param_1);
  _objc_release(uVar6);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104a13204;
  uStack_f0 = param_3;
  puStack_e8 = param_1;
  puStack_e0 = puVar5;
  puStack_d8 = puVar2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x00010bfd24a0(*(undefined8 *)(puVar1 + 0x20));
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_104a132b0;
  puStack_108 = &UNK_1107be510;
  uVar6 = *(undefined8 *)(puVar1 + 0x30);
  uVar7 = *(undefined8 *)(puVar1 + 0x38);
  _objc_retain();
  uStack_100 = param_2;
  uStack_f8 = uVar7;
  _objc_retain(param_2);
  func_0x00010007380c(uVar6,&puStack_120);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(param_2);
  return;
}



/* Entry: 104a13204; end: 104a132af;  */

void FUN_104a13204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x00010bfd24a0(*(undefined8 *)(param_1 + 0x20));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104a132b0;
  puStack_48 = &UNK_1107be510;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  uStack_40 = param_2;
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104a132b0; end: 104a132bf;  */

void FUN_104a132b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a132bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a132c0; end: 104a13397;  */

void FUN_104a132c0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}


