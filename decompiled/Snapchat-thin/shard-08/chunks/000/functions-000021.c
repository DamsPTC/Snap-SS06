/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bfd63c; end: 105bfd643; -[SCMapPageLaunchHandler screen] */

undefined4 FUN_105bfd63c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* Entry: 105bfd644; end: 105bfd64b; -[SCMapPageLaunchHandler payloadClass] */

undefined8 FUN_105bfd644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105bfd64c; end: 105bfd6af; -[SCMapPageLaunchHandler .cxx_destruct] */

void FUN_105bfd64c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105bfd6b0; end: 105bfd837; -[SCMapPageLauncherPlugin initWithMainTabNavigationServices:locationSharingSettingsFactoryServices:fullMapScopeExposer:fullMapScopeServices:] */

undefined1 *
FUN_105bfd6b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = &uStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126ec570;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c3170;
    _objc_alloc();
    func_0x00010c028020();
    puVar3 = PTR_PTR_1126c3178;
    _objc_alloc();
    func_0x00010c027fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar2;
    puStack_60 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(param_3 + 8);
}



/* Entry: 105bfd838; end: 105bfd83f; -[SCMapPageLauncherPlugin handlers] */

undefined8 FUN_105bfd838(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bfd840; end: 105bfd86f; -[SCMapPageLauncherPlugin setHandlers:] */

void FUN_105bfd840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bfd870; end: 105bfd877; -[SCMapPageLauncherPlugin nativePayloadInteractiveLaunchHandlers] */

undefined8 FUN_105bfd870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bfd878; end: 105bfd8a7; -[SCMapPageLauncherPlugin setNativePayloadInteractiveLaunchHandlers:] */

void FUN_105bfd878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bfd8a8; end: 105bfd8d7; -[SCMapPageLauncherPlugin .cxx_destruct] */

void FUN_105bfd8a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bfd8d8; end: 105bfdc9b; -[SCCloudSyncOperation estimatedUploadTimeWithCloudFS:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_105bfd8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 *****param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 ****ppppuStack_210;
  undefined *puStack_208;
  long lStack_178;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar15 = PTR_DAT_1126a50b0;
  _objc_retain(param_5);
  lVar18 = param_5;
  func_0x00010010fab4(param_5,puVar15);
  _objc_release(param_5);
  lStack_178 = 0;
  if ((param_5 != 0) && ((int)lVar18 != 0)) {
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_178 = param_5;
  }
  uVar14 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lStack_178);
  puVar11 = &uStack_140;
  puVar12 = auStack_f0;
  uVar13 = 0x10;
  lStack_148 = lStack_178;
  func_0x00010bf52a60();
  if (lStack_148 == 0) {
    _objc_release(lStack_178);
  }
  else {
    puVar15 = (undefined *)0x0;
    lVar18 = *plStack_130;
    do {
      lVar16 = 0;
      do {
        if (*plStack_130 != lVar18) {
          _objc_enumerationMutation(lStack_178);
        }
        uVar13 = *(undefined8 *)(lStack_138 + lVar16 * 8);
        _objc_retain(uVar13);
        puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        _objc_retain(param_7);
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar4 = param_7;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
        pppppuVar5 = pppppuVar4;
        func_0x00010c06cde0();
        if ((int)pppppuVar5 == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          pppppuVar5 = pppppuVar4;
          func_0x00010bfad280(pppppuVar4);
          _objc_retainAutoreleasedReturnValue();
          pppppuVar6 = pppppuVar5;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          lStack_f8 = 0;
          puVar7 = puVar3;
          func_0x00010bf0e880();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lStack_f8;
          _objc_retain(lStack_f8);
          _objc_release(pppppuVar6);
          _objc_release(pppppuVar5);
          puVar17 = (undefined *)0x0;
          if ((lVar2 == 0) && (puVar7 != (undefined *)0x0)) {
            puVar17 = puVar7;
            func_0x00010bfad040();
          }
          uVar19 = uVar13;
          func_0x00010bfd9dc0();
          if ((int)uVar19 != 0) {
            pppppuVar5 = pppppuVar4;
            func_0x00010bfad280(pppppuVar4);
            _objc_retainAutoreleasedReturnValue();
            pppppuVar6 = pppppuVar5;
            func_0x00010c0f5800();
            _objc_retainAutoreleasedReturnValue();
            lStack_100 = 0;
            puVar8 = puVar3;
            func_0x00010bf0e880();
            _objc_retainAutoreleasedReturnValue();
            lVar1 = lStack_100;
            _objc_release(pppppuVar6);
            _objc_release(pppppuVar5);
            if ((lVar1 == 0) && (puVar8 != (undefined *)0x0)) {
              puVar9 = puVar8;
              func_0x00010bfad040();
              puVar17 = puVar9 + (long)puVar17;
            }
            _objc_release(puVar8);
          }
          _objc_release(puVar7);
          _objc_release(lVar2);
        }
        _objc_release(pppppuVar4);
        _objc_release(puVar3);
        _objc_release(uVar13);
        puVar15 = puVar17 + (long)puVar15;
        lVar16 = lVar16 + 1;
      } while (lStack_148 != lVar16);
      puVar11 = &uStack_140;
      puVar12 = auStack_f0;
      uVar13 = 0x10;
      lStack_148 = lStack_178;
      func_0x00010bf52a60();
    } while (lStack_148 != 0);
    _objc_release(lStack_178);
    if (puVar15 != (undefined *)0x0) goto LAB_105bfdc00;
  }
  func_0x00010bf529e0();
LAB_105bfdc00:
  puVar15 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d9a0();
  _objc_release(puVar15);
  _objc_release(lStack_178);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  _objc_retain(param_10);
  puStack_208 = PTR_PTR_1126ec578;
  pppppuVar4 = &ppppuStack_210;
  ppppuStack_210 = param_7;
  _objc_msgSendSuper2(uVar14,param_2,param_3,param_4,pppppuVar4,PTR_s_initWithFrame__1125e2948);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    puVar10 = puVar11;
    _objc_retainBlock();
    uVar14 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_1127320f4);
    *(undefined8 **)((long)pppppuVar4 + (long)_DAT_1127320f4) = puVar10;
    _objc_release(uVar14);
    lVar18 = (long)_DAT_1127320f8;
    _objc_retain(puVar12);
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    *(undefined1 **)((long)pppppuVar4 + lVar18) = puVar12;
    _objc_release(uVar14);
    lVar18 = (long)_DAT_1127320fc;
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    *(undefined8 *)((long)pppppuVar4 + lVar18) = uVar13;
    _objc_release(uVar14);
    lVar18 = (long)_DAT_112732100;
    _objc_retain(param_10);
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    *(undefined8 *)((long)pppppuVar4 + lVar18) = param_10;
    _objc_release(uVar14);
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppppuVar4);
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),uVar19,uVar20);
    lVar18 = (long)_DAT_112732104;
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    *(undefined **)((long)pppppuVar4 + lVar18) = puVar15;
    _objc_release(uVar14);
    func_0x00010befbb60(pppppuVar4);
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)pppppuVar4 + lVar18));
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)pppppuVar4 + lVar18));
    _objc_release(puVar15);
    func_0x00010c213040(*(undefined8 *)((long)pppppuVar4 + lVar18));
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    _objc_retain(pppppuVar4);
    func_0x00010c0bbfc0(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c3180;
    _objc_alloc_init();
    uVar14 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112732108);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_112732108) = puVar15;
    _objc_release(uVar14);
    puVar15 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar15);
    puVar15 = PTR_PTR_1126b44d8;
    _objc_alloc_init(PTR_PTR_1126b44d8);
    func_0x00010c1f7ac0();
    func_0x00010c1c8300(0x4000000000000000,puVar15);
    func_0x00010c1c82c0(0x4000000000000000,puVar15);
    func_0x00010c1c8200(uVar20,puVar15);
    func_0x00010c1f93e0(*(double *)PTR__UIEdgeInsetsZero_110345bb0 + 2.0,0x4010000000000000,
                        *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10) + 2.0,0x4010000000000000
                        ,puVar15);
    puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x000100841590(uVar19,uVar20);
    func_0x00010c014040();
    lVar18 = (long)_DAT_11273210c;
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    *(undefined **)((long)pppppuVar4 + lVar18) = puVar3;
    _objc_release(uVar14);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)pppppuVar4 + lVar18));
    _objc_release(puVar3);
    func_0x00010c1f7e20(*(undefined8 *)((long)pppppuVar4 + lVar18));
    func_0x00010c2025c0(*(undefined8 *)((long)pppppuVar4 + lVar18));
    func_0x00010c2026e0(*(undefined8 *)((long)pppppuVar4 + lVar18));
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    _objc_opt_class(PTR_PTR_1126c3188);
    func_0x00010c126000(uVar14);
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    _objc_opt_class(PTR_PTR_1126c3190);
    func_0x00010c126000(uVar14);
    func_0x00010c189840(*(undefined8 *)((long)pppppuVar4 + lVar18));
    func_0x00010c18b5e0(*(undefined8 *)((long)pppppuVar4 + lVar18));
    func_0x00010c167740(*(undefined8 *)((long)pppppuVar4 + lVar18));
    func_0x00010c167680(*(undefined8 *)((long)pppppuVar4 + lVar18));
    func_0x00010befbb60(pppppuVar4);
    uVar14 = *(undefined8 *)((long)pppppuVar4 + lVar18);
    _objc_retain(pppppuVar4);
    func_0x00010c0bbfc0(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)pppppuVar4 + lVar18));
    puVar17 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)pppppuVar4 + lVar18));
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112732110);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_112732110) = puVar7;
    _objc_release(uVar14);
    _objc_release(puVar17);
    _objc_release(puVar3);
    _objc_release(pppppuVar4);
    _objc_release(puVar15);
    _objc_release(pppppuVar4);
  }
  _objc_release(param_10);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  return pppppuVar4;
}



