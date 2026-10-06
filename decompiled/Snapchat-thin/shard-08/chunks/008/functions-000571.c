/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066dca04; end: 1066dca77; -[SCLensExplorerMediator _scrollToPreselectedItemIfNeeded] */

void FUN_1066dca04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)puVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be38dc0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c1525c0(*(undefined8 *)(param_1 + 0x18),param_2,lVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1066dca78; end: 1066dcba3; -[SCLensExplorerMediator _indexPathForItemIdenfier:] */

void FUN_1066dca78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0x7fffffffffffffff;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar2 = lVar1;
  func_0x00010bfece40();
  _objc_release(lVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066dcba4; end: 1066dcbef;  */

bool FUN_1066dcba4(long param_1,undefined8 param_2)

{
  func_0x00010bfecd80(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
  return *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) != 0x7fffffffffffffff;
}



/* Entry: 1066dcbf0; end: 1066dce0f; -[SCLensExplorerMediator didUpdateSections:insertedIndexes:removedIndexes:movedIndexes:completion:] */

void FUN_1066dcbf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(ulong *)(param_1 + 0x30);
  _objc_opt_respondsToSelector(uVar2,PTR_s_appliesSectionUpdatesWithoutAnim_11259f9d0);
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bf080a0();
    if (iVar1 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50));
      func_0x00010c128b60(*(undefined8 *)(param_1 + 0x18));
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
      func_0x00010be9c180(param_1);
      goto LAB_1066dcda4;
    }
  }
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1066dce10;
  puStack_98 = &UNK_110935378;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_copyWeak(auStack_b8,auStack_68);
  _objc_retain(param_7);
  func_0x00010c0f8420(uVar3);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
LAB_1066dcda4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066dce10; end: 1066dcfb3;  */

void FUN_1066dce10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(lVar2 + 0x50));
    func_0x00010bf6c740(param_2);
    lVar6 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lVar8 * 8);
        uVar4 = uVar7;
        func_0x00010bfbac20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c271e20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0d16e0(param_2);
        _objc_release(uVar7);
        _objc_release(uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    func_0x00010c066dc0(param_2);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (*(long *)(param_2 + 0x20) != 0) {
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    }
    func_0x00010be9c180(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1066dcfb4; end: 1066dcffb;  */

void FUN_1066dcfb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    func_0x00010be9c180(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066dcffc; end: 1066dd293; -[SCLensExplorerMediator didUpdateSection:insertedIndexes:removedIndexes:movedIndexes:completion:] */

void FUN_1066dcffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc0000000;
    pcStack_90 = FUN_1066dd294;
    puStack_88 = &UNK_1109353a8;
    ppuVar3 = &puStack_a0;
    lStack_80 = lVar2;
    _objc_retainBlock(ppuVar3);
    uVar4 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_a8,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_b8,auStack_a8);
    _objc_retain(param_3);
    _objc_retain(uVar5);
    _objc_retain(param_6);
    lStack_b0 = lVar2;
    _objc_retain(uVar4);
    _objc_retain(param_7);
    func_0x00010c0f8420(uVar6);
    _objc_release(param_7);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066dd294; end: 1066dd2cb;  */

void FUN_1066dd294(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c2827c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForItem_inSection__1125d8dd0,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1066dd2cc; end: 1066dd4ef;  */

void FUN_1066dd2cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b900();
    if ((int)uVar4 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(lVar2 + 0x50));
      func_0x00010bf6c100(param_2);
      lVar10 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar10);
      lVar5 = lVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar10);
          }
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          uVar11 = *(undefined8 *)(lVar9 * 8);
          uVar4 = uVar11;
          func_0x00010bfbac20(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          func_0x00010bfed020(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010c271e20(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          func_0x00010bfed020(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          func_0x00010c0d1540(param_2);
          _objc_release(puVar7);
          _objc_release(puVar6);
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        lVar5 = lVar10;
        func_0x00010bf52a60();
      }
      _objc_release(lVar10);
      func_0x00010c066a40(param_2);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066dd4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066dd4f0; end: 1066dd503;  */

void FUN_1066dd4f0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066dd4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066dd504; end: 1066dd50b; -[SCLensExplorerMediator loggingConfigurationForSectionConfiguration:] */

void FUN_1066dd504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b39b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_loggingConfigurationForSectionCo_11260a878);
  return;
}



/* Entry: 1066dd50c; end: 1066dd513; -[SCLensExplorerMediator handleFetchError:] */

void FUN_1066dd50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_handleFetchError__1125d1e40);
  return;
}



