/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f3c550; end: 105f3c5f7; -[SCMapWidgetInfo isEqual:] */

bool FUN_105f3c550(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105f3c5f8; end: 105f3c5ff; -[SCMapWidgetInfo isWidgetInstalled] */

undefined1 FUN_105f3c5f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f3c600; end: 105f3c607; -[SCMapWidgetInfo isUserOnboarded] */

undefined1 FUN_105f3c600(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f3c608; end: 105f3c60f; -[SCMapWidgetInfo isWidgetSupported] */

undefined1 FUN_105f3c608(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105f3c610; end: 105f3c683; -[SCGrapheneMapDataBridgeMetric2 init] */

undefined1 * FUN_105f3c610(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f3c684; end: 105f3c7f7;  */

void FUN_105f3c684(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f350054;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108fa4e0;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108fa4e0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f350054;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_1108fa530;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108fa530,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_105f3c7f8(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105f3c7f8; end: 105f3c96b;  */

void FUN_105f3c7f8(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f350054;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108fa530;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108fa530,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_105f3c7f8(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f3c96c; end: 105f3c9d7;  */

void FUN_105f3c96c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105f3c7f8(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f3c9d8; end: 105f3cb4b;  */

void FUN_105f3c9d8(undefined8 param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_100;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar16 = &UNK_10f350054;
    }
    else {
      puVar16 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar16);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108fa580,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = (undefined1 *)puVar9;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = (undefined1 *)puVar9;
    }
  }
  puVar16 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume(puVar16);
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar1 = puVar8;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &PTR____CFConstantStringClassReference_110e5be58;
  puVar2 = puVar1;
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar1 = puVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 == (undefined1 *)0x0) || (puVar2 = puVar1, func_0x00010bfd76c0(), (int)puVar2 == 0))
    {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar1;
      func_0x00010bfc1860();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c102a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      puVar15 = puVar1;
      uVar20 = param_1;
      func_0x00010bfc1860(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar15;
      func_0x00010c102a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      _CLLocationCoordinate2DMake(param_1,uVar20);
      _objc_release(puVar4);
      _objc_release(puVar15);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      lStack_1b8 = 0;
      puStack_1c0 = (undefined *)0x0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      puVar2 = puVar1;
      func_0x00010c118b60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &puStack_1c0;
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 == (undefined1 *)0x0) {
        ppuVar19 = (undefined **)0x0;
        ppuStack_1c8 = (undefined **)0x0;
        ppuVar17 = (undefined **)0x0;
      }
      else {
        ppuVar19 = (undefined **)0x0;
        ppuStack_1c8 = (undefined **)0x0;
        ppuVar17 = (undefined **)0x0;
        lVar13 = *plStack_1b0;
        do {
          puVar15 = (undefined1 *)0x0;
          do {
            if (*plStack_1b0 != lVar13) {
              _objc_enumerationMutation(puVar2);
            }
            ppuVar11 = *(undefined ***)(lStack_1b8 + (long)puVar15 * 8);
            ppuVar10 = ppuVar11;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar10;
            func_0x00010c0720c0();
            _objc_release(ppuVar10);
            if ((int)ppuVar5 != 0) {
              ppuVar10 = ppuVar11;
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar10;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar17);
              _objc_release(ppuVar10);
              ppuVar17 = ppuVar5;
            }
            ppuVar10 = ppuVar11;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar10;
            func_0x00010c0720c0();
            _objc_release(ppuVar10);
            if ((int)ppuVar5 != 0) {
              ppuVar10 = ppuVar11;
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar10;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar19);
              _objc_release(ppuVar10);
              ppuVar19 = ppuVar5;
            }
            ppuVar10 = ppuVar11;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar10;
            func_0x00010c0720c0();
            _objc_release(ppuVar10);
            if ((int)ppuVar5 != 0) {
              ppuVar10 = ppuVar11;
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar10;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar5;
              func_0x00010c08fa60();
              if (ppuVar18 == (undefined **)0x0) {
                ppuVar18 = (undefined **)0x0;
              }
              else {
                ppuVar6 = ppuVar11;
                func_0x00010c27e100();
                _objc_retainAutoreleasedReturnValue();
                ppuVar18 = ppuVar6;
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuStack_1c8);
                ppuStack_1c8 = ppuVar6;
              }
              _objc_release(ppuStack_1c8);
              _objc_release(ppuVar5);
              _objc_release(ppuVar10);
              ppuStack_1c8 = ppuVar18;
            }
            ppuVar10 = ppuVar11;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar10;
            func_0x00010c0720c0();
            _objc_release(ppuVar10);
            if ((int)ppuVar5 != 0) {
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = ppuVar11;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08fa60();
              _objc_release(ppuVar10);
              _objc_release(ppuVar11);
            }
            puVar15 = puVar15 + 1;
          } while (puVar3 != puVar15);
          ppuVar10 = &puStack_1c0;
          puVar3 = puVar2;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined1 *)0x0);
      }
      _objc_release(puVar2);
      ppuVar5 = ppuVar19;
      func_0x00010c08fa60();
      if (ppuVar5 == (undefined **)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        if (ppuVar17 == (undefined **)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
          _objc_alloc();
          func_0x00010bff6b20();
          puVar12 = PTR_PTR_1126c62e8;
          _objc_alloc();
          ppuVar10 = ppuVar5;
          func_0x00010c008360();
          _objc_release(ppuVar5);
        }
        puVar16 = puVar12;
        func_0x00010bf8d2c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar16;
        func_0x00010bf529e0();
        if (puVar7 == (undefined *)0x0) {
          ppuVar5 = ppuStack_1c8;
          func_0x00010c08fa60();
          _objc_release(puVar16);
          if (ppuVar5 != (undefined **)0x0) goto LAB_105f3d010;
          puVar16 = (undefined *)0x0;
        }
        else {
          _objc_release(puVar16);
LAB_105f3d010:
          puVar16 = PTR_PTR_1126c62f0;
          _objc_alloc();
          ppuVar10 = ppuVar19;
          func_0x00010c037900(param_1,uVar20);
        }
        _objc_release(puVar12);
      }
      _objc_release(ppuVar17);
      _objc_release(ppuStack_1c8);
      _objc_release(ppuVar19);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  if (ppuVar10 == (undefined **)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    ppuVar17 = ppuVar10;
    func_0x00010c102a00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar17;
    func_0x00010c08fa60();
    _objc_release(ppuVar17);
    puVar16 = (undefined *)0x0;
    if (ppuVar19 != (undefined **)0x0) {
      ppuVar17 = ppuVar10;
      func_0x00010c111740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar12 = (undefined *)0x0;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar17 = ppuVar10;
        func_0x00010c111740(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar10;
        func_0x00010c06eee0();
        ppuVar5 = ppuVar17;
        if ((int)ppuVar19 != 0) {
          func_0x00010c14df40(ppuVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar17);
        }
        puVar12 = PTR_PTR_1126c62e8;
        _objc_alloc();
        func_0x00010c008360();
        _objc_release(ppuVar5);
      }
      ppuVar17 = ppuVar10;
      func_0x00010c087500(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(ppuVar17);
      puVar16 = puVar12;
      func_0x00010bf8d2c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar16;
      func_0x00010bf529e0();
      if (puVar7 == (undefined *)0x0) {
        ppuVar17 = ppuVar10;
        func_0x00010c0fd0c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar17;
        func_0x00010c08fa60();
        _objc_release(ppuVar17);
        _objc_release(puVar16);
        if (ppuVar19 != (undefined **)0x0) goto LAB_105f3d20c;
        puVar16 = (undefined *)0x0;
      }
      else {
        _objc_release(puVar16);
LAB_105f3d20c:
        puVar16 = PTR_PTR_1126c62f0;
        _objc_alloc(PTR_PTR_1126c62f0);
        ppuVar17 = ppuVar10;
        func_0x00010c102a00(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar10;
        func_0x00010c0fd0c0(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ea00(ppuVar10);
        func_0x00010c037900(puVar16);
        _objc_release(ppuVar19);
        _objc_release(ppuVar17);
      }
      _objc_release(puVar12);
    }
  }
  _objc_release(ppuVar10);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 105f3cb4c; end: 105f3d0bb; +[SCMapPOIPlaybackData playbackDataFromFeatureDescriptor:] */

void FUN_105f3cb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined **ppuStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e5be58;
  lVar2 = lVar1;
  func_0x00010bf4b900();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010bfd76c0(), (int)lVar2 == 0)) {
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bfc1860();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c102a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      lVar10 = lVar1;
      uVar16 = param_1;
      func_0x00010bfc1860(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c102a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      _CLLocationCoordinate2DMake(param_1,uVar16);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar3);
      _objc_release(lVar2);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      puStack_140 = (undefined *)0x0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar2 = lVar1;
      func_0x00010c118b60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &puStack_140;
      lVar3 = lVar2;
      func_0x00010bf52a60();
      if (lVar3 == 0) {
        ppuVar15 = (undefined **)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar15 = (undefined **)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuVar13 = (undefined **)0x0;
        lVar10 = *plStack_130;
        do {
          lVar11 = 0;
          do {
            if (*plStack_130 != lVar10) {
              _objc_enumerationMutation(lVar2);
            }
            ppuVar8 = *(undefined ***)(lStack_138 + lVar11 * 8);
            ppuVar7 = ppuVar8;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar7;
            func_0x00010c0720c0();
            _objc_release(ppuVar7);
            if ((int)ppuVar4 != 0) {
              ppuVar7 = ppuVar8;
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar7;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar13);
              _objc_release(ppuVar7);
              ppuVar13 = ppuVar4;
            }
            ppuVar7 = ppuVar8;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar7;
            func_0x00010c0720c0();
            _objc_release(ppuVar7);
            if ((int)ppuVar4 != 0) {
              ppuVar7 = ppuVar8;
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar7;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar15);
              _objc_release(ppuVar7);
              ppuVar15 = ppuVar4;
            }
            ppuVar7 = ppuVar8;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar7;
            func_0x00010c0720c0();
            _objc_release(ppuVar7);
            if ((int)ppuVar4 != 0) {
              ppuVar7 = ppuVar8;
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar7;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = ppuVar4;
              func_0x00010c08fa60();
              if (ppuVar14 == (undefined **)0x0) {
                ppuVar14 = (undefined **)0x0;
              }
              else {
                ppuVar5 = ppuVar8;
                func_0x00010c27e100();
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = ppuVar5;
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuStack_148);
                ppuStack_148 = ppuVar5;
              }
              _objc_release(ppuStack_148);
              _objc_release(ppuVar4);
              _objc_release(ppuVar7);
              ppuStack_148 = ppuVar14;
            }
            ppuVar7 = ppuVar8;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar7;
            func_0x00010c0720c0();
            _objc_release(ppuVar7);
            if ((int)ppuVar4 != 0) {
              func_0x00010c27e100();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar8;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08fa60();
              _objc_release(ppuVar7);
              _objc_release(ppuVar8);
            }
            lVar11 = lVar11 + 1;
          } while (lVar3 != lVar11);
          ppuVar7 = &puStack_140;
          lVar3 = lVar2;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar2);
      ppuVar4 = ppuVar15;
      func_0x00010c08fa60();
      if (ppuVar4 == (undefined **)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        if (ppuVar13 == (undefined **)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
          _objc_alloc();
          func_0x00010bff6b20();
          puVar9 = PTR_PTR_1126c62e8;
          _objc_alloc();
          ppuVar7 = ppuVar4;
          func_0x00010c008360();
          _objc_release(ppuVar4);
        }
        puVar12 = puVar9;
        func_0x00010bf8d2c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar12;
        func_0x00010bf529e0();
        if (puVar6 == (undefined *)0x0) {
          ppuVar4 = ppuStack_148;
          func_0x00010c08fa60();
          _objc_release(puVar12);
          if (ppuVar4 != (undefined **)0x0) goto LAB_105f3d010;
          puVar12 = (undefined *)0x0;
        }
        else {
          _objc_release(puVar12);
LAB_105f3d010:
          puVar12 = PTR_PTR_1126c62f0;
          _objc_alloc();
          ppuVar7 = ppuVar15;
          func_0x00010c037900(param_1,uVar16);
        }
        _objc_release(puVar9);
      }
      _objc_release(ppuVar13);
      _objc_release(ppuStack_148);
      _objc_release(ppuVar15);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  if (ppuVar7 == (undefined **)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    ppuVar13 = ppuVar7;
    func_0x00010c102a00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar13;
    func_0x00010c08fa60();
    _objc_release(ppuVar13);
    puVar12 = (undefined *)0x0;
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar13 = ppuVar7;
      func_0x00010c111740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar9 = (undefined *)0x0;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar13 = ppuVar7;
        func_0x00010c111740(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar7;
        func_0x00010c06eee0();
        ppuVar4 = ppuVar13;
        if ((int)ppuVar15 != 0) {
          func_0x00010c14df40(ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
        }
        puVar9 = PTR_PTR_1126c62e8;
        _objc_alloc();
        func_0x00010c008360();
        _objc_release(ppuVar4);
      }
      ppuVar13 = ppuVar7;
      func_0x00010c087500(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar13;
      func_0x00010c08fa60();
      _objc_release(ppuVar13);
      puVar12 = puVar9;
      func_0x00010bf8d2c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010bf529e0();
      if (puVar6 == (undefined *)0x0) {
        ppuVar13 = ppuVar7;
        func_0x00010c0fd0c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar13;
        func_0x00010c08fa60();
        _objc_release(ppuVar13);
        _objc_release(puVar12);
        if (ppuVar4 != (undefined **)0x0) goto LAB_105f3d20c;
        puVar12 = (undefined *)0x0;
      }
      else {
        _objc_release(puVar12);
LAB_105f3d20c:
        puVar12 = PTR_PTR_1126c62f0;
        _objc_alloc(PTR_PTR_1126c62f0);
        ppuVar13 = ppuVar7;
        func_0x00010c102a00(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar7;
        func_0x00010c0fd0c0(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ea00(ppuVar7);
        func_0x00010c037900(puVar12,param_3,ppuVar13,ppuVar4,ppuVar15 != (undefined **)0x0,puVar9);
        _objc_release(ppuVar4);
        _objc_release(ppuVar13);
      }
      _objc_release(puVar9);
    }
  }
  _objc_release(ppuVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105f3d0bc; end: 105f3d2af; +[SCMapPOIPlaybackData playbackDataFromAppTrigger:] */

void FUN_105f3d0bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_105f3d288;
  }
  lVar1 = param_3;
  func_0x00010c102a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar6 = (undefined *)0x0;
  if (lVar2 == 0) goto LAB_105f3d288;
  lVar1 = param_3;
  func_0x00010c111740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c111740(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c06eee0();
    lVar3 = lVar1;
    if ((int)lVar2 != 0) {
      func_0x00010c14df40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    puVar4 = PTR_PTR_1126c62e8;
    _objc_alloc();
    func_0x00010c008360();
    _objc_release(lVar3);
  }
  lVar1 = param_3;
  func_0x00010c087500(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar6 = puVar4;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    lVar1 = param_3;
    func_0x00010c0fd0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    _objc_release(puVar6);
    if (lVar3 != 0) goto LAB_105f3d20c;
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_release(puVar6);
LAB_105f3d20c:
    puVar6 = PTR_PTR_1126c62f0;
    _objc_alloc(PTR_PTR_1126c62f0);
    lVar1 = param_3;
    func_0x00010c102a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0fd0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00(param_3);
    func_0x00010c037900(puVar6,param_2,lVar1,lVar3,lVar2 != 0,puVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(puVar4);
LAB_105f3d288:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f3d2b0; end: 105f3d5e3; -[SCMapPOIInteractionHandler initWithTapToPlayLogger:sessionInfoProvider:mapViewport:mapView:sdkSession:storyPlaybackScopeExposer:storyPlaybackScopeServices:mapStoryFetcher:circumstanceEngine:mapPlaceProfileFactoryServices:] */

undefined8 *
FUN_105f3d2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ee1a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
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
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar3 = puVar1[1];
    func_0x00010bf06540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c62f8;
    _objc_opt_self(PTR_PTR_1126c62f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 105f3d5e4; end: 105f3d667;  */

void FUN_105f3d5e4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c62f8;
  _objc_opt_class(PTR_PTR_1126c62f8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be25b80();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f3d668; end: 105f3de3f; -[SCMapPOIInteractionHandler _handleAppTrigger:] */

void FUN_105f3d668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar1 = (undefined **)PTR_PTR_1126c62f0;
  ppuVar11 = param_4;
  func_0x00010c0ff080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined **)0x0) {
    _objc_retain(param_4);
    ppuVar4 = param_4;
    if (param_4 != (undefined **)0x0) {
      ppuVar2 = param_4;
      func_0x00010c102a00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c08fa60();
      _objc_release(ppuVar2);
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar4 = (undefined **)PTR_PTR_1126b2050;
        _objc_alloc_init();
        ppuVar11 = param_4;
        func_0x00010c102a00(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0(ppuVar4);
        _objc_release(ppuVar11);
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x00010c1e5040(ppuVar4);
        _objc_release(puVar8);
        func_0x00010c09ea00(param_4);
        func_0x00010c09ea00(param_4);
        FUN_10676af10(param_1,ppuVar4);
        ppuVar2 = ppuVar4;
        func_0x00010c118b60(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = param_4;
        func_0x00010c102a00(param_4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = &PTR____CFConstantStringClassReference_110e325f8;
        FUN_10676b02c(&PTR____CFConstantStringClassReference_110e325f8,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar2);
        _objc_release(ppuVar11);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        ppuVar11 = param_4;
        func_0x00010c111740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11 = param_4;
          func_0x00010c111740(param_4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar11;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar11);
          ppuVar3 = ppuVar4;
          func_0x00010c118b60(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110e325d8;
          FUN_10676b02c(&PTR____CFConstantStringClassReference_110e325d8,ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar3);
          _objc_release(ppuVar11);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
        }
        ppuVar11 = param_4;
        func_0x00010c0fd0c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar11;
        func_0x00010c08fa60();
        _objc_release(ppuVar11);
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar2 = ppuVar4;
          func_0x00010c118b60(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = param_4;
          func_0x00010c0fd0c0(param_4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110e32618;
          FUN_10676b02c(&PTR____CFConstantStringClassReference_110e32618,ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar2);
          _objc_release(ppuVar11);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
        }
        ppuVar11 = param_4;
        func_0x00010c087500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar11;
        func_0x00010c08fa60();
        _objc_release(ppuVar11);
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar2 = ppuVar4;
          func_0x00010c118b60(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = param_4;
          func_0x00010c087500(param_4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110e31798;
          FUN_10676b02c(&PTR____CFConstantStringClassReference_110e31798,ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar2);
          _objc_release(ppuVar11);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
        }
        ppuVar11 = param_4;
        func_0x00010c087060();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar11;
        func_0x00010c08fa60();
        _objc_release(ppuVar11);
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar2 = ppuVar4;
          func_0x00010c118b60(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = param_4;
          func_0x00010c087060(param_4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110dd6038;
          FUN_10676b02c(&PTR____CFConstantStringClassReference_110dd6038,ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar2);
          _objc_release(ppuVar11);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
        }
        ppuVar11 = param_4;
        func_0x00010c26e3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar11;
        func_0x00010c08fa60();
        _objc_release(ppuVar11);
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar2 = ppuVar4;
          func_0x00010c118b60(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = param_4;
          func_0x00010c26e3a0(param_4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110e06dd8;
          FUN_10676b02c(&PTR____CFConstantStringClassReference_110e06dd8,ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar2);
          _objc_release(ppuVar11);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
        }
        ppuVar3 = ppuVar4;
        func_0x00010c118b60(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = &PTR____CFConstantStringClassReference_110dad058;
        FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                      &PTR____CFConstantStringClassReference_110e32638);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar2;
        func_0x00010befa120(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar3);
        ppuVar2 = param_4;
        func_0x00010c0fcf40();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar3 = param_4;
          func_0x00010c0fcf40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar3;
          func_0x00010c08c340();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010c08fa60();
          _objc_release(ppuVar5);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar3 = ppuVar4;
            func_0x00010c118b60(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = param_4;
            func_0x00010c0fcf40(param_4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar5;
            func_0x00010c08c340();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = &PTR____CFConstantStringClassReference_110e32658;
            FUN_10676b02c(&PTR____CFConstantStringClassReference_110e32658,ppuVar6);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar2;
            func_0x00010befa120(ppuVar3);
            _objc_release(ppuVar2);
            _objc_release(ppuVar6);
            _objc_release(ppuVar5);
            _objc_release(ppuVar3);
          }
        }
        ppuVar2 = param_4;
        func_0x00010c0fcf40();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar3 = param_4;
          func_0x00010c0fcf40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar3;
          func_0x00010c0ed7e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
          if (ppuVar5 != (undefined **)0x0) {
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            lStack_138 = 0;
            puStack_140 = (undefined *)0x0;
            uStack_128 = 0;
            plStack_130 = (long *)0x0;
            ppuVar11 = param_4;
            func_0x00010c0fcf40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar11;
            func_0x00010c0ed7e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar11);
            ppuVar11 = &puStack_140;
            param_5 = apuStack_100;
            ppuVar3 = ppuVar2;
            func_0x00010bf52a60();
            if (ppuVar3 != (undefined **)0x0) {
              lVar10 = *plStack_130;
              do {
                ppuVar11 = (undefined **)0x0;
                do {
                  if (*plStack_130 != lVar10) {
                    _objc_enumerationMutation(ppuVar2);
                  }
                  uVar12 = *(undefined8 *)(lStack_138 + (long)ppuVar11 * 8);
                  ppuVar5 = param_4;
                  func_0x00010c0fcf40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar6 = ppuVar5;
                  func_0x00010c0ed7e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar7 = ppuVar6;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  _objc_release(ppuVar5);
                  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                  ppuVar5 = ppuVar7;
                  _objc_opt_isKindOfClass(ppuVar7,puVar8);
                  if (((ulong)ppuVar5 & 1) != 0) {
                    ppuVar5 = ppuVar4;
                    func_0x00010c118b60(ppuVar4);
                    _objc_retainAutoreleasedReturnValue();
                    FUN_10676b02c(uVar12,ppuVar7);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppuVar5);
                    _objc_release(uVar12);
                    _objc_release(ppuVar5);
                  }
                  _objc_release(ppuVar7);
                  ppuVar11 = (undefined **)((long)ppuVar11 + 1);
                } while (ppuVar3 != ppuVar11);
                ppuVar11 = &puStack_140;
                param_5 = apuStack_100;
                ppuVar3 = ppuVar2;
                func_0x00010bf52a60();
              } while (ppuVar3 != (undefined **)0x0);
            }
            _objc_release(ppuVar2);
          }
        }
        _objc_release(param_4);
        if (ppuVar4 == (undefined **)0x0) goto LAB_105f3ddf0;
        ppuVar11 = ppuVar1;
        param_5 = ppuVar4;
        func_0x00010bec2360(param_2);
      }
    }
    _objc_release(ppuVar4);
  }
LAB_105f3ddf0:
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(ppuVar11);
    _objc_retain(param_5);
    if ((ppuVar11 != (undefined **)0x0) && (param_5 != (undefined **)0x0)) {
      puVar8 = param_4[0xb];
      if (puVar8 == (undefined *)0x0) {
        puVar8 = PTR_PTR_1126c6300;
        _objc_alloc();
        func_0x00010c0507e0();
        puVar9 = param_4[0xb];
        param_4[0xb] = puVar8;
        _objc_release(puVar9);
        puVar8 = param_4[0xb];
      }
      func_0x00010bf19140(puVar8);
    }
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
    return;
  }
  return;
}



/* Entry: 105f3de40; end: 105f3deef; -[SCMapPOIInteractionHandler _startWorkflowWithPlaybackData:feature:] */

void FUN_105f3de40(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126c6300;
      _objc_alloc();
      func_0x00010c0507e0();
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      *(undefined **)(param_1 + 0x58) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x58);
    }
    func_0x00010bf19140(lVar1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f3def0; end: 105f3deff; -[SCMapPOIInteractionHandler workflowDidComplete:] */

void FUN_105f3def0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f3df00; end: 105f3dfa7; -[SCMapPOIInteractionHandler .cxx_destruct] */

void FUN_105f3df00(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105f3dfa8; end: 105f3e26b; -[SCMapPOIPlaybackWorkflow initWithTapToPlayLogger:sessionInfoProvider:mapViewport:mapView:sdkSession:storyPlaybackScopeExposer:storyPlaybackScopeServices:mapStoryFetcher:delegate:circumstanceEngine:mapPlaceProfileFactoryServices:] */

undefined8 *
FUN_105f3dfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ee1a8;
  puVar2 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = puVar2[3];
    puVar2[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[4];
    puVar2[4] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[1];
    puVar2[1] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[2];
    puVar2[2] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[5];
    puVar2[5] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[6];
    puVar2[6] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[7];
    puVar2[7] = param_11;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 10,param_12);
    _objc_retain(param_13);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_8;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0xb];
    func_0x000109021f9c();
    *(undefined1 *)((long)puVar2 + 0x91) = uVar1;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[8];
    puVar2[8] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    _CACurrentMediaTime();
    puVar2[0xf] = param_1;
    _objc_retain(param_14);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_14;
    _objc_release(uVar3);
  }
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
  return puVar2;
}



/* Entry: 105f3e26c; end: 105f3e4a7; -[SCMapPOIPlaybackWorkflow beginWithPlaybackData:feature:] */

void FUN_105f3e26c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x68);
    func_0x00010c102a00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_3;
    func_0x00010c102a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    puVar10 = unaff_x23;
    func_0x00010c0720c0();
    if (((int)uVar3 == 0) || (*(long *)(param_1 + 0x80) == 0)) {
      _objc_release(unaff_x23);
      _objc_release(uVar2);
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = param_3;
      _objc_release(uVar4);
      _objc_retain(param_4);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = param_4;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      _objc_release(uVar4);
      *(undefined1 *)(param_1 + 0x90) = 0;
      lVar5 = *(long *)(param_1 + 0x68);
      func_0x00010c111740();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        bVar1 = *(byte *)(param_1 + 0x91);
        uVar2 = (ulong)bVar1;
        _objc_release();
        if ((bVar1 & 1) == 0) {
          uVar2 = *(ulong *)(param_1 + 0x68);
          func_0x00010c111740();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = *(undefined **)(param_1 + 0x68);
          func_0x00010c102a00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = &PTR____CFConstantStringClassReference_110e32678;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x000107948ef0(uVar2,unaff_x24,0,2,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_60 = uVar3;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          _objc_release(uVar2);
          puVar10 = puVar6;
          func_0x00010be47f40(param_1);
          _objc_release(puVar6);
        }
      }
      func_0x00010be116e0(param_1);
    }
    else {
      _objc_release(unaff_x23);
      _objc_release(uVar2);
      puVar10 = *(undefined **)(param_1 + 0x80);
      func_0x00010be47f40(param_1);
    }
  }
  _objc_release(param_4);
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_105f3e4a8;
  ppuStack_a0 = unaff_x24;
  puStack_98 = unaff_x23;
  uStack_90 = uVar2;
  lStack_88 = param_1;
  uStack_80 = param_4;
  puStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puVar7 = puVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (puVar9 != (undefined *)0x0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105f3e584;
    puStack_b8 = &UNK_110841f80;
    puStack_b0 = puVar6;
    _objc_retain(puVar10);
    puStack_a8 = puVar10;
    func_0x0001000d76cc("APPSTORE",&puStack_d0);
    _objc_release(puStack_a8);
  }
  _objc_release(puVar10);
  return;
}



/* Entry: 105f3e4a8; end: 105f3e583; -[SCMapPOIPlaybackWorkflow _launchPlaybackWithSequences:] */

void FUN_105f3e4a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105f3e584;
    puStack_58 = &UNK_110841f80;
    uStack_50 = param_1;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f3e584; end: 105f3e7a3;  */

/* WARNING: Possible PIC construction at 0x000105f3e5f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f3e5fc) */
/* WARNING: Removing unreachable block (ram,0x000105f3e63c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105f3e584(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_next__112614028,uVar3);
  return;
}



/* Entry: 105f3e7a4; end: 105f3e927; -[SCMapPOIPlaybackWorkflow _fetchFullPlaylist] */

void FUN_105f3e7a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c102a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b1e48;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c102a00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102a60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c102a00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e32678;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e32678);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa9560(uVar2);
    _objc_release(ppuVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 105f3e928; end: 105f3ea8f;  */

void FUN_105f3e928(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((param_3 == 0) && (param_2 != 0)) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 != 0))
    {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x105f3ea0c;
      puStack_50 = &UNK_110848ba8;
      lStack_48 = lVar1;
      _objc_retain(param_2);
      uStack_38 = *(undefined8 *)(param_1 + 0x20);
      lStack_40 = param_2;
      func_0x0001000d76cc("APPSTORE",&puStack_68);
      _objc_release(lStack_40);
    }
    else {
      func_0x00010be57100(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105f3ea90; end: 105f3eb6f; -[SCMapPOIPlaybackWorkflow _baseView] */

void FUN_105f3ea90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x68));
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x68));
  _CLLocationCoordinate2DMake(param_1);
  func_0x00010bf50ea0(*(undefined8 *)(param_3 + 0x10),param_4,*(undefined8 *)(param_3 + 8));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c19f0e0(0,0,0x3ff0000000000000,0x3ff0000000000000);
  func_0x00010c17a6a0(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010bfb68e0(puVar1);
  func_0x00010bf51460(uVar3,param_4,0);
  func_0x00010c19f0e0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3eb70; end: 105f3ec33; -[SCMapPOIPlaybackWorkflow _logPlayAttemptWithResult:] */

void FUN_105f3eb70(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  func_0x00010c102a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x68));
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x68));
  _CLLocationCoordinate2DMake(param_1);
  dVar3 = param_1;
  func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x10));
  dVar4 = dVar3;
  _CACurrentMediaTime();
  func_0x00010bf72620(param_1,param_2,dVar3,dVar4 - *(double *)(param_3 + 0x78),uVar1,param_4,uVar2,
                      param_5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f3ec34; end: 105f3ed7b; -[SCMapPOIPlaybackWorkflow _launchPlaceProfile] */

void FUN_105f3ec34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c0fd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1e78;
    _objc_alloc(PTR_PTR_1126b1e78);
    func_0x00010c031b60();
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c102a00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08fa60();
    func_0x00010c1a6440(puVar2,param_2,lVar1 != 0);
    _objc_release(lVar3);
    func_0x00010c1dce20(puVar2,param_2,8);
    puVar4 = PTR_PTR_1126b1e80;
    _objc_alloc(PTR_PTR_1126b1e80);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c0fd0c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0364a0(puVar4,param_2,uVar5,puVar2);
    _objc_release(uVar5);
    func_0x00010bf51c80(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c1dc320(puVar4);
    func_0x00010c200420(puVar4,param_2,0);
    func_0x00010c0b9840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10d8c0();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105f3ed7c; end: 105f3ef77; -[SCMapPOIPlaybackWorkflow mapStoryDidFinishPresentingWithTransitionAnimator:] */

void FUN_105f3ed7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  *(undefined1 *)(param_3 + 0x90) = 1;
  if (*(long *)(param_3 + 0x80) != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x48));
  }
  uVar1 = *(ulong *)(param_3 + 0x88);
  if (uVar1 != 0) {
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + 0x70);
    func_0x00010bfe5ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_4,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_3 + 0x60);
      uVar2 = *(undefined8 *)(param_3 + 0x88);
      func_0x00010bfe5ea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135460(uVar7,param_4,&PTR____CFConstantStringClassReference_110e30138,uVar2);
      _objc_release(uVar2);
    }
  }
  lVar4 = *(long *)(param_3 + 0x68);
  func_0x00010c0fd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126b2050;
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x68);
    uVar7 = *(undefined8 *)(param_3 + 0x70);
    _objc_retain(uVar7);
    _objc_retain(uVar2);
    _objc_alloc_init();
    uVar6 = uVar2;
    func_0x00010c0fd0c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar5,param_4,uVar6);
    _objc_release(uVar6);
    func_0x00010bf51c80(uVar2);
    func_0x00010bf51c80(uVar2);
    _objc_release(uVar2);
    FUN_10676af10(param_1,param_2,puVar5);
    uVar2 = uVar7;
    func_0x00010c118b60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x00010c1e5040(puVar5,param_4,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + 0x88);
    *(undefined **)(param_3 + 0x88) = puVar5;
    _objc_release(uVar2);
    func_0x00010bef8340(*(undefined8 *)(param_3 + 0x60),param_4,
                        &PTR____CFConstantStringClassReference_110e30138,
                        *(undefined8 *)(param_3 + 0x88));
  }
  lVar4 = *(long *)(param_3 + 0x68);
  func_0x00010c0fd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010be47ee0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f3ef78; end: 105f3f047; -[SCMapPOIPlaybackWorkflow mapStoryDidDismiss] */

