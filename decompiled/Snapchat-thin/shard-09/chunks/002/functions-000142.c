/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106aa97d0; end: 106aa97d3; -[SCShakeToReportSettingsViewController getTitle] */

void FUN_106aa97d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6b5b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e6b5b8,
                      &PTR____CFConstantStringClassReference_110e6b458,0);
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



/* Entry: 106aa97d4; end: 106aa97f7; -[SCShakeToReportSettingsViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106aa97d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127573cc);
  func_0x00010bf529e0(lVar1);
  return lVar1 + -1;
}



/* Entry: 106aa97f8; end: 106aa9883; -[SCShakeToReportSettingsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106aa97f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127573cc;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0dfd40(lVar1,param_2,param_4 + 1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c0dfd40(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  return lVar2 - lVar4;
}



/* Entry: 106aa9884; end: 106aa98af; -[SCShakeToReportSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_106aa9884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beca5a0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be6e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__optionsCellForSettingTag__112579238,uVar1);
  return;
}



/* Entry: 106aa98b0; end: 106aa98db; -[SCShakeToReportSettingsViewController tableView:estimatedHeightForRowAtIndexPath:] */

void FUN_106aa98b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beca5a0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be0b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__estimatedHeightForSettingTag__1125606a0,uVar1);
  return;
}



/* Entry: 106aa98dc; end: 106aa99d3; -[SCShakeToReportSettingsViewController tableView:heightForRowAtIndexPath:] */

