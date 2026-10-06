/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ce97f4; end: 106ce97fb; -[SCGallerySnapsTabDataSource lockedSnapModalCardInsertionIndex] */

undefined8 FUN_106ce97f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 106ce97fc; end: 106ce9807; -[SCGallerySnapsTabDataSource searchResultRankByEntryId] */

void FUN_106ce97fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x170,1);
  return;
}



/* Entry: 106ce9808; end: 106ce980f; -[SCGallerySnapsTabDataSource setSearchResultRankByEntryId:] */

void FUN_106ce9808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 106ce9810; end: 106ce99cb; -[SCGallerySnapsTabDataSource .cxx_destruct] */

void FUN_106ce9810(long param_1)

{
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_destroyWeak(param_1 + 0x160);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ce99cc; end: 106ce9a67;  */

void FUN_106ce99cc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ce9a68; end: 106ce9b23; -[SCGallerySnapsTabSectionActionHandler initWithDataSource:listAdapter:memoriesExperimentService:] */

undefined1 *
FUN_106ce9a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f6720;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ce9b24; end: 106ce9bd7; -[SCGallerySnapsTabSectionActionHandler _filterForSnapsOnlySections:] */

void FUN_106ce9b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c230380();
  _objc_release(uVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR___NSConcreteGlobalBlock_1109750c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaea40(param_3,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ce9bd8; end: 106ce9ccb;  */

undefined1 FUN_106ce9bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010c156980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be2a0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106ce9ccc; end: 106ce9cdf;  */

void FUN_106ce9ccc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ce9ce0; end: 106ce9fbb; -[SCGallerySnapsTabSectionActionHandler toggleSelectAllWithHeaderModel:] */

undefined8 * FUN_106ce9ce0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar14 = (undefined8 *)(param_1 + 0x10);
  _objc_loadWeakRetained();
  puVar1 = puVar14;
  puVar10 = param_3;
  func_0x00010bfc9fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  if (puVar1 != (undefined8 *)0x0) {
    lVar11 = param_1;
    puVar10 = puVar1;
    func_0x00010be16060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      _objc_retain(lVar11);
      lVar2 = lVar11;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar13 = *plStack_1a0;
        do {
          lVar12 = 0;
          do {
            if (*plStack_1a0 != lVar13) {
              _objc_enumerationMutation(lVar11);
            }
            lVar3 = param_1 + 8;
            _objc_loadWeakRetained();
            lVar4 = lVar3;
            func_0x00010c155800();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            lVar5 = lVar4;
            func_0x00010010fab4(lVar4,PTR_DAT_1126a57c0);
            lVar3 = lVar4;
            if ((int)lVar5 == 0) {
              lVar3 = 0;
            }
            _objc_retain(lVar3);
            _objc_release(lVar4);
            if (lVar3 != 0) {
              func_0x00010bf002c0();
            }
            _objc_release(lVar3);
            lVar12 = lVar12 + 1;
          } while (lVar2 != lVar12);
          lVar2 = lVar11;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar11);
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      _objc_retain(lVar11);
      puVar10 = &uStack_1f0;
      lVar2 = lVar11;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar13 = *plStack_1e0;
        do {
          lVar12 = 0;
          do {
            if (*plStack_1e0 != lVar13) {
              _objc_enumerationMutation(lVar11);
            }
            lVar3 = param_1 + 8;
            _objc_loadWeakRetained();
            lVar4 = lVar3;
            func_0x00010c155800();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            lVar5 = lVar4;
            func_0x00010010fab4(lVar4,PTR_DAT_1126a57c0);
            lVar3 = lVar4;
            if ((int)lVar5 == 0) {
              lVar3 = 0;
            }
            _objc_retain(lVar3);
            _objc_release(lVar4);
            if (lVar3 != 0) {
              func_0x00010c272b80(lVar4);
            }
            _objc_release(lVar3);
            lVar12 = lVar12 + 1;
          } while (lVar2 != lVar12);
          puVar10 = &uStack_1f0;
          lVar2 = lVar11;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar11);
    }
    _objc_release(lVar11);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  puVar14 = param_3 + 2;
  _objc_loadWeakRetained();
  puVar1 = puVar14;
  func_0x00010bfc9fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  if (puVar1 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar6 = param_3;
    func_0x00010be16060();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
    func_0x00010bf529e0();
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      _objc_retain(puVar6);
      puVar14 = puVar6;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar14 != (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar6);
          }
          puVar7 = param_3 + 1;
          _objc_loadWeakRetained();
          puVar8 = puVar7;
          func_0x00010c155800();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar9 = puVar8;
          func_0x00010010fab4(puVar8,PTR_DAT_1126a57c0);
          puVar7 = puVar8;
          if ((int)puVar9 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          _objc_retain(puVar7);
          _objc_release(puVar8);
          if ((puVar7 != (undefined8 *)0x0) &&
             (puVar9 = puVar8, func_0x00010bf002c0(), ((ulong)puVar9 & 1) == 0)) {
            _objc_release(puVar8);
            puVar14 = (undefined8 *)0x0;
            goto LAB_106cea158;
          }
          _objc_release(puVar7);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar14 != puVar15);
        puVar14 = puVar6;
        func_0x00010bf52a60();
      }
      puVar14 = (undefined8 *)0x1;
LAB_106cea158:
      _objc_release(puVar6);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar1);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar10 + 3,0);
  _objc_destroyWeak(puVar10 + 2);
  puVar10 = puVar10 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar10);
  return puVar10;
}