/* Entry: 105bfdc9c; end: 105bfe1cb; -[SCGalleryBackupFailedView initWithFrame:failedEntryHandler:retryMutator:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105bfdc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_88 = PTR_PTR_1126ec578;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127320f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127320f4) = uVar2;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_1127320f8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_8;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_1127320fc;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112732100;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),uVar7,uVar9);
    lVar8 = (long)_DAT_112732104;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c3180;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732108);
    *(undefined **)((long)puVar1 + (long)_DAT_112732108) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b44d8;
    _objc_alloc_init(PTR_PTR_1126b44d8);
    func_0x00010c1f7ac0();
    func_0x00010c1c8300(0x4000000000000000,puVar3);
    func_0x00010c1c82c0(0x4000000000000000,puVar3);
    func_0x00010c1c8200(uVar9,puVar3);
    func_0x00010c1f93e0(*(double *)PTR__UIEdgeInsetsZero_110345bb0 + 2.0,0x4010000000000000,
                        *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10) + 2.0,0x4010000000000000
                        ,puVar3);
    puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x000100841590(uVar7,uVar9);
    func_0x00010c014040();
    lVar8 = (long)_DAT_11273210c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar4);
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar8));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_opt_class(PTR_PTR_1126c3188);
    func_0x00010c126000(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_opt_class(PTR_PTR_1126c3190);
    func_0x00010c126000(uVar2);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c167740(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c167680(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar8));
    puVar6 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar8));
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732110);
    *(undefined **)((long)puVar1 + (long)_DAT_112732110) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 105bfe1cc; end: 105bfe30f;  */

void FUN_105bfe1cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105bfe310();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bfe310; end: 105bfe34b;  */

