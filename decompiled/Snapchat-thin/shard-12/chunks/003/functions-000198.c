/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f74320; end: 108f7457b; -[SCUnifiedProfileSquadmojiView _didFetchFriendmoji:forDestination:index:viewModel:] */

void FUN_108f74320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  if (lVar1 == param_6) {
    uVar2 = param_3;
    FUN_108f735d8();
    if ((int)uVar2 == 0) {
      puVar3 = auStack_68;
      _objc_loadWeakRetained();
      puVar4 = puVar3;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar4 != (undefined1 *)0x0) goto LAB_108f74510;
    }
    else {
      func_0x00010c1d04c0(param_4);
    }
    puVar3 = auStack_68;
    _objc_loadWeakRetained(puVar3);
    puVar5 = puVar3;
    func_0x00010c29c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0e0ec0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    puVar9 = puVar8;
    func_0x00010c0b8600(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_68;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c1aa620();
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
  }
LAB_108f74510:
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f7457c; end: 108f745af;  */

bool FUN_108f7457c(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf20c80(param_4);
  return param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8) ||
         param_1 != *(double *)PTR__CGSizeZero_110347620;
}



/* Entry: 108f745b0; end: 108f74637;  */

void FUN_108f745b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf20c80(param_4);
  _objc_release(param_4);
  lVar1 = param_3;
  func_0x00010bdd5cc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f74638; end: 108f7463f; -[SCUnifiedProfileSquadmojiView _buildAndUpdateSquadmojiImageViewWithSize:friendmojis:] */

void FUN_108f74638(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  )

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar13 = param_1;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,dVar13,0);
  _objc_release(puVar3);
  uVar4 = param_5;
  func_0x00010bf529e0();
  if (lRam0000000113730450 != -1) {
    func_0x000107c27d9c(0x113730450,&PTR___NSConcreteGlobalBlock_110acefd8);
  }
  puVar3 = puRam0000000113730458;
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  if (uVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar3;
  }
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = puRam0000000113730468;
  if (lRam0000000113730460 != -1) {
    func_0x000107c27d9c(0x113730460,&PTR___NSConcreteGlobalBlock_110aceff8);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = puRam0000000113730468;
  }
  PTR____NSDictionary0__struct_11034ab58 = puVar3;
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar6;
  puRam0000000113730468 = puVar7;
  if (uVar4 == 0) {
    dVar13 = 31.0;
  }
  else {
    func_0x00010c0df780(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    dVar13 = 0.0;
    puVar3 = puVar7;
    if (uVar4 < 9) {
      dVar13 = 31.0;
      if (4 < uVar4) {
        if (uVar4 == 5) {
          dVar13 = 29.0;
        }
        else if (uVar4 == 7) {
          dVar13 = 25.0;
        }
        else if (uVar4 == 6) {
          dVar13 = 27.5;
        }
        else {
          dVar13 = 22.0;
        }
      }
    }
  }
  uVar4 = param_5;
  func_0x00010bf529e0();
  uVar2 = (int)uVar4 - 1;
  if (-1 < (int)uVar2) {
    dVar14 = (param_1 * dVar13) / 100.0;
    dVar13 = 1.2283105022831051;
    dVar15 = dVar14 * 1.2283105022831051;
    uVar9 = (ulong)uVar2;
    do {
      uVar4 = param_5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar4 != 0) && (uVar8 = uVar4, FUN_108f735d8(), (int)uVar8 != 0)) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar10 = dVar13;
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        dVar12 = 100.0;
        dVar11 = (param_1 * dVar13) / 100.0;
        dVar13 = param_1 * 0.5 + dVar11;
        func_0x00010c23d0a0(uVar4);
        dVar13 = (dVar13 - dVar14 * 0.5) + (dVar14 - dVar11 / (dVar11 / dVar14)) * 0.5;
        func_0x00010bf89920(dVar13,((param_2 - (dVar15 * 0.5 - (dVar15 * dVar10) / 100.0)) -
                                   dVar15 * 0.5) + (dVar15 - dVar12 / (dVar11 / dVar14)) * 0.5,uVar4
                           );
      }
      _objc_release(uVar4);
      bVar1 = 0 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
  }
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f74640; end: 108f7464f; -[SCUnifiedProfileSquadmojiView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f74640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e52c);
}



