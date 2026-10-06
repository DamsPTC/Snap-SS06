/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e889f8; end: 106e88d3f; -[SCSpectaclesVisibleContentFilter _mixWithLagunaContentIfNeeded] */

void FUN_106e889f8(undefined *param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *unaff_x20;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_1;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar2 = *(undefined **)(param_1 + 0x30);
    puVar11 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
    }
    puVar4 = PTR_PTR_1126af4d0;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf00d20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5d900(param_1);
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + 0x30);
    func_0x00010c0d3c80();
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar2 = puVar4;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar4);
        }
        uVar3 = *(undefined8 *)((long)puVar18 * 8);
        func_0x00010c0c5180(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar5);
        _objc_release(uVar3);
        puVar18 = puVar18 + 1;
      } while (puVar2 != puVar18);
      puVar2 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    lVar7 = lVar5;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_170;
    lVar8 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        lVar9 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137620();
        lVar10 = lVar9;
        func_0x00010c080760();
        if ((int)lVar10 != 0) {
          func_0x00010c1d0640(lVar5);
        }
        _objc_release(lVar9);
        lVar19 = lVar19 + 1;
      } while (lVar8 != lVar19);
      param_4 = auStack_170;
      lVar8 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar8 = lVar5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar8;
    _objc_release(uVar3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    puVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    param_3 = param_1;
    func_0x00010bfadc60();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release();
    unaff_x20 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(unaff_x20);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  puVar12 = param_4;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (puVar12 != (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_4);
      }
      uVar3 = *(undefined8 *)((long)puVar16 * 8);
      func_0x00010c0c5180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar3);
      puVar16 = puVar16 + 1;
    } while (puVar12 != puVar16);
    puVar12 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  do {
    if (puVar6 == (undefined *)0x0) {
      _objc_release(param_3);
      puVar6 = puVar18;
      func_0x00010bf529e0();
      if (puVar6 != (undefined *)0x0) {
        uVar20 = *(undefined8 *)(puVar11 + 8);
        func_0x00010c249020(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar20;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bb3c0();
        _objc_release(uVar3);
        _objc_release(uVar20);
      }
      _objc_release(puVar18);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be815f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_3);
      }
      uVar20 = *(undefined8 *)((long)puVar17 * 8);
      uVar3 = uVar20;
      func_0x00010c0d2900(uVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (puVar13 == (undefined *)0x0) {
        func_0x00010bdc3540(uVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        if (puVar14 != (undefined *)0x0) goto LAB_106e88f6c;
      }
      else {
        _objc_retain(puVar13);
        puVar14 = puVar13;
LAB_106e88f6c:
        puVar15 = puVar14;
        func_0x00010bfdd120();
        if ((int)puVar15 != 0) {
          func_0x00010befa120(puVar18);
        }
      }
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar17 = puVar17 + 1;
    } while (puVar6 != puVar17);
    puVar6 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106e88d40; end: 106e89073; -[SCSpectaclesVisibleContentFilter _markSyncedForContentsIfNeeded:persistedSnaps:] */

void FUN_106e88d40(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      func_0x00010c0c5180(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar11);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_3);
      puVar6 = puVar5;
      func_0x00010bf529e0();
      if (puVar6 != (undefined *)0x0) {
        uVar12 = *(undefined8 *)(param_1 + 8);
        func_0x00010c249020(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bb3c0();
        _objc_release(uVar11);
        _objc_release(uVar12);
      }
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be815f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar12 = *(undefined8 *)(lVar10 * 8);
      uVar11 = uVar12;
      func_0x00010c0d2900(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      if (puVar6 == (undefined *)0x0) {
        func_0x00010bdc3540(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        if (puVar7 != (undefined *)0x0) goto LAB_106e88f6c;
      }
      else {
        _objc_retain(puVar6);
        puVar7 = puVar6;
LAB_106e88f6c:
        puVar8 = puVar7;
        func_0x00010bfdd120();
        if ((int)puVar8 != 0) {
          func_0x00010befa120(puVar5);
        }
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106e89074; end: 106e89077; -[SCSpectaclesVisibleContentFilter spectaclesDeviceDidUpdateContentList:] */

void FUN_106e89074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be815f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processLagunaContentChange_11257df18);
  return;
}



/* Entry: 106e89078; end: 106e890df; -[SCSpectaclesVisibleContentFilter spectaclesDeviceDidUpdateState:] */

void FUN_106e89078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be815e0(param_1);
  uVar1 = param_3;
  func_0x00010c082060();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e890e0; end: 106e890f7; -[SCSpectaclesVisibleContentFilter spectaclesTransferSession:onTransferUpdate:] */

void FUN_106e890e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 - 5U < 4 || param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be815f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processLagunaContentChange_11257df18);
    return;
  }
  return;
}



/* Entry: 106e890f8; end: 106e8915f; -[SCSpectaclesVisibleContentFilter .cxx_destruct] */

void FUN_106e890f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e89160; end: 106e8924b;  */

bool FUN_106e89160(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_opt_class();
  func_0x00010be16c60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf433a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return lVar2 != 1;
}



/* Entry: 106e8924c; end: 106e892a7;  */

void FUN_106e8924c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be16c60(param_1,param_2,puVar1,0xfffffff0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106e892a8; end: 106e8935b;  */

void FUN_106e892a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffabc0();
  puVar2 = puVar1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c2bedc0(puVar2);
  func_0x00010c2278a0(puVar2,param_2,puVar3 + param_4);
  puVar3 = puVar1;
  func_0x00010bf650e0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e8935c; end: 106e89413; -[SCCustomStoryTooltip initWithAvatarView:storyName:storyType:source:] */

undefined1 * FUN_106e8935c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becd1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f79f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithView_appearance__11252f058,param_3,uVar1);
  _objc_release(param_3);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c192d40(0x4008000000000000,puVar2);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 106e89414; end: 106e89493; -[SCCustomStoryTooltip willShow] */

void FUN_106e89414(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  dVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxY();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c104290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar2 + 4.0,param_2,PTR_s_positionAtPoint_trianglePosition_11261eac0,0);
  return;
}



