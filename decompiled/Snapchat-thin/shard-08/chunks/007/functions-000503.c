/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106571a94; end: 106571a9b; -[SCChatInputBarStateManager state] */

undefined8 FUN_106571a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106571a9c; end: 106571aa3; -[SCChatInputBarStateManager allowedInputModalities] */

undefined8 FUN_106571a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106571aa4; end: 106571aab; -[SCChatInputBarStateManager transitionToExpandedWidth] */

undefined8 FUN_106571aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106571aac; end: 106571ab3; -[SCChatInputBarStateManager setTransitionToExpandedWidth:] */

void FUN_106571aac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 106571ab4; end: 106571abb; -[SCChatInputBarStateManager transitionToNormalWidth] */

undefined8 FUN_106571ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106571abc; end: 106571ac3; -[SCChatInputBarStateManager setTransitionToNormalWidth:] */

void FUN_106571abc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 106571ac4; end: 106571adb; -[SCChatInputBarStateManager delegate] */

void FUN_106571ac4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106571adc; end: 106571ae7; -[SCChatInputBarStateManager setDelegate:] */

void FUN_106571adc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106571ae8; end: 106571aff; -[SCChatInputBarStateManager datasource] */

void FUN_106571ae8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106571b00; end: 106571b0b; -[SCChatInputBarStateManager setDatasource:] */

void FUN_106571b00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106571b0c; end: 106571b13; -[SCChatInputBarStateManager cachedInputMode] */

undefined8 FUN_106571b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106571b14; end: 106571b1b; -[SCChatInputBarStateManager setIsCurrentInputModeEmoji:] */

void FUN_106571b14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106571b1c; end: 106571b4f; -[SCChatInputBarStateManager .cxx_destruct] */

void FUN_106571b1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x38);
  return;
}



/* Entry: 106571b50; end: 106571c1f; -[SCChatInputBoundsObservableStackView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106571b50(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1bd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  puVar1 = (undefined8 *)(param_1 + (long)_DAT_11274a8bc);
  uVar2 = param_1;
  func_0x00010bf20c00();
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(param_1);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a8c0);
    func_0x00010bf20c00(param_1);
    func_0x00010c2971a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 106571c20; end: 106571c7f; -[SCChatInputBoundsObservableStackView observableBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106571c20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a8c0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
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



/* Entry: 106571c80; end: 106571c93; -[SCChatInputBoundsObservableStackView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106571c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a8c0,0);
  return;
}



/* Entry: 106571c94; end: 106571c97; -[SCChatInputExpandItemController didDeselectInputItem:] */

void FUN_106571c94(void)

{
  return;
}



/* Entry: 106571c98; end: 106571ccf; -[SCChatInputExpandItemController didSelectInputItem:] */

