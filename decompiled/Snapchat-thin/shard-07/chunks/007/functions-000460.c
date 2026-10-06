/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105884020; end: 105884037;  */

void FUN_105884020(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 105884038; end: 10588418b; -[SCMemoriesCRFeaturedStoryManager _resetCRFeaturedStoryViewProgressInLocalStates:] */

void FUN_105884038(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf51e00(uVar2);
  lVar3 = param_3;
  func_0x000106c2bc40(param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = lVar3;
  func_0x00010c0c7f80();
  iVar1 = (int)lVar4;
  func_0x000106c2c4c8();
  if (iVar1 != 0) {
    lVar4 = lVar3;
    func_0x00010c29eac0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126bf838;
      func_0x00010c0c7fa0(PTR_PTR_1126bf838);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2bc9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010be4f400(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_1);
      _objc_release(puVar7);
      _objc_release(param_1);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10588418c; end: 105884203; -[SCMemoriesCRFeaturedStoryManager _localStatesObservableForCRFeaturedStoryId:] */

void FUN_10588418c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0xa0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105884204; end: 10588427f; -[SCMemoriesCRFeaturedStoryManager _addLocalStatesObservableForFeaturedStoryId:observable:] */

void FUN_105884204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0xa0);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88),param_2,param_4,param_3);
  _os_unfair_lock_unlock(param_1 + 0xa0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105884280; end: 1058843c7; -[SCMemoriesCRFeaturedStoryManager _createFinalCRFeaturedStoryWithLatestStates:memoriesCRFeaturedStoryType:] */

void FUN_105884280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105881e80;
  uStack_60 = 0x105881e90;
  uStack_58 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058843c8; end: 105884817;  */

undefined * FUN_1058843c8(long param_1,undefined *param_2)

{
  ulong uVar1;
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
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_2;
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x000106c2c4c8();
  if ((uVar1 & 1) == 0) {
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    lVar18 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(uVar19);
    *(undefined8 *)(lVar18 + 0x28) = uVar19;
    _objc_release();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    if (param_2 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x80);
      func_0x00010bf04920();
      puVar7 = param_2;
      if ((uVar1 & 1) == 0) {
        puVar3 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        puVar16 = puVar2;
        func_0x000107fe3500();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if (puVar5 != (undefined *)0x0) {
          puVar4 = param_2;
          func_0x000106c2bf44();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          func_0x00010c29eac0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          puVar16 = puVar3;
          func_0x000106c2bfb0(puVar4,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c071b60();
          if ((int)puVar7 != 0) {
            func_0x00010c1577e0(puVar5);
          }
          func_0x00010c074c20(puVar5);
          func_0x00010c113c80();
          puVar7 = puVar5;
          func_0x00010c08a360();
          puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
          puVar8 = puVar5;
          func_0x00010bf9c740(puVar5);
          func_0x00010bf655e0((double)(long)puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar5;
          func_0x00010c2410e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126bf838;
          func_0x00010c0c7fa0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c2b8000();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c2bc9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c2b0ae0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c2b60a0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c2b2320((double)(long)puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar15;
          func_0x00010c2ad7e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b9380();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          puVar7 = puVar10;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar9);
          _objc_release(puVar6);
          _objc_release(puVar3);
          _objc_release(puVar4);
        }
        _objc_release(puVar5);
      }
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf0de0(uVar19);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar19 = *(undefined8 *)(lVar18 + 0x28);
      *(undefined **)(lVar18 + 0x28) = puVar4;
      _objc_release(uVar19);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        return puVar7;
      }
      goto LAB_105884814;
    }
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    lVar18 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(uVar19);
    param_2 = *(undefined **)(lVar18 + 0x28);
    *(undefined8 *)(lVar18 + 0x28) = uVar19;
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar18 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return param_2;
  }
LAB_105884814:
  ___stack_chk_fail();
  func_0x00010bfe5ec0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar16;
  func_0x00010c0720c0();
  _objc_release(puVar16);
  return puVar2;
}



/* Entry: 105884818; end: 10588488f;  */

undefined8 FUN_105884818(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105884890; end: 10588497b; -[SCMemoriesCRFeaturedStoryManager _createOrUpdateCRFeaturedStoriesInLocalDB:completionHandler:] */

void FUN_105884890(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10588497c; end: 105884db7;  */

void FUN_10588497c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      uVar14 = *(undefined8 *)(lVar13 * 8);
      func_0x00010c0c7f80();
      uVar7 = uVar14;
      func_0x000106c2bf44();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar14;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar14;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074c20();
      uVar12 = uVar14;
      func_0x00010bef0240(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar12);
      func_0x00010c113c80();
      func_0x00010c08a360(uVar14);
      uVar12 = uVar14;
      func_0x00010c124e20(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar12);
      puVar4 = PTR_PTR_1126bf840;
      _objc_alloc();
      uVar12 = uVar14;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar14;
      func_0x00010c260dc0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar14;
      func_0x00010c29eac0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1577e0(uVar14);
      func_0x00010bf97860();
      func_0x00010c26f320(uVar10);
      func_0x00010c2410e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bba0(puVar4);
      _objc_release(uVar14);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar12);
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar7);
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(puVar2);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar12);
  func_0x00010c0f8500(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar9 = *(long *)(puVar2 + 0x20);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      func_0x000107fe3730(param_2,*(undefined8 *)(lVar13 * 8));
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105884ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105884db8; end: 105884ec3;  */

void FUN_105884db8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x000107fe3730(param_2,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105884ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105884ec4; end: 105884ed7;  */

void FUN_105884ec4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105884ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105884ed8; end: 105884f97; -[SCMemoriesCRFeaturedStoryManager _deleteAllExpiredCRFeaturedStoriesInLocalDB] */

void FUN_105884ed8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae6b8;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105884f98;
  puStack_40 = &UNK_11088e668;
  uStack_38 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105884f98; end: 105885063;  */

void FUN_105884f98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105885064; end: 105885197;  */

void FUN_105885064(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe37b8();
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x000107fe3b8c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x000107fe4a08(param_2,*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105885198; end: 1058851f3;  */

void FUN_105885198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1058851f4; end: 105885563; -[SCMemoriesCRFeaturedStoryManager _createCRFeaturedStoryObservables:] */

void FUN_1058851f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,10,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,9,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,5,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ffe0();
  _objc_release(uVar3);
  uVar3 = 0xc;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be65c80(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  puVar8 = PTR_PTR_1126ae6b8;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x000108ec08d4();
    _objc_release(lVar6);
    puVar8 = PTR_PTR_1126ae6b8;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (0 < lVar2) {
      puVar8 = puVar1;
      func_0x00010bf529e0(puVar1);
      func_0x00010bf0a0e0(puVar5,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105885564;
      puStack_58 = &UNK_1108ba2f8;
      puStack_50 = puVar5;
      lStack_48 = lVar2;
      _objc_retain();
      func_0x00010bf97e80(puVar1,param_2,&puStack_70);
      puVar8 = PTR_PTR_1126ae6b8;
      puVar7 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c0860a0(puVar8,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puStack_50);
      goto LAB_105885538;
    }
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  func_0x00010c0860a0(puVar8,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
LAB_105885538:
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105885564; end: 105885633;  */

void FUN_105885564(long param_1,undefined *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar2 * param_3 < 1) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_2);
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105885634; end: 10588571b; -[SCMemoriesCRFeaturedStoryManager _observeAllCRFeaturedStories:] */

void FUN_105885634(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bdeb940(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010bfb26a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10588571c; end: 10588584b;  */

void FUN_10588571c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae6b8;
  if (param_1 == 0) {
    lVar1 = param_1;
    FUN_105886e1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf41860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10588584c; end: 105885b57;  */

void FUN_10588584c(long param_1,undefined *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
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
  _objc_retain(param_2);
  puVar2 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar2 == (undefined *)0x0) {
    puVar6 = puVar2;
    FUN_105886e1c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(param_2);
    puVar4 = param_2;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar8 = *plStack_150;
      puVar6 = param_2;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_150 != lVar8) {
            _objc_enumerationMutation(param_2);
          }
          uVar7 = *(undefined8 *)(lStack_158 + (long)puVar9 * 8);
          uStack_190 = 0;
          uStack_180 = 0x3032000000;
          pcStack_178 = FUN_105881e80;
          uStack_170 = 0x105881e90;
          uStack_168 = 0;
          uStack_1b0 = 0;
          uStack_1a0 = 0x2020000000;
          uStack_198 = 0;
          puStack_1a8 = &uStack_1b0;
          puStack_188 = &uStack_190;
          _objc_retain(puVar3);
          func_0x00010c0c0800(uVar7);
          bVar1 = *(byte *)(puStack_1a8 + 3);
          if (bVar1 == 1) {
            puVar6 = PTR_PTR_1126af5d0;
            func_0x00010bfa01c0(PTR_PTR_1126af5d0);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar3);
          __Block_object_dispose(&uStack_1b0,8);
          __Block_object_dispose(&uStack_190,8);
          _objc_release(uStack_168);
          puVar5 = param_2;
          if ((bVar1 & 1) != 0) goto LAB_105885aac;
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = param_2;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(param_2);
    puVar6 = puVar3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(puVar2 + 0x80);
    *(undefined **)(puVar2 + 0x80) = puVar6;
    _objc_release(uVar7);
    puVar6 = PTR_PTR_1126af5d0;
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c2619e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
LAB_105885aac:
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1b0,8);
  lVar8 = 8;
  __Block_object_dispose(&uStack_190);
  __Unwind_Resume();
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_addObject__11259c1f0,lVar8);
  return;
}



/* Entry: 105885b58; end: 105885b6b;  */

void FUN_105885b58(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
    return;
  }
  return;
}



/* Entry: 105885b6c; end: 105885bcf;  */

void FUN_105885b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105885bd0; end: 105885c7b; -[SCMemoriesCRFeaturedStoryManager _isCRFeaturedStoryEnabled] */

undefined8 FUN_105885bd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079f60();
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c079fa0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return 0;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbce20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105885c7c; end: 105885d0b; -[SCMemoriesCRFeaturedStoryManager onBackgroundSyncWithCompletionHandler:] */

void FUN_105885c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105885d0c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105885d0c; end: 105885d17;  */

void FUN_105885d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onBackgroundSyncWithCompletionH_112577950,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105885d18; end: 105885e8b; -[SCMemoriesCRFeaturedStoryManager _onBackgroundSyncWithCompletionHandler:] */

void FUN_105885d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010be073c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  lVar2 = lVar1;
  func_0x00010c25ff60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105885e8c; end: 1058860fb;  */

void FUN_105885e8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_140;
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105881e80;
  uStack_70 = 0x105881e90;
  uStack_68 = 0;
  puStack_f0 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105881e80;
  uStack_a0 = 0x105881e90;
  uStack_98 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1058860fc;
  puStack_d0 = &UNK_110850558;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105886134;
  puStack_f8 = &UNK_11084d888;
  puStack_b8 = puStack_f0;
  puStack_88 = puStack_c8;
  func_0x00010c0c0800(param_2);
  lVar6 = puStack_b8[5];
  if (lVar6 == 0) {
    uVar4 = puStack_88[5];
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puStack_88[5];
    puStack_88[5] = uVar4;
    _objc_release(uVar5);
    lVar2 = puStack_88[5];
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      puStack_140 = puVar1;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_1058861c0;
      puStack_128 = &UNK_110859a68;
      _objc_copyWeak(auStack_118,param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar4);
      uStack_120 = uVar4;
      _objc_retainBlock(&puStack_140);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c266880(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(ppuVar3);
      _objc_release(uStack_120);
      _objc_destroyWeak(auStack_118);
      goto LAB_105886070;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar4,lVar6);
LAB_105886070:
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1058860fc; end: 1058861bf;  */

void FUN_1058860fc(long param_1,undefined8 param_2)

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



/* Entry: 1058861c0; end: 1058862fb;  */

void FUN_1058861c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,1,puVar4);
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058862fc; end: 10588637b;  */

void FUN_1058862fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bdf0de0(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10588637c; end: 1058863fb;  */

void FUN_10588637c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((int)param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058863a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e094b8,
                      &PTR____CFConstantStringClassReference_110e094f8,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058863fc; end: 10588640f;  */

void FUN_1058863fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010588640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,param_2);
  return;
}



/* Entry: 105886410; end: 1058867c3; -[SCMemoriesCRFeaturedStoryManager _eligibleCRFeaturedStoriesForNextNumberOfDays:isInForeground:] */

void FUN_105886410(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010be3e860();
  puVar9 = PTR_PTR_1126ae6b8;
  if ((uVar2 & 1) == 0) {
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x000106c2c51c(puVar9,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar9);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar9 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    param_2 = param_3;
    while (puVar9 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        uVar12 = *(undefined8 *)((long)puVar11 * 8);
        func_0x00010c0c7f80(uVar12);
        uVar3 = uVar12;
        func_0x00010c0c7f80(uVar12);
        uVar6 = uVar12;
        func_0x00010bef0240(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar12;
        func_0x00010c124e20(uVar12);
        _objc_retainAutoreleasedReturnValue();
        param_2 = uVar6;
        func_0x000106c2bd1c(uVar3,uVar6,uVar7,*(undefined8 *)(param_1 + 0x48));
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar12;
        func_0x00010bef0240(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c124e20(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010be65c60(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(uVar8);
        _objc_release(uVar3);
        _objc_release(uVar7);
        _objc_release(uVar6);
        func_0x00010befa120(puVar5);
        _objc_release(uVar2);
        puVar11 = puVar11 + 1;
      } while (puVar9 != puVar11);
      puVar9 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010bf529e0();
    puVar9 = PTR_PTR_1126ae6b8;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      puVar4 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010bf41860(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(uVar3);
      puVar9 = puVar11;
    }
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    func_0x00010c0b8620(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1058867c4; end: 10588685b;  */

void FUN_1058867c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10588685c;
  puStack_30 = &UNK_1108ba3d8;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8620(param_2,param_2,&puStack_48,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10588685c; end: 105886973;  */

void FUN_10588685c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105881e80;
  uStack_30 = 0x105881e90;
  uStack_28 = 0;
  _objc_retain(param_2);
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105886974; end: 105886b33;  */

void FUN_105886974(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bf838;
    func_0x00010c0c7fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x000107fe3500(lVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(puVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      func_0x00010c08a360(param_3);
      func_0x00010c074c20(param_3);
      puVar3 = param_3;
      func_0x00010bf9c720(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar7 = lVar4;
      func_0x00010c08a360(lVar4);
      param_1 = (double)lVar7;
      func_0x00010c074c20(lVar4);
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      lVar7 = lVar4;
      func_0x00010bf9c740(lVar4);
      func_0x00010bf655e0((double)lVar7,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2b2320(param_1,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0ae0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ad7e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105886b34; end: 105886b37;  */

void FUN_105886b34(void)

{
  return;
}



/* Entry: 105886b38; end: 105886c27; -[SCMemoriesCRFeaturedStoryManager .cxx_destruct] */

void FUN_105886b38(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105886c28; end: 105886e1b; -[SCMemoriesCRFeaturedStoryManager initWithMemoriesCRFeaturedStoryDataSource:photoPermissionCoordinator:coreConfigProvider:featureSettingsService:userId:] */

undefined1 *
FUN_105886c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eaac8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0xa0) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105886e1c; end: 105886e8b;  */

void FUN_105886e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e094b8,
                      &PTR____CFConstantStringClassReference_110e09478,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105886e8c; end: 105886f07;  */

void FUN_105886e8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000106c2bf1c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b5f1784();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c8b00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105886f08; end: 105886fcb;  */

void FUN_105886f08(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc750;
  _objc_opt_new(PTR_PTR_1126bc750);
  func_0x00010c203cc0();
  func_0x00010c1a1a00(puVar1,param_3,*(undefined8 *)(param_2 + 0x20));
  func_0x00010c1a1a20(puVar1,param_3,*(undefined8 *)(param_2 + 0x28));
  func_0x00010c26f320(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c162460(puVar1,param_3,(long)param_1);
  func_0x00010c26f320(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c198c40(puVar1,param_3,(long)param_1);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x40),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105886fcc; end: 1058873e7; -[SCMemoriesCRFeaturedStoryManagerServiceProvider _memoriesCRFeaturedStoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105886fcc(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  
  puVar1 = PTR_PTR_1126bf850;
  _objc_alloc();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272b1b4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar20;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1058873e8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_1058873e8();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11272b1c0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar21;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11272b1c4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar22;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272b1c8;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar23;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11272b1d4;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar24;
  func_0x00010c0fa3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11272b1b8;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar25;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11272b1cc;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar26;
  func_0x00010c0c7f40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11272b1d0;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11272b1b0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar28;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11272b1d8;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar29;
  func_0x00010c2798e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11272b1dc;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar30;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = 0;
  if (param_1 != 0) {
    lVar18 = param_1 + _DAT_11272b1e0;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar18;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035de0(puVar1,param_2,lVar2,lVar4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                      ,lVar15,lVar16,lVar17,lVar19);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar30);
  _objc_release(lVar16);
  _objc_release(lVar29);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar28);
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar26);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(lVar7);
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058873e8; end: 10588740b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058873e8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272b1bc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10588740c; end: 1058874c7; -[SCMemoriesCRFeaturedStoryManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10588740c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b1e0);
  _objc_destroyWeak(param_1 + _DAT_11272b1dc);
  _objc_destroyWeak(param_1 + _DAT_11272b1d8);
  _objc_destroyWeak(param_1 + _DAT_11272b1d4);
  _objc_destroyWeak(param_1 + _DAT_11272b1d0);
  _objc_destroyWeak(param_1 + _DAT_11272b1cc);
  _objc_destroyWeak(param_1 + _DAT_11272b1c8);
  _objc_destroyWeak(param_1 + _DAT_11272b1c4);
  _objc_destroyWeak(param_1 + _DAT_11272b1c0);
  _objc_destroyWeak(param_1 + _DAT_11272b1bc);
  _objc_destroyWeak(param_1 + _DAT_11272b1b8);
  _objc_destroyWeak(param_1 + _DAT_11272b1b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b1b0);
  return;
}



/* Entry: 1058874c8; end: 10588766f; -[SCMemoriesCRFeaturedStoryNetworkCoordinator initWithNetworkServices:circumstanceEngine:memoriesLogger:memoriesVisualTagAnalyzer:docObjectContext:memoriesExperimentServices:grapheneRegistry:requestHeaderProvider:] */

undefined1 *
FUN_1058874c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126eaad0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105887670; end: 1058877ff; -[SCMemoriesCRFeaturedStoryNetworkCoordinator syncClientGeneratedCollectionWithServer:assets:templateId:collageUCOLensId:snapId:collectionCategory:completionQueue:completionHandler:] */

void FUN_105887670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105887800;
  puStack_b0 = &UNK_1108ba498;
  uStack_78 = param_9;
  uStack_70 = param_10;
  lStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_68 = param_8;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfab600(uVar1,param_2,&puStack_c8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105887800; end: 10588783b;  */

void FUN_105887800(long param_1,undefined8 param_2)

{
  func_0x00010bec97a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined4 *)(param_1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 10588783c; end: 105887c4f; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _syncClientGeneratedCollectionWithServer:assets:templateId:collageUCOLensId:snapId:collectionCategory:visualTagsMap:completionQueue:completionHandler:] */

void FUN_10588783c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar10 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (puVar1 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x00010bfa50c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x000106c2e708(param_4,puVar10,param_9,uVar7,uVar5,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar2);
  func_0x000106c2f18c(param_4);
  puVar4 = PTR_PTR_1126bf7f0;
  _objc_opt_new(PTR_PTR_1126bf7f0);
  uVar5 = param_4;
  func_0x00010c0b8600(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    if (param_6 == 0) goto LAB_105887a84;
    puVar6 = PTR_PTR_1126bf7f8;
    _objc_opt_new(PTR_PTR_1126bf7f8);
    func_0x00010c1bbd60();
    uVar7 = uVar5;
    func_0x00010c0d3c80(uVar5);
    func_0x00010c206da0(puVar6);
    _objc_release(uVar7);
    func_0x00010c176d60(puVar4);
  }
  else {
    puVar6 = PTR_PTR_1126bf860;
    _objc_opt_new(PTR_PTR_1126bf860);
    func_0x00010c212c20();
    uVar7 = uVar5;
    func_0x00010c0d3c80(uVar5);
    func_0x00010c206da0(puVar6);
    _objc_release(uVar7);
    func_0x00010c176e60(puVar4);
  }
  _objc_release(puVar6);
LAB_105887a84:
  puVar6 = PTR_PTR_1126bf7e8;
  _objc_opt_new(PTR_PTR_1126bf7e8);
  func_0x00010c1b5f20();
  func_0x00010c1fd420(puVar6);
  lVar8 = param_1;
  func_0x00010be36580(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_11);
  func_0x00010c25f600(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105887c50; end: 105887c57;  */

void FUN_105887c50(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 105887c58; end: 105887e4b;  */

/* WARNING: Removing unreachable block (ram,0x000105887ce4) */

void FUN_105887c58(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_3 == 0) && (param_6 == 0)) {
      puVar2 = PTR_PTR_1126bf868;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)0x0;
      _objc_retain(0);
      puVar3 = puVar2;
      func_0x00010bfa3260();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af5d0;
      lVar6 = *(long *)(param_1 + 0x20);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))(lVar6,puVar3);
        _objc_release(puVar3);
      }
      else {
        puVar4 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))(lVar6,puVar4);
      }
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x20);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    }
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105887e4c; end: 105887f2f; -[SCMemoriesCRFeaturedStoryNetworkCoordinator syncUnprocessedCRFeaturedStoriesMetadataWithServer:completionQueue:completionHandler:] */

void FUN_105887e4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105887f30;
  puStack_68 = &UNK_1108ba4e8;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfab600(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105887f30; end: 105887f43;  */

void FUN_105887f30(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__syncUnprocessedCRFeaturedStorie_112590128,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105887f44; end: 1058880ef; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _syncUnprocessedCRFeaturedStoriesMetadataWithServer:visualTagsMap:completionQueue:completionHandler:] */

void FUN_105887f44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be36600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c25f600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058880f0; end: 1058882fb;  */

/* WARNING: Removing unreachable block (ram,0x000105888178) */

void FUN_1058880f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if ((param_3 == 0) && (param_6 == 0)) {
      puVar2 = PTR_PTR_1126bf868;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)0x0;
      _objc_retain(0);
      puVar3 = puVar2;
      func_0x00010bfa3260();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af5d0;
      if (puVar4 == (undefined *)0x0) {
        lVar6 = *(long *)(param_1 + 0x28);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = puVar1;
        func_0x00010bee53e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(param_1 + 0x28);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
      }
      (**(code **)(lVar6 + 0x10))(lVar6,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1058882fc; end: 105888513; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _httpRequestWithMemoriesCRFeaturedStories:visualTagsMap:completionQueue:] */

void FUN_1058882fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126bf870;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010bde1480(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c0d3c80(lVar2);
  func_0x00010c17cce0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release();
  func_0x00010b6fb1a8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110de1918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e09518,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfe02e0(uVar8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105888514;
  puStack_60 = &UNK_110884ec8;
  uVar9 = uVar7;
  lStack_58 = lVar2;
  func_0x00010bf225e0(uVar7,param_2,1,puVar5,uVar8,puVar4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 105888514; end: 10588856b;  */

void FUN_105888514(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c2901c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588856c; end: 1058887e7; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _httpRequestWithFeaturedStoryId:cameraRollItems:collectionCategory:earliestCameraRollItemCreationDateMs:memoriesServerGeneratedSnap:] */

void FUN_10588856c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126bf870;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  lVar8 = param_1;
  func_0x00010bde1460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  func_0x00010c17cce0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  func_0x00010b6fb1a8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfe02e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  lVar8 = *(long *)(puVar1 + 0x20);
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    func_0x00010c2901c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058887e8; end: 10588883f;  */

void FUN_1058887e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c2901c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105888840; end: 105888c33; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _clientGeneratedCollectionsWithMemoriesCRFeaturedStories:visualTagsMap:completionQueue:] */

undefined *
FUN_105888840(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puStack_168;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x000108ec18b0();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
    func_0x00010bfa4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puStack_168 = (undefined *)0x0;
    }
    else {
      puStack_168 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x00010bfa50c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
  }
  else {
    puStack_168 = (undefined *)0x0;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(param_3);
  puVar12 = &uStack_140;
  puVar14 = auStack_100;
  lStack_148 = param_3;
  func_0x00010bf52a60();
  if (lStack_148 != 0) {
    lVar16 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        uVar17 = *(undefined8 *)(lStack_138 + lVar15 * 8);
        puVar3 = PTR_PTR_1126bf878;
        _objc_opt_new();
        uVar5 = uVar17;
        func_0x00010bfe5ec0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19ae00(puVar3);
        _objc_release(uVar6);
        _objc_release(uVar5);
        func_0x00010c0c7f80(uVar17);
        func_0x00010be19fa0(param_1);
        func_0x00010c17e520(puVar3);
        uVar5 = uVar17;
        func_0x00010c0fa980(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x000106c2f18c();
        func_0x00010c1932e0(puVar3);
        _objc_release(uVar5);
        puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
        func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar17;
        func_0x00010bef0240(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c155300(puVar4);
        _objc_release(uVar5);
        _objc_release(puVar4);
        uVar5 = uVar17;
        func_0x00010bef0240(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(uVar5);
        func_0x00010c162460(puVar3);
        uVar2 = *(ulong *)(param_1 + 0x10);
        func_0x000108ec18b0();
        if ((uVar2 & 1) == 0) {
          func_0x00010c0fa980();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0c8b00();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar17;
          func_0x000106c2e708(uVar17,puStack_168,param_4,uVar6,uVar5,uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c176e40(puVar3);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar17);
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar15 = lVar15 + 1;
      } while (lStack_148 != lVar15);
      puVar12 = &uStack_140;
      puVar14 = auStack_100;
      lStack_148 = param_3;
      func_0x00010bf52a60();
    } while (lStack_148 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puStack_168);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126bf878;
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_7);
    _objc_retain(puVar14);
    _objc_retain(puVar12);
    _objc_opt_new(puVar3);
    puVar10 = puVar12;
    func_0x000109189420(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    func_0x00010c19ae00(puVar3);
    _objc_release(puVar10);
    func_0x00010c17e520(puVar3);
    func_0x00010c1932e0(puVar3);
    puVar11 = puVar14;
    func_0x00010c0d3c80(puVar14);
    _objc_release(puVar14);
    func_0x00010c176e40(puVar3);
    _objc_release(puVar11);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c162460(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    puVar4 = puVar1;
    func_0x00010c0d3c80();
    puVar13 = puVar4;
    func_0x00010c1a27a0(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      ___stack_chk_fail();
      if ((undefined *)0xa < puVar13 + -1) {
        return (undefined *)0x25;
      }
      return *(undefined **)(&UNK_10ddbfda0 + (long)(puVar13 + -1) * 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 105888c34; end: 105888ddb; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _clientGeneratedCollectionsWithFeaturedStoryId:cameraRollItems:collectionCategory:earliestCameraRollItemCreationDateMs:memoriesServerGeneratedSnap:] */

undefined *
FUN_105888c34(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126bf878;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_4;
  func_0x000109189420(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c19ae00(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c17e520(puVar1,param_3,param_6);
  func_0x00010c1932e0(puVar1,param_3,param_7);
  uVar2 = param_5;
  func_0x00010c0d3c80(param_5);
  _objc_release(param_5);
  func_0x00010c176e40(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c162460(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  puVar5 = puVar4;
  func_0x00010c1a27a0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  if (puVar5 + -1 < (undefined *)0xb) {
    return *(undefined **)(&UNK_10ddbfda0 + (long)(puVar5 + -1) * 8);
  }
  return (undefined *)0x25;
}



/* Entry: 105888ddc; end: 105888dff; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _galleryCollectionCategoryFromMemoriesCRFeaturedStoryType:] */

undefined8 FUN_105888ddc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return *(undefined8 *)(&UNK_10ddbfda0 + (param_3 - 1U) * 8);
  }
  return 0x25;
}



/* Entry: 105888e00; end: 1058890a7; -[SCMemoriesCRFeaturedStoryNetworkCoordinator _updatedMemoriesCRFeaturedStoriesFromAddCollectionsResponse:originalMemoriesCRFeaturedStories:] */

undefined * FUN_105888e00(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  func_0x00010bfa3260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(undefined8 *)(lVar12 * 8);
      uVar4 = uVar13;
      func_0x00010bfa3400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x000109189508();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      lVar6 = param_4;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        puVar7 = PTR_PTR_1126bf838;
        func_0x00010c0c7fa0(PTR_PTR_1126bf838);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(puVar8);
        func_0x00010c113c80(uVar13);
        puVar8 = puVar7;
        func_0x00010c2b2320(uVar14,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c2b60a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar8);
        func_0x00010befa120(puVar2);
        _objc_release(puVar10);
        _objc_release(puVar7);
      }
      _objc_release(lVar6);
      _objc_release(uVar5);
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf32ee0();
  _objc_release(param_2);
  return (undefined *)(ulong)(lVar3 == 0);
}



/* Entry: 1058890a8; end: 1058890f3;  */

bool FUN_1058890a8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf32ee0();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 1058890f4; end: 1058891ab; -[SCMemoriesCRFeaturedStoryNetworkCoordinator .cxx_destruct] */

void FUN_1058890f4(long param_1)

{
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



/* Entry: 1058891ac; end: 1058893d3; -[SCMemoriesCRFeaturedStoryNetworkCoordinatorServiceProvider _memoriesCRFeaturedStoryNetworkCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058891ac(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126bf888;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272b204;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11272b208;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272b20c;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272b210;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0ca040();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11272b214;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11272b218;
  _objc_loadWeakRetained(lVar14);
  lVar15 = param_1 + _DAT_11272b21c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272b220;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010bfdfdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f560(puVar1,param_2,lVar2,lVar4,lVar7,lVar10,lVar13,lVar14,lVar16,lVar17);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058893d4; end: 10588945f; -[SCMemoriesCRFeaturedStoryNetworkCoordinatorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058893d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b220);
  _objc_destroyWeak(param_1 + _DAT_11272b21c);
  _objc_destroyWeak(param_1 + _DAT_11272b218);
  _objc_destroyWeak(param_1 + _DAT_11272b214);
  _objc_destroyWeak(param_1 + _DAT_11272b210);
  _objc_destroyWeak(param_1 + _DAT_11272b20c);
  _objc_destroyWeak(param_1 + _DAT_11272b208);
  _objc_destroyWeak(param_1 + _DAT_11272b204);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b224);
  return;
}



/* Entry: 105889460; end: 1058894c7; +[MemoriesAddCollectionsRequest descriptor] */

void FUN_105889460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0eb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a74ad0,
                        &PTR____CFConstantStringClassReference_110e09578,
                        &PTR_s_snapchat_memories_1131073c8,&PTR_DAT_1131073e0,1,0x10,0x1c);
    puRam00000001136c0eb0 = puVar1;
  }
  return;
}



/* Entry: 1058894c8; end: 10588952f; +[ClientGeneratedCollection descriptor] */

void FUN_1058894c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0eb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a74b20,
                        &PTR____CFConstantStringClassReference_110e09598,
                        &PTR_s_snapchat_memories_1131073c8,&PTR_DAT_113107400,6,0x30,0x1c);
    puRam00000001136c0eb8 = puVar1;
  }
  return;
}



/* Entry: 105889530; end: 105889597; +[MemoriesAddCollectionsResponse descriptor] */

void FUN_105889530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a74bc0,
                        &PTR____CFConstantStringClassReference_110e095b8,
                        &PTR_s_snapchat_memories_1131074c0,&PTR_DAT_1131074d8,2,0x18,0x1c);
    puRam00000001136c0ec0 = puVar1;
  }
  return;
}



/* Entry: 105889598; end: 10588964f; +[MemoriesCommonResponse descriptor] */

void FUN_105889598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a74c60,
                        &PTR____CFConstantStringClassReference_110e095d8,
                        &PTR_s_snapchat_memories_113107518,&PTR_DAT_113107530,1,8,0x1c);
    puRam00000001136c0ec8 = puVar1;
  }
  return;
}



/* Entry: 105889650; end: 105889c8b; -[SCMemoriesCRMashupFeaturedStoryManagerServiceProvider _createMashupStyleCRMashupStoriesManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105889650(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  
  puVar1 = PTR_PTR_1126bf898;
  _objc_alloc();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11272b22c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar29;
  func_0x00010c0c8ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11272b24c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar30;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_105889c8c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_105889c8c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11272b240;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010c0c8d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11272b230;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar32;
  func_0x00010c14a940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11272b234;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar33;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11272b238;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar34;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11272b23c;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar35;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_11272b248;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar36;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x000105889cb0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bfe7f20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_11272b254;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar37;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_11272b258;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar38;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000105889cb0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_11272b25c;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar39;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_11272b260;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar40;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_11272b264;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar41;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar42 = 0;
  }
  else {
    lVar42 = param_1 + _DAT_11272b268;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar42;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_11272b26c;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar43;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar44 = 0;
  }
  else {
    lVar44 = param_1 + _DAT_11272b270;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar44;
  func_0x00010c242b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_11272b274;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar45;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = param_1 + _DAT_11272b278;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar46;
  func_0x00010c0c7f40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = 0;
  if (param_1 != 0) {
    lVar27 = param_1 + _DAT_11272b27c;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005b60(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                      ,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,
                      lVar26,lVar28);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar46);
  _objc_release(lVar25);
  _objc_release(lVar45);
  _objc_release(lVar24);
  _objc_release(lVar44);
  _objc_release(lVar23);
  _objc_release(lVar43);
  _objc_release(lVar22);
  _objc_release(lVar42);
  _objc_release(lVar21);
  _objc_release(lVar41);
  _objc_release(lVar20);
  _objc_release(lVar40);
  _objc_release(lVar19);
  _objc_release(lVar39);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar38);
  _objc_release(lVar16);
  _objc_release(lVar37);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar36);
  _objc_release(lVar12);
  _objc_release(lVar35);
  _objc_release(lVar11);
  _objc_release(lVar34);
  _objc_release(lVar10);
  _objc_release(lVar33);
  _objc_release(lVar9);
  _objc_release(lVar32);
  _objc_release(lVar8);
  _objc_release(lVar31);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar30);
  _objc_release(lVar2);
  _objc_release(lVar29);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105889c8c; end: 105889cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105889c8c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272b244);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105889cd4; end: 105889dfb; -[SCMemoriesCRMashupFeaturedStoryManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105889cd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b27c);
  _objc_destroyWeak(param_1 + _DAT_11272b278);
  _objc_destroyWeak(param_1 + _DAT_11272b274);
  _objc_destroyWeak(param_1 + _DAT_11272b270);
  _objc_destroyWeak(param_1 + _DAT_11272b26c);
  _objc_destroyWeak(param_1 + _DAT_11272b268);
  _objc_destroyWeak(param_1 + _DAT_11272b264);
  _objc_destroyWeak(param_1 + _DAT_11272b260);
  _objc_destroyWeak(param_1 + _DAT_11272b25c);
  _objc_destroyWeak(param_1 + _DAT_11272b258);
  _objc_destroyWeak(param_1 + _DAT_11272b254);
  _objc_destroyWeak(param_1 + _DAT_11272b250);
  _objc_destroyWeak(param_1 + _DAT_11272b24c);
  _objc_destroyWeak(param_1 + _DAT_11272b248);
  _objc_destroyWeak(param_1 + _DAT_11272b244);
  _objc_destroyWeak(param_1 + _DAT_11272b240);
  _objc_destroyWeak(param_1 + _DAT_11272b23c);
  _objc_destroyWeak(param_1 + _DAT_11272b238);
  _objc_destroyWeak(param_1 + _DAT_11272b234);
  _objc_destroyWeak(param_1 + _DAT_11272b230);
  _objc_destroyWeak(param_1 + _DAT_11272b22c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b228);
  return;
}



/* Entry: 105889dfc; end: 10588a36f; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager initWithCoordinator:circumstanceEngine:dataObjectContext:memoriesProfile:memoriesMashupSnapDocFactory:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:snapDocEditorFactory:memoriesFeaturedStoryDataMutator:imageImporter:mergedDataSource:memoriesUserDefaultsManager:mediaVideoImportServices:temporaryFileWriter:memoriesCloudFS:grapheneRegistry:notificationPool:docObjectContext:snapRenderer:snapDocManager:memoriesCRFeaturedStoryNetworkCoordinator:userBlizzard:] */

undefined8 *
FUN_105889dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_70 = PTR_PTR_1126eaad8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[4];
    puVar1[4] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 10588a370; end: 10588a4ab; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager generateMashupStyleFeaturedStoriesForCRFeaturedStories:context:] */

void FUN_10588a370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(uVar1);
  uStack_50 = param_4;
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10588a4ac; end: 10588a4cb;  */

bool FUN_10588a4ac(undefined8 param_1,long param_2)

{
  func_0x00010c0c7f80(param_2);
  return param_2 == 9;
}



/* Entry: 10588a4cc; end: 10588a553;  */

void FUN_10588a4cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xe0) = 0;
    func_0x00010be1b540(param_1);
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10588a554; end: 10588a6fb; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager generateMashupStyleFeaturedStoriesForPhAssets:mashupModel:title:subtitle:featuredStoryType:entrySource:videoCreateSessionId:] */

void FUN_10588a554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_70 = param_8;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10588a6fc; end: 10588aa37;  */

void FUN_10588a6fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar9 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126bf7e0;
    _objc_alloc();
    puVar9 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a480(0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x000108ec1198();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar9 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar5 = lVar4;
      func_0x000107e65eb0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b5f20(lVar5);
        _objc_release(lVar7);
      }
      *(undefined8 *)(param_1 + 0xd8) = 3;
      puVar2 = PTR_PTR_1126bf800;
      func_0x00010bf2a820(PTR_PTR_1126bf800);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bf808;
      _objc_alloc(PTR_PTR_1126bf808);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf977c0();
      func_0x00010c028a60(puVar3);
      _objc_release(puVar9);
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(param_1 + 0xd0);
      puVar9 = PTR_PTR_1126b60f8;
      func_0x00010c0f2b40(PTR_PTR_1126b60f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8);
      _objc_release(puVar9);
      func_0x00010bef7840(*(undefined8 *)(param_1 + 8));
      puVar9 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10588aa38; end: 10588aa8f; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager terminateFeaturedStoriesGenerationIfNeeded] */

void FUN_10588aa38(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10588aa90;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xc0),param_2,&puStack_38);
  return;
}



/* Entry: 10588aa90; end: 10588ab9f;  */

void FUN_10588aa90(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xe0) = 1;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0xe8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar3 = uVar7;
      func_0x00010c06e0e0();
      if ((uVar3 & 1) == 0) {
        func_0x00010bf2dba0(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(lVar5 + 8);
  func_0x00010c25e900();
                    /* WARNING: Could not recover jumptable at 0x00010c22daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,PTR_s_shouldAddCommandForCurrentType__1126690e0,lVar5);
  return;
}



/* Entry: 10588aba0; end: 10588abc7; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _shouldKeepAddingCommand] */

void FUN_10588aba0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25e900();
                    /* WARNING: Could not recover jumptable at 0x00010c22daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_shouldAddCommandForCurrentType__1126690e0,param_1);
  return;
}



/* Entry: 10588abc8; end: 10588abcf; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager subType] */

undefined8 FUN_10588abc8(void)

{
  return 4;
}



/* Entry: 10588abd0; end: 10588ae27; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager generateFeaturedStoryWithLocalEntry:memoriesMashupStyleModel:memoriesServerGeneratedStoryModel:observer:collectionCategory:itemOrder:groupName:priority:] */

void FUN_10588abd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10588ae28;
  uStack_88 = 0x10588ae38;
  uStack_80 = 0;
  func_0x00010c0be0c0(param_3);
  uVar1 = puStack_a0[5];
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf529e0();
  uVar1 = uVar2;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10588ae28; end: 10588ae43;  */

void FUN_10588ae28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10588ae44; end: 10588ae7b;  */

void FUN_10588ae44(long param_1,undefined8 param_2)

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



/* Entry: 10588ae7c; end: 10588ae9b;  */

bool FUN_10588ae7c(undefined8 param_1,long param_2)

{
  func_0x00010c0c6c20(param_2);
  return param_2 == 1;
}



/* Entry: 10588ae9c; end: 10588aeb7;  */

void FUN_10588ae9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateMashupWithPHAssets_crFe_112564710,
             *(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10588aeb8; end: 10588af33; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager featuredStoryGenerationDidComplete:generationResult:context:completionObserver:entrySource:collectionTitle:collectionCategory:] */

void FUN_10588aeb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107e67df8(param_3,param_4,param_5,param_7,param_6,param_8,
                      *(undefined8 *)(param_1 + 0xd0),
                      &PTR____CFConstantStringClassReference_110e09618,
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110e09638,
                      *(undefined8 *)(param_1 + 0x98),0);
  return;
}



/* Entry: 10588af34; end: 10588b327; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _generateMashupForFeaturedStories:completionObserver:context:] */

void FUN_10588af34(undefined **param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **unaff_x22;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined *unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_230;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_4;
  puStack_148 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = param_3;
  func_0x00010bf529e0();
  if (puVar13 == (undefined *)0x0) {
    ppuVar11 = (undefined **)0x0;
    func_0x000107e67794();
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_140 = param_4;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1[0x1a];
    param_1[0x1a] = puVar13;
    _objc_release(puVar12);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    ppuVar11 = &puStack_130;
    ppuVar3 = apuStack_f0;
    param_5 = (undefined *)0x10;
    puVar13 = param_3;
    func_0x00010bf52a60();
    puStack_138 = puVar13;
    if (puVar13 != (undefined *)0x0) {
      unaff_x23 = *plStack_120;
      lStack_150 = unaff_x23;
      do {
        puVar13 = (undefined *)0x0;
        do {
          unaff_x22 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          if (*plStack_120 != unaff_x23) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x27 = *(undefined **)(lStack_128 + (long)puVar13 * 8);
          ppuVar1 = param_1;
          func_0x00010beb43c0();
          if ((int)ppuVar1 == 0) goto LAB_10588b274;
          unaff_x25 = unaff_x27;
          func_0x00010c0c7f80();
          unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = (undefined **)param_1[2];
          unaff_x24 = (undefined **)param_1[0xd];
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = unaff_x28;
          ppuVar3 = unaff_x24;
          func_0x000107e69a14(unaff_x25,unaff_x26);
          _objc_release(unaff_x24);
          _objc_release(unaff_x26);
          if ((int)unaff_x25 != 0) {
            unaff_x25 = param_1[2];
            func_0x000108ec1198();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = unaff_x25;
            func_0x00010c08fa60();
            param_4 = ppuStack_140;
            if (puVar12 == (undefined *)0x0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e09618;
              func_0x000107e66360(ppuStack_140,2);
              _objc_release(unaff_x25);
              _objc_release(param_3);
              goto LAB_10588b2dc;
            }
            unaff_x26 = (undefined **)unaff_x25;
            func_0x000107e65eb0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = (undefined *)unaff_x26;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar12;
            _objc_release();
            if (puVar12 == (undefined *)0x0) {
              func_0x00010011df08();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1b5f20(unaff_x26);
              _objc_release(puVar14);
            }
            param_1[0x1b] = (undefined *)0x3;
            unaff_x28 = (undefined **)PTR_PTR_1126bf800;
            func_0x00010bf2a820();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = (undefined **)PTR_PTR_1126bf808;
            _objc_alloc();
            puVar2 = param_1[3];
            func_0x00010c269d40(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = unaff_x27;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = unaff_x27;
            func_0x00010bf977c0();
            puStack_170 = param_1[0x12];
            puStack_168 = param_1[2];
            uStack_160 = 2;
            uStack_158 = 0;
            uStack_180 = 1;
            uStack_178 = 1;
            uStack_190 = 1;
            uStack_188 = 0;
            uStack_1a0 = 0x10;
            uStack_198 = 0;
            uStack_1a8 = 1;
            ppuStack_1c0 = ppuStack_140;
            param_6 = 0;
            param_5 = (undefined *)unaff_x26;
            puStack_1b8 = puVar12;
            puStack_1b0 = puVar14;
            func_0x00010c028a60();
            _objc_release(puVar12);
            _objc_release(puVar2);
            puVar14 = param_1[0x1a];
            puVar12 = PTR_PTR_1126b60f8;
            func_0x00010c0f2b40(PTR_PTR_1126b60f8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar14);
            _objc_release(puVar12);
            puVar12 = param_1[1];
            ppuVar3 = param_1;
            func_0x00010c25e900();
            ppuVar11 = unaff_x24;
            func_0x00010bef7840(puVar12);
            _objc_release(unaff_x24);
            _objc_release(unaff_x28);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            unaff_x23 = lStack_150;
          }
          unaff_x22 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          puVar13 = puVar13 + 1;
        } while (puStack_138 != puVar13);
        ppuVar11 = &puStack_130;
        ppuVar3 = apuStack_f0;
        param_5 = (undefined *)0x10;
        puVar13 = param_3;
        func_0x00010bf52a60();
        puStack_138 = puVar13;
      } while (puVar13 != (undefined *)0x0);
    }
LAB_10588b274:
    _objc_release(param_3);
    puVar13 = param_1[0x1a];
    func_0x00010bf529e0();
    param_4 = ppuStack_140;
    if (puVar13 == (undefined *)0x0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e09618;
      func_0x000107e66360(ppuStack_140,0x1b);
    }
  }
LAB_10588b2dc:
  _objc_release(param_4);
  puVar13 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_340;
  pcStack_1c8 = FUN_10588b328;
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_220 = unaff_x28;
  puStack_218 = unaff_x27;
  puStack_210 = (undefined *)unaff_x26;
  puStack_208 = unaff_x25;
  ppuStack_200 = unaff_x24;
  lStack_1f8 = unaff_x23;
  ppuStack_1f0 = unaff_x22;
  ppuStack_1e8 = param_1;
  puStack_1e0 = param_3;
  ppuStack_1d8 = param_4;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  puStack_2e0 = (undefined8 *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  _objc_retain(ppuVar11);
  ppuVar4 = ppuVar11;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x27 = (undefined *)*puStack_2e0;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_2e0 != unaff_x27) {
          _objc_enumerationMutation(ppuVar11);
        }
        unaff_x26 = (undefined **)puVar13;
        func_0x00010bde9440();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x26 != (undefined **)0x0) {
          func_0x00010befa120(puVar12);
        }
        _objc_release(unaff_x26);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar4 != unaff_x28);
      ppuVar4 = ppuVar11;
      func_0x00010bf52a60();
    } while (ppuVar4 != (undefined **)0x0);
  }
  puVar2 = (undefined *)0x0;
  _objc_release(ppuVar11);
  puVar14 = puVar12;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e09618;
    puVar9 = (undefined1 *)0x7;
    func_0x000107e66360(param_6,7,&PTR____CFConstantStringClassReference_110e09618);
  }
  else {
    _objc_initWeak(auStack_2f8,puVar13);
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010beffb40();
    _objc_retainAutoreleasedReturnValue();
    puStack_340 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_338 = 0xc2000000;
    pcStack_330 = FUN_10588b5e4;
    puStack_328 = &UNK_1108ba6a8;
    puVar9 = auStack_2f8;
    _objc_copyWeak(auStack_300);
    _objc_retain(param_6);
    uStack_320 = param_6;
    _objc_retain(param_5);
    puStack_318 = param_5;
    _objc_retain(ppuVar11);
    ppuStack_310 = ppuVar11;
    _objc_retain(ppuVar3);
    ppuStack_308 = ppuVar3;
    func_0x00010c297260(puVar2);
    _objc_release(puVar2);
    _objc_release(ppuStack_308);
    _objc_release(ppuStack_310);
    _objc_release(puStack_318);
    _objc_release(uStack_320);
    _objc_destroyWeak(auStack_300);
    _objc_destroyWeak(auStack_2f8);
    unaff_x26 = &puStack_340;
  }
  _objc_release(puVar12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)unaff_x26 + 0x40));
  _objc_destroyWeak(auStack_2f8);
  ppuVar4 = ppuVar11;
  __Unwind_Resume();
  pcStack_348 = FUN_10588b5e4;
  ppuStack_3a0 = unaff_x28;
  puStack_398 = unaff_x27;
  puStack_390 = (undefined *)unaff_x26;
  puStack_388 = puVar2;
  puStack_380 = puVar13;
  puStack_378 = puVar12;
  uStack_370 = param_6;
  puStack_368 = param_5;
  ppuStack_360 = ppuVar3;
  ppuStack_358 = ppuVar11;
  ppuStack_350 = &puStack_1d0;
  _objc_retain(puVar9);
  _objc_retain(ppuVar1);
  ppuVar3 = ppuVar4 + 8;
  _objc_loadWeakRetained();
  if (ppuVar3 == (undefined **)0x0) {
    puVar13 = ppuVar4[4];
    uVar10 = 0x10;
  }
  else {
    puVar5 = puVar9;
    func_0x00010bf529e0();
    if (puVar5 != (undefined1 *)0x0) {
      _objc_initWeak(auStack_3a8,ppuVar3);
      puVar12 = ppuVar4[5];
      func_0x00010c0bc0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = ppuVar4[5];
      func_0x00010c26afc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = ppuVar3[0xb];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010c26afa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar13 == (undefined *)0x0) {
        func_0x000107e66360(ppuVar4[4],6,&PTR____CFConstantStringClassReference_110e09618);
      }
      else {
        puVar6 = ppuVar3[0xb];
        func_0x00010c269d40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar6;
        func_0x00010bfbfa60();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c0e0ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_3b0,auStack_3a8);
        puVar15 = ppuVar4[4];
        _objc_retain(puVar15);
        puVar16 = ppuVar4[6];
        _objc_retain(puVar16);
        puVar17 = ppuVar4[7];
        _objc_retain(puVar17);
        puVar18 = ppuVar4[5];
        _objc_retain(puVar18);
        puVar8 = puVar7;
        func_0x00010c25ff60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_destroyWeak(auStack_3b0);
      }
      _objc_release(puVar13);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_destroyWeak(auStack_3a8);
      goto LAB_10588b83c;
    }
    puVar13 = ppuVar4[4];
    uVar10 = 7;
  }
  func_0x000107e66360(puVar13,uVar10,&PTR____CFConstantStringClassReference_110e09618);
LAB_10588b83c:
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(puVar9);
  return;
}



/* Entry: 10588b328; end: 10588b5e3; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _generateMashupWithPHAssets:crFeaturedStory:memoriesMashupModel:observer:] */

void FUN_10588b328(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  long lStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppuVar16 = &puStack_180;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x26 = (undefined **)param_1;
        func_0x00010bde9440();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x26 != (undefined **)0x0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(unaff_x26);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar4 = (undefined *)0x0;
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    ppuVar16 = &PTR____CFConstantStringClassReference_110e09618;
    puVar15 = (undefined1 *)0x7;
    func_0x000107e66360(param_6,7,&PTR____CFConstantStringClassReference_110e09618);
  }
  else {
    _objc_initWeak(auStack_138,param_1);
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010beffb40();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_10588b5e4;
    puStack_168 = &UNK_1108ba6a8;
    puVar15 = auStack_138;
    _objc_copyWeak(auStack_140);
    _objc_retain(param_6);
    uStack_160 = param_6;
    _objc_retain(param_5);
    uStack_158 = param_5;
    _objc_retain(param_3);
    lStack_150 = param_3;
    _objc_retain(param_4);
    uStack_148 = param_4;
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    _objc_release(uStack_148);
    _objc_release(lStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
    unaff_x26 = &puStack_180;
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x40));
  _objc_destroyWeak(auStack_138);
  lVar5 = param_3;
  __Unwind_Resume();
  pcStack_188 = FUN_10588b5e4;
  lStack_1e0 = unaff_x28;
  lStack_1d8 = unaff_x27;
  puStack_1d0 = (undefined1 *)unaff_x26;
  puStack_1c8 = puVar4;
  puStack_1c0 = param_1;
  puStack_1b8 = puVar1;
  uStack_1b0 = param_6;
  uStack_1a8 = param_5;
  uStack_1a0 = param_4;
  lStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(puVar15);
  _objc_retain(ppuVar16);
  lVar2 = lVar5 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    uVar8 = 0x10;
  }
  else {
    puVar6 = puVar15;
    func_0x00010bf529e0();
    if (puVar6 != (undefined1 *)0x0) {
      _objc_initWeak(auStack_1e8,lVar2);
      uVar7 = *(undefined8 *)(lVar5 + 0x28);
      func_0x00010c0bc0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      func_0x00010c26afc0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(lVar2 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c26afa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      if (lVar10 == 0) {
        func_0x000107e66360(*(undefined8 *)(lVar5 + 0x20),6,
                            &PTR____CFConstantStringClassReference_110e09618);
      }
      else {
        uVar11 = *(undefined8 *)(lVar2 + 0x58);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bfbfa60();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c0e0ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_1f0,auStack_1e8);
        uVar17 = *(undefined8 *)(lVar5 + 0x20);
        _objc_retain(uVar17);
        uVar18 = *(undefined8 *)(lVar5 + 0x30);
        _objc_retain(uVar18);
        uVar19 = *(undefined8 *)(lVar5 + 0x38);
        _objc_retain(uVar19);
        uVar20 = *(undefined8 *)(lVar5 + 0x28);
        _objc_retain(uVar20);
        uVar14 = uVar13;
        func_0x00010c25ff60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(uVar17);
        _objc_destroyWeak(auStack_1f0);
      }
      _objc_release(lVar10);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_1e8);
      goto LAB_10588b83c;
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    uVar8 = 7;
  }
  func_0x000107e66360(uVar7,uVar8,&PTR____CFConstantStringClassReference_110e09618);
LAB_10588b83c:
  _objc_release(lVar2);
  _objc_release(ppuVar16);
  _objc_release(puVar15);
  return;
}



/* Entry: 10588b5e4; end: 10588b8a3;  */

void FUN_10588b5e4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = 0x10;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_68,lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0bc0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c26afc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(lVar1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010c26afa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar2 == 0) {
        func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),6,
                            &PTR____CFConstantStringClassReference_110e09618);
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x58);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bfbfa60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0e0ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,auStack_68);
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar10);
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar11);
        uVar12 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar12);
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar13);
        uVar9 = uVar8;
        func_0x00010c25ff60(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_destroyWeak(auStack_70);
      }
      _objc_release(lVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_68);
      goto LAB_10588b83c;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = 7;
  }
  func_0x000107e66360(uVar3,uVar4,&PTR____CFConstantStringClassReference_110e09618);