/* Entry: 108f74650; end: 108f7469f; -[SCUnifiedProfileSquadmojiView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f74650(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e52c,0);
  _objc_storeStrong(param_1 + _DAT_11277e530,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e528,0);
  return;
}



/* Entry: 108f746a0; end: 108f747cf;  */

void FUN_108f746a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *unaff_x21;
  
  _objc_retain(param_4);
  if (param_3 < 2) {
    if (param_3 == 0) {
      unaff_x21 = PTR_PTR_1126bd8e0;
      _objc_alloc(PTR_PTR_1126bd8e0);
    }
    else {
      if (param_3 != 1) goto LAB_108f747b0;
      unaff_x21 = PTR_PTR_1126bd8e0;
      _objc_alloc(PTR_PTR_1126bd8e0);
    }
LAB_108f7474c:
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) goto LAB_108f747b0;
      unaff_x21 = PTR_PTR_1126bd8e0;
      _objc_alloc(PTR_PTR_1126bd8e0);
      goto LAB_108f7474c;
    }
    unaff_x21 = PTR_PTR_1126bd8e0;
    _objc_alloc(PTR_PTR_1126bd8e0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bff9340(param_1,param_2,unaff_x21);
  _objc_release(puVar1);
LAB_108f747b0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 108f747d0; end: 108f7480b; -[SCProfileSectionDataModelNotifyGuard init] */

void FUN_108f747d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126ff6a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 108f7480c; end: 108f7488b; -[SCProfileSectionDataModelNotifyGuard ensureInitialUpdateFor:through:] */

void FUN_108f7480c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    _os_unfair_lock_unlock(param_1 + 8);
    func_0x00010c155aa0(param_4,param_2,param_3);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7488c; end: 108f748bb; -[SCProfileSectionDataModelNotifyGuard markUpdateSent] */

void FUN_108f7488c(long param_1)

{
  _os_unfair_lock_lock(param_1 + 8);
  *(undefined1 *)(param_1 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 108f748bc; end: 108f748d3; +[SCProfileUIKitABHelpers isSetNeedLayoutActiveForScrollToOffset:] */

void FUN_108f748bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f12038,0,0);
  return;
}



/* Entry: 108f748d4; end: 108f748eb; +[SCProfileUIKitABHelpers isDeduplicationForDidUpdateViewModelsEnabled:] */

void FUN_108f748d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f11ff8,0,0);
  return;
}



/* Entry: 108f748ec; end: 108f74903; +[SCProfileUIKitABHelpers isCrashFixActiveFor13_25:] */

void FUN_108f748ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f12018,0,0);
  return;
}



/* Entry: 108f74904; end: 108f7497f; +[SCProfileUIKitABHelpers isDirectModificationOfCollectionViewIsGuarded:] */

void FUN_108f74904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f12058,0,0);
  return;
}



/* Entry: 108f74980; end: 108f749f7;  */

void FUN_108f74980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4670;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c0877e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c021580(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f749f8; end: 108f74aaf; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108f749f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff6a8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4678;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_11277e53c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f74ab0; end: 108f74b07; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f74ab0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff6a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277e53c));
  return;
}



