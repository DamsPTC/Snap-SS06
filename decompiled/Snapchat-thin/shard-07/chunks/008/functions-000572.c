/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a99390; end: 105a9940b; -[SCSpectaclesSettingsBaseViewController viewDidLoad] */

void FUN_105a99390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eba58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5eee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105a9940c; end: 105a99413; -[SCSpectaclesSettingsBaseViewController spectaclesSettingsSwitchCell:didToggleSwitch:cellType:] */

void FUN_105a9940c(undefined8 param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf7d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didToggleSwitch_enabled__1125bd020,in_x4);
  return;
}



/* Entry: 105a99414; end: 105a99423; -[SCSpectaclesSettingsBaseViewController numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e8a0),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105a99424; end: 105a9948f; -[SCSpectaclesSettingsBaseViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a99424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e8a0);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105a99490; end: 105a996ff; -[SCSpectaclesSettingsBaseViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99490(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = *(ulong *)(param_1 + _DAT_11272e8a0);
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_4);
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126c1e08;
  _objc_opt_class(PTR_PTR_1126c1e08);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  puVar3 = param_3;
  if ((uVar1 & 1) == 0) {
    puVar5 = PTR_PTR_1126c1eb8;
    _objc_opt_class(PTR_PTR_1126c1eb8);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    puVar5 = PTR_PTR_1126c1ea0;
    if ((uVar1 & 1) != 0) {
      puVar5 = PTR_PTR_1126c1e98;
    }
    _objc_opt_class(puVar5);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126c1ea8;
    _objc_opt_class(PTR_PTR_1126c1ea8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c1ea8;
    _objc_retain(puVar3);
    _objc_opt_class(puVar5);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar5);
    puVar5 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar3);
    func_0x00010c18b5e0(puVar5);
  }
  _objc_release(puVar5);
  func_0x00010bde7700(param_1);
  func_0x00010c20eaa0(puVar3);
  puVar5 = PTR_DAT_1126a4fe8;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010010fab4(puVar3,puVar5);
  _objc_release(puVar3);
  puVar5 = PTR_DAT_1126a4fe8;
  if (((int)puVar4 != 0) && (puVar3 != (undefined *)0x0)) {
    _objc_retain(puVar3);
    puVar4 = puVar3;
    func_0x00010010fab4(puVar3,puVar5);
    puVar5 = puVar3;
    if ((int)puVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar3);
    func_0x00010c2226c0(puVar5);
    _objc_release(puVar5);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a99700; end: 105a997f7; -[SCSpectaclesSettingsBaseViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c1eb0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e120(param_3,param_2,param_4,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272e8a0);
  uVar3 = param_5;
  func_0x00010c1554e0(param_5);
  _objc_release(param_5);
  func_0x00010c0dfd40(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar2,param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a997f8; end: 105a9997f; -[SCSpectaclesSettingsBaseViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105a997f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_8);
  func_0x00010bfb68e0(param_6);
  uVar5 = *(ulong *)(param_4 + _DAT_11272e8a0);
  func_0x00010c1554e0(param_8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_8);
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126c1e08;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c1ea8;
  puVar4 = PTR_PTR_1126b2780;
  if (uVar2 == 0) {
    func_0x00010bddc3e0(param_4);
    func_0x00010bde7700(param_4);
    func_0x00010bfe0740(puVar4);
  }
  else {
    func_0x00010bde7700(param_4);
    param_1 = param_3;
    func_0x00010bfe0760(param_3,puVar1);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_8);
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 105a99980; end: 105a99a8f; -[SCSpectaclesSettingsBaseViewController _cellStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a99980(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + _DAT_11272e8a0);
  func_0x00010c1554e0(param_3);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_3);
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c1e08;
  _objc_opt_class(PTR_PTR_1126c1e08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010bf6f6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = 8;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105a99a90; end: 105a99b4b; -[SCSpectaclesSettingsBaseViewController _containerStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105a99a90(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c142240();
  uVar5 = *(ulong *)(param_1 + _DAT_11272e8a0);
  func_0x00010c1554e0(param_3);
  _objc_release(param_3);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar4 <= lVar2 + 1U) {
    uVar1 = 4;
  }
  if (lVar2 == 0) {
    uVar1 = uVar1 + 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar5);
  auVar6._8_8_ = uVar1 | 10;
  auVar6._0_8_ = 1;
  return auVar6;
}



/* Entry: 105a99b4c; end: 105a99c9b; -[SCSpectaclesSettingsBaseViewController collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105a99b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_6);
  lVar5 = (long)_DAT_11272e8a0;
  lVar2 = *(long *)(param_4 + lVar5);
  func_0x00010c0dfd40(lVar2,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_4 + lVar5);
    func_0x00010c0dfd40(lVar4,param_5,param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 == 0) {
      param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
      param_1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      goto LAB_105a99c60;
    }
  }
  else {
    _objc_release();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_4 + lVar5);
  func_0x00010c0dfd40(lVar2,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_6);
  puVar1 = PTR_PTR_1126b78f0;
  lVar3 = lVar2;
  func_0x00010c260dc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe09e0(puVar1,param_5,lVar3 != 0);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_105a99c60:
  _objc_release(param_6);
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 105a99c9c; end: 105a99d63; -[SCSpectaclesSettingsBaseViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272e8a0);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = uVar3;
  func_0x00010c27dd80(uVar3);
  func_0x00010bf7afa0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a99d64; end: 105a99d67; -[SCSpectaclesSettingsBaseViewController didSelectSettings:] */

