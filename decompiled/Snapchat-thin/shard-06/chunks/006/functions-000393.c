/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a9e6c4; end: 104a9e84b;  */

void FUN_104a9e6c4(double param_1,long *param_2,int param_3)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  uint3 uStack_134;
  long *plStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  char *pcStack_100;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 < 0x130) {
    if (param_3 != 200) {
      if (param_3 == 0xcc) {
        plVar14 = (long *)0x9;
      }
      else {
        if (param_3 != 0xce) goto LAB_104a9e778;
        plVar14 = (long *)0xa;
      }
      goto LAB_104a9e7f8;
    }
    func_0x0001008e016c(param_2,1);
    plVar9 = (long *)param_2[2];
    *(long *)(param_2[3] + 0x10) = *(long *)(param_2[3] + 0x10) + 1;
    plVar14 = (long *)0x1;
    func_0x0001008e01c0();
    *(undefined1 *)plVar9 = 0x88;
LAB_104a9e7bc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      return;
    }
  }
  else {
    if (param_3 < 0x194) {
      if (param_3 == 0x130) {
        plVar14 = (long *)0xb;
      }
      else {
        if (param_3 != 400) {
LAB_104a9e778:
          lStack_48 = 1;
          FUN_104a7a584(auStack_68,param_3);
          plVar14 = &lStack_48;
          func_0x0001008dfe64(param_2,plVar14,auStack_68);
          func_0x0001004b6d90(auStack_68);
          plVar9 = &lStack_48;
          func_0x0001004b6d90();
          goto LAB_104a9e7bc;
        }
        plVar14 = (long *)0xc;
      }
    }
    else if (param_3 == 0x194) {
      plVar14 = (long *)0xd;
    }
    else {
      if (param_3 != 500) goto LAB_104a9e778;
      plVar14 = (long *)0xe;
    }
LAB_104a9e7f8:
    plVar9 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      uVar6 = (uint)plVar14 - 0x7f;
      uVar21 = (ulong)uVar6;
      if ((uint)plVar14 < 0x7f) {
        uVar21 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      func_0x0001008e016c(param_2,uVar21 & 0xffffffff);
      pbVar8 = (byte *)param_2[2];
      *(ulong *)(param_2[3] + 0x10) = *(long *)(param_2[3] + 0x10) + (uVar21 & 0xffffffff);
      func_0x0001008e01c0(pbVar8,uVar21 & 0xffffffff);
      if ((int)uVar21 == 1) {
        *pbVar8 = (byte)plVar14 | 0x80;
        return;
      }
      pbVar13 = pbVar8 + 1;
      *pbVar8 = 0xff;
      uVar5 = (int)uVar21 - 2;
      switch((ulong)uVar5) {
      case 4:
        pbVar8[5] = (byte)(uVar6 >> 0x1c) | 0x80;
      case 3:
        pbVar8[4] = (byte)(uVar6 >> 0x15) | 0x80;
      case 2:
        pbVar8[3] = (byte)(uVar6 >> 0xe) | 0x80;
      case 1:
        pbVar8[2] = (byte)(uVar6 >> 7) | 0x80;
      case 0:
        *pbVar13 = (byte)uVar6 | 0x80;
      default:
        pbVar13[uVar5] = pbVar13[uVar5] & 0x7f;
        return;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(auStack_68);
  func_0x0001004b6d90(&lStack_48);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar9;
  func_0x000100460dc4();
  lVar15 = *plVar10;
  func_0x0001004671a4();
  _uStack_134 = -1;
  if ((((plVar14 != (long *)0x7fffffffffffffff) && (lVar15 != -0x7fffffffffffffff)) &&
      (_uStack_134 = 0, plVar14 != (long *)0x8000000000000000)) && (lVar15 != -0x8000000000000000))
  {
    if ((long)plVar14 < 1) {
      if (-0x8000000000000000 - (long)plVar14 <= -lVar15) goto LAB_104a9e8e8;
    }
    else if ((long)((ulong)plVar14 ^ 0x7fffffffffffffff) < -lVar15) {
      _uStack_134 = -1;
    }
    else {
LAB_104a9e8e8:
      _uStack_134 = (int)plVar14 - (int)lVar15;
    }
  }
  func_0x00010061b5d0();
  puVar22 = *(uint **)(plVar9[4] + 0x1d8);
  if (puVar22 != *(uint **)(plVar9[4] + 0x1e0)) {
    do {
      plVar14 = (long *)((ulong)plVar14 & 0xffffffff00000000 | (ulong)*puVar22);
      FUN_104adf744(&uStack_134,plVar14);
      lVar15 = plVar9[4];
      if (((-3.0 < param_1) && (param_1 <= 0.0)) && (*(uint *)(lVar15 + 8) < puVar22[1])) {
        FUN_104a9d968(plVar9,(*(uint *)(lVar15 + 8) - puVar22[1]) + *(int *)(lVar15 + 0x10) + 0x3e);
        puVar17 = *(undefined8 **)(plVar9[4] + 0x1d8);
        uVar19 = *(undefined8 *)puVar22;
        *(undefined8 *)puVar22 = *puVar17;
        *puVar17 = uVar19;
        goto LAB_104a9eb58;
      }
      puVar22 = puVar22 + 2;
    } while (puVar22 != *(uint **)(lVar15 + 0x1e0));
    if (puVar22 != *(uint **)(lVar15 + 0x1d8)) {
      do {
        if (*(uint *)(lVar15 + 8) < puVar22[-1]) break;
        puVar22 = puVar22 + -2;
        *(uint **)(lVar15 + 0x1e0) = puVar22;
      } while (puVar22 != *(uint **)(lVar15 + 0x1d8));
    }
  }
  func_0x00010061b6f0(&plStack_f0,&uStack_134);
  lVar15 = plVar9[4] + 8;
  uVar21 = uStack_e8 & 0xff;
  if (plStack_f0 != (long *)0x0) {
    uVar21 = uStack_e8;
  }
  func_0x0001008dfcf0(lVar15,uVar21 + 0x2c);
  lVar23 = plVar9[4];
  uVar21 = (ulong)uStack_134;
  puVar20 = *(ulong **)(lVar23 + 0x1e0);
  if (puVar20 < *(ulong **)(lVar23 + 0x1e8)) {
    puVar25 = puVar20 + 1;
    *puVar20 = uVar21 | lVar15 << 0x20;
  }
  else {
    plVar14 = (long *)(lVar23 + 0x1d8);
    lVar24 = (long)puVar20 - *plVar14 >> 3;
    uVar1 = lVar24 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_104a9eb90;
    uVar16 = (long)*(ulong **)(lVar23 + 0x1e8) - *plVar14;
    uVar18 = (long)uVar16 >> 2;
    if (uVar18 <= uVar1) {
      uVar18 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar18 = 0x1fffffffffffffff;
    }
    if (uVar18 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar23 + 0x1e8;
      FUN_104a9f338();
    }
    puVar20 = (ulong *)(lVar11 + lVar24 * 8);
    puVar25 = puVar20 + 1;
    *puVar20 = uVar21 | lVar15 << 0x20;
    puVar2 = *(ulong **)(lVar23 + 0x1d8);
    puVar12 = *(ulong **)(lVar23 + 0x1e0);
    if (puVar12 != puVar2) {
      do {
        puVar12 = puVar12 + -1;
        puVar20 = puVar20 + -1;
        *puVar20 = *puVar12;
      } while (puVar12 != puVar2);
      puVar12 = (ulong *)*plVar14;
    }
    *(ulong **)(lVar23 + 0x1d8) = puVar20;
    *(ulong **)(lVar23 + 0x1e0) = puVar25;
    *(ulong *)(lVar23 + 0x1e8) = lVar11 + uVar18 * 8;
    if (puVar12 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  *(ulong **)(lVar23 + 0x1e0) = puVar25;
  plStack_110 = (long *)0x1;
  uStack_108 = 0xc;
  pcStack_100 = "grpc-timeout";
  uStack_128 = uStack_e8;
  plStack_130 = plStack_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x0001008dfe64(plVar9,&plStack_110,&plStack_130);
  if ((long *)0x1 < plStack_130) {
    do {
      lVar15 = *plStack_130;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_130,0x10);
      if (bVar4) {
        *plStack_130 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_130[1])();
    }
  }
  if ((long *)0x1 < plStack_110) {
    do {
      lVar15 = *plStack_110;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar4) {
        *plStack_110 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  if ((long *)0x1 < plStack_f0) {
    do {
      lVar15 = *plStack_f0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar4) {
        *plStack_f0 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
LAB_104a9eb58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
LAB_104a9eb90:
  func_0x000104a9f324(plVar14);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104a9eb9c);
  (*pcVar7)();
}



/* Entry: 104a9e84c; end: 104a9ebeb;  */

void FUN_104a9e84c(double param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  uint3 uStack_c4;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  long *plStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  func_0x000100460dc4();
  lVar7 = *plVar6;
  func_0x0001004671a4();
  _uStack_c4 = -1;
  if ((((param_3 != (long *)0x7fffffffffffffff) && (lVar7 != -0x7fffffffffffffff)) &&
      (_uStack_c4 = 0, param_3 != (long *)0x8000000000000000)) && (lVar7 != -0x8000000000000000)) {
    if ((long)param_3 < 1) {
      if (-0x8000000000000000 - (long)param_3 <= -lVar7) goto LAB_104a9e8e8;
    }
    else if ((long)((ulong)param_3 ^ 0x7fffffffffffffff) < -lVar7) {
      _uStack_c4 = -1;
    }
    else {
LAB_104a9e8e8:
      _uStack_c4 = (int)param_3 - (int)lVar7;
    }
  }
  func_0x00010061b5d0();
  puVar15 = *(uint **)(param_2[4] + 0x1d8);
  if (puVar15 != *(uint **)(param_2[4] + 0x1e0)) {
    do {
      param_3 = (long *)((ulong)param_3 & 0xffffffff00000000 | (ulong)*puVar15);
      FUN_104adf744(&uStack_c4,param_3);
      lVar7 = param_2[4];
      if (((-3.0 < param_1) && (param_1 <= 0.0)) && (*(uint *)(lVar7 + 8) < puVar15[1])) {
        FUN_104a9d968(param_2,(*(uint *)(lVar7 + 8) - puVar15[1]) + *(int *)(lVar7 + 0x10) + 0x3e);
        puVar11 = *(undefined8 **)(param_2[4] + 0x1d8);
        uVar13 = *(undefined8 *)puVar15;
        *(undefined8 *)puVar15 = *puVar11;
        *puVar11 = uVar13;
        goto LAB_104a9eb58;
      }
      puVar15 = puVar15 + 2;
    } while (puVar15 != *(uint **)(lVar7 + 0x1e0));
    if (puVar15 != *(uint **)(lVar7 + 0x1d8)) {
      do {
        if (*(uint *)(lVar7 + 8) < puVar15[-1]) break;
        puVar15 = puVar15 + -2;
        *(uint **)(lVar7 + 0x1e0) = puVar15;
      } while (puVar15 != *(uint **)(lVar7 + 0x1d8));
    }
  }
  func_0x00010061b6f0(&plStack_80,&uStack_c4);
  lVar7 = param_2[4] + 8;
  uVar19 = uStack_78 & 0xff;
  if (plStack_80 != (long *)0x0) {
    uVar19 = uStack_78;
  }
  func_0x0001008dfcf0(lVar7,uVar19 + 0x2c);
  lVar16 = param_2[4];
  uVar19 = (ulong)uStack_c4;
  puVar14 = *(ulong **)(lVar16 + 0x1e0);
  if (puVar14 < *(ulong **)(lVar16 + 0x1e8)) {
    puVar18 = puVar14 + 1;
    *puVar14 = uVar19 | lVar7 << 0x20;
  }
  else {
    param_3 = (long *)(lVar16 + 0x1d8);
    lVar17 = (long)puVar14 - *param_3 >> 3;
    uVar1 = lVar17 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_104a9eb90;
    uVar10 = (long)*(ulong **)(lVar16 + 0x1e8) - *param_3;
    uVar12 = (long)uVar10 >> 2;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar16 + 0x1e8;
      FUN_104a9f338();
    }
    puVar14 = (ulong *)(lVar8 + lVar17 * 8);
    puVar18 = puVar14 + 1;
    *puVar14 = uVar19 | lVar7 << 0x20;
    puVar2 = *(ulong **)(lVar16 + 0x1d8);
    puVar9 = *(ulong **)(lVar16 + 0x1e0);
    if (puVar9 != puVar2) {
      do {
        puVar9 = puVar9 + -1;
        puVar14 = puVar14 + -1;
        *puVar14 = *puVar9;
      } while (puVar9 != puVar2);
      puVar9 = (ulong *)*param_3;
    }
    *(ulong **)(lVar16 + 0x1d8) = puVar14;
    *(ulong **)(lVar16 + 0x1e0) = puVar18;
    *(ulong *)(lVar16 + 0x1e8) = lVar8 + uVar12 * 8;
    if (puVar9 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  *(ulong **)(lVar16 + 0x1e0) = puVar18;
  plStack_a0 = (long *)0x1;
  uStack_98 = 0xc;
  pcStack_90 = "grpc-timeout";
  uStack_b8 = uStack_78;
  plStack_c0 = plStack_80;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x0001008dfe64(param_2,&plStack_a0,&plStack_c0);
  if ((long *)0x1 < plStack_c0) {
    do {
      lVar7 = *plStack_c0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar4) {
        *plStack_c0 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_c0[1])();
    }
  }
  if ((long *)0x1 < plStack_a0) {
    do {
      lVar7 = *plStack_a0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar4) {
        *plStack_a0 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  if ((long *)0x1 < plStack_80) {
    do {
      lVar7 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
LAB_104a9eb58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_104a9eb90:
  func_0x000104a9f324(param_3);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104a9eb9c);
  (*pcVar5)();
}



/* Entry: 104a9ebec; end: 104a9eeaf;  */

void FUN_104a9ebec(uint *param_1,uint **param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  long **pplVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *puVar14;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint *puStack_1c0;
  undefined8 uStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined4 *puStack_110;
  uint *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar6 = &plStack_f0;
  puVar15 = &stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (uint *)((ulong)param_2 & 0xffffffff);
  if ((uint)param_2 < 0x10) {
    lVar12 = *(long *)(param_1 + 8);
    lVar11 = lVar12 + ((ulong)param_2 & 0xffffffff) * 4;
    uVar9 = *(uint *)(lVar11 + 300);
    if (uVar9 <= *(uint *)(lVar12 + 8)) {
      unaff_x20 = (undefined4 *)(lVar11 + 300);
      goto LAB_104a9ec78;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      iVar1 = (*(uint *)(lVar12 + 8) - uVar9) + *(int *)(lVar12 + 0x10);
      puVar15 = unaff_x29;
      pplVar6 = (long **)register0x00000008;
      goto FUN_104a9d968;
    }
  }
  else {
    unaff_x20 = (undefined4 *)0x0;
LAB_104a9ec78:
    puStack_50 = (uint *)0x1;
    uStack_48 = 0xb;
    pcStack_40 = "grpc-status";
    FUN_104a7a584(&plStack_70);
    if (unaff_x20 == (undefined4 *)0x0) {
      uStack_c8 = uStack_48;
      puStack_d0 = puStack_50;
      uStack_b8 = uStack_38;
      pcStack_c0 = pcStack_40;
      uStack_48 = 0;
      puStack_50 = (uint *)0x0;
      uStack_38 = 0;
      pcStack_40 = (char *)0x0;
      uStack_e8 = uStack_68;
      plStack_f0 = plStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_68 = 0;
      plStack_70 = (long *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      param_2 = &puStack_d0;
      func_0x0001008e1568(param_1,param_2,&plStack_f0);
      if ((long *)0x1 < plStack_f0) {
        do {
          lVar11 = *plStack_f0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
          if (bVar3) {
            *plStack_f0 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_f0[1])();
        }
      }
      if ((uint *)0x1 < puStack_d0) {
        do {
          lVar11 = *(long *)puStack_d0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_d0,0x10);
          if (bVar3) {
            *(long *)puStack_d0 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(puStack_d0 + 2))();
        }
      }
    }
    else {
      bVar5 = (byte)uStack_68;
      uVar9 = (uint)bVar5;
      if (plStack_70 != (long *)0x0) {
        uVar9 = (uint)uStack_68;
      }
      lVar11 = *(long *)(param_1 + 8) + 8;
      func_0x0001008dfcf0(lVar11,uVar9 + 0x2b);
      *unaff_x20 = (int)lVar11;
      uStack_88 = uStack_48;
      puStack_90 = puStack_50;
      uStack_78 = uStack_38;
      pcStack_80 = pcStack_40;
      uStack_48 = 0;
      puStack_50 = (uint *)0x0;
      uStack_38 = 0;
      pcStack_40 = (char *)0x0;
      uStack_a8 = uStack_68;
      plStack_b0 = plStack_70;
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
      uStack_68 = 0;
      plStack_70 = (long *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      param_2 = &puStack_90;
      func_0x0001008dfe64(param_1,param_2,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar11 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((uint *)0x1 < puStack_90) {
        do {
          lVar11 = *(long *)puStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
          if (bVar3) {
            *(long *)puStack_90 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(puStack_90 + 2))();
        }
      }
    }
    if ((long *)0x1 < plStack_70) {
      do {
        lVar11 = *plStack_70;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar3) {
          *plStack_70 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
    puVar8 = puStack_50;
    if ((uint *)0x1 < puStack_50) {
      do {
        lVar11 = *(long *)puStack_50;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
        if (bVar3) {
          *(long *)puStack_50 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_50 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
  }
  ___stack_chk_fail();
  unaff_x19 = puVar8;
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_f0);
    func_0x0001004b6d90(&puStack_d0);
    func_0x0001004b6d90(&plStack_70);
    func_0x0001004b6d90(&puStack_50);
    unaff_x19 = puVar8;
  }
  param_1 = unaff_x19;
  __Unwind_Resume();
  pcStack_f8 = FUN_104a9eeb0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = unaff_x20;
  puStack_108 = unaff_x19;
  puStack_100 = puVar15;
  if ((int)param_2 < 3) {
    lVar12 = *(long *)(param_1 + 8);
    lVar11 = lVar12 + ((ulong)param_2 & 0xffffffff) * 4;
    uVar9 = *(uint *)(lVar11 + 0x16c);
    if (*(uint *)(lVar12 + 8) < uVar9) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
        iVar1 = (*(uint *)(lVar12 + 8) - uVar9) + *(int *)(lVar12 + 0x10);
        unaff_x30 = FUN_104a9eeb0;
FUN_104a9d968:
        *(undefined8 *)((long)pplVar6 + -0x40) = unaff_x24;
        *(undefined8 *)((long)pplVar6 + -0x38) = unaff_x23;
        *(undefined8 *)((long)pplVar6 + -0x30) = unaff_x22;
        *(undefined8 *)((long)pplVar6 + -0x28) = unaff_x21;
        *(undefined4 **)((long)pplVar6 + -0x20) = unaff_x20;
        *(uint **)((long)pplVar6 + -0x18) = unaff_x19;
        *(undefined1 **)((long)pplVar6 + -0x10) = puVar15;
        *(code **)((long)pplVar6 + -8) = unaff_x30;
        uVar9 = iVar1 - 0x41;
        uVar13 = (ulong)uVar9;
        if (iVar1 + 0x3eU < 0x7f) {
          uVar13 = 1;
        }
        else {
          func_0x0001008e186c();
        }
        func_0x0001008e016c(param_1,uVar13 & 0xffffffff);
        pbVar7 = *(byte **)(param_1 + 4);
        *(ulong *)(*(long *)(param_1 + 6) + 0x10) =
             *(long *)(*(long *)(param_1 + 6) + 0x10) + (uVar13 & 0xffffffff);
        func_0x0001008e01c0(pbVar7,uVar13 & 0xffffffff);
        if ((int)uVar13 != 1) {
          pbVar10 = pbVar7 + 1;
          *pbVar7 = 0xff;
          uVar4 = (int)uVar13 - 2;
          switch((ulong)uVar4) {
          case 4:
            pbVar7[5] = (byte)(uVar9 >> 0x1c) | 0x80;
          case 3:
            pbVar7[4] = (byte)(uVar9 >> 0x15) | 0x80;
          case 2:
            pbVar7[3] = (byte)(uVar9 >> 0xe) | 0x80;
          case 1:
            pbVar7[2] = (byte)(uVar9 >> 7) | 0x80;
          case 0:
            *pbVar10 = (byte)uVar9 | 0x80;
          default:
            pbVar10[uVar4] = pbVar10[uVar4] & 0x7f;
            return;
          }
        }
        *pbVar7 = (byte)(iVar1 + 0x3eU) | 0x80;
        return;
      }
      goto LAB_104a9f0fc;
    }
    puVar14 = (undefined4 *)(lVar11 + 0x16c);
  }
  else {
    puVar14 = (undefined4 *)0x0;
  }
  puStack_140 = (uint *)0x1;
  uStack_138 = 0xd;
  pcStack_130 = "grpc-encoding";
  FUN_104a7ac74(&plStack_160,param_2);
  if (puVar14 == (undefined4 *)0x0) {
    uStack_1b8 = uStack_138;
    puStack_1c0 = puStack_140;
    uStack_1a8 = uStack_128;
    pcStack_1b0 = pcStack_130;
    uStack_138 = 0;
    puStack_140 = (uint *)0x0;
    uStack_128 = 0;
    pcStack_130 = (char *)0x0;
    uStack_1d8 = uStack_158;
    plStack_1e0 = plStack_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    param_2 = &puStack_1c0;
    func_0x0001008e1568(param_1,param_2,&plStack_1e0);
    if ((long *)0x1 < plStack_1e0) {
      do {
        lVar11 = *plStack_1e0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
        if (bVar3) {
          *plStack_1e0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_1e0[1])();
      }
    }
    if ((uint *)0x1 < puStack_1c0) {
      do {
        lVar11 = *(long *)puStack_1c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_1c0,0x10);
        if (bVar3) {
          *(long *)puStack_1c0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_1c0 + 2))();
      }
    }
  }
  else {
    bVar5 = (byte)uStack_158;
    uVar9 = (uint)bVar5;
    if (plStack_160 != (long *)0x0) {
      uVar9 = (uint)uStack_158;
    }
    lVar11 = *(long *)(param_1 + 8) + 8;
    func_0x0001008dfcf0(lVar11,uVar9 + 0x2d);
    *puVar14 = (int)lVar11;
    uStack_178 = uStack_138;
    puStack_180 = puStack_140;
    uStack_168 = uStack_128;
    pcStack_170 = pcStack_130;
    uStack_138 = 0;
    puStack_140 = (uint *)0x0;
    uStack_128 = 0;
    pcStack_130 = (char *)0x0;
    uStack_198 = uStack_158;
    plStack_1a0 = plStack_160;
    uStack_188 = uStack_148;
    uStack_190 = uStack_150;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    param_2 = &puStack_180;
    func_0x0001008dfe64(param_1,param_2,&plStack_1a0);
    if ((long *)0x1 < plStack_1a0) {
      do {
        lVar11 = *plStack_1a0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
        if (bVar3) {
          *plStack_1a0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_1a0[1])();
      }
    }
    if ((uint *)0x1 < puStack_180) {
      do {
        lVar11 = *(long *)puStack_180;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_180,0x10);
        if (bVar3) {
          *(long *)puStack_180 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_180 + 2))();
      }
    }
  }
  if ((long *)0x1 < plStack_160) {
    do {
      lVar11 = *plStack_160;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
      if (bVar3) {
        *plStack_160 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_160[1])();
    }
  }
  param_1 = puStack_140;
  if ((uint *)0x1 < puStack_140) {
    do {
      lVar11 = *(long *)puStack_140;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_140,0x10);
      if (bVar3) {
        *(long *)puStack_140 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(puStack_140 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
LAB_104a9f0fc:
  uVar9 = (uint)param_2;
  ___stack_chk_fail();
  if (uVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_1e0);
    func_0x0001004b6d90(&puStack_1c0);
    func_0x0001004b6d90(&plStack_160);
    func_0x0001004b6d90(&puStack_140);
  }
  __Unwind_Resume();
  puVar8 = param_1 + 2;
  *param_1 = uVar9;
  uVar4 = param_1[3];
  if (uVar9 <= param_1[3]) {
    uVar4 = uVar9;
  }
  func_0x00010074a198(puVar8,uVar4);
  if ((int)puVar8 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 104a9eeb0; end: 104a9f173;  */

void FUN_104a9eeb0(uint *param_1,uint **param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 < 3) {
    lVar12 = *(long *)(param_1 + 8);
    lVar11 = lVar12 + ((ulong)param_2 & 0xffffffff) * 4;
    uVar8 = *(uint *)(lVar11 + 0x16c);
    if (*(uint *)(lVar12 + 8) < uVar8) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        iVar1 = (*(uint *)(lVar12 + 8) - uVar8) + *(int *)(lVar12 + 0x10);
        uVar8 = iVar1 + 0x3e;
        uVar4 = iVar1 - 0x41;
        uVar13 = (ulong)uVar4;
        if (uVar8 < 0x7f) {
          uVar13 = 1;
        }
        else {
          func_0x0001008e186c();
        }
        func_0x0001008e016c(param_1,uVar13 & 0xffffffff);
        pbVar6 = *(byte **)(param_1 + 4);
        *(ulong *)(*(long *)(param_1 + 6) + 0x10) =
             *(long *)(*(long *)(param_1 + 6) + 0x10) + (uVar13 & 0xffffffff);
        func_0x0001008e01c0(pbVar6,uVar13 & 0xffffffff);
        if ((int)uVar13 != 1) {
          pbVar9 = pbVar6 + 1;
          *pbVar6 = 0xff;
          uVar8 = (int)uVar13 - 2;
          switch((ulong)uVar8) {
          case 4:
            pbVar6[5] = (byte)(uVar4 >> 0x1c) | 0x80;
          case 3:
            pbVar6[4] = (byte)(uVar4 >> 0x15) | 0x80;
          case 2:
            pbVar6[3] = (byte)(uVar4 >> 0xe) | 0x80;
          case 1:
            pbVar6[2] = (byte)(uVar4 >> 7) | 0x80;
          case 0:
            *pbVar9 = (byte)uVar4 | 0x80;
          default:
            pbVar9[uVar8] = pbVar9[uVar8] & 0x7f;
            return;
          }
        }
        *pbVar6 = (byte)uVar8 | 0x80;
        return;
      }
      goto LAB_104a9f0fc;
    }
    puVar14 = (undefined4 *)(lVar11 + 0x16c);
  }
  else {
    puVar14 = (undefined4 *)0x0;
  }
  puStack_50 = (uint *)0x1;
  uStack_48 = 0xd;
  FUN_104a7ac74(&plStack_70,param_2);
  if (puVar14 == (undefined4 *)0x0) {
    uStack_c8 = uStack_48;
    puStack_d0 = puStack_50;
    pcStack_c0 = "grpc-encoding";
    uStack_48 = 0;
    puStack_50 = (uint *)0x0;
    uStack_e8 = uStack_68;
    plStack_f0 = plStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_68 = 0;
    plStack_70 = (long *)0x0;
    uStack_58 = 0;
    uStack_60 = 0;
    param_2 = &puStack_d0;
    func_0x0001008e1568(param_1,param_2,&plStack_f0);
    if ((long *)0x1 < plStack_f0) {
      do {
        lVar11 = *plStack_f0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
        if (bVar3) {
          *plStack_f0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_f0[1])();
      }
    }
    if ((uint *)0x1 < puStack_d0) {
      do {
        lVar11 = *(long *)puStack_d0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_d0,0x10);
        if (bVar3) {
          *(long *)puStack_d0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_d0 + 2))();
      }
    }
  }
  else {
    bVar5 = (byte)uStack_68;
    uVar8 = (uint)bVar5;
    if (plStack_70 != (long *)0x0) {
      uVar8 = (uint)uStack_68;
    }
    lVar11 = *(long *)(param_1 + 8) + 8;
    func_0x0001008dfcf0(lVar11,uVar8 + 0x2d);
    *puVar14 = (int)lVar11;
    uStack_88 = uStack_48;
    puStack_90 = puStack_50;
    pcStack_80 = "grpc-encoding";
    uStack_48 = 0;
    puStack_50 = (uint *)0x0;
    uStack_a8 = uStack_68;
    plStack_b0 = plStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_68 = 0;
    plStack_70 = (long *)0x0;
    uStack_58 = 0;
    uStack_60 = 0;
    param_2 = &puStack_90;
    func_0x0001008dfe64(param_1,param_2,&plStack_b0);
    if ((long *)0x1 < plStack_b0) {
      do {
        lVar11 = *plStack_b0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
        if (bVar3) {
          *plStack_b0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_b0[1])();
      }
    }
    if ((uint *)0x1 < puStack_90) {
      do {
        lVar11 = *(long *)puStack_90;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
        if (bVar3) {
          *(long *)puStack_90 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_90 + 2))();
      }
    }
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar11 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  param_1 = puStack_50;
  if ((uint *)0x1 < puStack_50) {
    do {
      lVar11 = *(long *)puStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar3) {
        *(long *)puStack_50 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(puStack_50 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
LAB_104a9f0fc:
  uVar8 = (uint)param_2;
  ___stack_chk_fail();
  if (uVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_f0);
    func_0x0001004b6d90(&puStack_d0);
    func_0x0001004b6d90(&plStack_70);
    func_0x0001004b6d90(&puStack_50);
  }
  __Unwind_Resume();
  puVar7 = param_1 + 2;
  *param_1 = uVar8;
  uVar4 = param_1[3];
  if (uVar8 <= param_1[3]) {
    uVar4 = uVar8;
  }
  func_0x00010074a198(puVar7,uVar4);
  if ((int)puVar7 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 104a9f174; end: 104a9f1af;  */

void FUN_104a9f174(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_1 + 2;
  *param_1 = param_2;
  uVar1 = param_1[3];
  if (param_2 <= param_1[3]) {
    uVar1 = param_2;
  }
  func_0x00010074a198(puVar2,uVar1);
  if ((int)puVar2 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 104a9f1b0; end: 104a9f30f;  */

undefined1  [16] FUN_104a9f1b0(long *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long alStack_148 [8];
  long lStack_108;
  ulong uStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2[1];
  plVar4 = (long *)*param_2;
  lVar11 = param_2[3];
  lVar10 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  if (param_3 == 0) {
    plStack_80 = plVar4;
    lStack_78 = lVar8;
    lStack_70 = lVar10;
    lStack_68 = lVar11;
    FUN_104a96ccc(&lStack_60,&plStack_80);
    param_1[2] = lStack_50;
    param_1[1] = lStack_58;
    param_1[3] = lStack_48;
    *param_1 = lStack_60;
    *(undefined2 *)(param_1 + 4) = 0x80;
    uVar6 = param_1[1] & 0xff;
    if (lStack_60 != 0) {
      uVar6 = param_1[1];
    }
    param_1[5] = uVar6;
    if ((long *)0x1 < plStack_80) {
      do {
        lVar8 = *plStack_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
        if (bVar3) {
          *plStack_80 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_80[1])();
      }
    }
  }
  else {
    lStack_78 = 0;
    plStack_80 = (long *)0x0;
    lStack_68 = 0;
    lStack_70 = 0;
    param_1[2] = lVar10;
    param_1[1] = lVar8;
    param_1[3] = lVar11;
    *param_1 = (long)plVar4;
    *(undefined2 *)(param_1 + 4) = 0x100;
    uVar6 = param_1[1] & 0xff;
    if (plVar4 != (long *)0x0) {
      uVar6 = param_1[1];
    }
    param_1[5] = uVar6 + 1;
  }
  uVar1 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 6) = uVar1;
  uVar6 = (ulong)(uVar1 - 0x7f);
  if (uVar1 < 0x7f) {
    uVar6 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  *(int *)((long)param_1 + 0x34) = (int)uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = param_1;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(param_1);
  }
  __Unwind_Resume(uVar6);
  pcStack_88 = FUN_104a9f310;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_104a6fa70(&DAT_10f62a4d8);
  uStack_98 = 0x104a9f324;
  puVar7 = &DAT_10f62a4d8;
  puStack_a0 = (undefined1 *)&puStack_90;
  FUN_104a6fa70(&DAT_10f62a4d8);
  pcStack_a8 = FUN_104a9f338;
  uStack_c0 = uVar6;
  plStack_b8 = param_1;
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar8 = (long)param_2 << 3;
    puStack_b0 = (undefined1 *)&puStack_a0;
    __Znwm(lVar8);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = lVar8;
    return auVar16;
  }
  puStack_b0 = (undefined1 *)&puStack_a0;
  FUN_104a7757c();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x2;
  puVar9 = param_2;
  func_0x0001004686b8();
  if ((int)plVar4 != 0) {
    plVar4 = alStack_148;
    func_0x000107c616d0(plVar4,0x40,param_4,&uStack_c0);
    if ((int)(uint)plVar4 < 0) {
      plVar5 = (long *)0x0;
      plVar4 = (long *)0x0;
    }
    else if ((uint)plVar4 < 0x40) {
      plVar4 = (long *)0x0;
      plVar5 = alStack_148;
    }
    else {
      plVar4 = (long *)(((ulong)plVar4 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar5 = plVar4;
    }
    FUN_104a6e9e0(puVar7,param_2,2,plVar5);
    func_0x000100460314();
    puVar9 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    auVar12._8_8_ = puVar9;
    auVar12._0_8_ = plVar4;
    return auVar12;
  }
  func_0x000107c60e78();
  if ((ulong)puVar9 >> 0x3d == 0) {
    lVar8 = (long)puVar9 << 3;
    func_0x000107c60e20(lVar8);
    auVar13._8_8_ = puVar9;
    auVar13._0_8_ = lVar8;
    return auVar13;
  }
  FUN_104a7757c();
  lVar8 = plVar4[1];
  lVar10 = plVar4[2];
  while (lVar10 != lVar8) {
    plVar4[2] = lVar10 + -8;
    plVar5 = *(long **)(lVar10 + -8);
    *(undefined8 *)(lVar10 + -8) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    lVar10 = plVar4[2];
  }
  if (*plVar4 != 0) {
    func_0x000107c60e14();
  }
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = plVar4;
  return auVar14;
}



/* Entry: 104a9f310; end: 104a9f337;  */

undefined1  [16]
FUN_104a9f310(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long alStack_c8 [8];
  long lStack_88;
  
  FUN_104a6fa70(&DAT_10f62a4d8);
  puVar3 = &DAT_10f62a4d8;
  FUN_104a6fa70(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar4 = param_2 << 3;
    __Znwm(lVar4);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar4;
    return auVar10;
  }
  FUN_104a7757c();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar5 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_c8;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0xffffffffffffffc0);
    if ((int)(uint)plVar1 < 0) {
      plVar2 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar2 = alStack_c8;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar2 = plVar1;
    }
    FUN_104a6e9e0(puVar3,param_2,2,plVar2);
    func_0x000100460314();
    uVar5 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    auVar7._8_8_ = uVar5;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  func_0x000107c60e78();
  if (uVar5 >> 0x3d == 0) {
    lVar4 = uVar5 << 3;
    func_0x000107c60e20(lVar4);
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = lVar4;
    return auVar8;
  }
  FUN_104a7757c();
  lVar4 = plVar1[1];
  lVar6 = plVar1[2];
  while (lVar6 != lVar4) {
    plVar1[2] = lVar6 + -8;
    plVar2 = *(long **)(lVar6 + -8);
    *(undefined8 *)(lVar6 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar6 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = plVar1;
  return auVar9;
}



/* Entry: 104a9f338; end: 104a9f36b;  */

undefined1  [16]
FUN_104a9f338(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long alStack_a8 [8];
  long lStack_68;
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar3;
    return auVar9;
  }
  FUN_104a7757c();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_a8;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0xffffffffffffffe0);
    if ((int)(uint)plVar1 < 0) {
      plVar2 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar2 = alStack_a8;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar2 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar2);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar3 = uVar4 << 3;
    func_0x000107c60e20(lVar3);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  FUN_104a7757c();
  lVar3 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar3) {
    plVar1[2] = lVar5 + -8;
    plVar2 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a9f36c; end: 104a9f373;  */

undefined1  [16]
FUN_104a9f36c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a9f374; end: 104a9f3db;  */

/* WARNING: Possible PIC construction at 0x000104a9f500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a9f504) */

undefined1  [16] FUN_104a9f374(ulong ***param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  ulong uVar2;
  char **ppcVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong **ppuVar11;
  ulong ***pppuVar12;
  ulong uVar13;
  ulong ***pppuVar14;
  ulong ***pppuVar15;
  uint uVar16;
  ulong ***pppuVar17;
  uint uVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ***pppuVar19;
  code *pcVar20;
  ulong **ppuVar21;
  ulong **ppuVar22;
  ulong **ppuVar23;
  ulong **ppuVar24;
  ulong **ppuVar25;
  ulong **ppuVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_2a0 [16];
  ulong *puStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong *puStack_228;
  ulong *puStack_220;
  ulong *puStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  ulong *puStack_1e0;
  ulong *puStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  long lStack_188;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  char *pcStack_160;
  undefined1 uStack_151;
  byte abStack_150 [8];
  ulong **appuStack_148 [32];
  long lStack_48;
  undefined8 *puStack_20;
  code *pcStack_18;
  
  uVar18 = *(uint *)param_1;
  uVar16 = uVar18 + 1;
  *(uint *)param_1 = uVar16;
  if (uVar18 < 0xffffffff) {
    if (*(uint *)(param_1 + 1) == 0) goto LAB_104a9f3d4;
    uVar13 = (ulong)param_1[2] >> 1;
    uVar10 = 0;
    if (uVar13 != 0) {
      uVar10 = uVar16 / uVar13;
    }
    pppuVar14 = param_1 + 3;
    if (((ulong)param_1[2] & 1) != 0) {
      pppuVar14 = (ulong ***)*pppuVar14;
    }
    uVar16 = (uint)*(ushort *)((long)pppuVar14 + ((ulong)uVar16 - uVar10 * uVar13) * 2);
    if (uVar16 <= *(uint *)((long)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) - 1;
      *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) - uVar16;
      auVar30._8_8_ = param_2;
      auVar30._0_8_ = param_1;
      return auVar30;
    }
  }
  else {
    func_0x00010bdab30c();
LAB_104a9f3d4:
    func_0x00010bdab340();
  }
  func_0x00010bdab374();
  ppcVar3 = &pcStack_160;
  pcStack_18 = FUN_104a9f3dc;
  pppuVar19 = (undefined8 ***)&puStack_20;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar14 = (ulong ***)(param_2 & 0xffffffff);
  puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x000100744244(abStack_150,pppuVar14,&uStack_151);
  uVar16 = *(uint *)(param_1 + 1);
  uVar10 = (ulong)uVar16;
  uVar18 = (uint)param_2;
  if (uVar18 < uVar16) {
    pcStack_160 = "table_elems_ <= capacity";
    pcVar8 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder_table.cc"
    ;
    param_4 = "assertion failed: %s";
    pppuVar14 = (ulong ***)0x51;
    pcVar20 = (code *)0x104a9f504;
    goto code_r0x0001004686cc;
  }
  if (uVar16 != 0) {
    uVar16 = *(uint *)param_1;
    ppuVar11 = param_1[2];
    uVar13 = (ulong)ppuVar11 >> 1;
    do {
      uVar16 = uVar16 + 1;
      pppuVar17 = param_1 + 3;
      if (((ulong)ppuVar11 & 1) != 0) {
        pppuVar17 = (ulong ***)param_1[3];
      }
      uVar2 = 0;
      if (uVar13 != 0) {
        uVar2 = uVar16 / uVar13;
      }
      uVar1 = 0;
      if (uVar18 != 0) {
        uVar1 = uVar16 / uVar18;
      }
      pppuVar12 = appuStack_148;
      if ((abStack_150[0] & 1) != 0) {
        pppuVar12 = (ulong ***)appuStack_148[0];
      }
      *(undefined2 *)((long)pppuVar12 + (ulong)(uVar16 - uVar1 * uVar18) * 2) =
           *(undefined2 *)((long)pppuVar17 + ((ulong)uVar16 - uVar2 * uVar13) * 2);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  param_1 = param_1 + 2;
  if (param_1 != (ulong ***)abStack_150) {
    pppuVar14 = (ulong ***)abStack_150;
    FUN_104a9f534();
  }
  if ((abStack_150[0] & 1) != 0) {
    __ZdlPv();
    param_1 = (ulong ***)appuStack_148[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar31._8_8_ = pppuVar14;
    auVar31._0_8_ = param_1;
    return auVar31;
  }
  ___stack_chk_fail();
  pcVar8 = (char *)param_1;
  __Unwind_Resume();
  ppcVar3 = (char **)auStack_2a0;
  pcStack_168 = FUN_104a9f534;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = *pppuVar14;
  if (((ulong)*(ulong ***)pcVar8 & 1) == 0) {
    uVar10 = (ulong)ppuVar11 & 1;
    pppuVar17 = (ulong ***)pcVar8;
    pppuVar12 = pppuVar14;
    ppuVar11 = *(ulong ***)pcVar8;
    if (uVar10 == 0) {
      puStack_1c8 = *(ulong **)((long)pcVar8 + 0xd0);
      puStack_1d0 = *(ulong **)((long)pcVar8 + 200);
      puStack_1b8 = *(ulong **)((long)pcVar8 + 0xe0);
      puStack_1c0 = *(ulong **)((long)pcVar8 + 0xd8);
      puStack_1a8 = *(ulong **)((long)pcVar8 + 0xf0);
      puStack_1b0 = *(ulong **)((long)pcVar8 + 0xe8);
      puStack_198 = *(ulong **)((long)pcVar8 + 0x100);
      puStack_1a0 = *(ulong **)((long)pcVar8 + 0xf8);
      puStack_208 = *(ulong **)((long)pcVar8 + 0x90);
      puStack_210 = *(ulong **)((long)pcVar8 + 0x88);
      puStack_1f8 = *(ulong **)((long)pcVar8 + 0xa0);
      puStack_200 = *(ulong **)((long)pcVar8 + 0x98);
      puStack_1e8 = *(ulong **)((long)pcVar8 + 0xb0);
      puStack_1f0 = *(ulong **)((long)pcVar8 + 0xa8);
      puStack_1d8 = *(ulong **)((long)pcVar8 + 0xc0);
      puStack_1e0 = *(ulong **)((long)pcVar8 + 0xb8);
      puStack_248 = *(ulong **)((long)pcVar8 + 0x50);
      puStack_250 = *(ulong **)((long)pcVar8 + 0x48);
      puStack_238 = *(ulong **)((long)pcVar8 + 0x60);
      puStack_240 = *(ulong **)((long)pcVar8 + 0x58);
      puStack_228 = *(ulong **)((long)pcVar8 + 0x70);
      puStack_230 = *(ulong **)((long)pcVar8 + 0x68);
      puStack_218 = *(ulong **)((long)pcVar8 + 0x80);
      puStack_220 = *(ulong **)((long)pcVar8 + 0x78);
      puStack_288 = *(ulong **)((long)pcVar8 + 0x10);
      puStack_290 = *(ulong **)((long)pcVar8 + 8);
      puStack_278 = *(ulong **)((long)pcVar8 + 0x20);
      puStack_280 = *(ulong **)((long)pcVar8 + 0x18);
      puStack_268 = *(ulong **)((long)pcVar8 + 0x30);
      puStack_270 = *(ulong **)((long)pcVar8 + 0x28);
      puStack_258 = *(ulong **)((long)pcVar8 + 0x40);
      puStack_260 = *(ulong **)((long)pcVar8 + 0x38);
      ppuVar21 = pppuVar14[2];
      ppuVar11 = pppuVar14[1];
      ppuVar23 = pppuVar14[4];
      ppuVar22 = pppuVar14[3];
      ppuVar25 = pppuVar14[6];
      ppuVar24 = pppuVar14[5];
      ppuVar26 = pppuVar14[7];
      *(ulong ***)((long)pcVar8 + 0x40) = pppuVar14[8];
      *(ulong ***)((long)pcVar8 + 0x38) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0x30) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0x28) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0x20) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0x18) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0x10) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 8) = ppuVar11;
      ppuVar21 = pppuVar14[10];
      ppuVar11 = pppuVar14[9];
      ppuVar23 = pppuVar14[0xc];
      ppuVar22 = pppuVar14[0xb];
      ppuVar25 = pppuVar14[0xe];
      ppuVar24 = pppuVar14[0xd];
      ppuVar26 = pppuVar14[0xf];
      *(ulong ***)((long)pcVar8 + 0x80) = pppuVar14[0x10];
      *(ulong ***)((long)pcVar8 + 0x78) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0x70) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0x68) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0x60) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0x58) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0x50) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 0x48) = ppuVar11;
      ppuVar21 = pppuVar14[0x12];
      ppuVar11 = pppuVar14[0x11];
      ppuVar23 = pppuVar14[0x14];
      ppuVar22 = pppuVar14[0x13];
      ppuVar25 = pppuVar14[0x16];
      ppuVar24 = pppuVar14[0x15];
      ppuVar26 = pppuVar14[0x17];
      *(ulong ***)((long)pcVar8 + 0xc0) = pppuVar14[0x18];
      *(ulong ***)((long)pcVar8 + 0xb8) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0xb0) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0xa8) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0xa0) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0x98) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0x90) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 0x88) = ppuVar11;
      ppuVar21 = pppuVar14[0x1a];
      ppuVar11 = pppuVar14[0x19];
      ppuVar23 = pppuVar14[0x1c];
      ppuVar22 = pppuVar14[0x1b];
      ppuVar25 = pppuVar14[0x1e];
      ppuVar24 = pppuVar14[0x1d];
      ppuVar26 = pppuVar14[0x1f];
      *(ulong ***)((long)pcVar8 + 0x100) = pppuVar14[0x20];
      *(ulong ***)((long)pcVar8 + 0xf8) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0xf0) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0xe8) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0xe0) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0xd8) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0xd0) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 200) = ppuVar11;
      pppuVar14[0x1a] = (ulong **)puStack_1c8;
      pppuVar14[0x19] = (ulong **)puStack_1d0;
      pppuVar14[0x1c] = (ulong **)puStack_1b8;
      pppuVar14[0x1b] = (ulong **)puStack_1c0;
      pppuVar14[0x1e] = (ulong **)puStack_1a8;
      pppuVar14[0x1d] = (ulong **)puStack_1b0;
      pppuVar14[0x20] = (ulong **)puStack_198;
      pppuVar14[0x1f] = (ulong **)puStack_1a0;
      pppuVar14[0x12] = (ulong **)puStack_208;
      pppuVar14[0x11] = (ulong **)puStack_210;
      pppuVar14[0x14] = (ulong **)puStack_1f8;
      pppuVar14[0x13] = (ulong **)puStack_200;
      pppuVar14[0x16] = (ulong **)puStack_1e8;
      pppuVar14[0x15] = (ulong **)puStack_1f0;
      pppuVar14[0x18] = (ulong **)puStack_1d8;
      pppuVar14[0x17] = (ulong **)puStack_1e0;
      pppuVar14[10] = (ulong **)puStack_248;
      pppuVar14[9] = (ulong **)puStack_250;
      pppuVar14[0xc] = (ulong **)puStack_238;
      pppuVar14[0xb] = (ulong **)puStack_240;
      pppuVar14[0xe] = (ulong **)puStack_228;
      pppuVar14[0xd] = (ulong **)puStack_230;
      pppuVar14[0x10] = (ulong **)puStack_218;
      pppuVar14[0xf] = (ulong **)puStack_220;
      pppuVar14[2] = (ulong **)puStack_288;
      pppuVar14[1] = (ulong **)puStack_290;
      pppuVar14[4] = (ulong **)puStack_278;
      pppuVar14[3] = (ulong **)puStack_280;
      pppuVar14[6] = (ulong **)puStack_268;
      pppuVar14[5] = (ulong **)puStack_270;
      pppuVar14[8] = (ulong **)puStack_258;
      pppuVar14[7] = (ulong **)puStack_260;
    }
    else {
LAB_104a9f6c4:
      ppuVar21 = pppuVar12[1];
      ppuVar22 = pppuVar12[2];
      if ((ulong **)0x1 < ppuVar11) {
        uVar10 = (ulong)ppuVar11 >> 1;
        pppuVar12 = pppuVar12 + 1;
        pppuVar15 = pppuVar17 + 1;
        do {
          *(undefined2 *)pppuVar12 = *(undefined2 *)pppuVar15;
          uVar10 = uVar10 - 1;
          pppuVar12 = (ulong ***)((long)pppuVar12 + 2);
          pppuVar15 = (ulong ***)((long)pppuVar15 + 2);
        } while (uVar10 != 0);
      }
      pppuVar17[1] = ppuVar21;
      pppuVar17[2] = ppuVar22;
    }
  }
  else {
    pppuVar17 = pppuVar14;
    pppuVar12 = (ulong ***)pcVar8;
    if (((ulong)ppuVar11 & 1) == 0) goto LAB_104a9f6c4;
    ppuVar21 = *(ulong ***)((long)pcVar8 + 0x10);
    ppuVar11 = *(ulong ***)((long)pcVar8 + 8);
    ppuVar22 = pppuVar14[1];
    *(ulong ***)((long)pcVar8 + 0x10) = pppuVar14[2];
    *(ulong ***)((long)pcVar8 + 8) = ppuVar22;
    pppuVar14[2] = ppuVar21;
    pppuVar14[1] = ppuVar11;
  }
  ppuVar11 = *(ulong ***)pcVar8;
  *(ulong ***)pcVar8 = *pppuVar14;
  *pppuVar14 = ppuVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    auVar32._8_8_ = pppuVar14;
    auVar32._0_8_ = pcVar8;
    return auVar32;
  }
  pcVar20 = FUN_104a9f73c;
  ppuStack_170 = pppuVar19;
  ___stack_chk_fail();
  pppuVar19 = &ppuStack_170;