void FUN_105bfe310(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bfe34c; end: 105bfe48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe34c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732104);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bfe490; end: 105bfe593; -[SCGalleryBackupFailedView setFailedEntries:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf51e00();
  lVar4 = (long)_DAT_112732114;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar3);
  func_0x00010c1966e0(*(undefined8 *)(param_1 + _DAT_112732108));
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010bf529e0();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e22098;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22098,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e220b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112732104));
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273210c),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105bfe594; end: 105bfe5a3; -[SCGalleryBackupFailedView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732114),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bfe5a4; end: 105bfe6ab; -[SCGalleryBackupFailedView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe5a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010c0840e0(param_4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732108);
  func_0x00010bfb5b20(uVar3,param_2,uVar2);
  lVar4 = *(long *)(param_1 + _DAT_112732114);
  func_0x00010c0dfd40(lVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  ppuVar1 = &PTR_PTR_11097eb90;
  if (lVar5 != 2) {
    ppuVar1 = &PTR_PTR_110952f00;
  }
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,*ppuVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x000106e3f2ac(uVar3);
  func_0x00010c196780(uVar2,param_2,lVar4,*(undefined8 *)(param_1 + _DAT_1127320fc),
                      *(undefined8 *)(param_1 + _DAT_112732100));
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105bfe6ac; end: 105bfe727; -[SCGalleryBackupFailedView collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe6ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  lVar2 = (long)_DAT_112732108;
  func_0x00010c17e7e0(param_1 + -4.0 + -4.0,*(undefined8 *)(param_2 + lVar2));
  uVar3 = *(undefined8 *)(param_2 + lVar2);
  uVar1 = param_6;
  func_0x00010c0840e0(param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c23d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_sizeForDataModelAtIndex__11266ce90,uVar1);
  return;
}



/* Entry: 105bfe728; end: 105bfe8bb; -[SCGalleryBackupFailedView _handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe728(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 3) {
    lVar1 = param_1;
    func_0x00010be0e2a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar6 = (long)_DAT_112732110;
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010bf4b900(uVar2,param_2,lVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + lVar6),param_2,lVar1);
        uVar3 = *(undefined8 *)(param_1 + _DAT_1127320f8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b2220;
        _objc_alloc(PTR_PTR_1126b2220);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560(puVar4,param_2,&PTR____CFConstantStringClassReference_110ec3538,
                            &PTR____CFConstantStringClassReference_110e22078,puVar5,0,0,0,0);
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_105bfe8bc;
        puStack_68 = &UNK_1108bbd78;
        lStack_60 = param_1;
        _objc_retain(lVar1);
        lStack_58 = lVar1;
        func_0x00010c13f660(uVar3,param_2,lVar1,puVar4,&puStack_80);
        _objc_release(puVar4);
        _objc_release(puVar5);
        _objc_release(uVar3);
        _objc_release(lStack_58);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105bfe8bc; end: 105bfe8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe8bc(long param_1,int param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732110),
               PTR_s_removeObject__112628ef8,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 105bfe8dc; end: 105bfe95f; -[SCGalleryBackupFailedView _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe8dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010be0e2a0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + _DAT_1127320f4), lVar2 != 0)) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bfe960; end: 105bfe9eb; -[SCGalleryBackupFailedView _failedEntryUnderGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe960(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_11273210c;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
  lVar2 = *(long *)(param_1 + lVar2);
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732114);
    lVar1 = lVar2;
    func_0x00010c0840e0(lVar2);
    func_0x00010c0dfd40(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bfe9ec; end: 105bfe9fb; -[SCGalleryBackupFailedView failedEntries] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bfe9ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112732114);
}



/* Entry: 105bfe9fc; end: 105bfeaab; -[SCGalleryBackupFailedView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfe9fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732114,0);
  _objc_storeStrong(param_1 + _DAT_112732100,0);
  _objc_storeStrong(param_1 + _DAT_1127320fc,0);
  _objc_storeStrong(param_1 + _DAT_1127320f8,0);
  _objc_storeStrong(param_1 + _DAT_112732110,0);
  _objc_storeStrong(param_1 + _DAT_11273210c,0);
  _objc_storeStrong(param_1 + _DAT_112732108,0);
  _objc_storeStrong(param_1 + _DAT_112732104,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127320f4,0);
  return;
}



/* Entry: 105bfeaac; end: 105bfecc7; -[SCGalleryBackupPrivacyView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_105bfeaac(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined **param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126ec580;
  ppuVar1 = &puStack_88;
  puStack_88 = param_1;
  _objc_msgSendSuper2(ppuVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c620(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(ppuVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    _objc_release(puVar3);
    func_0x00010befbb60(ppuVar1);
    func_0x00010c219b60(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_78 = puVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 2;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar9;
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_140 = PTR_PTR_1126ec588;
  ppuVar1 = &puStack_148;
  ppuVar11 = (undefined **)0x1;
  puStack_148 = puVar2;
  _objc_msgSendSuper2(ppuVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1,param_3);
  ppuVar5 = param_8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar5 = ppuVar1;
    func_0x00010c26c280(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(ppuVar5);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e220d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar1;
    func_0x00010c26c280(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e220f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar1;
    func_0x00010c26c280(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010c26c280(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010bf6f720(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar5);
    _objc_release(puVar2);
    ppuVar5 = ppuVar1;
    func_0x00010bf6f720(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(ppuVar5);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar2);
    func_0x00010c16e9a0(ppuVar1);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar6);
    _objc_release(puVar2);
    func_0x00010c1faee0(ppuVar1);
    func_0x00010c161260(ppuVar1);
    lVar13 = (long)_DAT_112732118;
    _objc_retain(param_6);
    uVar14 = *(undefined8 *)((long)ppuVar1 + lVar13);
    *(undefined8 *)((long)ppuVar1 + lVar13) = param_6;
    _objc_release(uVar14);
    uVar14 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bfbcb00();
    *(char *)((long)ppuVar1 + (long)_DAT_11273211c) = (char)uVar15;
    _objc_release(uVar14);
    uVar15 = *(undefined8 *)((long)ppuVar1 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010bf642a0();
    *(char *)((long)ppuVar1 + (long)_DAT_112732120) = (char)uVar14;
    _objc_release(uVar15);
    lVar12 = (long)_DAT_112732124;
    _objc_retain(param_5);
    uVar14 = *(undefined8 *)((long)ppuVar1 + lVar12);
    *(undefined8 *)((long)ppuVar1 + lVar12) = param_5;
    _objc_release(uVar14);
    lVar12 = (long)_DAT_112732128;
    _objc_retain(param_7);
    uVar14 = *(undefined8 *)((long)ppuVar1 + lVar12);
    *(undefined8 *)((long)ppuVar1 + lVar12) = param_7;
    _objc_release(uVar14);
    lVar12 = (long)_DAT_11273212c;
    _objc_retain(param_8);
    uVar14 = *(undefined8 *)((long)ppuVar1 + lVar12);
    *(undefined ***)((long)ppuVar1 + lVar12) = param_8;
    _objc_release(uVar14);
    func_0x00010bee0580(ppuVar1);
    func_0x00010bed7c60(ppuVar1);
    func_0x00010bed6d00(ppuVar1);
    func_0x00010bec1460(ppuVar1);
    func_0x00010bef9980(param_4);
    _objc_initWeak(auStack_150,ppuVar1);
    puVar3 = PTR_PTR_1126b2500;
    uVar14 = *(undefined8 *)((long)ppuVar1 + lVar12);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_105bff3f4;
    puStack_160 = &UNK_1108dcef0;
    _objc_copyWeak(auStack_158,auStack_150);
    func_0x00010c0e0700();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_112732130);
    *(undefined **)((long)ppuVar1 + (long)_DAT_112732130) = puVar3;
    _objc_release(uVar15);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar14);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)ppuVar1 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_138 = puVar3;
    puStack_130 = puVar7;
    puStack_128 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar2;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x105bff490;
    puStack_190 = &UNK_110851330;
    ppuVar5 = &puStack_1a8;
    _objc_copyWeak(auStack_180,auStack_150);
    _objc_retain(puVar3);
    uVar14 = uVar15;
    ppuVar11 = ppuVar10;
    puStack_188 = puVar3;
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_112732134);
    *(undefined8 *)((long)ppuVar1 + (long)_DAT_112732134) = uVar14;
    _objc_release(uVar16);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(ppuVar10);
    _objc_release(puVar9);
    _objc_release(uVar15);
    _objc_release(puStack_188);
    _objc_destroyWeak(auStack_180);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(auStack_150);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 5);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_150);
  __Unwind_Resume();
  _objc_retain(ppuVar11);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != (undefined *)0x0) {
    ppuVar1 = ppuVar11;
    func_0x00010bf4b900();
    ppuVar5 = ppuVar11;
    func_0x00010bf4b900();
    if ((((ulong)ppuVar5 & 1) != 0) || ((int)ppuVar1 != 0)) {
      if ((int)ppuVar1 != 0) {
        func_0x00010bee0580(param_3);
      }
      if ((int)ppuVar5 != 0) {
        func_0x00010bed7c60(param_3);
      }
      func_0x00010bed6d00(param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return ppuVar11;
}



/* Entry: 105bfecc8; end: 105bff3f3; -[SCGalleryBackupProgressTableViewCell initWithReuseIdentifier:cloudSync:dataObjectContext:featureSettingsService:connectivityMonitor:memoriesProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105bfecc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined **param_8)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_b0 = PTR_PTR_1126ec588;
  puVar1 = &uStack_b8;
  puVar11 = (undefined8 *)0x1;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1,param_3);
  ppuVar2 = param_8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar11 = puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar11);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e220d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar11);
    _objc_release(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e220f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar11);
    _objc_release(ppuVar2);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar11);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar11);
    _objc_release(puVar3);
    puVar11 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar11);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar3);
    func_0x00010c16e9a0(puVar1);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5);
    _objc_release(puVar3);
    func_0x00010c1faee0(puVar1);
    func_0x00010c161260(puVar1);
    lVar13 = (long)_DAT_112732118;
    _objc_retain(param_6);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_6;
    _objc_release(uVar14);
    uVar14 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bfbcb00();
    *(char *)((long)puVar1 + (long)_DAT_11273211c) = (char)uVar15;
    _objc_release(uVar14);
    uVar15 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010bf642a0();
    *(char *)((long)puVar1 + (long)_DAT_112732120) = (char)uVar14;
    _objc_release(uVar15);
    lVar12 = (long)_DAT_112732124;
    _objc_retain(param_5);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_5;
    _objc_release(uVar14);
    lVar12 = (long)_DAT_112732128;
    _objc_retain(param_7);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_7;
    _objc_release(uVar14);
    lVar12 = (long)_DAT_11273212c;
    _objc_retain(param_8);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined ***)((long)puVar1 + lVar12) = param_8;
    _objc_release(uVar14);
    func_0x00010bee0580(puVar1);
    func_0x00010bed7c60(puVar1);
    func_0x00010bed6d00(puVar1);
    func_0x00010bec1460(puVar1);
    func_0x00010bef9980(param_4);
    _objc_initWeak(auStack_c0,puVar1);
    puVar6 = PTR_PTR_1126b2500;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105bff3f4;
    puStack_d0 = &UNK_1108dcef0;
    _objc_copyWeak(auStack_c8,auStack_c0);
    func_0x00010c0e0700();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732130);
    *(undefined **)((long)puVar1 + (long)_DAT_112732130) = puVar6;
    _objc_release(uVar15);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar14);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar7;
    puStack_a0 = puVar8;
    puStack_98 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar3;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x105bff490;
    puStack_100 = &UNK_110851330;
    ppuVar2 = &puStack_118;
    _objc_copyWeak(auStack_f0,auStack_c0);
    _objc_retain(puVar7);
    uVar14 = uVar15;
    puVar11 = puVar10;
    puStack_f8 = puVar7;
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732134);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112732134) = uVar14;
    _objc_release(uVar16);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar15);
    _objc_release(puStack_f8);
    _objc_destroyWeak(auStack_f0);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 5);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  _objc_retain(puVar11);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puVar1 = puVar11;
    func_0x00010bf4b900();
    puVar10 = puVar11;
    func_0x00010bf4b900();
    if ((((ulong)puVar10 & 1) != 0) || ((int)puVar1 != 0)) {
      if ((int)puVar1 != 0) {
        func_0x00010bee0580(param_3);
      }
      if ((int)puVar10 != 0) {
        func_0x00010bed7c60(param_3);
      }
      func_0x00010bed6d00(param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return puVar11;
}



/* Entry: 105bff3f4; end: 105bff563;  */

void FUN_105bff3f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110f6ee78);
    uVar2 = param_3;
    func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110f6ee58);
    if (((uVar2 & 1) != 0) || ((int)uVar1 != 0)) {
      if ((int)uVar1 != 0) {
        func_0x00010bee0580(param_1);
      }
      if ((int)uVar2 != 0) {
        func_0x00010bed7c60(param_1);
      }
      func_0x00010bed6d00(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bff564; end: 105bff5c3; -[SCGalleryBackupProgressTableViewCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bff564(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + _DAT_112732130));
  func_0x00010c281a60(*(undefined8 *)(param_1 + _DAT_112732134));
  puStack_28 = PTR_PTR_1126ec588;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105bff5c4; end: 105bff61f; -[SCGalleryBackupProgressTableViewCell cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_105bff5c4(undefined8 param_1)

{
  undefined1 in_w4;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105bff620;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = in_w4;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 105bff620; end: 105bff64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bff620(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732138) == *(char *)(param_1 + 0x28)) {
    return;
  }
  *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732138) = *(char *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bed6d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDetailText_1125934e8);
  return;
}



/* Entry: 105bff64c; end: 105bff7c3; -[SCGalleryBackupProgressTableViewCell _startReachabilityWatcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bff64c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273213c);
  *(undefined **)(param_1 + _DAT_11273213c) = puVar1;
  _objc_release(uVar6);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732128);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0d7a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105bff7c4; end: 105bff83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bff7c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112732140;
    lVar3 = *(long *)(param_1 + lVar2);
    lVar1 = param_2;
    func_0x00010bf5e480();
    if (lVar3 != lVar1) {
      lVar1 = param_2;
      func_0x00010bf5e480();
      *(long *)(param_1 + lVar2) = lVar1;
      func_0x00010bed6d00(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bff840; end: 105bff8af; -[SCGalleryBackupProgressTableViewCell _updateFailedEntries] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bff840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273212c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52d40(puVar2,param_2,uVar1,0,*(undefined8 *)(param_1 + _DAT_112732124));
  *(undefined **)(param_1 + _DAT_112732144) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bff8b0; end: 105bffa6f; -[SCGalleryBackupProgressTableViewCell _updateSnapsRemaining] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bff8b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar2 = PTR_PTR_1126bc7e0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273212c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (puVar3 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = (undefined *)0x0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        puVar4 = PTR_PTR_1126c3198;
        uVar9 = *(undefined8 *)((long)puVar11 * 8);
        uVar1 = uVar9;
        func_0x00010c0f6420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1356e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df3e0();
        puVar10 = puVar4 + (long)puVar10;
        _objc_release(uVar9);
        _objc_release(uVar1);
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  *(undefined **)(param_1 + _DAT_112732148) = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = (long)_DAT_112732148;
  func_0x00010c138500(puVar2);
  func_0x00010c21e900(puVar2);
  puVar3 = puVar2;
  func_0x00010bf6f720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(puVar3);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar8 = *(long *)(puVar2 + lVar8);
  if (*(long *)(puVar2 + _DAT_112732144) == 0 && lVar8 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc9138;
    goto LAB_105bffbd4;
  }
  if (lVar8 == 0) {
    if (*(long *)(puVar2 + _DAT_112732144) == 1) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e22098;
      goto LAB_105bffbd4;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110e220b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220b8,0);
    _objc_retainAutoreleasedReturnValue();
LAB_105bffc14:
    func_0x00010c14de00(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar5;
  }
  else {
    lVar6 = *(long *)(puVar2 + _DAT_112732140);
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    if (lVar6 < 2) {
      if (lVar6 + 1U < 2) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110db8b98;
        goto LAB_105bffbd4;
      }
      ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
      if (lVar6 != 1) goto LAB_105bffc34;
LAB_105bffbc0:
      if ((puVar2[_DAT_112732138] & 1) != 0) goto LAB_105bffbc4;
      if ((puVar2[_DAT_11273211c] & 1) == 0) {
        if (lVar8 == 1) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110e22118;
          goto LAB_105bffbd4;
        }
        ppuVar7 = &PTR____CFConstantStringClassReference_110e22138;
        goto LAB_105bffbfc;
      }
      if (puVar2[_DAT_112732120] == '\0') goto LAB_105bffbc4;
      if (lVar8 != 1) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110e22178;
        goto LAB_105bffbfc;
      }
      ppuVar7 = &PTR____CFConstantStringClassReference_110e22158;
    }
    else {
      if (lVar6 != 2) {
        if (lVar6 != 4) goto LAB_105bffc34;
        goto LAB_105bffbc0;
      }
LAB_105bffbc4:
      if (lVar8 != 1) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110e221b8;
LAB_105bffbfc:
        func_0x00010bcbeaa8(ppuVar7,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105bffc14;
      }
      ppuVar7 = &PTR____CFConstantStringClassReference_110e22198;
    }
LAB_105bffbd4:
    func_0x00010bcbeaa8(ppuVar7,0);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105bffc34:
  func_0x00010bf6f720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 105bffa70; end: 105bffccb; -[SCGalleryBackupProgressTableViewCell _updateDetailText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bffa70(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112732148;
  if (*(long *)(param_1 + lVar5) == 0) {
    bVar1 = *(long *)(param_1 + _DAT_112732144) != 0;
  }
  else {
    bVar1 = true;
  }
  func_0x00010c138500(param_1,param_2,bVar1);
  func_0x00010c21e900(param_1);
  lVar3 = param_1;
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(lVar3);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = *(long *)(param_1 + lVar5);
  if (*(long *)(param_1 + _DAT_112732144) == 0 && lVar5 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc9138;
    goto LAB_105bffbd4;
  }
  if (lVar5 == 0) {
    if (*(long *)(param_1 + _DAT_112732144) == 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e22098;
      goto LAB_105bffbd4;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110e220b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220b8,0);
    _objc_retainAutoreleasedReturnValue();
LAB_105bffc14:
    func_0x00010c14de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar2;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112732140);
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (lVar3 < 2) {
      if (lVar3 + 1U < 2) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db8b98;
        goto LAB_105bffbd4;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
      if (lVar3 != 1) goto LAB_105bffc34;
LAB_105bffbc0:
      if ((*(byte *)(param_1 + _DAT_112732138) & 1) != 0) goto LAB_105bffbc4;
      if ((*(byte *)(param_1 + _DAT_11273211c) & 1) == 0) {
        if (lVar5 == 1) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110e22118;
          goto LAB_105bffbd4;
        }
        ppuVar4 = &PTR____CFConstantStringClassReference_110e22138;
        goto LAB_105bffbfc;
      }
      if (*(char *)(param_1 + _DAT_112732120) == '\0') goto LAB_105bffbc4;
      if (lVar5 != 1) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e22178;
        goto LAB_105bffbfc;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110e22158;
    }
    else {
      if (lVar3 != 2) {
        if (lVar3 != 4) goto LAB_105bffc34;
        goto LAB_105bffbc0;
      }
LAB_105bffbc4:
      if (lVar5 != 1) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e221b8;
LAB_105bffbfc:
        func_0x00010bcbeaa8(ppuVar4,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105bffc14;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110e22198;
    }
LAB_105bffbd4:
    func_0x00010bcbeaa8(ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105bffc34:
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 105bffccc; end: 105bffd5b; -[SCGalleryBackupProgressTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bffccc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273212c,0);
  _objc_storeStrong(param_1 + _DAT_112732128,0);
  _objc_storeStrong(param_1 + _DAT_11273213c,0);
  _objc_storeStrong(param_1 + _DAT_112732118,0);
  _objc_storeStrong(param_1 + _DAT_112732124,0);
  _objc_storeStrong(param_1 + _DAT_112732134,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732130,0);
  return;
}



/* Entry: 105bffd5c; end: 105c003d3; -[SCGalleryBackupViewController initWithBackupUIScope:userSession:profile:dataObjectContext:featureSettingsService:spectaclesAuxiliaryContentServices:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:videoFilterFactory:targetTrajectoryFactory:currentPageTracker:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:lazyBackgroundTaskWrapper:connectivityMonitor:userTrackedLogger:snapVideoFilterScopeExposer:cachingMediaManager:cloudSync:retryMutator:memoriesCloudFS:memoriesPrivateMemoriesManager:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:memoriesTranscodingHelper:creativeToolsMemoriesResources:memoriesExperimentService:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105bffd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31)

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
  puStack_70 = PTR_PTR_1126ec590;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273214c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732150;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732154;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732158;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c06cfc0();
    *(char *)((long)puVar1 + (long)_DAT_11273215c) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010c06cfc0();
    *(char *)((long)puVar1 + (long)_DAT_112732160) = (char)uVar2;
    lVar3 = (long)_DAT_112732164;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_22;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732168;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273216c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732170;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732174;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732178;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273217c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732180;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732184;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732188;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273218c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732190;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732194;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112732198,param_20);
    lVar3 = (long)_DAT_11273219c;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_21;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321a0;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_23;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321a4;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_24;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321a8;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_25;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321ac;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_26;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321b0;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_27;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321b4;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_28;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321b8;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_29;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321bc;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321c0;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_30;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127321c4;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_31;
    _objc_release(uVar2);
    func_0x00010bec1460(puVar1);
  }
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



/* Entry: 105c003d4; end: 105c003db; -[SCGalleryBackupViewController pageViewName] */

undefined8 FUN_105c003d4(void)

{
  return 0x6e;
}



/* Entry: 105c003dc; end: 105c0044f; -[SCGalleryBackupViewController loadView] */

void FUN_105c003dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c00450; end: 105c00d93; -[SCGalleryBackupViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c00450(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126ec590;
  lStack_c0 = param_1;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar11);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar10 = (long)_DAT_1127321c8;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  _objc_release(lVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105c00d94;
  puStack_d0 = &UNK_1108471b0;
  lStack_c8 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1198;
  _objc_alloc();
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  lVar10 = (long)_DAT_1127321cc;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar9);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105c00e1c;
  puStack_f8 = &UNK_1108471b0;
  lStack_f0 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfeed60(param_1);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127321d0;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar9);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c271420(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar9);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar9);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fee666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar10));
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_105c01318;
  puStack_120 = &UNK_1108471b0;
  lStack_118 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  lVar10 = (long)_DAT_1127321d4;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar9);
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x105c013f0;
  puStack_148 = &UNK_1108471b0;
  lStack_140 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfeed00(param_1);
  puVar2 = PTR__OBJC_CLASS___UIProgressView_1126c14e0;
  _objc_alloc();
  func_0x00010c03b440();
  lVar10 = (long)_DAT_1127321d8;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar9);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e48a0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219180(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar2);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puStack_188 = puVar1;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_105c015b8;
  puStack_170 = &UNK_1108471b0;
  lStack_168 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar11 = (long)_DAT_1127321dc;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar2;
  _objc_release(uVar9);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar11));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar2);
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  _objc_initWeak(auStack_190,param_1);
  lVar11 = (long)_DAT_112732168;
  uVar12 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bfbcb00();
  *(char *)(param_1 + _DAT_1127321e4) = (char)uVar9;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bf642a0();
  *(char *)(param_1 + _DAT_1127321e8) = (char)uVar9;
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126b2500;
  uVar9 = *(undefined8 *)(param_1 + _DAT_112732154);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112732158);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_105c01788;
  puStack_1a0 = &UNK_1108dcef0;
  _objc_copyWeak(auStack_198,auStack_190);
  func_0x00010c0e0700();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127321ec);
  *(undefined **)(param_1 + _DAT_1127321ec) = puVar2;
  _objc_release(uVar13);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar12);
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar2;
  puStack_a8 = puVar3;
  puStack_a0 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_190;
  _objc_copyWeak(auStack_1c0);
  _objc_retain(puVar2);
  uVar9 = uVar12;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127321f0);
  *(undefined8 *)(param_1 + _DAT_1127321f0) = uVar9;
  _objc_release(uVar13);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar1);
  _objc_release(puVar5);
  func_0x00010bed7c60(param_1);
  func_0x00010bedc7c0(param_1);
  func_0x00010bee0560(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_1c0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_destroyWeak(auStack_198);
  puVar6 = auStack_190;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_190);
  __Unwind_Resume();
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar6 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar8 + 0x10))(puVar8,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105c00d94; end: 105c00e1b;  */

void FUN_105c00d94(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c00e1c; end: 105c00f8f;  */

void FUN_105c00e1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = "i";
  FUN_105c00f90("i");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c00f90; end: 105c01317;  */

void FUN_105c00f90(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *in_stack_00000000;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x40) && (param_1[1] == 0)) {
    _objc_retain(in_stack_00000000);
    puVar3 = in_stack_00000000;
  }
  else {
    pbVar2 = param_1;
    _strcmp(param_1,"{CGPoint=dd}");
    if ((((int)pbVar2 == 0) || (pbVar2 = param_1, _strcmp(param_1,"{CGSize=dd}"), (int)pbVar2 == 0))
       || (pbVar2 = param_1, _strcmp(param_1,"{UIEdgeInsets=dddd}"), (int)pbVar2 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
      if (bVar1 < 99) {
        if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_105c012d8;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_105c012d8;
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_105c012d8;
            }
          }
        }
        else if (bVar1 == 0x49) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105c012d8;
          }
        }
        else if (bVar1 == 0x51) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105c012d8;
          }
        }
        else {
          if (bVar1 != 0x53) goto LAB_105c012d8;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df8a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105c012d8;
          }
        }
      }
      else if (bVar1 < 0x69) {
        if (bVar1 == 99) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105c012d8;
          }
        }
        else if (bVar1 == 100) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105c012d8;
          }
        }
        else {
          if (bVar1 != 0x66) goto LAB_105c012d8;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740((float)(double)in_stack_00000000,
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105c012d8;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105c012d8;
        }
      }
      else if (bVar1 == 0x71) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105c012d8;
        }
      }
      else {
        if (bVar1 != 0x73) goto LAB_105c012d8;
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105c012d8;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
LAB_105c012d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c01318; end: 105c015b7;  */

void FUN_105c01318(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c015b8; end: 105c01787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c015b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "d";
  FUN_105c00f90("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127321d0);
  func_0x00010c0bc020(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c01788; end: 105c0182f;  */

void FUN_105c01788(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_105c01814;
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110f6ee58);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110f6ee78);
    if ((int)uVar1 == 0) goto LAB_105c01814;
LAB_105c017fc:
    func_0x00010bedc7c0(param_1);
  }
  else {
    func_0x00010bed7c60(param_1);
    uVar1 = param_3;
    func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110f6ee78);
    if ((uVar1 & 1) != 0) goto LAB_105c017fc;
  }
  func_0x00010bee0560(param_1);
  func_0x00010bee2b60(param_1);
LAB_105c01814:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c01830; end: 105c018ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01830(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1f3c0();
      *(char *)(lVar2 + _DAT_1127321e4) = (char)lVar4;
      _objc_release(lVar3);
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
      func_0x00010bf642a0();
      *(undefined1 *)(lVar2 + _DAT_1127321e8) = uVar1;
      func_0x00010bee2b60(lVar2);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c018f0; end: 105c0199b; -[SCGalleryBackupViewController _doubleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c018f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127321e0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c074c20();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112732164);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7ce0();
    _objc_release(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 105c0199c; end: 105c01a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0199c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e221f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_1127321e0;
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 105c01a18; end: 105c01ae3; -[SCGalleryBackupViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ec590;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07f8c0();
  *(char *)(param_1 + _DAT_1127321f4) = (char)puVar2;
  _objc_release(puVar1);
  func_0x000108df583c(0,param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_1127321f8) = puVar2;
  _objc_release(puVar1);
  func_0x000108df58d4(*(undefined1 *)(param_1 + _DAT_1127321fc),param_3);
  return;
}



/* Entry: 105c01ae4; end: 105c01b6f; -[SCGalleryBackupViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01ae4(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec590;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732184);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  if (*(char *)(param_1 + _DAT_11273215c) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11273215c) = 0;
    func_0x00010bea4c60(param_1);
  }
  return;
}



/* Entry: 105c01b70; end: 105c01be3; -[SCGalleryBackupViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec590;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  func_0x000108df58d4(*(undefined8 *)(param_1 + _DAT_1127321f8),param_3);
  func_0x000108df583c(*(undefined1 *)(param_1 + _DAT_1127321f4),param_3);
  return;
}



/* Entry: 105c01be4; end: 105c01d1f; -[SCGalleryBackupViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01be4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec590;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  func_0x00010bec3700(param_1);
  if (*(char *)(param_1 + _DAT_112732160) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112732164);
    _objc_retain(uVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127321c0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf0c2e0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105c01d20; end: 105c01d27;  */

void FUN_105c01d20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0809f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isTacomaBackupOrchestratorEnable_1125fdc88);
  return;
}



/* Entry: 105c01d28; end: 105c01ddb;  */

void FUN_105c01d28(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    func_0x00010c1af6c0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105c01ddc; end: 105c01e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01ddc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112732160) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c01e04; end: 105c01fd7; -[SCGalleryBackupViewController initGradients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01e04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar2;
  func_0x00010bf41680(0,0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127321d4);
  func_0x00010bfcd9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar2;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127321cc);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c31a0;
  _objc_alloc();
  func_0x00010c063980();
  lVar6 = (long)_DAT_112732200;
  uVar5 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined **)(puVar1 + lVar6) = puVar2;
  _objc_release(uVar5);
  func_0x00010c189840(*(undefined8 *)(puVar1 + lVar6),param_2,puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(puVar1 + lVar6),param_2,puVar1);
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c01fd8; end: 105c0205b; -[SCGalleryBackupViewController initHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c01fd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c31a0;
  _objc_alloc();
  func_0x00010c063980();
  lVar3 = (long)_DAT_112732200;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c0205c; end: 105c022a7; -[SCGalleryBackupViewController _updateOverrideButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0205c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*(long *)(param_1 + _DAT_112732204) != 0) && (*(long *)(param_1 + _DAT_112732208) == 1)) &&
     ((lVar3 = param_1, func_0x00010bdd9bc0(), (int)lVar3 == 0 ||
      (*(char *)(param_1 + _DAT_112732160) == '\x01')))) {
    lVar3 = (long)_DAT_1127321d0;
    ppuVar1 = *(undefined ***)(param_1 + lVar3);
    func_0x00010c0bc060(ppuVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    if (*(char *)(param_1 + _DAT_112732160) == '\x01') {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e22218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22218,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e909b4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c216260(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  lVar3 = (long)_DAT_1127321d0;
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c0bc060(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105c022a8; end: 105c02313; -[SCGalleryBackupViewController _canMakeProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105c022a8(long param_1)

{
  long lVar1;
  
  if (((*(char *)(param_1 + _DAT_1127321e4) == '\x01') &&
      (*(char *)(param_1 + _DAT_1127321e8) != '\x01')) ||
     ((*(byte *)(param_1 + _DAT_112732160) & 1) != 0)) {
    lVar1 = *(long *)(param_1 + _DAT_112732208);
    if (lVar1 == 1) {
      return true;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112732208);
  }
  return lVar1 == 2;
}



/* Entry: 105c02314; end: 105c0233f; -[SCGalleryBackupViewController _resetProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c02314(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11273220c) = param_1;
  return;
}



/* Entry: 105c02340; end: 105c023c3; -[SCGalleryBackupViewController _startProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c02340(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112732210;
  if (*(long *)(param_2 + lVar3) != 0) {
    return;
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11273220c) = param_1;
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x3f9eb851eb851eb8,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_3,param_2,
                      PTR_s__timerFired__11252cbc0,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c023c4; end: 105c023f7; -[SCGalleryBackupViewController _stopProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c023c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112732210;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c023f8; end: 105c0246b; -[SCGalleryBackupViewController _timerFired:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c023f8(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  _CACurrentMediaTime();
  dVar2 = (param_1 - *(double *)(param_2 + _DAT_11273220c)) / *(double *)(param_2 + _DAT_112732214);
  dVar1 = dVar2;
  _exp(dVar2);
  dVar2 = -dVar2;
  _exp(dVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1e4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)((dVar1 - dVar2) / (dVar1 + dVar2)),*(undefined8 *)(param_2 + _DAT_1127321d8),
             PTR_s_setProgress__112656bc8);
  return;
}



/* Entry: 105c0246c; end: 105c024c7; -[SCGalleryBackupViewController _needsWaitWiFi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_105c0246c(long param_1)

{
  byte bVar1;
  
  if ((*(long *)(param_1 + _DAT_112732208) == 1) &&
     ((*(char *)(param_1 + _DAT_1127321e4) != '\x01' ||
      (*(char *)(param_1 + _DAT_1127321e8) == '\x01')))) {
    bVar1 = *(byte *)(param_1 + _DAT_112732160) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 105c024c8; end: 105c02573; -[SCGalleryBackupViewController _updateProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c024c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x00010bdd9bc0();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c02574;
  puStack_48 = &UNK_11086b060;
  uStack_38 = (undefined1)lVar1;
  lStack_40 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_1 + _DAT_1127321d8),param_2,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112732204) == 0 || (int)lVar1 == 0) {
    func_0x00010bec3700();
  }
  else {
    func_0x00010bec12c0(param_1);
  }
  return;
}



/* Entry: 105c02574; end: 105c0264b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c02574(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "d";
  FUN_105c00f90("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c0264c; end: 105c02663; -[SCGalleryBackupViewController _overridePressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0264c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setIsBackupNow__112586cc0,
             (*(byte *)(param_1 + _DAT_112732160) ^ 0xff) & 1);
  return;
}



/* Entry: 105c02664; end: 105c02713; -[SCGalleryBackupViewController _setIsBackupNow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c02664(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732164);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af6c0();
  _objc_release(uVar2);
  return;
}



/* Entry: 105c02714; end: 105c0276f;  */

void FUN_105c02714(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105c02770;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105c02770; end: 105c027a7;  */

void FUN_105c02770(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c027a8; end: 105c0284b; -[SCGalleryBackupViewController _updateFailedEntries] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c027a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732154);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732158);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9180(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112732218);
  *(undefined **)(param_1 + _DAT_112732218) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c0284c; end: 105c02af3; -[SCGalleryBackupViewController _updateOperations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0284c(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  long lStack_138;
  
  puVar5 = PTR_PTR_1126bc7e0;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732154);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112732158);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar18 = (long)_DAT_112732204;
  *(undefined8 *)(param_1 + lVar18) = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  _objc_retain(puVar5);
  puVar8 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar5);
    puVar8 = (undefined *)0x0;
    lVar15 = 0;
    lStack_138 = 0;
  }
  else {
    lStack_138 = 0;
    lVar15 = 0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(puVar5);
        }
        lVar17 = *(long *)((long)puVar14 * 8);
        lVar6 = lVar17;
        func_0x00010c0f6420();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c3198;
        lVar12 = lVar17;
        func_0x00010c1356e0(lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df3e0();
        _objc_release(lVar12);
        lVar12 = *(long *)(param_1 + lVar18);
        if (lVar12 == 0 && puVar7 != (undefined *)0x0) {
          _objc_retain(lVar6);
          _objc_release(lVar15);
          func_0x00010c1356e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lStack_138);
          lVar12 = *(long *)(param_1 + lVar18);
          lVar15 = lVar6;
          lStack_138 = lVar17;
        }
        *(undefined **)(param_1 + lVar18) = puVar7 + lVar12;
        _objc_release(lVar6);
        puVar14 = puVar14 + 1;
      } while (puVar8 != puVar14);
      puVar8 = puVar5;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
    _objc_release(puVar5);
    if (lVar15 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126c3198;
      func_0x00010bf6e8e0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273221c);
  *(undefined **)(param_1 + _DAT_11273221c) = puVar8;
  _objc_release(uVar3);
  _objc_release(lStack_138);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_11273221c;
  if (*(long *)(puVar5 + lVar16) != 0) {
    func_0x00010be93720(puVar5);
    uVar4 = *(undefined8 *)(puVar5 + lVar16);
    uVar3 = *(undefined8 *)(puVar5 + _DAT_1127321a4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99880(uVar4);
    *(ulong *)(puVar5 + _DAT_112732214) =
         CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,CONCAT12(
                                                  uVar21,CONCAT11(uVar20,uVar19)))))));
    _objc_release(uVar3);
  }
  lVar18 = (long)_DAT_112732218;
  lVar11 = *(long *)(puVar5 + lVar18);
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    if (*(long *)(puVar5 + lVar16) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_1127321cc));
      func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_1127321d4));
      func_0x00010bdd0300(puVar5);
      func_0x00010bec3700(puVar5);
      goto LAB_105c02bac;
    }
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_1127321cc));
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_1127321d4));
    lVar11 = (long)_DAT_112732220;
    uVar13 = *(ulong *)(puVar5 + lVar11);
    uVar3 = *(undefined8 *)(puVar5 + lVar16);
    func_0x00010c1356e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(puVar5 + lVar16);
    func_0x00010c1356e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar5 + lVar11);
    *(undefined8 *)(puVar5 + lVar11) = uVar3;
    _objc_release(uVar4);
    puVar8 = PTR_DAT_1126a50b0;
    if ((uVar13 & 1) == 0) {
      lVar11 = *(long *)(puVar5 + lVar16);
      _objc_retain(lVar11);
      lVar16 = lVar11;
      func_0x00010010fab4(lVar11,puVar8);
      _objc_release(lVar11);
      if (((int)lVar16 != 0) && (lVar11 != 0)) {
        func_0x00010bdd0700(puVar5);
      }
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_1127321cc));
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_1127321d4));
    func_0x00010bdd0180(puVar5);