void FUN_105f3ef78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar2);
  }
  if ((*(long *)(param_1 + 0xa0) == 0) && (lVar1 = *(long *)(param_1 + 0x88), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135460(uVar2,param_2,&PTR____CFConstantStringClassReference_110e30138,lVar1);
    _objc_release(lVar1);
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2bd4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f3f048; end: 105f3f10f; -[SCMapPOIPlaybackWorkflow mapPlaceProfileSaberPresenter] */

void FUN_105f3f048(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0xa0);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126b1c10;
    _objc_alloc(PTR_PTR_1126b1c10);
    func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelAlert_110345e80);
    puVar2 = PTR_PTR_1126b1e70;
    _objc_alloc(PTR_PTR_1126b1e70);
    func_0x00010c00ae60();
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + 0xa0);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105f3f110; end: 105f3f143; -[SCMapPOIPlaybackWorkflow onPlaceProfileHidden] */

void FUN_105f3f110(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f3f144; end: 105f3f1f3; -[SCMapPOIPlaybackWorkflow onPlaceProfileRemoved] */

void FUN_105f3f144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bfe5ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135460(uVar3,param_2,&PTR____CFConstantStringClassReference_110e30138,uVar1);
  _objc_release(uVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2bd4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f3f1f4; end: 105f3f2df; -[SCMapPOIPlaybackWorkflow .cxx_destruct] */

void FUN_105f3f1f4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105f3f2e0; end: 105f3f56b; -[SCMapTapToPlayEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f3f2e0(long param_1,undefined8 param_2)

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
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126c6308;
  _objc_alloc();
  lVar22 = (long)_DAT_11273ac34;
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c269600();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar4 = lVar22;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11273ac38;
  lVar5 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar12 = lVar23;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_11273ac3c);
  lVar15 = param_1 + _DAT_11273ac40;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_11273ac44;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0b9f40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11273ac48;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11273ac4c;
  _objc_loadWeakRetained();
  func_0x00010c0507c0(puVar1,param_2,lVar3,lVar4,lVar8,lVar11,lVar14,uVar21,lVar15,lVar17,lVar19,
                      lVar20);
  uVar21 = *(undefined8 *)(param_1 + _DAT_11273ac50);
  *(undefined **)(param_1 + _DAT_11273ac50) = puVar1;
  _objc_release(uVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar23);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar22);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105f3f56c; end: 105f3f60b; -[SCMapTapToPlayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f3f56c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ac3c,0);
  _objc_destroyWeak(param_1 + _DAT_11273ac40);
  _objc_destroyWeak(param_1 + _DAT_11273ac4c);
  _objc_destroyWeak(param_1 + _DAT_11273ac34);
  _objc_destroyWeak(param_1 + _DAT_11273ac48);
  _objc_destroyWeak(param_1 + _DAT_11273ac44);
  _objc_destroyWeak(param_1 + _DAT_11273ac58);
  _objc_destroyWeak(param_1 + _DAT_11273ac38);
  _objc_destroyWeak(param_1 + _DAT_11273ac54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ac50,0);
  return;
}



