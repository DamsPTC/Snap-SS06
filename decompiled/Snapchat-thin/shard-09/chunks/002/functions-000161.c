/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106af95e8; end: 106af95ef; -[SCInternalShakeMenuOption dismissS2R] */

undefined1 FUN_106af95e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106af95f0; end: 106af95f7; -[SCInternalShakeMenuOption action] */

undefined8 FUN_106af95f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106af95f8; end: 106af963f; -[SCInternalShakeMenuOption .cxx_destruct] */

void FUN_106af95f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106af9640; end: 106af96db; -[SCCofTweakMenuScope initWithUIContainer:delegate:] */

undefined1 *
FUN_106af9640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106af96dc; end: 106af96e3; -[SCCofTweakMenuScope uiContainer] */

undefined8 FUN_106af96dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106af96e4; end: 106af96fb; -[SCCofTweakMenuScope delegate] */

void FUN_106af96e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af96fc; end: 106af9727; -[SCCofTweakMenuScope .cxx_destruct] */

void FUN_106af96fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106af9728; end: 106af978f; +[SCAirGetSignedUrlRequest descriptor] */

void FUN_106af9728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b14080,
                        &PTR____CFConstantStringClassReference_110e71738,&PTR_DAT_1131708c0,
                        &PTR_s_reportId_1131708d8,1,0x10,0x1c);
    puRam00000001136c6690 = puVar1;
  }
  return;
}



/* Entry: 106af9790; end: 106af97f7; +[SCAirGetTraceUploadUrlRequest descriptor] */

void FUN_106af9790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b140d0,
                        &PTR____CFConstantStringClassReference_110e71758,&PTR_DAT_1131708c0,
                        &PTR_DAT_113170918,10,0x58,0x1c);
    puRam00000001136c6698 = puVar1;
  }
  return;
}



/* Entry: 106af97f8; end: 106af98ef; +[SCAirGetTraceUploadUrlResponse descriptor] */

undefined * FUN_106af97f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c66a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b14120,
                        &PTR____CFConstantStringClassReference_110e71778,&PTR_DAT_1131708c0,
                        &PTR_DAT_1131708f8,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c66a0 = puVar1;
  }
  return puRam00000001136c66a0;
}



/* Entry: 106af98f0; end: 106af9903;  */

void FUN_106af98f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_tokenProvider_11267a680);
  return;
}



/* Entry: 106af9904; end: 106af9977; -[SIGFigmatizerServices initWithFigmatizer:] */

undefined1 * FUN_106af9904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4dd0;
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



/* Entry: 106af9978; end: 106af997f; -[SIGFigmatizerServices figmatizer] */

undefined8 FUN_106af9978(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106af9980; end: 106af998b; -[SIGFigmatizerServices .cxx_destruct] */

void FUN_106af9980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106af998c; end: 106af9ad3; -[SCLegacyLiveLensPreviewUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106af998c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = param_1;
  FUN_106af9ad4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be625a0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar7);
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112757e84);
  }
  lVar7 = (long)_DAT_112757e7c;
  _objc_retain(uVar6);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar1 = param_1;
  FUN_106af9ad4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf2bbc0();
  FUN_106af9ad4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4e080();
  lVar5 = lVar7;
  func_0x00010bf238e0(lVar7,param_2,2,0,0,lVar3,lVar4,lVar2,4,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar6,param_2,lVar5);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 106af9ad4; end: 106af9af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106af9ad4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757e80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af9af8; end: 106af9d0b; -[SCLegacyLiveLensPreviewUIEntryPoint _navigationTypeFromReplyConfiguration:] */

undefined8 FUN_106af9af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  func_0x00010c0bcaa0(param_3);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106af9d0c; end: 106af9f1b;  */

void FUN_106af9d0c(long param_1,undefined8 param_2)

{
  func_0x00010c0d6ca0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106af9f1c; end: 106af9f63; -[SCLegacyLiveLensPreviewUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106af9f1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757e84,0);
  _objc_destroyWeak(param_1 + _DAT_112757e7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757e80);
  return;
}



/* Entry: 106af9f64; end: 106afa027; -[SCLensCTAButtonController initWithDependencyProvider:lensCTAHandler:arBarNavigation:] */

undefined1 *
FUN_106af9f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4dd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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



