/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c4ee8c; end: 105c4eedb; -[SCLifestyleAndInterestsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4ee8c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010bf74a00(*(undefined8 *)(param_1 + _DAT_112732c3c));
  return;
}



/* Entry: 105c4eedc; end: 105c4ef2b; -[SCLifestyleAndInterestsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4eedc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf74ac0(*(undefined8 *)(param_1 + _DAT_112732c3c));
  puStack_28 = PTR_PTR_1126ec838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c4ef2c; end: 105c4ef37; -[SCLifestyleAndInterestsViewController supportedInterfaceOrientations] */

undefined8 FUN_105c4ef2c(void)

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



/* Entry: 105c4ef38; end: 105c4efb7; -[SCLifestyleAndInterestsViewController configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4ef38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3600;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c061e60();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732c48);
  *(undefined **)(param_1 + _DAT_112732c48) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732c40),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105c4efb8; end: 105c4efcf; -[SCLifestyleAndInterestsViewController showActivityIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4efb8(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112732c44),PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732c44),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105c4efd0; end: 105c4efdb; -[SCLifestyleAndInterestsViewController showErrorWithText:] */

void FUN_105c4efd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c237530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126afca8,PTR_s_showErrorWithText__11266b770);
  return;
}



/* Entry: 105c4efdc; end: 105c4efdf; -[SCLifestyleAndInterestsViewController getTitle] */

void FUN_105c4efdc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f397d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f397d8,
                      &PTR____CFConstantStringClassReference_110f391d8,0);
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



/* Entry: 105c4efe0; end: 105c4efef; -[SCLifestyleAndInterestsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4efe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732c3c),PTR_s_didSelectLeftButton_1125bc478);
  return;
}



/* Entry: 105c4eff0; end: 105c4f037; -[SCLifestyleAndInterestsViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c4eff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732c48);
  func_0x00010c156b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c4f038; end: 105c4f0bf; -[SCLifestyleAndInterestsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c4f038(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732c48);
  func_0x00010c156b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105c4f0c0; end: 105c4f0cf; -[SCLifestyleAndInterestsViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105c4f0c0(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105c4f0d0; end: 105c4f0db; -[SCLifestyleAndInterestsViewController tableView:estimatedHeightForRowAtIndexPath:] */

undefined8 FUN_105c4f0d0(void)

{
  return 0x4046000000000000;
}



/* Entry: 105c4f0dc; end: 105c4f1fb; -[SCLifestyleAndInterestsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4f0dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + _DAT_112732c48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_4);
  lVar1 = lVar6;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_4);
  lVar3 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf47dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105c4f1fc; end: 105c4f2ab; -[SCLifestyleAndInterestsViewController tableView:heightForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c4f1fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + _DAT_112732c48);
  _objc_retain(param_4);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe0260();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  return param_1;
}



/* Entry: 105c4f2ac; end: 105c4f363; -[SCLifestyleAndInterestsViewController tableView:heightForFooterInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105c4f2ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + _DAT_112732c48);
  _objc_retain(param_4);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb4560();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  return param_1 + 16.0;
}



/* Entry: 105c4f364; end: 105c4f41b; -[SCLifestyleAndInterestsViewController tableView:viewForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4f364(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112732c48);
  _objc_retain(param_3);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c4f41c; end: 105c4f4d3; -[SCLifestyleAndInterestsViewController tableView:viewForFooterInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4f41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112732c48);
  _objc_retain(param_3);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb4520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c4f4d4; end: 105c4f52f; -[SCLifestyleAndInterestsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4f4d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  func_0x00010bf7ae60(*(undefined8 *)(param_1 + _DAT_112732c3c),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c4f530; end: 105c4f54b; -[SCLifestyleAndInterestsViewController layoutAccessoryTableViewCell:frameForAccessoryView:] */

