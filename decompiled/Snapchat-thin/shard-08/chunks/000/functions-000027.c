/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c28b04; end: 105c28b4b; -[SCPreviewSendToConfigurationAdaptor _previewConfiguration:] */

void FUN_105c28b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c112440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108eed9fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c28b4c; end: 105c28ba3; -[SCPreviewSendToConfigurationAdaptor _initializeConfigs] */

void FUN_105c28b4c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 8);
  func_0x000108423a60();
  *(undefined1 *)(param_1 + 0x22) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07f160();
  *(char *)(param_1 + 0x21) = (char)uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea1cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAllowPostingToMapStoriesWith_1125860d0,0,0);
  return;
}



/* Entry: 105c28ba4; end: 105c28c3f; -[SCPreviewSendToConfigurationAdaptor _setAllowPostingToMapStoriesWithIncludesUserMentions:snapCaptureLocation:] */

void FUN_105c28ba4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x20) = 1;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c243400();
  if (lVar2 == 6) {
LAB_105c28bf0:
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0x21);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c243400();
    if (lVar2 == 7) goto LAB_105c28bf0;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010bf2d120();
  if (((param_3 & 1) != 0) || (iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (param_4 != 0) {
    uVar3 = param_4;
    func_0x00010bf51c80();
    _CLLocationCoordinate2DIsValid();
    if ((uVar3 & 1) != 0) goto LAB_105c28c2c;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
LAB_105c28c2c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c28c40; end: 105c28d7f; -[SCPreviewSendToConfigurationAdaptor _preselectionItemsFromReplyParameters:storyConfiguration:] */

void FUN_105c28c40(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar3 = param_3;
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c077de0();
  uVar3 = param_3;
  func_0x00010befc200();
  if (((uVar3 & 1) == 0) && (uVar3 = param_3, func_0x00010befc240(), (uVar3 & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 == 0) && (uVar4 = param_3, func_0x00010c077e60(), (int)uVar4 == 0)) {
      uVar3 = param_3;
      func_0x00010befc300();
      if ((((!bVar1 && (uVar2 & 1) == 0) && ((uVar3 & 1) == 0)) &&
          (uVar2 = param_3, func_0x00010c0780a0(), (uVar2 & 1) == 0)) &&
         (uVar2 = param_3, func_0x00010c0729c0(), puVar5 = PTR____NSArray0__struct_11034ab48,
         (int)uVar2 == 0)) goto LAB_105c28d20;
    }
    else {
      _objc_release(uVar3);
    }
  }
  puVar5 = *(undefined **)(param_1 + 0x30);
  func_0x00010c15a7e0(puVar5,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_105c28d20:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c28d80; end: 105c28e03; -[SCPreviewSendToConfigurationAdaptor .cxx_destruct] */

void FUN_105c28d80(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c28e04; end: 105c28e0f; +[SCPreviewStepProcessor announcerIdentifier] */

undefined ** FUN_105c28e04(void)

{
  return &PTR____CFConstantStringClassReference_110e22e18;
}



/* Entry: 105c28e10; end: 105c2936b; -[SCPreviewStepProcessor initWithSendFlowScope:userSession:appLifecycleEvent:userLocationServices:previewScopeExposer:previewScopeBuilderServices:storyQuickPostScopeExposer:userInfoServices:sendToSelectionItemAdaptor:circumstanceEngine:storiesLegacySnapInfoCollector:mapStoryPostingComplianceChecker:sendToFeedLogger:] */

undefined8 *
FUN_105c28e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126ec660;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    *(undefined2 *)(puVar1 + 10) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010bea12e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar5 = puVar1[2];
    func_0x00010bf79200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105c2936c;
    puStack_a0 = &UNK_1108a9250;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar2 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar2 = puVar1[0x16];
    func_0x00010c110980();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae720;
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105c29398;
    puStack_f0 = &UNK_1108dde98;
    _objc_copyWeak(auStack_c0,auStack_90);
    _objc_retain(uVar2);
    uStack_e8 = uVar2;
    _objc_retain(param_4);
    uStack_e0 = param_4;
    _objc_retain(param_6);
    uStack_d8 = param_6;
    _objc_retain(param_10);
    uStack_d0 = param_10;
    _objc_retain(param_14);
    uStack_c8 = param_14;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x19];
    puVar1[0x19] = puVar6;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_110,auStack_90);
    _objc_retain(param_13);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar5);
    _objc_release(param_13);
    _objc_destroyWeak(auStack_110);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 105c2936c; end: 105c2940b;  */

void FUN_105c2936c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c2940c; end: 105c294a7;  */

void FUN_105c2940c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b02d0;
    _objc_opt_new(PTR_PTR_1126b02d0);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(puVar4,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c294a8; end: 105c2962f; -[SCPreviewStepProcessor processStep:uiContainer:] */

void FUN_105c294a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27be60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c29630; end: 105c29687;  */

void FUN_105c29630(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c29688; end: 105c2973b; -[SCPreviewStepProcessor processStepBack:] */

void FUN_105c29688(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126c3400;
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c15d120(param_3);
  _objc_release(param_3);
  func_0x00010bf75160(puVar4,param_2,uVar2,uVar3 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2973c; end: 105c29823; -[SCPreviewStepProcessor _sendflowPreviewConfig] */

void FUN_105c2973c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105c29824;
  uStack_30 = 0x105c29834;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0220();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c29824; end: 105c2983b;  */

void FUN_105c29824(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c2983c; end: 105c29873;  */

void FUN_105c2983c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c29874; end: 105c29a7f; -[SCPreviewStepProcessor _onTriggerEvent:metadataHandler:resultSubject:uiContainer:] */

void FUN_105c29874(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c0f1e60();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010c27c360();
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        *(undefined2 *)(param_1 + 0x50) = 0x100;
        func_0x00010c1e10a0(param_6,param_2,0);
        func_0x00010be47f80(param_1,param_2,param_4,param_5,param_6);
      }
      else if (lVar1 == 1) {
        func_0x00010c1e10a0(param_6,param_2,1);
        lVar1 = param_1;
        func_0x00010be47f80(param_1,param_2,param_4,param_5,param_6);
        if ((int)lVar1 != 0) {
          func_0x00010c10ebc0(param_6);
        }
        *(undefined2 *)(param_1 + 0x50) = 0x101;
      }
    }
    else {
      if (lVar1 == 2) {
        func_0x00010be80060(param_1,param_2,param_4);
        func_0x00010c128720(param_6);
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_105c29a80;
        puStack_60 = &UNK_110848ba8;
        lStack_58 = param_1;
        _objc_retain(param_4);
        uStack_50 = param_4;
        _objc_retain(param_5);
        uStack_48 = param_5;
        func_0x00010bdfd280(param_1,param_2,&puStack_78);
        _objc_release(uStack_48);
        uVar2 = uStack_50;
      }
      else {
        if (lVar1 != 3) goto LAB_105c29a48;
        func_0x00010be80060(param_1,param_2,param_4);
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        uStack_a0 = 0x105c29a90;
        puStack_98 = &UNK_110848ba8;
        lStack_90 = param_1;
        _objc_retain(param_4);
        uStack_88 = param_4;
        _objc_retain(param_5);
        uStack_80 = param_5;
        func_0x00010bdfb740(param_1,param_2,&puStack_b0);
        _objc_release(uStack_80);
        uVar2 = uStack_88;
      }
      _objc_release(uVar2);
    }
  }
LAB_105c29a48:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c29a80; end: 105c29a9f;  */

void FUN_105c29a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__previewDidReleaseForSend_result_11257d8d0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105c29aa0; end: 105c29dfb; -[SCPreviewStepProcessor _launchPreview:resultSubject:uiContainer:] */

bool FUN_105c29aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    func_0x00010c110980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      _objc_retain(param_5);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = param_5;
      _objc_release(uVar4);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c2407e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c110980();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247520(*(undefined8 *)(param_1 + 8));
      func_0x00010be7fec0();
      uVar7 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c2bd480();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010bf2a360();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c229000();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c178f20();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010bf168e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0a5040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_initWeak(auStack_70,param_1);
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_4);
      _objc_retain(param_3);
      puVar13 = puVar3;
      func_0x00010c25ff60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(puVar13);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20));
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined **)(param_1 + 0xb8) = puVar3;
      _objc_retain(puVar3);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_release(uVar14);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 105c29dfc; end: 105c29e4f;  */

void FUN_105c29dfc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c29e50; end: 105c2a0a7; -[SCPreviewStepProcessor _onNextEvent:resultSubject:metadataHandler:] */

void FUN_105c29e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105c2a0a8;
  puStack_70 = &UNK_1108ddf58;
  uStack_68 = param_1;
  _objc_retain(param_5);
  uStack_60 = param_5;
  _objc_retain(param_4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105c2a1b0;
  puStack_a8 = &UNK_1108ddf88;
  uStack_58 = param_4;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  uStack_98 = param_1;
  _objc_retain(param_4);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105c2a2dc;
  puStack_d0 = &UNK_1108ddfb8;
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x105c2a2fc;
  puStack_100 = &UNK_1108ddfe8;
  uStack_f8 = param_1;
  uStack_c8 = param_1;
  uStack_90 = param_4;
  _objc_retain(param_5);
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x105c2a31c;
  puStack_138 = &UNK_1108de018;
  uStack_130 = param_1;
  uStack_f0 = param_5;
  _objc_retain(param_5);
  uStack_128 = param_5;
  _objc_retain(param_4);
  puStack_188 = puVar1;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_105c2a330;
  puStack_170 = &UNK_1108de048;
  uStack_168 = param_1;
  uStack_120 = param_4;
  _objc_retain(param_4);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_105c2a400;
  puStack_1a0 = &UNK_110841f80;
  puStack_1e0 = puVar1;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x105c2a444;
  puStack_1c8 = &UNK_1108de078;
  uStack_1c0 = param_1;
  uStack_198 = param_1;
  uStack_190 = param_4;
  uStack_160 = param_4;
  uStack_158 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0bd580(param_3,param_2,&puStack_88,&puStack_c0,&puStack_e8,&puStack_118,&puStack_150,
                      &puStack_188,&puStack_1b8,&puStack_1e0);
  _objc_release(uStack_190);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_f0);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105c2a0a8; end: 105c2a1af;  */

void FUN_105c2a0a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  func_0x00010be68d00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c2a1b0; end: 105c2a2db;  */

void FUN_105c2a1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c1c4a80(uVar3);
  func_0x00010c1a15c0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20));
  lVar1 = *(long *)(*(long *)(param_5 + 0x28) + 8);
  func_0x00010c247520();
  if (lVar1 == 0xb) {
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x28) + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47400();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  uVar2 = param_6;
  func_0x00010bfb1920(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be68d40(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105c2a2dc; end: 105c2a32f;  */

void FUN_105c2a2dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onPreloadQuickPost_uiContainer__112578508,
             param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 105c2a330; end: 105c2a3ff;  */

void FUN_105c2a330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  ulong uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_9 != 0) {
    uVar1 = *(ulong *)(*(long *)(param_5 + 0x20) + 0x78);
    func_0x0001084236ec();
    if ((uVar1 & 1) == 0) {
      func_0x00010be68ba0(*(undefined8 *)(param_5 + 0x20));
      goto LAB_105c2a3d0;
    }
  }
  func_0x00010be68d80(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20));