/* Entry: 1066dd514; end: 1066dd54f; -[SCLensExplorerMediator didRestoreNetworkConnection] */

void FUN_1066dd514(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06db40();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c125350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_refreshItemsForSectionIdentifier_112626ef0,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1066dd550; end: 1066dd5c3; -[SCLensExplorerMediator _loggerForSection:] */

void FUN_1066dd550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1556c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf33f60(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066dd5c4; end: 1066dd65f; -[SCLensExplorerMediator .cxx_destruct] */

void FUN_1066dd5c4(long param_1)

{
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



/* Entry: 1066dd660; end: 1066ddbaf; -[SCLensExplorerSectionViewModel initWithMediator:dataStore:lensExplorerImagesDataStore:sectionHeaderProvider:actionHandler:creatorsBlocklist:viewModelConfiguration:sectionConfiguration:sectionLayoutConfiguration:lensPerformerProvider:avatarProvider:avatarImageDownloading:dynamicLayoutFetcher:dynamicLayoutBuilder:lazyDailyGameBadgeProvider:selectionTracker:performer:styleOverride:studySettings:] */

undefined8 *
FUN_1066dd660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f2838;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cd0a0;
    _objc_alloc();
    func_0x00010c01d160();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cd0a8;
    _objc_alloc();
    func_0x00010c01d140();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ccb40;
    _objc_alloc();
    func_0x00010bfeeda0();
    puVar4 = PTR_PTR_1126cd0b0;
    _objc_alloc();
    uVar2 = param_10;
    func_0x00010c130180(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039a20();
    uVar6 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cd0b8;
    _objc_alloc();
    uVar2 = param_10;
    func_0x00010c130180(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce460(param_11);
    func_0x00010c01d180();
    uVar6 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_19);
    uVar2 = puVar1[2];
    puVar1[2] = param_19;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cd068;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar4;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    puVar1[4] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c292ae0();
    *(bool *)(puVar1 + 3) = puVar5 == (undefined *)0x1;
    _objc_release(puVar4);
    puVar1[0x15] = param_20;
    uVar2 = param_21;
    func_0x00010c110320();
    *(char *)(puVar1 + 0x18) = (char)uVar2;
    _objc_release(puVar3);
  }
  _objc_release(param_21);
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



/* Entry: 1066ddbb0; end: 1066ddbb3; -[SCLensExplorerSectionViewModel warmup] */

void FUN_1066ddbb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnDataStoreItems_11258f480);
  return;
}



/* Entry: 1066ddbb4; end: 1066ddbbb; -[SCLensExplorerSectionViewModel cancelAllDownloads] */

void FUN_1066ddbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_cancelAllDownloads_1125a90d8);
  return;
}



/* Entry: 1066ddbbc; end: 1066ddbe3; -[SCLensExplorerSectionViewModel sectionConfiguration] */

void FUN_1066ddbbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066ddbe4; end: 1066ddc0b; -[SCLensExplorerSectionViewModel sectionLayoutConfiguration] */

void FUN_1066ddbe4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066ddc0c; end: 1066ddd4f; -[SCLensExplorerSectionViewModel identifierToCellClassMap] */

void FUN_1066ddc0c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *(long *)(puVar1 + 0x90);
    func_0x00010bfdfcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = lVar2;
    func_0x00010c13fda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar1 & 1) == 0) {
      _objc_release(lVar5);
    }
    else {
      lVar3 = lVar2;
      func_0x00010c29d2e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80();
      _objc_release(lVar3);
      _objc_release(lVar5);
      if ((int)puVar4 != 0) {
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar2 + 0x20),PTR_s_count_1125b2420);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ddd50; end: 1066dde5f; -[SCLensExplorerSectionViewModel supplementaryModels] */