/* Entry: 105f3f60c; end: 105f3f707; -[SCMapPOIPlaybackData initWithPoiID:placeID:coordinate:hasLabel:previewManifest:] */

undefined1 *
FUN_105f3f60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ee1b0;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105f3f708; end: 105f3f70f; -[SCMapPOIPlaybackData poiID] */

undefined8 FUN_105f3f708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f3f710; end: 105f3f717; -[SCMapPOIPlaybackData placeID] */

undefined8 FUN_105f3f710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f3f718; end: 105f3f71f; -[SCMapPOIPlaybackData coordinate] */

undefined1  [16] FUN_105f3f718(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 105f3f720; end: 105f3f727; -[SCMapPOIPlaybackData hasLabel] */

undefined1 FUN_105f3f720(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f3f728; end: 105f3f72f; -[SCMapPOIPlaybackData previewManifest] */

undefined8 FUN_105f3f728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f3f730; end: 105f3f76b; -[SCMapPOIPlaybackData .cxx_destruct] */

void FUN_105f3f730(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f3f76c; end: 105f3fb5f;  */

/* WARNING: Possible PIC construction at 0x000105f3faf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f3fcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f3fafc) */
/* WARNING: Removing unreachable block (ram,0x000105f3fb5c) */
/* WARNING: Removing unreachable block (ram,0x000105f3fccc) */
/* WARNING: Removing unreachable block (ram,0x000105f3fb98) */
/* WARNING: Removing unreachable block (ram,0x000105f3fcd4) */
/* WARNING: Removing unreachable block (ram,0x000105f3fd58) */
/* WARNING: Removing unreachable block (ram,0x000105f3fcdc) */
/* WARNING: Removing unreachable block (ram,0x000105f3fce4) */
/* WARNING: Removing unreachable block (ram,0x000105f3fba8) */
/* WARNING: Removing unreachable block (ram,0x000105f3fd0c) */
/* WARNING: Removing unreachable block (ram,0x000105f3fbb0) */
/* WARNING: Removing unreachable block (ram,0x000105f3fd34) */
/* WARNING: Removing unreachable block (ram,0x000105f3fd7c) */
/* WARNING: Removing unreachable block (ram,0x000105f3fbb8) */
/* WARNING: Removing unreachable block (ram,0x000105f3fdd8) */
/* WARNING: Removing unreachable block (ram,0x000105f3fbc0) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc28) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc34) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc38) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc48) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc50) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc6c) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc78) */
/* WARNING: Removing unreachable block (ram,0x000105f3fc8c) */
/* WARNING: Removing unreachable block (ram,0x000105f3fca8) */
/* WARNING: Removing unreachable block (ram,0x000105f3fb38) */
/* WARNING: Removing unreachable block (ram,0x000105f3fcc0) */
/* WARNING: Removing unreachable block (ram,0x000105f3fd8c) */
/* WARNING: Removing unreachable block (ram,0x000105f3fd98) */
/* WARNING: Removing unreachable block (ram,0x000105f3fdf0) */
/* WARNING: Removing unreachable block (ram,0x000105f3fdb8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_105f3f76c(ulong param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar5;
  
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  iVar2 = (int)puVar5;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar7 != 0) {
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar6);
      }
      uVar13 = *(undefined8 *)(uVar12 * 8);
      iVar3 = iVar2;
      func_0x00010bf4b900();
      if (iVar3 != 0) {
        uVar8 = param_1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126c6310;
        _objc_opt_class(PTR_PTR_1126c6310);
        uVar9 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar4);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar10 = uVar8;
        if (((uVar9 & 1) == 0) || (uVar8 == 0)) {
          _objc_retain(uVar8);
          _objc_opt_class(puVar4);
          uVar9 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar4);
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          _objc_release(uVar8);
        }
        else {
          FUN_105f3fb60();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar9 = uVar10;
        func_0x00010c08fa60();
        if (uVar9 != 0) {
          _objc_retain(uVar13);
          _objc_retain(uVar10);
          uVar11 = uVar13;
          func_0x00010c0720c0();
          uVar9 = uVar10;
          if ((int)uVar11 != 0) {
            func_0x00010c25cfc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
          }
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(uVar13);
          func_0x00010befa120(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(uVar10);
        _objc_release(uVar8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
    uVar7 = uVar6;
    func_0x00010bf52a60();
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bf446f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar5,PTR_s_componentsJoinedByString__1125aeb60,
             &PTR____CFConstantStringClassReference_110db3ed8);
  return;
}



/* Entry: 105f3fb60; end: 105f3fdf3;  */

/* WARNING: Possible PIC construction at 0x000105f3fcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f3fcc0) */

void FUN_105f3fb60(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_1;
    func_0x00010c2970a0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    iVar1 = (int)puVar6;
    if (iVar1 < 4) {
      if (iVar1 == 1) {
        func_0x00010bf1f3c0(param_1);
        func_0x00010c0df6e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (iVar1 != 3) goto LAB_105f3fdd8;
        func_0x00010c27f080(param_1);
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (iVar1 == 4) {
      func_0x00010c067dc0(param_1);
      func_0x00010c0df7c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 5) {
        if (iVar1 == 6) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09a320();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010c297380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          puVar6 = puVar2;
          func_0x00010bf52a60();
          lVar5 = lRam0000000000000000;
          while (puVar6 != (undefined *)0x0) {
            puVar7 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar5) {
                _objc_enumerationMutation(puVar2);
              }
              lVar3 = *(long *)((long)puVar7 * 8);
              FUN_105f3fb60();
              _objc_retainAutoreleasedReturnValue();
              if (lVar3 != 0) {
                func_0x00010befa120(puVar4);
              }
              _objc_release(lVar3);
              puVar7 = puVar7 + 1;
            } while (puVar6 != puVar7);
            puVar6 = puVar2;
            func_0x00010bf52a60();
          }
          _objc_release(puVar2);
          goto code_r0x00010bf446e0;
        }
LAB_105f3fdd8:
        puVar6 = param_1;
        func_0x00010c25d700(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105f3fd98;
      }
      func_0x00010bf885a0(param_1);
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
LAB_105f3fd98:
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
code_r0x00010bf446e0:
                    /* WARNING: Could not recover jumptable at 0x00010bf446f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f3fdf4; end: 105f3fdff;  */

void FUN_105f3fdf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf446f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_componentsJoinedByString__1125aeb60,
             &PTR____CFConstantStringClassReference_110db3ed8);
  return;
}



/* Entry: 105f3fe00; end: 105f3fe47; +[SCMapBitmojiImpressionConverter isBitmojiFeatureDescriptor:] */

undefined8 FUN_105f3fe00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105f3fe48; end: 105f405ff; +[SCMapBitmojiImpressionConverter tryConversion:context:] */

undefined **
FUN_105f3fe48(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_160;
  undefined *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar14 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &PTR____CFConstantStringClassReference_110e316f8;
  ppuVar1 = ppuVar14;
  func_0x00010bf4b900();
  _objc_release(ppuVar14);
  if ((int)ppuVar1 == 0) {
    ppuVar14 = (undefined **)0x0;
    goto LAB_105f405a0;
  }
  ppuVar14 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar14;
  func_0x00010bfc1860();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(ppuVar14);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    lStack_148 = 0;
    puStack_150 = (undefined *)0x0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    ppuVar15 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar15;
    func_0x00010c118b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    ppuVar15 = &puStack_150;
    ppuVar1 = ppuVar14;
    func_0x00010bf52a60(ppuVar14,param_2,ppuVar15,auStack_110,0x10);
    if (ppuVar1 != (undefined **)0x0) {
      lVar16 = *plStack_140;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if (*plStack_140 != lVar16) {
            _objc_enumerationMutation(ppuVar14);
          }
          uVar13 = *(undefined8 *)(lStack_148 + (long)ppuVar15 * 8);
          uVar4 = uVar13;
          func_0x00010c27e100(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c086560(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar3,param_2,uVar4,uVar13);
          _objc_release(uVar13);
          _objc_release(uVar4);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar1 != ppuVar15);
        ppuVar15 = &puStack_150;
        ppuVar1 = ppuVar14;
        func_0x00010bf52a60(ppuVar14,param_2,ppuVar15,auStack_110,0x10);
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(ppuVar14);
    ppuVar14 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar14;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      puVar6 = puVar3;
      func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110e32698);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf1f3c0();
      _objc_release(puVar6);
      if (((ulong)puVar7 & 1) == 0) {
        ppuVar15 = &PTR____CFConstantStringClassReference_110e326b8;
        puVar6 = puVar3;
        func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110e326b8);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) {
          puVar7 = puVar6;
          func_0x00010bf1f3c0();
          uStack_160 = 1;
          if ((int)puVar7 == 0) {
            uStack_160 = 2;
          }
          puVar8 = puVar3;
          func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110e326d8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = puVar9;
          func_0x00010c08fa60();
          if (puVar8 != (undefined *)0x0) {
            func_0x00010c1d0560(puVar5,param_2,puVar9,
                                &PTR____CFConstantStringClassReference_110e32798);
          }
          puVar10 = puVar3;
          func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110e326f8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar10 != (undefined *)0x0) {
            puVar10 = puVar3;
            func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110e326f8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010bf1f3c0();
            func_0x00010c0df6e0(puVar8,param_2,puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar5,param_2,puVar8,
                                &PTR____CFConstantStringClassReference_110e32778);
            _objc_release(puVar8);
            _objc_release(puVar10);
          }
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = puVar3;
            func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110e32718);
            _objc_retainAutoreleasedReturnValue();
            if ((puVar7 != (undefined *)0x0) &&
               (puVar8 = puVar7, func_0x00010c2970a0(), (int)puVar8 == 4)) {
              puVar8 = puVar7;
              func_0x00010c067dc0();
              puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f320();
              dVar17 = dVar17 * 1000.0;
              lVar16 = (long)dVar17;
              _objc_release(puVar10);
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar16 - (long)puVar8
                                 );
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(puVar5,param_2,puVar10,
                                  &PTR____CFConstantStringClassReference_110e327b8);
              _objc_release(puVar10);
            }
            _objc_release(puVar7);
          }
          puVar7 = puVar3;
          func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110e32738);
          _objc_retainAutoreleasedReturnValue();
          if ((puVar7 != (undefined *)0x0) &&
             (puVar10 = puVar7, func_0x00010c2970a0(), puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570
             , (int)puVar10 == 1)) {
            puVar10 = puVar7;
            func_0x00010bf1f3c0(puVar7);
            func_0x00010c0df6e0(puVar8,param_2,puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar5,param_2,puVar8,
                                &PTR____CFConstantStringClassReference_110e327d8);
            _objc_release(puVar8);
          }
          _objc_release(puVar7);
          _objc_release(puVar9);
          _objc_release(puVar6);
          goto LAB_105f4034c;
        }
        ppuVar14 = (undefined **)0x0;
      }
      else {
        uStack_160 = 3;
LAB_105f4034c:
        func_0x00010c08aca0(ppuVar2);
        dVar18 = dVar17;
        func_0x00010c09abe0(ppuVar2);
        _CLLocationCoordinate2DMake(dVar17,dVar18);
        uVar4 = param_4;
        dVar19 = dVar17;
        func_0x00010c0dff20(param_4,param_2,&PTR____CFConstantStringClassReference_110e327f8);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_4;
        func_0x00010c0dff20(param_4,param_2,&PTR____CFConstantStringClassReference_110e32818);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = param_3;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar15;
        func_0x00010bf529e0();
        _objc_release(ppuVar15);
        if (ppuVar14 != (undefined **)0x0) {
          ppuVar15 = param_3;
          func_0x00010bfcf800(param_3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar15;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar14;
          FUN_105f3fdf4();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar14);
          _objc_release(ppuVar15);
          func_0x00010c1d0560(puVar5,param_2,ppuVar12,
                              &PTR____CFConstantStringClassReference_110e32838);
          _objc_release(ppuVar12);
        }
        ppuVar15 = param_3;
        func_0x00010bf44620();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar15;
        func_0x00010bf529e0();
        _objc_release(ppuVar15);
        if (ppuVar14 != (undefined **)0x0) {
          ppuVar15 = param_3;
          func_0x00010bf44620(param_3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar15;
          FUN_105f3fdf4();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar15);
          func_0x00010c1d0560(puVar5,param_2,ppuVar14,
                              &PTR____CFConstantStringClassReference_110e32858);
          _objc_release(ppuVar14);
        }
        puVar6 = puVar3;
        FUN_105f3f76c();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c08fa60();
        if (puVar7 != (undefined *)0x0) {
          func_0x00010c1d0560(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110df13d8
                             );
        }
        ppuVar14 = (undefined **)PTR_PTR_1126c6318;
        _objc_alloc(PTR_PTR_1126c6318);
        puVar7 = puVar5;
        func_0x00010bf51e00(puVar5);
        func_0x00010bf885a0(uVar4);
        dVar20 = dVar19;
        func_0x00010bf885a0(uVar13);
        ppuVar15 = ppuVar1;
        func_0x00010c01b5c0(dVar17,dVar18,dVar19,dVar20,ppuVar14,param_2,ppuVar1,uStack_160,
                            PTR____NSArray0__struct_11034ab48,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar13);
        _objc_release(uVar4);
      }
      _objc_release(puVar5);
    }
    _objc_release(ppuVar1);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar2);
