/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061d6b44; end: 1061d6ba3; -[SCFeatureLensExplorerFromCarouselOverlayImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d6b44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742774,0);
  _objc_storeStrong(param_1 + _DAT_112742770,0);
  _objc_storeStrong(param_1 + _DAT_112742768,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742778,0);
  return;
}



/* Entry: 1061d6ba4; end: 1061d6eaf; -[SCFeatureSnapPlusLensOverlay initWithBaseOverlay:paywallPresenter:notificationPool:lensConfigProvider:lensPlusFreemiumService:lensPlusOverlayCTAService:plusSyncService:lensPlusTierService:nglStudySettingsProvider:cameraViewControllerInfoProvider:lensProcessingEffectActionUpdater:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061d6ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f03f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  lVar6 = (long)_DAT_11274277c;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112742780;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112742784;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112742788;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274278c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112742790;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1de660(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112742794;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112742798;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274279c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127427a0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127427a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127427a4) = puVar4;
    _objc_release(uVar2);
  }
  func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
  func_0x00010be66f20(puVar1);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061d6eb0; end: 1061d703b; -[SCFeatureSnapPlusLensOverlay _observeTierChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d6eb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742788);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c095ea0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112742794);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c26e860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      puVar5 = auStack_48;
      _objc_initWeak(puVar5,param_1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c0e0ec0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      lVar6 = lVar3;
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1061d703c; end: 1061d7077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d703c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c125040(*(undefined8 *)(param_1 + _DAT_11274277c));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d7078; end: 1061d7087; -[SCFeatureSnapPlusLensOverlay activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d7078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274277c),PTR_s_activate_112599760);
  return;
}



/* Entry: 1061d7088; end: 1061d7097; -[SCFeatureSnapPlusLensOverlay configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d7088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf477d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274277c),PTR_s_configureWithContainerView__1125af798);
  return;
}



/* Entry: 1061d7098; end: 1061d7243; -[SCFeatureSnapPlusLensOverlay shouldShowForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1061d7098(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742794);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c233480();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar7 = 0;
    goto LAB_1061d7224;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274279c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c2720a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar5 = param_3;
  func_0x00010c081a80();
  if (((int)uVar5 == 0) || (uVar2 = uVar4, func_0x00010c06b3e0(), (int)uVar2 == 0)) {
LAB_1061d71c8:
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742790);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c230be0(uVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar1);
    uVar7 = (uint)uVar2 ^ 1;
  }
  else {
    uVar5 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c118620(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0(uVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) goto LAB_1061d71c8;
    uVar7 = 0;
  }
  _objc_release(uVar4);
LAB_1061d7224:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1061d7244; end: 1061d724b; -[SCFeatureSnapPlusLensOverlay shouldHideOnCarouselDeactivate] */

undefined8 FUN_1061d7244(void)

{
  return 0;
}



