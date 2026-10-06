/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cf1fbc; end: 106cf1fd3; -[SCMemoriesFeaturedStorySectionActionHandler presentingViewController] */

void FUN_106cf1fbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cf1fd4; end: 106cf1fdf; -[SCMemoriesFeaturedStorySectionActionHandler setPresentingViewController:] */

void FUN_106cf1fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 106cf1fe0; end: 106cf1ff7; -[SCMemoriesFeaturedStorySectionActionHandler tabControllerDelegate] */

void FUN_106cf1fe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cf1ff8; end: 106cf2003; -[SCMemoriesFeaturedStorySectionActionHandler setTabControllerDelegate:] */

void FUN_106cf1ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106cf2004; end: 106cf201b; -[SCMemoriesFeaturedStorySectionActionHandler tabController] */

void FUN_106cf2004(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cf201c; end: 106cf2027; -[SCMemoriesFeaturedStorySectionActionHandler setTabController:] */

void FUN_106cf201c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 106cf2028; end: 106cf20f3; -[SCMemoriesFeaturedStorySectionActionHandler .cxx_destruct] */

void FUN_106cf2028(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 106cf20f4; end: 106cf26ab; -[SCMemoriesOriginalSnapInspectorViewController initWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106cf20f4(undefined8 param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puStack_c8 = PTR_PTR_1126f6770;
  puVar1 = &uStack_d0;
  uStack_d0 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_new();
    lVar22 = (long)_DAT_11275c6e4;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar2;
    _objc_release(uVar20);
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar22));
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar23 = param_3;
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar20;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar20);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
    func_0x00010c23d0a0(param_6);
    func_0x00010c23d0a0(param_6);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar21 = (long)_DAT_11275c6e8;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar20);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar20 = uVar4;
    func_0x00010bf49420((param_2 / param_3) * dVar23 * 0.5);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar20;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar9 = uVar6;
    func_0x00010bf49420(dVar23 * 0.5);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c274200(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar19);
    _objc_release(uVar15);
    _objc_release(uVar18);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar17);
    _objc_release(uVar6);
    _objc_release(uVar20);
    _objc_release(puVar16);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_6 + _DAT_11275c6e8,0);
  puVar1 = (undefined8 *)(param_6 + _DAT_11275c6e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1,0);
  return puVar1;
}



/* Entry: 106cf26ac; end: 106cf26eb; -[SCMemoriesOriginalSnapInspectorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf26ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c6e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c6e4,0);
  return;
}



/* Entry: 106cf26ec; end: 106cf275f; -[SCMemoriesOperaLaunchServices initWithMemoriesOperaLauncher:] */

undefined1 * FUN_106cf26ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6778;
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



/* Entry: 106cf2760; end: 106cf2767; -[SCMemoriesOperaLaunchServices memoriesOperaLauncher] */

undefined8 FUN_106cf2760(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cf2768; end: 106cf2773; -[SCMemoriesOperaLaunchServices .cxx_destruct] */

void FUN_106cf2768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cf2774; end: 106cf2827; -[SCMemoriesScreenshopEducationalUnitActionHandler initWithTabControllerDelegate:listAdapter:manager:] */

undefined1 *
FUN_106cf2774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6780;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cf2828; end: 106cf28df; -[SCMemoriesScreenshopEducationalUnitActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_106cf2828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010be28d00(param_1);
    }
  }
  else {
    func_0x00010be28d20(param_1);
  }
  _objc_release(param_4);
  return 0;
}



/* Entry: 106cf28e0; end: 106cf290f; -[SCMemoriesScreenshopEducationalUnitActionHandler _handleEducationalUnitTapped] */

