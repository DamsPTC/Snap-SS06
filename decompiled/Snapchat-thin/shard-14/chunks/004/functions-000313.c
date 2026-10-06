/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b267aec; end: 10b267af3; -[SCRequestBatchEntity entityType] */

undefined8 FUN_10b267aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b267af4; end: 10b267afb; -[SCRequestBatchEntity request] */

undefined8 FUN_10b267af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b267afc; end: 10b267b03; -[SCRequestBatchEntity successCallbackQueue] */

undefined8 FUN_10b267afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b267b04; end: 10b267b0b; -[SCRequestBatchEntity failureCallbackQueue] */

undefined8 FUN_10b267b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b267b0c; end: 10b267b13; -[SCRequestBatchEntity successBlock] */

undefined8 FUN_10b267b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b267b14; end: 10b267b1b; -[SCRequestBatchEntity failureBlock] */

undefined8 FUN_10b267b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b267b1c; end: 10b267b23; -[SCRequestBatchEntity completionQueue] */

undefined8 FUN_10b267b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b267b24; end: 10b267b2b; -[SCRequestBatchEntity completionBlock] */

undefined8 FUN_10b267b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b267b2c; end: 10b267ba3; -[SCRequestBatchEntity .cxx_destruct] */

void FUN_10b267b2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b267ba4; end: 10b267c37; -[SCRequestInfoContainer URLSession:task:didCompleteWithError:] */

void FUN_10b267ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSURLSessionDataTask_1126dfeb0;
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010be82fc0(param_1);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b267c38; end: 10b267caf; -[SCRequestInfoContainer URLSession:dataTask:didReceiveData:] */

void FUN_10b267c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010be82fc0(param_1);
  uVar1 = param_4;
  func_0x00010bf52c80(param_4);
  uVar2 = param_4;
  func_0x00010bf52c40(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0e5df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_onReadCompletedTotalBodyBytesRec_112617190,uVar1,uVar2);
  return;
}



/* Entry: 10b267cb0; end: 10b267cbb; -[SCRequestInfoContainer URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:] */

void FUN_10b267cb0(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0e7d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_onWriteCompletedTotalBytesSent_t_112617960,in_x5,in_x6);
  return;
}



/* Entry: 10b267cbc; end: 10b267d27;  */

void FUN_10b267cbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    lVar1 = param_1;
    func_0x00010bf88ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,0);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b267d28; end: 10b267eb7; -[SCRequestInfoContainer URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:] */

void FUN_10b267d28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1;
  func_0x00010bf88ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218b40();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf88ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fae0();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010bf88ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,param_1,0);
      _objc_release(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10b267eb8;
      puStack_58 = &UNK_1108434b0;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x000107c27d8c(uVar2,&puStack_70);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b267eb8; end: 10b267f23;  */

void FUN_10b267eb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    lVar1 = param_1;
    func_0x00010bf88ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,0);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b267f24; end: 10b267fb3; -[SCRequestInfoContainer URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:] */

void FUN_10b267f24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c135860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed640();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf88ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218b40();
  _objc_release(uVar1);
  func_0x00010bf88ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b267fb4; end: 10b267fb7; -[SCRequestInfoContainer URLSession:downloadTask:didFinishDownloadingToURL:] */

void FUN_10b267fb4(void)

{
  return;
}



/* Entry: 10b267fb8; end: 10b26802f; -[SCRequestInfoContainer monitorProgressiveDownloadWithQueue:callback:] */

void FUN_10b267fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b268030; end: 10b268227; -[SCRequestInfoContainer _progressiveUpdateDataTask:data:error:completed:] */

