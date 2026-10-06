/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10522fdac; end: 10522fe33; -[SCSpectaclesContentPageMemoriesSaveDialogViewController viewWillDisappear:] */

void FUN_10522fdac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7080;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10522fe34; end: 10522fe37; -[SCSpectaclesContentPageMemoriesSaveDialogViewController presentingViewControllerForCameraRollPermissionAlert] */

void FUN_10522fe34(void)

{
  return;
}



/* Entry: 10522fe38; end: 10522fe87; -[SCSpectaclesContentPageMemoriesSaveDialogViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522fe38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127200c8,0);
  _objc_storeStrong(param_1 + _DAT_1127200c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127200c0,0);
  return;
}



/* Entry: 10522fe88; end: 10522ff0b; -[SCPreferences hasSeenOnboardingWiFiAlert] */

ulong FUN_10522fe88(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcc298);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf1f3c0(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10522ff0c; end: 10522ff57; -[SCPreferences setHasSeenOnboardingWiFiAlert:] */

void FUN_10522ff0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110dcc298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10522ff58; end: 10522ffdb; -[SCPreferences hasSeenOnboardingSaveToAlert] */

ulong FUN_10522ff58(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcc2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf1f3c0(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10522ffdc; end: 105230027; -[SCPreferences setHasSeenOnboardingSaveToAlert:] */

void FUN_10522ffdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110dcc2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105230028; end: 105230093; +[SCSpectaclesContentPageAction deleteContentWithContentIds:] */

void FUN_105230028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b66c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105230094; end: 1052300df; +[SCSpectaclesContentPageAction exit] */

void FUN_105230094(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b66c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052300e0; end: 10523014b; +[SCSpectaclesContentPageAction exportContentWithContentIds:] */

void FUN_1052300e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b66c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10523014c; end: 1052301b3; +[SCSpectaclesContentPageAction importContentWithContentIds:] */

void FUN_10523014c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b66c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052301b4; end: 1052301ff; +[SCSpectaclesContentPageAction tapWiFiButton] */

void FUN_1052301b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b66c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105230200; end: 105230247; +[SCSpectaclesContentPageAction viewDidAppear] */

void FUN_105230200(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b66c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105230248; end: 105230293; +[SCSpectaclesContentPageAction viewDidDealloc] */

void FUN_105230248(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b66c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105230294; end: 1052302b7; -[SCSpectaclesContentPageAction copyWithZone:] */

undefined8 FUN_105230294(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1052302b8; end: 10523033b; -[SCSpectaclesContentPageAction hash] */

void FUN_1052302b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e7088;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523033c; end: 10523037f; -[SCSpectaclesContentPageAction internalInit] */

void FUN_10523033c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105230380; end: 10523044f; -[SCSpectaclesContentPageAction isEqual:] */

long FUN_105230380(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105230428:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105230434;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105230434;
          }
          goto LAB_105230428;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105230434:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105230450; end: 1052305d3; -[SCSpectaclesContentPageAction matchViewDidAppear:viewDidDealloc:importContent:deleteContent:exportContent:tapWiFiButton:exit:] */

void FUN_105230450(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_105230588;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if (lVar2 != 1) {
        if ((lVar2 != 2) || (param_5 == 0)) goto LAB_105230588;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        pcVar3 = *(code **)(param_5 + 0x10);
        lVar2 = param_5;
        goto LAB_105230560;
      }
      if (param_4 == 0) goto LAB_105230588;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (lVar2 < 5) {
      if (lVar2 == 3) {
        if (param_6 == 0) goto LAB_105230588;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        pcVar3 = *(code **)(param_6 + 0x10);
        lVar2 = param_6;
      }
      else {
        if ((lVar2 != 4) || (param_7 == 0)) goto LAB_105230588;
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        pcVar3 = *(code **)(param_7 + 0x10);
        lVar2 = param_7;
      }
LAB_105230560:
      (*pcVar3)(lVar2,uVar1);
      goto LAB_105230588;
    }
    if (lVar2 == 5) {
      if (param_8 == 0) goto LAB_105230588;
      pcVar3 = *(code **)(param_8 + 0x10);
      lVar2 = param_8;
    }
    else {
      if ((lVar2 != 6) || (param_9 == 0)) goto LAB_105230588;
      pcVar3 = *(code **)(param_9 + 0x10);
      lVar2 = param_9;
    }
  }
  (*pcVar3)(lVar2);
LAB_105230588:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052305d4; end: 10523060f; -[SCSpectaclesContentPageAction .cxx_destruct] */

void FUN_1052305d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105230610; end: 10523079b; -[SCSpectaclesContentPageViewModel initWithTitle:isUserActionsEnabled:progressBarViewModel:contentSectionViewModels:updatedIndexPaths:deletedIndexPaths:deletedSections:wifiState:showLoadingOverlay:] */

undefined1 *
FUN_105230610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e7090;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_11;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10523079c; end: 1052307bf; -[SCSpectaclesContentPageViewModel copyWithZone:] */

undefined8 FUN_10523079c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1052307c0; end: 105230873; -[SCSpectaclesContentPageViewModel hash] */

undefined8 * FUN_1052307c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105230984:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105230990;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] &&
         (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))) &&
        (*(char *)((long)puVar3 + 9) == param_3[9])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_105230990;
                }
                goto LAB_105230984;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105230990:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105230874; end: 1052309ab; -[SCSpectaclesContentPageViewModel isEqual:] */

long FUN_105230874(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105230984:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105230990;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_105230990;
                }
                goto LAB_105230984;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105230990:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1052309ac; end: 1052309b3; -[SCSpectaclesContentPageViewModel title] */

undefined8 FUN_1052309ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052309b4; end: 1052309bb; -[SCSpectaclesContentPageViewModel isUserActionsEnabled] */

undefined1 FUN_1052309b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1052309bc; end: 1052309c3; -[SCSpectaclesContentPageViewModel progressBarViewModel] */

undefined8 FUN_1052309bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052309c4; end: 1052309cb; -[SCSpectaclesContentPageViewModel contentSectionViewModels] */

undefined8 FUN_1052309c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052309cc; end: 1052309d3; -[SCSpectaclesContentPageViewModel updatedIndexPaths] */

undefined8 FUN_1052309cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052309d4; end: 1052309db; -[SCSpectaclesContentPageViewModel deletedIndexPaths] */

undefined8 FUN_1052309d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1052309dc; end: 1052309e3; -[SCSpectaclesContentPageViewModel deletedSections] */

undefined8 FUN_1052309dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1052309e4; end: 1052309eb; -[SCSpectaclesContentPageViewModel wifiState] */

undefined8 FUN_1052309e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1052309ec; end: 1052309f3; -[SCSpectaclesContentPageViewModel showLoadingOverlay] */

undefined1 FUN_1052309ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1052309f4; end: 105230a53; -[SCSpectaclesContentPageViewModel .cxx_destruct] */

void FUN_1052309f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105230a54; end: 105230bab; -[SCSpectaclesContentPageContentCellViewModel initWithContentId:dateLabelText:timeLabelText:durationLabelText:actionButtonAccessibilityIdentifier:allowSelecting:contentState:mediaType:] */

undefined1 *
FUN_105230a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e7098;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105230bac; end: 105230bcf; -[SCSpectaclesContentPageContentCellViewModel copyWithZone:] */

undefined8 FUN_105230bac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105230bd0; end: 105230c73; -[SCSpectaclesContentPageContentCellViewModel hash] */

undefined8 * FUN_105230bd0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = &uStack_68;
  uStack_48 = uVar1;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105230d6c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105230d78;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[7] == param_3[7])) &&
        (puVar3[8] == param_3[8])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_105230d78;
              }
              goto LAB_105230d6c;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105230d78:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105230c74; end: 105230d93; -[SCSpectaclesContentPageContentCellViewModel isEqual:] */

