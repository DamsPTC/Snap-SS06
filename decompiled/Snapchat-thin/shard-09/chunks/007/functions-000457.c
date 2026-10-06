/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10700b82c; end: 10700b877;  */

void FUN_10700b82c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bec0140();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10700b878; end: 10700b9cf; -[SCCameraViewControllerStartupWorkflow _startHandlingVolumeButtonEvents:] */

void FUN_10700b878(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c230b00(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    lVar1 = param_3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126d40a0;
      _objc_alloc(PTR_PTR_1126d40a0);
      lVar1 = param_3;
      func_0x00010bf0fb00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff55c0(puVar3,param_2,lVar1,lVar2);
      lVar4 = param_3;
      func_0x00010c252440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c224220();
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010bf29620(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0e00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ee80();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10700b9d0; end: 10700baff; -[SCCameraViewControllerStartupWorkflow shouldHandleVolumeButtonEvents:] */

uint FUN_10700b9d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  _objc_release(puVar2);
  if ((puVar3 == (undefined *)0x0) && (lVar4 = lVar1, func_0x00010bf068e0(), lVar4 == 2)) {
    lVar4 = param_3;
    func_0x00010bf2a5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf291c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf28fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2332e0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar10 = (uint)lVar9 ^ 1;
  }
  else {
    uVar10 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 10700bb00; end: 10700bb1b; -[SCCameraViewControllerStartupWorkflow startCamera:devicePosition:context:] */

void FUN_10700bb00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startCamera_devicePosition_conte_1126712d0);
  return;
}



/* Entry: 10700bb1c; end: 10700bb73;  */

void FUN_10700bb1c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d40a8;
    _objc_alloc(PTR_PTR_1126d40a8);
    func_0x00010bffba20();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10700bb74; end: 10700bc07;  */

void FUN_10700bb74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf28fc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c24eec0(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10700bc08; end: 10700bc0b; -[SCCameraViewControllerStartupWorkflow didSetupVideoPreviewAfterStartingCamera:] */

void FUN_10700bc08(void)

{
  return;
}



/* Entry: 10700bc0c; end: 10700bc77; -[SCCameraViewControllerStartupWorkflow hidePrivacyView:] */

void FUN_10700bc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c1140a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2640();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10700bc78; end: 10700bce3; -[SCCameraViewControllerStartupWorkflow showPrivacyView:] */

void FUN_10700bc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c1140a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239400();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10700bce4; end: 10700bd93;  */

void FUN_10700bce4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29e980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10700bd94; end: 10700bdef; -[SCCameraViewControllerStartupWorkflow _tabBarGradientView:] */

void FUN_10700bd94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = param_3;
  func_0x00010c267580(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10700bdf0; end: 10700be4b; -[SCCameraViewControllerStartupWorkflow _navBarGradientView:] */

void FUN_10700bdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = param_3;
  func_0x00010c0d5da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10700be4c; end: 10700beb7; -[SCCameraViewControllerStartupWorkflow cameraSetupAfterStart:] */

void FUN_10700be4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c269520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10700beb8; end: 10700c1af; -[SCCameraViewControllerStartupWorkflow _recoverContinuousCaptureWithSnapSessionContext:contentLossReason:viewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700beb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdc2e0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    lVar4 = param_5;
    func_0x00010c2402e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 != 0) {
      lVar4 = param_5;
      func_0x00010bf2b860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010aee6cbc();
        lVar4 = param_5;
        func_0x00010bf5f860(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f2220(param_5);
        func_0x00010c2514c0(lVar4);
        _objc_release(lVar4);
        lVar4 = param_5;
        func_0x00010c1119e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a2040();
        _objc_release(lVar4);
        puVar7 = PTR_PTR_1126b0018;
        _objc_alloc();
        uVar2 = param_3;
        func_0x00010c2407e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c047840();
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar1 = (undefined1)*(undefined8 *)(param_1 + _DAT_1127626b8);
        func_0x00010bf1f440();
        _objc_initWeak(auStack_58,param_1);
        _objc_initWeak(auStack_60,param_5);
        func_0x00010bf4fd20(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar7);
        _objc_retain(param_5);
        _objc_copyWeak(auStack_80,auStack_60);
        _objc_copyWeak(auStack_78,auStack_58);
        uStack_68 = uVar1;
        _objc_retain(param_3);
        uStack_70 = param_4;
        func_0x00010c0f7fc0(param_1);
        _objc_release(param_1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_80);
        _objc_release(param_5);
        _objc_release(puVar7);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_release(puVar7);
      }
    }
    _objc_release(lVar6);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10700c1b0; end: 10700c2b7;  */

void FUN_10700c1b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf2b860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,param_1 + 0x38);
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uStack_48 = *(undefined1 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c270060(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  return;
}



/* Entry: 10700c2b8; end: 10700c3cb;  */

void FUN_10700c2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10700c3cc;
  puStack_80 = &UNK_110988838;
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uStack_48 = *(undefined1 *)(param_1 + 0x40);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = param_2;
  _objc_retain(uVar1);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10700c3cc; end: 10700c5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700c3cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if ((*(char *)(param_1 + 0x50) != '\x01') ||
       ((lVar4 != 0 && (*(char *)(lVar4 + _DAT_1127626f4) == '\x01')))) {
      lVar5 = lVar3;
      func_0x00010c242ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c242aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010bfc1d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar5);
      if (lVar6 != 0) {
        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) != 0)) {
          func_0x00010be05260(lVar4);
        }
        else {
          lVar7 = *(long *)(param_1 + 0x30);
          func_0x00010c2407e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          func_0x00010c243340();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar5;
          func_0x00010c08fa60();
          if (lVar8 == 0) {
            func_0x00010011df08();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c215ae0(*(undefined8 *)(param_1 + 0x28),param_2,lVar8);
          }
          else {
            lVar8 = *(long *)(param_1 + 0x30);
            func_0x00010c2407e0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar8;
            func_0x00010c243340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c215ae0(*(undefined8 *)(param_1 + 0x28),param_2,lVar6);
            _objc_release(lVar6);
          }
          _objc_release(lVar8);
          _objc_release(lVar5);
          _objc_release(lVar7);
          lVar5 = lVar3;
          func_0x00010c1119e0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          uVar9 = *(undefined8 *)(param_1 + 0x48);
          lVar8 = lVar3;
          func_0x00010c252440(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar8;
          func_0x00010c0b7e80();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar3;
          func_0x00010bef0520(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c124160(lVar5,param_2,uVar1,uVar2,uVar9,lVar7,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar7);
          _objc_release(lVar8);
          _objc_release(lVar5);
        }
      }
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10700c600; end: 10700c63f; -[SCCameraViewControllerStartupWorkflow _disposePreviewRecoveryObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700c600(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_1127626f4) = 0;
  lVar2 = (long)_DAT_1127626f8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700c640; end: 10700c80f; -[SCCameraViewControllerStartupWorkflow _beginObservingForPreviewRecoveryCancellation:snapRecovery:isDirectorModeRecovery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700c640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + _DAT_1127626f4) = 1;
  _objc_initWeak(auStack_58,param_1);
  _objc_initWeak(auStack_60,param_4);
  _objc_initWeak(auStack_68,param_3);
  lVar5 = (long)_DAT_1127626f8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
  uVar1 = param_3;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29c280();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uStack_70 = param_5;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_copyWeak(auStack_78,auStack_60);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10700c810; end: 10700c913;  */

void FUN_10700c810(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_50,param_1 + 0x20);
  uStack_38 = *(undefined1 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10700c914; end: 10700c91f;  */

void FUN_10700c914(void)

{
  return;
}



/* Entry: 10700c920; end: 10700cb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700c920(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (*(char *)(lVar2 + _DAT_1127626f4) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x38);
    uVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if ((bVar1 & 1) == 0) {
      uVar7 = uVar3;
      func_0x00010c07ac60();
      _objc_release(uVar3);
    }
    else {
      uVar4 = uVar3;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf7f4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c06b680();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    if ((uVar7 & 1) == 0) {
      lVar8 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar8);
      func_0x00010bf3a660();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar8);
      lVar8 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar8;
      func_0x00010c1119e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ac60();
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (*(char *)(param_1 + 0x38) == '\x01') {
        uVar3 = param_1 + 0x28;
        _objc_loadWeakRetained();
        uVar7 = uVar3;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010bf7f4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar7);
        _objc_release(uVar3);
        uVar7 = uVar5;
        func_0x00010010fab4(uVar5,PTR_DAT_1126a5900);
        uVar3 = uVar5;
        if ((int)uVar7 == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar5);
        uVar7 = uVar3;
        _objc_opt_respondsToSelector(uVar3,PTR_s_cancelInFlightRecovery_1125a92d0);
        if ((uVar7 & 1) != 0) {
          func_0x00010bf2e4a0(uVar3);
        }
        _objc_release(uVar3);
      }
    }
    func_0x00010be05260(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10700cb08; end: 10700cb0b;  */

void FUN_10700cb08(void)

{
  return;
}



/* Entry: 10700cb0c; end: 10700ceeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700cb0c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (lVar2 == 0)) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aec70;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c06c4a0();
    _objc_release(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = PTR_PTR_1126aec70;
      func_0x00010c22ba80(PTR_PTR_1126aec70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd07a0();
      _objc_release(puVar4);
    }
    func_0x00010bf2ada0(lVar1);
    if ((*(long *)(param_2 + 0x38) != 3) && (lVar13 = lVar3, func_0x00010bf068e0(), lVar13 == 2)) {
      puVar4 = PTR_PTR_1126d40b0;
      func_0x00010c22bc20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf52b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      param_1 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      puVar4 = puVar5;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf52a60();
      if (puVar6 != (undefined *)0x0) {
        lVar13 = *plStack_130;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar13) {
              _objc_enumerationMutation(puVar4);
            }
            uVar14 = *(undefined8 *)(lStack_138 + (long)puVar12 * 8);
            puVar7 = puVar5;
            func_0x00010c0e00e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar2;
            func_0x00010bf298e0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010c067fc0(puVar7);
            func_0x0001085aae28(lVar8,uVar14,puVar9);
            _objc_release(lVar8);
            _objc_release(puVar7);
            puVar12 = puVar12 + 1;
          } while (puVar6 != puVar12);
          puVar6 = puVar4;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126d40b0;
      func_0x00010c22bc20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c255820();
      _objc_release(puVar4);
      if ((int)puVar6 != 0) {
        lVar13 = lVar2;
        func_0x00010bf298e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001085aa2b0();
        _objc_release(lVar13);
      }
      _objc_release(puVar5);
    }
    lVar13 = lVar2;
    func_0x00010c0f9d20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a260();
    _objc_release(lVar13);
    if (param_1 == 0.0) {
      param_1 = 1.0;
    }
    lVar13 = lVar2;
    func_0x00010bf29180();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bfa5ee0();
    _objc_release(lVar8);
    _objc_release(lVar13);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_10700ceec;
    puStack_158 = &UNK_110845ce0;
    uStack_148 = (undefined1)lVar10;
    _objc_retain(lVar2);
    lStack_150 = lVar2;
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_170);
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),1);
    uVar11 = *(undefined8 *)(lVar1 + _DAT_1127626d0);
    func_0x00010bf299a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd9e0();
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(lStack_150);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar14 = *(undefined8 *)(lVar1 + 0x20);
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    func_0x00010c0dd660(uVar14);
    func_0x00010c0dd720(*(undefined8 *)(lVar1 + 0x20));
    func_0x00010c0dd6c0(*(undefined8 *)(lVar1 + 0x20));
    func_0x00010c0dd6e0(*(undefined8 *)(lVar1 + 0x20));
    uVar14 = *(undefined8 *)(lVar1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dd690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar14,PTR_s_notifyUserOfAdsTrackingUsageIfNe_112614fb8);
  return;
}



/* Entry: 10700ceec; end: 10700cf33;  */

void FUN_10700ceec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010c0dd660(uVar1);
    func_0x00010c0dd720(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0dd6c0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0dd6e0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dd690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_notifyUserOfAdsTrackingUsageIfNe_112614fb8);
  return;
}



/* Entry: 10700cf34; end: 10700cfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700cf34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127626d0);
    func_0x00010bf299a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250c00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x000100162d98("APPSTORE",*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10700cfbc; end: 10700d003;  */

void FUN_10700cfbc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd07a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010700d000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10700d004; end: 10700d07b; -[SCCameraViewControllerStartupWorkflow backgroundPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700d004(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127626fc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10700d07c; end: 10700d0f3; -[SCCameraViewControllerStartupWorkflow continuousCaptureRecoveryPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700d07c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112762700;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10700d0f4; end: 10700d103; -[SCCameraViewControllerStartupWorkflow cameraViewIsBeingDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10700d0f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127626ec);
}



/* Entry: 10700d104; end: 10700d143; -[SCCameraViewControllerStartupWorkflow setBackgroundPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700d104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127626fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700d144; end: 10700d243; -[SCCameraViewControllerStartupWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700d144(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127626fc,0);
  _objc_storeStrong(param_1 + _DAT_1127626c8,0);
  _objc_storeStrong(param_1 + _DAT_1127626f8,0);
  _objc_storeStrong(param_1 + _DAT_1127626c0,0);
  _objc_storeStrong(param_1 + _DAT_1127626bc,0);
  _objc_storeStrong(param_1 + _DAT_1127626b8,0);
  _objc_storeStrong(param_1 + _DAT_112762700,0);
  _objc_storeStrong(param_1 + _DAT_1127626e8,0);
  _objc_storeStrong(param_1 + _DAT_1127626e4,0);
  _objc_storeStrong(param_1 + _DAT_112762704,0);
  _objc_storeStrong(param_1 + _DAT_1127626f0,0);
  _objc_storeStrong(param_1 + _DAT_1127626cc,0);
  _objc_storeStrong(param_1 + _DAT_1127626b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127626d0,0);
  return;
}



/* Entry: 10700d244; end: 10700d2eb;  */

void FUN_10700d244(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c9f90;
  ppuRam00000001136c9f90 = &PTR__OBJC_CLASS___NSConstantArray_1111814c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700d2ec; end: 10700d43f; -[SCCameraBottomStackView pointInside:withEvent:] */

undefined1 *
FUN_10700d2ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(ulong *)(lStack_128 + lVar7 * 8);
        func_0x00010bf51200(param_1,param_2,uVar5);
        func_0x00010c102b20();
        if ((uVar5 & 1) != 0) {
          puVar4 = (undefined1 *)0x1;
          goto LAB_10700d3f0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar4 = (undefined1 *)0x0;
LAB_10700d3f0:
  _objc_release(param_3);
  puVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_160;
  pcStack_138 = FUN_10700d440;
  puStack_158 = PTR_PTR_1126f8390;
  puStack_160 = puVar2;
  lStack_150 = param_3;
  puStack_148 = param_5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_160,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined1 **)puVar2) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar3);
    puVar4 = (undefined1 *)ppuVar3;
  }
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10700d440; end: 10700d4b3; -[SCCameraBottomStackView hitTest:withEvent:] */

void FUN_10700d440(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f8390;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10700d4b4; end: 10700d563; -[SCCameraBottomContainer initWithParentView:bottomAnchorView:] */

undefined1 *
FUN_10700d4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8398;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10700d564; end: 10700d893; -[SCCameraBottomContainer stackView] */

void FUN_10700d564(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = *(undefined **)(param_1 + 0x18);
  if (puVar21 == (undefined *)0x0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    puVar21 = (undefined *)0x0;
    if (lVar2 != 0) {
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar21 = PTR_PTR_1126d40b8;
        _objc_opt_new();
        func_0x00010c17d4c0();
        func_0x00010c16e060(puVar21);
        func_0x00010c207380(0x4024000000000000,puVar21);
        func_0x00010c166c00(puVar21);
        lVar2 = param_1 + 8;
        _objc_loadWeakRetained(lVar2);
        func_0x00010befbb60();
        _objc_release(lVar2);
        func_0x00010c219b60(puVar21);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar4 = puVar21;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1 + 0x10;
        _objc_loadWeakRetained();
        lVar5 = lVar2;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar21;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1 + 0x10;
        _objc_loadWeakRetained();
        lVar8 = lVar3;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar21;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_1 + 8;
        _objc_loadWeakRetained(lVar11);
        lVar12 = lVar11;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar21;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_1 + 8;
        _objc_loadWeakRetained(lVar15);
        lVar16 = lVar15;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar14;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(lVar8);
        _objc_release(lVar3);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_release(puVar4);
        _objc_retain(puVar21);
        uVar19 = *(undefined8 *)(param_1 + 0x18);
        *(undefined **)(param_1 + 0x18) = puVar21;
        _objc_release(uVar19);
      }
    }
  }
  else {
    _objc_retain(puVar21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c24d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10700d894; end: 10700d897; -[SCCameraBottomContainer containerView] */

void FUN_10700d894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stackView_112670ec0);
  return;
}



/* Entry: 10700d898; end: 10700d8f3; -[SCCameraBottomContainer count] */

undefined8 FUN_10700d898(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c24d260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10700d8f4; end: 10700d9ab; -[SCCameraBottomContainer appendSubview:] */

void FUN_10700d8f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60();
    _objc_release(param_3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c0df720(in_d3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10700d9ac; end: 10700da67; -[SCCameraBottomContainer prependSubview:] */

void FUN_10700d9ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066580();
    _objc_release(param_3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c0df720(in_d3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10700da68; end: 10700da6f; -[SCCameraBottomContainer containerHeightObservable] */

undefined8 FUN_10700da68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10700da70; end: 10700daaf; -[SCCameraBottomContainer .cxx_destruct] */

void FUN_10700da70(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10700dab0; end: 10700daeb; -[SCCameraBottomControlContainer updateCenterYOffset:] */

void FUN_10700dab0(double param_1,long param_2)

{
  if (*(double *)(param_2 + 0x70) != param_1) {
    *(double *)(param_2 + 0x70) = param_1;
    if (*(long *)(param_2 + 0x68) != 1) {
      param_1 = -param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((*(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x58)) + param_1,
               *(undefined8 *)(param_2 + 0x80),PTR_s_setConstant__11263de70);
    return;
  }
  return;
}



/* Entry: 10700daec; end: 10700dc07; -[SCCameraBottomControlContainer initWithParentView:topAnchor:bottomAnchor:centerXAnchor:layoutConfig:] */

undefined1 *
FUN_10700daec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f83a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar3 = param_7[1];
    uVar2 = *param_7;
    uVar5 = param_7[3];
    uVar4 = param_7[2];
    uVar7 = param_7[5];
    uVar6 = param_7[4];
    *(undefined8 *)((long)puVar1 + 0x78) = param_7[6];
    *(undefined8 *)((long)puVar1 + 0x70) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x68) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x58) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10700dc08; end: 10700dd83; -[SCCameraBottomControlContainer appendSubview:position:size:] */

void FUN_10700dc08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = param_2;
  _objc_retain(param_5);
  func_0x00010bebf2e0(param_3,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60();
  func_0x00010c219b60(param_5,param_4,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  uStack_78 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar5 = uVar4;
  uVar12 = param_1;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 2;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = param_1;
  uStack_d8 = param_2;
  _objc_retain(puVar9);
  func_0x00010bebf2e0(param_3,param_4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066580();
  func_0x00010c219b60(puVar9,param_4,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  puStack_f8 = puVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010bf49420(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_4,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10700dd84; end: 10700df03; -[SCCameraBottomControlContainer prependSubview:position:size:] */

void FUN_10700dd84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bebf2e0(param_3,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066580();
  func_0x00010c219b60(param_5,param_4,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  uStack_78 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar5 = uVar4;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10700df04; end: 10700df3b; -[SCCameraBottomControlContainer setContainerHidden:] */

void FUN_10700df04(undefined8 param_1)

{
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10700df3c; end: 10700df97; -[SCCameraBottomControlContainer _createStackView] */

void FUN_10700df3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x00010c16e060();
  func_0x00010c166c00(puVar1,param_2,3);
  func_0x00010c190b80(puVar1,param_2,3);
  func_0x00010c207380(*(undefined8 *)(param_1 + 0x78),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10700df98; end: 10700dff3; -[SCCameraBottomControlContainer _stackViewWithPosition:] */

void FUN_10700df98(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 3) {
    func_0x00010bf347c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x00010c140d40();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010c08e920();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700dff4; end: 10700e10f; -[SCCameraBottomControlContainer _verticalLayoutConstraintForView:containerView:] */

void FUN_10700dff4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    dVar4 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x58);
    lVar1 = param_3;
    lVar2 = param_4;
    if (*(long *)(param_1 + 0x68) == 0) {
      func_0x00010bf348e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80(param_4);
      _objc_retainAutoreleasedReturnValue();
      dVar4 = dVar4 - *(double *)(param_1 + 0x70);
    }
    else {
      if (*(long *)(param_1 + 0x68) != 1) {
        lVar3 = 0;
        goto LAB_10700e0e4;
      }
      func_0x00010bf348e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200(param_4);
      _objc_retainAutoreleasedReturnValue();
      dVar4 = dVar4 + *(double *)(param_1 + 0x70);
    }
    lVar3 = lVar1;
    func_0x00010bf493c0(dVar4,lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
LAB_10700e0e4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10700e110; end: 10700e247; -[SCCameraBottomControlContainer pointInsideContainerFromPoint:inView:] */

void FUN_10700e110(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  
  _objc_retain(param_5);
  lVar4 = *(long *)(param_3 + 0x28);
  if (lVar4 != 0) {
    func_0x00010bf20c00(lVar4);
    func_0x00010bf51460(lVar4,param_4,param_5);
    iVar1 = (int)lVar4;
    _CGRectContainsPoint();
    if (iVar1 != 0) {
      func_0x00010bf512a0(param_1,param_2,param_5,param_4,*(undefined8 *)(param_3 + 0x28));
      puVar5 = (ulong *)(param_3 + 0x30);
      uVar2 = *puVar5;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      if ((uVar2 & 1) == 0) {
        puVar5 = (ulong *)(param_3 + 0x38);
        uVar2 = *puVar5;
        func_0x00010bfb68e0();
        _CGRectContainsPoint();
        if ((uVar2 & 1) == 0) {
          puVar5 = (ulong *)(param_3 + 0x40);
          iVar1 = (int)*puVar5;
          func_0x00010bfb68e0();
          _CGRectContainsPoint();
          if (iVar1 == 0) goto LAB_10700e224;
        }
      }
      uVar2 = *puVar5;
      _objc_retain(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if (uVar2 != 0) {
        func_0x00010bf512a0(param_1,param_2,*(undefined8 *)(param_3 + 0x28),param_4,uVar2);
        func_0x00010c297180(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        goto LAB_10700e228;
      }
    }
  }
LAB_10700e224:
  puVar3 = (undefined *)0x0;
LAB_10700e228:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10700e248; end: 10700e497; -[SCCameraBottomControlContainer containerView] */

void FUN_10700e248(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *(long *)(param_1 + 0x28);
  if (lVar20 == 0) {
    if (((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
       (*(long *)(param_1 + 0x18) == 0)) {
      lVar20 = 0;
      goto LAB_10700e458;
    }
    puVar1 = PTR_PTR_1126c4b80;
    _objc_opt_new();
    uVar19 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar19);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 8));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x28));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar16);
    _objc_release(uVar19);
    _objc_release(uVar15);
    lVar20 = *(long *)(param_1 + 0x28);
  }
  param_1 = lVar20;
  _objc_retain();
LAB_10700e458:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar20 = *(long *)(param_1 + 0x30);
    if (lVar20 == 0) {
      lVar9 = param_1;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = param_1;
        func_0x00010bdf3dc0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = *(undefined8 *)(param_1 + 0x30);
        *(long *)(param_1 + 0x30) = lVar20;
        _objc_release(uVar19);
        func_0x00010befbb60(lVar9);
        func_0x00010c219b60(*(undefined8 *)(param_1 + 0x30));
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = param_1;
        func_0x00010bf347c0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar20;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar14;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar9;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar15;
        func_0x00010bf493c0(*(undefined8 *)(param_1 + 0x50));
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_1;
        func_0x00010bf347c0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar16;
        func_0x00010bf49520(*(double *)(param_1 + 0x78) * 0.5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar8);
        _objc_release(uVar5);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(uVar16);
        _objc_release(uVar2);
        _objc_release(lVar11);
        _objc_release(uVar15);
        _objc_release(uVar19);
        _objc_release(lVar10);
        _objc_release(lVar20);
        _objc_release(uVar14);
        lVar20 = *(long *)(param_1 + 0x30);
        _objc_retain(lVar20);
      }
      _objc_release();
    }
    else {
      lVar9 = lVar20;
      _objc_retain();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar20 = *(long *)(lVar9 + 0x38);
      if (lVar20 == 0) {
        lVar10 = lVar9;
        func_0x00010bf4b2a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = lVar9;
          func_0x00010bdf3dc0();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = *(undefined8 *)(lVar9 + 0x38);
          *(long *)(lVar9 + 0x38) = lVar20;
          _objc_release(uVar19);
          func_0x00010befbb60(lVar10);
          func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x38));
          lVar20 = lVar9;
          func_0x00010bee88a0();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = *(undefined8 *)(lVar9 + 0x80);
          *(long *)(lVar9 + 0x80) = lVar20;
          _objc_release(uVar19);
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          uVar14 = *(undefined8 *)(lVar9 + 0x38);
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar14;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = *(undefined8 *)(lVar9 + 0x38);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar9;
          func_0x00010c08e920();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar20;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar15;
          func_0x00010bf49480(*(double *)(lVar9 + 0x78) * 0.5);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = *(undefined8 *)(lVar9 + 0x38);
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar9;
          func_0x00010c140d40();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar16;
          func_0x00010bf49520(*(double *)(lVar9 + 0x78) * -0.5);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
          _objc_release(puVar8);
          _objc_release(uVar5);
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(uVar16);
          _objc_release(uVar2);
          _objc_release(lVar11);
          _objc_release(lVar20);
          _objc_release(uVar15);
          _objc_release(uVar19);
          _objc_release(uVar14);
          lVar20 = *(long *)(lVar9 + 0x38);
          _objc_retain(lVar20);
        }
        _objc_release();
      }
      else {
        lVar10 = lVar20;
        _objc_retain();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        ___stack_chk_fail();
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar20 = *(long *)(lVar10 + 0x40);
        if (lVar20 == 0) {
          lVar9 = lVar10;
          func_0x00010bf4b2a0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar9 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = lVar10;
            func_0x00010bdf3dc0();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = *(undefined8 *)(lVar10 + 0x40);
            *(long *)(lVar10 + 0x40) = lVar20;
            _objc_release(uVar19);
            func_0x00010befbb60(lVar9);
            func_0x00010c219b60(*(undefined8 *)(lVar10 + 0x40));
            puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            uVar14 = *(undefined8 *)(lVar10 + 0x40);
            func_0x00010bf348e0();
            _objc_retainAutoreleasedReturnValue();
            lVar20 = lVar10;
            func_0x00010bf347c0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar20;
            func_0x00010bf348e0();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar14;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = *(undefined8 *)(lVar10 + 0x40);
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar9;
            func_0x00010c2793a0(lVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar15;
            func_0x00010bf493c0(-*(double *)(lVar10 + 0x60));
            _objc_retainAutoreleasedReturnValue();
            uVar16 = *(undefined8 *)(lVar10 + 0x40);
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar10;
            func_0x00010bf347c0(lVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar13;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar16;
            func_0x00010bf49480(*(double *)(lVar10 + 0x78) * 0.5);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar1);
            _objc_release(puVar8);
            _objc_release(uVar5);
            _objc_release(lVar17);
            _objc_release(lVar13);
            _objc_release(uVar16);
            _objc_release(uVar2);
            _objc_release(lVar12);
            _objc_release(uVar15);
            _objc_release(uVar19);
            _objc_release(lVar11);
            _objc_release(lVar20);
            _objc_release(uVar14);
            lVar20 = *(long *)(lVar10 + 0x40);
            _objc_retain(lVar20);
          }
          _objc_release(lVar9);
        }
        else {
          lVar9 = lVar20;
          _objc_retain(lVar20);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
          ___stack_chk_fail();
          _objc_storeStrong(lVar9 + 0x80,0);
          _objc_storeStrong(lVar9 + 0x40,0);
          _objc_storeStrong(lVar9 + 0x38,0);
          _objc_storeStrong(lVar9 + 0x30,0);
          _objc_storeStrong(lVar9 + 0x28,0);
          _objc_storeStrong(lVar9 + 0x20,0);
          _objc_storeStrong(lVar9 + 0x18,0);
          _objc_storeStrong(lVar9 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_storeStrong_11034d330)(lVar9 + 8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar20);
  return;
}



/* Entry: 10700e498; end: 10700e71f; -[SCCameraBottomControlContainer leftStackView] */

void FUN_10700e498(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0x30);
  if (lVar16 == 0) {
    lVar2 = param_1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = param_1;
      func_0x00010bdf3dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar16;
      _objc_release(uVar15);
      func_0x00010befbb60(lVar2);
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x30));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_1;
      func_0x00010bf347c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar16;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar11;
      func_0x00010bf493c0(*(undefined8 *)(param_1 + 0x50));
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf347c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar12;
      func_0x00010bf49520(*(double *)(param_1 + 0x78) * 0.5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(uVar12);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(uVar11);
      _objc_release(uVar15);
      _objc_release(lVar3);
      _objc_release(lVar16);
      _objc_release(uVar10);
      lVar16 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar16);
    }
    _objc_release();
  }
  else {
    lVar2 = lVar16;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = *(long *)(lVar2 + 0x38);
    if (lVar16 == 0) {
      lVar3 = lVar2;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar2;
        func_0x00010bdf3dc0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(lVar2 + 0x38);
        *(long *)(lVar2 + 0x38) = lVar16;
        _objc_release(uVar15);
        func_0x00010befbb60(lVar3);
        func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x38));
        lVar16 = lVar2;
        func_0x00010bee88a0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(lVar2 + 0x80);
        *(long *)(lVar2 + 0x80) = lVar16;
        _objc_release(uVar15);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar10 = *(undefined8 *)(lVar2 + 0x38);
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar10;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lVar2 + 0x38);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar2;
        func_0x00010c08e920();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar16;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010bf49480(*(double *)(lVar2 + 0x78) * 0.5);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(lVar2 + 0x38);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010c140d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar12;
        func_0x00010bf49520(*(double *)(lVar2 + 0x78) * -0.5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar9);
        _objc_release(uVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(uVar12);
        _objc_release(uVar5);
        _objc_release(lVar4);
        _objc_release(lVar16);
        _objc_release(uVar11);
        _objc_release(uVar15);
        _objc_release(uVar10);
        lVar16 = *(long *)(lVar2 + 0x38);
        _objc_retain(lVar16);
      }
      _objc_release();
    }
    else {
      lVar3 = lVar16;
      _objc_retain();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *(long *)(lVar3 + 0x40);
      if (lVar16 == 0) {
        lVar2 = lVar3;
        func_0x00010bf4b2a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = lVar3;
          func_0x00010bdf3dc0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = *(undefined8 *)(lVar3 + 0x40);
          *(long *)(lVar3 + 0x40) = lVar16;
          _objc_release(uVar15);
          func_0x00010befbb60(lVar2);
          func_0x00010c219b60(*(undefined8 *)(lVar3 + 0x40));
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          uVar10 = *(undefined8 *)(lVar3 + 0x40);
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar3;
          func_0x00010bf347c0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar16;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar10;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(lVar3 + 0x40);
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar2;
          func_0x00010c2793a0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010bf493c0(-*(double *)(lVar3 + 0x60));
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(lVar3 + 0x40);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010bf347c0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar7;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar12;
          func_0x00010bf49480(*(double *)(lVar3 + 0x78) * 0.5);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
          _objc_release(puVar9);
          _objc_release(uVar8);
          _objc_release(lVar13);
          _objc_release(lVar7);
          _objc_release(uVar12);
          _objc_release(uVar5);
          _objc_release(lVar6);
          _objc_release(uVar11);
          _objc_release(uVar15);
          _objc_release(lVar4);
          _objc_release(lVar16);
          _objc_release(uVar10);
          lVar16 = *(long *)(lVar3 + 0x40);
          _objc_retain(lVar16);
        }
        _objc_release(lVar2);
      }
      else {
        lVar2 = lVar16;
        _objc_retain(lVar16);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        ___stack_chk_fail();
        _objc_storeStrong(lVar2 + 0x80,0);
        _objc_storeStrong(lVar2 + 0x40,0);
        _objc_storeStrong(lVar2 + 0x38,0);
        _objc_storeStrong(lVar2 + 0x30,0);
        _objc_storeStrong(lVar2 + 0x28,0);
        _objc_storeStrong(lVar2 + 0x20,0);
        _objc_storeStrong(lVar2 + 0x18,0);
        _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
  return;
}



/* Entry: 10700e720; end: 10700e9bf; -[SCCameraBottomControlContainer centerStackView] */

void FUN_10700e720(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0x38);
  if (lVar16 == 0) {
    lVar2 = param_1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = param_1;
      func_0x00010bdf3dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = lVar16;
      _objc_release(uVar15);
      func_0x00010befbb60(lVar2);
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x38));
      lVar16 = param_1;
      func_0x00010bee88a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x80);
      *(long *)(param_1 + 0x80) = lVar16;
      _objc_release(uVar15);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_1;
      func_0x00010c08e920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar16;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf49480(*(double *)(param_1 + 0x78) * 0.5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c140d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar11;
      func_0x00010bf49520(*(double *)(param_1 + 0x78) * -0.5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uVar11);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(lVar16);
      _objc_release(uVar10);
      _objc_release(uVar15);
      _objc_release(uVar9);
      lVar16 = *(long *)(param_1 + 0x38);
      _objc_retain(lVar16);
    }
    _objc_release();
  }
  else {
    lVar2 = lVar16;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = *(long *)(lVar2 + 0x40);
    if (lVar16 == 0) {
      lVar3 = lVar2;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar2;
        func_0x00010bdf3dc0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(lVar2 + 0x40);
        *(long *)(lVar2 + 0x40) = lVar16;
        _objc_release(uVar15);
        func_0x00010befbb60(lVar3);
        func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x40));
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar9 = *(undefined8 *)(lVar2 + 0x40);
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar2;
        func_0x00010bf347c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar16;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(lVar2 + 0x40);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c2793a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010bf493c0(-*(double *)(lVar2 + 0x60));
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lVar2 + 0x40);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar2;
        func_0x00010bf347c0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar11;
        func_0x00010bf49480(*(double *)(lVar2 + 0x78) * 0.5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar8);
        _objc_release(uVar7);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(uVar11);
        _objc_release(uVar4);
        _objc_release(lVar6);
        _objc_release(uVar10);
        _objc_release(uVar15);
        _objc_release(lVar5);
        _objc_release(lVar16);
        _objc_release(uVar9);
        lVar16 = *(long *)(lVar2 + 0x40);
        _objc_retain(lVar16);
      }
      _objc_release(lVar3);
    }
    else {
      lVar3 = lVar16;
      _objc_retain(lVar16);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      _objc_storeStrong(lVar3 + 0x80,0);
      _objc_storeStrong(lVar3 + 0x40,0);
      _objc_storeStrong(lVar3 + 0x38,0);
      _objc_storeStrong(lVar3 + 0x30,0);
      _objc_storeStrong(lVar3 + 0x28,0);
      _objc_storeStrong(lVar3 + 0x20,0);
      _objc_storeStrong(lVar3 + 0x18,0);
      _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
  return;
}



/* Entry: 10700e9c0; end: 10700ec4b; -[SCCameraBottomControlContainer rightStackView] */

void FUN_10700e9c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_1 + 0x40);
  if (lVar15 == 0) {
    lVar2 = param_1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = param_1;
      func_0x00010bdf3dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar15;
      _objc_release(uVar14);
      func_0x00010befbb60(lVar2);
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x40));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1;
      func_0x00010bf347c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar15;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c2793a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf493c0(-*(double *)(param_1 + 0x60));
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bf347c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010bf49480(*(double *)(param_1 + 0x78) * 0.5);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(uVar14);
      _objc_release(lVar4);
      _objc_release(lVar15);
      _objc_release(uVar3);
      lVar15 = *(long *)(param_1 + 0x40);
      _objc_retain(lVar15);
    }
    _objc_release(lVar2);
  }
  else {
    lVar2 = lVar15;
    _objc_retain(lVar15);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar15);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + 0x80,0);
  _objc_storeStrong(lVar2 + 0x40,0);
  _objc_storeStrong(lVar2 + 0x38,0);
  _objc_storeStrong(lVar2 + 0x30,0);
  _objc_storeStrong(lVar2 + 0x28,0);
  _objc_storeStrong(lVar2 + 0x20,0);
  _objc_storeStrong(lVar2 + 0x18,0);
  _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 10700ec4c; end: 10700eccf; -[SCCameraBottomControlContainer .cxx_destruct] */

void FUN_10700ec4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10700ecd0; end: 10700ed87; -[SCCameraHelpTooltipView initWithFrame:text:] */

undefined1 *
FUN_10700ecd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f83a8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9d60(puVar1);
    func_0x00010be4a080(puVar1);
    func_0x00010bed94c0(puVar1);
    func_0x00010bea95a0(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10700ed88; end: 10700ee3f; -[SCCameraHelpTooltipView initWithHostBounds:text:] */

undefined1 *
FUN_10700ed88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f83a8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9d60(puVar1);
    func_0x00010bed94c0(param_1,param_2,param_3,param_4,puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10700ee40; end: 10700ee47; -[SCCameraHelpTooltipView updateHostBounds:] */

void FUN_10700ee40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed94d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateHostBounds_usesRuntimeHos_112593ed8,1)
  ;
  return;
}



/* Entry: 10700ee48; end: 10700ee8f; -[SCCameraHelpTooltipView traitCollectionDidChange:] */

void FUN_10700ee48(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f83a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed3a80(param_1);
  return;
}



/* Entry: 10700ee90; end: 10700f257; -[SCCameraHelpTooltipView _setUpWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700ee90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d0ca8;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c028a20();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf86540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  puVar4 = puVar1;
  func_0x00010c26a500();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  if (puVar5 < (undefined *)0x2) {
    puVar5 = puVar2;
    func_0x00010c23b9c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar3);
  }
  else {
    puVar4 = puVar1;
    func_0x00010c26a500();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    if (puVar5 != (undefined *)0x2) goto LAB_10700f0ec;
    puVar4 = puVar1;
    func_0x00010c26a500();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f4c0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c26a500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f4c0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c23b9c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar3);
    _objc_release(puVar4);
    func_0x00010bef6f20(puVar3);
    func_0x00010bef6f20(puVar3);
  }
  _objc_release(puVar5);
LAB_10700f0ec:
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010bff4f40();
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4071800000000000,0x7fefffffffffffff);
  func_0x00010c16b720();
  func_0x00010c182220(puVar5);
  func_0x00010c213040(puVar5);
  func_0x00010c1cfce0(puVar5);
  func_0x00010c23d620(puVar5);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112762740);
  *(undefined **)(param_1 + _DAT_112762740) = puVar5;
  _objc_retain(puVar5);
  _objc_release(uVar8);
  func_0x00010c1af000(param_1);
  func_0x00010c160fc0(param_1);
  puVar6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112762744);
  *(undefined **)(param_1 + _DAT_112762744) = puVar6;
  _objc_retain();
  _objc_release(uVar8);
  func_0x00010bed3a80(param_1);
  lVar7 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar6);
  _objc_release(lVar7);
  func_0x00010befbb60(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10700f258; end: 10700f413; -[SCCameraHelpTooltipView _setUpLegacyLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700f258(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112762740;
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar15),param_6,0);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_5 + lVar15);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf49580(0x4071800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar15);
  lStack_80 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_5;
  func_0x00010bf34860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0(uVar7,param_6,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar15);
  uStack_78 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar16 = -7.5;
  uVar10 = uVar9;
  func_0x00010bf493c0(uVar9,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010beef8c0(puVar3);
  uVar12 = (uint)puVar13;
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(param_5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar14);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = (long)_DAT_112762748;
  lVar14 = (long)_DAT_11276274c;
  if ((*(byte *)(lVar5 + lVar6) & 1) != 0) {
    puVar1 = (undefined8 *)(lVar5 + lVar14);
    lVar15 = lVar5;
    _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],dVar16,param_2,param_3,param_4);
    if (((int)lVar15 != 0) && (*(byte *)(lVar5 + _DAT_112762750) == uVar12)) {
      return;
    }
  }
  iVar4 = _DAT_112762750;
  pdVar2 = (double *)(lVar5 + lVar14);
  *pdVar2 = dVar16;
  pdVar2[1] = param_2;
  pdVar2[2] = param_3;
  pdVar2[3] = param_4;
  *(char *)(lVar5 + iVar4) = (char)uVar12;
  _CGRectGetWidth(dVar16,param_2,param_3,param_4);
  iVar4 = _DAT_112762740;
  if (uVar12 == 0) {
    dVar19 = 280.0;
  }
  else {
    dVar20 = dVar16 + -20.0;
    dVar17 = dVar20;
    if (dVar20 <= 0.0) {
      dVar17 = 0.0;
    }
    dVar19 = 280.0;
    if (dVar17 <= 280.0) {
      dVar19 = dVar17;
    }
    if ((dVar20 <= 0.0) && (dVar17 <= 280.0)) {
      dVar19 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      dVar17 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar19,dVar17,
                          *(undefined8 *)(lVar5 + _DAT_112762740));
      goto LAB_10700f560;
    }
  }
  lVar14 = (long)_DAT_112762740;
  dVar17 = 1.79769313486232e+308;
  func_0x00010c19f0e0(0,0,dVar19,0x7fefffffffffffff,*(undefined8 *)(lVar5 + lVar14));
  func_0x00010c23d620(*(undefined8 *)(lVar5 + lVar14));
LAB_10700f560:
  func_0x00010bfb68e0(*(undefined8 *)(lVar5 + iVar4));
  dVar20 = 0.0;
  if (*(char *)(lVar5 + lVar6) == '\x01') {
    func_0x00010c1739e0();
  }
  else {
    func_0x00010c19f0e0(0,0,dVar16,dVar17 + 32.0,lVar5);
    *(undefined1 *)(lVar5 + lVar6) = 1;
  }
  func_0x00010bf20c00(lVar5);
  _CGRectGetMidX();
  dVar18 = dVar20;
  func_0x00010bf20c00(lVar5);
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar20,dVar18 + -7.5,*(undefined8 *)(lVar5 + iVar4));
  lVar15 = (long)_DAT_112762744;
  func_0x00010c19f0e0((dVar16 - (dVar19 + 20.0)) * 0.5,0,dVar19 + 20.0,dVar17 + 20.0,
                      *(undefined8 *)(lVar5 + lVar15));
  lVar6 = lVar5;
  func_0x00010bdd2460(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar6;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(lVar5 + lVar15),param_6,lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10700f414; end: 10700f64b; -[SCCameraHelpTooltipView _updateHostBounds:usesRuntimeHostGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700f414(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar4 = (long)_DAT_112762748;
  lVar5 = (long)_DAT_11276274c;
  if ((*(byte *)(param_5 + lVar4) & 1) != 0) {
    puVar1 = (undefined8 *)(param_5 + lVar5);
    lVar6 = param_5;
    _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
    if (((int)lVar6 != 0) && (*(byte *)(param_5 + _DAT_112762750) == param_7)) {
      return;
    }
  }
  iVar3 = _DAT_112762750;
  pdVar2 = (double *)(param_5 + lVar5);
  *pdVar2 = param_1;
  pdVar2[1] = param_2;
  pdVar2[2] = param_3;
  pdVar2[3] = param_4;
  *(char *)(param_5 + iVar3) = (char)param_7;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  iVar3 = _DAT_112762740;
  if (param_7 == 0) {
    dVar9 = 280.0;
  }
  else {
    dVar10 = param_1 + -20.0;
    dVar7 = dVar10;
    if (dVar10 <= 0.0) {
      dVar7 = 0.0;
    }
    dVar9 = 280.0;
    if (dVar7 <= 280.0) {
      dVar9 = dVar7;
    }
    if ((dVar10 <= 0.0) && (dVar7 <= 280.0)) {
      dVar9 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      dVar7 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar9,dVar7,
                          *(undefined8 *)(param_5 + _DAT_112762740));
      goto LAB_10700f560;
    }
  }
  lVar5 = (long)_DAT_112762740;
  dVar7 = 1.79769313486232e+308;
  func_0x00010c19f0e0(0,0,dVar9,0x7fefffffffffffff,*(undefined8 *)(param_5 + lVar5));
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar5));
LAB_10700f560:
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + iVar3));
  dVar10 = 0.0;
  if (*(char *)(param_5 + lVar4) == '\x01') {
    func_0x00010c1739e0();
  }
  else {
    func_0x00010c19f0e0(0,0,param_1,dVar7 + 32.0,param_5);
    *(undefined1 *)(param_5 + lVar4) = 1;
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar8 = dVar10;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar10,dVar8 + -7.5,*(undefined8 *)(param_5 + iVar3));
  lVar6 = (long)_DAT_112762744;
  func_0x00010c19f0e0((param_1 - (dVar9 + 20.0)) * 0.5,0,dVar9 + 20.0,dVar7 + 20.0,
                      *(undefined8 *)(param_5 + lVar6));
  lVar4 = param_5;
  func_0x00010bdd2460(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar6),param_6,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10700f64c; end: 10700f6b7; -[SCCameraHelpTooltipView _legacyHostBounds] */

undefined8 FUN_10700f64c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10700f6b8; end: 10700f8bb; -[SCCameraHelpTooltipView _backgroundPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700f6b8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112762744;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxX();
  dVar4 = param_1 + -10.0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxY();
  func_0x00010bef6d40(dVar4,param_1 + -10.0,0x4024000000000000,0x3ff921fb54442d18,0,puVar1,param_3,0
                     );
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxX();
  dVar5 = dVar4 + -10.0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMinY();
  func_0x00010bef6d40(dVar5,dVar4 + 10.0,0x4024000000000000,0,0x4012d97c7f3321d2,puVar1,param_3,0);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMinX();
  dVar4 = dVar5 + 10.0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMinY();
  func_0x00010bef6d40(dVar4,dVar5 + 10.0,0x4024000000000000,0x4012d97c7f3321d2,0x400921fb54442d18,
                      puVar1,param_3,0);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMinX();
  dVar5 = dVar4 + 10.0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxY();
  func_0x00010bef6d40(dVar5,dVar4 + -10.0,0x4024000000000000,0x400921fb54442d18,0x3ff921fb54442d18,
                      puVar1,param_3,0);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMidX();
  dVar3 = dVar5 + -15.0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxY();
  func_0x00010bef98c0(dVar3,dVar5,puVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMidX();
  dVar4 = dVar3;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxY();
  func_0x00010bef98c0(dVar3,dVar4 + 15.0,puVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMidX();
  dVar4 = dVar3 + 15.0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxY();
  func_0x00010bef98c0(dVar4,dVar3,puVar1);
  func_0x00010bf3dc80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10700f8bc; end: 10700f913; -[SCCameraHelpTooltipView _updateBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700f8bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_112762744),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10700f914; end: 10700f953; -[SCCameraHelpTooltipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700f914(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762744,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762740,0);
  return;
}



/* Entry: 10700f954; end: 10700fa23; -[SCCameraMediaPickerContainer initWithParentView:bottomAnchor:centerXAnchor:] */

undefined1 *
FUN_10700f954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f83b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10700fa24; end: 10700faf3; -[SCCameraMediaPickerContainer initWithParentView:topAnchor:centerXAnchor:] */

undefined1 *
FUN_10700fa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f83b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10700faf4; end: 10700ff17; -[SCCameraMediaPickerContainer stackView] */

void FUN_10700faf4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = *(undefined **)(param_1 + 0x28);
  if (puVar12 != (undefined *)0x0) {
    _objc_retain(puVar12);
    goto LAB_10700fb34;
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar12 = (undefined *)0x0;
  if (lVar1 == 0) goto LAB_10700fb34;
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    _objc_release(lVar1);
LAB_10700fbc0:
    puVar12 = (undefined *)0x0;
    goto LAB_10700fb34;
  }
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_10700fbc0;
  }
  else {
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar12 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c17d4c0();
  func_0x00010c16e060(puVar12);
  func_0x00010c166c00(puVar12);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(puVar12);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar12;
  puVar5 = puVar12;
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (lVar1 != 0) {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar1);
      puVar6 = puVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      puVar8 = puVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10700fea4;
    }
  }
  else {
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    puVar8 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
LAB_10700fea4:
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar13);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
  _objc_retain(puVar12);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar12;
  _objc_release(uVar10);
LAB_10700fb34:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c24d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10700ff18; end: 10700ff1b; -[SCCameraMediaPickerContainer containerView] */

void FUN_10700ff18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stackView_112670ec0);
  return;
}



/* Entry: 10700ff1c; end: 10700ff77; -[SCCameraMediaPickerContainer count] */

undefined8 FUN_10700ff1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c24d260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10700ff78; end: 10701002f; -[SCCameraMediaPickerContainer appendSubview:] */

void FUN_10700ff78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60();
    _objc_release(param_3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c0df720(in_d3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107010030; end: 1070100eb; -[SCCameraMediaPickerContainer prependSubview:] */

void FUN_107010030(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066580();
    _objc_release(param_3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c0df720(in_d3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1070100ec; end: 1070100f3; -[SCCameraMediaPickerContainer containerHeightObservable] */

undefined8 FUN_1070100ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1070100f4; end: 107010143; -[SCCameraMediaPickerContainer .cxx_destruct] */

void FUN_1070100f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107010144; end: 107010183; -[SCCameraOverlayFooterLayoutController setBottomOffset:] */

/* WARNING: Possible PIC construction at 0x000107010168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010701016c) */

void FUN_107010144(double param_1,long param_2)

{
  *(double *)(param_2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (-param_1,*(undefined8 *)(param_2 + 8),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 107010184; end: 1070101b3; -[SCCameraOverlayFooterLayoutController .cxx_destruct] */

void FUN_107010184(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070101b4; end: 10701027f; -[SCCameraOverlayTopAreaLayoutController initWithOverlayView:cameraViewLayoutGuide:] */

undefined1 *
FUN_1070101b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_38 = PTR_PTR_1126f83c0;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_8);
    func_0x00010bf20c00(param_7);
    *(undefined8 *)((long)puVar1 + 0x78) = param_1;
    *(undefined8 *)((long)puVar1 + 0x80) = param_2;
    *(undefined8 *)((long)puVar1 + 0x88) = param_3;
    *(undefined8 *)((long)puVar1 + 0x90) = param_4;
    *(undefined1 *)((long)puVar1 + 0x113) = 1;
    func_0x00010be3cf80(puVar1);
    func_0x00010be3cc60(puVar1);
    func_0x00010beca020(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107010280; end: 1070102a3; +[SCCameraOverlayTopAreaLayoutController resolvedDirectorModeTopInsetWithSystemSafeAreaTop:viewfinderTop:displayScale:] */

double FUN_107010280(double param_1,double param_2,double param_3)

{
  double dVar1;
  
  param_1 = param_1 - param_2;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_3 <= 1.0) {
    param_3 = 1.0;
  }
  dVar1 = 0.0;
  if (1.0 / param_3 < param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 1070102a4; end: 1070102cb; -[SCCameraOverlayTopAreaLayoutController systemSafeAreaLayoutGuide] */

void FUN_1070102a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070102cc; end: 1070102f3; -[SCCameraOverlayTopAreaLayoutController directorModeTopLayoutGuide] */

void FUN_1070102cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070102f4; end: 1070102f7; -[SCCameraOverlayTopAreaLayoutController overlayDidMoveToWindow] */

void FUN_1070102f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronize_1125901b0);
  return;
}



/* Entry: 1070102f8; end: 1070102fb; -[SCCameraOverlayTopAreaLayoutController overlaySafeAreaInsetsDidChange] */

void FUN_1070102f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronize_1125901b0);
  return;
}



/* Entry: 1070102fc; end: 1070102ff; -[SCCameraOverlayTopAreaLayoutController overlayDidLayoutSubviews] */

void FUN_1070102fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronize_1125901b0);
  return;
}



/* Entry: 107010300; end: 107010303; -[SCCameraOverlayTopAreaLayoutController overlayBoundsDidChange] */

void FUN_107010300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronize_1125901b0);
  return;
}



/* Entry: 107010304; end: 107010573; -[SCCameraOverlayTopAreaLayoutController installRuntimeReplyButtonConstraintsForButton:] */

void FUN_107010304(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_3;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x114) & 1) == 0) {
    lVar15 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_3 == lVar15) {
      lVar15 = *(long *)(param_1 + 0x70);
      _objc_release();
      if (lVar15 != 0) goto LAB_10701052c;
    }
    else {
      _objc_release();
    }
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010c219b60(param_3);
    _objc_storeWeak(param_1 + 0x20,param_3);
    lVar15 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar15;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar4 = lVar12;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar10;
    _objc_release(uVar14);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar12);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(lVar15);
    lVar12 = *(long *)(param_1 + 0x70);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