void FUN_10b268030(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined *param_5,
                  int param_6)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    iVar2 = param_6;
    if (param_4 != 0) {
      iVar2 = 1;
    }
    if ((param_3 != 0) && (iVar2 != 0)) {
      uVar3 = param_3;
      func_0x00010c13b720();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
      _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar6);
      uVar1 = uVar3;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      _objc_retain(param_5);
      puVar6 = param_5;
      if (param_5 == (undefined *)0x0) {
        uVar3 = uVar1;
        func_0x00010c252ee0();
        if (((long)uVar3 < 200) || (uVar3 = uVar1, func_0x00010c252ee0(), 299 < (long)uVar3)) {
          puVar6 = PTR_PTR_1126dfe78;
          uVar3 = param_3;
          func_0x00010bf5fde0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c252f20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
        }
        else {
          puVar6 = (undefined *)0x0;
        }
      }
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10b268228;
      puStack_80 = &UNK_110878f70;
      uStack_78 = uVar1;
      _objc_retain(param_4);
      uStack_58 = (undefined1)param_6;
      lStack_70 = param_4;
      lStack_68 = param_1;
      puStack_60 = puVar6;
      _objc_retain(puVar6);
      _objc_retain(uVar1);
      ppuVar5 = &puStack_98;
      _objc_retainBlock(ppuVar5);
      func_0x000107c27d8c(*(undefined8 *)(param_1 + 8),ppuVar5);
      _objc_release(ppuVar5);
      _objc_release(puStack_60);
      _objc_release(lStack_70);
      _objc_release(uStack_78);
      _objc_release(puVar6);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b268228; end: 10b2682e7;  */

void FUN_10b268228(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf001c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252ee0(uVar3);
  (**(code **)(lVar5 + 0x10))(lVar5,uVar4,uVar2,uVar3,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 8) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10b2682e8; end: 10b26836b; -[SCRequestInfoContainer monitorDownloadProgressWithCallback:] */

void FUN_10b2682e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26836c; end: 10b268417; -[SCRequestInfoContainer monitorDownloadProgressWithQueue:callback:] */

void FUN_10b26836c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b268418; end: 10b2684e3; -[SCRequestInfoContainer monitorUploadProgressWithCallback:] */

void FUN_10b268418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar4);
  _objc_sync_enter(uVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  uVar3 = param_3;
  func_0x00010bf51e00(param_3);
  uVar2 = uVar3;
  _objc_retainBlock();
  func_0x00010befa120(lVar5,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_sync_exit(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2684e4; end: 10b268537; -[SCRequestInfoContainer removeDownloadProgressMonitoring] */

void FUN_10b2684e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b268538; end: 10b2689e3; +[SCRequestInfoContainer statusCodeErrorForRequest:response:data:] */

undefined *
FUN_10b268538(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
             long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar10 = param_4;
  func_0x00010c252ee0();
  if (puVar10 == (undefined *)0x130) {
    puVar10 = param_4;
    func_0x00010bf001c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar10);
    if (puVar1 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      goto LAB_10b26898c;
    }
  }
  uStack_98 = *(undefined8 *)PTR__NSURLErrorFailingURLErrorKey_110345628;
  puVar10 = param_4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f60998;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f609b8;
  puVar2 = param_4;
  puStack_80 = puVar1;
  ppuStack_78 = param_3;
  func_0x00010bf51e00();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&uStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(puVar10);
  if (param_5 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    puVar1 = puVar10;
    func_0x00010c08fa60();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar5,param_2,puVar10,&PTR____CFConstantStringClassReference_110f9c8d8);
    }
    puVar1 = PTR_PTR_1126bbfc8;
    func_0x00010c120000(PTR_PTR_1126bbfc8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar5,param_2,puVar1,&PTR____CFConstantStringClassReference_110f9c8f8);
    }
    _objc_release(puVar1);
    _objc_release(puVar10);
  }
  ppuVar6 = param_3;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar7 = ppuVar6;
  }
  func_0x00010c1d0640(puVar5,param_2,ppuVar7,&PTR____CFConstantStringClassReference_110f9ced8);
  _objc_release(ppuVar6);
  ppuVar7 = param_3;
  func_0x00010c296ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc6318);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar6 = ppuVar7;
  func_0x00010c08fa60();
  func_0x00010c0df760(puVar10,param_2,ppuVar6 != (undefined **)0x0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5,param_2,puVar10,&PTR____CFConstantStringClassReference_110f9cef8);
  _objc_release(puVar10);
  ppuVar6 = param_3;
  func_0x00010c296ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110f9c878);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar5,param_2,ppuVar6,&PTR____CFConstantStringClassReference_110f9cf18);
  }
  ppuVar8 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  if (ppuVar9 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar5,param_2,ppuVar9,&PTR____CFConstantStringClassReference_110f9cf38);
  }
  ppuVar8 = param_3;
  func_0x00010c296ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd9d18);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar8 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar5,param_2,ppuVar8,&PTR____CFConstantStringClassReference_110f9cf58);
  }
  puVar10 = param_4;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar5,param_2,puVar1,&PTR____CFConstantStringClassReference_110f9cf78);
  }
  puVar10 = param_4;
  func_0x00010c252ee0();
  if (0 < (long)puVar10) {
    func_0x00010c252ee0(param_4);
  }
  puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  _objc_release(puVar1);
  _objc_release(ppuVar8);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  _objc_release(ppuVar7);
  _objc_release(puVar5);