long FUN_105230c74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105230d6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105230d78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_105230d78;
              }
              goto LAB_105230d6c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105230d78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105230d94; end: 105230d9b; -[SCSpectaclesContentPageContentCellViewModel contentId] */

undefined8 FUN_105230d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105230d9c; end: 105230da3; -[SCSpectaclesContentPageContentCellViewModel dateLabelText] */

undefined8 FUN_105230d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105230da4; end: 105230dab; -[SCSpectaclesContentPageContentCellViewModel timeLabelText] */

undefined8 FUN_105230da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105230dac; end: 105230db3; -[SCSpectaclesContentPageContentCellViewModel durationLabelText] */

undefined8 FUN_105230dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105230db4; end: 105230dbb; -[SCSpectaclesContentPageContentCellViewModel actionButtonAccessibilityIdentifier] */

undefined8 FUN_105230db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105230dbc; end: 105230dc3; -[SCSpectaclesContentPageContentCellViewModel allowSelecting] */

undefined1 FUN_105230dbc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105230dc4; end: 105230dcb; -[SCSpectaclesContentPageContentCellViewModel contentState] */

undefined8 FUN_105230dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105230dcc; end: 105230dd3; -[SCSpectaclesContentPageContentCellViewModel mediaType] */

undefined8 FUN_105230dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105230dd4; end: 105230e27; -[SCSpectaclesContentPageContentCellViewModel .cxx_destruct] */

