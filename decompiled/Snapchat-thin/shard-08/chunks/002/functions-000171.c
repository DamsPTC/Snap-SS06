/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f03b58; end: 105f03baf; -[SCMapStatusStore reloadExploreItems] */

void FUN_105f03b58(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f03bb0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 105f03bb0; end: 105f03be7;  */

void FUN_105f03bb0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c076ca0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be4d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadExploreItems_112570e50);
  return;
}



/* Entry: 105f03be8; end: 105f03c3f; -[SCMapStatusStore reloadMyStatuses] */

void FUN_105f03be8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f03c40;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 105f03c40; end: 105f03c77;  */

void FUN_105f03c40(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c076cc0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be4e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadMyStatuses_1125711e0);
  return;
}



/* Entry: 105f03c78; end: 105f03cab; -[SCMapStatusStore reloadIfOlderThan:] */

void FUN_105f03c78(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be8a900();
                    /* WARNING: Could not recover jumptable at 0x00010be8aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__reloadMyStatusesIfOlderThan__112580450);
  return;
}



/* Entry: 105f03cac; end: 105f03d2f; -[SCMapStatusStore _reloadExploreItemsIfOlderThan:] */

void FUN_105f03cac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _objc_opt_class();
  iVar1 = (int)uVar2;
  uVar2 = param_2;
  func_0x00010c08a280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be41900(param_1);
  _objc_release(uVar2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c128c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_reloadExploreItems_112627d38);
    return;
  }
  return;
}



/* Entry: 105f03d30; end: 105f03db3; -[SCMapStatusStore _reloadMyStatusesIfOlderThan:] */

void FUN_105f03d30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _objc_opt_class();
  iVar1 = (int)uVar2;
  uVar2 = param_2;
  func_0x00010c08a2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be41900(param_1);
  _objc_release(uVar2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c128e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_reloadMyStatuses_112627db0);
    return;
  }
  return;
}



/* Entry: 105f03db4; end: 105f03de7; -[SCMapStatusStore hasLoadedExploreItemsAtLeastOnce] */

bool FUN_105f03db4(long param_1)

{
  func_0x00010c08a280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 105f03de8; end: 105f03e1b; -[SCMapStatusStore hasLoadedMyStatusesAtLeastOnce] */

bool FUN_105f03de8(long param_1)

{
  func_0x00010c08a2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 105f03e1c; end: 105f03fc3; -[SCMapStatusStore exploreItems] */

void FUN_105f03e1c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befff40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar6 = *(undefined8 *)(lVar5 * 8);
      _objc_retain(puVar2);
      _objc_retain(puVar2);
      func_0x00010c0c0440(uVar6);
      _objc_release(puVar2);
      _objc_release(puVar2);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfe1400();
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f03fc4; end: 105f03ffb;  */

void FUN_105f03fc4(long param_1,ulong param_2)

{
  func_0x00010bfe1400();
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f03ffc; end: 105f04007;  */

void FUN_105f03ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f04008; end: 105f04063; -[SCMapStatusStore notViewedExploreItems] */

void FUN_105f04008(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010befff40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c620(param_1,param_2,uVar1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f04064; end: 105f040c7; -[SCMapStatusStore liveStatusesForUserId:] */

void FUN_105f04064(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2531e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f040c8; end: 105f040cf;  */

bool FUN_105f040c8(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c0c3980(), (int)lVar1 == 0)) {
    bVar5 = false;
  }
  else {
    lVar1 = param_3;
    func_0x00010c09a860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar5 = true;
    }
    else {
      lVar3 = param_3;
      func_0x00010c09a860(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      bVar5 = 0.0 < param_1;
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return bVar5;
}



/* Entry: 105f040d0; end: 105f041a3;  */

bool FUN_105f040d0(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  _objc_retain();
  if ((param_2 == 0) || (lVar1 = param_2, func_0x00010c0c3980(), (int)lVar1 == 0)) {
    bVar5 = false;
  }
  else {
    lVar1 = param_2;
    func_0x00010c09a860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar5 = true;
    }
    else {
      lVar3 = param_2;
      func_0x00010c09a860(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      bVar5 = 0.0 < param_1;
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return bVar5;
}



/* Entry: 105f041a4; end: 105f0428f; -[SCMapStatusStore statusForUserId:] */

void FUN_105f041a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c2531e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f04290;
  puStack_50 = &UNK_1108f6b00;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x0001006372a4(uVar1,&puStack_68);
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f04290; end: 105f042d7;  */

undefined8 FUN_105f04290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105f042d8; end: 105f0449f; -[SCMapStatusStore statusGroupForUserId:] */

void FUN_105f042d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105f044a0;
    uStack_40 = 0x105f044b0;
    uStack_38 = 0;
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) {
      func_0x00010bf9cda0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      func_0x00010c0c0440(uVar2);
    }
    else {
      func_0x00010bf00500(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      func_0x00010c0c0420(uVar2);
    }
    _objc_release(uVar2);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f044a0; end: 105f044b7;  */

void FUN_105f044a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f044b8; end: 105f04527;  */

void FUN_105f044b8(long param_1,undefined8 param_2)

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



/* Entry: 105f04528; end: 105f0452b;  */

void FUN_105f04528(void)

{
  return;
}



/* Entry: 105f0452c; end: 105f0483b; -[SCMapStatusStore allLiveStatuses] */

void FUN_105f0452c(long param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befff40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_1);
      }
      uVar11 = *(undefined8 *)(lVar14 * 8);
      _objc_retain(puVar5);
      func_0x00010c0c0440(uVar11);
      _objc_release(puVar5);
      lVar14 = lVar14 + 1;
    } while (lVar6 != lVar14);
    lVar6 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bfe1400();
  if ((int)lVar6 != 0) {
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    lVar8 = param_2;
    func_0x00010c253620();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar8;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    if (lVar14 != 0) {
      lVar10 = 0;
      do {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar8);
          }
          lVar12 = *(long *)(lVar13 * 8);
          lVar7 = lVar12;
          FUN_105f040d0();
          if ((int)lVar7 != 0) {
            if (lVar10 != 0) {
              func_0x00010c2709c0(lVar12);
              dVar2 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))))));
              func_0x00010c2709c0(lVar10);
              bVar3 = false;
              bVar4 = false;
              bVar1 = NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15))))))));
              if (!NAN(dVar2) && !bVar1) {
                bVar3 = dVar2 < (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(
                                                  uVar19,CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(
                                                  uVar16,uVar15)))))));
                bVar4 = dVar2 == (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(
                                                  uVar19,CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(
                                                  uVar16,uVar15)))))));
              }
              if (bVar4 || bVar3 != (NAN(dVar2) || bVar1)) goto LAB_105f047a4;
            }
            _objc_retain(lVar12);
            _objc_release(lVar10);
            lVar10 = lVar12;
          }
