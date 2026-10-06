/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d80fc8; end: 104d80fd7; -[SCFeatureRemixCamModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271266c),PTR_s_usageMetrics_112681948);
  return;
}



/* Entry: 104d80fd8; end: 104d80fe7; -[SCFeatureRemixCamModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271266c),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 104d80fe8; end: 104d810c3; -[SCFeatureRemixCamModeImpl _shouldObserveEventsForRemixNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104d80fe8(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if (*(long *)(param_1 + _DAT_112712664) == 0) {
    bVar1 = 0;
  }
  else {
    puStack_70 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104d810c4;
    puStack_50 = &UNK_110842b58;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x104d810d8;
    puStack_78 = &UNK_110842b88;
    puStack_48 = puStack_70;
    puStack_38 = puStack_70;
    func_0x00010c0be1c0(*(long *)(param_1 + _DAT_112712664),param_2,&puStack_68,&puStack_90,0);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  return bVar1 & 1;
}



/* Entry: 104d810c4; end: 104d810eb;  */

void FUN_104d810c4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104d810ec; end: 104d812eb; -[SCFeatureRemixCamModeImpl _beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d810ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010beb4a00();
  if ((int)lVar2 != 0) {
    func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112712674));
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104d812ec;
    puStack_88 = &UNK_11084ec30;
    _objc_copyWeak(auStack_80,auStack_78);
    ppuVar3 = &puStack_a0;
    _objc_retainBlock();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104d81318;
    puStack_b0 = &UNK_11084eba0;
    uVar4 = param_3;
    ppuStack_a8 = ppuVar3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104d81364;
    puStack_d8 = &UNK_11084ebd0;
    _objc_copyWeak(auStack_d0,auStack_78);
    ppuVar5 = &puStack_f0;
    _objc_retainBlock();
    uVar4 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_d0);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d812ec; end: 104d81317;  */

void FUN_104d812ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d81318; end: 104d81363;  */

void FUN_104d81318(long param_1,undefined8 param_2)

{
  func_0x00010c0bd6a0(param_2,param_2,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x20),0,0,0,0,0,0);
  return;
}



/* Entry: 104d81364; end: 104d8138f;  */

void FUN_104d81364(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d81390; end: 104d813a3;  */

void FUN_104d81390(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c17b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchWillCaptureImage_didCapture_11260e000,
             *(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 104d813a4; end: 104d8142b; -[SCFeatureRemixCamModeImpl _sendRemixNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d813a4(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_112712664) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_104d8142c;
    puStack_20 = &UNK_1108450c8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x104d81438;
    puStack_48 = &UNK_1108450f8;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010c0be1c0(*(long *)(param_1 + _DAT_112712664),param_2,&puStack_38,&puStack_60,0);
  }
  return;
}



/* Entry: 104d8142c; end: 104d81443;  */

void FUN_104d8142c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendRemixNotificationToGroupId__112585908,
             param_2);
  return;
}



/* Entry: 104d81444; end: 104d814b3; -[SCFeatureRemixCamModeImpl _sendRemixNotificationToGroupId:] */