/* Entry: 1061d724c; end: 1061d73f3; -[SCFeatureSnapPlusLensOverlay viewModelForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d724c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11274278c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0736c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112742794);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c076600();
  _objc_release(uVar4);
  if ((uVar3 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c095e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c280e00();
    if ((((uint)uVar6 ^ 1) & (uint)uVar8) == 1) {
      lVar5 = param_1;
      func_0x00010be417a0(param_1,param_2,param_3);
      if ((int)lVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + _DAT_112742788);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010c095d40();
        _objc_release(uVar6);
      }
    }
    else {
      uVar8 = 1;
    }
    _objc_release(uVar4);
  }
  else {
    uVar8 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_112742790);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf5d180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126c8a58;
  func_0x00010bf9ada0(PTR_PTR_1126c8a58,param_2,uVar8,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1061d73f4; end: 1061d74ff; -[SCFeatureSnapPlusLensOverlay didTapOverlayActionOverLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d73f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11274278c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0736c0();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    lVar7 = (long)_DAT_1127427a0;
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23f6a0(uVar5,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      goto LAB_1061d74e8;
    }
  }
  func_0x00010be7d2c0(param_1,param_2,param_3);
LAB_1061d74e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d7500; end: 1061d7577; -[SCFeatureSnapPlusLensOverlay didTapOverlayBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d7500(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be43b40();
  if ((int)lVar1 != 0) {
    lVar3 = (long)_DAT_1127427a8;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__presentPaywallForLens__11257ce50,*(undefined8 *)(param_1 + lVar3));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7e9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentSnapPlusNotification_11257d408);
  return;
}



/* Entry: 1061d7578; end: 1061d75ef; -[SCFeatureSnapPlusLensOverlay didChangeActiveLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d7578(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127427a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 == 0) {
    *(long *)(param_1 + _DAT_1127427ac) = *(long *)(param_1 + _DAT_1127427ac) + 1;
  }
  else {
    func_0x00010be120c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d75f0; end: 1061d76a3; -[SCFeatureSnapPlusLensOverlay forwardCameraTimerGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d75f0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274277c);
  func_0x00010c07e040();
  if (((iVar1 != 0) && (lVar4 = param_3, func_0x00010c252440(), lVar4 == 3)) &&
     (lVar4 = (long)_DAT_1127427a8, *(long *)(param_1 + lVar4) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112742794);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076600();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x00010be7d2c0(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d76a4; end: 1061d773b; -[SCFeatureSnapPlusLensOverlay forwardVolumeButtonBlockedCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d76a4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274277c);
  func_0x00010c07e040();
  if ((iVar1 != 0) && (lVar4 = (long)_DAT_1127427a8, *(long *)(param_1 + lVar4) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112742794);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076600();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__presentPaywallForLens__11257ce50,*(undefined8 *)(param_1 + lVar4));
      return;
    }
  }
  return;
}



/* Entry: 1061d773c; end: 1061d7807; -[SCFeatureSnapPlusLensOverlay _presentPaywallForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d773c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11274277c);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecda0(lVar2,param_2,uVar1);
  _objc_release(uVar1);
  if (lVar2 < 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742780);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d760();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1061d7808; end: 1061d7893; -[SCFeatureSnapPlusLensOverlay _presentSnapPlusNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d7808(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x0001061e0a08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf58f80(PTR_PTR_1126afde0,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742784);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061d7894; end: 1061d78db; -[SCFeatureSnapPlusLensOverlay _isShowingPaywallOnAnyActionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061d7894(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742788);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0766c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1061d78dc; end: 1061d7a63; -[SCFeatureSnapPlusLensOverlay _fetchLatestCTAButtonTitleForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d78dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + _DAT_1127427ac) + 1;
    *(long *)(param_1 + _DAT_1127427ac) = lVar1;
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742790);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    lVar5 = lVar2;
    lStack_50 = lVar1;
    _objc_retain(lVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061d7a64; end: 1061d7b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d7a64(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar5 = (long)_DAT_11274277c;
    iVar1 = (int)*(undefined8 *)(lVar2 + lVar5);
    func_0x00010c07e040();
    if ((iVar1 != 0) && (*(long *)(lVar2 + _DAT_1127427ac) == *(long *)(param_1 + 0x30))) {
      uVar3 = *(undefined8 *)(lVar2 + _DAT_1127427a8);
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        func_0x00010c283360(*(undefined8 *)(lVar2 + lVar5));
      }
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d7b24; end: 1061d7c67; -[SCFeatureSnapPlusLensOverlay _isLensPlusGameLensUpsellEligible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061d7b24(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar6 = 0;
    goto LAB_1061d7c44;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742794);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076600();
  if ((int)uVar2 == 0) {
LAB_1061d7c28:
    uVar6 = 0;
  }
  else {
    uVar6 = param_3;
    func_0x00010c081a80();
    if ((uVar6 & 1) == 0) {
      uVar5 = param_3;
      func_0x00010c112da0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      if (uVar6 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_112742798);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bfbbba0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bf4b900();
        _objc_release(uVar2);
        _objc_release(uVar3);
        _objc_release(uVar5);
        if ((int)uVar4 == 0) goto LAB_1061d7c28;
        goto LAB_1061d7bf8;
      }
      uVar6 = 0;
    }
    else {
LAB_1061d7bf8:
      uVar5 = *(ulong *)(param_1 + _DAT_112742788);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c095d60();
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
LAB_1061d7c44:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1061d7c68; end: 1061d7d47; -[SCFeatureSnapPlusLensOverlay .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d7c68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127427a4,0);
  _objc_storeStrong(param_1 + _DAT_1127427a0,0);
  _objc_storeStrong(param_1 + _DAT_11274279c,0);
  _objc_storeStrong(param_1 + _DAT_112742798,0);
  _objc_storeStrong(param_1 + _DAT_112742794,0);
  _objc_storeStrong(param_1 + _DAT_112742790,0);
  _objc_storeStrong(param_1 + _DAT_11274278c,0);
  _objc_storeStrong(param_1 + _DAT_112742788,0);
  _objc_storeStrong(param_1 + _DAT_1127427a8,0);
  _objc_storeStrong(param_1 + _DAT_112742784,0);
  _objc_storeStrong(param_1 + _DAT_112742780,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274277c,0);
  return;
}



/* Entry: 1061d7d48; end: 1061d7e03; -[SCLensExplorerOverlayActionHandler initWithLensExplorerPresenter:cameraUIScopeViewContainer:cameraViewType:alwaysUsePickerMode:] */

undefined1 *
FUN_1061d7d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f03f8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d7e04; end: 1061d7e0b; -[SCLensExplorerOverlayActionHandler handleCaptureButtonTapped] */

void FUN_1061d7e04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openLensExplorerWithSource__112578e58,7);
  return;
}



/* Entry: 1061d7e0c; end: 1061d7e13; -[SCLensExplorerOverlayActionHandler handleOverlayCTATapped] */

void FUN_1061d7e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openLensExplorerWithSource__112578e58,4);
  return;
}



/* Entry: 1061d7e14; end: 1061d7f0b; -[SCLensExplorerOverlayActionHandler _openLensExplorerWithSource:] */