void FUN_105230dd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105230e28; end: 105230edb; -[SCSpectaclesContentPageProgressBarViewModel initWithContentId:message:contentState:] */

undefined1 *
FUN_105230e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e70a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105230edc; end: 105230eff; -[SCSpectaclesContentPageProgressBarViewModel copyWithZone:] */

undefined8 FUN_105230edc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105230f00; end: 105230f77; -[SCSpectaclesContentPageProgressBarViewModel hash] */

undefined8 * FUN_105230f00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105231008:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105231014;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105231014;
        }
        goto LAB_105231008;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105231014:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105230f78; end: 10523102f; -[SCSpectaclesContentPageProgressBarViewModel isEqual:] */

long FUN_105230f78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105231008:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105231014;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105231014;
        }
        goto LAB_105231008;
      }
    }
    lVar3 = 0;
  }
LAB_105231014:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105231030; end: 105231037; -[SCSpectaclesContentPageProgressBarViewModel contentId] */

undefined8 FUN_105231030(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105231038; end: 10523103f; -[SCSpectaclesContentPageProgressBarViewModel message] */

undefined8 FUN_105231038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105231040; end: 105231047; -[SCSpectaclesContentPageProgressBarViewModel contentState] */

undefined8 FUN_105231040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105231048; end: 105231077; -[SCSpectaclesContentPageProgressBarViewModel .cxx_destruct] */

void FUN_105231048(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105231078; end: 105231123; -[SCSpectaclesContentPageContentSectionViewModel initWithContentCellViewModels:title:] */

undefined1 *
FUN_105231078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e70a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105231124; end: 105231147; -[SCSpectaclesContentPageContentSectionViewModel copyWithZone:] */

undefined8 FUN_105231124(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105231148; end: 1052311bb; -[SCSpectaclesContentPageContentSectionViewModel hash] */

undefined8 * FUN_105231148(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10523123c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105231248;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105231248;
        }
        goto LAB_10523123c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105231248:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1052311bc; end: 105231263; -[SCSpectaclesContentPageContentSectionViewModel isEqual:] */

long FUN_1052311bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10523123c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105231248;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105231248;
        }
        goto LAB_10523123c;
      }
    }
    lVar3 = 0;
  }
LAB_105231248:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105231264; end: 10523126b; -[SCSpectaclesContentPageContentSectionViewModel contentCellViewModels] */

undefined8 FUN_105231264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10523126c; end: 105231273; -[SCSpectaclesContentPageContentSectionViewModel title] */

undefined8 FUN_10523126c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105231274; end: 1052312a3; -[SCSpectaclesContentPageContentSectionViewModel .cxx_destruct] */