/* Entry: 108f74b08; end: 108f74c2f; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f74b08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dcbb0;
  _objc_opt_class(PTR_PTR_1126dcbb0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11277e540;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_108f74c10;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    FUN_108f74980(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277e53c));
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f74c10:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f74c30; end: 108f74c9f; +[SCUnifiedProfileCustomActionViewMoreCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f74c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_PTR_1126b4678;
  FUN_108f74980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d6e0(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108f74ca0; end: 108f74d47; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell viewMoreCollectionViewCellDidTapViewMore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f74ca0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126dcbb0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277e544);
  uVar5 = *(ulong *)(param_1 + _DAT_11277e540);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f74d48; end: 108f74d57; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f74d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e544);
}



/* Entry: 108f74d58; end: 108f74d97; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f74d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e544;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f74d98; end: 108f74da7; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f74d98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e540);
}



/* Entry: 108f74da8; end: 108f74df7; -[SCUnifiedProfileCustomActionViewMoreCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f74da8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e540,0);
  _objc_storeStrong(param_1 + _DAT_11277e544,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e53c,0);
  return;
}



/* Entry: 108f74df8; end: 108f74f8b; -[SCUnifiedProfileViewMoreCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f74df8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff6b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1d4c20(puVar1);
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e54c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar7 = (long)_DAT_11277e550;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e554);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e554) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f74f8c; end: 108f74feb;  */

void FUN_108f74f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afd30;
  _objc_alloc(PTR_PTR_1126afd30);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffb60(puVar1,param_2,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f74fec; end: 108f75023; -[SCUnifiedProfileViewMoreCollectionViewCell setOnFirstFullContentDraw:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f74fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e558);
  *(undefined8 *)(param_1 + _DAT_11277e558) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f75024; end: 108f75087; -[SCUnifiedProfileViewMoreCollectionViewCell drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f75024(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff6b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_drawRect__1125271c8);
  lVar2 = (long)_DAT_11277e558;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108f75088; end: 108f75243; -[SCUnifiedProfileViewMoreCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f75088(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff6b0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_11277e54c;
  dVar6 = 36.0;
  func_0x00010c1a7d00(0x4042000000000000,*(undefined8 *)(param_1 + lVar4));
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c2256c0(dVar6 + -6.0 + -6.0,*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar3);
  func_0x00010c1ba100(0x4018000000000000,*(undefined8 *)(param_1 + lVar4));
  uVar7 = 0x4018000000000000;
  func_0x00010c2172c0(0x4018000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bea2260(param_1);
  lVar3 = (long)_DAT_11277e550;
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
  _CGRectGetMidX();
  uVar8 = uVar7;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar7,uVar8,*(undefined8 *)(param_1 + lVar3));
  lVar5 = (long)_DAT_11277e554;
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202c80(uVar7,uVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    _CGRectGetMidX();
    uVar8 = uVar7;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    _CGRectGetMidY();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(uVar7,uVar8);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108f75244; end: 108f7546b; -[SCUnifiedProfileViewMoreCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f75244(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4670;
  _objc_opt_class(PTR_PTR_1126b4670);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar7 = (long)_DAT_11277e55c;
  uVar5 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_108f7544c;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c0877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277e550));
    }
    else {
      uVar5 = uVar1;
      func_0x00010c0877e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277e550));
      _objc_release(uVar5);
    }
    uVar5 = uVar1;
    func_0x00010c076be0();
    lVar8 = (long)_DAT_11277e554;
    lVar7 = *(long *)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar5 != 0) {
      _objc_release();
      if (lVar7 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar8));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + _DAT_11277e54c);
        uVar4 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(uVar6);
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24dbc0();
        _objc_release(uVar4);
      }
      lVar7 = *(long *)(param_1 + lVar8);
      func_0x00010c269d40(lVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a7f60();
    _objc_release(lVar7);
    func_0x00010bed3a80(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f7544c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7546c; end: 108f75477; +[SCUnifiedProfileViewMoreCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_108f7546c(void)

{
  return;
}



/* Entry: 108f75478; end: 108f754bf; -[SCUnifiedProfileViewMoreCollectionViewCell traitCollectionDidChange:] */

void FUN_108f75478(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff6b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed3a80(param_1);
  return;
}



/* Entry: 108f754c0; end: 108f7552f; -[SCUnifiedProfileViewMoreCollectionViewCell _updateBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f754c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000108f7493c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277e54c);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f75530; end: 108f7556b; -[SCUnifiedProfileViewMoreCollectionViewCell _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f75530(long param_1)

{
  param_1 = param_1 + _DAT_11277e560;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29de20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f7556c; end: 108f755fb; -[SCUnifiedProfileViewMoreCollectionViewCell _setBackgroundViewPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7556c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar3 = (long)_DAT_11277e54c;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf199e0(puVar1,param_2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f755fc; end: 108f7561b; -[SCUnifiedProfileViewMoreCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f755fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e560);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7561c; end: 108f7562f; -[SCUnifiedProfileViewMoreCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7561c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277e560,param_3);
  return;
}



/* Entry: 108f75630; end: 108f7563f; -[SCUnifiedProfileViewMoreCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f75630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e548);
}



/* Entry: 108f75640; end: 108f7564f; -[SCUnifiedProfileViewMoreCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f75640(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277e548) = param_3;
  return;
}



/* Entry: 108f75650; end: 108f7565f; -[SCUnifiedProfileViewMoreCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f75650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e55c);
}



/* Entry: 108f75660; end: 108f756db; -[SCUnifiedProfileViewMoreCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f75660(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e55c,0);
  _objc_destroyWeak(param_1 + _DAT_11277e560);
  _objc_storeStrong(param_1 + _DAT_11277e558,0);
  _objc_storeStrong(param_1 + _DAT_11277e554,0);
  _objc_storeStrong(param_1 + _DAT_11277e550,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e54c,0);
  return;
}



/* Entry: 108f756dc; end: 108f7578f; -[SCProfileSectionHeaderViewModel initWithHeaderText:accessoryViewModel:showBadgeOnAccessaryView:] */

undefined1 *
FUN_108f756dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff6b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f75790; end: 108f757b3; -[SCProfileSectionHeaderViewModel copyWithZone:] */

undefined8 FUN_108f75790(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f757b4; end: 108f7582b; -[SCProfileSectionHeaderViewModel hash] */

undefined8 * FUN_108f757b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f758bc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f758c8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f758c8;
        }
        goto LAB_108f758bc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f758c8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f7582c; end: 108f758e3; -[SCProfileSectionHeaderViewModel isEqual:] */

long FUN_108f7582c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f758bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f758c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f758c8;
        }
        goto LAB_108f758bc;
      }
    }
    lVar3 = 0;
  }