double FUN_106aa98dc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010c267f20(param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d140();
  func_0x00010beca5a0(param_2,param_3,param_5);
  _objc_release(param_5);
  lVar2 = lVar1;
  func_0x00010c26c280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26c280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c26c660(lVar2,param_3,0);
  _CGRectGetHeight();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (param_2 == 1) {
    param_1 = param_1 + 24.0;
  }
  else {
    param_1 = 0.0;
    if (param_2 == 0) {
      param_1 = *(double *)PTR__UITableViewAutomaticDimension_110345db8;
    }
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 106aa99d4; end: 106aa99e3; -[SCShakeToReportSettingsViewController tableView:heightForHeaderInSection:] */

void FUN_106aa99d4(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfe0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0710,PTR_s_heightForTableHeaderInSection__1125d5bc8,in_x3);
  return;
}



/* Entry: 106aa99e4; end: 106aa9a7b; -[SCShakeToReportSettingsViewController tableView:viewForHeaderInSection:] */

void FUN_106aa99e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  if (param_4 == 1) {
    func_0x000106ac1154();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 0) {
    func_0x000106ac1124();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR_PTR_1126b0710;
  func_0x00010c29cf80(PTR_PTR_1126b0710,param_2,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aa9a7c; end: 106aa9bbb; -[SCShakeToReportSettingsViewController tableView:didSelectRowAtIndexPath:] */

void FUN_106aa9a7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010beca5a0();
  if (lVar1 == 1) {
    puVar2 = PTR_PTR_1126afb78;
    _objc_alloc(PTR_PTR_1126afb78);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e69f78;
    func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e69f78,
                        &PTR____CFConstantStringClassReference_110e69f98,
                        &PTR____CFConstantStringClassReference_110de3bf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057840(puVar2);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    func_0x000106ac116c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar2);
    _objc_release(ppuVar3);
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  func_0x00010bf6e880(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aa9bbc; end: 106aa9c3b; -[SCShakeToReportSettingsViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_106aa9bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106aa9c3c; end: 106aa9d6f; -[SCShakeToReportSettingsViewController _resetView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa9c3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127573d0;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_1127573cc;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127573d8),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 106aa9d70; end: 106aa9fc3; -[SCShakeToReportSettingsViewController settingsSwitchTableViewCell:didToggleSwitch:] */

void FUN_106aa9d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    puVar1 = PTR_PTR_1126d0160;
    func_0x00010c22b6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfc25e0();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x1) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126af180;
      puVar3 = puVar1;
      func_0x000106ac119c();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106aa9fc4;
      puStack_78 = &UNK_110866038;
      uStack_70 = param_1;
      _objc_retain(param_3);
      uStack_68 = param_3;
      func_0x00010beef320(puVar4,param_2,puVar3,1,&puStack_90);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar5 = puVar1;
      func_0x00010befa120(puVar1,param_2,puVar4);
      puVar3 = PTR_PTR_1126af180;
      func_0x000106ac10dc();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar2;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x106aa9fd4;
      puStack_a8 = &UNK_110866038;
      uStack_a0 = param_1;
      _objc_retain(param_3);
      uStack_98 = param_3;
      func_0x00010beef320(puVar3,param_2,puVar5,4,&puStack_c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010befa120(puVar1,param_2,puVar3);
      puVar2 = PTR_PTR_1126af178;
      func_0x00010c22b900(PTR_PTR_1126af178);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x000106ac119c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x000106ac1184();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235c40(puVar2,param_2,puVar5,puVar6,puVar1,0,0);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(uStack_98);
      _objc_release(puVar4);
      _objc_release(uStack_68);
      goto LAB_106aa9f98;
    }
  }
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0(PTR_PTR_1126d0160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe980();
LAB_106aa9f98:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106aa9fc4; end: 106aa9fe3;  */

void FUN_106aa9fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetEnabledStatus_isEnabled__112582458,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 106aa9fe4; end: 106aaa02f; -[SCShakeToReportSettingsViewController _resetEnabledStatus:isEnabled:] */

void FUN_106aa9fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x00010c210a80(param_3,param_2,param_4);
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0(PTR_PTR_1126d0160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106aaa030; end: 106aaa0eb; -[SCShakeToReportSettingsViewController _tagForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106aaa030(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c142240(param_3);
  lVar2 = param_3;
  func_0x00010c1554e0(param_3);
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + _DAT_1127573cc);
  func_0x00010c0dfd40(lVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127573d0);
  func_0x00010c0dfd40(uVar4,param_2,lVar2 + lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067fc0();
  _objc_release(uVar4);
  return uVar5;
}



/* Entry: 106aaa0ec; end: 106aaa103; -[SCShakeToReportSettingsViewController _estimatedHeightForSettingTag:] */

undefined8 FUN_106aaa0ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 != 2) {
    uVar1 = 0x4046000000000000;
  }
  return uVar1;
}



/* Entry: 106aaa104; end: 106aaa143; -[SCShakeToReportSettingsViewController _optionsCellForSettingTag:] */

void FUN_106aaa104(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010be36440();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010bf917a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aaa144; end: 106aaa24b; -[SCShakeToReportSettingsViewController _howToShakeCell] */

void FUN_106aaa144(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be5b600(param_1,param_2,&PTR____CFConstantStringClassReference_110e22578);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c138500();
  func_0x000106ac116c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar1);
  func_0x000106ac116c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106aaa24c; end: 106aaa2fb; -[SCShakeToReportSettingsViewController enableS2RCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaa24c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127573dc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c17a3a0(uVar2,param_2,param_1);
    func_0x000106ac113c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c1e2aa0(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e69fb8);
    func_0x00010c210a20(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e69fd8);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106aaa2fc; end: 106aaa3e3; -[SCShakeToReportSettingsViewController _makeCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaa2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + _DAT_1127573d8);
  func_0x00010bf6e060(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b0708;
    _objc_alloc(PTR_PTR_1126b0708);
    func_0x00010c040040();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fef5f5f5f5f5f5f,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1faee0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aaa3e4; end: 106aaa403; -[SCShakeToReportSettingsViewController shakeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaa3e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127573d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aaa404; end: 106aaa417; -[SCShakeToReportSettingsViewController setShakeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaa404(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127573d4,param_3);
  return;
}



/* Entry: 106aaa418; end: 106aaa483; -[SCShakeToReportSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaa418(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127573d4);
  _objc_storeStrong(param_1 + _DAT_1127573dc,0);
  _objc_storeStrong(param_1 + _DAT_1127573cc,0);
  _objc_storeStrong(param_1 + _DAT_1127573d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127573d8,0);
  return;
}



/* Entry: 106aaa484; end: 106aaa4d7; +[SCShakeFeatureNameUtils discoverFeatureNames] */

void FUN_106aaa484(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c48c8 != -1) {
    func_0x00010002a2fc(0x1136c48c8,&PTR___NSConcreteGlobalBlock_11095b160);
  }
  uVar1 = uRam00000001136c48c0;
  _objc_retain(uRam00000001136c48c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aaa4d8; end: 106aaa967;  */

void FUN_106aaa4d8(void)

{
  undefined8 uVar1;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac1034();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar6 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar8 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac1cac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar10 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar11 = puVar10;
  func_0x000106ac1574();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar12 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar13 = puVar12;
  func_0x000106ac158c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar14 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar15 = puVar14;
  func_0x000106ac15a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar16 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar17 = puVar16;
  func_0x000106ac16c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar18 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar19 = puVar18;
  func_0x000106ac1d84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar20 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar21 = puVar20;
  func_0x000106ac1d9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar22 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar23 = puVar22;
  func_0x000106ac15bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar24 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar25 = puVar24;
  func_0x000106ac1db4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar26 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar27 = puVar26;
  func_0x000106ac17fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar28 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar29 = puVar28;
  func_0x000106ac15d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c48c0;
  puRam00000001136c48c0 = puVar30;
  _objc_release(uVar1);
  _objc_release(puVar28);
  _objc_release(puVar29);
  _objc_release(puVar26);
  _objc_release(puVar27);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c48d8 != -1) {
    func_0x00010002a2fc(0x1136c48d8,&PTR___NSConcreteGlobalBlock_11095b180);
  }
  uVar1 = uRam00000001136c48d0;
  _objc_retain(uRam00000001136c48d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aaa968; end: 106aaa9bb; +[SCShakeFeatureNameUtils friendsFeatureNames] */

void FUN_106aaa968(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c48d8 != -1) {
    func_0x00010002a2fc(0x1136c48d8,&PTR___NSConcreteGlobalBlock_11095b180);
  }
  uVar1 = uRam00000001136c48d0;
  _objc_retain(uRam00000001136c48d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aaa9bc; end: 106aaaf23;  */

void FUN_106aaa9bc(void)

{
  undefined8 uVar1;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  long lVar37;
  
  lVar37 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac15ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar6 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar8 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac1604();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar10 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar11 = puVar10;
  func_0x000106ac161c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar12 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar13 = puVar12;
  func_0x000106ac19c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar14 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar15 = puVar14;
  func_0x000106ac1a84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar16 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar17 = puVar16;
  func_0x000106ac1664();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar18 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar19 = puVar18;
  func_0x000106ac167c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar20 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar21 = puVar20;
  func_0x000106ac1694();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar22 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar23 = puVar22;
  func_0x000106ac164c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar24 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar25 = puVar24;
  func_0x000106ac16ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar26 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar27 = puVar26;
  func_0x000106ac16c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar28 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar29 = puVar28;
  func_0x000106ac16dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar30 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar31 = puVar30;
  func_0x000106ac16f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar32 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar33 = puVar32;
  func_0x000106ac17b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar34 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar35 = puVar34;
  func_0x000106ac1634();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar36 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c48d0;
  puRam00000001136c48d0 = puVar36;
  _objc_release(uVar1);
  _objc_release(puVar34);
  _objc_release(puVar35);
  _objc_release(puVar32);
  _objc_release(puVar33);
  _objc_release(puVar30);
  _objc_release(puVar31);
  _objc_release(puVar28);
  _objc_release(puVar29);
  _objc_release(puVar26);
  _objc_release(puVar27);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar37) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c48e8 != -1) {
    func_0x00010002a2fc(0x1136c48e8,&PTR___NSConcreteGlobalBlock_11095b1a0);
  }
  uVar1 = uRam00000001136c48e0;
  _objc_retain(uRam00000001136c48e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aaaf24; end: 106aaaf77; +[SCShakeFeatureNameUtils memoriesFeatureNames] */

void FUN_106aaaf24(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c48e8 != -1) {
    func_0x00010002a2fc(0x1136c48e8,&PTR___NSConcreteGlobalBlock_11095b1a0);
  }
  uVar1 = uRam00000001136c48e0;
  _objc_retain(uRam00000001136c48e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aaaf78; end: 106aab377;  */

void FUN_106aaaf78(void)

{
  undefined8 uVar1;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar6 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac1b44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar8 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac188c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar10 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar11 = puVar10;
  func_0x000106ac1b5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar12 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar13 = puVar12;
  func_0x000106ac1a54();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar14 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar15 = puVar14;
  func_0x000106ac1844();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar16 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar17 = puVar16;
  func_0x000106ac179c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar18 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar19 = puVar18;
  func_0x000106ac18ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar20 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar21 = puVar20;
  func_0x000106ac185c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar22 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar23 = puVar22;
  func_0x000106ac182c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar24 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar25 = puVar24;
  func_0x000106ac16dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c48e0;
  puRam00000001136c48e0 = puVar26;
  _objc_release(uVar1);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c48f8 != -1) {
    func_0x00010002a2fc(0x1136c48f8,&PTR___NSConcreteGlobalBlock_11095b1c0);
  }
  uVar1 = uRam00000001136c48f0;
  _objc_retain(uRam00000001136c48f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aab378; end: 106aab3cb; +[SCShakeFeatureNameUtils cameraFeatureNames] */

void FUN_106aab378(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c48f8 != -1) {
    func_0x00010002a2fc(0x1136c48f8,&PTR___NSConcreteGlobalBlock_11095b1c0);
  }
  uVar1 = uRam00000001136c48f0;
  _objc_retain(uRam00000001136c48f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aab3cc; end: 106aab85b;  */

void FUN_106aab3cc(void)

{
  undefined8 uVar1;
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
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar4;
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  puStack_f0 = puVar3;
  puStack_e0 = puVar3;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x000106ac1c64();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar3;
  func_0x00010bffc460();
  puVar3 = PTR_PTR_1126b69b0;
  puStack_100 = puVar4;
  puStack_d8 = puVar4;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar4;
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  puStack_110 = puVar3;
  puStack_d0 = puVar3;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x000106ac1a6c();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar3;
  func_0x00010bffc460();
  puVar3 = PTR_PTR_1126b69b0;
  puStack_120 = puVar4;
  puStack_c8 = puVar4;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac1c7c();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar4;
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  puStack_130 = puVar3;
  puStack_c0 = puVar3;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x000106ac188c();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar3;
  func_0x00010bffc460();
  puVar3 = PTR_PTR_1126b69b0;
  puStack_140 = puVar4;
  puStack_b8 = puVar4;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac18a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar4;
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  puStack_150 = puVar3;
  puStack_b0 = puVar3;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x000106ac18bc();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar3;
  func_0x00010bffc460();
  puVar3 = PTR_PTR_1126b69b0;
  puStack_160 = puVar4;
  puStack_a8 = puVar4;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac1c94();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar4;
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  puStack_170 = puVar3;
  puStack_a0 = puVar3;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x000106ac18d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar5 = PTR_PTR_1126b69b0;
  puStack_98 = puVar4;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac16c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar7 = PTR_PTR_1126b69b0;
  puStack_90 = puVar5;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000106ac16dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar9 = PTR_PTR_1126b69b0;
  puStack_88 = puVar7;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x000106ac1904();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar11 = PTR_PTR_1126b69b0;
  puStack_80 = puVar9;
  _objc_alloc();
  puVar12 = puVar11;
  func_0x000106ac1874();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  ppuVar14 = &puStack_e0;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c48f0;
  puRam00000001136c48f0 = puVar13;
  _objc_release(uVar1);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puStack_e8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_178 = FUN_106aab85c;
    puStack_1a0 = puVar7;
    puStack_198 = puVar8;
    puStack_190 = puVar5;
    puStack_188 = puVar6;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar14);
    lVar2 = lRam00000001136c4908;
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_106aab918;
    puStack_1b0 = &UNK_110842e18;
    ppuStack_1a8 = ppuVar14;
    _objc_retain(ppuVar14);
    ppuVar15 = ppuVar14;
    if (lVar2 != -1) {
      func_0x00010002a2fc(0x1136c4908,&puStack_1c8);
      ppuVar15 = ppuStack_1a8;
    }
    uVar1 = uRam00000001136c4900;
    _objc_retain(uRam00000001136c4900);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106aab85c; end: 106aab917; +[SCShakeFeatureNameUtils mapFeatureNames:] */

void FUN_106aab85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = lRam00000001136c4908;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106aab918;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = param_3;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136c4908,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam00000001136c4900;
  _objc_retain(uRam00000001136c4900);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aab918; end: 106aabc97;  */

void FUN_106aab918(long param_1)

{
  undefined8 uVar1;
  int iVar2;
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
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar6 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440();
  if (iVar2 != 0) {
    puVar4 = PTR_PTR_1126b69b0;
    _objc_alloc(PTR_PTR_1126b69b0);
    puVar5 = puVar4;
    func_0x000106ac1de4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar4);
    func_0x00010befa120(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  puVar4 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac1a9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar6 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac191c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar8 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac1ab4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar10 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar11 = puVar10;
  func_0x000106ac194c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar12 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar13 = puVar12;
  func_0x000106ac1934();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar1 = puRam00000001136c4900;
  puRam00000001136c4900 = puVar4;
  _objc_release(uVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c4918 != -1) {
    func_0x00010002a2fc(0x1136c4918,&PTR___NSConcreteGlobalBlock_11095b1e0);
  }
  uVar1 = uRam00000001136c4910;
  _objc_retain(uRam00000001136c4910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aabc98; end: 106aabceb; +[SCShakeFeatureNameUtils searchFeatureNames] */

void FUN_106aabc98(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4918 != -1) {
    func_0x00010002a2fc(0x1136c4918,&PTR___NSConcreteGlobalBlock_11095b1e0);
  }
  uVar1 = uRam00000001136c4910;
  _objc_retain(uRam00000001136c4910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aabcec; end: 106aabea3;  */

void FUN_106aabcec(void)

{
  undefined8 uVar1;
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
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar5 = PTR_PTR_1126b69b0;
  puStack_78 = puVar3;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar7 = PTR_PTR_1126b69b0;
  puStack_70 = puVar5;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000106ac1964();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar9 = PTR_PTR_1126b69b0;
  puStack_68 = puVar7;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x000106ac197c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  ppuVar12 = &puStack_78;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c4910;
  puRam00000001136c4910 = puVar11;
  _objc_release(uVar1);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_88 = FUN_106aabea4;
    puStack_b0 = puVar5;
    puStack_a8 = puVar6;
    puStack_a0 = puVar3;
    puStack_98 = puVar4;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    lVar2 = lRam00000001136c4928;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106aabf60;
    puStack_c0 = &UNK_110842e18;
    ppuStack_b8 = ppuVar12;
    _objc_retain(ppuVar12);
    ppuVar13 = ppuVar12;
    if (lVar2 != -1) {
      func_0x00010002a2fc(0x1136c4928,&puStack_d8);
      ppuVar13 = ppuStack_b8;
    }
    uVar1 = uRam00000001136c4920;
    _objc_retain(uRam00000001136c4920);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106aabea4; end: 106aabf5f; +[SCShakeFeatureNameUtils profileFeatureNames:] */

void FUN_106aabea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = lRam00000001136c4928;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106aabf60;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = param_3;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136c4928,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam00000001136c4920;
  _objc_retain(uRam00000001136c4920);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aabf60; end: 106aac4d7;  */

void FUN_106aabf60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  
  lVar34 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440();
  if (iVar2 != 0) {
    puVar4 = PTR_PTR_1126b69b0;
    _objc_alloc(PTR_PTR_1126b69b0);
    puVar5 = puVar4;
    func_0x000106ac1c4c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar4);
    func_0x00010befa120(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar5 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar7 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000106ac1994();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar9 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar11 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar12 = puVar11;
  func_0x000106ac161c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar13 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar14 = puVar13;
  func_0x000106ac1814();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar15 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar16 = puVar15;
  func_0x000106ac1b74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar17 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar18 = puVar17;
  func_0x000106ac1b8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar19 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar20 = puVar19;
  func_0x000106ac19dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar21 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar22 = puVar21;
  func_0x000106ac1ba4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar23 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar24 = puVar23;
  func_0x000106ac16c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar25 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar26 = puVar25;
  func_0x000106ac19ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar27 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar28 = puVar27;
  func_0x000106ac19f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar29 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar30 = puVar29;
  func_0x000106ac1ae4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar31 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar32 = puVar31;
  func_0x000106ac17e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar33);
  _objc_release(puVar31);
  _objc_release(puVar32);
  _objc_release(puVar29);
  _objc_release(puVar30);
  _objc_release(puVar27);
  _objc_release(puVar28);
  _objc_release(puVar25);
  _objc_release(puVar26);
  _objc_release(puVar23);
  _objc_release(puVar24);
  _objc_release(puVar21);
  _objc_release(puVar22);
  _objc_release(puVar19);
  _objc_release(puVar20);
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar5 = puVar3;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c4920;
  puRam00000001136c4920 = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar34) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c4938 != -1) {
    func_0x00010002a2fc(0x1136c4938,&PTR___NSConcreteGlobalBlock_11095b200);
  }
  uVar1 = uRam00000001136c4930;
  _objc_retain(uRam00000001136c4930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aac4d8; end: 106aac52b; +[SCShakeFeatureNameUtils settingsFeatureNames] */

void FUN_106aac4d8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4938 != -1) {
    func_0x00010002a2fc(0x1136c4938,&PTR___NSConcreteGlobalBlock_11095b200);
  }
  uVar1 = uRam00000001136c4930;
  _objc_retain(uRam00000001136c4930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aac52c; end: 106aac92b;  */

void FUN_106aac52c(void)

{
  undefined8 uVar1;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar4 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar6 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac1a0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar8 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac170c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar10 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar11 = puVar10;
  func_0x000106ac1a24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar12 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar13 = puVar12;
  func_0x000106ac1724();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar14 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar15 = puVar14;
  func_0x000106ac1754();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar16 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar17 = puVar16;
  func_0x000106ac176c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar18 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar19 = puVar18;
  func_0x000106ac19f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar20 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar21 = puVar20;
  func_0x000106ac1784();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar22 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar23 = puVar22;
  func_0x000106ac1a3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar24 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar25 = puVar24;
  func_0x000106ac173c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c4930;
  puRam00000001136c4930 = puVar26;
  _objc_release(uVar1);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c4948 != -1) {
    func_0x00010002a2fc(0x1136c4948,&PTR___NSConcreteGlobalBlock_11095b220);
  }
  uVar1 = uRam00000001136c4940;
  _objc_retain(uRam00000001136c4940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aac92c; end: 106aac97f; +[SCShakeFeatureNameUtils spotlightFeatureNames:] */

void FUN_106aac92c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4948 != -1) {
    func_0x00010002a2fc(0x1136c4948,&PTR___NSConcreteGlobalBlock_11095b220);
  }
  uVar1 = uRam00000001136c4940;
  _objc_retain(uRam00000001136c4940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aac980; end: 106aace83;  */

undefined * FUN_106aac980(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  undefined4 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1dcc();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e69ff8,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_f8 = puVar2;
  puStack_e8 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac155c();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a038,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_108 = puVar3;
  puStack_e0 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1cac();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a058,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_118 = puVar2;
  puStack_d8 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac1cc4();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a8b8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_128 = puVar3;
  puStack_d0 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1b14();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e5b3d8,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_138 = puVar2;
  puStack_c8 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac1b2c();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a8d8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_150 = puVar3;
  puStack_c0 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac16c4();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a0d8,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_160 = puVar2;
  puStack_b8 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac1cdc();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a8f8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_170 = puVar3;
  puStack_b0 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1acc();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a918,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_180 = puVar2;
  puStack_a8 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac1d0c();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a938,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_190 = puVar3;
  puStack_a0 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1cf4();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a958,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_98 = puVar2;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac1d24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a978,puVar4);
  puVar5 = PTR_PTR_1126b69b0;
  puStack_90 = puVar3;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac1d3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6a998,puVar6);
  puVar7 = PTR_PTR_1126b69b0;
  puStack_88 = puVar5;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000106ac1d54();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e6a9b8,puVar8);
  puVar9 = PTR_PTR_1126b69b0;
  puStack_80 = puVar7;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x000106ac1d6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar9,param_2,&PTR____CFConstantStringClassReference_110e6a9d8,puVar10);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e8,0xf);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puStack_140;
  puVar14 = puVar11;
  func_0x00010bf0a0c0();
  uVar13 = SUB84(puVar14,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c4940;
  puRam00000001136c4940 = puVar12;
  _objc_release(uVar1);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  puVar12 = puStack_f0;
  _objc_release(puStack_f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_106aace84;
  puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,uVar13);
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_200 = puVar10;
  puStack_1f8 = puVar9;
  puStack_1f0 = puVar7;
  puStack_1e8 = puVar8;
  puStack_1e0 = puVar5;
  puStack_1d8 = puVar6;
  puStack_1d0 = puVar3;
  puStack_1c8 = puVar4;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar11;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b69b0;
  puStack_2c0 = puVar12;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1244();
  _objc_retainAutoreleasedReturnValue();
  puStack_2d0 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dec718,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_2d8 = puVar2;
  puStack_280 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac125c();
  _objc_retainAutoreleasedReturnValue();
  puStack_2e0 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e66d38,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_2e8 = puVar3;
  puStack_278 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1274();
  _objc_retainAutoreleasedReturnValue();
  puStack_2f0 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e04418,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_2f8 = puVar2;
  puStack_270 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac128c();
  _objc_retainAutoreleasedReturnValue();
  puStack_300 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcf0d8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_308 = puVar3;
  puStack_268 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac12a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_310 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a1d8,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_318 = puVar2;
  puStack_260 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac12bc();
  _objc_retainAutoreleasedReturnValue();
  puStack_320 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a9f8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_328 = puVar3;
  puStack_258 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac13f4();
  _objc_retainAutoreleasedReturnValue();
  puStack_330 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110df1158,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_338 = puVar2;
  puStack_250 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac12d4();
  _objc_retainAutoreleasedReturnValue();
  puStack_340 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a478,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_348 = puVar3;
  puStack_248 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac18bc();
  _objc_retainAutoreleasedReturnValue();
  puStack_350 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a498,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_358 = puVar2;
  puStack_240 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac12ec();
  _objc_retainAutoreleasedReturnValue();
  puStack_360 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e322b8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_368 = puVar3;
  puStack_238 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1334();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6aa18,puVar3);
  puVar4 = PTR_PTR_1126b69b0;
  puStack_230 = puVar2;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac134c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db65d8,puVar5);
  puVar6 = PTR_PTR_1126b69b0;
  puStack_228 = puVar4;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac1364();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e607f8,puVar7);
  puVar8 = PTR_PTR_1126b69b0;
  puStack_220 = puVar6;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac137c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar8,param_2,&PTR____CFConstantStringClassReference_110e6aa38,puVar9);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_218 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_280,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_2c0,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puStack_368);
  _objc_release(puStack_360);
  _objc_release(puStack_358);
  _objc_release(puStack_350);
  _objc_release(puStack_348);
  _objc_release(puStack_340);
  _objc_release(puStack_338);
  _objc_release(puStack_330);
  _objc_release(puStack_328);
  _objc_release(puStack_320);
  _objc_release(puStack_318);
  _objc_release(puStack_310);
  _objc_release(puStack_308);
  _objc_release(puStack_300);
  _objc_release(puStack_2f8);
  _objc_release(puStack_2f0);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(puStack_2d0);
  if ((int)puStack_2c8 != 0) {
    puVar2 = PTR_PTR_1126b69b0;
    _objc_alloc(PTR_PTR_1126b69b0);
    puVar3 = puVar2;
    func_0x000106ac14fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6aa58,puVar3);
    func_0x00010befa120(puStack_2c0,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  puVar2 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac131c();
  _objc_retainAutoreleasedReturnValue();
  puStack_2c8 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6aa78,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_2d0 = puVar2;
  puStack_2b8 = puVar2;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000106ac1304();
  _objc_retainAutoreleasedReturnValue();
  puStack_2d8 = puVar2;
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6a2b8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_2e0 = puVar3;
  puStack_2b0 = puVar3;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac1394();
  _objc_retainAutoreleasedReturnValue();
  puStack_2e8 = puVar3;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a2d8,puVar3);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_2a8 = puVar2;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac13c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e43018,puVar4);
  puVar5 = PTR_PTR_1126b69b0;
  puStack_2a0 = puVar3;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac13dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6aa98,puVar6);
  puVar7 = PTR_PTR_1126b69b0;
  puStack_298 = puVar5;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000106ac140c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e6aab8,puVar8);
  puVar9 = PTR_PTR_1126b69b0;
  puStack_290 = puVar7;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x000106ac13ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar9,param_2,&PTR____CFConstantStringClassReference_110e6aad8,puVar10);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_288 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_2b8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_2c0,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(puStack_2d0);
  _objc_release(puStack_2c8);
  puVar5 = puStack_2c0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_210) {
    ___stack_chk_fail();
    ppuVar15 = &puStack_3e0;
    pcStack_378 = FUN_106aad5bc;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR_PTR_1126b69b0;
    puStack_3c0 = puVar3;
    puStack_3b8 = puVar4;
    puStack_3b0 = puVar2;
    puStack_3a8 = puVar11;
    puStack_3a0 = puVar10;
    puStack_398 = puVar9;
    puStack_390 = puVar7;
    puStack_388 = puVar8;
    ppuStack_380 = &puStack_1b0;
    _objc_alloc();
    puVar2 = puVar6;
    func_0x000106ac1bbc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e6aaf8,puVar2);
    puVar3 = PTR_PTR_1126b69b0;
    puStack_3e0 = puVar6;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000106ac1bd4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6ab18,puVar4);
    puVar7 = PTR_PTR_1126b69b0;
    puStack_3d8 = puVar3;
    _objc_alloc();
    puVar8 = puVar7;
    func_0x000106ac1bec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e6ab38,puVar8);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_3d0 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_3e0,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
      ___stack_chk_fail();
      if ((undefined1 *)0x4 < (undefined1 *)((long)ppuVar15 + -1)) {
        return (undefined *)0x0;
      }
      return *(undefined **)(&UNK_10dde3c80 + ((long)ppuVar15 + -1) * 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 106aace84; end: 106aad5bb; +[SCShakeFeatureNameUtils betaFeatureNames:configProvider:] */

undefined * FUN_106aace84(undefined8 param_1,undefined8 param_2,undefined4 param_3)

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
  undefined **ppuVar11;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
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
  long lStack_70;
  
  puStack_128 = (undefined *)CONCAT44(puStack_128._4_4_,param_3);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b69b0;
  puStack_120 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000106ac1244();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dec718,puVar1);
  puVar1 = PTR_PTR_1126b69b0;
  puStack_138 = puVar2;
  puStack_e0 = puVar2;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac125c();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar2;
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e66d38,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_148 = puVar1;
  puStack_d8 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000106ac1274();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar1;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e04418,puVar1);
  puVar1 = PTR_PTR_1126b69b0;
  puStack_158 = puVar2;
  puStack_d0 = puVar2;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac128c();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar2;
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf0d8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_168 = puVar1;
  puStack_c8 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000106ac12a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar1;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a1d8,puVar1);
  puVar1 = PTR_PTR_1126b69b0;
  puStack_178 = puVar2;
  puStack_c0 = puVar2;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac12bc();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar2;
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6a9f8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_188 = puVar1;
  puStack_b8 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000106ac13f4();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar1;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110df1158,puVar1);
  puVar1 = PTR_PTR_1126b69b0;
  puStack_198 = puVar2;
  puStack_b0 = puVar2;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac12d4();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = puVar2;
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6a478,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_1a8 = puVar1;
  puStack_a8 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000106ac18bc();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar1;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a498,puVar1);
  puVar1 = PTR_PTR_1126b69b0;
  puStack_1b8 = puVar2;
  puStack_a0 = puVar2;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac12ec();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar2;
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e322b8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_1c8 = puVar1;
  puStack_98 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000106ac1334();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6aa18,puVar1);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_90 = puVar2;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac134c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110db65d8,puVar4);
  puVar5 = PTR_PTR_1126b69b0;
  puStack_88 = puVar3;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac1364();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e607f8,puVar6);
  puVar7 = PTR_PTR_1126b69b0;
  puStack_80 = puVar5;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000106ac137c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e6aa38,puVar8);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_120,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  if ((int)puStack_128 != 0) {
    puVar1 = PTR_PTR_1126b69b0;
    _objc_alloc(PTR_PTR_1126b69b0);
    puVar2 = puVar1;
    func_0x000106ac14fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6aa58,puVar2);
    func_0x00010befa120(puStack_120,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  puVar1 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac131c();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar2;
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6aa78,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_130 = puVar1;
  puStack_118 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000106ac1304();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar1;
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a2b8,puVar1);
  puVar1 = PTR_PTR_1126b69b0;
  puStack_140 = puVar2;
  puStack_110 = puVar2;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac1394();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar2;
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6a2d8,puVar2);
  puVar2 = PTR_PTR_1126b69b0;
  puStack_108 = puVar1;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac13c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e43018,puVar3);
  puVar4 = PTR_PTR_1126b69b0;
  puStack_100 = puVar2;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac13dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e6aa98,puVar5);
  puVar6 = PTR_PTR_1126b69b0;
  puStack_f8 = puVar4;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac140c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e6aab8,puVar7);
  puVar8 = PTR_PTR_1126b69b0;
  puStack_f0 = puVar6;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac13ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar8,param_2,&PTR____CFConstantStringClassReference_110e6aad8,puVar9);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_120,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  puVar4 = puStack_120;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar11 = &puStack_240;
    pcStack_1d8 = FUN_106aad5bc;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126b69b0;
    puStack_220 = puVar2;
    puStack_218 = puVar3;
    puStack_210 = puVar1;
    puStack_208 = puVar10;
    puStack_200 = puVar9;
    puStack_1f8 = puVar8;
    puStack_1f0 = puVar6;
    puStack_1e8 = puVar7;
    puStack_1e0 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = puVar5;
    func_0x000106ac1bbc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6aaf8,puVar1);
    puVar2 = PTR_PTR_1126b69b0;
    puStack_240 = puVar5;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x000106ac1bd4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6ab18,puVar3);
    puVar6 = PTR_PTR_1126b69b0;
    puStack_238 = puVar2;
    _objc_alloc();
    puVar7 = puVar6;
    func_0x000106ac1bec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e6ab38,puVar7);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_230 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_240,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      if ((undefined1 *)0x4 < (undefined1 *)((long)ppuVar11 + -1)) {
        return (undefined *)0x0;
      }
      return *(undefined **)(&UNK_10dde3c80 + ((long)ppuVar11 + -1) * 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106aad5bc; end: 106aad71f; +[SCShakeFeatureNameUtils plusFeatureNames] */

undefined * FUN_106aad5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar8 = &puStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b69b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac1bbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6aaf8,puVar2);
  puVar3 = PTR_PTR_1126b69b0;
  puStack_70 = puVar1;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac1bd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6ab18,puVar4);
  puVar5 = PTR_PTR_1126b69b0;
  puStack_68 = puVar3;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac1bec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6ab38,puVar6);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  if ((undefined1 *)((long)ppuVar8 + -1) < (undefined1 *)0x5) {
    return *(undefined **)(&UNK_10dde3c80 + ((long)ppuVar8 + -1) * 8);
  }
  return (undefined *)0x0;
}