LAB_105c02bac:
    uVar3 = *(undefined8 *)(puVar5 + _DAT_112732220);
    *(undefined8 *)(puVar5 + _DAT_112732220) = 0;
    _objc_release(uVar3);
  }
  func_0x00010bee2b60(puVar5);
  if (*(long *)(puVar5 + _DAT_112732204) == 0) {
    lVar16 = *(long *)(puVar5 + lVar18);
    func_0x00010bf529e0();
    if (lVar16 == 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e22238;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22238,0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = true;
      goto LAB_105c02c00;
    }
  }
  ppuVar10 = &PTR____CFConstantStringClassReference_110e220f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220f8,0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  bVar2 = true;
LAB_105c02c00:
  lVar16 = (long)_DAT_112732224;
  _objc_retain(ppuVar10);
  uVar3 = *(undefined8 *)(puVar5 + lVar16);
  *(undefined ***)(puVar5 + lVar16) = ppuVar10;
  _objc_release(uVar3);
  if (bVar1) {
    _objc_release(ppuVar10);
  }
  if (bVar2) {
    _objc_release(ppuVar10);
  }
  lVar16 = (long)_DAT_112732200;
  uVar4 = *(undefined8 *)(puVar5 + lVar16);
  func_0x00010bf643e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c271340();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar5 + lVar16);
  func_0x00010bfdfc60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(puVar5 + lVar16);
  func_0x00010bfdfc60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105c02af4; end: 105c02df7; -[SCGalleryBackupViewController _updateSnapsLeft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c02af4(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = (long)_DAT_11273221c;
  if (*(long *)(param_2 + lVar11) != 0) {
    func_0x00010be93720(param_2);
    uVar8 = *(undefined8 *)(param_2 + lVar11);
    uVar4 = *(undefined8 *)(param_2 + _DAT_1127321a4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99880(uVar8);
    *(undefined8 *)(param_2 + _DAT_112732214) = param_1;
    _objc_release(uVar4);
  }
  lVar10 = (long)_DAT_112732218;
  lVar5 = *(long *)(param_2 + lVar10);
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    if (*(long *)(param_2 + lVar11) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_1127321cc));
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_1127321d4));
      func_0x00010bdd0300(param_2);
      func_0x00010bec3700(param_2);
      goto LAB_105c02bac;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_1127321cc));
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_1127321d4));
    lVar5 = (long)_DAT_112732220;
    uVar9 = *(ulong *)(param_2 + lVar5);
    uVar4 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c1356e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c1356e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + lVar5);
    *(undefined8 *)(param_2 + lVar5) = uVar4;
    _objc_release(uVar8);
    puVar3 = PTR_DAT_1126a50b0;
    if ((uVar9 & 1) == 0) {
      lVar5 = *(long *)(param_2 + lVar11);
      _objc_retain(lVar5);
      lVar11 = lVar5;
      func_0x00010010fab4(lVar5,puVar3);
      _objc_release(lVar5);
      if (((int)lVar11 != 0) && (lVar5 != 0)) {
        func_0x00010bdd0700(param_2);
      }
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_1127321cc));
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_1127321d4));
    func_0x00010bdd0180(param_2);