void FUN_104d81444(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9fd60(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d814b4; end: 104d81523; -[SCFeatureRemixCamModeImpl _sendRemixNotificationToUserId:] */

void FUN_104d814b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b01c0;
    func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9fd60(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d81524; end: 104d816ab; -[SCFeatureRemixCamModeImpl _sendRemixNotificationForChatIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d81524(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  ppuVar1 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d816ac;
  puStack_68 = &UNK_110842c58;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712660);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  lVar6 = 0;
  func_0x0001000819a8(0x15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf504e0(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(lVar6);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 != 0) && (lVar5 = lVar6, func_0x00010bf529e0(), lVar5 != 0)) {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112712668);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bfb1920(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c680(uVar2);
    _objc_release(lVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 104d816ac; end: 104d8174f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d816ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112712668);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c680(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d81750; end: 104d8175f; -[SCFeatureRemixCamModeImpl layoutObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d81750(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712670);
}



/* Entry: 104d81760; end: 104d8176f; -[SCFeatureRemixCamModeImpl currentLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104d81760(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112712678);
}



/* Entry: 104d81770; end: 104d8177f; -[SCFeatureRemixCamModeImpl setCurrentLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d81770(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_112712678) = param_3;
  return;
}



/* Entry: 104d81780; end: 104d8189f; -[SCFeatureRemixCamModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d81780(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712674,0);
  _objc_storeStrong(param_1 + _DAT_112712650,0);
  _objc_storeStrong(param_1 + _DAT_11271268c,0);
  _objc_storeStrong(param_1 + _DAT_11271266c,0);
  _objc_storeStrong(param_1 + _DAT_11271267c,0);
  _objc_storeStrong(param_1 + _DAT_112712680,0);
  _objc_storeStrong(param_1 + _DAT_112712664,0);
  _objc_storeStrong(param_1 + _DAT_112712668,0);
  _objc_storeStrong(param_1 + _DAT_112712660,0);
  _objc_destroyWeak(param_1 + _DAT_112712684);
  _objc_destroyWeak(param_1 + _DAT_112712658);
  _objc_storeStrong(param_1 + _DAT_11271265c,0);
  _objc_storeStrong(param_1 + _DAT_112712654,0);
  _objc_storeStrong(param_1 + _DAT_112712670,0);
  _objc_storeStrong(param_1 + _DAT_112712648,0);
  _objc_destroyWeak(param_1 + _DAT_11271264c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712644);
  return;
}



/* Entry: 104d818a0; end: 104d81977; -[SCRemixCamModeCameraToolbarItem initWithPosition:] */

undefined1 * FUN_104d818a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e41b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithPosition__1125eb8f8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1cdb60(puVar1);
    func_0x00010c1fb140(puVar1);
    func_0x00010c160fc0(puVar1);
    func_0x00010c177460(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c1b6340(puVar1);
    FUN_104d82fc8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(puVar1);
    _objc_release(puVar2);
    FUN_104d82fc8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d81978; end: 104d81ad3; -[SCRemixCamModeUI initWithContainerView:cameraToolbar:valdiRuntimeProvider:camModeConfig:cameraTooltipsService:isDirectorMode:isModeReadyToEnable:isCutoutLayoutDisabled:toolbarIndexFeature:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104d81978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined1 param_9)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000010);
  puVar1 = auStack_68;
  _objc_loadWeakRetained(puVar1);
  puStack_70 = PTR_PTR_1126e41c0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithContainerView_cameraTool_1125de3d0,param_3,puVar1,param_5
                      ,param_6,param_7,param_8,param_9);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112712690;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(in_stack_00000010);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104d81ad4; end: 104d81af7; -[SCRemixCamModeUI createDualStreamCamModeToolbarItem] */

void FUN_104d81ad4(void)

{
  _objc_alloc(PTR_PTR_1126b01c8);
  func_0x00010c037be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d81af8; end: 104d81b7f; -[SCRemixCamModeUI createLayouts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_104d81af8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112712690);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if ((uVar1 == 0) || (func_0x00010c072800(), (uVar2 & 1) == 0)) {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e2e0;
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e2c8;
  }
  _objc_release(uVar1);
  return ppuVar4;
}



/* Entry: 104d81b80; end: 104d81b83; -[SCRemixCamModeUI createLayoutTitle] */

void FUN_104d81b80(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1a78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db1a78,
                      &PTR____CFConstantStringClassReference_110db1a98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104d81b84; end: 104d81b87; -[SCRemixCamModeUI onCameraModeLensInCarouselActivated] */

void FUN_104d81b84(void)

{
  return;
}



/* Entry: 104d81b88; end: 104d81b9b; -[SCRemixCamModeUI .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d81b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712690,0);
  return;
}



/* Entry: 104d81b9c; end: 104d81fb7; -[SCCameraRemixCameraFeatureProviderPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d81b9c(long param_1,undefined8 param_2)

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
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR_PTR_1126b01d0;
  _objc_alloc();
  if (param_1 == 0) {
    uStack_90 = 0;
  }
  else {
    uStack_90 = param_1 + _DAT_1127126a0;
    _objc_loadWeakRetained();
  }
  lVar2 = param_1;
  FUN_104d81fb8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x000104d81fdc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa2fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127126a8;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar15;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_b0 = 0;
    lVar16 = 0;
  }
  else {
    uStack_88 = param_1 + _DAT_1127126bc;
    _objc_loadWeakRetained();
    uStack_b0 = param_1 + _DAT_1127126ac;
    _objc_loadWeakRetained();
    uStack_98 = param_1 + _DAT_1127126c0;
    _objc_loadWeakRetained();
    lVar16 = param_1 + _DAT_1127126c8;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar16;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127126b0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar17;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127126c4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar18;
  func_0x00010c08eca0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_104d81fb8();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf296c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
    lVar19 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_1127126b4;
    _objc_loadWeakRetained();
    lVar19 = param_1 + _DAT_1127126b8;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar19;
  func_0x00010c096200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127126d0;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar20;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11271269c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar21;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_1127126d4;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar24;
  func_0x00010c253440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbd20(puVar1,param_2,uStack_90,lVar2,lVar4,lVar5,uStack_88,uStack_b0,uStack_98,lVar6
                      ,lVar7,lVar8,lVar10,lVar23,lVar11,lVar12,lVar13,lVar14);
  uVar22 = *(undefined8 *)(param_1 + _DAT_112712694);
  *(undefined **)(param_1 + _DAT_112712694) = puVar1;
  _objc_release(uVar22);
  _objc_release(lVar14);
  _objc_release(lVar24);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar12);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar23);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(uStack_98);
  _objc_release(uStack_b0);
  _objc_release(uStack_88);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uStack_90);
  func_0x000104d81fdc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d81fb8; end: 104d81fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d81fb8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127126a4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d82000; end: 104d820ef; -[SCCameraRemixCameraFeatureProviderPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d82000(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127126d4);
  _objc_destroyWeak(param_1 + _DAT_1127126d0);
  _objc_destroyWeak(param_1 + _DAT_1127126cc);
  _objc_destroyWeak(param_1 + _DAT_1127126c8);
  _objc_destroyWeak(param_1 + _DAT_1127126c4);
  _objc_destroyWeak(param_1 + _DAT_1127126c0);
  _objc_destroyWeak(param_1 + _DAT_1127126bc);
  _objc_destroyWeak(param_1 + _DAT_1127126b8);
  _objc_destroyWeak(param_1 + _DAT_1127126b4);
  _objc_destroyWeak(param_1 + _DAT_1127126b0);
  _objc_destroyWeak(param_1 + _DAT_1127126ac);
  _objc_destroyWeak(param_1 + _DAT_1127126a8);
  _objc_destroyWeak(param_1 + _DAT_1127126a4);
  _objc_destroyWeak(param_1 + _DAT_1127126a0);
  _objc_destroyWeak(param_1 + _DAT_11271269c);
  _objc_destroyWeak(param_1 + _DAT_112712698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712694,0);
  return;
}



/* Entry: 104d820f0; end: 104d82407; -[SCCameraRemixCameraFeatureProviderPluginWorkflow initWithCameraUIScope:cameraUIServices:featureUpdateEventSubject:applicationLifecycleEvents:cameraConfigurationServices:cameraUserLoggingServices:cameraHardwareServices:valdiRuntimeProvider:preferences:legacyCameraTooltipsService:cameraFeaturePerformanceFeatureScopedLoggerFactory:contentDeliveryServices:lensProcessingLensModeServices:conversationIdResolver:replyParameters:remixCaptureStatusSender:] */

undefined8 *
FUN_104d820f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

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
  puStack_70 = PTR_PTR_1126e41c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_storeWeak(puVar1 + 6,param_5);
    _objc_storeWeak(puVar1 + 1,param_6);
    uVar2 = param_7;
    func_0x00010bf45e20(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 4,uVar2);
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_storeWeak(puVar1 + 0xb,param_13);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 9,param_12);
    _objc_storeWeak(puVar1 + 10,param_11);
    _objc_storeWeak(puVar1 + 0xc,param_14);
    _objc_storeWeak(puVar1 + 0xd,param_15);
    _objc_retain(param_18);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_18;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xf,param_16);
    _objc_storeWeak(puVar1 + 0x10,param_17);
  }
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



/* Entry: 104d82408; end: 104d824b3; -[SCCameraRemixCameraFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_104d82408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,lVar2,0x12);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08d540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1274e0(param_3,param_2,lVar1,0);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d824b4; end: 104d824bb; -[SCCameraRemixCameraFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_104d824b4(void)

{
  return 0;
}



/* Entry: 104d824bc; end: 104d824c3; -[SCCameraRemixCameraFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_104d824bc(void)

{
  return 2;
}



/* Entry: 104d824c4; end: 104d825b7; -[SCCameraRemixCameraFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_104d824c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d825b8;
  puStack_60 = &UNK_11084e830;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  FUN_104d825b8(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x88,ppuVar1);
  func_0x00010c1e9e40(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d825b8; end: 104d8273b;  */

void FUN_104d825b8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d8273c;
  puStack_70 = &UNK_11084ec90;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d8273c; end: 104d82bd3;  */

void FUN_104d8273c(long param_1,undefined8 param_2)

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
  undefined **ppuVar21;
  undefined **ppuVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined *puVar38;
  undefined8 uVar39;
  long lStack_120;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar38 = (undefined *)0x0;
  }
  else {
    puVar38 = PTR_PTR_1126b01d8;
    _objc_alloc();
    lVar3 = lVar2 + 0x40;
    _objc_loadWeakRetained();
    lVar4 = lVar2 + 0x38;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2 + 0x38;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2 + 0x38;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf30c00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2 + 0x68;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c129620();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2 + 0x10;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bf2bbc0();
    if (lVar13 == 9) {
      lStack_120 = lVar2 + 0x30;
      _objc_loadWeakRetained();
    }
    else {
      lStack_120 = 0;
    }
    lVar14 = lVar2 + 0x18;
    _objc_loadWeakRetained();
    lVar15 = lVar2 + 0x60;
    _objc_loadWeakRetained();
    lVar16 = lVar2 + 0x48;
    _objc_loadWeakRetained();
    lVar17 = lVar2 + 0x20;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c129600();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar2 + 0x10;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010bf2bbc0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104d82bd4;
    puStack_88 = &UNK_11084e7d0;
    uVar39 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar39);
    ppuVar21 = &puStack_a0;
    uStack_80 = uVar39;
    FUN_104d82bd4();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104d82d20;
    puStack_b0 = &UNK_11084e7d0;
    uVar39 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar39);
    ppuVar22 = &puStack_c8;
    uStack_a8 = uVar39;
    FUN_104d82d20();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar2 + 0x28;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar2 + 0x10;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar2 + 0x18;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar2 + 8;
    _objc_loadWeakRetained();
    uVar30 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar30;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar39;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar32;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar2 + 0x58;
    _objc_loadWeakRetained();
    lVar35 = lVar2 + 0x50;
    _objc_loadWeakRetained();
    lVar36 = lVar2 + 0x78;
    _objc_loadWeakRetained();
    lVar37 = lVar2 + 0x80;
    _objc_loadWeakRetained();
    func_0x00010c05fd40(puVar38,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lStack_120,lVar14,lVar15,
                        lVar16,lVar18,lVar20,ppuVar21,ppuVar22,lVar24,lVar26,lVar28,lVar29,uVar31,
                        uVar33,lVar34,lVar35,lVar36,lVar37,*(undefined8 *)(lVar2 + 0x70));
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar39);
    _objc_release(uVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(ppuVar22);
    _objc_release(uStack_a8);
    _objc_release(ppuVar21);
    _objc_release(uStack_80);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    if (lVar13 == 9) {
      _objc_release(lStack_120);
    }
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
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar38);
  return;
}



/* Entry: 104d82bd4; end: 104d82caf;  */

