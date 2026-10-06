/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bd7660; end: 106bd76a7; -[SCLensCarouselActivationTracker dealloc] */

void FUN_106bd7660(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126f58a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106bd76a8; end: 106bd783f; -[SCLensCarouselActivationTracker _setupWithActiveStateObservable:lensStateWorkflowObservable:] */

void FUN_106bd76a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106bd7840;
  puStack_78 = &UNK_110842a38;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar1 = param_4;
  func_0x00010c25ff60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd7840; end: 106bd7897;  */

void FUN_106bd7840(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_2);
    func_0x00010be2b320(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bd7898; end: 106bd7997;  */

void FUN_106bd7898(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf86d40(*(undefined8 *)(lVar1 + 0x10));
    uVar2 = param_2;
    func_0x00010c096e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106bd7998; end: 106bd79e7;  */

void FUN_106bd7998(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2b580(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bd79e8; end: 106bd7a07; -[SCLensCarouselActivationTracker _handleLensActiveState:] */

void FUN_106bd79e8(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x18) = param_3;
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 106bd7a08; end: 106bd7acf; -[SCLensCarouselActivationTracker _handleLensStateEvent:] */

void FUN_106bd7a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0bd500(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd7ad0; end: 106bd7b03;  */

void FUN_106bd7ad0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106bd7b04; end: 106bd7b1b; -[SCLensCarouselActivationTracker setEntranceType:] */

void FUN_106bd7b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
  return;
}



/* Entry: 106bd7b1c; end: 106bd7b27; -[SCLensCarouselActivationTracker resetEntranceType] */

void FUN_106bd7b1c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 106bd7b28; end: 106bd7b2f; -[SCLensCarouselActivationTracker initialEntranceType] */

undefined8 FUN_106bd7b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106bd7b30; end: 106bd7b67; -[SCLensCarouselActivationTracker initialLoggerEntranceTypeWithAlwaysOnCarouselEnabled:useCameraNavigationType:] */

long FUN_106bd7b30(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) == 2) {
    return 3;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddbc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__carouselEntranceTypeFromNavigat_1125548a0);
      return param_1;
    }
    lVar1 = 4;
    if (param_3 == 0) {
      lVar1 = 1;
    }
    return lVar1;
  }
  return 2;
}



/* Entry: 106bd7b68; end: 106bd7b8f; -[SCLensCarouselActivationTracker _carouselEntranceTypeFromNavigationType] */

undefined8 FUN_106bd7b68(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x30) - 0x1d;
  if (uVar1 < 5) {
    return *(undefined8 *)(&UNK_10dde7a48 + uVar1 * 8);
  }
  return 0;
}



/* Entry: 106bd7b90; end: 106bd7beb; -[SCLensCarouselActivationTracker .cxx_destruct] */

void FUN_106bd7b90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd7bec; end: 106bd7cb7; -[SCLensCarouselLensStudioNotificationsHandler _studioPreviewCarouselShouldOpen] */

void FUN_106bd7bec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c097100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c076900();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c10f660();
    _objc_release(lVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar5 != 0) {
      return;
    }
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef6e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd7cb8; end: 106bd7cbb; -[SCLensCarouselLensStudioNotificationsHandler _studioPreviewCarouselShouldOpen:] */

void FUN_106bd7cb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec59f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__studioPreviewCarouselShouldOpen_11258f020);
  return;
}



/* Entry: 106bd7cbc; end: 106bd7fbf; -[SCLensCarouselLensStudioNotificationsHandler _studioPreviewLensShouldActivate:] */

