/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adc0110; end: 10adc0167;  */

long FUN_10adc0110(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adc0168; end: 10adc0247;  */

void FUN_10adc0168(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_50;
  plVar2 = &lStack_40;
  lStack_50 = param_1;
  uStack_48 = param_2;
  lStack_40 = param_1;
  uStack_38 = param_2;
  func_0x00010adbd7dc(plVar2,*param_4);
  if (*plVar2 != 0) {
    FUN_10a4fc000(&lStack_50,param_3);
    plVar6 = *(long **)(param_6 + 0x10);
    uVar5 = *(undefined8 *)*plVar2;
    _objc_retain(uVar5);
    if (*plVar6 == 0) {
      lStack_40 = 0;
    }
    else {
      func_0x00010bfc8da0(&lStack_40);
    }
    _objc_release(uVar5);
    lVar1 = lStack_40;
    lStack_40 = 0;
    lVar4 = *plVar3;
    *plVar3 = lVar1;
    if (lVar4 != 0) {
      FUN_10adc0050(plVar3);
      lVar1 = lStack_40;
      lStack_40 = 0;
      if (lVar1 != 0) {
        FUN_10adc0050(&lStack_40);
      }
    }
  }
  return;
}



/* Entry: 10adc0248; end: 10adc0263;  */

void FUN_10adc0248(void)

{
  return;
}



/* Entry: 10adc0264; end: 10adc03f3; -[LSAARKitPlanesConverter getByIDFromArKitFrame:frame:] */

void FUN_10adc0264(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c0b5be0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf52a60();
  if (uVar6 != 0) {
    lVar17 = *plStack_120;
    do {
      uVar20 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(param_4);
        }
        puVar15 = *(undefined1 **)(lStack_128 + uVar20 * 8);
        lVar7 = *(long *)(param_1 + 0x10);
        puVar11 = (undefined8 *)puVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar7 != 0) && (lVar18 = lVar7, func_0x00010c282760(), (int)lVar18 == param_3)) {
          _objc_retain(puVar15);
          _objc_release(lVar7);
          goto LAB_10adc0374;
        }
        _objc_release(lVar7);
        uVar20 = uVar20 + 1;
      } while (uVar6 != uVar20);
      uVar6 = param_4;
      puVar11 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar6 != 0);
  }
  puVar15 = (undefined1 *)0x0;
LAB_10adc0374:
  uVar6 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  _objc_retain(uVar6);
  plVar13 = (long *)(uVar6 + 0x18);
  lVar17 = *plVar13;
  lVar18 = *(long *)(uVar6 + 0x20);
  _objc_retain(uVar6);
  if (lVar17 == lVar18) {
LAB_10adc0484:
    lVar16 = lVar17 + 0x10;
    lVar10 = lVar17;
    if (lVar17 != lVar18 && lVar16 != lVar18) {
      do {
        uVar20 = uVar6;
        FUN_10adc147c(uVar6,puVar11,lVar16);
        if ((uVar20 & 1) == 0) {
          func_0x00010adc16f0(lVar17,lVar16);
          lVar17 = lVar17 + 0x10;
        }
        lVar16 = lVar16 + 0x10;
        lVar10 = lVar17;
      } while (lVar16 != lVar18);
    }
  }
  else {
    do {
      uVar20 = uVar6;
      FUN_10adc147c(uVar6,puVar11,lVar17);
      if ((uVar20 & 1) != 0) goto LAB_10adc0484;
      lVar17 = lVar17 + 0x10;
      lVar10 = lVar18;
    } while (lVar17 != lVar18);
  }
  _objc_release(uVar6);
  FUN_10adc13f0(plVar13,lVar10,*(undefined8 *)(uVar6 + 0x20));
  _objc_release(uVar6);
  puVar8 = (undefined1 *)puVar11;
  func_0x00010c0b5be0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar15 != (undefined1 *)0x0) {
    puVar21 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar8);
      }
      lVar18 = *(long *)(uVar6 + 0x10);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar18 == 0) {
        func_0x00010befa000(uVar6);
      }
      _objc_release(lVar18);
      puVar21 = puVar21 + 1;
    } while (puVar15 != puVar21);
    puVar15 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  piVar9 = (int *)0x38;
  __Znwm();
  piVar9[0xc] = 0;
  piVar9[0xd] = 0;
  piVar9[6] = 0;
  piVar9[7] = 0;
  piVar9[4] = 0;
  piVar9[5] = 0;
  piVar9[10] = 0;
  piVar9[0xb] = 0;
  piVar9[8] = 0;
  piVar9[9] = 0;
  piVar9[2] = 0;
  piVar9[3] = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *extraout_x8 = piVar9;
  iVar2 = *(int *)(uVar6 + 0xc);
  *(int *)(uVar6 + 0xc) = iVar2 + 1;
  *piVar9 = iVar2;
  if ((long *)(piVar9 + 2) != plVar13) {
    puVar14 = *(undefined8 **)(uVar6 + 0x18);
    puVar1 = *(undefined8 **)(uVar6 + 0x20);
    lVar17 = (long)puVar1 - (long)puVar14;
    if (lVar17 == 0) {
      piVar9[4] = 0;
      piVar9[5] = 0;
    }
    else {
      puVar19 = (undefined8 *)(lVar17 >> 4);
      func_0x00010adc1754();
      if ((ulong)puVar19 >> 0x3c != 0) goto LAB_10adc06e0;
      puVar12 = (undefined8 *)(*(long *)(piVar9 + 6) - *(long *)(piVar9 + 2) >> 3);
      if (puVar12 <= puVar19) {
        puVar12 = puVar19;
      }
      if (0x7fffffffffffffef < (ulong)(*(long *)(piVar9 + 6) - *(long *)(piVar9 + 2))) {
        puVar12 = (undefined8 *)0xfffffffffffffff;
      }
      if ((ulong)puVar12 >> 0x3c != 0) goto LAB_10adc06e0;
      FUN_10adc17c4();
      *(undefined8 **)(piVar9 + 2) = puVar12;
      *(undefined8 **)(piVar9 + 4) = puVar12;
      *(undefined8 **)(piVar9 + 6) = puVar12 + lVar10 * 2;
      do {
        lVar17 = puVar14[1];
        uVar22 = *puVar14;
        puVar12[1] = puVar14[1];
        *puVar12 = uVar22;
        if (lVar17 != 0) {
          plVar13 = (long *)(lVar17 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar14 = puVar14 + 2;
        puVar12 = puVar12 + 2;
      } while (puVar14 != puVar1);
      *(undefined8 **)(piVar9 + 4) = puVar12;
    }
  }
  func_0x00010adc1754(piVar9 + 8);
  uVar22 = *(undefined8 *)(uVar6 + 0x30);
  *(undefined8 *)(piVar9 + 10) = *(undefined8 *)(uVar6 + 0x38);
  *(undefined8 *)(piVar9 + 8) = uVar22;
  *(undefined8 *)(piVar9 + 0xc) = *(undefined8 *)(uVar6 + 0x40);
  *(undefined8 *)(uVar6 + 0x38) = 0;
  *(undefined8 *)(uVar6 + 0x40) = 0;
  *(undefined8 *)(uVar6 + 0x30) = 0;
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_10adc06e0:
  FUN_10adc17b0();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10adc06e8);
  (*pcVar5)();
}



/* Entry: 10adc03f4; end: 10adc075b; -[LSAARKitPlanesConverter getPlanesFromFrame:] */

void FUN_10adc03f4(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_2);
  plVar13 = (long *)(param_2 + 0x18);
  lVar15 = *plVar13;
  lVar16 = *(long *)(param_2 + 0x20);
  _objc_retain(param_2);
  if (lVar15 == lVar16) {
LAB_10adc0484:
    lVar7 = lVar15 + 0x10;
    lVar10 = lVar15;
    if (lVar15 != lVar16 && lVar7 != lVar16) {
      do {
        uVar6 = param_2;
        FUN_10adc147c(param_2,param_4,lVar7);
        if ((uVar6 & 1) == 0) {
          func_0x00010adc16f0(lVar15,lVar7);
          lVar15 = lVar15 + 0x10;
        }
        lVar7 = lVar7 + 0x10;
        lVar10 = lVar15;
      } while (lVar7 != lVar16);
    }
  }
  else {
    do {
      uVar6 = param_2;
      FUN_10adc147c(param_2,param_4,lVar15);
      if ((uVar6 & 1) != 0) goto LAB_10adc0484;
      lVar15 = lVar15 + 0x10;
      lVar10 = lVar16;
    } while (lVar15 != lVar16);
  }
  _objc_release(param_2);
  FUN_10adc13f0(plVar13,lVar10,*(undefined8 *)(param_2 + 0x20));
  _objc_release(param_2);
  lVar7 = param_4;
  func_0x00010c0b5be0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar7;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (lVar15 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar7);
      }
      lVar8 = *(long *)(param_2 + 0x10);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        func_0x00010befa000(param_2);
      }
      _objc_release(lVar8);
      lVar18 = lVar18 + 1;
    } while (lVar15 != lVar18);
    lVar15 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  piVar9 = (int *)0x38;
  __Znwm();
  piVar9[0xc] = 0;
  piVar9[0xd] = 0;
  piVar9[6] = 0;
  piVar9[7] = 0;
  piVar9[4] = 0;
  piVar9[5] = 0;
  piVar9[10] = 0;
  piVar9[0xb] = 0;
  piVar9[8] = 0;
  piVar9[9] = 0;
  piVar9[2] = 0;
  piVar9[3] = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *param_1 = piVar9;
  iVar2 = *(int *)(param_2 + 0xc);
  *(int *)(param_2 + 0xc) = iVar2 + 1;
  *piVar9 = iVar2;
  if ((long *)(piVar9 + 2) != plVar13) {
    puVar14 = *(undefined8 **)(param_2 + 0x18);
    puVar1 = *(undefined8 **)(param_2 + 0x20);
    lVar15 = (long)puVar1 - (long)puVar14;
    if (lVar15 == 0) {
      piVar9[4] = 0;
      piVar9[5] = 0;
    }
    else {
      puVar17 = (undefined8 *)(lVar15 >> 4);
      func_0x00010adc1754();
      if ((ulong)puVar17 >> 0x3c != 0) goto LAB_10adc06e0;
      puVar12 = (undefined8 *)(*(long *)(piVar9 + 6) - *(long *)(piVar9 + 2) >> 3);
      if (puVar12 <= puVar17) {
        puVar12 = puVar17;
      }
      if (0x7fffffffffffffef < (ulong)(*(long *)(piVar9 + 6) - *(long *)(piVar9 + 2))) {
        puVar12 = (undefined8 *)0xfffffffffffffff;
      }
      if ((ulong)puVar12 >> 0x3c != 0) goto LAB_10adc06e0;
      FUN_10adc17c4();
      *(undefined8 **)(piVar9 + 2) = puVar12;
      *(undefined8 **)(piVar9 + 4) = puVar12;
      *(undefined8 **)(piVar9 + 6) = puVar12 + lVar10 * 2;
      do {
        lVar15 = puVar14[1];
        uVar19 = *puVar14;
        puVar12[1] = puVar14[1];
        *puVar12 = uVar19;
        if (lVar15 != 0) {
          plVar13 = (long *)(lVar15 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar14 = puVar14 + 2;
        puVar12 = puVar12 + 2;
      } while (puVar14 != puVar1);
      *(undefined8 **)(piVar9 + 4) = puVar12;
    }
  }
  func_0x00010adc1754(piVar9 + 8);
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(piVar9 + 10) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(piVar9 + 8) = uVar19;
  *(undefined8 *)(piVar9 + 0xc) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
LAB_10adc06e0:
  FUN_10adc17b0();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10adc06e8);
  (*pcVar5)();
}



/* Entry: 10adc075c; end: 10adc0a3f; -[LSAARKitPlanesConverter updateARAnchors:] */