void FUN_105a99d64(void)

{
  return;
}



/* Entry: 105a99d68; end: 105a99d6b; -[SCSpectaclesSettingsBaseViewController didToggleSwitch:enabled:] */

void FUN_105a99d68(void)

{
  return;
}



/* Entry: 105a99d6c; end: 105a99d8b; -[SCSpectaclesSettingsBaseViewController collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99d6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272e89c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a99d8c; end: 105a99d9f; -[SCSpectaclesSettingsBaseViewController setCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272e89c,param_3);
  return;
}



/* Entry: 105a99da0; end: 105a99daf; -[SCSpectaclesSettingsBaseViewController sectionViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a99da0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e8a0);
}



/* Entry: 105a99db0; end: 105a99def; -[SCSpectaclesSettingsBaseViewController setSectionViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e8a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a99df0; end: 105a99e2b; -[SCSpectaclesSettingsBaseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99df0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e8a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e89c);
  return;
}



/* Entry: 105a99e2c; end: 105a99fc7; -[SCSpectaclesSettingsCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e8a4);
  *(undefined8 *)(param_1 + _DAT_11272e8a4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(lVar1);
  _objc_release(uVar2);
  func_0x00010beee7c0(param_3);
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  _objc_release(lVar1);
  uVar2 = param_3;
  func_0x00010c297100(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf6f6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf154a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ed60();
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf926c0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setEnabled__112642f38,uVar2);
  return;
}



/* Entry: 105a99fc8; end: 105a99fd7; -[SCSpectaclesSettingsCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a99fc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e8a4);
}



/* Entry: 105a99fd8; end: 105a99feb; -[SCSpectaclesSettingsCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a99fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e8a4,0);
  return;
}



/* Entry: 105a99fec; end: 105a9a4cb; -[SCSpectaclesSettingsDescriptionCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105a99fec(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126eba60;
  puVar1 = &uStack_d0;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar11 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar13 = (long)_DAT_11272e8a8;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar14 = (long)_DAT_11272e8ac;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar12);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar12;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar15;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar10);
    _objc_release(uVar16);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar11 = *(long *)((long)puVar1 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar13;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar12;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar10;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar10);
    _objc_release(uVar15);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar17);
    _objc_release(lVar13);
    _objc_release(uVar16);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar12 = *(undefined8 *)(lVar11 + _DAT_11272e8b0);
  *(undefined **)(lVar11 + _DAT_11272e8b0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar12);
  puVar1 = (undefined8 *)PTR_PTR_1126c1e98;
  func_0x00010bfb4100(param_3);
  puVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c1e98;
  func_0x00010bfb4100(param_3);
  puVar10 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  func_0x00010c16b720(*(undefined8 *)(lVar11 + _DAT_11272e8a8));
  func_0x00010c16b720(*(undefined8 *)(lVar11 + _DAT_11272e8ac));
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 105a9a4cc; end: 105a9a5f7; -[SCSpectaclesSettingsDescriptionCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9a4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272e8b0);
  *(undefined8 *)(param_1 + _DAT_11272e8b0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c1e98;
  uVar4 = param_3;
  func_0x00010bfb4100(param_3);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36460(puVar2,param_2,uVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c1e98;
  uVar4 = param_3;
  func_0x00010bfb4100(param_3);
  uVar1 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36460(puVar3,param_2,uVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11272e8a8),param_2,puVar2);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11272e8ac),param_2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a9a5f8; end: 105a9a80f; +[SCSpectaclesSettingsDescriptionCell cellHeightForWidth:viewModel:] */

