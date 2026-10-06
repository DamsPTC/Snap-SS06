/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106baa0f0; end: 106baa0f7; -[SCSharedStoryProfileMembersSectionDataProvider shouldRecalculateSectionHeightWithViewModelUpdates] */

undefined8 FUN_106baa0f0(void)

{
  return 1;
}



/* Entry: 106baa0f8; end: 106baa243; -[SCSharedStoryProfileMembersSectionDataProvider _update:] */

void FUN_106baa0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0c7900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c7900();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106baa244;
  puStack_68 = &UNK_1108d59c0;
  uVar4 = uVar2;
  uStack_60 = param_1;
  uStack_58 = uVar3;
  func_0x00010bd86420();
  _objc_release(uVar2);
  _objc_initWeak(auStack_88,param_1);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106baa5a0;
  puStack_a0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_90,auStack_88);
  uStack_98 = uVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 106baa244; end: 106baa59f;  */

void FUN_106baa244(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ce410;
  if ((int)lVar2 == 0) {
    func_0x00010c244820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  puVar7 = PTR_PTR_1126d0e68;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246860(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126cee00;
  _objc_alloc();
  func_0x00010c050980();
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar9 = PTR_PTR_1126d0e00;
  _objc_alloc(PTR_PTR_1126d0e00);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar10 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  lVar11 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar14);
  _objc_retain(lVar11);
  if ((lVar14 != lVar11) && (lVar11 != 0)) {
    func_0x00010c071ae0(lVar14);
  }
  _objc_release(lVar11);
  _objc_release(lVar14);
  func_0x00010bff5f40(puVar9);
  _objc_release(lVar11);
  _objc_release(lVar10);
  if (lVar1 == 0) {
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar12 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar13 = PTR_PTR_1126d0e58;
  _objc_opt_class(PTR_PTR_1126d0e58);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106baa5a0; end: 106baa5d3;  */

void FUN_106baa5a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdceb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106baa5d4; end: 106baa627; -[SCSharedStoryProfileMembersSectionDataProvider _applySnappchattersViewModelsOnMainQueue:] */

void FUN_106baa5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106baa628; end: 106baa62b; -[SCSharedStoryProfileMembersSectionDataProvider didTapOnBitmojiAvatarView] */

void FUN_106baa628(void)

{
  return;
}



/* Entry: 106baa62c; end: 106baa63f; +[SCSharedStoryProfileMembersSectionDataProvider announcerIdentifier] */

void FUN_106baa62c(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106baa640; end: 106baa643; -[SCSharedStoryProfileMembersSectionDataProvider addListener:] */

void FUN_106baa640(void)

{
  return;
}



/* Entry: 106baa644; end: 106baa647; -[SCSharedStoryProfileMembersSectionDataProvider removeListener:] */

void FUN_106baa644(void)

{
  return;
}



/* Entry: 106baa648; end: 106baa65f; -[SCSharedStoryProfileMembersSectionDataProvider dataProviderDelegate] */

void FUN_106baa648(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106baa660; end: 106baa66b; -[SCSharedStoryProfileMembersSectionDataProvider setDataProviderDelegate:] */

void FUN_106baa660(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 106baa66c; end: 106baa673; -[SCSharedStoryProfileMembersSectionDataProvider sectionDataModel] */

undefined8 FUN_106baa66c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106baa674; end: 106baa67b; -[SCSharedStoryProfileMembersSectionDataProvider setSectionDataModel:] */

void FUN_106baa674(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106baa67c; end: 106baa683; -[SCSharedStoryProfileMembersSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106baa67c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106baa684; end: 106baa6b3; -[SCSharedStoryProfileMembersSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106baa684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106baa6b4; end: 106baa77b; -[SCSharedStoryProfileMembersSectionDataProvider .cxx_destruct] */

void FUN_106baa6b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 106baa77c; end: 106baa943; -[SCSharedStoryProfileMembersViewMoreProvider initWithDataSource:] */

undefined8 * FUN_106baa77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f56d8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release();
    func_0x000108f58d5c();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[1];
    puVar1[1] = uVar5;
    _objc_release(uVar6);
    _objc_initWeak(auStack_68,puVar1);
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25a4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0e0e60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106baa944; end: 106baa98b;  */

void FUN_106baa944(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106baa98c; end: 106baa997; +[SCSharedStoryProfileMembersViewMoreProvider viewMoreCellClass] */

void FUN_106baa98c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d0e70);
  return;
}



/* Entry: 106baa998; end: 106baa9a3; +[SCSharedStoryProfileMembersViewMoreProvider viewMoreCellReuseIdentifier] */

undefined ** FUN_106baa998(void)

{
  return &PTR____CFConstantStringClassReference_110e76e58;
}



/* Entry: 106baa9a4; end: 106baab77; -[SCSharedStoryProfileMembersViewMoreProvider viewModelForNumberOfItemsCollapsed:numberOfItemsTotal:] */

undefined * FUN_106baa9a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_new();
  func_0x00010c166c00();
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uStack_88 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  puStack_70 = puVar3;
  func_0x00010c0c7340(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar4;
  puStack_60 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2,param_2,uVar6,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d0e78;
  _objc_alloc(PTR_PTR_1126d0e78);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1e);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ac0(puVar3,param_2,puVar2,puVar4,puVar5,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 106baab78; end: 106baab7f; -[SCSharedStoryProfileMembersViewMoreProvider shouldRoundLastCellInList] */

undefined8 FUN_106baab78(void)

{
  return 1;
}



/* Entry: 106baab80; end: 106baac3b; -[SCSharedStoryProfileMembersViewMoreProvider _updateViewAllTextWithMemberCount:] */

void FUN_106baab80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f58a74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(param_3);
  func_0x00010c14de00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c29dea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29dec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106baac3c; end: 106baac53; -[SCSharedStoryProfileMembersViewMoreProvider viewMoreProviderDelegate] */

void FUN_106baac3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106baac54; end: 106baac5f; -[SCSharedStoryProfileMembersViewMoreProvider setViewMoreProviderDelegate:] */

void FUN_106baac54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106baac60; end: 106baac97; -[SCSharedStoryProfileMembersViewMoreProvider .cxx_destruct] */

void FUN_106baac60(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106baac98; end: 106bab16b; -[SCSharedStoryProfileViewMoreView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106baac98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126f56e0;
  puVar1 = &uStack_d0;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar15 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0648;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4040000000000000,0x4040000000000000);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759a28);
    *(undefined **)((long)puVar1 + (long)_DAT_112759a28) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar2);
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_a0 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    puStack_98 = puVar9;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puStack_90 = puVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar6 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759a2c);
    *(undefined **)((long)puVar1 + (long)_DAT_112759a2c) = puVar6;
    _objc_release(uVar3);
    _objc_retain(puVar6);
    func_0x00010c213040(puVar6);
    func_0x00010c21ad00(puVar6);
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar6);
    _objc_release(puVar15);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar6);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar15 = puVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    puStack_c0 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493c0(0x404c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    puStack_b8 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf493c0(0xc04c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    puStack_b0 = puVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar17);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar16);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(puVar15 + _DAT_112759a30);
}



/* Entry: 106bab16c; end: 106bab17b; -[SCSharedStoryProfileViewMoreView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bab16c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759a30);
}



/* Entry: 106bab17c; end: 106bab1bb; -[SCSharedStoryProfileViewMoreView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759a30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bab1bc; end: 106bab1cb; -[SCSharedStoryProfileViewMoreView leadingImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bab1bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759a28);
}



/* Entry: 106bab1cc; end: 106bab20b; -[SCSharedStoryProfileViewMoreView setLeadingImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759a28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bab20c; end: 106bab21b; -[SCSharedStoryProfileViewMoreView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bab20c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759a2c);
}



/* Entry: 106bab21c; end: 106bab25b; -[SCSharedStoryProfileViewMoreView setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759a2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bab25c; end: 106bab2ab; -[SCSharedStoryProfileViewMoreView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab25c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759a2c,0);
  _objc_storeStrong(param_1 + _DAT_112759a28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759a30,0);
  return;
}



/* Entry: 106bab2ac; end: 106bab433; -[SCSharedStoryProfileViewMoreCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106bab2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126d0e80;
  _objc_alloc(PTR_PTR_1126d0e80);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c015080(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  if (param_5 != 0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_5 + _DAT_112759a34);
    *(undefined **)(param_5 + _DAT_112759a34) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    lVar4 = param_5;
    func_0x00010c27f880(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08dee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa620();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                        &PTR____CFConstantStringClassReference_110e76e78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar2,param_6,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    _objc_release(puVar2);
    func_0x00010bef9040(param_5,param_6,puVar6);
    func_0x00010c20eaa0(param_5,param_6,1,0xe);
    _objc_release(puVar6);
  }
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 106bab434; end: 106bab597; -[SCSharedStoryProfileViewMoreCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab434(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112759a38;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar5);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_106bab580;
    }
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d0e78;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar1 = uVar5;
    func_0x00010c2716a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    lVar6 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_106bab580:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bab598; end: 106bab603; -[SCSharedStoryProfileViewMoreCell _onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759a3c);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(uVar2,param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bab604; end: 106bab60f; +[SCSharedStoryProfileViewMoreCell sizeWithViewModel:constrainedToSize:] */

void FUN_106bab604(void)

{
  return;
}



/* Entry: 106bab610; end: 106bab61f; -[SCSharedStoryProfileViewMoreCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bab610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759a38);
}



/* Entry: 106bab620; end: 106bab62f; -[SCSharedStoryProfileViewMoreCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bab620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759a3c);
}



/* Entry: 106bab630; end: 106bab66f; -[SCSharedStoryProfileViewMoreCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759a3c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bab670; end: 106bab67f; -[SCSharedStoryProfileViewMoreCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bab670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759a24);
}



/* Entry: 106bab680; end: 106bab68f; -[SCSharedStoryProfileViewMoreCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab680(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112759a24) = param_3;
  return;
}



/* Entry: 106bab690; end: 106bab6af; -[SCSharedStoryProfileViewMoreCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab690(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112759a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bab6b0; end: 106bab6c3; -[SCSharedStoryProfileViewMoreCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759a40,param_3);
  return;
}



/* Entry: 106bab6c4; end: 106bab71f; -[SCSharedStoryProfileViewMoreCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bab6c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759a40);
  _objc_storeStrong(param_1 + _DAT_112759a3c,0);
  _objc_storeStrong(param_1 + _DAT_112759a38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759a34,0);
  return;
}



/* Entry: 106bab720; end: 106bab86f; -[SCSharedStoryProfileMemberCellViewModel initWithAvatarConfiguration:tapActionModel:displayName:userName:accessibilityIdentifier:isCurrentUser:isLastItem:] */

undefined1 *
FUN_106bab720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

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
  puStack_58 = PTR_PTR_1126f56e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 9) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bab870; end: 106bab893; -[SCSharedStoryProfileMemberCellViewModel copyWithZone:] */

undefined8 FUN_106bab870(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bab894; end: 106bab937; -[SCSharedStoryProfileMemberCellViewModel hash] */

undefined8 * FUN_106bab894(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106baba20:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106baba2c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_106baba2c;
              }
              goto LAB_106baba20;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106baba2c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106bab938; end: 106baba47; -[SCSharedStoryProfileMemberCellViewModel isEqual:] */

long FUN_106bab938(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106baba20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106baba2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
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
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_106baba2c;
              }
              goto LAB_106baba20;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106baba2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106baba48; end: 106baba4f; -[SCSharedStoryProfileMemberCellViewModel avatarConfiguration] */

undefined8 FUN_106baba48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106baba50; end: 106baba57; -[SCSharedStoryProfileMemberCellViewModel tapActionModel] */

undefined8 FUN_106baba50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106baba58; end: 106baba5f; -[SCSharedStoryProfileMemberCellViewModel displayName] */

undefined8 FUN_106baba58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106baba60; end: 106baba67; -[SCSharedStoryProfileMemberCellViewModel userName] */

undefined8 FUN_106baba60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106baba68; end: 106baba6f; -[SCSharedStoryProfileMemberCellViewModel accessibilityIdentifier] */

undefined8 FUN_106baba68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106baba70; end: 106baba77; -[SCSharedStoryProfileMemberCellViewModel isCurrentUser] */

undefined1 FUN_106baba70(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106baba78; end: 106baba7f; -[SCSharedStoryProfileMemberCellViewModel isLastItem] */

undefined1 FUN_106baba78(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106baba80; end: 106babad3; -[SCSharedStoryProfileMemberCellViewModel .cxx_destruct] */

void FUN_106baba80(long param_1)

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



/* Entry: 106babad4; end: 106babbbb; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel initWithIdentifier:tapActionModel:cellHeight:accessibilityIdentifier:] */

undefined1 *
FUN_106babad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f56f0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106babbbc; end: 106babbdf; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel copyWithZone:] */

undefined8 FUN_106babbbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106babbe0; end: 106babc83; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel hash] */

undefined8 * FUN_106babbe0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_106babd50:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106babd5c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[4];
        if (puVar8 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_106babd5c;
        }
        goto LAB_106babd50;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_106babd5c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 106babc84; end: 106babd77; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel isEqual:] */

long FUN_106babc84(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106babd50:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106babd5c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_106babd5c;
        }
        goto LAB_106babd50;
      }
    }
    lVar4 = 0;
  }