code_r0x0001004686cc:
  *(undefined8 *)((long)ppcVar3 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppcVar3 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppcVar3 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppcVar3 + -0x28) = unaff_x21;
  *(ulong *)((long)ppcVar3 + -0x20) = param_2;
  *(ulong ****)((long)ppcVar3 + -0x18) = param_1;
  *(undefined8 ****)((long)ppcVar3 + -0x10) = pppuVar19;
  *(code **)((long)ppcVar3 + -8) = pcVar20;
  *(undefined8 *)((long)ppcVar3 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x2;
  pppuVar17 = pppuVar14;
  func_0x0001004686b8();
  if ((int)plVar4 != 0) {
    *(char ***)((long)ppcVar3 + -0x90) = ppcVar3;
    puVar5 = (undefined1 *)((long)ppcVar3 + -0x88);
    func_0x000107c616d0(puVar5,0x40,param_4,ppcVar3);
    if ((int)(uint)puVar5 < 0) {
      plVar7 = (long *)0x0;
      plVar4 = (long *)0x0;
    }
    else if ((uint)puVar5 < 0x40) {
      plVar4 = (long *)0x0;
      plVar7 = (long *)((long)ppcVar3 + -0x88);
    }
    else {
      plVar4 = (long *)(((ulong)puVar5 & 0xffffffff) + 1);
      func_0x000100460200();
      *(char ***)((long)ppcVar3 + -0x90) = ppcVar3;
      func_0x000107c616d0();
      plVar7 = plVar4;
    }
    pppuVar17 = pppuVar14;
    FUN_104a6e9e0(pcVar8,pppuVar14,2,plVar7);
    func_0x000100460314();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppcVar3 + -0x48)) {
    auVar27._8_8_ = pppuVar17;
    auVar27._0_8_ = plVar4;
    return auVar27;
  }
  func_0x000107c60e78();
  *(ulong ****)((long)ppcVar3 + -0xb0) = pppuVar14;
  *(undefined8 *)((long)ppcVar3 + -0xa8) = 2;
  *(undefined1 **)((long)ppcVar3 + -0xa0) = (undefined1 *)((long)ppcVar3 + -0x10);
  *(undefined **)((long)ppcVar3 + -0x98) = &UNK_1004687d0;
  if ((ulong)pppuVar17 >> 0x3d == 0) {
    lVar6 = (long)pppuVar17 << 3;
    func_0x000107c60e20(lVar6);
    auVar28._8_8_ = pppuVar17;
    auVar28._0_8_ = lVar6;
    return auVar28;
  }
  FUN_104a7757c();
  *(ulong ****)((long)ppcVar3 + -0xd0) = pppuVar14;
  *(undefined8 *)((long)ppcVar3 + -200) = 2;
  *(undefined1 **)((long)ppcVar3 + -0xc0) = (undefined1 *)((long)ppcVar3 + -0xa0);
  *(undefined **)((long)ppcVar3 + -0xb8) = &UNK_100468804;
  lVar6 = plVar4[1];
  lVar9 = plVar4[2];
  while (lVar9 != lVar6) {
    plVar4[2] = lVar9 + -8;
    plVar7 = *(long **)(lVar9 + -8);
    *(undefined8 *)(lVar9 + -8) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    lVar9 = plVar4[2];
  }
  if (*plVar4 != 0) {
    func_0x000107c60e14();
  }
  auVar29._8_8_ = pppuVar17;
  auVar29._0_8_ = plVar4;
  return auVar29;
}



/* Entry: 104a9f3dc; end: 104a9f533;  */

/* WARNING: Possible PIC construction at 0x000104a9f500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a9f504) */