LAB_108f758c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f758e4; end: 108f758eb; -[SCProfileSectionHeaderViewModel headerText] */

undefined8 FUN_108f758e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f758ec; end: 108f758f3; -[SCProfileSectionHeaderViewModel accessoryViewModel] */

undefined8 FUN_108f758ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f758f4; end: 108f758fb; -[SCProfileSectionHeaderViewModel showBadgeOnAccessaryView] */

undefined1 FUN_108f758f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f758fc; end: 108f7592b; -[SCProfileSectionHeaderViewModel .cxx_destruct] */

void FUN_108f758fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f7592c; end: 108f759d7; -[SCUnifiedProfileStoriesListViewMoreViewModel initWithTitleText:tapActionModel:] */

undefined1 *
FUN_108f7592c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff6c0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f759d8; end: 108f759fb; -[SCUnifiedProfileStoriesListViewMoreViewModel copyWithZone:] */

undefined8 FUN_108f759d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f759fc; end: 108f75a6f; -[SCUnifiedProfileStoriesListViewMoreViewModel hash] */

undefined8 * FUN_108f759fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f75af0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f75afc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f75afc;
        }
        goto LAB_108f75af0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f75afc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f75a70; end: 108f75b17; -[SCUnifiedProfileStoriesListViewMoreViewModel isEqual:] */

long FUN_108f75a70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f75af0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f75afc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f75afc;
        }
        goto LAB_108f75af0;
      }
    }
    lVar3 = 0;
  }
LAB_108f75afc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f75b18; end: 108f75b1f; -[SCUnifiedProfileStoriesListViewMoreViewModel titleText] */