LAB_105c02bac:
    uVar4 = *(undefined8 *)(param_2 + _DAT_112732220);
    *(undefined8 *)(param_2 + _DAT_112732220) = 0;
    _objc_release(uVar4);
  }
  func_0x00010bee2b60(param_2);
  if (*(long *)(param_2 + _DAT_112732204) == 0) {
    lVar11 = *(long *)(param_2 + lVar10);
    func_0x00010bf529e0();
    if (lVar11 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e22238;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22238,0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = true;
      goto LAB_105c02c00;
    }
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110e220f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e220f8,0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  bVar2 = true;
LAB_105c02c00:
  lVar11 = (long)_DAT_112732224;
  _objc_retain(ppuVar7);
  uVar4 = *(undefined8 *)(param_2 + lVar11);
  *(undefined ***)(param_2 + lVar11) = ppuVar7;
  _objc_release(uVar4);
  if (bVar1) {
    _objc_release(ppuVar7);
  }
  if (bVar2) {
    _objc_release(ppuVar7);
  }
  lVar11 = (long)_DAT_112732200;
  uVar8 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bf643e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c271340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfdfc60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar8);
  uVar4 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfdfc60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105c02df8; end: 105c02e23; -[SCGalleryBackupViewController _updateUIWithStatusChanges] */