void FUN_1061d7e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b1b50;
  func_0x00010bf6a8e0(PTR_PTR_1126b1b50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  lVar3 = param_1;
  func_0x00010bdf6c00(param_1);
  lVar4 = param_1;
  func_0x00010bdf6c20(param_1);
  func_0x00010c04a5a0(puVar2,param_2,param_3,lVar3,puVar1,0,lVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cc00(uVar5,param_2,uVar7,puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061d7f0c; end: 1061d7f33; -[SCLensExplorerOverlayActionHandler _currentLensExplorerCameraSource] */

undefined8 FUN_1061d7f0c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x18) - 1;
  if (uVar1 < 0xd) {
    return *(undefined8 *)(&UNK_10ddd9e40 + uVar1 * 8);
  }
  return 1;
}



/* Entry: 1061d7f34; end: 1061d7f47; -[SCLensExplorerOverlayActionHandler _currentLensExplorerMode] */

undefined8 FUN_1061d7f34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1061d7f48; end: 1061d7f77; -[SCLensExplorerOverlayActionHandler .cxx_destruct] */

void FUN_1061d7f48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061d7f78; end: 1061d8223; -[SCFeatureLensExplorerFromCarouselOverlayInitializer initWithLensCarouselManager:lensExplorerBadgeUsageTracking:lensExplorerNavigation:cameraViewType:lensExplorerStudySettings:lensLogger:lensExplorerDataServices:lensPerformerProvider:lensMediaDownloaderFactory:preferences:cameraUIScopeViewContainer:arBar:alwaysUsePickerMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061d7f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f0400;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127427c0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427c4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427c8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127427cc) = param_6;
    lVar3 = (long)_DAT_1127427d0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427d4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427d8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427dc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427e0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427e4;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427e8;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127427ec;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127427f0) = param_15;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061d8224; end: 1061d8283; -[SCFeatureLensExplorerFromCarouselOverlayInitializer enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1061d8224(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127427c8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c06f880();
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf9b3e0();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  return uVar4;
}



/* Entry: 1061d8284; end: 1061d847f; -[SCFeatureLensExplorerFromCarouselOverlayInitializer createInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d8284(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126c8a20;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c8a28;
  _objc_opt_new();
  lVar3 = param_1;
  func_0x00010be376a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c8a60;
  _objc_alloc(PTR_PTR_1126c8a60);
  func_0x00010c01cde0();
  puVar5 = PTR_PTR_1126c8a38;
  _objc_alloc(PTR_PTR_1126c8a38);
  func_0x00010bff6500();
  if (*(long *)(param_1 + _DAT_1127427ec) == 0) {
    puVar6 = PTR_PTR_1126c8a70;
    _objc_alloc(PTR_PTR_1126c8a70);
    func_0x00010c023e00();
  }
  else {
    puVar6 = PTR_PTR_1126c8a68;
    _objc_alloc(PTR_PTR_1126c8a68);
    func_0x00010bfefbe0();
  }
  puVar7 = PTR_PTR_1126c8a40;
  _objc_alloc(PTR_PTR_1126c8a40);
  uVar11 = *(undefined8 *)(param_1 + _DAT_1127427c0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127427dc);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022f00(puVar7,param_2,uVar11,puVar5,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar10 = PTR_PTR_1126c8a78;
  _objc_alloc(PTR_PTR_1126c8a78);
  func_0x00010bff6e40();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1061d8480; end: 1061d8607; -[SCFeatureLensExplorerFromCarouselOverlayInitializer _imageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d8480(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127427d8);
  func_0x00010bf6ad80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa3f20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + _DAT_1127427dc);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_2 + _DAT_1127427e0);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_2 + _DAT_1127427e4);
  _objc_retain(uVar6);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1061d8608;
  puStack_80 = &UNK_110914f38;
  uStack_78 = uVar4;
  uStack_70 = uVar2;
  uStack_68 = uVar6;
  uStack_60 = uVar5;
  uStack_58 = param_1;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  _objc_retain(uVar4);
  func_0x00010bf11fe0(puVar3,param_3,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061d8608; end: 1061d879f;  */

void FUN_1061d8608(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c8a80;
  _objc_alloc(PTR_PTR_1126c8a80);
  func_0x00010c012640();
  puVar5 = PTR_PTR_1126c8a88;
  _objc_alloc(PTR_PTR_1126c8a88);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar6 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c032f40(0x40f5180000000000,puVar5,param_2,puVar4,uVar3,
                      &PTR____CFConstantStringClassReference_110e44738,uVar2,puVar6);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c8a90;
  _objc_alloc(PTR_PTR_1126c8a90);
  func_0x00010c032f20();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_110914f18);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c8a98;
  _objc_alloc(PTR_PTR_1126c8a98);
  func_0x00010c0129e0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1061d87a0; end: 1061d87af;  */

void FUN_1061d87a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf570b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_createMediaDownloaderForMediaTyp_1125b35d0,0,0xe);
  return;
}



/* Entry: 1061d87b0; end: 1061d887f; -[SCFeatureLensExplorerFromCarouselOverlayInitializer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d87b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127427ec,0);
  _objc_storeStrong(param_1 + _DAT_1127427e8,0);
  _objc_storeStrong(param_1 + _DAT_1127427d8,0);
  _objc_storeStrong(param_1 + _DAT_1127427e4,0);
  _objc_storeStrong(param_1 + _DAT_1127427e0,0);
  _objc_storeStrong(param_1 + _DAT_1127427dc,0);
  _objc_storeStrong(param_1 + _DAT_1127427d4,0);
  _objc_storeStrong(param_1 + _DAT_1127427d0,0);
  _objc_storeStrong(param_1 + _DAT_1127427c8,0);
  _objc_storeStrong(param_1 + _DAT_1127427c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127427c0,0);
  return;
}



/* Entry: 1061d8880; end: 1061d898f; -[SCFeatureLensOverlayController initWithBackgroundLayoutStrategy:foregroundLayoutStrategy:ctaStyle:backgroundViewProvider:] */