void FUN_104d82bd4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d82cb0; end: 104d82d1f;  */

void FUN_104d82cb0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2726a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d82d20; end: 104d82dfb;  */

void FUN_104d82d20(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d82dfc; end: 104d82e6b;  */

void FUN_104d82dfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c14e820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d82e6c; end: 104d82f23;  */

long FUN_104d82e6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c129600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c150aa0();
    lVar6 = lVar3;
    func_0x00010c0719a0(lVar3,param_2,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar6;
}



/* Entry: 104d82f24; end: 104d82fc7; -[SCCameraRemixCameraFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_104d82f24(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d82fc8; end: 104d82fdf;  */

void FUN_104d82fc8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1a78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db1a78,
                      &PTR____CFConstantStringClassReference_110db1a98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104d82fe0; end: 104d82fe3; -[SCCameraReplyCameraFeatureProviderPlugin cameraFeatureCategory] */

void FUN_104d82fe0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137329a8 != -1) {
    func_0x000107c27d9c(0x1137329a8,&PTR___NSConcreteGlobalBlock_110ae1028);
  }
  uVar1 = uRam00000001137329b0;
  _objc_retain(uRam00000001137329b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d82fe4; end: 104d83b8b; -[SCCameraReplyCameraFeatureProviderPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d82fe4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
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
  undefined8 uVar57;
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
  ulong uVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  undefined8 uVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  undefined8 uStack_2b8;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_120;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  if (param_1 == 0) {
    uVar71 = 0;
  }
  else {
    uVar71 = param_1 + _DAT_112712794;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar71;
  func_0x00010c072b80();
  _objc_release(uVar71);
  if (((uVar1 & 1) == 0) && (param_1 != 0)) {
    uStack_f8 = param_1 + _DAT_112712798;
    _objc_loadWeakRetained();
  }
  else {
    uStack_f8 = 0;
  }
  puVar2 = PTR_PTR_1126b01e0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271271c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112712720;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c1140e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112712724;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112712728;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar9 = lVar8;
  func_0x00010c29c2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271272c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112712730;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112712734;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112712738;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = (long)_DAT_11271273c;
  lVar18 = param_1 + lVar73;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112712740;
  _objc_loadWeakRetained();
  lVar73 = param_1 + lVar73;
  _objc_loadWeakRetained();
  lVar21 = lVar73;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_112712758;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar58;
  func_0x00010bf24d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_11271275c;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar59;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar60 = 0;
  }
  else {
    lVar60 = param_1 + _DAT_112712760;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar60;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_e8 = 0;
    uStack_e0 = 0;
    lVar61 = 0;
  }
  else {
    uStack_e0 = param_1 + _DAT_112712764;
    _objc_loadWeakRetained();
    uStack_e8 = param_1 + _DAT_11271276c;
    _objc_loadWeakRetained();
    lVar61 = param_1 + _DAT_112712770;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar61;
  func_0x00010c08eca0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_1 + _DAT_112712768;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar62;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_108 = 0;
    lVar63 = 0;
  }
  else {
    uStack_108 = param_1 + _DAT_112712784;
    _objc_loadWeakRetained();
    lVar63 = param_1 + _DAT_112712774;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar63;
  func_0x00010c096200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar64 = 0;
  }
  else {
    lVar64 = param_1 + _DAT_112712750;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar64;
  func_0x00010c096100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_120 = 0;
  }
  else {
    uStack_120 = param_1 + _DAT_112712754;
    _objc_loadWeakRetained();
  }
  lVar29 = param_1;
  FUN_104d83b8c();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010bf296c0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x000104d83bb0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010bfa2fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  FUN_104d83b8c();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_148 = 0;
    uStack_140 = 0;
    lVar65 = 0;
  }
  else {
    uStack_140 = param_1 + _DAT_112712778;
    _objc_loadWeakRetained();
    uStack_148 = param_1 + _DAT_11271277c;
    _objc_loadWeakRetained();
    lVar65 = param_1 + _DAT_112712780;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar65;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_112712788;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar66;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x000104d83bd4();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c0ec6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010bf293c0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c11ea20();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1;
  func_0x000104d83bd4();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010c0ec6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010bf293c0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c11ea60();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x000104d83bd4();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  func_0x00010c0ec6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010bf293c0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010bf302a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1;
  func_0x000104d83bd4();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar48;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_2b8 = 0;
    uVar75 = 0;
    uStack_180 = 0;
    lVar67 = 0;
  }
  else {
    uStack_180 = param_1 + _DAT_11271278c;
    _objc_loadWeakRetained();
    uVar75 = *(undefined8 *)(param_1 + _DAT_1127127c4);
    _objc_retain(uVar75);
    uStack_2b8 = *(undefined8 *)(param_1 + _DAT_1127127c0);
    _objc_retain();
    lVar67 = param_1 + _DAT_1127127bc;
    _objc_loadWeakRetained();
  }
  lVar50 = lVar67;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_112712790;
    _objc_loadWeakRetained();
  }
  lVar51 = lVar68;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_190 = 0;
  }
  else {
    uStack_190 = param_1 + _DAT_11271279c;
    _objc_loadWeakRetained();
  }
  lVar52 = param_1;
  func_0x000104d83bd4();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar52;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_1127127a0;
    _objc_loadWeakRetained();
  }
  lVar54 = lVar69;
  func_0x00010bf70fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar74 = 0;
    lVar77 = 0;
    lVar76 = 0;
    lVar78 = 0;
    lVar70 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_1127127a4;
    _objc_loadWeakRetained();
    lVar77 = param_1 + _DAT_1127127a8;
    _objc_loadWeakRetained();
    lVar78 = param_1 + _DAT_1127127ac;
    _objc_loadWeakRetained();
    lVar74 = param_1 + _DAT_1127127b0;
    _objc_loadWeakRetained();
    lVar70 = param_1 + _DAT_1127127b4;
    _objc_loadWeakRetained();
  }
  lVar55 = lVar70;
  func_0x00010bf52280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar72 = 0;
  }
  else {
    lVar72 = param_1 + _DAT_1127127b8;
    _objc_loadWeakRetained();
  }
  lVar56 = lVar72;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e280(puVar2,param_2,lVar4,lVar6,lVar7,lVar8,lVar9,lVar11,lVar13,lVar15,lVar17,
                      lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,uStack_e0,uStack_e8,lVar25,lVar26,
                      uStack_108,lVar27,lVar28,uStack_120,lVar30,lVar32,lVar33,uStack_140,uStack_148
                      ,lVar34,lVar35,lVar39,lVar43,lVar47,lVar49,uStack_180,uVar75,uStack_2b8,lVar50
                      ,lVar51,uStack_f8,uStack_190,lVar53,lVar54,lVar76,lVar77,lVar78,lVar74,lVar55,
                      lVar56,0,0,0,0);
  _objc_release(lVar8);
  uVar57 = *(undefined8 *)(param_1 + _DAT_112712744);
  *(undefined **)(param_1 + _DAT_112712744) = puVar2;
  _objc_release(uVar57);
  _objc_release(uStack_2b8);
  _objc_release(lVar56);
  _objc_release(lVar72);
  _objc_release(lVar55);
  _objc_release(lVar70);
  _objc_release(lVar74);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar54);
  _objc_release(lVar69);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(uStack_190);
  _objc_release(lVar51);
  _objc_release(lVar68);
  _objc_release(lVar50);
  _objc_release(lVar67);
  _objc_release(uVar75);
  _objc_release(uStack_180);
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
  _objc_release(lVar66);
  _objc_release(lVar34);
  _objc_release(lVar65);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(uStack_120);
  _objc_release(lVar28);
  _objc_release(lVar64);
  _objc_release(lVar27);
  _objc_release(lVar63);
  _objc_release(uStack_108);
  _objc_release(lVar26);
  _objc_release(lVar62);
  _objc_release(lVar25);
  _objc_release(lVar61);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lVar24);
  _objc_release(lVar60);
  _objc_release(lVar23);
  _objc_release(lVar59);
  _objc_release(lVar22);
  _objc_release(lVar58);
  _objc_release(lVar21);
  _objc_release(lVar73);
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
  func_0x000104d83bb0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_f8);
  return;
}



