/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10702aa34; end: 10702ab17; -[SCCaptureSessionFixer _setupNewVideoDataSourceForNonLiveStreaming:] */

void FUN_10702aa34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf70d80();
  func_0x00010c18ccc0(lVar2,param_2,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5340();
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010beb1040(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10702ab18; end: 10702acd7; -[SCCaptureSessionFixer _setupVideoDataSourceListeners:] */

void FUN_10702ab18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb140();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260(lVar3,param_2,lVar4,2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260(lVar3,param_2,lVar4,2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf092a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260(lVar3,param_2,lVar4,2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c124400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10702acd8; end: 10702ae4f; -[SCCaptureSessionFixer _setupNewVideoDataSource] */

void FUN_10702acd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c149540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126d41d8;
  _objc_alloc(PTR_PTR_1126d41d8);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c03f860(puVar4,param_2,lVar1,uVar5,uVar7,lVar2,*(undefined8 *)(param_1 + 0x70));
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c221500();
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(lVar1);
  func_0x00010beb1040(param_1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10702ae50; end: 10702afc3; -[SCCaptureSessionFixer _setupVideoDataSourceWithNewSession] */

void FUN_10702ae50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf70d80();
  func_0x00010c229d00(lVar2,param_2,lVar3,lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229aa0(lVar4,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf092a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260(lVar3,param_2,lVar4,2);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10702afc4; end: 10702afcb;  */

void FUN_10702afc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fixAVSessionIfNecessary_112563940);
  return;
}



/* Entry: 10702afcc; end: 10702b023; -[SCCaptureSessionFixer onSessionStopRunning] */

void FUN_10702afcc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10702b024;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10702b024; end: 10702b02b;  */

void FUN_10702b024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__destroyLivenessConsistencyTimer_11255c668);
  return;
}



/* Entry: 10702b02c; end: 10702b203; -[SCCaptureSessionFixer sessionRuntimeError:] */

void FUN_10702b02c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf3ec40();
  if (lVar2 == -0x2e2b) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10702b204;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_2;
    _objc_retain(param_4);
    lStack_58 = param_4;
    func_0x00010c0f7fc0(lVar2,param_3,&puStack_80);
    _objc_release(lVar2);
    lVar2 = param_2 + 0x38;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10702b288;
    puStack_90 = &UNK_110842e18;
    lStack_88 = param_2;
    func_0x00010c0f7fc0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lStack_58;
  }
  else {
    if ((*(byte *)(param_2 + 0x30) & 1) != 0) goto LAB_10702b1e0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    uVar4 = 0x3ff0000000000000;
    if (1.0 <= param_1 - *(double *)(param_2 + 0x28)) {
      uVar4 = 0;
    }
    *(double *)(param_2 + 0x28) = param_1;
    lVar2 = param_2 + 0x38;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x10702b2f8;
    puStack_c0 = &UNK_110841f80;
    lStack_b8 = param_2;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    func_0x00010c0f7fe0(uVar4,lVar3,param_3,&puStack_d8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lStack_b0;
  }
  _objc_release(lVar2);
LAB_10702b1e0:
  _objc_release(param_4);
  return;
}



/* Entry: 10702b204; end: 10702b45b;  */

void FUN_10702b204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar1 = PTR_PTR_1126d41c0;
  func_0x00010bf79520(PTR_PTR_1126d41c0,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar1 = PTR_PTR_1126d41c0;
  func_0x00010bf7dce0(PTR_PTR_1126d41c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10702b45c; end: 10702b487;  */

void FUN_10702b45c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4c800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10702b488; end: 10702b4b3; -[SCCaptureSessionFixer _destroyLivenessConsistencyTimer] */

void FUN_10702b488(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702b4b4; end: 10702b57b; -[SCCaptureSessionFixer _livenessConsistency] */

void FUN_10702b4b4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c082b20();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010c11dfc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(lVar4);
      _objc_release(param_1);
    }
  }
  return;
}



/* Entry: 10702b57c; end: 10702b583;  */

void FUN_10702b57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__runningConsistencyCheckAndFix_112583a38);
  return;
}



/* Entry: 10702b584; end: 10702b663; -[SCCaptureSessionFixer applicationWillEnterForeground] */

void FUN_10702b584(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f88c0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10702b664; end: 10702b6a3;  */

void FUN_10702b664(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be98260(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
    func_0x00010be17e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10702b6a4; end: 10702b6ab;  */

void FUN_10702b6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beadc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupLivenessConsistencyTimerIf_1125890c8);
  return;
}



/* Entry: 10702b6ac; end: 10702b6af; -[SCCaptureSessionFixer applicationDidEnterBackground] */

void FUN_10702b6ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__destroyLivenessConsistencyTimer_11255c668);
  return;
}