LAB_105f405a0:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
    return ppuVar14;
  }
  ___stack_chk_fail();
  func_0x00010bfcf800(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar15;
  func_0x00010bf4b900();
  _objc_release(ppuVar15);
  return ppuVar14;
}



/* Entry: 105f40600; end: 105f4064b; +[SCMapHomesImpressionConverter isHomeFeatureDescriptor:] */

undefined8 FUN_105f40600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105f4064c; end: 105f40b83; +[SCMapHomesImpressionConverter tryConversion:context:] */

undefined1 *
FUN_105f4064c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4,
             undefined *param_5)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = PTR_PTR_1126c6320;
  ppuVar10 = param_3;
  func_0x00010c074e00();
  if ((int)puVar12 == 0) {
    puVar12 = (undefined *)0x0;
    goto LAB_105f40b2c;
  }
  unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  ppuVar10 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar10;
  func_0x00010c118b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  puVar4 = auStack_110;
  param_5 = (undefined *)0x10;
  ppuVar10 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar10 != (undefined **)0x0) {
    lVar14 = *plStack_140;
    do {
      ppuVar15 = (undefined **)0x0;
      do {
        if (*plStack_140 != lVar14) {
          _objc_enumerationMutation(ppuVar2);
        }
        uVar11 = *(undefined8 *)(lStack_148 + (long)ppuVar15 * 8);
        uVar3 = uVar11;
        func_0x00010c27e100(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c086560(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(unaff_x21);
        _objc_release(uVar11);
        _objc_release(uVar3);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar10 != ppuVar15);
      puVar4 = auStack_110;
      param_5 = (undefined *)0x10;
      ppuVar10 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar10 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar10 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar10;
  func_0x00010bf4b900();
  _objc_release(ppuVar10);
  if (((ulong)ppuVar2 & 1) == 0) {
    unaff_x22 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110e5bdb8;
    ppuVar2 = unaff_x22;
    func_0x00010bf4b900();
    _objc_release(unaff_x22);
    if ((int)ppuVar2 != 0) {
      puVar13 = (undefined1 *)0xb;
      goto LAB_105f4083c;
    }
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar13 = (undefined1 *)0xa;
LAB_105f4083c:
    unaff_x22 = unaff_x21;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110e5bdd8;
    ppuVar2 = unaff_x21;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)0x0;
    if ((unaff_x22 != (undefined **)0x0) && (ppuVar2 != (undefined **)0x0)) {
      puStack_158 = puVar13;
      func_0x00010bf885a0(unaff_x22);
      uVar3 = uVar9;
      func_0x00010bf885a0(ppuVar2);
      _CLLocationCoordinate2DMake(uVar9,uVar3);
      puVar4 = param_4;
      uVar11 = uVar9;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_4;
      puStack_160 = puVar4;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_170 = puVar13;
      _objc_alloc_init();
      ppuVar10 = param_3;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar10;
      func_0x00010bf529e0();
      _objc_release(ppuVar10);
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar10 = param_3;
        func_0x00010bfcf800(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar10;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar15;
        FUN_105f3fdf4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        _objc_release(ppuVar10);
        func_0x00010c1d0560(puVar5);
        _objc_release(ppuVar6);
      }
      ppuVar10 = param_3;
      func_0x00010bf44620();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar10;
      func_0x00010bf529e0();
      _objc_release(ppuVar10);
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar10 = param_3;
        func_0x00010bf44620(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar10;
        FUN_105f3fdf4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        func_0x00010c1d0560(puVar5);
        _objc_release(ppuVar15);
      }
      ppuVar15 = unaff_x21;
      ppuStack_178 = unaff_x22;
      ppuStack_168 = ppuVar2;
      FUN_105f3f76c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar15;
      func_0x00010c08fa60();
      if (ppuVar10 != (undefined **)0x0) {
        func_0x00010c1d0560(puVar5);
      }
      puVar12 = PTR_PTR_1126c6318;
      _objc_alloc(PTR_PTR_1126c6318);
      ppuVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar2;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf51e00(puVar5);
      puVar1 = puStack_160;
      puStack_180 = puVar5;
      func_0x00010bf885a0(puStack_160);
      puVar13 = puStack_170;
      uVar16 = uVar11;
      func_0x00010bf885a0(puStack_170);
      ppuVar10 = ppuVar6;
      puVar4 = puStack_158;
      param_5 = PTR____NSArray0__struct_11034ab48;
      func_0x00010c01b5c0(uVar9,uVar3,uVar11,uVar16,puVar12);
      _objc_release(puVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar2);
      _objc_release(ppuVar15);
      _objc_release(puStack_180);
      _objc_release(puVar13);
      _objc_release(puVar1);
      unaff_x22 = ppuStack_178;
      ppuVar2 = ppuStack_168;
    }
    _objc_release(ppuVar2);
    _objc_release(unaff_x22);
  }
  _objc_release(unaff_x21);
LAB_105f40b2c:
  _objc_release(param_4);
  ppuVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  pppuVar8 = &ppuStack_1c0;
  pcStack_188 = FUN_105f40b84;
  ppuStack_1b0 = unaff_x22;
  ppuStack_1a8 = unaff_x21;
  puStack_1a0 = param_4;
  ppuStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  _objc_retain(puVar4);
  _objc_retain(param_5);
  puStack_1b8 = PTR_PTR_1126ee1b8;
  ppuStack_1c0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_1c0,PTR_s_init_1125d9248);
  if (pppuVar8 != (undefined ***)0x0) {
    *(undefined4 *)((long)pppuVar8 + 0x20) = 0;
    _objc_retain(ppuVar10);
    uVar9 = *(undefined8 *)((long)pppuVar8 + 8);
    *(undefined ***)((long)pppuVar8 + 8) = ppuVar10;
    _objc_release(uVar9);
    _objc_retain(puVar4);
    uVar9 = *(undefined8 *)((long)pppuVar8 + 0x10);
    *(undefined1 **)((long)pppuVar8 + 0x10) = puVar4;
    _objc_release(uVar9);
    _objc_retain(param_5);
    uVar9 = *(undefined8 *)((long)pppuVar8 + 0x18);
    *(undefined **)((long)pppuVar8 + 0x18) = param_5;
    _objc_release(uVar9);
  }
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(ppuVar10);
  return (undefined1 *)pppuVar8;
}



/* Entry: 105f40b84; end: 105f40c53; -[SCMapBasemapViewportItemsManager initWithViewport:basemapViewportLogger:mapLoggerSession:] */

undefined1 *
FUN_105f40b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ee1b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f40c54; end: 105f40c67; -[SCMapBasemapViewportItemsManager mapViewportItemsManagerIdentifier] */

void FUN_105f40c54(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 105f40c68; end: 105f40daf; -[SCMapBasemapViewportItemsManager getCurrentVisibleMapViewportItemsWithCreationBlock:queue:completionHandler:] */

void FUN_105f40c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x40) = 1;
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = param_3;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_release(uVar1);
  uVar1 = param_5;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105f40db0;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f40db0; end: 105f40e63;  */

void FUN_105f40db0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
    func_0x00010bfc2e20(uVar3);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x40) = 0;
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),PTR____NSArray0__struct_11034ab48);
  }
  else {
    lVar2 = param_1;
    func_0x00010be224e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retainBlock();
    _objc_initWeak(auStack_88,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_3);
    _objc_retain(lVar2);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f40e64; end: 105f40fc7; -[SCMapBasemapViewportItemsManager onBasemapFeaturesCaptured:] */

void FUN_105f40e64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x40) = 0;
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),PTR____NSArray0__struct_11034ab48);
  }
  else {
    lVar1 = param_1;
    func_0x00010be224e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retainBlock();
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(lVar1);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f40fc8; end: 105f40fff;  */

void FUN_105f40fc8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f41000; end: 105f411d3; -[SCMapBasemapViewportItemsManager _getScreenLocationDecimalForViewportItems:] */

void FUN_105f41000(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
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
  
  puVar4 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar5 = auStack_f8;
  uVar6 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_140,puVar5,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        fVar10 = SUB84(dVar11,0);
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_138 + lVar9 * 8);
        func_0x00010c08aca0(lVar7);
        dVar11 = (double)fVar10;
        func_0x00010c0b4a40(lVar7);
        _CLLocationCoordinate2DMake(dVar11,(double)fVar10);
        unaff_x23 = *(undefined8 *)(param_1 + 8);
        func_0x00010c1281c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = lVar7;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        if ((unaff_x24 != 0) && (lVar7 = unaff_x24, func_0x00010c08fa60(), lVar7 != 0)) {
          func_0x00010c1d0560(puVar2,param_2,unaff_x23,unaff_x24);
        }
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar5 = auStack_f8;
      uVar6 = 0x10;
      lVar1 = param_3;
      puVar4 = &uStack_140;
      func_0x00010bf52a60(param_3,param_2,&uStack_140,puVar5,0x10);
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105f411d4;
  lStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar2;
  lStack_160 = param_1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  if (*(char *)(lVar1 + 0x40) == '\x01') {
    func_0x00010be07860(lVar1,param_2,PTR____NSArray0__struct_11034ab48,uVar6);
  }
  else {
    _os_unfair_lock_lock(lVar1 + 0x20);
    lVar8 = *(long *)(lVar1 + 0x28);
    _objc_retainBlock();
    if (lVar8 == 0) {
      func_0x00010be07860(lVar1,param_2,PTR____NSArray0__struct_11034ab48,uVar6);
    }
    else {
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_105f4132c;
      puStack_198 = &UNK_1108fa600;
      _objc_retain(puVar5);
      puVar3 = (undefined1 *)puVar4;
      puStack_190 = puVar5;
      lStack_188 = lVar8;
      func_0x00010c0b8600(puVar4,param_2,&puStack_1b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be07860(lVar1,param_2,puVar3,uVar6);
      _objc_release(puVar3);
      _objc_release(puStack_190);
    }
    _objc_release(lVar8);
    _os_unfair_lock_unlock(lVar1 + 0x20);
  }
  _objc_release(uVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105f411d4; end: 105f4132b; -[SCMapBasemapViewportItemsManager _handleBasemapFeatures:viewportItemsToScreenLocations:completionHandler:] */

void FUN_105f411d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010be07860(param_1,param_2,PTR____NSArray0__struct_11034ab48,param_5);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    _objc_retainBlock();
    if (lVar1 == 0) {
      func_0x00010be07860(param_1,param_2,PTR____NSArray0__struct_11034ab48,param_5);
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105f4132c;
      puStack_58 = &UNK_1108fa600;
      _objc_retain(param_4);
      uVar2 = param_3;
      uStack_50 = param_4;
      lStack_48 = lVar1;
      func_0x00010c0b8600(param_3,param_2,&puStack_70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be07860(param_1,param_2,uVar2,param_5);
      _objc_release(uVar2);
      _objc_release(uStack_50);
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f4132c; end: 105f414c3;  */

void FUN_105f4132c(long param_1,undefined8 param_2,undefined8 param_3,undefined ***param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bfa1820(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar6 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e327f8;
    lVar3 = lVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e32818;
    lVar4 = lVar6;
    lStack_58 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    param_4 = &ppuStack_68;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = lVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  uVar1 = param_2;
  puVar5 = puVar7;
  func_0x00010bf931c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  ___stack_chk_fail();
  if ((puVar5 != (undefined *)0x0) && (param_4 != (undefined ***)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000105f414d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_4[2])(param_4,puVar5);
    return;
  }
  return;
}



/* Entry: 105f414c4; end: 105f414df; -[SCMapBasemapViewportItemsManager _emitBasemapViewportItems:completionHandler:] */

void FUN_105f414c4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105f414d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    return;
  }
  return;
}



/* Entry: 105f414e0; end: 105f4153f; -[SCMapBasemapViewportItemsManager .cxx_destruct] */

void FUN_105f414e0(long param_1)

{
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



/* Entry: 105f41540; end: 105f41563;  */

undefined8 FUN_105f41540(long param_1)

{
  if (param_1 - 1U < 9) {
    return *(undefined8 *)(&UNK_10ddd1970 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 105f41564; end: 105f41d27;  */

undefined1 * FUN_105f41564(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar14;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  ulong uVar13;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126c6328;
  _objc_alloc_init();
  lVar3 = param_1;
  func_0x00010c27dd80();
  if ((lVar3 != 2) && (lVar3 = param_1, func_0x00010c27dd80(), lVar3 != 1)) {
    lVar3 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9940(puVar2);
    _objc_release(lVar3);
  }
  func_0x00010c27dd80(param_1);
  func_0x00010c21acc0(puVar2);
  lVar3 = param_1;
  func_0x00010c087920(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7300(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  FUN_105f41540(param_2);
  func_0x00010c1f7280(puVar2);
  func_0x00010c151140(param_1);
  func_0x00010c1f72a0(puVar2);
  func_0x00010c151160(param_1);
  func_0x00010c1f72c0(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c27df80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar3 = param_1;
    puStack_158 = puVar5;
    func_0x00010c27df80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_120;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110e5bb98;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110e5bbb8;
      ppuStack_150 = &PTR____CFConstantStringClassReference_110e2cb78;
      ppuStack_160 = &PTR____CFConstantStringClassReference_110e06db8;
      ppuStack_168 = &PTR____CFConstantStringClassReference_110e32778;
      ppuStack_170 = &PTR____CFConstantStringClassReference_110e32798;
      ppuStack_178 = &PTR____CFConstantStringClassReference_110e327b8;
      ppuStack_180 = &PTR____CFConstantStringClassReference_110e327d8;
      ppuStack_188 = &PTR____CFConstantStringClassReference_110e06dd8;
      ppuStack_190 = &PTR____CFConstantStringClassReference_110df13d8;
      ppuStack_198 = &PTR____CFConstantStringClassReference_110e32858;
      ppuStack_140 = &PTR____CFConstantStringClassReference_110db3ed8;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar4);
          }
          uVar13 = *(ulong *)(lStack_128 + lVar10 * 8);
          iVar12 = (int)uVar13;
          iVar1 = iVar12;
          func_0x00010c0720c0();
          if (iVar1 == 0) {
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010bf1f3c0(lVar6);
              func_0x00010c1b0e80(puVar2);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010c1fd5c0(puVar2);
              goto LAB_105f4195c;
            }
            func_0x00010c0720c0();
            if (((uVar13 & 1) != 0) || (iVar1 = iVar12, func_0x00010c0720c0(), iVar1 != 0)) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010befa120(puStack_158);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010bf1f3c0(lVar6);
              func_0x00010c1af880(puVar2);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010c1620a0(puVar2);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010c0b4ca0(lVar6);
              func_0x00010c1b80e0(puVar2);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010bf1f3c0(lVar6);
              func_0x00010c1b44e0(puVar2);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010c1b27a0(puVar2);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010c223f20(puVar2);
              goto LAB_105f4195c;
            }
            iVar1 = iVar12;
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010c1e5020(puVar2);
              goto LAB_105f4195c;
            }
            func_0x00010c0720c0();
            if (iVar12 != 0) {
              lVar14 = param_1;
              func_0x00010c27df80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar14;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              func_0x00010c17fe60(puVar2);
              goto LAB_105f4195c;
            }
          }
          else {
            lVar14 = param_1;
            func_0x00010c27df80();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar14;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar14);
            _objc_retain(lVar6);
            lVar14 = lVar6;
            func_0x00010c08fa60();
            if (lVar14 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = lVar6;
              func_0x00010c25cfc0(lVar6);
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(lVar6);
            func_0x00010c168480(puVar2);
            _objc_release(lVar14);
LAB_105f4195c:
            _objc_release(lVar6);
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar4;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar4);
    puVar5 = puStack_158;
    puVar7 = puStack_158;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = puVar5;
      func_0x00010bf446e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c224000(puVar2);
      _objc_release(puVar7);
    }
  }
  _objc_release(puVar5);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_1d0;
  pcStack_1a8 = FUN_105f41d28;
  puStack_1c8 = PTR_PTR_1126ee1c0;
  lStack_1d0 = lVar3;
  puStack_1c0 = puVar2;
  lStack_1b8 = param_1;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_1d0,PTR_s_init_1125d9248);
  if (plVar8 != (long *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)plVar8 + 8);
    *(undefined **)((long)plVar8 + 8) = puVar2;
    _objc_release(uVar9);
  }
  return (undefined1 *)plVar8;
}



/* Entry: 105f41d28; end: 105f41d8b; -[SCMapViewportItemsDestinationHandler init] */

undefined1 * FUN_105f41d28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee1c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f41d8c; end: 105f41e0f; -[SCMapViewportItemsDestinationHandler handleMapDestinationEvent:] */

void FUN_105f41d8c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f41e10; end: 105f41e37; -[SCMapViewportItemsDestinationHandler mapDestinationObservable] */

void FUN_105f41e10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f41e38; end: 105f41e43; -[SCMapViewportItemsDestinationHandler .cxx_destruct] */

void FUN_105f41e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f41e44; end: 105f420af; -[SCMapViewportItemsRegistryServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f41e44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11273ad08;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000109021ef4();
  *(char *)(param_1 + _DAT_11273ac94) = (char)lVar2;
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = param_1 + _DAT_11273ad00;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273ac98);
  *(long *)(param_1 + _DAT_11273ac98) = lVar3;
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  puVar4 = PTR_PTR_1126c6330;
  _objc_alloc_init();
  lVar9 = (long)_DAT_11273ac9c;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar4;
  _objc_release(uVar8);
  uVar10 = *(undefined8 *)(param_1 + lVar9);
  _objc_retain(uVar10);
  puVar5 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f420b0;
  puStack_60 = &UNK_1108fa678;
  uStack_58 = uVar10;
  _objc_retain(uVar10);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c6338;
  _objc_alloc(PTR_PTR_1126c6338);
  func_0x00010c028980();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273ad0c));
  lVar9 = param_1;
  func_0x00010bdf0980();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273aca0);
  *(long *)(param_1 + _DAT_11273aca0) = lVar9;
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126c6340;
  _objc_alloc_init();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273aca4);
  *(undefined **)(param_1 + _DAT_11273aca4) = puVar7;
  _objc_release(uVar8);
  *(undefined4 *)(param_1 + _DAT_11273aca8) = 0;
  puVar7 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273acac);
  *(undefined **)(param_1 + _DAT_11273acac) = puVar7;
  _objc_release(uVar8);
  puStack_a0 = puVar4;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105f420d8;
  puStack_88 = &UNK_110842e18;
  lStack_80 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_a0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uStack_58);
  _objc_release(uVar10);
  return;
}