LAB_105f047a4:
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = lVar8;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
      _objc_release(lVar8);
      if (lVar10 == 0) goto LAB_105f047f4;
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      lVar8 = lVar10;
    }
    _objc_release(lVar8);
  }
LAB_105f047f4:
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105f0483c; end: 105f0483f;  */

void FUN_105f0483c(void)

{
  return;
}



/* Entry: 105f04840; end: 105f049fb; -[SCMapStatusStore stickerForUserId:] */

void FUN_105f04840(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c2531e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bfe1400();
  if ((int)lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar7 = param_1;
    func_0x00010c253620();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf52a60();
    if (lVar5 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      lVar10 = *plStack_130;
      do {
        lVar11 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar7);
          }
          lVar9 = *(long *)(lStack_138 + lVar11 * 8);
          lVar6 = lVar9;
          FUN_105f040d0();
          if ((int)lVar6 != 0) {
            if (lVar8 != 0) {
              func_0x00010c2709c0(lVar9);
              dVar2 = (double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,
                                                  CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,
                                                  uVar12)))))));
              func_0x00010c2709c0(lVar8);
              bVar3 = false;
              bVar4 = false;
              bVar1 = NAN((double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,
                                                  CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,
                                                  uVar12))))))));
              if (!NAN(dVar2) && !bVar1) {
                bVar3 = dVar2 < (double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(
                                                  uVar16,CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(
                                                  uVar13,uVar12)))))));
                bVar4 = dVar2 == (double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(
                                                  uVar16,CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(
                                                  uVar13,uVar12)))))));
              }
              if (bVar4 || bVar3 != (NAN(dVar2) || bVar1)) goto LAB_105f0494c;
            }
            _objc_retain(lVar9);
            _objc_release(lVar8);
            lVar8 = lVar9;
          }
LAB_105f0494c:
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        lVar5 = lVar7;
        func_0x00010bf52a60(lVar7,param_2,&uStack_140,auStack_f8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar7);
    lVar7 = lVar8;
    func_0x00010c253880(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x00010c253f60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c0dab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 105f049fc; end: 105f04a3f; -[SCMapStatusStore customStickerIDForUserId:] */

void FUN_105f049fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c253f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f04a40; end: 105f04a67; -[SCMapStatusStore statusUpdateObservable] */

void FUN_105f04a40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f04a68; end: 105f04a6f; -[SCMapStatusStore subscribeOnNextStatusUpdate:] */

void FUN_105f04a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_subscribeOnNext__112675a00);
  return;
}



/* Entry: 105f04a70; end: 105f04a8f; -[SCMapStatusStore addStatusUpdateObserver:] */

void FUN_105f04a70(long param_1)

{
  func_0x00010c25fd20(*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105f04a90; end: 105f04b53; -[SCMapStatusStore requestPeriodicUpdatesForStatusUpdateObserver:] */

void FUN_105f04a90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar1);
    _objc_sync_enter(uVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    _objc_sync_exit(uVar1);
    _objc_release(uVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105f04b54;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f04b54; end: 105f04b5b;  */

void FUN_105f04b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleInitialPeriodicUpdate_1125845f8);
  return;
}



/* Entry: 105f04b5c; end: 105f04bd7; -[SCMapStatusStore removeRequestedUpdatesForStatusUpdateObserver:] */

void FUN_105f04b5c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar1);
    _objc_sync_enter(uVar1);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    _objc_sync_exit(uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f04bd8; end: 105f04c0f; -[SCMapStatusStore _handleMutedFriendsList:] */

void FUN_105f04bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1288f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reload_112627c58);
  return;
}



/* Entry: 105f04c10; end: 105f04ca7; -[SCMapStatusStore deleteMyStatus:] */