double FUN_105a9a5f8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      dVar5 = 0.0;
      goto LAB_105a9a7ec;
    }
  }
  else {
    _objc_release();
  }
  param_1 = param_1 + -64.0;
  dVar5 = 0.0;
  if (0.0 < param_1) {
    lVar1 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      dVar5 = 32.0;
    }
    else {
      lVar1 = param_4;
      func_0x00010bfb4100(param_4);
      lVar2 = param_4;
      func_0x00010c2711a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010be36460(param_2,param_3,lVar1,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      dVar5 = 3.4028234663852886e+38;
      func_0x00010c23d140(param_1,0x47efffffe0000000,uVar3,param_3,3);
      dVar5 = (double)(long)dVar5 + 32.0;
      _objc_release(uVar3);
    }
    lVar1 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_4;
      func_0x00010bf1e9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        dVar5 = dVar5 + 12.0;
      }
    }
    lVar1 = param_4;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_4;
      func_0x00010bfb4100(param_4);
      lVar2 = param_4;
      func_0x00010bf1e9c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36460(param_2,param_3,lVar1,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      dVar4 = 3.4028234663852886e+38;
      func_0x00010c23d140(param_1,0x47efffffe0000000,param_2,param_3,3);
      dVar5 = dVar5 + (double)(long)dVar4;
      _objc_release(param_2);
    }
    dVar5 = dVar5 + 12.0;
  }
LAB_105a9a7ec:
  _objc_release(param_4);
  return dVar5;
}



/* Entry: 105a9a810; end: 105a9aa53; +[SCSpectaclesSettingsDescriptionCell _htmlAttributedStringWithTypeStyle:text:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105a9a810(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_4;
  _objc_retain();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar2;
  func_0x00010bfa0820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0(lVar2);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e1ae78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  puVar5 = puVar3;
  func_0x00010bf64920(puVar3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSDocumentTypeDocumentAttribute_1103457e0;
  uStack_58 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
  uStack_60 = *(undefined8 *)PTR__NSCharacterEncodingDocumentAttribute_1103457c8;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2668;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008460(puVar4,param_2,puVar5,puVar6,0,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uStack_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c08fa60(puVar4);
  func_0x00010bef6f40(puVar4,param_2,puVar6,0,puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(lVar2 + _DAT_11272e8b0);
}



/* Entry: 105a9aa54; end: 105a9aa63; -[SCSpectaclesSettingsDescriptionCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a9aa54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e8b0);
}



/* Entry: 105a9aa64; end: 105a9aab3; -[SCSpectaclesSettingsDescriptionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9aa64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e8b0,0);
  _objc_storeStrong(param_1 + _DAT_11272e8ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e8a8,0);
  return;
}



/* Entry: 105a9aab4; end: 105a9ab73; -[SCSpectaclesSettingsSectionHeader setViewModel:] */

void FUN_105a9aab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c27f7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStyle__1126614d0,1);
  return;
}



/* Entry: 105a9ab74; end: 105a9ab83; -[SCSpectaclesSettingsSectionHeader viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a9ab74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e8b4);
}



/* Entry: 105a9ab84; end: 105a9ab97; -[SCSpectaclesSettingsSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9ab84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e8b4,0);
  return;
}



/* Entry: 105a9ab98; end: 105a9ac7b; -[SCSpectaclesSettingsSwitchCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105a9ab98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126eba68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11272e8b8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e40();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105a9ac7c; end: 105a9ada7; -[SCSpectaclesSettingsSwitchCell setViewModel:] */

