/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051c21c8; end: 1051c21d3;  */

void FUN_1051c21c8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1051c21d4; end: 1051c2233; -[SCContextMagicCaptionActionPerformer _handleOkDialogAction:] */

void FUN_1051c21d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf84b00(param_3,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1051c2234; end: 1051c2537; -[SCContextMagicCaptionActionPerformer _createCustomAccessoryViewWithImage:] */

void FUN_1051c2234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010befbb60();
  func_0x00010c219b60(puVar1);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar3;
  func_0x00010bf49420(0x405bc00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_a8 = puVar3;
  puStack_98 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar4;
  func_0x00010bf49420(0x4066c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_b8 = puVar4;
  puStack_90 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_c0 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_d8 = puVar3;
  puStack_88 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_e0 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_80 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c274200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_78 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf1ff80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puStack_e8);
  _objc_release(puStack_e0);
  _objc_release(puStack_d8);
  _objc_release(puStack_c8);
  _objc_release(puStack_c0);
  _objc_release(puStack_b8);
  _objc_release(puStack_b0);
  _objc_release(puStack_a8);
  _objc_release(puStack_a0);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_1051c2538;
  uVar13 = *(undefined8 *)(puVar3 + 0x18);
  puStack_120 = puVar4;
  puStack_118 = puVar10;
  puStack_110 = puVar2;
  puStack_108 = puVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(uVar13);
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1051c260c;
  puStack_138 = &UNK_110841f80;
  puStack_130 = puVar3;
  uStack_128 = uVar13;
  func_0x00010bcbe2c4("APPSTORE",&puStack_150);
  uVar11 = *(undefined8 *)(puVar3 + 0x28);
  *(undefined8 *)(puVar3 + 0x28) = 0;
  _objc_release(uVar11);
  lVar12 = *(long *)(puVar3 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(puVar3 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar12 = *(long *)(puVar3 + 0x30);
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x10))(lVar12,0);
    uVar11 = *(undefined8 *)(puVar3 + 0x30);
    *(undefined8 *)(puVar3 + 0x30) = 0;
    _objc_release(uVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 1051c2538; end: 1051c260b; -[SCContextMagicCaptionActionPerformer _tearDown] */

void FUN_1051c2538(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051c260c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x00010bcbe2c4("APPSTORE",&puStack_60);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1051c260c; end: 1051c2667;  */

void FUN_1051c260c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1051c2668;
  puStack_20 = &UNK_110842e18;
  func_0x00010bf84b00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,0,&puStack_38);
  return;
}



/* Entry: 1051c2668; end: 1051c26af;  */

void FUN_1051c2668(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051c26b0; end: 1051c271f; -[SCContextMagicCaptionActionPerformer plusSubscribeDidDismiss] */

void FUN_1051c26b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c2720; end: 1051c276f; -[SCContextMagicCaptionActionPerformer dialogDidDismiss:] */

void FUN_1051c2720(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1051c2770; end: 1051c27cf; -[SCContextMagicCaptionActionPerformer .cxx_destruct] */

void FUN_1051c2770(long param_1)

{
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



/* Entry: 1051c27d0; end: 1051c288f; -[SCContextManualFriendSelectionActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8 FUN_1051c27d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  long in_x7;
  
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  uVar1 = in_x5;
  func_0x00010c0ea4c0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = in_x5;
  func_0x00010c0ea8e0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  func_0x00010c0eb7c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  (**(code **)(in_x7 + 0x10))(in_x7,0);
  _objc_release(in_x7);
  return 0;
}



/* Entry: 1051c2890; end: 1051c2903; -[SCContextSoundSyncActionPerformer initWithMusicSyncScopeExposer:] */

undefined1 * FUN_1051c2890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6c90;
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



/* Entry: 1051c2904; end: 1051c2a2b; -[SCContextSoundSyncActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051c2904(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_4 != 0) && (uVar1 = param_3, func_0x00010beeed20(), (int)uVar1 == 0x45)) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126b3018;
    _objc_alloc(PTR_PTR_1126b3018);
    func_0x00010c0390c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1051c2a2c; end: 1051c2a73; -[SCContextSoundSyncActionPerformer musicSyncActionHandlerDidFinishWithCancelled:] */

void FUN_1051c2a2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051c2a74; end: 1051c2a7f; -[SCContextSoundSyncActionPerformer .cxx_destruct] */

void FUN_1051c2a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c2a80; end: 1051c2b97; -[SCContextPlaceProfileActionPerformer initWithFullMapScopeExposer:fullMapScopeServices:circumstanceEngine:standalonePlaceProfileFactoryServices:] */

undefined1 *
FUN_1051c2a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6c98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c2b98; end: 1051c2d73; -[SCContextPlaceProfileActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c2b98(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined *param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0fd3c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    param_1 = &PTR____CFConstantStringClassReference_110dca978;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca978,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf4eb20();
    lVar4 = param_7;
    func_0x00010bf4eb20();
    if (lVar4 == 7) {
      func_0x00010bf4eb00();
    }
    puVar5 = param_8;
    _objc_retainBlock();
    puVar6 = param_1[7];
    param_1[7] = puVar5;
    _objc_release(puVar6);
    iVar1 = (int)param_1[4];
    func_0x000109021f6c();
    lVar4 = param_3;
    func_0x00010c0fd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      func_0x00010be7c5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be7ea40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051c2d74; end: 1051c2f67; -[SCContextPlaceProfileActionPerformer _presentStandalonePlaceProfileForPlaceId:contextSessionId:openSource:placesSourceType:uiContainer:] */

void FUN_1051c2d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010bde7020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dca998;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca998,
                        *(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_setAssociatedObject(lVar1,0x1136b94f0,param_1,1);
    puVar2 = PTR_PTR_1126b1e78;
    _objc_alloc(PTR_PTR_1126b1e78);
    func_0x00010c031b60();
    func_0x00010c1dce20();
    func_0x00010c207140(puVar2);
    puVar3 = PTR_PTR_1126b1e80;
    _objc_alloc(PTR_PTR_1126b1e80);
    func_0x00010c0364a0();
    func_0x00010c10d8c0(lVar1);
    _objc_initWeak(auStack_58,param_1);
    ppuVar4 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar1);
    func_0x00010bffae00(ppuVar4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1051c2f68; end: 1051c2f9b;  */

void FUN_1051c2f68(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051c2f9c; end: 1051c305f; -[SCContextPlaceProfileActionPerformer _constructStandalonePlaceProfilePresenterWithUIContainer:] */

void FUN_1051c2f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000109021f6c();
  if (iVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == 0) {
      puVar2 = PTR_PTR_1126b5c48;
      _objc_alloc(PTR_PTR_1126b5c48);
      func_0x00010c00afc0();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf24820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf21f80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(puVar2);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    _objc_retain(lVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1051c3060; end: 1051c3067; -[SCContextPlaceProfileActionPerformer _tearDownStandalonePlaceProfilePresenter:] */

void FUN_1051c3060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_closePlaceProfile_1125ad0d0);
  return;
}



/* Entry: 1051c3068; end: 1051c32cb; -[SCContextPlaceProfileActionPerformer _presentMapPlaceProfileForPlaceId:contextSessionId:openSource:placesSourceType:uiContainer:] */

void FUN_1051c3068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b5c50;
  _objc_alloc(PTR_PTR_1126b5c50);
  func_0x00010c031b80();
  func_0x000100c6f294(param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == -1) {
    param_6 = 0;
  }
  else {
    func_0x00010ba1c764(param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b5c58;
  func_0x00010c0fd700(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),
                      *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),
                      PTR_PTR_1126b5c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf22f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_68,param_1);
  puVar4 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar3);
  _objc_retain(param_7);
  func_0x00010bffae00(puVar4);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051c32cc; end: 1051c32ff;  */

void FUN_1051c32cc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010becad60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051c3300; end: 1051c338f; -[SCContextPlaceProfileActionPerformer _tearDownFullMapScope:uiContainer:] */

void FUN_1051c3300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051c3390;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6f440(param_4,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1051c3390; end: 1051c339b;  */

void FUN_1051c3390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b9af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_mapScopeDidEnd__11260c0d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051c339c; end: 1051c343f; -[SCContextPlaceProfileActionPerformer mapScopeDidEnd:] */

void FUN_1051c339c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_setAssociatedObject(param_3,0x1136b94f0,0,0);
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051c3440; end: 1051c3447; -[SCContextPlaceProfileActionPerformer onPlaceProfileHidden] */

void FUN_1051c3440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_closePlaceProfile_1125ad0d0);
  return;
}



/* Entry: 1051c3448; end: 1051c34af; -[SCContextPlaceProfileActionPerformer onPlaceProfileRemoved] */

void FUN_1051c3448(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x30),0x1136b94f0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1051c34b0; end: 1051c351b; -[SCContextPlaceProfileActionPerformer .cxx_destruct] */

void FUN_1051c34b0(long param_1)

{
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



/* Entry: 1051c351c; end: 1051c35bf; -[SCContextPlayGameLensActionPerformer initWithLinkActionPerformer:nglStudySettings:] */

undefined1 *
FUN_1051c351c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6ca0;
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



/* Entry: 1051c35c0; end: 1051c3c17; -[SCContextPlayGameLensActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c35c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puStack_c8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0fe460();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    ppuVar17 = &PTR____CFConstantStringClassReference_110dca9b8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca9b8,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar18;
      func_0x0001051cb2fc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar18);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d3c80();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b5c20;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d520(puVar3);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126b5b00;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21b000();
      puVar6 = param_6;
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c08bda0();
      _objc_retain(puVar6);
      if ((int)lVar2 == 1) {
        puVar7 = puVar6;
        func_0x00010c241400();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b5c60;
        _objc_alloc();
        puVar9 = puVar7;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        func_0x00010c25b200(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar7;
        func_0x00010bf36f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c082620();
        puVar13 = puVar7;
        func_0x00010bf5b400();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c22e6a0();
        puVar14 = puVar7;
        func_0x00010bf82a60();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar7;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar7;
        func_0x00010bf82a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfff0c0();
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        puStack_c8 = PTR_PTR_1126b5ba8;
        _objc_alloc();
        puVar9 = puVar6;
        func_0x00010c131ec0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar6;
        func_0x00010c281320(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010bf5b3e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c047f80();
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      else {
        _objc_retain();
        puStack_c8 = puVar6;
      }
      _objc_release(puVar6);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b5bb0;
      _objc_alloc();
      puVar7 = param_6;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_6;
      func_0x00010c0ea8e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_6;
      func_0x00010c0ea4c0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_6;
      func_0x00010c08f3a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_6;
      func_0x00010bf50720(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29d360();
      func_0x00010bf4eae0();
      func_0x00010bf4eb00();
      func_0x00010c24b560();
      func_0x00010c24ba40();
      func_0x00010c0ea840();
      func_0x00010c0275e0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_7);
      _objc_retain(param_8);
      func_0x00010c0f88c0(puVar7);
      _objc_release(puVar7);
      ppuVar17 = (undefined **)PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      func_0x00010bffae00();
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar6);
      _objc_release(puStack_c8);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar17);
  return;
}



/* Entry: 1051c3c18; end: 1051c3c4b;  */

void FUN_1051c3c18(long param_1,undefined8 param_2)

{
  func_0x00010c0f80c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051c3c4c; end: 1051c3c4f;  */

void FUN_1051c3c4c(void)

{
  return;
}



/* Entry: 1051c3c50; end: 1051c3d3b; -[SCContextPlayGameLensActionPerformer .cxx_destruct] */

void FUN_1051c3c50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c3d3c; end: 1051c3e0f;  */

uint FUN_1051c3d3c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain();
  func_0x0001051c3c80();
  if ((param_2 & 3) == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      lVar1 = lVar4;
      func_0x000108437fb4(lVar4);
      uVar5 = (uint)lVar1 ^ 1;
    }
    _objc_release(lVar4);
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1051c3e10; end: 1051c3f03; -[SCContextPollViewActionPerformer initWithPollViewScopeExposer:userSession:chatCameraScopeExposer:chatCameraScopeServices:] */

undefined1 *
FUN_1051c3e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6ca8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c3f04; end: 1051c4247; -[SCContextPollViewActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c3f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_8;
  _objc_retainBlock();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar12);
  uVar1 = param_3;
  func_0x00010c1031e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010c1032c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1051c4248;
  puStack_90 = &UNK_110841f80;
  uStack_88 = uVar1;
  _objc_retain(param_7);
  ppuVar2 = &puStack_a8;
  uStack_80 = param_7;
  _objc_retainBlock();
  _objc_initWeak(auStack_b0,param_1);
  puStack_e8 = puVar4;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1051c42a4;
  puStack_d0 = &UNK_11086e988;
  _objc_copyWeak(auStack_b8,auStack_b0);
  uStack_c8 = uVar1;
  _objc_retain(param_7);
  ppuVar3 = &puStack_e8;
  uStack_c0 = param_7;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126b5c70;
  _objc_alloc(PTR_PTR_1126b5c70);
  uVar5 = param_6;
  func_0x00010bf50720(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010c242420(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bda0();
  uVar9 = param_6;
  func_0x00010c0b3760(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037aa0(puVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  puVar11 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1051c4248; end: 1051c42a3;  */

void FUN_1051c4248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b5c68;
  func_0x00010c2a1140(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(uVar2,param_2,puVar1,0,0,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051c42a4; end: 1051c4377;  */

void FUN_1051c42a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be75820(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b5c68;
    func_0x00010c22be20(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0480(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051c4378; end: 1051c437b;  */

void FUN_1051c4378(void)

{
  return;
}



/* Entry: 1051c437c; end: 1051c43cf; -[SCContextPollViewActionPerformer pollViewScopeDidComplete:] */

void FUN_1051c437c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c43d0; end: 1051c46d3; -[SCContextPollViewActionPerformer _pollViewScopeWantsToShareResult:result:presentingViewController:] */

void FUN_1051c43d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c1032c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = param_4;
  func_0x00010c0ec860(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1051c46d4;
  puStack_80 = &UNK_11086e9d8;
  _objc_retain(puVar3);
  puStack_78 = puVar3;
  func_0x00010bf97e80(uVar1);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b5c80;
  func_0x00010c0cb140(PTR_PTR_1126b5c80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0ae0();
  func_0x00010c1b6460(puVar4);
  func_0x00010c2135e0(uVar2);
  uVar1 = param_4;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  func_0x00010c08bda0();
  func_0x000108435ff0();
  puVar6 = PTR_PTR_1126b1010;
  _objc_alloc();
  func_0x00010c02ec80();
  func_0x00010c1d86a0();
  func_0x00010c1b13e0(puVar6);
  uVar1 = param_3;
  func_0x00010bf4f080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar6);
  _objc_release(uVar1);
  _objc_initWeak(auStack_a0,param_1);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1051c47f8;
  puStack_d0 = &UNK_11085ae98;
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(uVar2);
  uStack_c8 = uVar2;
  uStack_c0 = uVar5;
  _objc_retain(param_5);
  uStack_b8 = param_5;
  puStack_b0 = puVar6;
  func_0x0001000d76cc("APPSTORE",&puStack_e8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puStack_78);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051c46d4; end: 1051c4777;  */

void FUN_1051c46d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5c78;
  _objc_retain(param_2);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c087500(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1b71a0(puVar1);
  _objc_release(uVar2);
  func_0x00010c1d5e20(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051c4778; end: 1051c47f7;  */

void FUN_1051c4778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5c88;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfe5da0(param_3);
  func_0x00010c2a1100(param_3);
  _objc_release(param_3);
  func_0x00010c0320e0(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051c47f8; end: 1051c49ff;  */

void FUN_1051c47f8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_5 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x10);
    func_0x00010c071800();
    if (iVar1 != 0) {
      puVar3 = PTR_PTR_1126b5c90;
      _objc_alloc(PTR_PTR_1126b5c90);
      func_0x00010c037a20();
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010bfb68e0(puVar3);
      param_3 = param_3 + 10.0;
      func_0x00010bfb68e0(puVar3);
      param_4 = param_4 + 10.0;
      func_0x00010c013de0(0,0,param_3,param_4,puVar4);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar4,param_6,puVar5);
      _objc_release(puVar5);
      func_0x00010befbb60(puVar4,param_6,puVar3);
      func_0x00010bf345e0(puVar4);
      func_0x00010c17a6a0(puVar3);
      func_0x00010bf20c00(puVar4);
      uVar9 = 0;
      _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
      func_0x00010bfb68e0(puVar4);
      func_0x00010bfb68e0(puVar4);
      puVar5 = puVar4;
      func_0x00010bf89ce0(0,0,uVar9,puVar4,param_6,1);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      puVar6 = PTR_PTR_1126b5b40;
      func_0x00010bf69940(PTR_PTR_1126b5b40,param_6,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar2 + 0x18);
      uVar9 = *(undefined8 *)(param_5 + 0x30);
      uVar7 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c271be0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23680(uVar8,param_6,uVar9,uVar7,lVar2,2,0,puVar6,0,lVar2,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      func_0x00010bf9d620(*(undefined8 *)(lVar2 + 0x10),param_6,uVar8);
      _objc_release(uVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1051c4a00; end: 1051c4a03; -[SCContextPollViewActionPerformer captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1051c4a00(void)

{
  return;
}



/* Entry: 1051c4a04; end: 1051c4a4b; -[SCContextPollViewActionPerformer dismissCameraScope:] */

void FUN_1051c4a04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051c4a4c; end: 1051c4a9b; -[SCContextPollViewActionPerformer .cxx_destruct] */

void FUN_1051c4a4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c4a9c; end: 1051c4b0f; -[SCContextTextModeActionPerformer initWithSnapTextEditorScopeExposer:] */

undefined1 * FUN_1051c4a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6cb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c4b10; end: 1051c4bff; -[SCContextTextModeActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051c4b10(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c26c460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_5 != 0) && (param_3 != 0)) {
    uVar1 = param_8;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b5c98;
    _objc_alloc(PTR_PTR_1126b5c98);
    lVar3 = param_1;
    func_0x00010be0ab80(param_1,param_2,param_6);
    func_0x00010c056b60(puVar2,param_2,param_5,lVar3,param_1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return 0;
}



/* Entry: 1051c4c00; end: 1051c4c6f; -[SCContextTextModeActionPerformer snapEditorDidDismiss] */

void FUN_1051c4c00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c4c70; end: 1051c4cef; -[SCContextTextModeActionPerformer _entryPointTypeFromParams:] */

undefined8 FUN_1051c4c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08bda0();
  iVar1 = (int)uVar3;
  func_0x000108435ff0();
  if (iVar1 - 1U < 7) {
    uVar3 = *(undefined8 *)(&UNK_10dd90730 + (ulong)(iVar1 - 1U) * 8);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1051c4cf0; end: 1051c4d1f; -[SCContextTextModeActionPerformer .cxx_destruct] */

void FUN_1051c4cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c4d20; end: 1051c4e1b; -[SCContextPromptLensActionPerformer initWithLinkActionPerformer:contentDelivery:currentUserId:nglStudySettings:] */

undefined1 *
FUN_1051c4d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6cb8;
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



/* Entry: 1051c4e1c; end: 1051c5817; -[SCContextPromptLensActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c4e1c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined **param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uStack_1b8;
  ulong uStack_1a0;
  int iStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 auStack_d0 [8];
  int iStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined **ppuStack_88;
  int iStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c118680();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110dcaa38;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcaa38,param_8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1051c575c;
  }
  uVar2 = param_6;
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar5 = uVar2;
  func_0x00010c0db200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010010fab4();
  uVar3 = uVar5;
  if ((int)uVar6 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bf4f0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001084365e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010c08fa60();
  _objc_release(uVar5);
  if (uVar12 == 0) {
    if (uVar6 != 0) {
      uVar5 = param_3;
      func_0x00010c0ccaa0();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a0 = uVar5;
      func_0x00010beee760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar3;
      func_0x00010bf4f0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar12;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      uStack_160 = uVar5;
      func_0x00010c1185e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010c11cb60();
      iStack_170 = (int)uVar12;
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      uStack_168 = uVar5;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      goto LAB_1051c5110;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110dcaa58;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcaa58,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_160 = uVar1;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar1;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010b71236c();
    iStack_170 = (int)uVar5;
    uStack_1a0 = 0;
LAB_1051c5110:
    uVar5 = uVar1;
    func_0x00010bfdaae0();
    if ((int)uVar5 == 0) {
      uVar5 = uVar6;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010bfdaae0();
      _objc_release(uVar5);
      if ((int)uVar12 == 0) {
        uVar5 = param_1;
        func_0x00010bebd240();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1051c5260;
      }
      if (uVar6 != 0) {
        uVar5 = uVar6;
        func_0x00010c091b80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar5;
        func_0x00010c118560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar9 = uVar12;
        func_0x00010bfe2ee0();
        uVar5 = uVar12;
        func_0x00010c0b5940(uVar12);
        func_0x000100c4a928(uVar9,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar12);
        goto LAB_1051c5260;
      }
      ppuVar7 = &PTR____CFConstantStringClassReference_110dcaa58;
      func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcaa58,param_8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar12 = uVar1;
      func_0x00010c118560();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar12;
      func_0x00010bfe2ee0();
      uVar5 = uVar12;
      func_0x00010c0b5940(uVar12);
      func_0x000100c4a928(uVar9,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar12);
LAB_1051c5260:
      if (iStack_170 == 3) {
        uVar12 = uVar1;
        func_0x00010bfdab40();
        if ((int)uVar12 == 0) {
          uVar12 = uVar6;
          func_0x00010c091b80();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar12;
          func_0x00010bfdab40();
          _objc_release(uVar12);
          if ((int)uVar9 != 0) {
            uVar9 = uVar6;
            func_0x00010c091b80();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar9;
            func_0x00010c118860();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            uVar10 = uVar12;
            func_0x00010bfe2ee0();
            uVar9 = uVar12;
            func_0x00010c0b5940(uVar12);
            func_0x000100c4a928(uVar10,uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar10;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            goto LAB_1051c53e4;
          }
          uVar12 = *(ulong *)(param_1 + 0x18);
          _objc_retain(uVar12);
          uVar9 = uVar12;
          func_0x00010c0720c0();
          if ((int)uVar9 != 0) {
            uVar9 = param_1;
            func_0x00010be6e720();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1051c53e4;
          }
        }
        else {
          uVar12 = uVar1;
          func_0x00010c118860();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar12;
          func_0x00010bfe2ee0();
          uVar9 = uVar12;
          func_0x00010c0b5940(uVar12);
          func_0x000100c4a928(uVar10,uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar10;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
LAB_1051c53e4:
          _objc_release(uVar12);
          uVar12 = uVar9;
        }
        _objc_retain(uVar5);
        uVar9 = uVar5;
        func_0x00010c0720c0();
        uStack_1b8 = uVar5;
        if ((int)uVar9 != 0) {
          _objc_retain(uVar12);
          _objc_release(uVar5);
          uStack_1b8 = uVar12;
        }
      }
      else {
        uVar12 = 0;
        uStack_1b8 = 0;
      }
      uVar9 = param_1;
      func_0x00010be6e740();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c08fa60();
      if ((((uVar10 == 0) || (uVar10 = uStack_160, func_0x00010c08fa60(), uVar10 == 0)) ||
          (uVar10 = uStack_168, func_0x00010c08fa60(), uVar10 == 0)) ||
         ((iStack_170 == -0x4524111 || (uVar10 = uVar5, func_0x00010c08fa60(), uVar10 == 0)))) {
        ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar11;
        func_0x0001051cb2fc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar11);
      }
      else {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_1051c5818;
        puStack_a0 = &UNK_11086ea48;
        iStack_80 = iStack_170;
        _objc_retain(param_7);
        ppuVar11 = &puStack_b8;
        uStack_98 = param_7;
        uStack_90 = uVar3;
        ppuStack_88 = param_8;
        _objc_retainBlock();
        _objc_initWeak(auStack_c0,param_1);
        _objc_copyWeak(auStack_d0,auStack_c0);
        _objc_retain(ppuVar11);
        _objc_retain(uVar8);
        _objc_retain(uStack_160);
        _objc_retain(uStack_168);
        _objc_retain(uVar5);
        _objc_retain(uVar12);
        _objc_retain(uStack_1b8);
        _objc_retain(uVar9);
        iStack_c8 = iStack_170;
        _objc_retain(uStack_1a0);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_6);
        _objc_retain(param_7);
        func_0x00010be11260(param_1);
        ppuVar7 = (undefined **)PTR_PTR_1126afd78;
        _objc_alloc(PTR_PTR_1126afd78);
        func_0x00010bffae00();
        _objc_release(param_7);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(uStack_1a0);
        _objc_release(uVar9);
        _objc_release(uStack_1b8);
        _objc_release(uVar12);
        _objc_release(uVar5);
        _objc_release(uStack_168);
        _objc_release(uStack_160);
        _objc_release(uVar8);
        _objc_release(ppuVar11);
        _objc_destroyWeak(auStack_d0);
        _objc_destroyWeak(auStack_c0);
        _objc_release(ppuStack_88);
        _objc_release(uStack_98);
        param_8 = ppuVar11;
      }
      _objc_release(uVar9);
      _objc_release(uStack_1b8);
      _objc_release(uVar12);
      _objc_release(uVar5);
    }
    _objc_release(uStack_1a0);
    _objc_release(uStack_168);
    _objc_release(uVar8);
    _objc_release(uStack_160);
  }
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_1051c575c:
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1051c5818; end: 1051c58a3;  */

void FUN_1051c5818(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if ((param_2 == 0) && (*(int *)(param_1 + 0x38) == 3)) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf4eae0();
    if (lVar1 == 3) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf6b020(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4eea0();
      _objc_release(uVar2);
    }
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051c58a4; end: 1051c5973;  */

void FUN_1051c58a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca858,
                        *(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010be71fe0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051c5974; end: 1051c5a93;  */

void FUN_1051c5974(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x88,param_2 + 0x88);
  return;
}



/* Entry: 1051c5a94; end: 1051c5a97;  */

void FUN_1051c5a94(void)

{
  return;
}



/* Entry: 1051c5a98; end: 1051c6197; -[SCContextPromptLensActionPerformer _performLinkActionWithLensId:promptId:encryptionKey:promptCreatorId:promptReceiverUserId:overWrittenReplyUserId:promptCreatorName:flowType:tappableKey:filepath:overlayCacheKey:isVideo:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c5a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_18);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puVar1 = PTR_PTR_1126b5ca0;
  _objc_retain(param_19);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_19;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_19;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf36f80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar5;
  func_0x00010c024880(puVar1,param_2,param_3,param_4,param_5,puVar2,param_6,param_7,param_8,param_9,
                      0,0,0 < param_10,uVar5,uVar8,param_12,param_13,param_14,param_15);
  uVar21 = (undefined4)((ulong)uVar20 >> 0x20);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_alloc();
  func_0x00010bfef3a0();
  func_0x00010bf93020();
  puVar9 = puVar2;
  func_0x00010bf934c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c14c880();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcaa98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  puVar9 = puVar10;
  func_0x00010c08fa60(puVar10);
  func_0x00010c130f80(puVar10,param_2,&PTR____CFConstantStringClassReference_110db2db8,
                      &PTR____CFConstantStringClassReference_110daafd8,1,0,puVar9);
  puVar9 = puVar10;
  func_0x00010c08fa60(puVar10);
  func_0x00010c130f80(puVar10,param_2,&PTR____CFConstantStringClassReference_110dcaab8,
                      &PTR____CFConstantStringClassReference_110daafd8,1,0,puVar9);
  puVar9 = PTR_PTR_1126b5c20;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c0d3c80();
  func_0x00010c21d520(puVar9,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b000();
  puVar13 = PTR_PTR_1126b5bb0;
  _objc_alloc();
  uVar3 = param_19;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_19;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_19;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_19;
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_19;
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_19;
  func_0x00010bf50720();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_19;
  func_0x00010c29d360();
  uVar18 = param_19;
  func_0x00010bf4eae0();
  uVar19 = param_19;
  func_0x00010bf4eb00();
  uVar20 = param_19;
  func_0x00010c24b560();
  uVar8 = param_19;
  func_0x00010c24ba40();
  uVar7 = param_19;
  func_0x00010c0ea840();
  uVar6 = param_19;
  func_0x00010c0f2be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_19);
  func_0x00010c0275e0(puVar13,param_2,uVar3,uVar4,uVar5,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,
                      uVar20,uVar8,param_10 != 0,uVar21,uVar7,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1051c6198;
  puStack_b8 = &UNK_110866970;
  uStack_a0 = param_17;
  uStack_98 = param_18;
  uStack_88 = param_20;
  uStack_80 = param_21;
  uStack_b0 = param_1;
  puStack_a8 = puVar12;
  puStack_90 = puVar13;
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_18);
  _objc_retain(param_17);
  func_0x00010c0f88c0(uVar3,param_2,&puStack_d0);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f80c0(*(undefined8 *)(*(long *)(puVar1 + 0x20) + 8),param_2,
                      *(undefined8 *)(puVar1 + 0x28),*(undefined8 *)(puVar1 + 0x30),
                      *(undefined8 *)(puVar1 + 0x38),*(undefined8 *)(puVar1 + 0x40),
                      *(undefined8 *)(puVar1 + 0x48),*(undefined8 *)(puVar1 + 0x50),
                      &stack0xfffffffffffffff0,FUN_1051c6198);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051c6198; end: 1051c61cb;  */

void FUN_1051c6198(long param_1,undefined8 param_2)

{
  func_0x00010c0f80c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051c61cc; end: 1051c6507; -[SCContextPromptLensActionPerformer _fetchFilepathWithFlowType:params:completion:] */

void FUN_1051c61cc(long param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 2) {
    lVar1 = param_4;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) {
      lVar1 = param_4;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((lVar4 == 0) || (lVar1 = lVar4, func_0x00010c08fa60(), lVar1 == 0)) {
        (**(code **)(param_5 + 0x10))(param_5,0,0,0);
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dcaa18;
        func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110dcaa18);
        func_0x00010c260c20(&PTR____CFConstantStringClassReference_110dcaa18);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010bfda7c0();
        lVar2 = lVar4;
        if ((int)lVar1 != 0) {
          func_0x00010c260c00(lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
        }
        puVar7 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c0295e0();
        puVar8 = PTR_PTR_1126b1060;
        _objc_alloc(PTR_PTR_1126b1060);
        func_0x00010c032f60();
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_5);
        _objc_retain(lVar3);
        func_0x00010c13e560(uVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(lVar3);
        _objc_release(param_5);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(ppuVar6);
        lVar4 = lVar2;
      }
      _objc_release(lVar4);
    }
    else {
      (**(code **)(param_5 + 0x10))(param_5,lVar5,lVar3,1);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,0,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1051c6508; end: 1051c669b;  */

void FUN_1051c6508(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc68a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c2556e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar2 = uVar1;
    func_0x00010bfc1d60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0bfa60(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010bfc5880(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,*(undefined8 *)(param_1 + 0x20),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051c669c; end: 1051c66ef;  */

undefined8 FUN_1051c669c(long param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),1);
  return 0;
}



/* Entry: 1051c66f0; end: 1051c67df; -[SCContextPromptLensActionPerformer _snapSenderUserIdFromContextActionParams:] */

void FUN_1051c66f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c131ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar6 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1051c67e0; end: 1051c6877; -[SCContextPromptLensActionPerformer _otherUserIdFromContextActionParams:] */

void FUN_1051c67e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bebd240(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  uVar2 = param_1;
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010bf50720(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051c6878; end: 1051c695b; -[SCContextPromptLensActionPerformer _otherUserNameFromContextActionParams:] */

void FUN_1051c6878(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  lVar2 = lVar3;
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c131ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1051c695c; end: 1051c69a3; -[SCContextPromptLensActionPerformer .cxx_destruct] */

void FUN_1051c695c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c69a4; end: 1051c6ac7; -[SCContextPublicProfileActionPerformer initWithSnapchattersDataFetcher:friendProfileScopeExposer:businessProfileScopeExposer:circumstanceEngine:contextExperimentService:] */

undefined1 *
FUN_1051c69a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6cc0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c6ac8; end: 1051c6c2b; -[SCContextPublicProfileActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c6ac8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010beeed20();
  if ((int)lVar1 == 0xc) {
    lVar1 = param_3;
    func_0x00010c11a660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar1;
      func_0x00010bfe44e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be48100(param_1);
      puVar4 = PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      func_0x00010bffae00();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051c6c2c; end: 1051c6e57; -[SCContextPublicProfileActionPerformer _launchPublicProfileFor:hostAccountUserId:onViewController:uiContainer:params:completion:] */

void FUN_1051c6c2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be48140(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_8);
    func_0x00010c2448c0(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051c6e58; end: 1051c6f3f;  */

void FUN_1051c6e58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      lVar1 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c261440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf0a8a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_2;
        func_0x00010c2923e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be480a0(param_1);
        _objc_release(lVar1);
        goto LAB_1051c6f20;
      }
    }
    func_0x00010be48140(param_1);
  }
LAB_1051c6f20:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051c6f40; end: 1051c70ab; -[SCContextPublicProfileActionPerformer _launchPublicProfileFor:userId:uiContainer:onViewController:params:completion:] */

void FUN_1051c6f40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_7;
  FUN_1051cb29c();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_7;
    func_0x00010c0ea840(param_7);
    bVar1 = uVar2 == 1;
    uVar5 = 8;
  }
  else {
    bVar1 = true;
    uVar5 = 0x5c;
  }
  puVar3 = PTR_PTR_1126b4158;
  _objc_alloc(PTR_PTR_1126b4158);
  func_0x00010bc9107c(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x00010bb0584c(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd00(puVar3,param_2,param_3,param_1,param_6,uVar5,uVar4,bVar1,param_4);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  uVar5 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1051c70ac; end: 1051c71af; -[SCContextPublicProfileActionPerformer _launchProfileForUserId:uiContainer:params:] */

void FUN_1051c70ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_1051cb29c();
  puVar1 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c015a00();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051c71b0; end: 1051c71f3; -[SCContextPublicProfileActionPerformer showProfilePresenterDidFinishPresenting:profileViewController:] */

void FUN_1051c71b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c71f4; end: 1051c7213; -[SCContextPublicProfileActionPerformer businessProfilesPresenterScopeWillDismiss:] */

void FUN_1051c71f4(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051c7214; end: 1051c7233; -[SCContextPublicProfileActionPerformer friendProfileDidDismiss:] */

void FUN_1051c7214(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051c7234; end: 1051c7293; -[SCContextPublicProfileActionPerformer .cxx_destruct] */

void FUN_1051c7234(long param_1)

{
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



/* Entry: 1051c7294; end: 1051c735f; -[SCContextUnifiedPublicProfileActionPerformer initWithBusinessProfileScopeExposer:circumstanceEngine:contextExperimentService:] */

undefined1 *
FUN_1051c7294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6cc8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c7360; end: 1051c7623; -[SCContextUnifiedPublicProfileActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c7360(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010beeed20();
  if ((int)lVar1 != 0x2a) {
    puVar5 = (undefined *)0x0;
    goto LAB_1051c75d8;
  }
  lVar1 = param_3;
  func_0x00010c2800e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c141fe0();
  if ((int)lVar6 == 2) {
    lVar6 = lVar1;
    func_0x00010c280180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000109189508();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar6);
    lVar6 = lVar4;
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      lVar6 = lVar4;
      func_0x00010c0b5ac0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be48120(param_1);
LAB_1051c75a8:
      _objc_release(lVar6);
    }
LAB_1051c75b0:
    puVar5 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(lVar4);
  }
  else {
    if ((int)lVar6 == 1) {
      lVar6 = lVar1;
      func_0x00010c11b4c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x000109189508();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar6);
      lVar6 = lVar4;
      func_0x00010c08fa60();
      if (lVar6 != 0) {
        lVar6 = lVar1;
        func_0x00010c11b4c0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bfdc0a0();
        _objc_release(lVar6);
        if ((int)lVar3 == 0) {
          lVar6 = 0;
        }
        else {
          lVar3 = lVar1;
          func_0x00010c11b4c0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar3;
          func_0x00010c237cc0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar2;
          func_0x000109189508();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          _objc_release(lVar3);
        }
        lVar3 = lVar4;
        func_0x00010c0b5ac0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be48120(param_1);
        _objc_release(lVar3);
        goto LAB_1051c75a8;
      }
      goto LAB_1051c75b0;
    }
    (**(code **)(param_8 + 0x10))(param_8,0);
    puVar5 = (undefined *)0x0;
  }
  _objc_release(lVar1);
LAB_1051c75d8:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051c7624; end: 1051c785b; -[SCContextUnifiedPublicProfileActionPerformer _launchPublicProfileFor:uiContainer:onViewController:params:isPublisherRoute:showId:completion:] */

void FUN_1051c7624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,int param_7,undefined8 param_8,undefined8 param_9
                  )

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uVar2 = param_6;
  FUN_1051cb29c();
  uVar6 = 0x5c;
  if ((int)uVar2 == 0) {
    uVar6 = 8;
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = param_6;
    func_0x00010c0ea840();
    bVar1 = uVar2 == 1;
  }
  else {
    bVar1 = true;
  }
  uVar2 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b4158;
  _objc_alloc(PTR_PTR_1126b4158);
  func_0x00010bc9107c(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  func_0x00010bb0584c(0);
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    func_0x00010c03bd00(puVar5,param_2,param_3,param_1,param_5,uVar6,uVar7,bVar1,uVar4);
  }
  else {
    func_0x00010c03c180(puVar5,param_2,param_3,param_1,param_5,uVar6,uVar7,0,bVar1);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar2 = param_6;
  func_0x00010c242420(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf82a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar5,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  _objc_release(uVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar5);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051c785c; end: 1051c789f; -[SCContextUnifiedPublicProfileActionPerformer showProfilePresenterDidFinishPresenting:profileViewController:] */

void FUN_1051c785c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c78a0; end: 1051c78bf; -[SCContextUnifiedPublicProfileActionPerformer businessProfilesPresenterScopeWillDismiss:] */

void FUN_1051c78a0(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051c78c0; end: 1051c7907; -[SCContextUnifiedPublicProfileActionPerformer .cxx_destruct] */

void FUN_1051c78c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c7908; end: 1051c79d3; -[SCContextQuestionStickerActionPerformer initWithSnapchatterDataFetcher:snapchatterDataMutator:chatActionPerformer:] */

undefined1 *
FUN_1051c7908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6cd0;
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



/* Entry: 1051c79d4; end: 1051c7d87; -[SCContextQuestionStickerActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c79d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c11dcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dcaad8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcaad8,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar6);
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1051c7d88;
    uStack_88 = 0x1051c7d98;
    uStack_80 = 0;
    uVar6 = uVar3;
    puStack_a0 = &uStack_a8;
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1051c7da0;
    puStack_b8 = &UNK_110842b58;
    puStack_b0 = &uStack_a8;
    func_0x00010c0c12a0();
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar4 == 0) {
      _objc_initWeak(auStack_d8,param_1);
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_e0,auStack_d8);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_7);
      _objc_retain(param_8);
      _objc_retain(uVar3);
      func_0x00010c2448c0(uVar6);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar6);
      ppuVar5 = (undefined **)PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      func_0x00010bffae00();
      _objc_release(uVar3);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_e0);
      _objc_destroyWeak(auStack_d8);
    }
    else {
      func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcaaf8,param_8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar5 = (undefined **)PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      func_0x00010bffae00();
    }
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1051c7d88; end: 1051c7d9f;  */

void FUN_1051c7d88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051c7da0; end: 1051c7dd7;  */

void FUN_1051c7da0(long param_1,undefined8 param_2)

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



/* Entry: 1051c7dd8; end: 1051c7f23;  */

void FUN_1051c7dd8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 == (undefined *)0x0) {
      param_2 = PTR_PTR_1126b15c8;
      _objc_alloc(PTR_PTR_1126b15c8);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c294420(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf85d80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05c0e0(param_2);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010be79f80();
  }
  else {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7c0e0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051c7f24; end: 1051c7f93;  */

void FUN_1051c7f24(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 1051c7f94; end: 1051c82ff; -[SCContextQuestionStickerActionPerformer _presentAddModalWithViewController:uiContainer:params:source:snapchatter:completion:] */

void FUN_1051c7f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010befca80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1051c8300;
  puStack_b8 = &UNK_11086ebb8;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_b0 = param_3;
  _objc_retain(param_4);
  uStack_a8 = param_4;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_8);
  ppuVar2 = &puStack_d0;
  uStack_90 = param_8;
  _objc_retainBlock();
  puStack_108 = puVar5;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1051c8344;
  puStack_f0 = &UNK_110848378;
  _objc_copyWeak(auStack_d8,auStack_80);
  _objc_retain(puVar1);
  puStack_e8 = puVar1;
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_108;
  ppuStack_e0 = ppuVar2;
  _objc_retainBlock(ppuVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_7;
  func_0x00010bf85d80(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  uVar6 = param_7;
  if ((int)puVar5 == 0) {
    func_0x00010bf85d80(param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c294420(param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b5ca8;
  func_0x00010c11dce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1051c83a8;
  puStack_120 = &UNK_110841f80;
  _objc_retain(param_3);
  uStack_118 = param_3;
  _objc_retain(puVar5);
  puStack_110 = puVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_138);
  _objc_release(puStack_110);
  _objc_release(uStack_118);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuStack_e0);
  _objc_release(puStack_e8);
  _objc_destroyWeak(auStack_d8);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051c8300; end: 1051c8343;  */

void FUN_1051c8300(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7c0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1051c8344; end: 1051c83a7;  */

void FUN_1051c8344(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8a80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051c83a8; end: 1051c83bb;  */

void FUN_1051c83a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentViewController_animated_c_112621588,
             *(undefined8 *)(param_1 + 0x28),1,0);
  return;
}



/* Entry: 1051c83bc; end: 1051c853b; -[SCContextQuestionStickerActionPerformer _presentKeyboardWithViewController:uiContainer:params:source:completion:] */

void FUN_1051c83bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1051c853c;
  puStack_80 = &UNK_11086e698;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_6);
  uStack_60 = param_6;
  _objc_retain(param_7);
  uStack_58 = param_7;
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051c853c; end: 1051c85af;  */

void FUN_1051c853c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puVar2 = PTR_PTR_1126b5b00;
    _objc_opt_new(PTR_PTR_1126b5b00);
    func_0x00010c0f80c0(uVar3,param_2,puVar2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051c85b0; end: 1051c85eb; -[SCContextQuestionStickerActionPerformer .cxx_destruct] */

void FUN_1051c85b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c85ec; end: 1051c8767; -[SCContextQuickCommentActionPerformer initWithQuickCommentScopeServices:currentUserId:displayNameProvider:avatarProvider:selfieProvider:circumstanceEngine:spotlightLogger:] */

undefined1 *
FUN_1051c85ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6cd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c8768; end: 1051c8e87; -[SCContextQuickCommentActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c8768(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined8 uVar27;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010beeed20();
  if (param_3 == 0x6c) {
    uVar24 = param_8;
    _objc_retainBlock();
    _objc_release(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar24;
    _objc_release(uVar1);
    puVar4 = PTR_DAT_1126a4f38;
    _objc_retain(param_4);
    uVar1 = param_4;
    func_0x00010010fab4(param_4,puVar4);
    uVar24 = param_4;
    if ((int)uVar1 == 0) {
      uVar24 = 0;
    }
    _objc_retain();
    _objc_release(param_4);
    uVar2 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2d20;
    func_0x00010c0ffba0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar2 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    uVar3 = param_6;
    func_0x00010c29d360();
    uVar5 = param_6;
    func_0x0001051dbf6c(param_6);
    func_0x0001051dc02c(uVar3,uVar5,*(undefined8 *)(param_1 + 0x38));
    uVar3 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar5 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar3 = uVar6;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126b5cb0;
    _objc_alloc();
    FUN_1051dc0b4();
    uVar5 = param_6;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf82a80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c25b720();
    uVar3 = uVar2;
    func_0x00010c25c580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24b560(param_6);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar2;
    func_0x00010c24b5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar18;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e4a0();
    _objc_release(uVar2);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar27 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_6;
    func_0x00010c0ea4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf5b400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
    uVar24 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar27;
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar1);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar4);
    uVar24 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c0b04c0(uVar24);
    _objc_release(puVar25);
    _objc_release(uVar24);
    _objc_release(puVar4);
    _objc_release(puVar7);
    ppuVar26 = (undefined **)0x0;
  }
  else {
    ppuVar26 = &PTR____CFConstantStringClassReference_110dcab18;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcab18,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar26);
  return;
}



/* Entry: 1051c8e88; end: 1051c8ecb; -[SCContextQuickCommentActionPerformer _didComplete] */

void FUN_1051c8e88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c8ecc; end: 1051c8f07; -[SCContextQuickCommentActionPerformer didCompleteSpotlightQuickCommentScope] */

void FUN_1051c8ecc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdfccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didComplete_11255ccc8);
    return;
  }
  return;
}