void FUN_105231274(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052312a4; end: 105231beb; -[SCSpectaclesDeviceFeatureCatalogEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052312a4(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  undefined8 uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar55 = (long)_DAT_112720134;
  uVar2 = param_1 + lVar55;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_70,param_1);
  uVar2 = uVar4;
  func_0x00010c0774a0();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (((uVar2 & 1) == 0) && (uVar2 = uVar4, func_0x00010c06e7e0(), (int)uVar2 == 0)) {
    puStack_c8 = (undefined *)0x0;
  }
  else {
    puStack_c8 = PTR_PTR_1126ae720;
    puStack_98 = puVar7;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105231bec;
    puStack_80 = &UNK_110871070;
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_78);
  }
  puVar7 = PTR_PTR_1126b66f0;
  lVar5 = param_1 + lVar55;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c231920();
  _objc_release(lVar6);
  _objc_release(lVar5);
  if ((int)puVar7 != 0) {
    puVar7 = puStack_c8;
    func_0x00010c269d40(puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef6e0();
    _objc_release(puVar7);
  }
  lVar5 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c263a80();
  _objc_release(lVar6);
  _objc_release(lVar5);
  puStack_d0 = PTR_PTR_1126ae720;
  if ((int)lVar8 == 0) {
    puStack_d0 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_a0,auStack_70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + lVar55;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_d0;
    func_0x00010c269d40(puStack_d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb0c0(lVar6);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_1 + lVar55;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_d0;
    func_0x00010c269d40(puStack_d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befac20(lVar6);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_a0);
  }
  lVar5 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c2635a0();
  if ((int)lVar8 == 0) {
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112720138);
    func_0x00010c071800();
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (iVar1 != 0) {
      puStack_d8 = PTR_PTR_1126b66f8;
      _objc_alloc();
      func_0x00010c041f80();
      goto LAB_1052315c8;
    }
  }
  puStack_d8 = (undefined *)0x0;
LAB_1052315c8:
  puVar7 = PTR_PTR_1126b6700;
  _objc_alloc();
  lVar5 = param_1 + _DAT_11272013c;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010bf70f40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112720140;
  _objc_loadWeakRetained();
  lVar10 = lVar6;
  func_0x00010c0eddc0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = (long)_DAT_112720144;
  lVar8 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar11 = lVar8;
  func_0x00010c0873c0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar12 = lVar52;
  func_0x00010c0873a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112720148;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfb2940();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11272014c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf70960();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112720150;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c094d00();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_112720154;
  lVar19 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0b59e0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar21 = lVar53;
  func_0x00010c105b80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112720158;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c2a54c0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11272015c;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bf212a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112720160;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf0ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112720164;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bf70e40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112720168;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c087140();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11272016c;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bf6fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = (long)_DAT_112720170;
  lVar34 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bf6fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c11e780();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar38 = lVar54;
  func_0x00010c09f4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112720174;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c0b5880();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112720178;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c0faee0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_11272017c;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c2734a0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112720180;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bfb28a0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_112720184;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010bf211e0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_112720188;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bfb2880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5d60();
  uVar51 = *(undefined8 *)(param_1 + _DAT_11272018c);
  *(undefined **)(param_1 + _DAT_11272018c) = puVar7;
  _objc_release(uVar51);
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
  _objc_release(lVar54);
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
  _objc_release(lVar53);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar52);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  param_1 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar55 = param_1;
  func_0x00010bfa1ca0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar55 + 0x10))();
  _objc_release(lVar55);
  _objc_release(param_1);
  _objc_release(puStack_d8);
  _objc_release(puStack_d0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar4);
  return;
}



/* Entry: 105231bec; end: 105231c6b;  */