/* Entry: 106aad720; end: 106aad743; +[SCSnapchatAirConfigProvider sojuTypeFromShakeType:] */

undefined8 FUN_106aad720(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10dde3c80 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106aad744; end: 106aad753; +[SCSnapchatEventLogger setBlizzardLogger:] */

void FUN_106aad744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(0x1136c4970,param_3);
  return;
}



/* Entry: 106aad754; end: 106aad837; +[SCSnapchatEventLogger logShakeSendEvent:retryCount:isV2:] */

void FUN_106aad754(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010bf85900(PTR_PTR_1126d0238);
  }
  lVar1 = 0x1136c4970;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d0170;
    _objc_alloc_init(PTR_PTR_1126d0170);
    func_0x00010c1fe8e0();
    func_0x00010c1af5a0(puVar2,param_2,0);
    func_0x00010c226d00(puVar2,param_2,param_5);
    puVar3 = PTR_PTR_1126d0240;
    _objc_alloc_init(PTR_PTR_1126d0240);
    func_0x00010c1ed9a0();
    func_0x00010c1fe900(puVar3,param_2,puVar2);
    uVar4 = 0x1136c4970;
    _objc_loadWeakRetained(0x1136c4970);
    func_0x00010c0b2800();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aad838; end: 106aad83b; +[SCSnapchatEventLogger logShakeUploadEvent:retryCout:totalFileSize:individualFileSize:isV2:] */