void FUN_10adc075c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int **param_6,ulong param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  uint auStack_220 [16];
  int *piStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  plVar12 = (long *)(param_5 + 0x30);
  lVar16 = *plVar12;
  lVar8 = *(long *)(param_5 + 0x38);
  while (lVar8 != lVar16) {
    lVar8 = lVar8 + -0x10;
    FUN_10adc0110();
  }
  *(long *)(param_5 + 0x38) = lVar16;
  uVar22 = 0;
  uVar25 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_7);
  uVar9 = param_7;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    lVar8 = *plStack_150;
    do {
      uVar20 = 0;
      do {
        if (*plStack_150 != lVar8) {
          _objc_enumerationMutation(param_7);
        }
        uVar17 = *(ulong *)(lStack_158 + uVar20 * 8);
        param_6 = (int **)PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8;
        _objc_opt_class();
        uVar10 = uVar17;
        _objc_opt_isKindOfClass();
        if ((uVar10 & 1) != 0) {
          lVar16 = *(long *)(param_5 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar16 != 0) {
            lVar19 = lVar16;
            func_0x00010c282760();
            for (puVar13 = *(undefined8 **)(param_5 + 0x18);
                puVar13 != *(undefined8 **)(param_5 + 0x20); puVar13 = puVar13 + 2) {
              piStack_170 = (int *)*puVar13;
              if (*piStack_170 == (int)lVar19) {
                lStack_168 = puVar13[1];
                if (lStack_168 != 0) {
                  plVar1 = (long *)(lStack_168 + 8);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = *plVar1 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                goto LAB_10adc08b8;
              }
            }
            piStack_170 = (int *)0x0;
            lStack_168 = 0;
LAB_10adc08b8:
            lVar19 = lStack_168;
            piVar15 = piStack_170;
            param_6 = &piStack_170;
            FUN_10adc0a40(uVar17);
            puVar13 = *(undefined8 **)(param_5 + 0x38);
            if (puVar13 < *(undefined8 **)(param_5 + 0x40)) {
              *puVar13 = piVar15;
              puVar13[1] = lVar19;
              puVar13 = puVar13 + 2;
            }
            else {
              lVar18 = (long)puVar13 - *plVar12;
              uVar10 = (lVar18 >> 4) + 1;
              if (uVar10 >> 0x3c != 0) {
                FUN_10adc17b0();
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10adc09e8);
                (*pcVar7)();
              }
              uVar14 = (long)*(undefined8 **)(param_5 + 0x40) - *plVar12;
              uVar17 = (long)uVar14 >> 3;
              if (uVar17 <= uVar10) {
                uVar17 = uVar10;
              }
              if (0x7fffffffffffffef < uVar14) {
                uVar17 = 0xfffffffffffffff;
              }
              plStack_f8 = plVar12;
              FUN_10adc17c4();
              puVar2 = (undefined8 *)(uVar17 + lVar18);
              lVar18 = (long)param_6 * 0x10;
              *puVar2 = piVar15;
              puVar2[1] = lVar19;
              puVar13 = puVar2 + 2;
              param_6 = *(int ***)(param_5 + 0x30);
              lVar19 = (long)puVar2 - (*(long *)(param_5 + 0x38) - (long)param_6);
              _memcpy(lVar19);
              uStack_118 = *(undefined8 *)(param_5 + 0x30);
              *(long *)(param_5 + 0x30) = lVar19;
              *(undefined8 **)(param_5 + 0x38) = puVar13;
              uStack_100 = *(undefined8 *)(param_5 + 0x40);
              *(ulong *)(param_5 + 0x40) = uVar17 + lVar18;
              uStack_110 = uStack_118;
              uStack_108 = uStack_118;
              FUN_10acfab40(&uStack_118);
            }
            *(undefined8 **)(param_5 + 0x38) = puVar13;
          }
          _objc_release(lVar16);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar9);
      uVar9 = param_7;
      func_0x00010bf52a60();
    } while (uVar9 != 0);
  }
  _objc_release(param_7);
  uVar9 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  _objc_release(param_7);
  __Unwind_Resume();
  _objc_retain();
  func_0x00010c27a460(uVar9);
  uVar20 = 0;
  uStack_258 = uVar25;
  uStack_260 = uVar22;
  uStack_248 = in_register_00005028;
  uStack_250 = param_2;
  uStack_238 = in_register_00005048;
  uStack_240 = param_3;
  uStack_228 = in_register_00005068;
  uStack_230 = param_4;
  auStack_220[2] = 0;
  auStack_220[3] = 0;
  auStack_220[0] = 0x3f800000;
  auStack_220[1] = 0;
  auStack_220[6] = 0;
  auStack_220[7] = 0;
  auStack_220[4] = 0;
  auStack_220[5] = 0x3f800000;
  auStack_220[10] = 0x3f800000;
  auStack_220[0xb] = 0;
  auStack_220[8] = 0;
  auStack_220[9] = 0;
  auStack_220[0xe] = 0;
  auStack_220[0xf] = 0x3f800000;
  auStack_220[0xc] = 0;
  auStack_220[0xd] = 0;
  do {
    lVar16 = 0;
    lVar8 = 0;
    do {
      uVar21 = *(uint *)((long)&uStack_260 + (uVar20 & 3) * 4 + lVar16);
      uVar10 = (ulong)uVar21;
      fVar23 = 0.0;
      iVar11 = (int)uVar20;
      puVar4 = auStack_220 + lVar8 * 4 + 3;
      if (iVar11 != 3) {
        puVar4 = (uint *)((long)auStack_220 + lVar16);
      }
      puVar3 = auStack_220 + lVar8 * 4 + 2;
      if (iVar11 != 2) {
        puVar3 = puVar4;
      }
      puVar4 = auStack_220 + lVar8 * 4 + 1;
      if (iVar11 != 1) {
        puVar4 = puVar3;
      }
      *puVar4 = uVar21;
      lVar8 = lVar8 + 1;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0x40);
    uVar20 = (ulong)(iVar11 + 1U);
  } while (iVar11 + 1U != 4);
  FUN_10adbfd44(auStack_220,*param_6 + 1,*param_6 + 4);
  func_0x00010bf345e0(uVar9);
  piVar15 = *param_6;
  uVar22 = CONCAT44((float)(uVar10 >> 0x20) * 100.0,(float)uVar10 * 100.0);
  fVar24 = 0.0;
  *(undefined8 *)(piVar15 + 8) = uVar22;
  piVar15[10] = (int)(fVar23 * 100.0);
  func_0x00010bf9de20(uVar9);
  piVar15 = *param_6;
  *(ulong *)(piVar15 + 0xb) = CONCAT44((float)((ulong)uVar22 >> 0x20) * 100.0,(float)uVar22 * 100.0)
  ;
  piVar15[0xd] = (int)(fVar24 * 100.0);
  uVar20 = uVar9;
  func_0x00010beffa20();
  piVar15 = *param_6;
  *(bool *)(piVar15 + 0x1a) = uVar20 != 0;
  uVar20 = uVar9;
  func_0x00010bfc1860(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar20;
  func_0x00010c298d80();
  func_0x0001096b5198(piVar15 + 0xe,uVar10);
  _objc_release(uVar20);
  piVar15 = *param_6;
  uVar20 = uVar9;
  func_0x00010bfc1860(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar20;
  func_0x00010c27bb60();
  func_0x000108262984(piVar15 + 0x14,uVar10 * 3);
  _objc_release(uVar20);
  lVar8 = 0;
  uVar20 = 0;
  while( true ) {
    uVar10 = uVar9;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar10;
    func_0x00010c298d80();
    _objc_release(uVar10);
    if (uVar17 <= uVar20) break;
    uVar10 = uVar9;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar10;
    func_0x00010c299120();
    _objc_release(uVar10);
    puVar13 = (undefined8 *)(uVar17 + uVar20 * 0x10);
    uVar25 = puVar13[1];
    uVar22 = *puVar13;
    lVar16 = *(long *)(*param_6 + 0xe);
    *(undefined8 *)(lVar16 + lVar8) =
         CONCAT44((float)((ulong)uVar22 >> 0x20) * 100.0,(float)uVar22 * 100.0);
    *(float *)((undefined8 *)(lVar16 + lVar8) + 1) = (float)uVar25 * 100.0;
    uVar20 = uVar20 + 1;
    lVar8 = lVar8 + 0xc;
  }
  uVar20 = 0;
  while( true ) {
    uVar10 = uVar9;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar10;
    func_0x00010c27bb60();
    _objc_release(uVar10);
    if (uVar17 * 3 <= uVar20) break;
    uVar10 = uVar9;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar10;
    func_0x00010c27bba0();
    *(undefined2 *)(*(long *)(*param_6 + 0x14) + uVar20 * 2) = *(undefined2 *)(uVar17 + uVar20 * 2);
    _objc_release(uVar10);
    uVar20 = uVar20 + 1;
  }
  _objc_release(uVar9);
  return;
}



/* Entry: 10adc0a40; end: 10adc0d3f;  */

void FUN_10adc0a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long *param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 in_register_00005008;
  undefined8 uVar14;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint auStack_a0 [16];
  
  _objc_retain();
  func_0x00010c27a460(param_5);
  uVar7 = 0;
  uStack_d8 = in_register_00005008;
  uStack_e0 = param_1;
  uStack_c8 = in_register_00005028;
  uStack_d0 = param_2;
  uStack_b8 = in_register_00005048;
  uStack_c0 = param_3;
  uStack_a8 = in_register_00005068;
  uStack_b0 = param_4;
  auStack_a0[2] = 0;
  auStack_a0[3] = 0;
  auStack_a0[0] = 0x3f800000;
  auStack_a0[1] = 0;
  auStack_a0[6] = 0;
  auStack_a0[7] = 0;
  auStack_a0[4] = 0;
  auStack_a0[5] = 0x3f800000;
  auStack_a0[10] = 0x3f800000;
  auStack_a0[0xb] = 0;
  auStack_a0[8] = 0;
  auStack_a0[9] = 0;
  auStack_a0[0xe] = 0;
  auStack_a0[0xf] = 0x3f800000;
  auStack_a0[0xc] = 0;
  auStack_a0[0xd] = 0;
  do {
    lVar8 = 0;
    lVar9 = 0;
    do {
      uVar10 = *(uint *)((long)&uStack_e0 + (uVar7 & 3) * 4 + lVar8);
      uVar4 = (ulong)uVar10;
      fVar12 = 0.0;
      iVar6 = (int)uVar7;
      puVar2 = auStack_a0 + lVar9 * 4 + 3;
      if (iVar6 != 3) {
        puVar2 = (uint *)((long)auStack_a0 + lVar8);
      }
      puVar1 = auStack_a0 + lVar9 * 4 + 2;
      if (iVar6 != 2) {
        puVar1 = puVar2;
      }
      puVar2 = auStack_a0 + lVar9 * 4 + 1;
      if (iVar6 != 1) {
        puVar2 = puVar1;
      }
      *puVar2 = uVar10;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x40);
    uVar7 = (ulong)(iVar6 + 1U);
  } while (iVar6 + 1U != 4);
  FUN_10adbfd44(auStack_a0,*param_6 + 4,*param_6 + 0x10);
  func_0x00010bf345e0(param_5);
  lVar9 = *param_6;
  uVar11 = CONCAT44((float)(uVar4 >> 0x20) * 100.0,(float)uVar4 * 100.0);
  fVar13 = 0.0;
  *(undefined8 *)(lVar9 + 0x20) = uVar11;
  *(float *)(lVar9 + 0x28) = fVar12 * 100.0;
  func_0x00010bf9de20(param_5);
  lVar9 = *param_6;
  *(ulong *)(lVar9 + 0x2c) = CONCAT44((float)((ulong)uVar11 >> 0x20) * 100.0,(float)uVar11 * 100.0);
  *(float *)(lVar9 + 0x34) = fVar13 * 100.0;
  uVar7 = param_5;
  func_0x00010beffa20();
  lVar9 = *param_6;
  *(bool *)(lVar9 + 0x68) = uVar7 != 0;
  uVar7 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c298d80();
  func_0x0001096b5198(lVar9 + 0x38,uVar4);
  _objc_release(uVar7);
  lVar9 = *param_6;
  uVar7 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c27bb60();
  func_0x000108262984(lVar9 + 0x50,uVar4 * 3);
  _objc_release(uVar7);
  lVar9 = 0;
  uVar7 = 0;
  while( true ) {
    uVar4 = param_5;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c298d80();
    _objc_release(uVar4);
    if (uVar5 <= uVar7) break;
    uVar4 = param_5;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c299120();
    _objc_release(uVar4);
    puVar3 = (undefined8 *)(uVar5 + uVar7 * 0x10);
    uVar14 = puVar3[1];
    uVar11 = *puVar3;
    puVar3 = (undefined8 *)(*(long *)(*param_6 + 0x38) + lVar9);
    *puVar3 = CONCAT44((float)((ulong)uVar11 >> 0x20) * 100.0,(float)uVar11 * 100.0);
    *(float *)(puVar3 + 1) = (float)uVar14 * 100.0;
    uVar7 = uVar7 + 1;
    lVar9 = lVar9 + 0xc;
  }
  uVar7 = 0;
  while( true ) {
    uVar4 = param_5;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c27bb60();
    _objc_release(uVar4);
    if (uVar5 * 3 <= uVar7) break;
    uVar4 = param_5;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c27bba0();
    *(undefined2 *)(*(long *)(*param_6 + 0x50) + uVar7 * 2) = *(undefined2 *)(uVar5 + uVar7 * 2);
    _objc_release(uVar4);
    uVar7 = uVar7 + 1;
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10adc0d40; end: 10adc0e9b; -[LSAARKitPlanesConverter addARAnchors:] */

undefined1 * FUN_10adc0d40(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar12 = *plStack_110;
    do {
      puVar16 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(ulong *)(lStack_118 + (long)puVar16 * 8);
        puVar5 = PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8;
        _objc_opt_class(PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8);
        _objc_opt_isKindOfClass(uVar11,puVar5);
        if ((uVar11 & 1) != 0) {
          func_0x00010befa000(param_1);
        }
        puVar16 = puVar16 + 1;
      } while (puVar4 != puVar16);
      puVar4 = param_3;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_128 = FUN_10adc0e9c;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(puVar10);
  puVar16 = (undefined1 *)puVar10;
  puStack_258 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar16 != (undefined1 *)0x0) {
    lVar12 = *plStack_240;
    do {
      puVar17 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar12) {
          _objc_enumerationMutation(puStack_258);
        }
        uVar11 = *(ulong *)(lStack_248 + (long)puVar17 * 8);
        puVar5 = PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8;
        _objc_opt_class(PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8);
        _objc_opt_isKindOfClass(uVar11,puVar5);
        if ((uVar11 & 1) != 0) {
          lVar6 = *(long *)(puVar4 + 0x10);
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(puVar4 + 0x10));
            puVar1 = *(undefined8 **)(puVar4 + 0x20);
            puVar13 = *(undefined8 **)(puVar4 + 0x18);
            puVar14 = puVar13;
            for (; puVar13 != puVar1; puVar13 = puVar13 + 2) {
              iVar2 = *(int *)*puVar13;
              lVar7 = lVar6;
              func_0x00010c282760();
              if (iVar2 == (int)lVar7) {
                puVar14 = puVar13;
                puVar15 = puVar13;
                if (puVar13 != puVar1) {
                  while (puVar15 = puVar15 + 2, puVar14 = puVar13, puVar15 != puVar1) {
                    uVar3 = *(uint *)*puVar15;
                    puVar10 = (undefined8 *)(ulong)uVar3;
                    lVar7 = lVar6;
                    func_0x00010c282760();
                    if (uVar3 != (uint)lVar7) {
                      FUN_10adc16f0(puVar13,puVar15);
                      puVar13 = puVar13 + 2;
                    }
                  }
                }
                break;
              }
              puVar14 = puVar1;
            }
            FUN_10adc13f0(puVar4 + 0x18,puVar14,*(undefined8 *)(puVar4 + 0x20));
          }
          _objc_release(lVar6);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar16);
      puVar16 = puStack_258;
      func_0x00010bf52a60();
    } while (puVar16 != (undefined1 *)0x0);
  }
  _objc_release(puStack_258);
  puVar4 = puStack_258;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puStack_258);
  _objc_release(puStack_258);
  puVar16 = puVar4;
  __Unwind_Resume();
  ppuVar8 = &puStack_290;
  pcStack_268 = FUN_10adc10d4;
  puStack_288 = PTR_PTR_112701458;
  puStack_290 = puVar16;
  puStack_280 = puVar4;
  puStack_278 = (undefined1 *)puVar10;
  ppuStack_270 = &puStack_130;
  _objc_msgSendSuper2(&puStack_290,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined1 **)0x0) {
    *(undefined8 *)((long)ppuVar8 + 8) = 0x100000001;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar8 + 0x10);
    *(undefined **)((long)ppuVar8 + 0x10) = puVar5;
    _objc_release(uVar9);
  }
  return (undefined1 *)ppuVar8;
}



/* Entry: 10adc0e9c; end: 10adc10d3; -[LSAARKitPlanesConverter removeARAnchors:] */

undefined1 * FUN_10adc0e9c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = param_3;
  puStack_138 = param_3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar14 = *plStack_120;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(puStack_138);
        }
        uVar10 = *(ulong *)(lStack_128 + (long)puVar15 * 8);
        puVar5 = PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8;
        _objc_opt_class(PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8);
        _objc_opt_isKindOfClass(uVar10,puVar5);
        if ((uVar10 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x10);
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
            puVar1 = *(undefined8 **)(param_1 + 0x20);
            puVar11 = *(undefined8 **)(param_1 + 0x18);
            puVar12 = puVar11;
            for (; puVar11 != puVar1; puVar11 = puVar11 + 2) {
              iVar2 = *(int *)*puVar11;
              lVar7 = lVar6;
              func_0x00010c282760();
              if (iVar2 == (int)lVar7) {
                puVar12 = puVar11;
                puVar13 = puVar11;
                if (puVar11 != puVar1) {
                  while (puVar13 = puVar13 + 2, puVar12 = puVar11, puVar13 != puVar1) {
                    uVar3 = *(uint *)*puVar13;
                    param_3 = (undefined1 *)(ulong)uVar3;
                    lVar7 = lVar6;
                    func_0x00010c282760();
                    if (uVar3 != (uint)lVar7) {
                      FUN_10adc16f0(puVar11,puVar13);
                      puVar11 = puVar11 + 2;
                    }
                  }
                }
                break;
              }
              puVar12 = puVar1;
            }
            FUN_10adc13f0(param_1 + 0x18,puVar12,*(undefined8 *)(param_1 + 0x20));
          }
          _objc_release(lVar6);
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar4);
      puVar4 = puStack_138;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(puStack_138);
  puVar4 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puStack_138);
  _objc_release(puStack_138);
  puVar15 = puVar4;
  __Unwind_Resume();
  ppuVar8 = &puStack_170;
  pcStack_148 = FUN_10adc10d4;
  puStack_168 = PTR_PTR_112701458;
  puStack_170 = puVar15;
  puStack_160 = puVar4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined1 **)0x0) {
    *(undefined8 *)((long)ppuVar8 + 8) = 0x100000001;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar8 + 0x10);
    *(undefined **)((long)ppuVar8 + 0x10) = puVar5;
    _objc_release(uVar9);
  }
  return (undefined1 *)ppuVar8;
}



/* Entry: 10adc10d4; end: 10adc1163; -[LSAARKitPlanesConverter init] */

undefined1 * FUN_10adc10d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0x100000001;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10adc1164; end: 10adc1387; -[LSAARKitPlanesConverter addNewPlane:] */

void FUN_10adc1164(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  plVar7 = (long *)0x88;
  __Znwm();
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c6dda8;
  plVar13 = plVar7 + 3;
  plVar7[4] = 0;
  *plVar13 = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[0x10] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  *(undefined4 *)((long)plVar7 + 0x34) = 0x3f800000;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  *(undefined8 *)((long)plVar7 + 0x7a) = 0;
  *(undefined8 *)((long)plVar7 + 0x72) = 0;
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  *(int *)plVar13 = iVar3;
  puVar14 = *(undefined8 **)(param_1 + 0x20);
  plStack_88 = plVar13;
  plStack_80 = plVar7;
  if (puVar14 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar14 = plVar13;
    puVar14[1] = plVar7;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar14 = puVar14 + 2;
  }
  else {
    plStack_58 = (long *)(param_1 + 0x18);
    lVar9 = (long)puVar14 - *plStack_58;
    uVar1 = (lVar9 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10adc17b0();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10adc1354);
      (*pcVar6)();
    }
    uVar10 = (long)*(undefined8 **)(param_1 + 0x28) - *plStack_58;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    FUN_10adc17c4();
    puVar2 = (undefined8 *)(uVar11 + lVar9);
    *puVar2 = plVar13;
    puVar2[1] = plVar7;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar14 = puVar2 + 2;
    lVar9 = (long)puVar2 - (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18));
    _memcpy(lVar9);
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar9;
    *(undefined8 **)(param_1 + 0x20) = puVar14;
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = uVar11 + param_2 * 0x10;
    uStack_70 = uStack_78;
    uStack_68 = uStack_78;
    FUN_10acfab40(&uStack_78);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar14;
  FUN_10adc0a40(param_3,&plStack_88);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar8);
  do {
    lVar9 = *plVar12;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10adc1388; end: 10adc13d7; -[LSAARKitPlanesConverter .cxx_destruct] */

void FUN_10adc1388(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x30;
  FUN_10adc00a0(&lStack_28);
  lStack_28 = param_1 + 0x18;
  FUN_10adc00a0(&lStack_28);
  _objc_storeStrong(param_1 + 0x10,0);
  return;
}



/* Entry: 10adc13d8; end: 10adc13ef; -[LSAARKitPlanesConverter .cxx_construct] */

void FUN_10adc13d8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10adc13f0; end: 10adc147b;  */

long FUN_10adc13f0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != param_2) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = param_2;
    if (param_3 != lVar1) {
      do {
        FUN_10adc16f0(lVar2,param_3);
        param_3 = param_3 + 0x10;
        lVar2 = lVar2 + 0x10;
      } while (param_3 != lVar1);
      lVar1 = *(long *)(param_1 + 8);
    }
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_10adc0110(lVar1);
    }
    *(long *)(param_1 + 8) = lVar2;
  }
  return param_2;
}



/* Entry: 10adc147c; end: 10adc16ef;  */

undefined8 * FUN_10adc147c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1;
  func_0x00010bfc32c0(param_1,param_2,*(undefined4 *)*param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 == 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x30);
    puVar11 = *(undefined8 **)(param_1 + 0x38);
    param_2 = puVar7;
    if (puVar7 != puVar11) {
      do {
        if (*(int *)*puVar7 == *(int *)*param_3) {
          param_2 = puVar7;
          if ((puVar7 != puVar11) && (puVar13 = puVar7 + 2, puVar13 != puVar11)) {
            do {
              if (*(int *)*puVar13 != *(int *)*param_3) {
                FUN_10adc16f0(puVar7,puVar13);
                puVar7 = puVar7 + 2;
              }
              puVar13 = puVar13 + 2;
            } while (puVar13 != puVar11);
            puVar11 = *(undefined8 **)(param_1 + 0x38);
            param_2 = puVar7;
          }
          break;
        }
        puVar7 = puVar7 + 2;
        param_2 = puVar11;
      } while (puVar7 != puVar11);
    }
    FUN_10adc13f0((undefined8 *)(param_1 + 0x30),param_2,puVar11);
    unaff_x22 = *(long *)(param_1 + 0x10);
    _objc_retain(unaff_x22);
    lVar5 = unaff_x22;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(unaff_x22);
        }
        uVar12 = *(undefined8 *)(lVar14 * 8);
        _objc_retain(uVar12);
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar6;
        func_0x00010c282760();
        if ((int)uVar15 == *(int *)*param_3) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
          _objc_release(uVar6);
          _objc_release(uVar12);
          goto LAB_10adc165c;
        }
        _objc_release(uVar6);
        _objc_release(uVar12);
        lVar14 = lVar14 + 1;
      } while (lVar5 != lVar14);
      lVar5 = unaff_x22;
      func_0x00010bf52a60();
    }
LAB_10adc165c:
    _objc_release(unaff_x22);
  }
  puVar7 = (undefined8 *)(ulong)(lVar9 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  __Unwind_Resume();
  uVar6 = param_2[1];
  uVar15 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar10 = (long *)puVar7[1];
  puVar7[1] = uVar6;
  *puVar7 = uVar15;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return puVar7;
}



/* Entry: 10adc16f0; end: 10adc17af;  */

undefined8 * FUN_10adc16f0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adc17b0; end: 10adc17c3;  */