/* Entry: 104d83b8c; end: 104d83bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d83b8c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271274c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d83bf8; end: 104d83e27; -[SCCameraReplyCameraFeatureProviderPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d83bf8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127127c4,0);
  _objc_storeStrong(param_1 + _DAT_1127127c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127127bc);
  _objc_destroyWeak(param_1 + _DAT_1127127b8);
  _objc_destroyWeak(param_1 + _DAT_1127127b4);
  _objc_destroyWeak(param_1 + _DAT_1127127b0);
  _objc_destroyWeak(param_1 + _DAT_1127127ac);
  _objc_destroyWeak(param_1 + _DAT_1127127a8);
  _objc_destroyWeak(param_1 + _DAT_1127127a4);
  _objc_destroyWeak(param_1 + _DAT_1127127a0);
  _objc_destroyWeak(param_1 + _DAT_11271279c);
  _objc_destroyWeak(param_1 + _DAT_112712798);
  _objc_destroyWeak(param_1 + _DAT_112712794);
  _objc_destroyWeak(param_1 + _DAT_112712790);
  _objc_destroyWeak(param_1 + _DAT_11271278c);
  _objc_destroyWeak(param_1 + _DAT_112712788);
  _objc_destroyWeak(param_1 + _DAT_112712784);
  _objc_destroyWeak(param_1 + _DAT_112712780);
  _objc_destroyWeak(param_1 + _DAT_11271277c);
  _objc_destroyWeak(param_1 + _DAT_112712778);
  _objc_destroyWeak(param_1 + _DAT_112712774);
  _objc_destroyWeak(param_1 + _DAT_112712770);
  _objc_destroyWeak(param_1 + _DAT_11271276c);
  _objc_destroyWeak(param_1 + _DAT_112712768);
  _objc_destroyWeak(param_1 + _DAT_112712764);
  _objc_destroyWeak(param_1 + _DAT_112712760);
  _objc_destroyWeak(param_1 + _DAT_11271275c);
  _objc_destroyWeak(param_1 + _DAT_112712758);
  _objc_destroyWeak(param_1 + _DAT_112712754);
  _objc_destroyWeak(param_1 + _DAT_112712750);
  _objc_destroyWeak(param_1 + _DAT_112712740);
  _objc_destroyWeak(param_1 + _DAT_11271273c);
  _objc_destroyWeak(param_1 + _DAT_112712730);
  _objc_destroyWeak(param_1 + _DAT_11271274c);
  _objc_destroyWeak(param_1 + _DAT_112712738);
  _objc_destroyWeak(param_1 + _DAT_112712734);
  _objc_destroyWeak(param_1 + _DAT_11271272c);
  _objc_destroyWeak(param_1 + _DAT_112712724);
  _objc_destroyWeak(param_1 + _DAT_11271271c);
  _objc_destroyWeak(param_1 + _DAT_112712720);
  _objc_destroyWeak(param_1 + _DAT_112712728);
  _objc_destroyWeak(param_1 + _DAT_112712748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712744,0);
  return;
}



/* Entry: 104d83e28; end: 104d84a6b; -[SCCameraChatCameraFeatureProviderPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d83e28(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
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
  undefined8 uVar54;
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
  ulong uVar71;
  long lVar72;
  long lVar73;
  undefined8 uVar74;
  long lVar75;
  long lVar76;
  undefined8 uStack_2b8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_148;
  undefined8 uStack_120;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  if (param_1 == 0) {
    lVar70 = 0;
  }
  else {
    lVar70 = param_1 + _DAT_1127127d4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar70;
  func_0x00010c150aa0();
  _objc_release(lVar70);
  if (lVar1 == 1) {
    if (param_1 == 0) {
      uVar71 = 0;
    }
    else {
      uVar71 = param_1 + _DAT_112712840;
      _objc_loadWeakRetained();
    }
    uVar2 = uVar71;
    func_0x00010c072b80();
    _objc_release(uVar71);
    if (((uVar2 & 1) == 0) && (param_1 != 0)) {
      uStack_100 = param_1 + _DAT_112712844;
      _objc_loadWeakRetained();
    }
    else {
      uStack_100 = 0;
    }
    puVar3 = PTR_PTR_1126b01e8;
    _objc_alloc();
    lVar70 = param_1 + _DAT_1127127c8;
    _objc_loadWeakRetained();
    lVar4 = lVar70;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_1127127cc;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010c1140e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_1127127d0;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_1127127d4;
    _objc_loadWeakRetained();
    _objc_retain();
    lVar8 = lVar7;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_1127127d8;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_1127127dc;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_1127127e0;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_1127127e4;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    lVar73 = (long)_DAT_1127127e8;
    lVar17 = param_1 + lVar73;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_1127127ec;
    _objc_loadWeakRetained();
    lVar73 = param_1 + lVar73;
    _objc_loadWeakRetained();
    lVar20 = lVar73;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar55 = 0;
    }
    else {
      lVar55 = param_1 + _DAT_112712804;
      _objc_loadWeakRetained();
    }
    lVar21 = lVar55;
    func_0x00010bf24d40();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar56 = 0;
    }
    else {
      lVar56 = param_1 + _DAT_112712808;
      _objc_loadWeakRetained();
    }
    lVar22 = lVar56;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar57 = 0;
    }
    else {
      lVar57 = param_1 + _DAT_11271280c;
      _objc_loadWeakRetained();
    }
    lVar23 = lVar57;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      lVar58 = 0;
    }
    else {
      uStack_e0 = param_1 + _DAT_112712810;
      _objc_loadWeakRetained();
      uStack_e8 = param_1 + _DAT_112712818;
      _objc_loadWeakRetained();
      lVar58 = param_1 + _DAT_11271281c;
      _objc_loadWeakRetained();
    }
    lVar24 = lVar58;
    func_0x00010c08eca0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar59 = 0;
    }
    else {
      lVar59 = param_1 + _DAT_112712814;
      _objc_loadWeakRetained();
    }
    lVar25 = lVar59;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_108 = 0;
      lVar60 = 0;
    }
    else {
      uStack_108 = param_1 + _DAT_112712830;
      _objc_loadWeakRetained();
      lVar60 = param_1 + _DAT_112712820;
      _objc_loadWeakRetained();
    }
    lVar26 = lVar60;
    func_0x00010c096200();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar61 = 0;
    }
    else {
      lVar61 = param_1 + _DAT_1127127fc;
      _objc_loadWeakRetained();
    }
    lVar27 = lVar61;
    func_0x00010c096100();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_120 = 0;
    }
    else {
      uStack_120 = param_1 + _DAT_112712800;
      _objc_loadWeakRetained();
    }
    lVar28 = param_1;
    FUN_104d84a6c();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar28;
    func_0x00010bf296c0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1;
    func_0x000104d84a90();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar30;
    func_0x00010bfa2fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1;
    FUN_104d84a6c();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_1;
    func_0x000104d84ab4();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_148 = 0;
      lVar62 = 0;
    }
    else {
      uStack_148 = param_1 + _DAT_112712828;
      _objc_loadWeakRetained();
      lVar62 = param_1 + _DAT_11271282c;
      _objc_loadWeakRetained();
    }
    lVar34 = lVar62;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar63 = 0;
    }
    else {
      lVar63 = param_1 + _DAT_112712834;
      _objc_loadWeakRetained();
    }
    lVar35 = lVar63;
    func_0x00010c26b280();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = param_1 + _DAT_1127127f0;
    lVar36 = lVar51;
    _objc_loadWeakRetained();
    lVar37 = lVar36;
    func_0x00010c11ea20();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = lVar51;
    _objc_loadWeakRetained();
    lVar39 = lVar38;
    func_0x00010c11ea60();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = lVar51;
    _objc_loadWeakRetained();
    lVar41 = lVar40;
    func_0x00010bf302a0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = lVar51;
    _objc_loadWeakRetained();
    lVar43 = lVar42;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      _objc_retain(0);
      uStack_2b8 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      lVar64 = 0;
    }
    else {
      uStack_180 = param_1 + _DAT_112712838;
      _objc_loadWeakRetained();
      uStack_188 = *(undefined8 *)(param_1 + _DAT_112712870);
      _objc_retain();
      uStack_2b8 = *(undefined8 *)(param_1 + _DAT_11271286c);
      _objc_retain();
      lVar64 = param_1 + _DAT_112712868;
      _objc_loadWeakRetained();
    }
    lVar44 = lVar64;
    func_0x00010c0f14e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar65 = 0;
    }
    else {
      lVar65 = param_1 + _DAT_11271283c;
      _objc_loadWeakRetained();
    }
    lVar45 = lVar65;
    func_0x00010c110fe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_1c8 = 0;
    }
    else {
      uStack_1c8 = param_1 + _DAT_112712848;
      _objc_loadWeakRetained();
    }
    lVar46 = param_1;
    func_0x00010bdd95e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar66 = 0;
    }
    else {
      lVar66 = param_1 + _DAT_112712864;
      _objc_loadWeakRetained();
    }
    lVar47 = lVar66;
    func_0x00010bf70fc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1d0 = 0;
      lVar67 = 0;
    }
    else {
      uStack_1b0 = param_1 + _DAT_11271284c;
      _objc_loadWeakRetained();
      uStack_1b8 = param_1 + _DAT_112712850;
      _objc_loadWeakRetained();
      uStack_1d0 = param_1 + _DAT_112712854;
      _objc_loadWeakRetained();
      uStack_1c0 = param_1 + _DAT_112712858;
      _objc_loadWeakRetained();
      lVar67 = param_1 + _DAT_11271285c;
      _objc_loadWeakRetained();
    }
    lVar48 = lVar67;
    func_0x00010bf52280();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar68 = 0;
    }
    else {
      lVar68 = param_1 + _DAT_112712860;
      _objc_loadWeakRetained();
    }
    lVar49 = lVar68;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      _objc_retain(0);
      lVar72 = 0;
      lVar76 = 0;
      lVar75 = 0;
      uVar74 = 0;
      lVar69 = 0;
    }
    else {
      lVar75 = param_1 + _DAT_112712874;
      _objc_loadWeakRetained();
      lVar76 = param_1 + _DAT_112712878;
      _objc_loadWeakRetained();
      uVar74 = *(undefined8 *)(param_1 + _DAT_112712884);
      _objc_retain(uVar74);
      lVar72 = param_1 + _DAT_112712880;
      _objc_loadWeakRetained();
      lVar69 = param_1 + _DAT_11271287c;
      _objc_loadWeakRetained();
    }
    lVar50 = lVar69;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar52 = param_1;
    func_0x000104d84ab4();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = lVar52;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e280(puVar3,param_2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,
                        lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,uStack_e0,uStack_e8,lVar24,lVar25,
                        uStack_108,lVar26,lVar27,uStack_120,lVar29,lVar31,lVar32,lVar33,uStack_148,
                        lVar34,lVar35,lVar37,lVar39,lVar41,lVar43,uStack_180,uStack_188,uStack_2b8,
                        lVar44,lVar45,uStack_100,uStack_1c8,lVar46,lVar47,uStack_1b0,uStack_1b8,
                        uStack_1d0,uStack_1c0,lVar48,lVar49,lVar75,lVar76,uVar74,lVar72,lVar50,
                        lVar51,lVar53);
    _objc_release(lVar7);
    uVar54 = *(undefined8 *)(param_1 + _DAT_1127127f4);
    *(undefined **)(param_1 + _DAT_1127127f4) = puVar3;
    _objc_release(uVar54);
    _objc_release(uVar74);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar69);
    _objc_release(lVar72);
    _objc_release(uStack_2b8);
    _objc_release(lVar76);
    _objc_release(lVar75);
    _objc_release(lVar49);
    _objc_release(lVar68);
    _objc_release(lVar48);
    _objc_release(lVar67);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(lVar47);
    _objc_release(lVar66);
    _objc_release(lVar46);
    _objc_release(uStack_1c8);
    _objc_release(lVar45);
    _objc_release(lVar65);
    _objc_release(lVar44);
    _objc_release(lVar64);
    _objc_release(uStack_188);
    _objc_release(uStack_180);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar63);
    _objc_release(lVar34);
    _objc_release(lVar62);
    _objc_release(uStack_148);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(uStack_120);
    _objc_release(lVar27);
    _objc_release(lVar61);
    _objc_release(lVar26);
    _objc_release(lVar60);
    _objc_release(uStack_108);
    _objc_release(lVar25);
    _objc_release(lVar59);
    _objc_release(lVar24);
    _objc_release(lVar58);
    _objc_release(uStack_e8);
    _objc_release(uStack_e0);
    _objc_release(lVar23);
    _objc_release(lVar57);
    _objc_release(lVar22);
    _objc_release(lVar56);
    _objc_release(lVar21);
    _objc_release(lVar55);
    _objc_release(lVar20);
    _objc_release(lVar73);
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
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar70);
    func_0x000104d84a90(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar70 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar70);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uStack_100);
    return;
  }
  return;
}



/* Entry: 104d84a6c; end: 104d84ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d84a6c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127127f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d84ad8; end: 104d84b9f; -[SCCameraChatCameraFeatureProviderPluginEntryPoint _cameraUIContainer] */