LAB_106babd5c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106babd78; end: 106babd7f; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel identifier] */

undefined8 FUN_106babd78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106babd80; end: 106babd87; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel tapActionModel] */

undefined8 FUN_106babd80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106babd88; end: 106babd8f; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel cellHeight] */

undefined8 FUN_106babd88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106babd90; end: 106babd97; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel accessibilityIdentifier] */

undefined8 FUN_106babd90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106babd98; end: 106babdd3; -[SCSharedStoryProfileMemberGroupBitmojiCellViewModel .cxx_destruct] */

void FUN_106babd98(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106babdd4; end: 106babe5b; -[SCSharedStoryProfileMemberSectionUpdate initWithSnapchatters:height:] */

undefined1 *
FUN_106babdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f56f8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106babe5c; end: 106babe7f; -[SCSharedStoryProfileMemberSectionUpdate copyWithZone:] */

undefined8 FUN_106babe5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106babe80; end: 106babf0b; -[SCSharedStoryProfileMemberSectionUpdate hash] */

undefined8 * FUN_106babe80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106babfa8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106babfb4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_106babfb4;
        }
        goto LAB_106babfa8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106babfb4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106babf0c; end: 106babfcf; -[SCSharedStoryProfileMemberSectionUpdate isEqual:] */

long FUN_106babf0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106babfa8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106babfb4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_106babfb4;
        }
        goto LAB_106babfa8;
      }
    }
    lVar4 = 0;
  }