/* Entry: 106afa028; end: 106afa467; -[SCLensCTAButtonController ctaButton] */

void FUN_106afa028(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c181ee0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c182ae0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4029000000000000);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar4);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4000000000000000);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar4);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f333333);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4008000000000000);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar4);
    _objc_release(puVar1);
    uVar6 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar7 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(uVar6,uVar7);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
    func_0x00010c181e40(0,0x4028000000000000,0,0x4028000000000000,*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar4);
    _objc_release(puVar1);
    func_0x00010befbd60(*(undefined8 *)(param_1 + 0x20));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar6);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + 0x20));
    lVar5 = *(long *)(param_1 + 0x20);
    unaff_x19 = param_1;
  }
  lVar3 = lVar5;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106afa468;
  lStack_80 = lVar5;
  lStack_78 = unaff_x19;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_88,lVar3);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010bf83b20(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 106afa468; end: 106afa52f; -[SCLensCTAButtonController ctaButtonPressed] */

void FUN_106afa468(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83b20(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106afa530; end: 106afa563;  */

void FUN_106afa530(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be26a20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106afa564; end: 106afa5c3; -[SCLensCTAButtonController pointInsideLensCtaButton:] */

undefined8 FUN_106afa564(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb68e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return uVar2;
  }
  return 0;
}



/* Entry: 106afa5c4; end: 106afa67b; -[SCLensCTAButtonController updateCtaButtonContentAndConstraints] */

void FUN_106afa5c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bef0a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be4ae80(param_1,param_2,lVar2);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfaef40(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,0);
      _objc_release(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106afa67c; end: 106afa6cb; -[SCLensCTAButtonController setLensCtaButtonHidden:lens:] */

void FUN_106afa67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb520(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106afa6cc; end: 106afa8fb; -[SCLensCTAButtonController setLensCtaButtonHidden:lensId:] */

void FUN_106afa6cc(double param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  double dStack_58;
  
  _objc_retain(param_5);
  if ((param_4 == 0) || (*(long *)(param_2 + 0x20) != 0)) {
    lVar1 = param_2;
    func_0x00010bf5d100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (((param_4 ^ lVar2 != 0) & 1) == 0) {
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      lVar3 = param_2;
      func_0x00010bf5d100(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf01b40();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (param_1 == (double)(param_4 ^ 1)) {
        func_0x00010c284b80(param_2);
        goto LAB_106afa8d8;
      }
    }
    if ((param_4 & 1) == 0) {
      lVar1 = param_2;
      func_0x00010bf5d100(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(lVar1);
      lVar1 = param_2 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0904e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bf5d100(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10a6c0(lVar2,param_3,lVar3,param_5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c284b80(param_2);
    }
    lVar1 = param_2;
    func_0x00010bf5d100(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106afa8fc;
    puStack_68 = &UNK_110848c48;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106afa940;
    puStack_98 = &UNK_110857498;
    uStack_88 = (undefined1)param_4;
    lStack_90 = param_2;
    lStack_60 = param_2;
    dStack_58 = (double)(param_4 ^ 1);
    func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0,
                        &puStack_80,&puStack_b0);
  }
LAB_106afa8d8:
  _objc_release(param_5);
  return;
}



/* Entry: 106afa8fc; end: 106afa93f;  */

void FUN_106afa8fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5d100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afa940; end: 106afa9c3;  */

void FUN_106afa940(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf099a0();
  if ((int)lVar3 == 0) {
    _objc_release(lVar2);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x28);
    _objc_release(lVar2);
    if (cVar1 == '\0') {
      return;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5d100(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106afa9c4; end: 106afaa4b; -[SCLensCTAButtonController finalCtaTitleForLens:] */

void FUN_106afa9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdf64c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be0e4c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106afaa4c; end: 106afabab; -[SCLensCTAButtonController _fallbackCtaTitleForLens:] */

void FUN_106afaa4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c281520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0d600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e45438;
  func_0x00010bf32ee0();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e717b8;
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e45458;
    func_0x00010bf32ee0();
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e99c78;
      func_0x00010bf32ee0();
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e45478;
        func_0x00010bf32ee0();
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar5 = (undefined **)0x0;
          goto LAB_106afab78;
        }
        ppuVar5 = &PTR____CFConstantStringClassReference_110e717f8;
        goto LAB_106afab64;
      }
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110e717d8;
  }
LAB_106afab64:
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
LAB_106afab78:
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106afabac; end: 106afb2b3; -[SCLensCTAButtonController _ctaTitleForLens:] */

void FUN_106afabac(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  ppuVar5 = param_3;
  func_0x00010c281520(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar5;
  func_0x00010c09e4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar2 != 0) {
    _objc_retain(ppuVar1);
    ppuVar5 = ppuVar1;
    goto LAB_106afb27c;
  }
  ppuVar5 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar5;
  func_0x00010bf5d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar5);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar5 = (undefined **)0x0;
    goto LAB_106afb27c;
  }
  ppuVar5 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar5;
  func_0x00010bf5d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar5);
  ppuVar3 = ppuVar4;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c0720c0();
  if ((int)ppuVar5 == 0) {
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71878;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71898;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e718d8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71918;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e717d8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e717b8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71998;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e719d8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71a18;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71a58;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71a98;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71ad8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e717f8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71b18;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71b58;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71b98;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71bd8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71c18;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71c58;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71c98;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71cd8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71d18;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71d58;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71d98;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71dd8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71e18;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71e58;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71e98;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71ed8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71f18;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71f58;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71f98;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e71fd8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72018;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72058;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72098;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e720d8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72118;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72158;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72178;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e721b8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e721f8;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72238;
      goto LAB_106afb258;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e72278;
      goto LAB_106afb258;
    }
    _objc_retain(ppuVar3);
    ppuVar5 = ppuVar3;
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e71838;
LAB_106afb258:
    func_0x00010bcbeaa8(ppuVar5,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
LAB_106afb27c:
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106afb2b4; end: 106afb37f; -[SCLensCTAButtonController tapAttachmentButtonForLens:] */

void FUN_106afb2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106afb354;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106afb380; end: 106afb48b; -[SCLensCTAButtonController showAttachmentButtonForLens:] */

void FUN_106afb380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106afb434;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106afb48c; end: 106afb547; -[SCLensCTAButtonController hideAttachmentButton] */

void FUN_106afb48c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106afb514;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106afb548; end: 106afb5fb; -[SCLensCTAButtonController _lensHasAttachment:] */

bool FUN_106afb548(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2cb20();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_3;
    func_0x00010c281520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf0d600();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    bVar1 = lVar6 != 0;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106afb5fc; end: 106afb6ab; -[SCLensCTAButtonController _handleCTAButtonPressed] */

void FUN_106afb5fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bef0a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd05a0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    lVar1 = lVar2;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2364c0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106afb6ac; end: 106afb6ef; -[SCLensCTAButtonController .cxx_destruct] */

void FUN_106afb6ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106afb6f0; end: 106afb81b; -[SCLensCTACarouselEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afb6f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126d0670;
  _objc_alloc(PTR_PTR_1126d0670);
  lVar2 = param_1 + _DAT_112757e98;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c090440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c090420();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112757ea4;
    _objc_loadWeakRetained(lVar8);
  }
  lVar5 = lVar8;
  func_0x00010c092a60(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022b20(puVar1,param_2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126d0678;
  _objc_alloc(PTR_PTR_1126d0678);
  func_0x00010bffa400();
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112757ea8);
  }
  func_0x00010bf9d660(uVar7,param_2,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106afb81c; end: 106afb87b; -[SCLensCTACarouselEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afb81c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757ea8,0);
  _objc_destroyWeak(param_1 + _DAT_112757ea4);
  _objc_destroyWeak(param_1 + _DAT_112757e98);
  _objc_destroyWeak(param_1 + _DAT_112757ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757e9c);
  return;
}



/* Entry: 106afb87c; end: 106afb91f; -[SCLensCTACarouselViewControllerProviderImpl initWithLensCTAHandler:arBarNavigation:] */

undefined1 *
FUN_106afb87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4de0;
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



/* Entry: 106afb920; end: 106afb97b; -[SCLensCTACarouselViewControllerProviderImpl newCTAViewControllerWithDependencyProvider:] */

undefined * FUN_106afb920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0680;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b7e0();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106afb97c; end: 106afb9ab; -[SCLensCTACarouselViewControllerProviderImpl .cxx_destruct] */

void FUN_106afb97c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106afb9ac; end: 106afb9ef; -[SCLensNavigationLoggingWorkflowEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afb9ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdf5ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112757eb4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar3),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 106afb9f0; end: 106afba47; -[SCLensNavigationLoggingWorkflowEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afb9f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_112757eb4));
  puStack_28 = PTR_PTR_1126f4de8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afba48; end: 106afbb63; -[SCLensNavigationLoggingWorkflowEntryPoint _createWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afba48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_112757eb8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0974c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112757ebc;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfdf1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112757ec0;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112757ec4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126d0688;
  _objc_alloc(PTR_PTR_1126d0688);
  func_0x00010c0259a0();
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106afbb64; end: 106afbbcf; -[SCLensNavigationLoggingWorkflowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afbb64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757ec0);
  _objc_destroyWeak(param_1 + _DAT_112757eb8);
  _objc_destroyWeak(param_1 + _DAT_112757ebc);
  _objc_destroyWeak(param_1 + _DAT_112757ec4);
  _objc_destroyWeak(param_1 + _DAT_112757ec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757eb4,0);
  return;
}



/* Entry: 106afbbd0; end: 106afbc13; -[SCLensSnapCaptureLoggingWorkflowEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afbbd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdf5ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112757ecc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar3),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 106afbc14; end: 106afbc6b; -[SCLensSnapCaptureLoggingWorkflowEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afbc14(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_112757ecc));
  puStack_28 = PTR_PTR_1126f4df0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afbc6c; end: 106afbd43; -[SCLensSnapCaptureLoggingWorkflowEntryPoint _createWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afbc6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + _DAT_112757ed0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0974c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112757ed4;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d0690;
  _objc_alloc(PTR_PTR_1126d0690);
  param_1 = param_1 + _DAT_112757ed8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c025980(puVar4,param_2,lVar2,param_1,lVar3);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106afbd44; end: 106afbd97; -[SCLensSnapCaptureLoggingWorkflowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afbd44(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757ed4);
  _objc_destroyWeak(param_1 + _DAT_112757ed0);
  _objc_destroyWeak(param_1 + _DAT_112757ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757ecc,0);
  return;
}



/* Entry: 106afbd98; end: 106afbeaf; -[SCLensNavigationLoggingWorkflow initWithLensThumbnailLogger:headerButtonEventsObservable:currentPageTracker:lensPerformerProvider:] */

undefined1 *
FUN_106afbd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4df8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106afbeb0; end: 106afbeb3; -[SCLensNavigationLoggingWorkflow begin] */

void FUN_106afbeb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createSubsriptions_11255aaa8);
  return;
}



/* Entry: 106afbeb4; end: 106afbeb7; -[SCLensNavigationLoggingWorkflow end] */

void FUN_106afbeb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSubscriptions_112582950);
  return;
}



/* Entry: 106afbeb8; end: 106afc09f; -[SCLensNavigationLoggingWorkflow _createSubsriptions] */

void FUN_106afbeb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5f7c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e0ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106afc0a0;
  puStack_78 = &UNK_1108d4d30;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar1 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106afc0a0; end: 106afc243;  */

void FUN_106afc0a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106afc244;
  puStack_80 = &UNK_1108434b0;
  _objc_copyWeak(auStack_78,param_1 + 0x20);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106afc278;
  puStack_a8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a0,param_1 + 0x20);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106afc2ac;
  puStack_d0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c8,param_1 + 0x20);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x106afc2e0;
  puStack_f8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  _objc_copyWeak(auStack_118,param_1 + 0x20);
  func_0x00010c0bd760(param_2);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 106afc244; end: 106afc347;  */

void FUN_106afc244(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be01180(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106afc348; end: 106afc403;  */

void FUN_106afc348(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c02c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106afc404; end: 106afc407;  */

void FUN_106afc404(void)

{
  return;
}



/* Entry: 106afc408; end: 106afc49f;  */

void FUN_106afc408(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfe9c0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106afc4a0; end: 106afc4a7;  */

void FUN_106afc4a0(void)

{
  return;
}



/* Entry: 106afc4a8; end: 106afc4af; -[SCLensNavigationLoggingWorkflow _resetSubscriptions] */

void FUN_106afc4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 106afc4b0; end: 106afc4e7; -[SCLensNavigationLoggingWorkflow _didTapProfileHeaderButton] */

void FUN_106afc4b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afc4e8; end: 106afc51f; -[SCLensNavigationLoggingWorkflow _didTapSearchHeaderButton] */

void FUN_106afc4e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afc520; end: 106afc557; -[SCLensNavigationLoggingWorkflow _didTapAddFriendsHeaderButton] */

void FUN_106afc520(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afc558; end: 106afc58f; -[SCLensNavigationLoggingWorkflow _didTapMapHeaderButton] */

void FUN_106afc558(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afc590; end: 106afc5c7; -[SCLensNavigationLoggingWorkflow _didTapNotificationCenterHeaderButton] */

void FUN_106afc590(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afc5c8; end: 106afc6b7; -[SCLensNavigationLoggingWorkflow _didNavigateFromPage:toPage:] */

void FUN_106afc5c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f59b38);
  if (((int)param_3 != 0) &&
     ((((uVar1 = param_4,
        func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f59bb8),
        (uVar1 & 1) != 0 ||
        (uVar1 = param_4,
        func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110eb57b8),
        (uVar1 & 1) != 0)) ||
       (uVar1 = param_4,
       func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f5a898),
       (uVar1 & 1) != 0)) ||
      (uVar1 = param_4,
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e30ab8),
      (int)uVar1 != 0)))) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32580();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106afc6b8; end: 106afc70b; -[SCLensNavigationLoggingWorkflow .cxx_destruct] */

void FUN_106afc6b8(long param_1)

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



/* Entry: 106afc70c; end: 106afc7eb; -[SCLensSnapCaptureLoggingWorkflow initWithLensThumbnailLogger:captureServiceScope:lensPerformerProvider:] */

undefined1 *
FUN_106afc70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4e00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106afc7ec; end: 106afc7ef; -[SCLensSnapCaptureLoggingWorkflow begin] */

void FUN_106afc7ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createSubsriptions_11255aaa8);
  return;
}



/* Entry: 106afc7f0; end: 106afc7f3; -[SCLensSnapCaptureLoggingWorkflow end] */

void FUN_106afc7f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSubscriptions_112582950);
  return;
}