void FUN_106571c98(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106571cd0; end: 106571cd3; -[SCChatInputExpandItemController didCollapseInputItem:] */

void FUN_106571cd0(void)

{
  return;
}



/* Entry: 106571cd4; end: 106571cd7; -[SCChatInputExpandItemController didUncollapseInputItem:] */

void FUN_106571cd4(void)

{
  return;
}



/* Entry: 106571cd8; end: 106571cef; -[SCChatInputExpandItemController inputController] */

void FUN_106571cd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106571cf0; end: 106571cfb; -[SCChatInputExpandItemController setInputController:] */

void FUN_106571cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106571cfc; end: 106571d13; -[SCChatInputExpandItemController inputItem] */

void FUN_106571cfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106571d14; end: 106571d1f; -[SCChatInputExpandItemController setInputItem:] */

void FUN_106571d14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106571d20; end: 106571d37; -[SCChatInputExpandItemController delegate] */

void FUN_106571d20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106571d38; end: 106571d43; -[SCChatInputExpandItemController setDelegate:] */

void FUN_106571d38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106571d44; end: 106571d73; -[SCChatInputExpandItemController .cxx_destruct] */

void FUN_106571d44(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106571d74; end: 106571e23; -[SCChatInputExpandItemFeature initWithDelegate:] */

undefined1 * FUN_106571d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1be0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb8b8;
    _objc_opt_new(PTR_PTR_1126cb8b8);
    func_0x00010c18b5e0();
    puVar3 = PTR_PTR_1126cb8c0;
    func_0x00010c0841e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106571e24; end: 106571f47; -[SCChatInputExpandItemFeature configureInputItem:] */

void FUN_106571e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar1,param_2,0x7d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4040000000000000,0x4040000000000000,0x4014000000000000,0x4014000000000000,
                      0x4014000000000000,0x4014000000000000,puVar2,param_2,0x85,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000cd);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000cc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa060(param_3,param_2,puVar2,puVar1,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c1ba020(param_3,param_2,0);
  func_0x00010c1a7f60(param_3,param_2,1);
  func_0x00010c223c40(param_3,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106571f48; end: 106571f4f; -[SCChatInputExpandItemFeature featureType] */

undefined8 FUN_106571f48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106571f50; end: 106571f57; -[SCChatInputExpandItemFeature inputItem] */

undefined8 FUN_106571f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106571f58; end: 106571f87; -[SCChatInputExpandItemFeature setInputItem:] */

void FUN_106571f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106571f88; end: 106571fb7; -[SCChatInputExpandItemFeature .cxx_destruct] */

void FUN_106571f88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106571fb8; end: 1065720eb; -[SCChatInputGradientBackgroundView init] */

undefined8 * FUN_106571fb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_1126f1be8;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_58 = puVar3;
    func_0x00010bf41680(0,0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfcd9c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return puVar1;
}



/* Entry: 1065720ec; end: 1065720f7; +[SCChatInputGradientBackgroundView layerClass] */

void FUN_1065720ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 1065720f8; end: 1065720fb; -[SCChatInputGradientBackgroundView gradientLayer] */

void FUN_1065720f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 1065720fc; end: 10657217b; +[SCChatInputItem itemWithImage:darkContentImage:selectedImage:] */

void FUN_1065720fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c01c020();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10657217c; end: 106572303; -[SCChatInputItem init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10657217c(undefined8 param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126f1bf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274a8f0);
    *(undefined1 **)((long)puVar2 + (long)_DAT_11274a8f0) = puVar3;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11274a8f4;
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c14d460();
    bVar1 = (int)puVar5 == 0;
    uVar6 = 0x403e000000000000;
    if (bVar1) {
      uVar6 = 0x4041000000000000;
    }
    uVar8 = 0x4041000000000000;
    if (bVar1) {
      uVar8 = 0x4044800000000000;
    }
    _objc_release(puVar4);
    *(undefined8 *)((long)puVar2 + lVar7) = uVar8;
    ((undefined8 *)((long)puVar2 + lVar7))[1] = uVar6;
    func_0x00010c198080(puVar2);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010bfe90c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(puVar3);
    func_0x00010c181cc0(0x447a0000,puVar2);
    func_0x00010c181f00(0x447a0000,puVar2);
    func_0x00010c181f00(0x447a0000,puVar2);
    puVar4 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
    _objc_opt_new(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
    func_0x00010c00eb20(0x3fc3333333333333);
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274a8f8);
    *(undefined **)((long)puVar2 + (long)_DAT_11274a8f8) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 106572304; end: 10657238b; -[SCChatInputItem initWithImage:darkContentImage:selectedImage:] */

long FUN_106572304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c1a9f40(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10657238c; end: 1065723ff; -[SCChatInputItem setImage:forState:] */

void FUN_10657238c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x00010c188fa0(param_1);
  puStack_38 = PTR_PTR_1126f1bf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setImage_forState__112648218,param_3,param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106572400; end: 1065724df; -[SCChatInputItem setImage:darkContentImage:selectedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106572400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a8fc);
  *(undefined8 *)(param_1 + _DAT_11274a8fc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a900);
  *(undefined8 *)(param_1 + _DAT_11274a900) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c20eaa0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11274a904));
  lVar2 = (long)_DAT_11274a908;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  func_0x00010c1a9fc0(param_1,param_2,*(undefined8 *)(param_1 + lVar2),4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065724e0; end: 10657261b; -[SCChatInputItem setImage:tintColor:darkContentTintColor:selectedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065724e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11274a8fc;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  lVar2 = (long)_DAT_11274a90c;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  _objc_release(uVar1);
  func_0x00010c216160(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a910);
  *(undefined8 *)(param_1 + _DAT_11274a910) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a914);
  *(undefined8 *)(param_1 + _DAT_11274a914) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a908);
  *(undefined8 *)(param_1 + _DAT_11274a908) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  func_0x00010c1a9fc0(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setStyle__1126614d0,*(undefined8 *)(param_1 + _DAT_11274a904));
  return;
}



/* Entry: 10657261c; end: 1065726a7; -[SCChatInputItem setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657261c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c07d660();
  if ((int)param_3 != (int)lVar1) {
    puStack_38 = PTR_PTR_1126f1bf0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_setSelected__11265c598,param_3);
    param_1 = param_1 + _DAT_11274a918;
    _objc_loadWeakRetained(param_1);
    if ((int)param_3 == 0) {
      func_0x00010bf74800();
    }
    else {
      func_0x00010bf7aa40();
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1065726a8; end: 1065726ef; -[SCChatInputItem setCollapsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065726a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a8d8) = param_3;
  func_0x00010c1a7f60();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065726f0; end: 106572717; -[SCChatInputItem setSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065726f0(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  
  pdVar1 = (double *)(param_3 + _DAT_11274a8f4);
  bVar2 = false;
  if ((param_1 == *pdVar1) && (bVar2 = false, !NAN(param_2) && !NAN(pdVar1[1]))) {
    bVar2 = param_2 == pdVar1[1];
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    return;
  }
  return;
}



/* Entry: 106572718; end: 10657272b; -[SCChatInputItem intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106572718(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a8f4);
}



/* Entry: 10657272c; end: 1065727cb; -[SCChatInputItem setImage:animationStyle:completion:] */

void FUN_10657272c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c07d660();
  uVar1 = 4;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  func_0x00010bea47e0(param_1,param_2,param_3,uVar1,param_4,param_5);
  _objc_release(param_5);
  uVar2 = param_1;
  func_0x00010c07d660();
  uVar1 = 0;
  if ((int)uVar2 == 0) {
    uVar1 = 4;
  }
  func_0x00010bea47e0(param_1,param_2,param_3,uVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065727cc; end: 1065728d7; -[SCChatInputItem setImage:selectedImage:animationStyle:completion:] */

void FUN_1065727cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c07d660();
  uVar1 = param_4;
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
  }
  _objc_retain(uVar1);
  uVar3 = param_1;
  func_0x00010c07d660();
  uVar2 = param_3;
  if ((int)uVar3 == 0) {
    uVar2 = param_4;
  }
  _objc_retain(uVar2);
  uVar4 = param_1;
  func_0x00010c07d660();
  uVar3 = 4;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  uVar5 = param_1;
  func_0x00010c07d660();
  uVar4 = 0;
  if ((int)uVar5 == 0) {
    uVar4 = 4;
  }
  func_0x00010bea47e0(param_1,param_2,uVar1,uVar3,param_5,param_6);
  _objc_release(param_6);
  func_0x00010bea47e0(param_1,param_2,uVar2,uVar4,0,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065728d8; end: 106572b6b; -[SCChatInputItem setCustomView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065728d8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar15 = (long)_DAT_11274a91c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar15));
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = 0;
  _objc_release(uVar2);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    *(long *)(param_1 + lVar15) = param_3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar15));
    func_0x00010befbb60(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 4;
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(param_1);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  if (param_4 - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 106572b6c; end: 106572b87; -[SCChatInputItem setHidden:animationStyle:] */

void FUN_106572b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateHidden__1125504c0);
    return;
  }
  if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8);
    return;
  }
  return;
}