LAB_10b26898c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    return param_3[8];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 10b2689e4; end: 10b2689eb; -[SCRequestInfoContainer requestInfo] */

undefined8 FUN_10b2689e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b2689ec; end: 10b268a1b; -[SCRequestInfoContainer setRequestInfo:] */

void FUN_10b2689ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b268a1c; end: 10b268a4b; -[SCRequestInfoContainer setUploadProgress:] */

void FUN_10b268a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b268a4c; end: 10b268a7b; -[SCRequestInfoContainer setDownloadProgress:] */

void FUN_10b268a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b268a7c; end: 10b268a87; -[SCRequestInfoContainer setConcurrencyObserver:] */

void FUN_10b268a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10b268a88; end: 10b268a8f; -[SCRequestInfoContainer moveFileError] */

undefined8 FUN_10b268a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b268a90; end: 10b268abf; -[SCRequestInfoContainer setMoveFileError:] */

void FUN_10b268a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b268ac0; end: 10b268b17; -[SCResumableRequestHandler _cleanUpResumeDataStore] */

void FUN_10b268ac0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b268b18;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10b268b18; end: 10b268b23;  */

void FUN_10b268b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b268b24; end: 10b268c27; -[SCResumableRequestHandler resumeDataWithRequestKey:] */

void FUN_10b268b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10b268c28;
  uStack_40 = 0x10b268c38;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b268c28; end: 10b268c3f;  */

void FUN_10b268c28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b268c40; end: 10b268cab;  */

void FUN_10b268c40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0dff20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_removeObjectForKey__112628f18
               ,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b268cac; end: 10b268d6f; -[SCResumableRequestHandler cancelRequestWithKey:resumeData:] */

void FUN_10b268cac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b268d70;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b268d70; end: 10b268d83;  */

void FUN_10b268d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_setObject_forKey__112651b80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b268d84; end: 10b268e13; -[SCResumableRequestHandler removeDataWithRequestKey:] */

void FUN_10b268d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b268e14;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b268e14; end: 10b268e1f;  */

void FUN_10b268e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b268e20; end: 10b268e23; -[SCResumableRequestHandler cache:willEvictObject:] */

void FUN_10b268e20(void)

{
  return;
}



/* Entry: 10b268e24; end: 10b268e2f; -[SCResumableRequestHandler whiteListedHosts] */

void FUN_10b268e24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 10b268e30; end: 10b268e37; -[SCResumableRequestHandler setWhiteListedHosts:] */

void FUN_10b268e30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10b268e38; end: 10b268e73; -[SCResumableRequestHandler .cxx_destruct] */

void FUN_10b268e38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b268e74; end: 10b268e7f; -[SCRequest mediaOrchestrationAttemptId] */

void FUN_10b268e74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)
            (param_1,PTR_s_mediaOrchestrationAttemptId_11260f090);
  return;
}



/* Entry: 10b268e80; end: 10b268e8f; -[SCRequest setMediaOrchestrationAttemptId:] */

void FUN_10b268e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)
            (param_1,PTR_s_mediaOrchestrationAttemptId_11260f090,param_3,3);
  return;
}



/* Entry: 10b268e90; end: 10b268ee7; -[SCNNetworkTypesCompressionConfig mapCompressionLevel] */