/* WARNING: Possible PIC construction at 0x000105a9ad74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a9ad78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9ac7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272e8b8;
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e8bc);
  *(undefined8 *)(param_1 + _DAT_11272e8bc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf6f6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(lVar1);
  _objc_release(uVar2);
  func_0x00010c265700(param_3);
  func_0x00010c1d1360(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf926c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setEnabled__112642f38,param_3);
  return;
}



/* Entry: 105a9ada8; end: 105a9ae7b; -[SCSpectaclesSettingsSwitchCell _switchChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9ada8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c1e08;
  uVar4 = *(ulong *)(param_1 + _DAT_11272e8bc);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    param_1 = param_1 + _DAT_11272e8c0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c079040(param_3);
    func_0x00010c27dd80(uVar4);
    func_0x00010c2497a0(param_1);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a9ae7c; end: 105a9ae83; +[SCSpectaclesSettingsSwitchCell cellStyle] */

undefined8 FUN_105a9ae7c(void)

{
  return 0;
}



/* Entry: 105a9ae84; end: 105a9af53; +[SCSpectaclesSettingsSwitchCell heightForCollectionViewWidth:viewModel:containerStyle:] */

undefined8
FUN_105a9ae84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2780;
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf6f6a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf45a60(param_1,0x7fefffffffffffff,0x4049800000000000,0,puVar1,param_3,param_5,param_6
                      ,uVar2,uVar3,0,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 105a9af54; end: 105a9af63; -[SCSpectaclesSettingsSwitchCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a9af54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e8bc);
}



/* Entry: 105a9af64; end: 105a9af83; -[SCSpectaclesSettingsSwitchCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9af64(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272e8c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a9af84; end: 105a9af97; -[SCSpectaclesSettingsSwitchCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9af84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272e8c0,param_3);
  return;
}



/* Entry: 105a9af98; end: 105a9afe3; -[SCSpectaclesSettingsSwitchCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9af98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e8c0);
  _objc_storeStrong(param_1 + _DAT_11272e8bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e8b8,0);
  return;
}



/* Entry: 105a9afe4; end: 105a9b08b; -[SCSpectaclesWebViewController initWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105a9afe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eba70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c216240(puVar1);
    func_0x00010c20eaa0(puVar1);
    lVar3 = (long)_DAT_11272e8c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9b08c; end: 105a9b2ab; -[SCSpectaclesWebViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9b08c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126eba70;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar11 = (long)_DAT_11272e8c8;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_alloc_init(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  puVar8 = PTR_PTR_1126b4f58;
  func_0x00010bdc3620(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),PTR_PTR_1126b4f58);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar9);
  func_0x00010c1cb840(puVar8);
  puVar1 = puVar8;
  func_0x00010c152980(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a9b2ac; end: 105a9b3af; -[SCSpectaclesWebViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9b2ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_alloc_init(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  puVar2 = PTR_PTR_1126b4f58;
  func_0x00010bdc3620(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),PTR_PTR_1126b4f58,param_2,
                      puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      *(undefined8 *)(param_1 + _DAT_11272e8c4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137160(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060(puVar2,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1cb840(puVar2,param_2,param_1);
  puVar4 = puVar2;
  func_0x00010c152980(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a9b3b0; end: 105a9b41f; -[SCSpectaclesWebViewController webView:didFinishNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9b3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e8c8);
  _objc_retain(param_3);
  func_0x00010c2558c0(uVar1);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c216240(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a9b420; end: 105a9b45f; -[SCSpectaclesWebViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9b420(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e8c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e8c4,0);
  return;
}



/* Entry: 105a9b460; end: 105a9b587; -[SCSpectaclesSettingsCellViewModel initWithTitle:valueText:detailText:badgeText:actionIndicator:enabled:type:] */

undefined1 *
FUN_105a9b460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
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
  puStack_58 = PTR_PTR_1126eba78;
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
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9b588; end: 105a9b5ab; -[SCSpectaclesSettingsCellViewModel copyWithZone:] */

undefined8 FUN_105a9b588(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a9b5ac; end: 105a9b643; -[SCSpectaclesSettingsCellViewModel hash] */

undefined8 * FUN_105a9b5ac(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_30;
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
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105a9b724:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a9b730;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])) &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105a9b730;
            }
            goto LAB_105a9b724;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105a9b730:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105a9b644; end: 105a9b74b; -[SCSpectaclesSettingsCellViewModel isEqual:] */