/* Entry: 106ce9fbc; end: 106cea1b7; -[SCGallerySnapsTabSectionActionHandler isAllItemSelectedWithHeaderModel:] */

long FUN_106ce9fbc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar8;
  func_0x00010bfc9fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010be16060();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      _objc_retain(lVar3);
      lVar8 = lVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar3);
          }
          uVar4 = param_1 + 8;
          _objc_loadWeakRetained();
          uVar5 = uVar4;
          func_0x00010c155800();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uVar6 = uVar5;
          func_0x00010010fab4(uVar5,PTR_DAT_1126a57c0);
          uVar4 = uVar5;
          if ((int)uVar6 == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar5);
          if ((uVar4 != 0) && (uVar6 = uVar5, func_0x00010bf002c0(), (uVar6 & 1) == 0)) {
            _objc_release(uVar5);
            lVar8 = 0;
            goto LAB_106cea158;
          }
          _objc_release(uVar4);
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
        lVar8 = lVar3;
        func_0x00010bf52a60();
      }
      lVar8 = 1;
LAB_106cea158:
      _objc_release(lVar3);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return lVar8;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_destroyWeak(param_3 + 0x10);
  param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3);
  return param_3;
}



/* Entry: 106cea1b8; end: 106cea1eb; -[SCGallerySnapsTabSectionActionHandler .cxx_destruct] */

void FUN_106cea1b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106cea1ec; end: 106cea25f; -[SCMemoriesSnapsTabCoordinator initWithSnapsTabService:] */

undefined1 * FUN_106cea1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6728;
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



/* Entry: 106cea260; end: 106cea767; -[SCMemoriesSnapsTabCoordinator setUpMemoriesSnapsTabDataSourceWithSnapClustererOption:inlineSearchDataSource:containerViewController:delegate:snapsTabCRSectionPluginFuture:coreConfigProvider:tabType:configuration:] */

void FUN_106cea260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  puVar1 = PTR_PTR_1126d2190;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2485c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c0c9660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf2fa20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c23ef20();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010c0c99e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010c0c8fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047240(puVar1,param_2,param_3,param_9,param_10,uVar4,param_4,param_5,uVar6,uVar8,
                      uVar10,uVar12,uVar14,uVar16,uVar18,uVar20,param_7,uVar22,param_8,uVar24,uVar26
                      ,uVar28,uVar30,uVar32,uVar34);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cea768; end: 106cea78f; -[SCMemoriesSnapsTabCoordinator operaPresenter] */