LAB_10701052c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar12);
  if ((*(byte *)(param_3 + 0x114) & 1) == 0) {
    lVar15 = param_3 + 0x20;
    _objc_loadWeakRetained();
    if (lVar12 == lVar15) {
      lVar15 = *(long *)(param_3 + 0x70);
      _objc_release();
      if (lVar15 != 0) goto LAB_10701079c;
    }
    else {
      _objc_release();
    }
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010c219b60(lVar12);
    _objc_storeWeak(param_3 + 0x20,lVar12);
    lVar2 = lVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3 + 8;
    _objc_loadWeakRetained(lVar15);
    lVar5 = lVar15;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_3 + 0x70);
    *(undefined **)(param_3 + 0x70) = puVar10;
    _objc_release(uVar14);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar15);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    _objc_release(lVar2);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
LAB_10701079c:
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be3d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107010574; end: 1070107e3; -[SCCameraOverlayTopAreaLayoutController installRuntimeDirectorExitButtonConstraintsForButton:] */

void FUN_107010574(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x114) & 1) == 0) {
    lVar14 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_3 == lVar14) {
      lVar14 = *(long *)(param_1 + 0x70);
      _objc_release();
      if (lVar14 != 0) goto LAB_10701079c;
    }
    else {
      _objc_release();
    }
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010c219b60(param_3);
    _objc_storeWeak(param_1 + 0x20,param_3);
    lVar1 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + 8;
    _objc_loadWeakRetained(lVar14);
    lVar5 = lVar14;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar11;
    _objc_release(uVar13);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