undefined8
FUN_105c4f530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_x3;
  undefined8 uVar1;
  
  func_0x00010bfb68e0(in_x3);
  uVar1 = param_1;
  _CGRectGetMinX();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* Entry: 105c4f54c; end: 105c4f553; -[SCLifestyleAndInterestsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105c4f54c(void)

{
  return 1;
}



/* Entry: 105c4f554; end: 105c4f5f7; -[SCLifestyleAndInterestsViewController _setUpNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4f554(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c4f5f8; end: 105c4f657; -[SCLifestyleAndInterestsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4f5f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732c48,0);
  _objc_storeStrong(param_1 + _DAT_112732c3c,0);
  _objc_storeStrong(param_1 + _DAT_112732c44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732c40,0);
  return;
}



/* Entry: 105c4f658; end: 105c4f83b; -[SCLifestyleCategoriesFeatureManager initWithUserTrackedLogger:requestManager:metricsManager:circumstanceEngine:applicationPreferences:snapTokenProvider:] */

undefined8
FUN_105c4f658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c4f83c;
  puStack_90 = &UNK_1108e01a8;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f333a2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar2,param_2,puVar3,0x15,0,0x17);
  _objc_release(puVar3);
  func_0x00010c05f0e0(param_1,param_2,param_3,puVar1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105c4f83c; end: 105c4f873;  */

void FUN_105c4f83c(void)

{
  _objc_alloc(PTR_PTR_1126c3608);
  func_0x00010c03f3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c4f874; end: 105c4f97b; -[SCLifestyleCategoriesFeatureManager initWithUserTrackedLogger:adSettingsService:queuePerformer:] */

undefined1 *
FUN_105c4f874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126ec840;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c4f97c; end: 105c4fa9b; -[SCLifestyleCategoriesFeatureManager fetchLifestyleCategoriesWithSuccessBlock:failureBlock:] */

void FUN_105c4f97c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfa8000(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c4fa9c; end: 105c4fb27;  */

void FUN_105c4fa9c(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
      }
    }
    else {
      func_0x00010bed6780(lVar1);
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2,param_3);
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c4fb28; end: 105c4fc7f; -[SCLifestyleCategoriesFeatureManager updateLifestyleCategoriesWithFailureBlock:] */

void FUN_105c4fb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00();
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bed6780(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    _objc_retain(param_3);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105c4fc80; end: 105c4fdbf;  */

void FUN_105c4fc80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c287440(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c4fdc0; end: 105c4fe23;  */

void FUN_105c4fdc0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((param_2 & 1) == 0) && (lVar1 != 0)) {
    func_0x00010bed6780(lVar1);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c4fe24; end: 105c4fedb; -[SCLifestyleCategoriesFeatureManager updateUserInterestLocally:] */

void FUN_105c4fe24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bef0860();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)lVar2 == (int)uVar4) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28),param_2,lVar1);
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,param_3,lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c4fedc; end: 105c500cb; -[SCLifestyleCategoriesFeatureManager logLifestyleCategoriesPageViewEvent:] */

void FUN_105c4fedc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = *(long *)(param_2 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  iVar10 = (int)auStack_f8;
  lVar9 = lVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar3);
      }
      uVar12 = *(undefined8 *)(lVar14 * 8);
      uVar13 = uVar12;
      func_0x00010bef0860();
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      if ((int)uVar13 == 0) {
        puVar4 = puVar2;
      }
      func_0x00010befa120(puVar4);
      _objc_release(uVar12);
      lVar14 = lVar14 + 1;
    } while (lVar9 != lVar14);
    iVar10 = (int)auStack_f8;
    lVar9 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c246be0(puVar1);
  func_0x00010c246be0(puVar2);
  puVar4 = puVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_2 + 8);
  FUN_105c502c8(param_1,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  lVar6 = lVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar9);
      }
      lVar11 = *(long *)(lVar15 * 8);
      lVar7 = lVar11;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar8 != 0) {
        func_0x00010bef0860(lVar11);
        if (iVar10 == 0) {
          func_0x00010c0df6e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0df760(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        uVar13 = *(undefined8 *)(puVar1 + 0x20);
        func_0x00010bfe5ea0(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar13);
        _objc_release(lVar11);
        _objc_release(puVar2);
      }
      lVar15 = lVar15 + 1;
    } while (lVar6 != lVar15);
    lVar6 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar9 + 0x28,0);
  _objc_storeStrong(lVar9 + 0x20,0);
  _objc_storeStrong(lVar9 + 0x18,0);
  _objc_storeStrong(lVar9 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar9 + 8,0);
  return;
}



/* Entry: 105c500cc; end: 105c50273; -[SCLifestyleCategoriesFeatureManager _updateCurrentSelections:shouldRevertValue:] */