void FUN_106bd7cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030320(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c10f660();
  _objc_release(lVar3);
  puVar10 = PTR_PTR_1126b00f8;
  if (lVar4 == 2) {
    uVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158d00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08620();
    _objc_release(uVar2);
    _objc_release(puVar10);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106bd7fc0;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    ppuVar6 = &puStack_98;
    uStack_78 = param_3;
    _objc_retainBlock();
    uVar7 = *(ulong *)(param_1 + 0x28);
    func_0x00010c07f880();
    if ((uVar7 & 1) == 0) {
      puVar8 = PTR_PTR_1126b6ae8;
      func_0x00010c22ba80(PTR_PTR_1126b6ae8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126ae960;
      puVar9 = PTR_PTR_1126cd588;
      func_0x00010c0925e0(PTR_PTR_1126cd588);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fb60(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126ae970;
      func_0x00010bfe2ec0(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010c2a14e0(puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    else {
      (*(code *)ppuVar6[2])(ppuVar6);
    }
    _objc_release(ppuVar6);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd7fc0; end: 106bd80af;  */

void FUN_106bd7fc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b00f8;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159160(puVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0240;
    _objc_alloc(PTR_PTR_1126b0240);
    func_0x00010bff0c60();
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef0080();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bd80b0; end: 106bd81ab; -[SCLensCarouselLensStudioNotificationsHandler _studioPreviewLensShouldReloadIfNeeded:] */

void FUN_106bd80b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f660();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b00f8;
  if (lVar2 == 2) {
    uVar5 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158d00(puVar4,param_2,uVar3,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08620();
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bd81ac; end: 106bd81ff; -[SCLensCarouselLensStudioNotificationsHandler .cxx_destruct] */

void FUN_106bd81ac(long param_1)

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



/* Entry: 106bd8200; end: 106bd82fb; -[SCLensCarouselOnCameraScopeActivationConfigHandler initWithLensesUIControllerStateHandler:cameraReplyConfigurationProvider:birthdayLensInjectionStrategy:uiActivationParameters:] */

undefined1 *
FUN_106bd8200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f58b0;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bd82fc; end: 106bd83b7; -[SCLensCarouselOnCameraScopeActivationConfigHandler selectionWithActivationSelection:] */

void FUN_106bd82fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c131bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2720a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c065040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    _objc_retain(lVar4);
    _objc_release(param_3);
    param_3 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bd83b8; end: 106bd83bf; -[SCLensCarouselOnCameraScopeActivationConfigHandler updateLastAppliedConfiguration:] */

void FUN_106bd83b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bb470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLensControllerAppearanceConfi_11264c740);
  return;
}



/* Entry: 106bd83c0; end: 106bd8427; -[SCLensCarouselOnCameraScopeActivationConfigHandler activationUIConfigurationFor:] */

void FUN_106bd83c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e8ea0(uVar1);
    func_0x00010be4c300(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    param_1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bd8428; end: 106bd84c3; -[SCLensCarouselOnCameraScopeActivationConfigHandler _lensesUIAppearanceConfigurationWithAnimated:] */

void FUN_106bd8428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c091ee0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1c00;
    _objc_alloc(PTR_PTR_1126b1c00);
    puVar3 = PTR_PTR_1126b1c08;
    func_0x00010beffb20(PTR_PTR_1126b1c08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2e20(puVar2,param_2,param_3,puVar3);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bd84c4; end: 106bd850b; -[SCLensCarouselOnCameraScopeActivationConfigHandler .cxx_destruct] */

void FUN_106bd84c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd850c; end: 106bd858f; -[SCLensDataProviderUpdater updateLensDataProviderWithFeatureLensCarouselType:] */

void FUN_106bd850c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c25be00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f2c0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c89f0;
    _objc_alloc(PTR_PTR_1126c89f0);
    func_0x00010c0258e0();
    func_0x00010c287220(param_1,param_2,0,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106bd8590; end: 106bd85e7; -[SCLensDataProviderUpdater updateLensDataProviderWithActivationSource:] */

void FUN_106bd8590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x00010c096cc0(*(undefined8 *)(param_1 + 0x60));
  puVar1 = PTR_PTR_1126c89f0;
  _objc_alloc(PTR_PTR_1126c89f0);
  func_0x00010c0258e0();
  func_0x00010c287220(param_1,param_2,*(undefined8 *)(param_1 + 0x40),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bd85e8; end: 106bd87e7; -[SCLensDataProviderUpdater updateLensDataProviderWithLensesObservable:activationConfiguration:] */

void FUN_106bd85e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar6 = param_4;
  func_0x00010bef0340(param_4);
  func_0x00010c096cc0(uVar5,param_2,uVar6);
  puVar1 = PTR_PTR_1126c89f0;
  _objc_alloc(PTR_PTR_1126c89f0);
  func_0x00010c0258e0();
  lVar2 = param_1;
  func_0x00010c25be00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf089c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d1288;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = param_1;
  func_0x00010bf29ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6a40(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf29ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar3;
  _objc_release(uVar6);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf29ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287260();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d1288;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf29ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf725a0(puVar4,param_2,lVar2,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bd87e8; end: 106bd8857; -[SCLensDataProviderUpdater registerDataProviderWithContextId:contextConfig:] */

void FUN_106bd87e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf29ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1262a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bd8858; end: 106bd885b; -[SCLensDataProviderUpdater activateDataProviderWithContextId:] */

void FUN_106bd8858(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc4b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateContextWithId__11254ec78);
  return;
}



/* Entry: 106bd885c; end: 106bd88df; -[SCLensDataProviderUpdater deregisterDataProviderWithContextId:] */

void FUN_106bd885c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf29ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2c760();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf29ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e1c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bd88e0; end: 106bd8c0b; -[SCLensDataProviderUpdater _activateContextWithId:] */

void FUN_106bd88e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106bd8c0c;
  uStack_60 = 0x106bd8c1c;
  uStack_58 = 0;
  lVar1 = param_1;
  func_0x00010bf29ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c0bf4e0(lVar2);
    uVar5 = puStack_78[5];
    lVar1 = param_1;
    func_0x00010c25be00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf089c0(uVar5);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126d1288;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_1;
    func_0x00010bf29ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5f180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6a40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf29ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5f180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar3;
    _objc_release(uVar5);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf29ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef980();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf29ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5f180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c159a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = lVar3;
      func_0x00010bfb0de0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb2e0(lVar3);
      _objc_release(lVar1);
    }
    puVar4 = PTR_PTR_1126d1288;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf29ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf5f180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf725a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd8c0c; end: 106bd8c23;  */

void FUN_106bd8c0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106bd8c24; end: 106bd8cd7;  */

void FUN_106bd8c24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x58);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  func_0x00010c096cc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,uVar1);
  puVar2 = PTR_PTR_1126c89f0;
  _objc_alloc();
  func_0x00010c0258e0();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106bd8cd8; end: 106bd8d4b; -[SCLensDataProviderUpdater updateLensDataProvider:] */

void FUN_106bd8cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1118;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c287160(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bd8d4c; end: 106bd8d53; -[SCLensDataProviderUpdater updateLensDataProvider:updatingStrategy:] */

void FUN_106bd8d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateLensDataProvider_updatingS_11267f688,param_3,param_4,0);
  return;
}



/* Entry: 106bd8d54; end: 106bd8ee3; -[SCLensDataProviderUpdater updateLensDataProvider:updatingStrategy:lensIdToRestore:] */

void FUN_106bd8d54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c25be00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf089c0(param_4,param_2,lVar1);
  _objc_release(param_4);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = PTR_PTR_1126d1288;
  func_0x00010c2a6a40(PTR_PTR_1126d1288,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bf29ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287140();
  _objc_release(param_3);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d1288;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf29ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf725a0(puVar3,param_2,lVar1,1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106bd8ee4; end: 106bd8f27; -[SCLensDataProviderUpdater currentLensDataProvider] */

void FUN_106bd8ee4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf29ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd8f28; end: 106bd8f4f; -[SCLensDataProviderUpdater currentLensDataProviderProxy] */

void FUN_106bd8f28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd8f50; end: 106bd8f77; -[SCLensDataProviderUpdater lensDataProviderUpdateEventsObservable] */

void FUN_106bd8f50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd8f78; end: 106bd8ff7; -[SCLensDataProviderUpdater .cxx_destruct] */

void FUN_106bd8f78(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd8ff8; end: 106bd909b; -[SCLensPersistentStoragesCleaner initWithBackgroundTaskWrapper:lensPreferences:] */

undefined1 *
FUN_106bd8ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f58c0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bd909c; end: 106bd929f; -[SCLensPersistentStoragesCleaner clearExpiredLensPersistentStoragesInBackground] */

void FUN_106bd909c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17d00();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae790;
  lVar3 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar4,param_2,0x11,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x106bd91bc;
  puStack_68 = &UNK_11084d788;
  lStack_60 = param_1;
  puStack_58 = puVar4;
  uStack_50 = uVar5;
  uStack_48 = uVar2;
  _objc_retain(uVar5);
  _objc_retain(puVar4);
  func_0x00010c0f7fc0(puVar4,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(puVar4);
  _objc_release(uVar5);
  return;
}



/* Entry: 106bd92a0; end: 106bd92db;  */

void FUN_106bd92a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd92dc; end: 106bd930b; -[SCLensPersistentStoragesCleaner .cxx_destruct] */

void FUN_106bd92dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd930c; end: 106bd9353; -[SCLensStateWorkflowHandler dealloc] */

void FUN_106bd930c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x68));
  puStack_28 = PTR_PTR_1126f58c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106bd9354; end: 106bd935b; -[SCLensStateWorkflowHandler completeWorkflow] */

void FUN_106bd9354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106bd935c; end: 106bd93a7; -[SCLensStateWorkflowHandler lensStateWorkflowStartHandlingVolumeButtonEventsIfNeeded:] */

void FUN_106bd935c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24eea0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd93a8; end: 106bd94a3; -[SCLensStateWorkflowHandler lensStateWorkflowShouldRestoreAnyway:] */

undefined8 FUN_106bd93a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf29e60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06c220();
  if ((uVar5 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c075820();
    if ((uVar5 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf9b3e0();
      _objc_release(uVar7);
    }
    else {
      uVar8 = 1;
    }
    _objc_release(uVar6);
  }
  else {
    uVar8 = 1;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar8;
}



/* Entry: 106bd94a4; end: 106bd94ab; -[SCLensStateWorkflowHandler setLensToRestore:] */

void FUN_106bd94a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bd090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setLensToRestore__11264ce48);
  return;
}



/* Entry: 106bd94ac; end: 106bd94b3; -[SCLensStateWorkflowHandler resetLensStateBlock] */

void FUN_106bd94ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_resetLensStateBlock_11262bde8);
  return;
}



/* Entry: 106bd94b4; end: 106bd94bb; -[SCLensStateWorkflowHandler setResetLensStateBlock:] */

void FUN_106bd94b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ec7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setResetLensStateBlock__112658c20);
  return;
}



/* Entry: 106bd94bc; end: 106bd94c3; -[SCLensStateWorkflowHandler currentLensStateWorkflowSourceType] */

void FUN_106bd94bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_currentLensSource_1125b5650);
  return;
}



/* Entry: 106bd94c4; end: 106bd954b; -[SCLensStateWorkflowHandler beginCurrentLensStateForLensSource:] */

void FUN_106bd94c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf18340(*(undefined8 *)(param_1 + 0x60));
  func_0x00010bebd280(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0();
  _objc_release(uVar1);
  func_0x00010bebd280(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd954c; end: 106bd96f7; -[SCLensStateWorkflowHandler _snapSourceForPageSource] */

undefined8 FUN_106bd954c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x40);
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
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0xffffffffffffffff;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
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
    uVar6 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
  }
  return uVar6;
}



/* Entry: 106bd96f8; end: 106bd9793;  */

void FUN_106bd96f8(long param_1,undefined8 param_2)

{
  func_0x00010c243400();
  func_0x0001091ef74c();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106bd9794; end: 106bd979b; -[SCLensStateWorkflowHandler lensStateWorkflowObservable] */

undefined8 FUN_106bd9794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106bd979c; end: 106bd98ab; -[SCLensStateWorkflowHandler .cxx_destruct] */

void FUN_106bd979c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd98ac; end: 106bd991f; -[SCLensValidatorAdapter initWithLensValidator:] */

undefined1 * FUN_106bd98ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f58d0;
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



/* Entry: 106bd9920; end: 106bd99b7; -[SCLensValidatorAdapter validateLens:completion:] */

void FUN_106bd9920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106bd99b8;
  puStack_40 = &UNK_110859a38;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c296960(uVar1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106bd99b8; end: 106bd99d3;  */

void FUN_106bd99b8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106bd99cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 106bd99d4; end: 106bd99df; -[SCLensValidatorAdapter .cxx_destruct] */

void FUN_106bd99d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd99e0; end: 106bd9a1f; -[SCLensesUIControllerStateHandler setLensToRestore:] */

void FUN_106bd99e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 106bd9a20; end: 106bd9a5b; -[SCLensesUIControllerStateHandler lensControllerAppearanceConfigurationToRestore] */

void FUN_106bd9a20(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd9a5c; end: 106bd9a9b; -[SCLensesUIControllerStateHandler setLensControllerAppearanceConfigurationToRestore:] */

void FUN_106bd9a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 106bd9a9c; end: 106bd9ad7; -[SCLensesUIControllerStateHandler resetLensStateBlock] */

void FUN_106bd9a9c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd9ad8; end: 106bd9b33; -[SCLensesUIControllerStateHandler setResetLensStateBlock:] */

void FUN_106bd9ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = param_3;
  _objc_retainBlock();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 106bd9b34; end: 106bd9b6f; -[SCLensesUIControllerStateHandler .cxx_destruct] */

void FUN_106bd9b34(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106bd9b70; end: 106bd9c7b; -[SCCameraLensesViewControllerCarouselScopeManager initWithCameraLensesUIControllerCreator:cameraLensesViewControllerServices:cameraLensesViewControllerInteractor:lensCarouselStudySettings:lensCarouselManager:] */

undefined1 *
FUN_106bd9b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f58e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bd9c7c; end: 106bd9cdb; -[SCCameraLensesViewControllerCarouselScopeManager cameraViewControllerInfoProvider] */

void FUN_106bd9c7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b980();
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



/* Entry: 106bd9cdc; end: 106bd9dbf; -[SCCameraLensesViewControllerCarouselScopeManager cameraLensesUIController] */

void FUN_106bd9cdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bd9dc0; end: 106bd9dff;  */

void FUN_106bd9dc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4c320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bd9e00; end: 106bd9f43; -[SCCameraLensesViewControllerCarouselScopeManager _lensesUIController] */

void FUN_106bd9e00(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27f000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf2b980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf2b980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf2a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf29c20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bf54f80(uVar1,param_2,lVar3,lVar4,lVar6,lVar9,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 106bd9f44; end: 106bd9f47; -[SCCameraLensesViewControllerCarouselScopeManager lensesPresentingViewController] */

void FUN_106bd9f44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentingViewController_11257d808);
  return;
}



/* Entry: 106bd9f48; end: 106bda02f; -[SCCameraLensesViewControllerCarouselScopeManager _presentingViewController] */

void FUN_106bd9f48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf2b980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2bbc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf2b980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf2b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar3 == 0) {
    lVar3 = lVar1;
    func_0x00010c0d66a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106bda030; end: 106bda0b3; -[SCCameraLensesViewControllerCarouselScopeManager .cxx_destruct] */

void FUN_106bda030(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bda0b4; end: 106bda19b;  */

void FUN_106bda0b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106bda19c;
  uStack_30 = 0x106bda1ac;
  uStack_28 = 0;
  func_0x00010c297260(*(undefined8 *)(param_1 + 0x178));
  uVar1 = puStack_48[5];
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bda19c; end: 106bda1b3;  */

void FUN_106bda19c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106bda1b4; end: 106bda20b;  */

void FUN_106bda1b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bda20c; end: 106bda213; -[SCCameraLensesViewControllerManager completeWorkflows] */

void FUN_106bda20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1d0),PTR_s_completeWorkflow_1125ae918);
  return;
}



/* Entry: 106bda214; end: 106bda26b; -[SCCameraLensesViewControllerManager configureWithCameraViewControllerInfoProvider:] */

void FUN_106bda214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdcf060(param_1,param_2,uVar2);
  func_0x00010bf47720(param_1,param_2,param_3,0,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bda26c; end: 106bda2c3; -[SCCameraLensesViewControllerManager lensCloseButtonDelegateHandler] */

void FUN_106bda26c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x200);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d12c8;
    _objc_alloc();
    func_0x00010c026020();
    uVar2 = *(undefined8 *)(param_1 + 0x200);
    *(undefined **)(param_1 + 0x200) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x200);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bda2c4; end: 106bda2cb; -[SCCameraLensesViewControllerManager lensDataProviderUpdater] */

void FUN_106bda2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x158),PTR_s_target_112678178);
  return;
}



/* Entry: 106bda2cc; end: 106bda3a7;  */

void FUN_106bda2cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d12e0;
    _objc_alloc(PTR_PTR_1126d12e0);
    uVar1 = *(undefined8 *)(param_1 + 0x180);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef1060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c096ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c096ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0d40(puVar5,param_2,uVar2,lVar4,*(undefined8 *)(param_1 + 0x108));
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bda3a8; end: 106bda403;  */

void FUN_106bda3a8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d12e8;
    _objc_alloc(PTR_PTR_1126d12e8);
    func_0x00010c022c20();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bda404; end: 106bda6b7; -[SCCameraLensesViewControllerManager toggleLensesButtonPressed] */

void FUN_106bda404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0982a0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2bbc0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1799c0();
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf02120();
    _objc_release(uVar3);
    lVar5 = param_1;
    if ((int)uVar4 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65b20();
      _objc_release(uVar4);
      func_0x00010c093ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c096e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c138f00();
    }
    else {
      func_0x00010be9da80(param_1,param_2,1);
      uVar4 = *(undefined8 *)(param_1 + 0x158);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2871c0();
      _objc_release(uVar4);
      func_0x00010be9da80(param_1,param_2,0);
      func_0x00010c093ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c096e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13bfc0();
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c241880();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfd3ba0();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar7);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c241880();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 106bda6b8; end: 106bda72b; -[SCCameraLensesViewControllerManager _selectOriginalLensAnimated:] */

void FUN_106bda6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b00f8;
  func_0x00010c158d00(PTR_PTR_1126b00f8,param_2,&PTR____CFConstantStringClassReference_110e3d018,
                      param_3,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf08620();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bda72c; end: 106bda857;  */

void FUN_106bda72c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d12f8;
    _objc_alloc(PTR_PTR_1126d12f8);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0d6760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0xe0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a0f80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x180);
    lVar4 = param_1;
    func_0x00010c096ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0252c0(puVar5,param_2,uVar6,uVar7,uVar1,uVar8,param_1,uVar3,uVar9,lVar4,
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(param_1 + 0x50));
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bda858; end: 106bda897; -[SCCameraLensesViewControllerManager carouselScopeManager] */

void FUN_106bda858(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bda898; end: 106bda9af; -[SCCameraLensesViewControllerManager lensesPresentingViewController] */

void FUN_106bda898(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf2b980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf2bbc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf2b980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar4 == 0) {
    lVar4 = lVar2;
    func_0x00010c0d66a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bda9b0; end: 106bdaa93; -[SCCameraLensesViewControllerManager lensesUIController] */

void FUN_106bda9b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  lVar3 = *(long *)(param_1 + 0x1b0);
  if (lVar3 == 0) {
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined **)(param_1 + 0x1b0) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    lVar3 = *(long *)(param_1 + 0x1b0);
  }
  _objc_retain(lVar3);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bdaa94; end: 106bdab1b;  */

void FUN_106bdaa94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf32a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf29bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bdab1c; end: 106bdaba3; -[SCCameraLensesViewControllerManager warmupLensesUIController] */

void FUN_106bdab1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c098880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010c098880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57500();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bdaba4; end: 106bdabb3; -[SCCameraLensesViewControllerManager _arBarFeatureEnabledForCameraViewType:] */

bool FUN_106bdaba4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 1U < 2;
}



/* Entry: 106bdabb4; end: 106bdabf3;  */

void FUN_106bdabb4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c096ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bdabf4; end: 106bdac57; -[SCCameraLensesViewControllerManager lensStateWorkflowProvider] */

void FUN_106bdabf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106bdac58;
  puStack_20 = &UNK_110966bf0;
  uStack_18 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdac58; end: 106bdac5f;  */

void FUN_106bdac58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c096eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensStateWorkflowHandler_1126035b8);
  return;
}



/* Entry: 106bdac60; end: 106bdaca3; -[SCCameraLensesViewControllerManager lensOperaDelegate] */

void FUN_106bdac60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c097ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bdaca4; end: 106bdaca7; -[SCCameraLensesViewControllerManager lensCloseButtonDelegate] */

void FUN_106bdaca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lensCloseButtonDelegateHandler_112601f20);
  return;
}