undefined8 FUN_10b268e90(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c098a00();
  if (iVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    iVar1 = param_1;
    func_0x00010c098a00();
    if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      func_0x00010c098a00();
      uVar2 = 0xffffffffffffffff;
      if (param_1 == 9) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* Entry: 10b268ee8; end: 10b268fbb; -[SCRequest domainType] */

undefined8 FUN_10b268ee8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c074220();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c06ce20();
      _objc_release(param_1);
      uVar4 = 3;
      if ((int)uVar1 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10b268fbc; end: 10b268fef; -[SCRequest domainTypeString] */

undefined ** FUN_10b268fbc(ulong param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bf87f20();
  if (param_1 < 4) {
    ppuVar1 = (undefined **)(&PTR_PTR_110ccbfc8)[param_1];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110def658;
  }
  return ppuVar1;
}



/* Entry: 10b268ff0; end: 10b269137; +[SCRequest createProtoRequestWithEndpoint:proto:additionalHeaders:key:contexts:priority:requestType:authenticated:] */

void FUN_10b268ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d0560();
  func_0x00010bef7f60(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf57c60(param_1,param_2,param_3,uVar2,puVar1,param_6,param_7,param_8,1,param_9,
                      param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b269138; end: 10b269283; +[SCRequest createProtoRequestWithURL:proto:additionalHeaders:key:contexts:priority:requestType:authenticated:] */

void FUN_10b269138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d0560();
  func_0x00010bef7f60(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf58780(param_1,param_2,param_3,0,uVar2,puVar1,param_6,param_7,param_8,1,param_9,1,
                      param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b269284; end: 10b26938b; +[SCRequest performProtoRequestWithEndpoint:proto:additionalHeaders:key:contexts:priority:requestType:authenticated:userSession:responseClass:completionQueue:completion:] */

void FUN_10b269284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_12);
  func_0x00010bf58140(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_12;
  func_0x00010c135d00(param_12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  func_0x00010c25f4c0(uVar1,param_2,param_1,param_13,param_14,param_15);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26938c; end: 10b2694af; +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:priority:connectivity:requestType:method:authenticated:] */

void FUN_10b26938c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbf20;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc1d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf586a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1,param_8,param_9
                      ,param_10,param_11,param_12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b2694b0; end: 10b2694e7; +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:] */

void FUN_10b2694b0(void)

{
  func_0x00010bf586c0();
  return;
}



/* Entry: 10b2694e8; end: 10b26953b; +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:useGzipRequestCompression:] */

void FUN_10b2694e8(void)

{
  func_0x00010bf58640(0xbff0000000000000);
  return;
}



/* Entry: 10b26953c; end: 10b269673; +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:priority:connectivity:requestType:method:authenticated:readTimeoutInterval:] */

void FUN_10b26953c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbf20;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58640(param_1,param_2,param_3,param_4,param_5,param_6,0,param_7,param_8,puVar1,
                      param_9,param_10,param_11,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b269674; end: 10b2696ab; +[SCRequest createRequestWithEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:] */

void FUN_10b269674(void)

{
  func_0x00010bf58660();
  return;
}



/* Entry: 10b2696ac; end: 10b2696c3; +[SCRequest createRequestWithEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:useGzipRequestCompression:] */

void FUN_10b2696ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf58650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xbff0000000000000,param_1,PTR_s_createRequestWithEndpoint_parame_1125b3b38);
  return;
}



/* Entry: 10b2696c4; end: 10b2697eb; +[SCRequest createPostRequestWithEndpoint:postData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:authenticated:] */

void FUN_10b2696c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbf20;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58640(0xbff0000000000000,param_1,param_2,param_3,
                      PTR____NSDictionary0__struct_11034ab58,param_4,param_5,param_6,param_7,puVar1,
                      param_8,param_9,param_10,1,param_11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b2697ec; end: 10b26984b; +[SCRequest createPostRequestWithEndpoint:postData:additionalHTTPHeaders:key:contexts:requestParser:priority:connectivity:requestType:authenticated:] */

void FUN_10b2697ec(void)

{
  func_0x00010bf58640(0xbff0000000000000);
  return;
}



/* Entry: 10b26984c; end: 10b269a1f; +[SCRequest createRequestWithEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:readTimeoutInterval:useGzipRequestCompression:] */

void FUN_10b26984c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,uint param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126dfd58;
  _objc_alloc();
  puVar2 = puVar1;
  _CACurrentMediaTime();
  if ((param_15 & 0x100) == 0) {
    func_0x00010c00fe40(uVar3,param_1,puVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                        ,param_11,param_12,param_13,param_10,param_14,(undefined1)param_15);
  }
  else {
    func_0x00010b88c454();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00fe40(uVar3,param_1,puVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                        ,param_11,param_12,param_13,param_10,param_14,(undefined1)param_15);
    _objc_release(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b269a20; end: 10b269b5f; +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:readTimeoutInterval:] */

void FUN_10b269a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbf20;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58720(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,puVar1,param_12,param_13,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b269b60; end: 10b269b93; +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:] */

void FUN_10b269b60(void)

{
  func_0x00010bf58720(0xbff0000000000000);
  return;
}



/* Entry: 10b269b94; end: 10b269bab; +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:useGzipRequestCompression:] */

void FUN_10b269b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf58730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xbff0000000000000,param_1,PTR_s_createRequestWithURL_parameters__1125b3b70);
  return;
}



/* Entry: 10b269bac; end: 10b269cf3; +[SCRequest createUploadRequestWithURL:parameters:uploadFileURL:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:] */

void FUN_10b269bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfdb0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c057b80(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,puVar2,param_11,param_12,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b269cf4; end: 10b269e2f; +[SCRequest createBackgroundRequestWithURL:parameters:uploadFileURL:additionalHTTPHeaders:key:contexts:requestType:method:] */

void FUN_10b269cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfdb0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c057b80(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,5,1,puVar2,
                      param_9,param_10,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b269e30; end: 10b269f8f; +[SCRequest createStreamingRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:authenticated:estimatedSizeBytes:] */

void FUN_10b269e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfd58;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c057b60(param_1,0xbff0000000000000,puVar1,param_3,param_4,param_5,param_6,param_7,
                      param_8,param_9,param_10,param_11,puVar2,param_12,param_13,param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b269f90; end: 10b269fe7; -[SCRequest didExecute] */

void FUN_10b269f90(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c1f68c0(param_2,param_3,2);
  lVar1 = param_2;
  func_0x00010c292920();
  if ((int)lVar1 != 0) {
    _CACurrentMediaTime();
    *(long *)(param_2 + 0x148) =
         *(long *)(param_2 + 0x148) + (long)((param_1 - *(double *)(param_2 + 0x150)) * 1000.0);
  }
  return;
}



/* Entry: 10b269fe8; end: 10b26a063; -[SCRequest executeWithAuthenticator:completionQueue:completionBlock:] */

void FUN_10b269fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  func_0x00010c1f68c0();
  puVar2 = puVar1;
  func_0x00010c26a540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c212790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setTask__112662408,0);
  return;
}



/* Entry: 10b26a064; end: 10b26a0af; -[SCRequest cancel] */

void FUN_10b26a064(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1f68c0(param_1,param_2,4);
  uVar1 = param_1;
  func_0x00010c26a540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c212790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTask__112662408,0);
  return;
}



/* Entry: 10b26a0b0; end: 10b26a0b3; -[SCRequest pause] */

void FUN_10b26a0b0(void)

{
  return;
}



/* Entry: 10b26a0b4; end: 10b26a0b7; -[SCRequest resumeWithCompletionQueue:completionBlock:] */

void FUN_10b26a0b4(void)

{
  return;
}



/* Entry: 10b26a0b8; end: 10b26a0bb; -[SCRequest cleanUp] */

void FUN_10b26a0b8(void)

{
  return;
}



/* Entry: 10b26a0bc; end: 10b26a0c3; -[SCRequest timeoutInterval] */

undefined8 FUN_10b26a0bc(void)

{
  return 0xbff0000000000000;
}



/* Entry: 10b26a0c4; end: 10b26a107; -[SCRequest sessionTimeoutInterval] */

undefined8 FUN_10b26a0c4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270500();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b26a108; end: 10b26a15b; -[SCRequest path] */

undefined8 FUN_10b26a108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10b26a15c; end: 10b26a1af; -[SCRequest url] */

undefined8 FUN_10b26a15c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10b26a1b0; end: 10b26a203; -[SCRequest urlRequest] */

undefined8 FUN_10b26a1b0(undefined8 param_1,undefined8 param_2)

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
  return 0;
}



/* Entry: 10b26a204; end: 10b26a257; -[SCRequest approximateRequestSize] */

undefined8 FUN_10b26a204(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10b26a258; end: 10b26a25f; -[SCRequest resumableDownloadedData] */

undefined8 FUN_10b26a258(void)

{
  return 0;
}



/* Entry: 10b26a260; end: 10b26a2c3; -[SCRequest session] */

void FUN_10b26a260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bc0e8;
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010c136d60();
    func_0x00010c15ff20(puVar1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b26a2c4; end: 10b26a2cb; -[SCRequest addListener:] */

void FUN_10b26a2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10b26a2cc; end: 10b26a2d3; -[SCRequest removeListener:] */

void FUN_10b26a2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10b26a2d4; end: 10b26a30b; -[SCRequest setDisplayContext:] */

void FUN_10b26a2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c289330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateRequestContext_11267fef0);
  return;
}



/* Entry: 10b26a30c; end: 10b26a31f; -[SCRequest setTrackingInfoWithId:type:mediaType:expirationInDays:] */

void FUN_10b26a30c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTrackingInfoWithId_mediaId_ty_112663f08,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 10b26a320; end: 10b26a347; -[SCRequest setTrackingInfoWithId:mediaId:type:mediaType:expirationInDays:] */

void FUN_10b26a320(void)

{
  func_0x00010c219360();
  return;
}



/* Entry: 10b26a348; end: 10b26a43b; -[SCRequest setTrackingInfoWithId:mediaId:type:mediaType:contentResolveTime:mediaContextType:expirationInDays:] */

void FUN_10b26a348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8060;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c054fa0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c219320(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b26a43c; end: 10b26a487; -[SCRequest setRequestBatchId:] */

void FUN_10b26a43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xf0) != 2) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26a488; end: 10b26a597; -[SCRequest setTask:] */

void FUN_10b26a488(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf5fde0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c296ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(lVar2);
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      *(long *)(param_1 + 0xa8) = lVar2;
    }
    else {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined **)(param_1 + 0xa8) = puVar3;
    }
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010bf93720();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    _objc_release(uVar5);
    lVar1 = param_1;
    func_0x00010c278f20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  *(long *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10b26a598; end: 10b26a5df; -[SCRequest taskContextWhenCompleted] */

void FUN_10b26a598(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf4f6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b26a5e0; end: 10b26a7c7; -[SCRequest updateWithRequest:] */

void FUN_10b26a5e0(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  double dVar8;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf854e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf4f6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c0d3c80();
  _objc_release(uVar7);
  _objc_release(uVar1);
  lVar3 = param_2;
  func_0x00010bf854e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4f6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d500(uVar2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126dfeb8;
  lVar3 = param_2;
  func_0x00010bf854e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ac0(puVar5,param_3,uVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = puVar5;
  _objc_release(uVar6);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c113c80();
  uVar1 = param_4;
  func_0x00010c113c80();
  if (lVar3 < (long)uVar1) {
    uVar1 = param_4;
    func_0x00010c113c80(param_4);
    func_0x00010c1e3380(param_2,param_3,uVar1);
  }
  uVar1 = param_4;
  func_0x00010c292920(param_4);
  func_0x00010c21e860(param_2,param_3,uVar1);
  uVar7 = *(ulong *)(param_2 + 0x88);
  uVar1 = param_4;
  func_0x00010bfec9e0();
  if (uVar1 < uVar7) {
    uVar1 = param_4;
    func_0x00010bfec9e0();
    *(ulong *)(param_2 + 0x88) = uVar1;
  }
  dVar8 = *(double *)(param_2 + 0xc0);
  func_0x00010c136b60(param_4);
  if (param_1 < dVar8) {
    func_0x00010c136b60(param_4);
    *(double *)(param_2 + 0xc0) = param_1;
  }
  uVar1 = param_4;
  func_0x00010c134b80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebae0(param_2,param_3,uVar1);
  _objc_release(uVar1);
  lVar3 = param_2;
  func_0x00010bf48e80();
  if (lVar3 == 0) {
    uVar1 = param_4;
    func_0x00010bf48e80(param_4);
    func_0x00010c180f80(param_2,param_3,uVar1);
  }
  func_0x00010c289320(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b26a7c8; end: 10b26a7cf; -[SCRequest setPriority:] */

void FUN_10b26a7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b26a7d0; end: 10b26a7d7; -[SCRequest setImportance:] */

void FUN_10b26a7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b26a7d8; end: 10b26a7df; -[SCRequest setRequestTrigger:] */

void FUN_10b26a7d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b26a7e0; end: 10b26a80f; -[SCRequest setLoggingInfo:] */

void FUN_10b26a7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26a810; end: 10b26a813; -[SCRequest setTimeoutInterval:] */

void FUN_10b26a810(void)

{
  return;
}



/* Entry: 10b26a814; end: 10b26ab1b; -[SCRequest urlWithClientSwitchboardConfig:] */

void FUN_10b26a814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  if (*(long *)(param_1 + 0x120) != 0) {
    uVar6 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44780(puVar1,param_2,uVar6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar2 = *(long *)(param_1 + 0x120);
    func_0x00010c137ce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x120);
      func_0x00010c137ce0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(lVar2);
      if ((uVar5 & 1) == 0) {
        uVar6 = param_3;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010bfe4420();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 0x128) = uVar4;
        _objc_release(uVar9);
        _objc_release(uVar6);
      }
    }
    lVar2 = *(long *)(param_1 + 0x120);
    func_0x00010c137ce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar6 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9200(puVar1,param_2,uVar4);
      _objc_release(uVar4);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x120);
      func_0x00010c137ce0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9200(puVar1,param_2,uVar6);
    }
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x120);
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar6 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820(puVar1,param_2,uVar4);
      _objc_release(uVar4);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x120);
      func_0x00010c0f5800(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820(puVar1,param_2,uVar6);
    }
    _objc_release(uVar6);
    _objc_release(lVar2);
    puVar7 = puVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c21afe0(param_3,param_2,puVar7);
      func_0x00010bdc64a0(param_1,param_2,param_3);
    }
    lVar8 = *(long *)(param_1 + 0x120);
    func_0x00010c2704a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c121a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    if (lVar2 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x120);
      func_0x00010c2704a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010c121a80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c067ec0();
      func_0x00010c215b60((double)(int)uVar4,param_1);
      _objc_release(uVar6);
      _objc_release(uVar9);
    }
    _objc_release(puVar7);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26ab1c; end: 10b26ac0b; -[SCRequest _tracingIdForUrlRequest:] */

void FUN_10b26ab1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf001a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010bf001a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 == 0) {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar3);
      lVar1 = lVar3;
    }
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b26ac0c; end: 10b26ae3b; -[SCRequest _addClientSBConfigHeaders:] */

void FUN_10b26ac0c(undefined **param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar8 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = param_1[0x24];
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        uVar9 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
        puVar3 = param_1[0x24];
        func_0x00010bfe02c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2201e0(param_3,param_2,puVar4,uVar9);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar11 = puVar11 + 1;
      } while (puVar5 != puVar11);
      puVar5 = puVar2;
      ppuVar8 = &puStack_130;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar5 = param_1[0x24];
  func_0x00010c142020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    ppuVar6 = (undefined **)param_1[0x24];
    func_0x00010c142020();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c2201e0(param_3,param_2,ppuVar6,&PTR____CFConstantStringClassReference_110dadcb8);
    _objc_release(ppuVar6);
  }
  iVar1 = (int)param_1[0x24];
  func_0x00010bf90060();
  if (iVar1 != 0) {
    lVar10 = param_3;
    func_0x00010bf001a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110f9c898;
    lVar7 = lVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar10);
    if (lVar7 == 0) {
      func_0x00010becdc40(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_1;
      func_0x00010c2201e0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110f9c898);
      _objc_release(param_1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  *(undefined ***)(param_3 + 0x10) = ppuVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}