void FUN_105c02df8(undefined8 param_1)

{
  func_0x00010bee0b00();
  func_0x00010bede040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedc9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateOverrideButton_112594c20);
  return;
}



/* Entry: 105c02e24; end: 105c02ef3; -[SCGalleryBackupViewController _ensureSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c02e24(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112732228;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 105c02ef4; end: 105c03047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c02ef4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x401c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c03048; end: 105c03057; -[SCGalleryBackupViewController _cleanupSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732228),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105c03058; end: 105c032c7; -[SCGalleryBackupViewController _updateStatusText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03058(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bddfa40();
  lVar5 = (long)_DAT_112732204;
  if (*(long *)(param_1 + lVar5) == 0) {
    lVar4 = (long)_DAT_1127321dc;
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_105c0329c;
  }
  lVar4 = (long)_DAT_1127321c4;
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + lVar4));
  lVar4 = param_1;
  func_0x00010bdd9bc0();
  if ((int)lVar4 == 0) {
    lVar1 = param_1;
    func_0x00010be628a0();
    lVar4 = (long)_DAT_1127321dc;
    if ((int)lVar1 == 0) {
      func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110db8b98;
    }
    else {
      func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (*(long *)(param_1 + lVar5) != 1) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e22138;
        goto LAB_105c03260;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e22118;
    }
  }
  else {
    func_0x00010be0a680(param_1);
    lVar4 = (long)_DAT_1127321dc;
    func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (*(long *)(param_1 + lVar5) != 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e222b8;
LAB_105c03260:
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bcbeaa8(ppuVar3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      goto LAB_105c0329c;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e22298;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105c0329c:
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105c032c8; end: 105c03a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c032c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732228);
  func_0x00010c0bc000();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = "@";
  pcVar4 = pcVar8;
  FUN_105c00f90("@");
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))((double)*(float *)(param_1 + 0x28) + 7.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(pcVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "d";
  FUN_105c00f90("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105c00f90("@");
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))((double)*(float *)(param_1 + 0x2c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(pcVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c03a74; end: 105c03beb; -[SCGalleryBackupViewController _startReachabilityWatcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03a74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273222c);
  *(undefined **)(param_1 + _DAT_11273222c) = puVar1;
  _objc_release(uVar6);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732190);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0d7a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105c03bec; end: 105c03c43;  */