void FUN_106aad838(void)

{
  return;
}



/* Entry: 106aad83c; end: 106aada87; +[SCSnapchatEventLogger logShakeErrorEvent:message:failStep:isV2:] */

void FUN_106aad83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 0) {
    func_0x00010bf858e0(PTR_PTR_1126d0238);
  }
  lVar2 = 0x1136c4970;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d0170;
    _objc_alloc_init(PTR_PTR_1126d0170);
    func_0x00010c1fe8e0();
    func_0x00010c1af5a0(puVar3,param_2,0);
    func_0x00010c226d00(puVar3,param_2,param_6);
    uVar5 = 3;
    if (param_5 != 1) {
      uVar5 = 0xffffffffffffffff;
    }
    uVar1 = 2;
    if (param_5 != 0) {
      uVar1 = uVar5;
    }
    puVar4 = PTR_PTR_1126d0248;
    _objc_alloc_init(PTR_PTR_1126d0248);
    func_0x00010c1971a0();
    func_0x00010c1fe8c0(puVar4,param_2,uVar1);
    func_0x00010c1fe900(puVar4,param_2,puVar3);
    uVar5 = 0x1136c4970;
    _objc_loadWeakRetained(0x1136c4970);
    func_0x00010c0b2800();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aada88; end: 106aadb0f; +[SCSnapchatShakeTicketAdapter sharedAdapter] */