LAB_106babfb4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106babfd0; end: 106babfd7; -[SCSharedStoryProfileMemberSectionUpdate snapchatters] */

undefined8 FUN_106babfd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106babfd8; end: 106babfdf; -[SCSharedStoryProfileMemberSectionUpdate height] */

undefined8 FUN_106babfd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106babfe0; end: 106babfeb; -[SCSharedStoryProfileMemberSectionUpdate .cxx_destruct] */

void FUN_106babfe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106babfec; end: 106bac0fb; -[SCStoryMemberBitmojiFetcher initWithImageFetcher:bitmojiImageParams:performer:] */

undefined1 *
FUN_106babfec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f5700;
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
    puVar3 = PTR_PTR_1126d0e88;
    uVar2 = param_4;
    func_0x00010bf12ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09d580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bac0fc; end: 106bac123; -[SCStoryMemberBitmojiFetcher cancel] */

void FUN_106bac0fc(long param_1)

{
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106bac124; end: 106bac14b; -[SCStoryMemberBitmojiFetcher observableImage] */

void FUN_106bac124(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bac14c; end: 106bac297; -[SCStoryMemberBitmojiFetcher fetch] */

void FUN_106bac14c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126d0e88;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf12ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfa5420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106bac298; end: 106bac317;  */

void FUN_106bac298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80a40();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bac318; end: 106bac413; -[SCStoryMemberBitmojiFetcher _processCompletionWithImage:imageParams:imageResponse:] */

void FUN_106bac318(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bf13080();
  puVar3 = PTR_PTR_1126d0e88;
  if ((param_5 == 0) && (param_3 != 0)) {
    puVar2 = PTR_PTR_1126d0e90;
    _objc_alloc(PTR_PTR_1126d0e90);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf12ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf80(puVar2,param_2,param_3,uVar1);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126d0e88;
    func_0x00010c09c940(PTR_PTR_1126d0e88,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf12ea0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99540(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar1);
  _objc_release(puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bac414; end: 106bac41b; -[SCStoryMemberBitmojiFetcher state] */

undefined8 FUN_106bac414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106bac41c; end: 106bac47b; -[SCStoryMemberBitmojiFetcher .cxx_destruct] */

void FUN_106bac41c(long param_1)

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



/* Entry: 106bac47c; end: 106bac4cb; -[SCStoryMembersBitmojiDataProvider observableHeadshots] */

void FUN_106bac47c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bac4cc; end: 106bac51b; -[SCStoryMembersBitmojiDataProvider observableGroupImage] */

void FUN_106bac4cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bac51c; end: 106bac56b; -[SCStoryMembersBitmojiDataProvider observableGroupImageHeight] */

void FUN_106bac51c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bac56c; end: 106bac74f; -[SCStoryMembersBitmojiDataProvider initWithDataSource:avatarProvider:imageFetcher:currentUserId:] */

undefined1 *
FUN_106bac56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f5708;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bac750; end: 106bac8e7; -[SCStoryMembersBitmojiDataProvider begin] */

void FUN_106bac750(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106bac8e8;
  puStack_68 = &UNK_110964e50;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar3;
  func_0x00010bfb2660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar1 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106bac8e8; end: 106bac98f;  */

void FUN_106bac8e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c25a4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010bdeb4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bac990; end: 106bac9d7;  */

void FUN_106bac990(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bac9d8; end: 106baca9b; -[SCStoryMembersBitmojiDataProvider _createBitMojiFetchersFromSnapchatters:] */

void FUN_106bac9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106baca9c;
  puStack_48 = &UNK_110964e80;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  uVar2 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106baca9c; end: 106bacc3f;  */

void FUN_106baca9c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x60);
  lVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((uVar6 & 1) == 0) {
    lVar2 = param_2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b5938;
    _objc_alloc(PTR_PTR_1126b5938);
    _objc_retain(&PTR____CFConstantStringClassReference_110dd70d8);
    func_0x00010c050fa0(puVar4);
    _objc_release(&PTR____CFConstantStringClassReference_110dd70d8);
    puVar7 = PTR_PTR_1126d0e98;
    _objc_alloc(PTR_PTR_1126d0e98);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c920(puVar7);
    _objc_release(uVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106bacc40; end: 106bace93; -[SCStoryMembersBitmojiDataProvider _setNewFetchers:] */

void FUN_106bacc40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [136];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = param_3;
  _objc_release(uVar2);
  lVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110964ed0);
  _objc_initWeak(auStack_e0,param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar7 = auStack_e0;
  _objc_copyWeak(auStack_e8,puVar7);
  _objc_retain(param_3);
  puVar4 = puVar5;
  func_0x00010c25ff20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar4);
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010bfa4860(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_e0);
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_e0);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0e0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_observableImage_112615ba0);
  return;
}



/* Entry: 106bace94; end: 106bace9b;  */

void FUN_106bace94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_observableImage_112615ba0);
  return;
}



/* Entry: 106bace9c; end: 106bacecf;  */

void FUN_106bace9c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106baced0; end: 106bad43f; -[SCStoryMembersBitmojiDataProvider _filterCompletedFetchers:] */

void FUN_106baced0(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_110964f10);
  uVar2 = param_6;
  func_0x000100504554();
  func_0x00010c0d9840(*(undefined8 *)(param_4 + 0x48));
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar3);
  uVar4 = param_6;
  func_0x00010bf529e0();
  if ((long)uVar4 < 0xb) {
    dVar10 = 100.0;
  }
  else if (uVar4 < 0x14) {
    dVar10 = 140.0;
  }
  else {
    lVar1 = 8;
    if (0x1b < uVar4) {
      lVar1 = 0;
    }
    dVar10 = *(double *)(&UNK_10dde78b0 + lVar1);
  }
  uVar8 = *(undefined8 *)(param_4 + 0x58);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar9 = dVar10;
  func_0x00010c0df720(dVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8);
  _objc_release(puVar3);
  param_3 = param_3 + param_3;
  dVar10 = dVar10 + dVar10;
  _objc_retain(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(param_3,dVar10,dVar9,0);
  _objc_release(puVar3);
  _UIGraphicsGetCurrentContext();
  _CGContextSetInterpolationQuality();
  uVar5 = uVar2;
  func_0x00010bf529e0();
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar5 = uVar2;
    func_0x00010bf529e0();
    uVar4 = uVar2;
    if (uVar5 < 0xb) {
      FUN_106bad660(0x4061cccccccccccd,0x4061cccccccccccd,param_3,dVar10,dVar10 * 0.6,
                    0x3fdeb851eb851eb8,0x3fe999999999999a,uVar2);
    }
    else {
      uVar5 = uVar2;
      func_0x00010bf529e0();
      uVar6 = uVar2;
      uVar7 = uVar2;
      if (uVar5 < 0x14) {
        func_0x00010c25e980(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c25e980(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar7);
        FUN_106bad660(0x40610570a3d70a3e,0x40610570a3d70a3e,param_3,dVar10,dVar10 * 0.45,
                      0x3fe0000000000000,0x3fe87ae147ae147b,uVar6);
        FUN_106bad660(0x40613e6666666667,0x40613e6666666667,param_3,dVar10,dVar10 * 0.75,
                      0x3fe0000000000000,0x3fe8cccccccccccd,uVar7);
        uVar4 = uVar7;
      }
      else {
        uVar5 = uVar2;
        func_0x00010bf529e0();
        func_0x00010c25e980(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25e980(uVar2);
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 < 0x1c) {
          func_0x00010bf529e0();
          func_0x00010c25e980(uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar6);
          _objc_retain(uVar4);
          FUN_106bad660(0x405c2b22d0e56042,0x405c2b22d0e56042,param_3,dVar10,dVar10 * 0.25,
                        0x3fe3333333333333,0x3fe44189374bc6a8,uVar7);
          FUN_106bad660(0x405d97ae147ae148,0x405d97ae147ae148,param_3,dVar10,dVar10 * 0.5,
                        0x3fe3333333333333,0x3fe547ae147ae148,uVar6);
          _objc_release(uVar6);
          FUN_106bad660(0x405f266666666666,0x405f266666666666,param_3,dVar10,dVar10 * 0.75,
                        0x3fe3333333333333,0x3fe6666666666666,uVar4);
          uVar5 = uVar4;
        }
        else {
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          uVar5 = uVar2;
          func_0x00010c25e980(uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar7);
          _objc_retain(uVar6);
          _objc_retain(uVar4);
          FUN_106bad660(0x405ab33333333333,0x405ab33333333333,param_3,dVar10,dVar10 * 0.2,
                        0x3fe3333333333333,0x3fe3333333333333,uVar5);
          FUN_106bad660(0x405c2e8db8bac710,0x405c2e8db8bac710,param_3,dVar10,dVar10 * 0.4,
                        0x3fe3333333333333,0x3fe443fe5c91d14e,uVar7);
          _objc_release(uVar7);
          FUN_106bad660(0x405d97ae147ae148,0x405d97ae147ae148,param_3,dVar10,dVar10 * 0.6,
                        0x3fe3333333333333,0x3fe547ae147ae148,uVar6);
          _objc_release(uVar6);
          FUN_106bad660(0x405f266666666666,0x405f266666666666,param_3,dVar10,dVar10 * 0.8,
                        0x3fe3333333333333,0x3fe6666666666666,uVar4);
          _objc_release(uVar4);
        }
        _objc_release(uVar5);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
  }
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_4 + 0x50));
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106bad440; end: 106bad553;  */

void FUN_106bad440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106bad554;
  uStack_40 = 0x106bad564;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0f40();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bad554; end: 106bad577;  */

void FUN_106bad554(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106bad578; end: 106bad5af;  */

void FUN_106bad578(long param_1,undefined8 param_2)

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



/* Entry: 106bad5b0; end: 106bad5b7;  */

void FUN_106bad5b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_image_1125d7478);
  return;
}



/* Entry: 106bad5b8; end: 106bad65f; -[SCStoryMembersBitmojiDataProvider .cxx_destruct] */

void FUN_106bad5b8(long param_1)

{
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