void FUN_105f04c10(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f04ca8;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f04ca8; end: 105f04cb3;  */

void FUN_105f04ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteMyStatus__11255c280,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f04cb4; end: 105f04dab; -[SCMapStatusStore deleteTravelStatuses:] */

void FUN_105f04cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5dc8;
  _objc_alloc_init(PTR_PTR_1126c5dc8);
  puVar3 = PTR_PTR_1126bc1b8;
  puVar2 = puVar1;
  func_0x00010902198c();
  func_0x000106b13b74(puVar3,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf6cde0(uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f04dac; end: 105f04dc3;  */

void FUN_105f04dac(long param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105f04dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2 != 0 && param_3 == 0);
  return;
}



/* Entry: 105f04dc4; end: 105f04dcb; -[SCMapStatusStore isViewedStatusId:] */

void FUN_105f04dc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be458b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_1,PTR_s__isViewedStatusId_timestamp__11256efc8);
  return;
}



/* Entry: 105f04dcc; end: 105f04f5b; -[SCMapStatusStore _isViewedStatusId:timestamp:] */

undefined8 FUN_105f04dcc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x68);
    func_0x00010bf51e00();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain();
    lVar1 = lVar2;
    func_0x00010bf52a60(lVar2,param_3,&uStack_140,auStack_f8,0x10);
    if (lVar1 != 0) {
      lVar6 = *plStack_130;
      do {
        lVar7 = 0;
        do {
          if (*plStack_130 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          uVar3 = *(ulong *)(lStack_138 + lVar7 * 8);
          func_0x00010c253260();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            _objc_release(lVar2);
            uVar5 = 1;
            goto LAB_105f04f00;
          }
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_3,&uStack_140,auStack_f8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c083560(param_1,uVar5,param_3,param_4);
LAB_105f04f00:
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar5;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_4 + 0x48);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return uVar5;
}



/* Entry: 105f04f5c; end: 105f04f83; -[SCMapStatusStore statusViewStateObservable] */

void FUN_105f04f5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f04f84; end: 105f05083; -[SCMapStatusStore markViewedStatusId:userId:] */

void FUN_105f04f84(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar4 = param_4;
    func_0x00010c0720c0(param_4,param_2,*(undefined8 *)(param_1 + 8));
    if ((int)uVar4 == 0) {
      puVar2 = PTR_PTR_1126c5dd0;
      _objc_alloc(PTR_PTR_1126c5dd0);
      func_0x00010c04c4c0();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x68),param_2,puVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_2,puVar3);
      _objc_release(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0bbd40(uVar4,param_2,param_3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f05084; end: 105f0525f; -[SCMapStatusStore flushStatusViewEvents] */

void FUN_105f05084(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar7;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x68);
  func_0x00010bf529e0();
  lVar3 = 0;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_2 + 0x68);
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      unaff_x24 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != unaff_x24) {
            _objc_enumerationMutation(lVar1);
          }
          unaff_x23 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          unaff_x22 = *(undefined8 *)(param_2 + 0x28);
          func_0x00010c253260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bbd40(param_1,unaff_x22);
          _objc_release(unaff_x23);
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    lVar3 = param_2;
    func_0x00010bf9cd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bebe2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166dc0(param_2);
    _objc_release(lVar1);
    _objc_release(lVar3);
    unaff_x20 = *(undefined8 *)(param_2 + 0x18);
    unaff_x21 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f920(unaff_x20);
    _objc_release(unaff_x21);
    lVar3 = *(long *)(param_2 + 0x68);
    func_0x00010c12adc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1a0;
  pcStack_138 = FUN_105f05260;
  lStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  uStack_150 = unaff_x20;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c1bec00();
  _objc_initWeak(auStack_178,lVar3);
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_105f0535c;
  puStack_188 = &UNK_1108f6c50;
  _objc_copyWeak(auStack_180,auStack_178);
  _objc_retainBlock(&puStack_1a0);
  uVar6 = *(undefined8 *)(lVar3 + 0x18);
  uVar5 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6980(uVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 105f05260; end: 105f0535b; -[SCMapStatusStore _loadExploreItems] */

void FUN_105f05260(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  func_0x00010c1bec00(param_1,param_2,1);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f0535c;
  puStack_58 = &UNK_1108f6c50;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6980(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105f0535c; end: 105f053f3;  */

void FUN_105f0535c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    if (param_1 <= 0.1) {
      param_1 = 30.0;
    }
    func_0x00010be9b4e0(param_1,param_2);
    func_0x00010bdfde00(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f053f4; end: 105f054ef; -[SCMapStatusStore _loadMyStatuses] */

void FUN_105f053f4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  func_0x00010c1bee00(param_1,param_2,1);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f054f0;
  puStack_58 = &UNK_1108f6c50;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8d20(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105f054f0; end: 105f0558b;  */

void FUN_105f054f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    if (param_1 <= 0.1) {
      param_1 = 60.0;
    }
    func_0x00010be9b500(param_1,param_2);
    func_0x00010bdfdfa0(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f0558c; end: 105f05917; -[SCMapStatusStore _didFetchExploreItems:error:] */

void FUN_105f0558c(undefined8 param_1,undefined *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_4 == 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    _dispatch_group_create();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      lVar8 = *plStack_140;
      do {
        lVar9 = 0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar11 = *(undefined8 *)(lStack_148 + lVar9 * 8);
          puStack_198 = puVar7;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_105f05918;
          puStack_180 = &UNK_1108f6c80;
          _objc_retain(puVar1);
          puStack_178 = puVar1;
          uStack_170 = uVar11;
          _objc_retain(puVar2);
          puStack_168 = puVar2;
          uStack_160 = param_1;
          _objc_retain(puVar12);
          puStack_1c8 = puVar7;
          uStack_1c0 = 0xc2000000;
          pcStack_1b8 = FUN_105f05a9c;
          puStack_1b0 = &UNK_1108f6a90;
          puStack_158 = puVar12;
          _objc_retain(puVar2);
          puStack_1a8 = puVar2;
          uStack_1a0 = uVar11;
          func_0x00010c0c0440(uVar11);
          _objc_release(puStack_1a8);
          _objc_release(puStack_158);
          _objc_release(puStack_168);
          _objc_release(puStack_178);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = param_3;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010bebe2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010bf51e00();
    func_0x00010c166dc0(param_1);
    _objc_release(uVar5);
    puVar6 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c198e60(param_1);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c198e40(param_1);
    _objc_release(puVar6);
    func_0x00010c1bec00(param_1);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8a80(param_1);
    _objc_release(puVar6);
    _objc_initWeak(auStack_1d0,param_1);
    puStack_1f8 = puVar7;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_105f05ae8;
    puStack_1e0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_1d8,auStack_1d0);
    param_2 = PTR___dispatch_main_q_11034be20;
    func_0x000100bc0718(puVar12,PTR___dispatch_main_q_11034be20,&puStack_1f8);
    _objc_destroyWeak(auStack_1d8);
    _objc_destroyWeak(auStack_1d0);
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1bec00(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar2);
      }
      uVar10 = *(undefined8 *)((long)puVar12 * 8);
      uVar11 = *(undefined8 *)(param_3 + 0x20);
      uVar5 = uVar10;
      func_0x00010c2923e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(uVar5);
      uVar11 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bfe5ec0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(uVar10);
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
    puVar1 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  func_0x00010be776c0(*(undefined8 *)(param_3 + 0x38));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfe5ec0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105f05918; end: 105f05a9b;  */

void FUN_105f05918(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = uVar8;
      func_0x00010c2923e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar1);
      _objc_release(uVar5);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfe5ec0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar1);
      _objc_release(uVar8);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010be776c0(*(undefined8 *)(param_1 + 0x38));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfe5ec0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105f05a9c; end: 105f05ae7;  */

void FUN_105f05a9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f05ae8; end: 105f05b3f;  */

void FUN_105f05ae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c5dd8;
    func_0x00010bf77b00(PTR_PTR_1126c5dd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f05b40; end: 105f05dd7; -[SCMapStatusStore _didFetchMyStatuses:error:] */

void FUN_105f05b40(undefined8 param_1,undefined *param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined *)0x0) {
      puVar3 = param_3;
    }
    _objc_retain(puVar3);
    _objc_release();
    _dispatch_group_create();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar2 != (undefined *)0x0) {
      lVar6 = *plStack_140;
      do {
        puVar5 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar6) {
            _objc_enumerationMutation(puVar3);
          }
          uVar4 = *(undefined8 *)(lStack_148 + (long)puVar5 * 8);
          puStack_180 = puVar1;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_105f05dd8;
          puStack_168 = &UNK_1108f6cb0;
          uStack_160 = param_1;
          _objc_retain(param_3);
          puStack_158 = param_3;
          func_0x00010c0c0420(uVar4);
          _objc_release(puStack_158);
          puVar5 = puVar5 + 1;
        } while (puVar2 != puVar5);
        puVar2 = puVar3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166f20(param_1);
    _objc_release(puVar2);
    func_0x00010c1bee00(param_1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8ac0(param_1);
    _objc_release(puVar2);
    _objc_initWeak(auStack_188,param_1);
    puStack_1b8 = puVar1;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_105f05de8;
    puStack_1a0 = &UNK_110841fb0;
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(puVar3);
    param_2 = PTR___dispatch_main_q_11034be20;
    puStack_198 = puVar3;
    func_0x000100bc0718(param_3,PTR___dispatch_main_q_11034be20,&puStack_1b8);
    _objc_release(puStack_198);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release(param_3);
  }
  else {
    func_0x00010c1bee00(param_1);
    puVar3 = param_3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be776d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 0x20),PTR_s__prefetchStickersForStatusGroup__11257b750,param_2
             ,*(undefined8 *)(puVar3 + 0x28));
  return;
}



/* Entry: 105f05dd8; end: 105f05de7;  */

void FUN_105f05dd8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be776d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__prefetchStickersForStatusGroup__11257b750,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f05de8; end: 105f05e47;  */

void FUN_105f05de8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c5dd8;
    func_0x00010bf77a20(PTR_PTR_1126c5dd8,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x40),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f05e48; end: 105f06023; -[SCMapStatusStore _deleteMyStatus:] */

void FUN_105f05e48(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010bf00500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)lVar3 != 0) {
      lVar2 = param_1;
      func_0x00010bf00500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0d3c80();
      _objc_release(lVar2);
      func_0x00010c12d360(lVar3);
      lVar2 = lVar3;
      func_0x00010bf51e00(lVar3);
      func_0x00010c166f20(param_1);
      _objc_release(lVar2);
      puStack_68 = puVar1;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105f06024;
      puStack_50 = &UNK_110842e18;
      lStack_48 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_68);
      _objc_release(lVar3);
    }
    _objc_initWeak(auStack_70,param_1);
    func_0x00010c1bee00(param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c440(uVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f06024; end: 105f06073;  */

void FUN_105f06024(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5dd8;
  func_0x00010bf77a20(PTR_PTR_1126c5dd8,param_2,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f06074; end: 105f060cf;  */

void FUN_105f06074(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfd160(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f060d0; end: 105f060db; -[SCMapStatusStore _didDeleteMyStatus:newMyStatuses:] */

void FUN_105f060d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfdfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__didFetchMyStatuses_error__11255d188,param_4,0);
  return;
}



/* Entry: 105f060dc; end: 105f06587; -[SCMapStatusStore _prefetchStickersForStatusGroup:dispatchGroup:] */

void FUN_105f060dc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uStack_270;
  undefined *puStack_260;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [128];
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uVar1 = param_3;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  uStack_270 = uVar1;
  func_0x00010bf52a60();
  if (uStack_270 != 0) {
    lVar10 = *plStack_1d0;
    do {
      uVar11 = 0;
      do {
        if (*plStack_1d0 != lVar10) {
          _objc_enumerationMutation(uVar1);
        }
        lVar16 = *(long *)(lStack_1d8 + uVar11 * 8);
        lVar13 = lVar16;
        func_0x00010c253880();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 < 2) {
          lVar3 = lVar13;
          func_0x00010c0dab60();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c08fa60();
          _objc_release(lVar3);
          _objc_release(lVar13);
          if (lVar4 != 0) {
            lVar13 = lVar16;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar13;
            func_0x00010c0dab60();
            _objc_retainAutoreleasedReturnValue();
            puStack_260 = PTR__OBJC_CLASS___NSArray_1126ae530;
            lStack_118 = lVar3;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_118,1);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105f06370;
          }
LAB_105f06354:
          puStack_260 = PTR____NSArray0__struct_11034ab48;
        }
        else {
          lVar3 = lVar13;
          func_0x00010bf3e8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c08fa60();
          if (lVar4 == 0) {
            puStack_260 = PTR____NSArray0__struct_11034ab48;
          }
          else {
            lVar4 = lVar16;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf3e8c0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c08fa60();
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(lVar3);
            _objc_release(lVar13);
            if (lVar6 == 0) goto LAB_105f06354;
            lVar13 = lVar16;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar13;
            func_0x00010bf3e8a0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar16;
            lStack_110 = lVar3;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf3e8c0();
            _objc_retainAutoreleasedReturnValue();
            puStack_260 = PTR__OBJC_CLASS___NSArray_1126ae530;
            lStack_108 = lVar5;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_110,2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            _objc_release(lVar4);
          }
LAB_105f06370:
          _objc_release(lVar3);
          _objc_release(lVar13);
        }
        puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_200 = 0xc2000000;
        pcStack_1f8 = FUN_105f06588;
        puStack_1f0 = &UNK_110842e18;
        _objc_retain(param_4);
        ppuVar7 = &puStack_208;
        uStack_1e8 = param_4;
        _objc_retainBlock(ppuVar7);
        lStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        plStack_240 = (long *)0x0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        _objc_retain(puStack_260);
        puVar8 = puStack_260;
        func_0x00010bf52a60(puStack_260,param_2,&uStack_250,auStack_198,0x10);
        if (puVar8 != (undefined *)0x0) {
          lVar13 = *plStack_240;
          do {
            puVar17 = (undefined *)0x0;
            do {
              if (*plStack_240 != lVar13) {
                _objc_enumerationMutation(puStack_260);
              }
              uVar12 = *(undefined8 *)(lStack_248 + (long)puVar17 * 8);
              _dispatch_group_enter(param_4);
              uVar15 = *(undefined8 *)(param_1 + 0x20);
              lVar3 = lVar16;
              func_0x00010c2923e0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b96e0(uVar15,param_2,lVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar15;
              func_0x00010bf1acc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar15);
              _objc_release(lVar3);
              uVar14 = *(undefined8 *)(param_1 + 0x10);
              uVar15 = *(undefined8 *)(param_1 + 0x38);
              func_0x00010c11de00(uVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1073a0(uVar14,param_2,uVar9,uVar12,uVar15,ppuVar7);
              _objc_release(uVar15);
              _objc_release(uVar9);
              puVar17 = puVar17 + 1;
            } while (puVar8 != puVar17);
            puVar8 = puStack_260;
            func_0x00010bf52a60(puStack_260,param_2,&uStack_250,auStack_198,0x10);
          } while (puVar8 != (undefined *)0x0);
        }
        _objc_release(puStack_260);
        _objc_release(ppuVar7);
        _objc_release(uStack_1e8);
        _objc_release(puStack_260);
        uVar11 = uVar11 + 1;
      } while (uVar11 != uStack_270);
      uStack_270 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_1e0,auStack_100,0x10);
    } while (uStack_270 != 0);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 105f06588; end: 105f0658f;  */

void FUN_105f06588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f06590; end: 105f0661b; -[SCMapStatusStore _schedulePeriodicUpdateForExploreItemsIfNecessaryWithInterval:] */

void FUN_105f06590(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x00010be34300();
  if (((int)lVar1 != 0) && ((*(byte *)(param_2 + 0x70) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x70) = 1;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f0661c;
    puStack_48 = &UNK_110848c48;
    lStack_40 = param_2;
    uStack_38 = param_1;
    func_0x00010c0f7fe0(param_1,*(undefined8 *)(param_2 + 0x38),param_3,&puStack_60);
  }
  return;
}



/* Entry: 105f0661c; end: 105f06667;  */

void FUN_105f0661c(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x70) = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be34300();
  if (iVar1 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x72) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c128c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + 0x20),PTR_s_reloadExploreItems_112627d38);
      return;
    }
  }
  return;
}