void FUN_104d84ad8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d84ba0; end: 104d84ba3;  */

void FUN_104d84ba0(void)

{
  return;
}



/* Entry: 104d84ba4; end: 104d84c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d84ba4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_1127127f0;
    _objc_loadWeakRetained(lVar2);
  }
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010bf2ac40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf834c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d84c18; end: 104d84e87; -[SCCameraChatCameraFeatureProviderPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d84c18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712884,0);
  _objc_destroyWeak(param_1 + _DAT_112712880);
  _objc_destroyWeak(param_1 + _DAT_11271287c);
  _objc_destroyWeak(param_1 + _DAT_112712878);
  _objc_destroyWeak(param_1 + _DAT_112712874);
  _objc_storeStrong(param_1 + _DAT_112712870,0);
  _objc_storeStrong(param_1 + _DAT_11271286c,0);
  _objc_destroyWeak(param_1 + _DAT_112712868);
  _objc_destroyWeak(param_1 + _DAT_112712864);
  _objc_destroyWeak(param_1 + _DAT_112712860);
  _objc_destroyWeak(param_1 + _DAT_11271285c);
  _objc_destroyWeak(param_1 + _DAT_112712858);
  _objc_destroyWeak(param_1 + _DAT_112712854);
  _objc_destroyWeak(param_1 + _DAT_112712850);
  _objc_destroyWeak(param_1 + _DAT_11271284c);
  _objc_destroyWeak(param_1 + _DAT_112712848);
  _objc_destroyWeak(param_1 + _DAT_112712844);
  _objc_destroyWeak(param_1 + _DAT_112712840);
  _objc_destroyWeak(param_1 + _DAT_11271283c);
  _objc_destroyWeak(param_1 + _DAT_112712838);
  _objc_destroyWeak(param_1 + _DAT_112712834);
  _objc_destroyWeak(param_1 + _DAT_112712830);
  _objc_destroyWeak(param_1 + _DAT_11271282c);
  _objc_destroyWeak(param_1 + _DAT_112712828);
  _objc_destroyWeak(param_1 + _DAT_112712824);
  _objc_destroyWeak(param_1 + _DAT_112712820);
  _objc_destroyWeak(param_1 + _DAT_11271281c);
  _objc_destroyWeak(param_1 + _DAT_112712818);
  _objc_destroyWeak(param_1 + _DAT_112712814);
  _objc_destroyWeak(param_1 + _DAT_112712810);
  _objc_destroyWeak(param_1 + _DAT_11271280c);
  _objc_destroyWeak(param_1 + _DAT_112712808);
  _objc_destroyWeak(param_1 + _DAT_112712804);
  _objc_destroyWeak(param_1 + _DAT_112712800);
  _objc_destroyWeak(param_1 + _DAT_1127127fc);
  _objc_destroyWeak(param_1 + _DAT_1127127ec);
  _objc_destroyWeak(param_1 + _DAT_1127127e8);
  _objc_destroyWeak(param_1 + _DAT_1127127dc);
  _objc_destroyWeak(param_1 + _DAT_1127127f8);
  _objc_destroyWeak(param_1 + _DAT_1127127e4);
  _objc_destroyWeak(param_1 + _DAT_1127127e0);
  _objc_destroyWeak(param_1 + _DAT_1127127d8);
  _objc_destroyWeak(param_1 + _DAT_1127127d0);
  _objc_destroyWeak(param_1 + _DAT_1127127c8);
  _objc_destroyWeak(param_1 + _DAT_1127127cc);
  _objc_destroyWeak(param_1 + _DAT_1127127d4);
  _objc_destroyWeak(param_1 + _DAT_1127127f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127127f4,0);
  return;
}



/* Entry: 104d84e88; end: 104d85777; -[SCCameraChatCameraFeatureProviderPluginWorkflow initWithUserSession:privateFeatureContainer:cameraConfigurationServices:cameraUIScope:viewControllerLifecycleEvents:applicationLifecycleEvents:valdiRuntimeProvider:conversationManager:conversationIdResolver:cameraHardwareResource:cameraViewfinderServices:cameraHardwareServicesAPI:bundledLensProvider:circumstanceEngine:appStartExperimentReader:userStorageServices:contentDeliveryServices:legacyCameraTooltipsService:lazyUserTrackedLogger:lensCarouselStudySettingsServices:lensProcessingLensModeServices:lensCarouselProcessingServices:lensCarouselFeatureServices:cameraFeaturePerformanceFeatureScopedLoggerFactory:featureUpdateEventSubject:cameraUIServices:featureSettingsServices:creativeToolsSnapReplyServices:creativeToolsABProvider:temporaryFileWriter:quickStickerImage:quickStickerMetadata:captionState:replyConfiguration:plusServices:plusSubcriberScopeExposer:previewScopeExposer:pageLauncher:previewFilterDataProviderFactory:mainTabNavigationServices:snapDocEditorServices:cameraUIContainer:cameraDeviceSettingsResolver:cameraModeActivationServices:cameraSnapModelServices:userPreferenceTimeProviderServices:cameraActivePathServices:coreCameraLogger:locationProvider:memoriesSideButtonStateProvidingServices:lensCarouselOnCameraScopeControllingServices:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:previewAssetVideoProvider:chatCameraScope:featureSettingsService:] */