/* Entry: 105f420b0; end: 105f420d7;  */

void FUN_105f420b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f420d8; end: 105f422a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f420d8(long param_1)

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
  
  puVar1 = PTR_PTR_1126c6348;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_105f422a4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_105f422a4(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfcc2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105f422c8(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0623a0();
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273acb0);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11273acb0) = puVar1;
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
  func_0x00010be89980(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be89960(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be89f60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be898b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__registerLifecycleObserver_11257ffc8);
  return;
}



/* Entry: 105f422a4; end: 105f422eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f422a4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273acb4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f422ec; end: 105f4233b; -[SCMapViewportItemsRegistryServicesEntryPoint end] */

void FUN_105f422ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be2c060(param_1,param_2,1);
  puStack_28 = PTR_PTR_1126ee1c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f4233c; end: 105f42477; -[SCMapViewportItemsRegistryServicesEntryPoint _registerLifecycleObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4233c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11273acfc;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf07a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105f42478; end: 105f424a7;  */

void FUN_105f42478(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f424a8; end: 105f4260b; -[SCMapViewportItemsRegistryServicesEntryPoint _registerViewportObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f424a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  FUN_105f422a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29f500();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105f4260c; end: 105f4272b;  */

void FUN_105f4260c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f4272c;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bec60(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105f4272c; end: 105f4275b;  */

void FUN_105f4272c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4275c; end: 105f42763;  */

void FUN_105f4275c(void)

{
  return;
}



/* Entry: 105f42764; end: 105f4278f;  */

void FUN_105f42764(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f42790; end: 105f4279f;  */

void FUN_105f42790(void)

{
  return;
}



/* Entry: 105f427a0; end: 105f42903; -[SCMapViewportItemsRegistryServicesEntryPoint _registerMapLoadStateObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f427a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_11273acb4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b9340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c09d420();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105f42904; end: 105f429b7;  */

void FUN_105f42904(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bec40(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f429b8; end: 105f429bb;  */

void FUN_105f429b8(void)

{
  return;
}



/* Entry: 105f429bc; end: 105f429e7;  */

void FUN_105f429bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f429e8; end: 105f429eb;  */

void FUN_105f429e8(void)

{
  return;
}



/* Entry: 105f429ec; end: 105f42bd7; -[SCMapViewportItemsRegistryServicesEntryPoint _registerManualMapViewportUpdateObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f429ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar4 = param_1 + _DAT_11273acb8;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0babc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + _DAT_11273ac9c);
  func_0x00010c0b8e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0 && lVar4 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105f42bd8;
    puStack_78 = &UNK_110842a38;
    _objc_copyWeak(auStack_70,auStack_68);
    lVar1 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_copyWeak(auStack_98,auStack_68);
    lVar1 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105f42bd8; end: 105f42c77;  */

void FUN_105f42bd8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69f60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f42c78; end: 105f42db7; -[SCMapViewportItemsRegistryServicesEntryPoint _registerMapZoomEventObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f42c78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x000105f422c8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ba8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0bad20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar5 = lVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273acbc);
  *(long *)(param_1 + _DAT_11273acbc) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105f42db8; end: 105f42e07;  */

void FUN_105f42db8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69f60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f42e08; end: 105f430af; -[SCMapViewportItemsRegistryServicesEntryPoint _onManualViewportEventWithTimestamp:mapZoomId:snapshotImmediately:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f42e08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11273acc0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar7));
  if (param_5 == 0) {
    lVar1 = param_1 + _DAT_11273acf0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0b9440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0(param_3);
    func_0x00010c1c2900(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + _DAT_11273acc4) = 1;
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c150360(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_release(uVar6);
    _objc_release(param_4);
    _objc_release(param_3);
    puVar5 = auStack_88;
  }
  else {
    func_0x00010be2c060(param_1);
    lVar7 = param_1 + _DAT_11273acf0;
    _objc_loadWeakRetained(lVar7);
    lVar1 = lVar7;
    func_0x00010c0b9440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0(param_3);
    func_0x00010c1c2900(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar7);
    *(undefined1 *)(param_1 + _DAT_11273acc4) = 1;
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105f430b0;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bde6ce0(param_1);
    puVar5 = auStack_60;
  }
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f430b0; end: 105f43143;  */

void FUN_105f430b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f43144; end: 105f43177; -[SCMapViewportItemsRegistryServicesEntryPoint _handleMapLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f43144(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273acc8) = 1;
  func_0x00010be2c040();
                    /* WARNING: Could not recover jumptable at 0x00010be899d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerMapZoomEventObserver_112580010);
  return;
}



/* Entry: 105f43178; end: 105f4356b; -[SCMapViewportItemsRegistryServicesEntryPoint _handleMapViewportRegionWillChangeOrMapDisappeared:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f43178(double param_1,long param_2,undefined8 param_3,ulong param_4)

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
  long unaff_x19;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_1d8 [8];
  double dStack_1d0;
  undefined1 auStack_1c8 [8];
  long lStack_150;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_2 + _DAT_11273acc8) == '\x01') &&
     (unaff_x19 = param_2, (*(byte *)(param_2 + _DAT_11273acc4) & 1) == 0)) {
    func_0x00010c069d00(*(undefined8 *)(param_2 + _DAT_11273acc0));
    lStack_150 = (long)_DAT_11273aca8;
    _os_unfair_lock_lock(param_2 + lStack_150);
    lVar9 = (long)_DAT_11273accc;
    lVar11 = *(long *)(param_2 + lVar9);
    func_0x00010bf529e0(lVar11);
    _os_unfair_lock_unlock(param_2 + lStack_150);
    lVar13 = (long)_DAT_11273acd0;
    if (lVar11 != 0 && *(long *)(param_2 + lVar13) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar14 = param_1;
      _objc_release(puVar1);
      func_0x00010bf885a0(*(undefined8 *)(param_2 + _DAT_11273acd4));
      dVar14 = param_1 + dVar14 / -1000.0;
      func_0x00010c223580(dVar14,*(undefined8 *)(param_2 + lVar13));
      func_0x00010bedb260(param_2);
      lVar11 = param_2 + _DAT_11273acf4;
      _objc_loadWeakRetained();
      lVar2 = lVar11;
      func_0x00010c293fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar11);
      uVar12 = *(undefined8 *)(param_2 + _DAT_11273aca4);
      param_1 = 25.0;
      if ((double)(long)*(double *)(param_2 + _DAT_11273acd8) <= 25.0) {
        param_1 = (double)(long)*(double *)(param_2 + _DAT_11273acd8);
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      FUN_105f45f78(uVar12,puVar1,1);
      _objc_release(puVar1);
      if (((param_4 & 1) == 0) || ((*(byte *)(param_2 + _DAT_11273ac94) & 1) == 0)) {
        _os_unfair_lock_lock(param_2 + lStack_150);
        lVar3 = *(long *)(param_2 + _DAT_11273ace0);
        func_0x00010bf51e00();
        _os_unfair_lock_unlock(param_2 + lStack_150);
        param_1 = 0.0;
        _objc_retain(lVar3);
        lVar11 = lVar3;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar11 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar3);
            }
            lVar4 = param_2;
            param_1 = dVar14;
            func_0x00010bde6d00();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_2 + _DAT_11273acf4;
            _objc_loadWeakRetained();
            lVar6 = lVar5;
            func_0x00010c293fc0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b2e60();
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
            lVar10 = lVar10 + 1;
          } while (lVar11 != lVar10);
          lVar11 = lVar3;
          func_0x00010bf52a60();
        }
        _objc_release(lVar3);
        _objc_release(lVar3);
      }
    }
    uVar12 = *(undefined8 *)(param_2 + lVar13);
    *(undefined8 *)(param_2 + lVar13) = 0;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_2 + _DAT_11273acd4);
    *(undefined8 *)(param_2 + _DAT_11273acd4) = 0;
    _objc_release(uVar12);
    _os_unfair_lock_lock(param_2 + lStack_150);
    uVar12 = *(undefined8 *)(param_2 + lVar9);
    *(undefined8 *)(param_2 + lVar9) = 0;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_2 + _DAT_11273ace0);
    *(undefined8 *)(param_2 + _DAT_11273ace0) = 0;
    _objc_release(uVar12);
    param_2 = param_2 + lStack_150;
    _os_unfair_lock_unlock();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(unaff_x19 + lStack_150);
  __Unwind_Resume();
  if (*(char *)(param_2 + _DAT_11273acc8) == '\x01') {
    lVar8 = (long)_DAT_11273acc0;
    func_0x00010c069d00(*(undefined8 *)(param_2 + lVar8));
    if (*(char *)(param_2 + _DAT_11273acc4) == '\x01') {
      lVar8 = param_2 + _DAT_11273acf0;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar8;
      func_0x00010c0b9440();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bac20();
      _objc_release(lVar11);
      _objc_release(lVar9);
      _objc_release(lVar8);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2bec0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    lVar9 = param_2 + _DAT_11273acf0;
    _objc_loadWeakRetained(lVar9);
    lVar11 = lVar9;
    func_0x00010c0b9440();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2900();
    _objc_release(lVar13);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_initWeak(auStack_1c8,param_2);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_1d8,auStack_1c8);
    dStack_1d0 = param_1 * 1000.0;
    func_0x00010c150360(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + lVar8);
    *(undefined **)(param_2 + lVar8) = puVar1;
    _objc_release(uVar12);
    _objc_destroyWeak(auStack_1d8);
    _objc_destroyWeak(auStack_1c8);
  }
  return;
}



/* Entry: 105f4356c; end: 105f437af; -[SCMapViewportItemsRegistryServicesEntryPoint _handleMapViewportRegionDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4356c(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 auStack_58 [8];
  
  if (*(char *)(param_2 + _DAT_11273acc8) == '\x01') {
    lVar6 = (long)_DAT_11273acc0;
    func_0x00010c069d00(*(undefined8 *)(param_2 + lVar6));
    if (*(char *)(param_2 + _DAT_11273acc4) == '\x01') {
      lVar6 = param_2 + _DAT_11273acf0;
      _objc_loadWeakRetained(lVar6);
      lVar2 = lVar6;
      func_0x00010c0b9440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bac20();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2bec0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    lVar2 = param_2 + _DAT_11273acf0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0b9440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2900();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_initWeak(auStack_58,param_2);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_68,auStack_58);
    dStack_60 = param_1 * 1000.0;
    func_0x00010c150360(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    *(undefined **)(param_2 + lVar6) = puVar1;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105f437b0; end: 105f43813;  */

void FUN_105f437b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde6ce0(lVar1,param_2,puVar2,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f43814; end: 105f439d3; -[SCMapViewportItemsRegistryServicesEntryPoint _handleManualMapViewportUpdateWithMapViewportSessionId:mapZoomID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f43814(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11273aca8;
  _os_unfair_lock_lock(param_1 + lVar3);
  lVar2 = *(long *)(param_1 + _DAT_11273accc);
  _os_unfair_lock_unlock(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c2827c0();
    if (lVar2 == 0) {
      func_0x00010c2827c0(param_4);
    }
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bde6ce0(param_1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    lVar3 = (long)_DAT_11273acd0;
    lVar2 = *(long *)(param_1 + lVar3);
    if ((param_4 != 0) && (lVar2 != 0)) {
      func_0x00010c0b4ca0(param_4);
      func_0x00010c1c29a0(lVar2);
      lVar2 = *(long *)(param_1 + lVar3);
    }
    if ((param_3 != 0) && (lVar2 != 0)) {
      func_0x00010c0b4ca0(param_3);
      func_0x00010c1c2900(lVar2);
      lVar2 = param_3;
      func_0x00010c0b4ca0();
      *(long *)(param_1 + _DAT_11273acdc) = lVar2;
    }
    func_0x00010be2c020(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f439d4; end: 105f43a03;  */

void FUN_105f439d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f43a04; end: 105f43aaf; -[SCMapViewportItemsRegistryServicesEntryPoint _handleMapViewportItemsCollectedThenStartNewSession:] */

void FUN_105f43a04(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f43ab0;
  puStack_40 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f43ab0; end: 105f43b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f43ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_11273acc4) = 0;
    func_0x00010be2c060(lVar1,param_2,0);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010be2c040(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f43b0c; end: 105f43eb7; -[SCMapViewportItemsRegistryServicesEntryPoint _constructMapViewportViewEventWithViewportSessionTimestamp:mapZoomId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f43b0c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126c6350;
  _objc_retain(param_9);
  _objc_alloc_init();
  func_0x00010beea0e0(param_5);
  lVar7 = param_5;
  dVar8 = param_1;
  func_0x000105f422c8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15ffa0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  uVar10 = param_7;
  func_0x00010c0b4ca0(param_7);
  func_0x00010c1c2900(puVar1,param_6,uVar10);
  func_0x00010c1c25a0(puVar1,param_6,lVar4);
  if (param_8 != 0) {
    lVar7 = param_8;
    func_0x00010c0b4ca0(param_8);
    func_0x00010c1c29a0(puVar1,param_6,lVar7);
  }
  lVar7 = param_5;
  func_0x000105f422a4(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  func_0x00010c2bf200(lVar5);
  func_0x00010c227aa0(puVar1);
  func_0x00010c2bf200(lVar5);
  uVar10 = 0x4026000000000000;
  if (11.0 <= dVar8) {
    if (param_5 == 0) {
      lVar7 = 0;
      goto LAB_105f43d10;
    }
  }
  else {
    lVar7 = (long)_DAT_11273aca0;
    FUN_105f43eb8(param_1,*(undefined8 *)(param_5 + lVar7));
    func_0x00010c223460(puVar1);
    FUN_105f43eb8(param_2,*(undefined8 *)(param_5 + lVar7));
    func_0x00010c223480(puVar1);
    FUN_105f43eb8(param_3,*(undefined8 *)(param_5 + lVar7));
    func_0x00010c223600(puVar1);
    dVar8 = param_4;
    FUN_105f43eb8(*(undefined8 *)(param_5 + lVar7));
    func_0x00010c223620(puVar1);
  }
  lVar7 = param_5 + _DAT_11273acf8;
  _objc_loadWeakRetained(lVar7);
LAB_105f43d10:
  lVar2 = lVar7;
  func_0x00010c09f2a0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  dVar9 = dVar8;
  uVar11 = uVar10;
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  func_0x00010bf34640(lVar5);
  func_0x000108d312a8(dVar8,uVar10,dVar9,uVar11);
  dVar9 = 2.0;
  if (2.0 <= dVar8 * 0.001) {
    dVar9 = dVar8 * 0.001;
  }
  func_0x00010c223320(dVar9,puVar1);
  lVar7 = param_5;
  func_0x00010be20620(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223340(puVar1,param_6,lVar7);
  func_0x00010be20640(param_1,param_2,param_3,param_4,param_5,param_6,param_9);
  _objc_release(param_9);
  uVar10 = *(undefined8 *)(param_5 + _DAT_11273acd0);
  *(undefined **)(param_5 + _DAT_11273acd0) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_5 + _DAT_11273acd4);
  *(undefined8 *)(param_5 + _DAT_11273acd4) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar10);
  _objc_release(puVar1);
  *(long *)(param_5 + _DAT_11273ace4) = lVar4;
  uVar10 = param_7;
  func_0x00010c0b4ca0();
  _objc_release(param_7);
  *(undefined8 *)(param_5 + _DAT_11273acdc) = uVar10;
  func_0x00010c2bf200(lVar5);
  *(double *)(param_5 + _DAT_11273acd8) = param_1;
  _objc_release(lVar7);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 105f43eb8; end: 105f43f6b;  */

undefined8 FUN_105f43eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain();
  func_0x00010c0df720(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25d4c0(param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_2;
  func_0x00010c0de9e0(param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf885a0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 105f43f6c; end: 105f44063; -[SCMapViewportItemsRegistryServicesEntryPoint _getMapViewportContexts] */

void FUN_105f43f6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  FUN_105f44064();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5df80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  if (lVar5 != 0) {
    puVar6 = PTR_PTR_1126c6358;
    _objc_alloc_init(PTR_PTR_1126c6358);
    func_0x00010c1cafa0();
    lVar3 = lVar5;
    func_0x00010bf4bb00(lVar5,param_2,&PTR____CFConstantStringClassReference_110e32898);
    uVar1 = 1;
    if ((int)lVar3 == 0) {
      uVar1 = 2;
    }
    func_0x00010c21acc0(puVar6,param_2,uVar1);
    func_0x00010befa120(puVar2,param_2,puVar6);
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