/* Entry: 105f06668; end: 105f066f3; -[SCMapStatusStore _schedulePeriodicUpdateForMyStatusesIfNecessaryWithInterval:] */

void FUN_105f06668(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x00010be34300();
  if (((int)lVar1 != 0) && ((*(byte *)(param_2 + 0x71) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x71) = 1;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f066f4;
    puStack_48 = &UNK_110848c48;
    lStack_40 = param_2;
    uStack_38 = param_1;
    func_0x00010c0f7fe0(param_1,*(undefined8 *)(param_2 + 0x38),param_3,&puStack_60);
  }
  return;
}



/* Entry: 105f066f4; end: 105f0673f;  */

void FUN_105f066f4(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x71) = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be34300();
  if (iVar1 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x72) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c128e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + 0x20),PTR_s_reloadMyStatuses_112627db0);
      return;
    }
  }
  return;
}



/* Entry: 105f06740; end: 105f06817; -[SCMapStatusStore _hasObserversRequiringPeriodicUpdates] */

undefined * FUN_105f06740(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  puVar5 = &uStack_100;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar6);
  _objc_sync_enter(uVar6);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lVar7 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_100,auStack_b8,0x10);
  _objc_release(lVar7);
  _objc_sync_exit(uVar6);
  uVar2 = uVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined *)(ulong)(lVar1 != 0);
  }
  ___stack_chk_fail();
  _objc_sync_exit(uVar6);
  __Unwind_Resume(uVar2);
  _objc_retain(puVar5);
  uVar6 = uVar2;
  func_0x00010be0c600(uVar2,param_2,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c600(uVar2,param_2,puVar5,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  uVar3 = uVar6;
  func_0x00010bf09f80(uVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ecd40(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 105f06818; end: 105f068db; -[SCMapStatusStore _sortedExploreItems:] */

void FUN_105f06818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be0c600(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c600(param_1,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  uVar2 = uVar1;
  func_0x00010bf09f80(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ecd40(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f068dc; end: 105f068e7; -[SCMapStatusStore _exploreItems:filteredByViewed:] */

void FUN_105f068dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exploreItems_filteredByViewed_o_112560b28,param_3,param_4,0,0);
  return;
}



/* Entry: 105f068e8; end: 105f069b7; -[SCMapStatusStore _exploreItems:filteredByViewed:onlyInExplore:ignoreActiveUser:] */

void FUN_105f068e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f069b8;
  puStack_58 = &UNK_1108f6d40;
  uVar2 = param_3;
  uStack_50 = param_1;
  uStack_48 = param_5;
  uStack_47 = param_6;
  uStack_46 = param_4;
  func_0x0001006372a4(param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f069b8; end: 105f06b37;  */

byte FUN_105f069b8(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 1;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  func_0x00010c0c0440(param_2);
  if ((*(char *)(puStack_48 + 3) == *(char *)(param_1 + 0x2a)) &&
     ((*(byte *)(puStack_68 + 3) & 1) == 0)) {
    bVar1 = *(byte *)(puStack_88 + 3) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return bVar1 & 1;
}



/* Entry: 105f06b38; end: 105f06d0b;  */

void FUN_105f06b38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  if ((*(char *)(param_1 + 0x40) == '\x01') &&
     (lVar2 = param_2, func_0x00010bfe1400(), (int)lVar2 != 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  else {
    lVar3 = param_2;
    func_0x00010c253620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(undefined8 *)(lVar10 * 8);
        uVar9 = *(ulong *)(param_1 + 0x20);
        uVar4 = uVar8;
        func_0x00010bfe5ec0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c083580();
        _objc_release(uVar4);
        if ((uVar9 & 1) == 0) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
        }
        if (*(char *)(param_1 + 0x41) == '\x01') {
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          func_0x00010c0720c0();
          _objc_release(uVar8);
          if ((int)uVar4 != 0) {
            *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
            goto LAB_105f06cc0;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
LAB_105f06cc0:
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  func_0x00010bfe5ec0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083580();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105f06d0c; end: 105f06d63;  */

void FUN_105f06d0c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083580();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f06d64; end: 105f06de3; +[SCMapStatusStore _isLoadDate:olderThan:] */

bool FUN_105f06d64(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  bool bVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 == 0) {
    bVar2 = true;
  }
  else {
    dVar3 = param_1;
    _objc_retain(param_4);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(param_4);
    bVar2 = param_1 < dVar3;
    _objc_release(puVar1);
  }
  return bVar2;
}



/* Entry: 105f06de4; end: 105f06f23; +[SCMapStatusStore _statusGroup:hasStoryMoreRecentThanTimestamp:] */

undefined1 * FUN_105f06de4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 in_b0;
  undefined1 uVar11;
  undefined1 in_register_00005001;
  undefined1 uVar12;
  undefined1 in_register_00005002;
  undefined1 uVar13;
  undefined1 in_register_00005003;
  undefined1 uVar14;
  undefined1 in_register_00005004;
  undefined1 uVar15;
  undefined1 in_register_00005005;
  undefined1 uVar16;
  undefined1 in_register_00005006;
  undefined1 uVar17;
  undefined1 in_register_00005007;
  undefined1 uVar18;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  dVar2 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar10 = param_3;
  func_0x00010c27dd80();
  if (puVar10 == (undefined1 *)0xc) {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar5 = param_3;
    func_0x00010c253620();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    puVar10 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      lVar9 = *plStack_110;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(puVar5);
          }
          func_0x00010c2709c0(*(undefined8 *)(lStack_118 + (long)puVar10 * 8));
          bVar3 = false;
          bVar4 = false;
          bVar1 = NAN((double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,
                                                  uVar11))))))));
          if (!bVar1 && !NAN(dVar2)) {
            bVar3 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13
                                                  (uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))
                                                  ))) < dVar2;
            bVar4 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13
                                                  (uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))
                                                  ))) == dVar2;
          }
          if (!bVar4 && bVar3 == (bVar1 || NAN(dVar2))) {
            puVar10 = (undefined1 *)0x1;
            goto LAB_105f06ed8;
          }
          puVar10 = puVar10 + 1;
        } while (puVar6 != puVar10);
        puVar6 = puVar5;
        puVar8 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
      puVar10 = (undefined1 *)0x0;
    }