LAB_10701079c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be3d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1070107e4; end: 1070107e7; -[SCCameraOverlayTopAreaLayoutController invalidate] */

void FUN_1070107e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidate_11256cf68);
  return;
}



/* Entry: 1070107e8; end: 10701082b; -[SCCameraOverlayTopAreaLayoutController dealloc] */

void FUN_1070107e8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be3d720();
  puStack_28 = PTR_PTR_1126f83c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10701082c; end: 107010a97; -[SCCameraOverlayTopAreaLayoutController _installSystemSafeAreaLayoutGuideInOverlayView:] */

void FUN_10701082c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  bool bVar20;
  byte bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined *puVar10;
  
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_opt_new();
  uVar14 = *(undefined8 *)(param_5 + 0x28);
  *(undefined **)(param_5 + 0x28) = puVar3;
  _objc_release(uVar14);
  func_0x00010c1a99e0(*(undefined8 *)(param_5 + 0x28));
  func_0x00010bef9680(param_7);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_7;
  func_0x00010c274200(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(param_5 + 0x38) = uVar16;
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_7;
  func_0x00010c08e400(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_5 + 0x40);
  *(undefined8 *)(param_5 + 0x40) = uVar16;
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_7;
  func_0x00010bf1ff80(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_5 + 0x48);
  *(undefined8 *)(param_5 + 0x48) = uVar16;
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_5 + 0x50);
  *(undefined8 *)(param_5 + 0x50) = uVar16;
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + 0x58);
  *(undefined **)(param_5 + 0x58) = puVar3;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_5 + 0x58);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar14);
  _objc_opt_new();
  uVar16 = *(undefined8 *)(puVar3 + 0x30);
  *(undefined **)(puVar3 + 0x30) = puVar5;
  _objc_release(uVar16);
  func_0x00010c1a99e0(*(undefined8 *)(puVar3 + 0x30));
  func_0x00010bef9680(uVar14);
  uVar15 = *(undefined8 *)(puVar3 + 0x30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010c274200(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar3 + 0x60);
  *(undefined8 *)(puVar3 + 0x60) = uVar4;
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  uVar6 = *(undefined8 *)(puVar3 + 0x30);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar3 + 0x30);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar14 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar3 + 0x30);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 0.0;
  uVar17 = uVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar3 + 0x68);
  *(undefined **)(puVar3 + 0x68) = puVar5;
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar3[0x114] & 1) != 0) {
    return;
  }
  puVar5 = puVar3 + 8;
  _objc_loadWeakRetained();
  if (puVar5 == (undefined *)0x0) goto LAB_107010e90;
  puVar9 = puVar5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    if ((puVar3[0x112] & 1) == 0) {
      puVar3[0x113] = 1;
    }
    else {
      puVar10 = puVar5;
      func_0x00010bf20c00();
      iVar2 = (int)puVar10;
      _CGRectEqualToRect();
      bVar21 = puVar3[0x113];
      puVar3[0x113] = 1;
      if ((iVar2 != 0) && ((bVar21 & 1) != 0)) goto LAB_107010e88;
    }
    func_0x00010bf20c00(puVar5);
    *(double *)(puVar3 + 0x78) = dVar22;
    *(double *)(puVar3 + 0x80) = param_2;
    *(double *)(puVar3 + 0x88) = param_3;
    *(double *)(puVar3 + 0x90) = param_4;
    puVar3[0x112] = 1;
  }
  else {
    func_0x00010bf20c00(puVar9);
    dVar33 = dVar22;
    dVar38 = param_2;
    dVar23 = param_3;
    dVar30 = param_4;
    func_0x00010c148fc0(puVar9);
    dVar36 = dVar22 + dVar38;
    dVar37 = param_2 + dVar33;
    dVar38 = param_3 - (dVar38 + dVar30);
    dVar33 = param_4 - (dVar33 + dVar23);
    puVar10 = puVar5;
    func_0x00010bf513e0();
    _CGRectIsEmpty(dVar22,param_2,param_3,param_4);
    if ((((((ulong)puVar10 & 1) == 0) &&
         (_CGRectIsNull(dVar36,dVar37,dVar38,dVar33), ((ulong)puVar10 & 1) == 0)) &&
        (_CGRectIsInfinite(dVar36,dVar37,dVar38,dVar33), ((ulong)puVar10 & 1) == 0)) &&
       (dVar23 = dVar36, dVar30 = dVar37, dVar31 = dVar38, dVar34 = dVar33, _CGRectIsEmpty(),
       ((ulong)puVar10 & 1) == 0)) {
      func_0x00010bf20c00(puVar5);
      if (puVar3[0x113] == '\x01') {
        bVar1 = true;
LAB_107010f54:
        bVar20 = bVar1;
        dVar25 = dVar36;
        _CGRectGetMinY(dVar36,dVar37,dVar38,dVar33);
        dVar24 = dVar23;
        _CGRectGetMinY();
        func_0x00010c181140(dVar25 - dVar24,*(undefined8 *)(puVar3 + 0x38));
        dVar25 = dVar36;
        _CGRectGetMinX(dVar36,dVar37,dVar38,dVar33);
        dVar24 = dVar23;
        _CGRectGetMinX(dVar23,dVar30,dVar31,dVar34);
        func_0x00010c181140(dVar25 - dVar24,*(undefined8 *)(puVar3 + 0x40));
        dVar25 = dVar36;
        _CGRectGetMaxY(dVar36,dVar37,dVar38,dVar33);
        dVar24 = dVar23;
        _CGRectGetMaxY(dVar23,dVar30,dVar31,dVar34);
        func_0x00010c181140(dVar25 - dVar24,*(undefined8 *)(puVar3 + 0x48));
        dVar24 = dVar36;
        _CGRectGetMaxX(dVar36,dVar37,dVar38,dVar33);
        dVar25 = dVar23;
        dVar32 = dVar31;
        dVar35 = dVar34;
        _CGRectGetMaxX(dVar23,dVar30);
        dVar25 = dVar24 - dVar25;
        func_0x00010c181140(*(undefined8 *)(puVar3 + 0x50));
        bVar21 = 1;
      }
      else {
        puVar10 = puVar3 + 0x10;
        _objc_loadWeakRetained();
        puVar11 = puVar10;
        _objc_release();
        bVar1 = puVar9 != puVar10;
        if ((puVar3[0x110] != '\x01') || (puVar9 != puVar10)) goto LAB_107010f54;
        _CGRectEqualToRect(dVar23,dVar30,dVar31,dVar34,*(undefined8 *)(puVar3 + 0x78),
                           *(undefined8 *)(puVar3 + 0x80),*(undefined8 *)(puVar3 + 0x88),
                           *(undefined8 *)(puVar3 + 0x90));
        if (((int)puVar11 == 0) ||
           (_CGRectEqualToRect(dVar22,param_2,param_3,param_4,*(undefined8 *)(puVar3 + 0x98),
                               *(undefined8 *)(puVar3 + 0xa0),*(undefined8 *)(puVar3 + 0xa8),
                               *(undefined8 *)(puVar3 + 0xb0)), (int)puVar11 == 0)) {
          bVar1 = false;
          goto LAB_107010f54;
        }
        dVar25 = dVar36;
        dVar24 = dVar37;
        dVar32 = dVar38;
        dVar35 = dVar33;
        _CGRectEqualToRect();
        bVar20 = false;
        bVar21 = 0;
        bVar1 = false;
        if (((ulong)puVar11 & 1) == 0) goto LAB_107010f54;
      }
      puVar10 = puVar3 + 0x18;
      _objc_loadWeakRetained(puVar10);
      func_0x00010c08cd20();
      dVar26 = dVar25;
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010c279540(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86320();
      _objc_release(puVar10);
      puVar10 = puVar3 + 0x18;
      _objc_loadWeakRetained();
      puVar11 = puVar10;
      func_0x00010c0f0780();
      _objc_retainAutoreleasedReturnValue();
      if (((puVar11 != puVar5) ||
          (puVar12 = puVar11, _CGRectIsNull(dVar25,dVar24,dVar32,dVar35), ((ulong)puVar12 & 1) != 0)
          ) || ((_CGRectIsInfinite(dVar25,dVar24,dVar32,dVar35), ((ulong)puVar12 & 1) != 0 ||
                (dVar27 = dVar25, _CGRectGetWidth(dVar25,dVar24,dVar32,dVar35), dVar27 <= 0.0)))) {
        _objc_release(puVar11);
        _objc_release(puVar10);
LAB_107011208:
        bVar19 = 0;
      }
      else {
        dVar27 = dVar25;
        _CGRectGetHeight(dVar25,dVar24,dVar32,dVar35);
        _objc_release(puVar11);
        _objc_release(puVar10);
        if (dVar27 <= 0.0) goto LAB_107011208;
        dVar27 = dVar26;
        func_0x00010bf49220(*(undefined8 *)(puVar3 + 0x38));
        dVar28 = dVar25;
        _CGRectGetMinY(dVar25,dVar24,dVar32,dVar35);
        dVar29 = dVar23;
        _CGRectGetMinY(dVar23,dVar30,dVar31,dVar34);
        puVar10 = puVar3;
        _objc_opt_class();
        iVar2 = (int)puVar10;
        func_0x00010c13b000(dVar27,dVar28 - dVar29,dVar26);
        if ((((!bVar20 && ((puVar3[0x111] ^ 0xff) & 1) == 0) &&
             (_CGRectEqualToRect(dVar23,dVar30,dVar31,dVar34,*(undefined8 *)(puVar3 + 0x78),
                                 *(undefined8 *)(puVar3 + 0x80),*(undefined8 *)(puVar3 + 0x88),
                                 *(undefined8 *)(puVar3 + 0x90)), iVar2 != 0)) &&
            (_CGRectEqualToRect(dVar25,dVar24,dVar32,dVar35,*(undefined8 *)(puVar3 + 0xd8),
                                *(undefined8 *)(puVar3 + 0xe0),*(undefined8 *)(puVar3 + 0xe8),
                                *(undefined8 *)(puVar3 + 0xf0)), iVar2 != 0)) &&
           ((dVar26 == *(double *)(puVar3 + 0xf8) && (dVar27 == *(double *)(puVar3 + 0x100)))))
        goto LAB_107011208;
        func_0x00010c181140(dVar27,*(undefined8 *)(puVar3 + 0x60));
        *(double *)(puVar3 + 0xd8) = dVar25;
        *(double *)(puVar3 + 0xe0) = dVar24;
        *(double *)(puVar3 + 0xe8) = dVar32;
        *(double *)(puVar3 + 0xf0) = dVar35;
        *(double *)(puVar3 + 0xf8) = dVar26;
        *(double *)(puVar3 + 0x100) = dVar27;
        bVar19 = 1;
        puVar3[0x111] = 1;
      }
      _objc_storeWeak(puVar3 + 0x10,puVar9);
      *(double *)(puVar3 + 0x78) = dVar23;
      *(double *)(puVar3 + 0x80) = dVar30;
      *(double *)(puVar3 + 0x88) = dVar31;
      *(double *)(puVar3 + 0x90) = dVar34;
      *(double *)(puVar3 + 0x98) = dVar22;
      *(double *)(puVar3 + 0xa0) = param_2;
      *(double *)(puVar3 + 0xa8) = param_3;
      *(double *)(puVar3 + 0xb0) = param_4;
      *(double *)(puVar3 + 0xb8) = dVar36;
      *(double *)(puVar3 + 0xc0) = dVar37;
      *(double *)(puVar3 + 200) = dVar38;
      *(double *)(puVar3 + 0xd0) = dVar33;
      puVar3[0x110] = 1;
      *(undefined2 *)(puVar3 + 0x112) = 1;
      if ((bool)(bVar21 | bVar19)) {
        *(long *)(puVar3 + 0x108) = *(long *)(puVar3 + 0x108) + 1;
      }
    }
  }
LAB_107010e88:
  _objc_release(puVar9);
LAB_107010e90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107010a98; end: 107010ceb; -[SCCameraOverlayTopAreaLayoutController _installDirectorModeTopLayoutGuideInOverlayView:] */

void FUN_107010a98(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  bool bVar20;
  byte bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined *puVar12;
  
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_opt_new();
  uVar16 = *(undefined8 *)(param_5 + 0x30);
  *(undefined **)(param_5 + 0x30) = puVar3;
  _objc_release(uVar16);
  func_0x00010c1a99e0(*(undefined8 *)(param_5 + 0x30));
  func_0x00010bef9680(param_7);
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_7;
  func_0x00010c274200(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_5 + 0x60);
  *(undefined8 *)(param_5 + 0x60) = uVar5;
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_7;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar17 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 0.0;
  uVar9 = uVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_5 + 0x68);
  *(undefined **)(param_5 + 0x68) = puVar3;
  _objc_release(uVar18);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar3[0x114] & 1) != 0) {
    return;
  }
  puVar10 = puVar3 + 8;
  _objc_loadWeakRetained();
  if (puVar10 == (undefined *)0x0) goto LAB_107010e90;
  puVar11 = puVar10;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    if ((puVar3[0x112] & 1) == 0) {
      puVar3[0x113] = 1;
    }
    else {
      puVar12 = puVar10;
      func_0x00010bf20c00();
      iVar2 = (int)puVar12;
      _CGRectEqualToRect();
      bVar21 = puVar3[0x113];
      puVar3[0x113] = 1;
      if ((iVar2 != 0) && ((bVar21 & 1) != 0)) goto LAB_107010e88;
    }
    func_0x00010bf20c00(puVar10);
    *(double *)(puVar3 + 0x78) = dVar22;
    *(double *)(puVar3 + 0x80) = param_2;
    *(double *)(puVar3 + 0x88) = param_3;
    *(double *)(puVar3 + 0x90) = param_4;
    puVar3[0x112] = 1;
  }
  else {
    func_0x00010bf20c00(puVar11);
    dVar33 = dVar22;
    dVar38 = param_2;
    dVar23 = param_3;
    dVar30 = param_4;
    func_0x00010c148fc0(puVar11);
    dVar36 = dVar22 + dVar38;
    dVar37 = param_2 + dVar33;
    dVar38 = param_3 - (dVar38 + dVar30);
    dVar33 = param_4 - (dVar33 + dVar23);
    puVar12 = puVar10;
    func_0x00010bf513e0();
    _CGRectIsEmpty(dVar22,param_2,param_3,param_4);
    if ((((((ulong)puVar12 & 1) == 0) &&
         (_CGRectIsNull(dVar36,dVar37,dVar38,dVar33), ((ulong)puVar12 & 1) == 0)) &&
        (_CGRectIsInfinite(dVar36,dVar37,dVar38,dVar33), ((ulong)puVar12 & 1) == 0)) &&
       (dVar23 = dVar36, dVar30 = dVar37, dVar31 = dVar38, dVar34 = dVar33, _CGRectIsEmpty(),
       ((ulong)puVar12 & 1) == 0)) {
      func_0x00010bf20c00(puVar10);
      if (puVar3[0x113] == '\x01') {
        bVar1 = true;
LAB_107010f54:
        bVar20 = bVar1;
        dVar25 = dVar36;
        _CGRectGetMinY(dVar36,dVar37,dVar38,dVar33);
        dVar24 = dVar23;
        _CGRectGetMinY();
        func_0x00010c181140(dVar25 - dVar24,*(undefined8 *)(puVar3 + 0x38));
        dVar25 = dVar36;
        _CGRectGetMinX(dVar36,dVar37,dVar38,dVar33);
        dVar24 = dVar23;
        _CGRectGetMinX(dVar23,dVar30,dVar31,dVar34);
        func_0x00010c181140(dVar25 - dVar24,*(undefined8 *)(puVar3 + 0x40));
        dVar25 = dVar36;
        _CGRectGetMaxY(dVar36,dVar37,dVar38,dVar33);
        dVar24 = dVar23;
        _CGRectGetMaxY(dVar23,dVar30,dVar31,dVar34);
        func_0x00010c181140(dVar25 - dVar24,*(undefined8 *)(puVar3 + 0x48));
        dVar24 = dVar36;
        _CGRectGetMaxX(dVar36,dVar37,dVar38,dVar33);
        dVar25 = dVar23;
        dVar32 = dVar31;
        dVar35 = dVar34;
        _CGRectGetMaxX(dVar23,dVar30);
        dVar25 = dVar24 - dVar25;
        func_0x00010c181140(*(undefined8 *)(puVar3 + 0x50));
        bVar21 = 1;
      }
      else {
        puVar12 = puVar3 + 0x10;
        _objc_loadWeakRetained();
        puVar13 = puVar12;
        _objc_release();
        bVar1 = puVar11 != puVar12;
        if ((puVar3[0x110] != '\x01') || (puVar11 != puVar12)) goto LAB_107010f54;
        _CGRectEqualToRect(dVar23,dVar30,dVar31,dVar34,*(undefined8 *)(puVar3 + 0x78),
                           *(undefined8 *)(puVar3 + 0x80),*(undefined8 *)(puVar3 + 0x88),
                           *(undefined8 *)(puVar3 + 0x90));
        if (((int)puVar13 == 0) ||
           (_CGRectEqualToRect(dVar22,param_2,param_3,param_4,*(undefined8 *)(puVar3 + 0x98),
                               *(undefined8 *)(puVar3 + 0xa0),*(undefined8 *)(puVar3 + 0xa8),
                               *(undefined8 *)(puVar3 + 0xb0)), (int)puVar13 == 0)) {
          bVar1 = false;
          goto LAB_107010f54;
        }
        dVar25 = dVar36;
        dVar24 = dVar37;
        dVar32 = dVar38;
        dVar35 = dVar33;
        _CGRectEqualToRect();
        bVar20 = false;
        bVar21 = 0;
        bVar1 = false;
        if (((ulong)puVar13 & 1) == 0) goto LAB_107010f54;
      }
      puVar12 = puVar3 + 0x18;
      _objc_loadWeakRetained(puVar12);
      func_0x00010c08cd20();
      dVar26 = dVar25;
      _objc_release(puVar12);
      puVar12 = puVar11;
      func_0x00010c279540(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86320();
      _objc_release(puVar12);
      puVar12 = puVar3 + 0x18;
      _objc_loadWeakRetained();
      puVar13 = puVar12;
      func_0x00010c0f0780();
      _objc_retainAutoreleasedReturnValue();
      if (((puVar13 != puVar10) ||
          (puVar14 = puVar13, _CGRectIsNull(dVar25,dVar24,dVar32,dVar35), ((ulong)puVar14 & 1) != 0)
          ) || ((_CGRectIsInfinite(dVar25,dVar24,dVar32,dVar35), ((ulong)puVar14 & 1) != 0 ||
                (dVar27 = dVar25, _CGRectGetWidth(dVar25,dVar24,dVar32,dVar35), dVar27 <= 0.0)))) {
        _objc_release(puVar13);
        _objc_release(puVar12);
LAB_107011208:
        bVar19 = 0;
      }
      else {
        dVar27 = dVar25;
        _CGRectGetHeight(dVar25,dVar24,dVar32,dVar35);
        _objc_release(puVar13);
        _objc_release(puVar12);
        if (dVar27 <= 0.0) goto LAB_107011208;
        dVar27 = dVar26;
        func_0x00010bf49220(*(undefined8 *)(puVar3 + 0x38));
        dVar28 = dVar25;
        _CGRectGetMinY(dVar25,dVar24,dVar32,dVar35);
        dVar29 = dVar23;
        _CGRectGetMinY(dVar23,dVar30,dVar31,dVar34);
        puVar12 = puVar3;
        _objc_opt_class();
        iVar2 = (int)puVar12;
        func_0x00010c13b000(dVar27,dVar28 - dVar29,dVar26);
        if ((((!bVar20 && ((puVar3[0x111] ^ 0xff) & 1) == 0) &&
             (_CGRectEqualToRect(dVar23,dVar30,dVar31,dVar34,*(undefined8 *)(puVar3 + 0x78),
                                 *(undefined8 *)(puVar3 + 0x80),*(undefined8 *)(puVar3 + 0x88),
                                 *(undefined8 *)(puVar3 + 0x90)), iVar2 != 0)) &&
            (_CGRectEqualToRect(dVar25,dVar24,dVar32,dVar35,*(undefined8 *)(puVar3 + 0xd8),
                                *(undefined8 *)(puVar3 + 0xe0),*(undefined8 *)(puVar3 + 0xe8),
                                *(undefined8 *)(puVar3 + 0xf0)), iVar2 != 0)) &&
           ((dVar26 == *(double *)(puVar3 + 0xf8) && (dVar27 == *(double *)(puVar3 + 0x100)))))
        goto LAB_107011208;
        func_0x00010c181140(dVar27,*(undefined8 *)(puVar3 + 0x60));
        *(double *)(puVar3 + 0xd8) = dVar25;
        *(double *)(puVar3 + 0xe0) = dVar24;
        *(double *)(puVar3 + 0xe8) = dVar32;
        *(double *)(puVar3 + 0xf0) = dVar35;
        *(double *)(puVar3 + 0xf8) = dVar26;
        *(double *)(puVar3 + 0x100) = dVar27;
        bVar19 = 1;
        puVar3[0x111] = 1;
      }
      _objc_storeWeak(puVar3 + 0x10,puVar11);
      *(double *)(puVar3 + 0x78) = dVar23;
      *(double *)(puVar3 + 0x80) = dVar30;
      *(double *)(puVar3 + 0x88) = dVar31;
      *(double *)(puVar3 + 0x90) = dVar34;
      *(double *)(puVar3 + 0x98) = dVar22;
      *(double *)(puVar3 + 0xa0) = param_2;
      *(double *)(puVar3 + 0xa8) = param_3;
      *(double *)(puVar3 + 0xb0) = param_4;
      *(double *)(puVar3 + 0xb8) = dVar36;
      *(double *)(puVar3 + 0xc0) = dVar37;
      *(double *)(puVar3 + 200) = dVar38;
      *(double *)(puVar3 + 0xd0) = dVar33;
      puVar3[0x110] = 1;
      *(undefined2 *)(puVar3 + 0x112) = 1;
      if ((bool)(bVar21 | bVar19)) {
        *(long *)(puVar3 + 0x108) = *(long *)(puVar3 + 0x108) + 1;
      }
    }
  }
LAB_107010e88:
  _objc_release(puVar11);
LAB_107010e90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 107010cec; end: 10701125f; -[SCCameraOverlayTopAreaLayoutController _synchronize] */

void FUN_107010cec(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulong uVar5;
  
  if ((*(byte *)(param_5 + 0x114) & 1) != 0) {
    return;
  }
  uVar3 = param_5 + 8;
  _objc_loadWeakRetained();
  if (uVar3 == 0) goto LAB_107010e90;
  uVar4 = uVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    if ((*(byte *)(param_5 + 0x112) & 1) == 0) {
      *(undefined1 *)(param_5 + 0x113) = 1;
    }
    else {
      uVar5 = uVar3;
      func_0x00010bf20c00();
      iVar2 = (int)uVar5;
      _CGRectEqualToRect();
      bVar11 = *(byte *)(param_5 + 0x113);
      *(undefined1 *)(param_5 + 0x113) = 1;
      if ((iVar2 != 0) && ((bVar11 & 1) != 0)) goto LAB_107010e88;
    }
    func_0x00010bf20c00(uVar3);
    *(double *)(param_5 + 0x78) = param_1;
    *(double *)(param_5 + 0x80) = param_2;
    *(double *)(param_5 + 0x88) = param_3;
    *(double *)(param_5 + 0x90) = param_4;
    *(undefined1 *)(param_5 + 0x112) = 1;
  }
  else {
    func_0x00010bf20c00(uVar4);
    dVar22 = param_1;
    dVar27 = param_2;
    dVar12 = param_3;
    dVar19 = param_4;
    func_0x00010c148fc0(uVar4);
    dVar25 = param_1 + dVar27;
    dVar26 = param_2 + dVar22;
    dVar27 = param_3 - (dVar27 + dVar19);
    dVar22 = param_4 - (dVar22 + dVar12);
    uVar5 = uVar3;
    func_0x00010bf513e0();
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    if (((((uVar5 & 1) == 0) && (_CGRectIsNull(dVar25,dVar26,dVar27,dVar22), (uVar5 & 1) == 0)) &&
        (_CGRectIsInfinite(dVar25,dVar26,dVar27,dVar22), (uVar5 & 1) == 0)) &&
       (dVar12 = dVar25, dVar19 = dVar26, dVar20 = dVar27, dVar23 = dVar22, _CGRectIsEmpty(),
       (uVar5 & 1) == 0)) {
      func_0x00010bf20c00(uVar3);
      if (*(char *)(param_5 + 0x113) == '\x01') {
        bVar1 = true;
LAB_107010f54:
        bVar10 = bVar1;
        dVar14 = dVar25;
        _CGRectGetMinY(dVar25,dVar26,dVar27,dVar22);
        dVar13 = dVar12;
        _CGRectGetMinY();
        func_0x00010c181140(dVar14 - dVar13,*(undefined8 *)(param_5 + 0x38));
        dVar14 = dVar25;
        _CGRectGetMinX(dVar25,dVar26,dVar27,dVar22);
        dVar13 = dVar12;
        _CGRectGetMinX(dVar12,dVar19,dVar20,dVar23);
        func_0x00010c181140(dVar14 - dVar13,*(undefined8 *)(param_5 + 0x40));
        dVar14 = dVar25;
        _CGRectGetMaxY(dVar25,dVar26,dVar27,dVar22);
        dVar13 = dVar12;
        _CGRectGetMaxY(dVar12,dVar19,dVar20,dVar23);
        func_0x00010c181140(dVar14 - dVar13,*(undefined8 *)(param_5 + 0x48));
        dVar13 = dVar25;
        _CGRectGetMaxX(dVar25,dVar26,dVar27,dVar22);
        dVar14 = dVar12;
        dVar21 = dVar20;
        dVar24 = dVar23;
        _CGRectGetMaxX(dVar12,dVar19);
        dVar14 = dVar13 - dVar14;
        func_0x00010c181140(*(undefined8 *)(param_5 + 0x50));
        bVar11 = 1;
      }
      else {
        uVar5 = param_5 + 0x10;
        _objc_loadWeakRetained();
        uVar6 = uVar5;
        _objc_release();
        bVar1 = uVar4 != uVar5;
        if ((*(char *)(param_5 + 0x110) != '\x01') || (uVar4 != uVar5)) goto LAB_107010f54;
        _CGRectEqualToRect(dVar12,dVar19,dVar20,dVar23,*(undefined8 *)(param_5 + 0x78),
                           *(undefined8 *)(param_5 + 0x80),*(undefined8 *)(param_5 + 0x88),
                           *(undefined8 *)(param_5 + 0x90));
        if (((int)uVar6 == 0) ||
           (_CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x98),
                               *(undefined8 *)(param_5 + 0xa0),*(undefined8 *)(param_5 + 0xa8),
                               *(undefined8 *)(param_5 + 0xb0)), (int)uVar6 == 0)) {
          bVar1 = false;
          goto LAB_107010f54;
        }
        dVar14 = dVar25;
        dVar13 = dVar26;
        dVar21 = dVar27;
        dVar24 = dVar22;
        _CGRectEqualToRect();
        bVar10 = false;
        bVar11 = 0;
        bVar1 = false;
        if ((uVar6 & 1) == 0) goto LAB_107010f54;
      }
      lVar7 = param_5 + 0x18;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c08cd20();
      dVar15 = dVar14;
      _objc_release(lVar7);
      uVar5 = uVar4;
      func_0x00010c279540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86320();
      _objc_release(uVar5);
      uVar5 = param_5 + 0x18;
      _objc_loadWeakRetained();
      uVar6 = uVar5;
      func_0x00010c0f0780();
      _objc_retainAutoreleasedReturnValue();
      if (((uVar6 != uVar3) ||
          (uVar8 = uVar6, _CGRectIsNull(dVar14,dVar13,dVar21,dVar24), (uVar8 & 1) != 0)) ||
         ((_CGRectIsInfinite(dVar14,dVar13,dVar21,dVar24), (uVar8 & 1) != 0 ||
          (dVar16 = dVar14, _CGRectGetWidth(dVar14,dVar13,dVar21,dVar24), dVar16 <= 0.0)))) {
        _objc_release(uVar6);
        _objc_release(uVar5);
LAB_107011208:
        bVar9 = 0;
      }
      else {
        dVar16 = dVar14;
        _CGRectGetHeight(dVar14,dVar13,dVar21,dVar24);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if (dVar16 <= 0.0) goto LAB_107011208;
        dVar16 = dVar15;
        func_0x00010bf49220(*(undefined8 *)(param_5 + 0x38));
        dVar17 = dVar14;
        _CGRectGetMinY(dVar14,dVar13,dVar21,dVar24);
        dVar18 = dVar12;
        _CGRectGetMinY(dVar12,dVar19,dVar20,dVar23);
        lVar7 = param_5;
        _objc_opt_class();
        iVar2 = (int)lVar7;
        func_0x00010c13b000(dVar16,dVar17 - dVar18,dVar15);
        if ((((!bVar10 && ((*(byte *)(param_5 + 0x111) ^ 0xff) & 1) == 0) &&
             (_CGRectEqualToRect(dVar12,dVar19,dVar20,dVar23,*(undefined8 *)(param_5 + 0x78),
                                 *(undefined8 *)(param_5 + 0x80),*(undefined8 *)(param_5 + 0x88),
                                 *(undefined8 *)(param_5 + 0x90)), iVar2 != 0)) &&
            (_CGRectEqualToRect(dVar14,dVar13,dVar21,dVar24,*(undefined8 *)(param_5 + 0xd8),
                                *(undefined8 *)(param_5 + 0xe0),*(undefined8 *)(param_5 + 0xe8),
                                *(undefined8 *)(param_5 + 0xf0)), iVar2 != 0)) &&
           ((dVar15 == *(double *)(param_5 + 0xf8) && (dVar16 == *(double *)(param_5 + 0x100)))))
        goto LAB_107011208;
        func_0x00010c181140(dVar16,*(undefined8 *)(param_5 + 0x60));
        *(double *)(param_5 + 0xd8) = dVar14;
        *(double *)(param_5 + 0xe0) = dVar13;
        *(double *)(param_5 + 0xe8) = dVar21;
        *(double *)(param_5 + 0xf0) = dVar24;
        *(double *)(param_5 + 0xf8) = dVar15;
        *(double *)(param_5 + 0x100) = dVar16;
        bVar9 = 1;
        *(undefined1 *)(param_5 + 0x111) = 1;
      }
      _objc_storeWeak(param_5 + 0x10,uVar4);
      *(double *)(param_5 + 0x78) = dVar12;
      *(double *)(param_5 + 0x80) = dVar19;
      *(double *)(param_5 + 0x88) = dVar20;
      *(double *)(param_5 + 0x90) = dVar23;
      *(double *)(param_5 + 0x98) = param_1;
      *(double *)(param_5 + 0xa0) = param_2;
      *(double *)(param_5 + 0xa8) = param_3;
      *(double *)(param_5 + 0xb0) = param_4;
      *(double *)(param_5 + 0xb8) = dVar25;
      *(double *)(param_5 + 0xc0) = dVar26;
      *(double *)(param_5 + 200) = dVar27;
      *(double *)(param_5 + 0xd0) = dVar22;
      *(undefined1 *)(param_5 + 0x110) = 1;
      *(undefined2 *)(param_5 + 0x112) = 1;
      if ((bool)(bVar11 | bVar9)) {
        *(long *)(param_5 + 0x108) = *(long *)(param_5 + 0x108) + 1;
      }
    }
  }