undefined8 *
FUN_104d84e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58)

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
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  puStack_70 = PTR_PTR_1126e41d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_storeWeak(puVar1 + 4,param_13);
    _objc_storeWeak(puVar1 + 6,param_7);
    _objc_storeWeak(puVar1 + 7,param_8);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_storeWeak(puVar1 + 9,param_10);
    _objc_storeWeak(puVar1 + 10,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_15);
    _objc_storeWeak(puVar1 + 0xc,param_16);
    _objc_storeWeak(puVar1 + 0xd,param_17);
    _objc_storeWeak(puVar1 + 0xe,param_18);
    _objc_storeWeak(puVar1 + 0xf,param_21);
    _objc_storeWeak(puVar1 + 0x10,param_19);
    _objc_storeWeak(puVar1 + 0x11,param_20);
    _objc_storeWeak(puVar1 + 0x12,param_23);
    _objc_storeWeak(puVar1 + 0x18,param_22);
    _objc_storeWeak(puVar1 + 0x13,param_24);
    _objc_storeWeak(puVar1 + 0x14,param_25);
    _objc_storeWeak(puVar1 + 0x15,param_26);
    _objc_storeWeak(puVar1 + 0x19,param_27);
    _objc_storeWeak(puVar1 + 0x1a,param_28);
    _objc_storeWeak(puVar1 + 0x1b,param_29);
    _objc_storeWeak(puVar1 + 0x1c,param_30);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x23,param_37);
    _objc_storeWeak(puVar1 + 0x24,param_42);
    _objc_retain(param_43);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_43;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x26,param_39);
    _objc_retain(param_40);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_40;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x28,param_41);
    _objc_storeWeak(puVar1 + 0x29,param_38);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2b,param_45);
    _objc_storeWeak(puVar1 + 0x2e,param_46);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_47;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x30,param_48);
    _objc_storeWeak(puVar1 + 0x31,param_49);
    _objc_storeWeak(puVar1 + 0x32,param_50);
    _objc_storeWeak(puVar1 + 0x33,param_51);
    _objc_storeWeak(puVar1 + 0x34,param_52);
    _objc_storeWeak(puVar1 + 0x35,param_53);
    _objc_storeWeak(puVar1 + 0x36,param_54);
    _objc_storeWeak(puVar1 + 0x37,param_55);
    _objc_retain(param_56);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_56;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x39,param_57);
    _objc_retain(param_58);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_58;
    _objc_release(uVar2);
  }
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
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



/* Entry: 104d85778; end: 104d8596f; -[SCCameraChatCameraFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_104d85778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar10;
  
  _objc_retain(param_3);
  func_0x00010bf2fba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,uVar1,4);
  _objc_release(uVar1);
  _objc_release(param_4);
  lVar2 = param_1 + 0x160;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,lVar3,0x20);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf926c0();
  if ((int)lVar6 == 0) {
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    lVar6 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf92920();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar10 == 0) goto LAB_104d8594c;
    lVar2 = param_1 + 0x168;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c08d540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1274e0(param_3,param_2,lVar3,0);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_104d8594c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d85970; end: 104d85977; -[SCCameraChatCameraFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_104d85970(void)

{
  return 0;
}



/* Entry: 104d85978; end: 104d8597f; -[SCCameraChatCameraFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_104d85978(void)

{
  return 2;
}



/* Entry: 104d85980; end: 104d85f3b; -[SCCameraChatCameraFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_104d85980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d85f3c;
  puStack_90 = &UNK_11084ea10;
  lStack_88 = param_1;
  _objc_retain(param_4);
  ppuVar3 = &puStack_a8;
  uStack_80 = param_4;
  FUN_104d85f3c(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205320(param_3);
  _objc_release(ppuVar3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104d86248;
  puStack_c8 = &UNK_11084e830;
  lStack_c0 = param_1;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  ppuVar4 = &puStack_e0;
  uStack_b0 = param_5;
  FUN_104d86248();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar4;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_104d866e0;
  puStack_f0 = &UNK_11084ed60;
  lStack_e8 = param_1;
  (*(code *)ppuVar3[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104d86728;
  puStack_120 = &UNK_11084ea10;
  lStack_118 = param_1;
  _objc_retain(param_4);
  ppuVar3 = &puStack_138;
  uStack_110 = param_4;
  FUN_104d86728(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c64a0(param_3);
  _objc_release(ppuVar3);
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_104d86a44;
  uStack_148 = 0x104d86a54;
  uStack_140 = 0;
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_104d86a5c;
  puStack_178 = &UNK_11084eb40;
  puStack_170 = &uStack_168;
  puStack_160 = &uStack_168;
  func_0x00010c0bcaa0(*(undefined8 *)(param_1 + 0x110));
  puStack_1c8 = puVar1;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_104d86a9c;
  puStack_1b0 = &UNK_11084edf0;
  lStack_1a8 = param_1;
  _objc_retain(param_4);
  ppuVar3 = &puStack_1c8;
  uStack_1a0 = param_4;
  puStack_198 = &uStack_168;
  FUN_104d86a9c(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9de0(param_3);
  _objc_release(ppuVar3);
  puStack_1f8 = puVar1;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_104d86d60;
  puStack_1e0 = &UNK_11084ea10;
  lStack_1d8 = param_1;
  _objc_retain(param_4);
  ppuVar3 = &puStack_1f8;
  uStack_1d0 = param_4;
  FUN_104d86d60(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178460(param_3);
  _objc_release(ppuVar3);
  lVar5 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf926c0();
  if ((int)lVar9 == 0) {
    uVar2 = 0;
  }
  else {
    lVar9 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf92920();
    uVar2 = (undefined1)lVar13;
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_104d86f7c;
  puStack_220 = &UNK_11084eeb0;
  lStack_218 = param_1;
  _objc_retain(param_4);
  uStack_210 = param_4;
  _objc_retain(param_5);
  ppuVar3 = &puStack_238;
  uStack_208 = param_5;
  uStack_200 = uVar2;
  FUN_104d86f7c(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x168;
  _objc_storeWeak(lVar5,ppuVar3);
  _objc_retain();
  _objc_release(ppuVar3);
  func_0x00010c16f600(param_3);
  puVar14 = PTR_PTR_1126b0228;
  lVar6 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bfb6540();
  _objc_release(lVar6);
  puStack_278 = puVar1;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_104d87818;
  puStack_260 = &UNK_11084eeb0;
  lStack_258 = param_1;
  _objc_retain(param_4);
  uStack_250 = param_4;
  _objc_retain(param_5);
  uStack_240 = SUB81(puVar14,0);
  ppuVar3 = &puStack_278;
  uStack_248 = param_5;
  FUN_104d87818();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar4;
  (*(code *)ppuVar4[2])();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x160,ppuVar15);
  _objc_release(ppuVar15);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_248);
  _objc_release(uStack_250);
  _objc_release(lVar5);
  _objc_release(uStack_208);
  _objc_release(uStack_210);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1a0);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  _objc_release(uStack_110);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d85f3c; end: 104d860a7;  */