/* Entry: 106afc7f4; end: 106afc94b; -[SCLensSnapCaptureLoggingWorkflow _createSubsriptions] */

void FUN_106afc7f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010beeed00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_initWeak(auStack_48,param_1);
  lVar3 = lVar4;
  func_0x00010c0e0ea0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar5 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 106afc94c; end: 106afca47;  */

void FUN_106afc94c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106afca48;
  puStack_50 = &UNK_11090b7c8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bcea0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106afca48; end: 106afca7b;  */

void FUN_106afca48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be00ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106afca7c; end: 106afca7f;  */

void FUN_106afca7c(void)

{
  return;
}



/* Entry: 106afca80; end: 106afcab3;  */

void FUN_106afca80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be00b00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106afcab4; end: 106afcab7;  */

void FUN_106afcab4(void)

{
  return;
}



/* Entry: 106afcab8; end: 106afcabf; -[SCLensSnapCaptureLoggingWorkflow _resetSubscriptions] */

void FUN_106afcab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 106afcac0; end: 106afcaf7; -[SCLensSnapCaptureLoggingWorkflow _didTakeSnap] */

void FUN_106afcac0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afcaf8; end: 106afcb2f; -[SCLensSnapCaptureLoggingWorkflow _didTakeVideoSnap] */

void FUN_106afcaf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106afcb30; end: 106afcb73; -[SCLensSnapCaptureLoggingWorkflow .cxx_destruct] */