void FUN_106aada88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106aadb10;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c4988 != -1) {
    func_0x00010002a2fc(0x1136c4988,&puStack_48);
  }
  uVar1 = uRam00000001136c4980;
  _objc_retain(uRam00000001136c4980);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aadb10; end: 106aadb3b;  */

void FUN_106aadb10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  _objc_alloc_init();
  uVar1 = uRam00000001136c4980;
  uRam00000001136c4980 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aadb3c; end: 106aadb6b; +[SCSnapchatShakeTicketAdapter injectFeatureSettings:] */

void FUN_106aadb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = uRam00000001136c4978;
  uRam00000001136c4978 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aadb6c; end: 106aadbbb; -[SCSnapchatShakeTicketAdapter handleLogin] */

void FUN_106aadb6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0148;
  func_0x00010bfc2dc0(PTR_PTR_1126d0148);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bd3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107962a00();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106aadbbc; end: 106aadc8b; -[SCSnapchatShakeTicketAdapter handleLogout:] */

void FUN_106aadbbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e6ab58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d0148;
  func_0x00010bfc2dc0(PTR_PTR_1126d0148);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bd3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107962a00();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106aadc8c; end: 106aadd17; -[SCSnapchatShakeTicketAdapter willEnterForeground] */

void FUN_106aadc8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d0198;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d0148;
    func_0x00010bfc2dc0(PTR_PTR_1126d0148);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6460(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106aadd18; end: 106aadd1f; -[SCSnapchatShakeTicketAdapter getApplicableWorkflowFromBuildFlavorAndTweak] */

undefined8 FUN_106aadd18(void)

{
  return 2;
}



/* Entry: 106aadd20; end: 106aaddbf; -[SCSnapchatShakeTicketAdapter isShakeToReportEnabled] */

undefined * FUN_106aadd20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bfc25e0();
  if (param_1 == 2) {
    puVar1 = puRam00000001136c4978;
    func_0x00010c269d40(puRam00000001136c4978);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c142fe0();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x1;
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf1f3c0(puVar1);
    }
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106aaddc0; end: 106aade7f; -[SCSnapchatShakeTicketAdapter setShakeToReportEnabled:] */

void FUN_106aaddc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bfc25e0();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bea6eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setS2rEnabledInProd__112587550,param_3);
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106aade80; end: 106aadf07; -[SCSnapchatShakeTicketAdapter _setS2rEnabledInProd:] */

