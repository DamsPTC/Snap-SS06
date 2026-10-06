/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bc9f5c; end: 106bc9fbf; -[SCLensBirthdayLensInjectionStrategyImpl _checkedinUserId:] */

undefined8 FUN_106bc9f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdde680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bc9fc0; end: 106bca0bb; -[SCLensBirthdayLensInjectionStrategyImpl _checkinUserId:checkedUsers:] */

void FUN_106bc9fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf5e5e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0d3c80(param_4);
  _objc_release(param_4);
  func_0x00010befa120(uVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106bca0bc; end: 106bca1ff; -[SCLensBirthdayLensInjectionStrategyImpl _checkedUserIds] */

void FUN_106bca0bc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x40);
    func_0x00010c070320();
    if ((uVar4 & 1) != 0) {
      puVar5 = *(undefined **)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
      puVar6 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      puVar5 = puVar2;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar2);
      if (puVar5 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
      }
      else {
        _objc_retain(puVar2);
      }
      _objc_release(puVar5);
      goto LAB_106bca1e4;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
LAB_106bca1e4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bca200; end: 106bca2d7; -[SCLensBirthdayLensInjectionStrategyImpl .cxx_destruct] */

void FUN_106bca200(long param_1)

{
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



/* Entry: 106bca2d8; end: 106bca34b; -[SCLensCarouselAttributionProviderAdapter initWithCurrentPageTracker:] */

undefined1 * FUN_106bca2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f57f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bca34c; end: 106bca353; -[SCLensCarouselAttributionProviderAdapter currentPage] */

void FUN_106bca34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcbb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getUnsafeCurrentPageName_1125d0868);
  return;
}



/* Entry: 106bca354; end: 106bca35f; -[SCLensCarouselAttributionProviderAdapter .cxx_destruct] */

void FUN_106bca354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bca360; end: 106bca463; -[SCLensCarouselLoggingDataProvider initWithLensCarouselDataProvider:cameraViewControllerInfoProvider:lensLogger:cameraViewType:activationSourceMapper:] */

undefined1 *
FUN_106bca360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f5800;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bca464; end: 106bca56b; -[SCLensCarouselLoggingDataProvider lensSourceForActivationSource:] */

undefined * FUN_106bca464(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126ae6a8;
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf07500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c096ce0(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar8 = puVar1;
    if (*(long *)(param_1 + 0x20) == 10) {
      lVar4 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c131bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0d6ca0();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar8 = (undefined *)(lVar7 + 4);
      if (2 < lVar7 - 0x1dU) {
        puVar8 = puVar1;
      }
    }
    return puVar8;
  }
  puVar1 = *(undefined **)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c096cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_lensSourceForActivationSource__112603540);
  return puVar1;
}



/* Entry: 106bca56c; end: 106bca79f; -[SCLensCarouselLoggingDataProvider currentSnapSourceForPageSource] */

undefined8 FUN_106bca56c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar6 = 8;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0xffffffffffffffff;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bcaa0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar6 = puStack_58[3];
    __Block_object_dispose(&uStack_60,8);
  }
  return uVar6;
}



/* Entry: 106bca7a0; end: 106bca90b;  */

void FUN_106bca7a0(long param_1,undefined8 param_2)

