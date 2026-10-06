/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066b46c8; end: 1066b470f;  */

void FUN_1066b46c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2226c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066b4710; end: 1066b4807; -[SCLensExplorerStoryCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b4710(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cce60;
  _objc_opt_class(PTR_PTR_1126cce60);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11274de18;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 != 0) {
    func_0x00010c1112a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274de08));
    _objc_release(lVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c29f340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11274de10));
    _objc_release(uVar4);
    func_0x00010bead480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b4808; end: 1066b480b; -[SCLensExplorerStoryCollectionViewCell _setupKarma] */

void FUN_1066b4808(void)

{
  return;
}



/* Entry: 1066b480c; end: 1066b481b; -[SCLensExplorerStoryCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b480c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274de1c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee1230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStyle_112595e30);
  return;
}



/* Entry: 1066b481c; end: 1066b48ab; -[SCLensExplorerStoryCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b481c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11274de20;
    if (param_3 != *(long *)(param_1 + lVar3)) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126ccef0;
      _objc_alloc();
      func_0x00010bfff980();
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274de24);
      *(undefined **)(param_1 + _DAT_11274de24) = puVar2;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b48ac; end: 1066b48bb; -[SCLensExplorerStoryCollectionViewCell _didTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b48ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274de24),PTR_s_performActionOnTap_11261ba70);
  return;
}



/* Entry: 1066b48bc; end: 1066b4937; -[SCLensExplorerStoryCollectionViewCell _makeContainerView] */