undefined1 *
FUN_1061d8880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0408;
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d8990; end: 1061d89df; -[SCFeatureLensOverlayController configureWithView:] */

void FUN_1061d8990(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x20,param_3);
  func_0x00010bf47d20(*(undefined8 *)(param_1 + 8));
  func_0x00010bf47d20(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d89e0; end: 1061d8a43; -[SCFeatureLensOverlayController showWithViewModel:] */

void FUN_1061d89e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf25a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedc9c0(param_1,param_2,lVar1 != 0,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061d8a44; end: 1061d8ab3; -[SCFeatureLensOverlayController updateActionButtonTitle:] */

void FUN_1061d8a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x49) == '\x01') {
    _objc_retain(param_3);
    func_0x00010c08fa60();
    func_0x00010bedc9a0(param_1);
    _objc_release(param_3);
    if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c28d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + 0x30),PTR_s_updateWithViewModel__112680e58);
      return;
    }
  }
  return;
}



/* Entry: 1061d8ab4; end: 1061d8abf; -[SCFeatureLensOverlayController hide] */

void FUN_1061d8ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateOverlayWithShow_overlayVi_112594c18,0,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1061d8ac0; end: 1061d8b5f; -[SCFeatureLensOverlayController pointInsideActionButton:] */

undefined8 FUN_1061d8ac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (((lVar1 != 0) && (*(long *)(param_3 + 0x30) != 0)) && (*(char *)(param_3 + 0x49) == '\x01')) {
    lVar1 = param_3 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf512a0(param_1,param_2);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010c102b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,uVar2,PTR_s_pointInsideActionButton__11261e4f0);
    return uVar2;
  }
  return 0;
}



/* Entry: 1061d8b60; end: 1061d8beb; -[SCFeatureLensOverlayController _updateOverlayWithShow:overlayViewModel:] */

void FUN_1061d8b60(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar3 = 0;
      goto LAB_1061d8b98;
    }
  }
  else {
    lVar1 = param_4;
    func_0x00010c071ae0();
    uVar3 = (uint)lVar1 ^ 1;
LAB_1061d8b98:
    if (*(byte *)(param_1 + 0x49) == param_3 && uVar3 == 0) goto LAB_1061d8bd0;
  }
  *(char *)(param_1 + 0x49) = (char)param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = param_4;
  _objc_release(uVar2);
  func_0x00010bee2c20(param_1);
LAB_1061d8bd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061d8bec; end: 1061d8bff; -[SCFeatureLensOverlayController _updateUiVisibility] */

void FUN_1061d8bec(long param_1)

{
  if (*(char *)(param_1 + 0x49) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beba3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showOverlay_11258c290);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeOverlay_112580cb0);
  return;
}



/* Entry: 1061d8c00; end: 1061d8ce3; -[SCFeatureLensOverlayController _updateOverlayViewModelWithActionButtonTitle:] */

void FUN_1061d8c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c8a58;
  if (*(long *)(param_1 + 0x40) != 0) {
    _objc_retain(param_3);
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0cb140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfe5400(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c095b00(uVar5);
    func_0x00010c053240(puVar1,param_2,uVar2,uVar3,param_3,uVar4,uVar5);
    _objc_release(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1061d8ce4; end: 1061d8e17; -[SCFeatureLensOverlayController _showOverlay] */

void FUN_1061d8ce4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      lVar1 = param_1;
      func_0x00010bf14240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(lVar1);
      func_0x00010c095b00(*(undefined8 *)(param_1 + 0x40));
      lVar1 = param_1;
      func_0x00010bf14240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      lVar1 = param_1;
      func_0x00010bf14240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08ccc0(uVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bfb5480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_1;
      func_0x00010bfb5480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08ccc0(uVar2);
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcaaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__animateContentVisible_completio_112550458,1,0);
      return;
    }
  }
  return;
}



/* Entry: 1061d8e18; end: 1061d8e7b; -[SCFeatureLensOverlayController _removeOverlay] */

void FUN_1061d8e18(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*(long *)(param_1 + 0x28) != 0)) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1061d8e7c;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bdcaae0(param_1,param_2,0,&puStack_38);
  }
  return;
}



/* Entry: 1061d8e7c; end: 1061d8ed7;  */

void FUN_1061d8e7c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c138cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_resetIfNeeded_11262bd58);
  return;
}



/* Entry: 1061d8ed8; end: 1061d919f; -[SCFeatureLensOverlayController _animateContentVisible:completion:] */