void FUN_106cf28e0(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cf2910; end: 106cf295b; -[SCMemoriesScreenshopEducationalUnitActionHandler _handleEducationalUnitDismissButtonTapped] */

void FUN_106cf2910(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8cc40();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c128be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cf295c; end: 106cf298b; -[SCMemoriesScreenshopEducationalUnitActionHandler .cxx_destruct] */

void FUN_106cf295c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106cf298c; end: 106cf29e3; -[SCMemoriesScreenshopEducationalUnitCell initWithFrame:] */

undefined1 * FUN_106cf298c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6788;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
    func_0x00010bde6620(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106cf29e4; end: 106cf2a57; +[SCMemoriesScreenshopEducationalUnitCell calculatedHeightForCellWidth:] */

undefined8 FUN_106cf29e4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106cf2a58;
  puStack_20 = &UNK_110848088;
  if (lRam00000001136c7dc0 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136c7dc0,&puStack_38);
  }
  return uRam00000001136c7db8;
}



/* Entry: 106cf2a58; end: 106cf2cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf2a58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double in_d3;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = *(double *)(param_1 + 0x20);
  lVar1 = param_1;
  func_0x000106cf7814();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_88 = uVar6;
  func_0x00010bf1ecc0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&uStack_88,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(dVar8 + -16.0 + -16.0 + -17.0,0x7fefffffffffffff,lVar1,param_2,1,puVar3,0);
  dVar8 = in_d3;
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  dVar12 = *(double *)(param_1 + 0x20) + -16.0 + -16.0;
  func_0x000106cf782c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_98 = uVar6;
  func_0x00010c127e40(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&uStack_98,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(dVar12,0x7fefffffffffffff,lVar1,param_2,1,puVar3,0);
  dVar9 = dVar8;
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  func_0x000106cf7844();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_a8 = uVar6;
  func_0x00010bf1ecc0(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a0 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a0,&uStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(dVar12,0x7fefffffffffffff,lVar1,param_2,1,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  dRam00000001136c7db8 = in_d3 + dVar8 + dVar9 + 47.0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf4dce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar7);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar7 = lVar1;
  func_0x00010bf4dce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar10,uVar11,uVar13,uVar14);
  lVar7 = (long)_DAT_11275c6fc;
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  *(undefined **)(lVar1 + lVar7) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  func_0x00010c219b60(uVar6,param_2,0);
  func_0x000106cf7814();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar1 + lVar7),param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010c1cfce0(*(undefined8 *)(lVar1 + lVar7),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar13,uVar14);
  lVar7 = (long)_DAT_11275c700;
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  *(undefined **)(lVar1 + lVar7) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  func_0x00010c219b60(uVar6,param_2,0);
  func_0x000106cf782c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar1 + lVar7),param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010c1cfce0(*(undefined8 *)(lVar1 + lVar7),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar13,uVar14);
  lVar7 = (long)_DAT_11275c704;
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  *(undefined **)(lVar1 + lVar7) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  func_0x00010c219b60(uVar6,param_2,0);
  func_0x000106cf7844();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar1 + lVar7),param_2,uVar6);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140a80(0x4016000000000000,0x4021000000000000,0x4008000000000000,puVar2,param_2,puVar5
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar3,param_2,puVar2);
  lVar7 = (long)_DAT_11275c708;
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  *(undefined **)(lVar1 + lVar7) = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar5);
  func_0x00010c219b60(*(undefined8 *)(lVar1 + lVar7),param_2,0);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x83);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bea00(0x4031000000000000,0x4031000000000000,0x4008000000000000,puVar2,param_2,puVar5
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2640(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11275c70c;
  uVar6 = *(undefined8 *)(lVar1 + lVar7);
  *(undefined **)(lVar1 + lVar7) = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar5);
  func_0x00010befbd60(*(undefined8 *)(lVar1 + lVar7),param_2,lVar1,
                      PTR_s__closeButtonTapped_112534bc8,0x40);
  func_0x00010c219b60(*(undefined8 *)(lVar1 + lVar7),param_2,0);
  func_0x00010c198080(*(undefined8 *)(lVar1 + lVar7),param_2,1);
  func_0x00010c1a8c60(0xc039000000000000,0xc039000000000000,0xc039000000000000,0xc039000000000000,
                      *(undefined8 *)(lVar1 + lVar7));
  func_0x00010c160fc0(*(undefined8 *)(lVar1 + lVar7),param_2,
                      &PTR____CFConstantStringClassReference_110e83b38);
  lVar7 = lVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  lVar7 = lVar1;
  func_0x00010bf4dce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  lVar7 = lVar1;
  func_0x00010bf4dce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  lVar7 = lVar1;
  func_0x00010bf4dce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  func_0x00010bf4dce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106cf2cc4; end: 106cf3237; -[SCMemoriesScreenshopEducationalUnitCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf2cc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar6);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  lVar6 = (long)_DAT_11275c6fc;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c219b60(uVar5,param_2,0);
  func_0x000106cf7814();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar6),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  lVar6 = (long)_DAT_11275c700;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c219b60(uVar5,param_2,0);
  func_0x000106cf782c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar6),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  lVar6 = (long)_DAT_11275c704;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c219b60(uVar5,param_2,0);
  func_0x000106cf7844();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar5);
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140a80(0x4016000000000000,0x4021000000000000,0x4008000000000000,puVar1,param_2,puVar4
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar3,param_2,puVar1);
  lVar6 = (long)_DAT_11275c708;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x83);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bea00(0x4031000000000000,0x4031000000000000,0x4008000000000000,puVar1,param_2,puVar4
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2640(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11275c70c;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar6),param_2,param_1,
                      PTR_s__closeButtonTapped_112534bc8,0x40);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010c1a8c60(0xc039000000000000,0xc039000000000000,0xc039000000000000,0xc039000000000000,
                      *(undefined8 *)(param_1 + lVar6));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110e83b38);
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cf3238; end: 106cf38cb; -[SCMemoriesScreenshopEducationalUnitCell _constrainViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf3238(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined *puVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  puVar44 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar46 = (long)_DAT_11275c6fc;
  lVar1 = *(long *)(param_1 + lVar46);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf493c0(0x4030000000000000,lVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar46);
  lStack_d8 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493c0(0x4030000000000000,uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar46);
  uStack_d0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = (long)_DAT_11275c70c;
  uVar10 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf49520(0xc030000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_11275c700;
  uVar12 = *(undefined8 *)(param_1 + lVar48);
  uStack_c8 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493c0(0x4030000000000000,uVar12,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar48);
  uStack_c0 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf49520(0xc030000000000000,uVar16,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar48);
  uStack_b8 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493c0(0x4018000000000000,uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  lVar47 = (long)_DAT_11275c704;
  uVar23 = *(undefined8 *)(param_1 + lVar47);
  uStack_b0 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar46;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493c0(0x4030000000000000,uVar23,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar47);
  uStack_a8 = uVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493c0(0x4014000000000000,uVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar47);
  uStack_a0 = uVar28;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar48;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493c0(0xc034000000000000,uVar29,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_11275c708;
  uVar32 = *(undefined8 *)(param_1 + lVar45);
  uStack_98 = uVar31;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar47);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493a0(uVar32,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar45);
  uStack_90 = uVar34;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar47);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493c0(0x4017000000000000,uVar35,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar49);
  uStack_88 = uVar37;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar39;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar38;
  func_0x00010bf493c0(0xc030000000000000,uVar38,param_2,lVar47);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar49);
  uStack_80 = uVar40;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar41;
  func_0x00010bf493c0(0x4030000000000000,uVar41,param_2,lVar45);
  _objc_retainAutoreleasedReturnValue();
  puVar43 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar42;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_d8,0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar44,param_2,puVar43);
  _objc_release(puVar43);
  _objc_release(uVar42);
  _objc_release(lVar45);
  _objc_release(param_1);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(lVar47);
  _objc_release(lVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(lVar30);
  _objc_release(lVar48);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(lVar24);
  _objc_release(lVar46);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar1 + _DAT_11275c710;
  _objc_loadWeakRetained(lVar2);
  puVar44 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(lVar2,param_2,lVar1,puVar44,0);
  _objc_release(puVar44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106cf38cc; end: 106cf3947; -[SCMemoriesScreenshopEducationalUnitCell _closeButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf38cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_11275c710;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(lVar1,param_2,param_1,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cf3948; end: 106cf39c3; -[SCMemoriesScreenshopEducationalUnitCell _educationalUnitTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf3948(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_11275c710;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(lVar1,param_2,param_1,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cf39c4; end: 106cf39e3; -[SCMemoriesScreenshopEducationalUnitCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf39c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275c710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cf39e4; end: 106cf39f7; -[SCMemoriesScreenshopEducationalUnitCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf39e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275c710,param_3);
  return;
}



/* Entry: 106cf39f8; end: 106cf3a73; -[SCMemoriesScreenshopEducationalUnitCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf39f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275c710);
  _objc_storeStrong(param_1 + _DAT_11275c70c,0);
  _objc_storeStrong(param_1 + _DAT_11275c708,0);
  _objc_storeStrong(param_1 + _DAT_11275c704,0);
  _objc_storeStrong(param_1 + _DAT_11275c700,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c6fc,0);
  return;
}



/* Entry: 106cf3a74; end: 106cf3b57; -[SCMemoriesScreenshopEducationalUnitManager initWithScreenshopPersistenceService:featureSettingsService:screenshotsTabEnabled:userInfoProvider:accountAgeInDaysBeforeEligibleForBanner:] */

undefined1 *
FUN_106cf3a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f6790;
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
    *(undefined1 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cf3b58; end: 106cf3c27; -[SCMemoriesScreenshopEducationalUnitManager shouldDisplayEducationalUnit] */

bool FUN_106cf3b58(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c151660();
    if ((uVar2 < 10) && (lVar3 = param_1, func_0x00010be3dea0(), (int)lVar3 != 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010c151680();
      if ((iVar1 == 0) || (lVar3 = param_1, func_0x00010be34740(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        func_0x00010c151600();
        if (lVar3 == 0) {
          return true;
        }
        if (lVar3 == 1) {
          lVar3 = *(long *)(param_1 + 0x10);
          func_0x00010c151620();
          dVar5 = (double)lVar3;
          dVar6 = dVar5 + 604800.0;
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          _objc_release(puVar4);
          return dVar6 < dVar5;
        }
      }
    }
  }
  return false;
}



/* Entry: 106cf3c28; end: 106cf3c67; -[SCMemoriesScreenshopEducationalUnitManager educationalUnitDisplayed] */

void FUN_106cf3c28(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x00010c151660(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1f7770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s_setScreenshopEducationalUnitSeen_11265b800,lVar1 + 1);
  return;
}



/* Entry: 106cf3c68; end: 106cf3ccb; -[SCMemoriesScreenshopEducationalUnitManager educationalUnitDismissed] */

void FUN_106cf3c68(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar1 = lVar4;
  func_0x00010c151600(lVar4);
  func_0x00010c1f7720(lVar4,param_3,lVar1 + 1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1f7740(uVar3,param_3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cf3ccc; end: 106cf3d67; -[SCMemoriesScreenshopEducationalUnitManager _hasShoppableScreenshots] */

void FUN_106cf3ccc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfaa200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(uVar3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar4;
    _objc_release(uVar2);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 106cf3d68; end: 106cf3e63; -[SCMemoriesScreenshopEducationalUnitManager _isAccountOlderEnough] */

bool FUN_106cf3d68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf44660(puVar4,param_2,0x10,uVar3,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010bf65700(puVar6);
  lVar7 = *(long *)(param_1 + 0x38);
  _objc_release(puVar6);
  _objc_release(uVar3);
  return lVar7 <= (long)puVar4;
}



/* Entry: 106cf3e64; end: 106cf3eab; -[SCMemoriesScreenshopEducationalUnitManager .cxx_destruct] */

void FUN_106cf3e64(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cf3eac; end: 106cf3f67; -[SCMemoriesScreenshopEducationalUnitSectionController initWithViewModel:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106cf3eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6798;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275c730;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275c734;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cf3f68; end: 106cf3f7b; -[SCMemoriesScreenshopEducationalUnitSectionController inset] */

undefined8 FUN_106cf3f68(void)

{
  return 0;
}



/* Entry: 106cf3f7c; end: 106cf3f83; -[SCMemoriesScreenshopEducationalUnitSectionController numberOfItems] */

undefined8 FUN_106cf3f7c(void)

{
  return 1;
}



/* Entry: 106cf3f84; end: 106cf4007; -[SCMemoriesScreenshopEducationalUnitSectionController cellForItemAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf3f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2210;
  _objc_opt_class(PTR_PTR_1126d2210);
  lVar3 = lVar1;
  func_0x00010bf6e020(lVar1,param_2,puVar2,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c161980(lVar3,param_2,*(undefined8 *)(param_1 + _DAT_11275c734));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106cf4008; end: 106cf408f; -[SCMemoriesScreenshopEducationalUnitSectionController sizeForItemAtIndex:] */

undefined1  [16] FUN_106cf4008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = param_2;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067520();
  puVar1 = PTR_PTR_1126d2210;
  uVar3 = param_1;
  func_0x00010bf3fd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067520();
  func_0x00010bf27ae0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 106cf4090; end: 106cf40cf; -[SCMemoriesScreenshopEducationalUnitSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf4090(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c734,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c730,0);
  return;
}



/* Entry: 106cf40d0; end: 106cf40db; -[SCMemoriesScreenshopEducationalUnitViewModel diffIdentifier] */

undefined ** FUN_106cf40d0(void)

{
  return &PTR____CFConstantStringClassReference_110e83b58;
}



/* Entry: 106cf40dc; end: 106cf4177; -[SCMemoriesScreenshopEducationalUnitViewModel isEqualToDiffableObject:] */

ulong FUN_106cf40dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2168;
  _objc_opt_class(PTR_PTR_1126d2168);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf7ecc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106cf4178; end: 106cf4243; -[SCMemoriesScreenshopSessionLogger initWithUserTrackedLogger:dataSource:commerceEventLogger:] */

undefined1 *
FUN_106cf4178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f67a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_5;
    _objc_release(uVar2);
    func_0x00010be93940(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cf4244; end: 106cf4483; -[SCMemoriesScreenshopSessionLogger _logScreenshopSession] */

void FUN_106cf4244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010be1a640();
    puVar1 = PTR_PTR_1126d2218;
    _objc_alloc_init(PTR_PTR_1126d2218);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c151520();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ce40();
    func_0x00010c1f7780(puVar1,param_2,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c1fde60(puVar1,param_2,(long)*(double *)(param_1 + 0x30));
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c22ccc0();
    func_0x00010c19a3e0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
    func_0x00010c1981a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    if (0.0 < *(double *)(param_1 + 0x50)) {
      func_0x00010c1913a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
      func_0x00010c191380(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
      func_0x00010c191360(*(undefined8 *)(param_1 + 0x50),puVar1);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      func_0x00010bf885a0();
      func_0x00010c1912a0(puVar1);
    }
    if (*(long *)(param_1 + 0x60) != 2) {
      func_0x00010c1912c0(puVar1,param_2,*(long *)(param_1 + 0x60) == 0);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      func_0x00010c1f6560(puVar1);
      func_0x00010c1f6540(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
      func_0x00010c1f6300(*(undefined8 *)(param_1 + 0x78),puVar1);
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      func_0x00010c1f6600(puVar1);
      func_0x00010c1f6620(*(undefined8 *)(param_1 + 0x80),puVar1);
    }
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bfc3860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d5c0(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bfcb580();
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar6 = lVar3;
    func_0x00010c22ccc0();
    func_0x00010c0aecc0(uVar8,uVar5,param_2,lVar4,uVar7,lVar6,1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010be93940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106cf4484; end: 106cf473b; -[SCMemoriesScreenshopSessionLogger _gatherScreenshopSessionMetrics] */

void FUN_106cf4484(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar1;
  _objc_release(uVar6);
  func_0x00010c26f380(*(undefined8 *)(param_2 + 0x28),param_3,*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_2 + 0x30) = param_1;
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfcb580();
  *(long *)(param_2 + 0x40) = lVar3;
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfcb580();
  *(long *)(param_2 + 0x48) = lVar3;
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfc5780();
  *(undefined8 *)(param_2 + 0x50) = param_1;
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfc4f40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(long *)(param_2 + 0x58) = lVar3;
  _objc_release(uVar6);
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfc4f60();
  *(long *)(param_2 + 0x60) = lVar3;
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfc9c80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3;
  _objc_release(uVar6);
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfc9180();
  *(long *)(param_2 + 0x70) = lVar3;
  _objc_release(lVar2);
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfc9c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      func_0x00010c26f380(*(undefined8 *)(param_2 + 0x28),param_3,*(undefined8 *)(param_2 + 0x20));
      *(undefined8 *)(param_2 + 0x78) = param_1;
    }
    else {
      lVar2 = param_2 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bfc9c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      *(undefined8 *)(param_2 + 0x78) = param_1;
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c076f20();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfb1c00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0xbff0000000000000;
    if (lVar3 != 0) {
      lVar4 = param_2 + 8;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bfb1c00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(lVar5);
      _objc_release(lVar4);
      uVar6 = param_1;
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    *(undefined8 *)(param_2 + 0x80) = uVar6;
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1b25c0();
    _objc_release(lVar2);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfc9ca0();
    *(long *)(param_2 + 0x88) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106cf473c; end: 106cf47a7; -[SCMemoriesScreenshopSessionLogger _resetScreenshopSessionMetrics] */

void FUN_106cf473c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x60) = 2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



/* Entry: 106cf47a8; end: 106cf481b; -[SCMemoriesScreenshopSessionLogger screenshopSessionStart] */

void FUN_106cf47a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c22ccc0();
  *(long *)(param_1 + 0x38) = lVar3;
  _objc_release(lVar2);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfcbac0();
  *(long *)(param_1 + 0x68) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106cf481c; end: 106cf481f; -[SCMemoriesScreenshopSessionLogger screenshopSessionEnd] */

void FUN_106cf481c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be582f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logScreenshopSession_112573a58);
  return;
}



/* Entry: 106cf4820; end: 106cf4887; -[SCMemoriesScreenshopSessionLogger .cxx_destruct] */

void FUN_106cf4820(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106cf4888; end: 106cf4ae3; -[SCMemoriesScreenshopTabController initWithContainerViewController:configuration:delegate:tabType:composerCoreUIServices:screenshopTabServices:commerceConfigProvider:valdiRuntimeProvider:circumstanceEngine:] */

undefined8 *
FUN_106cf4888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f67a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x11,param_5);
    puVar1[0x12] = param_6;
    _objc_storeWeak(puVar1 + 4,param_3);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aead8;
    uVar4 = puVar1[5];
    uVar2 = puVar1[7];
    _objc_retain(uVar4);
    _objc_alloc(puVar3);
    func_0x00010c038f40();
    func_0x00010c21c140(uVar2);
    _objc_release(puVar3);
    func_0x00010c0647a0(puVar1[7]);
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 0xe) = 0;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106cf4ae4; end: 106cf4b0b; -[SCMemoriesScreenshopTabController sourceViewForLastOpenedItemAndNotifyRecentOpenedItemId:] */

void FUN_106cf4ae4(long param_1)

{
  func_0x00010c0dd620(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c13ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_retrieveLastestTrackedThumbnailV_11262d4a0);
  return;
}



/* Entry: 106cf4b0c; end: 106cf4c87; -[SCMemoriesScreenshopTabController presentOperaWithPHassets:index:sourceView:] */

void FUN_106cf4b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x106cf4bf8;
  puStack_60 = &UNK_1108502a8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_5);
  uStack_50 = param_5;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106cf4c88; end: 106cf4d17; -[SCMemoriesScreenshopTabController updateTabBarBadged:] */

void FUN_106cf4c88(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106cf4d18;
  puStack_40 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106cf4d18; end: 106cf4d8b;  */

void FUN_106cf4d18(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x72) & 1) == 0)) {
    if (*(char *)(param_1 + 0x28) != *(char *)(lVar1 + 0x70)) {
      *(char *)(lVar1 + 0x70) = *(char *)(param_1 + 0x28);
      lVar2 = lVar1 + 0x88;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c2678e0();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cf4d8c; end: 106cf519f; -[SCMemoriesScreenshopTabController _createGridWithLoading] */

void FUN_106cf4d8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126d2220;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar2);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1c1bc0(puVar1);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126d2228;
  _objc_alloc(PTR_PTR_1126d2228);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf643e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf643e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c151540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042680(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010beff660(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdc9ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c0b7600(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar4);
  _objc_release(uVar2);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_initWeak(auStack_78,param_1);
  puVar5 = PTR_PTR_1126d2230;
  _objc_alloc(PTR_PTR_1126d2230);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106cf51a0;
  puStack_88 = &UNK_11084d688;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf91980(*(undefined8 *)(param_1 + 0x58));
  func_0x00010bf91960(*(undefined8 *)(param_1 + 0x58));
  func_0x00010bffdfa0(puVar5);
  func_0x00010c1d4600(puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf42400(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f360(puVar4);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf448e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar4);
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126d2238;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf643e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c151520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar6;
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar10);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x10));
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf643e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f76a0();
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 106cf51a0; end: 106cf5257;  */

void FUN_106cf51a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cf5258; end: 106cf5367; -[SCMemoriesScreenshopTabController _alertContainer] */

void FUN_106cf5258(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106cf5368;
  puStack_58 = &UNK_110849680;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cf5368; end: 106cf5413;  */

void FUN_106cf5368(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0140();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cf5414; end: 106cf5497; -[SCMemoriesScreenshopTabController _attachAlertViewController:] */

void FUN_106cf5414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cf5498; end: 106cf55f3; -[SCMemoriesScreenshopTabController _detachAlertViewControllerWithCompletion:] */

void FUN_106cf5498(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106cf55f4;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_3);
      lStack_58 = param_3;
      func_0x00010bf84b00(lVar1,param_2,1,&puStack_78);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(lStack_58);
      goto LAB_106cf55d0;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_106cf55d0:
  _objc_release(param_3);
  return;
}



/* Entry: 106cf55f4; end: 106cf5607;  */

void FUN_106cf55f4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106cf5600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106cf5608; end: 106cf5863; -[SCMemoriesScreenshopTabController _constrainCategoryGrid] */

void FUN_106cf5608(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x48),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x48));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  lStack_88 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2793a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = uVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c274200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c267b00();
  uVar14 = uVar7;
  func_0x00010bf493c0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1ff80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 4;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(lVar2 + 0x38);
  _objc_retain(puVar15);
  func_0x00010bf42400(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar2 + 0x38);
  func_0x00010bfc3da0(uVar14);
  func_0x00010c0aeca0(uVar17,param_2,puVar15,uVar14,uVar16);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}



/* Entry: 106cf5864; end: 106cf58d7; -[SCMemoriesScreenshopTabController _logScreenshopOnboardingImpressionWithLocation:isNewUser:] */

void FUN_106cf5864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf42400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfc3da0(uVar1);
  func_0x00010c0aeca0(uVar2,param_2,param_3,uVar1,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cf58d8; end: 106cf598b; -[SCMemoriesScreenshopTabController _checkDisplayOnboardingPopupViewWithBlock:isNewUser:] */

void FUN_106cf58d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c151500();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf42740();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c234160();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf42740(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7b920();
      _objc_release(uVar3);
      func_0x00010be582a0(param_1,param_2,&PTR____CFConstantStringClassReference_110e83b98,param_4);
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cf598c; end: 106cf5a4f; -[SCMemoriesScreenshopTabController loadViewIfNeeded] */

void FUN_106cf598c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_5;
  func_0x00010c0834c0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,param_3,param_4);
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  *(undefined **)(param_5 + 0x10) = puVar2;
  _objc_release(uVar3);
  func_0x00010bdee460(param_5);
  func_0x00010bde64e0(param_5);
  uVar3 = *(undefined8 *)(param_5 + 0x38);
  func_0x00010bf643e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106cf5a50; end: 106cf5a57; -[SCMemoriesScreenshopTabController allItemsCount] */

undefined8 FUN_106cf5a50(void)

{
  return 0;
}



/* Entry: 106cf5a58; end: 106cf5a63; -[SCMemoriesScreenshopTabController allItems] */

undefined * FUN_106cf5a58(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106cf5a64; end: 106cf5a6b; -[SCMemoriesScreenshopTabController galleryItemIdToSnapsMap] */

undefined8 FUN_106cf5a64(void)

{
  return 0;
}



/* Entry: 106cf5a6c; end: 106cf5a73; -[SCMemoriesScreenshopTabController galleryItemIdToPHAssetsMap] */

undefined8 FUN_106cf5a6c(void)

{
  return 0;
}



/* Entry: 106cf5a74; end: 106cf5a7b; -[SCMemoriesScreenshopTabController itemIdsToExclude] */

undefined8 FUN_106cf5a74(void)

{
  return 0;
}



/* Entry: 106cf5a7c; end: 106cf5a7f; -[SCMemoriesScreenshopTabController changeSelected:forGalleryItem:] */

void FUN_106cf5a7c(void)

{
  return;
}



/* Entry: 106cf5a80; end: 106cf5a83; -[SCMemoriesScreenshopTabController changeSelected:forGallerySnapItem:] */

void FUN_106cf5a80(void)

{
  return;
}



/* Entry: 106cf5a84; end: 106cf5a87; -[SCMemoriesScreenshopTabController changeSelected:forItems:snapItems:] */

void FUN_106cf5a84(void)

{
  return;
}



/* Entry: 106cf5a88; end: 106cf5a8b; -[SCMemoriesScreenshopTabController endEditing] */

void FUN_106cf5a88(void)

{
  return;
}



/* Entry: 106cf5a8c; end: 106cf5acf; -[SCMemoriesScreenshopTabController galleryViewWillAppear] */

void FUN_106cf5a8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2240;
  _objc_alloc(PTR_PTR_1126d2240);
  func_0x00010c040ec0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf5ad0; end: 106cf5ad3; -[SCMemoriesScreenshopTabController galleryViewDidAppear] */

void FUN_106cf5ad0(void)

{
  return;
}



/* Entry: 106cf5ad4; end: 106cf5b17; -[SCMemoriesScreenshopTabController galleryViewDidDisappear] */

void FUN_106cf5ad4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2240;
  _objc_alloc(PTR_PTR_1126d2240);
  func_0x00010c040ec0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf5b18; end: 106cf5b2b; -[SCMemoriesScreenshopTabController indexPathForId:itemLevelIdentifier:] */

void FUN_106cf5b18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSIndexPath_1126b0990,PTR_s_indexPathForItem_inSection__1125d8dd0,0,0
            );
  return;
}



/* Entry: 106cf5b2c; end: 106cf5c2f; -[SCMemoriesScreenshopTabController setFocused:] */

void FUN_106cf5b2c(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(byte *)(param_1 + 0x72) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x72) = (char)param_3;
  puVar2 = PTR_PTR_1126d2240;
  _objc_alloc(PTR_PTR_1126d2240);
  func_0x00010c040ec0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
  if (*(char *)(param_1 + 0x72) != '\x01') goto LAB_106cf5c1c;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
    lVar4 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c2678e0();
    _objc_release(lVar4);
  }
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x60);
    if (lVar4 != 0) {
      uVar5 = 0;
      goto LAB_106cf5be4;
    }
  }
  else {
    uVar5 = 1;
LAB_106cf5be4:
    func_0x00010bddd6e0(param_1,param_2,lVar4,uVar5);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x00010bf91960();
  if (iVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    func_0x00010c151500();
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c151680(uVar5);
      func_0x00010be582a0(param_1,param_2,&PTR____CFConstantStringClassReference_110e83b78,
                          (uint)uVar5 ^ 1);
    }
  }
LAB_106cf5c1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cf5c30; end: 106cf5c37; -[SCMemoriesScreenshopTabController isDragging] */

undefined8 FUN_106cf5c30(void)

{
  return 0;
}



/* Entry: 106cf5c38; end: 106cf5c3f; -[SCMemoriesScreenshopTabController isPrivate] */

undefined8 FUN_106cf5c38(void)

{
  return 0;
}



/* Entry: 106cf5c40; end: 106cf5c47; -[SCMemoriesScreenshopTabController isEditing] */

undefined8 FUN_106cf5c40(void)

{
  return 0;
}



/* Entry: 106cf5c48; end: 106cf5c4f; -[SCMemoriesScreenshopTabController isInLineSearchable] */

undefined8 FUN_106cf5c48(void)

{
  return 0;
}



/* Entry: 106cf5c50; end: 106cf5c57; -[SCMemoriesScreenshopTabController isTracking] */

undefined8 FUN_106cf5c50(void)

{
  return 0;
}



/* Entry: 106cf5c58; end: 106cf5c67; -[SCMemoriesScreenshopTabController isViewLoaded] */

bool FUN_106cf5c58(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 106cf5c68; end: 106cf5c73; -[SCMemoriesScreenshopTabController itemsInRect:] */

undefined * FUN_106cf5c68(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106cf5c74; end: 106cf5c7b; -[SCMemoriesScreenshopTabController prefersAllItemsAreNotIterated] */

undefined8 FUN_106cf5c74(void)

{
  return 0;
}



/* Entry: 106cf5c7c; end: 106cf5c83; -[SCMemoriesScreenshopTabController scrollBarTopOffset] */

undefined8 FUN_106cf5c7c(void)

{
  return 0;
}



/* Entry: 106cf5c84; end: 106cf5c87; -[SCMemoriesScreenshopTabController scrollToGalleryItem:animated:] */

void FUN_106cf5c84(void)

{
  return;
}



/* Entry: 106cf5c88; end: 106cf5c8f; -[SCMemoriesScreenshopTabController selectedGalleryItems] */

undefined8 FUN_106cf5c88(void)

{
  return 0;
}



/* Entry: 106cf5c90; end: 106cf5ca7; -[SCMemoriesScreenshopTabController setScrollContentOffset:animated:completion:] */

void FUN_106cf5c90(void)

{
  char *pcVar1;
  long in_x3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  char *pcStack_28;
  
  if (in_x3 != 0) {
    pcVar1 = "APPSTORE";
    func_0x0001000d77b8("APPSTORE",in_x3);
    func_0x000107c61180();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_100c3b500;
    puStack_30 = &UNK_110849530;
    pcStack_28 = pcVar1;
    func_0x000107c61174();
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
    func_0x000107c61170(pcStack_28);
    func_0x000107c61170(pcVar1);
    return;
  }
  return;
}



/* Entry: 106cf5ca8; end: 106cf5cab; -[SCMemoriesScreenshopTabController scrollToTop] */

void FUN_106cf5ca8(void)

{
  return;
}



/* Entry: 106cf5cac; end: 106cf5cb3; -[SCMemoriesScreenshopTabController contentHeight] */

undefined8 FUN_106cf5cac(void)

{
  return 0;
}



/* Entry: 106cf5cb4; end: 106cf5cbb; -[SCMemoriesScreenshopTabController shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController] */

undefined8 FUN_106cf5cb4(void)

{
  return 1;
}



/* Entry: 106cf5cbc; end: 106cf5cc3; -[SCMemoriesScreenshopTabController shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController] */

undefined8 FUN_106cf5cbc(void)

{
  return 1;
}



/* Entry: 106cf5cc4; end: 106cf5cc7; -[SCMemoriesScreenshopTabController deeplinkToOperaWithDestinationInfo:] */

void FUN_106cf5cc4(void)

{
  return;
}



/* Entry: 106cf5cc8; end: 106cf5ccf; -[SCMemoriesScreenshopTabController shouldDisplay] */

undefined8 FUN_106cf5cc8(void)

{
  return 1;
}



/* Entry: 106cf5cd0; end: 106cf5cd7; -[SCMemoriesScreenshopTabController collectionView] */

undefined8 FUN_106cf5cd0(void)

{
  return 0;
}



/* Entry: 106cf5cd8; end: 106cf5cff; -[SCMemoriesScreenshopTabController view] */

void FUN_106cf5cd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cf5d00; end: 106cf5d03; -[SCMemoriesScreenshopTabController didTriggerCreateMashupForStory:] */

void FUN_106cf5d00(void)

{
  return;
}