void FUN_105231bec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105231c6c; end: 105231cfb; -[SCSpectaclesDeviceFeatureCatalogEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105231c6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112720134;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa1ca0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e70b0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105231cfc; end: 105231f77; -[SCSpectaclesDeviceFeatureCatalogEntryPoint _createAutoSaveManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105231cfc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127201a4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar17;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar17);
  puVar3 = PTR_PTR_1126b66f0;
  _objc_alloc();
  lVar16 = (long)_DAT_112720134;
  lVar17 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar4 = lVar17;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112720190;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar8 = lVar16;
  func_0x00010bf4d720();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2533a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112720194;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112720198;
  _objc_loadWeakRetained(param_1);
  lVar13 = param_1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c040(puVar3,param_2,lVar4,lVar5,lVar7,lVar10,lVar12,lVar15,0,lVar2);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105231f78; end: 105231fa7;  */

void FUN_105231f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105231fa8; end: 105232143; -[SCSpectaclesDeviceFeatureCatalogEntryPoint _createProxyManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105231fa8(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b6708;
  _objc_alloc();
  lVar12 = (long)_DAT_112720134;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf638a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272019c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar10 = lVar12;
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127201a0;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002140(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar12);
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



/* Entry: 105232144; end: 1052322c7; -[SCSpectaclesDeviceFeatureCatalogEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105232144(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720138,0);
  _objc_destroyWeak(param_1 + _DAT_1127201a4);
  _objc_destroyWeak(param_1 + _DAT_112720198);
  _objc_destroyWeak(param_1 + _DAT_112720184);
  _objc_destroyWeak(param_1 + _DAT_11272017c);
  _objc_destroyWeak(param_1 + _DAT_112720180);
  _objc_destroyWeak(param_1 + _DAT_112720178);
  _objc_destroyWeak(param_1 + _DAT_112720174);
  _objc_destroyWeak(param_1 + _DAT_1127201a0);
  _objc_destroyWeak(param_1 + _DAT_112720170);
  _objc_destroyWeak(param_1 + _DAT_11272016c);
  _objc_destroyWeak(param_1 + _DAT_112720168);
  _objc_destroyWeak(param_1 + _DAT_112720164);
  _objc_destroyWeak(param_1 + _DAT_112720160);
  _objc_destroyWeak(param_1 + _DAT_11272015c);
  _objc_destroyWeak(param_1 + _DAT_112720158);
  _objc_destroyWeak(param_1 + _DAT_112720154);
  _objc_destroyWeak(param_1 + _DAT_112720150);
  _objc_destroyWeak(param_1 + _DAT_11272014c);
  _objc_destroyWeak(param_1 + _DAT_112720144);
  _objc_destroyWeak(param_1 + _DAT_11272013c);
  _objc_destroyWeak(param_1 + _DAT_112720188);
  _objc_destroyWeak(param_1 + _DAT_112720148);
  _objc_destroyWeak(param_1 + _DAT_112720140);
  _objc_destroyWeak(param_1 + _DAT_112720194);
  _objc_destroyWeak(param_1 + _DAT_112720190);
  _objc_destroyWeak(param_1 + _DAT_11272019c);
  _objc_destroyWeak(param_1 + _DAT_112720134);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272018c,0);
  return;
}



/* Entry: 1052322c8; end: 105232837; -[SCSpectaclesDeviceFeatureCatalogImpl initWithAutoSaveManager:proxyManager:deviceSecurityManager:otaUpdateManager:knobsRPCManager:knobsLocationManager:flightManager:deviceInternalSettingsManager:lensLaunchManager:lowPowerModeManager:powerStateManager:wifiSettingsManager:brightnessSettingsManager:audioSettingsManager:deviceReportIssueManager:kioskModeManager:developerModeManager:deviceActionManager:quickPreviewManager:locationSettingsManager:lostModeManager:phoneMirroringManager:tomaRPCManager:flightImuCalibrationRPCManager:brieRPCManager:flightErrorReporter:contextNotificationLauncher:] */

undefined8 *
FUN_1052322c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1126e70b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 105232838; end: 10523283f; -[SCSpectaclesDeviceFeatureCatalogImpl autoSaveManager] */

undefined8 FUN_105232838(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105232840; end: 105232847; -[SCSpectaclesDeviceFeatureCatalogImpl proxyManager] */

undefined8 FUN_105232840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105232848; end: 10523284f; -[SCSpectaclesDeviceFeatureCatalogImpl deviceSecurityManager] */

undefined8 FUN_105232848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105232850; end: 105232857; -[SCSpectaclesDeviceFeatureCatalogImpl otaUpdateManager] */

undefined8 FUN_105232850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105232858; end: 10523285f; -[SCSpectaclesDeviceFeatureCatalogImpl knobsRPCManager] */

undefined8 FUN_105232858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105232860; end: 105232867; -[SCSpectaclesDeviceFeatureCatalogImpl knobsLocationManager] */

undefined8 FUN_105232860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105232868; end: 10523286f; -[SCSpectaclesDeviceFeatureCatalogImpl flightManager] */

undefined8 FUN_105232868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105232870; end: 105232877; -[SCSpectaclesDeviceFeatureCatalogImpl deviceInternalSettingsManager] */

undefined8 FUN_105232870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105232878; end: 10523287f; -[SCSpectaclesDeviceFeatureCatalogImpl lensLaunchManager] */

undefined8 FUN_105232878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105232880; end: 105232887; -[SCSpectaclesDeviceFeatureCatalogImpl lowPowerModeManager] */

undefined8 FUN_105232880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105232888; end: 10523288f; -[SCSpectaclesDeviceFeatureCatalogImpl powerStateManager] */

undefined8 FUN_105232888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105232890; end: 105232897; -[SCSpectaclesDeviceFeatureCatalogImpl wifiSettingsManager] */

undefined8 FUN_105232890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105232898; end: 10523289f; -[SCSpectaclesDeviceFeatureCatalogImpl brightnessSettingsManager] */

undefined8 FUN_105232898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1052328a0; end: 1052328a7; -[SCSpectaclesDeviceFeatureCatalogImpl audioSettingsManager] */

undefined8 FUN_1052328a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1052328a8; end: 1052328af; -[SCSpectaclesDeviceFeatureCatalogImpl deviceReportIssueManager] */

undefined8 FUN_1052328a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1052328b0; end: 1052328b7; -[SCSpectaclesDeviceFeatureCatalogImpl kioskModeManager] */

undefined8 FUN_1052328b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1052328b8; end: 1052328bf; -[SCSpectaclesDeviceFeatureCatalogImpl developerModeManager] */

undefined8 FUN_1052328b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1052328c0; end: 1052328c7; -[SCSpectaclesDeviceFeatureCatalogImpl deviceActionManager] */

undefined8 FUN_1052328c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1052328c8; end: 1052328cf; -[SCSpectaclesDeviceFeatureCatalogImpl quickPreviewManager] */

undefined8 FUN_1052328c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1052328d0; end: 1052328d7; -[SCSpectaclesDeviceFeatureCatalogImpl locationSettingsManager] */

undefined8 FUN_1052328d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1052328d8; end: 1052328df; -[SCSpectaclesDeviceFeatureCatalogImpl lostModeManager] */

undefined8 FUN_1052328d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1052328e0; end: 1052328e7; -[SCSpectaclesDeviceFeatureCatalogImpl phoneMirroringManager] */

undefined8 FUN_1052328e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1052328e8; end: 1052328ef; -[SCSpectaclesDeviceFeatureCatalogImpl tomaRPCManager] */

undefined8 FUN_1052328e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1052328f0; end: 1052328f7; -[SCSpectaclesDeviceFeatureCatalogImpl flightImuCalibrationRPCManager] */

undefined8 FUN_1052328f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1052328f8; end: 1052328ff; -[SCSpectaclesDeviceFeatureCatalogImpl brieRPCManager] */

undefined8 FUN_1052328f8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105232900; end: 105232907; -[SCSpectaclesDeviceFeatureCatalogImpl flightErrorReporter] */

undefined8 FUN_105232900(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105232908; end: 10523290f; -[SCSpectaclesDeviceFeatureCatalogImpl contextNotificationLauncher] */

undefined8 FUN_105232908(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 105232910; end: 105232a6b; -[SCSpectaclesDeviceFeatureCatalogImpl .cxx_destruct] */

void FUN_105232910(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105232a6c; end: 105232aef; -[SCSpectaclesDeviceFeatureLauncherImpl initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105232a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e70c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112720214;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105232af0; end: 105232aff; -[SCSpectaclesDeviceFeatureLauncherImpl exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105232af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112720214),PTR_s_exposeScope__1125c4f30);
  return;
}


