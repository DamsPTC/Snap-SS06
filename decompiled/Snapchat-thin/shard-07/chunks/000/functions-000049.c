/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050eea5c; end: 1050eeaaf;  */

void FUN_1050eea5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb9320(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050eeab0; end: 1050eecf3; -[SCScanResultsSnapcodeAddFriendViewModelProvider _bitmojiSelfieImageForSnapchatter:] */

void FUN_1050eeab0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  lVar2 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puVar9 = puVar1;
  if (lVar2 == 0) {
    lVar2 = param_3;
    FUN_1050eecf4(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126b4bc0;
    _objc_alloc(PTR_PTR_1126b4bc0);
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ace0(puVar4,param_2,lVar2,lVar3,lVar6,0,0,0,1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1050eed5c;
    puStack_68 = &UNK_1108672e8;
    _objc_retain(puVar1);
    puStack_60 = puVar1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x00010bfaa020(uVar7,param_2,puVar4,0,0x2f,uVar8,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_58);
    _objc_release(puStack_60);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1050eecf4; end: 1050eedb3;  */

void FUN_1050eecf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108ffe710();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = 1;
  func_0x000108ffef38(1,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050eedb4; end: 1050eeecb; -[SCScanResultsSnapcodeAddFriendViewModelProvider _showFriendProfile:] */

void FUN_1050eedb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_80 = 0x20;
  uStack_78 = 0;
  uStack_68 = 0x14;
  uStack_70 = 0x1a040a22;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0cfc40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c015a00(puVar2,param_2,&uStack_80,uVar3,param_3,param_1);
  }
  _objc_release(uVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72740();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1050eeecc; end: 1050eef13; -[SCScanResultsSnapcodeAddFriendViewModelProvider friendProfileDidDismiss:] */

void FUN_1050eeecc(long param_1)

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



/* Entry: 1050eef14; end: 1050eef4b; -[SCScanResultsSnapcodeAddFriendViewModelProvider friendProfileWillDismiss:] */

void FUN_1050eef14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010beeee20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050eef4c; end: 1050eefcf; -[SCScanResultsSnapcodeAddFriendViewModelProvider .cxx_destruct] */

void FUN_1050eef4c(long param_1)

{
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



/* Entry: 1050eefd0; end: 1050ef173; -[SCScanResultsSnapcodeAddFriendViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050eefd0(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126b4bc8;
  _objc_alloc();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11271c1a4);
  lVar2 = param_1 + _DAT_11271c1a8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c1ac;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271c1b0;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271c1b4;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010be72ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0158c0(puVar1,param_2,uVar11,lVar3,lVar5,lVar7,lVar9,lVar10);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11271c1b8);
  *(undefined **)(param_1 + _DAT_11271c1b8) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271c1bc;
  _objc_loadWeakRetained(param_1);
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



/* Entry: 1050ef174; end: 1050ef207; -[SCScanResultsSnapcodeAddFriendViewModelProviderEntryPoint _performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef174(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11271c1c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1050ef208; end: 1050ef26b; -[SCScanResultsSnapcodeAddFriendViewModelProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef208(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_11271c1b8;
  func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e6200;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ef26c; end: 1050ef2f3; -[SCScanResultsSnapcodeAddFriendViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef26c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c1a4,0);
  _objc_destroyWeak(param_1 + _DAT_11271c1b4);
  _objc_destroyWeak(param_1 + _DAT_11271c1c0);
  _objc_destroyWeak(param_1 + _DAT_11271c1ac);
  _objc_destroyWeak(param_1 + _DAT_11271c1b0);
  _objc_destroyWeak(param_1 + _DAT_11271c1a8);
  _objc_destroyWeak(param_1 + _DAT_11271c1bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c1b8,0);
  return;
}



/* Entry: 1050ef2f4; end: 1050ef30b;  */

void FUN_1050ef2f4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc5df8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc5df8,
                      &PTR____CFConstantStringClassReference_110dc5e18,0);
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



/* Entry: 1050ef30c; end: 1050ef403; -[SCUnifiedProfileCommunitiesGroupChatInfoCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef30c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4bd0;
  _objc_opt_class(PTR_PTR_1126b4bd0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11271c1c4;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_1050ef3e4;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    func_0x00010bed5060(param_1);
  }
LAB_1050ef3e4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ef404; end: 1050ef40f; +[SCUnifiedProfileCommunitiesGroupChatInfoCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_1050ef404(void)

{
  return;
}



/* Entry: 1050ef410; end: 1050ef6cf; -[SCUnifiedProfileCommunitiesGroupChatInfoCollectionViewCell _updateCellViewWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1050ef410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + _DAT_11271c1c8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dc5e58;
  uVar2 = param_3;
  func_0x00010c0c7980(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dc5e78;
  uVar2 = param_3;
  puStack_78 = puVar3;
  func_0x00010bf43120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_70 = uVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b4bd8;
  _objc_opt_new(PTR_PTR_1126b4bd8);
  puVar6 = PTR_PTR_1126b4be0;
  _objc_alloc();
  func_0x00010c061d40();
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0(puVar7);
  lVar11 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  func_0x00010c219b60(puVar7,param_2,0);
  func_0x00010befbb60(puVar7,param_2,puVar6);
  func_0x00010c219b60(puVar6,param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + _DAT_11271c1c4);
}



/* Entry: 1050ef6d0; end: 1050ef6df; -[SCUnifiedProfileCommunitiesGroupChatInfoCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050ef6d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271c1c4);
}



/* Entry: 1050ef6e0; end: 1050ef6ef; -[SCUnifiedProfileCommunitiesGroupChatInfoCollectionViewCell valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050ef6e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271c1c8);
}



/* Entry: 1050ef6f0; end: 1050ef72f; -[SCUnifiedProfileCommunitiesGroupChatInfoCollectionViewCell setValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271c1c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050ef730; end: 1050ef76f; -[SCUnifiedProfileCommunitiesGroupChatInfoCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef730(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c1c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c1c4,0);
  return;
}



/* Entry: 1050ef770; end: 1050ef993; -[SCCommunitiesGroupChatGroupProfileSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef770(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11271c1cc;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcf200();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar1 = param_1 + lVar12;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf43000();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b4be8;
      _objc_alloc();
      lVar1 = param_1 + _DAT_11271c1d0;
      _objc_loadWeakRetained();
      lVar5 = lVar1;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11271c1d4;
      _objc_loadWeakRetained();
      lVar6 = lVar2;
      func_0x00010bf62060();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar3);
      lVar7 = lVar3;
      func_0x00010bf43000();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1 + _DAT_11271c1d8;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar8;
      func_0x00010bf42d60();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar10);
      lVar11 = lVar10;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05fea0(puVar4,param_2,lVar5,lVar6,lVar7,lVar9,lVar11);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar3);
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(lVar5);
      _objc_release(lVar1);
      param_1 = param_1 + lVar12;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar1);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 1050ef994; end: 1050ef9e3; -[SCCommunitiesGroupChatGroupProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ef994(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c1d8);
  _objc_destroyWeak(param_1 + _DAT_11271c1d4);
  _objc_destroyWeak(param_1 + _DAT_11271c1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c1cc);
  return;
}



/* Entry: 1050ef9e4; end: 1050efb07; -[SCUnifiedProfileCommunitiesGroupChatSectionCreator initWithValdiRuntimeProvider:customStoriesDataFetcher:communityId:communitiesGroupChatNetworkRequester:groupId:] */

undefined1 *
FUN_1050ef9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6208;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
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



/* Entry: 1050efb08; end: 1050efb0f; -[SCUnifiedProfileCommunitiesGroupChatSectionCreator order] */

undefined8 FUN_1050efb08(void)

{
  return 5;
}



/* Entry: 1050efb10; end: 1050efc07; -[SCUnifiedProfileCommunitiesGroupChatSectionCreator section] */

void FUN_1050efb10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  puVar2 = PTR_PTR_1126b4bf0;
  _objc_alloc(PTR_PTR_1126b4bf0);
  func_0x00010c05fea0();
  func_0x00010c1f9240(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  ppuStack_38 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f12458;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar2 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050efc08; end: 1050efc1f; -[SCUnifiedProfileCommunitiesGroupChatSectionCreator lifecycleAnnouncer] */

void FUN_1050efc08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050efc20; end: 1050efc2b; -[SCUnifiedProfileCommunitiesGroupChatSectionCreator setLifecycleAnnouncer:] */

void FUN_1050efc20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1050efc2c; end: 1050efc33; -[SCUnifiedProfileCommunitiesGroupChatSectionCreator actionHandler] */

undefined8 FUN_1050efc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1050efc34; end: 1050efc9b; -[SCUnifiedProfileCommunitiesGroupChatSectionCreator .cxx_destruct] */

void FUN_1050efc34(long param_1)

{
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



/* Entry: 1050efc9c; end: 1050efdbf; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider initWithValdiRuntimeProvider:customStoriesDataFetcher:communityId:communitiesGroupChatNetworkRequester:groupId:] */

undefined1 *
FUN_1050efc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6210;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
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



/* Entry: 1050efdc0; end: 1050efdd3; +[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider announcerIdentifier] */

void FUN_1050efdc0(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1050efdd4; end: 1050efdd7; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider addListener:] */

void FUN_1050efdd4(void)

{
  return;
}



/* Entry: 1050efdd8; end: 1050efddb; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider removeListener:] */

void FUN_1050efdd8(void)

{
  return;
}



/* Entry: 1050efddc; end: 1050efde3; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider setUp] */

void FUN_1050efddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getCommunityInfoWithCommunityId_112565138,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1050efde4; end: 1050efe2f; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider setSectionDataModel:] */

void FUN_1050efde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050efe30; end: 1050eff1f; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1050efe30(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *unaff_x20;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    unaff_x20 = PTR_PTR_1126aea98;
    _objc_alloc();
    unaff_x21 = &PTR____CFConstantStringClassReference_110dc5e38;
    unaff_x22 = PTR_PTR_1126b4bd0;
    _objc_alloc();
    func_0x00010c02a2a0();
    func_0x00010bffd260();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = unaff_x20;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    param_1 = unaff_x22;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_b0;
    pcStack_48 = FUN_1050eff20;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_90 = *(undefined8 *)(param_1 + 8);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1050f0018;
    puStack_98 = &UNK_11085bb28;
    puStack_70 = unaff_x22;
    ppuStack_68 = unaff_x21;
    puStack_60 = unaff_x20;
    puStack_58 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(uStack_90);
    _objc_retainBlock();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dc5e38;
    puVar3 = (undefined1 *)ppuVar2;
    _objc_retainBlock();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      _objc_retain(param_2);
      puVar5 = PTR_PTR_1126b4bf8;
      _objc_opt_class(PTR_PTR_1126b4bf8);
      uVar4 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar5);
      uVar1 = param_2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      func_0x00010c21ff80(uVar1);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050eff20; end: 1050f0087; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1050eff20(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1050f0018;
  puStack_58 = &UNK_11085bb28;
  _objc_retain(uStack_50);
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc5e38;
  puVar3 = (undefined1 *)ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126b4bf8;
  _objc_opt_class(PTR_PTR_1126b4bf8);
  uVar5 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar4);
  uVar1 = param_2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c21ff80(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050f0088; end: 1050f010b; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_1050f0088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc5e38;
  puVar1 = PTR_PTR_1126b4bf8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1050f010c; end: 1050f0113; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_1050f010c(void)

{
  return 1;
}



/* Entry: 1050f0114; end: 1050f0263; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider _getCommunityInfoWithCommunityId:groupId:] */

void FUN_1050f0114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf62500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f0264; end: 1050f02e7;  */

void FUN_1050f0264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be1de20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f02e8; end: 1050f042b; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider _getCommunityGroupChatMemberCountWithCommunityId:groupId:displayName:] */

void FUN_1050f02e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010c099fe0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f042c; end: 1050f05d3;  */

void FUN_1050f042c(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c291700();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_f0;
    lVar1 = param_2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_2);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar6 = uVar8;
          func_0x00010bfce800();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar6;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x000108f579f0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar6);
          if ((int)uVar4 != 0) {
            func_0x00010bfce800(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c276880();
            _objc_release(uVar8);
            lVar5 = param_1 + 0x30;
            _objc_loadWeakRetained();
            func_0x00010bea2d20();
            _objc_release(lVar5);
          }
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        param_4 = auStack_f0;
        lVar1 = param_2;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release();
    param_1 = param_2;
    param_3 = (undefined1 *)puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined1 **)(param_1 + 0x30) = param_4;
  *(undefined1 **)(param_1 + 0x38) = param_3;
  _objc_release(uVar6);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f05d4; end: 1050f062b; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider _setCommunityLabelsWithDisplayName:membersCount:] */

void FUN_1050f05d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f062c; end: 1050f0643; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider dataProviderDelegate] */

void FUN_1050f062c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050f0644; end: 1050f064f; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider setDataProviderDelegate:] */

void FUN_1050f0644(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1050f0650; end: 1050f0657; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050f0650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1050f0658; end: 1050f0687; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050f0658(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1050f0688; end: 1050f068f; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider sectionDataModel] */

undefined8 FUN_1050f0688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1050f0690; end: 1050f070f; -[SCUnifiedProfileCommunitiesGroupChatSectionDataProvider .cxx_destruct] */

void FUN_1050f0690(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050f0710; end: 1050f0797; -[SCUnifiedProfileCommunitiesGroupChatInfoCellViewModel initWithMembersCount:communityShortName:] */

undefined1 *
FUN_1050f0710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1050f0798; end: 1050f07bb; -[SCUnifiedProfileCommunitiesGroupChatInfoCellViewModel copyWithZone:] */

undefined8 FUN_1050f0798(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050f07bc; end: 1050f0823; -[SCUnifiedProfileCommunitiesGroupChatInfoCellViewModel hash] */

long * FUN_1050f07bc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1050f08a8;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_1050f08a8;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1050f08a8;
    }
  }
  plVar5 = (long *)0x1;
LAB_1050f08a8:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 1050f0824; end: 1050f08c3; -[SCUnifiedProfileCommunitiesGroupChatInfoCellViewModel isEqual:] */

long FUN_1050f0824(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050f08a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1050f08a8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1050f08a8;
    }
  }
  lVar3 = 1;
LAB_1050f08a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050f08c4; end: 1050f08cb; -[SCUnifiedProfileCommunitiesGroupChatInfoCellViewModel membersCount] */

undefined8 FUN_1050f08c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050f08cc; end: 1050f08d3; -[SCUnifiedProfileCommunitiesGroupChatInfoCellViewModel communityShortName] */

undefined8 FUN_1050f08cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050f08d4; end: 1050f08df; -[SCUnifiedProfileCommunitiesGroupChatInfoCellViewModel .cxx_destruct] */

void FUN_1050f08d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050f08e0; end: 1050f09c3; -[SCCommunitiesMemberDataServiceProvider provide] */

void FUN_1050f08e0(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126b4c00;
  _objc_alloc(PTR_PTR_1126b4c00);
  func_0x00010c02a2c0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050f09c4; end: 1050f0a03;  */

void FUN_1050f09c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5be60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050f0a04; end: 1050f0c0b; -[SCCommunitiesMemberDataServiceProvider _makeMembersDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f0a04(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b4c08;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271c228;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11271c22c;
  lVar4 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271c230;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfba6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271c234;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271c238;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271c23c;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271c240;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar16 = param_1;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007ee0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar16);
  _objc_release(lVar16);
  _objc_release(param_1);
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



/* Entry: 1050f0c0c; end: 1050f0c7f; -[SCCommunitiesMemberDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f0c0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c234);
  _objc_destroyWeak(param_1 + _DAT_11271c238);
  _objc_destroyWeak(param_1 + _DAT_11271c23c);
  _objc_destroyWeak(param_1 + _DAT_11271c22c);
  _objc_destroyWeak(param_1 + _DAT_11271c230);
  _objc_destroyWeak(param_1 + _DAT_11271c240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c228);
  return;
}



/* Entry: 1050f0c80; end: 1050f0ec3; -[SCCommunitiesProfileMembersDataProvider initWithCustomStoriesDataFetcher:snapchattersObservableRepository:friendscoreProvider:friendmojiProviderFactory:userId:valdiRuntimeProvider:circumstanceEngine:snapchattersPublicInfoFetcher:] */

undefined8 *
FUN_1050f0c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e6220;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126b1548;
    _objc_alloc(PTR_PTR_1126b1548);
    func_0x00010c046040();
    lVar4 = param_6;
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = lVar5;
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
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



/* Entry: 1050f0ec4; end: 1050f1003; -[SCCommunitiesProfileMembersDataProvider getGroupMembersWithGroupId:count:] */

void FUN_1050f0ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be1f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050f1004; end: 1050f108b;  */

void FUN_1050f1004(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0f4aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010be1f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1050f108c; end: 1050f10f7; -[SCCommunitiesProfileMembersDataProvider getGroupMembersCountWithGroupId:] */

void FUN_1050f108c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050f10f8; end: 1050f1153;  */

void FUN_1050f10f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0f4aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050f1154; end: 1050f11e7; -[SCCommunitiesProfileMembersDataProvider _getGroupMetadataWithGroupId:] */

void FUN_1050f1154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050f11e8; end: 1050f13bf; -[SCCommunitiesProfileMembersDataProvider _getGroupMembersWithParticipants:count:] */

void FUN_1050f11e8(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_4 == 0) {
    uVar2 = param_3;
    func_0x00010bf529e0();
  }
  else {
    uVar2 = param_4;
    func_0x00010c2827c0();
    uVar9 = param_3;
    func_0x00010bf529e0();
    if (uVar9 <= uVar2) {
      uVar2 = uVar9;
    }
  }
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x18);
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar10 & 1) == 0) {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c09dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1050f13c0; end: 1050f13df;  */

void FUN_1050f13c0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110867460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050f13e0; end: 1050f142b;  */

void FUN_1050f13e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050f142c; end: 1050f158f; -[SCCommunitiesProfileMembersDataProvider getRankedGroupMembersWithGroupId:surface:count:] */

void FUN_1050f142c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_2);
  func_0x00010be1f840(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_1;
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010bfb2660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050f1590; end: 1050f162b;  */

void FUN_1050f1590(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010c0f4aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  func_0x00010be21e60(*(undefined8 *)(param_1 + 0x38),lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1050f162c; end: 1050f17e3; -[SCCommunitiesProfileMembersDataProvider _getRankedGroupMembersWithGroupId:allParticipants:surface:count:] */

void FUN_1050f162c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_6 == (undefined *)0x0) {
    func_0x00010bf529e0(param_5);
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    param_6 = puVar1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_4);
  uStack_60 = param_1;
  _objc_retain(param_6);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050f17e4; end: 1050f190f;  */

void FUN_1050f17e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_copyWeak(auStack_40,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010bfc69a0(uVar1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1050f1910; end: 1050f1a4b;  */

void FUN_1050f1910(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4c10;
  func_0x00010bfbc0e0(PTR_PTR_1126b4c10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x28));
  _objc_copyWeak(auStack_58,param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar2);
  func_0x00010bfc9540(uVar5,param_1,puVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f1a4c; end: 1050f1b07;  */

void FUN_1050f1a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be21e80(lVar1);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1050f1b08; end: 1050f1b33;  */

void FUN_1050f1b08(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1050f1b34; end: 1050f1d47; -[SCCommunitiesProfileMembersDataProvider _getRankedGroupMembersWithMemberRankings:allParticipants:count:completion:] */

void FUN_1050f1b34(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_x5;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x5);
  lVar2 = param_1;
  func_0x00010bdcd620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar5 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c2923e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x15;
  uVar7 = 0;
  func_0x0001000819a8(0x15);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x5);
  func_0x00010c09d7c0(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(in_x5);
  _objc_release(in_x5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(uVar7);
  _objc_opt_new();
  uVar5 = uVar7;
  func_0x00010050471c(uVar7,&PTR___NSConcreteGlobalBlock_110867510,
                      &PTR___NSConcreteGlobalBlock_110867530);
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  _objc_retain(puVar3);
  func_0x00010bf97e80(uVar6);
  (**(code **)(*(long *)(lVar2 + 0x28) + 0x10))(*(long *)(lVar2 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1050f1d48; end: 1050f1e23;  */

void FUN_1050f1d48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  _objc_opt_new();
  uVar2 = param_2;
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110867510,
                      &PTR___NSConcreteGlobalBlock_110867530);
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(puVar1);
  func_0x00010bf97e80(uVar3);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050f1e24; end: 1050f1e2b;  */

void FUN_1050f1e24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1050f1e2c; end: 1050f1e53;  */

void FUN_1050f1e2c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1050f1e54; end: 1050f1f2b;  */

void FUN_1050f1e54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040f20(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b4c18;
  _objc_alloc(PTR_PTR_1126b4c18);
  func_0x00010c05a720();
  _objc_release(param_2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050f1f2c; end: 1050f20c7; -[SCCommunitiesProfileMembersDataProvider _appendUnrankedParticipantIfNeededWithMemberRankings:allParticipants:count:] */

void FUN_1050f1f2c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = param_5;
  func_0x00010c2827c0();
  if (puVar1 < puVar2) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1050f20c8;
    puStack_60 = &UNK_110867580;
    _objc_retain();
    puStack_58 = puVar3;
    func_0x00010bf97e80(param_3,param_2,&puStack_78);
    puStack_a8 = puVar2;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1050f2128;
    puStack_90 = &UNK_1108675b0;
    puStack_88 = puVar3;
    _objc_retain(param_5);
    puStack_80 = param_5;
    _objc_retain(puVar3);
    func_0x00010bf97e80(param_4,param_2,&puStack_a8);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_d0 = puVar2;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1050f22c4;
    puStack_b8 = &UNK_1108675e0;
    _objc_retain();
    puStack_b0 = puVar1;
    func_0x00010bf97ce0(puVar3,param_2,&puStack_d0);
    _objc_release(puStack_b0);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    _objc_release(puStack_58);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050f20c8; end: 1050f2127;  */

void FUN_1050f20c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050f2128; end: 1050f22c3;  */

void FUN_1050f2128(long param_1,undefined *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *(long *)(param_1 + 0x20);
    puVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (lVar7 != 0) goto LAB_1050f22a0;
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4c20;
    _objc_alloc(PTR_PTR_1126b4c20);
    puVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ba40(0,puVar2);
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(uVar8);
    _objc_release(puVar3);
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    uVar6 = *(ulong *)(param_1 + 0x28);
    func_0x00010c2827c0();
    _objc_release(uVar4);
    if (uVar6 <= uVar5) {
      *param_4 = 1;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_1050f22a0:
  _objc_release(param_2);
  return;
}



/* Entry: 1050f22c4; end: 1050f22cb;  */

void FUN_1050f22c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 1050f22cc; end: 1050f235f; -[SCCommunitiesProfileMembersDataProvider observeIncomingFriends] */

void FUN_1050f22cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfec000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050f2360; end: 1050f237f;  */

void FUN_1050f2360(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110867650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050f2380; end: 1050f253b;  */

void FUN_1050f2380(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  puVar2 = PTR_PTR_1126b4c28;
  _objc_alloc(PTR_PTR_1126b4c28);
  func_0x00010c05a680();
  uVar3 = param_3;
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010befb8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf5e0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  func_0x00010c0df720(param_1 * 1000.0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abf80(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0737e0();
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1b60(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c073820(uVar3);
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5a40(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050f253c; end: 1050f25cb; -[SCCommunitiesProfileMembersDataProvider observeOutgoingFriends] */

void FUN_1050f253c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050f25cc; end: 1050f25eb;  */

void FUN_1050f25cc(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108676b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050f25ec; end: 1050f2637;  */

void FUN_1050f25ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4c30;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050f2638; end: 1050f2643; -[SCCommunitiesProfileMembersDataProvider pushToValdiMarshaller:] */

void FUN_1050f2638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050f2644; end: 1050f264b; -[SCCommunitiesProfileMembersDataProvider friendmojiProvider] */

undefined8 FUN_1050f2644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1050f264c; end: 1050f267b; -[SCCommunitiesProfileMembersDataProvider setFriendmojiProvider:] */

void FUN_1050f264c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050f267c; end: 1050f2683; -[SCCommunitiesProfileMembersDataProvider friendScoreProvider] */

undefined8 FUN_1050f267c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1050f2684; end: 1050f26b3; -[SCCommunitiesProfileMembersDataProvider setFriendScoreProvider:] */

void FUN_1050f2684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050f26b4; end: 1050f272b; -[SCCommunitiesProfileMembersDataProvider .cxx_destruct] */

void FUN_1050f26b4(long param_1)

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



/* Entry: 1050f272c; end: 1050f2827; -[SCCommunitiesAddFriendsBillboardEligibilityProvider initWithCircumstanceEngine:communitiesAttributionProviding:snapchattersDataFetcher:currentUserId:] */

undefined1 *
FUN_1050f272c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6228;
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



/* Entry: 1050f2828; end: 1050f282f; -[SCCommunitiesAddFriendsBillboardEligibilityProvider preCheckSource] */

undefined8 FUN_1050f2828(void)

{
  return 0x18;
}



/* Entry: 1050f2830; end: 1050f292f; -[SCCommunitiesAddFriendsBillboardEligibilityProvider eligibleWithRequestor:campaignName:] */

void FUN_1050f2830(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000108060ebc();
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010bfee200();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1050f2930;
  puStack_58 = &UNK_110849620;
  puStack_50 = puVar3;
  uStack_48 = uVar2;
  _objc_retain(puVar3);
  func_0x00010c0d11c0(uVar4,param_2,uVar1,uVar5,&puStack_70);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar6 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_50);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


