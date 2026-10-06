/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071dedcc; end: 1071df0ef; -[FriendStories setStories:] */

void FUN_1071dedcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    _objc_retain(param_3);
    puVar2 = *(undefined **)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = param_3;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (uVar1 != 0) {
      lVar14 = *plStack_120;
      do {
        uVar11 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(param_3);
          }
          lVar12 = *(long *)(lStack_128 + uVar11 * 8);
          lVar4 = lVar12;
          func_0x00010bf3cfc0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar5 != 0) {
            lVar4 = lVar12;
            func_0x00010bf3cfc0(lVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar2;
            func_0x00010c0e00e0(puVar2,param_2,lVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            if (puVar6 == (undefined *)0x0) {
              lVar4 = lVar12;
              func_0x00010bf3cfc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2,param_2,lVar12,lVar4);
              _objc_release(lVar4);
              func_0x00010befa120(puVar3,param_2,lVar12);
            }
            else {
              lVar4 = lVar12;
              func_0x00010c105980();
              puVar13 = puVar6;
              func_0x00010c105980();
              if ((long)puVar13 < lVar4) {
                lVar4 = lVar12;
                func_0x00010bf3cfc0(lVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar2,param_2,lVar12,lVar4);
                _objc_release(lVar4);
                puVar13 = puVar3;
                func_0x00010bf529e0();
                if (puVar13 == (undefined *)0x0) {
                  puVar13 = (undefined *)0xffffffffffffffff;
                }
                else {
                  puVar13 = (undefined *)0x0;
                  do {
                    puVar7 = puVar3;
                    func_0x00010c0dfd40(puVar3,param_2,puVar13);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = puVar7;
                    func_0x00010bf3cfc0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar4 = lVar12;
                    func_0x00010bf3cfc0(lVar12);
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar8;
                    func_0x00010c0720c0(puVar8,param_2,lVar4);
                    _objc_release(lVar4);
                    _objc_release(puVar8);
                    _objc_release(puVar7);
                    if ((int)puVar9 != 0) goto LAB_1071df038;
                    puVar13 = puVar13 + 1;
                    puVar7 = puVar3;
                    func_0x00010bf529e0();
                  } while (puVar13 < puVar7);
                  puVar13 = (undefined *)0xffffffffffffffff;
                }
LAB_1071df038:
                func_0x00010c130f40(puVar3,param_2,puVar13,lVar12);
              }
            }
            _objc_release(puVar6);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar1);
        uVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (uVar1 != 0);
    }
    _objc_release(param_3);
    puVar6 = puVar3;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar6;
    _objc_release(uVar10);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010befa220();
    *(undefined1 *)(param_3 + 8) = 1;
    uVar1 = param_3;
    func_0x00010c258040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc71c0(param_3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1071df0f0; end: 1071df14f; -[FriendStories addStoriesObservers] */

void FUN_1071df0f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010befa220(param_1,param_2,param_1,&PTR____CFConstantStringClassReference_110e17458,3,0);
  *(undefined1 *)(param_1 + 8) = 1;
  lVar1 = param_1;
  func_0x00010c258040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc71c0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071df150; end: 1071df247; -[FriendStories _addIndividualStoriesObservers:] */

double FUN_1071df150(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar1 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar9 = 0.0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bef9be0(*(undefined8 *)(lStack_108 + lVar7 * 8),param_2,param_1);
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      lVar6 = param_3;
      puVar1 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return dVar9;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  dVar9 = 0.0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar4 = (undefined1 *)puVar1;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar6 = *plStack_210;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar6) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c12d140(*(undefined8 *)(lStack_218 + (long)puVar8 * 8),param_2,param_3);
        puVar8 = puVar8 + 1;
      } while (puVar4 != puVar8);
      puVar4 = (undefined1 *)puVar1;
      puVar3 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return dVar9;
  }
  ___stack_chk_fail();
  puVar4 = (undefined1 *)puVar1;
  if (puVar3 == (undefined8 *)0x1) {
    func_0x00010be38c00();
  }
  else {
    func_0x00010be38d60();
  }
  dVar10 = 0.0;
  if (-1 < (long)puVar4) {
    do {
      puVar8 = (undefined1 *)puVar1;
      func_0x00010c258040(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      func_0x00010c26f000(puVar2);
      dVar10 = dVar10 + dVar9;
      _objc_release(puVar2);
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined1 *)0xffffffffffffffff);
  }
  if (dVar10 <= 0.0) {
    dVar10 = 0.1;
  }
  return dVar10;
}



/* Entry: 1071df248; end: 1071df33f; -[FriendStories _removeIndividualStoriesObservers:] */