LAB_105f06ed8:
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar8;
  }
  else {
    puVar10 = (undefined1 *)0x0;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x00010bfcc660();
  if ((int)puVar5 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166f20(param_3,param_2,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return puVar7;
  }
  return puVar5;
}



/* Entry: 105f06f24; end: 105f06f7f; -[SCMapStatusStore _onLocationSharingPreferencesChanged:] */

void FUN_105f06f24(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  func_0x00010bfcc660();
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166f20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105f06f80; end: 105f07317; -[SCMapStatusStore _updateExploreItems] */

void FUN_105f06f80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  long lStack_88;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf9cd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0ecd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_1;
  func_0x00010bf9cd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_1;
  func_0x00010bf9cd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  lVar5 = param_1;
  func_0x00010bf9cd80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar5);
      }
      uVar14 = *(undefined8 *)(lVar11 * 8);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      func_0x00010c0c0440(uVar14);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar11 = lVar11 + 1;
    } while (lVar1 != lVar11);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  if ((*(byte *)(puStack_120 + 3) & 1) != 0) {
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c166dc0(param_1);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c198e60(param_1);
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c198e40(param_1);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c5dd8;
    func_0x00010bf77b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar6);
  }
  __Block_object_dispose(&uStack_128,8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = lVar8;
  _objc_retain(lVar8);
  lVar11 = lVar8;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      _objc_release(lVar11);
      func_0x00010befa120(*(undefined8 *)(puVar2 + 0x28));
      lVar11 = lVar8;
      func_0x00010c253620();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar11;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar11);
          }
          uVar13 = *(undefined8 *)(lVar15 * 8);
          uVar14 = *(undefined8 *)(puVar2 + 0x38);
          uVar7 = uVar13;
          func_0x00010c2923e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar14);
          _objc_release(uVar7);
          uVar14 = *(undefined8 *)(puVar2 + 0x40);
          func_0x00010c2923e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar14);
          _objc_release(uVar13);
          lVar15 = lVar15 + 1;
        } while (lVar1 != lVar15);
        lVar1 = lVar11;
        func_0x00010bf52a60();
      }