undefined1  [16] FUN_104a9f3dc(ulong ***param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  ulong uVar2;
  char **ppcVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  ulong ***pppuVar9;
  long lVar10;
  ulong uVar11;
  ulong **ppuVar12;
  ulong ***pppuVar13;
  ulong uVar14;
  ulong ***pppuVar15;
  uint uVar16;
  ulong ***pppuVar17;
  uint uVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ***pppuVar19;
  code *pcVar20;
  ulong **ppuVar21;
  ulong **ppuVar22;
  ulong **ppuVar23;
  ulong **ppuVar24;
  ulong **ppuVar25;
  ulong **ppuVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_290 [16];
  ulong *puStack_280;
  ulong *puStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong *puStack_228;
  ulong *puStack_220;
  ulong *puStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  ulong *puStack_1e0;
  ulong *puStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  long lStack_178;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  char *pcStack_150;
  undefined1 uStack_141;
  byte abStack_140 [8];
  ulong **appuStack_138 [32];
  long lStack_38;
  
  ppcVar3 = &pcStack_150;
  pppuVar19 = (undefined8 ***)&stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = (ulong ***)(param_2 & 0xffffffff);
  func_0x000100744244(abStack_140,pppuVar9,&uStack_141);
  uVar16 = *(uint *)(param_1 + 1);
  uVar11 = (ulong)uVar16;
  uVar18 = (uint)param_2;
  if (uVar18 < uVar16) {
    pcStack_150 = "table_elems_ <= capacity";
    pcVar8 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder_table.cc"
    ;
    param_4 = "assertion failed: %s";
    pppuVar9 = (ulong ***)0x51;
    pcVar20 = (code *)0x104a9f504;
    goto code_r0x0001004686cc;
  }
  if (uVar16 != 0) {
    uVar16 = *(uint *)param_1;
    ppuVar12 = param_1[2];
    uVar14 = (ulong)ppuVar12 >> 1;
    do {
      uVar16 = uVar16 + 1;
      pppuVar17 = param_1 + 3;
      if (((ulong)ppuVar12 & 1) != 0) {
        pppuVar17 = (ulong ***)param_1[3];
      }
      uVar2 = 0;
      if (uVar14 != 0) {
        uVar2 = uVar16 / uVar14;
      }
      uVar1 = 0;
      if (uVar18 != 0) {
        uVar1 = uVar16 / uVar18;
      }
      pppuVar13 = appuStack_138;
      if ((abStack_140[0] & 1) != 0) {
        pppuVar13 = (ulong ***)appuStack_138[0];
      }
      *(undefined2 *)((long)pppuVar13 + (ulong)(uVar16 - uVar1 * uVar18) * 2) =
           *(undefined2 *)((long)pppuVar17 + ((ulong)uVar16 - uVar2 * uVar14) * 2);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  param_1 = param_1 + 2;
  if (param_1 != (ulong ***)abStack_140) {
    pppuVar9 = (ulong ***)abStack_140;
    FUN_104a9f534();
  }
  if ((abStack_140[0] & 1) != 0) {
    __ZdlPv();
    param_1 = (ulong ***)appuStack_138[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar30._8_8_ = pppuVar9;
    auVar30._0_8_ = param_1;
    return auVar30;
  }
  ___stack_chk_fail();
  pcVar8 = (char *)param_1;
  __Unwind_Resume();
  ppcVar3 = (char **)auStack_290;
  pcStack_158 = FUN_104a9f534;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = *pppuVar9;
  if (((ulong)*(ulong ***)pcVar8 & 1) == 0) {
    uVar11 = (ulong)ppuVar12 & 1;
    pppuVar17 = (ulong ***)pcVar8;
    pppuVar13 = pppuVar9;
    ppuVar12 = *(ulong ***)pcVar8;
    if (uVar11 == 0) {
      puStack_1b8 = *(ulong **)((long)pcVar8 + 0xd0);
      puStack_1c0 = *(ulong **)((long)pcVar8 + 200);
      puStack_1a8 = *(ulong **)((long)pcVar8 + 0xe0);
      puStack_1b0 = *(ulong **)((long)pcVar8 + 0xd8);
      puStack_198 = *(ulong **)((long)pcVar8 + 0xf0);
      puStack_1a0 = *(ulong **)((long)pcVar8 + 0xe8);
      puStack_188 = *(ulong **)((long)pcVar8 + 0x100);
      puStack_190 = *(ulong **)((long)pcVar8 + 0xf8);
      puStack_1f8 = *(ulong **)((long)pcVar8 + 0x90);
      puStack_200 = *(ulong **)((long)pcVar8 + 0x88);
      puStack_1e8 = *(ulong **)((long)pcVar8 + 0xa0);
      puStack_1f0 = *(ulong **)((long)pcVar8 + 0x98);
      puStack_1d8 = *(ulong **)((long)pcVar8 + 0xb0);
      puStack_1e0 = *(ulong **)((long)pcVar8 + 0xa8);
      puStack_1c8 = *(ulong **)((long)pcVar8 + 0xc0);
      puStack_1d0 = *(ulong **)((long)pcVar8 + 0xb8);
      puStack_238 = *(ulong **)((long)pcVar8 + 0x50);
      puStack_240 = *(ulong **)((long)pcVar8 + 0x48);
      puStack_228 = *(ulong **)((long)pcVar8 + 0x60);
      puStack_230 = *(ulong **)((long)pcVar8 + 0x58);
      puStack_218 = *(ulong **)((long)pcVar8 + 0x70);
      puStack_220 = *(ulong **)((long)pcVar8 + 0x68);
      puStack_208 = *(ulong **)((long)pcVar8 + 0x80);
      puStack_210 = *(ulong **)((long)pcVar8 + 0x78);
      puStack_278 = *(ulong **)((long)pcVar8 + 0x10);
      puStack_280 = *(ulong **)((long)pcVar8 + 8);
      puStack_268 = *(ulong **)((long)pcVar8 + 0x20);
      puStack_270 = *(ulong **)((long)pcVar8 + 0x18);
      puStack_258 = *(ulong **)((long)pcVar8 + 0x30);
      puStack_260 = *(ulong **)((long)pcVar8 + 0x28);
      puStack_248 = *(ulong **)((long)pcVar8 + 0x40);
      puStack_250 = *(ulong **)((long)pcVar8 + 0x38);
      ppuVar21 = pppuVar9[2];
      ppuVar12 = pppuVar9[1];
      ppuVar23 = pppuVar9[4];
      ppuVar22 = pppuVar9[3];
      ppuVar25 = pppuVar9[6];
      ppuVar24 = pppuVar9[5];
      ppuVar26 = pppuVar9[7];
      *(ulong ***)((long)pcVar8 + 0x40) = pppuVar9[8];
      *(ulong ***)((long)pcVar8 + 0x38) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0x30) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0x28) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0x20) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0x18) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0x10) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 8) = ppuVar12;
      ppuVar21 = pppuVar9[10];
      ppuVar12 = pppuVar9[9];
      ppuVar23 = pppuVar9[0xc];
      ppuVar22 = pppuVar9[0xb];
      ppuVar25 = pppuVar9[0xe];
      ppuVar24 = pppuVar9[0xd];
      ppuVar26 = pppuVar9[0xf];
      *(ulong ***)((long)pcVar8 + 0x80) = pppuVar9[0x10];
      *(ulong ***)((long)pcVar8 + 0x78) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0x70) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0x68) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0x60) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0x58) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0x50) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 0x48) = ppuVar12;
      ppuVar21 = pppuVar9[0x12];
      ppuVar12 = pppuVar9[0x11];
      ppuVar23 = pppuVar9[0x14];
      ppuVar22 = pppuVar9[0x13];
      ppuVar25 = pppuVar9[0x16];
      ppuVar24 = pppuVar9[0x15];
      ppuVar26 = pppuVar9[0x17];
      *(ulong ***)((long)pcVar8 + 0xc0) = pppuVar9[0x18];
      *(ulong ***)((long)pcVar8 + 0xb8) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0xb0) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0xa8) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0xa0) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0x98) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0x90) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 0x88) = ppuVar12;
      ppuVar21 = pppuVar9[0x1a];
      ppuVar12 = pppuVar9[0x19];
      ppuVar23 = pppuVar9[0x1c];
      ppuVar22 = pppuVar9[0x1b];
      ppuVar25 = pppuVar9[0x1e];
      ppuVar24 = pppuVar9[0x1d];
      ppuVar26 = pppuVar9[0x1f];
      *(ulong ***)((long)pcVar8 + 0x100) = pppuVar9[0x20];
      *(ulong ***)((long)pcVar8 + 0xf8) = ppuVar26;
      *(ulong ***)((long)pcVar8 + 0xf0) = ppuVar25;
      *(ulong ***)((long)pcVar8 + 0xe8) = ppuVar24;
      *(ulong ***)((long)pcVar8 + 0xe0) = ppuVar23;
      *(ulong ***)((long)pcVar8 + 0xd8) = ppuVar22;
      *(ulong ***)((long)pcVar8 + 0xd0) = ppuVar21;
      *(ulong ***)((long)pcVar8 + 200) = ppuVar12;
      pppuVar9[0x1a] = (ulong **)puStack_1b8;
      pppuVar9[0x19] = (ulong **)puStack_1c0;
      pppuVar9[0x1c] = (ulong **)puStack_1a8;
      pppuVar9[0x1b] = (ulong **)puStack_1b0;
      pppuVar9[0x1e] = (ulong **)puStack_198;
      pppuVar9[0x1d] = (ulong **)puStack_1a0;
      pppuVar9[0x20] = (ulong **)puStack_188;
      pppuVar9[0x1f] = (ulong **)puStack_190;
      pppuVar9[0x12] = (ulong **)puStack_1f8;
      pppuVar9[0x11] = (ulong **)puStack_200;
      pppuVar9[0x14] = (ulong **)puStack_1e8;
      pppuVar9[0x13] = (ulong **)puStack_1f0;
      pppuVar9[0x16] = (ulong **)puStack_1d8;
      pppuVar9[0x15] = (ulong **)puStack_1e0;
      pppuVar9[0x18] = (ulong **)puStack_1c8;
      pppuVar9[0x17] = (ulong **)puStack_1d0;
      pppuVar9[10] = (ulong **)puStack_238;
      pppuVar9[9] = (ulong **)puStack_240;
      pppuVar9[0xc] = (ulong **)puStack_228;
      pppuVar9[0xb] = (ulong **)puStack_230;
      pppuVar9[0xe] = (ulong **)puStack_218;
      pppuVar9[0xd] = (ulong **)puStack_220;
      pppuVar9[0x10] = (ulong **)puStack_208;
      pppuVar9[0xf] = (ulong **)puStack_210;
      pppuVar9[2] = (ulong **)puStack_278;
      pppuVar9[1] = (ulong **)puStack_280;
      pppuVar9[4] = (ulong **)puStack_268;
      pppuVar9[3] = (ulong **)puStack_270;
      pppuVar9[6] = (ulong **)puStack_258;
      pppuVar9[5] = (ulong **)puStack_260;
      pppuVar9[8] = (ulong **)puStack_248;
      pppuVar9[7] = (ulong **)puStack_250;
    }
    else {
LAB_104a9f6c4:
      ppuVar21 = pppuVar13[1];
      ppuVar22 = pppuVar13[2];
      if ((ulong **)0x1 < ppuVar12) {
        uVar11 = (ulong)ppuVar12 >> 1;
        pppuVar13 = pppuVar13 + 1;
        pppuVar15 = pppuVar17 + 1;
        do {
          *(undefined2 *)pppuVar13 = *(undefined2 *)pppuVar15;
          uVar11 = uVar11 - 1;
          pppuVar13 = (ulong ***)((long)pppuVar13 + 2);
          pppuVar15 = (ulong ***)((long)pppuVar15 + 2);
        } while (uVar11 != 0);
      }
      pppuVar17[1] = ppuVar21;
      pppuVar17[2] = ppuVar22;
    }
  }
  else {
    pppuVar17 = pppuVar9;
    pppuVar13 = (ulong ***)pcVar8;
    if (((ulong)ppuVar12 & 1) == 0) goto LAB_104a9f6c4;
    ppuVar21 = *(ulong ***)((long)pcVar8 + 0x10);
    ppuVar12 = *(ulong ***)((long)pcVar8 + 8);
    ppuVar22 = pppuVar9[1];
    *(ulong ***)((long)pcVar8 + 0x10) = pppuVar9[2];
    *(ulong ***)((long)pcVar8 + 8) = ppuVar22;
    pppuVar9[2] = ppuVar21;
    pppuVar9[1] = ppuVar12;
  }
  ppuVar12 = *(ulong ***)pcVar8;
  *(ulong ***)pcVar8 = *pppuVar9;
  *pppuVar9 = ppuVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    auVar31._8_8_ = pppuVar9;
    auVar31._0_8_ = pcVar8;
    return auVar31;
  }
  pcVar20 = FUN_104a9f73c;
  ppuStack_160 = pppuVar19;
  ___stack_chk_fail();
  pppuVar19 = &ppuStack_160;
code_r0x0001004686cc:
  *(undefined8 *)((long)ppcVar3 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppcVar3 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppcVar3 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppcVar3 + -0x28) = unaff_x21;
  *(ulong *)((long)ppcVar3 + -0x20) = param_2;
  *(ulong ****)((long)ppcVar3 + -0x18) = param_1;
  *(undefined8 ****)((long)ppcVar3 + -0x10) = pppuVar19;
  *(code **)((long)ppcVar3 + -8) = pcVar20;
  *(undefined8 *)((long)ppcVar3 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x2;
  pppuVar17 = pppuVar9;
  func_0x0001004686b8();
  if ((int)plVar4 != 0) {
    *(char ***)((long)ppcVar3 + -0x90) = ppcVar3;
    puVar5 = (undefined1 *)((long)ppcVar3 + -0x88);
    func_0x000107c616d0(puVar5,0x40,param_4,ppcVar3);
    if ((int)(uint)puVar5 < 0) {
      plVar7 = (long *)0x0;
      plVar4 = (long *)0x0;
    }
    else if ((uint)puVar5 < 0x40) {
      plVar4 = (long *)0x0;
      plVar7 = (long *)((long)ppcVar3 + -0x88);
    }
    else {
      plVar4 = (long *)(((ulong)puVar5 & 0xffffffff) + 1);
      func_0x000100460200();
      *(char ***)((long)ppcVar3 + -0x90) = ppcVar3;
      func_0x000107c616d0();
      plVar7 = plVar4;
    }
    pppuVar17 = pppuVar9;
    FUN_104a6e9e0(pcVar8,pppuVar9,2,plVar7);
    func_0x000100460314();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppcVar3 + -0x48)) {
    auVar27._8_8_ = pppuVar17;
    auVar27._0_8_ = plVar4;
    return auVar27;
  }
  func_0x000107c60e78();
  *(ulong ****)((long)ppcVar3 + -0xb0) = pppuVar9;
  *(undefined8 *)((long)ppcVar3 + -0xa8) = 2;
  *(undefined1 **)((long)ppcVar3 + -0xa0) = (undefined1 *)((long)ppcVar3 + -0x10);
  *(undefined **)((long)ppcVar3 + -0x98) = &UNK_1004687d0;
  if ((ulong)pppuVar17 >> 0x3d == 0) {
    lVar6 = (long)pppuVar17 << 3;
    func_0x000107c60e20(lVar6);
    auVar28._8_8_ = pppuVar17;
    auVar28._0_8_ = lVar6;
    return auVar28;
  }
  FUN_104a7757c();
  *(ulong ****)((long)ppcVar3 + -0xd0) = pppuVar9;
  *(undefined8 *)((long)ppcVar3 + -200) = 2;
  *(undefined1 **)((long)ppcVar3 + -0xc0) = (undefined1 *)((long)ppcVar3 + -0xa0);
  *(undefined **)((long)ppcVar3 + -0xb8) = &UNK_100468804;
  lVar6 = plVar4[1];
  lVar10 = plVar4[2];
  while (lVar10 != lVar6) {
    plVar4[2] = lVar10 + -8;
    plVar7 = *(long **)(lVar10 + -8);
    *(undefined8 *)(lVar10 + -8) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    lVar10 = plVar4[2];
  }
  if (*plVar4 != 0) {
    func_0x000107c60e14();
  }
  auVar29._8_8_ = pppuVar17;
  auVar29._0_8_ = plVar4;
  return auVar29;
}



/* Entry: 104a9f534; end: 104a9f73b;  */

undefined1  [16] FUN_104a9f534(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long alStack_1c8 [8];
  long lStack_188;
  undefined1 auStack_140 [16];
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_2;
  if ((*param_1 & 1) == 0) {
    uVar9 = uVar7 & 1;
    puVar4 = param_1;
    puVar6 = param_2;
    uVar7 = *param_1;
    if (uVar9 == 0) {
      uStack_68 = param_1[0x1a];
      uStack_70 = param_1[0x19];
      uStack_58 = param_1[0x1c];
      uStack_60 = param_1[0x1b];
      uStack_48 = param_1[0x1e];
      uStack_50 = param_1[0x1d];
      uStack_38 = param_1[0x20];
      uStack_40 = param_1[0x1f];
      uStack_a8 = param_1[0x12];
      uStack_b0 = param_1[0x11];
      uStack_98 = param_1[0x14];
      uStack_a0 = param_1[0x13];
      uStack_88 = param_1[0x16];
      uStack_90 = param_1[0x15];
      uStack_78 = param_1[0x18];
      uStack_80 = param_1[0x17];
      uStack_e8 = param_1[10];
      uStack_f0 = param_1[9];
      uStack_d8 = param_1[0xc];
      uStack_e0 = param_1[0xb];
      uStack_c8 = param_1[0xe];
      uStack_d0 = param_1[0xd];
      uStack_b8 = param_1[0x10];
      uStack_c0 = param_1[0xf];
      uStack_128 = param_1[2];
      uStack_130 = param_1[1];
      uStack_118 = param_1[4];
      uStack_120 = param_1[3];
      uStack_108 = param_1[6];
      uStack_110 = param_1[5];
      uStack_f8 = param_1[8];
      uStack_100 = param_1[7];
      uVar9 = param_2[2];
      uVar7 = param_2[1];
      uVar11 = param_2[4];
      uVar10 = param_2[3];
      uVar13 = param_2[6];
      uVar12 = param_2[5];
      uVar14 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar14;
      param_1[6] = uVar13;
      param_1[5] = uVar12;
      param_1[4] = uVar11;
      param_1[3] = uVar10;
      param_1[2] = uVar9;
      param_1[1] = uVar7;
      uVar9 = param_2[10];
      uVar7 = param_2[9];
      uVar11 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar13 = param_2[0xe];
      uVar12 = param_2[0xd];
      uVar14 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar14;
      param_1[0xe] = uVar13;
      param_1[0xd] = uVar12;
      param_1[0xc] = uVar11;
      param_1[0xb] = uVar10;
      param_1[10] = uVar9;
      param_1[9] = uVar7;
      uVar9 = param_2[0x12];
      uVar7 = param_2[0x11];
      uVar11 = param_2[0x14];
      uVar10 = param_2[0x13];
      uVar13 = param_2[0x16];
      uVar12 = param_2[0x15];
      uVar14 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar14;
      param_1[0x16] = uVar13;
      param_1[0x15] = uVar12;
      param_1[0x14] = uVar11;
      param_1[0x13] = uVar10;
      param_1[0x12] = uVar9;
      param_1[0x11] = uVar7;
      uVar9 = param_2[0x1a];
      uVar7 = param_2[0x19];
      uVar11 = param_2[0x1c];
      uVar10 = param_2[0x1b];
      uVar13 = param_2[0x1e];
      uVar12 = param_2[0x1d];
      uVar14 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar14;
      param_1[0x1e] = uVar13;
      param_1[0x1d] = uVar12;
      param_1[0x1c] = uVar11;
      param_1[0x1b] = uVar10;
      param_1[0x1a] = uVar9;
      param_1[0x19] = uVar7;
      param_2[0x1a] = uStack_68;
      param_2[0x19] = uStack_70;
      param_2[0x1c] = uStack_58;
      param_2[0x1b] = uStack_60;
      param_2[0x1e] = uStack_48;
      param_2[0x1d] = uStack_50;
      param_2[0x20] = uStack_38;
      param_2[0x1f] = uStack_40;
      param_2[0x12] = uStack_a8;
      param_2[0x11] = uStack_b0;
      param_2[0x14] = uStack_98;
      param_2[0x13] = uStack_a0;
      param_2[0x16] = uStack_88;
      param_2[0x15] = uStack_90;
      param_2[0x18] = uStack_78;
      param_2[0x17] = uStack_80;
      param_2[10] = uStack_e8;
      param_2[9] = uStack_f0;
      param_2[0xc] = uStack_d8;
      param_2[0xb] = uStack_e0;
      param_2[0xe] = uStack_c8;
      param_2[0xd] = uStack_d0;
      param_2[0x10] = uStack_b8;
      param_2[0xf] = uStack_c0;
      param_2[2] = uStack_128;
      param_2[1] = uStack_130;
      param_2[4] = uStack_118;
      param_2[3] = uStack_120;
      param_2[6] = uStack_108;
      param_2[5] = uStack_110;
      param_2[8] = uStack_f8;
      param_2[7] = uStack_100;
      goto LAB_104a9f700;
    }
  }
  else {
    puVar4 = param_2;
    puVar6 = param_1;
    if ((uVar7 & 1) != 0) {
      uVar9 = param_1[2];
      uVar7 = param_1[1];
      uVar10 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar10;
      param_2[2] = uVar9;
      param_2[1] = uVar7;
      goto LAB_104a9f700;
    }
  }
  uVar9 = puVar6[1];
  uVar10 = puVar6[2];
  if (1 < uVar7) {
    uVar7 = uVar7 >> 1;
    puVar6 = puVar6 + 1;
    puVar8 = puVar4 + 1;
    do {
      *(short *)puVar6 = (short)*puVar8;
      uVar7 = uVar7 - 1;
      puVar6 = (ulong *)((long)puVar6 + 2);
      puVar8 = (ulong *)((long)puVar8 + 2);
    } while (uVar7 != 0);
  }
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
LAB_104a9f700:
  uVar7 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  ___stack_chk_fail();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  puVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_1c8;
    func_0x000107c616d0(plVar1,0x40,param_4,auStack_140);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_1c8;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    puVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    auVar15._8_8_ = puVar4;
    auVar15._0_8_ = plVar1;
    return auVar15;
  }
  func_0x000107c60e78();
  if ((ulong)puVar4 >> 0x3d == 0) {
    lVar2 = (long)puVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar16._8_8_ = puVar4;
    auVar16._0_8_ = lVar2;
    return auVar16;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar17._8_8_ = puVar4;
  auVar17._0_8_ = plVar1;
  return auVar17;
}



/* Entry: 104a9f73c; end: 104a9f743;  */

undefined1  [16]
FUN_104a9f73c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a9f744; end: 104a9f817;  */

char * FUN_104a9f744(undefined8 *param_1,long *param_2)

{
  int iVar1;
  char *pcVar2;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pcVar2 = (char *)&lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (long *)0x0) {
LAB_104a9f7f8:
    pcVar2 = "return Slice()";
    FUN_104a6e964("return Slice()",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                  ,0x4e8);
  }
  else {
    iVar1 = (int)param_2[4];
    if (iVar1 == 2) {
      pcVar2 = (char *)*param_2;
      func_0x0001004b6808(&uStack_48,pcVar2,param_2[1] - (long)pcVar2);
    }
    else if (iVar1 == 1) {
      pcVar2 = (char *)*param_2;
      func_0x0001004b6808(&uStack_48,pcVar2,param_2[1]);
    }
    else {
      if (iVar1 != 0) goto LAB_104a9f7f8;
      lStack_68 = param_2[1];
      lStack_70 = *param_2;
      lStack_58 = param_2[3];
      lStack_60 = param_2[2];
      func_0x0001004bcbf4(&uStack_48);
    }
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return pcVar2;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_104aa6dc8(pcVar2 + 0x38);
  if (*(long *)(pcVar2 + 8) != 0) {
    *(long *)(pcVar2 + 0x10) = *(long *)(pcVar2 + 8);
    __ZdlPv();
  }
  return pcVar2;
}



/* Entry: 104a9f818; end: 104a9f84f;  */

long FUN_104a9f818(long param_1)