undefined8 FUN_108f75b18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f75b20; end: 108f75b27; -[SCUnifiedProfileStoriesListViewMoreViewModel tapActionModel] */

undefined8 FUN_108f75b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f75b28; end: 108f75b57; -[SCUnifiedProfileStoriesListViewMoreViewModel .cxx_destruct] */

void FUN_108f75b28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f75b58; end: 108f75ccb; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel initWithTooltipText:rightButtonActionModel:settingsButtonActionModel:rightActionIcon:addToStoryButtonTitle:addToStoryButtonActionModel:useRedesignedStyle:] */

undefined1 *
FUN_108f75b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ff6c8;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f75ccc; end: 108f75cef; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel copyWithZone:] */

undefined8 FUN_108f75ccc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f75cf0; end: 108f75d97; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel hash] */

undefined8 * FUN_108f75cf0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_38;
  ulong uStack_30;
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
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f75e88:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f75e94;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_108f75e94;
                }
                goto LAB_108f75e88;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f75e94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f75d98; end: 108f75eaf; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel isEqual:] */

long FUN_108f75d98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f75e88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f75e94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_108f75e94;
                }
                goto LAB_108f75e88;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f75e94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f75eb0; end: 108f75eb7; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel tooltipText] */

undefined8 FUN_108f75eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f75eb8; end: 108f75ebf; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel rightButtonActionModel] */

undefined8 FUN_108f75eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f75ec0; end: 108f75ec7; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel settingsButtonActionModel] */

undefined8 FUN_108f75ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f75ec8; end: 108f75ecf; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel rightActionIcon] */

undefined8 FUN_108f75ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f75ed0; end: 108f75ed7; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel addToStoryButtonTitle] */

undefined8 FUN_108f75ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f75ed8; end: 108f75edf; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel addToStoryButtonActionModel] */

undefined8 FUN_108f75ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f75ee0; end: 108f75ee7; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel useRedesignedStyle] */

undefined1 FUN_108f75ee0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f75ee8; end: 108f75f47; -[SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel .cxx_destruct] */

void FUN_108f75ee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f75f48; end: 108f7601f; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel initWithTitle:iconImage:tapActionModel:] */

undefined1 *
FUN_108f75f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ff6d0;
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



/* Entry: 108f76020; end: 108f76043; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel copyWithZone:] */

undefined8 FUN_108f76020(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f76044; end: 108f760c3; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel hash] */

undefined8 * FUN_108f76044(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f7615c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f76168;
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
            goto LAB_108f76168;
          }
          goto LAB_108f7615c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f76168:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f760c4; end: 108f76183; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel isEqual:] */

long FUN_108f760c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f7615c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f76168;
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
            goto LAB_108f76168;
          }
          goto LAB_108f7615c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f76168:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f76184; end: 108f7618b; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel title] */

undefined8 FUN_108f76184(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f7618c; end: 108f76193; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel iconImage] */

undefined8 FUN_108f7618c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f76194; end: 108f7619b; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel tapActionModel] */

undefined8 FUN_108f76194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f7619c; end: 108f761d7; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardViewViewModel .cxx_destruct] */

void FUN_108f7619c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f761d8; end: 108f76283; -[SCUnifiedProfileHorizontalCustomStoryCreationCellViewModel initWithLeftCardViewModel:rightCardViewModel:] */

undefined1 *
FUN_108f761d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff6d8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f76284; end: 108f762a7; -[SCUnifiedProfileHorizontalCustomStoryCreationCellViewModel copyWithZone:] */

undefined8 FUN_108f76284(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f762a8; end: 108f7631b; -[SCUnifiedProfileHorizontalCustomStoryCreationCellViewModel hash] */

undefined8 * FUN_108f762a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f7639c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f763a8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f763a8;
        }
        goto LAB_108f7639c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f763a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f7631c; end: 108f763c3; -[SCUnifiedProfileHorizontalCustomStoryCreationCellViewModel isEqual:] */