LAB_105f07538:
      _objc_release(lVar11);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(lVar9);
      func_0x00010befa120(*(undefined8 *)(lVar8 + 0x20));
      lVar1 = lVar9;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar5 != 0) {
        uVar14 = *(undefined8 *)(lVar8 + 0x30);
        lVar1 = lVar9;
        func_0x00010bfe5ec0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar14);
        _objc_release(lVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar9);
      return;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar11);
      }
      uVar14 = *(undefined8 *)(lVar15 * 8);
      lVar12 = *(long *)(*(long *)(puVar2 + 0x20) + 0x20);
      func_0x00010c2923e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b96e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar14);
      if (lVar12 == 0) {
        *(undefined1 *)(*(long *)(*(long *)(puVar2 + 0x48) + 8) + 0x18) = 1;
        goto LAB_105f07538;
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar11;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f07318; end: 105f07583;  */

void FUN_105f07318(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar1);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      lVar1 = param_2;
      func_0x00010c253620();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar9 = *(undefined8 *)(lVar10 * 8);
          uVar3 = *(undefined8 *)(param_1 + 0x38);
          uVar4 = uVar9;
          func_0x00010c2923e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar3);
          _objc_release(uVar4);
          uVar3 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c2923e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar3);
          _objc_release(uVar9);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar1;
        func_0x00010bf52a60();
      }