/* Entry: 10702b6b0; end: 10702b7e7; -[SCCaptureSessionFixer detectorDidDetectBlackCamera:] */

void FUN_10702b6b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = 2;
  func_0x0001003a49a8(2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a880(uVar3,param_2,2,uVar2);
  _objc_release(uVar2);
  func_0x00010bec16a0(param_1);
  return;
}



/* Entry: 10702b7e8; end: 10702b90f; -[SCCaptureSessionFixer _sessionWasInterrupted:] */

void FUN_10702b7e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 5) {
    lVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10702b910; end: 10702b957;  */

void FUN_10702b910(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar1 = PTR_PTR_1126d41c0;
  func_0x00010bf79500(PTR_PTR_1126d41c0,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10702b958; end: 10702ba13; -[SCCaptureSessionFixer _sessionInterruptionEnded:] */

void FUN_10702b958(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10702ba14; end: 10702baab; -[SCCaptureSessionFixer .cxx_destruct] */

void FUN_10702ba14(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x38);
  return;
}



/* Entry: 10702baac; end: 10702bab7; -[SCLegacyCameraResourceServices .cxx_destruct] */

void FUN_10702baac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10702bab8; end: 10702bac3; -[SCMainCameraScopedLegacyCameraResourceServices .cxx_destruct] */

void FUN_10702bab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10702bac4; end: 10702bd53; -[SCManagedVideoSourceProviderStreamer initWithStreamProvider:hardwareResource:captureDeviceManager:hardwareRequestHandlerUpdatesObservable:] */

undefined1 *
FUN_10702bac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f84c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0xb0) = 3;
    *(undefined8 *)((long)puVar1 + 0xe8) = 0;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d41e0;
    _objc_alloc();
    func_0x00010c019ae0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d41e8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126d41f0;
    _objc_opt_new(PTR_PTR_1126d41f0);
    func_0x00010c0360c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined **)((long)puVar1 + 0xb8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126c82a8;
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar2);
    _objc_release(puVar3);
    func_0x00010c1dffe0(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c1d9980(*(undefined8 *)((long)puVar1 + 0x20));
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10702bd54; end: 10702bdb3; -[SCManagedVideoSourceProviderStreamer fieldOfView] */

float FUN_10702bd54(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e980();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (float)param_1;
}



/* Entry: 10702bdb4; end: 10702be1b; -[SCManagedVideoSourceProviderStreamer fieldOfViewObservable] */

void FUN_10702bdb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfac7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10702be1c; end: 10702be4b; -[SCManagedVideoSourceProviderStreamer addSampleBufferDisplayController:] */

void FUN_10702be1c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10702be4c; end: 10702be53; -[SCManagedVideoSourceProviderStreamer setSampleBufferDisplayEnabled:] */

void FUN_10702be4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 10702be54; end: 10702be57; -[SCManagedVideoSourceProviderStreamer setKeepLateFramesEnabled:] */

void FUN_10702be54(void)

{
  return;
}



/* Entry: 10702be58; end: 10702be5b; -[SCManagedVideoSourceProviderStreamer stopStreamingWithoutRemovingPreview] */

void FUN_10702be58(void)

{
  return;
}



/* Entry: 10702be5c; end: 10702be5f; -[SCManagedVideoSourceProviderStreamer stopStreamingAndFlushPreviewAfterDelay:] */

void FUN_10702be5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopStreaming_112673500);
  return;
}



/* Entry: 10702be60; end: 10702bf07; -[SCManagedVideoSourceProviderStreamer preemptivelyFlushOutdatedPreview] */

