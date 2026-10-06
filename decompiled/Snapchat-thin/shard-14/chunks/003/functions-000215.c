/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0ecd7c; end: 10b0ecd83; -[SCAutoCleanupFileContentResultImpl getIsStreaming] */

undefined8 FUN_10b0ecd7c(void)

{
  return 0;
}



/* Entry: 10b0ecd84; end: 10b0ecd87; -[SCAutoCleanupFileContentResultImpl updateStreamingRequestContext:] */

void FUN_10b0ecd84(void)

{
  return;
}



/* Entry: 10b0ecd88; end: 10b0ecd8f; -[SCAutoCleanupFileContentResultImpl getCurrentStreamingRequestContext] */

undefined8 FUN_10b0ecd88(void)

{
  return 0;
}



/* Entry: 10b0ecd90; end: 10b0ecd93; -[SCAutoCleanupFileContentResultImpl free] */

void FUN_10b0ecd90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteTemporaryFile_11255c400);
  return;
}



/* Entry: 10b0ecd94; end: 10b0ecde7; -[SCAutoCleanupFileContentResultImpl dealloc] */

void FUN_10b0ecd94(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x00010bdfa980(param_1);
  }
  puStack_28 = PTR_PTR_112705c48;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b0ecde8; end: 10b0eced3; -[SCAutoCleanupFileContentResultImpl _deleteTemporaryFile] */