void FUN_105c03bec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf5e480(param_2);
    func_0x00010bedc160(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c03c44; end: 105c03c63; -[SCGalleryBackupViewController _updateNetworkConnectivityStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03c44(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112732208) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112732208) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee2b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUIWithStatusChanges_112596480);
  return;
}



/* Entry: 105c03c64; end: 105c03cc7; -[SCGalleryBackupViewController cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_105c03c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c03cc8;
  puStack_30 = &UNK_1108dcfa0;
  uStack_28 = param_1;
  uStack_20 = param_4;
  uStack_18 = param_5;
  uStack_17 = param_6;
  uStack_16 = param_7;
  func_0x000100162d98("APPSTORE",&puStack_48);
  return;
}



/* Entry: 105c03cc8; end: 105c03cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03cc8(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732160) == *(char *)(param_1 + 0x30)) {
    return;
  }
  *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732160) = *(char *)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bee2b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateUIWithStatusChanges_112596480);
  return;
}



/* Entry: 105c03cf4; end: 105c03e53; -[SCGalleryBackupViewController _setHeaderTransparent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03cf4(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [3];
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732230);
  puVar1 = auStack_58;
  if (param_3 == 0) {
    puVar1 = auStack_80;
  }
  pcVar2 = (code *)0x105c03dcc;
  if (param_3 == 0) {
    pcVar2 = FUN_105c03e54;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_1108471b0;
  puVar1[4] = param_1;
  func_0x00010c0bbfc0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(byte *)(param_1 + _DAT_1127321fc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127321fc) = (char)param_3;
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112732200));
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c14cde0();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)(ulong)param_3) {
    return;
  }
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105c03e54; end: 105c03fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03e54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732200);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c03fb8; end: 105c04073; -[SCGalleryBackupViewController _attachContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c03fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112732230;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f80();
  _objc_release(lVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c04074; end: 105c04257; -[SCGalleryBackupViewController _attachCompleteBackgroundView] */