void FUN_105c500cc(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar9 * 8);
      lVar3 = lVar7;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar4 != 0) {
        func_0x00010bef0860(lVar7);
        if (param_4 == 0) {
          func_0x00010c0df6e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0df760(puVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfe5ea0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(lVar7);
        _objc_release(puVar5);
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105c50274; end: 105c502c7; -[SCLifestyleCategoriesFeatureManager .cxx_destruct] */

void FUN_105c50274(long param_1)

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



/* Entry: 105c502c8; end: 105c503a3;  */

void FUN_105c502c8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3610;
  _objc_opt_new(PTR_PTR_1126c3610);
  func_0x00010c222d20(param_1);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c203200(puVar1);
  }
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c203220(puVar1);
  }
  uVar3 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c503a4; end: 105c503eb;  */

void FUN_105c503a4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e23bf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e23bf8,
                      &PTR____CFConstantStringClassReference_110e23c18,0);
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



/* Entry: 105c503ec; end: 105c50537; -[SCAdPreferencesViewController initWithFeatureManager:featureSettingsService:adConfigProvider:timeProvider:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c503ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126ec848;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112732c60;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732c64;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732c68;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732c6c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112732c70),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c50538; end: 105c50a97; -[SCAdPreferencesViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50538(long param_1)

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
  undefined8 uVar10;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126ec848;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1974c0(0x404e000000000000);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_b8 = lVar2;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_c8 = lVar2;
  lStack_90 = lVar2;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_e0 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_f8 = lVar3;
  lStack_88 = lVar3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  lStack_80 = lVar5;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f0);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_e8);
  _objc_release(lStack_d8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(lStack_b8);
  lVar3 = lStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_105c50a98;
  puStack_138 = PTR_PTR_1126ec848;
  lStack_140 = lVar3;
  lStack_130 = lVar2;
  puStack_128 = puVar1;
  lStack_120 = lVar9;
  lStack_118 = param_1;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_140,PTR_s_viewDidLoad_112684cd8);
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
  uVar10 = *(undefined8 *)(lVar3 + _DAT_112732c60);
  func_0x00010c13e1c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed2a40(lVar3);
  _objc_release(uVar10);
  return;
}



/* Entry: 105c50a98; end: 105c50b8b; -[SCAdPreferencesViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50a98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec848;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
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
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732c60);
  func_0x00010c13e1c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed2a40(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105c50b8c; end: 105c50bd3; -[SCAdPreferencesViewController viewWillAppear:] */

void FUN_105c50b8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c139c80(param_1);
  return;
}



/* Entry: 105c50bd4; end: 105c50bf3; -[SCAdPreferencesViewController viewWillResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c289cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732c60),
             PTR_s_updateServerAdPreferencesIfNeces_112680150,
             *(undefined8 *)(param_1 + _DAT_112732c74));
  return;
}



/* Entry: 105c50bf4; end: 105c50c4f; -[SCAdPreferencesViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50bf4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c289ca0(*(undefined8 *)(param_1 + _DAT_112732c60));
  return;
}



/* Entry: 105c50c50; end: 105c50c7f; -[SCAdPreferencesViewController resetView] */

void FUN_105c50c50(undefined8 param_1)

