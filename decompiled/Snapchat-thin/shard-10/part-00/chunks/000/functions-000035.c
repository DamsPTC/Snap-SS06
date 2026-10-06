/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10738cd90; end: 10738cda3;  */

void FUN_10738cd90(void)

{
  FUN_10738cda4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738cda4; end: 10738ce67;  */

undefined8 * FUN_10738cda4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8220;
  func_0x00010738cde0(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 10738ce68; end: 10738ce97;  */

void FUN_10738ce68(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10738ce98; end: 10738cecf;  */

void FUN_10738ce98(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738d7f8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      FUN_10738ca2c(unaff_x20 + 0x10);
    }
    func_0x00010738d7bc();
  }
  return;
}



/* Entry: 10738ced0; end: 10738d00f;  */

void FUN_10738ced0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_28;
  long *plStack_20;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar8 * uVar5;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar4;
  } while ((long *)*plVar4 != param_3);
  plStack_20 = param_2 + 2;
  if (plVar4 != plStack_20) {
    uVar8 = plVar4[1];
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 == uVar3) goto LAB_10738cf90;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 == uVar3) goto LAB_10738cf90;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10738cf90:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar5 <= uVar8) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar7 * uVar5;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar4;
      lVar9 = *param_3;
    }
  }
  *plVar4 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  uStack_18 = 1;
  uStack_17 = 0;
  uStack_13 = 0;
  uStack_28 = 0;
  *param_1 = param_3;
  *(undefined1 *)((long)param_1 + 9) = 1;
  func_0x00010726b9d0(&uStack_28);
  return;
}



/* Entry: 10738d010; end: 10738d03b;  */

void FUN_10738d010(long *param_1)

{
  if (*param_1 != 0) {
    __ZdlPv();
    *param_1 = 0;
  }
  return;
}



/* Entry: 10738d03c; end: 10738d3b7;  */

void FUN_10738d03c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long *extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *plVar8;
  long *extraout_x9_00;
  ulong uVar9;
  ulong extraout_x9_01;
  long *plVar10;
  long *extraout_x11;
  long *extraout_x12;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  uVar1 = *(uint *)(param_2 + 2);
  plVar16 = (long *)(ulong)uVar1;
  param_2[1] = (long)plVar16;
  plVar17 = (long *)param_1[1];
  plVar8 = param_1;
  func_0x00010738d850(param_1[3]);
  if ((plVar17 == (long *)0x0) || (func_0x00010738d844(), (bool)in_NG)) {
    bVar4 = (long *)0x2 < plVar17;
    bVar5 = plVar17 == (long *)0x3;
    func_0x00010738d6e0((long)plVar17 << 1);
    plVar15 = extraout_x8;
    if (!bVar4 || bVar5) {
      plVar15 = extraout_x9;
    }
    if ((long)plVar15 - 1U == 0) {
      plVar15 = (long *)0x2;
    }
    else if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar17 = (long *)param_1[1];
      plVar8 = plVar15;
    }
    if (plVar17 < plVar15) {
LAB_10738d0d4:
      plVar8 = plVar15;
      FUN_10738d568(plVar15);
      FUN_10738d550(param_1,plVar8);
      plVar8 = (long *)0x0;
      param_1[1] = (long)plVar15;
      lVar7 = *param_1;
      while (plVar15 != plVar8) {
        func_0x00010738d8e4();
        lVar7 = extraout_x8_00;
        plVar8 = extraout_x9_00;
      }
      plVar8 = (long *)param_1[2];
      plVar17 = plVar15;
      if (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        uVar9 = (long)plVar15 - 1;
        if (((ulong)plVar15 & uVar9) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar9);
        }
        else if (plVar15 <= plVar10) {
          uVar2 = 0;
          if (plVar15 != (long *)0x0) {
            uVar2 = (ulong)plVar10 / (ulong)plVar15;
          }
          plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar15);
        }
        *(long **)(lVar7 + (long)plVar10 * 8) = param_1 + 2;
        while (plVar14 = plVar8, plVar8 = (long *)*plVar14, plVar8 != (long *)0x0) {
          plVar11 = (long *)plVar8[1];
          if (((ulong)plVar15 & uVar9) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar9);
          }
          else if (plVar15 <= plVar11) {
            uVar2 = 0;
            if (plVar15 != (long *)0x0) {
              uVar2 = (ulong)plVar11 / (ulong)plVar15;
            }
            plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar15);
          }
          if (plVar11 != plVar10) {
            plVar13 = plVar8;
            if (*(long *)(lVar7 + (long)plVar11 * 8) == 0) {
              func_0x00010738d8c4();
              lVar7 = extraout_x8_01;
              uVar9 = extraout_x9_01;
              plVar8 = extraout_x12;
              plVar10 = extraout_x11;
            }
            else {
              do {
                plVar12 = plVar13;
                plVar13 = (long *)*plVar12;
                if (plVar13 == (long *)0x0) break;
              } while (*(int *)(plVar8 + 2) == *(int *)(plVar13 + 2));
              *plVar14 = (long)plVar13;
              *plVar12 = **(long **)(lVar7 + (long)plVar11 * 8);
              **(long **)(lVar7 + (long)plVar11 * 8) = (long)plVar8;
              plVar8 = plVar14;
            }
          }
        }
      }
    }
    else if (plVar15 < plVar17) {
      func_0x00010738d8fc((float)(ulong)param_1[3],(int)param_1[4]);
      if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010738d6c0();
      }
      if (plVar15 <= plVar8) {
        plVar15 = plVar8;
      }
      if (plVar15 < plVar17) {
        if (plVar15 != (long *)0x0) goto LAB_10738d0d4;
        FUN_10738d550(param_1,0);
        param_1[1] = 0;
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = (long *)param_1[1];
      }
    }
  }
  uVar9 = (long)plVar17 - 1;
  if (((ulong)plVar17 & uVar9) == 0) {
    plVar8 = (long *)(ulong)((int)plVar17 - 1U & uVar1);
  }
  else {
    plVar8 = plVar16;
    if (plVar17 <= plVar16) {
      uVar2 = 0;
      if (plVar17 != (long *)0x0) {
        uVar2 = (ulong)plVar16 / (ulong)plVar17;
      }
      plVar8 = (long *)((long)plVar16 - uVar2 * (long)plVar17);
    }
  }
  lVar7 = *param_1;
  plVar15 = *(long **)(lVar7 + (long)plVar8 * 8);
  if (plVar15 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar5 = false;
    bVar3 = 0;
    do {
      plVar10 = plVar15;
      plVar15 = (long *)*plVar10;
      if (plVar15 == (long *)0x0) break;
      plVar14 = (long *)plVar15[1];
      if (((ulong)plVar17 & uVar9) == 0) {
        plVar11 = (long *)((ulong)plVar14 & uVar9);
      }
      else {
        plVar11 = plVar14;
        if (plVar17 <= plVar14) {
          uVar2 = 0;
          if (plVar17 != (long *)0x0) {
            uVar2 = (ulong)plVar14 / (ulong)plVar17;
          }
          plVar11 = (long *)((long)plVar14 - uVar2 * (long)plVar17);
        }
      }
      if (plVar11 != plVar8) break;
      if (plVar14 == plVar16) {
        bVar4 = (int)plVar15[2] == (int)param_2[2];
      }
      else {
        bVar4 = false;
      }
      bVar6 = bVar4 != bVar5;
      bVar4 = (bool)(bVar3 & bVar6);
      bVar5 = (bool)(bVar5 | bVar6);
      bVar3 = bVar3 | bVar6;
    } while (!bVar4);
  }
  plVar8 = (long *)param_2[1];
  if (((ulong)plVar17 & uVar9) == 0) {
    plVar8 = (long *)(uVar9 & (ulong)plVar8);
    if (plVar10 == (long *)0x0) goto LAB_10738d30c;
LAB_10738d2d0:
    *param_2 = *plVar10;
    *plVar10 = (long)param_2;
    if (*param_2 == 0) goto LAB_10738d360;
    plVar16 = *(long **)(*param_2 + 8);
    if (((ulong)plVar17 & uVar9) == 0) {
      plVar16 = (long *)((ulong)plVar16 & uVar9);
    }
    else if (plVar17 <= plVar16) {
      uVar9 = 0;
      if (plVar17 != (long *)0x0) {
        uVar9 = (ulong)plVar16 / (ulong)plVar17;
      }
      plVar16 = (long *)((long)plVar16 - uVar9 * (long)plVar17);
    }
    if (plVar16 == plVar8) goto LAB_10738d360;
  }
  else {
    if (plVar17 <= plVar8) {
      uVar2 = 0;
      if (plVar17 != (long *)0x0) {
        uVar2 = (ulong)plVar8 / (ulong)plVar17;
      }
      plVar8 = (long *)((long)plVar8 - uVar2 * (long)plVar17);
    }
    if (plVar10 != (long *)0x0) goto LAB_10738d2d0;
LAB_10738d30c:
    plVar16 = param_1 + 2;
    *param_2 = *plVar16;
    *plVar16 = (long)param_2;
    *(long **)(lVar7 + (long)plVar8 * 8) = plVar16;
    if (*param_2 == 0) goto LAB_10738d360;
    plVar16 = *(long **)(*param_2 + 8);
    if (((ulong)plVar17 & uVar9) == 0) {
      plVar16 = (long *)((ulong)plVar16 & uVar9);
    }
    else if (plVar17 <= plVar16) {
      uVar9 = 0;
      if (plVar17 != (long *)0x0) {
        uVar9 = (ulong)plVar16 / (ulong)plVar17;
      }
      plVar16 = (long *)((long)plVar16 - uVar9 * (long)plVar17);
    }
  }
  *(long **)(lVar7 + (long)plVar16 * 8) = param_2;
LAB_10738d360:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10738d3b8; end: 10738d4f7;  */

long * FUN_10738d3b8(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *plVar5;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  long alStack_60 [3];
  long *plStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar4 = alStack_60;
  plVar3 = alStack_60;
  plVar2 = alStack_60;
  func_0x00010738d6f4();
  uStack_28 = extraout_x8;
  FUN_10738d4f8(alStack_60);
  uVar1 = unaff_x19 == alStack_60;
  if (!(bool)uVar1) {
    plVar5 = (long *)unaff_x19[3];
    if (plStack_48 == alStack_60) {
      uVar1 = plVar5 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010738d8f0();
        (*extraout_x8_00)();
        func_0x00010738d728(plStack_48);
        plStack_48 = (long *)0x0;
        func_0x00010738d8f0(unaff_x19[3]);
        (*extraout_x8_01)();
        func_0x00010738d728(unaff_x19[3]);
        unaff_x19[3] = 0;
        plStack_48 = alStack_60;
        func_0x00010738d7c4(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        func_0x00010738d8f0();
        func_0x00010738d7c4();
        func_0x00010738d728(plStack_48);
        plStack_48 = (long *)unaff_x19[3];
        plVar3 = param_2;
      }
      unaff_x19[3] = (long)unaff_x19;
      param_2 = plVar3;
    }
    else {
      uVar1 = plVar5 == unaff_x19;
      if ((bool)uVar1) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        func_0x00010738d728(unaff_x19[3]);
        unaff_x19[3] = (long)plStack_48;
        param_2 = plVar4;
        plStack_48 = alStack_60;
      }
      else {
        unaff_x19[3] = (long)plStack_48;
        plStack_48 = plVar5;
      }
    }
  }
  func_0x0001073776a8();
  func_0x00010738d6ac(uStack_28);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    plVar2[3] = 0;
  }
  else if (plVar3 == param_2) {
    plVar2[3] = (long)plVar2;
    func_0x00010738d8f0(param_2[3]);
    func_0x00010738d7c4();
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    plVar2[3] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 10738d4f8; end: 10738d54f;  */

long FUN_10738d4f8(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010738d8f0(param_2[3]);
    func_0x00010738d7c4();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10738d550; end: 10738d567;  */

void FUN_10738d550(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10738d568; end: 10738d583;  */

void FUN_10738d568(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010738d7f8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x0001073776a8(unaff_x20 + 0x18);
    }
    func_0x00010738d7bc();
  }
  return;
}



/* Entry: 10738d584; end: 10738d5bb;  */

void FUN_10738d584(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738d7f8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x0001073776a8(unaff_x20 + 0x18);
    }
    func_0x00010738d7bc();
  }
  return;
}