void FUN_10adc17b0(undefined8 param_1,long param_2,undefined4 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long ****pppplVar3;
  long lVar4;
  long ***ppplVar5;
  bool bVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  undefined8 ****ppppuVar9;
  long ****pppplVar10;
  undefined8 ****ppppuVar11;
  undefined8 *unaff_x22;
  long lVar12;
  undefined8 *unaff_x23;
  long ***ppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ***ppplStack_178;
  undefined8 ***pppuStack_170;
  long **pplStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  long ***ppplStack_110;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  long ***ppplStack_d0;
  long lStack_a0;
  
  pppplVar7 = (long ****)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)pppplVar7 >> 0x3c == 0) {
    __Znwm((long)pppplVar7 << 4);
    return;
  }
  func_0x000104c4f740();
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*pppplVar7 == (long ***)0x0) {
    *param_3 = 0x40000000;
  }
  else {
    pppuStack_170 = (undefined8 ****)0x0;
    pplStack_168 = (long **)0x0;
    lVar12 = *param_4;
    lVar4 = param_4[1];
    ppplStack_178 = (long ***)&pppuStack_170;
    if (lVar12 != lVar4) {
      pppplVar3 = pppplVar7 + 3;
      do {
        func_0x000107426fd8(&ppplStack_178,lVar12 + 0x44,lVar12 + 0x44);
        pppplVar10 = (long ****)*pppplVar3;
        if (pppplVar10 == (long ****)0x0) {
LAB_10adc18a8:
          ppplVar13 = *pppplVar7;
          pppplVar10 = pppplVar7 + 1;
          _objc_loadWeakRetained(pppplVar10);
          func_0x00010bf59ac0(ppplVar13);
          _objc_release(pppplVar10);
        }
        else {
          pppplVar14 = pppplVar3;
          do {
            lVar2 = 8;
            if (*(uint *)(lVar12 + 0x44) <= *(uint *)((long)pppplVar10 + 0x1c)) {
              lVar2 = 0;
              pppplVar14 = pppplVar10;
            }
            pppplVar10 = *(long *****)((long)pppplVar10 + lVar2);
          } while (pppplVar10 != (long ****)0x0);
          if ((pppplVar14 == pppplVar3) ||
             (*(uint *)(lVar12 + 0x44) < *(uint *)((long)pppplVar14 + 0x1c))) goto LAB_10adc18a8;
        }
        lVar12 = lVar12 + 0x48;
      } while (lVar12 != lVar4);
    }
    pppplVar10 = pppplVar7 + 2;
    pppplVar14 = (long ****)*pppplVar10;
    pppplVar3 = pppplVar7 + 3;
    if (pppplVar14 != pppplVar3) {
      do {
        ppppuVar9 = &pppuStack_170;
        ppppuVar11 = (undefined8 ****)pppuStack_170;
        if ((undefined8 ****)pppuStack_170 == (undefined8 ****)0x0) {
LAB_10adc1930:
          ppplVar13 = *pppplVar7;
          pppplVar8 = pppplVar7 + 1;
          _objc_loadWeakRetained(pppplVar8);
          func_0x00010bf6cd20(ppplVar13);
          _objc_release(pppplVar8);
        }
        else {
          do {
            lVar12 = 8;
            if (*(uint *)((long)pppplVar14 + 0x1c) <= *(uint *)((long)ppppuVar11 + 0x1c)) {
              lVar12 = 0;
              ppppuVar9 = ppppuVar11;
            }
            puVar1 = (undefined8 *)((long)ppppuVar11 + lVar12);
            ppppuVar11 = (undefined8 ****)*puVar1;
          } while ((undefined8 ****)*puVar1 != (undefined8 ****)0x0);
          if ((ppppuVar9 == &pppuStack_170) ||
             (*(uint *)((long)pppplVar14 + 0x1c) < *(uint *)((long)ppppuVar9 + 0x1c)))
          goto LAB_10adc1930;
        }
        pppplVar8 = (long ****)pppplVar14[1];
        pppplVar15 = pppplVar14;
        if ((long ****)pppplVar14[1] == (long ****)0x0) {
          do {
            pppplVar14 = (long ****)pppplVar15[2];
            bVar6 = (long ****)*pppplVar14 != pppplVar15;
            pppplVar15 = pppplVar14;
          } while (bVar6);
        }
        else {
          do {
            pppplVar14 = pppplVar8;
            pppplVar8 = (long ****)*pppplVar14;
          } while ((long ****)*pppplVar14 != (long ****)0x0);
        }
      } while (pppplVar14 != pppplVar3);
      pppplVar14 = (long ****)*pppplVar10;
    }
    ppplVar13 = pppplVar7[3];
    ppplVar5 = pppplVar7[4];
    pppplVar7[2] = ppplStack_178;
    pppplVar7[3] = pppuStack_170;
    pppplVar7[4] = (long ***)pplStack_168;
    lStack_160 = 0;
    if ((long ***)pplStack_168 != (long ***)0x0) {
      pppplVar10 = (long ****)(pppuStack_170 + 2);
    }
    *pppplVar10 = (long ***)pppplVar3;
    pppplVar3 = &ppplStack_178;
    if (ppplVar5 != (long ***)0x0) {
      pppplVar3 = (long ****)(ppplVar13 + 2);
    }
    ppplStack_178 = (long ***)pppplVar14;
    pppuStack_170 = ppplVar13;
    pplStack_168 = (long **)ppplVar5;
    *pppplVar3 = (long ***)&pppuStack_170;
    lStack_158 = 0;
    uStack_150 = 0;
    unaff_x22 = &uStack_e0;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x20000000);
    func_0x0001098af048(&lStack_160,0,&uStack_e0,(long)&uStack_e0 + 4,1);
    uStack_120 = 0x10adc1c98;
    ppuStack_118 = &PTR_FUN_110c745b0;
    unaff_x23 = &uStack_120;
    uStack_e0 = 0x10adc1c98;
    ppuStack_d8 = &PTR_FUN_110c745b0;
    lStack_138 = lStack_158;
    lStack_140 = lStack_160;
    uStack_130 = uStack_150;
    lStack_160 = 0;
    lStack_158 = 0;
    uStack_150 = 0;
    param_2 = param_2 + 0x18;
    ppplStack_110 = (long ***)pppplVar7;
    ppplStack_d0 = (long ***)pppplVar7;
    func_0x0001098aeecc(param_2,&uStack_e0,&UNK_110c74590,&lStack_140);
    if (lStack_140 != 0) {
      lStack_138 = lStack_140;
      __ZdlPv();
    }
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    (*(code *)*ppuStack_118)(&ppuStack_118);
    if (lStack_160 != 0) {
      lStack_158 = lStack_160;
      __ZdlPv();
    }
    *param_3 = (int)param_2;
    pppplVar7 = &ppplStack_178;
    func_0x000107c28478(pppplVar7,pppuStack_170);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  (*(code *)*ppuStack_d8)(unaff_x22 + 1);
  (*(code *)*ppuStack_118)(unaff_x23 + 1);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  func_0x000107c28478(&ppplStack_178,pppuStack_170);
  __Unwind_Resume();
  *pppplVar7 = (long ***)0x0;
  return;
}



/* Entry: 10adc17c4; end: 10adc17f7;  */

void FUN_10adc17c4(long ****param_1,long param_2,undefined4 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long ****pppplVar3;
  long lVar4;
  long ***ppplVar5;
  bool bVar6;
  long ****pppplVar7;
  undefined8 ****ppppuVar8;
  long ****pppplVar9;
  undefined8 ****ppppuVar10;
  undefined8 *unaff_x22;
  long lVar11;
  undefined8 *unaff_x23;
  long ***ppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ***ppplStack_168;
  undefined8 ***pppuStack_160;
  long **pplStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  long ***ppplStack_100;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  long ***ppplStack_c0;
  long lStack_90;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == (long ***)0x0) {
    *param_3 = 0x40000000;
  }
  else {
    pppuStack_160 = (undefined8 ****)0x0;
    pplStack_158 = (long **)0x0;
    lVar11 = *param_4;
    lVar4 = param_4[1];
    ppplStack_168 = (long ***)&pppuStack_160;
    if (lVar11 != lVar4) {
      pppplVar3 = param_1 + 3;
      do {
        func_0x000107426fd8(&ppplStack_168,lVar11 + 0x44,lVar11 + 0x44);
        pppplVar9 = (long ****)*pppplVar3;
        if (pppplVar9 == (long ****)0x0) {
LAB_10adc18a8:
          ppplVar12 = *param_1;
          pppplVar9 = param_1 + 1;
          _objc_loadWeakRetained(pppplVar9);
          func_0x00010bf59ac0(ppplVar12);
          _objc_release(pppplVar9);
        }
        else {
          pppplVar13 = pppplVar3;
          do {
            lVar2 = 8;
            if (*(uint *)(lVar11 + 0x44) <= *(uint *)((long)pppplVar9 + 0x1c)) {
              lVar2 = 0;
              pppplVar13 = pppplVar9;
            }
            pppplVar9 = *(long *****)((long)pppplVar9 + lVar2);
          } while (pppplVar9 != (long ****)0x0);
          if ((pppplVar13 == pppplVar3) ||
             (*(uint *)(lVar11 + 0x44) < *(uint *)((long)pppplVar13 + 0x1c))) goto LAB_10adc18a8;
        }
        lVar11 = lVar11 + 0x48;
      } while (lVar11 != lVar4);
    }
    pppplVar9 = param_1 + 2;
    pppplVar13 = (long ****)*pppplVar9;
    pppplVar3 = param_1 + 3;
    if (pppplVar13 != pppplVar3) {
      do {
        ppppuVar8 = &pppuStack_160;
        ppppuVar10 = (undefined8 ****)pppuStack_160;
        if ((undefined8 ****)pppuStack_160 == (undefined8 ****)0x0) {
LAB_10adc1930:
          ppplVar12 = *param_1;
          pppplVar7 = param_1 + 1;
          _objc_loadWeakRetained(pppplVar7);
          func_0x00010bf6cd20(ppplVar12);
          _objc_release(pppplVar7);
        }
        else {
          do {
            lVar11 = 8;
            if (*(uint *)((long)pppplVar13 + 0x1c) <= *(uint *)((long)ppppuVar10 + 0x1c)) {
              lVar11 = 0;
              ppppuVar8 = ppppuVar10;
            }
            puVar1 = (undefined8 *)((long)ppppuVar10 + lVar11);
            ppppuVar10 = (undefined8 ****)*puVar1;
          } while ((undefined8 ****)*puVar1 != (undefined8 ****)0x0);
          if ((ppppuVar8 == &pppuStack_160) ||
             (*(uint *)((long)pppplVar13 + 0x1c) < *(uint *)((long)ppppuVar8 + 0x1c)))
          goto LAB_10adc1930;
        }
        pppplVar7 = (long ****)pppplVar13[1];
        pppplVar14 = pppplVar13;
        if ((long ****)pppplVar13[1] == (long ****)0x0) {
          do {
            pppplVar13 = (long ****)pppplVar14[2];
            bVar6 = (long ****)*pppplVar13 != pppplVar14;
            pppplVar14 = pppplVar13;
          } while (bVar6);
        }
        else {
          do {
            pppplVar13 = pppplVar7;
            pppplVar7 = (long ****)*pppplVar13;
          } while ((long ****)*pppplVar13 != (long ****)0x0);
        }
      } while (pppplVar13 != pppplVar3);
      pppplVar13 = (long ****)*pppplVar9;
    }
    ppplVar12 = param_1[3];
    ppplVar5 = param_1[4];
    param_1[2] = ppplStack_168;
    param_1[3] = pppuStack_160;
    param_1[4] = (long ***)pplStack_158;
    lStack_150 = 0;
    if ((long ***)pplStack_158 != (long ***)0x0) {
      pppplVar9 = (long ****)(pppuStack_160 + 2);
    }
    *pppplVar9 = (long ***)pppplVar3;
    pppplVar3 = &ppplStack_168;
    if (ppplVar5 != (long ***)0x0) {
      pppplVar3 = (long ****)(ppplVar12 + 2);
    }
    ppplStack_168 = (long ***)pppplVar13;
    pppuStack_160 = ppplVar12;
    pplStack_158 = (long **)ppplVar5;
    *pppplVar3 = (long ***)&pppuStack_160;
    lStack_148 = 0;
    uStack_140 = 0;
    unaff_x22 = &uStack_d0;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0x20000000);
    func_0x0001098af048(&lStack_150,0,&uStack_d0,(long)&uStack_d0 + 4,1);
    uStack_110 = 0x10adc1c98;
    ppuStack_108 = &PTR_FUN_110c745b0;
    unaff_x23 = &uStack_110;
    uStack_d0 = 0x10adc1c98;
    ppuStack_c8 = &PTR_FUN_110c745b0;
    lStack_128 = lStack_148;
    lStack_130 = lStack_150;
    uStack_120 = uStack_140;
    lStack_150 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    param_2 = param_2 + 0x18;
    ppplStack_100 = (long ***)param_1;
    ppplStack_c0 = (long ***)param_1;
    func_0x0001098aeecc(param_2,&uStack_d0,&UNK_110c74590,&lStack_130);
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    (*(code *)*ppuStack_c8)(&ppuStack_c8);
    (*(code *)*ppuStack_108)(&ppuStack_108);
    if (lStack_150 != 0) {
      lStack_148 = lStack_150;
      __ZdlPv();
    }
    *param_3 = (int)param_2;
    param_1 = &ppplStack_168;
    func_0x000107c28478(param_1,pppuStack_160);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  (*(code *)*ppuStack_c8)(unaff_x22 + 1);
  (*(code *)*ppuStack_108)(unaff_x23 + 1);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  func_0x000107c28478(&ppplStack_168,pppuStack_160);
  __Unwind_Resume();
  *param_1 = (long ***)0x0;
  return;
}



/* Entry: 10adc17f8; end: 10adc1b7f;  */

void FUN_10adc17f8(long ****param_1,long param_2,undefined4 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long ****pppplVar3;
  long lVar4;
  long ***ppplVar5;
  bool bVar6;
  long ****pppplVar7;
  undefined8 ****ppppuVar8;
  long ****pppplVar9;
  undefined8 ****ppppuVar10;
  undefined8 *unaff_x22;
  long lVar11;
  undefined8 *unaff_x23;
  long ***ppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ***ppplStack_148;
  undefined8 ***pppuStack_140;
  long **pplStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long ***ppplStack_e0;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long ***ppplStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == (long ***)0x0) {
    *param_3 = 0x40000000;
  }
  else {
    pppuStack_140 = (undefined8 ****)0x0;
    pplStack_138 = (long **)0x0;
    lVar11 = *param_4;
    lVar4 = param_4[1];
    ppplStack_148 = (long ***)&pppuStack_140;
    if (lVar11 != lVar4) {
      pppplVar3 = param_1 + 3;
      do {
        func_0x000107426fd8(&ppplStack_148,lVar11 + 0x44,lVar11 + 0x44);
        pppplVar9 = (long ****)*pppplVar3;
        if (pppplVar9 == (long ****)0x0) {
LAB_10adc18a8:
          ppplVar12 = *param_1;
          pppplVar9 = param_1 + 1;
          _objc_loadWeakRetained(pppplVar9);
          func_0x00010bf59ac0(ppplVar12);
          _objc_release(pppplVar9);
        }
        else {
          pppplVar13 = pppplVar3;
          do {
            lVar2 = 8;
            if (*(uint *)(lVar11 + 0x44) <= *(uint *)((long)pppplVar9 + 0x1c)) {
              lVar2 = 0;
              pppplVar13 = pppplVar9;
            }
            pppplVar9 = *(long *****)((long)pppplVar9 + lVar2);
          } while (pppplVar9 != (long ****)0x0);
          if ((pppplVar13 == pppplVar3) ||
             (*(uint *)(lVar11 + 0x44) < *(uint *)((long)pppplVar13 + 0x1c))) goto LAB_10adc18a8;
        }
        lVar11 = lVar11 + 0x48;
      } while (lVar11 != lVar4);
    }
    pppplVar9 = param_1 + 2;
    pppplVar13 = (long ****)*pppplVar9;
    pppplVar3 = param_1 + 3;
    if (pppplVar13 != pppplVar3) {
      do {
        ppppuVar8 = &pppuStack_140;
        ppppuVar10 = (undefined8 ****)pppuStack_140;
        if ((undefined8 ****)pppuStack_140 == (undefined8 ****)0x0) {
LAB_10adc1930:
          ppplVar12 = *param_1;
          pppplVar7 = param_1 + 1;
          _objc_loadWeakRetained(pppplVar7);
          func_0x00010bf6cd20(ppplVar12);
          _objc_release(pppplVar7);
        }
        else {
          do {
            lVar11 = 8;
            if (*(uint *)((long)pppplVar13 + 0x1c) <= *(uint *)((long)ppppuVar10 + 0x1c)) {
              lVar11 = 0;
              ppppuVar8 = ppppuVar10;
            }
            puVar1 = (undefined8 *)((long)ppppuVar10 + lVar11);
            ppppuVar10 = (undefined8 ****)*puVar1;
          } while ((undefined8 ****)*puVar1 != (undefined8 ****)0x0);
          if ((ppppuVar8 == &pppuStack_140) ||
             (*(uint *)((long)pppplVar13 + 0x1c) < *(uint *)((long)ppppuVar8 + 0x1c)))
          goto LAB_10adc1930;
        }
        pppplVar7 = (long ****)pppplVar13[1];
        pppplVar14 = pppplVar13;
        if ((long ****)pppplVar13[1] == (long ****)0x0) {
          do {
            pppplVar13 = (long ****)pppplVar14[2];
            bVar6 = (long ****)*pppplVar13 != pppplVar14;
            pppplVar14 = pppplVar13;
          } while (bVar6);
        }
        else {
          do {
            pppplVar13 = pppplVar7;
            pppplVar7 = (long ****)*pppplVar13;
          } while ((long ****)*pppplVar13 != (long ****)0x0);
        }
      } while (pppplVar13 != pppplVar3);
      pppplVar13 = (long ****)*pppplVar9;
    }
    ppplVar12 = param_1[3];
    ppplVar5 = param_1[4];
    param_1[2] = ppplStack_148;
    param_1[3] = pppuStack_140;
    param_1[4] = (long ***)pplStack_138;
    lStack_130 = 0;
    if ((long ***)pplStack_138 != (long ***)0x0) {
      pppplVar9 = (long ****)(pppuStack_140 + 2);
    }
    *pppplVar9 = (long ***)pppplVar3;
    pppplVar3 = &ppplStack_148;
    if (ppplVar5 != (long ***)0x0) {
      pppplVar3 = (long ****)(ppplVar12 + 2);
    }
    ppplStack_148 = (long ***)pppplVar13;
    pppuStack_140 = ppplVar12;
    pplStack_138 = (long **)ppplVar5;
    *pppplVar3 = (long ***)&pppuStack_140;
    lStack_128 = 0;
    uStack_120 = 0;
    unaff_x22 = &uStack_b0;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x20000000);
    func_0x0001098af048(&lStack_130,0,&uStack_b0,(long)&uStack_b0 + 4,1);
    uStack_f0 = 0x10adc1c98;
    ppuStack_e8 = &PTR_FUN_110c745b0;
    unaff_x23 = &uStack_f0;
    uStack_b0 = 0x10adc1c98;
    ppuStack_a8 = &PTR_FUN_110c745b0;
    lStack_108 = lStack_128;
    lStack_110 = lStack_130;
    uStack_100 = uStack_120;
    lStack_130 = 0;
    lStack_128 = 0;
    uStack_120 = 0;
    param_2 = param_2 + 0x18;
    ppplStack_e0 = (long ***)param_1;
    ppplStack_a0 = (long ***)param_1;
    func_0x0001098aeecc(param_2,&uStack_b0,&UNK_110c74590,&lStack_110);
    if (lStack_110 != 0) {
      lStack_108 = lStack_110;
      __ZdlPv();
    }
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    *param_3 = (int)param_2;
    param_1 = &ppplStack_148;
    func_0x000107c28478(param_1,pppuStack_140);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  (*(code *)*ppuStack_a8)(unaff_x22 + 1);
  (*(code *)*ppuStack_e8)(unaff_x23 + 1);
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c28478(&ppplStack_148,pppuStack_140);
  __Unwind_Resume();
  *param_1 = (long ***)0x0;
  return;
}