LAB_107010e88:
  _objc_release(uVar4);
LAB_107010e90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107011260; end: 1070113c3; -[SCCameraOverlayTopAreaLayoutController _invalidate] */

void FUN_107011260(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x114) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x114) = 1;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + 0x70));
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == lVar1) {
    func_0x00010c12cdc0(lVar1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == lVar1) {
    func_0x00010c12cdc0(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar3);
  _objc_storeWeak(param_1 + 0x20,0);
  _objc_storeWeak(param_1 + 0x18,0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar3);
  _objc_storeWeak(param_1 + 8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070113c4; end: 107011583; -[SCCameraOverlayTopAreaLayoutController .cxx_destruct] */

void FUN_1070113c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107011584; end: 10701158b; -[SCCameraOverlayView accessibilityElements] */

undefined8 FUN_107011584(void)

{
  return 0;
}



/* Entry: 10701158c; end: 1070115eb; -[SCCameraOverlayView _appendHidableFooterViewContainers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701158c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_112762878);
  _objc_retain(param_3);
  func_0x00010c1a7f60(param_3,param_2,uVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112762800),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070115ec; end: 107011703; -[SCCameraOverlayView setCameraFooterViewsHiddenForHandsFreeInterstitial:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070115ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uint)*(byte *)(param_1 + _DAT_112762878) != (uint)param_3) {
    *(char *)(param_1 + _DAT_112762878) = (char)param_3;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    param_1 = *(long *)(param_1 + _DAT_112762800);
    _objc_retain(param_1);
    lVar4 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar4 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar6 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010c1a7f60(*(undefined8 *)(lStack_108 + lVar6 * 8),param_2,param_3);
          lVar6 = lVar6 + 1;
        } while (lVar4 != lVar6);
        lVar4 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_11276287c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126d40d0;
    _objc_alloc();
    lVar4 = param_1;
    func_0x00010bfe12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf20780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033d80(puVar1,param_2,lVar4,lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107011704; end: 1070117cf; -[SCCameraOverlayView hidableBottomViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107011704(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276287c;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126d40d0;
    _objc_alloc();
    lVar5 = param_1;
    func_0x00010bfe12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf20780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033d80(puVar1,param_2,lVar5,lVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}