void FUN_106afcb30(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106afcb74; end: 106afcc3f; -[SCLensExplorerCategoriesActionLogger initWithLogger:loggingContext:performer:] */

undefined1 *
FUN_106afcb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4e08;
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



/* Entry: 106afcc40; end: 106afcc4b; -[SCLensExplorerCategoriesActionLogger logUnlockActionWithLoggingData:] */

void FUN_106afcc40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logActionEventWithActionType_lo_1125718c0,1,param_3);
  return;
}



/* Entry: 106afcc4c; end: 106afcc57; -[SCLensExplorerCategoriesActionLogger logOpenProfileActionWithLoggingData:] */

void FUN_106afcc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logActionEventWithActionType_lo_1125718c0,0,param_3);
  return;
}



/* Entry: 106afcc58; end: 106afcc63; -[SCLensExplorerCategoriesActionLogger logOpenHeroTileActionWithLoggingData:] */

void FUN_106afcc58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logActionEventWithActionType_lo_1125718c0,3,param_3);
  return;
}



/* Entry: 106afcc64; end: 106afcc6f; -[SCLensExplorerCategoriesActionLogger logOpenPageActionWithLoggingData:] */

void FUN_106afcc64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logActionEventWithActionType_lo_1125718c0,4,param_3);
  return;
}