void FUN_10b0ecde8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x000107c3129c();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bfda7c0();
    if (iVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      _objc_release(uVar3);
      uVar3 = 0xfffffffffffffffe;
      _dispatch_get_global_queue(0xfffffffffffffffe,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10b0eced4;
      puStack_40 = &UNK_110842e18;
      uStack_38 = uVar4;
      _objc_retain(uVar4);
      func_0x000107c27d8c(uVar3,&puStack_58);
      _objc_release(uVar3);
      _objc_release(uStack_38);
      _objc_release(uVar4);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 10b0eced4; end: 10b0ecf17;  */

void FUN_10b0eced4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0ecf18; end: 10b0ecf1f; -[SCAutoCleanupFileContentResultImpl getIsZipArchive] */

undefined8 FUN_10b0ecf18(void)

{
  return 0;
}



/* Entry: 10b0ecf20; end: 10b0ecf27; -[SCAutoCleanupFileContentResultImpl getZipEntryData:] */

undefined8 FUN_10b0ecf20(void)

{
  return 0;
}



/* Entry: 10b0ecf28; end: 10b0ecf2f; -[SCAutoCleanupFileContentResultImpl getZipArchiveForLocalContent] */

undefined8 FUN_10b0ecf28(void)

{
  return 0;
}



/* Entry: 10b0ecf30; end: 10b0ecf57; -[SCAutoCleanupFileContentResultImpl getFilePath] */

void FUN_10b0ecf30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0ecf58; end: 10b0ecf5f; -[SCAutoCleanupFileContentResultImpl getZipEntryFilePath:] */

undefined8 FUN_10b0ecf58(void)

{
  return 0;
}



/* Entry: 10b0ecf60; end: 10b0ecf63; -[SCAutoCleanupFileContentResultImpl addDownloadCompletionListener:] */

void FUN_10b0ecf60(void)

{
  return;
}



/* Entry: 10b0ecf64; end: 10b0ecf6b; -[SCAutoCleanupFileContentResultImpl getIsAuthoritative] */

undefined8 FUN_10b0ecf64(void)

{
  return 0;
}



/* Entry: 10b0ecf6c; end: 10b0ecf73; -[SCAutoCleanupFileContentResultImpl hasEncryptionData] */

undefined8 FUN_10b0ecf6c(void)

{
  return 0;
}



/* Entry: 10b0ecf74; end: 10b0ecf7b; -[SCAutoCleanupFileContentResultImpl getErrorMessage] */

undefined8 FUN_10b0ecf74(void)

{
  return 0;
}



/* Entry: 10b0ecf7c; end: 10b0ecf83; -[SCAutoCleanupFileContentResultImpl stitchFilePath] */

undefined8 FUN_10b0ecf7c(void)

{
  return 0;
}



/* Entry: 10b0ecf84; end: 10b0ecf8b; -[SCAutoCleanupFileContentResultImpl streamingProtocol] */

undefined8 FUN_10b0ecf84(void)

{
  return 0;
}



/* Entry: 10b0ecf8c; end: 10b0ecf93; -[SCAutoCleanupFileContentResultImpl resolvedUrl] */

undefined8 FUN_10b0ecf8c(void)

{
  return 0;
}



/* Entry: 10b0ecf94; end: 10b0ecf9b; -[SCAutoCleanupFileContentResultImpl isEncrypted] */

undefined8 FUN_10b0ecf94(void)

{
  return 0;
}



/* Entry: 10b0ecf9c; end: 10b0ecf9f; -[SCAutoCleanupFileContentResultImpl logConsumed:bytesRange:] */

void FUN_10b0ecf9c(void)

{
  return;
}



/* Entry: 10b0ecfa0; end: 10b0ecfcf; -[SCAutoCleanupFileContentResultImpl .cxx_destruct] */

void FUN_10b0ecfa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ecfd0; end: 10b0ed077; -[SCContentDeliveryBufferedFetchResultHandle initWithBufferedContentFetcherResult:requestContext:] */

undefined1 *
FUN_10b0ecfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705c50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ed078; end: 10b0ed07f; -[SCContentDeliveryBufferedFetchResultHandle cancel] */

void FUN_10b0ed078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10b0ed080; end: 10b0ed0ef; -[SCContentDeliveryBufferedFetchResultHandle setRequestContext:] */

void FUN_10b0ed080(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    func_0x00010c1ebb40(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ed0f0; end: 10b0ed2a3; -[SCContentDeliveryBufferedFetchResultHandle setFetchPriority:importance:] */

void FUN_10b0ed0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126b7fd0;
    _objc_alloc(PTR_PTR_1126b7fd0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c46a0();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf6db00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c27bc40();
    func_0x00010c0291a0(puVar1,param_2,uVar6,uVar7,param_3,param_4,0,uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b1378;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c27ef40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c278ec0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c265580(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cd40(puVar5,param_2,puVar1,uVar6,uVar7,uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c1ebb40(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10b0ed2a4; end: 10b0ed2d3; -[SCContentDeliveryBufferedFetchResultHandle .cxx_destruct] */

void FUN_10b0ed2a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ed2d4; end: 10b0ed37b; -[SCContentDeliveryPrefetchContentResultHandle initWithPrefetchContentFetcherResult:requestContext:] */

undefined1 *
FUN_10b0ed2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705c58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ed37c; end: 10b0ed383; -[SCContentDeliveryPrefetchContentResultHandle cancel] */

void FUN_10b0ed37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10b0ed384; end: 10b0ed3f3; -[SCContentDeliveryPrefetchContentResultHandle setRequestContext:] */

void FUN_10b0ed384(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ed3f4; end: 10b0ed5a7; -[SCContentDeliveryPrefetchContentResultHandle setFetchPriority:importance:] */

void FUN_10b0ed3f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126b7fd0;
    _objc_alloc(PTR_PTR_1126b7fd0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c46a0();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf6db00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c27bc40();
    func_0x00010c0291a0(puVar1,param_2,uVar6,uVar7,param_3,param_4,0,uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b1378;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c27ef40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c278ec0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c265580(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cd40(puVar5,param_2,puVar1,uVar6,uVar7,uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10b0ed5a8; end: 10b0ed5d7; -[SCContentDeliveryPrefetchContentResultHandle .cxx_destruct] */

void FUN_10b0ed5a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ed5d8; end: 10b0ed67f; -[SCContentDeliveryPrefetchStreamingRequestHandleImpl initWithPrefetchFetcherResult:requestContext:] */

undefined1 *
FUN_10b0ed5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705c60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ed680; end: 10b0ed687; -[SCContentDeliveryPrefetchStreamingRequestHandleImpl cancel] */

void FUN_10b0ed680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10b0ed688; end: 10b0ed6fb; -[SCContentDeliveryPrefetchStreamingRequestHandleImpl setRequestContext:] */

void FUN_10b0ed688(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ed6fc; end: 10b0ed8af; -[SCContentDeliveryPrefetchStreamingRequestHandleImpl setFetchPriority:importance:] */

void FUN_10b0ed6fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126b7fd0;
    _objc_alloc(PTR_PTR_1126b7fd0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c46a0();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf6db00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c27bc40();
    func_0x00010c0291a0(puVar1,param_2,uVar6,uVar7,param_3,param_4,0,uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b1378;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c27ef40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c278ec0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c265580(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cd40(puVar5,param_2,puVar1,uVar6,uVar7,uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10b0ed8b0; end: 10b0ed8df; -[SCContentDeliveryPrefetchStreamingRequestHandleImpl .cxx_destruct] */

void FUN_10b0ed8b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ed8e0; end: 10b0ed96f; -[SCContentDeliveryRequestCancelableGroup init] */

undefined1 * FUN_10b0ed8e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705c68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ed970; end: 10b0ed9e3; -[SCContentDeliveryRequestCancelableGroup addCancelable:] */

void FUN_10b0ed970(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    }
    else {
      func_0x00010bf2dba0(param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ed9e4; end: 10b0eda7f; -[SCContentDeliveryRequestCancelableGroup addCanceledCallbackBlock:] */

void FUN_10b0ed9e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    puVar1 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
    }
    else {
      func_0x00010bf2dba0(puVar1);
    }
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0eda80; end: 10b0edc6b; -[SCContentDeliveryRequestCancelableGroup cancel] */

ulong FUN_10b0eda80(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x20);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_190,auStack_c8,0x10);
    if (lVar2 != 0) {
      lVar5 = *plStack_180;
      do {
        lVar6 = 0;
        do {
          if (*plStack_180 != lVar5) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010bf2dba0(*(undefined8 *)(lStack_188 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_190,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar4);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_1d0,auStack_148,0x10);
    if (lVar2 != 0) {
      lVar5 = *plStack_1c0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_1c0 != lVar5) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010bf2dba0(*(undefined8 *)(lStack_1c8 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_1d0,auStack_148,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar4);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  }
  uVar3 = param_1 + 0x20;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar3;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  __Unwind_Resume();
  _os_unfair_lock_lock(uVar3 + 0x20);
  bVar1 = *(byte *)(uVar3 + 8);
  _os_unfair_lock_unlock(uVar3 + 0x20);
  return (ulong)bVar1;
}



/* Entry: 10b0edc6c; end: 10b0edc9f; -[SCContentDeliveryRequestCancelableGroup isCancelled] */

undefined1 FUN_10b0edc6c(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined1 *)(param_1 + 8);
  _os_unfair_lock_unlock(param_1 + 0x20);
  return uVar1;
}



/* Entry: 10b0edca0; end: 10b0eddf3; -[SCContentDeliveryRequestCancelableGroup setRequestContext:] */

void FUN_10b0edca0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar4);
      lVar2 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar5 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010c1ebb40(*(undefined8 *)(lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
    }
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  __Unwind_Resume();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_3 + 0x20);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    lVar4 = *(long *)(param_3 + 0x10);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c19b480(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
  }
  param_3 = param_3 + 0x20;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 0x10,0);
  return;
}



/* Entry: 10b0eddf4; end: 10b0edf3b; -[SCContentDeliveryRequestCancelableGroup setFetchPriority:importance:] */

void FUN_10b0eddf4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x20);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c19b480(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
  }
  param_1 = param_1 + 0x20;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0edf3c; end: 10b0edf6b; -[SCContentDeliveryRequestCancelableGroup .cxx_destruct] */

void FUN_10b0edf3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0edf6c; end: 10b0ee033; -[SCContentDeliveryRequestHandleImpl initWithContentDelivery:requestContext:requestHandle:] */

undefined1 *
FUN_10b0edf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112705c70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ee034; end: 10b0ee03b; -[SCContentDeliveryRequestHandleImpl cancel] */

void FUN_10b0ee034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10b0ee03c; end: 10b0ee0af; -[SCContentDeliveryRequestHandleImpl setRequestContext:] */

void FUN_10b0ee03c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ee0b0; end: 10b0ee267; -[SCContentDeliveryRequestHandleImpl setFetchPriority:importance:] */

void FUN_10b0ee0b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126b7fd0;
    _objc_alloc(PTR_PTR_1126b7fd0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11fca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c46a0();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11fca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf6db00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11fca0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c27bc40();
    func_0x00010c0291a0(puVar1,param_2,uVar6,uVar7,param_3,param_4,0,uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b1378;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c27ef40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c278ec0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c265580(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cd40(puVar5,param_2,puVar1,uVar6,uVar7,uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 10b0ee268; end: 10b0ee273; -[SCContentDeliveryRequestHandleImpl requestHandle] */

void FUN_10b0ee268(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10b0ee274; end: 10b0ee27b; -[SCContentDeliveryRequestHandleImpl setRequestHandle:] */

void FUN_10b0ee274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b0ee27c; end: 10b0ee2b3; -[SCContentDeliveryRequestHandleImpl .cxx_destruct] */

void FUN_10b0ee27c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ee2b4; end: 10b0ee343; -[SCContentDeliveryStreamingRequestHandleImpl initWithRequestContext:] */

undefined1 * FUN_10b0ee2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705c78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),0);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ee344; end: 10b0ee387; -[SCContentDeliveryStreamingRequestHandleImpl cancel] */

void FUN_10b0ee344(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 10b0ee388; end: 10b0ee3e3; -[SCContentDeliveryStreamingRequestHandleImpl setRequestHandle:] */

void FUN_10b0ee388(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ee3e4; end: 10b0ee48b; -[SCContentDeliveryStreamingRequestHandleImpl setStreamingContentResult:] */

void FUN_10b0ee3e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (((lVar1 == 0) && (lVar1 = param_3, func_0x00010bfcaaa0(), lVar1 == 0)) &&
     (lVar1 = param_3, func_0x00010bfc68a0(), (int)lVar1 != 0)) {
    _objc_storeWeak(param_1 + 0x18,param_3);
    _objc_retain();
    func_0x00010c28a7a0(param_3);
    _objc_release(param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ee48c; end: 10b0ee527; -[SCContentDeliveryStreamingRequestHandleImpl setRequestContext:] */

void FUN_10b0ee48c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    if (*(long *)(param_1 + 8) != 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = param_3;
      _objc_release(uVar1);
      func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
      lVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c28a7a0();
      _objc_release(lVar2);
    }
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ee528; end: 10b0ee6ff; -[SCContentDeliveryStreamingRequestHandleImpl setFetchPriority:importance:] */

void FUN_10b0ee528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    puVar1 = PTR_PTR_1126b7fd0;
    _objc_alloc(PTR_PTR_1126b7fd0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c46a0();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf6db00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11fca0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c27bc40();
    func_0x00010c0291a0(puVar1,param_2,uVar6,uVar7,param_3,param_4,0,uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b1378;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c27ef40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c278ec0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c265580(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cd40(puVar5,param_2,puVar1,uVar6,uVar7,uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c289340(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    lVar9 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c28a7a0();
    _objc_release(lVar9);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 10b0ee700; end: 10b0ee737; -[SCContentDeliveryStreamingRequestHandleImpl .cxx_destruct] */

void FUN_10b0ee700(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ee738; end: 10b0ee883;  */

void FUN_10b0ee738(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e0a478;
  }
  else {
    _objc_retain();
    lVar1 = param_1;
    func_0x00010c0c46a0();
    func_0x00010b7f519c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10b0ee884; end: 10b0ee93f;  */

long FUN_10b0ee884(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar3 = param_1;
  func_0x00010c0c46a0();
  lVar1 = param_2;
  func_0x00010c0c46a0();
  if (lVar3 == lVar1) {
    lVar1 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0c5180(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10b0ee940; end: 10b0eea83;  */

ulong FUN_10b0ee940(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar5 = param_1;
  func_0x00010bf529e0();
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (uVar5 == uVar1) {
    uVar1 = param_1;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c246ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf529e0();
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    else {
      uVar6 = 0;
      do {
        uVar3 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0dfd40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        FUN_10b0ee884(uVar3,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar5 & 1) == 0) break;
        uVar6 = uVar6 + 1;
        uVar3 = uVar1;
        func_0x00010bf529e0();
      } while (uVar6 < uVar3);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10b0eea84; end: 10b0eeb8f;  */

undefined * FUN_10b0eea84(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c46a0(param_2);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c46a0(param_3);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c0c5180(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf433a0(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 10b0eeb90; end: 10b0eebab;  */

void FUN_10b0eeb90(void)

{
  _objc_opt_new(PTR_PTR_1126b7fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0eebac; end: 10b0eebdf;  */

void FUN_10b0eebac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf56350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c0248,PTR_s_createFromURL__1125b3278,param_1);
  return;
}



/* Entry: 10b0eebe0; end: 10b0eec8b; -[SCInMemoryContentResultImpl initWithContentKey:data:isPlatformSafe:] */

undefined1 *
FUN_10b0eebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705c80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0eec8c; end: 10b0eec93; -[SCInMemoryContentResultImpl getTotalSize] */

void FUN_10b0eec8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_length_1126018a8);
  return;
}



/* Entry: 10b0eec94; end: 10b0eec9b; -[SCInMemoryContentResultImpl getPrefetchSize] */

void FUN_10b0eec94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_length_1126018a8);
  return;
}



/* Entry: 10b0eec9c; end: 10b0eeca3; -[SCInMemoryContentResultImpl getAvailableSize] */

void FUN_10b0eec9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_length_1126018a8);
  return;
}



/* Entry: 10b0eeca4; end: 10b0eecab; -[SCInMemoryContentResultImpl pushBytesToWriteStream:start:count:] */

undefined8 FUN_10b0eeca4(void)

{
  return 0;
}



/* Entry: 10b0eecac; end: 10b0eecd3; -[SCInMemoryContentResultImpl getContentKey] */

void FUN_10b0eecac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0eecd4; end: 10b0eecdb; -[SCInMemoryContentResultImpl getStatus] */

undefined8 FUN_10b0eecd4(void)

{
  return 0;
}



/* Entry: 10b0eecdc; end: 10b0eed0f; -[SCInMemoryContentResultImpl createReadStream] */

void FUN_10b0eecdc(void)

{
  _objc_alloc(PTR_PTR_1126b8000);
  func_0x00010c0083e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0eed10; end: 10b0eed37; -[SCInMemoryContentResultImpl retrieveIfSingleFile] */

void FUN_10b0eed10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0eed38; end: 10b0eed7f; -[SCInMemoryContentResultImpl getMetrics] */

void FUN_10b0eed38(void)

{
  _objc_alloc(PTR_PTR_1126dfb18);
  func_0x00010c02f3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0eed80; end: 10b0eed87; -[SCInMemoryContentResultImpl getIsStreaming] */

undefined8 FUN_10b0eed80(void)

{
  return 0;
}



/* Entry: 10b0eed88; end: 10b0eed8b; -[SCInMemoryContentResultImpl updateStreamingRequestContext:] */

void FUN_10b0eed88(void)

{
  return;
}



/* Entry: 10b0eed8c; end: 10b0eed93; -[SCInMemoryContentResultImpl getCurrentStreamingRequestContext] */

undefined8 FUN_10b0eed8c(void)

{
  return 0;
}



/* Entry: 10b0eed94; end: 10b0eed97; -[SCInMemoryContentResultImpl free] */

void FUN_10b0eed94(void)

{
  return;
}



/* Entry: 10b0eed98; end: 10b0eed9f; -[SCInMemoryContentResultImpl getIsZipArchive] */

undefined8 FUN_10b0eed98(void)

{
  return 0;
}



/* Entry: 10b0eeda0; end: 10b0eeda7; -[SCInMemoryContentResultImpl getZipEntryData:] */

undefined8 FUN_10b0eeda0(void)

{
  return 0;
}



/* Entry: 10b0eeda8; end: 10b0eedaf; -[SCInMemoryContentResultImpl getZipArchiveForLocalContent] */

undefined8 FUN_10b0eeda8(void)

{
  return 0;
}



/* Entry: 10b0eedb0; end: 10b0eedb7; -[SCInMemoryContentResultImpl getFilePath] */

undefined8 FUN_10b0eedb0(void)

{
  return 0;
}



/* Entry: 10b0eedb8; end: 10b0eedbf; -[SCInMemoryContentResultImpl getZipEntryFilePath:] */

undefined8 FUN_10b0eedb8(void)

{
  return 0;
}



/* Entry: 10b0eedc0; end: 10b0eedc3; -[SCInMemoryContentResultImpl addDownloadCompletionListener:] */

void FUN_10b0eedc0(void)

{
  return;
}



/* Entry: 10b0eedc4; end: 10b0eedcb; -[SCInMemoryContentResultImpl getIsAuthoritative] */

undefined8 FUN_10b0eedc4(void)

{
  return 0;
}



/* Entry: 10b0eedcc; end: 10b0eedd3; -[SCInMemoryContentResultImpl hasEncryptionData] */

undefined8 FUN_10b0eedcc(void)

{
  return 0;
}



/* Entry: 10b0eedd4; end: 10b0eeddb; -[SCInMemoryContentResultImpl getErrorMessage] */

undefined8 FUN_10b0eedd4(void)

{
  return 0;
}



/* Entry: 10b0eeddc; end: 10b0eede3; -[SCInMemoryContentResultImpl stitchFilePath] */

undefined8 FUN_10b0eeddc(void)

{
  return 0;
}



/* Entry: 10b0eede4; end: 10b0eedeb; -[SCInMemoryContentResultImpl streamingProtocol] */

undefined8 FUN_10b0eede4(void)

{
  return 0;
}



/* Entry: 10b0eedec; end: 10b0eedf3; -[SCInMemoryContentResultImpl resolvedUrl] */

undefined8 FUN_10b0eedec(void)

{
  return 0;
}



/* Entry: 10b0eedf4; end: 10b0eedfb; -[SCInMemoryContentResultImpl isEncrypted] */

undefined8 FUN_10b0eedf4(void)

{
  return 0;
}



/* Entry: 10b0eedfc; end: 10b0eedff; -[SCInMemoryContentResultImpl logConsumed:bytesRange:] */

void FUN_10b0eedfc(void)

{
  return;
}



/* Entry: 10b0eee00; end: 10b0eee2f; -[SCInMemoryContentResultImpl .cxx_destruct] */

void FUN_10b0eee00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0eee30; end: 10b0eeeb3; -[SCNContentManagerReadStream initWithData:isPlatformSafe:] */

undefined1 *
FUN_10b0eee30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705c88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0eeeb4; end: 10b0eef07; -[SCNContentManagerReadStream getSerializedContentObject] */

void FUN_10b0eeeb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010c08fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 8),PTR_s_length_1126018a8);
  return;
}



/* Entry: 10b0eef08; end: 10b0eef0f; -[SCNContentManagerReadStream getTotalSize] */

void FUN_10b0eef08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_length_1126018a8);
  return;
}



/* Entry: 10b0eef10; end: 10b0eef37; -[SCNContentManagerReadStream getDataView:] */

void FUN_10b0eef10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0eef38; end: 10b0eef5f; -[SCNContentManagerReadStream getDataRefIfWholeChunk] */

void FUN_10b0eef38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0eef60; end: 10b0eefb3; -[SCNContentManagerReadStream reset] */

void FUN_10b0eef60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}