/* Entry: 106572b88; end: 106572c9f; -[SCChatInputItem resetImageStateWithAnimationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106572b88(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = (long)_DAT_11274a90c;
  uVar4 = *(ulong *)(param_1 + lVar5);
  uVar1 = param_1;
  func_0x00010bfe7940(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == uVar1) {
    uVar6 = *(ulong *)(param_1 + (long)_DAT_11274a908);
    uVar4 = param_1;
    func_0x00010bfe7940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar6 == uVar4) {
      return;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c07d660();
  if ((uVar1 & 1) == 0) {
    func_0x00010bea47e0(param_1);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11274a908);
    uVar3 = 4;
  }
  else {
    func_0x00010bea47e0(param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImage_forState__112648218,uVar2,uVar3);
  return;
}



/* Entry: 106572ca0; end: 106572d8f; -[SCChatInputItem setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106572ca0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(long *)(param_1 + _DAT_11274a904) = param_3;
  if (param_3 - 1U < 2) {
    lVar2 = *(long *)(param_1 + _DAT_11274a900);
    if (lVar2 != 0) {
      lVar4 = (long)_DAT_11274a90c;
      _objc_retain(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar2;
      _objc_release(uVar1);
    }
    if (*(long *)(param_1 + _DAT_11274a914) == 0) goto LAB_106572d78;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a8fc);
    lVar2 = (long)_DAT_11274a90c;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar3;
    _objc_release(uVar1);
  }
  else {
    if (param_3 != 0) goto LAB_106572d78;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a8fc);
    lVar2 = (long)_DAT_11274a90c;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar3;
    _objc_release(uVar1);
  }
  func_0x00010c216160(param_1);
LAB_106572d78:
                    /* WARNING: Could not recover jumptable at 0x00010c138d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetImageStateWithAnimationStyl_11262bd68,0)
  ;
  return;
}



/* Entry: 106572d90; end: 106572de3; -[SCChatInputItem traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106572d90(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c20eaa0(param_1);
  return;
}



/* Entry: 106572de4; end: 106572ef3; -[SCChatInputItem _animateHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106572de4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar2 = param_1;
  func_0x00010c074c20();
  if (param_3 != (int)lVar2) {
    uVar3 = 0;
    if (param_3 == 0) {
      uVar3 = 0x3ff0000000000000;
    }
    lVar2 = (long)_DAT_11274a8f8;
    func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    _objc_copyWeak(auStack_70,auStack_58);
    uStack_60 = (undefined1)param_3;
    uStack_68 = uVar3;
    func_0x00010bef6cc0(uVar1);
    func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar2));
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106572ef4; end: 106572f8b;  */