/* Entry: 106afcc70; end: 106afcd07; -[SCLensExplorerCategoriesActionLogger _logActionEventWithActionType:loggingData:] */

void FUN_106afcc70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106afcd08;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106afcd08; end: 106afcf0f;  */

void FUN_106afcd08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0b39c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c084c40(uVar1);
  FUN_106b007e0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e72338);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c084640(uVar4);
  func_0x00010c0df840(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e72518);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11fc00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110e723d8);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11fc20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110e723f8);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c094540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110e72418);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110e72478);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e72458);
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4ae20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110e72558);
  _objc_release(uVar1);
  func_0x00010c0a5a00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e725b8,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106afcf10; end: 106afcf4b; -[SCLensExplorerCategoriesActionLogger .cxx_destruct] */

void FUN_106afcf10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106afcf4c; end: 106afd027; -[SCLensExplorerCategoriesButtonActionLogger initWithLogger:sessionIdentifier:productMode:performer:] */

undefined1 *
FUN_106afcf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4e10;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106afd028; end: 106afd1cb; -[SCLensExplorerCategoriesButtonActionLogger logOpenPageActionWithItemId:] */

void FUN_106afd028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106afd0b8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106afd1cc; end: 106afd207; -[SCLensExplorerCategoriesButtonActionLogger .cxx_destruct] */

