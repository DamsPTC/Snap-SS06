/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7ceb74; end: 10b7ceb7b; -[PINCache setName:] */

void FUN_10b7ceb74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b7ceb7c; end: 10b7ceb83; -[PINCache operationQueue] */

undefined8 FUN_10b7ceb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7ceb84; end: 10b7cebb3; -[PINCache setOperationQueue:] */

void FUN_10b7ceb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7cebb4; end: 10b7cebfb; -[PINCache .cxx_destruct] */

void FUN_10b7cebb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7cebfc; end: 10b7cec7f;  */

void FUN_10b7cebfc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010bf433a0();
  lVar1 = param_3;
  if (lVar2 != 1) {
    lVar1 = param_2;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7cec80; end: 10b7ced03;  */

void FUN_10b7cec80(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010bf433a0();
  lVar1 = param_3;
  if (lVar2 != 1) {
    lVar1 = param_2;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7ced04; end: 10b7ced2b;  */

void FUN_10b7ced04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c086f00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110d614f8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ced2c; end: 10b7ced37;  */

void FUN_10b7ced2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
  return;
}



/* Entry: 10b7ced38; end: 10b7ced5f;  */

void FUN_10b7ced38(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c086f20(param_2,param_2,PTR_s_compare__1125ae690);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ced60; end: 10b7cedb7; -[PINDiskCache init] */

void FUN_10b7ced60(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      &PTR____CFConstantStringClassReference_110f83458,
                      &PTR____CFConstantStringClassReference_110f83598,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b7ceda4);
  (*pcVar1)();
}



/* Entry: 10b7cedb8; end: 10b7cedbf; -[PINDiskCache initWithName:] */

void FUN_10b7cedb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_fileExtension__1125e8fb0,param_3,0);
  return;
}



/* Entry: 10b7cedc0; end: 10b7cee6b; -[PINDiskCache initWithName:fileExtension:] */

undefined8
FUN_10b7cedc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02da40(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7cee6c; end: 10b7cee7b; -[PINDiskCache initWithName:rootPath:fileExtension:] */

void FUN_10b7cee6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_rootPath_serializer_1125e9080,param_3,param_4,0,0,param_5);
  return;
}



/* Entry: 10b7cee7c; end: 10b7cef9f; -[PINDiskCache initWithName:rootPath:serializer:deserializer:fileExtension:] */

undefined8
FUN_10b7cee7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126e1420;
  func_0x00010c22bd20(PTR_PTR_1126e1420);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02da80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7cefa0; end: 10b7cefdb; -[PINDiskCache initWithName:rootPath:serializer:deserializer:fileExtension:operationQueue:] */

void FUN_10b7cefa0(void)

{
  func_0x00010c02d940();
  return;
}



/* Entry: 10b7cefdc; end: 10b7cf007; -[PINDiskCache initWithName:prefix:rootPath:serializer:deserializer:fileExtension:operationQueue:] */

void FUN_10b7cefdc(void)

{
  func_0x00010c02d960();
  return;
}



/* Entry: 10b7cf008; end: 10b7cf013; -[PINDiskCache defaultSerializer] */

undefined ** FUN_10b7cf008(void)

{
  return &PTR___NSConcreteGlobalBlock_110d61558;
}



/* Entry: 10b7cf014; end: 10b7cf043;  */