void FUN_106572ef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1677c0(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106572f8c; end: 106573093; -[SCChatInputItem _setImage:forState:animationStyle:completion:] */

void FUN_106572f8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010c252440();
  if (param_4 == lVar1) {
    func_0x00010c1cbe20(param_1);
  }
  if (param_5 < 2) {
    if (param_5 == 0) {
      func_0x00010c1a9fc0(param_1);
      func_0x00010c08cdc0(param_1);
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))(param_6,1);
      }
    }
    else if (param_5 == 1) {
      func_0x00010be0de60(param_1);
    }
  }
  else if (param_5 == 2) {
    func_0x00010be758e0(param_1);
  }
  else if (param_5 == 3) {
    func_0x00010bddebc0(param_1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106573094; end: 10657337f; -[SCChatInputItem _circularMaskImage:forState:completion:] */

void FUN_106573094(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_9);
  func_0x00010c1a9fc0(param_5,param_6,param_7,param_8);
  func_0x00010bf20c00(param_5);
  dVar9 = param_4;
  func_0x00010bf20c00(param_5);
  dVar10 = dVar9;
  func_0x00010bf20c00(param_5);
  dVar8 = param_3;
  func_0x00010bf20c00(param_5);
  dVar11 = (param_3 - dVar10) * 0.5;
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  if (dVar10 <= dVar8) {
    dVar8 = dVar10;
  }
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(dVar11,0,param_4,dVar9,dVar8 * 0.5,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_6,puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar1,param_6,puVar4);
  _objc_release(puVar3);
  uVar5 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(dVar11,0,param_4,dVar9,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_6,
                      &PTR____CFConstantStringClassReference_110dbfab8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease(puVar4);
  func_0x00010bdc1040();
  func_0x00010c216920(puVar7,param_6,puVar3);
  func_0x00010c192d40(0x3fd6666666666666,puVar7);
  func_0x00010c19bc40(puVar7,param_6,*(undefined8 *)PTR__kCAFillModeBoth_110346cd8);
  func_0x00010c1ea580(puVar7,param_6,0);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar3 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106573380;
  puStack_a8 = &UNK_1108465d0;
  puStack_a0 = puVar1;
  puStack_98 = puVar4;
  uStack_90 = param_5;
  uStack_88 = param_9;
  _objc_retain(param_9);
  _objc_retain(puVar4);
  _objc_retain(puVar1);
  func_0x00010c17fb40(puVar3,param_6,&puStack_c0);
  func_0x00010bef6c20(puVar1,param_6,puVar7,&PTR____CFConstantStringClassReference_110e540f8);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(uStack_88);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(param_9);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar2);
  return;
}



/* Entry: 106573380; end: 106573417;  */

void FUN_106573380(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retainAutorelease(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106573404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,1);
    return;
  }
  return;
}



