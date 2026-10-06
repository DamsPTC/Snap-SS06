/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b69a9b0; end: 10b69aaa3; -[SCCoreDataObjectContext immutableObjectForClass:managedObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69a9b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e0160(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279177c);
  func_0x00010bf4b900(uVar2,param_2,uVar1);
  if ((int)uVar2 == 0) {
    lVar4 = (long)_DAT_112791778;
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010c0dff20(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00010c0f4260(param_3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(*(undefined8 *)(param_1 + lVar4),param_2,param_3,uVar1);
      lVar3 = param_3;
    }
    _objc_retain(lVar3);
    _objc_release(lVar3);
  }
  else {
    func_0x00010c0f4260(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b69aaa4; end: 10b69aaeb; -[SCCoreDataObjectContext _invalidateImmutableObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69aaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791778);
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b69aaec; end: 10b69afcf; -[SCCoreDataObjectContext _managedObjectContextObjectsDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69aaec(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puStack_380;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_1f0 [384];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = *(undefined8 **)(param_1 + _DAT_112791770);
  _objc_release();
  if (puVar1 == puVar15) {
    puVar16 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar16;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    _objc_retain(puVar1);
    puStack_380 = puVar1;
    func_0x00010bf52a60();
    if (puStack_380 != (undefined8 *)0x0) {
      lVar14 = *plStack_2a0;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_2a0 != lVar14) {
            _objc_enumerationMutation(puVar1);
          }
          uVar19 = *(undefined8 *)(lStack_2a8 + (long)puVar16 * 8);
          func_0x00010be3d960(param_1);
          lVar20 = *(long *)(param_1 + _DAT_112791774);
          uVar22 = uVar19;
          func_0x00010c0e0160(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar22);
          puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x00010bf354c0();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar19;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar22);
          _objc_release(uVar19);
          if (lVar20 != 0) {
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            lStack_2e8 = 0;
            uStack_2f0 = 0;
            uStack_2d8 = 0;
            plStack_2e0 = (long *)0x0;
            lVar3 = lVar20;
            func_0x00010c0dfe00();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf52a60();
            if (lVar4 != 0) {
              lVar18 = *plStack_2e0;
              do {
                lVar21 = 0;
                do {
                  if (*plStack_2e0 != lVar18) {
                    _objc_enumerationMutation(lVar3);
                  }
                  uVar22 = *(undefined8 *)(lStack_2e8 + lVar21 * 8);
                  func_0x00010c0dfda0(uVar22);
                  lVar5 = param_1;
                  func_0x00010bfe9d60(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0f8000(uVar22);
                  _objc_release(lVar5);
                  lVar21 = lVar21 + 1;
                } while (lVar4 != lVar21);
                lVar4 = lVar3;
                func_0x00010bf52a60();
              } while (lVar4 != 0);
            }
            _objc_release(lVar3);
          }
          _objc_release(puVar2);
          _objc_release(lVar20);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar16 != puStack_380);
        puStack_380 = puVar1;
        func_0x00010bf52a60();
      } while (puStack_380 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    puVar16 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar16;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    _objc_retain(puVar15);
    puVar16 = &uStack_330;
    param_4 = auStack_1f0;
    puVar6 = puVar15;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar14 = *plStack_320;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_320 != lVar14) {
            _objc_enumerationMutation(puVar15);
          }
          uVar22 = *(undefined8 *)(lStack_328 + (long)puVar16 * 8);
          func_0x00010be3d960(param_1);
          lVar20 = *(long *)(param_1 + _DAT_112791774);
          func_0x00010c0e0160();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar22);
          if (lVar20 != 0) {
            lVar18 = lVar20;
            func_0x00010c0dfe00();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar18;
            func_0x00010bf52a60();
            lVar4 = lRam0000000000000000;
            while (lVar3 != 0) {
              lVar21 = 0;
              do {
                if (lRam0000000000000000 != lVar4) {
                  _objc_enumerationMutation(lVar18);
                }
                func_0x00010c0f8000(*(undefined8 *)(lVar21 * 8));
                lVar21 = lVar21 + 1;
              } while (lVar3 != lVar21);
              lVar3 = lVar18;
              func_0x00010bf52a60();
            }
            _objc_release(lVar18);
          }
          _objc_release(lVar20);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar16 != puVar6);
        puVar16 = &uStack_330;
        param_4 = auStack_1f0;
        puVar6 = puVar15;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(puVar15);
    _objc_release(puVar15);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  _objc_retain(param_4);
  puVar1 = puVar16;
  func_0x00010bdc2cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar16;
  func_0x00010c0899c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  func_0x00010c25ce40(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar15;
  func_0x00010c25ce40(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25ce40(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_retain(puVar13);
  puVar2 = puVar13;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar13);
      }
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)((long)puVar17 * 8));
      puVar17 = puVar17 + 1;
    } while (puVar2 != puVar17);
    puVar2 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(puVar15);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be0ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b69afd0; end: 10b69b25f; -[SCCoreDataObjectContext _enumerateAllFilesMatchingPathComponent:executeBlock:] */

void FUN_10b69afd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bdc2cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0899c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c25ce40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c25ce40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c25ce40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_retain(puVar11);
  puVar12 = puVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar12 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar11);
      }
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)((long)puVar14 * 8));
      puVar14 = puVar14 + 1;
    } while (puVar12 != puVar14);
    puVar12 = puVar11;
    func_0x00010bf52a60();
  }
  _objc_release(puVar11);
  _objc_release(puVar11);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be0ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b69b260; end: 10b69b26b; -[SCCoreDataObjectContext _removePreviousFileAtURL:] */