/* Entry: 10738d5bc; end: 10738d5d3;  */

void FUN_10738d5bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10738d5d4; end: 10738d60b;  */

void FUN_10738d5d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738d7f8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      FUN_107377684(unaff_x20 + 0x18);
    }
    func_0x00010738d7bc();
  }
  return;
}



/* Entry: 10738d60c; end: 10738d907;  */

long FUN_10738d60c(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (param_1[3] != 0)) {
    uVar6 = (ulong)param_2;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar8 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar9 = plVar3[1];
        if (uVar9 != uVar6) break;
        if (*(uint *)(plVar3 + 2) == param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar2 * uVar5;
      }
    } while (uVar9 == uVar8);
  }
  return 0;
}



/* Entry: 10738d908; end: 10738dcb7;  */

/* WARNING: Possible PIC construction at 0x00010738d9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010738dc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010738dcac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010738de50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010738dcb0) */
/* WARNING: Removing unreachable block (ram,0x00010738dd6c) */
/* WARNING: Removing unreachable block (ram,0x00010738dd74) */
/* WARNING: Removing unreachable block (ram,0x00010738dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010738dd7c) */
/* WARNING: Removing unreachable block (ram,0x00010738dcec) */
/* WARNING: Removing unreachable block (ram,0x00010738dcf8) */
/* WARNING: Removing unreachable block (ram,0x00010738dd0c) */
/* WARNING: Removing unreachable block (ram,0x00010738dd9c) */
/* WARNING: Removing unreachable block (ram,0x00010738ddc4) */
/* WARNING: Removing unreachable block (ram,0x00010738dddc) */
/* WARNING: Removing unreachable block (ram,0x00010738ddfc) */
/* WARNING: Removing unreachable block (ram,0x00010738de24) */
/* WARNING: Removing unreachable block (ram,0x00010738de3c) */
/* WARNING: Removing unreachable block (ram,0x00010738de2c) */
/* WARNING: Removing unreachable block (ram,0x00010738ddb0) */
/* WARNING: Removing unreachable block (ram,0x00010738dca0) */
/* WARNING: Removing unreachable block (ram,0x00010738d9b8) */
/* WARNING: Removing unreachable block (ram,0x00010738d9e0) */
/* WARNING: Removing unreachable block (ram,0x00010738d9cc) */
/* WARNING: Removing unreachable block (ram,0x00010738d9f0) */
/* WARNING: Removing unreachable block (ram,0x00010738da0c) */
/* WARNING: Removing unreachable block (ram,0x00010738dbc8) */
/* WARNING: Removing unreachable block (ram,0x00010738dc18) */
/* WARNING: Removing unreachable block (ram,0x00010738dc4c) */
/* WARNING: Removing unreachable block (ram,0x00010738dc7c) */
/* WARNING: Removing unreachable block (ram,0x00010738dbe4) */
/* WARNING: Removing unreachable block (ram,0x00010738da14) */
/* WARNING: Removing unreachable block (ram,0x00010738dad4) */
/* WARNING: Removing unreachable block (ram,0x00010738dae4) */
/* WARNING: Removing unreachable block (ram,0x00010738dc08) */
/* WARNING: Removing unreachable block (ram,0x00010738dafc) */
/* WARNING: Removing unreachable block (ram,0x00010738db00) */
/* WARNING: Removing unreachable block (ram,0x00010738db0c) */
/* WARNING: Removing unreachable block (ram,0x00010738db1c) */
/* WARNING: Removing unreachable block (ram,0x00010738db3c) */
/* WARNING: Removing unreachable block (ram,0x00010738db24) */
/* WARNING: Removing unreachable block (ram,0x00010738dc10) */
/* WARNING: Removing unreachable block (ram,0x00010738dc14) */
/* WARNING: Removing unreachable block (ram,0x00010738db2c) */
/* WARNING: Removing unreachable block (ram,0x00010738db40) */
/* WARNING: Removing unreachable block (ram,0x00010738db4c) */
/* WARNING: Removing unreachable block (ram,0x00010738db50) */
/* WARNING: Removing unreachable block (ram,0x00010738db58) */
/* WARNING: Removing unreachable block (ram,0x00010738db60) */
/* WARNING: Removing unreachable block (ram,0x00010738db68) */
/* WARNING: Removing unreachable block (ram,0x00010738db7c) */
/* WARNING: Removing unreachable block (ram,0x00010738dba0) */
/* WARNING: Removing unreachable block (ram,0x00010738dba8) */
/* WARNING: Removing unreachable block (ram,0x00010738daac) */
/* WARNING: Removing unreachable block (ram,0x00010738dab4) */
/* WARNING: Removing unreachable block (ram,0x00010738dab8) */
/* WARNING: Removing unreachable block (ram,0x00010738dac0) */
/* WARNING: Removing unreachable block (ram,0x00010738dac8) */
/* WARNING: Removing unreachable block (ram,0x00010738dbbc) */
/* WARNING: Removing unreachable block (ram,0x00010738de54) */