long FUN_105a9b644(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a9b724:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a9b730;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105a9b730;
            }
            goto LAB_105a9b724;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105a9b730:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a9b74c; end: 105a9b753; -[SCSpectaclesSettingsCellViewModel title] */

undefined8 FUN_105a9b74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a9b754; end: 105a9b75b; -[SCSpectaclesSettingsCellViewModel valueText] */

undefined8 FUN_105a9b754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a9b75c; end: 105a9b763; -[SCSpectaclesSettingsCellViewModel detailText] */

undefined8 FUN_105a9b75c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a9b764; end: 105a9b76b; -[SCSpectaclesSettingsCellViewModel badgeText] */

undefined8 FUN_105a9b764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a9b76c; end: 105a9b773; -[SCSpectaclesSettingsCellViewModel actionIndicator] */

undefined8 FUN_105a9b76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a9b774; end: 105a9b77b; -[SCSpectaclesSettingsCellViewModel enabled] */

undefined1 FUN_105a9b774(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a9b77c; end: 105a9b783; -[SCSpectaclesSettingsCellViewModel type] */

undefined8 FUN_105a9b77c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a9b784; end: 105a9b7cb; -[SCSpectaclesSettingsCellViewModel .cxx_destruct] */

void FUN_105a9b784(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a9b7cc; end: 105a9b8a3; -[SCSpectaclesSettingsSectionViewModel initWithTitle:subtitle:cellViewModels:] */

undefined1 *
FUN_105a9b7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eba80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9b8a4; end: 105a9b8c7; -[SCSpectaclesSettingsSectionViewModel copyWithZone:] */

undefined8 FUN_105a9b8a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a9b8c8; end: 105a9b947; -[SCSpectaclesSettingsSectionViewModel hash] */

undefined8 * FUN_105a9b8c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105a9b9e0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a9b9ec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105a9b9ec;
          }
          goto LAB_105a9b9e0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105a9b9ec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105a9b948; end: 105a9ba07; -[SCSpectaclesSettingsSectionViewModel isEqual:] */

long FUN_105a9b948(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a9b9e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a9b9ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105a9b9ec;
          }
          goto LAB_105a9b9e0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105a9b9ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a9ba08; end: 105a9ba0f; -[SCSpectaclesSettingsSectionViewModel title] */

undefined8 FUN_105a9ba08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a9ba10; end: 105a9ba17; -[SCSpectaclesSettingsSectionViewModel subtitle] */

undefined8 FUN_105a9ba10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a9ba18; end: 105a9ba1f; -[SCSpectaclesSettingsSectionViewModel cellViewModels] */

undefined8 FUN_105a9ba18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a9ba20; end: 105a9ba5b; -[SCSpectaclesSettingsSectionViewModel .cxx_destruct] */

void FUN_105a9ba20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a9ba5c; end: 105a9bb27; -[SCSpectaclesSettingsSwitchCellViewModel initWithTitle:detailText:switchOn:enabled:type:] */

undefined1 *
FUN_105a9ba5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eba88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9bb28; end: 105a9bb4b; -[SCSpectaclesSettingsSwitchCellViewModel copyWithZone:] */

undefined8 FUN_105a9bb28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a9bb4c; end: 105a9bbcf; -[SCSpectaclesSettingsSwitchCellViewModel hash] */

undefined8 * FUN_105a9bb4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105a9bc80:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a9bc8c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105a9bc8c;
        }
        goto LAB_105a9bc80;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105a9bc8c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105a9bbd0; end: 105a9bca7; -[SCSpectaclesSettingsSwitchCellViewModel isEqual:] */

long FUN_105a9bbd0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a9bc80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a9bc8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105a9bc8c;
        }
        goto LAB_105a9bc80;
      }
    }
    lVar3 = 0;
  }
LAB_105a9bc8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a9bca8; end: 105a9bcaf; -[SCSpectaclesSettingsSwitchCellViewModel title] */

undefined8 FUN_105a9bca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a9bcb0; end: 105a9bcb7; -[SCSpectaclesSettingsSwitchCellViewModel detailText] */

undefined8 FUN_105a9bcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a9bcb8; end: 105a9bcbf; -[SCSpectaclesSettingsSwitchCellViewModel switchOn] */

undefined1 FUN_105a9bcb8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a9bcc0; end: 105a9bcc7; -[SCSpectaclesSettingsSwitchCellViewModel enabled] */