/* Entry: 10adc1b80; end: 10adc1b8f;  */

void FUN_10adc1b80(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10adc1b90; end: 10adc1bcf;  */

void FUN_10adc1b90(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_10adc1bd0(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10adc1bd0; end: 10adc1c3f;  */

void FUN_10adc1bd0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10adc1c40();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10adc1c40; end: 10adc1d27;  */

long FUN_10adc1c40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adc1d28; end: 10adc1d43;  */

void FUN_10adc1d28(void)

{
  return;
}



/* Entry: 10adc1d44; end: 10adc1dcb; -[LSAARKitPointHandler init] */

undefined1 * FUN_10adc1d44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10adc1dcc; end: 10adc1e9f; -[LSAARKitPointHandler getTrackedPoints] */

void FUN_10adc1dcc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar6 = (ulong *)0x18;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar9 = *(undefined8 **)(param_2 + 0x10);
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  lVar8 = (long)puVar2 - (long)puVar9;
  if (lVar8 != 0) {
    puVar7 = (undefined8 *)(lVar8 >> 4);
    if ((ulong)puVar7 >> 0x3c != 0) {
      FUN_10adc2a48();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10adc1e84);
      (*pcVar5)();
    }
    FUN_10adc2a5c();
    *puVar6 = (ulong)puVar7;
    puVar6[1] = (ulong)puVar7;
    puVar6[2] = (ulong)(puVar7 + param_3 * 2);
    do {
      lVar8 = puVar9[1];
      uVar10 = *puVar9;
      puVar7[1] = puVar9[1];
      *puVar7 = uVar10;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar9 = puVar9 + 2;
      puVar7 = puVar7 + 2;
    } while (puVar9 != puVar2);
    puVar6[1] = (ulong)puVar7;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10adc1ea0; end: 10adc20d7; -[LSAARKitPointHandler updateARAnchors:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10adc1ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int **param_6,long param_7)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  int *piStack_140;
  long *plStack_138;
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
  _objc_retain(param_7);
  uVar15 = 0;
  uVar16 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_7);
  lVar11 = param_7;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_7);
        }
        uVar12 = *(ulong *)(lStack_128 + lVar14 * 8);
        param_6 = (int **)PTR_PTR_1126dd020;
        _objc_opt_class();
        uVar9 = uVar12;
        _objc_opt_isKindOfClass();
        if ((uVar9 & 1) != 0) {
          lVar6 = *(long *)(param_5 + 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            lVar10 = lVar6;
            func_0x00010c282760();
            for (puVar8 = *(undefined8 **)(param_5 + 0x10);
                puVar8 != *(undefined8 **)(param_5 + 0x18); puVar8 = puVar8 + 2) {
              piStack_140 = (int *)*puVar8;
              if (*piStack_140 == (int)lVar10) {
                plStack_138 = (long *)puVar8[1];
                if (plStack_138 != (long *)0x0) {
                  plVar1 = plStack_138 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = *plVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                goto LAB_10adc1fcc;
              }
            }
            piStack_140 = (int *)0x0;
            plStack_138 = (long *)0x0;
LAB_10adc1fcc:
            plVar1 = plStack_138;
            param_6 = &piStack_140;
            FUN_10adc20d8(uVar12);
            if (plVar1 != (long *)0x0) {
              plVar2 = plVar1 + 1;
              do {
                lVar10 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
              }
            }
          }
          _objc_release(lVar6);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar11);
      lVar11 = param_7;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_7);
  lVar11 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  _objc_release(param_7);
  lVar13 = lVar11;
  __Unwind_Resume(lVar11);
  pcStack_148 = FUN_10adc20d8;
  lStack_160 = lVar11;
  lStack_158 = param_7;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x00010c27a460(lVar13);
  uVar9 = 0;
  uStack_1d8 = uVar16;
  uStack_1e0 = uVar15;
  uStack_1c8 = in_register_00005028;
  uStack_1d0 = param_2;
  uStack_1b8 = in_register_00005048;
  uStack_1c0 = param_3;
  uStack_1a8 = in_register_00005068;
  uStack_1b0 = param_4;
  auStack_198 = (undefined1  [8])0x0;
  auStack_1a0 = (undefined1  [8])0x3f800000;
  uStack_188 = 0;
  uStack_190 = 0x3f80000000000000;
  uStack_178 = 0x3f800000;
  uStack_180 = 0;
  uStack_168 = 0x3f80000000000000;
  uStack_170 = 0;
  do {
    lVar14 = 0;
    lVar11 = 0;
    do {
      iVar7 = (int)uVar9;
      puVar8 = (undefined8 *)((long)auStack_198 + lVar11 * 0x10 + 4);
      if (iVar7 != 3) {
        puVar8 = (undefined8 *)((long)auStack_1a0 + lVar14);
      }
      puVar3 = (undefined8 *)((long)auStack_198 + lVar11 * 2 * 8);
      if (iVar7 != 2) {
        puVar3 = puVar8;
      }
      puVar8 = (undefined8 *)((long)auStack_1a0 + lVar11 * 0x10 + 4);
      if (iVar7 != 1) {
        puVar8 = puVar3;
      }
      *(undefined4 *)puVar8 = *(undefined4 *)((long)&uStack_1e0 + (uVar9 & 3) * 4 + lVar14);
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != 0x40);
    uVar9 = (ulong)(iVar7 + 1U);
  } while (iVar7 + 1U != 4);
  FUN_10adbfd44(auStack_1a0,(long)*param_6 + 4,(long)*param_6 + 0x10);
  _objc_release(lVar13);
  return;
}



/* Entry: 10adc20d8; end: 10adc21c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10adc20d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x00010c27a460(param_5);
  uVar4 = 0;
  uStack_98 = in_register_00005008;
  uStack_a0 = param_1;
  uStack_88 = in_register_00005028;
  uStack_90 = param_2;
  uStack_78 = in_register_00005048;
  uStack_80 = param_3;
  uStack_68 = in_register_00005068;
  uStack_70 = param_4;
  auStack_58 = (undefined1  [8])0x0;
  auStack_60 = (undefined1  [8])0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f80000000000000;
  uStack_38 = 0x3f800000;
  uStack_40 = 0;
  uStack_28 = 0x3f80000000000000;
  uStack_30 = 0;
  do {
    lVar5 = 0;
    lVar6 = 0;
    do {
      iVar3 = (int)uVar4;
      puVar2 = (undefined8 *)((long)auStack_58 + lVar6 * 0x10 + 4);
      if (iVar3 != 3) {
        puVar2 = (undefined8 *)((long)auStack_60 + lVar5);
      }
      puVar1 = (undefined8 *)((long)auStack_58 + lVar6 * 2 * 8);
      if (iVar3 != 2) {
        puVar1 = puVar2;
      }
      puVar2 = (undefined8 *)((long)auStack_60 + lVar6 * 0x10 + 4);
      if (iVar3 != 1) {
        puVar2 = puVar1;
      }
      *(undefined4 *)puVar2 = *(undefined4 *)((long)&uStack_a0 + (uVar4 & 3) * 4 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x40);
    uVar4 = (ulong)(iVar3 + 1U);
  } while (iVar3 + 1U != 4);
  FUN_10adbfd44(auStack_60,*param_6 + 4,*param_6 + 0x10);
  _objc_release(param_5);
  return;
}



/* Entry: 10adc21c8; end: 10adc23ff; -[LSAARKitPointHandler removeARAnchors:] */

void FUN_10adc21c8(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar19;
  undefined8 *unaff_x24;
  long *plVar20;
  long unaff_x25;
  long *plVar21;
  undefined **unaff_x26;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 auStack_1e0 [4];
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  ulong uStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = &uStack_130;
  puVar12 = auStack_f0;
  uVar14 = param_3;
  uStack_138 = param_3;
  func_0x00010bf52a60();
  if (uVar14 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_PTR_1126dd000;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(uStack_138);
        }
        unaff_x23 = *(undefined8 **)(lStack_128 + unaff_x27 * 8);
        param_2 = (undefined8 *)PTR_PTR_1126dd020;
        _objc_opt_class();
        puVar7 = unaff_x23;
        _objc_opt_isKindOfClass();
        if (((ulong)puVar7 & 1) != 0) {
          unaff_x22 = *(long *)(param_1 + 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x22 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
            unaff_x28 = *(undefined8 **)(param_1 + 0x18);
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            unaff_x23 = puVar7;
            for (; puVar7 != unaff_x28; puVar7 = puVar7 + 2) {
              uVar3 = *(uint *)*puVar7;
              unaff_x24 = (undefined8 *)(ulong)uVar3;
              lVar15 = unaff_x22;
              func_0x00010c282760();
              if (uVar3 == (uint)lVar15) {
                unaff_x23 = puVar7;
                puVar17 = puVar7;
                if (puVar7 != unaff_x28) {
                  while (unaff_x24 = puVar17 + 2, unaff_x23 = puVar7, unaff_x24 != unaff_x28) {
                    uVar3 = *(uint *)*unaff_x24;
                    param_3 = (ulong)uVar3;
                    lVar15 = unaff_x22;
                    func_0x00010c282760();
                    puVar17 = unaff_x24;
                    if (uVar3 != (uint)lVar15) {
                      FUN_10adc29e4(puVar7,unaff_x24);
                      puVar7 = puVar7 + 2;
                    }
                  }
                }
                break;
              }
              unaff_x23 = unaff_x28;
            }
            param_2 = unaff_x23;
            FUN_10adc2958(param_1 + 0x10,unaff_x23,*(undefined8 *)(param_1 + 0x18));
          }
          _objc_release(unaff_x22);
        }
        unaff_x27 = unaff_x27 + 1;
      } while (unaff_x27 != uVar14);
      puVar7 = &uStack_130;
      puVar12 = auStack_f0;
      uVar14 = uStack_138;
      func_0x00010bf52a60();
    } while (uVar14 != 0);
  }
  _objc_release(uStack_138);
  uVar14 = uStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uStack_138);
  _objc_release(uStack_138);
  uVar8 = uVar14;
  __Unwind_Resume();
  pcStack_148 = FUN_10adc2400;
  puStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  uStack_168 = 0;
  uStack_160 = uVar14;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  uVar14 = 0;
  auStack_1e0[1] = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 8);
  auStack_1e0[0] = *(undefined8 *)PTR__matrix_identity_float4x4_11034c640;
  auStack_1e0[3] = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x18);
  auStack_1e0[2] = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x10);
  uStack_1b8 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x28);
  plStack_1c0 = *(long **)(PTR__matrix_identity_float4x4_11034c640 + 0x20);
  uStack_1a8 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x38);
  uStack_1b0 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x30);
  do {
    lVar15 = 0;
    puVar17 = puVar7;
    do {
      iVar13 = (int)uVar14;
      puVar2 = (undefined8 *)((long)puVar7 + lVar15 * 0x10 + 0xc);
      if (iVar13 != 3) {
        puVar2 = puVar17;
      }
      puVar1 = puVar7 + lVar15 * 2 + 1;
      if (iVar13 != 2) {
        puVar1 = puVar2;
      }
      puVar2 = (undefined8 *)((long)puVar7 + lVar15 * 0x10 + 4);
      if (iVar13 != 1) {
        puVar2 = puVar1;
      }
      *(undefined4 *)((ulong)(auStack_1e0 + lVar15 * 2) | (uVar14 & 3) << 2) = *(undefined4 *)puVar2
      ;
      lVar15 = lVar15 + 1;
      puVar17 = puVar17 + 2;
    } while (lVar15 != 4);
    uVar14 = (ulong)(iVar13 + 1U);
  } while (iVar13 + 1U != 4);
  puVar9 = puVar12;
  func_0x00010bf59aa0(auStack_1e0[0],auStack_1e0[2],plStack_1c0,uStack_1b0,puVar12);
  _objc_retainAutoreleasedReturnValue();
  plVar10 = (long *)0x38;
  __Znwm();
  plVar20 = plVar10 + 1;
  *plVar20 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110c6ddf8;
  *(undefined8 *)((long)plVar10 + 0x1c) = 0;
  *(undefined8 *)((long)plVar10 + 0x2c) = 0;
  *(undefined8 *)((long)plVar10 + 0x24) = 0;
  plVar21 = plVar10 + 3;
  *(undefined4 *)plVar21 = *(undefined4 *)((long)puVar7 + 0x44);
  *(undefined4 *)((long)plVar10 + 0x34) = 0x3f800000;
  puVar7 = *(undefined8 **)(uVar8 + 0x18);
  plStack_1f0 = plVar21;
  plStack_1e8 = plVar10;
  if (puVar7 < *(undefined8 **)(uVar8 + 0x20)) {
    *puVar7 = plVar21;
    puVar7[1] = plVar10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = *plVar20 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar7 = puVar7 + 2;
  }
  else {
    lVar15 = *(long *)(uVar8 + 0x10);
    lVar19 = (long)puVar7 - lVar15;
    uVar14 = (lVar19 >> 4) + 1;
    if (uVar14 >> 0x3c != 0) {
      FUN_10adc2a48();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10adc267c);
      (*pcVar6)();
    }
    uVar16 = (long)*(undefined8 **)(uVar8 + 0x20) - lVar15;
    uVar18 = (long)uVar16 >> 3;
    if (uVar18 <= uVar14) {
      uVar18 = uVar14;
    }
    if (0x7fffffffffffffef < uVar16) {
      uVar18 = 0xfffffffffffffff;
    }
    plStack_1c0 = (long *)(uVar8 + 0x10);
    FUN_10adc2a5c();
    puVar17 = (undefined8 *)(uVar18 + lVar19);
    *puVar17 = plVar21;
    puVar17[1] = plVar10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = *plVar20 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar7 = puVar17 + 2;
    lVar15 = (long)puVar17 - (*(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10));
    _memcpy(lVar15);
    auStack_1e0[0] = *(undefined8 *)(uVar8 + 0x10);
    *(long *)(uVar8 + 0x10) = lVar15;
    *(undefined8 **)(uVar8 + 0x18) = puVar7;
    auStack_1e0[3] = *(undefined8 *)(uVar8 + 0x20);
    *(ulong *)(uVar8 + 0x20) = uVar18 + (long)param_2 * 0x10;
    auStack_1e0[1] = auStack_1e0[0];
    auStack_1e0[2] = auStack_1e0[0];
    FUN_10acfcbf8(auStack_1e0);
  }
  *(undefined8 **)(uVar8 + 0x18) = puVar7;
  FUN_10adc20d8(puVar9,&plStack_1f0);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(uVar8 + 8));
  _objc_release(puVar11);
  do {
    lVar15 = *plVar20;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = lVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  return;
}



/* Entry: 10adc2400; end: 10adc26bf; -[LSAARKitPointHandler createTrackedPoint:delegate:] */

void FUN_10adc2400(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 auStack_a0 [4];
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar11 = 0;
  auStack_a0[1] = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 8);
  auStack_a0[0] = *(undefined8 *)PTR__matrix_identity_float4x4_11034c640;
  auStack_a0[3] = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x18);
  auStack_a0[2] = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x28);
  plStack_80 = *(long **)(PTR__matrix_identity_float4x4_11034c640 + 0x20);
  uStack_68 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x38);
  uStack_70 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x30);
  do {
    lVar12 = 0;
    puVar14 = param_3;
    do {
      iVar10 = (int)uVar11;
      puVar3 = param_3 + lVar12 * 4 + 3;
      if (iVar10 != 3) {
        puVar3 = puVar14;
      }
      puVar2 = param_3 + lVar12 * 4 + 2;
      if (iVar10 != 2) {
        puVar2 = puVar3;
      }
      puVar3 = param_3 + lVar12 * 4 + 1;
      if (iVar10 != 1) {
        puVar3 = puVar2;
      }
      *(undefined4 *)((ulong)(auStack_a0 + lVar12 * 2) | (uVar11 & 3) << 2) = *puVar3;
      lVar12 = lVar12 + 1;
      puVar14 = puVar14 + 4;
    } while (lVar12 != 4);
    uVar11 = (ulong)(iVar10 + 1U);
  } while (iVar10 + 1U != 4);
  uVar7 = param_4;
  func_0x00010bf59aa0(auStack_a0[0],auStack_a0[2],plStack_80,uStack_70,param_4);
  _objc_retainAutoreleasedReturnValue();
  plVar8 = (long *)0x38;
  __Znwm();
  plVar17 = plVar8 + 1;
  *plVar17 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110c6ddf8;
  *(undefined8 *)((long)plVar8 + 0x1c) = 0;
  *(undefined8 *)((long)plVar8 + 0x2c) = 0;
  *(undefined8 *)((long)plVar8 + 0x24) = 0;
  plVar18 = plVar8 + 3;
  *(undefined4 *)plVar18 = param_3[0x11];
  *(undefined4 *)((long)plVar8 + 0x34) = 0x3f800000;
  puVar19 = *(undefined8 **)(param_1 + 0x18);
  plStack_b0 = plVar18;
  plStack_a8 = plVar8;
  if (puVar19 < *(undefined8 **)(param_1 + 0x20)) {
    *puVar19 = plVar18;
    puVar19[1] = plVar8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar19 = puVar19 + 2;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x10);
    lVar16 = (long)puVar19 - lVar12;
    uVar11 = (lVar16 >> 4) + 1;
    if (uVar11 >> 0x3c != 0) {
      FUN_10adc2a48();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10adc267c);
      (*pcVar6)();
    }
    uVar13 = (long)*(undefined8 **)(param_1 + 0x20) - lVar12;
    uVar15 = (long)uVar13 >> 3;
    if (uVar15 <= uVar11) {
      uVar15 = uVar11;
    }
    if (0x7fffffffffffffef < uVar13) {
      uVar15 = 0xfffffffffffffff;
    }
    plStack_80 = (long *)(param_1 + 0x10);
    FUN_10adc2a5c();
    puVar1 = (undefined8 *)(uVar15 + lVar16);
    *puVar1 = plVar18;
    puVar1[1] = plVar8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar19 = puVar1 + 2;
    lVar12 = (long)puVar1 - (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    _memcpy(lVar12);
    auStack_a0[0] = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar12;
    *(undefined8 **)(param_1 + 0x18) = puVar19;
    auStack_a0[3] = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar15 + param_2 * 0x10;
    auStack_a0[1] = auStack_a0[0];
    auStack_a0[2] = auStack_a0[0];
    FUN_10acfcbf8(auStack_a0);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar19;
  FUN_10adc20d8(uVar7,&plStack_b0);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar9);
  do {
    lVar12 = *plVar17;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  _objc_release(uVar7);
  _objc_release(param_4);
  return;
}



/* Entry: 10adc26c0; end: 10adc290b; -[LSAARKitPointHandler deleteTrackedPoint:delegate:] */