LAB_10588b83c:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10588b8a4; end: 10588b9fb;  */

void FUN_10588b8a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),0x10,
                        &PTR____CFConstantStringClassReference_110e09618);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(*(undefined8 *)(param_1 + 0x30));
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588b9fc; end: 10588bb07;  */

void FUN_10588b9fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bfb1920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c26f320(uVar1);
  uVar3 = param_2;
  func_0x00010c270d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203d40();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0844e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73240(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10588bb08; end: 10588bb1b;  */

void FUN_10588bb08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126af5d0;
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x00010bf99260(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf436e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10588bb1c; end: 10588bc4f; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _claimMediaForSnapDoc:completion:] */

void FUN_10588bb1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b25b8;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011280(puVar1,param_2,puVar2,0x13);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10588bc50;
  puStack_58 = &UNK_110858070;
  puStack_50 = puVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bf10680(uVar3,param_2,puVar1,param_3,uVar4,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 10588bc50; end: 10588bc5f;  */

void FUN_10588bc50(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010588bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10588bc60; end: 10588bd3b; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _removeMediaClaimsForSnapDoc:key:completion:] */

void FUN_10588bc60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10588bd3c;
  puStack_40 = &UNK_110842508;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c12b7c0(uVar1,param_2,param_4,param_3,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 10588bd3c; end: 10588bd47;  */

void FUN_10588bd3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010588bd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}