void FUN_106cea768(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cea790; end: 106cea953; -[SCMemoriesSnapsTabCoordinator configureOperaPresenterWithDelegate:] */

void FUN_106cea790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c117f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bfca440();
  puVar4 = PTR_PTR_1126b2208;
  _objc_alloc(PTR_PTR_1126b2208);
  func_0x000108ec17a8(uVar1,0x100);
  func_0x00010bff9720(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf22c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106cea954; end: 106ceaa7f; -[SCMemoriesSnapsTabCoordinator presentSnapFromOperaLauncherWithSnapId:fromViewController:] */

void FUN_106cea954(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0c90a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c08ba40(lVar2,param_2,param_4,puVar3,0,0,0,3,0,0);
    _objc_release(param_4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ceaa80; end: 106ceaaa7; -[SCMemoriesSnapsTabCoordinator spectacleImportStatusProvider] */

void FUN_106ceaa80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ceaaa8; end: 106ceac03; -[SCMemoriesSnapsTabCoordinator initializeSpectacleImportStatusProviderWithSpectaclesServices:spectaclesAppStatusServices:spectaclesContentStatusProvider:] */

void FUN_106ceaaa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d2198;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b100(puVar1,param_2,param_3,param_4,param_5,uVar3,uVar5,uVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ceac04; end: 106ceafb3; -[SCMemoriesSnapsTabCoordinator initializeFeaturedStoryActionHandlerWithPresentingViewController:tabControllerDelegate:tabController:heroPlayerController:] */

void FUN_106ceac04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  puVar1 = PTR_PTR_1126d21a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c97e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8b60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c7c00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0c7c60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c0c8480();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ad00(puVar1,param_2,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15,uVar17,uVar19,
                      uVar21,uVar23,uVar25,uVar27);
  uVar28 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c2113e0(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
  _objc_release(param_4);
  func_0x00010c2113a0(*(undefined8 *)(param_1 + 0x20),param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106ceafb4; end: 106ceb3ab; -[SCMemoriesSnapsTabCoordinator memoriesSnapsTabFeaturedStorySectionControllerWithSelectMode:carouselDataSource:] */

void FUN_106ceafb4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  puVar1 = PTR_PTR_1126d21a8;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c9ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfbd160();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa34c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf1ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf1ba60();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c0c8900();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c0c7f60();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126d21b0;
  _objc_alloc();
  uVar25 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf36da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffdc00(puVar24,param_2,uVar26);
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043ac0(puVar1,param_2,param_3,param_4,uVar3,uVar33,uVar6,uVar8,uVar11,uVar13,uVar15,
                      uVar17,uVar19,uVar21,uVar23,puVar24,uVar28,uVar32);
  _objc_release(param_4);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(puVar24);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ceb3ac; end: 106ceb467; -[SCMemoriesSnapsTabCoordinator initializeSnapsTabSectionActionHandlerWithDataSource:listAdapter:] */

void FUN_106ceb3ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d21b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009060(puVar1,param_2,param_3,param_4,uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ceb468; end: 106ceb64f; -[SCMemoriesSnapsTabCoordinator snapsTabSnapsSectionControllerWithDisabledSnapsIds:selectionHelper:delegate:clusterViewModel:] */

void FUN_106ceb468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_106ceb650;
    uStack_80 = 0x106ceb660;
    uStack_78 = 0;
    lVar1 = param_6;
    func_0x00010c156980(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0be2a0(lVar1);
    _objc_release(lVar1);
    uVar2 = puStack_98[5];
    _objc_retain(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ceb650; end: 106ceb667;  */

void FUN_106ceb650(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ceb668; end: 106ceb6af;  */

void FUN_106ceb668(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d21c0;
  _objc_alloc();
  func_0x00010c043dc0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ceb6b0; end: 106ceba63;  */

void FUN_106ceb6b0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  
  puVar2 = PTR_PTR_1126d21c8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c243680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2485c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0c88e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec19e0();
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f00();
  uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c0c8fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cbe0();
  lVar27 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar26 = *(undefined8 *)(lVar27 + 0x28);
  *(undefined **)(lVar27 + 0x28) = puVar2;
  _objc_release(uVar26);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
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
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126d21c8;
  uVar28 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  _objc_retain(uVar28);
  _objc_opt_class(puVar2);
  uVar25 = uVar28;
  _objc_opt_isKindOfClass(uVar28,puVar2);
  uVar1 = uVar28;
  if ((uVar25 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar28);
  func_0x00010c18b5e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ceba64; end: 106ceba67;  */

void FUN_106ceba64(void)

{
  return;
}



/* Entry: 106ceba68; end: 106cebddf; -[SCMemoriesSnapsTabCoordinator snapsTabSnapsSectionControllerFromLegacyGroupModelWithDisabledSnapsIds:selectionHelper:delegate:] */

void FUN_106ceba68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar1 = PTR_PTR_1126d21c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c243680();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2485c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0c88e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec19e0();
  uVar15 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  uVar17 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f00();
  uVar19 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c0c8fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cbe0(puVar1,param_2,param_3,param_4,uVar4,uVar6,uVar8,uVar10,uVar12,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cebde0; end: 106cebe33; -[SCMemoriesSnapsTabCoordinator .cxx_destruct] */

void FUN_106cebde0(long param_1)

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



/* Entry: 106cebe34; end: 106cebedf;  */

void FUN_106cebe34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b2510;
  _objc_alloc(PTR_PTR_1126b2510);
  func_0x00010c0101c0();
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x00010c01b460(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cebee0; end: 106cebf67;  */

void FUN_106cebee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b1c58;
  _objc_alloc(PTR_PTR_1126b1c58);
  func_0x00010c01fc40();
  _objc_release(param_1);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e879b8,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cebf68; end: 106cebf9b;  */

undefined8 FUN_106cebf68(uint param_1)

{
  if ((param_1 < 9) && ((1 << (ulong)(param_1 & 0x1f) & 0xefU) == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 106cebf9c; end: 106cec127;  */

void FUN_106cebf9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfaea20(param_1,param_2,&PTR___NSConcreteGlobalBlock_110975150);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cec128; end: 106cec1bb;  */

void FUN_106cec128(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c246ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cec1bc; end: 106cec3bb;  */

undefined ** FUN_106cec1bc(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = param_2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  lVar3 = param_3;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8e90;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar5);
  }
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8e90;
  if (lVar4 != 0) {
    ppuVar6 = *(undefined ***)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar5 = ppuVar6;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar6);
  }
  ppuVar6 = ppuVar1;
  func_0x00010bf433a0();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = param_2;
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf313a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    lVar3 = param_3;
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010bf313a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if ((ppuVar7 == (undefined **)0x0) || (lVar8 == 0)) {
      ppuVar6 = (undefined **)(ulong)(lVar8 != 0);
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar6 = (undefined **)0xffffffffffffffff;
      }
    }
    else {
      ppuVar6 = ppuVar7;
      func_0x00010bf433a0(ppuVar7);
    }
    _objc_release(lVar8);
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(lVar4);
  _objc_release(ppuVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return ppuVar6;
}



/* Entry: 106cec3bc; end: 106cec507; -[SCGallerySnapsTabGroupHeaderSectionController initWithSelectionHelper:sectionActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106cec3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6730;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189840(puVar1);
    func_0x00010c18faa0(puVar1);
    func_0x00010c20fe80(puVar1);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0x4000000000000000,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11275c51c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11275c520;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11275c524;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    func_0x00010bed4fa0(puVar1);
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cec508; end: 106cec51b; -[SCGallerySnapsTabGroupHeaderSectionController inset] */

undefined8 FUN_106cec508(void)

{
  return 0;
}



/* Entry: 106cec51c; end: 106cec527; -[SCGallerySnapsTabGroupHeaderSectionController _cellClassForItemAtIndex:] */

void FUN_106cec51c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2140);
  return;
}



/* Entry: 106cec528; end: 106cec537; -[SCGallerySnapsTabGroupHeaderSectionController sizeForSupplementaryViewOfKind:atIndex:] */

undefined1  [16] FUN_106cec528(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 106cec538; end: 106cec543; -[SCGallerySnapsTabGroupHeaderSectionController supportedElementKinds] */

undefined * FUN_106cec538(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106cec544; end: 106cec54b; -[SCGallerySnapsTabGroupHeaderSectionController viewForSupplementaryElementOfKind:atIndex:] */

undefined8 FUN_106cec544(void)

{
  return 0;
}



/* Entry: 106cec54c; end: 106cec5f7; -[SCGallerySnapsTabGroupHeaderSectionController sectionController:cellForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cec54c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bddc180(param_1,param_2,param_5);
  lVar3 = lVar1;
  func_0x00010bf6e020(lVar1,param_2,lVar2,param_1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c2226c0(lVar3,param_2,*(undefined8 *)(param_1 + _DAT_11275c528));
  func_0x00010c18b5e0(lVar3,param_2,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275c520);
  func_0x00010c158e00(uVar4);
  func_0x00010c1facc0(lVar3,param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106cec5f8; end: 106cec64f; -[SCGallerySnapsTabGroupHeaderSectionController sectionController:sizeForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106cec5f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11275c52c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc10a0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 106cec650; end: 106cec7b7; -[SCGallerySnapsTabGroupHeaderSectionController sectionController:viewModelsForObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cec650(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275c528);
  *(undefined8 *)(param_1 + _DAT_11275c528) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2690;
  _objc_opt_class();
  uVar3 = param_4;
  _objc_opt_isKindOfClass();
  puVar4 = PTR_PTR_1126b2690;
  if ((uVar3 & 1) != 0) {
    _objc_retain(param_4);
    _objc_opt_class();
    uVar5 = param_4;
    _objc_opt_isKindOfClass();
    uVar3 = param_4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_4);
    uVar5 = uVar3;
    func_0x00010c156980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be2a0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar2 = puVar4;
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar1 = *(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_11275c528);
  *(undefined **)(*(long *)(param_4 + 0x20) + (long)_DAT_11275c528) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cec7b8; end: 106cec7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cec7b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c528);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c528) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cec7f4; end: 106cec7fb;  */

void FUN_106cec7f4(void)

{
  return;
}



/* Entry: 106cec7fc; end: 106cec7ff; -[SCGallerySnapsTabGroupHeaderSectionController listAdapter:willDisplaySectionController:] */

void FUN_106cec7fc(void)

{
  return;
}



/* Entry: 106cec800; end: 106cec803; -[SCGallerySnapsTabGroupHeaderSectionController listAdapter:didEndDisplayingSectionController:] */

void FUN_106cec800(void)

{
  return;
}



/* Entry: 106cec804; end: 106cec8eb; -[SCGallerySnapsTabGroupHeaderSectionController listAdapter:willDisplaySectionController:cell:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cec804(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_5 != 0) && (uVar2 = param_4, func_0x00010c071ae0(), (int)uVar2 != 0)) {
    uVar3 = param_1;
    func_0x00010c0dfc60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2690;
    _objc_opt_class(PTR_PTR_1126b2690);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      func_0x00010c06bec0(*(undefined8 *)(param_1 + (long)_DAT_11275c524));
      func_0x00010c1fadc0(param_5);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cec8ec; end: 106cec8ef; -[SCGallerySnapsTabGroupHeaderSectionController listAdapter:didEndDisplayingSectionController:cell:atIndex:] */

void FUN_106cec8ec(void)

{
  return;
}



/* Entry: 106cec8f0; end: 106cec983; -[SCGallerySnapsTabGroupHeaderSectionController groupHeaderViewAllItemsSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cec8f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2690;
  _objc_opt_class(PTR_PTR_1126b2690);
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
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11275c524);
    func_0x00010c06bec0(uVar5);
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 106cec984; end: 106ceca03; -[SCGallerySnapsTabGroupHeaderSectionController groupHeaderViewShouldToggleSelectAll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cec984(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2690;
  _objc_opt_class(PTR_PTR_1126b2690);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c272ba0(*(undefined8 *)(param_1 + (long)_DAT_11275c524));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ceca04; end: 106ceca4f; -[SCGallerySnapsTabGroupHeaderSectionController _getCellSize] */

undefined1  [16] FUN_106ceca04(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4afe0();
  _objc_release(param_2);
  auVar1._8_8_ = 0x4042800000000000;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 106ceca50; end: 106cecb23; -[SCGallerySnapsTabGroupHeaderSectionController _updateCellSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ceca50(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275c52c);
  *(undefined **)(param_1 + _DAT_11275c52c) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106cecb24; end: 106cecb8b;  */

void FUN_106cecb24(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_1 != 0) {
    func_0x00010be1db20(param_1);
  }
  func_0x00010c2971c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cecb8c; end: 106cecb8f; -[SCGallerySnapsTabGroupHeaderSectionController deviceOrientationDidChange] */

void FUN_106cecb8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCellSize_112592d90);
  return;
}



/* Entry: 106cecb90; end: 106cecbff; -[SCGallerySnapsTabGroupHeaderSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cecb90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c51c,0);
  _objc_storeStrong(param_1 + _DAT_11275c52c,0);
  _objc_storeStrong(param_1 + _DAT_11275c528,0);
  _objc_storeStrong(param_1 + _DAT_11275c524,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c520,0);
  return;
}



/* Entry: 106cecc00; end: 106cececb; -[SCGallerySnapsTabSnapsSectionController initWithDisabledSnapIds:selectionHelper:snapThumbnailGenerator:spectaclesContentDataSource:spectaclesManager:memoriesStreamingManager:memoriesEntrySyncStatusGeneratorBuilder:shouldHideHeaderView:shouldCacheCellSize:isRetryThumbnailLoadingEnabled:thumbnailRetryDelayInSeconds:maxThumbnailNilRetryCount:shouldAlwaysClearIdentifier:memoriesExperimentService:storageQuotaManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106cecc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,uint param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126f6738;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189840(puVar1);
    func_0x00010c18faa0(puVar1);
    if ((param_10 & 1) == 0) {
      func_0x00010c20fe80(puVar1);
    }
    func_0x00010c1c82c0(0,puVar1);
    lVar3 = (long)_DAT_11275c530;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275c534,param_4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275c538,param_5);
    lVar3 = (long)_DAT_11275c53c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275c540;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275c544;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275c548;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275c54c) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275c550) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275c554) = param_10._2_1_;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275c558) = param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275c55c) = param_13;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275c560) = param_14;
    lVar3 = (long)_DAT_11275c564;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275c568;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    func_0x00010c1c8300(0x3ff0000000000000,puVar1);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106cececc; end: 106cecedf; -[SCGallerySnapsTabSnapsSectionController inset] */

undefined8 FUN_106cececc(void)

{
  return 0;
}



/* Entry: 106cecee0; end: 106ced013; -[SCGallerySnapsTabSnapsSectionController _cellClassForItemAtIndex:] */

void FUN_106cecee0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1f860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf343c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2050000000;
  uStack_38 = 0;
  func_0x00010c0bff00(uVar1);
  uVar2 = puStack_48[3];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ced014; end: 106ced09b;  */

void FUN_106ced014(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b5fa088();
  ppuVar1 = &PTR_PTR_1126d21d0;
  if (10 < lVar3 - 2U) {
    ppuVar1 = &PTR_PTR_1126cfc70;
  }
  puVar4 = *ppuVar1;
  _objc_opt_class();
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = puVar4;
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ced09c; end: 106ced09f;  */

void FUN_106ced09c(void)

{
  return;
}



/* Entry: 106ced0a0; end: 106ced0a3; -[SCGallerySnapsTabSnapsSectionController allItemsSelected] */

void FUN_106ced0a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__allItemsSelected_112550150);
  return;
}



/* Entry: 106ced0a4; end: 106ced12f; -[SCGallerySnapsTabSnapsSectionController toggleSelectAllWithAllItemSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ced0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be1f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + _DAT_11275c534;
    _objc_loadWeakRetained(param_1);
    FUN_106d0ef90(lVar2,param_1,param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106ced130; end: 106ced2e7; -[SCGallerySnapsTabSnapsSectionController _getGroupViewModelWithGivenObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ced130(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11275c56c;
  uVar4 = *(ulong *)(param_1 + lVar6);
  if (uVar4 == 0) {
    puVar1 = PTR_PTR_1126b2690;
    _objc_opt_class(PTR_PTR_1126b2690);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    puVar1 = PTR_PTR_1126cfc30;
    if ((uVar4 & 1) == 0) {
      _objc_retain(param_3);
      _objc_opt_class(puVar1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      uVar4 = param_3;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      uVar3 = param_3;
    }
    else {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_106ced2e8;
      uStack_50 = 0x106ced2f8;
      uStack_48 = 0;
      _objc_retain(param_3);
      uVar4 = param_3;
      func_0x00010c156980(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0be2a0();
      _objc_release(uVar4);
      uVar5 = puStack_68[5];
      _objc_retain(uVar5);
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = uVar5;
      _objc_release(uVar2);
      uVar4 = puStack_68[5];
      _objc_retain(uVar4);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_70,8);
      uVar3 = uStack_48;
    }
    _objc_release(uVar3);
  }
  else {
    _objc_retain(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ced2e8; end: 106ced303;  */

void FUN_106ced2e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ced304; end: 106ced33b;  */

void FUN_106ced304(long param_1,undefined8 param_2)

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



/* Entry: 106ced33c; end: 106ced33f;  */

void FUN_106ced33c(void)

{
  return;
}



/* Entry: 106ced340; end: 106ced3b7; -[SCGallerySnapsTabSnapsSectionController sizeForSupplementaryViewOfKind:atIndex:] */

undefined1  [16] FUN_106ced340(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  iVar1 = (int)*(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0();
  if (iVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010bf3fd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4afe0();
    _objc_release(param_2);
    uVar2 = 0x4042800000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 106ced3b8; end: 106ced443; -[SCGallerySnapsTabSnapsSectionController supportedElementKinds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ced3b8(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar6 = &uStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if ((*(byte *)(param_1 + _DAT_11275c54c) & 1) == 0) {
    uStack_20 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    param_4 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    func_0x00010c0720c0(uVar2,param_2,param_3);
    if ((int)uVar2 != 0) {
      puVar3 = puVar1;
      func_0x00010bf3fd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d21d8;
      _objc_opt_class(PTR_PTR_1126d21d8);
      puVar5 = puVar3;
      func_0x00010bf6e100(puVar3,param_2,param_3,puVar1,puVar4,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c18b5e0(puVar5,param_2,puVar1);
      puVar3 = puVar1;
      func_0x00010c0dfc60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010be1f860(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(puVar5,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar1 + _DAT_11275c534;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010c158e00();
      func_0x00010c1facc0(puVar5,param_2,puVar4);
      _objc_release(puVar3);
      func_0x00010bdc9ec0(puVar1);
      func_0x00010c1fadc0(puVar5,param_2,puVar1);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ced444; end: 106ced58b; -[SCGallerySnapsTabSnapsSectionController viewForSupplementaryElementOfKind:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ced444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf3fd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d21d8;
    _objc_opt_class(PTR_PTR_1126d21d8);
    lVar5 = lVar2;
    func_0x00010bf6e100(lVar2,param_2,param_3,param_1,puVar3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c18b5e0(lVar5,param_2,param_1);
    lVar2 = param_1;
    func_0x00010c0dfc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be1f860(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(lVar5,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11275c534;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c158e00();
    func_0x00010c1facc0(lVar5,param_2,lVar4);
    _objc_release(lVar2);
    func_0x00010bdc9ec0(param_1);
    func_0x00010c1fadc0(lVar5,param_2,param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106ced58c; end: 106ced747; -[SCGallerySnapsTabSnapsSectionController sectionController:cellForViewModel:atIndex:] */

void FUN_106ced58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0dfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf343c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106ced2e8;
  uStack_60 = 0x106ced2f8;
  uStack_58 = 0;
  _objc_retain();
  func_0x00010c0bff00(uVar2);
  uVar3 = puStack_78[5];
  _objc_retain(uVar3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106ced748; end: 106cedbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ced748(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc180(*(undefined8 *)(param_1 + 0x20));
  uVar3 = uVar2;
  func_0x00010bf6e020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c548);
  lVar4 = param_2;
  func_0x00010c113000(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf97060(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11275c534;
  lVar11 = *(long *)(param_1 + 0x20) + lVar12;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c158e00();
  func_0x00010bf23980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar11 = param_2;
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080280();
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar11);
  lVar11 = *(long *)(param_1 + 0x20) + (long)_DAT_11275c538;
  _objc_loadWeakRetained(lVar11);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c544);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c568);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077f00();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c564);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c233f00();
  func_0x00010bf47bc0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar11);
  lVar12 = *(long *)(param_1 + 0x20) + lVar12;
  _objc_loadWeakRetained(lVar12);
  func_0x00010c158e00();
  func_0x00010c1face0(uVar3);
  _objc_release(lVar12);
  func_0x00010c17d900(uVar3);
  puVar6 = PTR_PTR_1126d21d0;
  uVar13 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  _objc_retain(uVar13);
  _objc_opt_class(puVar6);
  uVar10 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar6);
  uVar1 = uVar13;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  if (uVar1 != 0) {
    lVar11 = param_2;
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c53c);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010c113000(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010bf4c9c0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(uVar8);
      func_0x00010c260080(uVar13);
      _objc_release(uVar7);
    }
  }
  lVar11 = param_2;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  func_0x00010bf97060(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010b5fa20c(lVar11,lVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar3);
  _objc_release(puVar6);
  lVar11 = param_2;
  func_0x00010bf97060(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610a0(uVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar3;
  _objc_retain(uVar3);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cedbf4; end: 106cedbff;  */

void FUN_106cedbf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106cedc00; end: 106cedd83; -[SCGallerySnapsTabSnapsSectionController sectionController:sizeForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106cedc00(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  lVar2 = param_5;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4afe0();
  lVar3 = param_5;
  func_0x00010bf3fd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ae60();
  lVar4 = param_5;
  func_0x00010bf3fd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ae60();
  param_4 = (param_1 - param_2) - param_4;
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(char *)(param_5 + _DAT_11275c550) == '\x01') {
    lVar2 = (long)_DAT_11275c574;
    if (param_4 == *(double *)(param_5 + _DAT_11275c570)) {
      pdVar1 = (double *)(param_5 + lVar2);
      dVar7 = *pdVar1;
      dVar6 = pdVar1[1];
    }
    else {
      *(double *)(param_5 + _DAT_11275c570) = param_4;
      pdVar1 = (double *)(param_5 + lVar2);
      dVar6 = (double)(long)((param_4 + 1.0) / 99.0);
      dVar7 = 0.0;
      if (0.0 <= dVar6) {
        dVar7 = dVar6;
      }
      uVar5 = (ulong)dVar7;
      if (uVar5 < 5) {
        uVar5 = 4;
      }
      dVar7 = (param_4 - (double)(uVar5 - 1)) / (double)uVar5;
      dVar6 = dVar7 * 1.6666666666666667;
      *pdVar1 = dVar7;
      pdVar1[1] = dVar6;
    }
  }
  else {
    dVar6 = (double)(long)((param_4 + 1.0) / 99.0);
    dVar7 = 0.0;
    if (0.0 <= dVar6) {
      dVar7 = dVar6;
    }
    uVar5 = (ulong)dVar7;
    if (uVar5 < 5) {
      uVar5 = 4;
    }
    dVar7 = (param_4 - (double)(uVar5 - 1)) / (double)uVar5;
    dVar6 = dVar7 * 1.6666666666666667;
  }
  auVar8._8_8_ = dVar6;
  auVar8._0_8_ = dVar7;
  return auVar8;
}



/* Entry: 106cedd84; end: 106cedfe3; -[SCGallerySnapsTabSnapsSectionController sectionController:viewModelsForObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cedd84(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275c56c);
  *(undefined8 *)(param_1 + _DAT_11275c56c) = 0;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be1f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286380();
  _objc_release(param_1);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_106ced2e8;
  uStack_110 = 0x106ced2f8;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = lVar3;
  puStack_108 = puVar4;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c0bff00(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  uVar2 = puStack_128[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  ___stack_chk_fail();
  uVar2 = 8;
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28),
             PTR_s_addObject__11259c1f0,uVar2);
  return;
}



/* Entry: 106cedfe4; end: 106cedffb;  */

void FUN_106cedfe4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106cedffc; end: 106cedfff; -[SCGallerySnapsTabSnapsSectionController listAdapter:willDisplaySectionController:] */

void FUN_106cedffc(void)

{
  return;
}



/* Entry: 106cee000; end: 106cee003; -[SCGallerySnapsTabSnapsSectionController listAdapter:didEndDisplayingSectionController:] */

void FUN_106cee000(void)

{
  return;
}



/* Entry: 106cee004; end: 106cee117; -[SCGallerySnapsTabSnapsSectionController listAdapter:willDisplaySectionController:cell:atIndex:] */

void FUN_106cee004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c0dfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be1f860(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf343c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106cee118;
  puStack_60 = &UNK_110975310;
  uStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_5);
  func_0x00010c0bff00(uVar3,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110975340);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cee118; end: 106cee287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cee118(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c06ece0();
  if ((int)uVar1 == 0) goto LAB_106cee26c;
  uVar1 = param_2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbdda0();
  func_0x00010b5fad2c();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (uVar2 == 8) goto LAB_106cee180;
    uVar3 = param_2;
    func_0x00010c245680(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = (undefined *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c534);
    _objc_loadWeakRetained(puVar4);
    uVar3 = uVar2;
    func_0x00010b6f8630(uVar2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb0a0(puVar4);
    _objc_release(uVar3);
  }
  else {
LAB_106cee180:
    uVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11275c534;
    _objc_loadWeakRetained(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c1554e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bfed020(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb080(uVar2);
  }
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_106cee26c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cee288; end: 106cee28b;  */

void FUN_106cee288(void)

{
  return;
}



/* Entry: 106cee28c; end: 106cee28f; -[SCGallerySnapsTabSnapsSectionController listAdapter:didEndDisplayingSectionController:cell:atIndex:] */

void FUN_106cee28c(void)

{
  return;
}



/* Entry: 106cee290; end: 106cee327; -[SCGallerySnapsTabSnapsSectionController _allItemsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106cee290(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be1f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11275c534;
    _objc_loadWeakRetained(param_1);
    lVar2 = lVar1;
    FUN_106d0eaf4(lVar1,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 106cee328; end: 106cee32b; -[SCGallerySnapsTabSnapsSectionController groupHeaderViewAllItemsSelected:] */

void FUN_106cee328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__allItemsSelected_112550150);
  return;
}



/* Entry: 106cee32c; end: 106cee353; -[SCGallerySnapsTabSnapsSectionController groupHeaderViewShouldToggleSelectAll:] */

void FUN_106cee32c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdc9ec0();
                    /* WARNING: Could not recover jumptable at 0x00010c272b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toggleSelectAllWithAllItemSelect_11267a508,uVar1);
  return;
}



/* Entry: 106cee354; end: 106cee373; -[SCGallerySnapsTabSnapsSectionController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cee354(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275c578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cee374; end: 106cee387; -[SCGallerySnapsTabSnapsSectionController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cee374(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275c578,param_3);
  return;
}



/* Entry: 106cee388; end: 106cee45b; -[SCGallerySnapsTabSnapsSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cee388(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275c578);
  _objc_storeStrong(param_1 + _DAT_11275c568,0);
  _objc_storeStrong(param_1 + _DAT_11275c57c,0);
  _objc_storeStrong(param_1 + _DAT_11275c564,0);
  _objc_storeStrong(param_1 + _DAT_11275c56c,0);
  _objc_storeStrong(param_1 + _DAT_11275c548,0);
  _objc_storeStrong(param_1 + _DAT_11275c544,0);
  _objc_storeStrong(param_1 + _DAT_11275c540,0);
  _objc_storeStrong(param_1 + _DAT_11275c53c,0);
  _objc_destroyWeak(param_1 + _DAT_11275c538);
  _objc_destroyWeak(param_1 + _DAT_11275c534);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c530,0);
  return;
}



/* Entry: 106cee45c; end: 106cef223; -[SCMemoriesSnapsTabService initWithUserPreferences:dataObjectContext:userTrackedLogger:spectaclesOnboardingScopeExposer:spectaclesOnboardingScopeServices:spectaclesDeviceStatusBarScopeExposer:spectaclesDeviceStatusBarScopeServices:featureSettingsService:memoriesThumbnailLogger:circumstanceEngine:memoriesSendViewPresenter:contentDelivery:memoriesMergedDataSource:memoriesProfile:encryptedDatabase:networker:requestManager:currentPageTracker:screenshopPersistenceService:spectaclesContentDataSource:spectaclesCustomExportScopeExposer:memoriesExternalShareAdaptorScopeExposer:legacySpectaclesTooltipsService:memoriesActionMenuScopeExposer:memoriesActionMenuScopeServices:snapsTabBannerTrayScopeExposer:operaPresenterBuilder:spectaclesManager:memoriesStreamingManager:grapheneRegistry:snapchattersDataFetcher:bitmojiAvatarProvider:bitmojiImageFetcher:memoriesPrivateMemoriesManager:memoriesHighlightMutating:memoriesEntryThumbnailGeneratorBuilder:memoriesCRFeaturedStoryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:galleryLogger:memoriesHighlightDataSource:memoriesSaveLogger:capabilitiesManager:memoriesOperaLauncher:smartTemplateService:memoriesExperimentServices:memoriesSearchDatabase:pageLoadMetricManager:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:snapDocFactory:snapDocEditorFactory:snapDocDownloadingService:chatMediaThumbnailProvider:dreamsServices:cachingMediaManager:notificationPool:memoriesUserDefaultsManager:userInfoProvider:promoteSnapService:memoriesSnapDocValidator:memoriesMonetizationServices:memoriesClientGenStoryLoadingScreenScopeExposer:memoriesTweaksServices:] */

undefined8 *
FUN_106cee45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  puStack_80 = PTR_PTR_1126f6740;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_storeWeak(puVar1 + 1,param_8);
    _objc_storeWeak(puVar1 + 2,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_22;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_23);
    _objc_storeWeak(puVar1 + 8,param_24);
    _objc_retain(param_25);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_25;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_26);
    _objc_retain(param_27);
    uVar2 = puVar1[6];
    puVar1[6] = param_27;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_28);
    _objc_retain(param_29);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    _objc_retain(param_14);
    _objc_retain(param_17);
    _objc_retain(param_18);
    _objc_retain(param_19);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_40);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_21);
    _objc_retain(param_10);
    _objc_retain(param_12);
    _objc_retain(param_61);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_47;
    _objc_release(uVar2);
    uVar2 = param_48;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_49);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_50;
    _objc_release(uVar2);
    uVar2 = param_48;
    func_0x00010c27eca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_48;
    func_0x00010bf522a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 10,param_51);
    _objc_retain(param_52);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_66;
    _objc_release(uVar2);
    _objc_release(param_61);
    _objc_release(param_12);
    _objc_release(param_10);
    _objc_release(param_21);
    _objc_release(param_40);
    _objc_release(param_19);
    _objc_release(param_18);
    _objc_release(param_17);
    _objc_release(param_14);
    _objc_release(param_12);
  }
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
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



/* Entry: 106cef224; end: 106cef25b;  */

void FUN_106cef224(void)

{
  _objc_alloc(PTR_PTR_1126d21e0);
  func_0x00010bffe4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cef25c; end: 106cef263;  */

void FUN_106cef25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_build_1125a6180);
  return;
}



/* Entry: 106cef264; end: 106cef2df;  */

void FUN_106cef264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126d21e8;
  _objc_alloc(PTR_PTR_1126d21e8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  FUN_106dbdc94(uVar4);
  func_0x00010c0426a0(puVar2,param_2,uVar1,uVar3,uVar4,*(undefined8 *)(param_1 + 0x38),0x1e);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cef2e0; end: 106cef2f7; -[SCMemoriesSnapsTabService spectaclesDeviceStatusBarScopeExposer] */

void FUN_106cef2e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cef2f8; end: 106cef30f; -[SCMemoriesSnapsTabService spectaclesDeviceStatusBarScopeServices] */

void FUN_106cef2f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cef310; end: 106cef327; -[SCMemoriesSnapsTabService spectaclesOnboardingScopeExposer] */

void FUN_106cef310(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cef328; end: 106cef33f; -[SCMemoriesSnapsTabService spectaclesOnboardingScopeServices] */

void FUN_106cef328(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cef340; end: 106cef357; -[SCMemoriesSnapsTabService memoriesActionMenuScopeExposer] */

void FUN_106cef340(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cef358; end: 106cef35f; -[SCMemoriesSnapsTabService memoriesActionMenuScopeServices] */

undefined8 FUN_106cef358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106cef360; end: 106cef377; -[SCMemoriesSnapsTabService spectaclesCustomExportScopeExposer] */

void FUN_106cef360(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