void FUN_10b69b260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enumerateAllFilesMatchingPathCo_1125604a8,param_3,
             &PTR___NSConcreteGlobalBlock_110d58f30);
  return;
}



/* Entry: 10b69b26c; end: 10b69b2c3;  */

void FUN_10b69b26c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_2);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69b2c4; end: 10b69b2d7; -[SCCoreDataObjectContext _addSkipBackupAttributeToURL:] */

void FUN_10b69b2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enumerateAllFilesMatchingPathCo_1125604a8,param_3,
             &PTR___NSConcreteGlobalBlock_110d58f50);
  return;
}



/* Entry: 10b69b2d8; end: 10b69b3e7; -[SCCoreDataObjectContext handlePerformError:logContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b69b2d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791770);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8460(uVar2);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b69b3e8; end: 10b69b6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69b3e8(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_1 + 0x28);
  lVar11 = (long)_DAT_11279178c;
  uVar2 = *(uint *)(lVar12 + lVar11);
  uVar9 = (ulong)uVar2;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar5 = param_1;
    if (1 < (int)uVar2) {
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110ec2f38;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110dae878;
      puVar13 = *(undefined **)(param_1 + 0x30);
      puVar14 = puVar13;
      puStack_a0 = puVar3;
      if (puVar13 == (undefined *)0x0) {
        puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110f6dd98;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_98 = puVar14;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112791784));
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a0,&ppuStack_b8,
                          3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar13 == (undefined *)0x0) {
        _objc_release(puVar14);
      }
      _objc_release(puVar3);
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x28) + (long)_DAT_112791790);
      func_0x00010be51fa0();
      _objc_release();
      lVar12 = *(long *)(param_1 + 0x28);
    }
    *(undefined4 *)(lVar12 + lVar11) = 0;
  }
  else {
    if ((int)uVar2 < 5) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
      *(int *)(*(long *)(param_1 + 0x28) + lVar11) =
           *(int *)(*(long *)(param_1 + 0x28) + lVar11) + 1;
      lVar12 = (long)_DAT_112791784;
    }
    else {
      ppuStack_88 = &PTR____CFConstantStringClassReference_110ec2f38;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_80 = &PTR____CFConstantStringClassReference_110dae878;
      puVar14 = *(undefined **)(param_1 + 0x30);
      puVar3 = puVar14;
      puStack_70 = puVar5;
      if (puVar14 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f6dd98;
      lVar12 = (long)_DAT_112791784;
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_68 = puVar3;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar12));
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar13;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,
                          3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      if (puVar14 == (undefined *)0x0) {
        _objc_release(puVar3);
      }
      _objc_release(puVar5);
      func_0x00010be51fa0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),5,
                          puVar4);
      *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar11) = 0;
      uVar9 = *(ulong *)(param_1 + 0x20);
      func_0x00010bddd640(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar4);
    }
    *(int *)(*(long *)(param_1 + 0x28) + lVar12) = *(int *)(*(long *)(param_1 + 0x28) + lVar12) + 1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar12 = *(long *)(param_1 + 0x28);
    lVar11 = (long)_DAT_112791790;
    _objc_retain(uVar1);
    puVar5 = *(undefined **)(lVar12 + lVar11);
    *(undefined8 *)(lVar12 + lVar11) = uVar1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  uVar6 = uVar9;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar6);
  if (uVar7 != 0) {
    uVar6 = uVar9;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c067fc0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (uVar8 == 0xb) {
      piVar10 = (int *)&DAT_112791794;
    }
    else {
      if (uVar8 != 0xd) goto LAB_10b69b7a4;
      piVar10 = (int *)&DAT_112791798;
    }
    *(int *)(puVar5 + *piVar10) = *(int *)(puVar5 + *piVar10) + 1;
  }
LAB_10b69b7a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 10b69b6c8; end: 10b69b7bb; -[SCCoreDataObjectContext _checkCoreDataFetchError:] */