void FUN_1061d8ed8(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  double in_d3;
  double dVar10;
  double dVar11;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x48) = 1;
  uVar6 = param_1;
  func_0x00010bfb5480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf02b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar4;
  func_0x00010bf529e0();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(uVar4);
  uVar5 = uVar4;
  func_0x00010bf52a60(uVar4,param_2,&uStack_140,auStack_100,0x10);
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (uVar5 != 0) {
    lVar8 = *plStack_130;
    do {
      uVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(uVar4);
        }
        uVar7 = *(undefined8 *)(lStack_138 + uVar9 * 8);
        func_0x00010c1677c0((double)(param_3 ^ 1),uVar7);
        if (param_3 == 0) {
          uStack_168 = *(undefined8 *)(puVar1 + 8);
          uStack_170 = *(undefined8 *)puVar1;
          uStack_158 = *(undefined8 *)(puVar1 + 0x18);
          uStack_160 = *(undefined8 *)(puVar1 + 0x10);
          uStack_148 = *(undefined8 *)(puVar1 + 0x28);
          uStack_150 = *(undefined8 *)(puVar1 + 0x20);
        }
        else {
          func_0x00010bfb68e0(uVar7);
          uStack_198 = *(undefined8 *)(puVar1 + 8);
          uStack_1a0 = *(undefined8 *)puVar1;
          uStack_188 = *(undefined8 *)(puVar1 + 0x18);
          uStack_190 = *(undefined8 *)(puVar1 + 0x10);
          uStack_178 = *(undefined8 *)(puVar1 + 0x28);
          uStack_180 = *(undefined8 *)(puVar1 + 0x20);
          _CGAffineTransformTranslate(&uStack_170,0,in_d3 * 0.5,&uStack_1a0);
        }
        uStack_198 = uStack_168;
        uStack_1a0 = uStack_170;
        uStack_188 = uStack_158;
        uStack_190 = uStack_160;
        uStack_178 = uStack_148;
        uStack_180 = uStack_150;
        func_0x00010c219960(uVar7,param_2,&uStack_1a0);
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
      uVar5 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,&uStack_140,auStack_100,0x10);
    } while (uVar5 != 0);
  }
  dVar10 = 0.5;
  if (param_3 == 0) {
    dVar10 = 0.0;
  }
  _objc_release(uVar4);
  uVar5 = param_1;
  func_0x00010bfb5480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d0c0();
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_1061d91a0;
  puStack_1d0 = &UNK_110914f68;
  uStack_1f0 = (undefined1)param_3;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  uStack_210 = 0x1061d93c8;
  puStack_208 = &UNK_11086d2d8;
  uStack_200 = param_1;
  uStack_1f8 = param_4;
  uStack_1c8 = param_1;
  uStack_1c0 = uVar4;
  dStack_1b8 = dVar10;
  dStack_1b0 = (1.0 - dVar10) / (double)uVar6;
  uStack_1a8 = uStack_1f0;
  _objc_retain(param_4);
  _objc_retain(uVar4);
  func_0x00010bf02ee0(0x3fe0000000000000,0,puVar1,param_2,0xc00,&puStack_1e8,&puStack_220);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1c0);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d0 = 0xc2000000;
  pcStack_2c8 = FUN_1061d9360;
  puStack_2c0 = &UNK_110845ce0;
  uStack_2b8 = *(undefined8 *)(uVar4 + 0x20);
  uStack_2b0 = *(undefined1 *)(uVar4 + 0x40);
  func_0x00010bef95a0(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_2d8);
  lVar8 = *(long *)(uVar4 + 0x28);
  func_0x00010bf529e0();
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (lVar8 != 0) {
    uVar6 = 0;
    do {
      uVar7 = *(undefined8 *)(uVar4 + 0x28);
      func_0x00010c0dfd40(uVar7,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      dVar10 = *(double *)(uVar4 + 0x30);
      if (*(char *)(uVar4 + 0x40) == '\x01') {
        dVar11 = *(double *)(uVar4 + 0x38);
        dVar10 = dVar10 + (double)uVar6 * dVar11;
        uStack_308 = *(undefined8 *)(puVar1 + 8);
        uStack_310 = *(undefined8 *)puVar1;
        uStack_2f8 = *(undefined8 *)(puVar1 + 0x18);
        uStack_300 = *(undefined8 *)(puVar1 + 0x10);
        uStack_2e8 = *(undefined8 *)(puVar1 + 0x28);
        uStack_2f0 = *(undefined8 *)(puVar1 + 0x20);
        uStack_348 = 1;
      }
      else {
        func_0x00010bfb68e0(uVar7);
        uStack_338 = *(undefined8 *)(puVar1 + 8);
        uStack_340 = *(undefined8 *)puVar1;
        uStack_328 = *(undefined8 *)(puVar1 + 0x18);
        uStack_330 = *(undefined8 *)(puVar1 + 0x10);
        uStack_318 = *(undefined8 *)(puVar1 + 0x28);
        uStack_320 = *(undefined8 *)(puVar1 + 0x20);
        _CGAffineTransformTranslate(&uStack_310,0,in_d3 * 0.5,&uStack_340);
        dVar11 = *(double *)(uVar4 + 0x38);
        uStack_348 = *(undefined1 *)(uVar4 + 0x40);
      }
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_3a0 = puVar2;
      uStack_398 = 0xc2000000;
      pcStack_390 = FUN_1061d9374;
      puStack_388 = &UNK_1108f0e00;
      uStack_370 = uStack_308;
      uStack_378 = uStack_310;
      uStack_360 = uStack_2f8;
      uStack_368 = uStack_300;
      uStack_350 = uStack_2e8;
      uStack_358 = uStack_2f0;
      uStack_380 = uVar7;
      _objc_retain(uVar7);
      func_0x00010bef95a0(dVar10,dVar11,puVar3,param_2,&puStack_3a0);
      _objc_release(uStack_380);
      _objc_release(uVar7);
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(uVar4 + 0x28);
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  return;
}



/* Entry: 1061d91a0; end: 1061d935f;  */

void FUN_1061d91a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  double in_d3;
  double dVar8;
  double dVar9;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1061d9360;
  puStack_a0 = &UNK_110845ce0;
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = *(undefined1 *)(param_1 + 0x40);
  func_0x00010bef95a0(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_b8);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (lVar4 != 0) {
    uVar7 = 0;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar5,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      dVar8 = *(double *)(param_1 + 0x30);
      if (*(char *)(param_1 + 0x40) == '\x01') {
        dVar9 = *(double *)(param_1 + 0x38);
        dVar8 = dVar8 + (double)uVar7 * dVar9;
        uStack_e8 = *(undefined8 *)(puVar1 + 8);
        uStack_f0 = *(undefined8 *)puVar1;
        uStack_d8 = *(undefined8 *)(puVar1 + 0x18);
        uStack_e0 = *(undefined8 *)(puVar1 + 0x10);
        uStack_c8 = *(undefined8 *)(puVar1 + 0x28);
        uStack_d0 = *(undefined8 *)(puVar1 + 0x20);
        uStack_128 = 1;
      }
      else {
        func_0x00010bfb68e0(uVar5);
        uStack_118 = *(undefined8 *)(puVar1 + 8);
        uStack_120 = *(undefined8 *)puVar1;
        uStack_108 = *(undefined8 *)(puVar1 + 0x18);
        uStack_110 = *(undefined8 *)(puVar1 + 0x10);
        uStack_f8 = *(undefined8 *)(puVar1 + 0x28);
        uStack_100 = *(undefined8 *)(puVar1 + 0x20);
        _CGAffineTransformTranslate(&uStack_f0,0,in_d3 * 0.5,&uStack_120);
        dVar9 = *(double *)(param_1 + 0x38);
        uStack_128 = *(undefined1 *)(param_1 + 0x40);
      }
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_180 = puVar2;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_1061d9374;
      puStack_168 = &UNK_1108f0e00;
      uStack_150 = uStack_e8;
      uStack_158 = uStack_f0;
      uStack_140 = uStack_d8;
      uStack_148 = uStack_e0;
      uStack_130 = uStack_c8;
      uStack_138 = uStack_d0;
      uStack_160 = uVar5;
      _objc_retain(uVar5);
      func_0x00010bef95a0(dVar8,dVar9,puVar3,param_2,&puStack_180);
      _objc_release(uStack_160);
      _objc_release(uVar5);
      uVar7 = uVar7 + 1;
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf529e0();
    } while (uVar7 < uVar6);
  }
  return;
}