void FUN_10702be60(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10702bf08; end: 10702bf3b;  */

void FUN_10702bf08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfb30e0(*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10702bf3c; end: 10702bf47; -[SCManagedVideoSourceProviderStreamer waitUntilSampleBufferDisplayed:completionHandler:] */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_10702bf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar1 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar2;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar2 = pcRam0000000113817cd0;
  func_0x00010002a3a8(param_4);
  func_0x000107c61180();
  (*pcVar2)(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10702bf48; end: 10702bf9f; -[SCManagedVideoSourceProviderStreamer startStreaming] */

void FUN_10702bf48(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x91) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x91) = 1;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0b81c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 10702bfa0; end: 10702c08b; -[SCManagedVideoSourceProviderStreamer stopStreaming] */

void FUN_10702bfa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x91) == '\x01') {
    *(undefined1 *)(param_1 + 0x91) = 0;
    func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0b81e0();
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10702c08c; end: 10702c0bf;  */

void FUN_10702c08c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfb30e0(*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10702c0c0; end: 10702c0c7; -[SCManagedVideoSourceProviderStreamer addObserver:withFrameSamplingRate:] */

void FUN_10702c0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObserver_withFrameSamplingRat_11259c240);
  return;
}



/* Entry: 10702c0c8; end: 10702c0cf; -[SCManagedVideoSourceProviderStreamer removeObserver:] */

void FUN_10702c0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stopObservingManagedVideoDataSou_112673348);
  return;
}



/* Entry: 10702c0d0; end: 10702c0d7; -[SCManagedVideoSourceProviderStreamer setAsOutput:devicePosition:] */

void FUN_10702c0d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}



/* Entry: 10702c0d8; end: 10702c0df; -[SCManagedVideoSourceProviderStreamer setDevicePosition:] */

void FUN_10702c0d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10702c0e0; end: 10702c0eb; -[SCManagedVideoSourceProviderStreamer setVideoOrientation:] */

void FUN_10702c0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c29a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_videoOrientationChanged__112684400);
  return;
}



/* Entry: 10702c0ec; end: 10702c0f3; -[SCManagedVideoSourceProviderStreamer setViewportOrientation:] */

void FUN_10702c0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 10702c0f4; end: 10702c0f7; -[SCManagedVideoSourceProviderStreamer beginConfiguration] */

void FUN_10702c0f4(void)

{
  return;
}



/* Entry: 10702c0f8; end: 10702c0fb; -[SCManagedVideoSourceProviderStreamer commitConfiguration] */

void FUN_10702c0f8(void)

{
  return;
}



/* Entry: 10702c0fc; end: 10702c0ff; -[SCManagedVideoSourceProviderStreamer setupWithSession:devicePosition:] */

void FUN_10702c0fc(void)

{
  return;
}



/* Entry: 10702c100; end: 10702c103; -[SCManagedVideoSourceProviderStreamer setupWithARSession:] */

void FUN_10702c100(void)

{
  return;
}



/* Entry: 10702c104; end: 10702c107; -[SCManagedVideoSourceProviderStreamer setZoomFactor:] */

void FUN_10702c104(void)

{
  return;
}



/* Entry: 10702c108; end: 10702c10b; -[SCManagedVideoSourceProviderStreamer activateTorch] */

void FUN_10702c108(void)

{
  return;
}



/* Entry: 10702c10c; end: 10702c113; -[SCManagedVideoSourceProviderStreamer shouldRecreateWhenSessionChange] */

undefined8 FUN_10702c10c(void)

{
  return 1;
}



/* Entry: 10702c114; end: 10702c117; -[SCManagedVideoSourceProviderStreamer clearCurrentFrame] */

void FUN_10702c114(void)

{
  return;
}



/* Entry: 10702c118; end: 10702c11b; -[SCManagedVideoSourceProviderStreamer clearLastDepthData] */

void FUN_10702c118(void)

{
  return;
}



/* Entry: 10702c11c; end: 10702c1c3; -[SCManagedVideoSourceProviderStreamer invalidateCameraRenderRegion] */

void FUN_10702c11c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10702c1c4; end: 10702c1f3;  */

void FUN_10702c1c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    *(undefined8 *)(param_1 + 0x78) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10702c1f4; end: 10702c21b; -[SCManagedVideoSourceProviderStreamer cameraRenderRegionObservable] */