void FUN_1066ddd50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010bfdfcc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar1;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_release(lVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    lVar4 = lVar1;
    func_0x00010c29d2e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if ((int)puVar5 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar1 + 0x20),PTR_s_count_1125b2420);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066dde60; end: 1066dde67; -[SCLensExplorerSectionViewModel contentCount] */

void FUN_1066dde60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1066dde68; end: 1066ddff7; -[SCLensExplorerSectionViewModel reuseIdentifierForIndex:] */

void FUN_1066dde68(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1066ddff8;
    uStack_40 = 0x1066de008;
    uStack_38 = 0;
    func_0x00010c0be9c0();
    uVar3 = puStack_58[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066ddff8; end: 1066de00f;  */

void FUN_1066ddff8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066de010; end: 1066de063;  */

void FUN_1066de010(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf341e0();
  if (param_2 < 5) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = (&PTR_PTR_1109357a8)[param_2];
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1066de064; end: 1066de07f;  */

void FUN_1066de064(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e59798;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066de080; end: 1066de0df;  */

void FUN_1066de080(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x00010bf341e0();
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e59818;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e59838;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066de0e0; end: 1066de117;  */

void FUN_1066de0e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e59858;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066de118; end: 1066de2bf; -[SCLensExplorerSectionViewModel sizeForIndex:] */

undefined1  [16] FUN_1066de118(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3010000000;
    pcStack_58 = "";
    uStack_48 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uStack_50 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar1 = uVar2;
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be9c0();
    _objc_release(uVar1);
    uVar3 = puStack_68[4];
    uVar4 = puStack_68[5];
    __Block_object_dispose(&uStack_70,8);
  }
  else {
    uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(uVar2);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1066de2c0; end: 1066de3af;  */

void FUN_1066de2c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010bfbb780(param_4);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 1066de3b0; end: 1066de593; -[SCLensExplorerSectionViewModel prefetchItemsForIndexes:] */

void FUN_1066de3b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(ulong *)(lVar7 * 8);
      func_0x00010c2827c0();
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (uVar3 < uVar4) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0dfd40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0be9c0();
        _objc_release(uVar5);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c107610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30),PTR_s_prefetchForViewModel__11261f7a0
             ,param_2);
  return;
}



/* Entry: 1066de594; end: 1066de5d7;  */

void FUN_1066de594(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_prefetchForViewModel__11261f7a0
             ,param_2);
  return;
}



/* Entry: 1066de5d8; end: 1066de7bb; -[SCLensExplorerSectionViewModel cancelPrefetchingForItemsAtIndexes:] */

void FUN_1066de5d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(ulong *)(lVar7 * 8);
      func_0x00010c2827c0();
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (uVar3 < uVar4) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0dfd40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0be9c0();
        _objc_release(uVar5);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30),
             PTR_s_cancelPrefetchingForViewModel__1125a9468,param_2);
  return;
}



/* Entry: 1066de7bc; end: 1066de7ff;  */

void FUN_1066de7bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),
             PTR_s_cancelPrefetchingForViewModel__1125a9468,param_2);
  return;
}



/* Entry: 1066de800; end: 1066debdb; -[SCLensExplorerSectionViewModel configureCell:index:] */