undefined1 FUN_105a9bcc0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105a9bcc8; end: 105a9bccf; -[SCSpectaclesSettingsSwitchCellViewModel type] */

undefined8 FUN_105a9bcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a9bcd0; end: 105a9bcff; -[SCSpectaclesSettingsSwitchCellViewModel .cxx_destruct] */

void FUN_105a9bcd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a9bd00; end: 105a9bdbf; -[SCSpectaclesSettingsDescriptionCellViewModel initWithTitle:body:type:fontType:] */

undefined1 *
FUN_105a9bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eba90;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9bdc0; end: 105a9bde3; -[SCSpectaclesSettingsDescriptionCellViewModel copyWithZone:] */

undefined8 FUN_105a9bdc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a9bde4; end: 105a9be5f; -[SCSpectaclesSettingsDescriptionCellViewModel hash] */

undefined8 * FUN_105a9bde4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105a9bf00:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105a9bf0c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105a9bf0c;
        }
        goto LAB_105a9bf00;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105a9bf0c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105a9be60; end: 105a9bf27; -[SCSpectaclesSettingsDescriptionCellViewModel isEqual:] */

long FUN_105a9be60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a9bf00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a9bf0c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105a9bf0c;
        }
        goto LAB_105a9bf00;
      }
    }
    lVar3 = 0;
  }
LAB_105a9bf0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a9bf28; end: 105a9bf2f; -[SCSpectaclesSettingsDescriptionCellViewModel title] */

undefined8 FUN_105a9bf28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a9bf30; end: 105a9bf37; -[SCSpectaclesSettingsDescriptionCellViewModel body] */

undefined8 FUN_105a9bf30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a9bf38; end: 105a9bf3f; -[SCSpectaclesSettingsDescriptionCellViewModel type] */

undefined8 FUN_105a9bf38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a9bf40; end: 105a9bf47; -[SCSpectaclesSettingsDescriptionCellViewModel fontType] */

undefined8 FUN_105a9bf40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a9bf48; end: 105a9bf77; -[SCSpectaclesSettingsDescriptionCellViewModel .cxx_destruct] */

void FUN_105a9bf48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a9bf78; end: 105a9c03b; +[SCSpectaclesOnboardingFlowFactory onboardingFlowWithType:videoPlaybackMode:videoObjectsFuture:] */