{
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c50c80; end: 105c50cdf; -[SCAdPreferencesViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50c80(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112732c70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bef3f40();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126ec848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c50ce0; end: 105c50ceb; -[SCAdPreferencesViewController supportedInterfaceOrientations] */

undefined8 FUN_105c50ce0(void)

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



/* Entry: 105c50cec; end: 105c50cef; -[SCAdPreferencesViewController getTitle] */

void FUN_105c50cec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f39558;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f39558,
                      &PTR____CFConstantStringClassReference_110f391d8,0);
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



/* Entry: 105c50cf0; end: 105c50d23; -[SCAdPreferencesViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50cf0(long param_1)

{
  param_1 = param_1 + _DAT_112732c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef3f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c50d24; end: 105c50d2b; -[SCAdPreferencesViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c50d24(void)

{
  return 1;
}



/* Entry: 105c50d2c; end: 105c50d3b; -[SCAdPreferencesViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732c78),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105c50d3c; end: 105c50d4b; -[SCAdPreferencesViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105c50d3c(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105c50d4c; end: 105c50ecf; -[SCAdPreferencesViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c50d4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010c1554e0();
  if (lVar5 != 0) {
    lVar5 = 0;
    goto LAB_105c50eb4;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_112732c78);
  lVar5 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar6,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c067ec0();
  _objc_release(uVar6);
  lVar5 = 0;
  iVar7 = (int)uVar1;
  if (iVar7 < 3) {
    if (iVar7 == 1) {
      lVar5 = param_1;
      func_0x00010bf0ecc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112732c74);
      func_0x00010bf0ece0(uVar1);
      uVar4 = (uint)uVar1;
    }
    else {
      if (iVar7 != 2) goto LAB_105c50eb4;
      lVar5 = param_1;
      func_0x00010bef13e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112732c74);
      func_0x00010bf9de60(uVar1);
      uVar4 = (uint)uVar1;
    }
LAB_105c50ea8:
    uVar4 = uVar4 ^ 1;
  }
  else {
    if (iVar7 == 3) {
      lVar5 = param_1;
      func_0x00010c26d240(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112732c74);
      func_0x00010c26d200(uVar1);
      uVar4 = (uint)uVar1;
      goto LAB_105c50ea8;
    }
    if (iVar7 != 4) goto LAB_105c50eb4;
    lVar5 = param_1;
    func_0x00010c24aa80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + _DAT_112732c64);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c24a860();
    _objc_release(lVar2);
    uVar4 = (uint)(lVar3 != 1);
  }
  func_0x00010c210a80(lVar5,param_2,uVar4);
LAB_105c50eb4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105c50ed0; end: 105c50edf; -[SCAdPreferencesViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_105c50ed0(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105c50ee0; end: 105c51437; -[SCAdPreferencesViewController tableView:viewForHeaderInSection:] */

void FUN_105c50ee0(void)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c193a00(puVar2);
  func_0x00010c1f7b20(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar2);
  puVar3 = puVar2;
  func_0x00010c26ba00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(0);
  _objc_release(puVar3);
  func_0x00010c18b5e0(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bde80(puVar2);
  _objc_release(puVar3);
  _objc_release();
  func_0x00010af46e24();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010af46e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  func_0x00010c08fa60(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_alloc_init();
  func_0x00010c166c00();
  func_0x00010bef6f20(puVar5);
  puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(puVar5);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(puVar5);
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010c11f420();
  if (puVar7 != (undefined *)0x7fffffffffffffff) {
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6f20(puVar5);
    _objc_release(puVar7);
  }
  func_0x00010c16b720(puVar2);
  func_0x00010befbb60(puVar1);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = 4;
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010beef8c0(puVar7);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar21,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,uVar22,1);
  return;
}



/* Entry: 105c51438; end: 105c51447; -[SCAdPreferencesViewController tableView:didSelectRowAtIndexPath:] */

void FUN_105c51438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,param_4,1);
  return;
}



/* Entry: 105c51448; end: 105c5154f; -[SCAdPreferencesViewController audienceBasedCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c51448(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112732c7c;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c17a3a0(uVar4,param_2,param_1);
    func_0x00010af46e84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar6),param_2,uVar4);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110e23c98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    puVar2 = puVar1;
    func_0x00010af46e9c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010af470ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9040(uVar4,param_2,puVar2,puVar3,puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105c51550; end: 105c51657; -[SCAdPreferencesViewController activityBasedCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c51550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112732c80;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c17a3a0(uVar4,param_2,param_1);
    func_0x00010af46ecc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar6),param_2,uVar4);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110e23c98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    puVar2 = puVar1;
    func_0x00010af46ee4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010af470ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9040(uVar4,param_2,puVar2,puVar3,puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105c51658; end: 105c5175f; -[SCAdPreferencesViewController thirdPartyBasedCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c51658(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112732c84;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c17a3a0(uVar4,param_2,param_1);
    func_0x00010af46f14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar6),param_2,uVar4);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110e23c98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    puVar2 = puVar1;
    func_0x00010af46f2c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010af470ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9040(uVar4,param_2,puVar2,puVar3,puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105c51760; end: 105c51813; -[SCAdPreferencesViewController sponsoredSnapsEUBannerAdsCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c51760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112732c88;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c17a3a0(uVar2,param_2,param_1);
    func_0x00010af46f5c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010af46f74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c51814; end: 105c51ac7; -[SCAdPreferencesViewController _presentMatchDisableAlert:title:adPreferencesTag:] */