LAB_105f07538:
      _objc_release(lVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(lVar6);
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
      lVar2 = lVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_2 + 0x30);
        lVar2 = lVar6;
        func_0x00010bfe5ec0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar3);
        _objc_release(lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar6);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar1);
      }
      uVar3 = *(undefined8 *)(lVar10 * 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b96e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar3);
      if (lVar8 == 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
        goto LAB_105f07538;
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f07584; end: 105f07617;  */

void FUN_105f07584(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  lVar2 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f07618; end: 105f078a3; -[SCMapStatusStore _updateMyStatuses] */

void FUN_105f07618(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf00500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010bf529e0();
  func_0x00010c0ecd60();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar1);
      }
      uVar9 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(puVar2);
      func_0x00010c0c0420(uVar9);
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  if ((*(byte *)(puStack_118 + 3) & 1) != 0) {
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c166f20(param_1);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c5dd8;
    lVar3 = param_1;
    func_0x00010bf00500();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar4);
  }
  __Block_object_dispose(&uStack_120,8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar7);
      func_0x00010befa120(*(undefined8 *)(lVar1 + 0x28));
LAB_105f079cc:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar7);
      }
      uVar9 = *(undefined8 *)(lVar10 * 8);
      lVar8 = *(long *)(*(long *)(lVar1 + 0x20) + 0x20);
      func_0x00010c2923e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b96e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar9);
      if (lVar8 == 0) {
        *(undefined1 *)(*(long *)(*(long *)(lVar1 + 0x38) + 8) + 0x18) = 1;
        _objc_release(lVar7);
        goto LAB_105f079cc;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f078a4; end: 105f07a03;  */

void FUN_105f078a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_2);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
LAB_105f079cc:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b96e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar3);
      if (lVar5 == 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
        _objc_release(param_2);
        goto LAB_105f079cc;
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f07a04; end: 105f07a07; -[SCMapStatusStore _clearViewedState] */

void FUN_105f07a04(void)

{
  return;
}



/* Entry: 105f07a08; end: 105f07a13; -[SCMapStatusStore allExploreItems] */

void FUN_105f07a08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xb0,1);
  return;
}