void FUN_10702c1f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10702c21c; end: 10702c223; -[SCManagedVideoSourceProviderStreamer frameAspectRatio] */

undefined8 FUN_10702c21c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10702c224; end: 10702c31b; -[SCManagedVideoSourceProviderStreamer displayLinkCallback:] */

void FUN_10702c224(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_58 [8];
  double dStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x40) = 1;
    func_0x00010c2709c0(param_4);
    dVar2 = param_1;
    func_0x00010bf8b160(param_4);
    _objc_initWeak(auStack_48,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    _objc_copyWeak(auStack_58,auStack_48);
    dStack_50 = param_1 + dVar2;
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10702c31c; end: 10702c40b;  */

void FUN_10702c31c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be14bc0(*(undefined8 *)(param_1 + 0x28),lVar1);
    puVar2 = auStack_38;
    _objc_initWeak(puVar2,lVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10702c40c; end: 10702c42b;  */

void FUN_10702c40c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10702c42c; end: 10702c72b; -[SCManagedVideoSourceProviderStreamer _fetchStreamFromProviderAtTime:] */

void FUN_10702c42c(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long alStack_90 [3];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar7);
  lVar1 = lVar7;
  func_0x00010c299660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d60();
  _objc_release(lVar1);
  _objc_release(lVar7);
  lVar7 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar7;
  func_0x00010c0b81a0(param_1);
  _objc_release(lVar7);
  if (lVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x58);
    if (lVar7 == 0) {
      func_0x00010c0d8f40(*(undefined8 *)(param_2 + 0x48));
      lVar3 = *(long *)(param_2 + 0xb8);
      func_0x00010c12fe60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      lVar3 = lVar1;
      if (lVar7 != 0) {
        alStack_90[2] = *(undefined8 *)(param_2 + 0x30);
        uStack_70 = 0;
        uStack_68 = 0;
        lVar3 = *(long *)(param_2 + 0xb8);
        alStack_90[1] = 0;
        uStack_78 = 0;
        alStack_90[0] = lVar1;
        func_0x00010c12f580(lVar3);
      }
      lVar7 = param_2 + 0x10;
      _objc_loadWeakRetained();
      lVar1 = lVar7;
      func_0x00010c255620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06e2c0();
      _objc_release(lVar1);
      _objc_release(lVar7);
      lVar7 = param_2;
      func_0x00010c29f1a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c8eb8;
      _objc_alloc(PTR_PTR_1126c8eb8);
      func_0x000100709514(*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xe8));
      func_0x00010c0413a0(puVar4);
      func_0x00010be222c0(param_2);
      func_0x00010bed4b60(param_2);
      func_0x00010bf78140(lVar7);
      if ((*(char *)(param_2 + 0x41) == '\x01') && (lVar7 == 0)) {
        func_0x00010bf963c0(*(undefined8 *)(param_2 + 0x48));
      }
      puVar5 = PTR_PTR_1126d3350;
      _objc_alloc(PTR_PTR_1126d3350);
      func_0x00010c041380();
      puVar6 = PTR_PTR_1126cd5b8;
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      _CMTimeMake(alStack_90,(long)param_1,1000000);
      func_0x00010bf78160(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      puVar6 = PTR_PTR_1126cd5b8;
      func_0x00010bf747c0(PTR_PTR_1126cd5b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      _CFRelease(lVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(lVar7);
    }
    else {
      lVar3 = lVar1;
      _CMSampleBufferGetImageBuffer(lVar1);
      _CMSampleBufferGetPresentationTimeStamp(alStack_90,lVar1);
      (**(code **)(lVar7 + 0x10))(lVar7,lVar3,alStack_90);
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x58) = 0;
      _objc_release(uVar2);
      _CFRelease(lVar1);
    }
  }
  return;
}



/* Entry: 10702c72c; end: 10702c743; -[SCManagedVideoSourceProviderStreamer currentCVPixelBufferRef] */

void FUN_10702c72c(long param_1)

{
  _CMSampleBufferGetImageBuffer(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbbfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVPixelBufferRetain_11034a2a0)();
  return;
}



/* Entry: 10702c744; end: 10702c75f; -[SCManagedVideoSourceProviderStreamer preferredFrameTransformForReverseCamera] */

void FUN_10702c744(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  return;
}



/* Entry: 10702c760; end: 10702c78f; -[SCManagedVideoSourceProviderStreamer getNextPixelBufferWithCompletion:] */

void FUN_10702c760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702c790; end: 10702c797; -[SCManagedVideoSourceProviderStreamer invalidate] */

void FUN_10702c790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 10702c798; end: 10702c893; -[SCManagedVideoSourceProviderStreamer _updateCameraRenderRegion:] */

void FUN_10702c798(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  uVar3 = param_3;
  dVar6 = param_1;
  func_0x0001008e3740();
  param_2 = param_2 / param_1;
  dVar7 = dVar6 / param_2;
  dVar8 = (1.0 - dVar7) * 0.5;
  dVar1 = 0.0;
  if (param_2 < dVar6) {
    dVar8 = 0.0;
    dVar1 = (1.0 - param_2 / dVar6) * 0.5;
  }
  dVar2 = 1.0;
  if (param_2 < dVar6) {
    dVar7 = 1.0;
    dVar2 = param_2 / dVar6;
  }
  _CGRectEqualToRect(dVar1,dVar8,dVar2,dVar7,*(undefined8 *)(param_3 + 0x68),
                     *(undefined8 *)(param_3 + 0x70),*(undefined8 *)(param_3 + 0x78),
                     *(undefined8 *)(param_3 + 0x80));
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x60);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dStack_80 = dVar1;
    dStack_78 = dVar8;
    dStack_70 = dVar2;
    dStack_68 = dVar7;
    func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&dStack_80,
                        "{CGRect={CGPoint=dd}{CGSize=dd}}");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_4,puVar4);
    _objc_release(puVar4);
    *(double *)(param_3 + 0x68) = dVar1;
    *(double *)(param_3 + 0x70) = dVar8;
    *(double *)(param_3 + 0x78) = dVar2;
    *(double *)(param_3 + 0x80) = dVar7;
  }
  *(double *)(param_3 + 0x88) = param_2;
  return;
}



