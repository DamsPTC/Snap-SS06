/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c2e0b8; end: 105c2e0bf; -[SCSettingsCPRAChoicesViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c2e0b8(void)

{
  return 1;
}



/* Entry: 105c2e0c0; end: 105c2e0c7; -[SCSettingsCPRAChoicesViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105c2e0c0(void)

{
  return 1;
}



/* Entry: 105c2e0c8; end: 105c2e18b; -[SCSettingsCPRAChoicesViewController tableView:heightForRowAtIndexPath:] */

undefined8
FUN_105c2e0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5a18;
  uVar2 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf20c00();
  func_0x000105c2fb9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beccf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf45a60(param_3,param_4,puVar1,param_6,0,0,uVar3,0,0,0);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_3;
}



/* Entry: 105c2e18c; end: 105c2e33f; -[SCSettingsCPRAChoicesViewController tableView:cellForRowAtIndexPath:] */

void FUN_105c2e18c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e22e98);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5a18;
  _objc_opt_class(PTR_PTR_1126b5a18);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126b5a18;
    _objc_alloc(PTR_PTR_1126b5a18);
    func_0x00010c040040();
    func_0x00010c20eaa0();
    puVar1 = param_3;
    func_0x00010c27f7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e40();
    _objc_release(puVar1);
    func_0x000105c2fb9c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c27f7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b0d78;
    _objc_alloc(PTR_PTR_1126b0d78);
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(uVar3,uVar4,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c0699c0();
    func_0x00010c0699c0(puVar1);
    func_0x00010c19f0e0(0,0,uVar3,uVar4,puVar1);
    func_0x00010befbd60(puVar1);
    func_0x00010beccf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c27f7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105c2e340; end: 105c2e6a3; -[SCSettingsCPRAChoicesViewController tableView:viewForFooterInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2e340(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_1127328cc;
  lVar17 = *(long *)(param_1 + lVar18);
  if (lVar17 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    func_0x00010c1cfce0();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c21ad00(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    func_0x000105c2fbb4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar16 = *(undefined8 *)(param_1 + lVar18);
    *(undefined **)(param_1 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
    func_0x00010c219b60(puVar1);
    func_0x00010c181cc0(0x443b8000,puVar1);
    func_0x00010c181cc0(0x443b8000,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c08e400(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c1408a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 4;
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar14;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar16);
    _objc_release(puVar3);
    _objc_release(puVar1);
    lVar17 = *(long *)(param_1 + lVar18);
  }
  _objc_retain(lVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar17);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,param_4,1);
  return;
}



/* Entry: 105c2e6a4; end: 105c2e6b3; -[SCSettingsCPRAChoicesViewController tableView:didSelectRowAtIndexPath:] */

void FUN_105c2e6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,param_4,1);
  return;
}



/* Entry: 105c2e6b4; end: 105c2e7cf; -[SCSettingsCPRAChoicesViewController _toggleSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2e6b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = (long)_DAT_1127328d0;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b0d78;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(uVar6,uVar7,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar2);
    func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c19f0e0(0,0,uVar6,uVar7,*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                        PTR_s__cpraSwitchToggled__11252cd58,0x1000);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127328c4);
    func_0x00010bfa2b80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c06da60();
    func_0x00010c1b2f40(uVar4,param_2,uVar6,0);
    _objc_release(uVar2);
    _objc_release(uVar7);
    lVar3 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c2e7d0; end: 105c2e8db; -[SCSettingsCPRAChoicesViewController _cpraSwitchToggled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2e7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127328c4);
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c06da60();
  uVar3 = param_3;
  func_0x00010c079040();
  if ((int)uVar1 != (int)uVar3) {
    func_0x00010c195460(param_3,param_2,0);
    func_0x00010c1677c0(0x3fe0000000000000,param_3);
    uVar1 = param_3;
    func_0x00010c079040(param_3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c2e8dc;
    puStack_40 = &UNK_110841f20;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c174e00(uVar2,param_2,uVar1,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105c2e8dc; end: 105c2e92b;  */

void FUN_105c2e8dc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c079040(uVar1);
    func_0x00010c1b2f40(uVar1);
  }
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105c2e92c; end: 105c2e99b; -[SCSettingsCPRAChoicesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2e92c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127328c4,0);
  _objc_storeStrong(param_1 + _DAT_1127328c0,0);
  _objc_storeStrong(param_1 + _DAT_1127328cc,0);
  _objc_storeStrong(param_1 + _DAT_1127328d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127328c8,0);
  return;
}



/* Entry: 105c2e99c; end: 105c2ea8f; -[SCSettingsFDBRChoicesViewController initWithUIContainer:featureSettingsServices:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c2e99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ec678;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_1127328d4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127328d8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127328dc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c2ea90; end: 105c2eb1b; -[SCSettingsFDBRChoicesViewController viewDidLoad] */

void FUN_105c2ea90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec678;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x000105c2fbcc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be5c4a0(param_1);
  return;
}



/* Entry: 105c2eb1c; end: 105c2eb23; -[SCSettingsFDBRChoicesViewController pageViewName] */

undefined8 FUN_105c2eb1c(void)

{
  return 0x65;
}



/* Entry: 105c2eb24; end: 105c2eb37; -[SCSettingsFDBRChoicesViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2eb24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127328d4),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105c2eb38; end: 105c2eb3f; -[SCSettingsFDBRChoicesViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105c2eb38(void)

{
  return 1;
}



/* Entry: 105c2eb40; end: 105c2ec03; -[SCSettingsFDBRChoicesViewController tableView:heightForRowAtIndexPath:] */

undefined8
FUN_105c2eb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5a18;
  uVar2 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf20c00();
  func_0x000105c2fbe4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beccf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf45a60(param_3,param_4,puVar1,param_6,0,0,uVar3,0,0,0);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_3;
}