void FUN_105a9bf78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c1ec0;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c1ec8;
  func_0x00010c0e80c0(PTR_PTR_1126c1ec8,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126c1ed0;
  func_0x00010c0e81a0(PTR_PTR_1126c1ed0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0563c0(puVar1,param_2,param_3,param_4,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a9c03c; end: 105a9c067; -[SCSpectaclesOnboardingManager shouldShowPairingOnboarding:] */

bool FUN_105a9c03c(long param_1)

{
  func_0x00010c0d8da0();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 105a9c068; end: 105a9c1c3; -[SCSpectaclesOnboardingManager shouldShowUpdateOnboarding] */

ulong FUN_105a9c068(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfdbb00();
  if ((uVar1 & 1) == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf71280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    param_3 = (int)puVar4;
    uVar5 = 0;
    if (uVar2 != 0) {
      lVar7 = *plStack_110;
      do {
        uVar5 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(uVar1);
          }
          uVar6 = *(ulong *)(lStack_118 + uVar5 * 8);
          uVar3 = uVar6;
          func_0x00010c082060();
          if (((uVar3 & 1) == 0) && (uVar3 = uVar6, func_0x00010c263aa0(), (int)uVar3 != 0)) {
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010c075fc0();
            _objc_release(uVar6);
            param_3 = (int)puVar4;
            if ((uVar3 & 1) != 0) {
              uVar5 = 1;
              goto LAB_105a9c180;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
        uVar2 = uVar1;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
        param_3 = (int)puVar4;
      } while (uVar2 != 0);
      uVar5 = 0;
    }
LAB_105a9c180:
    _objc_release(uVar1);
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be770d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__prefetchCheeriosVideo_11257b5d0);
    return uVar1;
  }
  uVar5 = uVar1;
  func_0x00010c0d9040(uVar1);
  uVar2 = uVar1;
  func_0x00010c0e35e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c107b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return uVar2;
}



/* Entry: 105a9c1c4; end: 105a9c23b; -[SCSpectaclesOnboardingManager warmupSettingsOnboardingIsCheerios:] */

void FUN_105a9c1c4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be770d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prefetchCheeriosVideo_11257b5d0);
    return;
  }
  uVar1 = param_1;
  func_0x00010c0d9040(param_1);
  uVar2 = param_1;
  func_0x00010c0e35e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c107b60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a9c23c; end: 105a9c2af; -[SCSpectaclesOnboardingManager warmupPairingOnboarding:] */

void FUN_105a9c23c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0d8da0();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  if (lVar2 == 8) {
    func_0x00010be770c0(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c0e35e0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107b60(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a9c2b0; end: 105a9c3f3; -[SCSpectaclesOnboardingManager newPairingOnboardingFlow:] */

long FUN_105a9c2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c157840(uVar2);
  puVar5 = PTR_PTR_1126c1ed8;
  uVar3 = param_3;
  func_0x00010bfb0d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c263ac0(puVar5,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1578e0(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c157a40(uVar7);
  bVar1 = (byte)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c157a60();
  func_0x00010c1575a0();
  uVar3 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf700a0(param_3);
  func_0x00010be63260(param_1,param_2,uVar3,uVar4,(uint)uVar2 ^ 1,puVar5,(uint)uVar6 ^ 1,
                      (uint)uVar7 ^ 1,bVar1 ^ 1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105a9c3f4; end: 105a9c573; -[SCSpectaclesOnboardingManager newSettingsOnboardingFlow] */

void FUN_105a9c3f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c1ee0;
  if (lVar3 == 0) {
    func_0x00010bee8d80(param_1,param_2,1);
    func_0x00010c0e7fc0(puVar1,param_2,1,param_1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c0b8300();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb0fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c0b8300();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        lVar2 = *(long *)(param_1 + 8);
        func_0x00010bf71280(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
    }
    lVar2 = lVar3;
    func_0x00010bfd38e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf40c40(lVar3);
    lVar5 = lVar3;
    func_0x00010c263aa0(lVar3);
    func_0x00010be63260(param_1,param_2,lVar2,lVar4,1,lVar5,1,1,1);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 105a9c574; end: 105a9c5eb; -[SCSpectaclesOnboardingManager newCheeriosSettingsOnboardingFlow] */

undefined * FUN_105a9c574(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c1ee0;
  uVar1 = param_1;
  func_0x00010bee8d80(param_1,param_2,8);
  func_0x00010be10560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7fc0(puVar2,param_2,8,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 105a9c5ec; end: 105a9c83b; -[SCSpectaclesOnboardingManager _newOnboardingFlowWithHardwareVersion:deviceColor:shouldShowLaguna:isPhotoSupprtedLaguna:shouldShowMalibu:shouldShowNeptune:shouldShowNewport:shouldShowCheerios:isPostPairingOnboarding:] */

undefined *
FUN_105a9c5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
             int param_6,int param_7,int param_8,uint param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c078880();
  puVar2 = PTR_PTR_1126c1ee0;
  if ((param_8 == 0) || ((int)uVar1 == 0)) {
    uVar1 = param_3;
    func_0x00010c0774a0();
    puVar2 = PTR_PTR_1126c1ee0;
    if ((param_7 == 0) || ((int)uVar1 == 0)) {
      uVar1 = param_3;
      func_0x00010c078aa0();
      puVar2 = PTR_PTR_1126c1ee0;
      if (((char)param_9 == '\0') || ((int)uVar1 == 0)) {
        uVar1 = param_3;
        func_0x00010c075fc0();
        puVar2 = PTR_PTR_1126c1ee0;
        if ((param_5 == 0) || ((int)uVar1 == 0)) {
          uVar1 = param_3;
          func_0x00010c06e7e0();
          puVar2 = PTR_PTR_1126c1ee0;
          if ((param_9._1_1_ != '\0') && ((int)uVar1 != 0)) {
            uVar1 = param_1;
            func_0x00010bee8d80(param_1,param_2,8);
            func_0x00010be10560(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e7fc0(puVar2,param_2,8,uVar1,param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            goto LAB_105a9c818;
          }
          goto LAB_105a9c7a4;
        }
        if (param_6 != 0) {
          func_0x00010bee8d80(param_1,param_2,1);
          goto LAB_105a9c7d0;
        }
        func_0x00010bee8d80(param_1,param_2,0);
        uVar1 = 0;
      }
      else if (param_4 == 0xb) {
        func_0x00010bee8d80(param_1,param_2,7);
        uVar1 = 7;
      }
      else {
        func_0x00010bee8d80(param_1,param_2,6);
        uVar1 = 6;
      }
    }
    else {
      func_0x00010bee8d80(param_1,param_2,3);
      uVar1 = 3;
    }
  }
  else if (param_4 == 9) {
    func_0x00010bee8d80(param_1,param_2,5);
    uVar1 = 5;
  }
  else if (param_4 == 8) {
    func_0x00010bee8d80(param_1,param_2,4);
    uVar1 = 4;
  }
  else {
LAB_105a9c7a4:
    puVar2 = PTR_PTR_1126c1ee0;
    if ((param_9 & 0x10000) != 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_105a9c818;
    }
    func_0x00010bee8d80(param_1,param_2,1);
LAB_105a9c7d0:
    uVar1 = 1;
  }
  func_0x00010c0e7fc0(puVar2,param_2,uVar1,param_1,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105a9c818:
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105a9c83c; end: 105a9c87f; -[SCSpectaclesOnboardingManager newLagunaPhotoUpdateFlow] */

void FUN_105a9c83c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1ee0;
  func_0x00010bee8d80(param_1,param_2,2);
  func_0x00010c0e7fc0(puVar1,param_2,2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 105a9c880; end: 105a9c8e3; -[SCSpectaclesOnboardingManager prefetchOnDemandResourceUrl:] */

void FUN_105a9c880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108080();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105a9c8e4; end: 105a9c917; -[SCSpectaclesOnboardingManager onDemandResourceUrlForFlow:] */

undefined * FUN_105a9c8e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  func_0x00010c27dd80();
  if (param_3 < 8) {
    puVar1 = (&PTR_PTR_1108d2d08)[param_3];
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 105a9c918; end: 105a9c9ff; -[SCSpectaclesOnboardingManager didShowOnboardingFlow:] */

/* WARNING: Possible PIC construction at 0x000105a9c998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a9c99c) */
/* WARNING: Removing unreachable block (ram,0x00010c1fa340) */

void FUN_105a9c918(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c27dd80();
  if (param_3 < 4) {
    if (param_3 - 1U < 2) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      if (param_3 != 0) {
        if (param_3 != 3) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010c1f9ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x10),PTR_s_setSeenMalibuOnboarding__11265c220,1);
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1f9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setSeenLagunaOnboarding__11265c1e8,1);
    return;
  }
  if (param_3 - 4U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fa170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_setSeenNeptuneOnboarding__11265c280,1);
    return;
  }
  if (1 < param_3 - 6U) {
    if (param_3 != 8) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1f9c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_setSeenCheeriosOnboarding__11265c128,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fa1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setSeenNewportOnboarding__11265c298,1);
  return;
}



/* Entry: 105a9ca00; end: 105a9ca5f; -[SCSpectaclesOnboardingManager resetOnboardingTooltipForAllDevices] */

void FUN_105a9ca00(long param_1,undefined8 param_2)

{
  func_0x00010c1f9f00(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010c1fa340(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1f9fe0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1fa160(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1fa1c0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c1f9c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setSeenCheeriosOnboarding__11265c128,0);
  return;
}



/* Entry: 105a9ca60; end: 105a9ca83; -[SCSpectaclesOnboardingManager _videoPlaybackModeForFlowType:] */

undefined8 FUN_105a9ca60(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 6U < 3) {
    return *(undefined8 *)(&UNK_10ddca550 + (param_3 - 6U) * 8);
  }
  return 0;
}



/* Entry: 105a9ca84; end: 105a9cb0b; -[SCSpectaclesOnboardingManager _fetchCheeriosVideoObjectModels] */

void FUN_105a9ca84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = lRam00000001138466e8;
  func_0x00010bf38bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29a6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105a9cb0c; end: 105a9cbf7; -[SCSpectaclesOnboardingManager _prefetchCheeriosVideo] */

void FUN_105a9cb0c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be10560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = auStack_40;
  _objc_copyWeak(puVar1,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}