/* Entry: 10702c894; end: 10702c8cf; -[SCManagedVideoSourceProviderStreamer _getResolutionFromSampleBuffer:] */

undefined1  [16] FUN_10702c894(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  _CMSampleBufferGetImageBuffer(param_3);
  uVar1 = param_3;
  _CVPixelBufferGetWidth();
  _CVPixelBufferGetHeight(param_3);
  auVar2._0_8_ = (double)uVar1;
  auVar2._8_8_ = (double)param_3;
  return auVar2;
}



/* Entry: 10702c8d0; end: 10702c8db; -[SCManagedVideoSourceProviderStreamer _applicationDidBackground:] */

void FUN_10702c8d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 10702c8dc; end: 10702c8e7; -[SCManagedVideoSourceProviderStreamer _applicationWillForeground:] */

void FUN_10702c8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 10702c8e8; end: 10702c8ef; -[SCManagedVideoSourceProviderStreamer bufferDimensionObservable] */

undefined8 FUN_10702c8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10702c8f0; end: 10702c8fb; -[SCManagedVideoSourceProviderStreamer shouldCacheCurrentFrame] */

byte FUN_10702c8f0(long param_1)

{
  return *(byte *)(param_1 + 0x90) & 1;
}



/* Entry: 10702c8fc; end: 10702c903; -[SCManagedVideoSourceProviderStreamer setShouldCacheCurrentFrame:] */

void FUN_10702c8fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10702c904; end: 10702c90f; -[SCManagedVideoSourceProviderStreamer currentFrame] */

void FUN_10702c904(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa0,1);
  return;
}



/* Entry: 10702c910; end: 10702c91b; -[SCManagedVideoSourceProviderStreamer lastDepthData] */

void FUN_10702c910(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa8,1);
  return;
}



/* Entry: 10702c91c; end: 10702c923; -[SCManagedVideoSourceProviderStreamer isStreaming] */

undefined1 FUN_10702c91c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



/* Entry: 10702c924; end: 10702c92b; -[SCManagedVideoSourceProviderStreamer performer] */