void FUN_105c51814(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x00010af46e6c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_90;
  _objc_copyWeak(auStack_a0,puVar8);
  uStack_98 = param_5;
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x00010af46e54();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x00010af46e3c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar8);
  lVar7 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    func_0x00010bf84b00(puVar8);
    lVar9 = *(long *)(param_3 + 0x30);
    if (lVar9 == 3) {
      func_0x00010bed0760(lVar7);
    }
    else if (lVar9 == 2) {
      func_0x00010bed06c0(lVar7);
    }
    else if (lVar9 == 1) {
      func_0x00010bed06a0(lVar7);
    }
    func_0x00010c210aa0(*(undefined8 *)(param_3 + 0x20));
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105c51ac8; end: 105c51b6f;  */

void FUN_105c51ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf84b00(param_2);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 3) {
      func_0x00010bed0760(lVar1);
    }
    else if (lVar2 == 2) {
      func_0x00010bed06c0(lVar1);
    }
    else if (lVar2 == 1) {
      func_0x00010bed06a0(lVar1);
    }
    func_0x00010c210aa0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c51b70; end: 105c51bbb;  */

void FUN_105c51b70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c210aa0(uVar1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c51bbc; end: 105c51bc3; -[SCAdPreferencesViewController settingsSwitchTableViewCell:didTapURL:] */

void FUN_105c51bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentWebViewWithUrl__112621600,param_4);
  return;
}



/* Entry: 105c51bc4; end: 105c51c43; -[SCAdPreferencesViewController presentWebViewWithUrl:] */

void FUN_105c51bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd5b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c51c44; end: 105c51c5f; -[SCAdPreferencesViewController textView:shouldInteractWithURL:inRange:interaction:] */

undefined8
FUN_105c51c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c10ef80(param_1,param_2,param_4);
  return 0;
}



/* Entry: 105c51c60; end: 105c51dd3; -[SCAdPreferencesViewController settingsSwitchTableViewCell:didToggleSwitch:] */