void FUN_10adc26c0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar2 != 0) && (lVar3 = lVar2, func_0x00010c282760(), (int)lVar3 == param_3)) {
          lVar1 = lVar2;
          func_0x00010c282760();
          func_0x00010bf6cd00(param_4);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
          puVar5 = *(undefined8 **)(param_1 + 0x10);
          puVar8 = *(undefined8 **)(param_1 + 0x18);
          puVar6 = puVar5;
          if (puVar5 == puVar8) goto LAB_10adc2864;
          goto LAB_10adc27fc;
        }
        _objc_release(lVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  goto LAB_10adc287c;
  while (puVar5 = puVar5 + 2, puVar6 = puVar8, puVar5 != puVar8) {
LAB_10adc27fc:
    if (*(int *)*puVar5 == (int)lVar1) {
      puVar6 = puVar5;
      if ((puVar5 != puVar8) && (puVar10 = puVar5 + 2, puVar10 != puVar8)) {
        do {
          if (*(int *)*puVar10 != (int)lVar1) {
            FUN_10adc29e4(puVar5,puVar10);
            puVar5 = puVar5 + 2;
          }
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar8);
        puVar8 = *(undefined8 **)(param_1 + 0x18);
        puVar6 = puVar5;
      }
      break;
    }
  }
LAB_10adc2864:
  FUN_10adc2958((long *)(param_1 + 0x10),puVar6,puVar8);
  _objc_release(lVar2);
LAB_10adc287c:
  _objc_release(lVar4);
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(lVar4);
    _objc_release(param_4);
    __Unwind_Resume();
    pcStack_138 = FUN_10adc290c;
    lStack_158 = lVar1 + 0x10;
    lStack_150 = lVar4;
    lStack_148 = param_4;
    puStack_140 = &stack0xfffffffffffffff0;
    FUN_10adc1bd0(&lStack_158);
    _objc_storeStrong(lVar1 + 8,0);
    return;
  }
  return;
}



/* Entry: 10adc290c; end: 10adc294b; -[LSAARKitPointHandler .cxx_destruct] */

void FUN_10adc290c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x10;
  FUN_10adc1bd0(&lStack_28);
  _objc_storeStrong(param_1 + 8,0);
  return;
}



/* Entry: 10adc294c; end: 10adc2957; -[LSAARKitPointHandler .cxx_construct] */

void FUN_10adc294c(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10adc2958; end: 10adc29e3;  */

long FUN_10adc2958(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != param_2) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = param_2;
    if (param_3 != lVar1) {
      do {
        FUN_10adc29e4(lVar2,param_3);
        param_3 = param_3 + 0x10;
        lVar2 = lVar2 + 0x10;
      } while (param_3 != lVar1);
      lVar1 = *(long *)(param_1 + 8);
    }
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_10adc1c40(lVar1);
    }
    *(long *)(param_1 + 8) = lVar2;
  }
  return param_2;
}



/* Entry: 10adc29e4; end: 10adc2a47;  */

undefined8 * FUN_10adc29e4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adc2a48; end: 10adc2a5b;  */

undefined1  [16] FUN_10adc2a48(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 **ppuVar7;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_68;
  undefined8 *puVar8;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar5 >> 0x3c == 0) {
    lVar6 = (long)plVar5 << 4;
    __Znwm(lVar6);
    auVar10._8_8_ = plVar5;
    auVar10._0_8_ = lVar6;
    return auVar10;
  }
  func_0x000104c4f740();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = param_2;
  if (*plVar5 == 0) {
    uVar4 = 0x40000000;
  }
  else {
    uStack_a8 = (code *)((ulong)uStack_a8 & 0xffff000000000000);
    ppuVar7 = &puStack_c8;
    func_0x0001098ac018(ppuVar7,&UNK_10e514038,0x1b,&uStack_a8,0,1);
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    uStack_b0 = 0;
    uStack_a8 = (code *)CONCAT44(uStack_a8._4_4_,(int)ppuVar7);
    func_0x0001098af048(&plStack_c0,0,&uStack_a8,(long)&uStack_a8 + 4,1);
    unaff_x22 = &uStack_a8;
    uStack_a8 = FUN_10adc2c3c;
    ppuStack_a0 = &PTR_FUN_110c745c8;
    puVar8 = param_2 + 3;
    param_2 = &uStack_a8;
    plStack_98 = plVar5;
    FUN_10a4fc57c(puVar8,param_2,&plStack_c0);
    uVar4 = SUB84(puVar8,0);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    plVar5 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plStack_b8 = plStack_c0;
      __ZdlPv();
    }
  }
  *param_3 = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = plVar5;
    return auVar11;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a0)(unaff_x22 + 1);
  if (plStack_c0 != (long *)0x0) {
    plStack_b8 = plStack_c0;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar9 = (long *)plVar5[1];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = plVar5;
  return auVar12;
}



/* Entry: 10adc2a5c; end: 10adc2a8f;  */

undefined1  [16] FUN_10adc2a5c(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 **ppuVar6;
  long *plVar8;
  undefined8 *unaff_x22;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long lStack_58;
  undefined8 *puVar7;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar5 = (long)param_1 << 4;
    __Znwm(lVar5);
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = lVar5;
    return auVar9;
  }
  func_0x000104c4f740();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = param_2;
  if (*param_1 == 0) {
    uVar4 = 0x40000000;
  }
  else {
    uStack_98 = (code *)((ulong)uStack_98 & 0xffff000000000000);
    ppuVar6 = &puStack_b8;
    func_0x0001098ac018(ppuVar6,&UNK_10e514038,0x1b,&uStack_98,0,1);
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    uStack_a0 = 0;
    uStack_98 = (code *)CONCAT44(uStack_98._4_4_,(int)ppuVar6);
    func_0x0001098af048(&plStack_b0,0,&uStack_98,(long)&uStack_98 + 4,1);
    unaff_x22 = &uStack_98;
    uStack_98 = FUN_10adc2c3c;
    ppuStack_90 = &PTR_FUN_110c745c8;
    puVar7 = param_2 + 3;
    param_2 = &uStack_98;
    plStack_88 = param_1;
    FUN_10a4fc57c(puVar7,param_2,&plStack_b0);
    uVar4 = SUB84(puVar7,0);
    (*(code *)*ppuStack_90)(&ppuStack_90);
    param_1 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plStack_a8 = plStack_b0;
      __ZdlPv();
    }
  }
  *param_3 = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(unaff_x22 + 1);
  if (plStack_b0 != (long *)0x0) {
    plStack_a8 = plStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10adc2a90; end: 10adc2be3;  */

long * FUN_10adc2a90(long *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x22;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = param_2;
  if (*param_1 == 0) {
    uVar4 = 0x40000000;
  }
  else {
    uStack_78 = (code *)((ulong)uStack_78 & 0xffff000000000000);
    plVar6 = &lStack_98;
    func_0x0001098ac018(plVar6,&UNK_10e514038,0x1b,&uStack_78,0,1);
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    uStack_80 = 0;
    uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar6);
    func_0x0001098af048(&plStack_90,0,&uStack_78,(long)&uStack_78 + 4,1);
    unaff_x22 = &uStack_78;
    uStack_78 = FUN_10adc2c3c;
    ppuStack_70 = &PTR_FUN_110c745c8;
    param_2 = param_2 + 0x18;
    plStack_68 = param_1;
    FUN_10a4fc57c(param_2,&uStack_78,&plStack_90);
    uVar4 = (undefined4)param_2;
    (*(code *)*ppuStack_70)(&ppuStack_70);
    param_1 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plStack_88 = plStack_90;
      __ZdlPv();
    }
  }
  *param_3 = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x22 + 1);
  if (plStack_90 != (long *)0x0) {
    plStack_88 = plStack_90;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 10adc2be4; end: 10adc2c3b;  */

long FUN_10adc2be4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adc2c3c; end: 10adc2d2f;  */

void FUN_10adc2c3c(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5,long param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = &lStack_50;
  plVar3 = &lStack_40;
  lStack_50 = param_1;
  plStack_48 = param_2;
  lStack_40 = param_1;
  plStack_38 = param_2;
  func_0x00010adbd7dc(plVar3,*param_4);
  if (*plVar3 != 0) {
    FUN_10a4fc70c(&lStack_50,param_3);
    plVar7 = *(long **)(param_6 + 0x10);
    uVar6 = *(undefined8 *)*plVar3;
    _objc_retain(uVar6);
    if (*plVar7 == 0) {
      lStack_40 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      func_0x00010bfc8e80(&lStack_40);
    }
    _objc_release(uVar6);
    FUN_10adc2d30(plVar4,&lStack_40);
    plVar3 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10adc2d30; end: 10adc2d93;  */

undefined8 * FUN_10adc2d30(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adc2d94; end: 10adc2daf;  */

void FUN_10adc2d94(void)

{
  return;
}



/* Entry: 10adc2db0; end: 10adc2de3; -[LSAARKitPointCloudConverter init] */

void FUN_10adc2db0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701468;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10adc2de4; end: 10adc3103; -[LSAARKitPointCloudConverter getPointCloudFromFrame:] */

void FUN_10adc2de4(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  long *plStack_90;
  long *plStack_88;
  
  _objc_retain(param_4);
  plVar11 = (long *)(param_2 + 8);
  if (*plVar11 == 0) {
    plVar13 = (long *)0x60;
    __Znwm();
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&PTR_DAT_110be9c38;
    plVar13[6] = 0;
    plVar13[5] = 0;
    plVar13[8] = 0;
    plVar13[7] = 0;
    plVar13[10] = 0;
    plVar13[9] = 0;
    plVar13[0xb] = 0;
    plStack_90 = plVar13 + 3;
    plVar13[4] = 0;
    *plStack_90 = 0;
    plStack_88 = plVar13;
    FUN_10adc2d30(plVar11,&plStack_90);
    plVar13 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar5 = plStack_88 + 1;
      do {
        lVar9 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  uVar4 = param_4;
  func_0x00010c120100();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined8 *)*plVar11;
  puVar12[1] = *puVar12;
  puVar12[4] = puVar12[3];
  uVar15 = uVar4;
  func_0x00010bf529e0();
  func_0x00010983ca2c(puVar12,uVar15);
  lVar9 = *plVar11;
  uVar15 = uVar4;
  func_0x00010bf529e0(uVar4);
  func_0x0001056c5718(lVar9 + 0x18,uVar15);
  lVar9 = 0;
  uVar15 = 0;
  do {
    uVar7 = uVar4;
    func_0x00010bf529e0();
    plVar13 = (long *)*plVar11;
    if (uVar7 <= uVar15) {
      uVar15 = uVar4;
      func_0x00010bf529e0(uVar4);
      plStack_90 = (long *)CONCAT44(plStack_90._4_4_,0x3f800000);
      func_0x00010817850c(plVar13 + 6,uVar15,&plStack_90);
      lVar9 = *(long *)(param_2 + 0x10);
      uVar16 = *(undefined8 *)(param_2 + 8);
      param_1[1] = *(undefined8 *)(param_2 + 0x10);
      *param_1 = uVar16;
      if (lVar9 != 0) {
        plVar11 = (long *)(lVar9 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = *plVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      _objc_release(uVar4);
      _objc_release(param_4);
      return;
    }
    uVar7 = uVar4;
    func_0x00010c102f00();
    uVar16 = *(undefined8 *)(uVar7 + lVar9);
    uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) * 100.0,(float)uVar16 * 100.0);
    fVar17 = (float)((undefined8 *)(uVar7 + lVar9))[1] * 100.0;
    puVar12 = (undefined8 *)plVar13[1];
    if (puVar12 < (undefined8 *)plVar13[2]) {
      *puVar12 = uVar16;
      *(float *)(puVar12 + 1) = fVar17;
      lVar10 = (long)puVar12 + 0xc;
    }
    else {
      lVar10 = (long)puVar12 - *plVar13;
      uVar7 = (lVar10 >> 2) * -0x5555555555555555 + 1;
      if (0x1555555555555555 < uVar7) {
        func_0x0001094ccafc();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10adc30bc);
        (*pcVar3)();
      }
      lVar6 = plVar13[2] - *plVar13 >> 2;
      uVar8 = lVar6 * 0x5555555555555556;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar8 = 0x1555555555555555;
      }
      plVar5 = plVar13;
      func_0x0001094ccb10();
      puVar12 = (undefined8 *)((long)plVar5 + lVar10);
      *puVar12 = uVar16;
      *(float *)(puVar12 + 1) = fVar17;
      lVar10 = (long)puVar12 + 0xc;
      lVar14 = (long)puVar12 - (plVar13[1] - *plVar13);
      _memcpy(lVar14);
      lVar6 = *plVar13;
      *plVar13 = lVar14;
      plVar13[1] = lVar10;
      plVar13[2] = (long)plVar5 + uVar8 * 0xc;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
    plVar13[1] = lVar10;
    lVar10 = *plVar11;
    uVar7 = uVar4;
    func_0x00010bfe5fa0();
    plStack_90 = (long *)CONCAT44(plStack_90._4_4_,(int)*(undefined8 *)(uVar7 + uVar15 * 8));
    func_0x0001093aa148(lVar10 + 0x18,&plStack_90);
    uVar15 = uVar15 + 1;
    lVar9 = lVar9 + 0x10;
  } while( true );
}



/* Entry: 10adc3104; end: 10adc315f; -[LSAARKitPointCloudConverter resetPointCloud] */

void FUN_10adc3104(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10adc3160; end: 10adc3167; -[LSAARKitPointCloudConverter .cxx_destruct] */

long FUN_10adc3160(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10adc3168; end: 10adc316f; -[LSAARKitPointCloudConverter .cxx_construct] */

void FUN_10adc3168(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10adc3170; end: 10adc31ff;  */

void FUN_10adc3170(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8;
  _objc_opt_class(PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8);
                    /* WARNING: Could not recover jumptable at 0x00010c0b5b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lsa_anchorsOfClassType__11260b0f8,puVar1);
  return;
}



/* Entry: 10adc3200; end: 10adc334b;  */

void FUN_10adc3200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong *extraout_x8;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 in_register_00005048;
  undefined8 uVar19;
  undefined8 in_register_00005068;
  float fVar20;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 0;
  uVar18 = 0;
  func_0x00010bf029a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      uVar10 = *(ulong *)(lVar11 * 8);
      _objc_opt_isKindOfClass(uVar10,param_7);
      if ((uVar10 & 1) != 0) {
        func_0x00010befa120(puVar3);
      }
      lVar11 = lVar11 + 1;
    } while (lVar9 != lVar11);
    lVar9 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar3;
  uStack_1f0 = uVar16;
  uStack_1e8 = uVar18;
  uStack_1e0 = param_2;
  uStack_1d0 = param_3;
  uStack_1c0 = param_4;
  func_0x00010bde1780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__matrix_identity_float4x4_11034c640;
  uVar10 = *(ulong *)PTR__matrix_identity_float4x4_11034c640;
  uVar17 = *(ulong *)(PTR__matrix_identity_float4x4_11034c640 + 0x18);
  uVar15 = *(ulong *)(PTR__matrix_identity_float4x4_11034c640 + 0x10);
  extraout_x8[1] = *(ulong *)(PTR__matrix_identity_float4x4_11034c640 + 8);
  *extraout_x8 = uVar10;
  extraout_x8[3] = uVar17;
  extraout_x8[2] = uVar15;
  uVar10 = *(ulong *)(puVar4 + 0x20);
  uVar17 = *(ulong *)(puVar4 + 0x38);
  uVar15 = *(ulong *)(puVar4 + 0x30);
  extraout_x8[5] = *(ulong *)(puVar4 + 0x28);
  extraout_x8[4] = uVar10;
  extraout_x8[7] = uVar17;
  extraout_x8[6] = uVar15;
  extraout_x8[8] = 0x3ff0000000000000;
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c27a460(puVar5);
    uVar10 = 0;
    uStack_228 = 0;
    uStack_230 = 0x3f800000;
    uStack_218 = 0;
    uStack_220 = 0x3f80000000000000;
    uVar18 = 0x3f80000000000000;
    uVar16 = 0;
    uStack_208 = 0x3f800000;
    uStack_210 = 0;
    uStack_1f8 = 0x3f80000000000000;
    uStack_200 = 0;
    puVar7 = &uStack_230;
    do {
      lVar9 = 0;
      do {
        uVar12 = *(uint *)((long)&uStack_1f0 + (uVar10 & 3) * 4 + lVar9);
        uVar15 = (ulong)uVar12;
        uVar14 = 0;
        *(uint *)((long)puVar7 + lVar9) = uVar12;
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != 0x40);
      uVar10 = uVar10 + 1;
      puVar7 = (ulong *)((long)puVar7 + 4);
    } while (uVar10 != 4);
    uVar19 = param_4;
    func_0x00010bf28e60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27a460();
    uVar10 = 0;
    fVar20 = (float)((ulong)param_4 >> 0x20);
    uStack_1a8 = uVar14;
    uStack_1b0 = uVar15;
    uStack_198 = uVar18;
    uStack_1a0 = uVar16;
    uStack_188 = in_register_00005048;
    uStack_190 = param_3;
    uStack_178 = in_register_00005068;
    uStack_180 = uVar19;
    uStack_268 = 0;
    uStack_270 = 0x3f800000;
    uStack_258 = 0;
    uStack_260 = 0x3f80000000000000;
    puVar8 = &uStack_270;
    uStack_248 = 0x3f800000;
    uStack_250 = 0;
    uStack_238 = 0x3f80000000000000;
    uStack_240 = 0;
    do {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)puVar8 + lVar9) =
             *(undefined4 *)((long)&uStack_1b0 + (uVar10 & 3) * 4 + lVar9);
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != 0x40);
      uVar10 = uVar10 + 1;
      puVar8 = (undefined8 *)((long)puVar8 + 4);
    } while (uVar10 != 4);
    _objc_release(puVar3);
    if ((bRam00000001137ed1c0 & 1) == 0) {
      iVar2 = 0x137ed1c0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        uRam00000001137ed1d8 = 0;
        uRam00000001137ed1d0 = 0x3f800000;
        uRam00000001137ed1e8 = 0;
        uRam00000001137ed1e0 = 0x3f80000000000000;
        uRam00000001137ed1f8 = 0x3f800000;
        uRam00000001137ed1f0 = 0;
        uRam00000001137ed208 = 0x3f80000000000000;
        uRam00000001137ed200 = 0;
        ___cxa_guard_release(0x1137ed1c0);
      }
    }
    uStack_2a8 = 0;
    uStack_2b0 = 0xbf800000b33bbd2e;
    uStack_298 = 0;
    uStack_2a0 = 0xb33bbd2e3f800000;
    uStack_288 = 0x3f800000;
    uStack_290 = 0;
    uStack_278 = 0x3f80000000000000;
    uStack_280 = 0;
    FUN_10a4d8ba8(&uStack_1b0,&uStack_2b0);
    uStack_2a8 = uStack_1a8;
    uStack_2b0 = uStack_1b0;
    uStack_298 = uStack_198;
    uStack_2a0 = uStack_1a0;
    uStack_288 = uStack_188;
    uStack_290 = uStack_190;
    uStack_278 = uStack_178;
    uStack_280 = uStack_180;
    FUN_10a4f5170(&uStack_1b0,&uStack_230);
    uStack_228 = uStack_1a8;
    uStack_230 = uStack_1b0;
    uStack_218 = uStack_198;
    uStack_220 = uStack_1a0;
    uStack_208 = uStack_188;
    uStack_210 = uStack_190;
    uStack_1f8 = uStack_178;
    uStack_200 = uStack_180;
    uStack_2e8 = uStack_268;
    uStack_2f0 = uStack_270;
    uStack_2d8 = uStack_258;
    uStack_2e0 = uStack_260;
    uStack_2c8 = uStack_248;
    uStack_2d0 = uStack_250;
    uStack_2b8 = uStack_238;
    uStack_2c0 = uStack_240;
    FUN_10a4f5170(&uStack_2f0,&uStack_230);
    uVar10 = 0;
    dVar13 = ABS((double)uStack_240._4_4_ - (double)fVar20) /
             (double)ABS(uStack_240._4_4_ - uStack_2c0._4_4_);
    uStack_2c0 = CONCAT44(fVar20,(float)((double)(float)uStack_240 +
                                        dVar13 * ((double)(float)uStack_2c0 -
                                                 (double)(float)uStack_240)));
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,
                          (float)((double)(float)uStack_238 +
                                 dVar13 * ((double)(float)uStack_2b8 - (double)(float)uStack_238)));
    uStack_1a8 = *(ulong *)(puVar4 + 8);
    uStack_1b0 = *(ulong *)puVar4;
    uStack_198 = *(ulong *)(puVar4 + 0x18);
    uStack_1a0 = *(ulong *)(puVar4 + 0x10);
    uStack_188 = *(ulong *)(puVar4 + 0x28);
    uStack_190 = *(ulong *)(puVar4 + 0x20);
    uStack_178 = *(ulong *)(puVar4 + 0x38);
    uStack_180 = *(ulong *)(puVar4 + 0x30);
    puVar8 = &uStack_2f0;
    do {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)&uStack_1b0 + (uVar10 & 3) * 4 + lVar9) =
             *(undefined4 *)((long)puVar8 + lVar9);
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != 0x40);
      uVar10 = uVar10 + 1;
      puVar8 = (undefined8 *)((long)puVar8 + 4);
    } while (uVar10 != 4);
    extraout_x8[1] = uStack_1a8;
    *extraout_x8 = uStack_1b0;
    extraout_x8[3] = uStack_198;
    extraout_x8[2] = uStack_1a0;
    extraout_x8[5] = uStack_188;
    extraout_x8[4] = uStack_190;
    extraout_x8[7] = uStack_178;
    extraout_x8[6] = uStack_180;
    extraout_x8[8] = (ulong)dVar13;
  }
  _objc_release(puVar5);
  return;
}