void FUN_10b7cf014(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7cf044; end: 10b7cf04f; -[PINDiskCache defaultDeserializer] */

undefined ** FUN_10b7cf044(void)

{
  return &PTR___NSConcreteGlobalBlock_110d61578;
}



/* Entry: 10b7cf050; end: 10b7cf0f7;  */

void FUN_10b7cf050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar2 = puVar1;
  func_0x00010bf67000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7cf0f8; end: 10b7cf14b; +[PINDiskCache sharedTrashQueue] */

void FUN_10b7cf0f8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f9dd0 != -1) {
    func_0x000107c27d9c(0x1137f9dd0,&PTR___NSConcreteGlobalBlock_110d61598);
  }
  uVar1 = uRam00000001137f9dc8;
  _objc_retain(uRam00000001137f9dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7cf14c; end: 10b7cf207;  */

void FUN_10b7cf14c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c013ce0();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  _dispatch_queue_create();
  uVar3 = puRam00000001137f9dc8;
  puRam00000001137f9dc8 = puVar2;
  _objc_release(uVar3);
  puVar2 = puRam00000001137f9dc8;
  uVar3 = 9;
  func_0x000107c312b8(9,0);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_set_target_queue(puVar2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7cf208; end: 10b7cf25b; +[PINDiskCache sharedLock] */

void FUN_10b7cf208(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f9de0 != -1) {
    func_0x000107c27d9c(0x1137f9de0,&PTR___NSConcreteGlobalBlock_110d615b8);
  }
  uVar1 = uRam00000001137f9dd8;
  _objc_retain(uRam00000001137f9dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7cf25c; end: 10b7cf287;  */

void FUN_10b7cf25c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  _objc_opt_new();
  uVar1 = puRam00000001137f9dd8;
  puRam00000001137f9dd8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7cf288; end: 10b7cf44f; +[PINDiskCache sharedTrashURL] */

void FUN_10b7cf288(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126e1418;
  func_0x00010c22bbc0(PTR_PTR_1126e1418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09faa0();
  _objc_release(puVar1);
  if (puRam00000001137f9dc0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfcd1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x000107c3129c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    func_0x00010bfee820();
    puVar5 = puVar4;
    func_0x00010bdc2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puRam00000001137f9dc0;
    puRam00000001137f9dc0 = puVar5;
    _objc_release(puVar1);
    _objc_release(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55da0();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  puVar1 = puRam00000001137f9dc0;
  _objc_retain(puRam00000001137f9dc0);
  puVar2 = PTR_PTR_1126e1418;
  func_0x00010c22bbc0(PTR_PTR_1126e1418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7cf450; end: 10b7cf603; +[PINDiskCache moveItemAtURLToTrash:] */

undefined * FUN_10b7cf450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bfacbe0(puVar5,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(puVar5);
  if (((ulong)puVar2 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bfcd1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126e1418;
    func_0x00010c22c480(PTR_PTR_1126e1418);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bdc2c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d1580();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b7cf604; end: 10b7cf613; +[PINDiskCache emptyTrash] */

void FUN_10b7cf604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_emptyTrash__1125c1550,&PTR___NSConcreteGlobalBlock_110d615d8);
  return;
}



/* Entry: 10b7cf614; end: 10b7cf6d3; +[PINDiskCache emptyTrash:] */

void FUN_10b7cf614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1418;
  func_0x00010c22c460(PTR_PTR_1126e1418);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b7cf6d4;
  puStack_48 = &UNK_110c73708;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x000107c27d8c(puVar1,&puStack_60);
  _objc_release(puVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cf6d4; end: 10b7cf70f;  */

void FUN_10b7cf6d4(long param_1)

{
  func_0x00010bf8eec0(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7cf700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7cf710; end: 10b7cf81b; +[PINDiskCache emptyTrashImmediately] */

void FUN_10b7cf710(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126e1418;
  func_0x00010c22bbc0(PTR_PTR_1126e1418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09faa0();
  _objc_release(puVar3);
  lVar1 = lRam00000001137f9dc0;
  if (lRam00000001137f9dc0 != 0) {
    _objc_retain(lRam00000001137f9dc0);
    lVar2 = lRam00000001137f9dc0;
    lRam00000001137f9dc0 = 0;
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126e1418;
  func_0x00010c22bbc0(PTR_PTR_1126e1418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40();
  _objc_release(puVar3);
  if (lVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7cf81c; end: 10b7cf87f; -[PINDiskCache _locked_removeMetadataAssociatedWithKey:] */

void FUN_10b7cf81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xa8),param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xb0),param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xb8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7cf880; end: 10b7cfb03; -[PINDiskCache removeFileAndExecuteBlocksForKey:withReason:] */

undefined * FUN_10b7cf880(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf93520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09faa0(param_1);
  if (lVar1 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0f5800(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bfacbe0();
    _objc_release(lVar4);
    _objc_release(puVar7);
    if (((ulong)puVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x30);
      _objc_retainBlock();
      if (lVar4 != 0) {
        func_0x00010c280b40(param_1);
        (**(code **)(lVar4 + 0x10))(lVar4,param_1,param_3,uVar3,param_4);
        func_0x00010c09faa0(param_1);
      }
      puVar7 = PTR_PTR_1126e1418;
      func_0x00010c0d15a0();
      if (((ulong)puVar7 & 1) == 0) {
        func_0x00010c280b40(param_1);
      }
      else {
        if (param_4 != 5) {
          func_0x00010bf8ee80(PTR_PTR_1126e1418);
        }
        lVar5 = *(long *)(param_1 + 0xb0);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010c2827c0(lVar5);
          func_0x00010c174c60(param_1);
        }
        func_0x00010be4fa80(param_1);
        lVar6 = *(long *)(param_1 + 0x48);
        _objc_retainBlock();
        if (lVar6 != 0) {
          func_0x00010c280b40(param_1);
          (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
                    (*(long *)(param_1 + 0x48),param_1,param_3,uVar3,param_4);
          func_0x00010c09faa0(param_1);
        }
        func_0x00010c280b40(param_1);
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
      _objc_release(uVar3);
      goto LAB_10b7cfa60;
    }
  }
  func_0x00010c280b40(param_1);
  puVar7 = (undefined *)0x0;
LAB_10b7cfa60:
  _objc_release(lVar1);
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b7cfb04; end: 10b7cfb13; -[PINDiskCache trimDiskToSize:] */

void FUN_10b7cfb04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__trimDiskToSize_evictPolicy_reas_1125919b8,param_3,
             &PTR___NSConcreteGlobalBlock_110d614d8,2);
  return;
}



/* Entry: 10b7cfb14; end: 10b7cfb93; -[PINDiskCache trimDiskToSizeByPolicy:] */

void FUN_10b7cfb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c09faa0();
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    func_0x00010bf51e00();
    func_0x00010c280b40(param_1);
    func_0x00010bed0040(param_1,param_2,param_3,lVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b7cfb94; end: 10b7cfc1f; -[PINDiskCache trimDiskImmediatelyToSizeByPolicy:] */

void FUN_10b7cfb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c09faa0();
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    func_0x00010bf51e00();
    func_0x00010c280b40(param_1);
    func_0x00010bed0040(param_1,param_2,param_3,lVar1,5);
    func_0x00010bf8eec0(PTR_PTR_1126e1418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b7cfc20; end: 10b7cfe1f; -[PINDiskCache trimDiskToDate:] */

void FUN_10b7cfc20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  lVar2 = *(long *)(param_1 + 0xa8);
  func_0x00010c086f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_10b7cfd68:
      _objc_release(lVar2);
      func_0x00010c280b40(param_1);
      _objc_release(lVar2);
      lVar3 = param_3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(lVar2);
      _objc_release(lVar2);
      _objc_release(param_3);
      __Unwind_Resume();
      func_0x00010c09faa0();
      dVar11 = *(double *)(lVar3 + 0x60);
      func_0x00010c280b40(lVar3);
      if (dVar11 != 0.0) {
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c0523a0(-dVar11);
        func_0x00010c27c600(lVar3);
        _objc_initWeak(auStack_178,lVar3);
        uVar7 = 0;
        _dispatch_time(0,(long)(*(double *)(lVar3 + 0x60) * 1000000000.0));
        uVar8 = 0x15;
        func_0x000107c312b8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_10b7cff64;
        puStack_188 = &UNK_110876b10;
        _objc_copyWeak(auStack_180,auStack_178);
        func_0x000107c27d84(uVar7,uVar8,&puStack_1a0);
        _objc_release(uVar8);
        _objc_destroyWeak(auStack_180);
        _objc_destroyWeak(auStack_178);
        _objc_release(puVar6);
      }
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar4 = *(long *)(param_1 + 0xa8);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x00010bf433a0();
        if (lVar5 != -1) {
          _objc_release(lVar4);
          goto LAB_10b7cfd68;
        }
        func_0x00010c280b40(param_1);
        func_0x00010c12c5c0(param_1);
        func_0x00010c09faa0(param_1);
      }
      _objc_release(lVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10b7cfe20; end: 10b7cff63; -[PINDiskCache trimToAgeLimitRecursively] */

void FUN_10b7cfe20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c09faa0();
  dVar4 = *(double *)(param_1 + 0x60);
  func_0x00010c280b40(param_1);
  if (dVar4 != 0.0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c0523a0(-dVar4);
    func_0x00010c27c600(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x60) * 1000000000.0));
    uVar3 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b7cff64;
    puStack_58 = &UNK_110876b10;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000107c27d84(uVar2,uVar3,&puStack_70);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10b7cff64; end: 10b7d0043;  */

void FUN_10b7cff64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ebaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010befa360(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7d0044; end: 10b7d008b;  */

void FUN_10b7d0044(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c27c720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7d008c; end: 10b7d01af; -[PINDiskCache lockFileAccessWhileExecutingBlockAsync:] */

void FUN_10b7d008c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010befa360(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d01b0; end: 10b7d0213;  */

void FUN_10b7d01b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d0214; end: 10b7d037b; -[PINDiskCache containsObjectForKeyAsync:completion:] */

void FUN_10b7d0214(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010befa360(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d037c; end: 10b7d03e3;  */

void FUN_10b7d037c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    lVar3 = lVar2;
    func_0x00010bf4b920(lVar2);
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b7d03e4; end: 10b7d0543; -[PINDiskCache metadataForKeyAsync:completion:] */

void FUN_10b7d03e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d0544; end: 10b7d05cf;  */

void FUN_10b7d0544(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0cc340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d05d0; end: 10b7d0733; -[PINDiskCache fileURLForKeyAsync:completion:] */

void FUN_10b7d05d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010befa360(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d0734; end: 10b7d07cf;  */

void FUN_10b7d0734(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfad220(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09faa0(lVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),lVar2);
    func_0x00010c280b40(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d07d0; end: 10b7d0a77; -[PINDiskCache cacheKeyMetadataList] */

void FUN_10b7d07d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x24;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_148 = puVar1;
  func_0x00010c09faa0(param_1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0xb8);
  _objc_retain(lVar7);
  puVar5 = &uStack_140;
  puVar6 = auStack_100;
  lVar2 = lVar7;
  lStack_158 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lStack_150 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lStack_150) {
          _objc_enumerationMutation(lStack_158);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = *(undefined8 *)(param_1 + 0xb8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c0e00e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = PTR_PTR_1126e1488;
        _objc_alloc();
        func_0x00010c0b4ca0(uVar3);
        func_0x00010c26f320(unaff_x22);
        uVar4 = unaff_x24;
        func_0x00010bf9c720(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c020d20();
        func_0x00010befa120(puStack_148);
        _objc_release(unaff_x20);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(unaff_x24);
        _objc_release(unaff_x22);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar5 = &uStack_140;
      puVar6 = auStack_100;
      lVar2 = lStack_158;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lStack_158);
  func_0x00010c280b40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_148);
    return;
  }
  ___stack_chk_fail();
  _objc_release(lStack_158);
  _objc_release(puStack_148);
  lVar2 = param_1;
  __Unwind_Resume(param_1);
  pcStack_168 = FUN_10b7d0a78;
  uStack_1a0 = unaff_x24;
  uStack_198 = 0;
  uStack_190 = unaff_x22;
  lStack_188 = param_1;
  puStack_180 = unaff_x20;
  lStack_178 = lVar7;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_initWeak(auStack_1a8,lVar2);
  func_0x00010c0ebaa0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1b0,auStack_1a8);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  func_0x00010befa340(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b7d0a78; end: 10b7d0bd3; -[PINDiskCache updateMetadataAsync:forKey:] */

void FUN_10b7d0a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010befa340(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d0bd4; end: 10b7d0c8f;  */

void FUN_10b7d0bd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf93520(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09faa0(lVar1);
    lVar3 = *(long *)(lVar1 + 0xb8);
    func_0x00010c0dff20(lVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010be4fae0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x20),lVar2);
    }
    func_0x00010c280b40(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d0c90; end: 10b7d0e67; -[PINDiskCache setObjectAsync:forKey:metadata:completion:] */

void FUN_10b7d0c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d0e68; end: 10b7d0f17;  */

void FUN_10b7d0e68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1d0600(lVar1);
    _objc_retain(0);
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))
                (lVar2,lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0,
                 *(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(0);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7d0f18; end: 10b7d0f23; -[PINDiskCache setObjectAsync:forKey:cost:metadata:completion:] */

void FUN_10b7d0f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d06b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObjectAsync_forKey_metadata_c_112651bd0,param_3,param_4,param_6,
             param_7);
  return;
}



/* Entry: 10b7d0f24; end: 10b7d1083; -[PINDiskCache removeObjectForKeyAsync:completion:] */

void FUN_10b7d0f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d1084; end: 10b7d1133;  */

void FUN_10b7d1084(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d420(lVar1);
    _objc_retain(0);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1,*(undefined8 *)(param_1 + 0x20),0,0,0);
    }
    _objc_release(0);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7d1134; end: 10b7d1293; -[PINDiskCache removeObjectsForKeysAsync:completion:] */

void FUN_10b7d1134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d1294; end: 10b7d13f3;  */

void FUN_10b7d1294(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar5);
    lVar3 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c12d3e0(lVar2);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    }
  }
  lVar3 = lVar2;
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  __Unwind_Resume(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bed0110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7d13f4; end: 10b7d1407; -[PINDiskCache trimToSizeAsync:completion:] */

void FUN_10b7d13f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__trimToSizeAsync_evictPolicy_rea_1125919e8,param_3,
             &PTR___NSConcreteGlobalBlock_110d614d8,2,param_4);
  return;
}



/* Entry: 10b7d1408; end: 10b7d1587; -[PINDiskCache trimToDateAsync:completion:] */

void FUN_10b7d1408(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b7d1588;
  puStack_60 = &UNK_110d615f8;
  ppuVar2 = &puStack_78;
  uStack_58 = param_1;
  _objc_retainBlock(ppuVar2);
  if (param_4 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10b7d1594;
    puStack_90 = &UNK_1107d0af0;
    _objc_retain(param_4);
    ppuVar3 = &puStack_a8;
    uStack_88 = param_1;
    lStack_80 = param_4;
    _objc_retainBlock(ppuVar3);
    _objc_release(lStack_80);
  }
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa380();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d1588; end: 10b7d15a3;  */

void FUN_10b7d1588(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_trimToDate__11267cc18,param_2);
  return;
}



/* Entry: 10b7d15a4; end: 10b7d15b7; -[PINDiskCache trimToSizeByDateAsync:completion:] */

void FUN_10b7d15a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__trimToSizeAsync_evictPolicy_rea_1125919e8,param_3,PTR_PTR_1133e0f78,3,
             param_4);
  return;
}



/* Entry: 10b7d15b8; end: 10b7d1643; -[PINDiskCache trimToSizeByPolicyAsync:completion:] */

void FUN_10b7d15b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    func_0x00010bf51e00();
    func_0x00010bed0100(param_1,param_2,param_3,lVar1,4,param_4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b7d1644; end: 10b7d1847; -[PINDiskCache _trimToSizeAsync:evictPolicy:reason:completion:] */

void FUN_10b7d1644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b7d1848;
  puStack_80 = &UNK_110d61628;
  uStack_78 = param_1;
  _objc_retain(param_4);
  ppuVar1 = &puStack_98;
  uStack_70 = param_4;
  lStack_68 = param_5;
  _objc_retainBlock(ppuVar1);
  if (param_6 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_c8 = puVar2;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10b7d18ac;
    puStack_b0 = &UNK_1107d0af0;
    _objc_retain(param_6);
    ppuVar3 = &puStack_c8;
    uStack_a8 = param_1;
    lStack_a0 = param_6;
    _objc_retainBlock(ppuVar3);
    _objc_release(lStack_a0);
  }
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 - 1U < 5) {
    ppuVar4 = (undefined **)(&PTR_PTR_110d61688)[param_5 - 1U];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f83618;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa380(param_1,param_2,ppuVar1,0,ppuVar4,puVar2,
                      &PTR___NSConcreteGlobalBlock_110d61458,ppuVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7d1848; end: 10b7d18ab;  */

void FUN_10b7d1848(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2827c0();
  if (lVar1 == 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bed0040();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7d18ac; end: 10b7d18bb;  */

void FUN_10b7d18ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b7d18b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7d18bc; end: 10b7d19db; -[PINDiskCache removeAllObjectsAsync:] */

void FUN_10b7d18bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d19dc; end: 10b7d1a3b;  */

void FUN_10b7d19dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12adc0(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d1a3c; end: 10b7d1c0f; -[PINDiskCache cleanupDeadFilesAsync] */

void FUN_10b7d1a3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c09faa0();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar4);
  lVar1 = param_1;
  func_0x00010bf65e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189e20(param_1);
  _objc_release(puVar2);
  func_0x00010c280b40(param_1);
  if ((lVar1 != 0) && (lVar3 = lVar1, func_0x00010bf529e0(), lVar3 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    _objc_retain(uVar4);
    func_0x00010befa360(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 10b7d1c10; end: 10b7d1d67;  */

void FUN_10b7d1c10(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    param_1 = *(long *)(param_1 + 0x20);
    _objc_retain(param_1);
    param_4 = auStack_d8;
    lVar2 = param_1;
    func_0x00010bf52a60();
    unaff_x22 = &PTR_PTR_1126e1000;
    if (lVar2 != 0) {
      unaff_x23 = *plStack_110;
      do {
        unaff_x24 = 0;
        do {
          if (*plStack_110 != unaff_x23) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010c0d15a0(PTR_PTR_1126e1418);
          unaff_x24 = unaff_x24 + 1;
        } while (lVar2 != unaff_x24);
        param_4 = auStack_d8;
        lVar2 = param_1;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_1);
    func_0x00010bf8ee80(PTR_PTR_1126e1418);
    param_3 = (undefined1 *)puVar4;
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  lVar3 = lVar2;
  __Unwind_Resume(lVar2);
  pcStack_128 = FUN_10b7d1d68;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  ppuStack_150 = unaff_x22;
  lStack_148 = lVar2;
  lStack_140 = param_1;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_168,lVar3);
  func_0x00010c0ebaa0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d1d68; end: 10b7d1ec7; -[PINDiskCache enumerateObjectsWithBlockAsync:completionBlock:] */

void FUN_10b7d1d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d1ec8; end: 10b7d1f2b;  */

void FUN_10b7d1ec8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf97ea0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d1f2c; end: 10b7d1f73;  */

void FUN_10b7d1f2c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 10b7d1f74; end: 10b7d20d3; -[PINDiskCache enumerateObjectsWithMetadataBlockAsync:completionBlock:] */

void FUN_10b7d1f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d20d4; end: 10b7d2137;  */

void FUN_10b7d20d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf97ec0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d2138; end: 10b7d219b; -[PINDiskCache synchronouslyLockFileAccessWhileExecutingBlock:] */

void FUN_10b7d2138(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c09faa0(param_1);
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    func_0x00010c280b40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d219c; end: 10b7d21d3; -[PINDiskCache containsObjectForKey:] */

bool FUN_10b7d219c(long param_1)

{
  func_0x00010bfad240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10b7d21d4; end: 10b7d21f3; -[PINDiskCache objectForKey:] */

void FUN_10b7d21d4(void)

{
  func_0x00010c0e0040();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7d21f4; end: 10b7d2217; -[PINDiskCache objectForKey:metadata:] */

void FUN_10b7d21f4(void)

{
  func_0x00010c0dffe0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7d2218; end: 10b7d223f; -[PINDiskCache fileURLForKey:] */

void FUN_10b7d2218(void)

{
  func_0x00010bfad240();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7d2240; end: 10b7d23db; -[PINDiskCache fileURLForKey:updateFileModificationDate:] */

void FUN_10b7d2240(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar6 = 0;
    goto LAB_10b7d2350;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar6 = param_1;
  func_0x00010bf93520(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09faa0(param_1);
  lVar2 = lVar6;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_10b7d232c:
    _objc_release(lVar6);
    lVar6 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c0f5800(lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfacbe0(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    if ((int)puVar5 == 0) goto LAB_10b7d232c;
    if (param_4 != 0) {
      func_0x00010bf0c300(param_1,param_2,puVar1,lVar6);
    }
  }
  func_0x00010c280b40(param_1);
  _objc_release(puVar1);
LAB_10b7d2350:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10b7d23dc; end: 10b7d247b; -[PINDiskCache _locked_updateMetadata:forKey:fileURL:] */

void FUN_10b7d23dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0xb8),param_2,param_3,param_4);
  func_0x00010c1c7420(param_1,param_2,param_3,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d247c; end: 10b7d2483; -[PINDiskCache setObject:forKey:metadata:] */

void FUN_10b7d247c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setObject_forKey_metadata_fileUR_112651ba8);
  return;
}



/* Entry: 10b7d2484; end: 10b7d248b; -[PINDiskCache setObject:forKey:cost:metadata:] */

void FUN_10b7d2484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey_metadata__112651ba0,param_3,param_4,param_6);
  return;
}



/* Entry: 10b7d248c; end: 10b7d292f; -[PINDiskCache setObject:forKey:metadata:fileURL:] */

ulong FUN_10b7d248c(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                   long *param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  long unaff_x23;
  ulong uVar7;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  uVar7 = 0;
  if ((param_3 != 0) && (lVar1 != 0)) {
    func_0x00010c2be780(param_1);
    lVar1 = param_1;
    func_0x00010bf93520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09faa0(param_1);
    uStack_98 = *(long *)(param_1 + 0x28);
    _objc_retainBlock();
    if (uStack_98 != 0) {
      func_0x00010c280b40(param_1);
      (**(code **)(uStack_98 + 0x10))(uStack_98,param_1,param_4,param_5,lVar1,param_3);
      func_0x00010c09faa0(param_1);
    }
    func_0x00010c280b40(param_1);
    uStack_a0 = *(ulong *)(param_1 + 0x10);
    (**(code **)(uStack_a0 + 0x10))(uStack_a0,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09faa0(param_1);
    uVar7 = uStack_a0;
    func_0x00010c14e080();
    uStack_a8 = 0;
    _objc_retain();
    if ((uVar7 & 1) == 0) {
      unaff_x22 = 0;
      lVar3 = lVar1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = lVar1;
      func_0x00010c13b4c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = 0;
      _objc_retain();
      _objc_release(puVar2);
      lVar3 = uStack_b0;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = *(long *)(param_1 + 0xb0);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c2827c0(lVar4);
          func_0x00010c174c60(param_1);
        }
        func_0x00010c1d0560(*(undefined8 *)(param_1 + 0xb0));
        func_0x00010c2827c0(lVar3);
        func_0x00010c174c60(param_1);
        _objc_release(lVar4);
      }
      lVar4 = uStack_b0;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        func_0x00010c1d0560(*(undefined8 *)(param_1 + 0xa8));
      }
      func_0x00010be4fae0(param_1);
      if ((*(ulong *)(param_1 + 0x58) != 0) &&
         (*(ulong *)(param_1 + 0x58) < *(ulong *)(param_1 + 0x88))) {
        if (*(long *)(param_1 + 0x68) == 0) {
          func_0x00010c27c7e0(param_1);
        }
        else {
          func_0x00010c27c820(param_1);
        }
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uStack_b0);
      lVar3 = 0;
      unaff_x22 = lVar1;
    }
    _objc_release(lVar3);
    unaff_x23 = *(long *)(param_1 + 0x40);
    _objc_retainBlock();
    if (unaff_x23 != 0) {
      func_0x00010c280b40(param_1);
      (**(code **)(unaff_x23 + 0x10))(unaff_x23,param_1,param_4,param_5,unaff_x22,param_3);
      func_0x00010c09faa0(param_1);
    }
    func_0x00010c280b40(param_1);
    if (param_6 != (long *)0x0) {
      _objc_retainAutorelease(unaff_x22);
      *param_6 = unaff_x22;
    }
    _objc_release(unaff_x23);
    _objc_release(0);
    _objc_release(uStack_a0);
    _objc_release(uStack_98);
    _objc_release(unaff_x22);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  uVar5 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  _objc_release(unaff_x22);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c12d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return uVar5;
}



/* Entry: 10b7d2930; end: 10b7d2937; -[PINDiskCache removeObjectForKey:] */

void FUN_10b7d2930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeObjectForKey_fileURL__112628f28,param_3,0);
  return;
}



/* Entry: 10b7d2938; end: 10b7d29df; -[PINDiskCache removeObjectForKey:fileURL:] */

void FUN_10b7d2938(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf93520(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c5c0(param_1,param_2,param_3,0);
    if (param_4 != (undefined8 *)0x0) {
      _objc_retainAutorelease(uVar1);
      *param_4 = uVar1;
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d29e0; end: 10b7d29eb; -[PINDiskCache trimToSize:] */

void FUN_10b7d29e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27c630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trimDiskToSize__11267cbb0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b7d29ec; end: 10b7d2a93; -[PINDiskCache trimToDate:] */

void FUN_10b7d29ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c071ce0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)lVar2 == 0) {
      func_0x00010c27c600(param_1,param_2,param_3);
    }
    else {
      func_0x00010c12adc0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d2a94; end: 10b7d2a9f; -[PINDiskCache trimToSizeByDate:] */

void FUN_10b7d2a94(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trimDiskToSizeByDate__11267cbb8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b7d2aa0; end: 10b7d2aab; -[PINDiskCache trimToSizeByPolicy:] */

void FUN_10b7d2aa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trimDiskToSizeByPolicy__11267cbc0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b7d2aac; end: 10b7d2ab7; -[PINDiskCache trimImmediatelyToSizeByPolicy:] */

void FUN_10b7d2aac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trimDiskImmediatelyToSizeByPolic_11267cb98)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b7d2ab8; end: 10b7d2bbb; -[PINDiskCache removeAllObjects] */

void FUN_10b7d2ab8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c09faa0();
  lVar1 = *(long *)(param_1 + 0x38);
  _objc_retainBlock();
  if (lVar1 != 0) {
    func_0x00010c280b40(param_1);
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    func_0x00010c09faa0(param_1);
  }
  func_0x00010c0d15a0(PTR_PTR_1126e1418);
  func_0x00010bf8ee80(PTR_PTR_1126e1418);
  func_0x00010be4fa20(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c174c60(param_1);
  lVar2 = *(long *)(param_1 + 0x50);
  _objc_retainBlock();
  if (lVar2 != 0) {
    func_0x00010c280b40(param_1);
    (**(code **)(lVar2 + 0x10))(lVar2,param_1);
    func_0x00010c09faa0(param_1);
  }
  func_0x00010c280b40(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d2bbc; end: 10b7d2e23; -[PINDiskCache enumerateObjectsWithBlock:] */

void FUN_10b7d2bbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x21;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_278;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined8 *)0x0) {
    func_0x00010c09faa0(param_1);
    puStack_138 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = *(long *)(param_1 + 0xa8);
    func_0x00010c086f20();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain();
    puVar4 = &uStack_130;
    lVar5 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          lVar9 = param_1;
          func_0x00010bf93520();
          _objc_retainAutoreleasedReturnValue();
          if ((*(char *)(param_1 + 0x20) != '\x01') ||
             (dVar10 = *(double *)(param_1 + 0x60), dVar10 <= 0.0)) {
LAB_10b7d2d00:
            (*(code *)param_3[2])(param_3,uVar6,lVar9);
          }
          else {
            uVar1 = *(undefined8 *)(param_1 + 0xa8);
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            dVar11 = *(double *)(param_1 + 0x60);
            _objc_release(uVar1);
            if (ABS(dVar10) < dVar11) goto LAB_10b7d2d00;
          }
          _objc_release(lVar9);
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        puVar4 = &uStack_130;
        lVar5 = unaff_x21;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(unaff_x21);
    func_0x00010c280b40(param_1);
    _objc_release(unaff_x21);
    _objc_release(puStack_138);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(puStack_138);
  _objc_release(param_3);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  if (puVar4 != (undefined8 *)0x0) {
    func_0x00010c09faa0(puVar2);
    puStack_278 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar2[0x15];
    func_0x00010c086f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar7 = unaff_x21;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(unaff_x21);
        }
        uVar6 = *(undefined8 *)(lVar9 * 8);
        puVar3 = puVar2;
        func_0x00010bf93520(puVar2);
        _objc_retainAutoreleasedReturnValue();
        if ((*(char *)(puVar2 + 4) != '\x01') || (dVar10 = (double)puVar2[0xc], dVar10 <= 0.0)) {
LAB_10b7d2f68:
          uVar1 = puVar2[0x17];
          func_0x00010c0e00e0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)puVar4[2])(puVar4,uVar6,uVar1,puVar3);
          _objc_release(uVar1);
        }
        else {
          uVar1 = puVar2[0x15];
          func_0x00010c0dff20(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380();
          dVar11 = (double)puVar2[0xc];
          _objc_release(uVar1);
          if (ABS(dVar10) < dVar11) goto LAB_10b7d2f68;
        }
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = unaff_x21;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x21);
    func_0x00010c280b40(puVar2);
    _objc_release(unaff_x21);
    _objc_release(puStack_278);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(puStack_278);
  _objc_release(puVar4);
  __Unwind_Resume();
  func_0x00010c09faa0();
  uVar1 = puVar2[5];
  _objc_retainBlock(uVar1);
  func_0x00010c280b40(puVar2);
  uVar6 = uVar1;
  _objc_retainBlock(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10b7d2e24; end: 10b7d30c3; -[PINDiskCache enumerateObjectsWithMetadataBlock:] */

void FUN_10b7d2e24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_138;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c09faa0(param_1);
    puStack_138 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = *(long *)(param_1 + 0xa8);
    func_0x00010c086f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar2 = unaff_x21;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(unaff_x21);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        lVar3 = param_1;
        func_0x00010bf93520(param_1);
        _objc_retainAutoreleasedReturnValue();
        if ((*(char *)(param_1 + 0x20) != '\x01') ||
           (dVar8 = *(double *)(param_1 + 0x60), dVar8 <= 0.0)) {
LAB_10b7d2f68:
          uVar4 = *(undefined8 *)(param_1 + 0xb8);
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_3 + 0x10))(param_3,uVar6,uVar4,lVar3);
          _objc_release(uVar4);
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0xa8);
          func_0x00010c0dff20(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380();
          dVar9 = *(double *)(param_1 + 0x60);
          _objc_release(uVar4);
          if (ABS(dVar8) < dVar9) goto LAB_10b7d2f68;
        }
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = unaff_x21;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x21);
    func_0x00010c280b40(param_1);
    _objc_release(unaff_x21);
    _objc_release(puStack_138);
  }
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(puStack_138);
  _objc_release(param_3);
  __Unwind_Resume();
  func_0x00010c09faa0();
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  _objc_retainBlock(uVar4);
  func_0x00010c280b40(lVar2);
  uVar6 = uVar4;
  _objc_retainBlock(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10b7d30c4; end: 10b7d3127; -[PINDiskCache willAddObjectBlock] */

void FUN_10b7d30c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock(uVar1);
  func_0x00010c280b40(param_1);
  uVar2 = uVar1;
  _objc_retainBlock(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7d3128; end: 10b7d3247; -[PINDiskCache setWillAddObjectBlock:] */

void FUN_10b7d3128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d3248; end: 10b7d32b3;  */

void FUN_10b7d3248(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d32b4; end: 10b7d3317; -[PINDiskCache willRemoveObjectBlock] */

void FUN_10b7d32b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock(uVar1);
  func_0x00010c280b40(param_1);
  uVar2 = uVar1;
  _objc_retainBlock(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7d3318; end: 10b7d3437; -[PINDiskCache setWillRemoveObjectBlock:] */

void FUN_10b7d3318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d3438; end: 10b7d34a3;  */

void FUN_10b7d3438(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