void FUN_10b69b6c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0xb) {
      piVar4 = (int *)&DAT_112791794;
    }
    else {
      if (lVar3 != 0xd) goto LAB_10b69b7a4;
      piVar4 = (int *)&DAT_112791798;
    }
    *(int *)(param_1 + *piVar4) = *(int *)(param_1 + *piVar4) + 1;
  }
LAB_10b69b7a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b69b7bc; end: 10b69b7d7; -[SCCoreDataObjectContext _totalCoreDataErrorCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b69b7bc(long param_1)

{
  return (long)*(int *)(param_1 + _DAT_112791794) + (long)*(int *)(param_1 + _DAT_112791798);
}



/* Entry: 10b69b7d8; end: 10b69b86f; -[SCCoreDataObjectContext diskUsageReport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69b7d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791760);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b69b870;
  puStack_40 = &UNK_1108480f8;
  _objc_retain();
  puStack_38 = puVar1;
  func_0x00010be0ac20(param_1,param_2,uVar2,&puStack_58);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b69b870; end: 10b69b993;  */

void FUN_10b69b870(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_2);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0e880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = puVar3;
  func_0x00010c0e00e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b4ca0();
  func_0x00010c0df720((double)(long)puVar5 / 1048576.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c0899c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b69b994; end: 10b69bb37; -[SCCoreDataObjectContext _logSaveSkippedNoStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69b994(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dae878;
  puVar1 = param_1;
  func_0x00010bf4eb80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110daf4d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar2;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_11279176c));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f6ddb8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar3;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined4 *)(param_1 + _DAT_112791794));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f6ddd8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar4;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined4 *)(param_1 + _DAT_112791798));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  lVar7 = 0;
  uVar8 = 9;
  puVar1 = puVar6;
  func_0x00010be51fa0(param_1,param_2,0,9,puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(puVar1);
  _objc_alloc(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c008340(puVar2,param_2,puVar3,4);
  _objc_release(puVar3);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar7;
    func_0x00010bf6e340(lVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0a4920(*(undefined8 *)(puVar6 + _DAT_112791764),param_2,uVar8,lVar9,puVar2);
  _objc_release(lVar9);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10b69bb38; end: 10b69bc2b; -[SCCoreDataObjectContext _logCoreDataObjectContextError:errorType:extraParamsDict:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69bb38(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_5,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c008340(puVar1,param_2,puVar2,4);
  _objc_release(puVar2);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0a4920(*(undefined8 *)(param_1 + _DAT_112791764),param_2,param_4,lVar3,puVar1);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b69bc2c; end: 10b69bd07; -[SCCoreDataObjectContext diskFileCreationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69bc2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_38;
  
  lVar4 = (long)_DAT_112791760;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0f5800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    puVar3 = puVar1;
    func_0x00010bf0e880(puVar1,param_2,uVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lStack_38;
    _objc_release(uVar2);
    puVar5 = (undefined *)0x0;
    if ((lVar4 == 0) && (puVar3 != (undefined *)0x0)) {
      puVar5 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,*(undefined8 *)PTR__NSFileCreationDate_110345410);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b69bd08; end: 10b69be3f; -[SCCoreDataObjectContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69bd08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112791780,0);
  _objc_storeStrong(param_1 + _DAT_112791790,0);
  _objc_storeStrong(param_1 + _DAT_112791768,0);
  _objc_storeStrong(param_1 + _DAT_112791764,0);
  _objc_storeStrong(param_1 + _DAT_112791760,0);
  _objc_storeStrong(param_1 + _DAT_11279175c,0);
  _objc_storeStrong(param_1 + _DAT_11279177c,0);
  _objc_storeStrong(param_1 + _DAT_112791778,0);
  _objc_storeStrong(param_1 + _DAT_112791774,0);
  _objc_storeStrong(param_1 + _DAT_112791770,0);
  _objc_storeStrong(param_1 + _DAT_112791758,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791754,0);
  return;
}



/* Entry: 10b69be40; end: 10b69be7b; -[SCCoreDataThreadHealthMonitor _willEnterForeground] */

void FUN_10b69be40(long param_1)

{
  if ((*(long *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x40) & 1) == 0)) {
    _dispatch_resume(*(undefined8 *)(param_1 + 0x38));
    *(byte *)(param_1 + 0x40) = 1;
  }
  return;
}



/* Entry: 10b69be7c; end: 10b69beb3; -[SCCoreDataThreadHealthMonitor _didEnterBackground] */

void FUN_10b69be7c(long param_1)

{
  if ((*(long *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
    _dispatch_suspend(*(undefined8 *)(param_1 + 0x38));
    *(byte *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10b69beb4; end: 10b69bfab; -[SCCoreDataThreadHealthMonitor startMonitoringIfNeeded] */

void FUN_10b69beb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create
            (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar2);
  _dispatch_source_set_timer(*(undefined8 *)(param_1 + 0x38),0,10000000000,0);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b69bfac;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _dispatch_source_set_event_handler(uVar2,&puStack_60);
  _dispatch_activate(*(undefined8 *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x40) = 1;
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b69bfac; end: 10b69c0cb;  */

void FUN_10b69bfac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x40) & 1) == 0) {
      *(undefined8 *)(lVar1 + 0x28) = 0xbff0000000000000;
    }
    else {
      _CACurrentMediaTime();
      if (*(double *)(lVar1 + 0x28) != -1.0) {
        func_0x00010bdcf560(lVar1);
      }
      lVar2 = lVar1 + 8;
      _objc_loadWeakRetained(lVar2);
      _objc_copyWeak(auStack_60,param_2 + 0x20);
      uStack_58 = param_1;
      func_0x00010c0f8520(lVar2);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_60);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b69c0cc; end: 10b69c0cf;  */

void FUN_10b69c0cc(void)

{
  return;
}



/* Entry: 10b69c0d0; end: 10b69c143;  */

void FUN_10b69c0d0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x40) & 1) != 0) {
      _CACurrentMediaTime();
      *(double *)(lVar1 + 0x28) = param_1;
      if (10.0 < param_1 - *(double *)(param_2 + 0x28)) {
        func_0x00010bdcf560(lVar1,param_3,&PTR____CFConstantStringClassReference_110f6de38);
        goto LAB_10b69c134;
      }
    }
    *(undefined8 *)(lVar1 + 0x28) = 0xbff0000000000000;
  }
LAB_10b69c134:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b69c144; end: 10b69c1f7; -[SCCoreDataThreadHealthMonitor _assertAndLogWithMessage:] */

void FUN_10b69c144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010b7ea5c4();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar3);
  _objc_release(puVar2);
  func_0x00010c0a4920(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69c1f8; end: 10b69c267; -[SCCoreDataThreadHealthMonitor dealloc] */

void FUN_10b69c1f8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      _dispatch_resume(*(undefined8 *)(param_1 + 0x38));
    }
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x38));
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_112709c00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b69c268; end: 10b69c2bf; -[SCCoreDataThreadHealthMonitor .cxx_destruct] */

void FUN_10b69c268(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b69c2c0; end: 10b69c333; -[SCObjectPlaceholder initWithManagedObject:] */

undefined1 * FUN_10b69c2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709c08;
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



/* Entry: 10b69c334; end: 10b69c35b; -[SCObjectPlaceholder managedObject] */

void FUN_10b69c334(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b69c35c; end: 10b69c367; -[SCObjectPlaceholder .cxx_destruct] */

void FUN_10b69c35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b69c368; end: 10b69c427; -[SCObserveObjectHandler initWithObjectClass:queue:changeHandler:] */

undefined1 *
FUN_10b69c368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112709c10;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b69c428; end: 10b69c463; -[SCObserveObjectHandler invalidate] */

void FUN_10b69c428(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b69c464; end: 10b69c51b; -[SCObserveObjectHandler perform:changedKeys:] */

void FUN_10b69c464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b69c51c;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b69c51c; end: 10b69c533;  */

void FUN_10b69c51c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010b69c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  return;
}



/* Entry: 10b69c534; end: 10b69c53b; -[SCObserveObjectHandler objectClass] */

undefined8 FUN_10b69c534(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b69c53c; end: 10b69c543; -[SCObserveObjectHandler queue] */

undefined8 FUN_10b69c53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b69c544; end: 10b69c54b; -[SCObserveObjectHandler changeHandler] */

undefined8 FUN_10b69c544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b69c54c; end: 10b69c587; -[SCObserveObjectHandler .cxx_destruct] */

void FUN_10b69c54c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b69c588; end: 10b69c59f; +[_SCCDCustomStickerData insertInManagedObjectContext:] */

void FUN_10b69c588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6de58,param_3);
  return;
}



/* Entry: 10b69c5a0; end: 10b69c5ab; +[_SCCDCustomStickerData entityName] */

undefined ** FUN_10b69c5a0(void)

{
  return &PTR____CFConstantStringClassReference_110f6de58;
}



/* Entry: 10b69c5ac; end: 10b69c5c3; +[_SCCDCustomStickerData entityInManagedObjectContext:] */

void FUN_10b69c5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6de58,param_3);
  return;
}