double FUN_1071df248(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar1 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar5 = 0.0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c12d140(*(undefined8 *)(lStack_108 + lVar4 * 8),param_2,param_1);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = param_3;
      puVar1 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return dVar5;
  }
  ___stack_chk_fail();
  lVar2 = param_3;
  if (puVar1 == (undefined8 *)0x1) {
    func_0x00010be38c00();
  }
  else {
    func_0x00010be38d60();
  }
  dVar6 = 0.0;
  if (-1 < lVar2) {
    do {
      lVar3 = param_3;
      func_0x00010c258040(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010c26f000(lVar4);
      dVar6 = dVar6 + dVar5;
      _objc_release(lVar4);
      lVar2 = lVar2 + -1;
    } while (lVar2 != -1);
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.1;
  }
  return dVar6;
}



/* Entry: 1071df340; end: 1071df3eb; -[FriendStories totalTimeForViewingType:] */

double FUN_1071df340(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = param_2;
  if (param_4 == 1) {
    func_0x00010be38c00();
  }
  else {
    func_0x00010be38d60();
  }
  dVar4 = 0.0;
  if (-1 < lVar3) {
    do {
      lVar1 = param_2;
      func_0x00010c258040(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c26f000(lVar2);
      dVar4 = dVar4 + param_1;
      _objc_release(lVar2);
      lVar3 = lVar3 + -1;
    } while (lVar3 != -1);
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.1;
  }
  return dVar4;
}



/* Entry: 1071df3ec; end: 1071df4cf; -[FriendStories totalTimeLeftForViewingType:] */

double FUN_1071df3ec(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = param_2;
  if (param_4 == 1) {
    func_0x00010be38c00();
  }
  else {
    func_0x00010be38d60();
  }
  dVar6 = 0.0;
  if (-1 < (long)uVar2) {
    do {
      uVar3 = param_2;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_retain(uVar4);
      if (param_4 == 2) {
LAB_1071df47c:
        func_0x00010c26f000(uVar4);
        dVar5 = param_1;
      }
      else {
        uVar3 = uVar4;
        func_0x00010c29ea60();
        dVar5 = 0.0;
        if ((uVar3 & 1) == 0) goto LAB_1071df47c;
      }
      _objc_release(uVar4);
      dVar6 = dVar6 + dVar5;
      _objc_release(uVar4);
      bVar1 = 0 < (long)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.1;
  }
  return dVar6;
}



/* Entry: 1071df4d0; end: 1071df533; -[FriendStories observeValueForKeyPath:ofObject:change:context:] */

void FUN_1071df4d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  if ((param_4 == param_1) &&
     (func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e17458),
     (int)param_3 != 0)) {
    func_0x00010be27100(param_1,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1071df534; end: 1071df79f; -[FriendStories _handleChangetoStories:] */

void FUN_1071df534(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  iVar7 = (int)uVar2;
  if (iVar7 == 3) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010be8c500(param_1);
  }
  else if (iVar7 == 2) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010bdc71c0(param_1);
  }
  else {
    if (iVar7 != 1) goto LAB_1071df774;
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar2 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069840(puVar5);
    func_0x00010be8c500(param_1);
    func_0x00010bdc71c0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_1071df774:
  func_0x00010c138c00(param_1);
  func_0x00010c139040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071df7a0; end: 1071df84f; -[FriendStories resetMostRecentStoryInfo] */

void FUN_1071df7a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c258040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c90e0(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1071df850; end: 1071dfa27; -[FriendStories fetchMediaForBatch:viewingType:startAtIndex:loadContext:userInitiated:viewLocation:source:] */

void FUN_1071df850(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_9);
  uVar6 = param_1;
  func_0x00010c07dc00();
  if ((uVar6 & 1) == 0) {
    func_0x00010c07b520(param_1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (-1 < (long)param_5)) {
    uVar6 = 1;
    do {
      uVar5 = param_1;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar3;
      func_0x00010c0c3fe0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be620();
      _objc_release(uVar5);
      func_0x00010bdc9660(param_1);
      func_0x00010bfaa8e0(param_1);
      uVar5 = uVar3;
      func_0x00010c0c6960();
      if ((uVar5 == 1) || (uVar5 = uVar3, func_0x00010c0c6960(), uVar5 == 3)) {
        func_0x00010befa120(puVar2);
      }
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
      uVar5 = param_5;
      if (uVar4 < param_5) {
        uVar5 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf529e0();
      }
      _objc_release(uVar3);
      param_5 = uVar5 - 1;
    } while ((0 < (long)uVar5) && (bVar1 = uVar6 < param_3, uVar6 = uVar6 + 1, bVar1));
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1071dfa28;
  puStack_78 = &UNK_110848c48;
  uStack_70 = param_1;
  uStack_68 = param_6;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(puVar2);
  _objc_release(param_9);
  return;
}



/* Entry: 1071dfa28; end: 1071dfac7;  */

void FUN_1071dfa28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c138c00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c282e40();
  if (lVar1 == -1) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c282d40();
    if (lVar1 != 1) {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c282d40();
      if (lVar1 != 3) goto LAB_1071dfa7c;
    }
    func_0x00010c21c100(*(undefined8 *)(param_1 + 0x20));
  }
LAB_1071dfa7c:
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c09b200();
  if (lVar1 != -1) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf17240();
  if (lVar1 != 1) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf17240();
    if (lVar1 != 3) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1be630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLoadContext__11264d3b0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071dfac8; end: 1071dfadb; -[FriendStories _adjustedUserInitiatedWithCurrentUserInitiated:loadStartIndex:loadCurrentIndex:loadContext:] */

uint FUN_1071dfac8(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 == param_5);
  if (param_6 != 2) {
    uVar1 = param_3;
  }
  return uVar1;
}



/* Entry: 1071dfadc; end: 1071dfc37; -[FriendStories _indexOfFirstUnviewedStory] */

long FUN_1071dfadc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  lVar2 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  lVar4 = lVar4 + -1;
  _objc_release(lVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_110;
    lVar5 = lVar4;
    do {
      lVar7 = 0;
      lVar4 = lVar5 - lVar3;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        iVar1 = (int)*(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010c29ea60();
        if (iVar1 == 0) {
          lVar4 = lVar5 - lVar7;
          goto LAB_1071dfbf4;
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
      lVar5 = lVar4;
    } while (lVar3 != 0);
  }
LAB_1071dfbf4:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    return lVar4 + -1;
  }
  return lVar4;
}



/* Entry: 1071dfc38; end: 1071dfc73; -[FriendStories _indexOfViewingStory] */

long FUN_1071dfc38(long param_1)

{
  long lVar1;
  
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 + -1;
}



/* Entry: 1071dfc74; end: 1071dfc97; -[FriendStories numberOfSnapsRemainingForViewingType:] */

long FUN_1071dfc74(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010be38c00();
    return param_1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be38d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__indexOfViewingStory_11256bcf8);
  return param_1;
}



/* Entry: 1071dfc98; end: 1071dfd37; -[FriendStories firstStoryToPlayForViewingType:] */

void FUN_1071dfc98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 - 2U < 2) {
    func_0x00010c258040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_3 != 1) || (lVar1 = param_1, func_0x00010be38c00(), lVar1 < 0)) {
      lVar1 = 0;
      goto LAB_1071dfd28;
    }
    func_0x00010c258040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
