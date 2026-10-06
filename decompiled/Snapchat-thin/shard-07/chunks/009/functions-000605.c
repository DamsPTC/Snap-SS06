/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b39ce0; end: 105b39d0b; -[SCCustomStoryActionMenuWorkflow didEndEditShortcuts] */

void FUN_105b39ce0(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b39d0c; end: 105b39d43; -[SCCustomStoryActionMenuWorkflow .cxx_destruct] */

void FUN_105b39d0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b39d44; end: 105b39eff; -[SCStoryPrivacySettingsScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b39d44(long param_1,undefined8 param_2)

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
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126c2800;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273036c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112730370;
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar6 = lVar12;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112730374);
  lVar7 = param_1 + _DAT_112730378;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_11273037c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112730380;
  lVar10 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfe3120();
  func_0x00010c04df40(puVar1,param_2,lVar3,lVar5,lVar6,uVar14,lVar7,lVar9,(char)lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b39f00; end: 105b39f73; -[SCStoryPrivacySettingsScopeEntryPoint storyPrivacySettingsViewControllerDidDealloc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b39f00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112730380;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25ab20(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b39f74; end: 105b39fdf; -[SCStoryPrivacySettingsScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b39f74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112730374,0);
  _objc_destroyWeak(param_1 + _DAT_112730378);
  _objc_destroyWeak(param_1 + _DAT_11273037c);
  _objc_destroyWeak(param_1 + _DAT_112730370);
  _objc_destroyWeak(param_1 + _DAT_11273036c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112730380);
  return;
}



/* Entry: 105b39fe0; end: 105b3a1bf; -[SCMyStoriesSettingsViewController initWithStoryPrivacySettingManager:snapProProfileIdProvider:snapProManagedProfilesProvider:myStoryCustomViewersPickerScopeExposer:myStoryCustomViewersPickerScopeServices:circumstanceEngine:highlightCustom:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105b39fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ec008;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112730384;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112730388;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273038c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112730390;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112730394;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112730398;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273039c) = param_9;
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127303a0,param_11);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127303a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127303a4) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b3a1c0; end: 105b3a1c7; -[SCMyStoriesSettingsViewController pageViewName] */

undefined8 FUN_105b3a1c0(void)

{
  return 0x141;
}



/* Entry: 105b3a1c8; end: 105b3a5b7; -[SCMyStoriesSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3a1c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ec008;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127303a8);
  *(undefined **)(param_1 + _DAT_1127303a8) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  func_0x00010c219b60(puVar1);
  func_0x00010c160fc0(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  func_0x00010c189840(puVar1);
  func_0x00010c16e9a0(puVar1);
  func_0x00010c18b5e0(puVar1);
  func_0x00010c1eeb20(0x4046000000000000,puVar1);
  func_0x00010c167740(puVar1);
  func_0x00010c1f7b20(puVar1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(puVar1);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puStack_e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  puStack_a8 = puVar3;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_b8 = puVar3;
  puStack_88 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  puStack_c8 = puVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_d8 = puVar5;
  puStack_80 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_78 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_e0);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puStack_d8);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  puVar5 = puStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105b3a5b8;
  puStack_118 = PTR_PTR_1126ec008;
  puStack_120 = puVar5;
  lStack_110 = lVar4;
  puStack_108 = puVar3;
  puStack_100 = puVar1;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_120,PTR_s_viewDidLoad_112684cd8);
  uVar11 = *(undefined8 *)(puVar5 + _DAT_112730384);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c25aac0();
  *(undefined8 *)(puVar5 + _DAT_1127303ac) = uVar2;
  _objc_release(uVar11);
  return;
}



/* Entry: 105b3a5b8; end: 105b3a633; -[SCMyStoriesSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3a5b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec008;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730384);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25aac0();
  *(undefined8 *)(param_1 + _DAT_1127303ac) = uVar2;
  _objc_release(uVar1);
  return;
}



/* Entry: 105b3a634; end: 105b3a637; -[SCMyStoriesSettingsViewController getTitle] */

void FUN_105b3a634(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0f738;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f0f738,
                      &PTR____CFConstantStringClassReference_110f0f278,0);
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



/* Entry: 105b3a638; end: 105b3a6c3; -[SCMyStoriesSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3a638(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = (long)_DAT_1127303a8;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar1));
  lVar1 = param_1 + _DAT_1127303a0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c25ab60();
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ec008;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105b3a6c4; end: 105b3a8af; -[SCMyStoriesSettingsViewController saveSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3a6c4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_1127303ac;
  lVar4 = *(long *)(param_1 + lVar3);
  lVar1 = *(long *)(param_1 + _DAT_112730384);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c25aac0();
  if (lVar4 != lVar5) {
    lVar5 = *(long *)(param_1 + lVar3);
    _objc_release(lVar1);
    if ((lVar5 != 2) && (lVar5 = *(long *)(param_1 + lVar3), 1 < lVar5 - 2U)) {
      puVar2 = PTR_PTR_1126b1320;
      if (lVar5 == 1) {
        func_0x00010bfb9b80();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar5 == 0) {
        func_0x00010bf9a640();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar2 = (undefined *)0x0;
      }
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      uStack_50 = 0x105b3a7fc;
      puStack_48 = &UNK_110841f80;
      lStack_40 = param_1;
      puStack_38 = puVar2;
      _objc_retain(puVar2);
      func_0x0001000d76cc("APPSTORE",&puStack_60);
      _objc_release(puStack_38);
      _objc_release(puVar2);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b3a8b0; end: 105b3a933;  */

void FUN_105b3a8b0(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7478;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072401ec(ppuVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105b3a934; end: 105b3a93f; -[SCMyStoriesSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_105b3a934(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105b3a940; end: 105b3a947; -[SCMyStoriesSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105b3a940(void)

{
  return 1;
}



/* Entry: 105b3a948; end: 105b3a967; -[SCMyStoriesSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105b3a948(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb4040();
  uVar1 = 2;
  if (param_1 == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 105b3a968; end: 105b3ada7; -[SCMyStoriesSettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3a968(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c04ec80();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1faee0(param_3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010bec4cc0();
  if (param_1 == 2) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc7af8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7af8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc7b18;
    func_0x00010c160fc0();
    _objc_release(puVar1);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7b18,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c161260(param_3);
  }
  else {
    puVar1 = param_3;
    if (param_1 == 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc7ab8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7ab8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(puVar2);
      _objc_release(ppuVar4);
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc7ad8;
    }
    else {
      if (param_1 != 0) goto LAB_105b3ad6c;
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc7a78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7a78,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(puVar2);
      _objc_release(ppuVar4);
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc7a98;
    }
    func_0x00010c160fc0();
    _objc_release(puVar1);
    func_0x00010bcbeaa8(ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    func_0x00010c161260(param_3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
LAB_105b3ad6c:
  func_0x00010c17c180(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b3ada8; end: 105b3ae43; -[SCMyStoriesSettingsViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_105b3ada8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f1f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f1f8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126ec008;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_class_1125ac0b8);
  func_0x00010bfe0780();
  _objc_release(param_4);
  _objc_release(ppuVar1);
  return param_1;
}



/* Entry: 105b3ae44; end: 105b3aebf; -[SCMyStoriesSettingsViewController tableView:viewForHeaderInSection:] */

void FUN_105b3ae44(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f1f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f1f8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126ec008;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_class_1125ac0b8);
  func_0x00010c29cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b3aec0; end: 105b3af47; -[SCMyStoriesSettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3aec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3);
  lVar1 = param_1;
  func_0x00010bec4cc0();
  _objc_release(param_4);
  if (lVar1 == 2) {
    func_0x00010be7ae20(param_1);
  }
  else {
    *(long *)(param_1 + _DAT_1127303ac) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127303a8),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105b3af48; end: 105b3afc7; -[SCMyStoriesSettingsViewController _setStoryPrivacyAndReload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3af48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112730384);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25aac0();
  *(undefined8 *)(param_1 + _DAT_1127303ac) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127303a8),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105b3afc8; end: 105b3affb; -[SCMyStoriesSettingsViewController _storyPrivacyForIndexPath:] */

long FUN_105b3afc8(ulong param_1,undefined8 param_2,long param_3)

{
  func_0x00010c142240(param_3);
  func_0x00010beb4040(param_1);
  return param_3 + (param_1 & 0xffffffff);
}



/* Entry: 105b3affc; end: 105b3b087; -[SCMyStoriesSettingsViewController _presentCustomStoryViewers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3affc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  lVar3 = (long)_DAT_1127303b0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112730394);
  func_0x00010bf24220(uVar2,param_2,*(undefined8 *)(param_1 + lVar3),param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112730390),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b3b088; end: 105b3b28f; -[SCMyStoriesSettingsViewController didConfirmWithSelectedItems:title:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3b088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = (long)_DAT_112730390;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_1127303b0));
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108d6508);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b3b2f8;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_initWeak(auStack_90,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112730384);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1320;
  func_0x00010bf62c00(PTR_PTR_1126b1320);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c28a660(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b3b290; end: 105b3b2f7;  */

void FUN_105b3b290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b3b2f8; end: 105b3b423;  */

void FUN_105b3b2f8(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc3e38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e38,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072401ec(ppuVar2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105b3b424; end: 105b3b47b; -[SCMyStoriesSettingsViewController myStoryCustomViewersPickerScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3b424(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730390;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b3b47c; end: 105b3b627; -[SCMyStoriesSettingsViewController _shouldHideEveryoneSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105b3b47c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar8;
  ulong uVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112730398;
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x000108f420e8();
  if ((int)uVar2 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x000108f420fc();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + _DAT_11273038c);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0b7fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_retain(uVar2);
      uVar3 = uVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      lVar5 = 0;
      if (uVar3 != 0) {
        do {
          uVar8 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar2);
            }
            uVar7 = *(ulong *)(uVar8 * 8);
            iVar6 = (int)uVar7;
            func_0x00010c074e40();
            if ((iVar6 != 0) && (func_0x00010bf2d160(), (uVar7 & 1) != 0)) {
              lVar5 = 1;
              goto LAB_105b3b5ac;
            }
            uVar8 = uVar8 + 1;
          } while (uVar3 != uVar8);
          uVar3 = uVar2;
          func_0x00010bf52a60();
        } while (uVar3 != 0);
        lVar5 = 0;
      }
LAB_105b3b5ac:
      _objc_release(uVar2);
      _objc_release(uVar2);
      goto LAB_105b3b5bc;
    }
  }
  lVar5 = 1;
LAB_105b3b5bc:
  if ((*(byte *)(param_1 + _DAT_1127303b4) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_1127303b4) = 1;
    uVar2 = *(ulong *)(param_1 + _DAT_1127303a4);
    func_0x000108f37db0(uVar2,lVar5,1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_storeStrong(uVar2 + (long)_DAT_1127303a4,0);
    _objc_storeStrong(uVar2 + (long)_DAT_1127303b0,0);
    _objc_storeStrong(uVar2 + (long)_DAT_1127303a8,0);
    _objc_destroyWeak(uVar2 + (long)_DAT_1127303a0);
    _objc_storeStrong(uVar2 + (long)_DAT_112730398,0);
    _objc_storeStrong(uVar2 + (long)_DAT_112730394,0);
    _objc_storeStrong(uVar2 + (long)_DAT_112730390,0);
    _objc_storeStrong(uVar2 + (long)_DAT_11273038c,0);
    _objc_storeStrong(uVar2 + (long)_DAT_112730388,0);
    lVar4 = uVar2 + (long)_DAT_112730384;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar4,0);
    return lVar4;
  }
  return lVar5;
}



/* Entry: 105b3b628; end: 105b3b6e3; -[SCMyStoriesSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3b628(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127303a4,0);
  _objc_storeStrong(param_1 + _DAT_1127303b0,0);
  _objc_storeStrong(param_1 + _DAT_1127303a8,0);
  _objc_destroyWeak(param_1 + _DAT_1127303a0);
  _objc_storeStrong(param_1 + _DAT_112730398,0);
  _objc_storeStrong(param_1 + _DAT_112730394,0);
  _objc_storeStrong(param_1 + _DAT_112730390,0);
  _objc_storeStrong(param_1 + _DAT_11273038c,0);
  _objc_storeStrong(param_1 + _DAT_112730388,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112730384,0);
  return;
}



/* Entry: 105b3b6e4; end: 105b3b977; -[SCMyStorySettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3b6e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127303b8);
  *(undefined **)(param_1 + _DAT_1127303b8) = puVar1;
  _objc_release(uVar8);
  _objc_initWeak(auStack_68,param_1);
  lVar2 = param_1 + _DAT_1127303bc;
  _objc_loadWeakRetained(lVar2);
  lVar9 = lVar2;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127303c0;
  lVar4 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  lVar6 = lVar3;
  func_0x00010c0d4c40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar7 = lVar6;
  func_0x00010c25ff60(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b10a8;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bdc46a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be18620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40();
  lVar9 = (long)_DAT_1127303c4;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9));
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10af80();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105b3b978; end: 105b3b9bf;  */

void FUN_105b3b978(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ab40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3b9c0; end: 105b3bb03; -[SCMyStorySettingsEntryPoint _onPlaybackSequence:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3b9c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25b720();
  if (lVar1 == 1) {
    *(undefined1 *)(param_1 + _DAT_1127303c8) = 1;
    lVar1 = param_1 + _DAT_1127303cc;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0c7e00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfbda60();
    *(char *)(param_1 + _DAT_1127303d0) = (char)lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  *(bool *)(param_1 + _DAT_1127303d4) = lVar2 != 0;
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127303c4);
  lVar1 = param_1;
  func_0x00010bdc46a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be18620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(uVar5,param_2,0,0,lVar1,param_1);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b3bb04; end: 105b3bdf3; -[SCMyStorySettingsEntryPoint _actionSheetCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3bb04(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_initWeak(auStack_58,param_1);
  puVar3 = PTR_PTR_1126b10a0;
  if (*(char *)(param_1 + _DAT_1127303c8) == '\x01') {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db72b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105b3bdf4;
    puStack_68 = &UNK_110852cd0;
    _objc_copyWeak(auStack_60,auStack_58);
    puVar4 = puVar3;
    func_0x00010bf1d200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    func_0x00010befa120(puVar1);
    puVar3 = PTR_PTR_1126b10a0;
    ppuVar2 = &PTR____CFConstantStringClassReference_110db72f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2655e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    func_0x00010c1fade0(puVar5);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_60);
  }
  puVar3 = PTR_PTR_1126b10a0;
  if (*(char *)(param_1 + _DAT_1127303d4) == '\x01') {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db7318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7318,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    puVar4 = puVar3;
    func_0x00010bf1d200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_88);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b3bdf4; end: 105b3be97;  */

void FUN_105b3bdf4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b3be98; end: 105b3bec3;  */

void FUN_105b3be98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3bec4; end: 105b3bf67;  */

void FUN_105b3bec4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b3bf68; end: 105b3bf93;  */

void FUN_105b3bf68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3bf94; end: 105b3c0d3; -[SCMyStorySettingsEntryPoint _footer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3bf94(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar6 = (long)_DAT_1127303d8;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126b10a0;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbb618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    puVar3 = puVar2;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105b3c0d4; end: 105b3c177;  */

void FUN_105b3c0d4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b3c178; end: 105b3c1a3;  */

void FUN_105b3c178(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3c1a4; end: 105b3c1a7; -[SCMyStorySettingsEntryPoint actionSheetDidDismiss:] */

void FUN_105b3c1a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebc150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__signalScopeWillEnd_11258c9f8);
  return;
}



/* Entry: 105b3c1a8; end: 105b3c273; -[SCMyStorySettingsEntryPoint _presentSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c1a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_1127303dc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_1127303c0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf23480(lVar1,param_2,lVar4,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127303e0),param_2,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105b3c274; end: 105b3c2fb; -[SCMyStorySettingsEntryPoint storyPrivacySettingsScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = (long)_DAT_1127303e0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebc150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__signalScopeWillEnd_11258c9f8);
  return;
}



/* Entry: 105b3c2fc; end: 105b3c357; -[SCMyStorySettingsEntryPoint storyPrivacySettingsScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c2fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127303e0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebc150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__signalScopeWillEnd_11258c9f8);
  return;
}



/* Entry: 105b3c358; end: 105b3c447; -[SCMyStorySettingsEntryPoint _onToggleAutosave] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c358(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_1127303cc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127303d0;
  func_0x00010c28c4c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(byte *)(param_1 + lVar5) = *(byte *)(param_1 + lVar5) ^ 1;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127303c4);
  lVar1 = param_1;
  func_0x00010bdc46a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be18620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(uVar4,param_2,0,0,lVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b3c448; end: 105b3c4a7; -[SCMyStorySettingsEntryPoint _saveStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c448(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_1127303c0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7aea0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bebc150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__signalScopeWillEnd_11258c9f8);
  return;
}



/* Entry: 105b3c4a8; end: 105b3c4f3; -[SCMyStorySettingsEntryPoint _signalScopeWillEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c4a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127303c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73e40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3c4f4; end: 105b3c583; -[SCMyStorySettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c4f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127303e0,0);
  _objc_destroyWeak(param_1 + _DAT_1127303dc);
  _objc_destroyWeak(param_1 + _DAT_1127303cc);
  _objc_destroyWeak(param_1 + _DAT_1127303bc);
  _objc_destroyWeak(param_1 + _DAT_1127303c0);
  _objc_storeStrong(param_1 + _DAT_1127303d8,0);
  _objc_storeStrong(param_1 + _DAT_1127303b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127303c4,0);
  return;
}



/* Entry: 105b3c584; end: 105b3c7fb; -[SCStoryShareEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c584(long param_1)

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
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  
  puVar1 = PTR_PTR_1126c2808;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127303e4;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_1127303e8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127303ec;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_1127303f0;
  lVar7 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar9 = lVar22;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127303f8;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127303fc;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112730400;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c25b0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112730404;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112730408;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041e00();
  lVar21 = (long)_DAT_11273040c;
  uVar20 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar20);
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
  _objc_release(lVar22);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar21),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105b3c7fc; end: 105b3c8b3; -[SCStoryShareEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3c7fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112730408);
  _objc_storeStrong(param_1 + _DAT_1127303f4,0);
  _objc_destroyWeak(param_1 + _DAT_112730404);
  _objc_destroyWeak(param_1 + _DAT_1127303fc);
  _objc_destroyWeak(param_1 + _DAT_112730400);
  _objc_destroyWeak(param_1 + _DAT_1127303ec);
  _objc_destroyWeak(param_1 + _DAT_1127303f8);
  _objc_destroyWeak(param_1 + _DAT_1127303e8);
  _objc_destroyWeak(param_1 + _DAT_1127303f0);
  _objc_destroyWeak(param_1 + _DAT_1127303e4);
  _objc_destroyWeak(param_1 + _DAT_112730410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273040c,0);
  return;
}



/* Entry: 105b3c8b4; end: 105b3cbbf; -[SCStoryShareSendToWorkflow initWithScope:myStoriesDataCoordinator:offPlatformLinkGenerationService:storiesMediaCoordinator:storiesThumbnailCoordinator:sendToScopeExposer:conversationDestinationParser:spotlightShareSender:storyShareSender:temporaryFileWriter:circumstanceEngine:] */

undefined8 *
FUN_105b3c8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ec010;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c247980();
    puVar1[4] = uVar2;
    uVar2 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 5,uVar2);
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 105b3cbc0; end: 105b3ccd3; -[SCStoryShareSendToWorkflow begin] */

void FUN_105b3cbc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0x15;
      _dispatch_get_global_queue(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c11d5e0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 105b3ccd4; end: 105b3cd1b;  */

void FUN_105b3ccd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3cd1c; end: 105b3d1db; -[SCStoryShareSendToWorkflow _onFetchedPlaybackSequence:] */

void FUN_105b3cd1c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined **unaff_x28;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined1 auStack_258 [8];
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uVar2 = param_3;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar10 = *plStack_140;
      do {
        uVar12 = 0;
        do {
          if (*plStack_140 != lVar10) {
            _objc_enumerationMutation(uVar2);
          }
          uVar8 = *(ulong *)(lStack_148 + uVar12 * 8);
          uVar4 = uVar8;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((uVar5 & 1) != 0) {
            _objc_retain(uVar8);
            _objc_release(uVar2);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            if (uVar8 == 0) goto LAB_105b3d13c;
            puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_178 = 0xc2000000;
            pcStack_170 = FUN_105b3d1dc;
            puStack_168 = &UNK_110841f80;
            lStack_160 = param_1;
            _objc_retain(uVar8);
            uStack_158 = uVar8;
            func_0x000100162d98("APPSTORE",&puStack_180);
            puStack_1a8 = &uStack_1b0;
            uStack_1b0 = 0;
            uStack_1a0 = 0x3032000000;
            pcStack_198 = FUN_105b3d208;
            uStack_190 = 0x105b3d218;
            uStack_188 = 0;
            puStack_1d8 = &uStack_1e0;
            uStack_1e0 = 0;
            uStack_1d0 = 0x3032000000;
            pcStack_1c8 = FUN_105b3d208;
            uStack_1c0 = 0x105b3d218;
            uStack_1b8 = 0;
            puVar6 = auStack_1e8;
            _objc_initWeak(puVar6,param_1);
            _dispatch_group_create();
            _dispatch_group_enter();
            uVar2 = uVar8;
            func_0x000107d22a6c(uVar8,0,1);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            uVar3 = uVar2;
            func_0x00010bf267e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010b26c050(uVar9,uVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            uVar7 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010c269d40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            puStack_220 = puVar1;
            uStack_218 = 0xc2000000;
            pcStack_210 = FUN_105b3d220;
            puStack_208 = &UNK_1108d6528;
            puStack_1f8 = &uStack_1b0;
            unaff_x28 = &puStack_220;
            _objc_copyWeak(auStack_1f0,auStack_1e8);
            _objc_retain(puVar6);
            puStack_200 = puVar6;
            func_0x00010c11d620(uVar7);
            _objc_release(uVar7);
            _dispatch_group_enter(puVar6);
            uVar3 = uVar8;
            func_0x00010c26d760();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar3;
            func_0x000107d227d0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            if (uVar12 == 0) {
              _dispatch_group_leave(puVar6);
            }
            else {
              uVar11 = *(undefined8 *)(param_1 + 0x48);
              uVar7 = 0x15;
              _dispatch_get_global_queue(0x15,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_250 = puVar1;
              uStack_248 = 0xc2000000;
              uStack_240 = 0x105b3d298;
              puStack_238 = &UNK_1108d6558;
              puStack_228 = &uStack_1e0;
              _objc_retain(puVar6);
              puStack_230 = puVar6;
              func_0x00010c11da60(uVar11);
              _objc_release(uVar7);
              _objc_release(puStack_230);
            }
            puStack_288 = puVar1;
            uStack_280 = 0xc2000000;
            pcStack_278 = FUN_105b3d2f4;
            puStack_270 = &UNK_1108ad760;
            _objc_copyWeak(auStack_258,auStack_1e8);
            puStack_268 = &uStack_1e0;
            puStack_260 = &uStack_1b0;
            func_0x000100bc0718(puVar6,PTR___dispatch_main_q_11034be20,&puStack_288);
            _objc_destroyWeak(auStack_258);
            _objc_release(uVar12);
            _objc_release(puStack_200);
            _objc_destroyWeak(auStack_1f0);
            _objc_release(uVar9);
            _objc_release(uVar2);
            _objc_release(puVar6);
            _objc_destroyWeak(auStack_1e8);
            __Block_object_dispose(&uStack_1e0,8);
            _objc_release(uStack_1b8);
            __Block_object_dispose(&uStack_1b0,8);
            _objc_release(uStack_188);
            _objc_release(uStack_158);
            uVar2 = uVar8;
            goto LAB_105b3d134;
          }
          uVar12 = uVar12 + 1;
        } while (uVar3 != uVar12);
        uVar3 = uVar2;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
LAB_105b3d134:
    _objc_release(uVar2);
  }
LAB_105b3d13c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x28 + 6);
    _objc_destroyWeak(auStack_1e8);
    __Block_object_dispose(&uStack_1e0,8);
    __Block_object_dispose(&uStack_1b0,8);
    __Unwind_Resume();
    lVar10 = *(long *)(param_3 + 0x20);
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(lVar10 + 0x78);
    *(undefined8 *)(lVar10 + 0x78) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  return;
}



/* Entry: 105b3d1dc; end: 105b3d207;  */

void FUN_105b3d1dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105b3d208; end: 105b3d21f;  */

void FUN_105b3d208(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b3d220; end: 105b3d2f3;  */

void FUN_105b3d220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be692c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105b3d2f4; end: 105b3d337;  */

void FUN_105b3d2f4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3d338; end: 105b3d5ab; -[SCStoryShareSendToWorkflow _onFetchedContentModel:] */

void FUN_105b3d338(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x78);
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27dd80();
  if (puVar2 + 1 < (undefined *)0x1a && (1L << ((ulong)(puVar2 + 1) & 0x3f) & 0x36de5fdU) != 0) {
    _objc_release(puVar1);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = *(undefined **)(param_1 + 0x70);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    puVar1 = puVar3;
    func_0x00010c2bda80(puVar3,param_2,lVar6,puVar2,0,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lStack_58;
    _objc_release(lVar6);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar5 != 0) || (puVar3 == (undefined *)0x0)) {
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(puVar2);
LAB_105b3d4d8:
      param_1 = 0;
      goto LAB_105b3d4dc;
    }
    puVar4 = PTR_PTR_1126b1c68;
    func_0x00010c29be00(PTR_PTR_1126b1c68,param_2,puVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1bc20(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    _objc_release(puVar1);
    lVar5 = param_3;
    func_0x00010c23fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar6 == 0) goto LAB_105b3d4d8;
    lVar5 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar1 = PTR_PTR_1126b1c68;
    func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,puVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1bc20(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
LAB_105b3d4dc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b3d5ac; end: 105b3d6cb; -[SCStoryShareSendToWorkflow _onFetchedThumbnailData:shareSheetConfiguration:] */

void FUN_105b3d5ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4458;
    _objc_alloc();
    func_0x00010c01c300();
    _objc_release(puVar2);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105b3d6cc;
  puStack_60 = &UNK_110848ba8;
  uStack_58 = param_1;
  puStack_50 = puVar3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar3);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105b3d6cc; end: 105b3d6db;  */

void FUN_105b3d6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be48490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchSendToWithPreviewModel_sh_11256fac0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105b3d6dc; end: 105b3d817; -[SCStoryShareSendToWorkflow _launchSendToWithPreviewModel:shareSheetConfiguration:] */

void FUN_105b3d6dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1a18;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c048720();
  puVar2 = puVar1;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b1a20;
  _objc_alloc(PTR_PTR_1126b1a20);
  func_0x00010c01d640();
  puVar3 = PTR_PTR_1126b1a28;
  _objc_alloc();
  func_0x00010c038ea0();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b1a30;
  _objc_alloc(PTR_PTR_1126b1a30);
  func_0x00010bff5040();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b3d818; end: 105b3db53; -[SCStoryShareSendToWorkflow _generateShareSheetConfiguration:] */

void FUN_105b3d818(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x78);
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107d294ec();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ae720;
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2470;
    _objc_retain(param_3);
    func_0x00010c2adce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2478;
    _objc_alloc(PTR_PTR_1126b2478);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021e80(puVar7);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126b2490;
    _objc_alloc(PTR_PTR_1126b2490);
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c028f20(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release(param_3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar9);
  puVar5 = PTR_PTR_1126ae720;
  _objc_retain(uVar1);
  _objc_retain(uVar9);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105b3dbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x10))(param_2,0,*(undefined8 *)(puVar5 + 0x20));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b3db54; end: 105b3dbbb;  */

void FUN_105b3db54(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105b3dbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,0,*(undefined8 *)(puVar1 + 0x20));
  return;
}



/* Entry: 105b3dbbc; end: 105b3dbcf;  */

void FUN_105b3dbbc(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105b3dbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105b3dbd0; end: 105b3dca7;  */

void FUN_105b3dbd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar3,param_2,uVar1,uVar2,0,0xc,0,0);
  func_0x00010bfe9ca0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b3dca8; end: 105b3ddb3; -[SCStoryShareSendToWorkflow legacySendToScopeDidDismiss:selectedItems:] */

void FUN_105b3dca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b3ddb4; end: 105b3dddf;  */

void FUN_105b3ddb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3dde0; end: 105b3dedf; -[SCStoryShareSendToWorkflow legacySendToScopeWillSend:sendToSelection:] */

void FUN_105b3dde0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b3dee0; end: 105b3df13;  */

void FUN_105b3dee0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3df14; end: 105b3df3f; -[SCStoryShareSendToWorkflow _didDismissSendTo] */

void FUN_105b3df14(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3df40; end: 105b3e037; -[SCStoryShareSendToWorkflow _didDetachUIWithSendToSelection:] */

void FUN_105b3df40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b3e038; end: 105b3e06b;  */

void FUN_105b3e038(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b3e06c; end: 105b3e2cb; -[SCStoryShareSendToWorkflow _sendStoryShareToSelection:] */

void FUN_105b3e06c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar2 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    if ((lVar4 != 0) || (lVar4 = lVar3, func_0x00010bf529e0(), lVar4 != 0)) {
      puVar1 = PTR_PTR_1126afca8;
      ppuVar5 = &PTR____CFConstantStringClassReference_110e1f218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238760(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      lVar4 = lVar3;
      func_0x000107e327dc(lVar3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_58,param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c246920();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar2);
      _objc_retain(lVar3);
      lVar10 = param_3;
      _objc_retain(param_3);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar9);
      _objc_release(lVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(param_3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b3e2cc; end: 105b3e36b;  */

void FUN_105b3e2cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010befd440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea06e0(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b3e36c; end: 105b3e727; -[SCStoryShareSendToWorkflow _sendStoryShareToConversations:recipients:groups:additionalText:error:] */

void FUN_105b3e36c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_7 != 0) {
    puVar3 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained(puVar3);
    func_0x00010bf74080();
    goto LAB_105b3e6d8;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0c3fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x0001084f2c4c();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c2810;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c15f2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e240();
  _objc_release(uVar2);
  func_0x00010bf529e0(param_4);
  func_0x000108605534(param_5);
  puVar4 = param_3;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x000108605098(puVar5,*(undefined8 *)(param_1 + 0x90));
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = puVar4;
    func_0x000108604db4();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b3e7e0;
  puStack_70 = &UNK_110852668;
  ppuStack_68 = &PTR___NSConcreteGlobalBlock_1108d65b8;
  ppuVar6 = &puStack_88;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x0001084d2f54();
  if (iVar1 == 0) {
    puVar10 = param_3;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf529e0();
    _objc_release(puVar10);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x60);
      func_0x00010c269d40(lVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_3;
      func_0x00010bf50b20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15d8c0(lVar7);
      goto LAB_105b3e67c;
    }
LAB_105b3e690:
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf74080();
  }
  else {
    lVar7 = *(long *)(param_1 + 0x78);
    func_0x0001084d309c();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 != 0) {
      puVar10 = PTR_PTR_1126b5bd8;
      func_0x00010c25a340();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b5bd0;
      _objc_alloc(PTR_PTR_1126b5bd0);
      func_0x00010c000c00();
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_3;
      func_0x00010bf50b20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15cbe0(uVar2);
      _objc_release(puVar9);
      _objc_release(uVar2);
      _objc_release(puVar11);
LAB_105b3e67c:
      _objc_release(puVar10);
      _objc_release(lVar7);
      goto LAB_105b3e690;
    }
    FUN_105b3e728();
  }
  _objc_release(lVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuStack_68);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar5);
LAB_105b3e6d8:
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b3e728; end: 105b3e7df;  */

void FUN_105b3e728(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105b3e7e0; end: 105b3e7f7;  */

void FUN_105b3e7e0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105b3e7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0,0);
  return;
}



/* Entry: 105b3e7f8; end: 105b3e8d7; -[SCStoryShareSendToWorkflow .cxx_destruct] */

void FUN_105b3e7f8(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b3e8d8; end: 105b3ea4b;  */

void FUN_105b3e8d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2818;
  _objc_alloc(PTR_PTR_1126c2818);
  uVar2 = param_2;
  func_0x00010c260ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010befce20(param_2);
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b4ca0();
  func_0x00010c074fc0(param_2);
  if ((param_3 & 1) == 0) {
    func_0x00010c073820(param_2);
  }
  func_0x00010c074d00(param_2);
  func_0x00010bf490c0(param_2);
  func_0x00010bff2420((double)(long)puVar4 / 1000.0,param_1,puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b3ea4c; end: 105b3eae7;  */

void FUN_105b3ea4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b3eae8; end: 105b3ebe3;  */

bool FUN_105b3eae8(ulong param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x000100ab36b8();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      bVar1 = true;
    }
    else {
      uVar4 = uVar3;
      func_0x00010bf610c0(uVar3);
      uVar5 = uVar3;
      func_0x00010c088d60();
      uVar6 = param_2;
      func_0x00010c088d00();
      if (uVar6 == uVar5) {
        uVar5 = param_2;
        func_0x00010bf610c0(param_2);
        bVar1 = uVar4 <= uVar5;
        bVar2 = uVar5 == uVar4;
      }
      else {
        uVar4 = param_2;
        func_0x00010c088d00(param_2);
        bVar1 = uVar5 <= uVar4;
        bVar2 = uVar4 == uVar5;
      }
      bVar1 = bVar1 && !bVar2;
    }
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105b3ebe4; end: 105b3f0eb;  */

void FUN_105b3ebe4(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined2 uStack_348;
  byte bStack_346;
  byte bStack_345;
  undefined1 *puStack_328;
  undefined ***pppuStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  func_0x000108c2e2f8();
  puVar3 = &uStack_202;
  func_0x000108c2d860();
  bStack_1e5 = puVar2[0x1b] & puVar3[0x1b];
  bStack_1e7 = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_1e6 = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_1f8 = 4;
  uStack_1e8 = 0;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  puVar4 = &uStack_279;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar3;
  func_0x0001008a97dc();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  uStack_2c0 = 0;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  uStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_176 = bStack_1e6 | bStack_25e;
  bStack_175 = bStack_1e5 & bStack_25d;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_278;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_361;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  pppuStack_158 = &ppuStack_200;
  func_0x000108c2dcd4();
  uStack_3d0 = 0xf;
  uStack_3c0 = 0x100;
  uStack_3a8 = 0;
  ppuStack_3d8 = &PTR_SUB_1108629c8;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  lStack_390 = 0;
  plStack_378 = (long *)0x0;
  uStack_380 = 0;
  plStack_370 = (long *)0x0;
  bStack_346 = puVar2[0x1a];
  bStack_345 = puVar2[0x1b];
  uStack_358 = 10;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_SUB_1108629c8;
  plStack_2f8 = (long *)0x0;
  uStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  bStack_106 = bStack_176 | bStack_346;
  bStack_105 = bStack_175 & bStack_345;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_360;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3f4 = 0;
  puVar5 = &uStack_b0;
  puStack_328 = puVar2;
  pppuStack_320 = &ppuStack_3d8;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_3f0,&uStack_3f4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lStack_3f0 != 0) {
    lStack_3e8 = lStack_3f0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_1108629c8;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_318 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_370;
  ppuStack_3d8 = &PTR_SUB_1108629c8;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_378;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_390 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b3f0ec; end: 105b3f323;  */

void FUN_105b3f0ec(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126c2830);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  func_0x000108c3c6f8();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 0;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_1108d6648;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_1108d65e8;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_1108d65e8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_1108d6648;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b3f324; end: 105b3f3ff;  */

undefined8 * FUN_105b3f324(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108d65e8;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105b3f400; end: 105b3fef7;  */

void FUN_105b3f400(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  int param_5,int param_6)

{
  int iVar1;
  undefined *puVar2;
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
  undefined *unaff_x27;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_a8;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  FUN_105b3ea4c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) goto LAB_105b3fc20;
  puVar2 = param_3;
  func_0x00010bfb83c0();
  iVar1 = (int)puVar2;
  puVar2 = param_4;
  if (iVar1 - 3U < 2) {
    puVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      _objc_retain(param_3);
      puVar2 = param_3;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_3;
      func_0x00010bf1c0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x000108c06fdc(puVar2,puVar15,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar2);
      func_0x00010c150c20(param_3);
      puVar2 = param_3;
      func_0x00010bfea820(param_3);
      puVar15 = param_3;
      FUN_105b3e8d8(param_1,param_3,0,(ulong)puVar2 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b15c8;
      _objc_alloc(PTR_PTR_1126b15c8);
      puVar13 = param_3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      FUN_105b3ea4c();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010c0d3e20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_3;
      func_0x00010bfdc420();
      if ((int)puVar8 == 0) {
        puStack_a8 = (undefined *)0x0;
      }
      else {
        puStack_c0 = param_3;
        func_0x00010c242760();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = puStack_c0;
        FUN_105b3ea4c();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = puStack_c8;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = param_3;
      func_0x00010c0d3e20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_3;
      func_0x00010c0d3e20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_3;
      func_0x00010c2427e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x000108c06e70();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05c0e0(puVar2);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      if ((int)puVar8 != 0) {
        _objc_release(puStack_a8);
        _objc_release(puStack_c8);
        _objc_release(puStack_c0);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar14);
      _objc_release(puVar5);
      _objc_release(puVar13);
      _objc_release(puVar15);
      _objc_release(puVar4);
      _objc_release(param_3);
      func_0x000108c1d01c(param_2,puVar2);
      goto LAB_105b3fc18;
    }
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(puVar2);
    puVar4 = PTR_PTR_1126c2820;
    func_0x000100c36048(PTR_PTR_1126c2820,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      puVar5 = puVar2;
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010bfea820();
      _objc_release(puVar5);
    }
    else {
      puVar13 = param_3;
      func_0x00010bfea820();
      puVar13 = (undefined *)((ulong)puVar13 & 0xffffffff);
    }
    if (puVar4 != (undefined *)0x0) {
      puVar5 = param_3;
      func_0x00010c0d3e20(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar5);
      puVar5 = param_3;
      func_0x00010c0d3e20(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar5);
      puVar5 = param_3;
      func_0x00010c0d3e20(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar5);
      puVar5 = param_3;
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar5);
      puVar5 = param_3;
      func_0x00010bfdc420();
      if ((int)puVar5 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar15 = param_3;
        func_0x00010c242760(param_3);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = puVar15;
        FUN_105b3ea4c();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = unaff_x27;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_setProperty_nonatomic_copy(puVar4);
      if ((int)puVar5 != 0) {
        _objc_release(puVar14);
        _objc_release(unaff_x27);
        _objc_release(puVar15);
      }
      _objc_retain(param_3);
      puVar15 = param_3;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar15;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = param_3;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar5;
        func_0x00010c08fa60();
        _objc_release(puVar5);
        _objc_release(puVar15);
        if (puVar14 != (undefined *)0x0) goto LAB_105b3faac;
        puVar15 = (undefined *)0x0;
      }
      else {
        _objc_release(puVar15);
LAB_105b3faac:
        puVar15 = PTR_PTR_1126b14b8;
        _objc_alloc(PTR_PTR_1126b14b8);
        puVar5 = param_3;
        func_0x00010bf1acc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = param_3;
        func_0x00010bf1c0a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff7be0(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar5);
      }
      _objc_release(param_3);
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar15);
      puVar15 = puVar2;
      func_0x00010bfebe20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar15;
      func_0x00010c073820();
      func_0x00010c150c20(param_3);
      puVar14 = param_3;
      FUN_105b3e8d8(param_3,puVar5,puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar14);
      _objc_release(puVar15);
      puVar15 = param_3;
      func_0x00010c2427e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar15;
      func_0x000108c06e70();
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar13);
      _objc_release(puVar15);
      puVar4[0x15] = 0;
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(param_3);
    puVar15 = param_2;
LAB_105b3fc10:
    _objc_release(puVar15);
  }
  else if (iVar1 - 5U < 2) {
    if (param_6 == 0) {
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108c20264(param_2,puVar2);
    }
    else {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        puVar15 = PTR_PTR_1126c2820;
        func_0x000100c36048(PTR_PTR_1126c2820,puVar2);
        _objc_retainAutoreleasedReturnValue();
        if (puVar15 != (undefined *)0x0) {
          _objc_setProperty_nonatomic_copy(puVar15);
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        goto LAB_105b3fc10;
      }
    }
  }
  else {
    if (iVar1 != 2) goto LAB_105b3fc20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x00010bfebe20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010c073820();
      func_0x00010c150c20(param_3);
      puVar5 = puVar2;
      func_0x00010bfebe20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      func_0x00010bfea820();
      puVar15 = param_3;
      FUN_105b3e8d8(param_1,param_3,puVar13,puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x000108c20148(param_2,puVar2,puVar15);
      goto LAB_105b3fc10;
    }
  }
LAB_105b3fc18:
  _objc_release(puVar2);
LAB_105b3fc20:
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b3fef8; end: 105b40283;  */

void FUN_105b3fef8(long param_1,undefined *param_2,int param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126c2830);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_121;
  func_0x000108c3c6f8();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  uStack_168 = 0;
  uStack_1a0 = 0;
  ppuStack_198 = &PTR_DAT_1108d6648;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_FUN_1108d65e8;
  lStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x0001000e77a0(puVar3,&ppuStack_120,&lStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_FUN_1108d65e8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_DAT_1108d6648;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar5 = PTR_PTR_1126c2840;
  func_0x000108c3cac8(PTR_PTR_1126c2840,puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126c2830;
    _objc_alloc(PTR_PTR_1126c2830);
    func_0x00010c055ba0();
    puVar5 = PTR_PTR_1126c2840;
    func_0x000108c3c948(PTR_PTR_1126c2840,puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = param_2;
    if (param_3 == 0) {
      puVar3 = puVar4;
      func_0x00010bfe4900(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ce40(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      _objc_retain(param_2);
    }
    _objc_setProperty_nonatomic_copy(puVar5);
  }
  _objc_release(puVar6);
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 105b40284; end: 105b4073b;  */

void FUN_105b40284(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined ***pppuVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  undefined1 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2b8;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  undefined1 auStack_170 [128];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_c0;
  undefined8 auStack_a8 [3];
  long *plStack_90;
  long *plStack_88;
  long lStack_70;
  
  puVar15 = &uStack_260;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_200,param_1);
  }
  puVar3 = &uStack_201;
  func_0x000100bed558(puVar3);
  _objc_retain(param_2);
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_220 = 0;
  lVar14 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x0001004c2bb4(&uStack_220,lVar14);
  puStack_1b8 = (undefined8 *)0x0;
  puStack_1c0 = (undefined8 *)0x0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar10 = *plStack_1b0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(param_2);
        }
        uVar9 = *(ulong *)((long)puStack_1b8 + lVar12 * 8);
        _objc_retain(uVar9);
        uStack_178 = uVar9;
        func_0x0001004c2d3c(&uStack_220,&uStack_178);
        _objc_release(uStack_178);
        lVar12 = lVar12 + 1;
      } while (lVar14 != lVar12);
      lVar14 = param_2;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x0001004c2e3c(&ppuStack_f0,0xc,puVar3,&uStack_220);
  puStack_1c0 = (undefined8 *)0x0;
  puStack_1b8 = (undefined8 *)0x0;
  plStack_1b0 = (long *)0x0;
  uStack_178 = uStack_178 & 0xffffffff00000000;
  puVar4 = &uStack_200;
  pppuVar7 = &ppuStack_f0;
  func_0x0001000e77a0(puVar4,pppuVar7,&puStack_1c0,&uStack_178);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c0 != (undefined8 *)0x0) {
    puStack_1b8 = puStack_1c0;
    __ZdlPv();
  }
  plVar2 = plStack_88;
  ppuStack_f0 = &PTR_FUN_110862700;
  plStack_88 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_1c0 = auStack_a8;
  func_0x000100105004(&puStack_1c0);
  puStack_1c0 = &uStack_220;
  func_0x000100105004(&puStack_1c0);
  func_0x0001000e76e0(&uStack_1d8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  _objc_retain(puVar4);
  iVar8 = (int)auStack_170;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    lVar14 = *plStack_250;
    do {
      puVar15 = (undefined8 *)0x0;
      do {
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(puVar4);
        }
        pppuVar13 = *(undefined ****)(lStack_258 + (long)puVar15 * 8);
        puVar6 = PTR_PTR_1126c2820;
        pppuVar7 = pppuVar13;
        func_0x000100c36048();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) {
          lVar10 = *(long *)(puVar6 + 0x58);
          _objc_retain(lVar10);
          if (lVar10 != 0) {
            func_0x00010bfebe20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar10);
            if (pppuVar13 != (undefined ***)0x0) {
              pppuVar13 = *(undefined ****)(puVar6 + 0x58);
              _objc_retain(pppuVar13);
              pppuVar7 = pppuVar13;
              func_0x00010b6564bc(&ppuStack_f0);
              _objc_release(pppuVar13);
              lVar12 = *(long *)(puVar6 + 0x58);
              _objc_retain(lVar12);
              lVar10 = lVar12;
              func_0x00010bfea820();
              lStack_c0 = lVar10 + 1;
              ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
              _objc_release(lVar12);
              pppuVar13 = &ppuStack_f0;
              func_0x00010b65659c();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uStack_e8);
              _objc_setProperty_nonatomic_copy(puVar6);
              _objc_release(pppuVar13);
              func_0x00010c25ed40(param_1);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
          }
        }
        _objc_release(puVar6);
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar5 != puVar15);
      iVar8 = (int)auStack_170;
      puVar5 = puVar4;
      puVar15 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_2);
  lVar14 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(lVar14);
    _objc_retain();
    _objc_retain(pppuVar7);
    _objc_retain(puVar15);
    puVar6 = PTR_PTR_1126c2820;
    func_0x000100c36048(PTR_PTR_1126c2820,puVar15);
    _objc_retainAutoreleasedReturnValue();
    if (iVar8 == 0) {
      puVar3 = (undefined1 *)puVar15;
      func_0x00010bfebe20(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11fc60();
      uVar1 = CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))));
      _objc_release(puVar3);
    }
    else {
      func_0x00010c150c20(pppuVar7);
      uVar1 = CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))));
    }
    if (puVar6 != (undefined *)0x0) {
      lVar10 = *(long *)(puVar6 + 0x58);
      _objc_retain(lVar10);
      _objc_release(lVar10);
      if (lVar10 != 0) {
        uVar11 = *(undefined8 *)(puVar6 + 0x58);
        _objc_retain(uVar11);
        func_0x00010b6564bc(auStack_2e8,uVar11);
        _objc_release(uVar11);
        pppuVar13 = pppuVar7;
        func_0x00010bfea820();
        uStack_2b8 = (ulong)pppuVar13 & 0xffffffff;
        auStack_2e8[0] = 0;
        pppuVar13 = pppuVar7;
        func_0x00010c074fc0();
        uStack_2d0 = SUB81(pppuVar13,0);
        auStack_2e8[0] = 0;
        puVar3 = auStack_2e8;
        uStack_2c8 = uVar1;
        func_0x00010b65659c(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uStack_2e0);
        _objc_setProperty_nonatomic_copy(puVar6);
        _objc_release(puVar3);
        func_0x00010c25ed40(lVar14);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar6);
    _objc_release(puVar15);
    _objc_release(pppuVar7);
    _objc_release(lVar14);
    return;
  }
  return;
}



/* Entry: 105b4073c; end: 105b40913;  */

void FUN_105b4073c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    uVar5 = param_4;
    func_0x00010bfebe20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11fc60();
    _objc_release(uVar5);
  }
  else {
    func_0x00010c150c20(param_3);
  }
  if (puVar1 != (undefined *)0x0) {
    lVar4 = *(long *)(puVar1 + 0x58);
    _objc_retain(lVar4);
    _objc_release(lVar4);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(puVar1 + 0x58);
      _objc_retain(uVar5);
      func_0x00010b6564bc(auStack_88,uVar5);
      _objc_release(uVar5);
      uVar2 = param_3;
      func_0x00010bfea820();
      uStack_58 = uVar2 & 0xffffffff;
      auStack_88[0] = 0;
      uVar2 = param_3;
      func_0x00010c074fc0();
      uStack_70 = (undefined1)uVar2;
      auStack_88[0] = 0;
      puVar3 = auStack_88;
      uStack_68 = param_1;
      func_0x00010b65659c(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_80);
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(puVar3);
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105b40914; end: 105b40983;  */

void FUN_105b40914(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1108d6648;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 105b40984; end: 105b4103f;  */

void FUN_105b40984(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105b40fe4;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105b41004;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105b41004;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105b40f78:
                    /* WARNING: Could not recover jumptable at 0x000105b40f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105b40f78;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000105b41004;
    }
    goto code_r0x000105b40ff8;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105b40ff8;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000105b41004;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105b41004;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105b41014;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105b40fe4:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105b40ff8:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105b41004:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105b41014:
  return;
}



/* Entry: 105b41040; end: 105b410c7;  */

void FUN_105b41040(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105b410b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105b410c8; end: 105b411fb;  */

void FUN_105b410c8(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105b411f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105b411fc; end: 105b412ab;  */

ulong FUN_105b411fc(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105b412ac; end: 105b412e7;  */

undefined8 FUN_105b412ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_105b412e8(uVar1,param_1);
  return uVar1;
}



/* Entry: 105b412e8; end: 105b41493;  */

void FUN_105b412e8(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000105b41528(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000105b41494(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_105b413d4:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_105b41628(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_105b413d4;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_1108d6648;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 105b41494; end: 105b41627;  */

undefined8 * FUN_105b41494(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_1108d6648;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105b41628; end: 105b416bf;  */

undefined8 * FUN_105b41628(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_1108d6648;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_105b416c0(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105b416c0; end: 105b41737;  */

void FUN_105b416c0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_105b41738(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 105b41738; end: 105b41773;  */

void FUN_105b41738(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1 + 2;
    FUN_105b41788();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_105b41774();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108d65e8;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}