void FUN_1066de800(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar9 = PTR_DAT_1126a55c8;
  if (param_4 < uVar1) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar9);
    uVar1 = param_3;
    if ((int)uVar2 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c155f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9360(uVar1);
    _objc_release(uVar3);
    puVar9 = PTR_DAT_1126a4fe8;
    _objc_retain(param_3);
    uVar4 = param_3;
    func_0x00010010fab4(param_3,puVar9);
    uVar2 = param_3;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    puVar9 = PTR_DAT_1126a55d0;
    _objc_retain(param_3);
    uVar5 = param_3;
    func_0x00010010fab4(param_3,puVar9);
    uVar4 = param_3;
    if ((int)uVar5 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    puVar9 = PTR_DAT_1126a4e90;
    if (uVar4 != 0) {
      _objc_retain(param_3);
      uVar6 = param_3;
      func_0x00010010fab4(param_3,puVar9);
      uVar5 = param_3;
      if ((int)uVar6 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_3);
      func_0x00010c161980(uVar5);
      puVar9 = PTR_DAT_1126a55d8;
      _objc_retain(param_3);
      uVar7 = param_3;
      func_0x00010010fab4(param_3,puVar9);
      uVar6 = param_3;
      if ((int)uVar7 == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(param_3);
      func_0x00010c1b9a40(uVar6);
      puVar9 = PTR_DAT_1126a55e0;
      _objc_retain(param_3);
      uVar8 = param_3;
      func_0x00010010fab4(param_3,puVar9);
      uVar7 = param_3;
      if ((int)uVar8 == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(param_3);
      func_0x00010c28a7c0(uVar7);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar2);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      func_0x00010c0be9c0(uVar3);
      puVar9 = PTR_PTR_1126cd070;
      _objc_retain(param_3);
      _objc_opt_class(puVar9);
      uVar10 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar9);
      uVar8 = param_3;
      if ((uVar10 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(param_3);
      if (uVar8 != 0) {
        uVar10 = param_3;
        func_0x00010bf132a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa200();
        _objc_release(uVar10);
      }
      _objc_release(uVar8);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_release(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066debdc; end: 1066dedab;  */

void FUN_1066debdc(long param_1,undefined *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccc18;
  _objc_opt_class(PTR_PTR_1126ccc18);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c094be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ccc18;
  puVar5 = param_2;
  if ((int)uVar6 != 0) {
    uVar4 = uVar1;
    func_0x00010bfe5680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34340(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ccc18;
    uVar4 = uVar1;
    func_0x00010c1112a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34360(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010c29d960(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222900(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1066dedac; end: 1066dedaf;  */

void FUN_1066dedac(void)

{
  return;
}



/* Entry: 1066dedb0; end: 1066dee3f;  */

void FUN_1066dedb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c29d960(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222900(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066dee40; end: 1066def0f;  */

void FUN_1066dee40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_1126a55e8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  uVar3 = uVar1;
  func_0x00010c110500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d980(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  func_0x00010c222900(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1066def10; end: 1066def13; -[SCLensExplorerSectionViewModel willAppearCell:index:] */

void FUN_1066def10(void)

{
  return;
}



/* Entry: 1066def14; end: 1066df0cb; -[SCLensExplorerSectionViewModel didDisappearCell:index:clearMedia:] */

void FUN_1066def14(long param_1,undefined8 param_2,long param_3,ulong param_4,int param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a55d0);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      func_0x00010c222900(param_3);
    }
    if (param_5 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (param_4 < uVar3) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_3);
        _objc_retain(param_3);
        _objc_retain(param_3);
        func_0x00010c0be9c0(uVar4);
        _objc_release(lVar1);
        _objc_release(lVar1);
        _objc_release(lVar1);
        _objc_release(lVar1);
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066df0cc; end: 1066df113;  */

void FUN_1066df0cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222900(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066df114; end: 1066df117;  */

void FUN_1066df114(void)

{
  return;
}



/* Entry: 1066df118; end: 1066df1ef;  */

void FUN_1066df118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222900(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066df1f0; end: 1066df1f7; -[SCLensExplorerSectionViewModel configureSupplementaryView:kind:] */

void FUN_1066df1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf47050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_configureHeader_viewKind__1125af5b8);
  return;
}



/* Entry: 1066df1f8; end: 1066df237; -[SCLensExplorerSectionViewModel hasMoreItems] */

undefined8 FUN_1066df1f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c12a440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd93c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1066df238; end: 1066df30f; -[SCLensExplorerSectionViewModel indexOfItemWithIdentifier:] */

undefined8 FUN_1066df238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1066df2c8;
  puStack_30 = &UNK_110935618;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1066df310; end: 1066df577; -[SCLensExplorerSectionViewModel lensExplorer_renderedLensViewModelsSnapshot] */

void FUN_1066df310(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf51e00();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010c12a440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_1066df4f8;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      _objc_retain(puVar4);
      func_0x00010c0be9c0(uVar7);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  puVar6 = puVar4;
  if ((puVar5 == (undefined *)0x0) && ((*(byte *)(puStack_118 + 3) & 1) != 0)) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(puVar4);
LAB_1066df4f8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + 0x20),PTR_s_addObject__11259c1f0,uVar7);
  return;
}



/* Entry: 1066df578; end: 1066df597;  */

void FUN_1066df578(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 1066df598; end: 1066df62b; -[SCLensExplorerSectionViewModel lensExplorer_activateLensViewModel:] */

ulong FUN_1066df598(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126ccbf0;
  uVar4 = *(ulong *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c158d60(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1066df62c; end: 1066df633; -[SCLensExplorerSectionViewModel diffIdentifier] */

void FUN_1066df62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_sectionIdentifier_1126331f8);
  return;
}



/* Entry: 1066df634; end: 1066df7c3; -[SCLensExplorerSectionViewModel _subscribeOnDataStoreItems] */

void FUN_1066df634(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf00280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1066df7c4; end: 1066df7d7;  */

void FUN_1066df7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b60f8,PTR_s_pairWithFirst_second__11261a4e8,param_2,param_3);
  return;
}



/* Entry: 1066df7d8; end: 1066df867;  */

void FUN_1066df7d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c154b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be27d40(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066df868; end: 1066df9a7; -[SCLensExplorerSectionViewModel _handleDataStoreUpdatesWithItems:availableLayoutAttributes:] */

void FUN_1066df868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1066ddff8;
  uStack_50 = 0x1066de008;
  uStack_48 = 0;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8240();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be15f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee3cc0(param_1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066df9a8; end: 1066df9db;  */

void FUN_1066df9a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066df9dc; end: 1066dfcef; -[SCLensExplorerSectionViewModel _filterBlocklistedFeedItems:] */

void FUN_1066df9dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
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
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfaeba0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar10 = *plStack_150;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_158 + lVar9 * 8);
        uStack_190 = 0;
        uStack_180 = 0x3032000000;
        pcStack_178 = FUN_1066ddff8;
        uStack_170 = 0x1066de008;
        uStack_168 = 0;
        uStack_1b0 = 0;
        uStack_1a0 = 0x2020000000;
        uStack_198 = 0;
        puStack_1a8 = &uStack_1b0;
        puStack_188 = &uStack_190;
        _objc_retain(uVar1);
        func_0x00010c0be960(uVar8);
        puVar4 = puVar2;
        func_0x00010bf4b900();
        if ((((ulong)puVar4 & 1) == 0) && ((*(byte *)(puStack_1a8 + 3) & 1) == 0)) {
          func_0x00010befa120(puVar2);
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar1);
        __Block_object_dispose(&uStack_1b0,8);
        __Block_object_dispose(&uStack_190,8);
        _objc_release(uStack_168);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1b0,8);
  uVar8 = 8;
  __Block_object_dispose(&uStack_190);
  __Unwind_Resume();
  _objc_retain(uVar8);
  uVar1 = uVar8;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar5);
  iVar7 = (int)*(undefined8 *)(param_3 + 0x20);
  uVar1 = uVar8;
  func_0x00010bf5b080(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010c292e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar8);
  _objc_release(uVar1);
  if (iVar7 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 1066dfcf0; end: 1066dfdaf;  */

void FUN_1066dfcf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf5b080(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c292e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (iVar4 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 1066dfdb0; end: 1066dfeaf;  */

void FUN_1066dfdb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066dfeb0; end: 1066e0227; -[SCLensExplorerSectionViewModel _updateViewModelsWithItems:existingViewModels:availableLayoutAttributes:] */

void FUN_1066dfeb0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bde9e60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar9 = uVar2;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar3,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      uVar6 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c156380();
      _objc_release(uVar4);
      puStack_b8 = puVar1;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1066e0228;
      puStack_a0 = &UNK_1109356b8;
      uStack_98 = param_1;
      uStack_88 = uVar9;
      uStack_80 = uVar5;
      _objc_retain(puVar3);
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x1066e02ac;
      puStack_e0 = &UNK_1109356e8;
      uStack_d8 = param_1;
      uStack_c8 = uVar9;
      uStack_c0 = uVar5;
      puStack_90 = puVar3;
      _objc_retain(puVar3);
      puStack_138 = puVar1;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x1066e032c;
      puStack_120 = &UNK_110935718;
      uStack_118 = param_1;
      uStack_108 = uVar9;
      uStack_100 = uVar5;
      puStack_d0 = puVar3;
      _objc_retain(puVar3);
      puStack_188 = puVar1;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_1066e03ac;
      puStack_170 = &UNK_110935778;
      puStack_110 = puVar3;
      _objc_retain(param_5);
      uStack_168 = param_5;
      uStack_160 = param_1;
      uStack_148 = uVar9;
      uStack_140 = uVar5;
      _objc_retain(uVar2);
      uStack_158 = uVar2;
      _objc_retain(puVar3);
      puStack_150 = puVar3;
      func_0x00010c0be960(uVar6,param_2,&puStack_b8,&puStack_f8,&puStack_138,0,&puStack_188);
      _objc_release(puStack_150);
      _objc_release(uStack_158);
      _objc_release(uStack_168);
      _objc_release(puStack_110);
      _objc_release(puStack_d0);
      _objc_release(puStack_90);
      _objc_release(uVar6);
      uVar9 = uVar9 + 1;
      uVar6 = uVar2;
      func_0x00010bf529e0();
    } while (uVar9 < uVar6);
  }
  uVar6 = *(ulong *)(param_1 + 0x58);
  func_0x00010c12a440();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bfd93c0();
  _objc_release(uVar6);
  if ((uVar9 & 1) != 0) {
    puVar7 = PTR_PTR_1126cd0f8;
    _objc_alloc(PTR_PTR_1126cd0f8);
    func_0x00010c084a80(*(undefined8 *)(param_1 + 0x88));
    func_0x00010c0383c0(puVar7);
    puVar8 = PTR_PTR_1126cd0f0;
    func_0x00010c09d540(PTR_PTR_1126cd0f0,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bf7ed00(uVar4,param_2,param_4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_1066e0558;
  puStack_1a8 = &UNK_110848ba8;
  uStack_1a0 = param_1;
  puStack_198 = puVar3;
  uStack_190 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar5,param_2,&puStack_1c0);
  _objc_release(uVar5);
  _objc_release(uStack_190);
  _objc_release(puStack_198);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1066e0228; end: 1066e03ab;  */

void FUN_1066e0228(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  func_0x00010c29dac0(uVar1,param_2,param_2,*(undefined8 *)(lVar3 + 0x78),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined1 *)(lVar3 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126cd0f0;
  func_0x00010c097f00(PTR_PTR_1126cd0f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066e03ac; end: 1066e04e7;  */

void FUN_1066e03ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfb2040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c29da80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = PTR_PTR_1126cd0f0;
    func_0x00010bfe1060(PTR_PTR_1126cd0f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066e04e8; end: 1066e0557;  */

undefined8 FUN_1066e04e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c08cda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08cda0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1066e0558; end: 1066e0667;  */

void FUN_1066e0558(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0672e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c12f3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d1960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e640(lVar2,param_2,uVar6,uVar3,uVar1,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010bf529e0(lVar2);
  func_0x00010c0df760(puVar5,param_2,lVar2 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1066e0668; end: 1066e0747; -[SCLensExplorerSectionViewModel _correctedItems:] */

void FUN_1066e0668(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c12a440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd93c0();
  uVar7 = param_3;
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf529e0();
    uVar4 = *(ulong *)(param_1 + 0x78);
    func_0x00010c0cde20();
    _objc_release(uVar1);
    if (uVar4 < uVar3) {
      uVar4 = param_3;
      func_0x00010bf529e0(param_3);
      uVar5 = *(ulong *)(param_1 + 0x78);
      func_0x00010c0cd5c0();
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar4 / uVar5;
      }
      uVar6 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x00010c099060(param_3,param_2,uVar6 + ~(uVar4 - uVar3 * uVar5));
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1066e0728;
    }
  }
  _objc_retain(param_3);
LAB_1066e0728:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1066e0748; end: 1066e074f; -[SCLensExplorerSectionViewModel isEmptyObservable] */

undefined8 FUN_1066e0748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1066e0750; end: 1066e085f; -[SCLensExplorerSectionViewModel .cxx_destruct] */

void FUN_1066e0750(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066e0860; end: 1066e0903; -[SCLensExplorerStoryViewModelProvider initWithImagesDataStore:lensPerformerProvider:] */

undefined1 *
FUN_1066e0860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2840;
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
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066e0904; end: 1066e090f; -[SCLensExplorerStoryViewModelProvider viewModelWithStoryItem:index:sectionIndex:isTextRightToLeftDirection:] */

void FUN_1066e0904(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf342f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cce60,PTR_s_cellViewModelWithStoryItem_index_1125aaa60);
  return;
}



/* Entry: 1066e0910; end: 1066e09fb; -[SCLensExplorerStoryViewModelProvider viewModelObservableFromViewModel:] */

void FUN_1066e0910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066e09fc; end: 1066e0afb;  */

void FUN_1066e09fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  func_0x00010c0d9840(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be132e0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b0418;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066e0afc; end: 1066e0b2f;  */

void FUN_1066e0afc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2eb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066e0b30; end: 1066e0b37; -[SCLensExplorerStoryViewModelProvider prefetchForViewModel:] */

void FUN_1066e0b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be132f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchPreviewForViewModel_observ_112562658,param_3,0);
  return;
}



/* Entry: 1066e0b38; end: 1066e0bd7; -[SCLensExplorerStoryViewModelProvider cancelPrefetchingForViewModel:] */

void FUN_1066e0b38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c25a020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c1121a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e8c0(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e0bd8; end: 1066e0daf; -[SCLensExplorerStoryViewModelProvider _fetchPreviewForViewModel:observer:] */

void FUN_1066e0bd8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c1112a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c25a020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1121a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_58,param_4);
      uVar5 = *(undefined8 *)(param_1 + 8);
      lVar1 = param_3;
      func_0x00010c25a020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbb780(param_3);
      func_0x00010c092fe0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b6bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e0db0; end: 1066e0e77;  */

void FUN_1066e0db0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_3 == 0) && (lVar1 != 0)) {
      lVar1 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126cce60;
      func_0x00010bf34360(PTR_PTR_1126cce60);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_1);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066e0e78; end: 1066e0ea7; -[SCLensExplorerStoryViewModelProvider .cxx_destruct] */

void FUN_1066e0e78(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e0ea8; end: 1066e0f1b; -[SCLensExplorerSIGNotificationPresenter initWithNotificationPool:] */

undefined1 * FUN_1066e0ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2848;
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



/* Entry: 1066e0f1c; end: 1066e0fef; -[SCLensExplorerSIGNotificationPresenter showDestructiveNotificationWithText:] */

void FUN_1066e0f1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1066e0fb0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(puStack_28);
  _objc_release(puVar1);
  return;
}



/* Entry: 1066e0ff0; end: 1066e0ffb; -[SCLensExplorerSIGNotificationPresenter .cxx_destruct] */

void FUN_1066e0ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e0ffc; end: 1066e11fb; -[SCLensExplorerBaseQueryCoordinator initWithRequestManager:requestProvider:responseParser:dynamicUpdateHandler:dataStore:queryStatusChecker:] */

undefined8 *
FUN_1066e0ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f2850;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066e11fc; end: 1066e1203; -[SCLensExplorerBaseQueryCoordinator isEmpty] */

void FUN_1066e11fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 1066e1204; end: 1066e120b; -[SCLensExplorerBaseQueryCoordinator requestForQuery:] */

undefined8 FUN_1066e1204(void)

{
  return 0;
}



/* Entry: 1066e120c; end: 1066e12a3; -[SCLensExplorerBaseQueryCoordinator handleResponse:forQueryResult:] */

void FUN_1066e120c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c13bac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010bfd23c0(param_1,param_2,uVar2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066e12a4; end: 1066e12ab; -[SCLensExplorerBaseQueryCoordinator handleReceivedResponseFeeds:forQueryResult:] */

void FUN_1066e12a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_handleFeeds_forQueryResult__1125d1e38);
  return;
}



/* Entry: 1066e12ac; end: 1066e14db; -[SCLensExplorerBaseQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066e12ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_1066e14b0;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c11daa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd100;
  func_0x00010c0e8e20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar2;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cd100;
    func_0x00010c125040(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,puVar5);
    if ((uVar6 & 1) != 0) {
      _objc_release(puVar5);
      _objc_release(uVar4);
      goto LAB_1066e13ac;
    }
    uVar6 = uVar2;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cd100;
    func_0x00010c151d20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0720c0(uVar6,param_2,puVar7);
    if ((uVar8 & 1) == 0) {
      lVar9 = param_3;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar1);
      if (lVar9 != 0) goto LAB_1066e1484;
      goto LAB_1066e13bc;
    }
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
LAB_1066e1484:
    func_0x00010bf06ca0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  else {
LAB_1066e13ac:
    _objc_release(puVar3);
    _objc_release(uVar1);
LAB_1066e13bc:
    func_0x00010c286c40(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  func_0x00010be015a0(param_1,param_2,param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
LAB_1066e14b0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e14dc; end: 1066e14e3; -[SCLensExplorerBaseQueryCoordinator handleError:forQueryResult:] */

void FUN_1066e14dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be015b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__didUpdateDataStoreWithQuery__11255df08,param_4);
  return;
}



/* Entry: 1066e14e4; end: 1066e158b; -[SCLensExplorerBaseQueryCoordinator reset] */

void FUN_1066e14e4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1066e158c; end: 1066e15c3;  */

void FUN_1066e158c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066e15c4; end: 1066e15cb; -[SCLensExplorerBaseQueryCoordinator canPerformQuery:] */

void FUN_1066e15c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_canPerformQuery__1125a8dc0);
  return;
}



/* Entry: 1066e15cc; end: 1066e15d3; -[SCLensExplorerBaseQueryCoordinator currentQuery] */

void FUN_1066e15cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066e15d4; end: 1066e15db; -[SCLensExplorerBaseQueryCoordinator setCurrentQuery:] */

void FUN_1066e15d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resultsForQuery_updatingBlock__11262ce18,param_3,0);
  return;
}



/* Entry: 1066e15dc; end: 1066e1867; -[SCLensExplorerBaseQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1066e15dc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf2d060();
  if ((uVar1 & 1) == 0) {
    uVar6 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    if ((int)uVar4 == 0) goto LAB_1066e1820;
    uVar1 = param_1;
    func_0x00010bf5fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_4 == 0) || (uVar1 == 0)) {
      _objc_initWeak(auStack_88,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_90,auStack_88);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
      goto LAB_1066e1820;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1066e1868;
    puStack_68 = &UNK_11084aaa8;
    uStack_60 = param_1;
    _objc_retain(param_4);
    lStack_58 = param_4;
    func_0x00010c0f7fc0(uVar6);
    lVar2 = lStack_58;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010beef7a0(uVar5);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(param_3);
    lVar2 = param_4;
  }
  _objc_release(lVar2);
LAB_1066e1820:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e1868; end: 1066e1873;  */

void FUN_1066e1868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addPendingUpdatingBlock__11254f8d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066e1874; end: 1066e1917;  */

void FUN_1066e1874(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be85460(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be015a0(lVar1);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066e1918; end: 1066e1963;  */

void FUN_1066e1918(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdc7cc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135520(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fbe0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),uVar1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066e1964; end: 1066e1a9b; -[SCLensExplorerBaseQueryCoordinator _didUpdateDataStoreWithQuery:] */

void FUN_1066e1964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c071780(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  func_0x00010c297260(param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e1a9c; end: 1066e1bbf;  */

void FUN_1066e1a9c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      func_0x00010c11daa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cd100;
      func_0x00010c125040(PTR_PTR_1126cd100);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c0720c0(uVar5,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(puVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_1066e1ba4;
      uVar2 = *(ulong *)(param_1 + 0x20);
      func_0x00010c11daa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126cd100;
      func_0x00010c151d20(PTR_PTR_1126cd100);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar2,param_2,puVar3);
    }
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
LAB_1066e1ba4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066e1bc0; end: 1066e1cf7; -[SCLensExplorerBaseQueryCoordinator _sendQuery:request:] */

void FUN_1066e1bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c15c700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