LAB_105c2a3d0:
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105c2a400; end: 105c2a47b;  */

void FUN_105c2a400(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e6e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be68bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onDidCancelWithResultSubject__112577c88,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c2a47c; end: 105c2a563; -[SCPreviewStepProcessor _onDidFinishLoading:previewSendToParams:resultSubject:uiContainer:] */

void FUN_105c2a47c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0xb0);
  func_0x00010c110980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ba00();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bea7540(param_1,param_2,param_3,param_4);
    puVar3 = PTR_PTR_1126c3408;
    func_0x00010c108960(PTR_PTR_1126c3408,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c2a564; end: 105c2a62f; -[SCPreviewStepProcessor _onDidPresentSendTo:previewSendToParams:resultSubject:uiContainer:thumbnailMedia:] */

void FUN_105c2a564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bee20a0(param_1,param_2,param_7);
  func_0x00010bea7540(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126c3408;
  func_0x00010c0d1880(PTR_PTR_1126c3408,param_2,param_6,*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c0d9840(param_5,param_2,puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c2a630; end: 105c2a63f; -[SCPreviewStepProcessor _onPreloadQuickPost:uiContainer:topicsCollection:delegate:dataSource:isMusicSnap:] */

void FUN_105c2a630(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be48690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchStoryQuickPostWithViewCon_11256fb40);
  return;
}



/* Entry: 105c2a640; end: 105c2a737; -[SCPreviewStepProcessor _launchStoryQuickPostWithViewController:uiContainer:topicsCollection:delegate:dataSource:isMusicSnap:] */

undefined8
FUN_105c2a640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c3410;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c110980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c242400();
  func_0x00010c057260(puVar1,param_2,param_4,uVar4,param_6,param_7,uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar3);
  _objc_release(param_4);
  return 0;
}



/* Entry: 105c2a738; end: 105c2a867; -[SCPreviewStepProcessor _onDidPressQuickPost:fromMemories:infoStickerFeature:metadataHandler:ephemeralMediaList:fullMediaContentBounds:isMusicSnap:] */

void FUN_105c2a738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c1c4a80(param_10,param_6,param_11);
  func_0x00010c1a15c0(param_1,param_2,param_3,param_4,param_10);
  _objc_release(param_10);
  lVar1 = param_5;
  func_0x00010be05160(param_5,param_6,param_9);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_5;
    func_0x00010be05140(param_5,param_6,lVar1,param_9);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_5 + 0xd0);
  puVar2 = PTR_PTR_1126c3418;
  func_0x00010bf78a00(PTR_PTR_1126c3418,param_6,param_7,(param_8 & 0xffffffff) - 1,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_6,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 105c2a868; end: 105c2a923; -[SCPreviewStepProcessor _displayingConfidentalFeatureName:] */

undefined ** FUN_105c2a868(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0xb0);
  func_0x00010c110980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar5 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  uVar4 = uVar5;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c070700();
  _objc_release(uVar5);
  _objc_release(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22e38;
  if ((int)uVar2 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 105c2a924; end: 105c2a953; -[SCPreviewStepProcessor _displayingConfidentalFeatureDescriptionWithFeatureName:infoStickerFeature:] */

void FUN_105c2a924(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e22e58);
  return;
}



/* Entry: 105c2a954; end: 105c2a9cb; -[SCPreviewStepProcessor _onSendFromQuickPost:metadataHandler:resultSubject:] */

void FUN_105c2a954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  func_0x00010c1fcaa0(param_4,param_2,param_3);
  puVar1 = PTR_PTR_1126c3408;
  func_0x00010bfafec0(PTR_PTR_1126c3408,param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_5,param_2,puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c2a9cc; end: 105c2abcb; -[SCPreviewStepProcessor _onDidPressSend:metadataHandler:selectionItems:selectedTopics:fullMediaContentBounds:resultSubject:] */

void FUN_105c2a9cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar3);
  uVar4 = param_4;
  func_0x00010c15db60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22dd20();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar3);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c15db80(uVar4,param_2,param_5,PTR____NSArray0__struct_11034ab48,0,puVar1,param_6,0,0,0
                      ,0,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c2abcc; end: 105c2ac37;  */

void FUN_105c2abcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c1fcaa0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  func_0x00010c1c4a80(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a15c0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126c3408;
  func_0x00010bfafec0(PTR_PTR_1126c3408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c2ac38; end: 105c2acff; -[SCPreviewStepProcessor _onDidCancelWithResultSubject:] */

void FUN_105c2ac38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105c2acbc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bdfb740(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c2ad00; end: 105c2ad0f; -[SCPreviewStepProcessor _updateThumbnailMedia:] */

void FUN_105c2ad00(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xc0),PTR_s_next__112614028);
    return;
  }
  return;
}



/* Entry: 105c2ad10; end: 105c2b03f; -[SCPreviewStepProcessor _setSendToConfiguration:previewSendToParams:] */

void FUN_105c2ad10(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c15d060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c15d060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar4);
    lVar2 = lVar4;
  }
  puVar5 = *(undefined **)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c15dfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  if (puVar7 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
LAB_105c2ae90:
    lVar3 = lVar1;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar9 != 0) {
      puVar7 = PTR_PTR_1126c33e8;
      _objc_alloc();
      lVar3 = lVar1;
      func_0x00010c1599e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c15cf20(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010c122ae0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010c259540(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c1109c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar6;
      func_0x00010c22aec0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010bf4c100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043c20(puVar7);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar3);
      goto LAB_105c2afe0;
    }
  }
  else {
    puVar7 = puVar6;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x000100817178();
    _objc_release(puVar7);
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (puVar7 = puVar5, func_0x00010c072060(), ((ulong)puVar7 & 1) != 0)) goto LAB_105c2ae90;
    _objc_retain(puVar5);
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar5;
    _objc_release(uVar8);
  }
  _objc_retain(puVar6);
  puVar7 = puVar6;
LAB_105c2afe0:
  func_0x00010c1fc460(param_3);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c2b040; end: 105c2b087;  */

void FUN_105c2b040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c2b088; end: 105c2b10b; -[SCPreviewStepProcessor _detachUIAndReleaseWithCompletion:] */

void FUN_105c2b088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c2b10c;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bddfaa0(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c2b10c; end: 105c2b117;  */

void FUN_105c2b10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanupPreviewWithCompletion__1125557f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c2b118; end: 105c2b1e7; -[SCPreviewStepProcessor _cleanupStoryQuickPostIfNeededWithCompletion:] */

void FUN_105c2b118(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_105c2b1e8;
      puStack_48 = &UNK_11084aaa8;
      lStack_40 = param_1;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010bf6f440(lVar1,param_2,&puStack_60);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release(uVar2);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c2b1e8; end: 105c2b1f3;  */

void FUN_105c2b1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dismissStoryQuickPostScopeWithC_11255e760,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c2b1f4; end: 105c2b2b7; -[SCPreviewStepProcessor _dismissStoryQuickPostScopeWithCompletion:] */

void FUN_105c2b1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c2b2b8;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c2a4ae0(uVar2,param_2,&puStack_58);
    _objc_release(uVar2);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c2b2b8; end: 105c2b2c3;  */

void FUN_105c2b2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c2b2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c2b2c4; end: 105c2b367; -[SCPreviewStepProcessor _cleanupPreviewWithCompletion:] */

void FUN_105c2b2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105c2b368;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bf6f460(lVar2,param_2,&puStack_60);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c2b368; end: 105c2b373;  */

void FUN_105c2b368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDetachUIWithCompletion__11255ce40,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c2b374; end: 105c2b44b; -[SCPreviewStepProcessor _didDetachUIWithCompletion:] */

void FUN_105c2b374(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  *(undefined2 *)(param_1 + 0x50) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c2b44c;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c2a4ae0(uVar2,param_2,&puStack_58);
    _objc_release(uVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c2b44c; end: 105c2b457;  */

void FUN_105c2b44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c2b454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c2b458; end: 105c2b45b; -[SCPreviewStepProcessor _didReceiveMemoryWarning] */

void FUN_105c2b458(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupPreloadedPreviewScope_1125557f0);
  return;
}



/* Entry: 105c2b45c; end: 105c2b4cf; -[SCPreviewStepProcessor _cleanupPreloadedPreviewScope] */

void FUN_105c2b45c(long param_1)

{
  long lVar1;
  
  if (((*(char *)(param_1 + 0xa0) == '\x01') && (*(char *)(param_1 + 0x51) == '\x01')) &&
     ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    func_0x00010c128720(*(undefined8 *)(param_1 + 0x38));
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  return;
}



/* Entry: 105c2b4d0; end: 105c2b6a3; -[SCPreviewStepProcessor _previewWillReleaseForSend:] */

void FUN_105c2b4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010c15db60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c15db60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_3;
  func_0x00010c15db60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf24f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  func_0x00010bfd0460(uVar9,param_2,uVar1,uVar3,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfca5c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f520(param_3,param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010c0afc20(*(undefined8 *)(param_1 + 0x60));
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = param_3;
  func_0x00010c15db60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c06fac0(param_3);
  _objc_release(param_3);
  func_0x00010c0a5100(uVar8,param_2,uVar7,uVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar7,param_2,&PTR____CFConstantStringClassReference_110ed2998,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105c2b6a4; end: 105c2b8cb; -[SCPreviewStepProcessor _previewDidReleaseForSend:resultSubject:] */

void FUN_105c2b6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (*(long *)(param_5 + 0x90) == 0) {
    puVar5 = PTR_PTR_1126c3408;
    func_0x00010c1287e0(PTR_PTR_1126c3408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_8);
  }
  else {
    puVar5 = param_7;
    func_0x00010c15db60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = param_7;
      func_0x00010c15db60(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c122f00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x000100504554();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    uVar6 = *(undefined8 *)(param_5 + 0x90);
    puVar1 = param_7;
    func_0x00010c15db60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_7;
    func_0x00010c15db60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bfbb9e0(param_7);
    _objc_retain(param_8);
    func_0x00010bfd2460(param_1,param_2,param_3,param_4,uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_8);
  }
  _objc_release(puVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105c2b8cc; end: 105c2b8d3;  */

void FUN_105c2b8cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105c2b8d4; end: 105c2b917;  */

void FUN_105c2b8d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c3408;
  func_0x00010c1287e0(PTR_PTR_1126c3408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c2b918; end: 105c2b937; -[SCPreviewStepProcessor _previewSourceFromSendFlowSource:] */

undefined1 FUN_105c2b918(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xd) {
    return (&UNK_10ddcb550)[param_3];
  }
  return 0;
}



/* Entry: 105c2b938; end: 105c2b93f; -[SCPreviewStepProcessor sendflowPreviewConfig] */

undefined8 FUN_105c2b938(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105c2b940; end: 105c2b96f; -[SCPreviewStepProcessor setSendflowPreviewConfig:] */

void FUN_105c2b940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2b970; end: 105c2b977; -[SCPreviewStepProcessor eventSubject] */

undefined8 FUN_105c2b970(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105c2b978; end: 105c2b9a7; -[SCPreviewStepProcessor setEventSubject:] */

void FUN_105c2b978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2b9a8; end: 105c2b9af; -[SCPreviewStepProcessor thumbnailMediaSubject] */

undefined8 FUN_105c2b9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105c2b9b0; end: 105c2b9df; -[SCPreviewStepProcessor setThumbnailMediaSubject:] */

void FUN_105c2b9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2b9e0; end: 105c2b9e7; -[SCPreviewStepProcessor configurationAdaptor] */

undefined8 FUN_105c2b9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105c2b9e8; end: 105c2ba17; -[SCPreviewStepProcessor setConfigurationAdaptor:] */

void FUN_105c2b9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2ba18; end: 105c2ba1f; -[SCPreviewStepProcessor quickPostEventSubject] */

undefined8 FUN_105c2ba18(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105c2ba20; end: 105c2ba4f; -[SCPreviewStepProcessor setQuickPostEventSubject:] */

void FUN_105c2ba20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2ba50; end: 105c2ba57; -[SCPreviewStepProcessor mediaHandler] */

undefined8 FUN_105c2ba50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105c2ba58; end: 105c2ba87; -[SCPreviewStepProcessor setMediaHandler:] */

void FUN_105c2ba58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c2ba88; end: 105c2bbbf; -[SCPreviewStepProcessor .cxx_destruct] */

void FUN_105c2ba88(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105c2bbc0; end: 105c2be33; -[SCSendToStepProcessor initWithSendFlowScope:sendToScopeLauncher:sendToScopeServices:sendToSelectionItemAdaptor:startupInfoService:appStartExperimentReader:promoteSnapService:] */

undefined8 *
FUN_105c2bbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126ec668;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010bf45e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0c0220(uVar2);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(param_8);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c2be34; end: 105c2be73;  */

void FUN_105c2be34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e22e78,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 105c2be74; end: 105c2be83;  */

void FUN_105c2be74(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x60) = 1;
  return;
}



/* Entry: 105c2be84; end: 105c2bef7;  */

void FUN_105c2be84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c2bef8; end: 105c2bf4b; -[SCSendToStepProcessor dealloc] */

void FUN_105c2bef8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ec668;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c2bf4c; end: 105c2bfd7; -[SCSendToStepProcessor processStep:uiContainer:] */

void FUN_105c2bf4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  func_0x00010be66fc0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c2bfd8; end: 105c2c313; -[SCSendToStepProcessor didSendWithSelectionState:] */

void FUN_105c2bfd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = param_3;
    func_0x00010c1599e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be9e200();
    _objc_release(uVar1);
    if ((int)lVar2 == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      uVar1 = param_3;
      func_0x00010c272d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_initWeak(auStack_70,param_1);
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = param_3;
      func_0x00010c1599e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c159d20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010befd440();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0d9720();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c15a280();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c24b0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010c24b0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010c24b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22eae0();
      uVar11 = param_3;
      func_0x00010c22a7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c15a0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_3;
      func_0x00010bfcd340();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_3;
      func_0x00010c24c6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_70);
      func_0x00010c15db80(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    else {
      func_0x00010be48560(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c2c314; end: 105c2c35b;  */

void FUN_105c2c314(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c2c35c; end: 105c2c56b; -[SCSendToStepProcessor didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_105c2c35c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bea09e0(param_1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c33e8;
  _objc_alloc(PTR_PTR_1126c33e8);
  lVar3 = lVar1;
  func_0x00010c15cf20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c122ae0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c259540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c1109c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c22aec0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf4c100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043c20(puVar2,param_2,param_3,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1fc460(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
  func_0x00010c1fc4e0(*(undefined8 *)(param_1 + 0x28),param_2,param_4 == 1);
  *(undefined1 *)(param_1 + 0x41) = 0;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    puVar9 = PTR_PTR_1126c3408;
    func_0x00010c0d1360(PTR_PTR_1126c3408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar10,param_2,puVar9);
  }
  else {
    lVar3 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c128720();
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126c3408;
    func_0x00010c0d1360(PTR_PTR_1126c3408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfd320(param_1,param_2,puVar9);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c2c56c; end: 105c2c5c3; -[SCSendToStepProcessor _sendToConfig:] */

void FUN_105c2c56c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c15d060();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + 0x68);
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c2c5c4; end: 105c2c73f; -[SCSendToStepProcessor _observeTriggerEventsWithMetadataHandler:uiContainer:] */

void FUN_105c2c5c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x38) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27be60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c2c740; end: 105c2c793;  */

void FUN_105c2c740(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c1a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c2c794; end: 105c2c8e3; -[SCSendToStepProcessor _onTriggerEvent:metadataHandler:uiContainer:] */

void FUN_105c2c794(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0f1e60();
  if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010c27c360();
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        *(undefined1 *)(param_1 + 0x41) = 0;
        func_0x00010be77ae0(param_1);
      }
      else if (lVar1 == 1) {
        *(undefined1 *)(param_1 + 0x40) = 0;
        if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
          func_0x00010c1e10a0(param_5);
          func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x78));
          lVar1 = param_1;
          func_0x00010be48400();
          if ((int)lVar1 != 0) {
            func_0x00010c10ebc0(param_5);
          }
          *(undefined1 *)(param_1 + 0x41) = 1;
          _objc_storeWeak(param_1 + 0x70,param_5);
        }
      }
    }
    else if (lVar1 == 2) {
      func_0x00010c128720(param_5);
      puVar2 = PTR_PTR_1126c3408;
      func_0x00010c1287e0(PTR_PTR_1126c3408);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfd320(param_1);
      _objc_release(puVar2);
    }
    else if (lVar1 == 3) {
      func_0x00010bdfb760(param_1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c2c8e4; end: 105c2caf3; -[SCSendToStepProcessor _preloadSendToWithMetadataHandler:uiContainer:] */

void FUN_105c2c8e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1e10a0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  iVar7 = (int)uVar6;
  if (iVar7 != 3) {
    if (iVar7 == 2) {
      iVar7 = (int)*(undefined8 *)(param_1 + 0x50);
      func_0x00010c07f880();
      if (iVar7 == 0) goto LAB_105c2caa4;
    }
    else if (iVar7 == 1) {
      _objc_initWeak(auStack_58,param_1);
      puVar5 = PTR_PTR_1126aeec0;
      puVar3 = PTR_PTR_1126ae960;
      puVar2 = PTR_PTR_1126c0a68;
      func_0x00010c15d3a0(PTR_PTR_1126c0a68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22c560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae970;
      func_0x00010bfe2ec0(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010bf0caa0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      *(undefined **)(param_1 + 0x78) = puVar5;
      _objc_release(uVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_105c2caa4;
    }
    func_0x00010be48400(param_1);
  }
LAB_105c2caa4:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c2caf4; end: 105c2cb2f;  */

void FUN_105c2caf4(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c2cb30; end: 105c2ceaf; -[SCSendToStepProcessor _hasSendToConfigChanged:sendToScope:] */

uint FUN_105c2cb30(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c15d060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0782e0();
  lVar4 = param_4;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0782e0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15d060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c06c8e0();
  lVar6 = param_4;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c06c8e0();
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c1109c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c15cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c22f9a0();
  lVar10 = param_4;
  func_0x00010bf0e960(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c22f9a0();
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf013a0();
  lVar12 = param_4;
  func_0x00010c259540(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf013a0();
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010c07de40();
  lVar14 = param_4;
  func_0x00010c259540(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c07de40();
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_4;
  func_0x00010c22aec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15d060(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar16 = lVar1;
  func_0x00010c259540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c07a240();
  lVar18 = param_4;
  func_0x00010c259540(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar19 = lVar18;
  func_0x00010c07a240(lVar18);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar1);
  return ((uint)lVar3 ^ (uint)lVar5 | (uint)lVar4 ^ (uint)lVar7 |
          (uint)(lVar2 != lVar6) | (uint)lVar9 ^ (uint)lVar11 |
          (uint)lVar10 ^ (uint)lVar13 | (uint)lVar12 ^ (uint)lVar15 | (uint)(lVar8 != lVar14) |
         (uint)lVar17 ^ (uint)lVar19) & 1;
}



/* Entry: 105c2ceb0; end: 105c2d2f7; -[SCSendToStepProcessor _launchSendTo:uiContainer:] */

uint FUN_105c2ceb0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be346c0();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar3 == 0) != 0 || ((ulong)puVar2 & 1) != 0) {
    puVar4 = param_1;
    func_0x00010bea09e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x10);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      _objc_release();
      if (lVar5 == 0) {
        func_0x00010be48420(param_1);
      }
      else {
        puVar9 = puVar4;
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar4);
          puVar7 = puVar4;
          func_0x00010c15cf20();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b0818;
          _objc_alloc();
          func_0x00010c243400();
          func_0x00010c0cba00();
          func_0x00010c0c6c20();
          func_0x00010c247a40();
          puVar9 = puVar7;
          func_0x00010bf31200();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          func_0x00010bf4f080();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar7;
          func_0x00010bf42660();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar7;
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar7;
          func_0x00010c094660();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c22f9a0();
          puVar14 = puVar7;
          func_0x00010c1298e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c044540();
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          puVar9 = PTR_PTR_1126c33e8;
          _objc_alloc();
          puVar10 = puVar4;
          func_0x00010c1599e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar4;
          func_0x00010c122ae0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar4;
          func_0x00010c259540();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar4;
          func_0x00010c1109c0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar4;
          func_0x00010c22aec0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar4;
          func_0x00010bf4c100();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          func_0x00010c043c20();
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar4);
          _objc_release(lVar6);
          func_0x00010c1fc460(param_3);
        }
        func_0x00010c128720(param_4);
        _objc_initWeak(auStack_70,param_1);
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        _objc_copyWeak(auStack_78,auStack_70);
        _objc_retain(puVar9);
        _objc_retain(param_4);
        func_0x00010bf94c40(uVar1);
        _objc_release(param_4);
        _objc_release(puVar9);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_70);
        puVar4 = puVar9;
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (((uint)(lVar3 == 0) | (uint)puVar2) ^ 0xffffffff) & 1;
}



/* Entry: 105c2d2f8; end: 105c2d32b;  */

void FUN_105c2d2f8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c2d32c; end: 105c2d4d7; -[SCSendToStepProcessor _launchSendToScope:uiContainer:] */

void FUN_105c2d32c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010c1599e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c1109c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4c100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c122ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c259540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c15cf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf23ee0(uVar8,param_2,param_4,uVar7,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15d7c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fc9c0(uVar8,param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,uVar8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105c2d4d8; end: 105c2d52f; -[SCSendToStepProcessor _detachUIAndReleaseWithUiContainer:] */

void FUN_105c2d4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105c2d530;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf6f460(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 105c2d530; end: 105c2d573;  */

void FUN_105c2d530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c3408;
  func_0x00010c1287e0(PTR_PTR_1126c3408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd320(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c2d574; end: 105c2d64b; -[SCSendToStepProcessor _didDetachUIWithStepResult:] */

void FUN_105c2d574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105c2d64c;
    puStack_48 = &UNK_110841f80;
    uStack_40 = uVar2;
    _objc_retain(param_3);
    uStack_38 = param_3;
    _objc_retain(uVar2);
    func_0x00010bf94c40(uVar3,param_2,&puStack_60);
    *(undefined1 *)(param_1 + 0x40) = 0;
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c2d64c; end: 105c2d657;  */

void FUN_105c2d64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c2d658; end: 105c2d6ab; -[SCSendToStepProcessor _sendFromSendTo:] */

void FUN_105c2d658(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c1fcaa0(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c3408;
  func_0x00010bfafec0(PTR_PTR_1126c3408,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c2d6ac; end: 105c2d837; -[SCSendToStepProcessor _selectionContainsPromote:] */

undefined * FUN_105c2d6ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110f52f18);
  dVar14 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  puVar9 = (undefined *)0x0;
  if (lVar10 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(ulong *)(lStack_128 + lVar12 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar4 & 1) != 0) {
          puVar9 = (undefined *)0x1;
          goto LAB_105c2d7e0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
      lVar10 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar10 != 0);
    puVar9 = (undefined *)0x0;
  }
LAB_105c2d7e0:
  _objc_release(param_3);
  _objc_release(&PTR____CFConstantStringClassReference_110f52f18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar9;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x58) != 0) {
    lVar11 = *(long *)(param_3 + 0x28);
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010bf529e0();
    _objc_release(lVar11);
    if (lVar10 != 0) {
      puVar5 = *(undefined **)(param_3 + 0x28);
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar9 == (undefined *)0x0) {
        uVar13 = *(undefined8 *)(param_3 + 0x20);
        puVar5 = PTR_PTR_1126c3408;
        func_0x00010c1287e0(PTR_PTR_1126c3408);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar13,param_2,puVar5);
      }
      else {
        puVar6 = puVar9;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010c0c4980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if (puVar5 == (undefined *)0x0) {
          uVar13 = *(undefined8 *)(param_3 + 0x20);
          puVar6 = PTR_PTR_1126c3408;
          func_0x00010c1287e0(PTR_PTR_1126c3408);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(uVar13,param_2,puVar6);
        }
        else {
          puVar7 = puVar9;
          func_0x00010c26e020();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar7;
          func_0x00010c0c4980();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = puVar9;
          func_0x00010c0830a0();
          func_0x00010c26f000(puVar9);
          dVar15 = 1000.0;
          dVar14 = dVar14 * 1000.0;
          lVar10 = (long)dVar14;
          if (((ulong)puVar7 & 1) == 0) {
            puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar5);
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 == (undefined *)0x0) {
              lVar12 = 0;
              lVar11 = 0;
            }
            else {
              func_0x00010c23d0a0(puVar8);
              lVar11 = (long)dVar14;
              func_0x00010c23d0a0(puVar8);
              lVar12 = (long)dVar15;
            }
            _objc_release(puVar8);
          }
          else {
            lVar12 = 0;
            lVar11 = 0;
          }
          uVar13 = *(undefined8 *)(param_3 + 0x58);
          if (puVar6 == (undefined *)0x0) {
            puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08b440(uVar13,param_2,puVar5,puVar8,puVar7,lVar10,lVar11,lVar12,
                                &PTR____CFConstantStringClassReference_110dba418);
            _objc_release(puVar8);
          }
          else {
            func_0x00010c08b440(uVar13,param_2,puVar5,puVar6,puVar7,lVar10,lVar11,lVar12,
                                &PTR____CFConstantStringClassReference_110dba418);
          }
          uVar13 = *(undefined8 *)(param_3 + 0x20);
          puVar7 = PTR_PTR_1126c3408;
          func_0x00010c1287e0(PTR_PTR_1126c3408);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(uVar13,param_2,puVar7);
          _objc_release(puVar7);
        }
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      goto LAB_105c2dae0;
    }
  }
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  puVar9 = PTR_PTR_1126c3408;
  func_0x00010c1287e0(PTR_PTR_1126c3408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar13,param_2,puVar9);
LAB_105c2dae0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return puVar9;
}



/* Entry: 105c2d838; end: 105c2db03; -[SCSendToStepProcessor _launchSnapPromoteFromSendFlow] */

void FUN_105c2d838(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar1 = *(long *)(param_2 + 0x28);
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar7 != 0) {
      puVar2 = *(undefined **)(param_2 + 0x28);
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar5 == (undefined *)0x0) {
        uVar9 = *(undefined8 *)(param_2 + 0x20);
        puVar2 = PTR_PTR_1126c3408;
        func_0x00010c1287e0(PTR_PTR_1126c3408);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar9,param_3,puVar2);
      }
      else {
        puVar3 = puVar5;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0c4980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (puVar2 == (undefined *)0x0) {
          uVar9 = *(undefined8 *)(param_2 + 0x20);
          puVar3 = PTR_PTR_1126c3408;
          func_0x00010c1287e0(PTR_PTR_1126c3408);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(uVar9,param_3,puVar3);
        }
        else {
          puVar4 = puVar5;
          func_0x00010c26e020();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010c0c4980();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar4 = puVar5;
          func_0x00010c0830a0();
          func_0x00010c26f000(puVar5);
          dVar10 = 1000.0;
          param_1 = param_1 * 1000.0;
          lVar7 = (long)param_1;
          if (((ulong)puVar4 & 1) == 0) {
            puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,puVar2);
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 == (undefined *)0x0) {
              lVar8 = 0;
              lVar1 = 0;
            }
            else {
              func_0x00010c23d0a0(puVar6);
              lVar1 = (long)param_1;
              func_0x00010c23d0a0(puVar6);
              lVar8 = (long)dVar10;
            }
            _objc_release(puVar6);
          }
          else {
            lVar8 = 0;
            lVar1 = 0;
          }
          uVar9 = *(undefined8 *)(param_2 + 0x58);
          if (puVar3 == (undefined *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08b440(uVar9,param_3,puVar2,puVar6,puVar4,lVar7,lVar1,lVar8,
                                &PTR____CFConstantStringClassReference_110dba418);
            _objc_release(puVar6);
          }
          else {
            func_0x00010c08b440(uVar9,param_3,puVar2,puVar3,puVar4,lVar7,lVar1,lVar8,
                                &PTR____CFConstantStringClassReference_110dba418);
          }
          uVar9 = *(undefined8 *)(param_2 + 0x20);
          puVar4 = PTR_PTR_1126c3408;
          func_0x00010c1287e0(PTR_PTR_1126c3408);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(uVar9,param_3,puVar4);
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
      goto LAB_105c2dae0;
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  puVar5 = PTR_PTR_1126c3408;
  func_0x00010c1287e0(PTR_PTR_1126c3408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9,param_3,puVar5);
LAB_105c2dae0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105c2db04; end: 105c2dbbf; -[SCSendToStepProcessor .cxx_destruct] */

void FUN_105c2db04(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105c2dbc0; end: 105c2dc87; -[SCSettingsCPRAChoicesViewController initWithUIContainer:featureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c2dbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec670;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_1127328c0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127328c4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c2dc88; end: 105c2e09b; -[SCSettingsCPRAChoicesViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c2dc88(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ec670;
  plVar1 = &lStack_98;
  lStack_98 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_viewDidLoad_112684cd8);
  FUN_105c2fb84();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(lVar2);
  _objc_release(plVar1);
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_1127328c8;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar3;
  _objc_release(uVar17);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar3);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar18));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar13;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  ___stack_chk_fail();
  return 0x1d;
}



/* Entry: 105c2e09c; end: 105c2e0a3; -[SCSettingsCPRAChoicesViewController pageViewName] */

undefined8 FUN_105c2e09c(void)

{
  return 0x1d;
}



/* Entry: 105c2e0a4; end: 105c2e0b7; -[SCSettingsCPRAChoicesViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2e0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127328c0),PTR_s_detachUI__1125b96b8,0);
  return;
}