undefined8 FUN_10702c924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10702c92c; end: 10702c933; -[SCManagedVideoSourceProviderStreamer videoOrientation] */

undefined8 FUN_10702c92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10702c934; end: 10702c93b; -[SCManagedVideoSourceProviderStreamer processingPipeline] */

undefined8 FUN_10702c934(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10702c93c; end: 10702c943; -[SCManagedVideoSourceProviderStreamer sampleBufferDisplayController] */

undefined8 FUN_10702c93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10702c944; end: 10702c94b; -[SCManagedVideoSourceProviderStreamer didAddAnchorsObservable] */

undefined8 FUN_10702c944(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10702c94c; end: 10702c953; -[SCManagedVideoSourceProviderStreamer didUpdateAnchorsObservable] */

undefined8 FUN_10702c94c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10702c954; end: 10702c95b; -[SCManagedVideoSourceProviderStreamer didRemoveAnchorsObservable] */

undefined8 FUN_10702c954(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10702c95c; end: 10702c963; -[SCManagedVideoSourceProviderStreamer resourceId] */

undefined8 FUN_10702c95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10702c964; end: 10702c96f; -[SCManagedVideoSourceProviderStreamer viewfinderProvider] */

void FUN_10702c964(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xe0,1);
  return;
}



/* Entry: 10702c970; end: 10702c977; -[SCManagedVideoSourceProviderStreamer setViewfinderProvider:] */

void FUN_10702c970(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10702c978; end: 10702c97f; -[SCManagedVideoSourceProviderStreamer viewportOrientation] */

undefined8 FUN_10702c978(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10702c980; end: 10702ca67; -[SCManagedVideoSourceProviderStreamer .cxx_destruct] */

void FUN_10702c980(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10702ca68; end: 10702cb03; -[SCDisplayLinkHandler initWithTarget:selector:displayLink:] */

undefined1 *
FUN_10702ca68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f84d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10702cb04; end: 10702cb7f; -[SCDisplayLinkHandler handleDisplayLinkTriggered] */

void FUN_10702cb04(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  pcVar1 = (code *)(param_1 + 0x18);
  _objc_loadWeakRetained();
  pcVar2 = pcVar1;
  func_0x00010c0cc960();
  _objc_release(pcVar1);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  (*pcVar2)(lVar3,uVar4,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10702cb80; end: 10702cba7; -[SCDisplayLinkHandler .cxx_destruct] */

void FUN_10702cb80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10702cba8; end: 10702cc6f; -[SCDisplayLink initWithTarget:selector:] */

undefined1 * FUN_10702cba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f84d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d41f8;
    _objc_alloc();
    func_0x00010c050aa0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10702cc70; end: 10702ccc7; +[SCDisplayLink displayLinkWithTarget:selector:] */

void FUN_10702cc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c050a80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10702ccc8; end: 10702cd27; -[SCDisplayLink dealloc] */

void FUN_10702ccc8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f84d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10702cd28; end: 10702cd2f; -[SCDisplayLink addToRunLoop:forMode:] */

void FUN_10702cd28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addToRunLoop_forMode__11259ca58);
  return;
}



/* Entry: 10702cd30; end: 10702cd37; -[SCDisplayLink removeFromRunLoop:forMode:] */

void FUN_10702cd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeFromRunLoop_forMode__112628c60);
  return;
}



/* Entry: 10702cd38; end: 10702cd3f; -[SCDisplayLink invalidate] */

void FUN_10702cd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 10702cd40; end: 10702cd47; -[SCDisplayLink timestamp] */

void FUN_10702cd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2709d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_timestamp_112679c98);
  return;
}



/* Entry: 10702cd48; end: 10702cd4f; -[SCDisplayLink duration] */

void FUN_10702cd48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_duration_1125c0600);
  return;
}



/* Entry: 10702cd50; end: 10702cd57; -[SCDisplayLink targetTimestamp] */

void FUN_10702cd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26a190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_targetTimestamp_112678288);
  return;
}



/* Entry: 10702cd58; end: 10702cd5f; -[SCDisplayLink isPaused] */

void FUN_10702cd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c079bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_isPaused_1125fc0f8);
  return;
}