void FUN_1066b48bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b4938; end: 1066b4a6b; -[SCLensExplorerStoryCollectionViewCell _makePreviewImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b4938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c219b60();
  func_0x00010c182220(puVar1,param_2,2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  lVar4 = (long)_DAT_11274de1c;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad,
                      *(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66,
                      *(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b4a6c; end: 1066b4c53; -[SCLensExplorerStoryCollectionViewCell _makeGradientView] */

void FUN_1066b4a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccee8;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c80();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = puVar2;
  puStack_70 = puVar4;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = puVar2;
  puStack_68 = puVar4;
  func_0x00010bf414e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new(PTR_PTR_1126aea58);
    func_0x00010c219b60();
    func_0x00010c21ad00(puVar1,param_2,0x18);
    func_0x00010c212f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    func_0x00010c1cfce0(puVar1,param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1c83a0(0x3ff0000000000000,puVar1);
    func_0x00010c213040(puVar1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b4c54; end: 1066b4cf7; -[SCLensExplorerStoryCollectionViewCell _makeViewCountLabel] */

void FUN_1066b4c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar1,param_2,0x18);
  func_0x00010c212f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c1cfce0(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1c83a0(0x3ff0000000000000,puVar1);
  func_0x00010c213040(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b4cf8; end: 1066b4ddb; -[SCLensExplorerStoryCollectionViewCell _makeViewCountIconView] */

void FUN_1066b4cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4028000000000000,0x4028000000000000,0x3ff0000000000000,0x4000000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x217,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c219b60();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c182220(puVar1,param_2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b4ddc; end: 1066b4e7b; -[SCLensExplorerStoryCollectionViewCell _updateStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b4ddc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274de08;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad,
                        *(undefined8 *)(param_1 + _DAT_11274de1c));
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1066b4e7c; end: 1066b4e8b; -[SCLensExplorerStoryCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b4e7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274de20);
}



/* Entry: 1066b4e8c; end: 1066b4e9b; -[SCLensExplorerStoryCollectionViewCell visibleFraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b4e8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ddfc);
}



/* Entry: 1066b4e9c; end: 1066b4eab; -[SCLensExplorerStoryCollectionViewCell setVisibleFraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b4e9c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274ddfc) = param_1;
  return;
}



/* Entry: 1066b4eac; end: 1066b4ebb; -[SCLensExplorerStoryCollectionViewCell sectionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b4eac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274de28);
}



/* Entry: 1066b4ebc; end: 1066b4ec7; -[SCLensExplorerStoryCollectionViewCell setSectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b4ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066b4ec8; end: 1066b4ed7; -[SCLensExplorerStoryCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b4ec8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274de18);
}



/* Entry: 1066b4ed8; end: 1066b4f97; -[SCLensExplorerStoryCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b4ed8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274de18,0);
  _objc_storeStrong(param_1 + _DAT_11274de28,0);
  _objc_storeStrong(param_1 + _DAT_11274de20,0);
  _objc_storeStrong(param_1 + _DAT_11274de24,0);
  _objc_storeStrong(param_1 + _DAT_11274de00,0);
  _objc_storeStrong(param_1 + _DAT_11274de14,0);
  _objc_storeStrong(param_1 + _DAT_11274de10,0);
  _objc_storeStrong(param_1 + _DAT_11274de0c,0);
  _objc_storeStrong(param_1 + _DAT_11274de08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274de04,0);
  return;
}



/* Entry: 1066b4f98; end: 1066b5103; -[SCLensExlorerActionableSectionHeaderProvider initWithSectionTitle:sectionSubtitle:actionIdentifier:accessibilityIdentifier:actionDataModel:actionHandler:styleOverrider:] */

undefined1 *
FUN_1066b4f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2640;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066b5104; end: 1066b51cf; -[SCLensExlorerActionableSectionHeaderProvider headerModel] */

void FUN_1066b5104(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126ccef8;
  _objc_alloc(PTR_PTR_1126ccef8);
  puVar3 = PTR_PTR_1126ccf00;
  func_0x00010beef360(PTR_PTR_1126ccf00);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccf08;
  func_0x00010c155e80(PTR_PTR_1126ccf08);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b78f8;
  _objc_opt_class(PTR_PTR_1126b78f8);
  puVar1 = PTR_PTR_1126b78f0;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bfe09e0(puVar1,param_2,puVar6);
  func_0x00010c061c20(puVar2,param_2,puVar3,puVar4,puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066b51d0; end: 1066b53f7; -[SCLensExlorerActionableSectionHeaderProvider configureHeader:viewKind:] */

void FUN_1066b51d0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ccf00;
  _objc_retain(param_4);
  func_0x00010beef360(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b78f8;
  if ((int)uVar3 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(uVar4);
    func_0x00010c23bac0(PTR__OBJC_CLASS___UIColor_1126aea70);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2165a0();
    _objc_release(uVar4);
    func_0x00010c06d500();
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0();
    _objc_release(uVar4);
    func_0x00010c23bac0(PTR__OBJC_CLASS___UIColor_1126aea70);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f7a0();
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010670dee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161640(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181fe0(0,0x3810000000000000,0,0x3810000000000000);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b53f8; end: 1066b5467; -[SCLensExlorerActionableSectionHeaderProvider handleTap:] */

void FUN_1066b53f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x30),param_2,param_3,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b5468; end: 1066b54c7; -[SCLensExlorerActionableSectionHeaderProvider .cxx_destruct] */

void FUN_1066b5468(long param_1)

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



/* Entry: 1066b54c8; end: 1066b554b; -[SCLensExlorerFavoritesOnboardingSectionHeaderProvider initWithOnboardingActionHandler:styleOverride:] */

undefined1 *
FUN_1066b54c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2648;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066b554c; end: 1066b55eb; -[SCLensExlorerFavoritesOnboardingSectionHeaderProvider headerModel] */

void FUN_1066b554c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ccef8;
  _objc_alloc(PTR_PTR_1126ccef8);
  puVar2 = PTR_PTR_1126ccf00;
  func_0x00010bfa14a0(PTR_PTR_1126ccf00);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccf08;
  func_0x00010c155c80(PTR_PTR_1126ccf08);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccf10;
  _objc_opt_class(PTR_PTR_1126ccf10);
  func_0x00010c061c20(0x4044000000000000,puVar1,param_2,puVar2,puVar3,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b55ec; end: 1066b56f3; -[SCLensExlorerFavoritesOnboardingSectionHeaderProvider configureHeader:viewKind:] */

void FUN_1066b55ec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ccf00;
  _objc_retain(param_4);
  func_0x00010bfa14a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ccf10;
  if ((int)uVar3 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar4 = uVar1;
    func_0x00010c161980(uVar1);
    func_0x00010670def8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar1);
    _objc_release(uVar4);
    func_0x00010c28a7c0(uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b56f4; end: 1066b56ff; -[SCLensExlorerFavoritesOnboardingSectionHeaderProvider .cxx_destruct] */

void FUN_1066b56f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b5700; end: 1066b5707; -[SCLensExlorerNullSectionHeaderProvider headerModel] */

undefined8 FUN_1066b5700(void)

{
  return 0;
}



/* Entry: 1066b5708; end: 1066b570b; -[SCLensExlorerNullSectionHeaderProvider configureHeader:viewKind:] */

void FUN_1066b5708(void)

{
  return;
}



/* Entry: 1066b570c; end: 1066b57f3; -[SCLensExplorerCategorySectionProvider initWithSectionTitle:sectionSubtitle:accessibilityIdentifier:styleOverride:] */

undefined1 *
FUN_1066b570c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2650;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066b57f4; end: 1066b58bf; -[SCLensExplorerCategorySectionProvider headerModel] */

void FUN_1066b57f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126ccef8;
  _objc_alloc(PTR_PTR_1126ccef8);
  puVar3 = PTR_PTR_1126ccf00;
  func_0x00010c155e20(PTR_PTR_1126ccf00);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccf08;
  func_0x00010c155e80(PTR_PTR_1126ccf08);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b78f8;
  _objc_opt_class(PTR_PTR_1126b78f8);
  puVar1 = PTR_PTR_1126b78f0;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bfe09e0(puVar1,param_2,puVar6);
  func_0x00010c061c20(puVar2,param_2,puVar3,puVar4,puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066b58c0; end: 1066b5a9b; -[SCLensExplorerCategorySectionProvider configureHeader:viewKind:] */

void FUN_1066b58c0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ccf00;
  _objc_retain(param_4);
  func_0x00010c155e20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b78f8;
  if ((int)uVar3 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(uVar4);
    func_0x00010c23bac0(PTR__OBJC_CLASS___UIColor_1126aea70);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2165a0();
    _objc_release(uVar4);
    func_0x00010c078d80();
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0();
    _objc_release(uVar4);
    func_0x00010c23bac0(PTR__OBJC_CLASS___UIColor_1126aea70);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f7a0();
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181fe0(0,0x3810000000000000,0,0x3810000000000000);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b5a9c; end: 1066b5ad7; -[SCLensExplorerCategorySectionProvider .cxx_destruct] */

void FUN_1066b5a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b5ad8; end: 1066b5b27; -[SCLensExplorerNullSectionHeaderProvider headerModel] */

void FUN_1066b5ad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccef8;
  _objc_alloc(PTR_PTR_1126ccef8);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010c061c20(0,puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066b5b28; end: 1066b5b2b; -[SCLensExplorerNullSectionHeaderProvider configureHeader:viewKind:] */

void FUN_1066b5b28(void)

{
  return;
}



/* Entry: 1066b5b2c; end: 1066b5ba3; -[SCLensExplorerFavoritesOnboardingSectionHeaderView initWithFrame:] */

undefined1 * FUN_1066b5b2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2658;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb09c0(puVar1);
    func_0x00010beb0140(puVar1);
    func_0x00010beae4c0(puVar1);
    func_0x00010beabac0(puVar1);
    func_0x00010beacc60(puVar1);
    func_0x00010bead480(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066b5ba4; end: 1066b5c43; -[SCLensExplorerFavoritesOnboardingSectionHeaderView updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b5ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274de60),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274de64),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b5c44; end: 1066b5d0b; -[SCLensExplorerFavoritesOnboardingSectionHeaderView _setupTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b5c44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274de60);
  *(undefined **)(param_1 + _DAT_11274de60) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b5d0c; end: 1066b5dff; -[SCLensExplorerFavoritesOnboardingSectionHeaderView _setupSubTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b5d0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010670df28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c23d620(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274de64);
  *(undefined **)(param_1 + _DAT_11274de64) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b5e00; end: 1066b5f77; -[SCLensExplorerFavoritesOnboardingSectionHeaderView _setupNewLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b5e00(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010bf20c00(param_4);
  func_0x00010c013de0();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_5,1);
  func_0x00010c213040(puVar1,param_5,1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c17d4c0(puVar1,param_5,1);
  func_0x00010670df10();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_5,0);
  func_0x00010c23d620(puVar1);
  func_0x00010bf20c00(puVar1);
  *(double *)(param_4 + _DAT_11274de68) = param_3 + 12.0;
  uVar3 = *(undefined8 *)(param_4 + _DAT_11274de6c);
  *(undefined **)(param_4 + _DAT_11274de6c) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  func_0x00010befbb60(param_4,param_5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b5f78; end: 1066b6373; -[SCLensExplorerFavoritesOnboardingSectionHeaderView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b5f78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar27 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = (long)_DAT_11274de60;
  uVar1 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar29);
  uStack_b8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_11274de6c;
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  uStack_b0 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_11274de68));
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar28);
  uStack_a8 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493c0(0x4018000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar28);
  uStack_a0 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar28);
  uStack_98 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_11274de64;
  uVar18 = *(undefined8 *)(param_1 + lVar28);
  uStack_90 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar28);
  uStack_88 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf1ff80(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar28);
  uStack_80 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar27,param_2,puVar26);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(param_1);
  _objc_release(uVar24);
  _objc_release(uVar23);
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
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar27 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar1,param_2,puVar27);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar27);
  return;
}



/* Entry: 1066b6374; end: 1066b63bf; -[SCLensExplorerFavoritesOnboardingSectionHeaderView _setupGestureRecogniser] */

void FUN_1066b6374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b63c0; end: 1066b6457; -[SCLensExplorerFavoritesOnboardingSectionHeaderView didTapGestureRecogniser:] */

void FUN_1066b63c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126ccb30;
  func_0x00010c29ccc0(PTR_PTR_1126ccb30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010beee460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b6458; end: 1066b6467; -[SCLensExplorerFavoritesOnboardingSectionHeaderView setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b6458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274de60),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 1066b6468; end: 1066b646b; -[SCLensExplorerFavoritesOnboardingSectionHeaderView _setupKarma] */

void FUN_1066b6468(void)

{
  return;
}



/* Entry: 1066b646c; end: 1066b647b; -[SCLensExplorerFavoritesOnboardingSectionHeaderView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b646c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274de70);
}



/* Entry: 1066b647c; end: 1066b64bb; -[SCLensExplorerFavoritesOnboardingSectionHeaderView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b647c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274de70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066b64bc; end: 1066b651b; -[SCLensExplorerFavoritesOnboardingSectionHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b64bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274de70,0);
  _objc_storeStrong(param_1 + _DAT_11274de6c,0);
  _objc_storeStrong(param_1 + _DAT_11274de64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274de60,0);
  return;
}



/* Entry: 1066b651c; end: 1066b6593; -[SCLensExplorerBlockRemoteStateProvider initWithBlockProvider:] */

undefined1 * FUN_1066b651c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066b6594; end: 1066b65bb; -[SCLensExplorerBlockRemoteStateProvider remoteState] */

void FUN_1066b6594(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066b65bc; end: 1066b65c7; -[SCLensExplorerBlockRemoteStateProvider .cxx_destruct] */

void FUN_1066b65bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b65c8; end: 1066b665b; -[SCLensExplorerCompositDataStore initWithDataStores:] */

undefined1 * FUN_1066b65c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2668;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066b665c; end: 1066b66bf; -[SCLensExplorerCompositDataStore allItems] */

void FUN_1066b665c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110933ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8,param_2,uVar1,&PTR___NSConcreteGlobalBlock_110933ef8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066b66c0; end: 1066b66cf;  */

void FUN_1066b66c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_allItems_11259da48);
  return;
}



/* Entry: 1066b66d0; end: 1066b6753; -[SCLensExplorerCompositDataStore isEmpty] */

void FUN_1066b66d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110933f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066b6754; end: 1066b675b;  */

void FUN_1066b6754(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 1066b675c; end: 1066b6793;  */

void FUN_1066b675c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf4b900(param_2,param_2,PTR____kCFBooleanFalse_11034ab60);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,(uint)param_2 ^ 1);
  return;
}



/* Entry: 1066b6794; end: 1066b681b; -[SCLensExplorerCompositDataStore remoteState] */

void FUN_1066b6794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb2040(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110933f98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12a440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066b681c; end: 1066b681f; -[SCLensExplorerCompositDataStore appendItems:remoteState:] */

void FUN_1066b681c(void)

{
  return;
}



/* Entry: 1066b6820; end: 1066b6823; -[SCLensExplorerCompositDataStore updateItems:remoteState:] */

void FUN_1066b6820(void)

{
  return;
}



/* Entry: 1066b6824; end: 1066b682b; -[SCLensExplorerCompositDataStore dataStoreIdentifier] */

undefined8 FUN_1066b6824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1066b682c; end: 1066b685b; -[SCLensExplorerCompositDataStore .cxx_destruct] */

void FUN_1066b682c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b685c; end: 1066b6aa3; -[SCLensExplorerContainersDataStore initWithStore:dataStoreFactory:sectionsDataStore:originalSectionIdentifier:] */

undefined8 *
FUN_1066b685c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f2670;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar4);
    uVar5 = puVar1[1];
    _objc_retain(uVar5);
    uVar4 = puVar1[7];
    puVar1[7] = uVar5;
    _objc_release(uVar4);
    uVar4 = puVar1[8];
    puVar1[8] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,puVar1);
    uVar4 = param_5;
    func_0x00010bfa3940(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066b6aa4; end: 1066b6aeb;  */

void FUN_1066b6aa4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066b6aec; end: 1066b6b13; -[SCLensExplorerContainersDataStore continuousDataStore] */

void FUN_1066b6aec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066b6b14; end: 1066b6b1b; -[SCLensExplorerContainersDataStore isEmpty] */

void FUN_1066b6b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 1066b6b1c; end: 1066b6b23; -[SCLensExplorerContainersDataStore appendItems:remoteState:] */

void FUN_1066b6b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be32a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleUpdateWithItems_remoteSta_11256a428,param_3,param_4,1);
  return;
}



/* Entry: 1066b6b24; end: 1066b6c57; -[SCLensExplorerContainersDataStore updateItems:remoteState:] */

void FUN_1066b6b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = PTR____NSArray0__struct_11034ab48;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar5);
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfdf5c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar1,param_2,uVar5);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_10670dec8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfdf5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  func_0x00010be32a20(param_1,param_2,param_3,param_4,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b6c58; end: 1066b6c5f; -[SCLensExplorerContainersDataStore allItems] */

void FUN_1066b6c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_allItems_11259da48);
  return;
}



/* Entry: 1066b6c60; end: 1066b6c67; -[SCLensExplorerContainersDataStore remoteState] */

void FUN_1066b6c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_remoteState_112628330);
  return;
}



/* Entry: 1066b6c68; end: 1066b6c97; -[SCLensExplorerContainersDataStore _receiveBaseConfiguration:] */

void FUN_1066b6c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066b6c98; end: 1066b728b; -[SCLensExplorerContainersDataStore _handleUpdateWithItems:remoteState:isAppend:] */

ulong FUN_1066b6c98(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar15 = param_3;
  func_0x00010bf529e0();
  if (uVar15 == 0) {
    uVar15 = param_3;
    if (param_5 == 0) {
      func_0x00010c286c40(*(undefined8 *)(param_1 + 0x38));
    }
    else {
      func_0x00010bf06ca0();
    }
  }
  else {
    uVar1 = param_3;
    func_0x00010bfce6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + 0x40);
    _objc_retain();
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(uVar1);
    uStack_1e0 = uVar1;
    func_0x00010bf52a60();
    if (uStack_1e0 != 0) {
      lVar12 = *plStack_150;
      do {
        uVar15 = 0;
        do {
          if (*plStack_150 != lVar12) {
            _objc_enumerationMutation(uVar1);
          }
          puVar14 = *(undefined **)(lStack_158 + uVar15 * 8);
          puVar3 = puVar14;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c06f340();
          _objc_release(puVar3);
          if ((int)puVar4 == 0) {
            func_0x00010be27800(param_1);
          }
          else {
            puVar3 = puVar14;
            func_0x00010bf529e0();
            puStack_1d8 = PTR____NSArray0__struct_11034ab48;
            if ((undefined *)0x1 < puVar3) {
              func_0x00010bf529e0(puVar14);
              puStack_1d8 = puVar14;
              func_0x00010c25e980();
              _objc_retainAutoreleasedReturnValue();
            }
            puVar4 = PTR_PTR_1126ccc80;
            _objc_alloc();
            uVar8 = param_4;
            func_0x00010c25c6c0(param_4);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = param_4;
            func_0x00010c135700(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04e760();
            _objc_release(uVar7);
            _objc_release(uVar8);
            func_0x00010be27800(param_1);
            puStack_188 = &uStack_190;
            uStack_190 = 0;
            uStack_180 = 0x3032000000;
            pcStack_178 = FUN_1066b72a8;
            uStack_170 = 0x1066b72b8;
            uStack_168 = 0;
            func_0x00010c089820(puVar14);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar4);
            func_0x00010c0be960(puVar14);
            _objc_release(puVar14);
            uVar5 = *(ulong *)(param_1 + 0x40);
            func_0x00010bf4b900();
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((uVar5 & 1) == 0) {
              func_0x00010bf529e0();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = PTR_PTR_1126ccf18;
              _objc_alloc();
              func_0x00010c02db40();
              puVar6 = PTR_PTR_1126ccf20;
              _objc_alloc();
              uVar7 = *(undefined8 *)(param_1 + 0x48);
              func_0x00010c0b3ae0(uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c0b3ac0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c027860();
              _objc_release(uVar8);
              _objc_release(uVar7);
              uVar8 = *(undefined8 *)(param_1 + 0x48);
              func_0x00010bf34000();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR_PTR_1126ccc58;
              _objc_alloc(PTR_PTR_1126ccc58);
              uVar7 = *(undefined8 *)(param_1 + 0x48);
              func_0x00010bf643e0(uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = *(undefined8 *)(param_1 + 0x48);
              func_0x00010c130180(uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0431a0(puVar9);
              _objc_release(uVar10);
              _objc_release(uVar7);
              func_0x00010c257760(*(undefined8 *)(param_1 + 0x18));
              uVar7 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c0d3d00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c286c40();
              _objc_retain(uVar7);
              uVar10 = *(undefined8 *)(param_1 + 0x38);
              *(undefined8 *)(param_1 + 0x38) = uVar7;
              _objc_release(uVar10);
              uVar10 = *(undefined8 *)(param_1 + 0x40);
              uStack_118 = puStack_188[5];
              puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_110 = puVar3;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf09f80();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0x40) = uVar10;
              _objc_release(uVar13);
              _objc_release(puVar11);
              _objc_release(uVar7);
              _objc_release(puVar9);
              _objc_release(uVar8);
              _objc_release(puVar6);
              _objc_release(puVar14);
              _objc_release(puVar3);
            }
            _objc_release(puVar4);
            __Block_object_dispose(&uStack_190,8);
            _objc_release(uStack_168);
            _objc_release(puVar4);
            _objc_release(puStack_1d8);
          }
          uVar15 = uVar15 + 1;
        } while (uStack_1e0 != uVar15);
        uStack_1e0 = uVar1;
        func_0x00010bf52a60();
      } while (uStack_1e0 != 0);
    }
    _objc_release(uVar1);
    uVar15 = *(ulong *)(param_1 + 0x40);
    uVar5 = uVar2;
    func_0x00010c071b60();
    if ((uVar5 & 1) == 0) {
      uVar15 = *(ulong *)(param_1 + 0x40);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_190,8);
  __Unwind_Resume(param_3);
  func_0x00010c06f340(uVar15);
  return (ulong)((uint)uVar15 ^ 1);
}



/* Entry: 1066b728c; end: 1066b72a7;  */

uint FUN_1066b728c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c06f340(param_3);
  return (uint)param_3 ^ 1;
}



/* Entry: 1066b72a8; end: 1066b72bf;  */

void FUN_1066b72a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066b72c0; end: 1066b75bf;  */

void FUN_1066b72c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be9ce40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain();
  uVar4 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar3;
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb6ea0();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0d3d00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010be8b200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    if (lVar5 == 0) {
      lVar11 = *(long *)(param_1 + 0x28);
    }
    _objc_retain(lVar11);
    _objc_release(lVar5);
    func_0x00010c286c40(uVar4);
    _objc_release(lVar11);
    _objc_release(uVar4);
  }
  puVar6 = PTR_PTR_1126ccf18;
  _objc_alloc(PTR_PTR_1126ccf18);
  uVar4 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bf4ada0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf68960(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02db40(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar4);
  puVar8 = PTR_PTR_1126ccf20;
  _objc_alloc(PTR_PTR_1126ccf20);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5aae0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf4ae20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027860(puVar8);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126ccc58;
  _objc_alloc(PTR_PTR_1126ccc58);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be9cce0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c130180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0431a0(puVar10);
  _objc_release(uVar4);
  _objc_release(uVar9);
  func_0x00010c257760(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  *(long *)(*(long *)(param_1 + 0x20) + 0x58) = *(long *)(*(long *)(param_1 + 0x20) + 0x58) + 1;
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066b75c0; end: 1066b75cf;  */

void FUN_1066b75c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c093ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc20,PTR_s_lensFeedItemFromContainerContent_1126029c0,param_2);
  return;
}



/* Entry: 1066b75d0; end: 1066b7687; -[SCLensExplorerContainersDataStore _handleContinuationItems:remoteState:isAppend:] */

void FUN_1066b75d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + lVar1;
  if (param_5 == 0) {
    func_0x00010c286c40(*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4);
  }
  else {
    func_0x00010bf06ca0();
  }
  _objc_release(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar1 != 0) {
    FUN_10670dec8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1066b7688; end: 1066b771b; -[SCLensExplorerContainersDataStore _sectionIdentifierForContainer:] */

void FUN_1066b7688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  uVar3 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010bf4ae20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066b771c; end: 1066b77a7; -[SCLensExplorerContainersDataStore _remoteStateForContainer:] */

void FUN_1066b771c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c12a440(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066b77a8; end: 1066b7863; -[SCLensExplorerContainersDataStore _sectionDataSourceForContainer:] */

void FUN_1066b77a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar2 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ccbc8;
    _objc_alloc(PTR_PTR_1126ccbc8);
    uVar1 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0430e0(puVar2,param_2,uVar1,PTR____NSArray0__struct_11034ab48);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066b7864; end: 1066b7917; -[SCLensExplorerContainersDataStore _loggingIdentifierForContainer:] */

void FUN_1066b7864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0b3ae0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b3ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066b7918; end: 1066b79b7; -[SCLensExplorerContainersDataStore _shouldUpdateContainerItemsStoreWithContainer:] */

bool FUN_1066b7918(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  if ((int)puVar3 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010c084fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar4 != 0;
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1066b79b8; end: 1066b79bf; -[SCLensExplorerContainersDataStore dataStoreIdentifier] */

undefined8 FUN_1066b79b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1066b79c0; end: 1066b79c7; -[SCLensExplorerContainersDataStore containersIdentifiers] */

undefined8 FUN_1066b79c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1066b79c8; end: 1066b7a63; -[SCLensExplorerContainersDataStore .cxx_destruct] */

void FUN_1066b79c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1066b7a64; end: 1066b7b3f; -[SCLensExplorerDataStore initWithPerformer:itemsStore:] */

undefined1 *
FUN_1066b7a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2678;
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
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066b7b40; end: 1066b7b47; -[SCLensExplorerDataStore allItems] */

void FUN_1066b7b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_allItems_11259da48);
  return;
}



/* Entry: 1066b7b48; end: 1066b7c67; -[SCLensExplorerDataStore isEmpty] */

void FUN_1066b7b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010bf00280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066b7c68;
  puStack_50 = &UNK_110850cc8;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066b7c68; end: 1066b7cbf;  */

void FUN_1066b7c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(param_2);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b7cc0; end: 1066b7d7b; -[SCLensExplorerDataStore appendItems:remoteState:] */

void FUN_1066b7cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109340b8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  func_0x00010bf06c80(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066b7d7c; end: 1066b7dcf;  */

void FUN_1066b7d7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_1126a55b0;
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010010fab4(param_2,puVar2);
  uVar1 = param_2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066b7dd0; end: 1066b7dd7;  */

void FUN_1066b7dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setRemoteState__1126582e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066b7dd8; end: 1066b7e3f; -[SCLensExplorerDataStore removeAllItems] */

void FUN_1066b7dd8(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1066b7e40;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  func_0x00010c12ad60(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1066b7e40; end: 1066b7e4b;  */

void FUN_1066b7e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setRemoteState__1126582e8,0);
  return;
}



/* Entry: 1066b7e4c; end: 1066b7f07; -[SCLensExplorerDataStore updateItems:remoteState:] */

void FUN_1066b7e4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109340d8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  func_0x00010c286c20(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066b7f08; end: 1066b7f5b;  */

void FUN_1066b7f08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_1126a55b0;
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010010fab4(param_2,puVar2);
  uVar1 = param_2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066b7f5c; end: 1066b7f63;  */

void FUN_1066b7f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setRemoteState__1126582e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066b7f64; end: 1066b7f6b; -[SCLensExplorerDataStore dataStoreIdentifier] */

undefined8 FUN_1066b7f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1066b7f6c; end: 1066b7f77; -[SCLensExplorerDataStore remoteState] */

void FUN_1066b7f6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}