/* Entry: 10b69c5c4; end: 10b69c5ff; -[_SCCDCustomStickerData objectID] */

void FUN_10b69c5c4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709c18;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b69c600; end: 10b69c73b; +[_SCCDCustomStickerData keyPathsForValuesAffectingValueForKey:] */

void FUN_10b69c600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112709c20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_keyPathsForValuesAffectingValueF_112543760,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((((int)uVar2 == 0) && (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
     (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) {
    _objc_retain(puVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c174c00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_retain(puVar4);
    _objc_release(puVar3);
    puVar1 = (undefined8 *)puVar4;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b69c73c; end: 10b69c777; -[_SCCDCustomStickerData isSyncedValue] */

undefined8 FUN_10b69c73c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c080740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b69c778; end: 10b69c7bb; -[_SCCDCustomStickerData setIsSyncedValue:] */

void FUN_10b69c778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4e40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69c7bc; end: 10b69c7f7; -[_SCCDCustomStickerData primitiveIsSyncedValue] */

undefined8 FUN_10b69c7bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b69c7f8; end: 10b69c83b; -[_SCCDCustomStickerData setPrimitiveIsSyncedValue:] */

void FUN_10b69c7f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2f80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69c83c; end: 10b69c877; -[_SCCDCustomStickerData numSyncFailedValue] */

undefined8 FUN_10b69c83c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0de780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b69c878; end: 10b69c8bb; -[_SCCDCustomStickerData setNumSyncFailedValue:] */

void FUN_10b69c878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cf500(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69c8bc; end: 10b69c8f7; -[_SCCDCustomStickerData primitiveNumSyncFailedValue] */

undefined8 FUN_10b69c8bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b69c8f8; end: 10b69c93b; -[_SCCDCustomStickerData setPrimitiveNumSyncFailedValue:] */

void FUN_10b69c8f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e30a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69c93c; end: 10b69c977; -[_SCCDCustomStickerData typeValue] */

undefined8 FUN_10b69c93c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b69c978; end: 10b69c9bb; -[_SCCDCustomStickerData setTypeValue:] */

void FUN_10b69c978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69c9bc; end: 10b69c9c7; +[SCCDCustomStickerDataAttributes creationTime] */

undefined ** FUN_10b69c9bc(void)

{
  return &PTR____CFConstantStringClassReference_110ef1318;
}



/* Entry: 10b69c9c8; end: 10b69c9d3; +[SCCDCustomStickerDataAttributes encIv] */

undefined ** FUN_10b69c9c8(void)

{
  return &PTR____CFConstantStringClassReference_110f6def8;
}



/* Entry: 10b69c9d4; end: 10b69c9df; +[SCCDCustomStickerDataAttributes encKey] */

undefined ** FUN_10b69c9d4(void)

{
  return &PTR____CFConstantStringClassReference_110f6df18;
}



/* Entry: 10b69c9e0; end: 10b69c9eb; +[SCCDCustomStickerDataAttributes isSynced] */

undefined ** FUN_10b69c9e0(void)

{
  return &PTR____CFConstantStringClassReference_110db9358;
}



/* Entry: 10b69c9ec; end: 10b69c9f7; +[SCCDCustomStickerDataAttributes lastInteractionTime] */

undefined ** FUN_10b69c9ec(void)

{
  return &PTR____CFConstantStringClassReference_110f6df38;
}



/* Entry: 10b69c9f8; end: 10b69ca03; +[SCCDCustomStickerDataAttributes numSyncFailed] */

undefined ** FUN_10b69c9f8(void)

{
  return &PTR____CFConstantStringClassReference_110f6deb8;
}



/* Entry: 10b69ca04; end: 10b69ca0f; +[SCCDCustomStickerDataAttributes originalSnapId] */

undefined ** FUN_10b69ca04(void)

{
  return &PTR____CFConstantStringClassReference_110f6df58;
}



/* Entry: 10b69ca10; end: 10b69ca1b; +[SCCDCustomStickerDataAttributes packId] */

undefined ** FUN_10b69ca10(void)

{
  return &PTR____CFConstantStringClassReference_110efe458;
}



/* Entry: 10b69ca1c; end: 10b69ca27; +[SCCDCustomStickerDataAttributes stickerId] */

undefined ** FUN_10b69ca1c(void)

{
  return &PTR____CFConstantStringClassReference_110efdc78;
}



/* Entry: 10b69ca28; end: 10b69ca33; +[SCCDCustomStickerDataAttributes type] */

undefined ** FUN_10b69ca28(void)

{
  return &PTR____CFConstantStringClassReference_110dad058;
}



/* Entry: 10b69ca34; end: 10b69ca3f; +[SCCDCustomStickerDataRelationships owner] */

undefined ** FUN_10b69ca34(void)

{
  return &PTR____CFConstantStringClassReference_110ea4598;
}



/* Entry: 10b69ca40; end: 10b69ca57; +[_SCCDCustomStickerDeletion insertInManagedObjectContext:] */

void FUN_10b69ca40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6df78,param_3);
  return;
}



/* Entry: 10b69ca58; end: 10b69ca63; +[_SCCDCustomStickerDeletion entityName] */

undefined ** FUN_10b69ca58(void)

{
  return &PTR____CFConstantStringClassReference_110f6df78;
}



/* Entry: 10b69ca64; end: 10b69ca7b; +[_SCCDCustomStickerDeletion entityInManagedObjectContext:] */

void FUN_10b69ca64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6df78,param_3);
  return;
}



/* Entry: 10b69ca7c; end: 10b69cab7; -[_SCCDCustomStickerDeletion objectID] */

void FUN_10b69ca7c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709c28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b69cab8; end: 10b69cba7; +[_SCCDCustomStickerDeletion keyPathsForValuesAffectingValueForKey:] */

void FUN_10b69cab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR_s_keyPathsForValuesAffectingValueF_112543760;
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112709c30;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    _objc_retain(puVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c174c00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_retain(puVar4);
    _objc_release(puVar3);
    puVar1 = (undefined8 *)puVar4;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b69cba8; end: 10b69cbe3; -[_SCCDCustomStickerDeletion numSyncFailedValue] */

undefined8 FUN_10b69cba8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0de780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b69cbe4; end: 10b69cc27; -[_SCCDCustomStickerDeletion setNumSyncFailedValue:] */

void FUN_10b69cbe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cf500(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69cc28; end: 10b69cc63; -[_SCCDCustomStickerDeletion primitiveNumSyncFailedValue] */

undefined8 FUN_10b69cc28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b69cc64; end: 10b69cca7; -[_SCCDCustomStickerDeletion setPrimitiveNumSyncFailedValue:] */

void FUN_10b69cc64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e30a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b69cca8; end: 10b69ccb3; +[SCCDCustomStickerDeletionAttributes numSyncFailed] */

undefined ** FUN_10b69cca8(void)

{
  return &PTR____CFConstantStringClassReference_110f6deb8;
}



/* Entry: 10b69ccb4; end: 10b69ccbf; +[SCCDCustomStickerDeletionAttributes stickerId] */

undefined ** FUN_10b69ccb4(void)

{
  return &PTR____CFConstantStringClassReference_110efdc78;
}



/* Entry: 10b69ccc0; end: 10b69cccb; +[SCCDCustomStickerDeletionRelationships owner] */

undefined ** FUN_10b69ccc0(void)

{
  return &PTR____CFConstantStringClassReference_110ea4598;
}



/* Entry: 10b69cccc; end: 10b69cce3; +[_SCCDCustomStickerOwner insertInManagedObjectContext:] */

void FUN_10b69cccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6df98,param_3);
  return;
}



/* Entry: 10b69cce4; end: 10b69ccef; +[_SCCDCustomStickerOwner entityName] */

undefined ** FUN_10b69cce4(void)

{
  return &PTR____CFConstantStringClassReference_110f6df98;
}



/* Entry: 10b69ccf0; end: 10b69cd07; +[_SCCDCustomStickerOwner entityInManagedObjectContext:] */

void FUN_10b69ccf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6df98,param_3);
  return;
}



