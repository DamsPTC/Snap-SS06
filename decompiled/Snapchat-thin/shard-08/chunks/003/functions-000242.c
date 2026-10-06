/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10602ed00; end: 10602ed6b; -[SCFriendUnifiedProfileMapSection setSectionUpdateModel:] */

void FUN_10602ed00(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar2;
  _objc_release(uVar1);
  if ((param_3 == 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    _objc_retain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10602ed6c; end: 10602ee2f; -[SCFriendUnifiedProfileMapSection mapSectionDataProviderDidUpdateViewModels:] */

void FUN_10602ed6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10602ee30; end: 10602ee5b;  */

void FUN_10602ee30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602ee5c; end: 10602ef67; -[SCFriendUnifiedProfileMapSection _updateSection] */

void FUN_10602ee5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010c0b8ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010c0b99a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2953c0(*(undefined8 *)(param_2 + 0x70));
  _objc_initWeak(auStack_48,param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10602ef68;
  puStack_70 = &UNK_1108502a8;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  uStack_50 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10602ef68; end: 10602efaf;  */

void FUN_10602ef68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x40) & 1) == 0)) {
    func_0x00010bdcedc0(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10602efb0; end: 10602f37f; -[SCFriendUnifiedProfileMapSection _applyViewModelUpdatesWithMapViewModel:mapProfileCardCellViewModel:profileCardViewHeight:] */

void FUN_10602efb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar16 = *(ulong *)(param_2 + 8);
  _objc_retain(uVar16);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = param_5;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  lVar14 = param_2;
  func_0x00010bdd5e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(long *)(param_2 + 0x28) = lVar14;
  _objc_release(uVar1);
  lVar14 = param_2 + 0x60;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar14 == 0) {
    func_0x00010c1f96e0(param_2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    uVar5 = *(ulong *)(param_2 + 0x28);
    func_0x00010bf529e0();
    for (; uVar6 = uVar16, func_0x00010bf529e0(), uVar5 < uVar6; uVar5 = uVar5 + 1) {
      func_0x00010bef92c0(puVar3);
    }
    uVar5 = uVar16;
    func_0x00010bf529e0();
    while( true ) {
      uVar6 = *(ulong *)(param_2 + 0x28);
      func_0x00010bf529e0();
      if (uVar6 <= uVar5) break;
      func_0x00010bef92c0(puVar2);
      uVar5 = uVar5 + 1;
    }
    uVar5 = uVar16;
    func_0x00010bf529e0();
    uVar6 = *(ulong *)(param_2 + 0x28);
    func_0x00010bf529e0();
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        uVar7 = *(ulong *)(param_2 + 0x28);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar16;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(uVar7);
        uVar9 = uVar7;
        uVar15 = uVar8;
        if (uVar8 == uVar7) {
LAB_10602f24c:
          _objc_release(uVar9);
          _objc_release(uVar15);
        }
        else {
          if (uVar7 == 0) {
            _objc_release();
LAB_10602f194:
            uVar10 = param_2 + 0x60;
            _objc_loadWeakRetained();
            uVar9 = uVar10;
            func_0x00010bf40920();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = 0;
            _objc_retain(0);
            _objc_release(uVar10);
            lVar14 = param_2;
            func_0x00010bdda180();
            puVar12 = PTR_DAT_1126a4fe8;
            if ((int)lVar14 != 0) {
              _objc_retain(uVar9);
              uVar11 = uVar9;
              func_0x00010010fab4(uVar9,puVar12);
              uVar10 = uVar9;
              if ((int)uVar11 == 0) {
                uVar10 = 0;
              }
              _objc_retain(uVar10);
              _objc_release(uVar9);
              if (uVar10 != 0) {
                func_0x00010c2226c0(uVar9);
                _objc_release(uVar9);
                uVar15 = 0;
                goto LAB_10602f24c;
              }
            }
            func_0x00010bef92c0(puVar4);
            goto LAB_10602f24c;
          }
          uVar9 = uVar8;
          func_0x00010c071ae0();
          _objc_release(uVar7);
          _objc_release(uVar8);
          if ((uVar9 & 1) == 0) goto LAB_10602f194;
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
    puVar12 = puVar2;
    func_0x00010bf529e0();
    if (((puVar12 == (undefined *)0x0) &&
        (puVar12 = puVar3, func_0x00010bf529e0(), puVar12 == (undefined *)0x0)) &&
       (puVar12 = puVar4, func_0x00010bf529e0(), puVar12 == (undefined *)0x0)) {
      uVar13 = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(uVar13);
      uVar1 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = uVar13;
      _objc_release(uVar1);
      lVar14 = *(long *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
    else {
      puVar12 = PTR_PTR_1126b48b0;
      func_0x00010bf34220();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_2 + 0x58);
      *(undefined **)(param_2 + 0x58) = puVar12;
      _objc_release(uVar1);
      lVar14 = param_2 + 0x60;
      _objc_loadWeakRetained(lVar14);
      func_0x00010bf40a00();
    }
    _objc_release(lVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(uVar16);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10602f380; end: 10602f413; -[SCFriendUnifiedProfileMapSection _canUpdateViewModel:cell:] */

uint FUN_10602f380(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7360;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  uVar4 = 0;
  if ((param_4 != 0) && ((uVar2 & 1) == 0)) {
    puVar1 = PTR_PTR_1126c7348;
    _objc_opt_class(PTR_PTR_1126c7348);
    lVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    uVar4 = (uint)lVar3;
  }
  _objc_release(param_4);
  return uVar4 & 1;
}



/* Entry: 10602f414; end: 10602f563; -[SCFriendUnifiedProfileMapSection _prepareAndReturnMapCellForIndex:viewModel:] */

void FUN_10602f414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c7348;
  _objc_opt_class(PTR_PTR_1126c7348);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_DAT_1126a4e90;
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010010fab4(uVar1,puVar3);
  uVar2 = uVar1;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar1);
  func_0x00010c161980(uVar2);
  func_0x00010bde5820(param_1);
  lVar5 = *(long *)(param_1 + 0x70);
  func_0x00010bf465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,uVar1);
  }
  func_0x00010c2226c0(uVar1);
  _objc_retain(uVar1);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602f564; end: 10602f64b; -[SCFriendUnifiedProfileMapSection _prepareAndReturnMapProfileCardCellForIndex:viewModel:] */

void FUN_10602f564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c7350;
  _objc_opt_class(PTR_PTR_1126c7350);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x70);
  func_0x00010bf465c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,uVar1);
  }
  func_0x00010c2226c0(uVar1);
  _objc_release(lVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602f64c; end: 10602f6af; -[SCFriendUnifiedProfileMapSection _buildCellViewModels] */

void FUN_10602f64c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010befa120(puVar1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010befa120(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10602f6b0; end: 10602f7a7; -[SCFriendUnifiedProfileMapSection _configureRoundedCornersForCell:atIndex:] */

void FUN_10602f6b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5298);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010bf529e0();
    func_0x00010c1ee980(param_3);
    puVar2 = PTR_DAT_1126a52a0;
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    lVar3 = param_3;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(param_3);
    if ((int)lVar4 != 0) {
      func_0x00010c1fce20(param_3);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10602f7a8; end: 10602f83f; -[SCFriendUnifiedProfileMapSection setActionHandler:] */

void FUN_10602f7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  puVar1 = PTR_DAT_1126a4e90;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010010fab4(uVar3,puVar1);
  uVar4 = uVar3;
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar3);
  func_0x00010c161980(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10602f840; end: 10602f847; -[SCFriendUnifiedProfileMapSection sectionUpdateModel] */

undefined8 FUN_10602f840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10602f848; end: 10602f85f; -[SCFriendUnifiedProfileMapSection delegate] */

void FUN_10602f848(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602f860; end: 10602f86b; -[SCFriendUnifiedProfileMapSection setDelegate:] */

void FUN_10602f860(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 10602f86c; end: 10602f873; -[SCFriendUnifiedProfileMapSection dataLoadingStatus] */

undefined8 FUN_10602f86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10602f874; end: 10602f87b; -[SCFriendUnifiedProfileMapSection setDataLoadingStatus:] */

void FUN_10602f874(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10602f87c; end: 10602f883; -[SCFriendUnifiedProfileMapSection actionHandler] */

undefined8 FUN_10602f87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10602f884; end: 10602f88b; -[SCFriendUnifiedProfileMapSection sectionDataProvider] */

undefined8 FUN_10602f884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10602f88c; end: 10602f923; -[SCFriendUnifiedProfileMapSection .cxx_destruct] */

void FUN_10602f88c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602f924; end: 10602fa93; -[SCFriendUnifiedProfileMapSectionActionHandler initWithUserId:dataProvider:dataSource:closeSelfInsteadOfNavigatingMapOnTap:displayContentDelegate:statusFetcher:mapScopeLauncher:fullMapScopeServices:] */

undefined1 *
FUN_10602f924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ef2c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10602fa94; end: 10602fb0b; -[SCFriendUnifiedProfileMapSectionActionHandler setPresentingViewController:] */

void FUN_10602fa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x48,param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0b9120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1e1580(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10602fb0c; end: 10602fb83; -[SCFriendUnifiedProfileMapSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10602fb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ebadf8);
  }
  else {
    func_0x00010be2bfe0(param_1);
    uVar1 = 1;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 10602fb84; end: 10602fbff; -[SCFriendUnifiedProfileMapSectionActionHandler _handleMapTap] */

void FUN_10602fb84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar1);
    func_0x00010bf84b00();
  }
  else {
    puVar1 = PTR_PTR_1126b5c58;
    func_0x00010bfb92a0(PTR_PTR_1126b5c58,param_2,*(undefined8 *)(param_1 + 8),0,0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6d320(param_1,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10602fc00; end: 10602fd2b; -[SCFriendUnifiedProfileMapSectionActionHandler _openMapWithDestination:] */

void FUN_10602fc00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4dea0();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126b5c50;
    _objc_alloc(PTR_PTR_1126b5c50);
    func_0x00010c031b80();
    lVar1 = param_1;
    func_0x00010becd5c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf22f00(uVar5,param_2,param_1,puVar3,puVar2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x38),param_2,uVar5,param_1);
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10602fd2c; end: 10602fdf3; -[SCFriendUnifiedProfileMapSectionActionHandler mapScopeDidEnd:] */

void FUN_10602fd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128e40();
  _objc_release(uVar1);
  func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10602fdf4;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010bf6f440(uVar1,param_2,&puStack_58);
  _objc_release(uVar1);
  return;
}



/* Entry: 10602fdf4; end: 10602fe23;  */

void FUN_10602fdf4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10602fe24; end: 10602fed7; -[SCFriendUnifiedProfileMapSectionActionHandler _topMostPresentedViewController] */

void FUN_10602fe24(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar2 != 0) {
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) break;
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602fed8; end: 10602feef; -[SCFriendUnifiedProfileMapSectionActionHandler presentingViewController] */

void FUN_10602fed8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602fef0; end: 10602ff57; -[SCFriendUnifiedProfileMapSectionActionHandler .cxx_destruct] */

void FUN_10602fef0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602ff58; end: 1060301d3; -[SCFriendUnifiedProfileMapSectionDataProvider initWithDataSource:friendUserId:profileSessionID:mapSnapshotScopeServices:mapSnapshotScopeExposer:embeddedMapFactoryServices:mapFriendCompassFactoryServices:mapFriendProfileCardFactoryServices:circumstanceEngine:] */

undefined8 *
FUN_10602ff58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ef2d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[10];
    puVar1[10] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
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
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c7368;
    _objc_alloc(PTR_PTR_1126c7368);
    func_0x00010c015760();
    uVar2 = puVar1[6];
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
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



/* Entry: 1060301d4; end: 106030223; -[SCFriendUnifiedProfileMapSectionDataProvider dealloc] */

void FUN_1060301d4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x48));
  func_0x00010be8c780(param_1);
  puStack_28 = PTR_PTR_1126ef2d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106030224; end: 1060302ef; -[SCFriendUnifiedProfileMapSectionDataProvider _removeMapSnapshotScope] */

void FUN_106030224(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1060302a8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 1060302f0; end: 106030317; -[SCFriendUnifiedProfileMapSectionDataProvider mapCellViewModel] */

void FUN_1060302f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106030318; end: 10603033f; -[SCFriendUnifiedProfileMapSectionDataProvider mapProfileCardCellViewModel] */

void FUN_106030318(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106030340; end: 106030347; -[SCFriendUnifiedProfileMapSectionDataProvider valdiMapProfileCardHeight] */

undefined8 FUN_106030340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106030348; end: 106030417; -[SCFriendUnifiedProfileMapSectionDataProvider configurationBlockForMapCell] */

void FUN_106030348(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1060303d0;
  puStack_38 = &UNK_110845ae0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106030418; end: 1060304e7; -[SCFriendUnifiedProfileMapSectionDataProvider configurationBlockForMapProfileCardCell] */

void FUN_106030418(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1060304a0;
  puStack_38 = &UNK_110845ae0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1060304e8; end: 106030517; -[SCFriendUnifiedProfileMapSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1060304e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106030518; end: 10603068b; -[SCFriendUnifiedProfileMapSectionDataProvider setUp] */

void FUN_106030518(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010be89560();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(puVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0b8dc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 10603068c; end: 1060306d3;  */

void FUN_10603068c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060306d4; end: 106030703; -[SCFriendUnifiedProfileMapSectionDataProvider tearDown] */

void FUN_1060306d4(long param_1)

{
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c26ab80(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010be8c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeMapSnapshotScope_112580b80);
  return;
}



/* Entry: 106030704; end: 106030803; -[SCFriendUnifiedProfileMapSectionDataProvider _registerForMapProfileCardCellHeightUpdates] */

void FUN_106030704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0x406dc00000000000;
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bfe09a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106030804; end: 1060308af;  */

void FUN_106030804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1060308b0; end: 1060308d3;  */

void FUN_1060308b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf885a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bedb210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__updateMapProfileCardCellHeight__112594628);
  return;
}



/* Entry: 1060308d4; end: 106030a33; -[SCFriendUnifiedProfileMapSectionDataProvider _onDataModelUpdated:] */

void FUN_1060308d4(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar6;
  long lVar7;
  long lVar5;
  
  lVar3 = param_1;
  func_0x00010bdd64c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdd64e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  _objc_retain(lVar3);
  if (lVar7 == lVar3) {
    uVar1 = 1;
  }
  else if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = lVar7;
    func_0x00010c071ae0(lVar7,param_2,lVar3);
    uVar1 = (uint)lVar5;
  }
  _objc_release(lVar3);
  _objc_release(lVar7);
  lVar7 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar7);
  _objc_retain(lVar4);
  if (lVar7 == lVar4) {
    uVar2 = 1;
LAB_106030998:
    _objc_release(lVar4);
    _objc_release(lVar7);
    if ((uVar1 & uVar2 & 1) != 0) goto LAB_106030a14;
  }
  else {
    if (lVar4 != 0) {
      lVar5 = lVar7;
      func_0x00010c071ae0(lVar7,param_2,lVar4);
      uVar2 = (uint)lVar5;
      goto LAB_106030998;
    }
    _objc_release(lVar7);
  }
  if ((*(long *)(param_1 + 8) == 0) && (lVar3 != 0)) {
    func_0x00010c0dd360(*(undefined8 *)(param_1 + 0x88));
  }
  _objc_retain(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar3;
  _objc_release(uVar6);
  _objc_retain(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar4;
  _objc_release(uVar6);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b9c60();
  _objc_release(param_1);
LAB_106030a14:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106030a34; end: 106030b0b; -[SCFriendUnifiedProfileMapSectionDataProvider _buildMapCellViewModelFromDataModel:] */

void FUN_106030a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bf51c80();
  _CLLocationCoordinate2DIsValid();
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar2 = PTR_PTR_1126c7370;
    _objc_alloc(PTR_PTR_1126c7370);
    func_0x00010c03f760(param_1,param_2);
    puVar3 = PTR_PTR_1126c7358;
    _objc_alloc(PTR_PTR_1126c7358);
    func_0x00010c046180();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106030b0c; end: 106030b3f; -[SCFriendUnifiedProfileMapSectionDataProvider _buildMapProfileCardCellViewModel] */

void FUN_106030b0c(long param_1)

{
  _objc_alloc(PTR_PTR_1126c7360);
  func_0x00010c0156a0(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106030b40; end: 106030ba3; -[SCFriendUnifiedProfileMapSectionDataProvider _updateMapProfileCardCellHeight:] */

void FUN_106030b40(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(double *)(param_2 + 0x70) != param_1) {
    *(double *)(param_2 + 0x70) = param_1;
    lVar1 = param_2;
    func_0x00010bdd64e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_2 + 0x10) = lVar1;
    _objc_release(uVar2);
    param_2 = param_2 + 0x78;
    _objc_loadWeakRetained(param_2);
    func_0x00010c0b9c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106030ba4; end: 106030c7b; -[SCFriendUnifiedProfileMapSectionDataProvider _configureMapCardCell:] */

void FUN_106030ba4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c7348;
  _objc_opt_class(PTR_PTR_1126c7348);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x0001090223f4();
  if (iVar2 == 0) {
    func_0x00010c1c26a0(uVar1);
    func_0x00010c1c2680(uVar1);
  }
  else {
    func_0x000109022458(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c193160(uVar1);
    func_0x000109022484(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c193140(uVar1);
    func_0x00010902241c(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c212380(uVar1);
    func_0x00010c194220(uVar1);
    func_0x00010c1c20c0(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106030c7c; end: 106030d13; -[SCFriendUnifiedProfileMapSectionDataProvider _configureMapProfileCardCell:] */

void FUN_106030c7c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c7350;
  _objc_opt_class(PTR_PTR_1126c7350);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c10ed20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    _objc_release(uVar5);
  }
  func_0x00010c1c24c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106030d14; end: 106030d2b; -[SCFriendUnifiedProfileMapSectionDataProvider dataProviderDelegate] */

void FUN_106030d14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106030d2c; end: 106030d37; -[SCFriendUnifiedProfileMapSectionDataProvider setDataProviderDelegate:] */

void FUN_106030d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106030d38; end: 106030d3f; -[SCFriendUnifiedProfileMapSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106030d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106030d40; end: 106030d47; -[SCFriendUnifiedProfileMapSectionDataProvider mapFriendProfileCardPresenter] */

undefined8 FUN_106030d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106030d48; end: 106030e1b; -[SCFriendUnifiedProfileMapSectionDataProvider .cxx_destruct] */

void FUN_106030d48(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 106030e1c; end: 106031233; -[SCGroupLocationSharingController initWithGroupId:userSession:preferencesProvider:mapPersonLocationsProvider:mapPeopleFriendsProvider:mapPeopleGroupsProvider:] */

undefined8 *
FUN_106030e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_1126ef2d8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 7,param_4);
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar6 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    puVar3 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0ecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar3 = puVar4;
    }
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c09fa60();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10603123c;
    puStack_a0 = &UNK_1108d71b0;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[10];
    puVar1[10] = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c1067e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10603126c;
    puStack_c8 = &UNK_1108f3470;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[8];
    puVar1[8] = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfba660();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar5 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[9];
    puVar1[9] = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128900(0x404e000000000000);
    _objc_release(uVar2);
    func_0x00010be0a540(puVar1);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106031234; end: 10603123b;  */

void FUN_106031234(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10603123c; end: 1060312b3;  */

void FUN_10603123c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060312b4; end: 106031367;  */

void FUN_1060312b4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106031368; end: 106031397;  */

void FUN_106031368(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106031398; end: 10603139f;  */

void FUN_106031398(void)

{
  return;
}



/* Entry: 1060313a0; end: 1060313f7; -[SCGroupLocationSharingController _onLocationSharingPreferencesUpdated:] */

void FUN_1060313a0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060313f8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1060313f8; end: 106031403;  */

void FUN_1060313f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCellTypesAnimated__112592da8,0);
  return;
}



/* Entry: 106031404; end: 1060314ff; -[SCGroupLocationSharingController _ensureLocationPreferencesFetched] */

void FUN_106031404(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7100();
  if ((uVar2 & 1) == 0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf96720(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106031500; end: 10603153f;  */

void FUN_106031500(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x00010bed5000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106031540; end: 106031623; -[SCGroupLocationSharingController cellTypes] */

void FUN_106031540(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if ((uVar1 != 0) &&
     (uVar2 = uVar1, func_0x00010c075ca0(), puVar7 = PTR____NSArray0__struct_11034ab48,
     (uVar2 & 1) == 0)) {
    puVar7 = *(undefined **)(param_1 + 8);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR____NSArray0__struct_11034ab48;
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_106031604;
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      lVar3 = param_1;
      func_0x00010c292760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        func_0x00010befa120(puVar7,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4390);
      }
      puVar5 = puVar7;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar5;
      _objc_release(uVar6);
      _objc_release(puVar7);
      puVar7 = *(undefined **)(param_1 + 8);
    }
    _objc_retain(puVar7);
  }
LAB_106031604:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106031624; end: 106031713; -[SCGroupLocationSharingController _updateCellTypesAnimated:] */

void FUN_106031624(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c075ca0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      _objc_retain(uVar4);
      _objc_release(uVar4);
      uVar2 = param_1;
      func_0x00010bf34200();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c071b60();
      _objc_release(uVar4);
      if ((uVar3 & 1) == 0) {
        func_0x00010bf63ca0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf36a60();
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 106031714; end: 10603187f; -[SCGroupLocationSharingController userIdsForFriendsWithLocations] */

void FUN_106031714(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0760e0(0x4082c00000000000);
  _objc_release(uVar1);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x30);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1060317ec;
    puStack_48 = &UNK_110908e38;
    uStack_40 = uVar3;
    lStack_38 = param_1;
    _objc_retain();
    func_0x0001006372a4(puVar4,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106031880; end: 106031933; -[SCGroupLocationSharingController _topMostPresentedViewController] */

void FUN_106031880(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar2 != 0) {
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) break;
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106031934; end: 10603194b; -[SCGroupLocationSharingController presentingViewController] */

void FUN_106031934(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10603194c; end: 106031957; -[SCGroupLocationSharingController setPresentingViewController:] */

void FUN_10603194c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 106031958; end: 10603196f; -[SCGroupLocationSharingController dataListener] */

void FUN_106031958(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106031970; end: 10603197b; -[SCGroupLocationSharingController setDataListener:] */

void FUN_106031970(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 10603197c; end: 106031a17; -[SCGroupLocationSharingController .cxx_destruct] */

void FUN_10603197c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 106031a18; end: 106031b57; -[SCGroupMapNoLocationView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106031a18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ef2e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_11273d534;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1677c0(0x3fe999999999999a,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11273d538;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106031b58; end: 106031c37; -[SCGroupMapNoLocationView setBitmojiImage:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106031b58(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11273d538),param_2,param_3);
  func_0x00010c1cbe20(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc999999999999a;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106031c38;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(uVar2,0,puVar1,param_2,2,&puStack_70,0);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106031c38; end: 106031c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106031c38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273d538),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106031c5c; end: 106031c73; -[SCGroupMapNoLocationView setContentInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106031c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11273d530);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106031c74; end: 106031e17; -[SCGroupMapNoLocationView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106031c74(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ef2e0;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11273d534));
  func_0x00010bf20c00(param_5);
  dVar5 = param_1;
  dVar7 = param_2;
  dVar9 = param_3;
  dVar10 = param_4;
  func_0x00010bf4c7e0(param_5);
  lVar4 = (long)_DAT_11273d538;
  lVar1 = *(long *)(param_5 + lVar4);
  dVar6 = dVar5;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    dVar8 = 64.0;
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar8 = 64.0;
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar8 = (dVar6 * 64.0) / dVar8;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  param_1 = param_1 + dVar7;
  param_3 = param_3 - (dVar7 + dVar10);
  param_4 = param_4 - (dVar5 + dVar9);
  func_0x00010c1739e0(0,0,dVar8,0x4050000000000000,*(undefined8 *)(param_5 + lVar4));
  dVar6 = param_1;
  _CGRectGetMidX(param_1,param_2 + dVar5,param_3,param_4);
  _CGRectGetMidY(param_1,param_2 + dVar5,param_3,param_4);
  func_0x00010c17a6a0(dVar6,param_1,*(undefined8 *)(param_5 + lVar4));
  return;
}



/* Entry: 106031e18; end: 106031e2f; -[SCGroupMapNoLocationView contentInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106031e18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d530);
}



/* Entry: 106031e30; end: 106031e6f; -[SCGroupMapNoLocationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106031e30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d538,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d534,0);
  return;
}



/* Entry: 106031e70; end: 106031fe3; -[SCGroupMapViewCarouselGroupItem initWithGroup:userSession:mapPeopleFriendsProvider:mapPeopleGroupsProvider:mapPersonLocationsProvider:imageDownloader:displayNameProvider:] */

undefined1 *
FUN_106031e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ef2e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106031fe4; end: 1060321df; -[SCGroupMapViewCarouselGroupItem viewForPage] */

void FUN_106031fe4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7378;
  _objc_alloc();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar10 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007620();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar10);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126c7380;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c156a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c7388;
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  puVar12 = puVar9;
  func_0x00010c043800();
  iVar11 = (int)puVar12;
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  _objc_retain(uVar14);
  lVar10 = *(long *)(puVar1 + 8);
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = lVar2;
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    func_0x000108d31a2c(lVar2,&PTR___NSConcreteGlobalBlock_110908e98);
    puVar1 = PTR_PTR_1126c7390;
    func_0x00010bf20cc0(PTR_PTR_1126c7390);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar14);
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar4 = 0x3fc999999999999a;
    if (iVar11 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar3);
    func_0x00010c27ac60(uVar4,puVar8);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
  _objc_release(uVar14);
  _objc_release(uVar3);
  return;
}



/* Entry: 1060321e0; end: 106032383; -[SCGroupMapViewCarouselGroupItem didFocusAnimated:noLocationOverlayView:cameraSubject:] */

void FUN_1060321e0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x000108d31a2c(lVar3,&PTR___NSConcreteGlobalBlock_110908e98);
    puVar4 = PTR_PTR_1126c7390;
    func_0x00010bf20cc0(PTR_PTR_1126c7390);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar5 = 0x3fc999999999999a;
    if (param_3 == 0) {
      uVar5 = 0;
    }
    _objc_retain(param_4);
    func_0x00010c27ac60(uVar5,puVar1);
    _objc_release(param_4);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106032384; end: 106032413;  */

void FUN_106032384(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c0fa5c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106032414; end: 106032427;  */

void FUN_106032414(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 106032428; end: 10603242f; -[SCGroupMapViewCarouselGroupItem isGroupCard] */

undefined8 FUN_106032428(void)

{
  return 1;
}



/* Entry: 106032430; end: 106032433; -[SCGroupMapViewCarouselGroupItem didUnfocus] */

void FUN_106032430(void)

{
  return;
}



/* Entry: 106032434; end: 10603249b; -[SCGroupMapViewCarouselGroupItem .cxx_destruct] */

void FUN_106032434(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603249c; end: 1060325e7; -[SCGroupMapViewCarouselPersonItem initWithPerson:userSession:mapPeopleFriendsProvider:mapPersonLocationsProvider:imageDownloader:mapBitmojiAvatarGenerator:] */

undefined1 *
FUN_10603249c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef2f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060325e8; end: 1060327af; -[SCGroupMapViewCarouselPersonItem viewForPage] */

void FUN_1060325e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7398;
  _objc_alloc();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar9 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c007760();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126c7380;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c156a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c7388;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  puVar11 = puVar8;
  func_0x00010c043800();
  iVar10 = (int)puVar11;
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  _objc_retain(uVar12);
  _objc_storeWeak(puVar1 + 0x18,uVar3);
  lVar9 = *(long *)(puVar1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar9);
  puVar7 = PTR_PTR_1126c7390;
  if (lVar2 != 0) {
    func_0x00010bf51c80(lVar2);
    func_0x00010bf51d60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar12);
    _objc_release(puVar7);
  }
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar4 = 0x3fc999999999999a;
  if (iVar10 == 0) {
    uVar4 = 0;
  }
  _objc_retain(lVar2);
  _objc_retain(uVar3);
  func_0x00010c27ac60(uVar4,puVar7);
  if (lVar2 == 0) {
    func_0x00010bedc940(puVar1);
    puVar7 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar7);
    func_0x00010be0ff60(puVar1);
    _objc_release(puVar7);
  }
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar12);
  return;
}



/* Entry: 1060327b0; end: 106032997; -[SCGroupMapViewCarouselPersonItem didFocusAnimated:noLocationOverlayView:cameraSubject:] */

void FUN_1060327b0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_storeWeak(param_1 + 0x18,param_4);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c7390;
  if (lVar3 != 0) {
    func_0x00010bf51c80(lVar3);
    func_0x00010bf51d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc999999999999a;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  _objc_retain(lVar3);
  _objc_retain(param_4);
  func_0x00010c27ac60(uVar2,puVar4);
  if (lVar3 == 0) {
    func_0x00010bedc940(param_1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be0ff60(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 106032998; end: 1060329af;  */

void FUN_106032998(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1060329b0; end: 1060329bb; -[SCGroupMapViewCarouselPersonItem didUnfocus] */

void FUN_1060329b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,0);
  return;
}



/* Entry: 1060329bc; end: 106032b13; -[SCGroupMapViewCarouselPersonItem _fetchBitmojiIfNeededWithUserSession:] */

void FUN_1060329bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1acc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c58b8;
  func_0x00010bf3e8e0(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfa5480(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106032b14; end: 106032bd3;  */

void FUN_106032b14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000108ffe710();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      param_2 = lVar2;
      func_0x000106b1d04c(lVar2,1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_2;
    _objc_release(uVar3);
    func_0x00010bedc940(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106032bd4; end: 106032c4f; -[SCGroupMapViewCarouselPersonItem _updateOverlayAnimated:] */

void FUN_106032bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
    }
    func_0x00010c171100(lVar1,param_2,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106032c50; end: 106032c77; -[SCGroupMapViewCarouselPersonItem representedPerson] */

void FUN_106032c50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106032c78; end: 106032ce7; -[SCGroupMapViewCarouselPersonItem .cxx_destruct] */

void FUN_106032c78(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