void FUN_105c51c60(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf0ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (param_3 == lVar1) {
    if (param_4 != 0) {
      func_0x00010bed0780(param_1);
      goto LAB_105c51db8;
    }
    func_0x00010af46eb4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010bef13e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    if (param_3 == lVar1) {
      if (param_4 != 0) {
        func_0x00010bed07a0(param_1);
        goto LAB_105c51db8;
      }
      func_0x00010af46efc();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 2;
    }
    else {
      lVar1 = param_1;
      func_0x00010c26d240();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      _objc_release();
      if (param_3 != lVar1) {
        lVar1 = param_1;
        func_0x00010c24aa80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (param_3 == lVar1) {
          if (param_4 == 0) {
            func_0x00010bed0720(param_1);
          }
          else {
            func_0x00010bed07e0();
          }
        }
        goto LAB_105c51db8;
      }
      if (param_4 != 0) {
        func_0x00010bed0800(param_1);
        goto LAB_105c51db8;
      }
      func_0x00010af46f44();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 3;
    }
  }
  func_0x00010be7c5e0(param_1,param_2,param_3,lVar2,uVar3);
  _objc_release(lVar2);
LAB_105c51db8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c51dd4; end: 105c51ddb; -[SCAdPreferencesViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105c51dd4(void)

{
  return 1;
}



/* Entry: 105c51ddc; end: 105c51ec3; -[SCAdPreferencesViewController _updateAdPreferenceWithFetchedResult:] */

void FUN_105c51ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_48 = 0x105c51e90;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c51ec4; end: 105c51f8f; -[SCAdPreferencesViewController _updateLocalAdPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c51ec4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar4 = (long)_DAT_112732c74;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117f468;
    func_0x00010c0d3c80();
    lVar4 = (long)_DAT_112732c78;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined ***)(param_1 + lVar4) = ppuVar2;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732c68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar4),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3580);
    }
    func_0x00010c139c80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c51f90; end: 105c52017; -[SCAdPreferencesViewController _turnOnAudienceMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c51f90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3618;
  _objc_alloc();
  lVar5 = (long)_DAT_112732c74;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf9de60(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c26d200(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbbae0(uVar4);
  func_0x00010bff5140(puVar1,param_2,0,uVar2,uVar3,uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c52018; end: 105c5209f; -[SCAdPreferencesViewController _turnOffAudienceMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c52018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3618;
  _objc_alloc();
  lVar5 = (long)_DAT_112732c74;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf9de60(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c26d200(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbbae0(uVar4);
  func_0x00010bff5140(puVar1,param_2,1,uVar2,uVar3,uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c520a0; end: 105c52127; -[SCAdPreferencesViewController _turnOnExternalActivityMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c520a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3618;
  _objc_alloc();
  lVar5 = (long)_DAT_112732c74;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf0ece0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c26d200(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbbae0(uVar4);
  func_0x00010bff5140(puVar1,param_2,uVar2,0,uVar3,uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c52128; end: 105c521af; -[SCAdPreferencesViewController _turnOffExternalActivityMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c52128(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3618;
  _objc_alloc();
  lVar5 = (long)_DAT_112732c74;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf0ece0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c26d200(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbbae0(uVar4);
  func_0x00010bff5140(puVar1,param_2,uVar2,1,uVar3,uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c521b0; end: 105c52237; -[SCAdPreferencesViewController _turnOnThirdPartyAdNetwork] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c521b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3618;
  _objc_alloc();
  lVar5 = (long)_DAT_112732c74;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf0ece0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf9de60(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbbae0(uVar4);
  func_0x00010bff5140(puVar1,param_2,uVar2,uVar3,0,uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c52238; end: 105c522bf; -[SCAdPreferencesViewController _turnOffThirdPartyAdNetwork] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c52238(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3618;
  _objc_alloc();
  lVar5 = (long)_DAT_112732c74;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf0ece0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf9de60(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbbae0(uVar4);
  func_0x00010bff5140(puVar1,param_2,uVar2,uVar3,1,uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c522c0; end: 105c52353; -[SCAdPreferencesViewController _turnOnSponsoredSnapsEUBannerAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c522c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112732c64;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2082a0();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beec800(*(undefined8 *)(param_1 + _DAT_112732c6c));
  func_0x00010c155420(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c52354; end: 105c52393; -[SCAdPreferencesViewController _turnOffSponsoredSnapsEUBannerAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c52354(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732c64);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2082a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c52394; end: 105c523a3; -[SCAdPreferencesViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c52394(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112732c8c);
}



/* Entry: 105c523a4; end: 105c523e3; -[SCAdPreferencesViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c523a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112732c8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c523e4; end: 105c524bf; -[SCAdPreferencesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c523e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732c8c,0);
  _objc_destroyWeak(param_1 + _DAT_112732c70);
  _objc_storeStrong(param_1 + _DAT_112732c78,0);
  _objc_storeStrong(param_1 + _DAT_112732c74,0);
  _objc_storeStrong(param_1 + _DAT_112732c88,0);
  _objc_storeStrong(param_1 + _DAT_112732c84,0);
  _objc_storeStrong(param_1 + _DAT_112732c80,0);
  _objc_storeStrong(param_1 + _DAT_112732c7c,0);
  _objc_storeStrong(param_1 + _DAT_112732c6c,0);
  _objc_storeStrong(param_1 + _DAT_112732c68,0);
  _objc_storeStrong(param_1 + _DAT_112732c64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732c60,0);
  return;
}



/* Entry: 105c524c0; end: 105c526ff; -[SCAdSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c524c0(long param_1)

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
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126c3628;
  _objc_alloc(PTR_PTR_1126c3628);
  lVar2 = param_1 + _DAT_112732c90;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112732c94;
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112732c98;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112732c9c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d980(puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126c3630;
  _objc_alloc(PTR_PTR_1126c3630);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar4 = lVar12;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112732ca0;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c011b20(puVar10);
  _objc_release(puVar11);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar12);
  lVar2 = param_1 + _DAT_112732ca4;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_storeWeak(param_1 + _DAT_112732ca8,puVar10);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c52700; end: 105c527a7; -[SCAdSettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c52700(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112732ca8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_112732ca4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126ec850;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c527a8; end: 105c527f7; -[SCAdSettingsEntryPoint adPreferencesViewControllerDidTapDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c527a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112732ca4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c527f8; end: 105c5286b; -[SCAdSettingsEntryPoint adPreferencesViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c527f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112732ca4;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef4f00(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c5286c; end: 105c528eb; -[SCAdSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5286c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732c98);
  _objc_destroyWeak(param_1 + _DAT_112732cac);
  _objc_destroyWeak(param_1 + _DAT_112732c9c);
  _objc_destroyWeak(param_1 + _DAT_112732c94);
  _objc_destroyWeak(param_1 + _DAT_112732c90);
  _objc_destroyWeak(param_1 + _DAT_112732ca0);
  _objc_destroyWeak(param_1 + _DAT_112732ca4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732ca8);
  return;
}



/* Entry: 105c528ec; end: 105c52e23;  */

void FUN_105c528ec(undefined8 param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126c3638;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 == 0) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010befe060();
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c3640;
    _objc_alloc_init(PTR_PTR_1126c3640);
    puVar3 = param_2;
    func_0x00010c149400(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar4 = puVar3;
    func_0x00010b704680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5260(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010bfa9d00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c3638;
    puVar2 = param_2;
    func_0x00010c149400(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bfab2c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
  }
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b4960;
  uVar5 = param_1;
  func_0x000105e85488(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010beec820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c52e24; end: 105c52f87; -[SCAdLifestyleTopicsServiceImpl initWithRequestManager:snapTokenProvider:userAdIdProvider:adConfigProvider:] */

undefined1 *
FUN_105c52e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126ec858;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c52f88; end: 105c53073; -[SCAdLifestyleTopicsServiceImpl fetchAdTopicsWithCompletion:] */

void FUN_105c52f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_1;
  func_0x00010bee6920();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = (undefined1)uVar1;
  func_0x00010be14080(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105c53074; end: 105c53103;  */

void FUN_105c53074(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be0f240();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c53104; end: 105c5321f; -[SCAdLifestyleTopicsServiceImpl updateAdTopics:withCompletion:] */

void FUN_105c53104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_1;
  func_0x00010bee6920();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = (undefined1)uVar1;
  func_0x00010be14080(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c53220; end: 105c532af;  */

void FUN_105c53220(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed2b40();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c532b0; end: 105c532f7; -[SCAdLifestyleTopicsServiceImpl _useSwiftHelpers] */

undefined8 FUN_105c532b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c532f8; end: 105c533ef; -[SCAdLifestyleTopicsServiceImpl _fetchAdTopicsWithAccessToken:useSwiftHelpers:completion:] */

void FUN_105c532f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_105c528ec(param_3,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_retain(param_5);
  func_0x00010be5c0a0(param_1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c533f0; end: 105c53467;  */

void FUN_105c533f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    if (lVar1 == 0) goto LAB_105c5344c;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
    uVar3 = param_2;
  }
  else {
    if (lVar1 == 0) goto LAB_105c5344c;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
  }
  (*pcVar4)(lVar1,uVar2,uVar3);
LAB_105c5344c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c53468; end: 105c5357f; -[SCAdLifestyleTopicsServiceImpl _updateAdTopics:withAccessToken:useSwiftHelpers:withCompletion:] */

void FUN_105c53468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000105c52af4(param_3,param_4,uVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_retain(param_6);
  func_0x00010be5c0a0(param_1);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c53580; end: 105c535f7;  */

void FUN_105c53580(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    if (lVar1 == 0) goto LAB_105c535dc;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
    uVar3 = param_2;
  }
  else {
    if (lVar1 == 0) goto LAB_105c535dc;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
  }
  (*pcVar4)(lVar1,uVar2,uVar3);
LAB_105c535dc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c535f8; end: 105c53727; -[SCAdLifestyleTopicsServiceImpl _fetchSnapTokenWithCompletion:] */

void FUN_105c535f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105c53728;
  puStack_60 = &UNK_110848438;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105c53740;
  puStack_88 = &UNK_110859a38;
  uStack_80 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010bfa48e0(uVar2,param_2,6,uVar3,uVar4,&puStack_78,&puStack_a0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105c53728; end: 105c5375b;  */

void FUN_105c53728(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c53738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 105c5375c; end: 105c53883; -[SCAdLifestyleTopicsServiceImpl _makeRequest:useSwiftHelpers:withCompletion:] */

void FUN_105c5375c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105c53884;
  puStack_68 = &UNK_1108e02f8;
  uStack_58 = param_4;
  _objc_retain(param_5);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c5394c;
  puStack_90 = &UNK_1108a0d30;
  uStack_88 = param_5;
  uStack_60 = param_5;
  _objc_retain(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f660(uVar2,param_2,param_3,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,&puStack_80,&puStack_a8);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_60);
  _objc_release(param_5);
  return;
}



/* Entry: 105c53884; end: 105c5394b;  */

void FUN_105c53884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar2 = PTR_PTR_1126c3650;
  func_0x00010c0f40e0(PTR_PTR_1126c3650,param_2,param_4,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar3 = PTR_PTR_1126c3638;
    func_0x00010bef3460(PTR_PTR_1126c3638);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar2;
    func_0x000105c52da0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3,uVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c5394c; end: 105c53967;  */

void FUN_105c5394c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c53960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_4);
    return;
  }
  return;
}