void FUN_104d85f3c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d860a8;
  puStack_68 = &UNK_11084ed00;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d860a8; end: 104d86207;  */

void FUN_104d860a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126b01f0;
    _objc_alloc(PTR_PTR_1126b01f0);
    puVar3 = PTR_PTR_1126b01f8;
    _objc_alloc(PTR_PTR_1126b01f8);
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = param_1 + 0xe0;
    _objc_loadWeakRetained(lVar5);
    uVar12 = *(undefined8 *)(param_1 + 0xf0);
    lVar6 = param_1 + 0xd0;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf2bdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c980(puVar3,param_2,uVar1,uVar2,lVar4,lVar5,uVar12,lVar7);
    lVar8 = param_1 + 8;
    _objc_loadWeakRetained(lVar8);
    lVar9 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar9);
    lVar10 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c03c9a0(puVar11,param_2,puVar3,0,lVar8,lVar9,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar3);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104d86208; end: 104d86247;  */

bool FUN_104d86208(long param_1)

{
  bool bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0xf8) != 0;
  }
  _objc_release();
  return bVar1;
}



/* Entry: 104d86248; end: 104d863cb;  */

void FUN_104d86248(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d863cc;
  puStack_70 = &UNK_11084ed30;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d863cc; end: 104d86633;  */

void FUN_104d863cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar23 = PTR_PTR_1126b0200;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + 0x1b0;
    _objc_loadWeakRetained();
    lVar5 = lVar1 + 0x1b8;
    _objc_loadWeakRetained();
    lVar6 = lVar1 + 0xd0;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + 0x60;
    _objc_loadWeakRetained();
    lVar9 = lVar1 + 0x130;
    _objc_loadWeakRetained();
    uVar19 = *(undefined8 *)(lVar1 + 0x138);
    uVar20 = *(undefined8 *)(lVar1 + 0x110);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + 8;
    _objc_loadWeakRetained();
    uVar21 = *(undefined8 *)(lVar1 + 0x1c0);
    lVar13 = lVar1 + 0x1c8;
    _objc_loadWeakRetained();
    lVar14 = lVar1 + 0x78;
    _objc_loadWeakRetained();
    uVar15 = 0x17;
    func_0x00010bc9107c();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(lVar1 + 0x1d0);
    uVar24 = *(undefined8 *)(lVar1 + 0x128);
    lVar16 = lVar1 + 0x60;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x000108f484ac();
    lVar18 = lVar1 + 0x140;
    _objc_loadWeakRetained();
    func_0x00010c02ae00(puVar23,param_2,uVar3,lVar4,lVar5,lVar7,lVar8,lVar9,uVar19,uVar20,uVar11,
                        lVar12,uVar21,0,lVar13,lVar14,uVar15,
                        &PTR____CFConstantStringClassReference_110daafd8,uVar22,uVar24,(char)lVar17)
    ;
    _objc_release(lVar18);
    _objc_release(lVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 104d86634; end: 104d866df;  */

bool FUN_104d86634(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b0208;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c071980(puVar3,param_2,lVar2);
    if ((int)puVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = param_1 + 0x1b0;
      _objc_loadWeakRetained();
      if (lVar4 == 0) {
        bVar1 = false;
      }
      else {
        lVar5 = param_1 + 0x1b8;
        _objc_loadWeakRetained(lVar5);
        bVar1 = lVar5 != 0;
        _objc_release();
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 104d866e0; end: 104d86727;  */

void FUN_104d866e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0667a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d86728; end: 104d86893;  */

void FUN_104d86728(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d86894;
  puStack_68 = &UNK_11084eae0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d86894; end: 104d869d3;  */

void FUN_104d86894(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0188;
    _objc_alloc(PTR_PTR_1126b0188);
    lVar1 = param_1 + 0x1a0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0c9900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + 0xa0;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x1a8;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c090ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d360(puVar8,param_2,0,lVar2,lVar3,0,0,0,1);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104d869d4; end: 104d86a43;  */

undefined * FUN_104d869d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b0208;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c071980(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 104d86a44; end: 104d86a5b;  */

void FUN_104d86a44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d86a5c; end: 104d86a9b;  */

void FUN_104d86a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c129780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d86a9c; end: 104d86c17;  */

void FUN_104d86a9c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d86c18;
  puStack_70 = &UNK_11084ed90;
  _objc_copyWeak(auStack_60,auStack_58);
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d86c18; end: 104d86d13;  */

void FUN_104d86c18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0210;
    _objc_alloc(PTR_PTR_1126b0210);
    lVar2 = lVar1 + 0x60;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1 + 0xa0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c090c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + 0x58;
    _objc_loadWeakRetained(lVar5);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    lVar6 = lVar1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bffe900(puVar8,param_2,lVar2,lVar4,lVar5,uVar7,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104d86d14; end: 104d86d5f;  */

bool FUN_104d86d14(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0;
  }
  _objc_release();
  return bVar1;
}



/* Entry: 104d86d60; end: 104d86ecb;  */

void FUN_104d86d60(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dabc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d86ecc;
  puStack_68 = &UNK_11084ee20;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d86ecc; end: 104d86f4b;  */

void FUN_104d86ecc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0218;
    _objc_alloc(PTR_PTR_1126b0218);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c05d180(puVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x108),
                        *(undefined8 *)(param_1 + 0xe8));
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d86f4c; end: 104d86f7b;  */

bool FUN_104d86f4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d86f7c; end: 104d8710f;  */

void FUN_104d86f7c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dabc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d87110;
  puStack_80 = &UNK_11084ee50;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_78 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_68);
  uStack_a0 = *(undefined1 *)(param_1 + 0x38);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d87110; end: 104d87543;  */

void FUN_104d87110(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined **ppuVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar37 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0220;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(lVar1 + 0x178);
    lVar6 = lVar1 + 8;
    _objc_loadWeakRetained();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + 0x180;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c293220();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + 400;
    _objc_loadWeakRetained();
    lVar14 = lVar1 + 0x38;
    _objc_loadWeakRetained();
    puVar37 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104d87544;
    puStack_88 = &UNK_11084e7d0;
    uVar35 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar35);
    ppuVar15 = &puStack_a0;
    uStack_80 = uVar35;
    FUN_104d87544();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + 0x28;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf2bbc0();
    lVar18 = lVar1 + 0x188;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bef1320();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar1 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar20;
    func_0x00010bf70ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar1 + 0x78;
    _objc_loadWeakRetained();
    uVar33 = *(undefined8 *)(lVar1 + 0xb0);
    lVar22 = lVar1 + 0x18;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(lVar1 + 0xb8);
    lVar24 = lVar1 + 0x28;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar1 + 0xd0;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar37;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104d87690;
    puStack_b0 = &UNK_11084e7d0;
    uVar36 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar36);
    ppuVar28 = &puStack_c8;
    uStack_a8 = uVar36;
    FUN_104d87690();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar1 + 0x198;
    _objc_loadWeakRetained();
    lVar30 = lVar1 + 0x170;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc7a0(puVar2,param_2,uVar5,uVar32,lVar6,uVar9,lVar12,lVar13,lVar14,ppuVar15,lVar17
                        ,lVar19,uVar35,lVar21,uVar33,lVar23,uVar34,lVar25,lVar27,ppuVar28,0,lVar29,
                        lVar31,0);
    puVar37 = puVar2;
    func_0x00010c09ac60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(ppuVar28);
    _objc_release(uStack_a8);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(uVar35);
    _objc_release(uVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar16);
    _objc_release(ppuVar15);
    _objc_release(uStack_80);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar37);
  return;
}



/* Entry: 104d87544; end: 104d8761f;  */

void FUN_104d87544(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d87620; end: 104d8768f;  */

void FUN_104d87620(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d87690; end: 104d8776b;  */

void FUN_104d87690(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d8776c; end: 104d877db;  */

void FUN_104d8776c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf51b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d877dc; end: 104d87817;  */

byte FUN_104d877dc(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  _objc_release();
  return bVar2 & 1;
}



/* Entry: 104d87818; end: 104d879ab;  */

void FUN_104d87818(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d879ac;
  puStack_80 = &UNK_11084eee0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_78 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_68);
  uStack_a0 = *(undefined1 *)(param_1 + 0x38);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d879ac; end: 104d87cf3;  */

void FUN_104d879ac(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    puVar28 = PTR_PTR_1126b0230;
    _objc_alloc();
    lVar2 = lVar1 + 0x158;
    _objc_loadWeakRetained();
    uVar27 = *(undefined8 *)(lVar1 + 0xb0);
    lVar3 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c12f720();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + 0x18;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + 0x28;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf2b720();
    lVar9 = lVar1 + 0xa0;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c090c40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c0d32c0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c06b6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c15b000();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010bf8c7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(lVar1 + 0xb8);
    lVar23 = lVar1 + 0x170;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104d87cf4;
    puStack_78 = &UNK_11084e7d0;
    uVar29 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar29);
    ppuVar25 = &puStack_90;
    uStack_70 = uVar29;
    FUN_104d87cf4();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar1 + 0x60;
    _objc_loadWeakRetained();
    func_0x00010bffb220(puVar28,param_2,lVar2,uVar27,0,lVar4,lVar6,lVar8,lVar10,uVar14,uVar18,uVar22
                        ,uVar30,lVar24,0,ppuVar25,lVar26);
    _objc_release(lVar26);
    _objc_release(ppuVar25);
    _objc_release(uStack_70);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 104d87cf4; end: 104d87dcf;  */

void FUN_104d87cf4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d87dd0; end: 104d87e3f;  */

void FUN_104d87dd0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d87e40; end: 104d87ec3;  */

byte FUN_104d87e40(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  _objc_release();
  return bVar2 & 1;
}



/* Entry: 104d87ec4; end: 104d880e3; -[SCCameraChatCameraFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_104d87ec4(long param_1)

{
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_destroyWeak(param_1 + 0x1c8);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_destroyWeak(param_1 + 0x1b8);
  _objc_destroyWeak(param_1 + 0x1b0);
  _objc_destroyWeak(param_1 + 0x1a8);
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_destroyWeak(param_1 + 0x198);
  _objc_destroyWeak(param_1 + 400);
  _objc_destroyWeak(param_1 + 0x188);
  _objc_destroyWeak(param_1 + 0x180);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_destroyWeak(param_1 + 0x168);
  _objc_destroyWeak(param_1 + 0x160);
  _objc_destroyWeak(param_1 + 0x158);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_destroyWeak(param_1 + 0x140);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_destroyWeak(param_1 + 0x118);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d880e4; end: 104d88167; -[SCFeatureRemixAfterSnap initWithDirectorModeFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104d880e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e41d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112712970;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d88168; end: 104d882a3; -[SCFeatureRemixAfterSnap remixPreviewConfiguration] */

void FUN_104d88168(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010be8b000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c1298a0(lVar1);
    lVar3 = lVar1;
    func_0x00010c131e40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_104d8845c(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126b0238;
    _objc_alloc(PTR_PTR_1126b0238);
    lVar3 = lVar1;
    func_0x00010c247de0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c247b80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1297c0(lVar1);
    func_0x00010beb3140(param_1);
    func_0x00010c1298a0();
    func_0x00010c04ace0(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d882a4; end: 104d882d7; -[SCFeatureRemixAfterSnap isRemixActiveOnSnap] */

bool FUN_104d882a4(long param_1)

{
  func_0x00010be8b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d882d8; end: 104d88443; -[SCFeatureRemixAfterSnap _remixMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d882d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112712970);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  if (lVar3 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar6 = *(long *)(lVar7 * 8);
        lVar4 = lVar6;
        func_0x00010c129840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          func_0x00010c129840(lVar6);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104d88400;
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar6 = 0;
  }
LAB_104d88400:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c07c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 104d88444; end: 104d88447; -[SCFeatureRemixAfterSnap _shouldDisableSavingInPreview] */

void FUN_104d88444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isRemixActiveOnSnap_1125fca98);
  return;
}



/* Entry: 104d88448; end: 104d8845b; -[SCFeatureRemixAfterSnap .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712970,0);
  return;
}



/* Entry: 104d8845c; end: 104d88543;  */

void FUN_104d8845c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d88544;
  uStack_30 = 0x104d88554;
  uStack_28 = 0;
  func_0x00010c0be1c0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d88544; end: 104d8855b;  */

void FUN_104d88544(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d8855c; end: 104d88617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d8855c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_30;
  long lStack_28;
  
  ppuVar2 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 2) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_3;
    func_0x00010c078d80();
    if ((int)puVar1 != 0) {
      param_4 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_30 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar1;
      _objc_release(uVar4);
      puVar3 = (undefined1 *)ppuVar2;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_90;
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_88 = PTR_PTR_1126e41e0;
  puStack_90 = param_3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined1 **)0x0) {
    lVar5 = (long)_DAT_112712974;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppuVar2 + lVar5);
    *(undefined8 *)((long)ppuVar2 + lVar5) = param_4;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112712978;
    _objc_retain(puVar3);
    uVar4 = *(undefined8 *)((long)ppuVar2 + lVar5);
    *(undefined1 **)((long)ppuVar2 + lVar5) = puVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11271297c;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppuVar2 + lVar5);
    *(undefined8 *)((long)ppuVar2 + lVar5) = param_5;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112712980;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppuVar2 + lVar5);
    *(undefined8 *)((long)ppuVar2 + lVar5) = param_6;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112712984;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)ppuVar2 + lVar5);
    *(undefined8 *)((long)ppuVar2 + lVar5) = param_7;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  return (undefined1 *)ppuVar2;
}



/* Entry: 104d88618; end: 104d8875f; -[SCFeatureRemixWithSnap initWithCircumstanceEngine:lensCarouselManager:bundledLensProvider:remixExportItem:viewControllerLifecycleObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d88618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e41e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112712974;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112712978;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271297c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112712980;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112712984;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d88760; end: 104d8886f; -[SCFeatureRemixWithSnap activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88760(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_112712988;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    func_0x00010be89b20(param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112712984);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}