void FUN_10738d908(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long unaff_x19;
  long *plVar2;
  long lVar3;
  undefined1 auStack_1b0 [336];
  
  func_0x00010738ec98();
  lVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar3;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar3 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar3;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar2 = param_1 + 6;
  param_1[7] = 0;
  *plVar2 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x00010726ed14(param_1 + 0xd);
  *(long *)(unaff_x19 + 0x78) = unaff_x19;
  FUN_1073af260();
  (**(code **)(*param_1 + 0x20))(auStack_1b0);
  FUN_10738debc(plVar2,auStack_1b0);
  puVar1 = auStack_1b0;
  func_0x00010725c0a0();
  if (puVar1 != (undefined1 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10738dcb8; end: 10738de07;  */

/* WARNING: Possible PIC construction at 0x00010738de50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010738de54) */

undefined1 * FUN_10738dcb8(ulong param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010738ec98();
  *(undefined1 *)(param_1 + 0x60) = 0;
  uStack_38 = extraout_x8;
  func_0x000107378718(auStack_68);
  func_0x00010738ed18();
  if ((param_1 & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x50);
    for (lVar3 = *(long *)(unaff_x19 + 0x48); in_ZR = lVar3 == lVar1, !(bool)in_ZR;
        lVar3 = lVar3 + 0x18) {
      func_0x00010738ed20();
      (*extraout_x8_00)();
    }
    FUN_10738deb4((long *)(unaff_x19 + 0x48));
    FUN_107326b68(unaff_x19 + 0x18);
  }
  else {
    lVar3 = unaff_x19;
    func_0x000107378778();
    if (lVar3 != 0) {
      in_ZR = *(char *)(*(long *)(lVar3 + 8) + 8) == '\x06';
      if ((bool)in_ZR) {
        FUN_10738dff4(&uStack_80,unaff_x19 + 0x18);
        puStack_40 = (undefined8 *)0x0;
        puVar4 = (undefined8 *)0x20;
        __Znwm();
        *puVar4 = &PTR_SUB_1109a8360;
        puVar4[2] = uStack_78;
        puVar4[1] = uStack_80;
        puVar4[3] = uStack_70;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        puStack_40 = puVar4;
        func_0x0001077c0ad8(lVar3,auStack_58);
        func_0x00010738ec40(auStack_58);
        func_0x000107326b10(&uStack_80);
      }
    }
  }
  puVar5 = auStack_68;
  func_0x000107270b00();
  func_0x00010738ec84(uStack_38);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010738ec40(auStack_58);
  func_0x000107326b10(&uStack_80);
  puVar5 = auStack_68;
  func_0x000107270b00();
  func_0x00010738ecd0();
  lVar1 = *(long *)(puVar5 + 0x50);
  for (lVar3 = *(long *)(puVar5 + 0x48); lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    func_0x00010738ed20();
    (*extraout_x8_01)();
  }
  FUN_10738e150(puVar5 + 0x68);
  FUN_10738df50(puVar5 + 0x48);
  puVar2 = puVar5 + 0x30;
  func_0x00010725c0a0();
  if (puVar2 != (undefined1 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar5;
}



/* Entry: 10738de08; end: 10738de73;  */

/* WARNING: Possible PIC construction at 0x00010738de50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010738de54) */

long FUN_10738de08(long param_1)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_1 + 0x50);
  for (lVar2 = *(long *)(param_1 + 0x48); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00010738ed20();
    (*extraout_x8)();
  }
  FUN_10738e150(param_1 + 0x68);
  FUN_10738df50((long *)(param_1 + 0x48));
  lVar2 = param_1 + 0x30;
  func_0x00010725c0a0();
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10738de74; end: 10738deb3;  */

undefined8 FUN_10738de74(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x000107378718(auStack_30);
  func_0x00010738ed18();
  func_0x00010738ecc0();
  return param_1;
}



/* Entry: 10738deb4; end: 10738debb;  */

void FUN_10738deb4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ed34(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010726ee94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10738debc; end: 10738dee3;  */

void FUN_10738debc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ed34();
  func_0x0001073752e8();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10738dee4; end: 10738df4f;  */

void FUN_10738dee4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar4;
  func_0x00010738ecc8();
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 10738df50; end: 10738dff3;  */

undefined8 FUN_10738df50(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010738df84(&uStack_28);
  return param_1;
}



/* Entry: 10738dff4; end: 10738e123;  */

undefined8 * FUN_10738dff4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar9 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uStack_78 = 0;
  lVar8 = (long)puVar2 - (long)puVar9;
  puStack_80 = param_1;
  if (lVar8 != 0) {
    uVar7 = lVar8 / 0x48;
    if (0x38e38e38e38e38e < uVar7) {
      FUN_1073267f4();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10738e114);
      (*pcVar5)();
    }
    puVar6 = param_1 + 2;
    FUN_107326800();
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar7 * 9;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar6;
    for (; puStack_48 = puVar6, puVar9 != puVar2; puVar9 = puVar9 + 9) {
      lVar8 = puVar9[1];
      uVar10 = *puVar9;
      puVar6[1] = puVar9[1];
      *puVar6 = uVar10;
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
      func_0x000104c2fe00(puVar6 + 2,puVar9 + 2);
      puVar6 = puStack_48 + 9;
    }
    uStack_58 = 1;
    FUN_107326840(&puStack_70);
    param_1[1] = puVar6;
  }
  uStack_78 = 1;
  FUN_10738e124(&puStack_80);
  return param_1;
}



/* Entry: 10738e124; end: 10738e14f;  */

long FUN_10738e124(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000107326b34(param_1);
  }
  return param_1;
}



/* Entry: 10738e150; end: 10738e177;  */

long FUN_10738e150(long param_1)

{
  FUN_10738e178();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10738e178; end: 10738e1cf;  */

void FUN_10738e178(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10738e1d0; end: 10738e1e3;  */

void FUN_10738e1d0(void)

{
  func_0x00010738e1a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738e1e4; end: 10738e207;  */

long FUN_10738e1e4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ecd8();
  func_0x00010738ed34();
  *param_1 = &PTR_SUB_1109a8260;
  FUN_10738e3bc(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 10738e208; end: 10738e22b;  */

void FUN_10738e208(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ed34(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109a8260;
  FUN_10738e3bc(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10738e22c; end: 10738e34f;  */

void FUN_10738e22c(undefined8 param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long lVar9;
  undefined8 auStack_80 [3];
  long lStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010738ec98();
  uStack_28 = extraout_x8;
  func_0x00010738ecf8();
  iVar5 = (int)unaff_x19 + 8;
  func_0x00010738e478();
  if (iVar5 != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x20);
    pbVar1 = (byte *)(lVar9 + 0x60);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bVar2 & 1) == 0) {
      func_0x000107284284(auStack_58,lVar9 + 0x30);
      uVar6 = lVar9 + 0x30;
      func_0x0001072842e4();
      if ((uVar6 & 1) == 0) {
        *pbVar1 = 0;
      }
      else {
        plVar7 = (long *)(lVar9 + 0x30);
        func_0x00010728433c();
        puVar8 = auStack_80;
        FUN_10738dee4(puVar8,lVar9 + 0x68);
        puStack_30 = (undefined8 *)0x0;
        lStack_68 = lVar9;
        func_0x00010738ecd8();
        *puVar8 = &PTR_SUB_1109a82e0;
        func_0x00010738ed40();
        puVar8[3] = extraout_x8_00;
        puVar8[4] = lVar9;
        param_2 = auStack_48;
        puStack_30 = puVar8;
        (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
        func_0x0001006393ec(auStack_48);
        func_0x00010738ecc8();
      }
      func_0x000107270b00();
    }
  }
  func_0x00010738ecc0();
  func_0x00010738ec84(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_48);
  func_0x00010738ecc8();
  func_0x000107270b00(auStack_58);
  func_0x00010738ecc0();
  func_0x00010738ecd0();
  func_0x00010738ed10(param_2);
  func_0x00010738ece0();
  return;
}



/* Entry: 10738e350; end: 10738e37b;  */

void FUN_10738e350(undefined8 param_1,undefined8 param_2)

{
  func_0x00010738ed10(param_2,param_1,&PTR_DAT_1109a82c0);
  func_0x00010738ece0();
  return;
}



/* Entry: 10738e37c; end: 10738e387;  */

undefined ** FUN_10738e37c(void)

{
  return &PTR_DAT_1109a82c0;
}



/* Entry: 10738e388; end: 10738e3bb;  */

void FUN_10738e388(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ed34();
  *param_1 = &PTR_SUB_1109a8260;
  FUN_10738e3bc(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10738e3bc; end: 10738e3eb;  */

void FUN_10738e3bc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10738e3ec; end: 10738e4eb;  */

void FUN_10738e3ec(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10738e464;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10738e464:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 10738e4ec; end: 10738e4ff;  */

void FUN_10738e4ec(void)

{
  func_0x00010738e4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738e500; end: 10738e523;  */

long FUN_10738e500(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ecd8();
  func_0x00010738ed34();
  *param_1 = &PTR_SUB_1109a82e0;
  FUN_10738e3bc(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 10738e524; end: 10738e547;  */

void FUN_10738e524(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ed34(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109a82e0;
  FUN_10738e3bc(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10738e548; end: 10738e593;  */

void FUN_10738e548(long param_1)

{
  int iVar1;
  
  func_0x00010738ecf8();
  iVar1 = (int)param_1 + 8;
  func_0x00010738e478();
  if (iVar1 != 0) {
    FUN_10738dcb8(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010738ecc0();
  return;
}



/* Entry: 10738e594; end: 10738e5bf;  */

void FUN_10738e594(undefined8 param_1,undefined8 param_2)

{
  func_0x00010738ed10(param_2,param_1,&PTR_DAT_1109a8340);
  func_0x00010738ece0();
  return;
}



/* Entry: 10738e5c0; end: 10738e5cb;  */

undefined ** FUN_10738e5c0(void)

{
  return &PTR_DAT_1109a8340;
}



/* Entry: 10738e5cc; end: 10738e61f;  */

void FUN_10738e5cc(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738ed34();
  *param_1 = &PTR_SUB_1109a82e0;
  FUN_10738e3bc(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10738e620; end: 10738e633;  */

void FUN_10738e620(void)

{
  func_0x00010738e600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738e634; end: 10738e677;  */

undefined8 FUN_10738e634(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm(0x20);
  FUN_10738e96c();
  return uVar1;
}



/* Entry: 10738e678; end: 10738e69b;  */

void FUN_10738e678(long param_1,undefined8 param_2)

{
  func_0x00010738ed54(param_2,param_1 + 8);
  FUN_10738dff4();
  return;
}



/* Entry: 10738e69c; end: 10738e933;  */

void FUN_10738e69c(ulong *param_1,long param_2,undefined1 *param_3)

{
  long **pplVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint6 uVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar17;
  byte bVar23;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  
  puVar7 = param_1 + 1;
  *puVar7 = 0;
  *param_1 = (ulong)&UNK_10e52b660;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar12 = *(undefined8 **)(param_2 + 8);
  puVar11 = *(undefined8 **)(param_2 + 0x10);
  lVar6 = (long)puVar11 - (long)puVar12;
  if (lVar6 != 0) {
    if (lVar6 == 0x1f8) {
      lVar6 = 8;
    }
    else {
      lVar6 = (lVar6 / 0x48 + -1) / 7 + lVar6 / 0x48;
    }
    uVar8 = 0xffffffffffffffff >> (LZCOUNT(lVar6) & 0x3fU);
    if (lVar6 == 0) {
      uVar8 = 1;
    }
    FUN_10738e98c(param_1,uVar8);
    puVar12 = *(undefined8 **)(param_2 + 8);
    puVar11 = *(undefined8 **)(param_2 + 0x10);
  }
  do {
    if (puVar12 == puVar11) {
      return;
    }
    Hint_Prefetch(*param_1,0,2,0);
    puVar4 = puVar12 + 2;
    func_0x000104c2fe38(*param_1);
    lVar6 = 0;
    uVar14 = *param_1;
    uVar9 = param_1[2];
    uVar8 = uVar14 >> 0xc ^ (ulong)puVar4 >> 7;
    bVar3 = (byte)puVar4;
    uVar16 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar8 = uVar8 & uVar9;
      uVar17 = *(undefined8 *)(uVar14 + uVar8);
      cVar18 = (char)((ulong)uVar17 >> 8);
      cVar19 = (char)((ulong)uVar17 >> 0x10);
      cVar20 = (char)((ulong)uVar17 >> 0x18);
      cVar21 = (char)((ulong)uVar17 >> 0x20);
      cVar22 = (char)((ulong)uVar17 >> 0x28);
      bVar15 = (byte)((ulong)uVar17 >> 0x30);
      bVar23 = (byte)((ulong)uVar17 >> 0x38);
      for (uVar13 = CONCAT17(-(bVar23 == (bVar3 & 0x7f)),
                             CONCAT16(-(bVar15 == (bVar3 & 0x7f)),
                                      CONCAT15(-(cVar22 == (char)(uVar16 >> 0x28)),
                                               CONCAT14(-(cVar21 == (char)(uVar16 >> 0x20)),
                                                        CONCAT13(-(cVar20 == (char)(uVar16 >> 0x18))
                                                                 ,CONCAT12(-(cVar19 ==
                                                                            (char)(uVar16 >> 0x10)),
                                                                           CONCAT11(-(cVar18 ==
                                                                                     (char)(uVar16 
                                                  >> 8)),-((char)uVar17 == (char)uVar16)))))))) &
                    0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
        uVar5 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        puVar10 = (ulong *)(uVar8 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar9);
        uVar5 = *puVar7 + (long)puVar10 * 0x48;
        func_0x000104c32db4(uVar5,puVar12 + 2);
        if ((uVar5 & 1) != 0) goto LAB_10738e814;
      }
      bVar15 = NEON_umaxv(CONCAT17(-(bVar23 == 0x80),
                                   CONCAT16(-(bVar15 == 0x80),
                                            CONCAT15(-(cVar22 == -0x80),
                                                     CONCAT14(-(cVar21 == -0x80),
                                                              CONCAT13(-(cVar20 == -0x80),
                                                                       CONCAT12(-(cVar19 == -0x80),
                                                                                CONCAT11(-(cVar18 ==
                                                                                          -0x80),-((
                                                  char)uVar17 == -0x80)))))))),1);
      if ((bVar15 & 1) != 0) break;
      lVar6 = lVar6 + 8;
      uVar8 = lVar6 + uVar8;
    }
    puVar10 = param_1;
    func_0x00010738eabc(param_1,puVar4);
    lVar6 = *puVar7 + (long)puVar10 * 0x48;
    func_0x000104c2fe00(lVar6,puVar12 + 2);
    FUN_107330040(lVar6 + 0x38);
LAB_10738e814:
    uVar8 = *puVar7;
    (**(code **)(*(long *)*puVar12 + 0x80))(&plStack_a0,(long *)*puVar12,*param_3);
    pplVar1 = (long **)(uVar8 + (long)puVar10 * 0x48 + 0x38);
    lVar6 = **pplVar1;
    lVar2 = (*pplVar1)[1];
    if (lVar6 == lVar2) {
      if (pplVar1 != &plStack_a0) {
        uStack_88 = uStack_98;
        plStack_90 = plStack_a0;
        plStack_a0 = (long *)0x0;
        uStack_98 = 0;
        func_0x000107330ee8(pplVar1,&plStack_90);
        func_0x00010726dd8c(&plStack_90);
      }
    }
    else {
      FUN_107354910(pplVar1,(plStack_a0[1] - *plStack_a0) / 0x70 + (lVar2 - lVar6) / 0x70);
      lVar2 = plStack_a0[1];
      for (lVar6 = *plStack_a0; lVar6 != lVar2; lVar6 = lVar6 + 0x70) {
        func_0x00010735495c(pplVar1,lVar6);
      }
    }
    func_0x00010726dd08(&plStack_a0);
    puVar12 = puVar12 + 9;
  } while( true );
}



/* Entry: 10738e934; end: 10738e95f;  */

void FUN_10738e934(undefined8 param_1,undefined8 param_2)

{
  func_0x00010738ed10(param_2,param_1,&PTR_DAT_1109a83f0);
  func_0x00010738ece0();
  return;
}



/* Entry: 10738e960; end: 10738e96b;  */

undefined ** FUN_10738e960(void)

{
  return &PTR_DAT_1109a83f0;
}



/* Entry: 10738e96c; end: 10738e98b;  */

void FUN_10738e96c(void)

{
  func_0x00010738ed54();
  FUN_10738dff4();
  return;
}



/* Entry: 10738e98c; end: 10738ea5f;  */

void FUN_10738e98c(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_107324d80();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_10738ea60(lVar9 + (long)plVar3 * 0x48,lVar6);
    }
    lVar6 = lVar6 + 0x48;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10738ea60; end: 10738ebb3;  */

long FUN_10738ea60(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  func_0x00010726dd08(param_2 + 0x38);
  func_0x000104c2f714(param_2);
  return param_2;
}



/* Entry: 10738ebb4; end: 10738ebc7;  */

long FUN_10738ebb4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10738ebc8; end: 10738ec03;  */

long * FUN_10738ebc8(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_10738ec04(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10738ec04; end: 10738ec83;  */

void FUN_10738ec04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010738ea90(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x48;
  }
  return;
}



/* Entry: 10738ec84; end: 10738ed67;  */

void FUN_10738ec84(void)

{
  return;
}



/* Entry: 10738ed68; end: 10738f1e7;  */

undefined8 FUN_10738ed68(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint uVar8;
  undefined **extraout_x9;
  ulong extraout_x9_00;
  undefined **extraout_x9_01;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long alStack_140 [2];
  undefined **ppuStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [24];
  byte bStack_e8;
  undefined *apuStack_e0 [3];
  undefined **ppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 uStack_90;
  undefined7 uStack_8f;
  int iStack_84;
  byte bStack_80;
  
  if (param_2 == 0x12) {
    lVar10 = *param_4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_130,lVar10 + 0x18);
    uVar6 = uStack_128;
    if (-1 < (long)uStack_120) {
      uVar6 = uStack_120 >> 0x38;
    }
    if (uVar6 == 0) {
      auStack_100[0] = 0;
      bStack_e8 = 0;
    }
    else {
      func_0x0001002a82b4(auStack_100,&ppuStack_130);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_130);
    if (bStack_e8 == 1) {
      ppuStack_130 = &PTR_DAT_1109ee270;
      uStack_128 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      FUN_10733c45c(alStack_140,lVar10 + 8);
      plVar11 = (long *)(alStack_140[0] + 0x10);
      while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
        func_0x0001072d902c(auStack_a0,plVar11 + 9);
        if (bStack_80 == 1) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          ppuStack_c8 = &PTR_DAT_1109ee090;
          puStack_b0 = &DAT_11383d918;
          uStack_a8 = 0;
          func_0x00010724ef84(apuStack_e0,plVar11 + 2);
          uVar6 = uStack_c0;
          if ((uStack_c0 & 1) != 0) {
            uVar6 = *(ulong *)(uStack_c0 & 0xfffffffffffffffe);
          }
          func_0x0001005f70e4(&puStack_b0,apuStack_e0,uVar6);
          ppuVar4 = apuStack_e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          if ((bStack_80 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_10738f174;
          }
          switch(iStack_84) {
          case 1:
            FUN_10738f324();
            func_0x0001072d9534();
            break;
          case 2:
            FUN_10738f324();
            ppuVar5 = ppuVar4;
            func_0x00010738f32c();
            puVar1 = (undefined *)(extraout_x9_00 & 0xfffffffffffffffc);
            if (extraout_w8_00 != 2) {
              puVar1 = &DAT_11383d918;
            }
            if (*(int *)((long)ppuVar5 + 0x1c) != 2) {
              func_0x00010793e1f8(ppuVar4);
              *(undefined4 *)((long)ppuVar4 + 0x1c) = 2;
              ppuVar4[2] = &DAT_11383d918;
            }
            puVar7 = ppuVar4[1];
            if (((ulong)puVar7 & 1) != 0) {
              puVar7 = *(undefined **)((ulong)puVar7 & 0xfffffffffffffffe);
            }
            func_0x0001001a53d4(ppuVar4 + 2,puVar1,puVar7);
            break;
          case 3:
            FUN_10738f324();
            func_0x00010738f32c();
            func_0x0001072d956c();
            break;
          case 4:
            FUN_10738f324();
            func_0x00010738f32c();
            func_0x0001072d95a4();
            break;
          case 5:
            FUN_10738f324();
            uVar9 = CONCAT71(uStack_8f,uStack_90);
            if (iStack_84 != 5) {
              uVar9 = 0;
            }
            func_0x0001072d95dc(uVar9);
            break;
          case 6:
            FUN_10738f324();
            func_0x0001072d9790();
            func_0x00010738f32c();
            ppuVar5 = extraout_x9_01;
            if (extraout_w8_01 != 6) {
              ppuVar5 = &PTR_PTR_1132342d0;
            }
            if (ppuVar5 != ppuVar4) {
              ppuVar4 = ppuVar4 + 2;
              func_0x00010738f244(ppuVar4);
code_r0x00010738f008:
              if (*(int *)(ppuVar5 + 3) != 0) {
                func_0x00010064e820(ppuVar4,ppuVar5 + 2);
              }
            }
            break;
          case 7:
            FUN_10738f324();
            func_0x0001072d94a4();
            break;
          case 8:
            FUN_10738f324();
            func_0x0001072d961c();
            func_0x00010738f32c();
            ppuVar5 = extraout_x9;
            if (extraout_w8 != 8) {
              ppuVar5 = &PTR_PTR_113234300;
            }
            if (ppuVar5 != ppuVar4) {
              ppuVar4 = ppuVar4 + 2;
              func_0x00010738f258(ppuVar4);
              goto code_r0x00010738f008;
            }
          }
          if ((uStack_120 & 1) == 0) {
            uVar8 = (uint)(uStack_120 != 0);
          }
          else {
            uVar8 = *(uint *)(uStack_120 - 1);
          }
          lVar10 = (long)(int)uStack_118;
          if ((int)uStack_118 < (int)uVar8) {
            uStack_118 = CONCAT44(uStack_118._4_4_,(int)uStack_118 + 1);
            puVar2 = &uStack_120;
            if ((uStack_120 & 1) != 0) {
              puVar2 = (ulong *)(uStack_120 + lVar10 * 8 + 7);
            }
            FUN_10738f26c(*puVar2,&ppuStack_c8);
          }
          else {
            func_0x00010563f22c(&uStack_120);
            if ((uStack_120 & 1) != 0) {
              *(int *)(uStack_120 - 1) = *(int *)(uStack_120 - 1) + 1;
            }
            if (uStack_110 == 0) {
              uVar6 = 0x28;
              __Znwm();
            }
            else {
              uVar6 = uStack_110;
              func_0x00010b4d80e0(uStack_110,0x28);
            }
            FUN_10738f2d0();
            lVar10 = (long)(int)uStack_118;
            uStack_118 = CONCAT44(uStack_118._4_4_,(int)uStack_118 + 1);
            puVar2 = &uStack_120;
            if ((uStack_120 & 1) != 0) {
              puVar2 = (ulong *)(uStack_120 + lVar10 * 8 + 7);
            }
            *puVar2 = uVar6;
          }
          func_0x00010793eb54(&ppuStack_c8);
        }
        func_0x0001072d9770(auStack_a0);
      }
      if ((bStack_e8 & 1) == 0) {
        func_0x000104bdc2c8();
LAB_10738f174:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10738f178);
        (*pcVar3)();
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x10))
                (*(long **)(param_1 + 8),auStack_100,&ppuStack_130);
      FUN_10733c27c(alStack_140);
      func_0x00010793edac(&ppuStack_130);
      uVar9 = 5;
    }
    else {
      uVar9 = 0;
    }
    func_0x0001001148fc(auStack_100);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 10738f1e8; end: 10738f1eb;  */

undefined8 * FUN_10738f1e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8410;
  func_0x0001072bb9d0(param_1 + 1);
  return param_1;
}



/* Entry: 10738f1ec; end: 10738f1ff;  */

void FUN_10738f1ec(void)

{
  FUN_10738f2f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738f200; end: 10738f243;  */

void FUN_10738f200(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001072d969c();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 10738f244; end: 10738f26b;  */

void FUN_10738f244(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10738f26c; end: 10738f2cf;  */

long FUN_10738f26c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793eda8(param_1);
    }
    else {
      func_0x00010793ed78(param_1);
    }
  }
  return param_1;
}



/* Entry: 10738f2d0; end: 10738f2f7;  */

undefined8 * FUN_10738f2d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_1109ee090;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = 0;
  if (param_1 != param_3) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_3[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793eda8(param_1);
    }
    else {
      func_0x00010793ed78(param_1);
    }
  }
  return param_1;
}



/* Entry: 10738f2f8; end: 10738f323;  */

undefined8 * FUN_10738f2f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8410;
  func_0x0001072bb9d0(param_1 + 1);
  return param_1;
}



/* Entry: 10738f324; end: 10738f33f;  */

void FUN_10738f324(void)

{
  long in_stack_00000098;
  
  if (in_stack_00000098 == 0) {
    func_0x0001072d969c();
  }
  return;
}



/* Entry: 10738f340; end: 10738f37f;  */

undefined8 * FUN_10738f340(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_1109a8460;
  param_1[1] = param_2;
  puVar1 = param_1;
  FUN_1073af260();
  param_1[2] = puVar1;
  func_0x00010726ed14(param_1 + 3);
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10738f380; end: 10738f4cb;  */

undefined8 * FUN_10738f380(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0x14) {
    lVar4 = *param_4;
    uVar5 = *(undefined8 *)(lVar4 + 8);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 8);
    plVar2 = *(long **)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(lVar4 + 0x18);
    uVar7 = *(undefined8 *)(lVar4 + 0x10);
    FUN_10738f4e4(&uStack_b0,param_1 + 0x18);
    uStack_90 = (undefined4)uVar5;
    uStack_83 = 0;
    uStack_80 = (undefined5)uVar8;
    uStack_8c = (uint)(byte)((ulong)uVar5 >> 0x20);
    uStack_88 = (undefined5)uVar7;
    uStack_7b = 0;
    uStack_78 = (undefined5)uVar6;
    puStack_50 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x48;
    uStack_98 = uVar1;
    __Znwm();
    *puVar3 = &PTR_SUB_1109a84a0;
    puVar3[2] = uStack_a8;
    puVar3[1] = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puVar3[3] = uStack_a0;
    puVar3[8] = CONCAT35(uStack_73,uStack_78);
    puVar3[5] = CONCAT44(uStack_8c,uStack_90);
    puVar3[4] = uStack_98;
    puVar3[7] = CONCAT35(uStack_7b,uStack_80);
    puVar3[6] = CONCAT35(uStack_83,uStack_88);
    puStack_50 = puVar3;
    (**(code **)(*plVar2 + 0x10))(plVar2,auStack_68);
    func_0x0001006393ec(auStack_68);
    func_0x00010725b1d4(&uStack_b0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_68);
    puVar3 = &uStack_b0;
    func_0x00010725b1d4();
    func_0x00010738f8a4();
    *puVar3 = &PTR_FUN_1109a8460;
    FUN_10738f5b0(puVar3 + 3);
    return puVar3;
  }
  return (undefined8 *)(ulong)(param_2 == 0x14);
}



/* Entry: 10738f4cc; end: 10738f4cf;  */

undefined8 * FUN_10738f4cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8460;
  FUN_10738f5b0(param_1 + 3);
  return param_1;
}



/* Entry: 10738f4d0; end: 10738f4e3;  */

void FUN_10738f4d0(void)

{
  func_0x00010738f584();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738f4e4; end: 10738f543;  */

void FUN_10738f4e4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10738f544(param_1,&uStack_30,param_2[2]);
  func_0x00010738f8b8();
  return;
}



/* Entry: 10738f544; end: 10738f5af;  */

undefined8 * FUN_10738f544(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = param_3;
  func_0x00010738f8b8();
  return param_1;
}



/* Entry: 10738f5b0; end: 10738f5d7;  */

long FUN_10738f5b0(long param_1)

{
  FUN_10738f5d8();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10738f5d8; end: 10738f62f;  */

void FUN_10738f5d8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10738f630; end: 10738f643;  */

void FUN_10738f630(void)

{
  func_0x00010738f604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738f644; end: 10738f66b;  */

undefined8 * FUN_10738f644(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = &PTR_SUB_1109a84a0;
  FUN_10738f77c(puVar1 + 1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  return puVar1;
}



/* Entry: 10738f66c; end: 10738f697;  */

undefined8 * FUN_10738f66c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_SUB_1109a84a0;
  FUN_10738f77c(param_2 + 1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[5] = uVar2;
  param_2[4] = uVar1;
  param_2[7] = uVar4;
  param_2[6] = uVar3;
  return param_2;
}



/* Entry: 10738f698; end: 10738f6f3;  */

void FUN_10738f698(long param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  FUN_10738f7ac(auStack_30,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  FUN_10738f834();
  if (iVar1 != 0) {
    func_0x00010740eb40(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
  }
  func_0x000107270b00(auStack_30);
  return;
}



/* Entry: 10738f6f4; end: 10738f72b;  */

long FUN_10738f6f4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a8500);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10738f72c; end: 10738f737;  */

undefined ** FUN_10738f72c(void)

{
  return &PTR_DAT_1109a8500;
}



/* Entry: 10738f738; end: 10738f77b;  */

undefined8 * FUN_10738f738(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_SUB_1109a84a0;
  FUN_10738f77c(param_1 + 1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  param_1[8] = *(undefined8 *)(param_2 + 0x38);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 10738f77c; end: 10738f7ab;  */

void FUN_10738f77c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10738f7ac; end: 10738f833;  */

void FUN_10738f7ac(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10738f820;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10738f820:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 10738f834; end: 10738f84b;  */

uint FUN_10738f834(uint param_1)

{
  FUN_10738f84c();
  return param_1 ^ 1;
}



/* Entry: 10738f84c; end: 10738f89b;  */

bool FUN_10738f84c(void)

{
  bool bVar1;
  long *aplStack_30 [2];
  
  func_0x00010726fc00(aplStack_30);
  if (aplStack_30[0] == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *aplStack_30[0] == -1;
  }
  func_0x0001072508cc(aplStack_30);
  return bVar1;
}



/* Entry: 10738f89c; end: 10738f8bf;  */

void FUN_10738f89c(void)

{
  return;
}



/* Entry: 10738f8c0; end: 10738f92f;  */

void FUN_10738f8c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x000107392488();
  *param_1 = &PTR_FUN_1109a8520;
  param_1[1] = param_2;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  FUN_1073af260();
  *(undefined8 **)(unaff_x19 + 0x20) = param_1;
  func_0x00010726ed14(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
  return;
}



/* Entry: 10738f930; end: 1073908bf;  */

undefined8
FUN_10738f930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,int param_6,long *param_7,long *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined1 uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulong uVar23;
  undefined8 unaff_d9;
  float fVar24;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1878;
  long lStack_1870;
  ulong uStack_1868;
  ulong uStack_1860;
  double dStack_1858;
  undefined4 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined1 uStack_1828;
  undefined1 uStack_1820;
  long lStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  long lStack_17f0;
  undefined1 auStack_17e8 [96];
  undefined8 uStack_1788;
  long lStack_1780;
  undefined1 auStack_1778 [136];
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  long lStack_16d0;
  undefined1 auStack_16c8 [151];
  undefined1 uStack_1631;
  long lStack_1630;
  long lStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined1 uStack_15d8;
  undefined4 uStack_15d7;
  undefined3 uStack_15d3;
  double dStack_15d0;
  double dStack_15c8;
  byte bStack_15c0;
  undefined4 uStack_15bf;
  undefined3 uStack_15bb;
  double dStack_15b8;
  byte bStack_15b0;
  undefined4 uStack_15af;
  undefined3 uStack_15ab;
  double dStack_15a8;
  byte bStack_15a0;
  undefined4 uStack_159f;
  undefined3 uStack_159b;
  double dStack_1598;
  byte bStack_1590;
  undefined4 uStack_158f;
  undefined3 uStack_158b;
  undefined1 uStack_1588;
  undefined1 auStack_1580 [168];
  undefined1 auStack_14d8 [56];
  undefined1 auStack_14a0 [56];
  undefined1 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined1 auStack_13a8 [168];
  undefined1 auStack_1300 [56];
  undefined1 auStack_12c8 [56];
  undefined1 uStack_1290;
  undefined1 auStack_1288 [24];
  undefined8 *puStack_1270;
  long alStack_1268 [7];
  undefined *puStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined1 auStack_11f8 [24];
  undefined8 *puStack_11e0;
  undefined8 auStack_11d8 [43];
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 auStack_1068 [43];
  undefined1 auStack_f10 [24];
  undefined8 *puStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined1 auStack_ee0 [136];
  undefined1 auStack_e58 [168];
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined1 auStack_c58 [24];
  undefined8 *puStack_c40;
  undefined8 auStack_c38 [43];
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 auStack_ac8 [44];
  undefined1 auStack_968 [24];
  undefined8 *puStack_950;
  undefined1 auStack_948 [24];
  undefined8 *puStack_930;
  undefined8 auStack_928 [43];
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 auStack_7b8 [43];
  undefined1 auStack_660 [24];
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 auStack_630 [136];
  undefined1 auStack_5a8 [168];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_3a0 [24];
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  uint uStack_370;
  byte bStack_348;
  undefined1 auStack_2d8 [136];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [56];
  undefined1 auStack_1f8 [56];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [56];
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [24];
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_6 == 0x10;
  if ((bool)uVar10) {
    lVar17 = *param_8;
    puVar12 = auStack_f0;
    func_0x000104c2fe00(puVar12,lVar17 + 8);
    func_0x000104c2d614();
    iVar11 = (int)puVar12;
    if ((((ulong)puVar12 & 1) == 0) && (func_0x000107392540(), iVar11 == 0)) {
      func_0x000107392540();
      if (iVar11 == 0) {
        func_0x000107392540();
        if (iVar11 != 0) {
          func_0x0001073925d8();
          (*extraout_x8_01)();
          if (iVar11 != 0) {
            func_0x0001073924b4();
            func_0x000107392650();
            func_0x000107392428();
            func_0x000107392648();
            uStack_ee8 = *(undefined8 *)(param_5 + 0x18);
            uStack_ef0 = *(undefined8 *)(param_5 + 0x10);
            if (*(long *)(param_5 + 0x18) != 0) {
              do {
                func_0x000107392388();
              } while (extraout_w10_03 != 0);
            }
            func_0x000107392494(auStack_ee0,auStack_2d8);
            func_0x0001073924cc(auStack_e58);
            func_0x00010739249c(&uStack_db0);
            puVar13 = &uStack_d98;
            FUN_1073910e0(puVar13,&uStack_ef0);
            puStack_c40 = (undefined8 *)0x0;
            func_0x0001073925d0();
            *puVar13 = &PTR_FUN_1109a88e0;
            puVar13[2] = uStack_da8;
            puVar13[1] = uStack_db0;
            uStack_db0 = 0;
            uStack_da8 = 0;
            puVar13[4] = uStack_d98;
            puVar13[3] = uStack_da0;
            puVar13[5] = uStack_d90;
            func_0x0001073925e8();
            func_0x000107392494();
            func_0x0001073926b8();
            puStack_c40 = puVar13;
            func_0x0001073925b0();
            func_0x00010739250c();
            func_0x0001006393ec(auStack_c58);
            func_0x000107390db8(&uStack_db0);
            func_0x000107390dd8(&uStack_ef0);
            goto LAB_10738fb00;
          }
          plVar18 = *(long **)(param_5 + 0x20);
          auStack_11d8[0] = *(undefined8 *)(param_5 + 8);
          func_0x000107392500(auStack_11d8);
          func_0x00010739249c(&uStack_1080);
          puVar13 = auStack_1068;
          FUN_107391120(puVar13,auStack_11d8);
          puStack_ef8 = (undefined8 *)0x0;
          func_0x0001073924f0();
          *puVar13 = &PTR_FUN_1109a89e0;
          puVar13[2] = uStack_1078;
          puVar13[1] = uStack_1080;
          uStack_1080 = 0;
          uStack_1078 = 0;
          puVar13[4] = auStack_1068[0];
          puVar13[3] = uStack_1070;
          func_0x0001073924e4(&uStack_1080);
          puStack_ef8 = puVar13;
          func_0x0001073926a8(*(undefined8 *)(*plVar18 + 0x10));
          func_0x0001006393ec(auStack_f10);
          func_0x000107390df4(&uStack_1080);
          puVar13 = auStack_11d8;
          goto LAB_10738fbb0;
        }
        func_0x000107392540();
        if (iVar11 == 0) {
          func_0x000107392540();
          if (iVar11 != 0) {
            func_0x0001073924b4();
            func_0x000104c2fe00();
            ppuVar14 = &puStack_1230;
            func_0x000104c2fe00(ppuVar14,lVar17 + 0xd8);
            uVar2 = *(undefined1 *)(lVar17 + 0x148);
            func_0x0001073924b4();
            func_0x000104c2d614();
            if (((ulong)ppuVar14 & 1) == 0) {
              iVar11 = (int)&puStack_1230;
              func_0x000104c2d614();
              if (iVar11 != 0) goto LAB_10739015c;
LAB_107390220:
              fVar27 = *(float *)(lVar17 + 0x90);
              bVar5 = *(byte *)(lVar17 + 0x94);
              fVar26 = *(float *)(lVar17 + 0x98);
              bVar6 = *(byte *)(lVar17 + 0x9c);
              uStack_378 = *(undefined8 *)(lVar17 + 0x70);
              uVar16 = *(undefined8 *)(lVar17 + 0x68);
              uStack_370 = *(uint *)(lVar17 + 0x78);
              fVar29 = *(float *)(lVar17 + 0x88);
              bVar3 = *(byte *)(lVar17 + 0x8c);
              fVar24 = *(float *)(lVar17 + 0x7c);
              fVar25 = *(float *)(lVar17 + 0x80);
              bVar4 = *(byte *)(lVar17 + 0x84);
              bVar1 = (uStack_370 & 1) == 0;
              uStack_380 = uVar16;
              if (bVar1) {
                uVar16 = 0;
              }
              else {
                func_0x000107392428();
                FUN_107390ef0();
                uStack_1898 = param_2;
                uStack_1890 = param_3;
                uStack_1888 = param_4;
              }
              dVar19 = (double)fVar24;
              if ((bVar4 & 1) == 0) {
                dVar19 = 0.0;
              }
              dVar20 = (double)fVar29;
              if ((bVar3 & 1) == 0) {
                dVar20 = 0.0;
              }
              dVar21 = (double)fVar27;
              if ((bVar5 & 1) == 0) {
                dVar21 = 0.0;
              }
              dVar22 = (double)fVar26;
              uVar10 = (bVar6 & 1) == 0;
              if ((bool)uVar10) {
                dVar22 = 0.0;
              }
              func_0x000107392428();
              func_0x000107392648();
              dStack_15c8 = (double)fVar25;
              uStack_1618 = *(undefined8 *)(param_5 + 0x18);
              uStack_1620 = *(undefined8 *)(param_5 + 0x10);
              if (*(long *)(param_5 + 0x18) != 0) {
                do {
                  func_0x000107392388();
                } while (extraout_w10_05 != 0);
              }
              uStack_1608 = 0;
              uStack_1610 = 0;
              uStack_1600 = 0;
              uStack_15d7 = 0;
              uStack_15d3 = 0;
              uStack_15bf = 0;
              uStack_15bb = 0;
              uStack_15ab = 0;
              uStack_15af = 0;
              uStack_159f = 0;
              uStack_159b = 0;
              uStack_158f = 0;
              uStack_158b = 0;
              uStack_1588 = 1;
              uStack_15f8 = uVar16;
              uStack_15f0 = uStack_1898;
              uStack_15e8 = uStack_1890;
              uStack_15e0 = uStack_1888;
              uStack_15d8 = !bVar1;
              dStack_15d0 = dVar19;
              bStack_15c0 = bVar4 & 1;
              dStack_15b8 = dVar20;
              bStack_15b0 = bVar3 & 1;
              dStack_15a8 = dVar21;
              bStack_15a0 = bVar5 & 1;
              dStack_1598 = dVar22;
              bStack_1590 = bVar6 & 1;
              func_0x0001073924cc(auStack_1580);
              func_0x000107392628(auStack_14d8);
              func_0x000104c2fe00(auStack_14a0,&puStack_1230);
              uStack_1468 = uVar2;
              func_0x00010739249c(&uStack_1460);
              FUN_10739113c(&uStack_1448,&uStack_1620);
              puStack_1270 = (undefined8 *)0x0;
              puVar13 = (undefined8 *)0x1e0;
              __Znwm();
              *puVar13 = &PTR_SUB_1109a8ae0;
              puVar13[2] = uStack_1458;
              puVar13[1] = uStack_1460;
              uStack_1460 = 0;
              uStack_1458 = 0;
              puVar13[4] = uStack_1448;
              puVar13[3] = uStack_1450;
              puVar13[5] = uStack_1440;
              func_0x0001073925e8();
              _memcpy();
              FUN_10739150c(puVar13 + 0x18,auStack_13a8);
              func_0x000104c318bc(puVar13 + 0x2d,auStack_1300);
              func_0x000104c318bc(puVar13 + 0x34,auStack_12c8);
              *(undefined1 *)(puVar13 + 0x3b) = uStack_1290;
              puStack_1270 = puVar13;
              func_0x0001073925b0();
              func_0x00010739250c();
              func_0x0001006393ec(auStack_1288);
              func_0x000107390e30(&uStack_1460);
              func_0x000107390e50(&uStack_1620);
              func_0x000107392428();
              func_0x00010725ab38();
              func_0x000107392640();
              func_0x0001073924b4();
              func_0x000104c2f714();
              goto LAB_10738fbb8;
            }
LAB_10739015c:
            uVar10 = 0;
            if ((char)param_7[2] == '\x01') {
              uVar10 = *(char *)(*(long *)(*param_7 + 0x30) + 0x120) == '\x01';
              if ((bool)uVar10) {
                uVar15 = *(long *)(*param_7 + 0x30) + 0xe8;
                func_0x000104c2d614();
                if ((uVar15 & 1) == 0) {
                  (**(code **)(*(long *)*param_7 + 0x30))();
                  func_0x00010739261c();
                  bVar5 = bStack_348;
                  func_0x000107392428();
                  func_0x00010724b3d8();
                  if ((bVar5 & 1) != 0) {
                    func_0x00010725ffc4(*(long *)(*param_7 + 0x30) + 0xe8);
                    func_0x000107392428();
                    func_0x000104c2fe00();
                    func_0x0001073924b4();
                    func_0x000107392548();
                    func_0x000104c2f1f0();
                    func_0x000107392428();
                    func_0x000104c2f714();
                    (**(code **)(*(long *)*param_7 + 0x30))();
                    func_0x00010739261c();
                    if ((bStack_348 & 1) == 0) goto LAB_107390594;
                    func_0x000107392548(alStack_1268);
                    func_0x000104c318bc();
                    func_0x000104c2f1f0(&puStack_1230,alStack_1268);
                    func_0x000104c2f714(alStack_1268);
                    func_0x000107392428();
                    func_0x00010724b3d8();
                    goto LAB_107390220;
                  }
                }
              }
            }
            func_0x000107392640();
            func_0x0001073924b4();
            func_0x000104c2f714();
          }
        }
        else if ((*(byte *)(lVar17 + 0x48) & 1) != 0) {
          uVar15 = (ulong)*(uint *)(lVar17 + 0x40);
          uVar23 = (ulong)*(uint *)(lVar17 + 0x44);
          uStack_378 = *(undefined8 *)(lVar17 + 0x70);
          uVar16 = *(undefined8 *)(lVar17 + 0x68);
          uStack_370 = *(uint *)(lVar17 + 0x78);
          bVar1 = (uStack_370 & 1) == 0;
          uStack_380 = uVar16;
          if (bVar1) {
            uStack_1848 = 0;
          }
          else {
            func_0x000107392428();
            FUN_107390ef0();
            uStack_1848 = uVar16;
            unaff_d9 = param_2;
            unaff_d10 = param_3;
            unaff_d11 = param_4;
          }
          uVar28 = *(undefined4 *)(lVar17 + 0x88);
          bVar5 = *(byte *)(lVar17 + 0x8c);
          fVar29 = *(float *)(lVar17 + 0xcc);
          bVar6 = *(byte *)(lVar17 + 0xd0);
          func_0x000107390f30();
          dStack_1858 = (double)fVar29;
          if ((bVar6 & 1) == 0) {
            dStack_1858 = 0.0;
          }
          uVar10 = (bVar5 & 1) == 0;
          lStack_1818 = (long)*(float *)(lVar17 + 0xa0) * 1000000;
          lVar17 = *(long *)(param_5 + 0x18);
          uVar16 = *(undefined8 *)(param_5 + 0x10);
          uStack_1850 = uVar28;
          if ((bool)uVar10) {
            uStack_1850 = 0x41700000;
          }
          if (lVar17 != 0) {
            plVar18 = (long *)(lVar17 + 8);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar8) {
                *plVar18 = *plVar18 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          uStack_1820 = 1;
          uStack_1878 = uVar16;
          lStack_1870 = lVar17;
          uStack_1868 = uVar15;
          uStack_1860 = uVar23;
          uStack_1840 = unaff_d9;
          uStack_1838 = unaff_d10;
          uStack_1830 = unaff_d11;
          uStack_1828 = !bVar1;
          func_0x00010739249c(&uStack_1810);
          uStack_17f8 = uVar16;
          lStack_17f0 = lVar17;
          if (lVar17 != 0) {
            do {
              func_0x000107392388();
            } while (extraout_w10_04 != 0);
          }
          func_0x000107392610(auStack_17e8);
          puStack_11e0 = (undefined8 *)0x0;
          puVar13 = (undefined8 *)0x88;
          __Znwm();
          *puVar13 = &PTR_FUN_1109a8a60;
          puVar13[2] = uStack_1808;
          puVar13[1] = uStack_1810;
          uStack_1810 = 0;
          uStack_1808 = 0;
          puVar13[3] = uStack_1800;
          puVar13[4] = uVar16;
          puVar13[5] = lVar17;
          uStack_17f8 = 0;
          lStack_17f0 = 0;
          func_0x000107392610(puVar13 + 6);
          puStack_11e0 = puVar13;
          func_0x0001073925b0();
          func_0x00010739250c();
          func_0x0001006393ec(auStack_11f8);
          func_0x000107390e10(&uStack_1810);
          puVar13 = &uStack_1878;
          goto LAB_10738feac;
        }
        uVar16 = 0;
        goto LAB_10738fd74;
      }
      func_0x0001073925d8();
      (*extraout_x8_00)();
      if (iVar11 != 0) {
        func_0x000107392428();
        func_0x000107392650();
        lVar17 = *(long *)(param_5 + 0x18);
        uVar16 = *(undefined8 *)(param_5 + 0x10);
        uStack_1788 = uVar16;
        lStack_1780 = lVar17;
        if (lVar17 != 0) {
          do {
            func_0x000107392388();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107392548(auStack_1778);
        func_0x000107392494();
        func_0x00010739249c(&uStack_16f0);
        uStack_16d8 = uVar16;
        lStack_16d0 = lVar17;
        if (lVar17 != 0) {
          do {
            func_0x000107392388();
          } while (extraout_w10_02 != 0);
        }
        func_0x000107392494(auStack_16c8,auStack_1778);
        puStack_930 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0xb8;
        __Znwm();
        *puVar13 = &PTR_FUN_1109a8760;
        puVar13[2] = uStack_16e8;
        puVar13[1] = uStack_16f0;
        uStack_16f0 = 0;
        uStack_16e8 = 0;
        puVar13[3] = uStack_16e0;
        puVar13[4] = uVar16;
        puVar13[5] = lVar17;
        uStack_16d8 = 0;
        lStack_16d0 = 0;
        func_0x000107392494(puVar13 + 6,auStack_1778);
        puStack_930 = puVar13;
        func_0x0001073925b0();
        func_0x00010739250c();
        func_0x0001006393ec(auStack_948);
        func_0x000107390d7c(&uStack_16f0);
        puVar13 = &uStack_1788;
LAB_10738feac:
        func_0x0001072bc968(puVar13);
        goto LAB_10738fbb8;
      }
      plVar18 = *(long **)(param_5 + 0x20);
      auStack_c38[0] = *(undefined8 *)(param_5 + 8);
      func_0x000107392500(auStack_c38);
      func_0x00010739249c(&uStack_ae0);
      puVar13 = auStack_ac8;
      FUN_1073910c4(puVar13,auStack_c38);
      puStack_950 = (undefined8 *)0x0;
      func_0x0001073924f0();
      *puVar13 = &PTR_FUN_1109a8860;
      puVar13[2] = uStack_ad8;
      puVar13[1] = uStack_ae0;
      uStack_ae0 = 0;
      uStack_ad8 = 0;
      puVar13[4] = auStack_ac8[0];
      puVar13[3] = uStack_ad0;
      func_0x0001073924e4(&uStack_ae0);
      puStack_950 = puVar13;
      func_0x0001073926a8(*(undefined8 *)(*plVar18 + 0x10));
      func_0x0001006393ec(auStack_968);
      func_0x000107390d9c(&uStack_ae0);
      puVar13 = auStack_c38;
LAB_10738fbb0:
      func_0x00010733aeec(puVar13 + 2);
    }
    else {
      func_0x0001073925d8();
      (*extraout_x8)();
      if (iVar11 == 0) {
        plVar18 = *(long **)(param_5 + 0x20);
        auStack_928[0] = *(undefined8 *)(param_5 + 8);
        func_0x000107392500(auStack_928);
        func_0x00010739249c(&uStack_7d0);
        puVar13 = auStack_7b8;
        FUN_107390fbc(puVar13,auStack_928);
        puStack_648 = (undefined8 *)0x0;
        func_0x0001073924f0();
        *puVar13 = &PTR_FUN_1109a86e0;
        puVar13[2] = uStack_7c8;
        puVar13[1] = uStack_7d0;
        uStack_7d0 = 0;
        uStack_7c8 = 0;
        puVar13[4] = auStack_7b8[0];
        puVar13[3] = uStack_7c0;
        func_0x0001073924e4(&uStack_7d0);
        puStack_648 = puVar13;
        func_0x0001073926a8(*(undefined8 *)(*plVar18 + 0x10));
        func_0x0001006393ec(auStack_660);
        func_0x000107392670();
        puVar13 = auStack_928;
        goto LAB_10738fbb0;
      }
      func_0x0001073924b4();
      func_0x000107392650();
      func_0x000107392428();
      func_0x000107392648();
      uStack_638 = *(undefined8 *)(param_5 + 0x18);
      uStack_640 = *(undefined8 *)(param_5 + 0x10);
      if (*(long *)(param_5 + 0x18) != 0) {
        do {
          func_0x000107392388();
        } while (extraout_w10 != 0);
      }
      func_0x000107392494(auStack_630,auStack_2d8);
      func_0x0001073924cc(auStack_5a8);
      func_0x00010739249c(&uStack_500);
      puVar13 = &uStack_4e8;
      FUN_107390f7c(puVar13,&uStack_640);
      puStack_388 = (undefined8 *)0x0;
      func_0x0001073925d0();
      *puVar13 = &PTR_FUN_1109a85e0;
      puVar13[2] = uStack_4f8;
      puVar13[1] = uStack_500;
      uStack_500 = 0;
      uStack_4f8 = 0;
      puVar13[4] = uStack_4e8;
      puVar13[3] = uStack_4f0;
      puVar13[5] = uStack_4e0;
      func_0x0001073925e8();
      func_0x000107392494();
      func_0x0001073926b8();
      puStack_388 = puVar13;
      func_0x0001073925b0();
      func_0x00010739250c();
      func_0x0001006393ec(auStack_3a0);
      func_0x000107392664();
      func_0x000107392658();
LAB_10738fb00:
      func_0x000107392428();
      func_0x00010725ab38();
    }
LAB_10738fbb8:
    uVar16 = 1;
LAB_10738fd74:
    func_0x000104c2f714();
  }
  else {
    uVar10 = param_6 == 0x11;
    if ((bool)uVar10) {
      lVar17 = *param_8;
      func_0x0001073924b4();
      func_0x000104c2fe00();
      puVar12 = auStack_f0;
      func_0x000104c2fe00(puVar12,lVar17 + 0x40);
      func_0x0001073924b4();
      func_0x000104c2d614();
      if (((ulong)puVar12 & 1) == 0) {
        uVar15 = 0;
        func_0x000104c2d614();
        if ((uVar15 & 1) != 0) goto LAB_10738f9d4;
        lVar17 = lVar17 + 0x78;
        func_0x000107268400(alStack_1268);
        puStack_1230 = &UNK_10e52b660;
        uStack_1228 = 0;
        uStack_1218 = 0;
        uStack_1220 = 0;
        func_0x000104c2dd8c();
        lStack_1630 = alStack_1268[0];
        while (lStack_1628 = lVar17, lStack_1630 != 0) {
          func_0x0001077765a4(&uStack_380,lVar17 + 0x38,&uStack_1631);
          ppuVar14 = &puStack_1230;
          func_0x0001072baf4c(ppuVar14,lVar17);
          func_0x00010726cda0(ppuVar14 + 1,&uStack_378);
          func_0x00010726af18(&uStack_378);
          func_0x000104c2de10(&lStack_1630);
          lVar17 = lStack_1628;
        }
        func_0x000107392428();
        func_0x000107278fec();
        uStack_248 = *(undefined8 *)(param_5 + 0x18);
        uStack_250 = *(undefined8 *)(param_5 + 0x10);
        if (*(long *)(param_5 + 0x18) != 0) {
          do {
            func_0x000107392388();
          } while (extraout_w10_00 != 0);
        }
        func_0x000107392548(auStack_240);
        func_0x000107277f30();
        func_0x000107392628(auStack_230);
        func_0x000104c2fe00(auStack_1f8,auStack_f0);
        func_0x00010739249c(&uStack_1c0);
        FUN_107390e9c(&uStack_1a8,&uStack_250);
        puStack_f8 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0xb0;
        __Znwm();
        *puVar13 = &PTR_SUB_1109a8560;
        puVar13[2] = uStack_1b8;
        puVar13[1] = uStack_1c0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        puVar13[4] = uStack_1a8;
        puVar13[3] = uStack_1b0;
        puVar13[5] = uStack_1a0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        func_0x000107277f30(puVar13 + 6,auStack_198);
        func_0x000104c2fe00(puVar13 + 8,auStack_188);
        func_0x000104c2fe00(puVar13 + 0xf,auStack_150);
        puStack_f8 = puVar13;
        func_0x0001073925b0();
        func_0x00010739250c();
        func_0x0001006393ec(auStack_110);
        func_0x000107392688();
        func_0x00010739267c();
        func_0x000107392428();
        func_0x00010726b264();
        func_0x00010726ae88(&puStack_1230);
        func_0x000104c335c0(alStack_1268);
        uVar16 = 1;
      }
      else {
LAB_10738f9d4:
        uVar16 = 0;
      }
      func_0x000104c2f714(auStack_f0);
      func_0x0001073924b4();
      goto LAB_10738fd74;
    }
    uVar16 = 0;
  }
  func_0x0001073923a8(uStack_b8);
  if ((bool)uVar10) {
    return uVar16;
  }
  ___stack_chk_fail();
LAB_107390594:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10739059c);
  (*pcVar9)();
}



/* Entry: 1073908c0; end: 107390913;  */

long FUN_1073908c0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001073925bc();
  func_0x0001073908e0();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107390914; end: 107390bb3;  */

void FUN_107390914(undefined8 param_1,double param_2,ulong param_3,ulong param_4,ulong *param_5,
                  long param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  float *pfVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong uVar17;
  ulong uVar18;
  double unaff_d10;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  double dStack_120;
  undefined1 uStack_118;
  double dStack_110;
  undefined1 uStack_108;
  ulong uStack_100;
  double dStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *aplStack_c8 [2];
  char cStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  
  fVar20 = *(float *)(param_6 + 0x90);
  bVar4 = *(byte *)(param_6 + 0x94);
  fVar19 = *(float *)(param_6 + 0x98);
  bVar5 = *(byte *)(param_6 + 0x9c);
  uStack_a8 = *(undefined8 *)(param_6 + 0x70);
  uVar9 = *(ulong *)(param_6 + 0x68);
  uStack_a0 = *(uint *)(param_6 + 0x78);
  uStack_b0 = uVar9;
  FUN_10733b14c(aplStack_c8,param_6 + 0x50);
  if (cStack_b8 == '\x01') {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pfVar3 = (float *)aplStack_c8[0][1];
    for (pfVar8 = (float *)*aplStack_c8[0]; pfVar8 != pfVar3; pfVar8 = pfVar8 + 2) {
      param_2 = (double)pfVar8[1];
      func_0x000107246514((double)*pfVar8,&uStack_100,0);
      uVar9 = uStack_100;
      func_0x00010725ade4(&uStack_e0,&uStack_100);
    }
    if ((uStack_a0 & 1) == 0) {
      dStack_f8 = 0.0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      FUN_107390ef0(&uStack_b0);
      uStack_100 = uVar9;
      dStack_f8 = param_2;
      uStack_f0 = param_3;
      uStack_e8 = param_4;
    }
    dStack_110 = (double)((ulong)dStack_110 & 0xffffffffffffff00);
    uStack_108 = (bVar4 & 1) != 0;
    if ((bool)uStack_108) {
      dStack_110 = (double)fVar20;
    }
    dStack_120 = (double)((ulong)dStack_120 & 0xffffffffffffff00);
    uStack_118 = (bVar5 & 1) != 0;
    if ((bool)uStack_118) {
      dStack_120 = (double)fVar19;
    }
    FUN_10740e438(param_5,param_7,&uStack_e0,&uStack_100,&dStack_110,&dStack_120);
    func_0x00010725aef4(&uStack_e0);
  }
  else {
    fVar21 = *(float *)(param_6 + 0x88);
    bVar6 = *(byte *)(param_6 + 0x8c);
    uVar22 = *(undefined8 *)(param_6 + 0x7c);
    uVar17 = 0;
    bVar7 = *(byte *)(param_6 + 0x84);
    bVar1 = (*(byte *)(param_6 + 0x48) & 1) == 0;
    if (bVar1) {
      uVar18 = 0;
    }
    else {
      uVar9 = (ulong)*(uint *)(param_6 + 0x40);
      param_2 = (double)(ulong)*(uint *)(param_6 + 0x44);
      func_0x000107390f30();
      uVar18 = uVar9;
      unaff_d10 = param_2;
    }
    bVar2 = (uStack_a0 & 1) != 0;
    if (bVar2) {
      FUN_107390ef0(&uStack_b0);
      uVar17 = uVar9;
    }
    dVar10 = (double)(float)uVar22;
    dVar11 = (double)(float)((ulong)uVar22 >> 0x20);
    dVar14 = (double)fVar21;
    if ((bVar6 & 1) == 0) {
      dVar14 = 0.0;
    }
    dVar15 = (double)fVar20;
    if ((bVar4 & 1) == 0) {
      dVar15 = 0.0;
    }
    dVar16 = (double)fVar19;
    if ((bVar5 & 1) == 0) {
      dVar16 = 0.0;
    }
    *param_5 = uVar18;
    param_5[1] = (ulong)unaff_d10;
    *(bool *)(param_5 + 2) = !bVar1;
    *(undefined4 *)((long)param_5 + 0x11) = 0;
    *(undefined4 *)((long)param_5 + 0x14) = 0;
    param_5[3] = uVar17;
    param_5[4] = (ulong)param_2;
    param_5[5] = param_3;
    param_5[6] = param_4;
    *(bool *)(param_5 + 7) = bVar2;
    *(undefined4 *)((long)param_5 + 0x39) = 0;
    *(undefined4 *)((long)param_5 + 0x3c) = 0;
    lVar12 = -(ulong)((long)((ulong)CONCAT14(bVar7,(uint)bVar7) << 0x3f) < 0);
    lVar13 = -(ulong)((long)((ulong)bVar7 << 0x3f) < 0);
    param_5[9] = CONCAT17((byte)((ulong)lVar13 >> 0x38) & (byte)((ulong)dVar11 >> 0x38),
                          CONCAT16((byte)((ulong)lVar13 >> 0x30) & (byte)((ulong)dVar11 >> 0x30),
                                   CONCAT15((byte)((ulong)lVar13 >> 0x28) &
                                            (byte)((ulong)dVar11 >> 0x28),
                                            CONCAT14((byte)((ulong)lVar13 >> 0x20) &
                                                     (byte)((ulong)dVar11 >> 0x20),
                                                     CONCAT13((byte)((ulong)lVar13 >> 0x18) &
                                                              (byte)((ulong)dVar11 >> 0x18),
                                                              CONCAT12((byte)((ulong)lVar13 >> 0x10)
                                                                       & (byte)((ulong)dVar11 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)lVar13
                                                                                      >> 8) &
                                                                                (byte)((ulong)dVar11
                                                                                      >> 8),
                                                                                (byte)lVar13 &
                                                                                SUB81(dVar11,0))))))
                                  ));
    param_5[8] = CONCAT17((byte)((ulong)lVar12 >> 0x38) & (byte)((ulong)dVar10 >> 0x38),
                          CONCAT16((byte)((ulong)lVar12 >> 0x30) & (byte)((ulong)dVar10 >> 0x30),
                                   CONCAT15((byte)((ulong)lVar12 >> 0x28) &
                                            (byte)((ulong)dVar10 >> 0x28),
                                            CONCAT14((byte)((ulong)lVar12 >> 0x20) &
                                                     (byte)((ulong)dVar10 >> 0x20),
                                                     CONCAT13((byte)((ulong)lVar12 >> 0x18) &
                                                              (byte)((ulong)dVar10 >> 0x18),
                                                              CONCAT12((byte)((ulong)lVar12 >> 0x10)
                                                                       & (byte)((ulong)dVar10 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)lVar12
                                                                                      >> 8) &
                                                                                (byte)((ulong)dVar10
                                                                                      >> 8),
                                                                                (byte)lVar12 &
                                                                                SUB81(dVar10,0))))))
                                  ));
    *(byte *)(param_5 + 10) = bVar7 & 1;
    *(undefined4 *)((long)param_5 + 0x51) = 0;
    *(undefined4 *)((long)param_5 + 0x54) = 0;
    param_5[0xb] = (ulong)dVar14;
    *(byte *)(param_5 + 0xc) = bVar6 & 1;
    *(undefined4 *)((long)param_5 + 100) = 0;
    *(undefined4 *)((long)param_5 + 0x61) = 0;
    param_5[0xd] = (ulong)dVar15;
    *(byte *)(param_5 + 0xe) = bVar4 & 1;
    *(undefined4 *)((long)param_5 + 0x71) = 0;
    *(undefined4 *)((long)param_5 + 0x74) = 0;
    param_5[0xf] = (ulong)dVar16;
    *(byte *)(param_5 + 0x10) = bVar5 & 1;
    *(undefined4 *)((long)param_5 + 0x81) = 0;
    *(undefined4 *)((long)param_5 + 0x84) = 0;
  }
  FUN_10733a8d0(aplStack_c8);
  return;
}



/* Entry: 107390bb4; end: 107390d23;  */

void FUN_107390bb4(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long *unaff_x19;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000107392488();
  _bzero(param_1 + 8,0xa0);
  bVar1 = *(byte *)(unaff_x20 + 0xa8);
  fVar8 = *(float *)(unaff_x20 + 0xc4);
  bVar2 = *(byte *)(unaff_x20 + 200);
  fVar9 = *(float *)(unaff_x20 + 0xa4);
  *unaff_x19 = (long)*(float *)(unaff_x20 + 0xa0) * 1000000;
  *(undefined1 *)(unaff_x19 + 1) = 1;
  switch(*(undefined1 *)(unaff_x20 + 0xac)) {
  case 0:
    lStack_78 = 0x4008000000000000;
    uStack_80 = 0;
    lStack_68 = 0;
    lStack_70 = -0x4000000000000000;
    lStack_58 = -0x4000000000000000;
    lStack_60 = 0x4008000000000000;
    break;
  default:
    uVar4 = 0;
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    goto LAB_107390cbc;
  case 2:
    lStack_78 = -0x404147ae147ae144;
    uStack_80 = 0x3ff051eb851eb852;
    lStack_68 = 0x4012b851eb851eb8;
    lStack_70 = 0x3fb9999999999998;
    lStack_58 = 0x400570a3d70a3d6f;
    lStack_60 = -0x3fe68f5c28f5c290;
    break;
  case 4:
    if (*(int *)(unaff_x20 + 0xc0) == 2) {
      puVar3 = (undefined8 *)(unaff_x20 + 0xb0);
      func_0x000107390f60();
      auVar7._0_8_ = (double)(float)puVar3[1];
      auVar7._8_8_ = (double)(float)((ulong)puVar3[1] >> 0x20);
      dVar5 = (double)(float)*puVar3;
      dVar6 = (double)(float)((ulong)*puVar3 >> 0x20);
    }
    else {
      auVar7 = NEON_fmov(0x3ff0000000000000,8);
      dVar5 = 0.0;
      dVar6 = 0.0;
    }
    func_0x00010725aa9c(dVar5,dVar6,auVar7._0_8_,auVar7._8_8_,&uStack_80);
  }
  uVar4 = 1;
LAB_107390cbc:
  unaff_x19[7] = lStack_78;
  unaff_x19[6] = uStack_80;
  unaff_x19[9] = lStack_68;
  unaff_x19[8] = lStack_70;
  unaff_x19[0xb] = lStack_58;
  unaff_x19[10] = lStack_60;
  *(undefined1 *)(unaff_x19 + 0xc) = uVar4;
  dVar5 = (double)fVar9;
  if ((bVar1 & 1) == 0) {
    dVar5 = 0.0;
  }
  unaff_x19[2] = (long)dVar5;
  *(byte *)(unaff_x19 + 3) = bVar1 & 1;
  dVar5 = (double)fVar8;
  if ((bVar2 & 1) == 0) {
    dVar5 = 0.0;
  }
  unaff_x19[4] = (long)dVar5;
  *(byte *)(unaff_x19 + 5) = bVar2 & 1;
  return;
}



/* Entry: 107390d24; end: 107390e83;  */

long FUN_107390d24(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001073925bc();
  func_0x000107390d44();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107390e84; end: 107390e87;  */

undefined8 * FUN_107390e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8520;
  FUN_10738f5b0(param_1 + 5);
  func_0x0001072bc968(param_1 + 2);
  return param_1;
}



/* Entry: 107390e88; end: 107390e9b;  */

void FUN_107390e88(void)

{
  FUN_1073911a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107390e9c; end: 107390eef;  */

void FUN_107390e9c(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107392400();
  if (extraout_x8 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  func_0x0001073926dc();
  func_0x000107277f30();
  func_0x000104c2fe00(unaff_x19 + 0x20,unaff_x20 + 0x20);
  func_0x000104c2fe00(unaff_x19 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 107390ef0; end: 107390f7b;  */

undefined8 FUN_107390ef0(float *param_1)

{
  undefined8 auStack_30 [4];
  
  func_0x00010725aba0((double)*param_1,(double)param_1[1],(double)param_1[2],(double)param_1[3],
                      auStack_30);
  return auStack_30[0];
}



/* Entry: 107390f7c; end: 107390fbb;  */

void FUN_107390f7c(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107392400();
  if (extraout_x8 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  func_0x0001073926dc();
  func_0x000107392494();
  func_0x000107392634();
  return;
}



/* Entry: 107390fbc; end: 107390fd7;  */

void FUN_107390fbc(void)

{
  func_0x000107392450();
  return;
}



/* Entry: 107390fd8; end: 1073910c3;  */

void FUN_107390fd8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107392488();
  func_0x000104c2fe00(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined4 *)(unaff_x19 + 9) = *(undefined4 *)(unaff_x20 + 0x48);
  unaff_x19[8] = uVar1;
  FUN_10733b14c(unaff_x19 + 10,unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined4 *)(unaff_x19 + 0xf) = *(undefined4 *)(unaff_x20 + 0x78);
  unaff_x19[0xe] = uVar2;
  unaff_x19[0xd] = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x7c);
  *(undefined4 *)((long)unaff_x19 + 0x84) = *(undefined4 *)(unaff_x20 + 0x84);
  *(undefined8 *)((long)unaff_x19 + 0x7c) = uVar1;
  unaff_x19[0x11] = *(undefined8 *)(unaff_x20 + 0x88);
  unaff_x19[0x12] = *(undefined8 *)(unaff_x20 + 0x90);
  unaff_x19[0x13] = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined4 *)(unaff_x19 + 0x14) = *(undefined4 *)(unaff_x20 + 0xa0);
  *(undefined8 *)((long)unaff_x19 + 0xa4) = *(undefined8 *)(unaff_x20 + 0xa4);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xac);
  *(undefined8 *)((long)unaff_x19 + 0xbc) = *(undefined8 *)(unaff_x20 + 0xbc);
  *(undefined8 *)((long)unaff_x19 + 0xb4) = uVar2;
  *(undefined8 *)((long)unaff_x19 + 0xac) = uVar1;
  *(undefined8 *)((long)unaff_x19 + 0xc4) = *(undefined8 *)(unaff_x20 + 0xc4);
  *(undefined8 *)((long)unaff_x19 + 0xcc) = *(undefined8 *)(unaff_x20 + 0xcc);
  func_0x000104c2fe00(unaff_x19 + 0x1b,unaff_x20 + 0xd8);
  func_0x000104c2fe00(unaff_x19 + 0x22,unaff_x20 + 0x110);
  *(undefined1 *)(unaff_x19 + 0x29) = *(undefined1 *)(unaff_x20 + 0x148);
  *unaff_x19 = &PTR_DAT_1109a1d20;
  return;
}



/* Entry: 1073910c4; end: 1073910df;  */

void FUN_1073910c4(void)

{
  func_0x000107392450();
  return;
}



/* Entry: 1073910e0; end: 10739111f;  */

void FUN_1073910e0(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107392400();
  if (extraout_x8 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  func_0x0001073926dc();
  func_0x000107392494();
  func_0x000107392634();
  return;
}