/* Entry: 105c2ec04; end: 105c2ee23; -[SCSettingsFDBRChoicesViewController tableView:cellForRowAtIndexPath:] */

void FUN_105c2ec04(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = param_3;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b5a18;
  _objc_opt_class(PTR_PTR_1126b5a18);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b5a18;
    _objc_alloc(PTR_PTR_1126b5a18);
    func_0x00010c040040();
    func_0x00010c20eaa0();
    puVar3 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e40();
    _objc_release(puVar3);
    func_0x000105c2fbe4();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0d78;
    _objc_alloc(PTR_PTR_1126b0d78);
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(uVar5,uVar6,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c0699c0();
    func_0x00010c0699c0(puVar3);
    func_0x00010c19f0e0(0,0,uVar5,uVar6,puVar3);
    func_0x00010befbd60(puVar3);
    func_0x00010beccf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_retain(puVar2);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c2ee24; end: 105c2f297; -[SCSettingsFDBRChoicesViewController tableView:viewForFooterInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2ee24(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_1127328e0;
  lVar19 = *(long *)(param_1 + lVar20);
  if (lVar19 == 0) {
    puVar1 = PTR_PTR_1126b0ac8;
    _objc_opt_new();
    func_0x00010c18b5e0();
    func_0x00010c193a00(puVar1);
    func_0x00010c1f7b20(puVar1);
    func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
    func_0x00010c189540(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bde80(puVar1);
    _objc_release(puVar2);
    _objc_release();
    func_0x000105c2fbfc();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c04e820();
    func_0x00010c11f420(puVar3);
    func_0x00010bef6f20(puVar4);
    func_0x00010c16b720(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar18 = *(undefined8 *)(param_1 + lVar20);
    *(undefined **)(param_1 + lVar20) = puVar2;
    _objc_release(uVar18);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c219b60(puVar1);
    func_0x00010c181cc0(0x443b8000,puVar1);
    func_0x00010c181cc0(0x443b8000,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c08e400(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c1408a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 4;
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar16;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar18);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    lVar19 = *(long *)(param_1 + lVar20);
  }
  _objc_retain(lVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar19);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,param_4,1);
  return;
}



/* Entry: 105c2f298; end: 105c2f2a7; -[SCSettingsFDBRChoicesViewController tableView:didSelectRowAtIndexPath:] */

void FUN_105c2f298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,param_4,1);
  return;
}



/* Entry: 105c2f2a8; end: 105c2f45f; -[SCSettingsFDBRChoicesViewController textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c2f2a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac300();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105c2f460;
  puStack_60 = &UNK_110842308;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(puVar2,param_2,&puStack_78,0);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar3 = puVar2;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127328dc),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar4);
  return 0;
}



/* Entry: 105c2f460; end: 105c2f477;  */

void FUN_105c2f460(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105c2f478; end: 105c2f4cf; -[SCSettingsFDBRChoicesViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2f478(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127328dc;
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



/* Entry: 105c2f4d0; end: 105c2f88b; -[SCSettingsFDBRChoicesViewController _makeTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2f4d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar14 = (long)_DAT_1127328e4;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar12);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar14),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar14),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar14),param_2,param_1);
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar14),param_2,1);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar14),param_2,1);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar14),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar14),param_2,1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar14),param_2,puVar1);
  _objc_release(puVar1);
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar12;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar16;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar17);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = (long)_DAT_1127328e8;
  lVar13 = *(long *)(lVar2 + lVar15);
  if (lVar13 == 0) {
    puVar1 = PTR_PTR_1126b0d78;
    _objc_alloc();
    uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(uVar16,uVar17,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar12 = *(undefined8 *)(lVar2 + lVar15);
    *(undefined **)(lVar2 + lVar15) = puVar1;
    _objc_release(uVar12);
    func_0x00010c0699c0(*(undefined8 *)(lVar2 + lVar15));
    func_0x00010c0699c0(*(undefined8 *)(lVar2 + lVar15));
    func_0x00010c19f0e0(0,0,uVar16,uVar17,*(undefined8 *)(lVar2 + lVar15));
    func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar15),param_2,lVar2,
                        PTR_s__switchToggled__11252cd60,0x1000);
    uVar4 = *(undefined8 *)(lVar2 + lVar15);
    uVar17 = *(undefined8 *)(lVar2 + _DAT_1127328d8);
    func_0x00010bfa2b80(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c072780();
    func_0x00010c1b2f40(uVar4,param_2,uVar16,0);
    _objc_release(uVar12);
    _objc_release(uVar17);
    lVar13 = *(long *)(lVar2 + lVar15);
  }
  _objc_retain(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
  return;
}



/* Entry: 105c2f88c; end: 105c2f9a7; -[SCSettingsFDBRChoicesViewController _toggleSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2f88c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = (long)_DAT_1127328e8;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b0d78;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(uVar6,uVar7,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar2);
    func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c19f0e0(0,0,uVar6,uVar7,*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                        PTR_s__switchToggled__11252cd60,0x1000);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127328d8);
    func_0x00010bfa2b80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c072780();
    func_0x00010c1b2f40(uVar4,param_2,uVar6,0);
    _objc_release(uVar2);
    _objc_release(uVar7);
    lVar3 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c2f9a8; end: 105c2fab3; -[SCSettingsFDBRChoicesViewController _switchToggled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2f9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127328d8);
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c072780();
  uVar3 = param_3;
  func_0x00010c079040();
  if ((int)uVar1 != (int)uVar3) {
    func_0x00010c195460(param_3,param_2,0);
    func_0x00010c1677c0(0x3fe0000000000000,param_3);
    uVar1 = param_3;
    func_0x00010c079040(param_3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c2fab4;
    puStack_40 = &UNK_110841f20;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c199a20(uVar2,param_2,uVar1,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105c2fab4; end: 105c2fb03;  */

void FUN_105c2fab4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c079040(uVar1);
    func_0x00010c1b2f40(uVar1);
  }
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105c2fb04; end: 105c2fb83; -[SCSettingsFDBRChoicesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c2fb04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127328dc,0);
  _objc_storeStrong(param_1 + _DAT_1127328d8,0);
  _objc_storeStrong(param_1 + _DAT_1127328d4,0);
  _objc_storeStrong(param_1 + _DAT_1127328e0,0);
  _objc_storeStrong(param_1 + _DAT_1127328e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127328e4,0);
  return;
}



/* Entry: 105c2fb84; end: 105c2fc13;  */

void FUN_105c2fb84(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22ef8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e22ef8,
                      &PTR____CFConstantStringClassReference_110e22f18,0);
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



/* Entry: 105c2fc14; end: 105c30333; +[SCSettingsClearDataPresenter presentWithContext:userSessionScope:applicationCircumstanceEngineServices:snapchatterServices:friendingConfigsServices:lensPreferencesStorageServices:lensRemoteApiDataServices:lensGamesRPCServices:inLensCreationDataServices:perceptionFeatureSettingsServices:lensInfoCardsServices:dynamicImageSourceProviderServices:notificationServices:searchHistoryServices:userStorageServices:userUnifiedGRPCServices:composerServices:cameraConfigurationServices:taskManagementServices:userBlizzardServices:systemBlizzardServices:userJobSchedulerServices:contentDeliveryServices:grapheneServices:genAIIdentityServices:repositoryServices:mapNetworkingServices:appTerminationServices:systemContentDeliveryServices:networkImageServices:legacyLensDataFetcherServices:memoriesCachingMediaServices:spectaclesServices:spectaclesMemoriesContentServices:spectaclesAuxiliaryContentServices:bloopsUserServices:chatMerlinServices:featureSettingsServices:contentClearCacheServices:clearConversationsScopeBuilderServices:clearConversationsScopeExposer:webBrowsingScopeExposer:] */

void FUN_105c2fc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain();
  _objc_retain(param_43);
  _objc_retain(param_42);
  _objc_retain(param_41);
  _objc_retain(param_40);
  _objc_retain(param_39);
  _objc_retain(param_38);
  _objc_retain(param_37);
  _objc_retain(param_36);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_33);
  _objc_retain(param_32);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c3420;
  _objc_alloc();
  uVar2 = param_30;
  func_0x00010bf06440(param_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_30);
  uVar4 = param_4;
  func_0x00010c293740(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = param_31;
  func_0x00010bf265c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_31);
  uVar6 = param_32;
  func_0x00010bfe7580(param_32);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_32);
  uVar7 = param_33;
  func_0x00010c08f040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_33);
  uVar8 = param_36;
  func_0x00010c0c9cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_36);
  uVar9 = param_35;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_35);
  uVar10 = param_37;
  func_0x00010bf26480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_37);
  uVar11 = param_38;
  func_0x00010bfb9c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_38);
  uVar12 = param_34;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_34);
  uVar13 = param_41;
  func_0x00010bf4c020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_41);
  func_0x00010bff37c0(puVar3,param_2,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
                      uVar13);
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
  _objc_release(uVar2);
  puVar14 = PTR_PTR_1126c3428;
  _objc_alloc();
  uVar2 = param_39;
  func_0x00010c0caf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_39);
  uVar4 = param_40;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_40);
  func_0x00010c0566e0(puVar14,param_2,puVar1,param_3,param_5,param_43,param_42,param_6,param_7,
                      param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16
                      ,param_17,param_19,param_20,param_21,param_18,param_22,param_23,param_24,
                      param_25,param_26,param_27,param_28,param_29,puVar3,uVar2,uVar4,param_44);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
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
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bf0c980(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c30334; end: 105c3033f; -[SCSettingsClearDataViewController defaultProjectNameV3] */

void FUN_105c30334(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf28e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_camera_1125a7d40);
  return;
}