LAB_1071dfd28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1071dfd38; end: 1071dfec7; -[FriendStories fetchStory:userInitiated:completion:source:] */

void FUN_1071dfd38(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c0c6960();
  if (lVar1 != 2) {
    puVar2 = PTR_PTR_1126b7f68;
    func_0x00010c0f0de0(PTR_PTR_1126b7f68,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfb91a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126b7f68;
    puVar4 = puVar2;
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfb91a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1350a0(puVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (puVar3 != (undefined *)0x0) {
        func_0x00010bf09f60(puVar2,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126b7f68;
    func_0x00010c135100(PTR_PTR_1126b7f68,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf09f80(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebb80(param_3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010bfaa980(param_3,param_2,param_4,param_5,param_6);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071dfec8; end: 1071dff07; -[FriendStories hasStories] */

bool FUN_1071dfec8(long param_1)

{
  long lVar1;
  
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1071dff08; end: 1071e0007; -[FriendStories hasUnviewedStories] */

undefined1 * FUN_1071dff08(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined1 *puStack_298;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  puVar11 = (undefined1 *)0x0;
  if (lVar14 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        iVar1 = (int)*(undefined8 *)(lVar12 * 8);
        func_0x00010c29ea60();
        if (iVar1 == 0) {
          puVar11 = (undefined1 *)0x1;
          goto LAB_1071dffc8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar14 != lVar12);
      lVar14 = param_1;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
    puVar11 = (undefined1 *)0x0;
  }
LAB_1071dffc8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_1e8;
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar14 = *plStack_220;
    do {
      lVar10 = 0;
      do {
        if (*plStack_220 != lVar14) {
          _objc_enumerationMutation(param_1);
        }
        uVar13 = *(ulong *)(lStack_228 + lVar10 * 8);
        func_0x00010c29ea60();
        if ((uVar13 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar11 = auStack_1e8;
      lVar3 = param_1;
      puVar9 = &uStack_230;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    _objc_retain(puVar11);
    puVar4 = puVar2;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    func_0x00010bf529e0();
    if (puVar15 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        puVar6 = puVar5;
        func_0x00010c0dfd40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = (undefined1 *)puVar9;
        func_0x00010bf4b900();
        _objc_release(puVar7);
        if ((int)puVar8 != 0) {
          func_0x00010bef92c0(puVar4);
        }
        _objc_release(puVar6);
        puVar15 = puVar15 + 1;
        puVar6 = puVar5;
        func_0x00010bf529e0();
      } while (puVar15 < puVar6);
    }
    func_0x00010c12d480(puVar5);
    puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2c0 = 0xc2000000;
    pcStack_2b8 = FUN_1071e02f0;
    puStack_2b0 = &UNK_11084a9e8;
    puStack_2a8 = puVar2;
    puStack_2a0 = puVar5;
    puStack_298 = puVar11;
    _objc_retain(puVar11);
    _objc_retain(puVar5);
    func_0x0001000d76cc("APPSTORE",&puStack_2c8);
    _objc_release(puStack_298);
    _objc_release(puStack_2a0);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar9);
    return (undefined1 *)puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 1071e0008; end: 1071e014b; -[FriendStories unviewedStories] */

void FUN_1071e0008(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
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
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_d8;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        uVar10 = *(ulong *)(lStack_118 + lVar12 * 8);
        func_0x00010c29ea60();
        if ((uVar10 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar9 = auStack_d8;
      lVar2 = param_1;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar3 = puVar1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010bf529e0();
  if (puVar13 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      puVar5 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined1 *)puVar8;
      func_0x00010bf4b900();
      _objc_release(puVar6);
      if ((int)puVar7 != 0) {
        func_0x00010bef92c0(puVar3);
      }
      _objc_release(puVar5);
      puVar13 = puVar13 + 1;
      puVar5 = puVar4;
      func_0x00010bf529e0();
    } while (puVar13 < puVar5);
  }
  func_0x00010c12d480(puVar4);
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1071e02f0;
  puStack_1a0 = &UNK_11084a9e8;
  puStack_198 = puVar1;
  puStack_190 = puVar4;
  puStack_188 = puVar9;
  _objc_retain(puVar9);
  _objc_retain(puVar4);
  func_0x0001000d76cc("APPSTORE",&puStack_1b8);
  _objc_release(puStack_188);
  _objc_release(puStack_190);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar8);
  return;
}



/* Entry: 1071e014c; end: 1071e02ef; -[FriendStories removeStoriesWithIds:completion:] */

void FUN_1071e014c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0d3c80();
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar3 = uVar1;
      func_0x00010c0dfd40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bf4b900();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        func_0x00010bef92c0(puVar2);
      }
      _objc_release(uVar3);
      uVar6 = uVar6 + 1;
      uVar3 = uVar1;
      func_0x00010bf529e0();
    } while (uVar6 < uVar3);
  }
  func_0x00010c12d480(uVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1071e02f0;
  puStack_80 = &UNK_11084a9e8;
  uStack_78 = param_1;
  uStack_70 = uVar1;
  uStack_68 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1071e02f0; end: 1071e032b;  */

void FUN_1071e02f0(long param_1,undefined8 param_2)

{
  func_0x00010c20c480(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071e031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1071e032c; end: 1071e066f; -[FriendStories resetFriendsStoryStateUseLatestConfig:] */

undefined * FUN_1071e032c(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1;
  func_0x00010c0def60();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar13 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar11;
  func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar13 == 0) {
    uVar12 = 2;
    uVar6 = param_3;
  }
  else {
    bVar1 = 0;
    lVar8 = 0;
    lVar15 = *plStack_120;
    uVar12 = 2;
    do {
      lVar9 = 0;
      lVar5 = lVar10 - lVar8;
      lVar8 = lVar13 + lVar8;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar11);
        }
        if (lVar5 == lVar9) {
LAB_1071e04c4:
          uVar6 = param_3 & 0xffffffff;
          goto LAB_1071e04c8;
        }
        lVar14 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar14;
        func_0x00010c0c6960();
        if (lVar3 == 0) {
          uVar12 = 0;
          goto LAB_1071e04c4;
        }
        lVar3 = lVar14;
        func_0x00010c0c6960();
        bVar1 = lVar3 == 1 | bVar1;
        if (lVar3 == 1) {
          uVar12 = 1;
        }
        lVar3 = lVar14;
        func_0x00010c0c6960();
        if (!(bool)(lVar3 != 3 | bVar1)) {
          uVar12 = 3;
        }
        lVar3 = lVar14;
        func_0x00010c0c6960();
        if (lVar3 == 2) {
          func_0x00010befa120(puVar7,param_2,lVar14);
        }
        lVar9 = lVar9 + 1;
      } while (lVar13 != lVar9);
      lVar13 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_f0,0x10);
      uVar6 = param_3 & 0xffffffff;
    } while (lVar13 != 0);
  }
LAB_1071e04c8:
  _objc_release(lVar11);
  func_0x00010c16f900(param_1,param_2,uVar12);
  lVar10 = param_1;
  func_0x00010bf17240();
  if (lVar10 == 0) {
    func_0x00010c1be620(param_1,param_2,0xffffffffffffffff);
  }
  lVar10 = param_1;
  func_0x00010c0def80(param_1,param_2,uVar6);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d40(param_1);
  lVar13 = param_1;
  func_0x00010be38c00();
  if (lVar13 < 0) {
    lVar11 = 2;
  }
  else {
    bVar2 = false;
    lVar11 = 2;
    do {
      lVar8 = param_1;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      if (lVar10 == 0) {
LAB_1071e05f8:
        _objc_release(lVar15);
        break;
      }
      lVar8 = lVar15;
      func_0x00010c0c6960();
      if (lVar8 == 0) {
        lVar11 = 0;
        goto LAB_1071e05f8;
      }
      lVar8 = lVar15;
      func_0x00010c0c6960();
      if (lVar8 == 1) {
        lVar11 = 1;
      }
      bVar2 = (bool)(lVar8 == 1 | bVar2);
      lVar8 = lVar15;
      func_0x00010c0c6960();
      if (lVar8 == 3 && !bVar2) {
        lVar11 = 3;
      }
      lVar8 = lVar15;
      func_0x00010c0c6960();
      if (lVar8 == 2) {
        func_0x00010befa120(puVar4,param_2,lVar15);
      }
      _objc_release(lVar15);
      lVar13 = lVar13 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar13 != -1);
  }
  func_0x00010c21c0c0(param_1);
  lVar10 = param_1;
  func_0x00010c282d40();
  if (lVar10 == 0) {
    lVar11 = -1;
    func_0x00010c21c100(param_1);
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(lVar11);
    lVar10 = lVar11;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010c0ccea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar10);
    if (((lVar13 == 0) && (puVar4 = puVar7, func_0x00010c07dc00(), ((ulong)puVar4 & 1) == 0)) &&
       (func_0x00010c077600(), ((ulong)puVar7 & 1) == 0)) {
      lVar10 = lVar11;
      func_0x00010bfe32e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)(ulong)(lVar10 != 0);
      _objc_release();
    }
    else {
      puVar7 = (undefined *)0x1;
    }
    _objc_release(lVar11);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 1071e0670; end: 1071e071b; -[FriendStories _shouldDisableSwipeUpToChatOnStory:] */

bool FUN_1071e0670(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ccea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (((lVar3 == 0) && (uVar4 = param_1, func_0x00010c07dc00(), (uVar4 & 1) == 0)) &&
     (func_0x00010c077600(), (param_1 & 1) == 0)) {
    lVar2 = param_3;
    func_0x00010bfe32e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1071e071c; end: 1071e0813; -[FriendStories replyEnabledForStory:] */

ulong FUN_1071e071c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb31c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfb91a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x000108f226fc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar1;
      func_0x00010c242760();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c08fa60();
      _objc_release(uVar4);
      if (uVar2 == 0) {
        uVar4 = uVar1;
        func_0x00010901c618(uVar1);
        uVar4 = (ulong)((uint)uVar4 ^ 1);
      }
      else {
        uVar3 = param_3;
        func_0x00010bf4e840(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x000107d72f58(uVar1,uVar3);
        _objc_release(uVar3);
      }
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1071e0814; end: 1071e086f; -[FriendStories isFullyViewed] */

bool FUN_1071e0814(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c282ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdcc20();
  if ((int)param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf529e0(lVar2);
    bVar1 = lVar3 == 0;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1071e0870; end: 1071e087b; -[FriendStories numberOfLoadedStoryMediaNeededForLoadedStateUseLatestConfig:] */

void FUN_1071e0870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0def50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_numberOfLoadedSnapsNeededBeforeV_1126155e8,2,param_3);
  return;
}



/* Entry: 1071e087c; end: 1071e0887; -[FriendStories numberOfLoadedStoryMediaNeededForUnviewedLoadedStateUseLatestConfig:] */

void FUN_1071e087c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0def50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_numberOfLoadedSnapsNeededBeforeV_1126155e8,1,param_3);
  return;
}



/* Entry: 1071e0888; end: 1071e08f3; -[FriendStories numberOfLoadedSnapsNeededBeforeViewingForViewingType:useLatestConfig:] */

ulong FUN_1071e0888(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07dc00();
  if ((uVar1 & 1) == 0) {
    if (param_4 != 0) {
      func_0x00010c1cf420(param_1,param_2,2);
      func_0x00010c211e80(param_1,param_2,2);
    }
    uVar1 = param_1;
    func_0x00010c0de6e0();
    func_0x00010c269540();
    if (param_1 <= uVar1 - 1) {
      uVar1 = param_1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1071e08f4; end: 1071e096f; -[FriendStories story:didChangeMediaState:] */

void FUN_1071e08f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c138c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_resetFriendsStoryStateUseLatestC_11262bd20,1);
    return;
  }
  return;
}



/* Entry: 1071e0970; end: 1071e09a7; -[FriendStories enableCriticalModeWhenLoading] */

ulong FUN_1071e0970(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07dc00();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c077610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMapStories_1125fb790);
  return param_1;
}



/* Entry: 1071e09a8; end: 1071e0a5f; -[FriendStories isEqual:] */

ulong FUN_1071e09a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar1 & 1) != 0) {
        func_0x00010c259cc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c259cc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c0720c0(param_1);
        _objc_release(uVar1);
        _objc_release(param_1);
        goto LAB_1071e0a44;
      }
    }
    uVar2 = 0;
  }
LAB_1071e0a44:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1071e0a60; end: 1071e0b47; -[FriendStories compare:] */

long FUN_1071e0a60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bf85d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1071e0b08;
    }
  }
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_1071e0b08:
  lVar1 = param_1;
  func_0x00010c09e440(param_1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1071e0b48; end: 1071e0b83; -[FriendStories hash] */

undefined8 FUN_1071e0b48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071e0b84; end: 1071e0dc7; -[FriendStories storyTypeSpecific] */

undefined8 FUN_1071e0b84(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010bfdcc20();
  if ((int)uVar1 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = param_1;
  func_0x00010bf38d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
LAB_1071e0cb8:
    uVar1 = param_1;
    func_0x00010c077600();
    if ((uVar1 & 1) != 0) {
      return 0xc;
    }
    uVar1 = param_1;
    func_0x00010c06d980();
    if ((uVar1 & 1) != 0) {
      return 0x17;
    }
    uVar1 = param_1;
    func_0x00010c074d80();
    if ((uVar1 & 1) != 0) {
      return 0x18;
    }
    uVar1 = param_1;
    func_0x00010c07dc00();
    if ((uVar1 & 1) != 0) {
      func_0x00010c076da0();
      if ((int)param_1 != 0) {
        return 5;
      }
      return 6;
    }
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010c0d7240();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010c07f180();
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar1;
        func_0x00010c078fe0();
        uVar5 = 3;
        if ((int)uVar2 == 0) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 10;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010bf38d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar2 = uVar1;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52680();
    _objc_release(uVar2);
    if (uVar3 == 0xe) {
      _objc_release();
      _objc_release(uVar1);
      return 0x13;
    }
    uVar2 = uVar1;
    func_0x00010c25b720();
    if (uVar2 == 1) {
      uVar5 = 0xb;
    }
    else if (uVar2 == 0xf) {
      uVar5 = 1;
    }
    else {
      if (uVar2 != 3) {
        _objc_release(uVar1);
        _objc_release(uVar1);
        goto LAB_1071e0cb8;
      }
      uVar2 = uVar1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010bf24ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c08fa60();
      _objc_release(uVar2);
      if (uVar4 == 0) {
        uVar2 = uVar3;
        func_0x00010c078f60();
        uVar5 = 3;
        if ((int)uVar2 == 0) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0x17;
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1071e0dc8; end: 1071e0fb7; -[FriendStories storyType] */

undefined8 FUN_1071e0dc8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf38d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010bfdcc20();
    if ((int)uVar1 == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar1 = param_1;
      func_0x00010c07dc00();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c077600();
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c074d80();
          if ((uVar1 & 1) == 0) {
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            lStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            plStack_100 = (long *)0x0;
            func_0x00010c258040();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = param_1;
            func_0x00010bf52a60();
            if (uVar1 != 0) {
              lVar3 = *plStack_100;
              do {
                uVar4 = 0;
                do {
                  if (*plStack_100 != lVar3) {
                    _objc_enumerationMutation(param_1);
                  }
                  func_0x00010c074980(*(undefined8 *)(lStack_108 + uVar4 * 8));
                  uVar4 = uVar4 + 1;
                } while (uVar1 != uVar4);
                uVar1 = param_1;
                func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
              } while (uVar1 != 0);
            }
            _objc_release();
            uVar2 = 2;
            uVar1 = param_1;
          }
          else {
            uVar2 = 0xc;
          }
        }
        else {
          uVar2 = 5;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    func_0x00010bf38d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar1 = param_1;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf52680();
    _objc_release(uVar1);
    uVar2 = 0xffffffffffffffff;
    if (uVar4 == 0xe) {
      uVar2 = 1;
    }
    else {
      uVar1 = param_1;
      func_0x00010c25b720();
      if ((uVar1 < 0x10) && ((0xe82fU >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
        uVar2 = *(undefined8 *)(&UNK_10de20150 + uVar1 * 8);
      }
    }
    _objc_release(param_1);
    _objc_release();
    uVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    return *(undefined8 *)(uVar1 + 0x10);
  }
  return uVar2;
}



/* Entry: 1071e0fb8; end: 1071e0fbf; -[FriendStories batchState] */

undefined8 FUN_1071e0fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071e0fc0; end: 1071e0fc7; -[FriendStories setBatchState:] */

void FUN_1071e0fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1071e0fc8; end: 1071e0fd3; -[FriendStories isLocal] */

byte FUN_1071e0fc8(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 1071e0fd4; end: 1071e0fdb; -[FriendStories setLocal:] */

void FUN_1071e0fd4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1071e0fdc; end: 1071e0fe7; -[FriendStories isShared] */

byte FUN_1071e0fdc(long param_1)

{
  return *(byte *)(param_1 + 10) & 1;
}



/* Entry: 1071e0fe8; end: 1071e0fef; -[FriendStories setShared:] */

void FUN_1071e0fe8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1071e0ff0; end: 1071e0ffb; -[FriendStories mostRecentStoryTimestamp] */

void FUN_1071e0ff0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1071e0ffc; end: 1071e1003; -[FriendStories setMostRecentStoryTimestamp:] */

void FUN_1071e0ffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071e1004; end: 1071e100b; -[FriendStories stories] */

undefined8 FUN_1071e1004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1071e100c; end: 1071e1017; -[FriendStories displayName] */

void FUN_1071e100c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1071e1018; end: 1071e101f; -[FriendStories setDisplayName:] */

void FUN_1071e1018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071e1020; end: 1071e1027; -[FriendStories loadContext] */

undefined8 FUN_1071e1020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1071e1028; end: 1071e102f; -[FriendStories setLoadContext:] */

void FUN_1071e1028(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1071e1030; end: 1071e1037; -[FriendStories unviewedLoadContext] */

undefined8 FUN_1071e1030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1071e1038; end: 1071e103f; -[FriendStories setUnviewedLoadContext:] */

void FUN_1071e1038(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1071e1040; end: 1071e104b; -[FriendStories mapViewingInfo] */

void FUN_1071e1040(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 1071e104c; end: 1071e1053; -[FriendStories setMapViewingInfo:] */

void FUN_1071e104c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071e1054; end: 1071e105f; -[FriendStories officialTrackingId] */

void FUN_1071e1054(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 1071e1060; end: 1071e1067; -[FriendStories setOfficialTrackingId:] */

void FUN_1071e1060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071e1068; end: 1071e1073; -[FriendStories cheetahStory] */

void FUN_1071e1068(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 1071e1074; end: 1071e107b; -[FriendStories setCheetahStory:] */

void FUN_1071e1074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071e107c; end: 1071e1083; -[FriendStories discoverFeedItemPos] */

undefined8 FUN_1071e107c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1071e1084; end: 1071e108b; -[FriendStories setDiscoverFeedItemPos:] */

void FUN_1071e1084(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1071e108c; end: 1071e1097; -[FriendStories isBusinessStories] */

byte FUN_1071e108c(long param_1)

{
  return *(byte *)(param_1 + 0xb) & 1;
}



/* Entry: 1071e1098; end: 1071e109f; -[FriendStories setIsBusinessStories:] */

void FUN_1071e1098(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 1071e10a0; end: 1071e10ab; -[FriendStories isHighlightStories] */

byte FUN_1071e10a0(long param_1)

{
  return *(byte *)(param_1 + 0xc) & 1;
}



/* Entry: 1071e10ac; end: 1071e10b3; -[FriendStories setIsHighlightStories:] */

void FUN_1071e10ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 1071e10b4; end: 1071e10bf; -[FriendStories trackingId] */

void FUN_1071e10b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 1071e10c0; end: 1071e10cb; -[FriendStories isPromotedStories] */

byte FUN_1071e10c0(long param_1)

{
  return *(byte *)(param_1 + 0xd) & 1;
}



/* Entry: 1071e10cc; end: 1071e10d3; -[FriendStories setIsPromotedStories:] */

void FUN_1071e10cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 1071e10d4; end: 1071e10db; -[FriendStories version] */

undefined8 FUN_1071e10d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1071e10dc; end: 1071e10e3; -[FriendStories setVersion:] */

void FUN_1071e10dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 1071e10e4; end: 1071e10ef; -[FriendStories atomicUsername] */

void FUN_1071e10e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 1071e10f0; end: 1071e10f7; -[FriendStories setAtomicUsername:] */

void FUN_1071e10f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071e10f8; end: 1071e10ff; -[FriendStories unviewedBatchState] */

undefined8 FUN_1071e10f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1071e1100; end: 1071e1107; -[FriendStories setUnviewedBatchState:] */

void FUN_1071e1100(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 1071e1108; end: 1071e110f; -[FriendStories numSnapsToLoadBeforeAllowViewing] */

undefined8 FUN_1071e1108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1071e1110; end: 1071e1117; -[FriendStories setNumSnapsToLoadBeforeAllowViewing:] */

void FUN_1071e1110(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1071e1118; end: 1071e111f; -[FriendStories tapToLoadCount] */

undefined8 FUN_1071e1118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1071e1120; end: 1071e1127; -[FriendStories setTapToLoadCount:] */

void FUN_1071e1120(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 1071e1128; end: 1071e119f; -[FriendStories .cxx_destruct] */

void FUN_1071e1128(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1071e11a0; end: 1071e1227;  */

void FUN_1071e11a0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    func_0x00010c25b720();
    puVar1 = PTR_PTR_1126b4d28;
    _objc_alloc(PTR_PTR_1126b4d28);
    func_0x00010c04dcc0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071e1228; end: 1071e174b;  */

void FUN_1071e1228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  puVar1 = PTR_PTR_1126d5108;
  _objc_retain();
  _objc_retain(in_stack_00000120);
  _objc_retain(in_stack_00000118);
  _objc_retain(in_stack_00000110);
  _objc_retain(in_stack_00000108);
  _objc_retain(in_stack_00000100);
  _objc_retain(in_stack_000000f8);
  _objc_retain(in_stack_000000f0);
  _objc_retain(in_stack_000000e8);
  _objc_retain(in_stack_000000d8);
  _objc_retain(in_stack_000000d0);
  _objc_retain(in_stack_000000c8);
  _objc_retain(in_stack_000000c0);
  _objc_retain(in_stack_000000b8);
  _objc_retain(in_stack_000000b0);
  _objc_retain(in_stack_000000a8);
  _objc_retain(in_stack_000000a0);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000068);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c05e960();
  _objc_release(in_stack_00000128);
  _objc_release(in_stack_00000120);
  _objc_release(in_stack_00000118);
  _objc_release(in_stack_00000110);
  _objc_release(in_stack_00000108);
  _objc_release(in_stack_00000100);
  _objc_release(in_stack_000000f8);
  _objc_release(in_stack_000000f0);
  _objc_release(in_stack_000000e8);
  _objc_release(in_stack_000000d8);
  _objc_release(in_stack_000000d0);
  _objc_release(in_stack_000000c8);
  _objc_release(in_stack_000000c0);
  _objc_release(in_stack_000000b8);
  _objc_release(in_stack_000000b0);
  _objc_release(in_stack_000000a8);
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
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
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071e174c; end: 1071e17db; -[StoryStoryViewSession init] */

undefined1 * FUN_1071e174c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8bf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c214bc0(0,puVar1);
    func_0x00010c218aa0(0,puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c16e9c0(puVar1);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20dfe0(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1071e17dc; end: 1071e17e3; -[StoryStoryViewSession posterId] */

undefined8 FUN_1071e17dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071e17e4; end: 1071e1813; -[StoryStoryViewSession setPosterId:] */

void FUN_1071e17e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1071e1814; end: 1071e181b; -[StoryStoryViewSession viewLocation] */

undefined8 FUN_1071e1814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1071e181c; end: 1071e1823; -[StoryStoryViewSession setViewLocation:] */

void FUN_1071e181c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1071e1824; end: 1071e182b; -[StoryStoryViewSession viewingType] */

undefined8 FUN_1071e1824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1071e182c; end: 1071e1833; -[StoryStoryViewSession setViewingType:] */

void FUN_1071e182c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1071e1834; end: 1071e183b; -[StoryStoryViewSession time] */

undefined8 FUN_1071e1834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1071e183c; end: 1071e1843; -[StoryStoryViewSession setTime:] */

void FUN_1071e183c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 1071e1844; end: 1071e184b; -[StoryStoryViewSession totalTime] */

undefined8 FUN_1071e1844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1071e184c; end: 1071e1853; -[StoryStoryViewSession setTotalTime:] */

void FUN_1071e184c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 1071e1854; end: 1071e185b; -[StoryStoryViewSession exitEvent] */

undefined8 FUN_1071e1854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1071e185c; end: 1071e1863; -[StoryStoryViewSession setExitEvent:] */

void FUN_1071e185c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1071e1864; end: 1071e186b; -[StoryStoryViewSession storyType] */

undefined8 FUN_1071e1864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1071e186c; end: 1071e1873; -[StoryStoryViewSession setStoryType:] */

void FUN_1071e186c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1071e1874; end: 1071e187b; -[StoryStoryViewSession sharedLocalStory] */

undefined1 FUN_1071e1874(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1071e187c; end: 1071e1883; -[StoryStoryViewSession setSharedLocalStory:] */

void FUN_1071e187c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1071e1884; end: 1071e188b; -[StoryStoryViewSession backgrounded] */

undefined1 FUN_1071e1884(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1071e188c; end: 1071e1893; -[StoryStoryViewSession setBackgrounded:] */

void FUN_1071e188c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1071e1894; end: 1071e189b; -[StoryStoryViewSession liveStoriesAvailableCount] */

undefined8 FUN_1071e1894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1071e189c; end: 1071e18a3; -[StoryStoryViewSession setLiveStoriesAvailableCount:] */

void FUN_1071e189c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}