{
  FUN_104aa6dc8(param_1 + 0x38);
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104a9f850; end: 104a9f873;  */

long FUN_104a9f850(long param_1)

{
  FUN_104aa6dc8(param_1 + 0x38);
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104a9f874; end: 104a9f9cb;  */

void FUN_104a9f874(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = *(long *)(param_2 + 8);
  lStack_40 = *(long *)(param_2 + 0x10);
  if (lStack_48 == lStack_40) {
    lStack_a8 = *param_3;
    lStack_a0 = (long)param_3 + 9;
    if (lStack_a8 != 0) {
      lStack_a0 = param_3[2];
    }
    uVar2 = param_3[1] & 0xff;
    if (lStack_a8 != 0) {
      uVar2 = param_3[1];
    }
    lStack_98 = lStack_a0 + uVar2;
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_90 = lStack_a0;
    FUN_104a9f9cc(param_1,param_2,&lStack_a8,param_4);
    if ((uStack_88 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    lVar1 = (long)param_3 + 9;
    if (*param_3 != 0) {
      lVar1 = param_3[2];
    }
    uVar2 = param_3[1] & 0xff;
    if (*param_3 != 0) {
      uVar2 = param_3[1];
    }
    FUN_104aa66dc(&lStack_48,lStack_40,lVar1,lVar1 + uVar2);
    uStack_78 = 0;
    lStack_70 = lStack_48;
    lStack_68 = lStack_40;
    lStack_60 = lStack_48;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_104a9f9cc(param_1,param_2,&uStack_78,param_4);
    FUN_104a9fad8(&uStack_78);
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 104a9f9cc; end: 104a9fad7;  */

void FUN_104a9f9cc(ulong *param_1,long param_2,long param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  lVar3 = param_2;
  FUN_104a9fb08();
  if ((int)lVar3 == 0) {
    if (*(char *)(param_3 + 0x28) == '\0') {
      uVar4 = *(ulong *)(param_3 + 0x20);
      *param_1 = uVar4;
      if ((uVar4 & 1) != 0) {
        piVar5 = (int *)(uVar4 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar4 = *(ulong *)(param_3 + 0x20);
      }
      if ((uVar4 != 0) && (*(undefined8 *)(param_3 + 0x20) = 0, (uVar4 & 1) != 0)) {
        func_0x00010084dad0(uVar4);
      }
      return;
    }
    if ((param_4 != 0) && (*(char *)(param_2 + 0x20) != '\0')) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      FUN_104ab5920(param_1,2,"Incomplete header at the end of a header/continuation sequence",0x3e,
                    &uStack_31,&uStack_50);
      puStack_70 = &uStack_50;
      func_0x000100482b64(&puStack_70);
      return;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_70 = (undefined8 *)0x0;
    FUN_104aa68c4(&puStack_70,*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10),
                  *(long *)(param_3 + 0x10) - *(long *)(param_3 + 0x18));
    lVar3 = *(long *)(param_2 + 8);
    if (lVar3 != 0) {
      *(long *)(param_2 + 0x10) = lVar3;
      __ZdlPv();
      *(long *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = uStack_68;
    *(undefined8 **)(param_2 + 8) = puStack_70;
    *(undefined8 *)(param_2 + 0x18) = uStack_60;
  }
  *param_1 = 0;
  return;
}



/* Entry: 104a9fad8; end: 104a9fb07;  */

long FUN_104a9fad8(long param_1)

{
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a9fb08; end: 104a9fbeb;  */

void FUN_104a9fb08(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    lVar2 = *(long *)(param_2 + 0x10);
    if ((ulong)(lVar2 - *(long *)(param_2 + 8)) < 5) {
      if (*(long *)(param_2 + 0x20) != 0) {
        return;
      }
      *(undefined1 *)(param_2 + 0x28) = 1;
      return;
    }
    lVar3 = *(long *)(param_2 + 8) + 5;
    *(long *)(param_2 + 8) = lVar3;
    *(long *)(param_2 + 0x18) = lVar3;
    *(undefined1 *)((long)param_1 + 0x21) = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
  }
  if (lVar3 != lVar2) {
    do {
      uStack_70 = *param_1;
      uStack_50 = *(undefined4 *)(param_1 + 5);
      uStack_4c = *(undefined8 *)((long)param_1 + 0x2c);
      iVar1 = (int)&lStack_78;
      lStack_78 = param_2;
      puStack_68 = param_1 + 7;
      lStack_60 = (long)param_1 + 0x22;
      lStack_58 = (long)param_1 + 0x24;
      FUN_104a9fc6c();
      if (iVar1 == 0) {
        return;
      }
      *(long *)(param_2 + 0x18) = *(long *)(param_2 + 8);
    } while (*(long *)(param_2 + 8) != *(long *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 104a9fbec; end: 104a9fc6b;  */

void FUN_104a9fbec(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *(ulong *)(param_2 + 0x20);
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *(ulong *)(param_2 + 0x20);
  }
  if (uVar3 != 0) {
    *(undefined8 *)(param_2 + 0x20) = 0;
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0(uVar3);
    }
  }
  return;
}



/* Entry: 104a9fc6c; end: 104aa013b;  */

/* WARNING: Type propagation algorithm not settling */

mach_header *
FUN_104a9fc6c(mach_header *param_1,mach_header *param_2,long param_3,long *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  mach_header *pmVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  mach_header *pmVar9;
  long *plVar10;
  ulong uVar11;
  code *pcVar12;
  ulong *extraout_x8;
  int *piVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong auStack_230 [5];
  undefined1 uStack_201;
  mach_header *pmStack_200;
  ulong *puStack_1f8;
  undefined1 auStack_1b0 [48];
  char cStack_180;
  undefined1 auStack_178 [48];
  char cStack_148;
  undefined1 auStack_140 [48];
  char cStack_110;
  undefined1 auStack_108 [48];
  char cStack_d8;
  undefined1 auStack_d0 [48];
  byte bStack_a0;
  undefined1 auStack_98 [48];
  char cStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong in_stack_ffffffffffffffd0;
  
  pmVar9 = (mach_header *)auStack_1b0;
  uVar11 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  pmVar5 = *(mach_header **)param_1;
  pbVar1 = *(byte **)&pmVar5->cpusubtype;
  if (pbVar1 == *(byte **)&pmVar5->ncmds) {
    lVar17._0_4_ = pmVar5[1].magic;
    lVar17._4_4_ = pmVar5[1].cputype;
    pmVar9 = param_2;
    if (lVar17 == 0) {
      *(undefined1 *)&pmVar5[1].cpusubtype = 1;
    }
LAB_104a9fd0c:
    pmVar5 = param_1;
    FUN_104aa03e0(auStack_60);
    if ((char)in_stack_ffffffffffffffd0 == '\0') goto LAB_104a9ff7c;
    param_2 = (mach_header *)auStack_60;
    FUN_104aa0e30();
    pcVar12 = (code *)(in_stack_ffffffffffffffd0 & 0xff);
    pmVar5 = param_1;
code_r0x000104a9fd34:
    pmVar9 = param_2;
    if ((int)pcVar12 != 0) {
      pcVar12 = *(code **)(auStack_60._0_8_ + 8);
      pmVar5 = (mach_header *)(auStack_60 + 8);
      param_2 = pmVar9;
      goto code_r0x000104a9fd48;
    }
    goto LAB_104a9ff80;
  }
  *(byte **)&pmVar5->cpusubtype = pbVar1 + 1;
  bVar2 = *pbVar1;
  pcVar12 = (code *)(ulong)bVar2;
  uVar16 = (uint)bVar2;
  switch(bVar2 >> 4) {
  case 0:
  case 1:
    pmVar9 = (mach_header *)(ulong)(uVar16 & 0xf);
    param_2 = pmVar9;
    if ((uVar16 & 0xf) != 0xf) goto code_r0x000104a9fd5c;
    pmVar5 = param_1;
    FUN_104aa0650(auStack_98);
    if (cStack_68 != '\0') {
      pmVar9 = (mach_header *)auStack_98;
      FUN_104aa0e30();
      pmVar5 = param_1;
      if (cStack_68 != '\0') {
        pmVar5 = (mach_header *)(auStack_98 + 8);
        (**(code **)(auStack_98._0_8_ + 8))();
      }
      break;
    }
    goto LAB_104a9ff7c;
  case 2:
code_r0x000104a9fe08:
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uVar11) {
      pmVar5 = &MACH_HEADER;
      goto code_r0x000104a9fe28;
    }
    goto LAB_104a9ffec;
  case 3:
    if (uVar16 != 0x3f) goto code_r0x000104a9fe08;
    param_2 = (mach_header *)0x1f;
    FUN_104aa09ac();
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uVar11) goto LAB_104a9ffec;
code_r0x000104a9fe28:
    if (((ulong)pmVar5 & 0xff00000000) == 0) {
      return (mach_header *)0x0;
    }
    cVar3 = **(char **)&param_1->flags;
    if (cVar3 != '\0') {
      **(char **)&param_1->flags = cVar3 + -1;
      uVar7._0_4_ = param_1->ncmds;
      uVar7._4_4_ = param_1->sizeofcmds;
      FUN_104aa6ef4(&stack0xffffffffffffffd8,uVar7);
      if (uVar11 != 0) {
        lVar8._0_4_ = param_1->magic;
        lVar8._4_4_ = param_1->cputype;
        if ((uVar11 & 1) != 0) {
          piVar13 = (int *)(uVar11 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_104aa6354(lVar8,&stack0xffffffffffffffd0);
        if ((uVar11 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if ((uVar11 & 1) == 0) {
        return (mach_header *)(ulong)(uVar11 == 0);
      }
      func_0x00010084dad0();
      return (mach_header *)(ulong)(uVar11 == 0);
    }
    lVar17 = *(long *)param_1;
    if (*(long *)(lVar17 + 0x20) != 0) {
      return (mach_header *)0x0;
    }
    if (*(char *)(lVar17 + 0x28) != '\0') {
      return (mach_header *)0x0;
    }
    uStack_50._0_4_ = 0;
    uStack_50._4_4_ = 0;
    uStack_48._0_4_ = 0;
    uStack_48._4_4_ = 0;
    auStack_60._8_4_ = 0;
    auStack_60._12_4_ = 0;
    FUN_104ab5920(auStack_60,2,"More than two max table size changes in a single frame",0x36,
                  (long)&uStack_40 + 7,auStack_60 + 8);
    uStack_38 = auStack_60 + 8;
    func_0x000100482b64(&uStack_38);
    uVar11 = *(ulong *)(lVar17 + 0x20);
    if (auStack_60._0_8_ != uVar11) {
      *(undefined8 *)(lVar17 + 0x20) = auStack_60._0_8_;
      auStack_60._0_8_ = 0x36;
      if ((uVar11 & 1) == 0) goto LAB_104aa6308;
      func_0x00010084dad0();
      uVar11 = auStack_60._0_8_;
    }
    if ((uVar11 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104aa6308:
    *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(lVar17 + 0x10);
    return (mach_header *)0x0;
  case 4:
    if (uVar16 != 0x40) goto code_r0x000104a9fe80;
    pcVar12 = (code *)auStack_108;
    pmVar5 = param_1;
  case 0x6c:
  case 0x6e:
  case 0x70:
  case 0x72:
  case 0x80:
  case 0x82:
  case 0x9a:
    FUN_104aa03e0(pcVar12,pmVar5);
    param_2 = (mach_header *)auStack_108;
code_r0x000104a9fe54:
    FUN_104aa0b64();
    pmVar5 = param_1;
code_r0x000104a9fe5c:
    pmVar9 = param_2;
    param_2 = pmVar9;
    pcVar12 = (code *)auStack_108._0_8_;
    param_1 = pmVar5;
    if (cStack_d8 != '\0') {
code_r0x000104a9fe6c:
      pmVar9 = param_2;
      pmVar5 = (mach_header *)(auStack_108 + 8);
      (**(code **)(pcVar12 + 8))();
    }
    break;
  case 5:
  case 6:
code_r0x000104a9fe80:
    param_2 = (mach_header *)(ulong)(uVar16 & 0x3f);
  case 0x90:
  case 0x92:
  case 0xa2:
  case 0xec:
  case 0xee:
  case 0xf0:
  case 0xf2:
    FUN_104aa06a0(auStack_140,param_1,param_2);
    param_2 = (mach_header *)auStack_140;
code_r0x000104a9fe94:
    pmVar5 = param_1;
code_r0x000104a9fe98:
    pmVar9 = param_2;
    FUN_104aa0b64();
    param_1 = pmVar5;
    if (cStack_110 != '\0') {
      pmVar5 = (mach_header *)(auStack_140 + 8);
      (**(code **)(auStack_140._0_8_ + 8))();
    }
    break;
  case 7:
    if (uVar16 == 0x7f) {
      FUN_104aa0650(auStack_178,param_1,0x3f);
      pmVar9 = (mach_header *)auStack_178;
      FUN_104aa0b64();
      pmVar5 = param_1;
      if (cStack_148 != '\0') {
        pmVar5 = (mach_header *)(auStack_178 + 8);
        (**(code **)(auStack_178._0_8_ + 8))();
      }
    }
    else {
      FUN_104aa06a0(auStack_1b0,param_1,uVar16 & 0x3f);
      FUN_104aa0b64();
      pmVar5 = param_1;
      if (cStack_180 != '\0') {
        pmVar5 = (mach_header *)(auStack_1b0 + 8);
        (**(code **)(auStack_1b0._0_8_ + 8))();
      }
    }
    break;
  case 8:
    if (uVar16 != 0x80) goto code_r0x000104a9fcc8;
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uVar11) {
      lVar14._0_4_ = pmVar5[1].magic;
      lVar14._4_4_ = pmVar5[1].cputype;
      if (lVar14 != 0) {
        return (mach_header *)0x0;
      }
      if ((char)pmVar5[1].cpusubtype != '\0') {
        return (mach_header *)0x0;
      }
      uStack_50._0_4_ = 0;
      uStack_50._4_4_ = 0;
      uStack_48._0_4_ = 0;
      uStack_48._4_4_ = 0;
      auStack_60._8_4_ = 0;
      auStack_60._12_4_ = 0;
      FUN_104ab5920(auStack_60,2,"Illegal hpack op code",0x15,(long)&uStack_40 + 7,auStack_60 + 8);
      uStack_38 = auStack_60 + 8;
      func_0x000100482b64(&uStack_38);
      uVar11._0_4_ = pmVar5[1].magic;
      uVar11._4_4_ = pmVar5[1].cputype;
      if (auStack_60._0_8_ != uVar11) {
        pmVar5[1].magic = auStack_60._0_4_;
        pmVar5[1].cputype = auStack_60._4_4_;
        auStack_60._0_8_ = 0x36;
        if ((uVar11 & 1) == 0) goto LAB_104aa0d50;
        func_0x00010084dad0();
        uVar11 = auStack_60._0_8_;
      }
      if ((uVar11 & 1) != 0) {
        func_0x00010084dad0();
      }
LAB_104aa0d50:
      pmVar5->cpusubtype = pmVar5->ncmds;
      pmVar5->filetype = pmVar5->sizeofcmds;
      return (mach_header *)0x0;
    }
    goto LAB_104a9ffec;
  default:
code_r0x000104a9fcc8:
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uVar11) {
      param_2 = &MACH_HEADER;
      goto code_r0x000104a9fce4;
    }
    goto LAB_104a9ffec;
  case 0xf:
    if (uVar16 != 0xff) goto code_r0x000104a9fcc8;
    param_2 = (mach_header *)0x7f;
    FUN_104aa09ac();
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uVar11) goto LAB_104a9ffec;
    goto code_r0x000104a9fce8;
  case 0x11:
code_r0x000104a9fd74:
    param_2 = (mach_header *)auStack_d0;
    FUN_104aa0e30();
    pcVar12 = (code *)(ulong)bStack_a0;
    pmVar5 = param_1;
  case 0x34:
  case 0x36:
  case 0x38:
  case 0x3a:
  case 0x3c:
  case 0x3e:
  case 0x40:
  case 0x42:
  case 0x54:
  case 0x56:
  case 0x58:
  case 0x5a:
  case 0x74:
  case 0x76:
  case 0x94:
    pmVar9 = param_2;
    param_2 = pmVar9;
    if ((int)pcVar12 != 0) {
code_r0x000104a9fd8c:
      pcVar12 = (code *)auStack_d0._0_8_;
      goto code_r0x000104a9fd90;
    }
    break;
  case 0x12:
code_r0x000104a9fce4:
    pmVar5 = (mach_header *)((ulong)param_2 & 0xffffffffffffff80 | (ulong)pcVar12 & 0x7f);
code_r0x000104a9fce8:
    **(undefined1 **)&param_1->flags = 0;
    if (((ulong)pmVar5 & 0xff00000000) == 0) {
      return (mach_header *)0x0;
    }
    uVar16 = (uint)pmVar5;
    if (uVar16 < 0x3e) {
      plVar10 = (long *)(*(long *)(*(long *)&param_1->ncmds + 0x38) + (ulong)(uVar16 - 1) * 0x30);
    }
    else {
      plVar10 = (long *)(*(long *)&param_1->ncmds + 0x10);
      FUN_104aa6be8(plVar10,uVar16 - 0x3e);
    }
    if (plVar10 != (long *)0x0) {
      lVar15._0_4_ = param_1->cpusubtype;
      lVar15._4_4_ = param_1->filetype;
      if (lVar15 == 0) {
        return (mach_header *)0x1;
      }
      uVar16 = **(uint **)(param_1 + 1) + (int)plVar10[5];
      **(uint **)(param_1 + 1) = uVar16;
      if (uVar16 <= param_1[1].cpusubtype) {
        (**(code **)(*plVar10 + 0x10))(plVar10 + 1,lVar15);
        return (mach_header *)0x1;
      }
      uVar16 = **(uint **)(param_1 + 1);
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                          ,0x4bf,0,
                          "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
                         );
      lVar17 = *(long *)&param_1->cpusubtype;
      if (lVar17 != 0) {
        func_0x00010083228c(lVar17);
        func_0x0001004e2b40(lVar17 + 0x1f0);
      }
      lVar17 = *(long *)param_1;
      if (*(long *)(lVar17 + 0x20) != 0) {
        return (mach_header *)0x0;
      }
      if (*(char *)(lVar17 + 0x28) != '\0') {
        return (mach_header *)0x0;
      }
      uStack_48._0_4_ = 0;
      uStack_48._4_4_ = 0;
      uStack_40 = 0;
      uStack_50._0_4_ = 0;
      uStack_50._4_4_ = 0;
      FUN_104ab5920(&stack0xffffffffffffffd0,2,"received initial metadata size exceeds limit",0x2c,
                    (long)&uStack_38 + 7,&uStack_50);
      FUN_104abaa50(auStack_60 + 8,&stack0xffffffffffffffd0,3,8);
      if ((uVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x000100482b64(&stack0xffffffffffffffd8);
      uVar11 = *(ulong *)(lVar17 + 0x20);
      if (auStack_60._8_8_ != uVar11) {
        *(undefined8 *)(lVar17 + 0x20) = auStack_60._8_8_;
        auStack_60._8_8_ = 0x36;
        if ((uVar11 & 1) == 0) goto LAB_104aa0fa8;
        func_0x00010084dad0();
        uVar11 = auStack_60._8_8_;
      }
      if ((uVar11 & 1) != 0) {
        func_0x00010084dad0();
      }
LAB_104aa0fa8:
      *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(lVar17 + 0x10);
      return (mach_header *)0x0;
    }
    lVar17 = *(long *)param_1;
    if (*(long *)(lVar17 + 0x20) != 0) {
      return (mach_header *)0x0;
    }
    if (*(char *)(lVar17 + 0x28) != '\0') {
      return (mach_header *)0x0;
    }
    FUN_104aa65e8(&uStack_38,&stack0xffffffffffffffd0);
    uVar11 = *(ulong *)(lVar17 + 0x20);
    if (uStack_38 != (undefined1 *)uVar11) {
      *(undefined1 **)(lVar17 + 0x20) = uStack_38;
      uStack_38 = (undefined1 *)0x36;
      if ((uVar11 & 1) == 0) goto LAB_104aa65b4;
      func_0x00010084dad0();
      uVar11 = (ulong)uStack_38;
    }
    if ((uVar11 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104aa65b4:
    *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(lVar17 + 0x10);
    return (mach_header *)0x0;
  case 0x13:
    goto code_r0x000104a9fd34;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
    goto LAB_104aa0134;
  case 0x44:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4c:
  case 0x4e:
  case 0x50:
  case 0x52:
  case 0x5c:
  case 0x5e:
  case 0x60:
  case 0x62:
  case 0x78:
  case 0x7a:
  case 0x96:
    goto code_r0x000104a9fd8c;
  case 100:
  case 0x66:
  case 0x68:
  case 0x6a:
  case 0x7c:
  case 0x7e:
  case 0x98:
    goto code_r0x000104a9fd90;
  case 0x84:
  case 0x86:
  case 0x9c:
  case 0xd4:
  case 0xd6:
  case 0xd8:
  case 0xda:
    goto code_r0x000104a9fe54;
  case 0x88:
  case 0x8a:
  case 0x9e:
  case 0xdc:
  case 0xde:
  case 0xe0:
  case 0xe2:
    goto code_r0x000104a9fe5c;
  case 0x8c:
  case 0x8e:
  case 0xa0:
  case 0xe4:
  case 0xe6:
  case 0xe8:
  case 0xea:
    goto code_r0x000104a9fe6c;
  case 0xa4:
  case 0xf4:
  case 0xf6:
    goto code_r0x000104a9fe94;
  case 0xa6:
  case 0xf8:
  case 0xfa:
    goto code_r0x000104a9fe98;
  case 0xb4:
  case 0xb6:
  case 0xb8:
  case 0xba:
  case 0xbc:
  case 0xbe:
  case 0xc0:
  case 0xc2:
  case 0xfc:
code_r0x000104a9fd48:
    pmVar9 = param_2;
    (*pcVar12)();
    break;
  case 0xc4:
  case 0xc6:
  case 200:
  case 0xca:
  case 0xcc:
  case 0xce:
  case 0xd0:
  case 0xd2:
  case 0xfe:
code_r0x000104a9fd5c:
    pmVar9 = param_2;
    if ((int)pmVar9 == 0) goto LAB_104a9fd0c;
    pmVar5 = param_1;
    FUN_104aa06a0(auStack_d0);
    if (bStack_a0 != 0) goto code_r0x000104a9fd74;
LAB_104a9ff7c:
    param_1 = (mach_header *)0x0;
  }
LAB_104a9ff80:
  param_2 = pmVar9;
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uVar11) {
    return param_1;
  }
LAB_104a9ffec:
  ___stack_chk_fail();
  param_1 = pmVar5;
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    param_1 = pmVar5;
  }
LAB_104aa0134:
  __Unwind_Resume();
  if (param_3 != 0) {
    uVar11 = param_4[1] & 0xff;
    if (*param_4 != 0) {
      uVar11 = param_4[1];
    }
    *(ulong *)(param_3 + 0x148) = uVar11 + *(long *)(param_3 + 0x148);
  }
  FUN_104a9f874(&pmStack_200,param_1,param_4,param_5 != 0);
  if (pmStack_200 == (mach_header *)0x0) {
    if (param_5 != 0) {
      if ((param_3 != 0) && ((char)param_1[1].magic != '\0')) {
        uVar11 = (ulong)*(byte *)(param_3 + 0x6e0);
        if (uVar11 == 2) {
          auStack_230[3] = 0;
          auStack_230[4] = 0;
          auStack_230[2] = 0;
          FUN_104ab5920(extraout_x8,2,"Too many trailer frames",0x17,&uStack_201,auStack_230 + 2);
          puStack_1f8 = auStack_230 + 2;
          func_0x000100482b64(&puStack_1f8);
          goto LAB_104aa02d8;
        }
        *(undefined4 *)(param_3 + uVar11 * 4 + 0x180) = 2;
        (*(code *)(&PTR_SUB_1107c4348)[uVar11])(param_2,param_3);
        *(char *)(param_3 + 0x6e0) = *(char *)(param_3 + 0x6e0) + '\x01';
        if ((char)param_1[1].magic == '\x02') {
          if (((char)param_2[0x31].cpusubtype != '\0') && (*(char *)(param_3 + 0x168) == '\0')) {
            FUN_104a9737c(param_3);
            uVar18._0_4_ = param_2[3].flags;
            uVar18._4_4_ = param_2[3].reserved;
            puVar6 = (undefined8 *)0x30;
            func_0x000100460200();
            *puVar6 = FUN_104aa0348;
            puVar6[1] = param_3;
            puVar6[3] = &UNK_1004be1e0;
            puVar6[4] = puVar6;
            puVar6[5] = 0;
            auStack_230[1] = 0;
            func_0x000100747564(uVar18,puVar6 + 2,auStack_230 + 1);
            func_0x0001004bdf74(auStack_230 + 1);
          }
          auStack_230[0] = 0;
          FUN_104a997b0(param_2,param_3,1,0,auStack_230);
          if ((auStack_230[0] & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      param_1->magic = 0;
      param_1->cputype = 0;
    }
    *extraout_x8 = 0;
  }
  else {
    *extraout_x8 = (ulong)pmStack_200;
    pmStack_200 = (mach_header *)0x36;
  }
LAB_104aa02d8:
  if (((ulong)pmStack_200 & 1) != 0) {
    func_0x00010084dad0();
  }
  return pmStack_200;
code_r0x000104a9fd90:
  pmVar9 = param_2;
  pmVar5 = (mach_header *)(auStack_d0 + 8);
  (**(code **)(pcVar12 + 8))();
  goto LAB_104a9ff80;
}



/* Entry: 104aa013c; end: 104aa0347;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104aa013c(ulong *param_1,undefined8 *param_2,long param_3,long param_4,long *param_5,
                  int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong auStack_80 [5];
  undefined1 uStack_51;
  ulong uStack_50;
  ulong *puStack_48;
  
  if (param_4 != 0) {
    uVar2 = param_5[1] & 0xff;
    if (*param_5 != 0) {
      uVar2 = param_5[1];
    }
    *(ulong *)(param_4 + 0x148) = uVar2 + *(long *)(param_4 + 0x148);
  }
  FUN_104a9f874(&uStack_50,param_2,param_5,param_6 != 0);
  if (uStack_50 == 0) {
    if (param_6 != 0) {
      if ((param_4 != 0) && (*(char *)(param_2 + 4) != '\0')) {
        uVar2 = (ulong)*(byte *)(param_4 + 0x6e0);
        if (uVar2 == 2) {
          auStack_80[3] = 0;
          auStack_80[4] = 0;
          auStack_80[2] = 0;
          FUN_104ab5920(param_1,2,"Too many trailer frames",0x17,&uStack_51,auStack_80 + 2);
          puStack_48 = auStack_80 + 2;
          func_0x000100482b64(&puStack_48);
          goto LAB_104aa02d8;
        }
        *(undefined4 *)(param_4 + uVar2 * 4 + 0x180) = 2;
        (*(code *)(&PTR_SUB_1107c4348)[uVar2])(param_3,param_4);
        *(char *)(param_4 + 0x6e0) = *(char *)(param_4 + 0x6e0) + '\x01';
        if (*(char *)(param_2 + 4) == '\x02') {
          if ((*(char *)(param_3 + 0x628) != '\0') && (*(char *)(param_4 + 0x168) == '\0')) {
            FUN_104a9737c(param_4);
            uVar3 = *(undefined8 *)(param_3 + 0x78);
            puVar1 = (undefined8 *)0x30;
            func_0x000100460200();
            *puVar1 = FUN_104aa0348;
            puVar1[1] = param_4;
            puVar1[3] = &UNK_1004be1e0;
            puVar1[4] = puVar1;
            puVar1[5] = 0;
            auStack_80[1] = 0;
            func_0x000100747564(uVar3,puVar1 + 2,auStack_80 + 1);
            func_0x0001004bdf74(auStack_80 + 1);
          }
          auStack_80[0] = 0;
          FUN_104a997b0(param_3,param_4,1,0,auStack_80);
          if ((auStack_80[0] & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      *param_2 = 0;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = uStack_50;
    uStack_50 = 0x36;
  }
LAB_104aa02d8:
  if ((uStack_50 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aa0348; end: 104aa03df;  */

void FUN_104aa0348(long param_1)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_104a9d3e0(uVar1,*(undefined4 *)(param_1 + 0x9c),0,param_1 + 0x150);
    func_0x0001007474b0(uVar1,0x15);
    uStack_28 = 0;
    FUN_104a997b0(uVar1,param_1,1,1,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x0001008e1b6c(param_1);
  return;
}



/* Entry: 104aa03e0; end: 104aa064f;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_104aa03e0(undefined8 *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *****ppppplVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  undefined8 *extraout_x8;
  long ******pppppplVar14;
  int *piVar15;
  long *****ppppplStack_2a0;
  ulong auStack_298 [3];
  undefined1 uStack_279;
  ulong *puStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long ******pppppplStack_260;
  long *******ppppppplStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  long ******pppppplStack_238;
  long *******appppppplStack_230 [4];
  long ******pppppplStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  long ******apppppplStack_1e0 [5];
  char cStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  long ******apppppplStack_1a8 [5];
  char cStack_180;
  long lStack_178;
  undefined1 *puStack_140;
  code *pcStack_138;
  long ******pppppplStack_130;
  ulong uStack_128;
  long *******ppppppplStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  long *******ppppppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long ******apppppplStack_a8 [5];
  char cStack_80;
  long ******apppppplStack_78 [5];
  char cStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar4 = (long *******)*param_2;
  FUN_104aa1008(apppppplStack_78);
  if (cStack_50 == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    pppppplVar13 = (long ******)apppppplStack_78;
    FUN_104aa1154();
    if (param_3 < 4) {
      ppppppplVar4 = (long *******)*param_2;
LAB_104aa0464:
      FUN_104aa1008(apppppplStack_a8);
    }
    else {
      ppppppplVar4 = (long *******)*param_2;
      if (*(int *)((long)pppppplVar13 + (param_3 - 4)) != 0x6e69622d) goto LAB_104aa0464;
      FUN_104aa1940(apppppplStack_a8);
    }
    if (cStack_80 == '\0') {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      pppppplVar13 = (long ******)apppppplStack_78;
      FUN_104aa1154();
      uVar11 = param_3;
      FUN_104a9f744(&ppppppplStack_d0,apppppplStack_a8);
      FUN_104aa1154(apppppplStack_78);
      uStack_118 = uStack_c8;
      ppppppplStack_120 = ppppppplStack_d0;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      uStack_c8 = 0;
      ppppppplStack_d0 = (long *******)0x0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      pppppplStack_130 = pppppplVar13;
      uStack_128 = param_3;
      func_0x0001007446b8(&puStack_100);
      *param_1 = puStack_100;
      param_1[2] = uStack_f0;
      param_1[1] = uStack_f8;
      param_1[4] = uStack_e0;
      param_1[3] = uStack_e8;
      *(undefined4 *)(param_1 + 5) = uStack_d8;
      puStack_100 = &UNK_1107c4408;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x000100744a04(&uStack_f8);
      if ((long *******)0x1 < ppppppplStack_120) {
        do {
          pppppplVar13 = *ppppppplStack_120;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplStack_120,0x10);
          if (bVar3) {
            *ppppppplStack_120 = (long ******)((long)pppppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar13 + -1) == (long ******)0x0) {
          (*(code *)ppppppplStack_120[1])();
        }
      }
      ppppppplVar4 = ppppppplStack_d0;
      if ((long *******)0x1 < ppppppplStack_d0) {
        do {
          pppppplVar13 = *ppppppplStack_d0;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplStack_d0,0x10);
          if (bVar3) {
            *ppppppplStack_d0 = (long ******)((long)pppppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar13 + -1) == (long ******)0x0) {
          (*(code *)ppppppplStack_d0[1])();
        }
      }
      param_3 = uVar11;
      if (cStack_80 != '\0') {
        ppppppplVar4 = apppppplStack_a8;
        FUN_104aa186c();
        param_3 = uVar11;
      }
    }
    if (cStack_50 != '\0') {
      ppppppplVar4 = apppppplStack_78;
      FUN_104aa186c();
    }
  }
  iVar9 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppppplVar4;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&ppppppplStack_120);
    func_0x0001004b6d90(&ppppppplStack_d0);
    if (cStack_80 != '\0') {
      FUN_104aa186c(apppppplStack_a8);
    }
    if (cStack_50 != '\0') {
      FUN_104aa186c(apppppplStack_78);
    }
  }
  __Unwind_Resume();
  pcStack_138 = FUN_104aa0650;
  ppppppplVar5 = (long *******)*ppppppplVar4;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_104aa09ac();
  if (((ulong)ppppppplVar5 & 0xff00000000) == 0) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 6) = 0;
    return ppppppplVar5;
  }
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (uint)ppppppplVar5;
  if (uVar10 < 0x3e) {
    pppppplVar13 = (long ******)(ppppppplVar4[2][7] + (ulong)(uVar10 - 1) * 6);
    ppppppplVar12 = ppppppplVar5;
  }
  else {
    ppppppplVar12 = (long *******)(ulong)(uVar10 - 0x3e);
    pppppplVar13 = ppppppplVar4[2] + 2;
    FUN_104aa6be8();
  }
  if (pppppplVar13 == (long ******)0x0) {
    uStack_1b0 = 0;
    cStack_180 = '\0';
    ppppppplVar6 = ppppppplVar4;
    ppppppplVar12 = ppppppplVar5;
    FUN_104aa5e30(extraout_x8,ppppppplVar4,ppppppplVar5,&uStack_1b0);
    if (cStack_180 != '\0') {
      ppppppplVar6 = apppppplStack_1a8;
      (**(code **)(CONCAT71(uStack_1af,uStack_1b0) + 8))();
    }
  }
  else {
    ppppppplVar6 = (long *******)*ppppppplVar4;
    if (*(char *)*pppppplVar13 == '\0') {
      FUN_104aa1008(apppppplStack_1e0);
    }
    else {
      FUN_104aa1940(apppppplStack_1e0);
    }
    if (cStack_1b8 == '\0') {
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 6) = 0;
    }
    else {
      FUN_104a9f744(appppppplStack_230,apppppplStack_1e0);
      ppppppplVar4 = &pppppplStack_210;
      ppppppplVar12 = (long *******)appppppplStack_230;
      pppppplStack_238 = pppppplVar13;
      FUN_104aa5f34(&pppppplStack_210,pppppplVar13,ppppppplVar12,&pppppplStack_238,FUN_104aa61e0);
      *extraout_x8 = pppppplStack_210;
      extraout_x8[2] = uStack_200;
      extraout_x8[1] = lStack_208;
      extraout_x8[4] = uStack_1f0;
      extraout_x8[3] = uStack_1f8;
      *(undefined4 *)(extraout_x8 + 5) = uStack_1e8;
      pppppplStack_210 = (long ******)&UNK_1107c4408;
      *(undefined1 *)(extraout_x8 + 6) = 1;
      func_0x000100744a04(&lStack_208);
      if ((long *******)0x1 < appppppplStack_230[0]) {
        do {
          pppppplVar14 = *appppppplStack_230[0];
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(appppppplStack_230[0],0x10);
          if (bVar3) {
            *appppppplStack_230[0] = (long ******)((long)pppppplVar14 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar14 + -1) == (long ******)0x0) {
          (*(code *)appppppplStack_230[0][1])();
        }
      }
      ppppppplVar6 = appppppplStack_230[0];
      if (cStack_1b8 != '\0') {
        ppppppplVar6 = apppppplStack_1e0;
        FUN_104aa186c();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return ppppppplVar6;
  }
  ___stack_chk_fail();
  if ((int)ppppppplVar12 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(appppppplStack_230);
    if (cStack_1b8 != '\0') {
      FUN_104aa186c(apppppplStack_1e0);
    }
  }
  ppppppplVar7 = ppppppplVar6;
  __Unwind_Resume();
  pcStack_248 = FUN_104aa08c8;
  if (((ulong)ppppppplVar12 & 0xff00000000) == 0) {
    return (long *******)0x0;
  }
  cVar1 = *(char *)ppppppplVar7[3];
  pppppplStack_260 = pppppplVar13;
  ppppppplStack_258 = ppppppplVar6;
  ppuStack_250 = &puStack_140;
  if (cVar1 != '\0') {
    *(char *)ppppppplVar7[3] = cVar1 + -1;
    FUN_104aa6ef4(&ppppppplStack_268,ppppppplVar7[2]);
    bVar3 = ppppppplStack_268 == (long *******)0x0;
    if (ppppppplStack_268 != (long *******)0x0) {
      pppppplVar13 = *ppppppplVar7;
      ppppppplStack_270 = ppppppplStack_268;
      if (((ulong)ppppppplStack_268 & 1) != 0) {
        piVar15 = (int *)((long)ppppppplStack_268 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar2) {
            *piVar15 = *piVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_104aa6354(pppppplVar13,&ppppppplStack_270);
      if (((ulong)ppppppplStack_270 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)ppppppplStack_268 & 1) == 0) {
      return (long *******)(ulong)bVar3;
    }
    func_0x00010084dad0();
    return (long *******)(ulong)bVar3;
  }
  pppppplVar13 = *ppppppplVar7;
  pcStack_248 = FUN_104aa08c8;
  if (pppppplVar13[4] != (long *****)0x0) {
    return (long *******)0x0;
  }
  if (*(char *)(pppppplVar13 + 5) != '\0') {
    return (long *******)0x0;
  }
  auStack_298[1] = 0;
  auStack_298[2] = 0;
  auStack_298[0] = 0;
  ppppppplStack_270 = ppppppplVar5;
  ppppppplStack_268 = ppppppplVar4;
  FUN_104ab5920(&ppppplStack_2a0,2,"More than two max table size changes in a single frame",0x36,
                &uStack_279,auStack_298);
  puStack_278 = auStack_298;
  func_0x000100482b64(&puStack_278);
  ppppplVar8 = pppppplVar13[4];
  if (ppppplStack_2a0 != ppppplVar8) {
    pppppplVar13[4] = ppppplStack_2a0;
    ppppplStack_2a0 = (long *****)0x36;
    if (((ulong)ppppplVar8 & 1) == 0) goto LAB_104aa6308;
    func_0x00010084dad0();
    ppppplVar8 = ppppplStack_2a0;
  }
  if (((ulong)ppppplVar8 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa6308:
  pppppplVar13[1] = pppppplVar13[2];
  return (long *******)0x0;
}



/* Entry: 104aa0650; end: 104aa069f;  */

long ***** FUN_104aa0650(undefined8 *param_1,long *****param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long ****pppplVar7;
  long ***ppplVar8;
  uint uVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  int *piVar12;
  long **pplStack_170;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  ulong *puStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ***ppplStack_130;
  long ****pppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long ***ppplStack_108;
  long ****apppplStack_100 [4];
  long ***ppplStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long ***appplStack_b0 [5];
  char cStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long ***appplStack_78 [5];
  char cStack_50;
  long lStack_48;
  
  ppppplVar4 = (long *****)*param_2;
  FUN_104aa09ac();
  if (((ulong)ppppplVar4 & 0xff00000000) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    return ppppplVar4;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (uint)ppppplVar4;
  if (uVar9 < 0x3e) {
    pppplVar7 = (long ****)(param_2[2][7] + (ulong)(uVar9 - 1) * 6);
    ppppplVar10 = ppppplVar4;
  }
  else {
    ppppplVar10 = (long *****)(ulong)(uVar9 - 0x3e);
    pppplVar7 = param_2[2] + 2;
    FUN_104aa6be8();
  }
  if (pppplVar7 == (long ****)0x0) {
    uStack_80 = 0;
    cStack_50 = '\0';
    ppppplVar5 = param_2;
    ppppplVar10 = ppppplVar4;
    FUN_104aa5e30(param_1,param_2,ppppplVar4,&uStack_80);
    if (cStack_50 != '\0') {
      ppppplVar5 = (long *****)appplStack_78;
      (**(code **)(CONCAT71(uStack_7f,uStack_80) + 8))();
    }
  }
  else {
    ppppplVar5 = (long *****)*param_2;
    if (*(char *)*pppplVar7 == '\0') {
      FUN_104aa1008(appplStack_b0);
    }
    else {
      FUN_104aa1940(appplStack_b0);
    }
    if (cStack_88 == '\0') {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      FUN_104a9f744(apppplStack_100,appplStack_b0);
      param_2 = (long *****)&ppplStack_e0;
      ppppplVar10 = apppplStack_100;
      ppplStack_108 = (long ***)pppplVar7;
      FUN_104aa5f34(&ppplStack_e0,pppplVar7,ppppplVar10,&ppplStack_108,FUN_104aa61e0);
      *param_1 = ppplStack_e0;
      param_1[2] = uStack_d0;
      param_1[1] = lStack_d8;
      param_1[4] = uStack_c0;
      param_1[3] = uStack_c8;
      *(undefined4 *)(param_1 + 5) = uStack_b8;
      ppplStack_e0 = (long ***)&UNK_1107c4408;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x000100744a04(&lStack_d8);
      if ((long *****)0x1 < apppplStack_100[0]) {
        do {
          pppplVar11 = (long ****)*apppplStack_100[0];
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(apppplStack_100[0],0x10);
          if (bVar3) {
            *apppplStack_100[0] = (long ***)((long)pppplVar11 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ****)((long)pppplVar11 + -1) == (long ****)0x0) {
          (*(code *)apppplStack_100[0][1])();
        }
      }
      ppppplVar5 = (long *****)apppplStack_100[0];
      if (cStack_88 != '\0') {
        ppppplVar5 = (long *****)appplStack_b0;
        FUN_104aa186c();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar5;
  }
  ___stack_chk_fail();
  if ((int)ppppplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apppplStack_100);
    if (cStack_88 != '\0') {
      FUN_104aa186c(appplStack_b0);
    }
  }
  ppppplVar6 = ppppplVar5;
  __Unwind_Resume();
  pcStack_118 = FUN_104aa08c8;
  if (((ulong)ppppplVar10 & 0xff00000000) == 0) {
    return (long *****)0x0;
  }
  cVar1 = *(char *)ppppplVar6[3];
  ppplStack_130 = (long ***)pppplVar7;
  pppplStack_128 = (long ****)ppppplVar5;
  puStack_120 = &stack0xfffffffffffffff0;
  if (cVar1 != '\0') {
    *(char *)ppppplVar6[3] = cVar1 + -1;
    FUN_104aa6ef4(&pppplStack_138,ppppplVar6[2]);
    bVar3 = pppplStack_138 == (long ****)0x0;
    if (pppplStack_138 != (long ****)0x0) {
      pppplVar7 = *ppppplVar6;
      pppplStack_140 = pppplStack_138;
      if (((ulong)pppplStack_138 & 1) != 0) {
        piVar12 = (int *)((long)pppplStack_138 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_104aa6354(pppplVar7,&pppplStack_140);
      if (((ulong)pppplStack_140 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)pppplStack_138 & 1) == 0) {
      return (long *****)(ulong)bVar3;
    }
    func_0x00010084dad0();
    return (long *****)(ulong)bVar3;
  }
  pppplVar7 = *ppppplVar6;
  pcStack_118 = FUN_104aa08c8;
  if (pppplVar7[4] != (long ***)0x0) {
    return (long *****)0x0;
  }
  if (*(char *)(pppplVar7 + 5) != '\0') {
    return (long *****)0x0;
  }
  auStack_168[1] = 0;
  auStack_168[2] = 0;
  auStack_168[0] = 0;
  pppplStack_140 = (long ****)ppppplVar4;
  pppplStack_138 = (long ****)param_2;
  FUN_104ab5920(&pplStack_170,2,"More than two max table size changes in a single frame",0x36,
                &uStack_149,auStack_168);
  puStack_148 = auStack_168;
  func_0x000100482b64(&puStack_148);
  ppplVar8 = pppplVar7[4];
  if ((long ***)pplStack_170 != ppplVar8) {
    pppplVar7[4] = (long ***)pplStack_170;
    pplStack_170 = (long **)0x36;
    if (((ulong)ppplVar8 & 1) == 0) goto LAB_104aa6308;
    func_0x00010084dad0();
    ppplVar8 = (long ***)pplStack_170;
  }
  if (((ulong)ppplVar8 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa6308:
  pppplVar7[1] = pppplVar7[2];
  return (long *****)0x0;
}



/* Entry: 104aa06a0; end: 104aa08c7;  */

/* WARNING: Type propagation algorithm not settling */

long *** FUN_104aa06a0(undefined8 *param_1,long ***param_2,undefined ****param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  long **pplVar6;
  long *plVar7;
  uint uVar8;
  undefined ****ppppuVar9;
  long **pplVar10;
  int *piVar11;
  long *plStack_170;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  ulong *puStack_148;
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  long **pplStack_130;
  long ***ppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long **pplStack_108;
  long ***appplStack_100 [4];
  long **pplStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long **applStack_b0 [5];
  char cStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long **applStack_78 [5];
  char cStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (uint)param_3;
  if (uVar8 < 0x3e) {
    pplVar6 = (long **)(param_2[2][7] + (ulong)(uVar8 - 1) * 6);
    ppppuVar9 = param_3;
  }
  else {
    ppppuVar9 = (undefined ****)(ulong)(uVar8 - 0x3e);
    pplVar6 = param_2[2] + 2;
    FUN_104aa6be8();
  }
  if (pplVar6 == (long **)0x0) {
    uStack_80 = 0;
    cStack_50 = '\0';
    ppplVar4 = param_2;
    ppppuVar9 = param_3;
    FUN_104aa5e30(param_1,param_2,param_3,&uStack_80);
    if (cStack_50 != '\0') {
      ppplVar4 = applStack_78;
      (**(code **)(CONCAT71(uStack_7f,uStack_80) + 8))();
    }
  }
  else {
    ppplVar4 = (long ***)*param_2;
    if ((char)**pplVar6 == '\0') {
      FUN_104aa1008(applStack_b0);
    }
    else {
      FUN_104aa1940(applStack_b0);
    }
    if (cStack_88 == '\0') {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      FUN_104a9f744(appplStack_100,applStack_b0);
      param_2 = &pplStack_e0;
      ppppuVar9 = (undefined ****)appplStack_100;
      pplStack_108 = pplVar6;
      FUN_104aa5f34(&pplStack_e0,pplVar6,ppppuVar9,&pplStack_108,FUN_104aa61e0);
      *param_1 = pplStack_e0;
      param_1[2] = uStack_d0;
      param_1[1] = lStack_d8;
      param_1[4] = uStack_c0;
      param_1[3] = uStack_c8;
      *(undefined4 *)(param_1 + 5) = uStack_b8;
      pplStack_e0 = (long **)&UNK_1107c4408;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x000100744a04(&lStack_d8);
      if ((long ***)0x1 < appplStack_100[0]) {
        do {
          pplVar10 = *appplStack_100[0];
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(appplStack_100[0],0x10);
          if (bVar3) {
            *appplStack_100[0] = (long **)((long)pplVar10 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long **)((long)pplVar10 + -1) == (long **)0x0) {
          (*(code *)appplStack_100[0][1])();
        }
      }
      ppplVar4 = appplStack_100[0];
      if (cStack_88 != '\0') {
        ppplVar4 = applStack_b0;
        FUN_104aa186c();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppplVar4;
  }
  ___stack_chk_fail();
  if ((int)ppppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(appplStack_100);
    if (cStack_88 != '\0') {
      FUN_104aa186c(applStack_b0);
    }
  }
  ppplVar5 = ppplVar4;
  __Unwind_Resume();
  pcStack_118 = FUN_104aa08c8;
  if (((ulong)ppppuVar9 & 0xff00000000) == 0) {
    return (long ***)(undefined ***)0x0;
  }
  cVar1 = *(char *)ppplVar5[3];
  pplStack_130 = pplVar6;
  ppplStack_128 = ppplVar4;
  puStack_120 = &stack0xfffffffffffffff0;
  if (cVar1 != '\0') {
    *(char *)ppplVar5[3] = cVar1 + -1;
    FUN_104aa6ef4(&ppppuStack_138,ppplVar5[2]);
    bVar3 = ppppuStack_138 == (undefined ****)0x0;
    if (ppppuStack_138 != (undefined ****)0x0) {
      pplVar6 = *ppplVar5;
      ppppuStack_140 = ppppuStack_138;
      if (((ulong)ppppuStack_138 & 1) != 0) {
        piVar11 = (int *)((long)ppppuStack_138 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_104aa6354(pplVar6,&ppppuStack_140);
      if (((ulong)ppppuStack_140 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)ppppuStack_138 & 1) == 0) {
      return (long ***)(undefined ***)(ulong)bVar3;
    }
    func_0x00010084dad0();
    return (long ***)(undefined ***)(ulong)bVar3;
  }
  pplVar6 = *ppplVar5;
  pcStack_118 = FUN_104aa08c8;
  if (pplVar6[4] != (long *)0x0) {
    return (long ***)(undefined ***)0x0;
  }
  if (*(char *)(pplVar6 + 5) != '\0') {
    return (long ***)(undefined ***)0x0;
  }
  auStack_168[1] = 0;
  auStack_168[2] = 0;
  auStack_168[0] = 0;
  ppppuStack_140 = param_3;
  ppppuStack_138 = (undefined ****)param_2;
  FUN_104ab5920(&plStack_170,2,"More than two max table size changes in a single frame",0x36,
                &uStack_149,auStack_168);
  puStack_148 = auStack_168;
  func_0x000100482b64(&puStack_148);
  plVar7 = pplVar6[4];
  if (plStack_170 != plVar7) {
    pplVar6[4] = plStack_170;
    plStack_170 = (long *)0x36;
    if (((ulong)plVar7 & 1) == 0) goto LAB_104aa6308;
    func_0x00010084dad0();
    plVar7 = plStack_170;
  }
  if (((ulong)plVar7 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa6308:
  pplVar6[1] = pplVar6[2];
  return (long ***)(undefined ***)0x0;
}



/* Entry: 104aa08c8; end: 104aa09ab;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_104aa08c8(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  ulong in_stack_ffffffffffffffd8;
  
  if ((param_2 & 0xff00000000) == 0) {
    return false;
  }
  cVar1 = *(char *)param_1[3];
  if (cVar1 != '\0') {
    *(char *)param_1[3] = cVar1 + -1;
    FUN_104aa6ef4(&stack0xffffffffffffffd8,param_1[2]);
    if (in_stack_ffffffffffffffd8 != 0) {
      lVar3 = *param_1;
      if ((in_stack_ffffffffffffffd8 & 1) != 0) {
        piVar5 = (int *)(in_stack_ffffffffffffffd8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_104aa6354(lVar3,&stack0xffffffffffffffd0);
      if ((in_stack_ffffffffffffffd8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if ((in_stack_ffffffffffffffd8 & 1) == 0) {
      return in_stack_ffffffffffffffd8 == 0;
    }
    func_0x00010084dad0();
    return in_stack_ffffffffffffffd8 == 0;
  }
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x20) != 0) {
    return false;
  }
  if (*(char *)(lVar3 + 0x28) != '\0') {
    return false;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_104ab5920(auStack_60,2,"More than two max table size changes in a single frame",0x36,
                &uStack_39,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  func_0x000100482b64(&puStack_38);
  uVar4 = *(ulong *)(lVar3 + 0x20);
  if (auStack_60[0] != uVar4) {
    *(ulong *)(lVar3 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_104aa6308;
    func_0x00010084dad0();
    uVar4 = auStack_60[0];
  }
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa6308:
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
  return false;
}



/* Entry: 104aa09ac; end: 104aa0b63;  */

ulong FUN_104aa09ac(ulong param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  pbVar8 = *(byte **)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar8 == pbVar1) {
LAB_104aa0b18:
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar9 = 0;
      uVar6 = 0;
      uVar7 = 0;
      *(undefined1 *)(param_1 + 0x28) = 1;
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar9 = 0;
      uVar6 = 0;
      uVar7 = 0;
    }
  }
  else {
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    uVar3 = (*pbVar8 & 0x7f) + param_2;
    uVar4 = (ulong)uVar3;
    if ((char)*pbVar8 < '\0') {
      if (pbVar8 + 1 == pbVar1) goto LAB_104aa0b18;
      *(byte **)(param_1 + 8) = pbVar8 + 2;
      uVar3 = uVar3 + ((int)(char)pbVar8[1] & 0x7fU) * 0x80;
      uVar4 = (ulong)uVar3;
      if (-1 < (char)pbVar8[1]) goto LAB_104aa09dc;
      if (pbVar8 + 2 == pbVar1) goto LAB_104aa0b18;
      *(byte **)(param_1 + 8) = pbVar8 + 3;
      uVar3 = uVar3 + ((int)(char)pbVar8[2] & 0x7fU) * 0x4000;
      if (-1 < (char)pbVar8[2]) {
        uVar6 = 0;
        uVar5 = uVar3 & 0xffffff00;
        uVar7 = 0x100000000;
        uVar9 = (ulong)uVar3;
        goto LAB_104aa0b48;
      }
      if (pbVar8 + 3 == pbVar1) goto LAB_104aa0b18;
      *(byte **)(param_1 + 8) = pbVar8 + 4;
      uVar3 = uVar3 + ((int)(char)pbVar8[3] & 0x7fU) * 0x200000;
      uVar9 = (ulong)uVar3;
      if (-1 < (char)pbVar8[3]) {
LAB_104aa0a60:
        uVar6 = 0;
        uVar5 = (uint)uVar9 & 0xffffff00;
        uVar7 = 0x100000000;
        goto LAB_104aa0b48;
      }
      if (pbVar8 + 4 == pbVar1) goto LAB_104aa0b18;
      *(byte **)(param_1 + 8) = pbVar8 + 5;
      bVar2 = pbVar8[4];
      uVar5 = (uint)bVar2;
      if (0xf < (uVar5 & 0x7f)) {
        FUN_104aa639c(param_1,(ulong)CONCAT14(bVar2,uVar3),0);
        uVar5 = (uint)param_1 & 0xffffff00;
        uVar7 = param_1 & 0xffffffff00000000;
        uVar6 = param_1 & 0xffffff0000000000;
        uVar9 = param_1;
        goto LAB_104aa0b48;
      }
      if (CARRY4(uVar3,uVar5 << 0x1c)) {
LAB_104aa0abc:
        FUN_104aa639c(param_1,uVar9 | (ulong)bVar2 << 0x20,0);
        uVar5 = (uint)param_1 & 0xffffff00;
        uVar7 = param_1 & 0xffffffff00000000;
        uVar6 = param_1 & 0xffffff0000000000;
        uVar9 = param_1;
        goto LAB_104aa0b48;
      }
      uVar3 = uVar5 * 0x10000000 + uVar3;
      uVar9 = (ulong)uVar3;
      pbVar8 = pbVar8 + 5;
      if (-1 < (char)bVar2) goto LAB_104aa0a60;
      do {
        if (pbVar8 == pbVar1) goto LAB_104aa0b18;
        *(byte **)(param_1 + 8) = pbVar8 + 1;
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 == 0x80);
      if (bVar2 != 0) goto LAB_104aa0abc;
    }
    else {
LAB_104aa09dc:
      uVar3 = (uint)uVar4;
    }
    uVar5 = uVar3 & 0xffffff00;
    uVar6 = 0;
    uVar7 = 0x100000000;
    uVar9 = uVar4;
  }
LAB_104aa0b48:
  return uVar7 & 0xff00000000 | uVar6 | (ulong)((uint)uVar9 & 0xff | uVar5);
}



/* Entry: 104aa0b64; end: 104aa0cbb;  */

long ***** FUN_104aa0b64(long *****param_1,long *****param_2)

{
  char cVar1;
  bool bVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  int *piVar6;
  long *****ppppplVar7;
  long *****unaff_x20;
  long *****unaff_x21;
  long *****unaff_x22;
  long ***ppplStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  long **pplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long ****pppplStack_78;
  long ****pppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  long ***ppplStack_50;
  long ***ppplStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar4 = param_1;
  ppppplVar5 = param_2;
  if (*(char *)(param_2 + 6) == '\0') {
LAB_104aa0c34:
    param_2 = unaff_x22;
    param_1 = unaff_x20;
    ppppplVar7 = (long *****)0x0;
  }
  else {
    ppppplVar7 = param_1;
    FUN_104aa0e30();
    pppplVar3 = param_1[2];
    ppplStack_68 = (long ***)*param_2;
    unaff_x21 = (long *****)&ppplStack_60;
    ppplStack_58 = (long ***)param_2[2];
    ppplStack_60 = (long ***)param_2[1];
    ppplStack_48 = (long ***)param_2[4];
    ppplStack_50 = (long ***)param_2[3];
    uStack_40 = *(undefined4 *)(param_2 + 5);
    *param_2 = (long ****)&UNK_1107c4408;
    ppppplVar5 = (long *****)&ppplStack_68;
    FUN_104aa7064(&pppplStack_70,pppplVar3);
    ppppplVar4 = unaff_x21;
    (*(code *)ppplStack_68[1])();
    if ((long *****)pppplStack_70 != (long *****)0x0) {
      pppplVar3 = *param_1;
      pppplStack_78 = pppplStack_70;
      if (((ulong)pppplStack_70 & 1) != 0) {
        piVar6 = (int *)((long)pppplStack_70 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppppplVar5 = &pppplStack_78;
      FUN_104aa6354(pppplVar3);
      func_0x0001004bdf74(&pppplStack_78);
      ppppplVar4 = (long *****)pppplStack_70;
      unaff_x20 = param_1;
      unaff_x22 = param_2;
      if (((ulong)pppplStack_70 & 1) != 0) {
        func_0x00010084dad0();
        ppppplVar4 = (long *****)pppplStack_70;
      }
      goto LAB_104aa0c34;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppplVar7;
  }
  ___stack_chk_fail();
  if ((int)ppppplVar5 == 0) {
    __Unwind_Resume(ppppplVar4);
  }
  ppppplVar7 = ppppplVar4;
  FUN_104bd46a0();
  pcStack_88 = FUN_104aa0cbc;
  if (ppppplVar7[4] != (long ****)0x0) {
    return ppppplVar5;
  }
  if (*(char *)(ppppplVar7 + 5) != '\0') {
    return ppppplVar5;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_d8 = (long *)0x0;
  pppplStack_b0 = (long ****)param_2;
  pppplStack_a8 = (long ****)unaff_x21;
  pppplStack_a0 = (long ****)param_1;
  pppplStack_98 = (long ****)ppppplVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_104ab5920(&ppplStack_e0,2,"Illegal hpack op code",0x15,&uStack_b9,&plStack_d8);
  pplStack_b8 = &plStack_d8;
  func_0x000100482b64(&pplStack_b8);
  pppplVar3 = ppppplVar7[4];
  if ((long ****)ppplStack_e0 != pppplVar3) {
    ppppplVar7[4] = (long ****)ppplStack_e0;
    ppplStack_e0 = (long ***)0x36;
    if (((ulong)pppplVar3 & 1) == 0) goto LAB_104aa0d50;
    func_0x00010084dad0();
    pppplVar3 = (long ****)ppplStack_e0;
  }
  if (((ulong)pppplVar3 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa0d50:
  ppppplVar7[1] = ppppplVar7[2];
  return ppppplVar5;
}



/* Entry: 104aa0cbc; end: 104aa0d9b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104aa0cbc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_2;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_104ab5920(auStack_60,2,"Illegal hpack op code",0x15,&uStack_39,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  func_0x000100482b64(&puStack_38);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (auStack_60[0] != uVar1) {
    *(ulong *)(param_1 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa0d50;
    func_0x00010084dad0();
    uVar1 = auStack_60[0];
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa0d50:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



/* Entry: 104aa0d9c; end: 104aa0e2f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104aa0d9c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong auStack_58 [4];
  ulong uStack_38;
  undefined1 uStack_31;
  long *plStack_30;
  ulong *puStack_28;
  
  *(undefined1 *)param_1[3] = 0;
  if ((param_2 & 0xff00000000) == 0) {
    return 0;
  }
  uVar4 = (uint)param_2;
  if (uVar4 < 0x3e) {
    plVar2 = (long *)(*(long *)(param_1[2] + 0x38) + (ulong)(uVar4 - 1) * 0x30);
  }
  else {
    plVar2 = (long *)(param_1[2] + 0x10);
    FUN_104aa6be8(plVar2,uVar4 - 0x3e);
  }
  if (plVar2 != (long *)0x0) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      return 1;
    }
    uVar4 = *(uint *)param_1[4] + (int)plVar2[5];
    *(uint *)param_1[4] = uVar4;
    if (uVar4 <= *(uint *)(param_1 + 5)) {
      (**(code **)(*plVar2 + 0x10))(plVar2 + 1,lVar3);
      return 1;
    }
    plStack_30 = (long *)(ulong)*(uint *)param_1[4];
    puStack_28 = (ulong *)(ulong)*(uint *)(param_1 + 5);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                        ,0x4bf,0,
                        "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
                       );
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      func_0x00010083228c(lVar3);
      func_0x0001004e2b40(lVar3 + 0x1f0);
    }
    lVar3 = *param_1;
    if (*(long *)(lVar3 + 0x20) != 0) {
      return 0;
    }
    if (*(char *)(lVar3 + 0x28) != '\0') {
      return 0;
    }
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    auStack_58[1] = 0;
    FUN_104ab5920(&plStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
                  auStack_58 + 1);
    FUN_104abaa50(auStack_58,&plStack_30,3,8);
    if (((ulong)plStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_28 = auStack_58 + 1;
    func_0x000100482b64(&puStack_28);
    uVar1 = *(ulong *)(lVar3 + 0x20);
    if (auStack_58[0] != uVar1) {
      *(ulong *)(lVar3 + 0x20) = auStack_58[0];
      auStack_58[0] = 0x36;
      if ((uVar1 & 1) == 0) goto LAB_104aa0fa8;
      func_0x00010084dad0();
      uVar1 = auStack_58[0];
    }
    if ((uVar1 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104aa0fa8:
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
    return 0;
  }
  lVar3 = *param_1;
  puStack_28 = (ulong *)(param_2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x20) != 0) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x28) != '\0') {
    return 0;
  }
  plStack_30 = param_1;
  FUN_104aa65e8(&stack0xffffffffffffffc8,&plStack_30);
  uVar1 = *(ulong *)(lVar3 + 0x20);
  if (uStack_38 != uVar1) {
    *(ulong *)(lVar3 + 0x20) = uStack_38;
    uStack_38 = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa65b4;
    func_0x00010084dad0();
    uVar1 = uStack_38;
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa65b4:
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
  return 0;
}



/* Entry: 104aa0e30; end: 104aa0e87;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104aa0e30(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    return 1;
  }
  uVar1 = *(uint *)param_1[4] + (int)param_2[5];
  *(uint *)param_1[4] = uVar1;
  if (uVar1 <= *(uint *)(param_1 + 5)) {
    (**(code **)(*param_2 + 0x10))(param_2 + 1,lVar3);
    return 1;
  }
  uStack_30 = (ulong)*(uint *)param_1[4];
  puStack_28 = (ulong *)(ulong)*(uint *)(param_1 + 5);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                      ,0x4bf,0,
                      "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
                     );
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    func_0x00010083228c(lVar3);
    func_0x0001004e2b40(lVar3 + 0x1f0);
  }
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x20) != 0) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x28) != '\0') {
    return 0;
  }
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_104ab5920(&uStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
                auStack_58 + 1);
  FUN_104abaa50(auStack_58,&uStack_30,3,8);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_28 = auStack_58 + 1;
  func_0x000100482b64(&puStack_28);
  uVar2 = *(ulong *)(lVar3 + 0x20);
  if (auStack_58[0] != uVar2) {
    *(ulong *)(lVar3 + 0x20) = auStack_58[0];
    auStack_58[0] = 0x36;
    if ((uVar2 & 1) == 0) goto LAB_104aa0fa8;
    func_0x00010084dad0();
    uVar2 = auStack_58[0];
  }
  if ((uVar2 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa0fa8:
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
  return 0;
}



/* Entry: 104aa0e88; end: 104aa0ef7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104aa0e88(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  uStack_30 = (ulong)*(uint *)param_1[4];
  puStack_28 = (ulong *)(ulong)*(uint *)(param_1 + 5);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                      ,0x4bf,0,
                      "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
                     );
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    func_0x00010083228c(lVar2);
    func_0x0001004e2b40(lVar2 + 0x1f0);
  }
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x20) != 0) {
    return 0;
  }
  if (*(char *)(lVar2 + 0x28) != '\0') {
    return 0;
  }
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_104ab5920(&uStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
                auStack_58 + 1);
  FUN_104abaa50(auStack_58,&uStack_30,3,8);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_28 = auStack_58 + 1;
  func_0x000100482b64(&puStack_28);
  uVar1 = *(ulong *)(lVar2 + 0x20);
  if (auStack_58[0] != uVar1) {
    *(ulong *)(lVar2 + 0x20) = auStack_58[0];
    auStack_58[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa0fa8;
    func_0x00010084dad0();
    uVar1 = auStack_58[0];
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa0fa8:
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 0x10);
  return 0;
}



/* Entry: 104aa0ef8; end: 104aa1007;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104aa0ef8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_2;
  }
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_104ab5920(&uStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
                auStack_58 + 1);
  FUN_104abaa50(auStack_58,&uStack_30,3,8);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_28 = auStack_58 + 1;
  func_0x000100482b64(&puStack_28);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (auStack_58[0] != uVar1) {
    *(ulong *)(param_1 + 0x20) = auStack_58[0];
    auStack_58[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa0fa8;
    func_0x00010084dad0();
    uVar1 = auStack_58[0];
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa0fa8:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



/* Entry: 104aa1008; end: 104aa1153;  */

undefined1  [16] FUN_104aa1008(long **param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long **pplVar13;
  long **pplVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *plStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  uint uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = param_2;
  FUN_104aa11c8();
  if (((ulong)param_3 & 0xff) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
LAB_104aa110c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      auVar19._8_8_ = param_3;
      auVar19._0_8_ = plVar18;
      return auVar19;
    }
  }
  else {
    if (((ulong)plVar18 & 0xff00000000) != 0) {
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_70 = (long *)0x0;
      FUN_104aa125c(param_2,plVar18,&plStack_80);
      plVar8 = plStack_70;
      plVar7 = plStack_78;
      plVar2 = plStack_80;
      if (((ulong)param_2 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        param_3 = plVar18;
      }
      else {
        plStack_78 = (long *)0x0;
        plStack_70 = (long *)0x0;
        plStack_80 = (long *)0x0;
        plStack_48 = plVar7;
        plStack_50 = plVar2;
        plStack_40 = plVar8;
        uStack_30 = 2;
        FUN_104aa169c(param_1,&plStack_50);
        uStack_60 = 0;
        plStack_58 = (long *)0x0;
        param_3 = &uStack_60;
        FUN_104aa1658(&plStack_50,param_3);
        *(undefined1 *)(param_1 + 5) = 1;
        FUN_104aa186c(&plStack_50);
      }
      plVar18 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plStack_78 = plStack_80;
        __ZdlPv();
      }
      goto LAB_104aa110c;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      pplVar13 = &plStack_90;
      pplVar14 = &plStack_90;
      lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar2 = (long *)param_2[1];
      if ((ulong)(param_2[2] - (long)plVar2) < ((ulong)plVar18 & 0xffffffff)) {
        plStack_58 = (long *)((ulong)plStack_58 & 0xffffffffffffff00);
        uStack_30 = uStack_30 & 0xffffff00;
        if (param_2[4] == 0) {
          *(undefined1 *)(param_2 + 5) = 1;
        }
        pplVar14 = &plStack_58;
        FUN_104aa18c4(param_1);
        if ((char)uStack_30 == '\0') goto LAB_104aa1618;
        param_1 = &plStack_58;
      }
      else {
        plStack_78 = (long *)((ulong)plVar18 & 0xffffffff);
        plStack_80 = (long *)*param_2;
        param_2[1] = (long)plVar2 + (long)plStack_78;
        if (plStack_80 == (long *)0x0) {
          uStack_60 = CONCAT44(uStack_60._4_4_,1);
          plStack_80 = plVar2;
          FUN_104aa169c(param_1,&plStack_80);
          plStack_90 = (long *)0x0;
          pcStack_88 = (code *)0x0;
          FUN_104aa1658(&plStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
        }
        else {
          if (plStack_80 != (long *)0x1) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
              if (bVar6) {
                *plStack_80 = *plStack_80 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_68 = 0;
          uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
          plStack_70 = plVar2;
          FUN_104aa169c(param_1,&plStack_80);
          plStack_90 = (long *)0x0;
          pcStack_88 = (code *)0x0;
          FUN_104aa1658(&plStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
          pplVar14 = pplVar13;
        }
        param_1 = &plStack_80;
      }
      FUN_104aa186c(param_1);
LAB_104aa1618:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        auVar22._8_8_ = pplVar14;
        auVar22._0_8_ = param_1;
        return auVar22;
      }
      ___stack_chk_fail();
      puVar10 = (undefined8 *)&DAT_10f62a4d8;
      FUN_104a6fa70();
      if (*(int *)(puVar10 + 4) == 1) {
        plVar18 = *pplVar14;
        puVar10[1] = pplVar14[1];
        *puVar10 = plVar18;
      }
      else {
        FUN_104aa1800(puVar10);
      }
      auVar23._8_8_ = pplVar14;
      auVar23._0_8_ = puVar10;
      return auVar23;
    }
  }
  ___stack_chk_fail();
  if (plStack_80 != (long *)0x0) {
    plStack_78 = plStack_80;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_104aa1154;
  if (plVar18 != (long *)0x0) {
    iVar3 = (int)plVar18[4];
    if (iVar3 == 2) {
      lVar15 = *plVar18;
      uVar11 = plVar18[1] - lVar15;
LAB_104aa11a4:
      auVar20._8_8_ = uVar11;
      auVar20._0_8_ = lVar15;
      return auVar20;
    }
    if (iVar3 == 1) {
      lVar15 = *plVar18;
      uVar11 = plVar18[1];
      goto LAB_104aa11a4;
    }
    if (iVar3 == 0) {
      if (*plVar18 == 0) {
        lVar15 = (long)plVar18 + 9;
        uVar11 = (ulong)*(byte *)(plVar18 + 1);
      }
      else {
        uVar11 = plVar18[1];
        lVar15 = plVar18[2];
      }
      goto LAB_104aa11a4;
    }
  }
  pcVar9 = "return absl::string_view()";
  plStack_90 = (long *)&stack0xfffffffffffffff0;
  FUN_104a6e964("return absl::string_view()",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                ,0x2b7);
  pbVar1 = *(byte **)(pcVar9 + 8);
  if (pbVar1 == *(byte **)(pcVar9 + 0x10)) {
    if (*(long *)(pcVar9 + 0x20) == 0) {
      uVar12 = 0;
      uVar17 = 0;
      pcVar9[0x28] = '\x01';
      uVar11 = 0;
      goto LAB_104aa124c;
    }
  }
  else {
    *(byte **)(pcVar9 + 8) = pbVar1 + 1;
    bVar4 = *pbVar1;
    pcVar16 = (char *)((ulong)bVar4 & 0x7f);
    if (((int)pcVar16 != 0x7f) ||
       (FUN_104aa09ac(), pcVar16 = pcVar9, ((ulong)pcVar9 & 0xff00000000) != 0)) {
      uVar17 = (ulong)pcVar16 & 0xffffff00 | (ulong)(bVar4 >> 7) << 0x20;
      uVar11 = (ulong)pcVar16 & 0xff;
      uVar12 = 1;
      goto LAB_104aa124c;
    }
  }
  uVar11 = 0;
  uVar12 = 0;
  uVar17 = 0;
LAB_104aa124c:
  auVar21._0_8_ = uVar17 | uVar11;
  auVar21._8_8_ = uVar12;
  return auVar21;
}



/* Entry: 104aa1154; end: 104aa11c7;  */

undefined1  [16] FUN_104aa1154(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_1 != (long *)0x0) {
    iVar2 = (int)param_1[4];
    if (iVar2 == 2) {
      lVar7 = *param_1;
      uVar5 = param_1[1] - lVar7;
LAB_104aa11a4:
      auVar10._8_8_ = uVar5;
      auVar10._0_8_ = lVar7;
      return auVar10;
    }
    if (iVar2 == 1) {
      lVar7 = *param_1;
      uVar5 = param_1[1];
      goto LAB_104aa11a4;
    }
    if (iVar2 == 0) {
      if (*param_1 == 0) {
        lVar7 = (long)param_1 + 9;
        uVar5 = (ulong)*(byte *)(param_1 + 1);
      }
      else {
        uVar5 = param_1[1];
        lVar7 = param_1[2];
      }
      goto LAB_104aa11a4;
    }
  }
  pcVar4 = "return absl::string_view()";
  FUN_104a6e964("return absl::string_view()",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                ,0x2b7);
  pbVar1 = *(byte **)(pcVar4 + 8);
  if (pbVar1 == *(byte **)(pcVar4 + 0x10)) {
    if (*(long *)(pcVar4 + 0x20) == 0) {
      uVar6 = 0;
      uVar9 = 0;
      pcVar4[0x28] = '\x01';
      uVar5 = 0;
      goto LAB_104aa124c;
    }
  }
  else {
    *(byte **)(pcVar4 + 8) = pbVar1 + 1;
    bVar3 = *pbVar1;
    pcVar8 = (char *)((ulong)bVar3 & 0x7f);
    if (((int)pcVar8 != 0x7f) ||
       (FUN_104aa09ac(), pcVar8 = pcVar4, ((ulong)pcVar4 & 0xff00000000) != 0)) {
      uVar9 = (ulong)pcVar8 & 0xffffff00 | (ulong)(bVar3 >> 7) << 0x20;
      uVar5 = (ulong)pcVar8 & 0xff;
      uVar6 = 1;
      goto LAB_104aa124c;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar9 = 0;
LAB_104aa124c:
  auVar11._0_8_ = uVar9 | uVar5;
  auVar11._8_8_ = uVar6;
  return auVar11;
}



/* Entry: 104aa11c8; end: 104aa125b;  */

undefined1  [16] FUN_104aa11c8(ulong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  pbVar1 = *(byte **)(param_1 + 8);
  if (pbVar1 == *(byte **)(param_1 + 0x10)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar3 = 0;
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x28) = 1;
      uVar4 = 0;
      goto LAB_104aa124c;
    }
  }
  else {
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    bVar2 = *pbVar1;
    uVar4 = (ulong)bVar2 & 0x7f;
    if (((int)uVar4 != 0x7f) ||
       (FUN_104aa09ac(param_1,0x7f), uVar4 = param_1, (param_1 & 0xff00000000) != 0)) {
      uVar5 = uVar4 & 0xffffff00 | (ulong)(bVar2 >> 7) << 0x20;
      uVar4 = uVar4 & 0xff;
      uVar3 = 1;
      goto LAB_104aa124c;
    }
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
LAB_104aa124c:
  auVar6._0_8_ = uVar5 | uVar4;
  auVar6._8_8_ = uVar3;
  return auVar6;
}



/* Entry: 104aa125c; end: 104aa151b;  */

long ** FUN_104aa125c(long param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  long **pplVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long **extraout_x8;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  short sVar19;
  undefined1 *puVar20;
  long *plVar21;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [40];
  char cStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  ulong *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  
  lVar1 = *(long *)(param_1 + 8);
  uStack_68 = *(long *)(param_1 + 0x10) - lVar1;
  uVar17 = param_2 & 0xffffffff;
  if (uStack_68 < (param_2 & 0xffffffff)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  else {
    *(ulong *)(param_1 + 8) = lVar1 + uVar17;
    if ((int)param_2 != 0) {
      uVar18 = 0;
      sVar19 = 0;
      do {
        bVar2 = *(byte *)(lVar1 + uVar18);
        sVar3 = *(short *)(&UNK_10dd54c78 +
                          (ulong)((uint)(bVar2 >> 4) | (uint)(byte)(&UNK_10dd55278)[sVar19] << 4) *
                          2);
        if (*(ushort *)
             (&UNK_10dd52b58 +
             (ulong)((uint)(bVar2 >> 4) | (uint)*(ushort *)(&UNK_10dd54a78 + (long)sVar19 * 2) << 4)
             * 2) < 0x100) {
          puVar16 = (undefined1 *)param_3[1];
          uVar4 = (undefined1)
                  *(ushort *)
                   (&UNK_10dd52b58 +
                   (ulong)((uint)(bVar2 >> 4) |
                          (uint)*(ushort *)(&UNK_10dd54a78 + (long)sVar19 * 2) << 4) * 2);
          if (puVar16 < (undefined1 *)param_3[2]) {
            puVar14 = puVar16 + 1;
            *puVar16 = uVar4;
LAB_104aa13c8:
            param_3[1] = (ulong)puVar14;
            bVar2 = *(byte *)(lVar1 + uVar18);
            goto LAB_104aa13d0;
          }
          puVar20 = (undefined1 *)*param_3;
          puVar14 = (undefined1 *)(((long)puVar16 - (long)puVar20) + 1);
          if (-1 < (long)puVar14) {
            uVar11 = (long)param_3[2] - (long)puVar20;
            puVar13 = (undefined1 *)(uVar11 * 2);
            if (puVar13 < puVar14 || (long)puVar13 - (long)puVar14 == 0) {
              puVar13 = puVar14;
            }
            if (0x3ffffffffffffffe < uVar11) {
              puVar13 = (undefined1 *)0x7fffffffffffffff;
            }
            if (puVar13 == (undefined1 *)0x0) {
              puVar12 = (undefined1 *)0x0;
            }
            else {
              puVar12 = puVar13;
              __Znwm();
            }
            puVar15 = puVar12 + ((long)puVar16 - (long)puVar20);
            puVar14 = puVar15 + 1;
            *puVar15 = uVar4;
            if (puVar16 != puVar20) {
              puVar15 = puVar16 + ~(ulong)puVar20;
              do {
                puVar16 = puVar16 + -1;
                puVar12[(long)puVar15] = *puVar16;
                puVar15 = puVar15 + -1;
              } while (puVar16 != puVar20);
              puVar16 = (undefined1 *)*param_3;
              puVar15 = puVar12;
            }
            *param_3 = (ulong)puVar15;
            param_3[1] = (ulong)puVar14;
            param_3[2] = (ulong)(puVar12 + (long)puVar13);
            if (puVar16 != (undefined1 *)0x0) {
              __ZdlPv(puVar16);
            }
            goto LAB_104aa13c8;
          }
LAB_104aa1514:
          puVar7 = param_3;
          FUN_104aa1644();
          puVar9 = &uStack_100;
          puVar10 = &uStack_100;
          pcStack_78 = FUN_104aa151c;
          lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar21 = (long *)puVar7[1];
          puStack_90 = puVar16;
          puStack_88 = param_3;
          puStack_80 = &stack0xfffffffffffffff0;
          if (puVar7[2] - (long)plVar21 < (param_2 & 0xffffffff)) {
            auStack_c8[0] = 0;
            cStack_a0 = '\0';
            if (puVar7[4] == 0) {
              *(undefined1 *)(puVar7 + 5) = 1;
            }
            puVar10 = (undefined8 *)auStack_c8;
            pplVar8 = extraout_x8;
            FUN_104aa18c4(extraout_x8);
            if (cStack_a0 == '\0') goto LAB_104aa1618;
            pplVar8 = (long **)auStack_c8;
          }
          else {
            uStack_e8 = param_2 & 0xffffffff;
            plStack_f0 = (long *)*puVar7;
            puVar7[1] = (long)plVar21 + uStack_e8;
            if (plStack_f0 == (long *)0x0) {
              uStack_d0 = 1;
              plStack_f0 = plVar21;
              FUN_104aa169c(extraout_x8,&plStack_f0);
              uStack_100 = 0;
              uStack_f8 = 0;
              FUN_104aa1658(&plStack_f0);
              *(undefined1 *)(extraout_x8 + 5) = 1;
            }
            else {
              if (plStack_f0 != (long *)0x1) {
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
                  if (bVar6) {
                    *plStack_f0 = *plStack_f0 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uStack_d8 = 0;
              uStack_d0 = 0;
              plStack_e0 = plVar21;
              FUN_104aa169c(extraout_x8,&plStack_f0);
              uStack_100 = 0;
              uStack_f8 = 0;
              FUN_104aa1658(&plStack_f0);
              *(undefined1 *)(extraout_x8 + 5) = 1;
              puVar10 = puVar9;
            }
            pplVar8 = &plStack_f0;
          }
          FUN_104aa186c(pplVar8);
LAB_104aa1618:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
            ___stack_chk_fail();
            pplVar8 = (long **)&DAT_10f62a4d8;
            FUN_104a6fa70();
            if (*(int *)(pplVar8 + 4) == 1) {
              plVar21 = (long *)*puVar10;
              pplVar8[1] = (long *)puVar10[1];
              *pplVar8 = plVar21;
            }
            else {
              FUN_104aa1800(pplVar8);
            }
            return pplVar8;
          }
          return pplVar8;
        }
LAB_104aa13d0:
        sVar19 = *(short *)(&UNK_10dd54c78 +
                           (ulong)(bVar2 & 0xf | (uint)(byte)(&UNK_10dd55278)[sVar3] << 4) * 2);
        if (*(ushort *)
             (&UNK_10dd52b58 +
             (ulong)(bVar2 & 0xf | (uint)*(ushort *)(&UNK_10dd54a78 + (long)sVar3 * 2) << 4) * 2) <
            0x100) {
          puVar16 = (undefined1 *)param_3[1];
          uVar4 = (undefined1)
                  *(ushort *)
                   (&UNK_10dd52b58 +
                   (ulong)(bVar2 & 0xf | (uint)*(ushort *)(&UNK_10dd54a78 + (long)sVar3 * 2) << 4) *
                   2);
          if (puVar16 < (undefined1 *)param_3[2]) {
            puVar15 = puVar16 + 1;
            *puVar16 = uVar4;
          }
          else {
            puVar20 = (undefined1 *)*param_3;
            puVar14 = (undefined1 *)(((long)puVar16 - (long)puVar20) + 1);
            if ((long)puVar14 < 0) goto LAB_104aa1514;
            uVar11 = (long)param_3[2] - (long)puVar20;
            puVar13 = (undefined1 *)(uVar11 * 2);
            if (puVar13 < puVar14 || (long)puVar13 - (long)puVar14 == 0) {
              puVar13 = puVar14;
            }
            if (0x3ffffffffffffffe < uVar11) {
              puVar13 = (undefined1 *)0x7fffffffffffffff;
            }
            if (puVar13 == (undefined1 *)0x0) {
              puVar14 = (undefined1 *)0x0;
            }
            else {
              puVar14 = puVar13;
              __Znwm();
            }
            puVar12 = puVar14 + ((long)puVar16 - (long)puVar20);
            puVar15 = puVar12 + 1;
            *puVar12 = uVar4;
            if (puVar16 != puVar20) {
              puVar12 = puVar16 + ~(ulong)puVar20;
              do {
                puVar16 = puVar16 + -1;
                puVar14[(long)puVar12] = *puVar16;
                puVar12 = puVar12 + -1;
              } while (puVar16 != puVar20);
              puVar16 = (undefined1 *)*param_3;
              puVar12 = puVar14;
            }
            *param_3 = (ulong)puVar12;
            param_3[1] = (ulong)puVar15;
            param_3[2] = (ulong)(puVar14 + (long)puVar13);
            if (puVar16 != (undefined1 *)0x0) {
              __ZdlPv(puVar16);
            }
          }
          param_3[1] = (ulong)puVar15;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
  }
  return (long **)(ulong)(uVar17 <= uStack_68);
}



/* Entry: 104aa151c; end: 104aa1643;  */

long ** FUN_104aa151c(long **param_1,undefined8 *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  ulong uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  char cStack_30;
  long lStack_28;
  
  puVar4 = &uStack_90;
  puVar5 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)param_2[1];
  if ((ulong)(param_2[2] - (long)plVar6) < (param_3 & 0xffffffff)) {
    auStack_58[0] = 0;
    cStack_30 = '\0';
    if (param_2[4] == 0) {
      *(undefined1 *)(param_2 + 5) = 1;
    }
    puVar5 = (undefined8 *)auStack_58;
    FUN_104aa18c4(param_1);
    if (cStack_30 == '\0') goto LAB_104aa1618;
    param_1 = (long **)auStack_58;
  }
  else {
    uStack_78 = param_3 & 0xffffffff;
    plStack_80 = (long *)*param_2;
    param_2[1] = (long)plVar6 + uStack_78;
    if (plStack_80 == (long *)0x0) {
      uStack_60 = 1;
      plStack_80 = plVar6;
      FUN_104aa169c(param_1,&plStack_80);
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_104aa1658(&plStack_80);
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      if (plStack_80 != (long *)0x1) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
          if (bVar2) {
            *plStack_80 = *plStack_80 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_68 = 0;
      uStack_60 = 0;
      plStack_70 = plVar6;
      FUN_104aa169c(param_1,&plStack_80);
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_104aa1658(&plStack_80);
      *(undefined1 *)(param_1 + 5) = 1;
      puVar5 = puVar4;
    }
    param_1 = &plStack_80;
  }
  FUN_104aa186c(param_1);
LAB_104aa1618:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pplVar3 = (long **)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (*(int *)(pplVar3 + 4) == 1) {
    plVar6 = (long *)*puVar5;
    pplVar3[1] = (long *)puVar5[1];
    *pplVar3 = plVar6;
  }
  else {
    FUN_104aa1800(pplVar3);
  }
  return pplVar3;
}



/* Entry: 104aa1644; end: 104aa1657;  */

undefined8 * FUN_104aa1644(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (*(int *)(puVar1 + 4) == 1) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
  }
  else {
    FUN_104aa1800(puVar1);
  }
  return puVar1;
}



/* Entry: 104aa1658; end: 104aa169b;  */

undefined8 * FUN_104aa1658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    FUN_104aa1800(param_1);
  }
  return param_1;
}



/* Entry: 104aa169c; end: 104aa16cf;  */

undefined1 * FUN_104aa169c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_104aa16d0();
  return param_1;
}



/* Entry: 104aa16d0; end: 104aa175b;  */

void FUN_104aa16d0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c4358)[*(uint *)(param_1 + 0x20)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x20);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c4370)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 104aa175c; end: 104aa177b;  */

undefined8 * FUN_104aa175c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return param_2;
}



/* Entry: 104aa177c; end: 104aa17cf;  */

void FUN_104aa177c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_2[1] = uVar5;
  *param_2 = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  return;
}



/* Entry: 104aa17d0; end: 104aa17ff;  */

void FUN_104aa17d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  return;
}



/* Entry: 104aa1800; end: 104aa186b;  */

undefined8 * FUN_104aa1800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 4) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c4358)[*(uint *)(param_1 + 4)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = 1;
  return param_1;
}



/* Entry: 104aa186c; end: 104aa18c3;  */

long FUN_104aa186c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c4358)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}



/* Entry: 104aa18c4; end: 104aa18f3;  */

undefined1 * FUN_104aa18c4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_104aa18f4();
  return param_1;
}



/* Entry: 104aa18f4; end: 104aa193f;  */

void FUN_104aa18f4(long param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 0x28) != '\0') {
    FUN_104aa169c();
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_104aa1658(param_2,&uStack_30);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



/* Entry: 104aa1940; end: 104aa1beb;  */

long **** FUN_104aa1940(long ****param_1,long ****param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long ***ppplVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  long ***ppplVar9;
  int iStack_e4;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  long **pplStack_90;
  long **pplStack_88;
  long **pplStack_80;
  ulong uStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long ***ppplStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_40;
  char cStack_38;
  char cStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar6 = param_2;
  FUN_104aa11c8();
  pppplVar7 = pppplVar6;
  if ((param_3 & 0xff) == 0) {
LAB_104aa1a68:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
LAB_104aa1b14:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return pppplVar7;
    }
  }
  else {
    if (((ulong)pppplVar6 & 0xff00000000) != 0) {
      ppplStack_e0 = (long ***)0x0;
      ppplStack_d8 = (long ***)0x0;
      puStack_d0 = (undefined1 *)0x0;
      iStack_e4 = 0;
      pppplVar7 = param_2;
      FUN_104aa1e14(param_2,pppplVar6,&iStack_e4,&ppplStack_e0);
      puVar4 = puStack_d0;
      ppplVar3 = ppplStack_d8;
      ppplVar9 = ppplStack_e0;
      if (((ulong)pppplVar7 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 5) = 0;
      }
      else {
        if (iStack_e4 == 2) {
          ppplStack_d8 = (long ***)0x0;
          puStack_d0 = (undefined1 *)0x0;
          ppplStack_e0 = (long ***)0x0;
          ppplStack_a8 = ppplVar3;
          ppplStack_b0 = ppplVar9;
          plStack_a0 = (long *)puVar4;
          pplStack_90 = (long **)CONCAT44(pplStack_90._4_4_,2);
          FUN_104aa1bec(param_1,param_2,&ppplStack_b0);
          pppplVar7 = &ppplStack_b0;
        }
        else {
          if (iStack_e4 == 1) {
            ppplStack_d8 = (long ***)0x0;
            puStack_d0 = (undefined1 *)0x0;
            ppplStack_e0 = (long ***)0x0;
            ppplStack_58 = ppplVar3;
            uStack_60 = (long ****)ppplVar9;
            puStack_50 = puVar4;
            uStack_40 = 2;
            FUN_104aa169c(param_1,&uStack_60);
            uStack_c0 = 0;
            ppplStack_b8 = (long ***)0x0;
            FUN_104aa1658(&uStack_60,&uStack_c0);
            *(undefined1 *)(param_1 + 5) = 1;
          }
          else {
            if (iStack_e4 != 0) goto LAB_104aa1b7c;
            uStack_60 = (long ****)0x0;
            ppplStack_58 = (long ***)0x0;
            uStack_40 = 1;
            FUN_104aa169c(param_1,&uStack_60);
            uStack_c0 = 0;
            ppplStack_b8 = (long ***)0x0;
            FUN_104aa1658(&uStack_60,&uStack_c0);
            *(undefined1 *)(param_1 + 5) = 1;
          }
          pppplVar7 = (long ****)&uStack_60;
        }
        FUN_104aa186c(pppplVar7);
      }
      pppplVar7 = (long ****)ppplStack_e0;
      if ((long ****)ppplStack_e0 != (long ****)0x0) {
        ppplStack_d8 = ppplStack_e0;
        __ZdlPv();
      }
      goto LAB_104aa1b14;
    }
    if ((((int)pppplVar6 == 0) || (ppplVar9 = param_2[1], ppplVar9 == param_2[2])) ||
       (*(char *)ppplVar9 != '\0')) {
      pppplVar7 = param_2;
      FUN_104aa151c(&uStack_60,param_2,pppplVar6);
      if (cStack_38 == '\0') goto LAB_104aa1a68;
      FUN_104aa169c(&pplStack_88,&uStack_60);
      ppplStack_e0 = (long ***)0x0;
      ppplStack_d8 = (long ***)0x0;
      FUN_104aa1658(&uStack_60,&ppplStack_e0);
      FUN_104aa1bec(param_1,param_2,&pplStack_88);
      pppplVar7 = (long ****)&pplStack_88;
      FUN_104aa186c(pppplVar7);
      if (cStack_38 != '\0') {
        pppplVar7 = (long ****)&uStack_60;
        FUN_104aa186c(pppplVar7);
      }
      goto LAB_104aa1b14;
    }
    param_2[1] = (long ***)((long)ppplVar9 + 1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      uVar8 = (ulong)((int)pppplVar6 - 1);
      pppplVar6 = (long ****)&pplStack_90;
      pppplVar7 = (long ****)&pplStack_90;
      lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppplVar9 = param_2[1];
      if ((ulong)((long)param_2[2] - (long)ppplVar9) < uVar8) {
        ppplStack_58 = (long ***)((ulong)ppplStack_58 & 0xffffffffffffff00);
        cStack_30 = '\0';
        if (param_2[4] == (long ***)0x0) {
          *(undefined1 *)(param_2 + 5) = 1;
        }
        pppplVar7 = &ppplStack_58;
        pppplVar6 = param_1;
        FUN_104aa18c4(param_1);
        if (cStack_30 == '\0') goto LAB_104aa1618;
        pppplVar6 = &ppplStack_58;
      }
      else {
        pplStack_80 = (long **)*param_2;
        param_2[1] = (long ***)((long)ppplVar9 + uVar8);
        uStack_78 = uVar8;
        if ((long ***)pplStack_80 == (long ***)0x0) {
          unaff_x20 = 1;
          uStack_60 = (long ****)CONCAT44(uStack_60._4_4_,1);
          pplStack_80 = (long **)ppplVar9;
          FUN_104aa169c(param_1,&pplStack_80);
          pplStack_90 = (long **)0x0;
          pplStack_88 = (long **)0x0;
          FUN_104aa1658(&pplStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
        }
        else {
          if ((long ***)pplStack_80 != (long ***)0x1) {
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pplStack_80,0x10);
              if (bVar2) {
                *pplStack_80 = (long *)((long)*pplStack_80 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          uStack_68 = 0;
          uStack_60 = (long ****)((ulong)uStack_60._4_4_ << 0x20);
          pplStack_70 = (long **)ppplVar9;
          FUN_104aa169c(param_1,&pplStack_80);
          pplStack_90 = (long **)0x0;
          pplStack_88 = (long **)0x0;
          FUN_104aa1658(&pplStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
          pppplVar7 = pppplVar6;
        }
        pppplVar6 = (long ****)&pplStack_80;
      }
      FUN_104aa186c(pppplVar6);
LAB_104aa1618:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return pppplVar6;
      }
      ___stack_chk_fail();
      pcStack_98 = FUN_104aa1644;
      pppplVar6 = (long ****)&DAT_10f62a4d8;
      plStack_a0 = (long *)&stack0xfffffffffffffff0;
      FUN_104a6fa70();
      ppplStack_a8 = (long ***)FUN_104aa1658;
      if (*(int *)(pppplVar6 + 4) == 1) {
        ppplVar9 = *pppplVar7;
        pppplVar6[1] = pppplVar7[1];
        *pppplVar6 = ppplVar9;
      }
      else {
        uStack_c0 = unaff_x20;
        ppplStack_b8 = (long ***)param_1;
        ppplStack_b0 = (long ***)&plStack_a0;
        FUN_104aa1800(pppplVar6);
      }
      return pppplVar6;
    }
  }
  ___stack_chk_fail();
LAB_104aa1b7c:
  FUN_104a6e964("abort();",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                ,0x2fa);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104aa1b98);
  (*pcVar5)();
}



/* Entry: 104aa1bec; end: 104aa1e13;  */

undefined8 *****
FUN_104aa1bec(long param_1,undefined8 *****param_2,long *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined8 *puStack_118;
  undefined2 *puStack_110;
  undefined2 uStack_102;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_c0 = (undefined8 ****)((ulong)ppppuStack_c0 & 0xffffffffffffff00);
  cStack_a8 = '\0';
  if (param_3 == (long *)0x0) {
LAB_104aa1d48:
    auStack_68[0] = 0;
    cStack_40 = '\0';
    puVar4 = (undefined8 *)auStack_68;
    FUN_104aa2148(param_1);
    if (cStack_40 == '\0') goto LAB_104aa1d70;
    param_2 = (undefined8 *****)auStack_68;
  }
  else {
    iVar5 = (int)param_3[4];
    if (iVar5 == 0) {
      if (*param_3 == 0) {
        lVar3 = (long)param_3 + 9;
        uVar6 = (ulong)*(byte *)(param_3 + 1);
      }
      else {
        uVar6 = param_3[1];
        lVar3 = param_3[2];
      }
      FUN_104aa1eb8(&ppppuStack_90,lVar3,lVar3 + uVar6);
      FUN_104aa2344(&ppppuStack_c0,&ppppuStack_90);
      if ((cStack_78 != '\0') && ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0)) {
        ppppuStack_88 = ppppuStack_90;
        __ZdlPv();
      }
      iVar5 = (int)param_3[4];
    }
    if (iVar5 == 1) {
      FUN_104aa1eb8(&ppppuStack_90,*param_3,*param_3 + param_3[1]);
      FUN_104aa2344(&ppppuStack_c0,&ppppuStack_90);
      if ((cStack_78 != '\0') && ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0)) {
        ppppuStack_88 = ppppuStack_90;
        __ZdlPv();
      }
      iVar5 = (int)param_3[4];
    }
    if (iVar5 == 2) {
      FUN_104aa1eb8(&ppppuStack_90,*param_3,param_3[1]);
      FUN_104aa2344(&ppppuStack_c0,&ppppuStack_90);
      if ((cStack_78 != '\0') && ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0)) {
        ppppuStack_88 = ppppuStack_90;
        __ZdlPv();
      }
    }
    uVar2 = uStack_b0;
    ppppuVar1 = ppppuStack_b8;
    ppppuVar8 = ppppuStack_c0;
    if (cStack_a8 == '\0') goto LAB_104aa1d48;
    ppppuStack_b8 = (undefined8 *****)0x0;
    uStack_b0 = 0;
    ppppuStack_c0 = (undefined8 *****)0x0;
    ppppuStack_88 = ppppuVar1;
    ppppuStack_90 = ppppuVar8;
    uStack_80 = uVar2;
    uStack_70 = 2;
    FUN_104aa169c(param_1,&ppppuStack_90);
    uStack_a0 = 0;
    uStack_98 = 0;
    puVar4 = &uStack_a0;
    FUN_104aa1658(&ppppuStack_90);
    *(undefined1 *)(param_1 + 0x28) = 1;
    param_2 = &ppppuStack_90;
  }
  FUN_104aa186c();
LAB_104aa1d70:
  if ((cStack_a8 != '\0') &&
     (param_2 = (undefined8 *****)ppppuStack_c0,
     (undefined8 *****)ppppuStack_c0 != (undefined8 *****)0x0)) {
    ppppuStack_b8 = ppppuStack_c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((((int)puVar4 != 0) && (FUN_104bd46a0(), cStack_a8 != '\0')) &&
       ((undefined8 *****)ppppuStack_c0 != (undefined8 *****)0x0)) {
      ppppuStack_b8 = ppppuStack_c0;
      __ZdlPv();
    }
    __Unwind_Resume();
    uStack_102 = 0;
    puStack_118 = &uStack_100;
    puStack_110 = &uStack_102;
    ppppuVar8 = param_2[1];
    uVar6 = (long)param_2[2] - (long)ppppuVar8;
    uVar7 = (ulong)puVar4 & 0xffffffff;
    if (uVar6 < ((ulong)puVar4 & 0xffffffff)) {
      if (param_2[4] == (undefined8 ****)0x0) {
        *(undefined1 *)(param_2 + 5) = 1;
      }
    }
    else {
      param_2[1] = (undefined8 ****)((long)ppppuVar8 + uVar7);
      uVar9 = uVar7;
      uStack_100 = param_4;
      uStack_f8 = param_5;
      if ((int)puVar4 != 0) {
        do {
          FUN_104aa23c8(&puStack_118,*(byte *)ppppuVar8 >> 4);
          FUN_104aa23c8(&puStack_118,*(byte *)ppppuVar8 & 0xf);
          uVar9 = uVar9 - 1;
          ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + 1);
        } while (uVar9 != 0);
      }
    }
    return (undefined8 *****)(ulong)(uVar7 <= uVar6);
  }
  return param_2;
}



/* Entry: 104aa1e14; end: 104aa1eb7;  */

bool FUN_104aa1e14(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 *puStack_58;
  undefined2 *puStack_50;
  undefined2 uStack_42;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_42 = 0;
  puStack_58 = &uStack_40;
  puStack_50 = &uStack_42;
  pbVar3 = *(byte **)(param_1 + 8);
  uVar1 = *(long *)(param_1 + 0x10) - (long)pbVar3;
  uVar2 = (ulong)param_2;
  if (uVar1 < param_2) {
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  else {
    *(byte **)(param_1 + 8) = pbVar3 + uVar2;
    uVar4 = uVar2;
    uStack_40 = param_3;
    uStack_38 = param_4;
    if (param_2 != 0) {
      do {
        FUN_104aa23c8(&puStack_58,*pbVar3 >> 4);
        FUN_104aa23c8(&puStack_58,*pbVar3 & 0xf);
        uVar4 = uVar4 - 1;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
    }
  }
  return uVar2 <= uVar1;
}



/* Entry: 104aa1eb8; end: 104aa2147;  */

void FUN_104aa1eb8(long *param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  do {
    pbVar6 = param_3;
    pbVar7 = param_2;
    if (pbVar6 == param_2) break;
    param_3 = pbVar6 + -1;
    pbVar7 = pbVar6;
  } while (pbVar6[-1] == 0x3d);
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  lVar8 = (long)pbVar7 - (long)param_2;
  lVar4 = lVar8 * 3;
  lVar1 = lVar4 + 3;
  if (-1 < lVar4) {
    lVar1 = lVar4;
  }
  func_0x00010089a97c(&lStack_60,(lVar1 >> 2) + 3);
  if (3 < lVar8) {
    do {
      if ((((0x3f < (byte)(&UNK_10dd55378)[*param_2]) ||
           (bVar2 = (&UNK_10dd55378)[param_2[1]], 0x3f < bVar2)) ||
          (bVar3 = (&UNK_10dd55378)[param_2[2]], 0x3f < bVar3)) ||
         (0x3f < (byte)(&UNK_10dd55378)[param_2[3]])) goto LAB_104aa2094;
      bStack_63 = (byte)(((uint)bVar2 << 0xc) >> 0x10) |
                  (byte)(((uint)(byte)(&UNK_10dd55378)[*param_2] << 0x12) >> 0x10);
      bStack_62 = (byte)(((uint)bVar3 << 6) >> 8) | (byte)(((uint)bVar2 << 0xc) >> 8);
      bStack_61 = (&UNK_10dd55378)[param_2[3]] | bVar3 << 6;
      FUN_104aa66dc(&lStack_60,lStack_58,&bStack_63,&lStack_60,3);
      param_2 = param_2 + 4;
      lVar8 = lVar8 + -4;
    } while (3 < lVar8);
  }
  switch(lVar8) {
  case 0:
    break;
  case 1:
LAB_104aa2094:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (lStack_60 == 0) {
      return;
    }
    lStack_58 = lStack_60;
    __ZdlPv();
    return;
  case 2:
    if ((0x3f < (byte)(&UNK_10dd55378)[*param_2]) ||
       (bVar2 = (&UNK_10dd55378)[param_2[1]], 0x3f < bVar2 || (bVar2 & 0xf) != 0))
    goto LAB_104aa2094;
    bStack_63 = (byte)(((uint)bVar2 << 0xc) >> 0x10) |
                (byte)(((uint)(byte)(&UNK_10dd55378)[*param_2] << 0x12) >> 0x10);
    FUN_104aa2250(&lStack_60,&bStack_63);
    break;
  case 3:
    if (((0x3f < (byte)(&UNK_10dd55378)[*param_2]) ||
        (bVar2 = (&UNK_10dd55378)[param_2[1]], 0x3f < bVar2)) ||
       ((bVar3 = (&UNK_10dd55378)[param_2[2]], 0x3f < bVar3 || ((bVar3 & 3) != 0))))
    goto LAB_104aa2094;
    bStack_63 = (byte)(((uint)bVar2 << 0xc) >> 0x10) |
                (byte)(((uint)(byte)(&UNK_10dd55378)[*param_2] << 0x12) >> 0x10);
    FUN_104aa2250(&lStack_60,&bStack_63);
    bStack_63 = (byte)(((uint)bVar3 << 6) >> 8) | (byte)(((uint)bVar2 << 0xc) >> 8);
    FUN_104aa2250(&lStack_60,&bStack_63);
    break;
  default:
    FUN_104a6e964("return out;",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                  ,0x3a0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104aa211c);
    (*pcVar5)();
  }
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[2] = lStack_50;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104aa2148; end: 104aa224f;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_104aa2148(undefined1 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  
  if ((*(long *)(param_2 + 0x20) != 0) || (*(char *)(param_2 + 0x28) != '\0')) {
    *param_1 = 0;
    param_1[0x28] = 0;
    FUN_104aa18f4(param_1,param_3);
    return param_1;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_104ab5920(auStack_60,2,"illegal base64 encoding",0x17,&uStack_39,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  func_0x000100482b64(&puStack_38);
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (auStack_60[0] != uVar1) {
    *(ulong *)(param_2 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa21fc;
    func_0x00010084dad0();
    uVar1 = auStack_60[0];
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa21fc:
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
  FUN_104aa18c4(param_1,param_3);
  return param_1;
}



/* Entry: 104aa2250; end: 104aa2343;  */

void FUN_104aa2250(ulong *param_1,ulong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar7 = (undefined1 *)param_1[1];
  if (puVar7 < (undefined1 *)param_1[2]) {
    puVar6 = puVar7 + 1;
    *puVar7 = (char)*param_2;
  }
  else {
    puVar8 = (undefined1 *)*param_1;
    puVar2 = (undefined1 *)(((long)puVar7 - (long)puVar8) + 1);
    if ((long)puVar2 < 0) {
      FUN_104aa1644();
      cVar1 = (char)param_1[3];
      if (cVar1 == (char)param_2[3]) {
        if (cVar1 != '\0') {
          func_0x0001006203d4();
          uVar3 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar3;
          param_1[2] = param_2[2];
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          return;
        }
      }
      else if (cVar1 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar3;
        param_1[2] = param_2[2];
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        if (*param_1 != 0) {
          param_1[1] = *param_1;
          __ZdlPv();
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    uVar3 = (long)param_1[2] - (long)puVar8;
    puVar5 = (undefined1 *)(uVar3 * 2);
    if (puVar5 < puVar2 || (long)puVar5 - (long)puVar2 == 0) {
      puVar5 = puVar2;
    }
    if (0x3ffffffffffffffe < uVar3) {
      puVar5 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar5 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = puVar5;
      __Znwm();
    }
    puVar4 = puVar2 + ((long)puVar7 - (long)puVar8);
    puVar6 = puVar4 + 1;
    *puVar4 = (char)*param_2;
    if (puVar7 != puVar8) {
      puVar4 = puVar7 + ~(ulong)puVar8;
      do {
        puVar7 = puVar7 + -1;
        puVar2[(long)puVar4] = *puVar7;
        puVar4 = puVar4 + -1;
      } while (puVar7 != puVar8);
      puVar7 = (undefined1 *)*param_1;
      puVar4 = puVar2;
    }
    *param_1 = (ulong)puVar4;
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)(puVar2 + (long)puVar5);
    if (puVar7 != (undefined1 *)0x0) {
      __ZdlPv(puVar7);
    }
  }
  param_1[1] = (ulong)puVar6;
  return;
}



/* Entry: 104aa2344; end: 104aa23c7;  */

void FUN_104aa2344(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (char)param_1[3];
  if (cVar1 == (char)param_2[3]) {
    if (cVar1 != '\0') {
      func_0x0001006203d4();
      lVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar2;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 104aa23c8; end: 104aa2537;  */

undefined1  [16] FUN_104aa23c8(undefined8 *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long **pplVar16;
  undefined8 uVar17;
  short *psVar18;
  ulong uVar19;
  undefined8 extraout_x8;
  undefined8 *puVar20;
  long lVar21;
  int *piVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 *puStack_1d0;
  ulong uStack_1c8;
  byte bStack_1b9;
  long *aplStack_1b8 [4];
  long lStack_198;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
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
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  psVar18 = (short *)param_1[1];
  uVar3 = *(ushort *)
           (&UNK_10dd52b58 +
           (ulong)((int)param_2 + (uint)*(ushort *)(&UNK_10dd54a78 + (long)*psVar18 * 2) * 0x10) * 2
           );
  sVar4 = *(short *)(&UNK_10dd54c78 +
                    (ulong)((int)param_2 + (uint)(byte)(&UNK_10dd55278)[*psVar18] * 0x10) * 2);
  if (uVar3 < 0x100) {
    puVar20 = (undefined8 *)*param_1;
    piVar22 = (int *)*puVar20;
    if (*piVar22 == 0) {
      if ((uVar3 & 0xff) == 0) {
        *piVar22 = 1;
        goto LAB_104aa2508;
      }
      *piVar22 = 2;
    }
    puVar24 = (undefined8 *)puVar20[1];
    puVar20 = (undefined8 *)puVar24[1];
    if (puVar20 < (undefined8 *)puVar24[2]) {
      lVar25 = (long)puVar20 + 1;
      *(char *)puVar20 = (char)uVar3;
      puVar12 = param_1;
    }
    else {
      puVar26 = (undefined8 *)*puVar24;
      puVar11 = (undefined8 *)(((long)puVar20 - (long)puVar26) + 1);
      if ((long)puVar11 < 0) {
        puVar20 = puVar24;
        FUN_104aa1644();
        pcStack_58 = FUN_104aa2538;
        lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_d8 = puVar20[1];
        plStack_e0 = (long *)*puVar20;
        uStack_c8 = puVar20[3];
        uStack_d0 = puVar20[2];
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar20[3] = 0;
        puVar20[2] = 0;
        puStack_70 = puVar24;
        puStack_68 = param_1;
        puStack_60 = &stack0xfffffffffffffff0;
        func_0x0001004bca54(&uStack_c0,&plStack_e0);
        uVar10 = uStack_a8;
        uVar9 = uStack_b0;
        uVar8 = uStack_b8;
        uVar17 = uStack_c0;
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        *(undefined8 *)(param_4 + 0x10) = uVar8;
        *(undefined8 *)(param_4 + 8) = uVar17;
        *(undefined8 *)(param_4 + 0x20) = uVar10;
        *(undefined8 *)(param_4 + 0x18) = uVar9;
        plVar13 = plStack_e0;
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar25 = *plStack_e0;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar6) {
              *plStack_e0 = lVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar25 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          auVar28._8_8_ = param_2;
          auVar28._0_8_ = plVar13;
          return auVar28;
        }
        ___stack_chk_fail();
        if ((int)param_2 != 0) {
          FUN_104bd46a0();
          func_0x0001004b6d90(&plStack_e0);
        }
        plVar14 = plVar13;
        __Unwind_Resume();
        puVar1 = param_2 + 0x74;
        uVar2 = *param_2;
        *param_2 = uVar2 | 1;
        if ((uVar2 & 1) == 0) {
          param_2[0x76] = 0;
          param_2[0x77] = 0;
          puVar1[0] = 0;
          puVar1[1] = 0;
          param_2[0x7a] = 0;
          param_2[0x7b] = 0;
          param_2[0x78] = 0;
          param_2[0x79] = 0;
        }
        pcStack_e8 = FUN_104aa2608;
        lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_100 = puVar24;
        plStack_f8 = plVar13;
        ppuStack_f0 = &puStack_60;
        FUN_104adf4a4(&plStack_160,plVar14);
        uVar9 = uStack_148;
        uVar8 = uStack_150;
        uVar17 = uStack_158;
        plVar13 = plStack_160;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_158 = 0;
        plStack_160 = (long *)0x0;
        plVar15 = *(long **)puVar1;
        uStack_138 = *(undefined8 *)(param_2 + 0x78);
        uStack_140 = *(undefined8 *)(param_2 + 0x76);
        uStack_130 = *(undefined8 *)(param_2 + 0x7a);
        *(long **)puVar1 = plVar13;
        *(undefined8 *)(param_2 + 0x78) = uVar8;
        *(undefined8 *)(param_2 + 0x76) = uVar17;
        *(undefined8 *)(param_2 + 0x7a) = uVar9;
        uStack_120 = uStack_140;
        uStack_118 = uStack_138;
        uStack_110 = uStack_130;
        if ((long *)0x1 < plVar15) {
          do {
            lVar25 = *plVar15;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = lVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar25 + -1 == 0) {
            (*(code *)plVar15[1])();
          }
        }
        plVar13 = plStack_160;
        if ((long *)0x1 < plStack_160) {
          do {
            lVar25 = *plStack_160;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
            if (bVar6) {
              *plStack_160 = lVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar25 + -1 == 0) {
            (*(code *)plStack_160[1])();
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
          auVar29._8_8_ = plVar14;
          auVar29._0_8_ = plVar13;
          return auVar29;
        }
        ___stack_chk_fail();
        if ((int)plVar14 != 0) {
          FUN_104bd46a0();
        }
        __Unwind_Resume();
        uVar17 = 5;
        lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_104adf4a4(aplStack_1b8,plVar13);
        pplVar16 = aplStack_1b8;
        FUN_104aa288c(pplVar16);
        func_0x000100741c30(&puStack_1d0,pplVar16,uVar17);
        ppuVar7 = (undefined1 **)puStack_1d0;
        if (-1 < (char)bStack_1b9) {
          uStack_1c8 = (ulong)bStack_1b9;
          ppuVar7 = &puStack_1d0;
        }
        uVar17 = 5;
        FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar7,uStack_1c8);
        if ((char)bStack_1b9 < '\0') {
          __ZdlPv(puStack_1d0);
        }
        plVar13 = aplStack_1b8[0];
        if ((long *)0x1 < aplStack_1b8[0]) {
          do {
            lVar25 = *aplStack_1b8[0];
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(aplStack_1b8[0],0x10);
            if (bVar6) {
              *aplStack_1b8[0] = lVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar25 + -1 == 0) {
            (*(code *)aplStack_1b8[0][1])();
            plVar13 = aplStack_1b8[0];
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
          auVar30._8_8_ = uVar17;
          auVar30._0_8_ = plVar13;
          return auVar30;
        }
        ___stack_chk_fail();
        if ((int)uVar17 != 0) {
          FUN_104bd46a0();
          if ((char)bStack_1b9 < '\0') {
            __ZdlPv(puStack_1d0);
          }
          func_0x0001004b6d90(aplStack_1b8);
        }
        __Unwind_Resume();
        uVar19 = plVar13[1] & 0xff;
        lVar25 = (long)plVar13 + 9;
        if (*plVar13 != 0) {
          uVar19 = plVar13[1];
          lVar25 = plVar13[2];
        }
        auVar31._8_8_ = uVar19;
        auVar31._0_8_ = lVar25;
        return auVar31;
      }
      uVar19 = (long)puVar24[2] - (long)puVar26;
      puVar23 = (undefined8 *)(uVar19 * 2);
      if (puVar23 < puVar11 || (long)puVar23 - (long)puVar11 == 0) {
        puVar23 = puVar11;
      }
      if (0x3ffffffffffffffe < uVar19) {
        puVar23 = (undefined8 *)0x7fffffffffffffff;
      }
      if (puVar23 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = puVar23;
        __Znwm();
      }
      puVar12 = (undefined8 *)((long)puVar11 + ((long)puVar20 - (long)puVar26));
      lVar25 = (long)puVar12 + 1;
      *(char *)puVar12 = (char)uVar3;
      if (puVar20 != puVar26) {
        lVar21 = ~(ulong)puVar26 + (long)puVar20;
        do {
          puVar20 = (undefined8 *)((long)puVar20 + -1);
          *(undefined1 *)((long)puVar11 + lVar21) = *(undefined1 *)puVar20;
          lVar21 = lVar21 + -1;
        } while (puVar20 != puVar26);
        puVar20 = (undefined8 *)*puVar24;
        puVar12 = puVar11;
      }
      *puVar24 = puVar12;
      puVar24[1] = lVar25;
      puVar24[2] = (long)puVar11 + (long)puVar23;
      if (puVar20 != (undefined8 *)0x0) {
        __ZdlPv(puVar20);
        puVar12 = puVar20;
      }
    }
    puVar24[1] = lVar25;
    psVar18 = (short *)param_1[1];
    param_1 = puVar12;
  }
LAB_104aa2508:
  *psVar18 = sVar4;
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = param_1;
  return auVar27;
}



/* Entry: 104aa2538; end: 104aa2607;  */

undefined1  [16] FUN_104aa2538(undefined8 *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long **pplVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 extraout_x8;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 *puStack_180;
  ulong uStack_178;
  byte bStack_169;
  long *aplStack_168 [4];
  long lStack_148;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
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
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = param_1[1];
  plStack_90 = (long *)*param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x0001004bca54(&uStack_70,&plStack_90);
  uVar9 = uStack_58;
  uVar8 = uStack_60;
  uVar7 = uStack_68;
  uVar14 = uStack_70;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_4 + 0x10) = uVar7;
  *(undefined8 *)(param_4 + 8) = uVar14;
  *(undefined8 *)(param_4 + 0x20) = uVar9;
  *(undefined8 *)(param_4 + 0x18) = uVar8;
  plVar10 = plStack_90;
  if ((long *)0x1 < plStack_90) {
    do {
      lVar15 = *plStack_90;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar5) {
        *plStack_90 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = plVar10;
    return auVar16;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_90);
  }
  __Unwind_Resume();
  puVar1 = param_2 + 0x74;
  uVar3 = *param_2;
  *param_2 = uVar3 | 1;
  if ((uVar3 & 1) == 0) {
    param_2[0x76] = 0;
    param_2[0x77] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x7a] = 0;
    param_2[0x7b] = 0;
    param_2[0x78] = 0;
    param_2[0x79] = 0;
  }
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_110,plVar10);
  uVar8 = uStack_f8;
  uVar7 = uStack_100;
  uVar14 = uStack_108;
  plVar12 = plStack_110;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  plVar11 = *(long **)puVar1;
  uStack_e8 = *(undefined8 *)(param_2 + 0x78);
  uStack_f0 = *(undefined8 *)(param_2 + 0x76);
  uStack_e0 = *(undefined8 *)(param_2 + 0x7a);
  *(long **)puVar1 = plVar12;
  *(undefined8 *)(param_2 + 0x78) = uVar7;
  *(undefined8 *)(param_2 + 0x76) = uVar14;
  *(undefined8 *)(param_2 + 0x7a) = uVar8;
  uStack_d0 = uStack_f0;
  uStack_c8 = uStack_e8;
  uStack_c0 = uStack_e0;
  if ((long *)0x1 < plVar11) {
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plVar11[1])();
    }
  }
  plVar12 = plStack_110;
  if ((long *)0x1 < plStack_110) {
    do {
      lVar15 = *plStack_110;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar5) {
        *plStack_110 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar17._8_8_ = plVar10;
    auVar17._0_8_ = plVar12;
    return auVar17;
  }
  ___stack_chk_fail();
  if ((int)plVar10 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar14 = 5;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_168,plVar12);
  pplVar13 = aplStack_168;
  FUN_104aa288c(pplVar13);
  func_0x000100741c30(&puStack_180,pplVar13,uVar14);
  ppuVar6 = (undefined1 **)puStack_180;
  if (-1 < (char)bStack_169) {
    uStack_178 = (ulong)bStack_169;
    ppuVar6 = &puStack_180;
  }
  uVar14 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar6,uStack_178);
  if ((char)bStack_169 < '\0') {
    __ZdlPv(puStack_180);
  }
  plVar10 = aplStack_168[0];
  if ((long *)0x1 < aplStack_168[0]) {
    do {
      lVar15 = *aplStack_168[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_168[0],0x10);
      if (bVar5) {
        *aplStack_168[0] = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)aplStack_168[0][1])();
      plVar10 = aplStack_168[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    auVar18._8_8_ = uVar14;
    auVar18._0_8_ = plVar10;
    return auVar18;
  }
  ___stack_chk_fail();
  if ((int)uVar14 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_169 < '\0') {
      __ZdlPv(puStack_180);
    }
    func_0x0001004b6d90(aplStack_168);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar15 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar15 = plVar10[2];
  }
  auVar19._8_8_ = uVar2;
  auVar19._0_8_ = lVar15;
  return auVar19;
}



/* Entry: 104aa2608; end: 104aa262f;  */

undefined1  [16] FUN_104aa2608(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = param_2 + 0x74;
  uVar3 = *param_2;
  *param_2 = uVar3 | 1;
  if ((uVar3 & 1) == 0) {
    param_2[0x76] = 0;
    param_2[0x77] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x7a] = 0;
    param_2[0x7b] = 0;
    param_2[0x78] = 0;
    param_2[0x79] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_1);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar12 = uStack_78;
  plVar10 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)puVar1;
  uStack_58 = *(undefined8 *)(param_2 + 0x78);
  uStack_60 = *(undefined8 *)(param_2 + 0x76);
  uStack_50 = *(undefined8 *)(param_2 + 0x7a);
  *(long **)puVar1 = plVar10;
  *(undefined8 *)(param_2 + 0x78) = uVar7;
  *(undefined8 *)(param_2 + 0x76) = uVar12;
  *(undefined8 *)(param_2 + 0x7a) = uVar8;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar9) {
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  plVar10 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar12 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar10);
  pplVar11 = aplStack_d8;
  FUN_104aa288c(pplVar11);
  func_0x000100741c30(&puStack_f0,pplVar11,uVar12);
  ppuVar6 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar6 = &puStack_f0;
  }
  uVar12 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar6,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar10 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar13 = *aplStack_d8[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar5) {
        *aplStack_d8[0] = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar10 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = plVar10;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar12 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar13 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar13 = plVar10[2];
  }
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = lVar13;
  return auVar16;
}



/* Entry: 104aa2630; end: 104aa272f;  */

undefined1  [16] FUN_104aa2630(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_2);
  uVar6 = uStack_68;
  uVar5 = uStack_70;
  uVar10 = uStack_78;
  plVar8 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar7 = (long *)*param_1;
  uStack_58 = param_1[2];
  uStack_60 = param_1[1];
  uStack_50 = param_1[3];
  *param_1 = plVar8;
  param_1[2] = uVar5;
  param_1[1] = uVar10;
  param_1[3] = uVar6;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar7) {
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plVar7[1])();
    }
  }
  plVar8 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar11 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = plVar8;
    return auVar12;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar10 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar8);
  pplVar9 = aplStack_d8;
  FUN_104aa288c(pplVar9);
  func_0x000100741c30(&puStack_f0,pplVar9,uVar10);
  ppuVar4 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar4 = &puStack_f0;
  }
  uVar10 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar4,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar8 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar11 = *aplStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar3) {
        *aplStack_d8[0] = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar8 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = plVar8;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)uVar10 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar8[1] & 0xff;
  lVar11 = (long)plVar8 + 9;
  if (*plVar8 != 0) {
    uVar1 = plVar8[1];
    lVar11 = plVar8[2];
  }
  auVar14._8_8_ = uVar1;
  auVar14._0_8_ = lVar11;
  return auVar14;
}



/* Entry: 104aa2730; end: 104aa2753;  */

undefined1  [16] FUN_104aa2730(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  long *aplStack_58 [4];
  long lStack_38;
  
  uVar7 = 5;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_58,param_2);
  pplVar5 = aplStack_58;
  FUN_104aa288c(pplVar5);
  func_0x000100741c30(&puStack_70,pplVar5,uVar7);
  ppuVar4 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar4 = &puStack_70;
  }
  uVar7 = 5;
  FUN_104adf434(param_1,&DAT_10f760227,5,ppuVar4,uStack_68);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  plVar6 = aplStack_58[0];
  if ((long *)0x1 < aplStack_58[0]) {
    do {
      lVar8 = *aplStack_58[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(aplStack_58[0],0x10);
      if (bVar3) {
        *aplStack_58[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)aplStack_58[0][1])();
      plVar6 = aplStack_58[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((int)uVar7 != 0) {
      FUN_104bd46a0();
      if ((char)bStack_59 < '\0') {
        __ZdlPv(puStack_70);
      }
      func_0x0001004b6d90(aplStack_58);
    }
    __Unwind_Resume();
    uVar1 = plVar6[1] & 0xff;
    lVar8 = (long)plVar6 + 9;
    if (*plVar6 != 0) {
      uVar1 = plVar6[1];
      lVar8 = plVar6[2];
    }
    auVar10._8_8_ = uVar1;
    auVar10._0_8_ = lVar8;
    return auVar10;
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 104aa2754; end: 104aa288b;  */

undefined1  [16]
FUN_104aa2754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5,code *param_6)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  long *aplStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_3;
  (*param_5)(aplStack_58,param_4);
  pplVar5 = aplStack_58;
  (*param_6)(pplVar5);
  func_0x000100741c30(&puStack_70,pplVar5,uVar7);
  ppuVar4 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar4 = &puStack_70;
  }
  FUN_104adf434(param_1,param_2,param_3,ppuVar4,uStack_68);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  plVar6 = aplStack_58[0];
  if ((long *)0x1 < aplStack_58[0]) {
    do {
      lVar8 = *aplStack_58[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(aplStack_58[0],0x10);
      if (bVar3) {
        *aplStack_58[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)aplStack_58[0][1])();
      plVar6 = aplStack_58[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      FUN_104bd46a0();
      if ((char)bStack_59 < '\0') {
        __ZdlPv(puStack_70);
      }
      func_0x0001004b6d90(aplStack_58);
    }
    __Unwind_Resume();
    uVar1 = plVar6[1] & 0xff;
    lVar8 = (long)plVar6 + 9;
    if (*plVar6 != 0) {
      uVar1 = plVar6[1];
      lVar8 = plVar6[2];
    }
    auVar10._8_8_ = uVar1;
    auVar10._0_8_ = lVar8;
    return auVar10;
  }
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 104aa288c; end: 104aa28f7;  */

undefined1  [16] FUN_104aa288c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1[1] & 0xff;
  lVar2 = (long)param_1 + 9;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
    lVar2 = param_1[2];
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 104aa28f8; end: 104aa29b3;  */

void FUN_104aa28f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000100744a40();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 4;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x1a8) = (int)lVar7;
  return;
}



/* Entry: 104aa29b4; end: 104aa29f7;  */

void FUN_104aa29b4(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 4;
  param_2[0x6a] = uVar1;
  return;
}



/* Entry: 104aa29f8; end: 104aa2ac3;  */

void FUN_104aa29f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  func_0x000100741c30(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 104aa2ac4; end: 104aa2b7f;  */

void FUN_104aa2ac4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000100744fe4();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 8;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x1a4) = (int)lVar7;
  return;
}



/* Entry: 104aa2b80; end: 104aa2bc3;  */

void FUN_104aa2b80(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 8;
  param_2[0x69] = uVar1;
  return;
}



/* Entry: 104aa2bc4; end: 104aa2cbf;  */

void FUN_104aa2bc4(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*param_5)();
  (*param_6)();
  func_0x0001004d52e8();
  lStack_70 = param_4 - (long)auStack_68;
  puStack_78 = auStack_68;
  func_0x000100741c30(&puStack_90,auStack_68);
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar1 = &puStack_90;
  }
  FUN_104adf434(param_1,param_2,param_3,ppuVar1,uStack_88);
  if ((char)bStack_79 < '\0') {
    param_2 = puStack_90;
    __ZdlPv(puStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    __Unwind_Resume(param_2);
    return;
  }
  return;
}



/* Entry: 104aa2cc0; end: 104aa2cc3;  */

void FUN_104aa2cc0(void)

{
  return;
}



/* Entry: 104aa2cc4; end: 104aa2da7;  */

void FUN_104aa2cc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  uint *puStack_50;
  uint *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = (uint *)param_1[1];
  puStack_50 = (uint *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar6 = (uint *)((ulong)puStack_48 & 0xff);
  uVar4 = (ulong)&puStack_50 | 9;
  if (puStack_50 != (uint *)0x0) {
    puVar6 = puStack_48;
    uVar4 = uStack_40;
  }
  func_0x0001005612f0(uVar4,puVar6,param_2,param_3);
  puVar5 = puStack_50;
  if ((uint *)0x1 < puStack_50) {
    do {
      lVar7 = *(long *)puStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar3) {
        *(long *)puStack_50 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(puStack_50 + 2))();
    }
  }
  *(int *)(param_4 + 8) = (int)uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((int)puVar6 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&puStack_50);
    }
    __Unwind_Resume();
    uVar1 = *puVar5;
    *puVar6 = *puVar6 | 0x10;
    puVar6[0x68] = uVar1;
    return;
  }
  return;
}



/* Entry: 104aa2da8; end: 104aa2deb;  */

void FUN_104aa2da8(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x10;
  param_2[0x68] = uVar1;
  return;
}



/* Entry: 104aa2dec; end: 104aa2eb7;  */

void FUN_104aa2dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  func_0x000100741c30(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 104aa2eb8; end: 104aa2f73;  */

void FUN_104aa2eb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000100746448();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x20;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x19c) = (int)lVar7;
  return;
}



/* Entry: 104aa2f74; end: 104aa2fb7;  */

void FUN_104aa2f74(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x20;
  param_2[0x67] = uVar1;
  return;
}



/* Entry: 104aa2fb8; end: 104aa3083;  */

void FUN_104aa2fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  func_0x000100741c30(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 104aa3084; end: 104aa30c7;  */

void FUN_104aa3084(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_104aa30c8();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa3184();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(char *)(param_1 + 1) = (char)lVar1;
  return;
}



/* Entry: 104aa30c8; end: 104aa3183;  */

undefined1 * FUN_104aa30c8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_104adef98(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0(plVar4);
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam00000001130a5b30 & 1) == 0) {
    iVar5 = 0x130a5b30;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001130a5af0 = 0;
      puRam00000001130a5af8 = &SUB_100744a04;
      pcRam00000001130a5b00 = FUN_104aa32d0;
      pcRam00000001130a5b08 = FUN_104aa3214;
      uRam00000001130a5b10 = 0x104aa32f0;
      puRam00000001130a5b18 = &DAT_10f466389;
      uRam00000001130a5b20 = 2;
      uRam00000001130a5b28 = 0;
      ___cxa_guard_release(0x1130a5b30);
    }
  }
  return (undefined1 *)0x1130a5af0;
}



/* Entry: 104aa3184; end: 104aa3213;  */

undefined8 FUN_104aa3184(void)

{
  int iVar1;
  
  if ((bRam00000001130a5b30 & 1) == 0) {
    iVar1 = 0x130a5b30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5af0 = 0;
      puRam00000001130a5af8 = &SUB_100744a04;
      pcRam00000001130a5b00 = FUN_104aa32d0;
      pcRam00000001130a5b08 = FUN_104aa3214;
      uRam00000001130a5b10 = 0x104aa32f0;
      puRam00000001130a5b18 = &DAT_10f466389;
      uRam00000001130a5b20 = 2;
      uRam00000001130a5b28 = 0;
      ___cxa_guard_release(0x1130a5b30);
    }
  }
  return 0x1130a5af0;
}



/* Entry: 104aa3214; end: 104aa32cf;  */

void FUN_104aa3214(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB81(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_104adef98();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined1 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x40;
  *(char *)(CONCAT44(uVar6,iVar5) + 0x198) = (char)lVar7;
  return;
}



/* Entry: 104aa32d0; end: 104aa3313;  */

void FUN_104aa32d0(undefined1 *param_1,uint *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x40;
  *(undefined1 *)(param_2 + 0x66) = uVar1;
  return;
}



/* Entry: 104aa3314; end: 104aa33df;  */

void FUN_104aa3314(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  func_0x000100741c30(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 104aa33e0; end: 104aa3423;  */

void FUN_104aa33e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_104aa3424();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa34e0();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 104aa3424; end: 104aa34df;  */

undefined1 * FUN_104aa3424(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  func_0x00010082af0c(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0(plVar4);
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam00000001130a5b78 & 1) == 0) {
    iVar5 = 0x130a5b78;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001130a5b38 = 0;
      puRam00000001130a5b40 = &SUB_100744a04;
      pcRam00000001130a5b48 = FUN_104aa362c;
      pcRam00000001130a5b50 = FUN_104aa3570;
      uRam00000001130a5b58 = 0x104aa364c;
      pcRam00000001130a5b60 = "grpc-encoding";
      uRam00000001130a5b68 = 0xd;
      uRam00000001130a5b70 = 0;
      ___cxa_guard_release(0x1130a5b78);
    }
  }
  return (undefined1 *)0x1130a5b38;
}



/* Entry: 104aa34e0; end: 104aa356f;  */

undefined8 FUN_104aa34e0(void)

{
  int iVar1;
  
  if ((bRam00000001130a5b78 & 1) == 0) {
    iVar1 = 0x130a5b78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5b38 = 0;
      puRam00000001130a5b40 = &SUB_100744a04;
      pcRam00000001130a5b48 = FUN_104aa362c;
      pcRam00000001130a5b50 = FUN_104aa3570;
      uRam00000001130a5b58 = 0x104aa364c;
      pcRam00000001130a5b60 = "grpc-encoding";
      uRam00000001130a5b68 = 0xd;
      uRam00000001130a5b70 = 0;
      ___cxa_guard_release(0x1130a5b78);
    }
  }
  return 0x1130a5b38;
}



/* Entry: 104aa3570; end: 104aa362b;  */

void FUN_104aa3570(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x00010082af0c();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x80;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x194) = (int)lVar7;
  return;
}



/* Entry: 104aa362c; end: 104aa366f;  */

void FUN_104aa362c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x80;
  param_2[0x65] = uVar1;
  return;
}



/* Entry: 104aa3670; end: 104aa373b;  */

void FUN_104aa3670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  func_0x000100741c30(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 104aa373c; end: 104aa375f;  */

char * FUN_104aa373c(char *param_1)

{
  char *pcVar1;
  
  FUN_104ab1470();
  pcVar1 = "<discarded-invalid-value>";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  return pcVar1;
}



/* Entry: 104aa3760; end: 104aa37a3;  */

void FUN_104aa3760(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_104aa3424();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa37a4();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 104aa37a4; end: 104aa3833;  */

undefined8 FUN_104aa37a4(void)

{
  int iVar1;
  
  if ((bRam00000001130a5bc0 & 1) == 0) {
    iVar1 = 0x130a5bc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5b80 = 0;
      puRam00000001130a5b88 = &SUB_100744a04;
      pcRam00000001130a5b90 = FUN_104aa3834;
      pcRam00000001130a5b98 = FUN_104aa3570;
      uRam00000001130a5ba0 = 0x104aa384c;
      pcRam00000001130a5ba8 = "grpc-internal-encoding-request";
      uRam00000001130a5bb0 = 0x1e;
      uRam00000001130a5bb8 = 0;
      ___cxa_guard_release(0x1130a5bc0);
    }
  }
  return 0x1130a5b80;
}



/* Entry: 104aa3834; end: 104aa386f;  */

void FUN_104aa3834(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x100;
  param_2[100] = uVar1;
  return;
}



/* Entry: 104aa3870; end: 104aa38bf;  */

void FUN_104aa3870(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  FUN_104aa38c0();
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa3998();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar4;
  puVar3 = (undefined1 *)0x1;
  __Znwm();
  *puVar3 = (char)lVar1;
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 104aa38c0; end: 104aa3997;  */

ulong FUN_104aa38c0(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = uStack_48 & 0xff;
  uVar4 = (ulong)&plStack_50 | 9;
  if (plStack_50 != (long *)0x0) {
    uVar1 = uStack_48;
    uVar4 = uStack_40;
  }
  iVar6 = (int)uVar1;
  func_0x00010082b104(uVar4);
  plVar5 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar3) {
        *plStack_50 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (iVar6 != 0) {
      FUN_104bd46a0(plVar5);
      func_0x0001004b6d90(&plStack_50);
    }
    __Unwind_Resume(plVar5);
    if ((bRam00000001130a5c08 & 1) == 0) {
      iVar6 = 0x130a5c08;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        uRam00000001130a5bc8 = 0;
        pcRam00000001130a5bd0 = FUN_104aa3a28;
        uRam00000001130a5bd8 = 0x104aa3a38;
        pcRam00000001130a5be0 = FUN_104aa3a54;
        pcRam00000001130a5be8 = FUN_104aa3b74;
        pcRam00000001130a5bf0 = "grpc-accept-encoding";
        uRam00000001130a5bf8 = 0x14;
        uRam00000001130a5c00 = 0;
        ___cxa_guard_release(0x1130a5c08);
      }
    }
    return 0x1130a5bc8;
  }
  return uVar4;
}



/* Entry: 104aa3998; end: 104aa3a27;  */

undefined8 FUN_104aa3998(void)

{
  int iVar1;
  
  if ((bRam00000001130a5c08 & 1) == 0) {
    iVar1 = 0x130a5c08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5bc8 = 0;
      pcRam00000001130a5bd0 = FUN_104aa3a28;
      uRam00000001130a5bd8 = 0x104aa3a38;
      pcRam00000001130a5be0 = FUN_104aa3a54;
      pcRam00000001130a5be8 = FUN_104aa3b74;
      pcRam00000001130a5bf0 = "grpc-accept-encoding";
      uRam00000001130a5bf8 = 0x14;
      uRam00000001130a5c00 = 0;
      ___cxa_guard_release(0x1130a5c08);
    }
  }
  return 0x1130a5bc8;
}



/* Entry: 104aa3a28; end: 104aa3a53;  */

void FUN_104aa3a28(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104aa3a54; end: 104aa3b73;  */

void FUN_104aa3a54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long *plStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined1 *)0x1;
  __Znwm();
  uStack_58 = param_1[1];
  plStack_60 = (long *)*param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar8 = uStack_58 & 0xff;
  uVar3 = (ulong)&plStack_60 | 9;
  if (plStack_60 != (long *)0x0) {
    uVar8 = uStack_58;
    uVar3 = uStack_50;
  }
  uVar5 = (undefined1)uVar3;
  func_0x00010082b104();
  *puVar6 = uVar5;
  *(undefined1 **)(param_4 + 8) = puVar6;
  plVar7 = plStack_60;
  if ((long *)0x1 < plStack_60) {
    do {
      lVar10 = *plStack_60;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
      if (bVar2) {
        *plStack_60 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_60[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    while ((int)uVar8 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0(plVar7);
    uVar9 = 0x14;
    FUN_104aa3c50(plVar7);
    uVar8 = (ulong)plVar7 & 0xff;
    FUN_104aa3c5c(uVar8);
    func_0x000100741c30(&ppuStack_a8,uVar8,uVar9);
    pppuVar4 = (undefined8 ***)ppuStack_a8;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      pppuVar4 = &ppuStack_a8;
    }
    FUN_104adf434(extraout_x8,"grpc-accept-encoding",0x14,pppuVar4,uStack_a0);
    if ((char)bStack_91 < '\0') {
      __ZdlPv(ppuStack_a8);
    }
    return;
  }
  return;
}



/* Entry: 104aa3b74; end: 104aa3b97;  */

void FUN_104aa3b74(undefined8 param_1,ulong param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  uVar2 = 0x14;
  FUN_104aa3c50(param_2);
  param_2 = param_2 & 0xff;
  FUN_104aa3c5c(param_2);
  func_0x000100741c30(&ppuStack_48,param_2,uVar2);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  FUN_104adf434(param_1,"grpc-accept-encoding",0x14,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}