void FUN_105c04074(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22238;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22238,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  func_0x00010c18b5e0(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  puVar5 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar5);
  _objc_retain(uVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bdc4240();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105c04258; end: 105c0429f;  */

void FUN_105c04258(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4240();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c042a0; end: 105c0435b; -[SCGalleryBackupViewController _actionBlockForAlertDialog:] */

void FUN_105c042a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c0435c; end: 105c0438f;  */

void FUN_105c0435c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be02260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c04390; end: 105c0440b; -[SCGalleryBackupViewController _attachPrivateBackgroundView] */

void FUN_105c04390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c31a8;
  _objc_alloc(PTR_PTR_1126c31a8);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  _objc_release(uVar2);
  func_0x00010bdd0340(param_1,param_2,puVar1);
  func_0x00010bea45c0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c0440c; end: 105c0456b; -[SCGalleryBackupViewController _attachBackupFailedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c0440c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_70;
  lVar5 = (long)_DAT_112732234;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105c0456c;
    puStack_58 = &UNK_1108dcff0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retainBlock(&puStack_70);
    puVar3 = PTR_PTR_1126c31b8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c014460();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    lVar1 = *(long *)(param_1 + lVar5);
  }
  func_0x00010c199ec0(lVar1);
  func_0x00010bdd0340(param_1);
  func_0x00010bea45c0(param_1);
  return;
}



/* Entry: 105c0456c; end: 105c04697;  */

void FUN_105c0456c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105c04698;
    puStack_68 = &UNK_110841fb0;
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    _objc_retain(param_2);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105c04a54;
    puStack_98 = &UNK_110841fb0;
    uStack_60 = param_2;
    _objc_copyWeak(auStack_88,param_1 + 0x20);
    _objc_retain(param_2);
    uStack_90 = param_2;
    func_0x000108df9088(lVar2,&puStack_80,&puStack_b0);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105c04698; end: 105c049d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c04698(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af4d0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732158);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        uVar10 = *(undefined8 *)((long)puVar9 * 8);
        uVar5 = *(undefined8 *)(param_1 + _DAT_1127321a4);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar5;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241220(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar10);
        _objc_release(uVar1);
        _objc_release(uVar5);
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126afca8;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e222d8;
    param_2 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e222d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar4);
    _objc_release(ppuVar6);
    puVar4 = PTR_PTR_1126c31b0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112732198;
    _objc_loadWeakRetained();
    func_0x00010c14a520(puVar4);
    _objc_release(lVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126afca8;
  if (param_2 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e222f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e222f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar2);
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e06ff8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e06ff8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 105c049d8; end: 105c04a53;  */

void FUN_105c049d8(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e222f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e222f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e06ff8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e06ff8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105c04a54; end: 105c04b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c04a54(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  double dStack_c0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_5 = param_5 + 0x28;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_5 + _DAT_1127321a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_8 = 0;
    param_7 = puVar2;
    func_0x00010bf6bd20(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = param_7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar9 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(lVar9);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  lVar9 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(lVar9);
  func_0x00010c182220(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_5 + _DAT_112732220);
  func_0x00010bf51e00();
  func_0x00010befbb60(puVar3);
  func_0x00010bdd0340(param_5);
  func_0x00010bea45c0(param_5);
  puVar5 = puVar2;
  func_0x00010b5fa088();
  dVar12 = param_3;
  dVar13 = param_4;
  if (puVar5 + -2 < (undefined *)0xb) {
    lVar9 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar12 = param_3;
    dVar13 = param_4;
    _objc_release(lVar9);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105c04f40;
    puStack_d0 = &UNK_11084fc28;
    _objc_retain(puVar3);
    puStack_c8 = puVar3;
    dStack_c0 = SQRT(param_3 * param_3 + param_4 * param_4) / param_4;
    func_0x00010c0bbfe0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puStack_c8);
  }
  _objc_initWeak(auStack_f0,param_5);
  lVar11 = (long)_DAT_112732238;
  func_0x00010bf2dba0(*(undefined8 *)(param_5 + lVar11));
  uVar7 = *(undefined8 *)(param_5 + _DAT_11273219c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar5 = PTR_PTR_1126bfbc8;
  func_0x000108ec16c0(*(undefined8 *)(param_5 + _DAT_1127321c4));
  func_0x00010bf586e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_f8,auStack_f0);
  _objc_retain(uVar6);
  _objc_retain(puVar4);
  uVar8 = uVar7;
  func_0x00010c134cc0(dVar12,dVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_5 + lVar11);
  *(undefined8 *)(param_5 + lVar11) = uVar8;
  _objc_release(uVar10);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar5);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105c04b2c; end: 105c04f3f; -[SCGalleryBackupViewController _attachEntryBackgroundViewWithSnaps:snapDetails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c04b2c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  double dStack_80;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(lVar4);
  func_0x00010c182220(puVar5);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar5);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_5 + _DAT_112732220);
  func_0x00010bf51e00();
  func_0x00010befbb60(puVar3);
  func_0x00010bdd0340(param_5);
  func_0x00010bea45c0(param_5);
  lVar4 = lVar1;
  func_0x00010b5fa088();
  dVar12 = param_3;
  dVar13 = param_4;
  if (lVar4 - 2U < 0xb) {
    lVar4 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar12 = param_3;
    dVar13 = param_4;
    _objc_release(lVar4);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105c04f40;
    puStack_90 = &UNK_11084fc28;
    _objc_retain(puVar3);
    puStack_88 = puVar3;
    dStack_80 = SQRT(param_3 * param_3 + param_4 * param_4) / param_4;
    func_0x00010c0bbfe0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puStack_88);
  }
  _objc_initWeak(auStack_b0,param_5);
  lVar11 = (long)_DAT_112732238;
  func_0x00010bf2dba0(*(undefined8 *)(param_5 + lVar11));
  uVar8 = *(undefined8 *)(param_5 + _DAT_11273219c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar6 = PTR_PTR_1126bfbc8;
  func_0x000108ec16c0(*(undefined8 *)(param_5 + _DAT_1127321c4));
  func_0x00010bf586e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_retain(uVar7);
  _objc_retain(puVar5);
  uVar9 = uVar8;
  func_0x00010c134cc0(dVar12,dVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_5 + lVar11);
  *(undefined8 *)(param_5 + lVar11) = uVar9;
  _objc_release(uVar10);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105c04f40; end: 105c0509f;  */

void FUN_105c04f40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbf20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