/* Entry: 10adc334c; end: 10adc366b;  */

void FUN_10adc334c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  double dVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 in_register_00005048;
  undefined8 uVar15;
  undefined8 in_register_00005068;
  float fVar16;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  lVar3 = param_6;
  auStack_d0[0] = param_2;
  uStack_c0 = param_3;
  uStack_b0 = param_4;
  uStack_a0 = param_5;
  func_0x00010bde1780();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__matrix_identity_float4x4_11034c640;
  uVar4 = *(ulong *)PTR__matrix_identity_float4x4_11034c640;
  uVar13 = *(ulong *)(PTR__matrix_identity_float4x4_11034c640 + 0x18);
  uVar11 = *(ulong *)(PTR__matrix_identity_float4x4_11034c640 + 0x10);
  param_1[1] = *(ulong *)(PTR__matrix_identity_float4x4_11034c640 + 8);
  *param_1 = uVar4;
  param_1[3] = uVar13;
  param_1[2] = uVar11;
  uVar4 = *(ulong *)(puVar1 + 0x20);
  uVar13 = *(ulong *)(puVar1 + 0x38);
  uVar11 = *(ulong *)(puVar1 + 0x30);
  param_1[5] = *(ulong *)(puVar1 + 0x28);
  param_1[4] = uVar4;
  param_1[7] = uVar13;
  param_1[6] = uVar11;
  param_1[8] = 0x3ff0000000000000;
  if (lVar3 != 0) {
    func_0x00010c27a460(lVar3);
    uVar4 = 0;
    uStack_108 = 0;
    uStack_110 = 0x3f800000;
    uStack_f8 = 0;
    uStack_100 = 0x3f80000000000000;
    uVar14 = 0x3f80000000000000;
    uVar12 = 0;
    uStack_e8 = 0x3f800000;
    uStack_f0 = 0;
    uStack_d8 = 0x3f80000000000000;
    uStack_e0 = 0;
    puVar5 = &uStack_110;
    do {
      lVar7 = 0;
      do {
        uVar8 = *(uint *)((long)auStack_d0 + (uVar4 & 3) * 4 + lVar7);
        uVar11 = (ulong)uVar8;
        uVar10 = 0;
        *(uint *)((long)puVar5 + lVar7) = uVar8;
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x40);
      uVar4 = uVar4 + 1;
      puVar5 = (ulong *)((long)puVar5 + 4);
    } while (uVar4 != 4);
    uVar15 = param_5;
    func_0x00010bf28e60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27a460();
    uVar4 = 0;
    fVar16 = (float)((ulong)param_5 >> 0x20);
    uStack_88 = uVar10;
    uStack_90 = uVar11;
    uStack_78 = uVar14;
    uStack_80 = uVar12;
    uStack_68 = in_register_00005048;
    uStack_70 = param_4;
    uStack_58 = in_register_00005068;
    uStack_60 = uVar15;
    uStack_148 = 0;
    uStack_150 = 0x3f800000;
    uStack_138 = 0;
    uStack_140 = 0x3f80000000000000;
    puVar6 = &uStack_150;
    uStack_128 = 0x3f800000;
    uStack_130 = 0;
    uStack_118 = 0x3f80000000000000;
    uStack_120 = 0;
    do {
      lVar7 = 0;
      do {
        *(undefined4 *)((long)puVar6 + lVar7) =
             *(undefined4 *)((long)&uStack_90 + (uVar4 & 3) * 4 + lVar7);
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x40);
      uVar4 = uVar4 + 1;
      puVar6 = (undefined8 *)((long)puVar6 + 4);
    } while (uVar4 != 4);
    _objc_release(param_6);
    if ((bRam00000001137ed1c0 & 1) == 0) {
      iVar2 = 0x137ed1c0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        uRam00000001137ed1d8 = 0;
        uRam00000001137ed1d0 = 0x3f800000;
        uRam00000001137ed1e8 = 0;
        uRam00000001137ed1e0 = 0x3f80000000000000;
        uRam00000001137ed1f8 = 0x3f800000;
        uRam00000001137ed1f0 = 0;
        uRam00000001137ed208 = 0x3f80000000000000;
        uRam00000001137ed200 = 0;
        ___cxa_guard_release(0x1137ed1c0);
      }
    }
    uStack_188 = 0;
    uStack_190 = 0xbf800000b33bbd2e;
    uStack_178 = 0;
    uStack_180 = 0xb33bbd2e3f800000;
    uStack_168 = 0x3f800000;
    uStack_170 = 0;
    uStack_158 = 0x3f80000000000000;
    uStack_160 = 0;
    FUN_10a4d8ba8(&uStack_90,&uStack_190);
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    uStack_170 = uStack_70;
    uStack_158 = uStack_58;
    uStack_160 = uStack_60;
    FUN_10a4f5170(&uStack_90,&uStack_110);
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    FUN_10a4f5170(&uStack_1d0,&uStack_110);
    uVar4 = 0;
    dVar9 = ABS((double)uStack_120._4_4_ - (double)fVar16) /
            (double)ABS(uStack_120._4_4_ - uStack_1a0._4_4_);
    uStack_1a0 = CONCAT44(fVar16,(float)((double)(float)uStack_120 +
                                        dVar9 * ((double)(float)uStack_1a0 -
                                                (double)(float)uStack_120)));
    uStack_198 = CONCAT44(uStack_198._4_4_,
                          (float)((double)(float)uStack_118 +
                                 dVar9 * ((double)(float)uStack_198 - (double)(float)uStack_118)));
    uStack_88 = *(ulong *)(puVar1 + 8);
    uStack_90 = *(ulong *)puVar1;
    uStack_78 = *(ulong *)(puVar1 + 0x18);
    uStack_80 = *(ulong *)(puVar1 + 0x10);
    uStack_68 = *(ulong *)(puVar1 + 0x28);
    uStack_70 = *(ulong *)(puVar1 + 0x20);
    uStack_58 = *(ulong *)(puVar1 + 0x38);
    uStack_60 = *(ulong *)(puVar1 + 0x30);
    puVar6 = &uStack_1d0;
    do {
      lVar7 = 0;
      do {
        *(undefined4 *)((long)&uStack_90 + (uVar4 & 3) * 4 + lVar7) =
             *(undefined4 *)((long)puVar6 + lVar7);
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x40);
      uVar4 = uVar4 + 1;
      puVar6 = (undefined8 *)((long)puVar6 + 4);
    } while (uVar4 != 4);
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
    param_1[8] = (ulong)dVar9;
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10adc366c; end: 10adc3783;  */

bool FUN_10adc366c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint auStack_70 [16];
  double dVar8;
  
  _objc_retain(param_7);
  if (param_7 != 0) {
    func_0x00010c27a460(param_7);
    uVar4 = 0;
    uStack_a8 = in_register_00005008;
    uStack_b0 = param_1;
    uStack_98 = in_register_00005028;
    uStack_a0 = param_2;
    uStack_88 = in_register_00005048;
    uStack_90 = param_3;
    uStack_78 = in_register_00005068;
    uStack_80 = param_4;
    auStack_70[2] = 0;
    auStack_70[3] = 0;
    auStack_70[0] = 0x3f800000;
    auStack_70[1] = 0;
    auStack_70[6] = 0;
    auStack_70[7] = 0;
    auStack_70[4] = 0;
    auStack_70[5] = 0x3f800000;
    auStack_70[10] = 0x3f800000;
    auStack_70[0xb] = 0;
    auStack_70[8] = 0;
    auStack_70[9] = 0;
    auStack_70[0xe] = 0;
    auStack_70[0xf] = 0x3f800000;
    auStack_70[0xc] = 0;
    auStack_70[0xd] = 0;
    do {
      lVar5 = 0;
      lVar6 = 0;
      do {
        uVar7 = *(uint *)((long)&uStack_b0 + (uVar4 & 3) * 4 + lVar5);
        dVar8 = (double)(ulong)uVar7;
        iVar3 = (int)uVar4;
        puVar2 = auStack_70 + lVar6 * 4 + 3;
        if (iVar3 != 3) {
          puVar2 = (uint *)((long)auStack_70 + lVar5);
        }
        puVar1 = auStack_70 + lVar6 * 4 + 2;
        if (iVar3 != 2) {
          puVar1 = puVar2;
        }
        puVar2 = auStack_70 + lVar6 * 4 + 1;
        if (iVar3 != 1) {
          puVar2 = puVar1;
        }
        *puVar2 = uVar7;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != 0x40);
      uVar4 = (ulong)(iVar3 + 1U);
    } while (iVar3 + 1U != 4);
    func_0x00010c064100(param_7);
    func_0x00010be15e20((float)dVar8,param_5,param_6,auStack_70,param_8);
  }
  _objc_release(param_7);
  return param_7 != 0;
}



/* Entry: 10adc3784; end: 10adc37d7;  */

undefined8 FUN_10adc3784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  uStack_44 = 0;
  uStack_4c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_50 = 0x3f800000;
  uStack_3c = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_14 = 0x3f800000;
  func_0x00010be15e20(0x3f800000,param_1,param_2,&uStack_50,param_3);
  return 1;
}



/* Entry: 10adc37d8; end: 10adc383f;  */

void FUN_10adc37d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uStack_48 = param_3[5];
  uStack_50 = param_3[4];
  uStack_38 = param_3[7];
  uStack_40 = param_3[6];
  func_0x00010bfc4c80(&lStack_28,param_1,param_2,&uStack_70);
  lVar1 = lStack_28;
  lStack_28 = 0;
  lVar2 = *(long *)(param_4 + 0xd0);
  *(long *)(param_4 + 0xd0) = lVar1;
  if (lVar2 != 0) {
    __ZdlPv();
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10adc3840; end: 10adc3b23;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_10adc3840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 in_register_00005008;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_register_00005068;
  undefined8 uStack_210;
  undefined1 auStack_1d0 [64];
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [64];
  float fStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_d0 = (float)param_2;
  fStack_a4 = fStack_d0 * 0.0;
  uVar15 = (ulong)(uint)fStack_a4;
  uVar16 = 0;
  uVar17 = CONCAT44(fStack_a4,fStack_a4);
  uVar18 = CONCAT44(fStack_a4,fStack_a4);
  uStack_a0 = 0;
  uStack_98 = 0x3f80000000000000;
  uStack_cc = uVar17;
  uStack_c4 = uVar18;
  fStack_bc = fStack_d0;
  uStack_b8 = uVar17;
  uStack_b0 = uVar18;
  fStack_a8 = fStack_d0;
  func_0x000109519fd0(auStack_110,param_8,&fStack_d0);
  uVar1 = param_6;
  func_0x00010bf28e60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a460();
  uVar7 = 0;
  uStack_188 = in_register_00005008;
  uStack_190 = param_2;
  uStack_178 = uVar16;
  uStack_180 = uVar15;
  uStack_168 = uVar18;
  uStack_170 = uVar17;
  uStack_158 = in_register_00005068;
  uStack_160 = param_5;
  auStack_148 = (undefined1  [8])0x0;
  auStack_150 = (undefined1  [8])0x3f800000;
  uStack_138 = 0;
  uStack_140 = 0x3f80000000000000;
  uStack_210 = 0;
  uStack_128 = 0x3f800000;
  uStack_130 = 0;
  uStack_118 = 0x3f80000000000000;
  uStack_120 = 0;
  do {
    lVar8 = 0;
    lVar9 = 0;
    do {
      iVar6 = (int)uVar7;
      puVar2 = (undefined8 *)((long)auStack_148 + lVar9 * 0x10 + 4);
      if (iVar6 != 3) {
        puVar2 = (undefined8 *)((long)auStack_150 + lVar8);
      }
      puVar3 = (undefined8 *)((long)auStack_148 + lVar9 * 2 * 8);
      if (iVar6 != 2) {
        puVar3 = puVar2;
      }
      puVar2 = (undefined8 *)((long)auStack_150 + lVar9 * 0x10 + 4);
      if (iVar6 != 1) {
        puVar2 = puVar3;
      }
      *(undefined4 *)puVar2 = *(undefined4 *)((long)&uStack_190 + (uVar7 & 3) * 4 + lVar8);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x40);
    uVar7 = (ulong)(iVar6 + 1U);
  } while (iVar6 + 1U != 4);
  _objc_release(uVar1);
  func_0x000109519fd0(auStack_1d0,auStack_150,&fStack_d0);
  func_0x0001094f5708(&uStack_90,auStack_1d0);
  func_0x000109519fd0(&uStack_190,&uStack_90,auStack_110);
  auStack_148 = (undefined1  [8])uStack_188;
  auStack_150 = (undefined1  [8])uStack_190;
  uStack_138 = uStack_178;
  uStack_140 = uStack_180;
  uStack_128 = uStack_168;
  uStack_130 = uStack_170;
  uStack_118 = uStack_158;
  uStack_120 = uStack_160;
  uStack_88 = 0x3f3504f3bf3504f3;
  uStack_90 = 0x8000000080000000;
  FUN_10a3ebe84(&uStack_190,&uStack_90);
  func_0x000109519fd0(&uStack_90,&uStack_190,auStack_150);
  auStack_148 = (undefined1  [8])uStack_88;
  auStack_150 = (undefined1  [8])uStack_90;
  uStack_138 = uStack_78;
  uStack_140 = uStack_80;
  uStack_128 = uStack_68;
  uStack_130 = uStack_70;
  uStack_118 = uStack_58;
  uStack_120 = uStack_60;
  uVar1 = param_6;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c279040();
  _objc_release(uVar1);
  if (uVar7 == 0) {
    uVar10 = 2;
  }
  else {
    if (uVar7 == 1) {
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_6;
      func_0x00010c279060();
      _objc_release(param_6);
      if (uVar1 < 5) {
        uVar10 = *(undefined4 *)(&UNK_10e5141c0 + uVar1 * 4);
        uVar1 = param_6;
        goto LAB_10adc3a64;
      }
    }
    else {
      param_6 = uVar1;
      if (uVar7 == 2) {
        uVar10 = 8;
        goto LAB_10adc3a64;
      }
    }
    uVar10 = 1;
    uVar1 = param_6;
  }
LAB_10adc3a64:
  puVar2 = (undefined8 *)0xcc;
  __Znwm();
  puVar2[2] = uStack_88;
  puVar2[1] = uStack_90;
  puVar2[4] = uStack_78;
  puVar2[3] = uStack_80;
  puVar2[6] = uStack_68;
  puVar2[5] = uStack_70;
  *(undefined4 *)puVar2 = 2;
  *(undefined4 *)((long)puVar2 + 4) = uVar10;
  puVar2[8] = uStack_58;
  puVar2[7] = uStack_60;
  puVar2[10] = 0;
  puVar2[9] = 0x3f800000;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0x3f80000000000000;
  puVar2[0xe] = 0x3f800000;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0x3f80000000000000;
  puVar2[0xf] = 0;
  puVar2[0x18] = 0x3f80000000000000;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0x3f800000;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x13] = 0x3f80000000000000;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x19) = 0xffffffff;
  *param_1 = puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(uVar1);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = uStack_210;
  func_0x00010bf029a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  puVar11 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(puVar2);
        }
        puVar12 = *(undefined8 **)((long)puVar13 * 8);
        puVar4 = PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8;
        _objc_opt_class(PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8);
        puVar5 = puVar12;
        _objc_opt_isKindOfClass(puVar12,puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          if (puVar11 == (undefined8 *)0x0) {
            _objc_retain(puVar12);
            puVar11 = puVar12;
          }
          else {
            func_0x00010c27a460(puVar12);
            uVar17 = uVar16;
            func_0x00010c27a460(puVar11);
            fVar14 = (float)((ulong)uVar16 >> 0x20);
            uVar16 = uVar17;
            if (ABS(fVar14 - (float)((ulong)uStack_210 >> 0x20)) <
                ABS(fVar14 - (float)((ulong)uVar17 >> 0x20))) {
              _objc_retain(puVar12);
              _objc_release(puVar11);
              puVar11 = puVar12;
              uVar16 = uVar17;
            }
          }
        }
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar3 != puVar13);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(0);
    __Unwind_Resume();
    *puVar3 = &PTR_FUN_110c745f0;
    _objc_storeWeak(puVar3 + 1,0);
    _objc_destroyWeak(puVar3 + 1);
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 10adc3b24; end: 10adc3cef;  */