/* Entry: 106e89494; end: 106e894a7; -[SCCustomStoryTooltip markCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89494(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112760638) = 1;
  return;
}



/* Entry: 106e894a8; end: 106e894bf; -[SCCustomStoryTooltip needsToBeCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106e894a8(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112760638) ^ 0xff) & 1;
}



/* Entry: 106e894c0; end: 106e8955f; -[SCCustomStoryTooltip _tooltipAppearanceForStoryName:storyType:source:] */

void FUN_106e894c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010becb600();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c8098;
  _objc_alloc(PTR_PTR_1126c8098);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0516e0(puVar1,param_2,param_1,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e89560; end: 106e89643; -[SCCustomStoryTooltip _textForStoryName:storyType:source:] */

void FUN_106e89560(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (param_5 == 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e8a198;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e8a198,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    goto LAB_106e8961c;
  }
  if (param_4 - 5U < 2) {
LAB_106e895f4:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e8a1b8;
  }
  else {
    if (param_4 != 1) {
      if (param_4 != 2) {
        ppuVar2 = (undefined **)0x0;
        goto LAB_106e8961c;
      }
      goto LAB_106e895f4;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e8a1d8;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
LAB_106e8961c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106e89644; end: 106e89753; -[SCFriendsPageOnboardingView initWithFrame:] */

undefined1 * FUN_106e89644(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf31a60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c28ed20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c28ed40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf202a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf20440(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e89754; end: 106e898cf; -[SCFriendsPageOnboardingView cardBounceView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89754(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276063c;
  lVar3 = *(long *)(param_3 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010bddbac0(param_3);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_3 + lVar4);
    *(undefined **)(param_3 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar4));
    func_0x00010bf199e0(puVar1,param_4,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar2 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar4),param_4,1);
    func_0x00010befbb60(param_3,param_4,*(undefined8 *)(param_3 + lVar4));
    lVar3 = (long)_DAT_112760640;
    func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar4));
    *(double *)(param_3 + lVar3) = param_1;
    ((double *)(param_3 + lVar3))[1] = param_2;
    lVar3 = (long)_DAT_112760644;
    *(double *)(param_3 + lVar3) = param_1 + 20.0;
    ((double *)(param_3 + lVar3))[1] = param_2;
    lVar3 = *(long *)(param_3 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106e898d0; end: 106e8998f; -[SCFriendsPageOnboardingView upperLeftTeachingArrowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e898d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112760648;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e28e38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010bee5fe0(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106e89990; end: 106e89a4f; -[SCFriendsPageOnboardingView upperRightTeachingArrowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89990(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276064c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e28e38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010bee5fe0(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106e89a50; end: 106e89b0f; -[SCFriendsPageOnboardingView bottomLeftTeachingArrowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89a50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112760650;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e28e38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010bdd55c0(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106e89b10; end: 106e89bcf; -[SCFriendsPageOnboardingView bottomRightTeachingArrowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112760654;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e28e38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010bdd55c0(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106e89bd0; end: 106e89bf3; -[SCFriendsPageOnboardingView startAnimations] */

void FUN_106e89bd0(undefined8 param_1)

{
  func_0x00010be77f40();
                    /* WARNING: Could not recover jumptable at 0x00010bebf6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startAnimations_11258d760);
  return;
}



/* Entry: 106e89bf4; end: 106e89c33; -[SCFriendsPageOnboardingView stopAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89bf4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760658;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAnimations_112580708);
  return;
}



/* Entry: 106e89c34; end: 106e89c9f; -[SCFriendsPageOnboardingView _startAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89c34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x4000000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__animateTooltip_1125358f8,0,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112760658;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bfb0060(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdcb170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateTeachingArrowCluster_1125505f8);
  return;
}



/* Entry: 106e89ca0; end: 106e89ef7; -[SCFriendsPageOnboardingView _animateTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e89ca0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar3 = PTR_PTR_1126c4228;
  func_0x00010bf04100(PTR_PTR_1126c4228,param_2,&PTR____CFConstantStringClassReference_110ee4258);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)(param_1 + _DAT_112760640);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(*puVar1,puVar1[1],PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar2 = (undefined8 *)(param_1 + _DAT_112760644);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(*puVar2,puVar2[1],PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0x3e800000,0x3dcccccd,0x3c23d70a,0x3f7d70a4,
                      PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3ff0000000000000,puVar3);
  func_0x00010c1ea580(puVar3,param_2,0);
  lVar5 = param_1;
  func_0x00010bf31a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a40();
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126c4230;
  func_0x00010bf04100(PTR_PTR_1126c4230,param_2,&PTR____CFConstantStringClassReference_110ee4258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193240(0x4077c00000000000);
  func_0x00010c193200(0x4034000000000000,puVar4);
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(*puVar2,puVar2[1],PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(*puVar1,puVar1[1],PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c1ea580(puVar4,param_2,0);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e89ef8;
  puStack_68 = &UNK_1108e6420;
  lStack_60 = param_1;
  puStack_58 = puVar4;
  _objc_retain(puVar4);
  func_0x00010c17fb40(puVar3,param_2,&puStack_80);
  _objc_release(puStack_58);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 106e89ef8; end: 106e89f43;  */

void FUN_106e89ef8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf31a60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e89f44; end: 106e8a007; -[SCFriendsPageOnboardingView _animateTeachingArrowCluster] */

void FUN_106e89f44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c28ed20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca8c0(0,param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf202a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca8c0(0,param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c28ed40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca8c0(0x3fe8000000000000,param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf20440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca8c0(0x3fe8000000000000,param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8a008; end: 106e8a30b; -[SCFriendsPageOnboardingView _animateArrowView:delay:] */

void FUN_106e8a008(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126c4228;
    func_0x00010bf04100(PTR_PTR_1126c4228,param_3,&PTR____CFConstantStringClassReference_110ee42b8);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = 0.9;
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3feccccccccccccd,0x3feccccccccccccd,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    dVar5 = 0.7;
    func_0x00010c192d40(0x3fe6666666666666,puVar1);
    _CACurrentMediaTime();
    func_0x00010c16fd40(param_1 + dVar5,puVar1);
    func_0x00010c1ea580(puVar1,param_3,0);
    func_0x00010c1eabe0(puVar1);
    func_0x00010c103a40(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110e28e78);
    puVar3 = PTR_PTR_1126c4228;
    func_0x00010bf04100(PTR_PTR_1126c4228,param_3,&PTR____CFConstantStringClassReference_110ee42b8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar3,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3feccccccccccccd,0x3feccccccccccccd,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar3,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    _CACurrentMediaTime();
    func_0x00010c16fd40(param_1 + dVar4 + 0.7,puVar3);
    func_0x00010c1ea580(puVar3,param_3,0);
    func_0x00010c1eabe0(puVar3);
    func_0x00010c103a40(param_4,param_3,puVar3,&PTR____CFConstantStringClassReference_110e28e98);
    func_0x00010c27a460(&uStack_a0,param_4);
    func_0x00010c1677c0(0,param_4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106e8a30c;
    puStack_e0 = &UNK_1108700e8;
    _objc_retain(param_4);
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    lStack_d8 = param_4;
    func_0x00010bf02ee0(0x3ff4cccccccccccd,param_1,puVar2,param_3,8,&puStack_f8,0);
    _objc_release(lStack_d8);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106e8a30c; end: 106e8a453;  */

void FUN_106e8a30c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106e8a454;
  puStack_70 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_68 = uVar3;
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar2,param_2,&puStack_88);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106e8a460;
  puStack_98 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar2,param_2,&puStack_b0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106e8a46c;
  puStack_f0 = &UNK_1108700e8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_d8 = *(undefined8 *)(param_1 + 0x30);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  uStack_c8 = *(undefined8 *)(param_1 + 0x40);
  uStack_d0 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = uVar3;
  func_0x00010bef95a0(0,0x3ff0000000000000,puVar2,param_2,&puStack_108);
  _objc_release(uStack_e8);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  return;
}



/* Entry: 106e8a454; end: 106e8a46b;  */

void FUN_106e8a454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106e8a46c; end: 106e8a4d3;  */

void FUN_106e8a46c(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  _CGAffineTransformTranslate(&uStack_50,0x4036000000000000,0,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 106e8a4d4; end: 106e8a4fb; -[SCFriendsPageOnboardingView _cardBounceViewFrame] */

undefined8 FUN_106e8a4d4(void)

{
  func_0x00010bf20c00();
  _CGRectGetHeight();
  return 0xc034000000000000;
}



/* Entry: 106e8a4fc; end: 106e8a533; -[SCFriendsPageOnboardingView _upperTeachingArrowViewFrame] */

undefined8 FUN_106e8a4fc(void)

{
  func_0x00010bf20c00();
  _CGRectGetHeight();
  return 0x4028000000000000;
}



/* Entry: 106e8a534; end: 106e8a567; -[SCFriendsPageOnboardingView _bottomTeachingArrowViewFrame] */

undefined8 FUN_106e8a534(void)

{
  func_0x00010bf20c00();
  _CGRectGetHeight();
  return 0x4028000000000000;
}



/* Entry: 106e8a568; end: 106e8a5b7; -[SCFriendsPageOnboardingView _swipeHintCenter] */

undefined1  [16] FUN_106e8a568(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar1 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  auVar2._8_8_ = (long)(dVar1 * 0.17800000309944153);
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 106e8a5b8; end: 106e8a623; -[SCFriendsPageOnboardingView _resetCardBounceView] */

void FUN_106e8a5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bddbac0();
  func_0x00010bf31a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106e8a624; end: 106e8a767; -[SCFriendsPageOnboardingView _resetArrowViewCluster] */

void FUN_106e8a624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x00010bee5fe0();
  uVar1 = param_5;
  func_0x00010c28ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bee5fe0(param_5);
  uVar1 = param_5;
  func_0x00010c28ed40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bdd55c0(param_5);
  uVar1 = param_5;
  func_0x00010bf202a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bdd55c0(param_5);
  func_0x00010bf20440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106e8a768; end: 106e8a847; -[SCFriendsPageOnboardingView _prepareAnimations] */

void FUN_106e8a768(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2559e0();
  func_0x00010be925c0(param_1);
  func_0x00010be922c0(param_1);
  uVar1 = param_1;
  func_0x00010bf31a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf202a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf20440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c28ed20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c28ed40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e8a848; end: 106e8a8cf; -[SCFriendsPageOnboardingView _removeAnimations] */

/* WARNING: Possible PIC construction at 0x000106e8a868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106e8a890: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8a848(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276063c);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + _DAT_112760648) != 0) {
      func_0x00010c103b20();
    }
    lVar1 = *(long *)(param_1 + _DAT_11276064c);
    if (lVar1 == 0) {
      if (*(long *)(param_1 + _DAT_112760650) != 0) {
        func_0x00010c103b20();
      }
      lVar1 = *(long *)(param_1 + _DAT_112760654);
      if (lVar1 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c103b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_pop_removeAllAnimations_11261e8e8);
  return;
}



/* Entry: 106e8a8d0; end: 106e8a90f; -[SCFriendsPageOnboardingView setCardBounceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8a8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276063c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8a910; end: 106e8a94f; -[SCFriendsPageOnboardingView setUpperLeftTeachingArrowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8a910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760648;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8a950; end: 106e8a98f; -[SCFriendsPageOnboardingView setUpperRightTeachingArrowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8a950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276064c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8a990; end: 106e8a9cf; -[SCFriendsPageOnboardingView setBottomLeftTeachingArrowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8a990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760650;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8a9d0; end: 106e8aa0f; -[SCFriendsPageOnboardingView setBottomRightTeachingArrowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8a9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760654;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8aa10; end: 106e8aa8f; -[SCFriendsPageOnboardingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8aa10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112760654,0);
  _objc_storeStrong(param_1 + _DAT_112760650,0);
  _objc_storeStrong(param_1 + _DAT_11276064c,0);
  _objc_storeStrong(param_1 + _DAT_112760648,0);
  _objc_storeStrong(param_1 + _DAT_11276063c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760658,0);
  return;
}



/* Entry: 106e8aa90; end: 106e8aafb; -[SCActivityIndicator initWithTarget:withStyle:] */

long FUN_106e8aa90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bff0f20(param_1,param_2,param_4);
  if (param_1 != 0) {
    func_0x00010c2121a0(param_1,param_2,param_3);
    func_0x00010c1a7f60(param_1,param_2,1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e8aafc; end: 106e8ab53; -[SCActivityIndicator mas_alignWithTarget] */

void FUN_106e8aafc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e8ab54;
  puStack_20 = &UNK_1108471b0;
  uStack_18 = param_1;
  func_0x00010c0bbfc0(param_1,param_2,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106e8ab54; end: 106e8abdb;  */

void FUN_106e8ab54(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
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



/* Entry: 106e8abdc; end: 106e8acc7; -[SCActivityIndicator startAnimating] */

void FUN_106e8abdc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 & 1) == 0) {
    func_0x00010c1a7f60();
  }
  else {
    uVar3 = uVar1;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  func_0x00010c1a7f60(param_1);
  puStack_38 = PTR_PTR_1126f7a08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 106e8acc8; end: 106e8add7; -[SCActivityIndicator stopAnimating] */

void FUN_106e8acc8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 & 1) == 0) {
    func_0x00010c1a7f60();
  }
  else {
    uVar3 = uVar1;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  func_0x00010c1a7f60(param_1);
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f7a08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106e8add8; end: 106e8ade7; -[SCActivityIndicator target] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e8add8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276065c);
}



/* Entry: 106e8ade8; end: 106e8ae27; -[SCActivityIndicator setTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8ade8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276065c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8ae28; end: 106e8ae3b; -[SCActivityIndicator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e8ae28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276065c,0);
  return;
}



/* Entry: 106e8ae3c; end: 106e8af4f; -[SCGalleryLagunaContentLoaderThumbnailRequest initWithContentLoader:performer:queue:resultHandler:] */

undefined1 *
FUN_106e8ae3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f7a10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e8af50; end: 106e8afff; -[SCGalleryLagunaContentLoaderThumbnailRequest cancel] */

void FUN_106e8af50(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106e8b000; end: 106e8b05f;  */

void FUN_106e8b000(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e080();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e8b060; end: 106e8b07f; -[SCGalleryLagunaContentLoaderThumbnailRequest isCancelled] */

bool FUN_106e8b060(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c296d80(uVar1);
  return (int)uVar1 != 0;
}



/* Entry: 106e8b080; end: 106e8b16b; -[SCGalleryLagunaContentLoaderThumbnailRequest performWithStatus:error:] */

void FUN_106e8b080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106e8b16c;
    puStack_60 = &UNK_11085b7b0;
    lStack_50 = lVar2;
    uStack_48 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retain(lVar2);
    func_0x00010007380c(uVar3,&puStack_78);
    _objc_release(uStack_58);
    _objc_release(lStack_50);
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 106e8b16c; end: 106e8b17f;  */

void FUN_106e8b16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e8b17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106e8b180; end: 106e8b197; -[SCGalleryLagunaContentLoaderThumbnailRequest progressReceiver] */

void FUN_106e8b180(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e8b198; end: 106e8b1a3; -[SCGalleryLagunaContentLoaderThumbnailRequest setProgressReceiver:] */

void FUN_106e8b198(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106e8b1a4; end: 106e8b1fb; -[SCGalleryLagunaContentLoaderThumbnailRequest .cxx_destruct] */

void FUN_106e8b1a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106e8b1fc; end: 106e8b43b; -[SCGalleryLagunaContentLoader initWithSnap:content:performer:spectaclesServices:spectaclesAuxiliaryContentServices:dataObjectContext:cloudFS:encryptedContentManager:] */

undefined1 *
FUN_106e8b1fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  puStack_68 = PTR_PTR_1126f7a18;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    lVar3 = param_3;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar2 = param_9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + 0x48);
      *(undefined8 *)((long)puVar1 + 0x48) = uVar4;
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126d2f38;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar5;
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



/* Entry: 106e8b43c; end: 106e8b54b; -[SCGalleryLagunaContentLoader dealloc] */

void FUN_106e8b43c(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar1 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar9 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar12 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lStack_108 + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puStack_118 = PTR_PTR_1126f7a18;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)((long)plVar1 + 0x10);
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar4 = *(ulong *)((long)plVar1 + 8);
    func_0x00010bf70720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    _objc_release();
    if (uVar4 != 0) {
      uVar5 = *(ulong *)((long)plVar1 + 0x20);
      func_0x00010c249020();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf71280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar5);
      uVar4 = uVar3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (uVar4 != 0) {
        uVar5 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(uVar3);
          }
          uVar11 = *(ulong *)(uVar5 * 8);
          uVar6 = uVar11;
          func_0x00010c15e740();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)((long)plVar1 + 8);
          func_0x00010bf70720(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          if ((uVar8 & 1) != 0) {
            _objc_retain(uVar11);
            _objc_release();
            goto LAB_106e8b6fc;
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
        uVar4 = uVar3;
        func_0x00010bf52a60();
      }
      _objc_release();
    }
    uVar11 = 0;
  }
  else {
    uVar3 = *(ulong *)((long)plVar1 + 0x10);
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
  }
LAB_106e8b6fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(uVar3 + 0x10),PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106e8b54c; end: 106e8b73b; -[SCGalleryLagunaContentLoader _device] */

void FUN_106e8b54c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bf70720();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    _objc_release();
    if (uVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010c249020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf71280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar4);
      uVar3 = uVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar3 != 0) {
        uVar4 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar2);
          }
          uVar9 = *(ulong *)(uVar4 * 8);
          uVar5 = uVar9;
          func_0x00010c15e740();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 8);
          func_0x00010bf70720(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((uVar7 & 1) != 0) {
            _objc_retain(uVar9);
            _objc_release();
            goto LAB_106e8b6fc;
          }
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
        uVar3 = uVar2;
        func_0x00010bf52a60();
      }
      _objc_release();
    }
    uVar9 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
  }
LAB_106e8b6fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(uVar2 + 0x10),PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106e8b73c; end: 106e8b743; -[SCGalleryLagunaContentLoader contentUUID] */

void FUN_106e8b73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106e8b744; end: 106e8b74b; -[SCGalleryLagunaContentLoader snapId] */

void FUN_106e8b744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106e8b74c; end: 106e8b827; -[SCGalleryLagunaContentLoader isComponentsBeingTransferred:] */

undefined8 FUN_106e8b74c(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_3 >> 2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  if ((param_3 >> 3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 106e8b828; end: 106e8ba07; -[SCGalleryLagunaContentLoader transferProgressForComponents:] */

long FUN_106e8b828(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar5 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((((uint)param_3 >> 2 & 1) != 0) && (func_0x00010c06eea0(param_1,param_2,4), (int)lVar1 != 0)
       ) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010c12a3e0();
      if (lVar1 != 0) {
        func_0x00010c09df20();
      }
    }
    if ((((uint)param_3 >> 3 & 1) != 0) && (lVar1 = param_1, func_0x00010c06eea0(), (int)lVar1 != 0)
       ) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010c12a3e0();
      if (lVar1 != 0) {
        func_0x00010c09df20();
      }
    }
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bfc0dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar6 = *plStack_130;
      do {
        lVar7 = 0;
        do {
          if (*plStack_130 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          lVar2 = *(long *)(param_1 + 0x10);
          func_0x00010c12a400();
          if (lVar2 != 0) {
            func_0x00010c09df40();
          }
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = lVar1;
        puVar5 = &uStack_140;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release();
    param_3 = (undefined1 *)puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar1;
  }
  ___stack_chk_fail();
  if ((long)param_3 < 3) {
    if (param_3 + -1 < (undefined1 *)0x2) {
      uVar3 = *(ulong *)(lVar1 + 0x48);
      func_0x00010c06cde0();
      uVar3 = uVar3 & 1;
    }
    else {
      if (param_3 != (undefined1 *)0x0) goto LAB_106e8ba90;
      uVar3 = *(ulong *)(lVar1 + 8);
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    if (uVar3 == 0) {
LAB_106e8ba90:
      lVar1 = *(long *)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c070dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar1,PTR_s_isDownloadCompleteForComponent__1125f9d80,param_3);
      return lVar1;
    }
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_3 != (undefined1 *)0x3) && (param_3 != (undefined1 *)0x5)) goto LAB_106e8ba90;
  }
  return lVar4;
}



/* Entry: 106e8ba08; end: 106e8baa7; -[SCGalleryLagunaContentLoader isAvailableLocallyForContentComponent:] */

undefined8 FUN_106e8ba08(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 < 3) {
    if (param_3 - 1U < 2) {
      uVar1 = *(ulong *)(param_1 + 0x48);
      func_0x00010c06cde0();
      uVar1 = uVar1 & 1;
    }
    else {
      if (param_3 != 0) goto LAB_106e8ba90;
      uVar1 = *(ulong *)(param_1 + 8);
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    if (uVar1 == 0) {
LAB_106e8ba90:
      uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c070dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar2,PTR_s_isDownloadCompleteForComponent__1125f9d80,param_3);
      return uVar2;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_3 != 3) && (param_3 != 5)) goto LAB_106e8ba90;
  }
  return uVar2;
}



/* Entry: 106e8baa8; end: 106e8bc37; -[SCGalleryLagunaContentLoader downloadThumbnailWithQueue:resultHandler:] */

void FUN_106e8baa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c06ce00();
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126d2f40;
    _objc_alloc();
    func_0x00010c0037a0();
    _objc_initWeak(auStack_70,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(puVar2);
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010c0f7fc0(uVar3);
    _objc_retain(puVar2);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106e8bc38;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010007380c(param_3,&puStack_68);
    _objc_release(uStack_48);
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e8bc38; end: 106e8bc4b;  */

void FUN_106e8bc38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e8bc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 106e8bc4c; end: 106e8bccf;  */

void FUN_106e8bc4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1179e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1341e0();
  _objc_release(uVar2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    func_0x00010befa120(*(undefined8 *)(lVar3 + 0x50),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106e8bcd0; end: 106e8bcdb;  */

undefined ** FUN_106e8bcd0(void)

{
  return &PTR____CFConstantStringClassReference_110e8a218;
}



/* Entry: 106e8bcdc; end: 106e8bd3f; -[SCGalleryLagunaContentLoader _ensureAuxiliaryContentStorePopulated] */

void FUN_106e8bcdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0b480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103d00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8bd40; end: 106e8bdcb; -[SCGalleryLagunaContentLoader requestImageForContentComponent:] */

void FUN_106e8bd40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c06ce00();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf63a60(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      if (param_3 == 2) {
        func_0x00010be0a3c0(param_1);
      }
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto LAB_106e8bdb8;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_106e8bdb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e8bdcc; end: 106e8be7f; -[SCGalleryLagunaContentLoader requestAVAssetWithAutomaticallyLoadedAssetKeys:queue:resultHandler:] */

void FUN_106e8bdcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106e8be80;
  puStack_58 = &UNK_1108e4930;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010be90800(param_1,param_2,uVar1,param_3,uVar2,param_4,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 106e8be80; end: 106e8bee7;  */

void FUN_106e8be80(long param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    func_0x00010be0a3c0(*(undefined8 *)(param_1 + 0x20));
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e8bee8; end: 106e8c1ff; -[SCGalleryLagunaContentLoader _requestAVAssetWithSnap:automaticallyLoadedAssetKeys:cloudFile:queue:resultHandler:] */

void FUN_106e8bee8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = param_5;
  func_0x00010c06cde0();
  if ((int)uVar3 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c070dc0();
    if (iVar1 == 0) {
      lVar4 = param_3;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = PTR_PTR_1126af4d0;
      if (lVar4 != 0) {
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        uStack_d0 = 0x106e8c228;
        puStack_c8 = &UNK_110849530;
        _objc_retain(param_7);
        puStack_c0 = param_7;
        func_0x00010007380c(param_6,&puStack_e0);
        puVar2 = puStack_c0;
        goto LAB_106e8c0b4;
      }
      lVar4 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa72e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar4);
      if (puVar2 == (undefined *)0x0) {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x106e8c214;
        puStack_a0 = &UNK_110849530;
        _objc_retain(param_7);
        puStack_98 = param_7;
        func_0x00010007380c(param_6,&puStack_b8);
        puVar6 = puStack_98;
      }
      else {
        puVar5 = *(undefined **)(param_1 + 0x38);
        func_0x00010c269d40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010be90800(param_1);
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf63a60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0082a0();
      _objc_release(uVar3);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106e8c200;
      puStack_78 = &UNK_11084aaa8;
      _objc_retain(param_7);
      puStack_70 = puVar2;
      puStack_68 = param_7;
      _objc_retain(puVar2);
      func_0x00010007380c(param_6,&puStack_90);
      _objc_release(puStack_70);
      puVar6 = puStack_68;
    }
    _objc_release(puVar6);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x40);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1346c0();
  }
LAB_106e8c0b4:
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e8c200; end: 106e8c23b;  */

void FUN_106e8c200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e8c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106e8c23c; end: 106e8c243; -[SCGalleryLagunaContentLoader didReceiveDataForContentComponent:forContent:] */

void FUN_106e8c23c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf790b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_didReceiveDataForContentComponen_1125bbdd0);
  return;
}



/* Entry: 106e8c244; end: 106e8c42b; -[SCGalleryLagunaContentLoader didFinishDownloadForContentComponent:forContent:] */

void FUN_106e8c244(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
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
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_100,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar4 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        if (param_3 == 0) {
          uVar6 = *(undefined8 *)(lStack_138 + lVar4 * 8);
          uVar3 = uVar6;
          func_0x00010c1179e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1341e0();
          _objc_release(uVar3);
          func_0x00010c0f9620(uVar6,param_2,0,0);
          func_0x00010befa120(puVar1,param_2,uVar6);
        }
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c12d500(*(undefined8 *)(param_1 + 0x50),param_2,puVar1);
  func_0x00010bf767e0(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  func_0x000109026ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8a238);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e8c42c; end: 106e8c493;  */

void FUN_106e8c42c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000109026ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8a238);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e8c494; end: 106e8c49b; -[SCGalleryLagunaContentLoader didPauseForContentComponent:forContent:] */

void FUN_106e8c494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf782f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_didPauseForContentComponent_forC_1125bba60);
  return;
}



/* Entry: 106e8c49c; end: 106e8c4a3; -[SCGalleryLagunaContentLoader didInterruptDownloadForContentComponent:forContent:] */

void FUN_106e8c49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf776f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_didInterruptDownloadForContentCo_1125bb760);
  return;
}



/* Entry: 106e8c4a4; end: 106e8c4ab; -[SCGalleryLagunaContentLoader didCancelDownloadForContentComponent:forContent:] */

void FUN_106e8c4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_didCancelDownloadForContentCompo_1125ba4b0);
  return;
}



/* Entry: 106e8c4ac; end: 106e8c4f3; -[SCGalleryLagunaContentLoader removeRequest:] */

void FUN_106e8c4ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar1,param_2,param_3);
  func_0x00010c0f9620(param_3,param_2,2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e8c4f4; end: 106e8c4fb; -[SCGalleryLagunaContentLoader addLagunaContentListener:] */

void FUN_106e8c4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106e8c4fc; end: 106e8c503; -[SCGalleryLagunaContentLoader removeLagunaContentListener:] */

void FUN_106e8c4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106e8c504; end: 106e8c50b; -[SCGalleryLagunaContentLoader isGenericAssetDownloadComplete] */

undefined1 FUN_106e8c504(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 106e8c50c; end: 106e8c513; -[SCGalleryLagunaContentLoader snap] */

undefined8 FUN_106e8c50c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e8c514; end: 106e8c5af; -[SCGalleryLagunaContentLoader .cxx_destruct] */

void FUN_106e8c514(long param_1)

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



/* Entry: 106e8c5b0; end: 106e8cc77; -[SCGalleryLagunaContentLoaderFactory contentLoaderForSnap:content:] */

void FUN_106e8c5b0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [128];
  long lStack_260;
  ulong uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  ulong uStack_208;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
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
  uStack_1b0 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_4;
  func_0x00010c09df20(param_4,param_2,0);
  lVar8 = param_4;
  lStack_1c8 = lVar7;
  func_0x00010c09df20(param_4,param_2,1);
  lVar7 = param_4;
  lStack_1b8 = lVar8;
  func_0x00010c09df20(param_4,param_2,2);
  lVar8 = param_4;
  lStack_1d0 = lVar7;
  func_0x00010c12a3e0(param_4,param_2,1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_1c0 = lVar8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar7 = param_4;
  func_0x00010bfc0dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar17 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar17) {
          _objc_enumerationMutation(lVar7);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar16 = *(undefined8 *)(lStack_138 + lVar12 * 8);
        lVar4 = param_4;
        func_0x00010c09df40(param_4,param_2,uVar16);
        func_0x00010c0df780(puVar5,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b2c0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_2,puVar5,uVar16);
        _objc_release(uVar16);
        _objc_release(puVar5);
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  lVar7 = param_4;
  func_0x00010c070dc0(param_4,param_2,0);
  uStack_1d4 = (undefined4)lVar7;
  lVar7 = param_4;
  func_0x00010c070dc0(param_4,param_2,1);
  uStack_1d8 = (undefined4)lVar7;
  lVar7 = param_4;
  func_0x00010c070dc0(param_4,param_2,2);
  lVar8 = param_4;
  func_0x00010c079c20(param_4,param_2,0);
  lVar17 = param_4;
  func_0x00010c079c20(param_4,param_2,1);
  lVar12 = param_4;
  func_0x00010c079c20(param_4,param_2,2);
  puVar5 = PTR_PTR_1126d2f48;
  _objc_alloc();
  uVar18 = uStack_1b0;
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c046ea0();
  lVar4 = param_4;
  func_0x00010c27dd80();
  bVar1 = lStack_1b8 < lStack_1c0;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar6 = uStack_1b0;
  if ((uVar18 == 0) || (uVar10 = (ulong)(lVar4 == 0 && bVar1), lVar4 == 0 && bVar1)) {
    uVar18 = *(ulong *)(param_1 + 0x30);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x106e8c928;
    puStack_190 = &UNK_110981c50;
    lStack_188 = param_1;
    _objc_retain(uStack_1b0);
    uStack_180 = uVar6;
    _objc_retain(puVar5);
    puStack_178 = puVar5;
    _objc_retain(param_4);
    lStack_160 = lStack_1c8;
    lStack_158 = lStack_1b8;
    lStack_150 = lStack_1d0;
    lStack_170 = param_4;
    _objc_retain(puVar3);
    uStack_148 = (undefined1)uStack_1d4;
    uStack_147 = (undefined1)uStack_1d8;
    uStack_146 = (undefined1)lVar7;
    uStack_145 = (undefined1)lVar8;
    uStack_144 = (undefined1)lVar17;
    uStack_143 = (undefined1)lVar12;
    puStack_168 = puVar3;
    func_0x00010c0f7fc0(uVar18,param_2,&puStack_1a8);
    _objc_release(puStack_168);
    _objc_release(lStack_170);
    _objc_release(puStack_178);
    _objc_release(uStack_180);
    uVar10 = uVar6;
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  uVar6 = uStack_1b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uStack_1f8 = 0x106e8c928;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(undefined8 *)(uVar6 + 0x28);
  puVar13 = *(undefined **)(*(long *)(uVar6 + 0x20) + 0x38);
  uStack_250 = uVar18;
  lStack_248 = lVar12;
  lStack_240 = lVar17;
  lStack_238 = lVar7;
  lStack_230 = lVar8;
  puStack_228 = puVar5;
  lStack_220 = param_1;
  puStack_218 = puVar3;
  lStack_210 = param_4;
  uStack_208 = uVar10;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010c0c5180(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar13,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  if (puVar13 == (undefined *)0x0) {
    puVar13 = PTR_PTR_1126d2f38;
    _objc_alloc_init();
    uVar16 = *(undefined8 *)(uVar6 + 0x28);
    uVar14 = *(undefined8 *)(*(long *)(uVar6 + 0x20) + 0x38);
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar14,param_2,puVar13,uVar16);
    _objc_release(uVar16);
  }
  func_0x00010bef9980(puVar13,param_2,*(undefined8 *)(uVar6 + 0x30));
  lVar7 = *(long *)(uVar6 + 0x38);
  func_0x00010c09df20(lVar7,param_2,0);
  if (lVar7 != *(long *)(uVar6 + 0x48)) {
    func_0x00010bf790a0(*(undefined8 *)(uVar6 + 0x30),param_2,0,*(undefined8 *)(uVar6 + 0x38));
  }
  lVar7 = *(long *)(uVar6 + 0x38);
  func_0x00010c09df20(lVar7,param_2,1);
  if (lVar7 != *(long *)(uVar6 + 0x50)) {
    func_0x00010bf790a0(*(undefined8 *)(uVar6 + 0x30),param_2,1,*(undefined8 *)(uVar6 + 0x38));
  }
  lVar7 = *(long *)(uVar6 + 0x38);
  func_0x00010c09df20(lVar7,param_2,2);
  if (lVar7 != *(long *)(uVar6 + 0x58)) {
    func_0x00010bf790a0(*(undefined8 *)(uVar6 + 0x30),param_2,2,*(undefined8 *)(uVar6 + 0x38));
  }
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  lVar8 = *(long *)(uVar6 + 0x38);
  func_0x00010bfc0dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_2e0;
  lVar7 = lVar8;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar17 = *plStack_310;
    do {
      lVar12 = 0;
      do {
        if (*plStack_310 != lVar17) {
          _objc_enumerationMutation(lVar8);
        }
        uVar14 = *(undefined8 *)(lStack_318 + lVar12 * 8);
        lVar15 = *(long *)(uVar6 + 0x40);
        uVar16 = uVar14;
        func_0x00010bf0b2c0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar15,param_2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar15;
        func_0x00010c2827c0();
        lVar9 = *(long *)(uVar6 + 0x38);
        func_0x00010c09df40(lVar9,param_2,uVar14);
        _objc_release(lVar15);
        _objc_release(uVar16);
        if (lVar4 != lVar9) {
          uVar16 = *(undefined8 *)(uVar6 + 0x30);
          uVar14 = *(undefined8 *)(uVar6 + 0x38);
          func_0x00010c137620(uVar14);
          func_0x00010bf790a0(uVar16,param_2,uVar14,*(undefined8 *)(uVar6 + 0x38));
        }
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
      puVar11 = auStack_2e0;
      lVar7 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_320,puVar11,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar8);
  uVar16 = *(undefined8 *)(uVar6 + 0x38);
  func_0x00010c070dc0(uVar16,param_2,0);
  if ((uint)*(byte *)(uVar6 + 0x60) != (uint)uVar16) {
    puVar11 = *(undefined1 **)(uVar6 + 0x38);
    func_0x00010bf767e0(*(undefined8 *)(uVar6 + 0x30),param_2,0,puVar11);
  }
  uVar16 = *(undefined8 *)(uVar6 + 0x38);
  func_0x00010c070dc0(uVar16,param_2,1);
  if ((uint)*(byte *)(uVar6 + 0x61) != (uint)uVar16) {
    puVar11 = *(undefined1 **)(uVar6 + 0x38);
    func_0x00010bf767e0(*(undefined8 *)(uVar6 + 0x30),param_2,1,puVar11);
  }
  uVar16 = *(undefined8 *)(uVar6 + 0x38);
  func_0x00010c070dc0(uVar16,param_2,2);
  if ((uint)*(byte *)(uVar6 + 0x62) != (uint)uVar16) {
    puVar11 = *(undefined1 **)(uVar6 + 0x38);
    func_0x00010bf767e0(*(undefined8 *)(uVar6 + 0x30),param_2,2,puVar11);
  }
  uVar16 = *(undefined8 *)(uVar6 + 0x38);
  func_0x00010c079c20(uVar16,param_2,0);
  if ((uint)*(byte *)(uVar6 + 99) != (uint)uVar16) {
    puVar11 = *(undefined1 **)(uVar6 + 0x38);
    func_0x00010bf782e0(*(undefined8 *)(uVar6 + 0x30),param_2,0,puVar11);
  }
  uVar16 = *(undefined8 *)(uVar6 + 0x38);
  func_0x00010c079c20(uVar16,param_2,1);
  if ((uint)*(byte *)(uVar6 + 100) != (uint)uVar16) {
    puVar11 = *(undefined1 **)(uVar6 + 0x38);
    func_0x00010bf782e0(*(undefined8 *)(uVar6 + 0x30),param_2,1,puVar11);
  }
  uVar2 = (uint)*(undefined8 *)(uVar6 + 0x38);
  uVar18 = 2;
  func_0x00010c079c20();
  if (*(byte *)(uVar6 + 0x65) != uVar2) {
    puVar11 = *(undefined1 **)(uVar6 + 0x38);
    uVar18 = 2;
    func_0x00010bf782e0(*(undefined8 *)(uVar6 + 0x30),param_2,2,puVar11);
  }
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar18);
  uVar6 = uVar18;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c23e340();
  _objc_release(uVar6);
  if ((uVar10 & 1) == 0) {
    uVar6 = uVar18;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 != 0) {
      uVar6 = uVar18;
      func_0x00010bf61080(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar18;
      func_0x00010bf44300(uVar18);
      func_0x00010be277a0(puVar13,param_2,uVar6,uVar10,puVar11);
      _objc_release(uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 106e8cc78; end: 106e8cd33; -[SCGalleryLagunaContentLoaderFactory spectaclesTransferSession:onTransferUpdate:] */

void FUN_106e8cc78(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23e340();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010bf61080(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf44300(param_3);
      func_0x00010be277a0(param_1,param_2,uVar1,uVar2,param_4);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e8cd34; end: 106e8cdd7; -[SCGalleryLagunaContentLoaderFactory _handleContentUpdate:contentComponent:updateType:] */

void FUN_106e8cd34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e8cdd8;
  puStack_68 = &UNK_110844fe0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 106e8cdd8; end: 106e8cedf;  */

void FUN_106e8cdd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc3540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 < 5) {
      if (lVar3 == 3) {
        func_0x00010bf790a0(lVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                            *(undefined8 *)(param_1 + 0x20));
      }
      else if (lVar3 == 4) {
        func_0x00010bf782e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                            *(undefined8 *)(param_1 + 0x20));
      }
    }
    else if (lVar3 == 5) {
      func_0x00010bf790a0(lVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x20));
      func_0x00010bf767e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x20));
    }
    else if (lVar3 == 6) {
      func_0x00010bf776e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x20));
    }
    else if (lVar3 == 8) {
      func_0x00010bf72c20(lVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e8cee0; end: 106e8cf4b; -[SCGalleryLagunaContentLoaderFactory .cxx_destruct] */

void FUN_106e8cee0(long param_1)

{
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



/* Entry: 106e8cf4c; end: 106e8d0c7; -[SCGalleryLagunaContentListenerAnnouncer description] */

void FUN_106e8cf4c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_106e8d0c8(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e8d0c8; end: 106e8d127;  */

void FUN_106e8d0c8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 106e8d128; end: 106e8d3d3; -[SCGalleryLagunaContentListenerAnnouncer addListener:] */

undefined8 FUN_106e8d128(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110981c90;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_106e8d3d4(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_106e8d514(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_106e8d2dc:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_106e8d2fc;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106e8d3d4(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106e8d3d4(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_106e8d514(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_106e8d2dc;
    }
  }
  uVar9 = 1;
LAB_106e8d2fc:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}