{
  func_0x00010c243400();
  func_0x0001091ef74c();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106bca90c; end: 106bcaa03; -[SCLensCarouselLoggingDataProvider currentContextSessionId] */

void FUN_106bca90c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2720a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf4f080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106bcaa04; end: 106bcaa4b; -[SCLensCarouselLoggingDataProvider .cxx_destruct] */

void FUN_106bcaa04(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bcaa4c; end: 106bcabf7; -[SCLensCarouselOnCameraScopeActivationHandler initWithLensLogger:voicemlLensLogger:lensStateWorkflowProvider:lensCarouselLoggingDataProvider:reporter:lensCarouselLensDownloader:lensInjecting:legacyUiUpdateAnnouncer:] */

undefined1 *
FUN_106bcaa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f5808;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bcabf8; end: 106bcadbf; -[SCLensCarouselOnCameraScopeActivationHandler willActivateCarouselWithActivationSource:] */

void FUN_106bcabf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c109a20();
  func_0x00010c096cc0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c065220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c106d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c096e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b7a0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c096e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18360();
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf60140(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0();
  _objc_release(uVar3);
  func_0x00010bf60140(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3cc0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5e520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106bcadc0; end: 106bcade7; -[SCLensCarouselOnCameraScopeActivationHandler didActivateCarousel] */

void FUN_106bcadc0(long param_1)

{
  func_0x00010c0a9640();
                    /* WARNING: Could not recover jumptable at 0x00010c133150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reportLensCarouselActivated__11262a670,1);
  return;
}



/* Entry: 106bcade8; end: 106bcadeb; -[SCLensCarouselOnCameraScopeActivationHandler didFailActivateCarousel] */

void FUN_106bcade8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearLensInitEvent_1125ac780);
  return;
}



/* Entry: 106bcadec; end: 106bcae37; -[SCLensCarouselOnCameraScopeActivationHandler willDeactivateCarousel] */

void FUN_106bcadec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c096e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a840();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bcae38; end: 106bcae5f; -[SCLensCarouselOnCameraScopeActivationHandler didDeactivateCarousel] */

void FUN_106bcae38(long param_1)

{
  func_0x00010bf3b760();
                    /* WARNING: Could not recover jumptable at 0x00010c133150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reportLensCarouselActivated__11262a670,0);
  return;
}



/* Entry: 106bcae60; end: 106bcaecb; -[SCLensCarouselOnCameraScopeActivationHandler _lensCarouselDidUpdateVisibleLenses:selectedLensIndex:originalLensIndex:] */

void FUN_106bcae60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110965fd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133120(*(undefined8 *)(param_1 + 0x28),param_2,0,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bcaecc; end: 106bcaf6b;  */

void FUN_106bcaecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1088;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c08fb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf329c0(param_2);
  func_0x00010c151220(param_2);
  _objc_release(param_2);
  func_0x00010c022740(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bcaf6c; end: 106bcb017; -[SCLensCarouselOnCameraScopeActivationHandler _lensCarouselDidActivateLens:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_106bcaf6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c076520();
  _objc_release(uVar2);
  func_0x00010c1330e0(*(undefined8 *)(param_1 + 0x28),param_2,0,param_3,param_4,param_5,param_6,
                      param_7,(char)uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bcb018; end: 106bcb037; -[SCLensCarouselOnCameraScopeActivationHandler _lensCarouselDidSelectLens:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_106bcb018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010c133110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reportLensCarousel_didSelectLens_11262a660,0,
             param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 106bcb038; end: 106bcb11f; -[SCLensCarouselOnCameraScopeActivationHandler processWithEvent:] */

void FUN_106bcb038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x106bcb130;
  puStack_20 = &UNK_110966070;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106bcb150;
  puStack_48 = &UNK_110966070;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106bcb170;
  puStack_70 = &UNK_110966100;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c18e0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110965ff0,
                      &PTR___NSConcreteGlobalBlock_110966010,&PTR___NSConcreteGlobalBlock_110966030,
                      &PTR___NSConcreteGlobalBlock_110966050,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_1109660c0,&puStack_60,
                      &PTR___NSConcreteGlobalBlock_1109660e0,&puStack_88,
                      &PTR___NSConcreteGlobalBlock_110966150,&PTR___NSConcreteGlobalBlock_110966170,
                      &PTR___NSConcreteGlobalBlock_110966190);
  return;
}



/* Entry: 106bcb120; end: 106bcb18f;  */

void FUN_106bcb120(void)

{
  return;
}



/* Entry: 106bcb190; end: 106bcb19b; -[SCLensCarouselOnCameraScopeActivationHandler didApplyLens:index:originalLensIndex:] */

void FUN_106bcb190(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_didActivateLens_withContext__1125ba238,param_3,0)
  ;
  return;
}



/* Entry: 106bcb19c; end: 106bcb1eb; -[SCLensCarouselOnCameraScopeActivationHandler prepareLensInitEvent] */

void FUN_106bcb19c(long param_1)

{
  double dVar1;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x48);
  if (dVar1 == 0.0) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x48) = dVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x50);
  return;
}



/* Entry: 106bcb1ec; end: 106bcb27b; -[SCLensCarouselOnCameraScopeActivationHandler logLensInitEvent] */

void FUN_106bcb1ec(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bddbb80();
  if (param_1 != 0.0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0974c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf721a0(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf3b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_clearLensInitEvent_1125ac780);
    return;
  }
  return;
}



/* Entry: 106bcb27c; end: 106bcb2a7; -[SCLensCarouselOnCameraScopeActivationHandler clearLensInitEvent] */

void FUN_106bcb27c(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x50);
  return;
}



/* Entry: 106bcb2a8; end: 106bcb313; -[SCLensCarouselOnCameraScopeActivationHandler _carouselActivationLatency] */

double FUN_106bcb2a8(long param_1)

{
  double dVar1;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x48);
  if (dVar1 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    _CACurrentMediaTime();
    dVar1 = dVar1 - *(double *)(param_1 + 0x48);
  }
  _os_unfair_lock_unlock(param_1 + 0x50);
  return dVar1;
}



/* Entry: 106bcb314; end: 106bcb38b; -[SCLensCarouselOnCameraScopeActivationHandler .cxx_destruct] */

void FUN_106bcb314(long param_1)

{
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



/* Entry: 106bcb38c; end: 106bcb48f; -[SCLensCarouselTalkCarouselEventsHandler initWithLensLogger:legacyUiUpdateAnnouncer:lensCarouselSessionController:lensCarouselSessionStateProvider:] */

undefined1 *
FUN_106bcb38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5810;
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
    *(undefined8 *)((long)puVar1 + 0x30) = 2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bcb490; end: 106bcb53f; -[SCLensCarouselTalkCarouselEventsHandler willActivateCarouselWithActivationSource:] */

void FUN_106bcb490(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e320();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0974c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bec0300(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106bcb540; end: 106bcb543; -[SCLensCarouselTalkCarouselEventsHandler didActivateCarousel] */

void FUN_106bcb540(void)

{
  return;
}



/* Entry: 106bcb544; end: 106bcb547; -[SCLensCarouselTalkCarouselEventsHandler didFailActivateCarousel] */

void FUN_106bcb544(void)

{
  return;
}



/* Entry: 106bcb548; end: 106bcb5cb; -[SCLensCarouselTalkCarouselEventsHandler willDeactivateCarousel] */

void FUN_106bcb548(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0974c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106bcb5cc; end: 106bcb5cf; -[SCLensCarouselTalkCarouselEventsHandler didDeactivateCarousel] */

void FUN_106bcb5cc(void)

{
  return;
}



/* Entry: 106bcb5d0; end: 106bcb68b; -[SCLensCarouselTalkCarouselEventsHandler processWithEvent:] */

void FUN_106bcb5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106bcb69c;
  puStack_20 = &UNK_110966070;
  uStack_18 = param_1;
  func_0x00010c0c18e0(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109661b0,
                      &PTR___NSConcreteGlobalBlock_1109661d0,&PTR___NSConcreteGlobalBlock_1109661f0,
                      &PTR___NSConcreteGlobalBlock_110966210,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_110966230,&PTR___NSConcreteGlobalBlock_110966270,
                      &PTR___NSConcreteGlobalBlock_110966290,&PTR___NSConcreteGlobalBlock_1109662d0,
                      &PTR___NSConcreteGlobalBlock_1109662f0,&PTR___NSConcreteGlobalBlock_110966310,
                      &PTR___NSConcreteGlobalBlock_110966330);
  return;
}



/* Entry: 106bcb68c; end: 106bcb69b;  */

void FUN_106bcb68c(void)

{
  return;
}



/* Entry: 106bcb69c; end: 106bcb76b;  */

void FUN_106bcb69c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c072d20();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010c096d80(uVar2);
  }
  else {
    func_0x00010c095fc0(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106bcb76c; end: 106bcb787;  */

void FUN_106bcb76c(void)

{
  return;
}



/* Entry: 106bcb788; end: 106bcb78b; -[SCLensCarouselTalkCarouselEventsHandler didApplyLens:index:originalLensIndex:] */

void FUN_106bcb788(void)

{
  return;
}



/* Entry: 106bcb78c; end: 106bcb7b3; -[SCLensCarouselTalkCarouselEventsHandler overwriteLensStateWorkflow] */

void FUN_106bcb78c(long param_1)

{
  func_0x00010bec30e0();
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return;
}



/* Entry: 106bcb7b4; end: 106bcb7bb; -[SCLensCarouselTalkCarouselEventsHandler currentLensStateWorkflowSourceType] */

undefined8 FUN_106bcb7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106bcb7bc; end: 106bcb7c3; -[SCLensCarouselTalkCarouselEventsHandler beginCurrentLensStateForLensSource:] */

void FUN_106bcb7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLensSession_11258da68);
  return;
}



/* Entry: 106bcb7c4; end: 106bcb8a3; -[SCLensCarouselTalkCarouselEventsHandler _startLensSession] */

void FUN_106bcb7c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2509a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106bcb8a4;
  puStack_40 = &UNK_1108450c8;
  lStack_38 = param_1;
  func_0x00010c0c0800(uVar1,param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_110966350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bcb8a4; end: 106bcb8d7;  */

void FUN_106bcb8a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bcb8d8; end: 106bcb8db;  */

void FUN_106bcb8d8(void)

{
  return;
}



/* Entry: 106bcb8dc; end: 106bcb92f; -[SCLensCarouselTalkCarouselEventsHandler _stopLensSession] */

void FUN_106bcb8dc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256a20();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106bcb930; end: 106bcb983; -[SCLensCarouselTalkCarouselEventsHandler .cxx_destruct] */

void FUN_106bcb930(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bcb984; end: 106bcbadb; -[SCLensCarouselDependenciesServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcb984(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  if (param_1 == 0) {
    lVar4 = 0;
    param_1 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112759db4;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_112759db8;
    _objc_loadWeakRetained();
  }
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1098;
  _objc_alloc(PTR_PTR_1126d1098);
  func_0x00010c022be0();
  puVar3 = PTR_PTR_1126d10a0;
  _objc_alloc(PTR_PTR_1126d10a0);
  func_0x00010c022e60();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bcbadc; end: 106bcbc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcbadc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf29c00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0988a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar8 = PTR_PTR_1126d1090;
    _objc_alloc(PTR_PTR_1126d1090);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf2a520(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bdd43e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112759d8c;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c091260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026040(puVar8,param_2,uVar3,uVar4,lVar5,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106bcbc18; end: 106bcbccf; -[SCLensCarouselDependenciesServiceProvider _birthdayLensInjectionStrategy] */

void FUN_106bcbc18(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bcbcd0; end: 106bcbec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcbcd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126d10a8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112759d90;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0911e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112759d94;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112759d98;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c0908c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c090880();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112759d9c;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf24d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112759da0;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c094b80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    lVar13 = param_1 + _DAT_112759da4;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c090800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023220(puVar15,param_2,lVar2,lVar4,lVar7,lVar9,lVar11,puVar12,lVar14);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106bcbec8; end: 106bcbf77; -[SCLensCarouselDependenciesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcbec8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759da4);
  _objc_destroyWeak(param_1 + _DAT_112759da0);
  _objc_destroyWeak(param_1 + _DAT_112759d8c);
  _objc_destroyWeak(param_1 + _DAT_112759d98);
  _objc_destroyWeak(param_1 + _DAT_112759d9c);
  _objc_destroyWeak(param_1 + _DAT_112759d94);
  _objc_destroyWeak(param_1 + _DAT_112759d90);
  _objc_destroyWeak(param_1 + _DAT_112759db8);
  _objc_destroyWeak(param_1 + _DAT_112759db4);
  _objc_destroyWeak(param_1 + _DAT_112759db0);
  _objc_destroyWeak(param_1 + _DAT_112759dac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112759da8);
  return;
}



/* Entry: 106bcbf78; end: 106bcc0af; -[SCLensDataProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcbf78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759dbc,0);
  _objc_destroyWeak(param_1 + _DAT_112759e08);
  _objc_destroyWeak(param_1 + _DAT_112759e10);
  _objc_destroyWeak(param_1 + _DAT_112759dc8);
  _objc_destroyWeak(param_1 + _DAT_112759e04);
  _objc_destroyWeak(param_1 + _DAT_112759e00);
  _objc_destroyWeak(param_1 + _DAT_112759dfc);
  _objc_destroyWeak(param_1 + _DAT_112759df8);
  _objc_destroyWeak(param_1 + _DAT_112759df4);
  _objc_destroyWeak(param_1 + _DAT_112759df0);
  _objc_destroyWeak(param_1 + _DAT_112759dec);
  _objc_destroyWeak(param_1 + _DAT_112759de8);
  _objc_destroyWeak(param_1 + _DAT_112759ddc);
  _objc_destroyWeak(param_1 + _DAT_112759de4);
  _objc_destroyWeak(param_1 + _DAT_112759de0);
  _objc_destroyWeak(param_1 + _DAT_112759dd8);
  _objc_destroyWeak(param_1 + _DAT_112759dd4);
  _objc_destroyWeak(param_1 + _DAT_112759dd0);
  _objc_destroyWeak(param_1 + _DAT_112759dcc);
  _objc_destroyWeak(param_1 + _DAT_112759dc0);
  _objc_destroyWeak(param_1 + _DAT_112759e14);
  _objc_destroyWeak(param_1 + _DAT_112759dc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112759e0c);
  return;
}



/* Entry: 106bcc0b0; end: 106bcc63b; -[SCLensDataProviderOnVideoCallServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcc0b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_130;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  puVar1 = PTR_PTR_1126d10e0;
  _objc_alloc();
  lVar22 = param_1;
  FUN_106bcc63c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar22;
  func_0x00010bf24d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112759e38;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar17;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112759e54;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar18;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112759e3c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar19;
  func_0x00010bf28760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112759e4c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar20;
  func_0x00010c095240();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_130 = 0;
    lVar21 = 0;
  }
  else {
    lStack_130 = param_1 + _DAT_112759e48;
    _objc_loadWeakRetained();
    lVar21 = param_1 + _DAT_112759e2c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar21;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000106bcc660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c092540();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106bcc684();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0979e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9b80();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar21);
  _objc_release(lStack_130);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(lVar22);
  lVar22 = (long)_DAT_112759e18;
  _objc_retain(puVar1);
  uVar12 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar12);
  puVar13 = PTR_PTR_1126d10e8;
  _objc_alloc();
  lVar2 = param_1;
  func_0x000106bcc660();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010c092540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x000106bcc684();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c0979e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106bcc6a8;
  puStack_88 = &UNK_110966470;
  puVar14 = PTR_PTR_1126ae720;
  puStack_80 = puVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106bcc63c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar4;
  func_0x00010bf24d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112759e50;
  _objc_loadWeakRetained(lVar22);
  lVar5 = lVar22;
  func_0x00010bf34a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008ca0();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112759e1c);
  *(undefined **)(param_1 + _DAT_112759e1c) = puVar13;
  _objc_release(uVar12);
  _objc_release(lVar5);
  _objc_release(lVar22);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(puVar14);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(lVar2);
  puVar13 = PTR_PTR_1126d10f0;
  _objc_alloc();
  lVar22 = param_1 + _DAT_112759e28;
  _objc_loadWeakRetained(lVar22);
  lVar2 = lVar22;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c050600();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112759e20);
  *(undefined **)(param_1 + _DAT_112759e20) = puVar13;
  _objc_release(uVar12);
  _objc_release(lVar2);
  _objc_release(lVar22);
  puVar14 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_a8,param_1);
  puVar13 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010bf11fe0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126d10b0;
  _objc_alloc(PTR_PTR_1126d10b0);
  func_0x00010c022d80();
  puVar16 = PTR_PTR_1126d1110;
  _objc_alloc(PTR_PTR_1126d1110);
  func_0x00010c022da0();
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar14);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106bcc63c; end: 106bcc6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcc63c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112759e34);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bcc6a8; end: 106bcc6cf;  */

void FUN_106bcc6a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bcc6d0; end: 106bcc6eb;  */

void FUN_106bcc6d0(void)

{
  _objc_opt_new(PTR_PTR_1126d10f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bcc6ec; end: 106bcc7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcc6ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d1100;
    _objc_alloc_init(PTR_PTR_1126d1100);
    puVar5 = PTR_PTR_1126d1108;
    _objc_alloc(PTR_PTR_1126d1108);
    lVar2 = param_1 + _DAT_112759e24;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c097900();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0576c0(puVar5,param_2,lVar4,puVar1,*(undefined8 *)(param_1 + _DAT_112759e1c));
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bead980(param_1,param_2,puVar5);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bcc7e0; end: 106bcc7ef; -[SCLensDataProviderOnVideoCallServiceProvider _setupLensDataProviderUpdater:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcc7e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf19110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759e20),
             PTR_s_beginWithLensDataProviderUpdater_1125a3de8);
  return;
}



/* Entry: 106bcc7f0; end: 106bcc8db; -[SCLensDataProviderOnVideoCallServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcc7f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759e54);
  _objc_destroyWeak(param_1 + _DAT_112759e24);
  _objc_destroyWeak(param_1 + _DAT_112759e50);
  _objc_destroyWeak(param_1 + _DAT_112759e4c);
  _objc_destroyWeak(param_1 + _DAT_112759e48);
  _objc_destroyWeak(param_1 + _DAT_112759e44);
  _objc_destroyWeak(param_1 + _DAT_112759e40);
  _objc_destroyWeak(param_1 + _DAT_112759e3c);
  _objc_destroyWeak(param_1 + _DAT_112759e38);
  _objc_destroyWeak(param_1 + _DAT_112759e34);
  _objc_destroyWeak(param_1 + _DAT_112759e30);
  _objc_destroyWeak(param_1 + _DAT_112759e2c);
  _objc_destroyWeak(param_1 + _DAT_112759e28);
  _objc_storeStrong(param_1 + _DAT_112759e20,0);
  _objc_storeStrong(param_1 + _DAT_112759e1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759e18,0);
  return;
}



/* Entry: 106bcc8dc; end: 106bcc9a7; -[SCLensDataProviderVideoCallWorkflow initWithTalkContext:predefinedFactory:contextRegistry:] */

undefined1 *
FUN_106bcc8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5818;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bcc9a8; end: 106bccb6f; -[SCLensDataProviderVideoCallWorkflow beginWithLensDataProviderUpdater:] */

void FUN_106bcc9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf5e540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be40ce0(param_1);
  func_0x00010c19be40(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c106240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd9e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c240(param_3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf50700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106bccb70; end: 106bccbc3;  */

void FUN_106bccb70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bccbc4; end: 106bccd3b; -[SCLensDataProviderVideoCallWorkflow _onConversationChanged:lensDataProviderUpdater:] */

void FUN_106bccbc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010be40ce0(param_1,param_2,param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bfadb80();
  if ((int)lVar2 != iVar1) {
    func_0x00010c19be40(*(undefined8 *)(param_1 + 0x10),param_2,lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c106240(uVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bedd9e0(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c159a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be95860(param_1,param_2,lVar5,uVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010bf5f1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar4 == lVar5) {
      uVar6 = uVar3;
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d1118;
      _objc_opt_new(PTR_PTR_1126d1118);
      func_0x00010c287180(param_4,param_2,uVar6,puVar7,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar6);
    }
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bccd3c; end: 106bccf23; -[SCLensDataProviderVideoCallWorkflow _updatePredefinedDataProvider:] */

void FUN_106bccd3c(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar7 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e77ef8;
  func_0x00010bf641c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e77ef8;
    param_4 = param_3;
    func_0x00010c1262c0(*(undefined8 *)(param_1 + 0x18),param_2,
                        &PTR____CFConstantStringClassReference_110e77ef8,param_3);
  }
  else if (puVar1 != param_3) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c127800();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    param_4 = auStack_f0;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar2);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          puVar4 = *(undefined1 **)(param_1 + 0x18);
          func_0x00010bf641c0(puVar4,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 == puVar1) {
            lVar5 = *(long *)(param_1 + 0x18);
            func_0x00010bf4e460(lVar5,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6e1c0(*(undefined8 *)(param_1 + 0x18),param_2,uVar8);
            if (lVar5 == 0) {
              func_0x00010c1262c0(*(undefined8 *)(param_1 + 0x18),param_2,uVar8,param_3);
            }
            else {
              func_0x00010c1262a0();
            }
            _objc_release(lVar5);
          }
          _objc_release(puVar4);
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        param_4 = auStack_f0;
        lVar3 = lVar2;
        ppuVar7 = &puStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_retain(puVar1);
    _objc_release(lVar2);
    puVar4 = puVar1;
    goto LAB_106bcced4;
  }
  ppuVar7 = ppuVar6;
  puVar4 = (undefined1 *)0x0;
LAB_106bcced4:
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106bccf24;
  puStack_150 = puVar1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  _objc_retain(param_4);
  if ((ppuVar7 != (undefined **)0x0) &&
     (ppuVar6 = ppuVar7, func_0x00010c06f040(), ((ulong)ppuVar6 & 1) == 0)) {
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106bccfc8;
    puStack_160 = &UNK_110966540;
    _objc_retain(ppuVar7);
    ppuStack_158 = ppuVar7;
    func_0x00010c0e33e0(param_4,param_2,&puStack_178);
    _objc_release(ppuStack_158);
  }
  _objc_release(param_4);
  _objc_release(ppuVar7);
  return;
}



/* Entry: 106bccf24; end: 106bccfc7; -[SCLensDataProviderVideoCallWorkflow _restoreSelectedLens:dataProvider:] */

void FUN_106bccf24(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (uVar1 = param_3, func_0x00010c06f040(), (uVar1 & 1) == 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106bccfc8;
    puStack_30 = &UNK_110966540;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x00010c0e33e0(param_4,param_2,&puStack_48);
    _objc_release(uStack_28);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bccfc8; end: 106bccfd3;  */

void FUN_106bccfc8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setSelectedLens__11265c6e0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106bccfd4; end: 106bcd0b3; -[SCLensDataProviderVideoCallWorkflow _isGroupChat:] */

undefined1 FUN_106bccfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010bf51800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be200();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106bcd0b4; end: 106bcd0cb;  */

void FUN_106bcd0b4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106bcd0cc; end: 106bcd113; -[SCLensDataProviderVideoCallWorkflow .cxx_destruct] */

void FUN_106bcd0cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bcd114; end: 106bcd187; -[SCLensUIUpdateOnPreviewServiceProvider provide] */

void FUN_106bcd114(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d1120;
  _objc_opt_new(PTR_PTR_1126d1120);
  puVar2 = PTR_PTR_1126d1128;
  _objc_alloc(PTR_PTR_1126d1128);
  func_0x00010c0576a0();
  puVar3 = PTR_PTR_1126d1130;
  _objc_alloc(PTR_PTR_1126d1130);
  func_0x00010c025a20();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bcd188; end: 106bcd197; -[SCLensUIUpdateOnPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcd188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112759e68);
  return;
}



/* Entry: 106bcd198; end: 106bcd20b; -[SCLensUIUpdateOnSnapEditorServiceProvider provide] */

void FUN_106bcd198(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d1120;
  _objc_opt_new(PTR_PTR_1126d1120);
  puVar2 = PTR_PTR_1126d1128;
  _objc_alloc(PTR_PTR_1126d1128);
  func_0x00010c0576a0();
  puVar3 = PTR_PTR_1126d1138;
  _objc_alloc(PTR_PTR_1126d1138);
  func_0x00010c025a20();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bcd20c; end: 106bcd21b; -[SCLensUIUpdateOnSnapEditorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcd20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112759e6c);
  return;
}



/* Entry: 106bcd21c; end: 106bcd28f; -[SCLensUIUpdateOnVideoCallServiceProvider provide] */

void FUN_106bcd21c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d1120;
  _objc_opt_new(PTR_PTR_1126d1120);
  puVar2 = PTR_PTR_1126d1128;
  _objc_alloc(PTR_PTR_1126d1128);
  func_0x00010c0576a0();
  puVar3 = PTR_PTR_1126d1140;
  _objc_alloc(PTR_PTR_1126d1140);
  func_0x00010c025a20();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bcd290; end: 106bcd29f; -[SCLensUIUpdateOnVideoCallServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcd290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112759e70);
  return;
}



/* Entry: 106bcd2a0; end: 106bcd403;  */

void FUN_106bcd2a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c097ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d1148;
    _objc_alloc(PTR_PTR_1126d1148);
    func_0x00010c025c00();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bcd404; end: 106bcd49b; -[SCCameraLensesViewControlerServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcd404(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf43de0(*(undefined8 *)(param_1 + _DAT_112759e74));
  puStack_28 = PTR_PTR_1126f5820;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bcd49c; end: 106bcd51b; -[SCCameraLensesViewControlerServiceProvider _unlockableLensTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcd49c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112759e80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c281140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bcd51c; end: 106bcd797; -[SCCameraLensesViewControlerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcd51c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759f38);
  _objc_destroyWeak(param_1 + _DAT_112759f30);
  _objc_destroyWeak(param_1 + _DAT_112759f2c);
  _objc_destroyWeak(param_1 + _DAT_112759f28);
  _objc_destroyWeak(param_1 + _DAT_112759f24);
  _objc_destroyWeak(param_1 + _DAT_112759f1c);
  _objc_destroyWeak(param_1 + _DAT_112759f18);
  _objc_destroyWeak(param_1 + _DAT_112759f20);
  _objc_destroyWeak(param_1 + _DAT_112759f14);
  _objc_destroyWeak(param_1 + _DAT_112759f0c);
  _objc_destroyWeak(param_1 + _DAT_112759f08);
  _objc_destroyWeak(param_1 + _DAT_112759f04);
  _objc_destroyWeak(param_1 + _DAT_112759e78);
  _objc_destroyWeak(param_1 + _DAT_112759f00);
  _objc_destroyWeak(param_1 + _DAT_112759ef8);
  _objc_destroyWeak(param_1 + _DAT_112759ef4);
  _objc_destroyWeak(param_1 + _DAT_112759efc);
  _objc_destroyWeak(param_1 + _DAT_112759eec);
  _objc_destroyWeak(param_1 + _DAT_112759ea8);
  _objc_destroyWeak(param_1 + _DAT_112759ee8);
  _objc_destroyWeak(param_1 + _DAT_112759ee4);
  _objc_destroyWeak(param_1 + _DAT_112759ee0);
  _objc_destroyWeak(param_1 + _DAT_112759edc);
  _objc_destroyWeak(param_1 + _DAT_112759ed4);
  _objc_destroyWeak(param_1 + _DAT_112759f34);
  _objc_destroyWeak(param_1 + _DAT_112759ec0);
  _objc_destroyWeak(param_1 + _DAT_112759ed0);
  _objc_destroyWeak(param_1 + _DAT_112759ecc);
  _objc_destroyWeak(param_1 + _DAT_112759e84);
  _objc_destroyWeak(param_1 + _DAT_112759ec4);
  _objc_destroyWeak(param_1 + _DAT_112759f10);
  _objc_destroyWeak(param_1 + _DAT_112759ebc);
  _objc_destroyWeak(param_1 + _DAT_112759eb0);
  _objc_destroyWeak(param_1 + _DAT_112759e94);
  _objc_destroyWeak(param_1 + _DAT_112759eb8);
  _objc_destroyWeak(param_1 + _DAT_112759ea4);
  _objc_destroyWeak(param_1 + _DAT_112759e8c);
  _objc_destroyWeak(param_1 + _DAT_112759e98);
  _objc_destroyWeak(param_1 + _DAT_112759ea0);
  _objc_destroyWeak(param_1 + _DAT_112759e9c);
  _objc_destroyWeak(param_1 + _DAT_112759ec8);
  _objc_destroyWeak(param_1 + _DAT_112759eac);
  _objc_destroyWeak(param_1 + _DAT_112759e88);
  _objc_destroyWeak(param_1 + _DAT_112759e80);
  _objc_destroyWeak(param_1 + _DAT_112759eb4);
  _objc_destroyWeak(param_1 + _DAT_112759e90);
  _objc_destroyWeak(param_1 + _DAT_112759ed8);
  _objc_destroyWeak(param_1 + _DAT_112759ef0);
  _objc_destroyWeak(param_1 + _DAT_112759e7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759e74,0);
  return;
}



/* Entry: 106bcd798; end: 106bcd9d7; -[SCCameraLensesViewControllerCarouselScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcd798(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106bcd9d8;
  puStack_88 = &UNK_110966680;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112759f3c;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar2);
  lVar8 = param_1;
  func_0x00010be3d300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176900();
  _objc_release(lVar8);
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759f40);
  *(undefined **)(param_1 + _DAT_112759f40) = puVar3;
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112759f44;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar7 = lVar6;
  func_0x00010c25ff60(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106bcd9d8; end: 106bcda77;  */

void FUN_106bcd9d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4c340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bcda78; end: 106bcdaf3; -[SCCameraLensesViewControllerCarouselScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcda78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010be3d300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176900();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759f40);
  *(undefined8 *)(param_1 + _DAT_112759f40) = 0;
  _objc_release(uVar2);
  puStack_28 = PTR_PTR_1126f5828;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bcdaf4; end: 106bcdcc3; -[SCCameraLensesViewControllerCarouselScopeEntryPoint _lensesViewControllerCarouselScopeManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcdaf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1160;
  _objc_alloc(PTR_PTR_1126d1160);
  lVar3 = param_1 + _DAT_112759f48;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1;
  func_0x00010be3d300(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112759f4c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112759f44;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb720(puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bcdcc4; end: 106bcdd03;  */

void FUN_106bcdcc4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd9280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bcdd04; end: 106bcdd6b; -[SCCameraLensesViewControllerCarouselScopeEntryPoint _interactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcdd04(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112759f48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf29c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106bcdd6c; end: 106bcddd3; -[SCCameraLensesViewControllerCarouselScopeEntryPoint _manager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcdd6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112759f48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf29c20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106bcddd4; end: 106bce7d3; -[SCCameraLensesViewControllerCarouselScopeEntryPoint _cameraLensesViewControllerObjectsCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcddd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  
  puVar1 = PTR_PTR_1126d1168;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112759f50;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112759f54;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112759f58;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112759f5c;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_112759f60;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112759f64;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112759f68;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c0966a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112759f6c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112759f70;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112759f74;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0961c0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112759f78;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112759f7c;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112759f80;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c08f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112759f84;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112759f88;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112759f4c;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112759f8c;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c090a00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112759f90;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c0970a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112759f94;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c097c60();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112759f98;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_112759f9c;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010befb6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112759fa0;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_112759fa4;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_112759fa8;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_112759fac;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010c095f60();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_112759fb0;
  _objc_loadWeakRetained();
  lVar54 = lVar53;
  func_0x00010c097e00();
  _objc_retainAutoreleasedReturnValue();
  lVar91 = (long)_DAT_112759fb4;
  lVar55 = param_1 + lVar91;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = (long)_DAT_112759fb8;
  lVar57 = param_1 + lVar92;
  _objc_loadWeakRetained();
  lVar58 = lVar57;
  func_0x00010c0e8080();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + _DAT_112759fbc;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = param_1 + lVar92;
  _objc_loadWeakRetained();
  lVar61 = lVar92;
  func_0x00010c095460();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_112759fc0;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010bf976a0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + _DAT_112759fc4;
  _objc_loadWeakRetained();
  lVar65 = lVar64;
  func_0x00010c096100();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010c090680();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_112759fc8;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c091200();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_112759fcc;
  _objc_loadWeakRetained();
  lVar70 = lVar69;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + _DAT_112759fd0;
  _objc_loadWeakRetained();
  lVar72 = lVar71;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = lVar72;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1 + _DAT_112759fd4;
  _objc_loadWeakRetained();
  lVar75 = lVar74;
  func_0x00010c090440();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = lVar75;
  func_0x00010c090420();
  _objc_retainAutoreleasedReturnValue();
  lVar91 = param_1 + lVar91;
  _objc_loadWeakRetained();
  lVar77 = lVar91;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = param_1 + _DAT_112759fd8;
  _objc_loadWeakRetained();
  lVar79 = lVar78;
  func_0x00010bf5d5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = param_1 + _DAT_112759fdc;
  _objc_loadWeakRetained();
  lVar81 = lVar80;
  func_0x00010c098500();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = param_1 + _DAT_112759fe0;
  _objc_loadWeakRetained();
  lVar83 = lVar82;
  func_0x00010c092300();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = param_1 + _DAT_112759fe4;
  _objc_loadWeakRetained();
  lVar85 = lVar84;
  func_0x00010c093ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = lVar85;
  func_0x00010c093cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar87 = param_1 + _DAT_112759fe8;
  _objc_loadWeakRetained();
  lVar88 = lVar87;
  func_0x00010c090b60();
  _objc_retainAutoreleasedReturnValue();
  lVar89 = lVar88;
  func_0x00010c090b40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112759fec;
  _objc_loadWeakRetained();
  lVar90 = param_1;
  func_0x00010c0906a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d120(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,
                      lVar21,lVar23,lVar25,lVar27,lVar29,lVar32,lVar34,lVar36,lVar38,lVar40,lVar42,
                      lVar44,lVar46,lVar48,lVar50,lVar52,lVar54,lVar56,lVar58,lVar60,lVar61,lVar63,
                      lVar66,lVar68,lVar70,lVar73,lVar76,lVar77,lVar79,lVar81,lVar83,lVar86,lVar89,
                      lVar90);
  _objc_release(lVar90);
  _objc_release(param_1);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar91);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar92);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bce7d4; end: 106bcea23; -[SCCameraLensesViewControllerCarouselScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bce7d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759fec);
  _objc_destroyWeak(param_1 + _DAT_112759fe8);
  _objc_destroyWeak(param_1 + _DAT_112759fe4);
  _objc_destroyWeak(param_1 + _DAT_112759f44);
  _objc_destroyWeak(param_1 + _DAT_112759fdc);
  _objc_destroyWeak(param_1 + _DAT_112759fd8);
  _objc_destroyWeak(param_1 + _DAT_112759fd4);
  _objc_destroyWeak(param_1 + _DAT_112759fc4);
  _objc_destroyWeak(param_1 + _DAT_112759fc0);
  _objc_destroyWeak(param_1 + _DAT_112759fbc);
  _objc_destroyWeak(param_1 + _DAT_112759fb8);
  _objc_destroyWeak(param_1 + _DAT_112759fb4);
  _objc_destroyWeak(param_1 + _DAT_112759fc8);
  _objc_destroyWeak(param_1 + _DAT_112759fb0);
  _objc_destroyWeak(param_1 + _DAT_112759fac);
  _objc_destroyWeak(param_1 + _DAT_112759fa8);
  _objc_destroyWeak(param_1 + _DAT_112759fa4);
  _objc_destroyWeak(param_1 + _DAT_112759f94);
  _objc_destroyWeak(param_1 + _DAT_112759f90);
  _objc_destroyWeak(param_1 + _DAT_112759f9c);
  _objc_destroyWeak(param_1 + _DAT_112759fa0);
  _objc_destroyWeak(param_1 + _DAT_112759f48);
  _objc_destroyWeak(param_1 + _DAT_112759f74);
  _objc_destroyWeak(param_1 + _DAT_112759f4c);
  _objc_destroyWeak(param_1 + _DAT_112759fe0);
  _objc_destroyWeak(param_1 + _DAT_112759f88);
  _objc_destroyWeak(param_1 + _DAT_112759f84);
  _objc_destroyWeak(param_1 + _DAT_112759f70);
  _objc_destroyWeak(param_1 + _DAT_112759f68);
  _objc_destroyWeak(param_1 + _DAT_112759f80);
  _objc_destroyWeak(param_1 + _DAT_112759f7c);
  _objc_destroyWeak(param_1 + _DAT_112759f78);
  _objc_destroyWeak(param_1 + _DAT_112759f6c);
  _objc_destroyWeak(param_1 + _DAT_112759f54);
  _objc_destroyWeak(param_1 + _DAT_112759f8c);
  _objc_destroyWeak(param_1 + _DAT_112759f58);
  _objc_destroyWeak(param_1 + _DAT_112759f64);
  _objc_destroyWeak(param_1 + _DAT_112759f60);
  _objc_destroyWeak(param_1 + _DAT_112759f5c);
  _objc_destroyWeak(param_1 + _DAT_112759fd0);
  _objc_destroyWeak(param_1 + _DAT_112759f50);
  _objc_destroyWeak(param_1 + _DAT_112759f98);
  _objc_destroyWeak(param_1 + _DAT_112759ff0);
  _objc_destroyWeak(param_1 + _DAT_112759fcc);
  _objc_storeStrong(param_1 + _DAT_112759f40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759f3c,0);
  return;
}



/* Entry: 106bcea24; end: 106bceb07; -[SCLensCallToActionOffCameraServiceProvider provide] */

void FUN_106bcea24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1170;
  _objc_alloc(PTR_PTR_1126d1170);
  func_0x00010c063900();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bceb08; end: 106bceb47;  */

void FUN_106bceb08(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bceb48; end: 106bced47; -[SCLensCallToActionOffCameraServiceProvider _lensAttachmentLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bceb48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126d1178;
  _objc_alloc(PTR_PTR_1126d1178);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112759ff8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar9;
  func_0x00010c095960();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112759ffc;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar10;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11275a000;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11275a010;
    _objc_loadWeakRetained(lVar13);
  }
  lVar5 = lVar13;
  func_0x00010c091200(lVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11275a00c;
    _objc_loadWeakRetained(lVar12);
  }
  lVar6 = lVar12;
  func_0x00010c293fc0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_11275a004;
    _objc_loadWeakRetained(lVar7);
  }
  lVar8 = lVar7;
  func_0x00010bf398e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0252e0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bced48; end: 106bcedc7; -[SCLensCallToActionOffCameraServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bced48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a010);
  _objc_destroyWeak(param_1 + _DAT_11275a00c);
  _objc_destroyWeak(param_1 + _DAT_11275a008);
  _objc_destroyWeak(param_1 + _DAT_11275a004);
  _objc_destroyWeak(param_1 + _DAT_11275a000);
  _objc_destroyWeak(param_1 + _DAT_112759ffc);
  _objc_destroyWeak(param_1 + _DAT_112759ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112759ff4);
  return;
}



/* Entry: 106bcedc8; end: 106bceeab; -[SCLensCameraPositionSwitcherServiceProvider provide] */

void FUN_106bcedc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1188;
  _objc_alloc(PTR_PTR_1126d1188);
  func_0x00010c022bc0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bceeac; end: 106bcef83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bceeac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d1180;
    _objc_alloc(PTR_PTR_1126d1180);
    lVar1 = param_1 + _DAT_11275a014;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11275a018;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf29780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb320(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bcef84; end: 106bcefc7; -[SCLensCameraPositionSwitcherServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcef84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a014);
  _objc_destroyWeak(param_1 + _DAT_11275a018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a01c);
  return;
}



/* Entry: 106bcefc8; end: 106bcf063; -[SCLensCarouselCTAHandlingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bcefc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d1190;
  _objc_alloc(PTR_PTR_1126d1190);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275a020;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0910a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c090440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022b40(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