/* Entry: 105c30340; end: 105c3034b; -[SCSettingsClearDataViewController defaultProjectNameV2] */

void FUN_105c30340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf28e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_camera_1125a7d40);
  return;
}



/* Entry: 105c3034c; end: 105c30a7b; -[SCSettingsClearDataViewController initWithUIContainer:context:circumstanceEngineServices:clearConversationsScopeExposer:clearConversationsScopeBuilderServices:snapchatterServices:friendingConfigsServices:lensPreferencesStorageServices:lensRemoteApiDataServices:lensGamesRPCServices:inLensCreationDataServices:perceptionFeatureSettingsServices:lensInfoCardsServices:dynamicImageSourceProviderServices:notificationServices:searchHistoryServices:userStorageServices:composerServices:cameraConfigurationServices:taskManagementServices:userUnifiedGRPCServices:userBlizzardServices:systemBlizzardServices:jobSchedulerServices:contentDeliveryServices:grapheneServices:genAIIdentityServices:repositoryServices:mapNetworkingServices:clearCacheManager:merlinConversationManager:featureSettingsService:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c3034c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_70 = PTR_PTR_1126ec680;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_1127328ec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127328f0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127328f4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127328f8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127328fc,param_7);
    lVar3 = (long)_DAT_112732900;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732904;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732908;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273290c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732910;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732914;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732918;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273291c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732920;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732924;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732928;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273292c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732930;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732934;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_21;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732938;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_22;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273293c;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_23;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732940;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_24;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732944;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_25;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732948;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_26;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273294c;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_27;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732950;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_28;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732954;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_29;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732958;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_30;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273295c;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_31;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732960;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_32;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732964;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_33;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732968;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_34;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273296c;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_35;
    _objc_release(uVar2);
  }
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



/* Entry: 105c30a7c; end: 105c30e63; -[SCSettingsClearDataViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105c30a7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
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
  puStack_90 = PTR_PTR_1126ec680;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_112732970;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
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
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar12;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar18;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar18);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  func_0x00010beafae0(param_1);
  func_0x00010bed47a0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return 0xd6;
}



/* Entry: 105c30e64; end: 105c30e6b; -[SCSettingsClearDataViewController pageViewName] */