/* Entry: 10b69cd08; end: 10b69cd43; -[_SCCDCustomStickerOwner objectID] */

void FUN_10b69cd08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709c38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b69cd44; end: 10b69cd7f; +[_SCCDCustomStickerOwner keyPathsForValuesAffectingValueForKey:] */

void FUN_10b69cd44(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709c40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_keyPathsForValuesAffectingValueF_112543760);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b69cd80; end: 10b69cddb; -[_SCCDCustomStickerOwner deletionSet] */

void FUN_10b69cd80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2a56e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f6dfb8);
  uVar1 = param_1;
  func_0x00010c0d3dc0(param_1,param_2,&PTR____CFConstantStringClassReference_110f6dfb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72120(param_1,param_2,&PTR____CFConstantStringClassReference_110f6dfb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b69cddc; end: 10b69ce37; -[_SCCDCustomStickerOwner stickersSet] */

void FUN_10b69cddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2a56e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dec898);
  uVar1 = param_1;
  func_0x00010c0d3dc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dec898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72120(param_1,param_2,&PTR____CFConstantStringClassReference_110dec898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b69ce38; end: 10b69ce43; +[SCCDCustomStickerOwnerAttributes userId] */

undefined ** FUN_10b69ce38(void)

{
  return &PTR____CFConstantStringClassReference_110db1318;
}



/* Entry: 10b69ce44; end: 10b69ce4f; +[SCCDCustomStickerOwnerRelationships deletion] */

undefined ** FUN_10b69ce44(void)

{
  return &PTR____CFConstantStringClassReference_110f6dfb8;
}



/* Entry: 10b69ce50; end: 10b69ce5b; +[SCCDCustomStickerOwnerRelationships stickers] */

undefined ** FUN_10b69ce50(void)

{
  return &PTR____CFConstantStringClassReference_110dec898;
}



/* Entry: 10b69ce5c; end: 10b69d033; +[SCCustomStickerData parseManagedObject:] */

void FUN_10b69ce5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_PTR_1126e04e8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf92c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf92c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c080780(param_3);
  uVar9 = param_3;
  func_0x00010c089180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0de7a0();
  uVar11 = param_3;
  func_0x00010c0ed940();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0f0a00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27e060();
  _objc_release(param_3);
  func_0x00010c030880(puVar1,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,(int)uVar10);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
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



/* Entry: 10b69d034; end: 10b69d11b; +[SCCustomStickerDeletion parseManagedObject:] */

void FUN_10b69d034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126e04f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0de7a0(param_3);
  uVar6 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c030900(puVar1,param_2,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b69d11c; end: 10b69d1eb; +[SCCustomStickerOwner parseManagedObject:] */

void FUN_10b69d11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126dbc30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c030960(puVar1,param_2,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b69d1ec; end: 10b69d2df; +[SCCustomStickerData fetchCustomStickerDataWithStickerId:dataObjectContext:] */

void FUN_10b69d1ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6dfd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6160(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b69d2e0; end: 10b69d397; +[SCCustomStickerData fetchAllCustomStickerDataWithdataObjectContext:] */

void FUN_10b69d2e0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038000();
  func_0x00010bfa6160(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = param_1;
  func_0x00010bf529e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    _objc_retain(param_1);
    puVar3 = param_1;
  }
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b69d398; end: 10b69d46f; +[SCCustomStickerData fetchSyncedCustomStickerDataForOwner:dataObjectContext:] */

void FUN_10b69d398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6dff8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar1,param_2,puVar2,0,0,0,0);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e04e8;
  func_0x00010bfa6140(PTR_PTR_1126e04e8,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b69d470; end: 10b69d547; +[SCCustomStickerData fetchUnSyncedCustomStickerDataForOwner:dataObjectContext:] */

void FUN_10b69d470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6e018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar1,param_2,puVar2,0,0,0,0);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e04e8;
  func_0x00010bfa6140(PTR_PTR_1126e04e8,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b69d548; end: 10b69d633; +[SCCustomStickerData fetchSyncedScissorCustomStickerDataForOwnerV2:dataObjectContext:] */

void FUN_10b69d548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d39a8;
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6e038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar1,param_2,puVar2,0,0,0,0,in_x7,ppuVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e04e8;
  func_0x00010bfa6140(PTR_PTR_1126e04e8,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b69d634; end: 10b69d71f; +[SCCustomStickerData fetchUnSyncedScissorCustomStickerDataForOwnerV2:dataObjectContext:] */

void FUN_10b69d634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d39a8;
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6e058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar1,param_2,puVar2,0,0,0,0,in_x7,ppuVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e04e8;
  func_0x00010bfa6140(PTR_PTR_1126e04e8,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b69d720; end: 10b69d813; +[SCCustomStickerDeletion fetchCustomStickerDeletionWithStickerId:dataObjectContext:] */

void FUN_10b69d720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6dfd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6180(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b69d814; end: 10b69d907; +[SCCustomStickerOwner fetchCustomStickerOwnerWithUserId:dataObjectContext:] */

void FUN_10b69d814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e078);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa61c0(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b69d908; end: 10b69dacb; +[SCCustomStickerData fetchCustomStickerDataWithOptions:dataObjectContext:] */

void FUN_10b69d908(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b69dacc;
  uStack_80 = 0x10b69dadc;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b69dacc; end: 10b69dae3;  */

void FUN_10b69dacc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b69dae4; end: 10b69de27;  */

long FUN_10b69dae4(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0500;
  func_0x00010bf96ec0(PTR_PTR_1126e0500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126e04e8);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f6e098;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b69de28; end: 10b69dfbb; +[SCCustomStickerData countOfCustomStickerDataWithOptions:dataObjectContext:] */

undefined8 FUN_10b69de28(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}