/* Entry: 1061d9360; end: 1061d9373;  */

void FUN_1061d9360(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061d9374; end: 1061d9403;  */

void FUN_1061d9374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x58));
  func_0x00010c1677c0(uVar1,*(undefined8 *)(param_1 + 0x20));
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 1061d9404; end: 1061d9417; -[SCFeatureLensOverlayController _animationFinishedWithUIShown:] */

void FUN_1061d9404(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x49) == param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUiVisibility_1125964b0);
  return;
}



/* Entry: 1061d9418; end: 1061d94db; -[SCFeatureLensOverlayController backgroundOverlay] */

void FUN_1061d9418(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bf54be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1061d94dc; end: 1061d94eb; -[SCFeatureLensOverlayController _didTapBackgroundOverlay] */

void FUN_1061d94dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4d68);
  return;
}



/* Entry: 1061d94ec; end: 1061d95cb; -[SCFeatureLensOverlayController foregroundOverlay] */

void FUN_1061d94ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c8aa0;
    _objc_alloc();
    func_0x00010c006d20();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c161980(*(undefined8 *)(param_1 + 0x30));
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061d95cc; end: 1061d9607;  */

void FUN_1061d95cc(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4d68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d9608; end: 1061d960f; -[SCFeatureLensOverlayController exploreActionObservable] */

undefined8 FUN_1061d9608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1061d9610; end: 1061d9617; -[SCFeatureLensOverlayController backgroundTapObservable] */

undefined8 FUN_1061d9610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1061d9618; end: 1061d9697; -[SCFeatureLensOverlayController .cxx_destruct] */

void FUN_1061d9618(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061d9698; end: 1061d9727; -[SCFeatureLensOverlayEmptyViewProvider createBackgroundViewWithFrame:] */

void FUN_1061d9698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_6,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061d9728; end: 1061d972b; -[SCFeatureLensOverlayEmptyViewProvider resetIfNeeded] */

void FUN_1061d9728(void)

{
  return;
}



/* Entry: 1061d972c; end: 1061d97af; -[SCFeatureLensOverlayGridViewProvider initWithImageProvider:animationsEnabled:] */

undefined1 *
FUN_1061d972c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0410;
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



/* Entry: 1061d97b0; end: 1061d9813; -[SCFeatureLensOverlayGridViewProvider createBackgroundViewWithFrame:] */

void FUN_1061d97b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc(PTR_PTR_1126c8aa8);
  func_0x00010c0146e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061d9814; end: 1061d9847; -[SCFeatureLensOverlayGridViewProvider resetIfNeeded] */

void FUN_1061d9814(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d9848; end: 1061d9853; -[SCFeatureLensOverlayGridViewProvider .cxx_destruct] */

void FUN_1061d9848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061d9854; end: 1061d9887;  */

void FUN_1061d9854(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcc9e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d9888; end: 1061d9a03; -[SCFeatureLensFeedImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d9888(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f0418;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_activate_112599760);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742858);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274285c);
  *(undefined8 *)(param_1 + _DAT_11274285c) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bdef4e0(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1061d9a04; end: 1061d9a5b;  */

void FUN_1061d9a04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_2);
    func_0x00010bed7f00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d9a5c; end: 1061d9aa3; -[SCFeatureLensFeedImpl isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061d9a5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742838);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9b3e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1061d9aa4; end: 1061d9aa7; -[SCFeatureLensFeedImpl lensExplorerSwipeUpDelegate] */

void FUN_1061d9aa4(void)

{
  return;
}



/* Entry: 1061d9aa8; end: 1061d9b4f; -[SCFeatureLensFeedImpl presentLensFeedFromViewController:] */

void FUN_1061d9aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1b50;
  _objc_retain(param_3);
  func_0x00010bf6a8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  uVar3 = param_1;
  func_0x00010bdf6c00(param_1);
  func_0x00010c04a5a0(puVar2,param_2,3,uVar3,puVar1,0,2);
  func_0x00010c10cca0(param_1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061d9b50; end: 1061d9bfb; -[SCFeatureLensFeedImpl presentLensFeedWithConfiguration:] */

void FUN_1061d9b50(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c10fd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c10cca0(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d9bfc; end: 1061d9d5f; -[SCFeatureLensFeedImpl presentLensFeedFromViewController:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d9bfc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bdc48a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bdef4e0(param_1);
    _objc_retain(param_4);
    puVar2 = param_4;
    func_0x00010c0cfd40();
    puVar4 = param_4;
    if (puVar2 == (undefined *)0x2) {
      puVar2 = PTR_PTR_1126c8ab0;
      func_0x00010c093460(PTR_PTR_1126c8ab0,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2b40c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112742860);
    *(undefined **)(param_1 + (long)_DAT_112742860) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112742844);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc40();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112742838);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cae0();
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d9d60; end: 1061d9d8f; -[SCFeatureLensFeedImpl presentationConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d9d60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742860);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061d9d90; end: 1061d9e0f; -[SCFeatureLensFeedImpl openLensExplorerWithConfiguration:] */

void FUN_1061d9d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c10cca0(param_1,param_2,lVar2,param_3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d9e10; end: 1061d9e17; -[SCFeatureLensFeedImpl _updateFeatureState:] */

void FUN_1061d9e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__requestCameraBottomUIVisible_an_112581c20,param_3,1);
  return;
}



/* Entry: 1061d9e18; end: 1061d9e97; -[SCFeatureLensFeedImpl lensExplorerRouterDidPresentLensExplorer:] */

void FUN_1061d9e18(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061d9e98; end: 1061d9f17; -[SCFeatureLensFeedImpl lensExplorerRouterBeginDismissingLensExplorer:] */

void FUN_1061d9e98(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061d9f18; end: 1061d9f9b; -[SCFeatureLensFeedImpl lensExplorerRouterDidDismissLensExplorer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d9f18(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093e00();
    _objc_release(uVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112742860);
  *(undefined8 *)(param_1 + (long)_DAT_112742860) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061d9f9c; end: 1061da01b; -[SCFeatureLensFeedImpl lensExplorerRouterDidToggleCamera:] */

void FUN_1061d9f9c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061da01c; end: 1061da17f; -[SCFeatureLensFeedImpl lensExplorerRouterReplyParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + _DAT_112742864);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1010;
    _objc_alloc(PTR_PTR_1126b1010);
    func_0x00010c02ec80();
  }
  else {
    _objc_retain(puVar2);
  }
  func_0x00010c1d86a0(puVar2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1061da180;
  uStack_40 = 0x1061da190;
  uStack_38 = 0;
  puVar1 = puVar2;
  func_0x00010c271f40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(puVar1);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1061da180; end: 1061da197;  */

void FUN_1061da180(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1061da198; end: 1061da28f;  */

void FUN_1061da198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0100;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bff7380();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061da290; end: 1061da32b; -[SCFeatureLensFeedImpl lensExplorerRouter:didPickItem:selectionTrigger:] */

void FUN_1061da290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1061da330;
  puStack_48 = &UNK_110914fb8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bf060(param_4,param_2,&PTR___NSConcreteGlobalBlock_110914f98,&puStack_60,
                      &PTR___NSConcreteGlobalBlock_110914fe8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061da32c; end: 1061da343;  */

void FUN_1061da32c(void)

{
  return;
}



/* Entry: 1061da344; end: 1061da3fb; -[SCFeatureLensFeedImpl _hanldeDidPickLens:lensExplorerRouter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da344(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742840);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fb8c0();
    _objc_release(uVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093dc0();
    _objc_release(param_3);
    _objc_release(param_1);
    func_0x00010bf83b40(param_4,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 1061da3fc; end: 1061da443; -[SCFeatureLensFeedImpl _appDidEnterBackground] */

void FUN_1061da3fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093e20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be90a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__requestCameraBottomUIVisible_an_112581c20,0,0);
  return;
}



/* Entry: 1061da444; end: 1061da4bf; -[SCFeatureLensFeedImpl _isCurrentCameraTypeSupported] */

void FUN_1061da444(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf2bbc0();
  if ((((lVar1 != 0) && (lVar1 = param_1, func_0x00010bf2bbc0(), lVar1 != 1)) &&
      (lVar1 = param_1, func_0x00010bf2bbc0(), lVar1 != 2)) &&
     ((lVar1 = param_1, func_0x00010bf2bbc0(), lVar1 != 8 &&
      (lVar1 = param_1, func_0x00010bf2bbc0(), lVar1 != 0xc)))) {
    func_0x00010bf2bbc0(param_1);
  }
  return;
}



/* Entry: 1061da4c0; end: 1061da6eb; -[SCFeatureLensFeedImpl lensExplorerSwipeUpFeature:didReceivePanWithState:offset:velocity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da4c0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = param_1;
  _objc_retain(param_5);
  if (param_6 - 3U < 3) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(puVar2);
    if ((0.0 <= param_2) || (ABS(param_1) / dVar5 <= 0.1)) {
      dVar5 = ABS(param_2) / param_1;
      if (ABS(param_2) / param_1 <= 0.1) {
        dVar5 = 0.1;
      }
      lVar4 = (long)_DAT_112742868;
      func_0x00010c17fc20(dVar5,*(undefined8 *)(param_3 + lVar4));
      func_0x00010bf2e5a0(*(undefined8 *)(param_3 + lVar4));
    }
    else {
      func_0x00010be5a980(param_3);
      lVar4 = (long)_DAT_112742868;
      func_0x00010c17fc20(0x3fe6666666666666,*(undefined8 *)(param_3 + lVar4));
      puVar2 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
      _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
      func_0x00010c0048a0(0,0,0x3fc999999999999a,0x3ff0000000000000);
      func_0x00010c216060(*(undefined8 *)(param_3 + lVar4),param_4,puVar2);
      func_0x00010bfaf8e0(*(undefined8 *)(param_3 + lVar4));
      _objc_release(puVar2);
    }
    puVar2 = *(undefined **)(param_3 + lVar4);
    *(undefined8 *)(param_3 + lVar4) = 0;
  }
  else {
    if (param_6 == 2) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      _objc_release(puVar2);
      dVar6 = 1.0;
      if (ABS(param_1) / dVar5 <= 1.0) {
        dVar6 = ABS(param_1) / dVar5;
      }
      func_0x00010c286a00(dVar6,*(undefined8 *)(param_3 + _DAT_112742868));
      goto LAB_1061da678;
    }
    if (param_6 != 1) goto LAB_1061da678;
    puVar2 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_3 + _DAT_112742868);
    *(undefined **)(param_3 + _DAT_112742868) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b1b50;
    func_0x00010bf6a8e0(PTR_PTR_1126b1b50);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1b58;
    _objc_alloc(PTR_PTR_1126b1b58);
    func_0x00010c04a5a0();
    func_0x00010c10ccc0(param_3,param_4,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
LAB_1061da678:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061da6ec; end: 1061da6ef; -[SCFeatureLensFeedImpl setCameraUIVisible:animated:arbitrator:] */

void FUN_1061da6ec(void)

{
  return;
}



/* Entry: 1061da6f0; end: 1061da77b; -[SCFeatureLensFeedImpl didPressLensExplorerButton:] */

void FUN_1061da6f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1b50;
  func_0x00010bf6a8e0(PTR_PTR_1126b1b50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  uVar3 = param_1;
  func_0x00010bdf6c00(param_1);
  func_0x00010c04a5a0(puVar2,param_2,3,uVar3,puVar1,0,2);
  func_0x00010c10ccc0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061da77c; end: 1061da7db; -[SCFeatureLensFeedImpl _createLensExplorerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da77c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742838;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061da7dc; end: 1061da86f; -[SCFeatureLensFeedImpl _requestCameraBottomUIVisible:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da7dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274286c;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c177570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCameraUIVisible_animated_arbi_11263b778,param_3,param_4,0);
  return;
}



/* Entry: 1061da870; end: 1061da8c3; -[SCFeatureLensFeedImpl _currentLensExplorerCameraSource] */

undefined8 FUN_1061da870(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be3f540();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf2bbc0();
    if (param_1 - 1U < 0xd) {
      uVar2 = *(undefined8 *)(&UNK_10ddd9ea8 + (param_1 - 1U) * 8);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 1061da8c4; end: 1061da903; -[SCFeatureLensFeedImpl _logWillNavigateToLensExplorer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da8c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274284c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061da904; end: 1061da967; -[SCFeatureLensFeedImpl _activateARBarIfAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061da904(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112742850;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beef960();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1061da968; end: 1061da977; -[SCFeatureLensFeedImpl cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061da968(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742834);
}



/* Entry: 1061da978; end: 1061da987; -[SCFeatureLensFeedImpl setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da978(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112742834) = param_3;
  return;
}



/* Entry: 1061da988; end: 1061da9a7; -[SCFeatureLensFeedImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da988(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274286c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061da9a8; end: 1061da9c7; -[SCFeatureLensFeedImpl userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da9a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274282c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