void FUN_106aade80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((puVar2 != (undefined *)0x0) && (lRam00000001136c4978 != 0)) {
    lVar3 = lRam00000001136c4978;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ef0c0();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106aadf08; end: 106aae0c7; +[SCInSettingInformationCollectionLabelProvider getLabel] */

void FUN_106aadf08(undefined8 param_1,undefined8 param_2)

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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_alloc_init();
  func_0x00010c1cfce0();
  uStack_48 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1bdd60(puVar1,param_2,puVar4);
  func_0x00010c162900(puVar1,param_2,0);
  func_0x00010c1abb80(puVar1,param_2,0);
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcd1f8);
  func_0x000106ac1424();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release();
  func_0x000106ac1544();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar27 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar27,uVar28,uVar29,uVar30);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar27,uVar28,uVar29,uVar30);
    func_0x00010c219b60();
    func_0x00010c213040(puVar3,param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x000106ac143c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1cfce0(puVar3,param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1,param_2,puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar27,uVar28,uVar29,uVar30);
    puVar2 = puVar4;
    func_0x00010c219b60();
    FUN_106ac1dfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar4,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar4,param_2,1);
    func_0x00010c182220(puVar4,param_2,1);
    func_0x00010befbb60(puVar1,param_2,puVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0(puVar5,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_118 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0(puVar8,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_110 = puVar10;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0(puVar11,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    puStack_108 = puVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493a0(puVar14,param_2,puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    puStack_100 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    func_0x00010bf1ff80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf493a0(puVar17,param_2,puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    puStack_f8 = puVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010bf493a0(puVar20,param_2,puVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar4;
    puStack_f0 = puVar22;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bf49420(0x406e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e8 = puVar24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,7);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010beef8c0(puVar2,param_2,puVar25);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
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
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c219b60();
      func_0x00010c213040(puVar1,param_2,1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c1cfce0(puVar1,param_2,0);
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c1bdb00(puVar1,param_2,0);
      func_0x00010be1fe80(puVar3,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar1,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aae0c8; end: 106aae5bb; +[SCInSettingInformationCollectionLabelProvider getV11OutageBanner] */

void FUN_106aae0c8(undefined8 param_1,undefined8 param_2)

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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar27 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar27,uVar28,uVar29,uVar30);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar27,uVar28,uVar29,uVar30);
  func_0x00010c219b60();
  func_0x00010c213040(puVar2,param_2,1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x000106ac143c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar2,param_2,0);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar27,uVar28,uVar29,uVar30);
  puVar3 = puVar4;
  func_0x00010c219b60();
  FUN_106ac1dfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c17d4c0(puVar4,param_2,1);
  func_0x00010c182220(puVar4,param_2,1);
  func_0x00010befbb60(puVar1,param_2,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puStack_c8 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  puStack_c0 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  puStack_b8 = puVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  puStack_b0 = puVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010bf1ff80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493a0(puVar17,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  puStack_a8 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493a0(puVar20,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar4;
  puStack_a0 = puVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010bf49420(0x406e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c8,7);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010beef8c0(puVar3,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
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
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c213040(puVar1,param_2,1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1cfce0(puVar1,param_2,0);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1bdb00(puVar1,param_2,0);
    func_0x00010be1fe80(puVar2,param_2,puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aae5bc; end: 106aae6f3; +[SCInSettingInformationCollectionLabelProvider getChooseScreenLabelForMode:] */

void FUN_106aae5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar1,param_2,0);
  func_0x00010be1fe80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aae6f4; end: 106aae737; +[SCInSettingInformationCollectionLabelProvider _getLabelTextForMode:] */

void FUN_106aae6f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x000106ac146c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x000106ac1454();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aae738; end: 106aae8c7; -[SCS2RAttachmentDescriptionView initWithFrame:mode:customDescriptionPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106aae738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f49e0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127573e0) = param_7;
    lVar5 = (long)_DAT_1127573e4;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127573e8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127573e8) = puVar4;
    _objc_release(uVar3);
    func_0x00010beb0700(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010beaaa20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127573ec);
    *(undefined1 **)((long)puVar1 + (long)_DAT_1127573ec) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127573f0);
    func_0x00010bf13d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010bed5ac0(puVar1);
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 106aae8c8; end: 106aae9e3; -[SCS2RAttachmentDescriptionView addAttachment:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aae8c8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bdeaec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211780();
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      _objc_opt_respondsToSelector();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        func_0x00010c050900();
        func_0x00010bef9040(uVar1);
        _objc_release(puVar5);
      }
    }
    lVar7 = (long)_DAT_1127573e8;
    lVar6 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar7));
    }
    else {
      func_0x00010c130f40();
    }
    func_0x00010bed33e0(param_1);
    func_0x00010bed5ac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106aae9e4; end: 106aaea4b; -[SCS2RAttachmentDescriptionView updateAttachmentAtIndex:image:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aae9e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127573e8);
  _objc_retain(param_4);
  func_0x00010c0dfd40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aaea4c; end: 106aaea83; -[SCS2RAttachmentDescriptionView deleteAttatchmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaea4c(long param_1)

{
  func_0x00010c12d3c0(*(undefined8 *)(param_1 + _DAT_1127573e8));
  func_0x00010bed33e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraints_112593058);
  return;
}



/* Entry: 106aaea84; end: 106aaead7; -[SCS2RAttachmentDescriptionView highlightPlaceHolderText] */

void FUN_106aaea84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000106ac0fa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aaead8; end: 106aaeb67; -[SCS2RAttachmentDescriptionView resetPlaceHolderText] */

/* WARNING: Possible PIC construction at 0x000106aaeb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106aaeb58) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaead8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127573e4);
  if (lVar2 == 0) {
    lVar2 = param_1;
    if (*(long *)(param_1 + _DAT_1127573e0) == 1) {
      func_0x000106ac104c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106ac1064();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127573f0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127573f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1dc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setPlaceholder__112654c98,lVar2);
  return;
}



/* Entry: 106aaeb68; end: 106aaecbf; -[SCS2RAttachmentDescriptionView _attachmentDidSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaeb68(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010bfe3a40(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    uVar4 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) {
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar6);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_3;
        func_0x00010bf6b020(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecde0(*(undefined8 *)(param_3 + (long)_DAT_1127573e8));
        func_0x00010c268120(uVar2);
        func_0x00010bf0cd00(uVar3);
        _objc_release(uVar3);
      }
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aaecc0; end: 106aaed4f; -[SCS2RAttachmentDescriptionView _setupTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaecc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_1127573f0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,4);
  func_0x00010c139220(param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106aaed50; end: 106aaee1b; -[SCS2RAttachmentDescriptionView _setupAttachmentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaed50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  lVar3 = (long)_DAT_1127573f4;
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010befbb60(puVar1,param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010bed33e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aaee1c; end: 106aaef3b; -[SCS2RAttachmentDescriptionView _updateAttachmentContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aaee1c(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
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
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  float fVar23;
  undefined *puStack_310;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined auStack_210 [128];
  long lStack_190;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar17 = (long)_DAT_1127573f4;
  lVar1 = *(long *)(param_3 + lVar17);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar18 = *plStack_110;
    do {
      lVar19 = 0;
      do {
        if (*plStack_110 != lVar18) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_118 + lVar19 * 8));
        lVar19 = lVar19 + 1;
      } while (lVar12 != lVar19);
      lVar12 = lVar1;
      func_0x00010bf52a60(lVar1,param_4,&uStack_120,auStack_d8,0x10);
    } while (lVar12 != 0);
  }
  _objc_release(lVar1);
  lVar12 = *(long *)(param_3 + _DAT_1127573e8);
  uVar16 = *(undefined8 *)(param_3 + lVar17);
  func_0x00010bdc5ea0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar12);
  _objc_retain(uVar16);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 0.0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(lVar12);
  puVar11 = auStack_210;
  lVar1 = lVar12;
  func_0x00010bf52a60(lVar12,param_4,&uStack_250,puVar11,0x10);
  if (lVar1 != 0) {
    uVar20 = 0;
    lVar17 = *plStack_240;
    do {
      lVar18 = 0;
      uVar21 = uVar20;
      do {
        if (*plStack_240 != lVar17) {
          _objc_enumerationMutation(lVar12);
        }
        uVar20 = *(undefined8 *)(lStack_248 + lVar18 * 8);
        func_0x00010befbb60(uVar16,param_4,uVar20);
        lVar19 = param_3;
        func_0x00010bde6720(param_3,param_4,uVar20,uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2,param_4,lVar19);
        _objc_release(lVar19);
        _objc_retain(uVar20);
        _objc_release(uVar21);
        lVar18 = lVar18 + 1;
        uVar21 = uVar20;
      } while (lVar1 != lVar18);
      puVar11 = auStack_210;
      lVar1 = lVar12;
      func_0x00010bf52a60(lVar12,param_4,&uStack_250,puVar11,0x10);
    } while (lVar1 != 0);
    _objc_release(uVar20);
  }
  _objc_release(lVar12);
  puVar13 = puVar2;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar2);
  _objc_release(uVar16);
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(puVar11);
  puVar2 = puVar13;
  func_0x00010bfe6ac0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar2);
  puVar2 = puVar13;
  func_0x00010bfe6ac0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = puVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010c262ca0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf493a0(puVar3,param_4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  puStack_2d8 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    puStack_310 = puVar13;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puStack_310;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = puVar11;
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  fVar23 = (float)param_2 / (float)dVar22;
  puVar9 = puVar7;
  func_0x00010bf493c0(0x4014000000000000,puVar7,param_4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2d0 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2d8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_4,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar8);
    puVar8 = puStack_310;
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar13;
  puVar4 = puVar13;
  puVar5 = puVar13;
  puVar6 = puVar13;
  if (1.6857142 <= fVar23) {
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262ca0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf49520(0xc02e000000000000,puVar3,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_2f8 = puVar8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0660(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bf49400((double)(1.0 / fVar23),0,puVar5,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &puStack_2f8;
    puStack_2f0 = puVar9;
  }
  else {
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262ca0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf49520(0xc014000000000000,puVar3,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e8 = puVar8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5060(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bf49400((double)fVar23,0,puVar5,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &puStack_2e8;
    puStack_2e0 = puVar9;
  }
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,ppuVar14,2);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010befa160(puVar2,param_4,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_retain(puVar15);
    _objc_alloc(puVar2);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c1a9f00(puVar2,param_4,puVar15);
    _objc_release(puVar15);
    func_0x00010c182220(puVar2,param_4,1);
    func_0x00010c17d4c0(puVar2,param_4,1);
    func_0x00010c21e900(puVar2,param_4,1);
    puVar11 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106aaef3c; end: 106aaf0ef; -[SCS2RAttachmentDescriptionView _addAttachmentThumbnails:toView:] */

void FUN_106aaef3c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
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
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  float fVar21;
  undefined *puStack_1f0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_5);
  puVar12 = auStack_f0;
  lVar2 = param_5;
  func_0x00010bf52a60(param_5,param_4,&uStack_130,puVar12,0x10);
  if (lVar2 != 0) {
    uVar16 = 0;
    lVar18 = *plStack_120;
    do {
      lVar19 = 0;
      uVar17 = uVar16;
      do {
        if (*plStack_120 != lVar18) {
          _objc_enumerationMutation(param_5);
        }
        uVar16 = *(undefined8 *)(lStack_128 + lVar19 * 8);
        func_0x00010befbb60(param_6,param_4,uVar16);
        uVar3 = param_3;
        func_0x00010bde6720(param_3,param_4,uVar16,uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1,param_4,uVar3);
        _objc_release(uVar3);
        _objc_retain(uVar16);
        _objc_release(uVar17);
        lVar19 = lVar19 + 1;
        uVar17 = uVar16;
      } while (lVar2 != lVar19);
      puVar12 = auStack_f0;
      lVar2 = param_5;
      func_0x00010bf52a60(param_5,param_4,&uStack_130,puVar12,0x10);
    } while (lVar2 != 0);
    _objc_release(uVar16);
  }
  _objc_release(param_5);
  puVar13 = puVar1;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(puVar12);
  puVar1 = puVar13;
  func_0x00010bfe6ac0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar1);
  puVar1 = puVar13;
  func_0x00010bfe6ac0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = puVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010c262ca0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf493a0(puVar4,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar13;
  puStack_1b8 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar12 == (undefined *)0x0) {
    puStack_1f0 = puVar13;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_1f0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = puVar12;
    func_0x00010c2793a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  fVar21 = (float)param_2 / (float)dVar20;
  puVar10 = puVar8;
  func_0x00010bf493c0(0x4014000000000000,puVar8,param_4,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1b8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_4,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar9);
    puVar9 = puStack_1f0;
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar13;
  puVar5 = puVar13;
  puVar6 = puVar13;
  puVar7 = puVar13;
  if (1.6857142 <= fVar21) {
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262ca0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf49520(0xc02e000000000000,puVar4,param_4,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar9;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0660(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010bf49400((double)(1.0 / fVar21),0,puVar6,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &puStack_1d8;
    puStack_1d0 = puVar10;
  }
  else {
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262ca0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf49520(0xc014000000000000,puVar4,param_4,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5060(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010bf49400((double)fVar21,0,puVar6,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &puStack_1c8;
    puStack_1c0 = puVar10;
  }
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,ppuVar14,2);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar11;
  func_0x00010befa160(puVar1,param_4,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_retain(puVar15);
    _objc_alloc(puVar1);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c1a9f00(puVar1,param_4,puVar15);
    _objc_release(puVar15);
    func_0x00010c182220(puVar1,param_4,1);
    func_0x00010c17d4c0(puVar1,param_4,1);
    func_0x00010c21e900(puVar1,param_4,1);
    puVar12 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aaf0f0; end: 106aaf517; -[SCS2RAttachmentDescriptionView _constraintsForCell:below:] */

void FUN_106aaf0f0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  float fVar12;
  long lStack_c0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010bfe6ac0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfe6ac0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar1 = param_5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf493a0(lVar1,param_4,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  lStack_88 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    lStack_c0 = param_5;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_c0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = param_6;
    func_0x00010c2793a0(param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  fVar12 = (float)param_2 / (float)param_1;
  lVar8 = lVar6;
  func_0x00010bf493c0(0x4014000000000000,lVar6,param_4,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_80 = lVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar8);
  if (param_6 == 0) {
    _objc_release(lVar7);
    lVar7 = lStack_c0;
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5;
  lVar3 = param_5;
  lVar4 = param_5;
  lVar5 = param_5;
  if (1.6857142 <= fVar12) {
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf49520(0xc02e000000000000,lVar1,param_4,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lStack_a8 = lVar7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0660(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bf49400((double)(1.0 / fVar12),0,lVar4,param_4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    plVar10 = &lStack_a8;
    lStack_a0 = lVar8;
  }
  else {
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf49520(0xc014000000000000,lVar1,param_4,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lStack_98 = lVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5060(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bf49400((double)fVar12,0,lVar4,param_4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    plVar10 = &lStack_98;
    lStack_90 = lVar8;
  }
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,plVar10,2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010befa160(puVar2,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_retain(puVar11);
    _objc_alloc(puVar2);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c1a9f00(puVar2,param_4,puVar11);
    _objc_release(puVar11);
    func_0x00010c182220(puVar2,param_4,1);
    func_0x00010c17d4c0(puVar2,param_4,1);
    func_0x00010c21e900(puVar2,param_4,1);
    puVar9 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106aaf518; end: 106aaf5cb; -[SCS2RAttachmentDescriptionView _createAttachmentView:] */

void FUN_106aaf518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c1a9f00(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c182220(puVar1,param_2,1);
  func_0x00010c17d4c0(puVar1,param_2,1);
  func_0x00010c21e900(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4014000000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aaf5cc; end: 106aafbc3; -[SCS2RAttachmentDescriptionView _updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106aaf5cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
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
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 in_x5;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = (long)_DAT_1127573f8;
  if (*(long *)(param_1 + lVar28) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar29 = (long)_DAT_1127573f0;
  uVar2 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  uStack_88 = uVar31;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar29);
  uStack_80 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar31);
  _objc_release(lVar8);
  _objc_release(uVar2);
  lVar8 = *(long *)(param_1 + _DAT_1127573e8);
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    uVar9 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar31;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar10);
  }
  else {
    lVar30 = (long)_DAT_1127573f4;
    uVar9 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = (long)_DAT_1127573ec;
    lVar8 = *(long *)(param_1 + lVar32);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(param_1 + lVar30);
    uStack_c8 = uVar31;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0(puVar10,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar32);
    puStack_c0 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar32);
    uStack_b8 = uVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    func_0x00010bf493a0(uVar14,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar30);
    uStack_b0 = uVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010bf493a0(uVar15,param_2,uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar32);
    uStack_a8 = uVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar17;
    func_0x00010bf49420(0x4051800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar32);
    uStack_a0 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf493c0(0x4014000000000000,uVar18,param_2,lVar30);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar29);
    uStack_98 = uVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c2793a0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010bf493a0(uVar20,param_2,uVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar23);
    _objc_release(puVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(lVar30);
    _objc_release(uVar18);
    _objc_release(uVar5);
    _objc_release(uVar17);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(lVar4);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
  }
  _objc_release(puVar10);
  _objc_release(uVar31);
  _objc_release(lVar8);
  _objc_release(uVar9);
  uVar31 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar31);
  uVar27 = *(ulong *)(param_1 + lVar28);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(uVar27);
  _objc_retain(in_x5);
  uVar24 = uVar27;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  _objc_release(uVar24);
  uVar24 = uVar25;
  func_0x00010c08fa60();
  if (1000 < uVar24) {
    uVar26 = uVar25;
    func_0x00010c260c20(uVar25,param_2,1000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar27,param_2,uVar26);
    _objc_release(uVar26);
  }
  _objc_release(uVar25);
  _objc_release(uVar27);
  return (undefined *)(ulong)(uVar24 < 0x3e9);
}



/* Entry: 106aafbc4; end: 106aafca7; -[SCS2RAttachmentDescriptionView textView:shouldChangeTextInRange:replacementText:] */

bool FUN_106aafbc4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c08fa60();
  if (1000 < uVar1) {
    uVar3 = uVar2;
    func_0x00010c260c20(uVar2,param_2,1000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_3,param_2,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1 < 0x3e9;
}



/* Entry: 106aafca8; end: 106aafd23; -[SCS2RAttachmentDescriptionView textViewDidChange:] */

void FUN_106aafca8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106aafd24; end: 106aafd33; -[SCS2RAttachmentDescriptionView textView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106aafd24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127573f0);
}



/* Entry: 106aafd34; end: 106aafd53; -[SCS2RAttachmentDescriptionView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aafd34(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127573fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aafd54; end: 106aafd67; -[SCS2RAttachmentDescriptionView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aafd54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127573fc,param_3);
  return;
}



/* Entry: 106aafd68; end: 106aafdf3; -[SCS2RAttachmentDescriptionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aafd68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127573fc);
  _objc_storeStrong(param_1 + _DAT_1127573f0,0);
  _objc_storeStrong(param_1 + _DAT_1127573e4,0);
  _objc_storeStrong(param_1 + _DAT_1127573f8,0);
  _objc_storeStrong(param_1 + _DAT_1127573f4,0);
  _objc_storeStrong(param_1 + _DAT_1127573ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127573e8,0);
  return;
}



/* Entry: 106aafdf4; end: 106aafec3; -[SCS2RFeatureSelectionViewController initWithTitle:featureNames:selectedRow:reportSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106aafdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f49e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithReportSource__112532ea0,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c216240(puVar1);
    func_0x00010c20eaa0(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757400) = param_5;
    lVar3 = (long)_DAT_112757404;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106aafec4; end: 106aaff57; -[SCS2RFeatureSelectionViewController loadScrollView] */

void FUN_106aafec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c16d4a0();
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c189840(puVar1,param_2,param_1);
  puVar2 = PTR_PTR_1126b5a18;
  _objc_opt_class(PTR_PTR_1126b5a18);
  func_0x00010c125fe0(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e6ab98);
  func_0x00010c1fce40(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aaff58; end: 106ab0023; -[SCS2RFeatureSelectionViewController tableView:cellForRowAtIndexPath:] */

void FUN_106aaff58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde4da0(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c27f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e40();
  _objc_release(uVar1);
  func_0x00010bec5a60(param_1);
  _objc_release(param_4);
  func_0x00010c20eaa0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106ab0024; end: 106ab002b; -[SCS2RFeatureSelectionViewController numberOfSectionsInTableView:] */

undefined8 FUN_106ab0024(void)

{
  return 1;
}



/* Entry: 106ab002c; end: 106ab002f; -[SCS2RFeatureSelectionViewController tableView:titleForHeaderInSection:] */

void FUN_106ab002c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6c378;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e6c378,
                      &PTR____CFConstantStringClassReference_110e6b458,0);
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



/* Entry: 106ab0030; end: 106ab003f; -[SCS2RFeatureSelectionViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757404),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106ab0040; end: 106ab006b; -[SCS2RFeatureSelectionViewController tableView:heightForRowAtIndexPath:] */

void FUN_106ab0040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bec5a60(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bfe07d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5a18,PTR_s_heightForRowWithStyle_containerS_1125d5bb0,0,param_1,param_2);
  return;
}



/* Entry: 106ab006c; end: 106ab0157; -[SCS2RFeatureSelectionViewController tableView:viewForHeaderInSection:] */

void FUN_106ab006c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c267fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      puVar3 = PTR_PTR_1126c3020;
      _objc_alloc(PTR_PTR_1126c3020);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c216240();
      func_0x00010c20eaa0(puVar3);
      _objc_release(uVar2);
      goto LAB_106ab013c;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106ab013c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ab0158; end: 106ab0167; -[SCS2RFeatureSelectionViewController tableView:heightForHeaderInSection:] */

void FUN_106ab0158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe09f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b78f0,PTR_s_heightWithSubtitle__1125d5c38,0);
  return;
}



/* Entry: 106ab0168; end: 106ab0273; -[SCS2RFeatureSelectionViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0168(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112757400;
  lVar4 = *(long *)(param_1 + lVar5);
  lVar1 = param_4;
  func_0x00010c142240();
  if (lVar4 == lVar1) {
    lVar1 = -1;
  }
  else {
    lVar1 = param_4;
    func_0x00010c142240();
  }
  *(long *)(param_1 + lVar5) = lVar1;
  uVar2 = param_3;
  func_0x00010bf33b80(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_4);
  uVar3 = uVar2;
  func_0x00010c27f7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a9c0();
  _objc_release(lVar1);
  func_0x00010bf84aa0(param_1);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ab0274; end: 106ab02eb; -[SCS2RFeatureSelectionViewController tableView:willDisplayCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + _DAT_112757400);
  lVar1 = param_5;
  func_0x00010c142240();
  if (lVar2 == lVar1) {
    func_0x00010c158fe0(param_3,param_2,param_5,0,0);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ab02ec; end: 106ab0383; -[SCS2RFeatureSelectionViewController _configureCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab02ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112757404);
  _objc_retain(param_3);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd20(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c09e3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540(param_3,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c161a60(param_3,param_2,2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ab0384; end: 106ab03ff; -[SCS2RFeatureSelectionViewController _styleForCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106ab0384(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(ulong *)(param_1 + _DAT_112757404);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  lVar2 = param_3;
  func_0x00010c142240();
  _objc_release(param_3);
  uVar1 = 0;
  if (uVar3 <= lVar2 + 1U) {
    uVar1 = 4;
  }
  if (lVar2 == 0) {
    uVar1 = uVar1 + 1;
  }
  auVar4._8_8_ = uVar1 | 10;
  auVar4._0_8_ = 1;
  return auVar4;
}



/* Entry: 106ab0400; end: 106ab041f; -[SCS2RFeatureSelectionViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0400(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112757408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ab0420; end: 106ab0433; -[SCS2RFeatureSelectionViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0420(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112757408,param_3);
  return;
}



/* Entry: 106ab0434; end: 106ab046f; -[SCS2RFeatureSelectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0434(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757404,0);
  return;
}



/* Entry: 106ab0470; end: 106ab051b; -[SCS2RSubScreenViewController initWithReportSource:] */

undefined1 * FUN_106ab0470(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f49f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar2);
    func_0x00010c1eb540(puVar1);
    if (param_3 == 2) {
      func_0x00010c21e060(puVar1);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ab051c; end: 106ab05af; -[SCS2RSubScreenViewController viewDidLoad] */

void FUN_106ab051c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f49f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  if (2 < lRam00000001138466f0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c266de0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  return;
}