/* Entry: 105f07a14; end: 105f07a1b; -[SCMapStatusStore setAllExploreItems:] */

void FUN_105f07a14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f07a1c; end: 105f07a27; -[SCMapStatusStore allMyStatuses] */

void FUN_105f07a1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xb8,1);
  return;
}



/* Entry: 105f07a28; end: 105f07a2f; -[SCMapStatusStore setAllMyStatuses:] */

void FUN_105f07a28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f07a30; end: 105f07a3b; -[SCMapStatusStore exploreItemsByUserId] */

void FUN_105f07a30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xc0,1);
  return;
}



/* Entry: 105f07a3c; end: 105f07a43; -[SCMapStatusStore setExploreItemsByUserId:] */

void FUN_105f07a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f07a44; end: 105f07a4f; -[SCMapStatusStore exploreItemsByItemId] */

void FUN_105f07a44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,200,1);
  return;
}



/* Entry: 105f07a50; end: 105f07a57; -[SCMapStatusStore setExploreItemsByItemId:] */

void FUN_105f07a50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f07a58; end: 105f07a63; -[SCMapStatusStore isLoadingExploreItems] */

byte FUN_105f07a58(long param_1)

{
  return *(byte *)(param_1 + 0xa8) & 1;
}



/* Entry: 105f07a64; end: 105f07a6b; -[SCMapStatusStore setLoadingExploreItems:] */

void FUN_105f07a64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 105f07a6c; end: 105f07a77; -[SCMapStatusStore isLoadingMyStatuses] */

byte FUN_105f07a6c(long param_1)

{
  return *(byte *)(param_1 + 0xa9) & 1;
}



/* Entry: 105f07a78; end: 105f07a7f; -[SCMapStatusStore setLoadingMyStatuses:] */

void FUN_105f07a78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa9) = param_3;
  return;
}



/* Entry: 105f07a80; end: 105f07a8b; -[SCMapStatusStore lastSuccessfulExploreItemsLoadDate] */

void FUN_105f07a80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xd0,1);
  return;
}



/* Entry: 105f07a8c; end: 105f07a93; -[SCMapStatusStore setLastSuccessfulExploreItemsLoadDate:] */

void FUN_105f07a8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f07a94; end: 105f07a9f; -[SCMapStatusStore lastSuccessfulMyStatusesLoadDate] */

void FUN_105f07a94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xd8,1);
  return;
}



/* Entry: 105f07aa0; end: 105f07aa7; -[SCMapStatusStore setLastSuccessfulMyStatusesLoadDate:] */

void FUN_105f07aa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f07aa8; end: 105f07beb; -[SCMapStatusStore .cxx_destruct] */

void FUN_105f07aa8(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 105f07bec; end: 105f07c5f; -[UNISCMapMapStatusService initWithUnifiedGrpcService:] */

undefined1 * FUN_105f07bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126edf08;
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



/* Entry: 105f07c60; end: 105f07d43; -[UNISCMapMapStatusService getFriendsTravelStatusesWithRequest:callOptionsBuilder:handler:] */

void FUN_105f07c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c5de0;
  _objc_opt_class(PTR_PTR_1126c5de0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e30ed8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f07d44; end: 105f07e27; -[UNISCMapMapStatusService getFriendsVenueStatusesWithRequest:callOptionsBuilder:handler:] */

void FUN_105f07d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c5de8;
  _objc_opt_class(PTR_PTR_1126c5de8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e30ef8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f07e28; end: 105f07f0b; -[UNISCMapMapStatusService deleteUserStatusesWithRequest:callOptionsBuilder:handler:] */

void FUN_105f07e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c5df0;
  _objc_opt_class(PTR_PTR_1126c5df0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e30f18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