undefined8 * FUN_10adc3b24(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined8 in_d3;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = in_d3;
  func_0x00010bf029a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar6 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar7 = *(undefined8 **)((long)puVar8 * 8);
        puVar3 = PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8;
        _objc_opt_class(PTR__OBJC_CLASS___ARPlaneAnchor_1126de1c8);
        puVar4 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar3);
        if (((ulong)puVar4 & 1) != 0) {
          if (puVar6 == (undefined8 *)0x0) {
            _objc_retain(puVar7);
            puVar6 = puVar7;
          }
          else {
            func_0x00010c27a460(puVar7);
            uVar11 = uVar10;
            func_0x00010c27a460(puVar6);
            fVar9 = (float)((ulong)uVar10 >> 0x20);
            uVar10 = uVar11;
            if (ABS(fVar9 - (float)((ulong)in_d3 >> 0x20)) <
                ABS(fVar9 - (float)((ulong)uVar11 >> 0x20))) {
              _objc_retain(puVar7);
              _objc_release(puVar6);
              puVar6 = puVar7;
              uVar10 = uVar11;
            }
          }
        }
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar2 != puVar8);
      puVar2 = param_1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_release(param_1);
    _objc_release(0);
    __Unwind_Resume();
    *puVar2 = &PTR_FUN_110c745f0;
    _objc_storeWeak(puVar2 + 1,0);
    _objc_destroyWeak(puVar2 + 1);
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 10adc3cf0; end: 10adc3d77;  */

undefined8 * FUN_10adc3cf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c745f0;
  _objc_storeWeak(param_1 + 1,0);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10adc3d78; end: 10adc3e1b;  */

void FUN_10adc3d78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79760(uVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adc3e1c; end: 10adc3e77;  */

void FUN_10adc3e1c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf79780(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adc3e78; end: 10adc3ec7; -[LSAModelAnchor initWithTransform:initialPlacementScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc3e78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_d4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701470;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithTransform__1125f2ee8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278456c) = in_d4;
  }
  return;
}



/* Entry: 10adc3ec8; end: 10adc3eeb; -[LSAModelAnchor copyWithZone:] */

undefined8 FUN_10adc3ec8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10adc3eec; end: 10adc3efb; -[LSAModelAnchor initialPlacementScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10adc3eec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278456c);
}



/* Entry: 10adc3efc; end: 10adc3f2f; -[LSAPointAnchor initWithTransform:] */

void FUN_10adc3efc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701478;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithTransform__1125f2ee8);
  return;
}



/* Entry: 10adc3f30; end: 10adc3fdb; -[LSAPointAnchor copyWithZone:] */

undefined8 FUN_10adc3f30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10adc3fdc; end: 10adc407b;  */

ulong FUN_10adc3fdc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf79fc0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc407c; end: 10adc40fb;  */

ulong FUN_10adc407c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf79fa0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc40fc; end: 10adc4163;  */