long FUN_108f7631c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f7639c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f763a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f763a8;
        }
        goto LAB_108f7639c;
      }
    }
    lVar3 = 0;
  }
LAB_108f763a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f763c4; end: 108f763cb; -[SCUnifiedProfileHorizontalCustomStoryCreationCellViewModel leftCardViewModel] */

undefined8 FUN_108f763c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f763cc; end: 108f763d3; -[SCUnifiedProfileHorizontalCustomStoryCreationCellViewModel rightCardViewModel] */

undefined8 FUN_108f763cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f763d4; end: 108f76403; -[SCUnifiedProfileHorizontalCustomStoryCreationCellViewModel .cxx_destruct] */

void FUN_108f763d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f76404; end: 108f764af; -[SCUnifiedProfileStoriesListCellButtonsViewModel initWithSaveActionModel:deleteActionModel:] */

undefined1 *
FUN_108f76404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff6e0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f764b0; end: 108f764d3; -[SCUnifiedProfileStoriesListCellButtonsViewModel copyWithZone:] */

undefined8 FUN_108f764b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f764d4; end: 108f76547; -[SCUnifiedProfileStoriesListCellButtonsViewModel hash] */

undefined8 * FUN_108f764d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f765c8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f765d4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f765d4;
        }
        goto LAB_108f765c8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f765d4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f76548; end: 108f765ef; -[SCUnifiedProfileStoriesListCellButtonsViewModel isEqual:] */

long FUN_108f76548(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f765c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f765d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f765d4;
        }
        goto LAB_108f765c8;
      }
    }
    lVar3 = 0;
  }
LAB_108f765d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f765f0; end: 108f765f7; -[SCUnifiedProfileStoriesListCellButtonsViewModel saveActionModel] */

undefined8 FUN_108f765f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f765f8; end: 108f765ff; -[SCUnifiedProfileStoriesListCellButtonsViewModel deleteActionModel] */

undefined8 FUN_108f765f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f76600; end: 108f7662f; -[SCUnifiedProfileStoriesListCellButtonsViewModel .cxx_destruct] */

void FUN_108f76600(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f76630; end: 108f7672f; -[SCUnifiedProfileStoriesListViewSnapCellViewModel initWithClientId:serverId:shouldShowViewers:shouldShowButtons:shouldShowMoreButton:profileListCellViewModel:] */

undefined1 *
FUN_108f76630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ff6e8;
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f76730; end: 108f76753; -[SCUnifiedProfileStoriesListViewSnapCellViewModel copyWithZone:] */

undefined8 FUN_108f76730(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f76754; end: 108f767e3; -[SCUnifiedProfileStoriesListViewSnapCellViewModel hash] */

undefined8 * FUN_108f76754(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f768ac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f768b8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_108f768b8;
          }
          goto LAB_108f768ac;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f768b8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f767e4; end: 108f768d3; -[SCUnifiedProfileStoriesListViewSnapCellViewModel isEqual:] */

long FUN_108f767e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f768ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f768b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108f768b8;
          }
          goto LAB_108f768ac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f768b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f768d4; end: 108f768db; -[SCUnifiedProfileStoriesListViewSnapCellViewModel clientId] */

undefined8 FUN_108f768d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f768dc; end: 108f768e3; -[SCUnifiedProfileStoriesListViewSnapCellViewModel serverId] */

undefined8 FUN_108f768dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f768e4; end: 108f768eb; -[SCUnifiedProfileStoriesListViewSnapCellViewModel shouldShowViewers] */

undefined1 FUN_108f768e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f768ec; end: 108f768f3; -[SCUnifiedProfileStoriesListViewSnapCellViewModel shouldShowButtons] */

undefined1 FUN_108f768ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f768f4; end: 108f768fb; -[SCUnifiedProfileStoriesListViewSnapCellViewModel shouldShowMoreButton] */

undefined1 FUN_108f768f4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f768fc; end: 108f76903; -[SCUnifiedProfileStoriesListViewSnapCellViewModel profileListCellViewModel] */

undefined8 FUN_108f768fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