undefined8 FUN_105c30e64(void)

{
  return 0xd6;
}



/* Entry: 105c30e6c; end: 105c30e7f; -[SCSettingsClearDataViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c30e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127328ec),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105c30e80; end: 105c30e87; -[SCSettingsClearDataViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c30e80(void)

{
  return 1;
}



/* Entry: 105c30e88; end: 105c30e97; -[SCSettingsClearDataViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c30e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732974),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105c30e98; end: 105c30fd7; -[SCSettingsClearDataViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105c30e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_8);
  lVar3 = param_8;
  func_0x00010c142240();
  lVar7 = (long)_DAT_112732974;
  uVar4 = *(ulong *)(param_5 + lVar7);
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar4 <= lVar3 + 1U) {
    uVar1 = 4;
  }
  if (lVar3 == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  lVar3 = param_8;
  func_0x00010c142240(param_8);
  _objc_release(param_8);
  func_0x00010c0dfd40(uVar6,param_6,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c067fc0();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b5a18;
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010beaa4a0(param_5,param_6,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45a60(param_3,param_4,0,0,puVar2,param_6,1,uVar1 | 10,param_5,0,0,0);
  _objc_release(param_5);
  _objc_release(lVar3);
  return param_3;
}



/* Entry: 105c30fd8; end: 105c30fdf; -[SCSettingsClearDataViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_105c30fd8(void)

{
  return 0;
}



/* Entry: 105c30fe0; end: 105c30fe7; -[SCSettingsClearDataViewController tableView:viewForHeaderInSection:] */

undefined8 FUN_105c30fe0(void)

{
  return 0;
}



/* Entry: 105c30fe8; end: 105c31207; -[SCSettingsClearDataViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c30fe8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + _DAT_112732974);
  _objc_retain(param_3);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067fc0();
  _objc_release(lVar6);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22ff8;
  if (lVar7 != 7) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e22fd8;
  }
  _objc_retain(ppuVar1);
  puVar2 = param_3;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b5a18;
  _objc_opt_class(PTR_PTR_1126b5a18);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b5a18;
    _objc_alloc();
    func_0x00010c040040();
    func_0x00010c142240();
    func_0x00010bf529e0();
    func_0x00010c20eaa0(puVar2);
    puVar3 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161a60();
    _objc_release(puVar3);
  }
  lVar6 = param_1;
  func_0x00010beaa4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c27f7a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(puVar3);
  _objc_release(lVar6);
  if (lVar7 == 7) {
    puVar3 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220340();
    _objc_release(puVar3);
    lVar7 = (long)_DAT_11273297c;
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar5);
  }
  _objc_release(ppuVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c31208; end: 105c3129b; -[SCSettingsClearDataViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c31208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732974);
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be2f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleRowSelectionWithTag__112569738,uVar1);
  return;
}



/* Entry: 105c3129c; end: 105c31387; -[SCSettingsClearDataViewController _presentClearConversations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c3129c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127328f8;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar3 = (long)_DAT_1127328f0;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + _DAT_1127328fc;
      _objc_loadWeakRetained(lVar1);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c0d66a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf23480(lVar1,param_2,uVar2,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 105c31388; end: 105c314b7; -[SCSettingsClearDataViewController _promptClearContactData] */