ulong FUN_10adc40fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf7a000(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc4164; end: 10adc41d3;  */

ulong FUN_10adc4164(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf79fe0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc41d4; end: 10adc4253;  */

ulong FUN_10adc41d4(long param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf7a020((double)param_2[1],1.0 - (double)*param_2,uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc4254; end: 10adc431f;  */

ulong FUN_10adc4254(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uStack_58 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 8);
    uStack_60 = *(undefined8 *)PTR__matrix_identity_float4x4_11034c640;
    uStack_48 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x18);
    uStack_50 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x28);
    uStack_40 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x20);
    uStack_28 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x38);
    uStack_30 = *(undefined8 *)(PTR__matrix_identity_float4x4_11034c640 + 0x30);
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)((long)&uStack_60 + (uVar2 & 3) * 4 + lVar3) =
             *(undefined4 *)(param_2 + lVar3);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0x40);
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 4;
    } while (uVar2 != 4);
    uVar2 = uVar1;
    func_0x00010bf7a040(uStack_60,uStack_50,uStack_40,uStack_30,uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc4320; end: 10adc4373;  */

void FUN_10adc4320(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf76f80(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adc4374; end: 10adc43e3;  */

ulong FUN_10adc4374(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0816a0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc43e4; end: 10adc444b;  */

ulong FUN_10adc43e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0708e0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10adc444c; end: 10adc449f;  */

void FUN_10adc444c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf79f00(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adc44a0; end: 10adc44fb;  */

void FUN_10adc44a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf59aa0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adc44fc; end: 10adc4557;  */

void FUN_10adc44fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6cd00(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adc4558; end: 10adc45f3;  */

uint FUN_10adc4558(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x00010bfcc480(uVar2);
    uVar1 = (uint)uVar3;
    uVar4 = uVar1 & 1;
    uVar5 = uVar1 & 0x100;
    uVar6 = uVar1 & 0x10000;
    uVar1 = uVar1 & 0x1000000;
  }
  _objc_release(uVar2);
  return uVar6 | uVar1 | uVar5 | uVar4;
}



/* Entry: 10adc45f4; end: 10adc47bb;  */

undefined1  [16] FUN_10adc45f4(long param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong in_d3;
  long in_register_00005068;
  undefined1 auVar7 [16];
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    in_d3 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c120500((double)*param_2,(double)param_2[1]);
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0) || (uVar4 = uVar2, func_0x00010bf529e0(), uVar4 == 0)) {
      uVar5 = 0;
      in_d3 = 0;
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      uVar5 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bd5a0();
      uVar6 = uVar2;
      uVar4 = in_d3;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bd5a0();
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bd5a0();
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
      in_d3 = in_d3 << 0x20;
      uVar4 = uVar4 >> 0x20;
      uVar6 = in_register_00005068 << 0x20;
      uVar5 = 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  auVar7._0_8_ = in_d3 | uVar5;
  auVar7._8_8_ = uVar6 | uVar4;
  return auVar7;
}



/* Entry: 10adc47bc; end: 10adc48eb; -[LSATrackingComponent restartTrackingWithCompletion:] */

void FUN_10adc47bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c278dc0(PTR_PTR_1126db570,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10adc48ec;
  puStack_40 = &UNK_11087bb00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10adc4a10;
  puStack_68 = &UNK_110c72a10;
  uStack_38 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  func_0x00010c0f9180(uVar1,param_2,puVar2,&puStack_58,&puStack_80);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 10adc48ec; end: 10adc4a0f;  */

void FUN_10adc48ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_60);
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_38 = plVar4;
      if (plVar4 != (long *)0x0) {
        lStack_40 = lStack_60;
        if (lStack_60 != 0) {
          lStack_50 = lStack_60;
          plVar1 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uStack_28 = 0;
          uStack_30 = 0;
          FUN_10a21bb40(lStack_60,&uStack_30);
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
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adc4a10; end: 10adc4a63;  */

void FUN_10adc4a10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adc4a64; end: 10adc4ba7; -[LSATrackingComponent restartTrackingWithNormalizedPoint:completion:] */

void FUN_10adc4a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0f98a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c278dc0(PTR_PTR_1126db570,param_4,5);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10adc4ba8;
  puStack_60 = &UNK_110c729e0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10adc4cd8;
  puStack_88 = &UNK_110c72a10;
  uStack_58 = param_3;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _objc_retain(param_5);
  uStack_80 = param_5;
  func_0x00010c0f91a0(uVar1,param_4,puVar2,&puStack_78,&puStack_a0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_80);
  _objc_release(param_5);
  return;
}



/* Entry: 10adc4ba8; end: 10adc4cd7;  */

void FUN_10adc4ba8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_30;
  long *plStack_28;
  
  uStack_48 = 1;
  uStack_50 = CONCAT44((float)*(double *)(param_1 + 0x30),(float)*(double *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x20) == 0) {
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_60);
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_28 = plVar4;
      if (plVar4 != (long *)0x0) {
        lStack_30 = lStack_60;
        if (lStack_60 != 0) {
          lStack_40 = lStack_60;
          plVar1 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_10a21bb40(lStack_60,&uStack_50);
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
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
  }
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adc4cd8; end: 10adc4d2b;  */

void FUN_10adc4cd8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adc4d2c; end: 10adc4d3b; -[LSATrackingComponent addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc4d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784570),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10adc4d3c; end: 10adc4d4b; -[LSATrackingComponent removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc4d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784570),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10adc4d4c; end: 10adc4eef; -[LSATrackingComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10adc4d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPerformer_announcerQueue_1125eac68,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de1d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784570);
    *(undefined **)((long)puVar1 + (long)_DAT_112784570) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784574);
    *(undefined **)((long)puVar1 + (long)_DAT_112784574) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de1d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784578);
    *(undefined **)((long)puVar1 + (long)_DAT_112784578) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de1e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278457c);
    *(undefined **)((long)puVar1 + (long)_DAT_11278457c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de1e8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784580);
    *(undefined **)((long)puVar1 + (long)_DAT_112784580) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de1f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784584);
    *(undefined **)((long)puVar1 + (long)_DAT_112784584) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adc4ef0; end: 10adc5287; -[LSATrackingComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc4ef0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_58 = (long *)param_3[1];
  uStack_60 = *param_3;
  if (param_3[1] != 0) {
    plVar8 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_68 = PTR_PTR_112701480;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_60,param_4
                      ,param_5);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10adc5288;
  puStack_80 = &UNK_110c730d0;
  _objc_retain(param_5);
  uStack_78 = param_5;
  func_0x00010bf9b180(param_1);
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c74708;
  puVar6 = puVar4 + 3;
  *puVar6 = &PTR_FUN_110c745f0;
  _objc_initWeak(puVar4 + 4,param_1);
  puStack_b0 = (undefined8 *)(param_1 + _DAT_112784588);
  plVar8 = (long *)puStack_b0[1];
  *puStack_b0 = puVar6;
  puStack_b0[1] = puVar4;
  if (plVar8 == (long *)0x0) {
    uVar5 = *param_3;
    puStack_b0 = puVar6;
    puStack_a8 = puVar4;
LAB_10adc5098:
    plVar8 = puVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    uVar5 = *param_3;
    puVar4 = (undefined8 *)puStack_b0[1];
    puStack_a8 = (undefined8 *)puStack_b0[1];
    puStack_b0 = (undefined8 *)*puStack_b0;
    if (puVar4 != (undefined8 *)0x0) goto LAB_10adc5098;
  }
  FUN_10a226938(uVar5,&puStack_b0);
  if (puStack_a8 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c74758;
  puVar9 = puVar6 + 3;
  *puVar9 = &PTR_DAT_110c74660;
  _objc_initWeak(puVar6 + 4,param_1);
  puVar4 = (undefined8 *)(param_1 + _DAT_11278458c);
  plVar8 = (long *)puVar4[1];
  *puVar4 = puVar9;
  puVar4[1] = puVar6;
  if (plVar8 == (long *)0x0) {
    uVar5 = *param_3;
    puStack_b0 = puVar9;
    puStack_a8 = puVar6;
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    uVar5 = *param_3;
    puVar6 = (undefined8 *)puVar4[1];
    puStack_a8 = (undefined8 *)puVar4[1];
    puStack_b0 = (undefined8 *)*puVar4;
    if (puVar6 == (undefined8 *)0x0) goto LAB_10adc5174;
  }
  plVar8 = puVar6 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_10adc5174:
  FUN_10a227a24(uVar5,&puStack_b0);
  if (puStack_a8 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar8 = (long *)param_3[1];
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010c125e80(param_1);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adc5288; end: 10adc52fb;  */

void FUN_10adc5288(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c278ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf12ae0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar2 = *param_2;
    *(undefined1 *)(lVar2 + 0xaa) = 2;
    *(undefined2 *)(lVar2 + 0xa8) = 0x100;
  }
  return;
}



/* Entry: 10adc52fc; end: 10adc5b7f; -[LSATrackingComponent registerCalculators:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10adc52fc(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 *unaff_x23;
  undefined8 uStack_478;
  long *plStack_470;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [8];
  code *pcStack_458;
  undefined **ppuStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined *puStack_418;
  undefined **ppuStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d0;
  undefined **ppuStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [16];
  code *pcStack_340;
  undefined **ppuStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  code *pcStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  code *pcStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = *(long **)(*(long *)(*(long *)*param_3 + 0x208) + 0xb8);
  if ((plVar6 != (long *)0x0) && (lVar8 = *plVar6, *(char *)(lVar8 + 0x650) == '\x01')) {
    lVar7 = *(long *)(lVar8 + 0x648);
    _objc_initWeak(auStack_468,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11278458c);
    plVar6 = *(long **)((long)(param_1 + _DAT_11278458c) + 8);
    uStack_478 = uVar2;
    plStack_470 = plVar6;
    if (plVar6 == (long *)0x0) {
      _objc_copyWeak(auStack_110,auStack_468);
      plStack_100 = (long *)0x0;
    }
    else {
      plVar1 = plVar6 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      _objc_copyWeak(auStack_110,auStack_468);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plStack_100 = plVar6;
      } while (cVar3 != '\0');
    }
    uStack_d0 = 0;
    uStack_d8 = 0;
    lStack_f8 = lVar8 + 0x648;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    pcStack_e8 = FUN_10adc7168;
    ppuStack_e0 = &PTR_DAT_110ae9180;
    puStack_a8 = &UNK_1098ba5f4;
    ppuStack_a0 = &PTR_DAT_110ae9180;
    puVar5 = (undefined8 *)0xd0;
    uStack_108 = uVar2;
    __Znwm();
    *(undefined1 *)(puVar5 + 2) = 0;
    *puVar5 = &PTR_FUN_110c747a8;
    puVar5[3] = 0;
    puVar5[4] = 0;
    _objc_moveWeak(puVar5 + 5,auStack_110);
    puVar5[7] = plStack_100;
    puVar5[6] = uStack_108;
    uStack_108 = 0;
    plStack_100 = (long *)0x0;
    puVar5[8] = lStack_f8;
    puVar5[10] = pcStack_e8;
    (*(code *)ppuStack_e0[2])(puVar5 + 0xb,&ppuStack_e0);
    puVar5[0x12] = puStack_a8;
    (*(code *)ppuStack_a0[2])(puVar5 + 0x13,&ppuStack_a0);
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    func_0x0001098ba2b4(lVar7 + 0x20,&UNK_10e514038,0x1b,puVar5);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    plVar6 = plStack_100;
    if (plStack_100 != (long *)0x0) {
      plVar1 = plStack_100 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    _objc_destroyWeak(auStack_110);
    _objc_copyWeak(auStack_1a0,auStack_468);
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_190 = 0x10adc7178;
    ppuStack_188 = &PTR_DAT_110ae9180;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    puStack_150 = &UNK_1098ba5f4;
    ppuStack_148 = &PTR_DAT_110ae9180;
    puVar5 = (undefined8 *)0xb8;
    __Znwm();
    *(undefined1 *)(puVar5 + 2) = 0;
    *puVar5 = &PTR_FUN_110c74998;
    puVar5[3] = 0;
    puVar5[4] = 0;
    _objc_moveWeak(puVar5 + 5,auStack_1a0);
    puVar5[7] = uStack_190;
    (*(code *)ppuStack_188[2])(puVar5 + 8,&ppuStack_188);
    puVar5[0xf] = puStack_150;
    (*(code *)ppuStack_148[2])(puVar5 + 0x10,&ppuStack_148);
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    func_0x0001098ba2b4(lVar7 + 0x20,&UNK_10e4a308c,0x22,puVar5);
    (*(code *)*ppuStack_148)(&ppuStack_148);
    (*(code *)*ppuStack_188)(&ppuStack_188);
    _objc_destroyWeak(auStack_1a0);
    _objc_copyWeak(auStack_230,auStack_468);
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    pcStack_220 = FUN_10a4fc0a8;
    ppuStack_218 = &PTR_DAT_110ae9180;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    puStack_1e0 = &UNK_1098ba5f4;
    ppuStack_1d8 = &PTR_DAT_110ae9180;
    puVar5 = (undefined8 *)0xb8;
    __Znwm();
    *(undefined1 *)(puVar5 + 2) = 0;
    *puVar5 = &PTR_FUN_110c74be8;
    puVar5[3] = 0;
    puVar5[4] = 0;
    _objc_moveWeak(puVar5 + 5,auStack_230);
    puVar5[7] = pcStack_220;
    (*(code *)ppuStack_218[2])(puVar5 + 8,&ppuStack_218);
    puVar5[0xf] = puStack_1e0;
    (*(code *)ppuStack_1d8[2])(puVar5 + 0x10,&ppuStack_1d8);
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    func_0x0001098ba2b4(lVar7 + 0x20,&UNK_10e4c911b,0x23,puVar5);
    (*(code *)*ppuStack_1d8)(&ppuStack_1d8);
    (*(code *)*ppuStack_218)(&ppuStack_218);
    _objc_destroyWeak(auStack_230);
    _objc_copyWeak(auStack_2c0,auStack_468);
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    pcStack_2b0 = FUN_10a4fce64;
    ppuStack_2a8 = &PTR_DAT_110ae9180;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puStack_270 = &UNK_1098ba5f4;
    ppuStack_268 = &PTR_DAT_110ae9180;
    puVar5 = (undefined8 *)0xb8;
    __Znwm();
    *(undefined1 *)(puVar5 + 2) = 0;
    *puVar5 = &PTR_FUN_110c74d08;
    puVar5[3] = 0;
    puVar5[4] = 0;
    _objc_moveWeak(puVar5 + 5,auStack_2c0);
    puVar5[7] = pcStack_2b0;
    (*(code *)ppuStack_2a8[2])(puVar5 + 8,&ppuStack_2a8);
    puVar5[0xf] = puStack_270;
    (*(code *)ppuStack_268[2])(puVar5 + 0x10,&ppuStack_268);
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    func_0x0001098ba2b4(lVar7 + 0x20,&UNK_10e4c90b0,0x29,puVar5);
    (*(code *)*ppuStack_268)(&ppuStack_268);
    (*(code *)*ppuStack_2a8)(&ppuStack_2a8);
    _objc_destroyWeak(auStack_2c0);
    _objc_copyWeak(auStack_350,auStack_468);
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    pcStack_340 = FUN_10a4fc7b4;
    ppuStack_338 = &PTR_DAT_110ae9180;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    puStack_300 = &UNK_1098ba5f4;
    ppuStack_2f8 = &PTR_DAT_110ae9180;
    puVar5 = (undefined8 *)0xb8;
    __Znwm();
    *(undefined1 *)(puVar5 + 2) = 0;
    *puVar5 = &PTR_FUN_110c74e28;
    puVar5[3] = 0;
    puVar5[4] = 0;
    _objc_moveWeak(puVar5 + 5,auStack_350);
    puVar5[7] = pcStack_340;
    (*(code *)ppuStack_338[2])(puVar5 + 8,&ppuStack_338);
    puVar5[0xf] = puStack_300;
    (*(code *)ppuStack_2f8[2])(puVar5 + 0x10,&ppuStack_2f8);
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    func_0x0001098ba2b4(lVar7 + 0x20,&UNK_10e4c8fa1,0x27,puVar5);
    (*(code *)*ppuStack_2f8)(&ppuStack_2f8);
    (*(code *)*ppuStack_338)(&ppuStack_338);
    _objc_destroyWeak(auStack_350);
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3d0 = 0x10adc7188;
    ppuStack_3c8 = &PTR_DAT_110ae9180;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    puStack_390 = &UNK_1098ba5f4;
    ppuStack_388 = &PTR_DAT_110ae9180;
    puVar5 = (undefined8 *)0xb0;
    __Znwm();
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[6] = 0x10adc7188;
    puVar5[7] = &PTR_DAT_110ae9180;
    puVar5[0xe] = &UNK_1098ba5f4;
    puVar5[0xf] = &PTR_DAT_110ae9180;
    *puVar5 = &PTR_FUN_110c74f48;
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    func_0x0001098ba2b4(lVar7 + 0x20,&UNK_10e50d082,0x26,puVar5);
    (*(code *)*ppuStack_388)(&ppuStack_388);
    (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
    uStack_420 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_448 = 0;
    unaff_x23 = auStack_460;
    pcStack_458 = FUN_10a4ff168;
    ppuStack_450 = &PTR_DAT_110ae9180;
    uStack_400 = 0;
    uStack_408 = 0;
    uStack_3f0 = 0;
    uStack_3f8 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    puStack_418 = &UNK_1098ba5f4;
    ppuStack_410 = &PTR_DAT_110ae9180;
    puVar5 = (undefined8 *)0xb0;
    __Znwm();
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[6] = FUN_10a4ff168;
    puVar5[7] = &PTR_DAT_110ae9180;
    puVar5[0xe] = &UNK_1098ba5f4;
    puVar5[0xf] = &PTR_DAT_110ae9180;
    *puVar5 = &PTR_FUN_110c75100;
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    func_0x0001098ba2b4(lVar7 + 0x20,&UNK_10e4c8e94,0x23,puVar5);
    (*(code *)*ppuStack_410)(&ppuStack_410);
    (*(code *)*ppuStack_450)(&ppuStack_450);
    plVar6 = plStack_470;
    if (plStack_470 != (long *)0x0) {
      plVar1 = plStack_470 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_470 + 0x10))(plStack_470);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    param_1 = auStack_468;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_410)(unaff_x23 + 0x50);
    (*(code *)*ppuStack_450)(unaff_x23 + 0x10);
    FUN_10adc7198(&uStack_478);
    _objc_destroyWeak(auStack_468);
    __Unwind_Resume();
    (*(code *)**(undefined8 **)(param_1 + 0x70))();
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    FUN_10adc7198(param_1 + 8);
    _objc_destroyWeak(param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 10adc5b80; end: 10adc5bcb;  */

long FUN_10adc5b80(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x70))();
  (*(code *)**(undefined8 **)(param_1 + 0x30))();
  FUN_10adc7198(param_1 + 8);
  _objc_destroyWeak(param_1);
  return param_1;
}



/* Entry: 10adc5bcc; end: 10adc5c1b; -[LSATrackingComponent clearResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc5bcc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112784590;
  func_0x00010bf3aca0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112784594);
  *(undefined8 *)(param_1 + _DAT_112784594) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adc5c1c; end: 10adc62af; -[LSATrackingComponent didRequestTrackingDataGeneration:image:parameters:useAnchors:requirements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10adc5c1c(ulong param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                   int param_6,uint param_7)

{
  uint6 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined2 uStack_62;
  
  lVar19 = (long)_DAT_112784598;
  lVar15 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar10 = lVar15;
  _objc_opt_respondsToSelector();
  _objc_release(lVar15);
  if ((param_7 >> 3 & 1) == 0) {
    bVar6 = false;
    uVar16 = 0;
    if (param_5 == 0) goto LAB_10adc5cc8;
LAB_10adc5cac:
    if ((*(byte *)(param_5 + 0x2f8) & 1) == 0) goto LAB_10adc5cc8;
    uStack_62 = CONCAT11(1,*(undefined1 *)(param_5 + 0x2d8));
  }
  else {
    bVar6 = *(int *)(param_3 + 0x198) == 1;
    uVar16 = (uint)lVar10 & (uint)!bVar6;
    if (param_5 != 0) goto LAB_10adc5cac;
LAB_10adc5cc8:
    uStack_62 = 0;
  }
  uVar14 = param_1 + lVar19;
  _objc_loadWeakRetained();
  uVar11 = uVar14;
  _objc_opt_respondsToSelector();
  _objc_release(uVar14);
  uVar5 = uStack_62;
  if ((uVar11 & 1) == 0) {
joined_r0x00010adc5d28:
    if ((uVar16 == 0) || (uStack_62._1_1_ = (char)((ushort)uVar5 >> 8), uStack_62._1_1_ != '\x01'))
    {
      return 0;
    }
    uVar14 = param_1 + lVar19;
    uStack_62 = uVar5;
    _objc_loadWeakRetained();
    uVar11 = uVar14;
    func_0x00010c08b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    lVar15 = (long)_DAT_112784590;
    uVar14 = uVar11;
    if (*(ulong *)(param_1 + lVar15) != uVar11) {
      func_0x00010bf3aca0();
      _objc_retain(uVar11);
      uVar12 = *(undefined8 *)(param_1 + lVar15);
      *(ulong *)(param_1 + lVar15) = uVar11;
      _objc_release(uVar12);
      uVar14 = *(ulong *)(param_1 + lVar15);
    }
    if (uVar14 == 0) {
      uVar14 = 0;
      goto LAB_10adc61b8;
    }
    plStack_78 = (long *)(param_3 + 0x198);
    uStack_70 = 0;
    if (uVar11 == 0) {
LAB_10adc617c:
      plStack_78 = (long *)(param_3 + 0x198);
      uStack_70 = 0;
      lVar15 = 0;
      lStack_80 = param_4;
    }
    else {
      lStack_80 = param_4;
      func_0x00010bfc4ae0(&lStack_88,uVar11);
      lVar15 = lStack_88;
    }
  }
  else {
    lVar15 = (long)_DAT_112784574;
    func_0x00010bf4b900();
    uVar14 = param_1;
    func_0x00010c10a2e0();
    uVar18 = (uint)(uVar14 >> 0x18) & 0xffffff;
    uVar17 = (uint)(uVar14 >> 0x20) & 0xffff;
    uVar7 = *(ulong *)(param_1 + lVar15);
    func_0x00010bf4b900();
    uVar11 = uVar14;
    if (((param_7 >> 9 & 1) == 0) && ((uVar7 & 1) != 0)) {
      if (param_5 == 0) {
        uVar11 = (ulong)*(uint3 *)(param_1 + (long)_DAT_11278459c);
      }
      else {
        if ((*(byte *)(param_5 + 0x4e1) & 1) == 0) {
          uVar11 = (ulong)*(uint3 *)(param_1 + (long)_DAT_11278459c);
        }
        if ((*(byte *)(param_5 + 0x4dd) & 1) != 0) goto LAB_10adc5dd4;
      }
      uVar18 = (uint)*(byte *)(param_1 + (long)_DAT_11278459c + 3);
      uVar17 = (uint)*(byte *)(param_1 + (long)_DAT_11278459c + 4);
    }
LAB_10adc5dd4:
    puVar1 = (uint6 *)(param_1 + (long)_DAT_11278459c);
    if ((((uVar14 & 0x10000000000 | (ulong)(uVar17 & 0xff) << 0x20 | (ulong)(uVar18 & 1) << 0x18 |
          uVar11 & 0xffffff) ^ (ulong)*puVar1) & 0x10101010101) != 0) {
      *(short *)puVar1 = (short)uVar11;
      *(char *)((long)puVar1 + 2) = (char)(uVar11 >> 0x10);
      *(char *)((long)puVar1 + 3) = (char)uVar18;
      *(char *)((long)puVar1 + 4) = (char)uVar17;
      *(char *)((long)puVar1 + 5) = (char)(uVar14 >> 0x28);
      uVar14 = param_1 + lVar19;
      _objc_loadWeakRetained();
      uVar11 = uVar14;
      _objc_opt_respondsToSelector();
      _objc_release(uVar14);
      if ((uVar11 & 1) != 0) {
        lVar15 = param_1 + lVar19;
        _objc_loadWeakRetained(lVar15);
        func_0x00010c28b460();
        _objc_release(lVar15);
      }
    }
    uVar14 = param_1 + lVar19;
    _objc_loadWeakRetained();
    uVar11 = uVar14;
    func_0x00010c08af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    if (uVar11 == 0) {
LAB_10adc5ff8:
      _objc_release(uVar11);
      uVar5 = uStack_62;
      goto joined_r0x00010adc5d28;
    }
    if ((param_7 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + (long)_DAT_112784578) == 0) {
        lVar15 = 0;
      }
      else {
        func_0x00010bfcb660(&lStack_80);
        lVar15 = lStack_80;
      }
      lStack_80 = 0;
      FUN_10adc1b90(param_3 + 0x128,lVar15);
      FUN_10adc1b90(&lStack_80,0);
      if (*(long *)(param_1 + (long)_DAT_11278457c) != 0) {
        func_0x00010bfc8da0(&lStack_80);
        lVar15 = lStack_80;
        lStack_80 = 0;
        lVar10 = *(long *)(param_3 + 0x140);
        *(long *)(param_3 + 0x140) = lVar15;
        if (lVar10 != 0) {
          FUN_10adc0050(param_3 + 0x140);
          lVar15 = lStack_80;
          lStack_80 = 0;
          if (lVar15 != 0) {
            FUN_10adc0050(&lStack_80);
          }
        }
      }
      if (*(long *)(param_1 + (long)_DAT_112784580) != 0) {
        func_0x00010bfc77e0(&lStack_80);
        lVar15 = lStack_80;
        lStack_80 = 0;
        lVar10 = *(long *)(param_3 + 0x148);
        *(long *)(param_3 + 0x148) = lVar15;
        if (lVar10 != 0) {
          FUN_10adbe260(param_3 + 0x148);
          lVar15 = lStack_80;
          lStack_80 = 0;
          if (lVar15 != 0) {
            FUN_10adbe260(&lStack_80);
          }
        }
      }
      if ((param_5 == 0) || (*(char *)(param_5 + 0x4e3) != '\x01')) {
        func_0x00010c139320(*(undefined8 *)(param_1 + (long)_DAT_112784584));
      }
      else {
        if (*(long *)(param_1 + (long)_DAT_112784584) == 0) {
          lStack_80 = 0;
          plStack_78 = (long *)0x0;
        }
        else {
          func_0x00010bfc8e80(&lStack_80);
        }
        FUN_10adc2d30(param_3 + 0x130,&lStack_80);
        plVar13 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar2 = plStack_78 + 1;
          do {
            lVar15 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
      }
    }
    if (uVar16 == 0) {
      uVar14 = uVar11;
      if (param_6 == 0) {
        func_0x00010bfad5e0(uVar11);
        goto LAB_10adc61b8;
      }
      uVar7 = uVar11;
      func_0x00010c0b5bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf529e0();
      if (((param_7 >> 9 & 1) != 0) && (uVar8 != 0)) {
        uVar8 = uVar7;
        func_0x00010bfb1920(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfad620(uVar11);
        _objc_release(uVar8);
        _objc_release(uVar7);
        goto LAB_10adc61b8;
      }
      _objc_release(uVar7);
    }
    if ((!bVar6) || (uStack_62._1_1_ != '\x01')) goto LAB_10adc5ff8;
    lVar15 = (long)_DAT_112784594;
    if (*(long *)(param_1 + lVar15) == 0) {
      puVar9 = PTR_PTR_1126de1b8;
      _objc_alloc_init();
      uVar12 = *(undefined8 *)(param_1 + lVar15);
      *(undefined **)(param_1 + lVar15) = puVar9;
      _objc_release(uVar12);
      if (*(long *)(param_1 + lVar15) != 0) goto LAB_10adc6160;
      goto LAB_10adc617c;
    }
LAB_10adc6160:
    plStack_78 = (long *)(param_3 + 0x198);
    uStack_70 = 0;
    lStack_80 = param_4;
    func_0x00010bfc4b00(&lStack_88);
    lVar15 = lStack_88;
  }
  plVar13 = (long *)(param_3 + 0x70);
  lVar10 = *plVar13;
  lStack_88 = 0;
  *plVar13 = lVar15;
  if (lVar10 != 0) {
    func_0x00010adbd388(plVar13);
    lVar15 = lStack_88;
    lStack_88 = 0;
    if (lVar15 != 0) {
      func_0x00010adbd388(&lStack_88);
    }
  }
  uVar14 = (ulong)(*plVar13 != 0);
LAB_10adc61b8:
  _objc_release(uVar11);
  return uVar14;
}



/* Entry: 10adc62b0; end: 10adc633b; -[LSATrackingComponent prepareTrackingParameters:enableSceneDepth:] */

ulong FUN_10adc62b0(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    lVar5 = 0;
    uVar6 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    if (*(char *)(param_3 + 0x4e1) == '\x01') {
      uVar2 = (uint)*(byte *)(param_3 + 0x4de);
      uVar3 = (uint)*(byte *)(param_3 + 0x4df);
      uVar4 = (uint)*(byte *)(param_3 + 0x4e0);
    }
    else {
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
    }
    if (*(char *)(param_3 + 0x4dd) == '\x01') {
      uVar6 = (ulong)*(byte *)(param_3 + 0x4dc);
      lVar5 = 1;
    }
    else {
      lVar5 = 0;
      uVar6 = 0;
    }
  }
  uVar1 = 0x10000000000;
  if (param_4 == 0) {
    uVar1 = 0;
  }
  return uVar1 | uVar6 << 0x20 | lVar5 << 0x18 | (ulong)(uVar3 << 8 | uVar4 << 0x10 | uVar2);
}



/* Entry: 10adc633c; end: 10adc6533; -[LSATrackingComponent didRequestTrackingBeginWithRequirement:parameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10adc633c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint6 *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  if (param_4 == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)(param_4 + 0x2f8);
  }
  uVar10 = param_1;
  func_0x00010c10a2e0(param_1,param_2,param_4,bVar8 & 1);
  lVar15 = (long)_DAT_112784574;
  lVar6 = *(long *)(param_1 + lVar15);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    puVar2 = (uint *)(param_1 + (long)_DAT_11278459c);
    *puVar2 = (uint)uVar10;
    *(short *)(puVar2 + 1) = (short)(uVar10 >> 0x20);
    lVar6 = param_1 + (long)_DAT_112784598;
    _objc_loadWeakRetained(lVar6);
    lVar14 = lVar6;
    func_0x00010bf18d00();
LAB_10adc64bc:
    _objc_release(lVar6);
  }
  else {
    puVar1 = (uint6 *)(param_1 + (long)_DAT_11278459c);
    uVar9 = (ulong)*puVar1 | uVar10 & 0xffffffffffff;
    uVar11 = 0x10000;
    if ((uVar9 & 0x10000) == 0) {
      uVar11 = 0;
    }
    uVar12 = 0x100;
    if ((uVar9 & 0x100) == 0) {
      uVar12 = 0;
    }
    uVar3 = 0x10000000000;
    if ((uVar9 & 0x10000000000) == 0) {
      uVar3 = 0;
    }
    uVar4 = 0x100000000;
    if ((uVar9 & 0x100000000) == 0) {
      uVar4 = 0;
    }
    uVar5 = 0x1000000;
    if ((uVar9 & 0x1000000) == 0) {
      uVar5 = 0;
    }
    uVar10 = uVar3 | uVar4 | uVar5 | (ulong)(uVar12 | ((uint)*puVar1 | (uint)uVar10) & 1 | uVar11);
    if (uVar10 != ((ulong)*puVar1 & 0x101010101010101)) {
      *(uint *)puVar1 = (uint)uVar10;
      *(short *)((long)puVar1 + 4) = (short)((uVar3 | uVar4) >> 0x20);
      lVar6 = (long)_DAT_112784598;
      uVar10 = param_1 + lVar6;
      _objc_loadWeakRetained();
      uVar9 = uVar10;
      _objc_opt_respondsToSelector();
      _objc_release(uVar10);
      if ((uVar9 & 1) != 0) {
        lVar6 = param_1 + lVar6;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c28b460();
        lVar14 = 1;
        goto LAB_10adc64bc;
      }
    }
    lVar14 = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar13);
  _objc_release(puVar7);
  return lVar14;
}



/* Entry: 10adc6534; end: 10adc65c7; -[LSATrackingComponent didRequestTrackingReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10adc6534(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112784598;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c278e20();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 10adc65c8; end: 10adc66b3; -[LSATrackingComponent didRequestTrackingEndWithRequirement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10adc65c8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112784574;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar4);
  _objc_release(puVar1);
  lVar6 = *(long *)(param_1 + lVar6);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = (long)_DAT_112784598;
    uVar2 = param_1 + lVar6;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar6);
      lVar5 = lVar6;
      func_0x00010c278da0();
      _objc_release(lVar6);
    }
  }
  else {
    lVar5 = 1;
  }
  func_0x00010c135480(param_1);
  return lVar5;
}



/* Entry: 10adc66b4; end: 10adc675f; -[LSATrackingComponent didRequestTrackingRestartAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10adc66b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112784598;
  uVar1 = param_3 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_3 = param_3 + lVar3;
    _objc_loadWeakRetained(param_3);
    lVar3 = param_3;
    func_0x00010c13c020(param_1,param_2);
    _objc_release(param_3);
  }
  return lVar3;
}



/* Entry: 10adc6760; end: 10adc6903; -[LSATrackingComponent didRequestTrackingRestartWithExistingTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10adc6760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [80];
  
  lVar7 = (long)_DAT_112784598;
  uVar1 = param_5 + lVar7;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
    return 0;
  }
  uVar2 = param_5 + lVar7;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar4 = param_5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x00010c0b5be0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar6 != 0) {
      func_0x00010bf516e0(auStack_90,param_1,param_2,param_3,param_4,lVar5);
      param_5 = param_5 + lVar7;
      _objc_loadWeakRetained(param_5);
      lVar7 = param_5;
      func_0x00010c13c060();
      _objc_release(param_5);
      goto LAB_10adc6894;
    }
  }
  lVar7 = 0;
LAB_10adc6894:
  _objc_release(lVar5);
  return lVar7;
}



/* Entry: 10adc6904; end: 10adc6907; -[LSATrackingComponent didFinishTrackingProcessing] */

void FUN_10adc6904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestFinishTrackingProcessingI_11262af40);
  return;
}



/* Entry: 10adc6908; end: 10adc699b; -[LSATrackingComponent isDeviceSupported] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10adc6908(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112784598;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c278e00();
    _objc_release(param_1);
  }
  return lVar3;
}