/* Entry: 106573418; end: 1065734ff; -[SCChatInputItem _fadeImage:forState:completion:] */

void FUN_106573418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106573500;
  puStack_60 = &UNK_110844b80;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010c27ac60(0x3fc3333333333333,puVar1,param_2,uVar2,0x500000,&puStack_78,param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 106573500; end: 10657352b;  */

void FUN_106573500(long param_1,undefined8 param_2)

{
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10657352c; end: 106573623; -[SCChatInputItem _popImage:forState:completion:] */

void FUN_10657352c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  func_0x00010c1a9fc0(param_1,param_2,param_3,param_4);
  func_0x00010c08cdc0(param_1);
  uVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = 0;
  uStack_60 = 0x3fe6666666666666;
  uStack_48 = 0x3fe6666666666666;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x00010c219960();
  _objc_release(uVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106573624;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,&puStack_88,param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 106573624; end: 10657367f;  */

void FUN_106573624(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 106573680; end: 10657387f; -[SCChatInputItem pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_106573680(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                     long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  ulong uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bf01aa0();
  if ((uVar2 & 1) == 0) {
    puStack_100 = PTR_PTR_1126f1bf0;
    puVar4 = &uStack_108;
    uStack_108 = param_3;
    _objc_msgSendSuper2(param_1,param_2,puVar4,PTR_s_pointInside_withEvent__11261e4e8,param_5);
  }
  else {
    puStack_110 = PTR_PTR_1126f1bf0;
    puVar4 = &uStack_118;
    uStack_118 = param_3;
    _objc_msgSendSuper2(param_1,param_2,puVar4,PTR_s_pointInside_withEvent__11261e4e8,param_5);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar2 != 0) {
        uVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          uVar5 = *(ulong *)(uVar6 * 8);
          dVar7 = param_1;
          uVar9 = param_2;
          func_0x00010bf51200(param_1,param_2,uVar5);
          uVar3 = uVar5;
          dVar8 = dVar7;
          func_0x00010c074c20();
          if (((((uVar3 & 1) == 0) && (uVar3 = uVar5, func_0x00010c082800(), (int)uVar3 != 0)) &&
              (func_0x00010bf01b40(uVar5), 0.0 < dVar8)) &&
             (func_0x00010c102b20(dVar7,uVar9), (uVar5 & 1) != 0)) {
            _objc_release(param_3);
            goto LAB_106573830;
          }
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        uVar2 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      puVar4 = (ulong *)0x0;
    }
    else {
LAB_106573830:
      puVar4 = (ulong *)0x1;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar4;
  }
  ___stack_chk_fail();
  return *(ulong **)(param_5 + _DAT_11274a904);
}



/* Entry: 106573880; end: 10657388f; -[SCChatInputItem style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573880(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a904);
}



/* Entry: 106573890; end: 10657389f; -[SCChatInputItem ignoresVisibleStateChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106573890(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a8dc);
}



/* Entry: 1065738a0; end: 1065738af; -[SCChatInputItem setIgnoresVisibleStateChanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065738a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a8dc) = param_3;
  return;
}



/* Entry: 1065738b0; end: 1065738bf; -[SCChatInputItem visibleStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065738b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a8e0);
}



/* Entry: 1065738c0; end: 1065738cf; -[SCChatInputItem setVisibleStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065738c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274a8e0) = param_3;
  return;
}



/* Entry: 1065738d0; end: 1065738df; -[SCChatInputItem isCollapsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1065738d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a8d8);
}



/* Entry: 1065738e0; end: 1065738f3; -[SCChatInputItem size] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1065738e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a8f4);
}



/* Entry: 1065738f4; end: 106573903; -[SCChatInputItem image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065738f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a8fc);
}



/* Entry: 106573904; end: 106573943; -[SCChatInputItem setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a8fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106573944; end: 106573953; -[SCChatInputItem darkContentImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a900);
}



/* Entry: 106573954; end: 106573993; -[SCChatInputItem setDarkContentImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a900;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106573994; end: 1065739a3; -[SCChatInputItem selectedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a908);
}



/* Entry: 1065739a4; end: 1065739e3; -[SCChatInputItem setSelectedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065739a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a908;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065739e4; end: 106573a03; -[SCChatInputItem delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065739e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106573a04; end: 106573a17; -[SCChatInputItem setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573a04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a918,param_3);
  return;
}



/* Entry: 106573a18; end: 106573a27; -[SCChatInputItem key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a8f0);
}



/* Entry: 106573a28; end: 106573a37; -[SCChatInputItem deeplinkIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573a28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a920);
}



/* Entry: 106573a38; end: 106573a77; -[SCChatInputItem setDeeplinkIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a920;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106573a78; end: 106573a87; -[SCChatInputItem leadingPriority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573a78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a8e4);
}



/* Entry: 106573a88; end: 106573a97; -[SCChatInputItem setLeadingPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274a8e4) = param_3;
  return;
}



/* Entry: 106573a98; end: 106573aa7; -[SCChatInputItem featureTypeIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573a98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a924);
}



/* Entry: 106573aa8; end: 106573ae7; -[SCChatInputItem setFeatureTypeIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a924;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106573ae8; end: 106573af7; -[SCChatInputItem allowsOutOfBoundsTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106573ae8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a8e8);
}



/* Entry: 106573af8; end: 106573b07; -[SCChatInputItem setAllowsOutOfBoundsTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573af8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a8e8) = param_3;
  return;
}



/* Entry: 106573b08; end: 106573b17; -[SCChatInputItem submenuTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573b08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a928);
}



/* Entry: 106573b18; end: 106573b57; -[SCChatInputItem setSubmenuTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a928;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106573b58; end: 106573b67; -[SCChatInputItem inputModality] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106573b58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a8ec);
}



/* Entry: 106573b68; end: 106573b77; -[SCChatInputItem setInputModality:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274a8ec) = param_3;
  return;
}



/* Entry: 106573b78; end: 106573c63; -[SCChatInputItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106573b78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a928,0);
  _objc_storeStrong(param_1 + _DAT_11274a924,0);
  _objc_storeStrong(param_1 + _DAT_11274a920,0);
  _objc_storeStrong(param_1 + _DAT_11274a8f0,0);
  _objc_destroyWeak(param_1 + _DAT_11274a918);
  _objc_storeStrong(param_1 + _DAT_11274a908,0);
  _objc_storeStrong(param_1 + _DAT_11274a900,0);
  _objc_storeStrong(param_1 + _DAT_11274a8fc,0);
  _objc_storeStrong(param_1 + _DAT_11274a914,0);
  _objc_storeStrong(param_1 + _DAT_11274a910,0);
  _objc_storeStrong(param_1 + _DAT_11274a91c,0);
  _objc_storeStrong(param_1 + _DAT_11274a8f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a90c,0);
  return;
}



/* Entry: 106573c64; end: 106573c7f; -[SCChatInputItemDrawerCoordinator willBecomeFirstResponder] */

void FUN_106573c64(long param_1)

{
  if ((*(byte *)(param_1 + 0x7a) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x7a) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdd0390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__attachDrawer__112551a80,*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106573c80; end: 106573f7f; -[SCChatInputItemDrawerCoordinator initWithInputController:drawerContainer:keyboardController:sizeEventPublisher:interactiveDrawerEventPublisher:pluginAttachedFuture:circumstanceEngine:] */

undefined8 *
FUN_106573c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f1bf8;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 8,param_4);
    _objc_storeWeak(puVar1 + 7,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x7b) = (char)uVar2;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf997a0();
    puVar1[0x17] = param_1;
    _objc_release(puVar3);
    func_0x00010be89be0(puVar1);
    func_0x00010be89820(puVar1);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(puVar1);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106573f80; end: 106573fb7;  */

void FUN_106573f80(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdd55e0();
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 106573fb8; end: 1065740a3; +[SCChatInputItemDrawerCoordinator _bottomUnsafeAreaHeight:] */

double FUN_106573fb8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  iVar1 = 2;
  func_0x000100029b9c(2,0xf,4,0);
  if (iVar1 == 0) {
    param_1 = 0.0;
  }
  else {
    uVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c086c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cd20();
    _CGRectGetMaxY();
    dVar4 = param_1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cd20();
    _CGRectGetMaxY();
    _objc_release(uVar3);
    _objc_release(uVar2);
    param_1 = param_1 - dVar4;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1065740a4; end: 1065741f3; -[SCChatInputItemDrawerCoordinator _registerKeyboardNotifications] */

void FUN_1065740a4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065741f4; end: 106574277; -[SCChatInputItemDrawerCoordinator _registerPanGesture] */

void FUN_1065741f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106574278; end: 106574643; -[SCChatInputItemDrawerCoordinator transitionDrawerToState:animated:completion:] */

void FUN_106574278(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6,int param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  double dStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_8);
  lVar2 = param_4;
  func_0x00010c075ec0();
  if ((int)lVar2 == 0) {
    dVar8 = param_1;
    if (param_6 == 2) {
      func_0x00010bfe0840(param_4);
      dVar8 = param_1;
      func_0x00010bfe0840(param_4);
      if (param_1 == dVar8) {
        param_6 = 1;
      }
    }
    func_0x00010bf18e00(param_4);
    func_0x00010bfe0840(param_4);
    lVar2 = param_4 + 0x40;
    dVar7 = dVar8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf89dc0();
    _objc_release(lVar2);
    if (dVar8 != dVar7) {
      if (*(long *)(param_4 + 0xb0) == 0) {
        lVar2 = param_4 + 0xa8;
        _objc_loadWeakRetained();
        lVar3 = lVar2;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c074c20();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)lVar4 != 0) {
          lVar2 = param_4 + 0xa8;
          _objc_loadWeakRetained(lVar2);
          func_0x00010bdc4c40(param_4);
          _objc_release(lVar2);
        }
      }
      lVar2 = param_4 + 0x40;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c191880(dVar8);
      _objc_release(lVar2);
      func_0x00010be34b80(param_4);
      lVar2 = param_4 + 0xa8;
      _objc_loadWeakRetained();
      lVar3 = param_4 + 0x40;
      _objc_loadWeakRetained();
      lVar4 = lVar2;
      func_0x00010c29bf00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010c29bf00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(lVar4);
      if ((param_6 == 0) || (*(long *)(param_4 + 0xb0) != 0)) {
        dVar8 = 0.0;
        if ((param_6 == 0) && (*(long *)(param_4 + 0xb0) != 0)) {
          func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
          dVar8 = -param_3;
        }
      }
      else {
        lVar4 = lVar3;
        func_0x00010c065720(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c148fc0();
        _objc_release(lVar4);
        dVar8 = param_3;
      }
      _objc_initWeak(auStack_68,param_4);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106574644;
      puStack_90 = &UNK_1108502a8;
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(lVar2);
      lStack_88 = lVar2;
      _objc_retain(lVar3);
      ppuVar5 = &puStack_a8;
      lStack_80 = lVar3;
      dStack_70 = dVar8;
      _objc_retainBlock();
      puStack_e8 = puVar1;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_106574844;
      puStack_d0 = &UNK_1108aeb50;
      _objc_copyWeak(auStack_b8,auStack_68);
      lStack_b0 = param_6;
      _objc_retain(lVar2);
      lStack_c8 = lVar2;
      _objc_retain(param_8);
      ppuVar6 = &puStack_e8;
      lStack_c0 = param_8;
      _objc_retainBlock();
      if (param_7 == 0) {
        (*(code *)ppuVar5[2])(ppuVar5);
        (*(code *)ppuVar6[2])(ppuVar6,1);
      }
      else {
        func_0x00010bf03460(0x3fd0000000000000,0,0x3ff0000000000000,0,
                            PTR__OBJC_CLASS___UIView_1126aec20);
      }
      _objc_release(ppuVar6);
      _objc_release(lStack_c0);
      _objc_release(lStack_c8);
      _objc_destroyWeak(auStack_b8);
      _objc_release(ppuVar5);
      _objc_release(lStack_80);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_1065745f8;
    }
    lVar2 = param_4 + 0xa8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bde28e0(param_4);
    _objc_release(lVar2);
  }
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8);
  }
LAB_1065745f8:
  _objc_release(param_8);
  return;
}



/* Entry: 106574644; end: 106574843;  */

void FUN_106574644(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x78) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar5 = param_1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010beed160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar4 = dVar5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar5 = (param_1 - dVar5) - *(double *)(param_2 + 0x38);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
    puVar3 = PTR_PTR_1126cb8b0;
    _objc_alloc(PTR_PTR_1126cb8b0);
    func_0x00010c02f920(dVar4,dVar5);
    func_0x00010c0d9840(uVar2,param_3,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126cb8a8;
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    func_0x00010bf89dc0(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c28c6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c23d160(dVar4,dVar5,*(undefined8 *)(param_2 + 0x20));
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010beed160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    _objc_release(uVar2);
    if (dVar4 != 0.0) {
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