void FUN_105c31388(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000105c65f5c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105c65f74();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105c65f8c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_50;
  _objc_copyWeak(puVar4,auStack_48);
  func_0x000105c65fa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1a0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c314b8; end: 105c315a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c314b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732904);
    func_0x00010bf46500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284880();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732900);
    func_0x00010c244ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1970;
    func_0x00010bf6b260(PTR_PTR_1126b1970);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd28e0(uVar2,param_2,puVar3,0,0);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c315a8; end: 105c3179b; -[SCSettingsClearDataViewController _presentClearLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c315a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c3430;
  _objc_alloc(PTR_PTR_1126c3430);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732908);
  func_0x00010c095f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273290c);
  func_0x00010c129ca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112732914;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c119b40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0253c0(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c3438;
  _objc_alloc(PTR_PTR_1126c3438);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732924);
  func_0x00010c0dc640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732910);
  func_0x00010c0941c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c119b40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112732918);
  func_0x00010c14ec20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273291c);
  func_0x00010bfedac0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffedc0(puVar5,param_2,puVar1,uVar2,uVar3,uVar4,uVar6,uVar7,
                      *(undefined8 *)(param_1 + _DAT_112732920));
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar8 = (long)_DAT_1127328f0;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf034a0(uVar3);
  func_0x00010c11c520(uVar2,param_2,puVar5,uVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c3179c; end: 105c317ef; -[SCSettingsClearDataViewController _promptClearSearchHistory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c3179c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732928);
  func_0x00010bfe3940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ba40();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c317f0; end: 105c3194f; -[SCSettingsClearDataViewController _promptClearStickerSearch] */

void FUN_105c317f0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e23018;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e23018,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e23038;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e23038,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e23058;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e23058,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1a0(param_1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c31950; end: 105c319c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c31950(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273292c);
    func_0x00010c1067a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3be60();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c319c4; end: 105c31af3; -[SCSettingsClearDataViewController _promptClearAutofill] */

void FUN_105c319c4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000105c33970();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc7f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7f18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1a0(param_1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c31af4; end: 105c31bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c31af4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273292c);
    func_0x00010c1067a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c19d320(uVar2,param_2,0);
    func_0x00010c1b8360(uVar2,param_2,0);
    func_0x00010c1db1c0(uVar2,param_2,0);
    func_0x00010c194080(uVar2,param_2,0);
    func_0x00010c165be0(uVar2,param_2,0);
    func_0x00010c165c00(uVar2,param_2,0);
    func_0x00010c17c640(uVar2,param_2,0);
    func_0x00010c209fc0(uVar2,param_2,0);
    func_0x00010c1df540(uVar2,param_2,0);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c31bd0; end: 105c31cbf; -[SCSettingsClearDataViewController _clearMySelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c31bd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732954);
  func_0x00010c0d4a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf3b9c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c31cc0; end: 105c31dcf;  */

void FUN_105c31cc0(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  undefined1 uStack_48;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e23078;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e23078,
                        &PTR____CFConstantStringClassReference_110e23098,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e230b8;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e230b8,
                        &PTR____CFConstantStringClassReference_110e23098,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    if (param_2 == 0) {
      ppuVar1 = ppuVar3;
    }
    _objc_retain(ppuVar1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105c31dd0;
    puStack_60 = &UNK_11084d5f8;
    uStack_48 = (undefined1)param_2;
    lStack_58 = param_1;
    ppuStack_50 = ppuVar1;
    _objc_retain(ppuVar1);
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(ppuStack_50);
    _objc_release(ppuVar1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105c31dd0; end: 105c31e07;  */

void FUN_105c31dd0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010be8ae00(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010beba130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showNotificationWithText_access_11258c1f0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c31e08; end: 105c31e33; -[SCSettingsClearDataViewController _reloadTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c31e08(long param_1)

{
  func_0x00010beafae0();
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732970),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105c31e34; end: 105c31fa7; -[SCSettingsClearDataViewController _promptClearMySelfie] */

void FUN_105c31e34(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e230d8;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e230d8,
                      &PTR____CFConstantStringClassReference_110e23098,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e230f8;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e230f8,
                      &PTR____CFConstantStringClassReference_110e23098,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1a0(param_1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c31fa8; end: 105c31fdb;  */

void FUN_105c31fa8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde09a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c31fdc; end: 105c3210f; -[SCSettingsClearDataViewController _promptClearCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c31fdc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_112732960);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e23118;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e23118,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e23138;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e23138,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc1d98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc1d98,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127328f0);
  func_0x00010c0d66a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ba00(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 105c32110; end: 105c321a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32110(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732960);
  _objc_retain(param_2);
  func_0x00010bf3a760(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105c321a4; end: 105c321b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c321a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732960),
             PTR_s_appClearBlackViewAndRestart__11259ed40,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c321b8; end: 105c322f3; -[SCSettingsClearDataViewController _promptClearMerlinConversation] */

void FUN_105c321b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x000105c339d0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_48;
  _objc_initWeak(puVar2,param_1);
  func_0x000105c339b8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105c339e8();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1a0(param_1);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c322f4; end: 105c3231f;  */

void FUN_105c322f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c32320; end: 105c32433; -[SCSettingsClearDataViewController _clearMerlinConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32320(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000105c33a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732964);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf3b020(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c32434; end: 105c32507;  */

void FUN_105c32434(long param_1,int param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  if (param_2 == 0) {
    lVar1 = param_1;
    func_0x000105c33a18();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar1);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c32508;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(lVar1);
  lStack_40 = lVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(lStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 105c32508; end: 105c3253f;  */

void FUN_105c32508(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c32540; end: 105c328cb; -[SCSettingsClearDataViewController _promptResetContentViewingHistory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32540(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_148 [8];
  undefined **ppuStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000105c33a60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  puVar3 = puVar2;
  func_0x000105c33a90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f420(lVar1);
  _objc_release(puVar3);
  func_0x00010bef6f20(puVar2);
  puVar3 = puVar2;
  func_0x00010c23ba00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_a0;
  puStack_f8 = puVar3;
  _objc_initWeak(puVar4,param_1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105c33a78();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105c328cc;
  puStack_b0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126aed70;
  ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000105c33a48();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  puStack_88 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e23158;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105c329b0;
  puStack_d8 = &UNK_110849f88;
  puVar4 = auStack_a0;
  _objc_copyWeak(auStack_d0,puVar4);
  uStack_100 = 0;
  puStack_110 = puVar10;
  ppuStack_108 = &puStack_f0;
  func_0x00010bfefe60();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112732980);
  *(undefined **)(param_1 + _DAT_112732980) = puVar7;
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c10eda0(param_1);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puStack_f8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  lVar11 = lVar1;
  __Unwind_Resume(lVar1);
  pcStack_118 = FUN_105c328cc;
  ppuStack_140 = &puStack_f0;
  lStack_138 = param_1;
  puStack_130 = puVar2;
  lStack_128 = lVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_copyWeak(auStack_148,lVar11 + 0x20);
  func_0x00010bf84b00(puVar4);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar4);
  return;
}



/* Entry: 105c328cc; end: 105c32973;  */

void FUN_105c328cc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105c32974; end: 105c3299f;  */

void FUN_105c32974(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c329a0; end: 105c329af;  */

void FUN_105c329a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105c329b0; end: 105c329ff;  */

undefined8 FUN_105c329b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a520();
  _objc_release(param_2);
  _objc_release(param_1);
  return 1;
}



/* Entry: 105c32a00; end: 105c32ac3; -[SCSettingsClearDataViewController _resetContentViewingHistory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32a00(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112732968);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c182c00(uVar1,param_3,(long)param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c32ac4;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_2;
  func_0x00010bf3bde0(*(undefined8 *)(param_2 + _DAT_112732960),param_3,&puStack_58);
  return;
}



/* Entry: 105c32ac4; end: 105c32adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732960),
             PTR_s_appClearBlackViewAndRestart__11259ed40,0);
  return;
}



/* Entry: 105c32adc; end: 105c32b0b; -[SCSettingsClearDataViewController _presentBrowserForUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732980);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273296c);
  _objc_retain(0);
  _objc_retain(param_1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(uVar2);
  func_0x000108065a84(param_3,puVar1);
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c32b0c; end: 105c32b63; -[SCSettingsClearDataViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32b0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273296c;
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



/* Entry: 105c32b64; end: 105c32bc3; -[SCSettingsClearDataViewController clearConversationsScopeWantsDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127328f8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105c32bc4; end: 105c32c1b; -[SCSettingsClearDataViewController clearConversationsScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32bc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127328f8;
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



/* Entry: 105c32c1c; end: 105c32c1f; -[SCSettingsClearDataViewController getTitle] */

void FUN_105c32c1c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e231f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e231f8,
                      &PTR____CFConstantStringClassReference_110e23218,0);
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



/* Entry: 105c32c20; end: 105c32e27; -[SCSettingsClearDataViewController _setupSettingTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32c20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bff4000();
  puVar2 = PTR_PTR_1126c3440;
  func_0x00010c2301e0();
  if ((int)puVar2 != 0) {
    func_0x00010befa120(puVar1);
  }
  func_0x00010befa160(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732954);
  func_0x00010bfbe8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0744c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010befa120(puVar1);
  }
  func_0x00010befa160(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127328f4);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108f4b080();
  _objc_release(uVar4);
  if ((int)uVar5 != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar6 = (long)_DAT_112732974;
  _objc_retain(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112732964);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf87940(uVar5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c32e28; end: 105c32ebb;  */

void FUN_105c32e28(long param_1,int param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105c32ebc;
    puStack_30 = &UNK_1108434b0;
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105c32ebc; end: 105c32eeb;  */

void FUN_105c32ebc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c32eec; end: 105c32fb3; -[SCSettingsClearDataViewController _addSettingTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c32eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112732974;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c0d3c80();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0x7fffffffffffffff) {
    func_0x00010befa120();
  }
  else {
    func_0x00010c066b00(lVar1,param_2,puVar3,lVar2);
  }
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar1;
  _objc_retain(lVar1);
  _objc_release(uVar4);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112732970));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c32fb4; end: 105c32fff; -[SCSettingsClearDataViewController _handleRowSelectionWithTag:] */

void FUN_105c32fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  switch(param_3) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00010be7aa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentClearConversations_11257c440);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00010be831b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptClearContactData_11257e608);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00010be7aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentClearLenses_11257c448);
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00010be83210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptClearSearchHistory_11257e620);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00010be83230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptClearStickerSearch_11257e628);
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00010be83170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptClearAutofill_11257e5f8);
    return;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x00010be831f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptClearMySelfie_11257e618);
    return;
  case 7:
                    /* WARNING: Could not recover jumptable at 0x00010be83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptClearCache_11257e600);
    return;
  case 8:
                    /* WARNING: Could not recover jumptable at 0x00010be831d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptClearMerlinConversation_11257e610);
    return;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x00010be83290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptResetContentViewingHistor_11257e640)
    ;
    return;
  default:
    return;
  }
}



/* Entry: 105c33000; end: 105c330cf; -[SCSettingsClearDataViewController _settingsTitleWithTag:] */

void FUN_105c33000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  switch(param_3) {
  case 0:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e23178;
    goto code_r0x000105c33074;
  case 1:
    func_0x000105c33940();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x000105c33958();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e23198;
    goto code_r0x000105c33074;
  case 4:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e231b8;
    goto code_r0x000105c33074;
  case 5:
    func_0x000105c33970();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x000105c33988();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e231d8;
code_r0x000105c33074:
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x000105c339a0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x000105c33a30();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c330d0; end: 105c3336f; -[SCSettingsClearDataViewController _presentAlertWithTitle:dialogText:confirmActionTitle:confirmActionBlock:cancelActionTitle:cancelActionBlock:] */

void FUN_105c330d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_98,param_1);
  puVar1 = PTR_PTR_1126aed70;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105c33370;
  puStack_b0 = &UNK_110853c30;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(param_6);
  uStack_a8 = param_6;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  puVar7 = auStack_98;
  _objc_copyWeak(auStack_d0,puVar7);
  _objc_retain(param_8);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar1;
  puStack_88 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar1);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(puVar7);
  lVar5 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    func_0x00010bf84b00(puVar7);
    lVar6 = *(long *)(param_3 + 0x20);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,puVar7);
    }
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105c33370; end: 105c3344f;  */

void FUN_105c33370(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf84b00(param_2);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c33450; end: 105c334d3; -[SCSettingsClearDataViewController _showNotificationWithText:accessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c33450(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf57f80(PTR_PTR_1126afde0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732924);
  func_0x00010c0dc640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c334d4; end: 105c33583; -[SCSettingsClearDataViewController _updateCacheSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c334d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732960);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c24e060(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c33584; end: 105c33613;  */

void FUN_105c33584(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c33614;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c33614; end: 105c336ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c33614(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732960);
    func_0x00010bf26c20(uVar1,param_2,5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732978);
    *(undefined8 *)(param_1 + _DAT_112732978) = uVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + _DAT_11273297c);
    if (lVar2 != 0) {
      func_0x00010c27f7a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220340();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c336ac; end: 105c33927; -[SCSettingsClearDataViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c336ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732980,0);
  _objc_storeStrong(param_1 + _DAT_11273296c,0);
  _objc_storeStrong(param_1 + _DAT_112732968,0);
  _objc_storeStrong(param_1 + _DAT_112732964,0);
  _objc_storeStrong(param_1 + _DAT_112732960,0);
  _objc_storeStrong(param_1 + _DAT_11273295c,0);
  _objc_storeStrong(param_1 + _DAT_112732958,0);
  _objc_storeStrong(param_1 + _DAT_112732954,0);
  _objc_storeStrong(param_1 + _DAT_112732950,0);
  _objc_storeStrong(param_1 + _DAT_11273294c,0);
  _objc_storeStrong(param_1 + _DAT_112732948,0);
  _objc_storeStrong(param_1 + _DAT_112732944,0);
  _objc_storeStrong(param_1 + _DAT_112732940,0);
  _objc_storeStrong(param_1 + _DAT_11273293c,0);
  _objc_storeStrong(param_1 + _DAT_112732938,0);
  _objc_storeStrong(param_1 + _DAT_112732934,0);
  _objc_storeStrong(param_1 + _DAT_112732930,0);
  _objc_storeStrong(param_1 + _DAT_11273292c,0);
  _objc_storeStrong(param_1 + _DAT_112732928,0);
  _objc_storeStrong(param_1 + _DAT_112732924,0);
  _objc_storeStrong(param_1 + _DAT_112732920,0);
  _objc_storeStrong(param_1 + _DAT_11273291c,0);
  _objc_storeStrong(param_1 + _DAT_112732918,0);
  _objc_storeStrong(param_1 + _DAT_112732914,0);
  _objc_storeStrong(param_1 + _DAT_112732910,0);
  _objc_storeStrong(param_1 + _DAT_11273290c,0);
  _objc_storeStrong(param_1 + _DAT_112732908,0);
  _objc_storeStrong(param_1 + _DAT_112732904,0);
  _objc_storeStrong(param_1 + _DAT_112732900,0);
  _objc_destroyWeak(param_1 + _DAT_1127328fc);
  _objc_storeStrong(param_1 + _DAT_1127328f8,0);
  _objc_storeStrong(param_1 + _DAT_1127328f4,0);
  _objc_storeStrong(param_1 + _DAT_1127328f0,0);
  _objc_storeStrong(param_1 + _DAT_1127328ec,0);
  _objc_storeStrong(param_1 + _DAT_11273297c,0);
  _objc_storeStrong(param_1 + _DAT_112732978,0);
  _objc_storeStrong(param_1 + _DAT_112732974,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732970,0);
  return;
}



/* Entry: 105c33928; end: 105c33aa7;  */

void FUN_105c33928(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e231f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e231f8,
                      &PTR____CFConstantStringClassReference_110e23218,0);
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



/* Entry: 105c33aa8; end: 105c33d8f; -[SCClearCacheManager initWithAppTerminator:userSession:cacheController:imageDownloader:legacyLensDataFetcher:spectaclesContentDataSource:spectaclesCacheClearing:spectacleAuxiliaryCacheClearing:bloopsFriendCache:memoriesCachingMediaManager:contentClearCacheManager:] */

undefined8 *
FUN_105c33aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_68 = PTR_PTR_1126ec688;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_4);
    puVar3 = PTR_PTR_1126b7f08;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
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



/* Entry: 105c33d90; end: 105c33ed3; -[SCClearCacheManager _updateAllCacheSize] */

void FUN_105c33d90(long param_1,undefined8 param_2)

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
  undefined *puVar13;
  
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bf215c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c282800();
  lVar3 = param_1;
  func_0x00010c0c8000(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c282800();
  lVar5 = param_1;
  func_0x00010c258220(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c282800();
  lVar7 = param_1;
  func_0x00010c0904a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c282800();
  lVar9 = param_1;
  func_0x00010c1535a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c282800();
  lVar11 = param_1;
  func_0x00010bf4ca60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c282800();
  func_0x00010c0df880(puVar13,param_2,lVar4 + lVar2 + lVar6 + lVar8 + lVar10 + lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166ce0(param_1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c33ed4; end: 105c33ff3; -[SCClearCacheManager startCalculatingCacheSizeWithCompletion:] */

void FUN_105c33ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105c33ff4; end: 105c346c3;  */

void FUN_105c33ff4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined8 *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    func_0x00010bf215e0(PTR_PTR_1126b4f58);
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173da0(lVar1);
    _objc_release();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_105c346c4;
    uStack_80 = 0x105c346d4;
    uStack_78 = 0;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_105c346c4;
    uStack_b0 = 0x105c346d4;
    uStack_a8 = 0;
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_105c346c4;
    uStack_e0 = 0x105c346d4;
    uStack_d8 = 0;
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_105c346c4;
    uStack_110 = 0x105c346d4;
    uStack_108 = 0;
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_105c346c4;
    uStack_140 = 0x105c346d4;
    uStack_138 = 0;
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_105c346c4;
    uStack_170 = 0x105c346d4;
    uStack_168 = 0;
    puStack_1b8 = &uStack_1c0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b0 = 0x3032000000;
    pcStack_1a8 = FUN_105c346c4;
    uStack_1a0 = 0x105c346d4;
    uStack_198 = 0;
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3032000000;
    pcStack_1d8 = FUN_105c346c4;
    uStack_1d0 = 0x105c346d4;
    _dispatch_group_create();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb500();
    func_0x00010c0df7c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1821a0(lVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _dispatch_group_enter(puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    uVar8 = *(undefined8 *)(lVar1 + 0x40);
    uVar5 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_105c346dc;
    puStack_208 = &UNK_1108cfd58;
    puStack_1f8 = &uStack_a0;
    _objc_retain(puVar2);
    puStack_200 = puVar2;
    func_0x000106fd7c40(uVar7,uVar8,uVar3,uVar5,&puStack_220);
    _objc_release(uVar5);
    _dispatch_group_enter(puVar2);
    puVar6 = PTR_PTR_1126c3448;
    func_0x00010c22b6a0(PTR_PTR_1126c3448);
    _objc_retainAutoreleasedReturnValue();
    puStack_250 = puVar4;
    uStack_248 = 0xc2000000;
    pcStack_240 = FUN_105c3472c;
    puStack_238 = &UNK_1108de1e8;
    puStack_228 = &uStack_d0;
    _objc_retain(puVar2);
    puStack_230 = puVar2;
    func_0x00010bfc4e80(puVar6);
    _objc_release(puVar6);
    _dispatch_group_enter(puVar2);
    puVar6 = PTR_PTR_1126c3448;
    func_0x00010c22b6a0(PTR_PTR_1126c3448);
    _objc_retainAutoreleasedReturnValue();
    puStack_280 = puVar4;
    uStack_278 = 0xc2000000;
    uStack_270 = 0x105c34788;
    puStack_268 = &UNK_1108de1e8;
    puStack_258 = &uStack_130;
    _objc_retain(puVar2);
    puStack_260 = puVar2;
    func_0x00010bfc4e80(puVar6);
    _objc_release(puVar6);
    _dispatch_group_enter(puVar2);
    puVar6 = PTR_PTR_1126c3448;
    func_0x00010c22b6a0(PTR_PTR_1126c3448);
    _objc_retainAutoreleasedReturnValue();
    puStack_2b0 = puVar4;
    uStack_2a8 = 0xc2000000;
    pcStack_2a0 = FUN_105c347e4;
    puStack_298 = &UNK_1108de1e8;
    puStack_288 = &uStack_160;
    _objc_retain(puVar2);
    puStack_290 = puVar2;
    func_0x00010bfc4e80(puVar6);
    _objc_release(puVar6);
    func_0x00010beea880(lVar1);
    _dispatch_group_enter(puVar2);
    puVar6 = PTR_PTR_1126c3448;
    func_0x00010c22b6a0(PTR_PTR_1126c3448);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e0 = puVar4;
    uStack_2d8 = 0xc2000000;
    pcStack_2d0 = FUN_105c348e0;
    puStack_2c8 = &UNK_1108de1e8;
    puStack_2b8 = &uStack_190;
    _objc_retain(puVar2);
    puStack_2c0 = puVar2;
    func_0x00010bfc4e80(puVar6);
    _objc_release(puVar6);
    _dispatch_group_enter(puVar2);
    puVar6 = PTR_PTR_1126c3448;
    func_0x00010c22b6a0(PTR_PTR_1126c3448);
    _objc_retainAutoreleasedReturnValue();
    puStack_310 = puVar4;
    uStack_308 = 0xc2000000;
    uStack_300 = 0x105c3493c;
    puStack_2f8 = &UNK_1108de1e8;
    puStack_2e8 = &uStack_1c0;
    _objc_retain(puVar2);
    puStack_2f0 = puVar2;
    func_0x00010bfc4e80(puVar6);
    _objc_release(puVar6);
    _dispatch_group_enter(puVar2);
    puVar6 = PTR_PTR_1126c3448;
    func_0x00010c22b6a0(PTR_PTR_1126c3448);
    _objc_retainAutoreleasedReturnValue();
    puStack_340 = puVar4;
    uStack_338 = 0xc2000000;
    uStack_330 = 0x105c34998;
    puStack_328 = &UNK_1108de1e8;
    puStack_318 = &uStack_1f0;
    _objc_retain(puVar2);
    puStack_320 = puVar2;
    func_0x00010bfc4e80(puVar6);
    _objc_release(puVar6);
    _dispatch_group_enter(puVar2);
    _objc_initWeak(auStack_348,lVar1);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_3b8 = puVar4;
    uStack_3b0 = 0xc2000000;
    pcStack_3a8 = FUN_105c349f4;
    puStack_3a0 = &UNK_1108de218;
    _objc_copyWeak(auStack_350,auStack_348);
    puStack_390 = &uStack_a0;
    puStack_388 = &uStack_d0;
    puStack_380 = &uStack_100;
    puStack_378 = &uStack_130;
    puStack_370 = &uStack_160;
    puStack_368 = &uStack_190;
    puStack_360 = &uStack_1c0;
    puStack_358 = &uStack_1f0;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uStack_398 = uVar7;
    func_0x000100bc0718(puVar2,uVar3,&puStack_3b8);
    _objc_release(uVar3);
    _objc_release(uStack_398);
    _objc_destroyWeak(auStack_350);
    _objc_destroyWeak(auStack_348);
    _objc_release(puStack_320);
    _objc_release(puStack_2f0);
    _objc_release(puStack_2c0);
    _objc_release(puStack_290);
    _objc_release(puStack_260);
    _objc_release(puStack_230);
    _objc_release(puStack_200);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_1f0,8);
    _objc_release(uStack_1c8);
    __Block_object_dispose(&uStack_1c0,8);
    _objc_release(uStack_198);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
    __Block_object_dispose(&uStack_160,8);
    _objc_release(uStack_138);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c346c4; end: 105c346db;  */

void FUN_105c346c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c346dc; end: 105c3472b;  */

void FUN_105c346dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105c3472c; end: 105c347e3;  */

void FUN_105c3472c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c347e4; end: 105c348df;  */

void FUN_105c347e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3450;
  _objc_retain(param_2);
  func_0x00010c098380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf278a0(PTR_PTR_1126b24e8);
  puVar2 = PTR_PTR_1126c3458;
  func_0x00010c2918a0(PTR_PTR_1126c3458);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf278a0(PTR_PTR_1126b24e8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c282800(param_2);
  _objc_release(param_2);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c348e0; end: 105c349f3;  */

void FUN_105c348e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