void FUN_106afd1cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106afd208; end: 106afd34b; -[SCGamesExplorerCategoriesLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afd208(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  puVar3 = PTR_PTR_1126d06a0;
  _objc_alloc(PTR_PTR_1126d06a0);
  func_0x00010c045400();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112757f34);
  }
  _objc_retain(uVar4);
  func_0x00010bf9d660(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106afd34c; end: 106afd38b;  */

void FUN_106afd34c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106afd38c; end: 106afd5f7; -[SCGamesExplorerCategoriesLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afd38c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757f28;
    _objc_loadWeakRetained(lVar10);
  }
  lVar2 = lVar10;
  func_0x00010c095b60(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757f1c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010bf970e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(lVar10);
  puVar5 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  lVar10 = param_1;
  func_0x00010be4abe0(param_1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  lVar2 = param_1;
  FUN_106afd5f8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112757f30;
    _objc_loadWeakRetained(lVar11);
  }
  lVar8 = lVar11;
  func_0x00010c0d79a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112757f2c;
    _objc_loadWeakRetained();
  }
  uVar1 = 8;
  if ((int)lVar3 == 0) {
    uVar1 = 0xb;
  }
  lVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar5,param_2,lVar10,puVar6,lVar4,lVar7,lVar8,lVar3,uVar1,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(lVar10);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106afd5f8; end: 106afd61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afd5f8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757f24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afd61c; end: 106afd6b3; -[SCGamesExplorerCategoriesLoggerEntryPoint _lensExplorerLoggerWithPerformer:] */

void FUN_106afd61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d06b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_106afd5f8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034a60(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106afd6b4; end: 106afd72b; -[SCGamesExplorerCategoriesLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afd6b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757f34,0);
  _objc_destroyWeak(param_1 + _DAT_112757f30);
  _objc_destroyWeak(param_1 + _DAT_112757f2c);
  _objc_destroyWeak(param_1 + _DAT_112757f28);
  _objc_destroyWeak(param_1 + _DAT_112757f24);
  _objc_destroyWeak(param_1 + _DAT_112757f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757f1c);
  return;
}



/* Entry: 106afd72c; end: 106afd843; -[SCLensExplorerARBarCategoriesLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afd72c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112757f50);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}


