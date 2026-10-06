/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074c5404; end: 1074c5493;  */

void FUN_1074c5404(long param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 unaff_d8;
  
  func_0x0001074c8a88();
  if (param_1 != 0) {
    func_0x0001074c8f74();
    func_0x0001074c8978();
    func_0x0001074c8a24();
    func_0x0001074c8fcc();
    func_0x0001074c8cd0();
    func_0x0001074c8998();
    dVar1 = (double)func_0x0001074c8f3c();
    auVar2._0_8_ = (long)(int)(long)((double)(float)unaff_d8 * dVar1);
    auVar2._8_8_ = (long)(int)(long)((double)(float)((ulong)unaff_d8 >> 0x20) * dVar1);
    NEON_scvtf(auVar2,8);
    func_0x0001074c88a0();
    func_0x0001074c8d30();
  }
  return;
}



/* Entry: 1074c5494; end: 1074c54cb;  */

long FUN_1074c5494(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b4f38);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1074c54cc; end: 1074c54d7;  */

undefined ** FUN_1074c54cc(void)

{
  return &PTR_DAT_1109b4f38;
}



/* Entry: 1074c54d8; end: 1074c54f7;  */

void FUN_1074c54d8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1074c74d0();
  }
  return;
}



/* Entry: 1074c54f8; end: 1074c583f;  */

undefined1  [16] FUN_1074c54f8(long *param_1,ulong *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar8;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar9;
  ulong extraout_x9_01;
  long *plVar10;
  long *plVar11;
  long *extraout_x10;
  ulong uVar12;
  ulong uVar13;
  ulong extraout_x11;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x25;
  undefined1 auVar18 [16];
  
  uVar16 = *param_2;
  uVar17 = param_1[1];
  if (uVar17 != 0) {
    func_0x0001074c8d84();
    if ((bool)in_ZR) {
      unaff_x25 = extraout_x8 & uVar16;
    }
    else {
      in_NG = (long)(uVar16 - uVar17) < 0;
      unaff_x25 = uVar16;
      if (uVar17 <= uVar16) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar16 / uVar17;
        }
        unaff_x25 = uVar16 - uVar8 * uVar17;
      }
    }
    plVar15 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_1074c55a8;
          uVar8 = plVar15[1];
          if (uVar8 != uVar16) break;
          in_NG = (long)(plVar15[2] - uVar16) < 0;
          if (plVar15[2] == uVar16) {
            uVar7 = 0;
            goto LAB_1074c580c;
          }
        }
        if ((uVar17 & extraout_x8) == 0) {
          uVar8 = uVar8 & extraout_x8;
        }
        else if (uVar17 <= uVar8) {
          uVar14 = 0;
          if (uVar17 != 0) {
            uVar14 = uVar8 / uVar17;
          }
          uVar8 = uVar8 - uVar14 * uVar17;
        }
        in_NG = (long)(uVar8 - unaff_x25) < 0;
      } while (uVar8 == unaff_x25);
    }
  }
LAB_1074c55a8:
  plVar1 = param_1 + 2;
  plVar15 = (long *)0x60;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  _memcpy(plVar15 + 2,param_2,0x50);
  func_0x0001074c8a10();
  if ((uVar17 != 0) && (func_0x0001074c8b48(), !(bool)in_NG)) goto LAB_1074c57a0;
  bVar3 = 2 < uVar17;
  bVar4 = uVar17 == 3;
  func_0x0001074c8674(uVar17 << 1);
  uVar8 = extraout_x8_00;
  if (!bVar3 || bVar4) {
    uVar8 = extraout_x9;
  }
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar17 = param_1[1];
  }
  uVar5 = uVar8 == uVar17;
  if (uVar17 < uVar8) {
LAB_1074c563c:
    if (uVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1074c5834);
      (*pcVar2)();
    }
    lVar6 = uVar8 << 3;
    __Znwm(lVar6);
    FUN_1074c5840(param_1,lVar6);
    uVar17 = 0;
    param_1[1] = uVar8;
    lVar6 = *param_1;
    while (uVar5 = uVar8 == uVar17, !(bool)uVar5) {
      func_0x0001074c8d60();
      lVar6 = extraout_x8_01;
      uVar17 = extraout_x9_00;
    }
    plVar10 = (long *)*plVar1;
    uVar17 = uVar8;
    if (plVar10 != (long *)0x0) {
      uVar12 = plVar10[1];
      uVar9 = uVar8 - 1;
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = uVar12 / uVar8;
      }
      uVar13 = uVar12;
      if (uVar8 <= uVar12) {
        uVar13 = uVar12 - uVar14 * uVar8;
      }
      uVar5 = (uVar8 & uVar9) == 0;
      if ((bool)uVar5) {
        uVar13 = uVar12 & uVar9;
      }
      *(long **)(lVar6 + uVar13 * 8) = plVar1;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        uVar14 = plVar10[1];
        if ((uVar8 & uVar9) == 0) {
          uVar14 = uVar14 & uVar9;
        }
        else if (uVar8 <= uVar14) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar14 / uVar8;
          }
          uVar14 = uVar14 - uVar12 * uVar8;
        }
        uVar5 = uVar14 == uVar13;
        if (!(bool)uVar5) {
          if (*(long *)(lVar6 + uVar14 * 8) == 0) {
            *(long **)(lVar6 + uVar14 * 8) = plVar11;
            uVar13 = uVar14;
          }
          else {
            *plVar11 = *plVar10;
            func_0x0001074c8710();
            lVar6 = extraout_x8_02;
            uVar9 = extraout_x9_01;
            plVar10 = extraout_x10;
            uVar13 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar8 < uVar17) {
    uVar14 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074c86e4();
    }
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    uVar5 = uVar8 == uVar17;
    if (uVar8 < uVar17) {
      if (uVar8 != 0) goto LAB_1074c563c;
      FUN_1074c5840(param_1,0);
      param_1[1] = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = param_1[1];
    }
  }
  func_0x0001074c8d84();
  if ((bool)uVar5) {
    unaff_x25 = extraout_x8_03 & uVar16;
  }
  else {
    unaff_x25 = uVar16;
    if (uVar17 <= uVar16) {
      uVar8 = 0;
      if (uVar17 != 0) {
        uVar8 = uVar16 / uVar17;
      }
      unaff_x25 = uVar16 - uVar8 * uVar17;
    }
  }
LAB_1074c57a0:
  lVar6 = *param_1;
  plVar10 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar15 = *plVar1;
    *plVar1 = (long)plVar15;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar1;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar16 = uVar16 & uVar17 - 1;
      }
      else if (uVar17 <= uVar16) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar16 / uVar17;
        }
        uVar16 = uVar16 - uVar8 * uVar17;
      }
      *(long **)(lVar6 + uVar16 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar10;
    *plVar10 = (long)plVar15;
  }
  func_0x0001074c8d18();
  FUN_1074c5858();
  uVar7 = 1;
LAB_1074c580c:
  auVar18._8_8_ = uVar7;
  auVar18._0_8_ = plVar15;
  return auVar18;
}



/* Entry: 1074c5840; end: 1074c5857;  */

void FUN_1074c5840(long *param_1,long param_2)

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



/* Entry: 1074c5858; end: 1074c589f;  */

void FUN_1074c5858(long param_1)

{
  func_0x0001074c8930();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074c58a0; end: 1074c58b3;  */

void FUN_1074c58a0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074c58b4; end: 1074c58d7;  */

void FUN_1074c58b4(long param_1)

{
  func_0x0001074c8da8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074c58d8; end: 1074c58df;  */

void FUN_1074c58d8(void)

{
  return;
}



/* Entry: 1074c58e0; end: 1074c590f;  */

void FUN_1074c58e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001074c8e20();
  *puVar1 = &PTR_FUN_1109b4f58;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074c5910; end: 1074c592b;  */

void FUN_1074c5910(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b4f58;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074c592c; end: 1074c59bb;  */

void FUN_1074c592c(long param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 unaff_d8;
  
  func_0x0001074c8a88();
  if (param_1 != 0) {
    func_0x0001074c8f74();
    func_0x0001074c8978();
    func_0x0001074c8a24();
    func_0x0001074c8fcc();
    func_0x0001074c8cd0();
    func_0x0001074c8998();
    dVar1 = (double)func_0x0001074c8f3c();
    auVar2._0_8_ = (long)(int)(long)((double)(float)unaff_d8 * dVar1);
    auVar2._8_8_ = (long)(int)(long)((double)(float)((ulong)unaff_d8 >> 0x20) * dVar1);
    NEON_scvtf(auVar2,8);
    func_0x0001074c88a0();
    func_0x0001074c8d30();
  }
  return;
}



/* Entry: 1074c59bc; end: 1074c59f3;  */

long FUN_1074c59bc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b4fb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1074c59f4; end: 1074c59ff;  */

undefined ** FUN_1074c59f4(void)

{
  return &PTR_DAT_1109b4fb8;
}



/* Entry: 1074c5a00; end: 1074c5b7f;  */

undefined1  [16] FUN_1074c5a00(long *param_1,double param_2)

{
  double dVar1;
  code *extraout_x8;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  double dStack_c0;
  double dStack_b8;
  double dStack_a8;
  undefined1 auStack_a0 [128];
  
  uVar2 = *(undefined8 *)(*param_1 + 0x28);
  dVar1 = (double)(param_1[1] + 0x48);
  FUN_1073b724c();
  dStack_c0 = dVar1;
  dStack_b8 = param_2;
  func_0x0001074c909c(*(undefined8 *)(param_1[1] + 0x58));
  (*extraout_x8)();
  func_0x000107415eec(uVar2,auStack_a0,&dStack_c0,dVar1);
  lVar3 = *(long *)(*param_1 + 0x28);
  FUN_107416bf8(lVar3);
  func_0x000107877034(auStack_a0,lVar3 + 0x180,auStack_a0);
  func_0x0001074c902c(param_1[2]);
  func_0x0001074c88a0();
  auVar4._0_8_ = dStack_c0 / dStack_a8;
  auVar4._8_8_ = dStack_b8 / dStack_a8;
  return auVar4;
}



/* Entry: 1074c5b80; end: 1074c5cb3;  */

double FUN_1074c5b80(double param_1,double param_2,long param_3)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_1074184cc(*(undefined8 *)(param_3 + 0x28));
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  dVar3 = param_1;
  dVar4 = param_2;
  FUN_1074184cc(*(undefined8 *)(param_3 + 0x28),&uStack_68);
  lVar1 = *(long *)(param_3 + 0x28);
  dVar6 = 0.0;
  if (*(char *)(lVar1 + 0xa94) == '\x01') {
    dVar6 = (double)*(float *)(lVar1 + 0xa90);
  }
  dVar5 = ((*(double *)(lVar1 + 0x78) * 512.0) / 3.141592653589793) *
          (double)*(float *)(lVar1 + 0xa98);
  dVar4 = (param_2 - dVar4) / dVar5;
  dVar5 = (param_1 - dVar3) / dVar5;
  dVar3 = 1.0 / SQRT(dVar5 * dVar5 + dVar4 * dVar4);
  dVar4 = dVar4 * dVar3;
  dVar3 = dVar5 * dVar3;
  fVar2 = (float)(dVar4 + dVar3 * 0.0);
  _acosf(fVar2);
  if (dVar3 <= dVar4 * 0.0) {
    fVar2 = -fVar2;
  }
  dVar3 = (double)NEON_fminnm((ABS(dVar5) + -0.2) / 0.8,0x3ff0000000000000);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return dVar3 * (double)fVar2 * 57.29577951308232 * dVar6;
}



/* Entry: 1074c5cb4; end: 1074c5ccf;  */

void FUN_1074c5cb4(void)

{
  func_0x0001074c8c8c();
  return;
}



/* Entry: 1074c5cd0; end: 1074c5d33;  */

undefined8 * FUN_1074c5cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    uVar4 = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[5] = uVar4;
    puVar1[4] = uVar3;
    puVar1[3] = uVar2;
    puVar1 = puVar1 + 7;
  }
  else {
    puVar1 = param_1;
    FUN_1074c5d34();
  }
  param_1[1] = puVar1;
  return puVar1 + -7;
}



/* Entry: 1074c5d34; end: 1074c5dbf;  */

void FUN_1074c5d34(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puStack_48;
  
  func_0x0001074c86d0();
  func_0x0001074c9184();
  FUN_1074c5dc0();
  func_0x0001074c8728();
  FUN_1074c5e68();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[3];
  uVar3 = unaff_x20[5];
  puStack_48[6] = unaff_x20[6];
  puStack_48[5] = uVar3;
  puStack_48[4] = uVar2;
  puStack_48[3] = uVar1;
  func_0x0001074c8a04();
  FUN_1074c5e18();
  func_0x0001074c8b84();
  func_0x0001074c6030();
  return;
}



/* Entry: 1074c5dc0; end: 1074c5e17;  */

long * FUN_1074c5dc0(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x8;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  
  if (param_2 < (long *)0x492492492492493) {
    uVar1 = (param_1[2] - *param_1) / 0x38;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x249249249249248 < uVar1) {
      plVar2 = (long *)0x492492492492492;
    }
    return plVar2;
  }
  FUN_1074c5e5c();
  func_0x0001074c87c0();
  plVar2 = param_1 + 2;
  lVar3 = extraout_x8 + ((param_1[1] - *param_1) / -0x38) * 0x38;
  FUN_1074c5eec(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  func_0x0001074c85e0();
  return plVar2;
}



/* Entry: 1074c5e18; end: 1074c5e5b;  */

void FUN_1074c5e18(long *param_1)

{
  long extraout_x8;
  long unaff_x19;
  long lVar1;
  
  func_0x0001074c87c0();
  lVar1 = extraout_x8 + ((param_1[1] - *param_1) / -0x38) * 0x38;
  FUN_1074c5eec(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  func_0x0001074c85e0();
  return;
}



/* Entry: 1074c5e5c; end: 1074c5e67;  */

void FUN_1074c5e5c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074c86b8();
  func_0x0001074c8a78();
  if (param_2 != 0) {
    func_0x0001074c5e9c(param_4);
  }
  func_0x0001074c8d6c(0x38);
  return;
}



/* Entry: 1074c5e68; end: 1074c5ebb;  */

void FUN_1074c5e68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074c8a78();
  if (param_2 != 0) {
    func_0x0001074c5e9c(param_4);
  }
  func_0x0001074c8d6c(0x38);
  return;
}



/* Entry: 1074c5ebc; end: 1074c5eeb;  */

void FUN_1074c5ebc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 7) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_38[2] = param_2[2];
    puStack_38[1] = uVar2;
    *puStack_38 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    uVar3 = param_2[5];
    puStack_38[6] = param_2[6];
    puStack_38[5] = uVar3;
    puStack_38[4] = uVar2;
    puStack_38[3] = uVar1;
    puStack_38 = puStack_38 + 7;
  }
  uStack_60 = param_1;
  puStack_40 = param_4;
  func_0x0001074c8c9c();
  FUN_1074c5f84();
  FUN_1074c5fb4(&uStack_60);
  return;
}



/* Entry: 1074c5eec; end: 1074c5f83;  */

void FUN_1074c5eec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 7) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_28[2] = param_2[2];
    puStack_28[1] = uVar2;
    *puStack_28 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    uVar3 = param_2[5];
    puStack_28[6] = param_2[6];
    puStack_28[5] = uVar3;
    puStack_28[4] = uVar2;
    puStack_28[3] = uVar1;
    puStack_28 = puStack_28 + 7;
  }
  uStack_50 = param_1;
  puStack_30 = param_4;
  func_0x0001074c8c9c();
  FUN_1074c5f84();
  FUN_1074c5fb4(&uStack_50);
  return;
}



/* Entry: 1074c5f84; end: 1074c5fb3;  */

void FUN_1074c5f84(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1074c5fb4; end: 1074c5fdf;  */

void FUN_1074c5fb4(void)

{
  uint extraout_w8;
  
  func_0x0001074c91bc();
  if ((extraout_w8 & 1) == 0) {
    FUN_1074c5fe0();
  }
  return;
}



/* Entry: 1074c5fe0; end: 1074c5fff;  */

void FUN_1074c5fe0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1074c6000; end: 1074c605b;  */

void FUN_1074c6000(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1074c605c; end: 1074c6063;  */

void FUN_1074c605c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1074c6064; end: 1074c6097;  */

void FUN_1074c6064(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1074c6098; end: 1074c615b;  */

long FUN_1074c6098(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x48,param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  func_0x000107299490(param_1 + 0x68,param_2 + 0x68);
  func_0x000107299490(param_1 + 0x78,param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar4 = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)(param_1 + 0xa4) = uVar4;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  return param_1;
}



/* Entry: 1074c615c; end: 1074c6167;  */

void FUN_1074c615c(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  func_0x0001074c86b8();
  func_0x0001074c91bc();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -200;
      func_0x0001074c2dac();
    }
  }
  return;
}



/* Entry: 1074c6168; end: 1074c61eb;  */

void FUN_1074c6168(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  func_0x0001074c91bc();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -200;
      func_0x0001074c2dac();
    }
  }
  return;
}



/* Entry: 1074c61ec; end: 1074c6213;  */

undefined8 FUN_1074c61ec(undefined8 param_1)

{
  FUN_1074c6214(param_1);
  return param_1;
}



/* Entry: 1074c6214; end: 1074c622b;  */

void FUN_1074c6214(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if (*param_3 == param_3[1]) {
    if ((bRam00000001131ad7b0 & 1) == 0) {
      iVar3 = 0x131ad7b0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_1074735c4(0x1131ad7a0);
        ___cxa_guard_release(0x1131ad7b0);
      }
    }
    lVar2 = lRam00000001131ad7a8;
    uVar1 = uRam00000001131ad7a0;
    param_1[1] = lRam00000001131ad7a8;
    *param_1 = uVar1;
    if (lVar2 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    return;
  }
  FUN_1074c6250(&stack0xffffffffffffffef,param_3);
  return;
}



/* Entry: 1074c622c; end: 1074c624f;  */

void FUN_1074c622c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1074c6250(&uStack_11,param_1);
  return;
}



/* Entry: 1074c6250; end: 1074c62d3;  */

undefined8 * FUN_1074c6250(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001074c8688();
  uStack_28 = extraout_x8;
  FUN_107473650(auStack_40,1);
  FUN_1074c62d4(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  FUN_10747376c();
  func_0x0001074c8620(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001074c89c0();
  FUN_10747376c();
  func_0x0001074c8820();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_1109b2c68;
  puVar2[1] = 0;
  FUN_1074c6308(puVar2 + 3);
  return puVar2;
}



/* Entry: 1074c62d4; end: 1074c6307;  */

undefined8 * FUN_1074c62d4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b2c68;
  param_1[1] = 0;
  FUN_1074c6308(param_1 + 3);
  return param_1;
}



/* Entry: 1074c6308; end: 1074c632f;  */

void FUN_1074c6308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1074c6330; end: 1074c633b;  */

void FUN_1074c6330(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x0001074c8fd4();
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



/* Entry: 1074c633c; end: 1074c6353;  */

void FUN_1074c633c(long *param_1,long param_2)

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



/* Entry: 1074c6354; end: 1074c639b;  */

void FUN_1074c6354(long param_1)

{
  func_0x0001074c8930();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074c639c; end: 1074c63af;  */

void FUN_1074c639c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074c63b0; end: 1074c63e3;  */

/* WARNING: Possible PIC construction at 0x0001074c63d4: Changing call to branch */

undefined1  [16] FUN_1074c63b0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 in_CY;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar8;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar9;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *plVar10;
  long *extraout_x11_00;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    func_0x0001074c91f0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = uVar1;
    return auVar13;
  }
  func_0x0001074c86b8();
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar5 = (long)param_1 << 3;
    __Znwm(lVar5);
    auVar15._8_8_ = param_1;
    auVar15._0_8_ = lVar5;
    return auVar15;
  }
  func_0x000104bd35f4();
  plVar7 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar7 = param_2;
  }
  plVar12 = (long *)param_1[1];
  bVar4 = plVar12 <= param_2;
  if (!bVar4 || param_2 == plVar12) {
    if (bVar4) goto LAB_1074c6550;
    func_0x0001074c8bf0();
    if ((bVar4) && (((ulong)plVar12 & (long)plVar12 - 1U) == 0)) {
      func_0x0001074c86e4();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar7) {
      param_2 = plVar7;
    }
    if (plVar12 <= param_2) goto LAB_1074c6550;
    if (param_2 == (long *)0x0) {
      plVar6 = (long *)0x0;
      plVar7 = param_1;
      FUN_1074c655c(param_1,0);
      param_1[1] = 0;
      goto LAB_1074c6550;
    }
  }
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    lVar5 = *plVar7;
    *plVar7 = (long)plVar6;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar16._8_8_ = plVar6;
      auVar16._0_8_ = lVar5;
      return auVar16;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = plVar6;
    return auVar3 << 0x40;
  }
  plVar6 = (long *)((long)param_2 << 3);
  __Znwm(plVar6);
  plVar7 = param_1;
  FUN_1074c655c(param_1,plVar6);
  plVar12 = (long *)0x0;
  param_1[1] = (long)param_2;
  while (param_2 != plVar12) {
    func_0x0001074c8d60();
    plVar12 = extraout_x9_00;
  }
  if (param_1[2] != 0) {
    func_0x0001074c9144();
    func_0x0001074c9130();
    lVar5 = extraout_x8_00;
    plVar12 = extraout_x9_01;
    uVar9 = extraout_x10;
    plVar10 = extraout_x11;
    while (plVar8 = plVar12, plVar12 = (long *)*plVar8, plVar12 != (long *)0x0) {
      plVar11 = (long *)plVar12[1];
      if (((ulong)param_2 & uVar9) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar9);
      }
      else if (param_2 <= plVar11) {
        uVar2 = 0;
        if (param_2 != (long *)0x0) {
          uVar2 = (ulong)plVar11 / (ulong)param_2;
        }
        plVar11 = (long *)((long)plVar11 - uVar2 * (long)param_2);
      }
      if (plVar11 != plVar10) {
        if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
          *(long **)(lVar5 + (long)plVar11 * 8) = plVar8;
          plVar10 = plVar11;
        }
        else {
          *plVar8 = *plVar12;
          func_0x0001074c8710();
          lVar5 = extraout_x8_01;
          plVar12 = extraout_x9_02;
          uVar9 = extraout_x10_00;
          plVar10 = extraout_x11_00;
        }
      }
    }
  }
LAB_1074c6550:
  auVar14._8_8_ = plVar6;
  auVar14._0_8_ = plVar7;
  return auVar14;
}



/* Entry: 1074c63e4; end: 1074c6413;  */

void FUN_1074c63e4(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  plVar5 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x0001074c8bf0();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x0001074c86e4();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1074c655c(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_1074c655c(param_1,lVar3);
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    while (param_2 != plVar5) {
      func_0x0001074c8d60();
      plVar5 = extraout_x9;
    }
    if (param_1[2] != 0) {
      func_0x0001074c9144();
      func_0x0001074c9130();
      lVar3 = extraout_x8;
      plVar5 = extraout_x9_00;
      uVar6 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar7 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar5;
            func_0x0001074c8710();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x9_01;
            uVar6 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074c6414; end: 1074c655b;  */

void FUN_1074c6414(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x0001074c8bf0();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x0001074c86e4();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1074c655c(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_1074c655c(param_1,lVar3);
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    while (param_2 != plVar5) {
      func_0x0001074c8d60();
      plVar5 = extraout_x9;
    }
    if (param_1[2] != 0) {
      func_0x0001074c9144();
      func_0x0001074c9130();
      lVar3 = extraout_x8;
      plVar5 = extraout_x9_00;
      uVar6 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar7 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar5;
            func_0x0001074c8710();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x9_01;
            uVar6 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074c655c; end: 1074c6573;  */

void FUN_1074c655c(long *param_1,long param_2)

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



/* Entry: 1074c6574; end: 1074c6597;  */

void FUN_1074c6574(long param_1)

{
  func_0x0001074c8930();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074c6598; end: 1074c65bb;  */

void FUN_1074c6598(void)

{
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0001074c8634();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  func_0x0001074c85e0();
  return;
}



/* Entry: 1074c65bc; end: 1074c663b;  */

long * FUN_1074c65bc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074c663c; end: 1074c6657;  */

void FUN_1074c663c(undefined8 *param_1)

{
  if (*(int *)(param_1 + 3) == 1) {
    return;
  }
  func_0x00010563ab98();
  *param_1 = &PTR_FUN_1109b4fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074c6658; end: 1074c665b;  */

void FUN_1074c6658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b4fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074c665c; end: 1074c666f;  */

void FUN_1074c665c(void)

{
  func_0x0001074c667c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074c6670; end: 1074c668b;  */

undefined8 * FUN_1074c6670(long param_1)

{
  func_0x0001077a42ac(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1074c668c; end: 1074c66af;  */

void FUN_1074c668c(long param_1)

{
  func_0x0001074c8930();
  if (param_1 != 0) {
    func_0x0001074c86c4();
  }
  return;
}



/* Entry: 1074c66b0; end: 1074c683b;  */

long FUN_1074c66b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107432f04();
  func_0x000107432f04(lVar1 + 0x58,param_3);
  func_0x000107482cec(param_1 + 0xb0,param_4);
  func_0x000107482cec(param_1 + 0x110,param_5);
  func_0x000107432f04(param_1 + 0x170,param_6);
  func_0x000107482cec(param_1 + 0x1c8,param_7);
  func_0x000107432c64(param_1 + 0x228,param_8);
  func_0x000107432f04(param_1 + 0x290,param_9);
  func_0x000107482cec(param_1 + 0x2e8,param_10);
  func_0x000107432f04(param_1 + 0x348,param_11);
  func_0x000107432f04(param_1 + 0x3a0,param_12);
  func_0x000107482cec(param_1 + 0x3f8,param_13);
  func_0x000107432f04(param_1 + 0x458,param_14);
  func_0x000107482cec(param_1 + 0x4b0,param_15);
  func_0x000107432f04(param_1 + 0x510,param_16);
  func_0x000107432f04(param_1 + 0x568,param_17);
  func_0x000107482cec(param_1 + 0x5c0,param_18);
  func_0x000107432f04(param_1 + 0x620,param_19);
  func_0x000107432f04(param_1 + 0x678,param_20);
  return param_1;
}



/* Entry: 1074c683c; end: 1074c686f;  */

long FUN_1074c683c(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8d08();
  if ((bool)in_CY) {
    FUN_1074c68a0();
  }
  else {
    FUN_1074c6870();
    param_1 = unaff_x20 + 0x98;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x98;
}



/* Entry: 1074c6870; end: 1074c689f;  */

void FUN_1074c6870(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8db4();
  FUN_1074c3374();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x98;
  return;
}



/* Entry: 1074c68a0; end: 1074c690b;  */

void FUN_1074c68a0(void)

{
  undefined8 uStack_48;
  
  func_0x0001074c86d0();
  func_0x0001074c9184();
  FUN_10748bb28();
  func_0x0001074c8728();
  FUN_10748bbd0();
  FUN_1074c3374(uStack_48);
  func_0x0001074c8a04();
  FUN_10748bb80();
  func_0x0001074c8b84();
  func_0x00010748bd98();
  return;
}



/* Entry: 1074c690c; end: 1074c6927;  */

bool FUN_1074c690c(long param_1)

{
  FUN_1074c6928();
  return param_1 != 0;
}



/* Entry: 1074c6928; end: 1074c69e7;  */

long FUN_1074c6928(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        func_0x0001074c8f30();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074c69e8; end: 1074c6b17;  */

void FUN_1074c69e8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_28;
  long *plStack_20;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_20 = param_1 + 2;
  if (plVar6 == plStack_20) {
LAB_1074c6a70:
    if (lVar3 == 0) {
LAB_1074c6aa0:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_1074c6aa8;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1074c6aa0;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1074c6a70;
LAB_1074c6aa8:
    if (lVar3 == 0) goto LAB_1074c6ae0;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *param_2;
  }
LAB_1074c6ae0:
  *plVar6 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  plStack_28 = param_2;
  func_0x0001074c8c9c();
  uStack_17 = 0;
  uStack_13 = 0;
  FUN_1074c3090(&plStack_28);
  return;
}



/* Entry: 1074c6b18; end: 1074c6b6f;  */

long FUN_1074c6b18(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8d08();
  if ((bool)in_CY) {
    FUN_1074c6b70();
  }
  else {
    func_0x0001074c6b4c();
    param_1 = unaff_x20 + 0x120;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x120;
}



/* Entry: 1074c6b70; end: 1074c6bdb;  */

void FUN_1074c6b70(void)

{
  undefined8 uStack_48;
  
  func_0x0001074c86d0();
  func_0x0001074c9184();
  FUN_1074c6c54();
  func_0x0001074c8728();
  FUN_1074c6cfc();
  FUN_1074c6bdc(uStack_48);
  func_0x0001074c8a04();
  FUN_1074c6cac();
  func_0x0001074c8b84();
  func_0x0001074c6ea8();
  return;
}



/* Entry: 1074c6bdc; end: 1074c6c53;  */

void FUN_1074c6bdc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074c8868();
  func_0x0001072692b0();
  func_0x000104c318bc(param_1 + 0x40,unaff_x19 + 0x40);
  *(undefined2 *)(unaff_x20 + 0x78) = *(undefined2 *)(unaff_x19 + 0x78);
  func_0x000104c318bc(unaff_x20 + 0x80,unaff_x19 + 0x80);
  func_0x000104c318bc(unaff_x20 + 0xb8,unaff_x19 + 0xb8);
  *(undefined4 *)(unaff_x20 + 0xf0) = *(undefined4 *)(unaff_x19 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xf8);
  *(undefined8 *)(unaff_x20 + 0x100) = *(undefined8 *)(unaff_x19 + 0x100);
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x108);
  *(undefined4 *)(unaff_x20 + 0x118) = *(undefined4 *)(unaff_x19 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar1;
  return;
}



/* Entry: 1074c6c54; end: 1074c6cab;  */

long * FUN_1074c6c54(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x8;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  
  if (param_2 < (long *)0xe38e38e38e38e4) {
    uVar1 = (param_1[2] - *param_1) / 0x120;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x71c71c71c71c70 < uVar1) {
      plVar2 = (long *)0xe38e38e38e38e3;
    }
    return plVar2;
  }
  FUN_1074c6cf0();
  func_0x0001074c87c0();
  plVar2 = param_1 + 2;
  lVar3 = extraout_x8 + ((param_1[1] - *param_1) / -0x120) * 0x120;
  FUN_1074c6d80(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  func_0x0001074c85e0();
  return plVar2;
}



/* Entry: 1074c6cac; end: 1074c6cef;  */

void FUN_1074c6cac(long *param_1)

{
  long extraout_x8;
  long unaff_x19;
  long lVar1;
  
  func_0x0001074c87c0();
  lVar1 = extraout_x8 + ((param_1[1] - *param_1) / -0x120) * 0x120;
  FUN_1074c6d80(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  func_0x0001074c85e0();
  return;
}



/* Entry: 1074c6cf0; end: 1074c6cfb;  */

void FUN_1074c6cf0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074c86b8();
  func_0x0001074c8a78();
  if (param_2 != 0) {
    func_0x0001074c6d30(param_4);
  }
  func_0x0001074c8d6c(0x120);
  return;
}



/* Entry: 1074c6cfc; end: 1074c6d4f;  */

void FUN_1074c6cfc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074c8a78();
  if (param_2 != 0) {
    func_0x0001074c6d30(param_4);
  }
  func_0x0001074c8d6c(0x120);
  return;
}



/* Entry: 1074c6d50; end: 1074c6d7f;  */

void FUN_1074c6d50(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0xe38e38e38e38e4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x120);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074c8a48();
  func_0x0001074c90e8();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x120) {
    FUN_1074c6bdc(param_4,param_2);
    param_4 = lStack_48 + 0x120;
    lStack_48 = param_4;
  }
  func_0x0001074c8c9c();
  FUN_1074c6dfc();
  FUN_1074c6e2c(auStack_70);
  return;
}



/* Entry: 1074c6d80; end: 1074c6dfb;  */

void FUN_1074c6d80(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001074c8a48();
  func_0x0001074c90e8();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x120) {
    FUN_1074c6bdc(param_4,param_2);
    param_4 = lStack_38 + 0x120;
    lStack_38 = param_4;
  }
  func_0x0001074c8c9c();
  FUN_1074c6dfc();
  FUN_1074c6e2c(auStack_60);
  return;
}



/* Entry: 1074c6dfc; end: 1074c6e2b;  */

void FUN_1074c6dfc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x120) {
    func_0x0001074ae9a8();
  }
  return;
}



/* Entry: 1074c6e2c; end: 1074c6e57;  */

void FUN_1074c6e2c(void)

{
  uint extraout_w8;
  
  func_0x0001074c91bc();
  if ((extraout_w8 & 1) == 0) {
    FUN_1074c6e58();
  }
  return;
}



/* Entry: 1074c6e58; end: 1074c6e77;  */

void FUN_1074c6e58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x120;
    func_0x0001074ae9a8();
  }
  return;
}



/* Entry: 1074c6e78; end: 1074c6ed3;  */

void FUN_1074c6e78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x120;
    func_0x0001074ae9a8();
  }
  return;
}



/* Entry: 1074c6ed4; end: 1074c6edb;  */

void FUN_1074c6ed4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x120;
    func_0x0001074ae9a8();
  }
  return;
}



/* Entry: 1074c6edc; end: 1074c6f97;  */

void FUN_1074c6edc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x120;
    func_0x0001074ae9a8();
  }
  return;
}



/* Entry: 1074c6f98; end: 1074c6fd7;  */

ulong FUN_1074c6f98(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x19;
  ulong uVar5;
  
  if (param_2 >> 0x38 == 0) {
    uVar4 = (long)(param_1[2] - *param_1) >> 7;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (0x7ffffffffffffeff < param_1[2] - *param_1) {
      uVar4 = 0xffffffffffffff;
    }
    return uVar4;
  }
  FUN_1074c7074();
  func_0x0001074c87c0();
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar1 = extraout_x8 + (uVar5 - uVar2);
  uVar3 = uVar1;
  for (uVar4 = uVar5; uVar4 != uVar2; uVar4 = uVar4 + 0x100) {
    func_0x0001074c70b0(uVar3,uVar4);
    uVar3 = uVar3 + 0x100;
  }
  func_0x0001074c8c9c(uVar3);
  for (; uVar5 != uVar2; uVar5 = uVar5 + 0x100) {
    uVar3 = uVar5;
    func_0x0001074c51b0(uVar5);
  }
  func_0x0001074c901c();
  *(ulong *)(unaff_x19 + 8) = uVar1;
  func_0x0001074c85e0();
  return uVar3;
}



/* Entry: 1074c6fd8; end: 1074c7073;  */

void FUN_1074c6fd8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x19;
  long lVar4;
  long lVar5;
  
  func_0x0001074c87c0();
  lVar4 = *param_1;
  lVar2 = param_1[1];
  lVar1 = extraout_x8 + (lVar4 - lVar2);
  lVar3 = lVar1;
  for (lVar5 = lVar4; lVar5 != lVar2; lVar5 = lVar5 + 0x100) {
    func_0x0001074c70b0(lVar3,lVar5);
    lVar3 = lVar3 + 0x100;
  }
  func_0x0001074c8c9c(lVar3);
  for (; lVar4 != lVar2; lVar4 = lVar4 + 0x100) {
    func_0x0001074c51b0(lVar4);
  }
  func_0x0001074c901c();
  *(long *)(unaff_x19 + 8) = lVar1;
  func_0x0001074c85e0();
  return;
}



/* Entry: 1074c7074; end: 1074c707f;  */

void FUN_1074c7074(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001074c86b8();
  if ((ulong)param_1 >> 0x38 == 0) {
    __Znwm((long)param_1 << 8);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074c8848();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  func_0x0001074c8e28(param_1 + 7,param_2 + 7);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  *(undefined1 *)(unaff_x19 + 0xf0) = 0;
  if (*(char *)(unaff_x20 + 0xf0) == '\x01') {
    FUN_1074c50e0((undefined1 *)(unaff_x19 + 0xb0),unaff_x20 + 0xb0);
  }
  *(undefined1 *)(unaff_x19 + 0xf8) = *(undefined1 *)(unaff_x20 + 0xf8);
  return;
}



/* Entry: 1074c7080; end: 1074c7267;  */

void FUN_1074c7080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((ulong)param_1 >> 0x38 == 0) {
    __Znwm((long)param_1 << 8);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074c8848();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  func_0x0001074c8e28(param_1 + 7,param_2 + 7);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  *(undefined1 *)(unaff_x19 + 0xf0) = 0;
  if (*(char *)(unaff_x20 + 0xf0) == '\x01') {
    FUN_1074c50e0((undefined1 *)(unaff_x19 + 0xb0),unaff_x20 + 0xb0);
  }
  *(undefined1 *)(unaff_x19 + 0xf8) = *(undefined1 *)(unaff_x20 + 0xf8);
  return;
}



/* Entry: 1074c7268; end: 1074c7283;  */

void FUN_1074c7268(void)

{
  func_0x0001074c8c8c();
  return;
}



/* Entry: 1074c7284; end: 1074c72b7;  */

long FUN_1074c7284(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8d08();
  if ((bool)in_CY) {
    FUN_1074c72e8();
  }
  else {
    FUN_1074c72b8();
    param_1 = unaff_x20 + 0x18;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x18;
}



/* Entry: 1074c72b8; end: 1074c72e7;  */

void FUN_1074c72b8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1074c72e8; end: 1074c736b;  */

void FUN_1074c72e8(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 *puStack_48;
  
  func_0x0001074c86d0();
  func_0x0001074c9184();
  FUN_1074b363c();
  func_0x0001074c8728();
  FUN_1074b36f0();
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  uVar1 = *unaff_x20;
  puStack_48[1] = unaff_x20[1];
  *puStack_48 = uVar1;
  puStack_48[2] = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  func_0x0001074c8a04();
  FUN_1074b368c();
  func_0x0001074c8b84();
  func_0x0001074b38c0();
  return;
}



/* Entry: 1074c736c; end: 1074c740f;  */

void FUN_1074c736c(ulong *param_1)

{
  ulong extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined1 uStack_21;
  
  func_0x0001074c73ac(&uStack_21);
  func_0x0001074c90fc(*param_1);
  *param_1 = extraout_x9 + extraout_x10 ^ extraout_x8;
  return;
}



/* Entry: 1074c7410; end: 1074c74cf;  */

long FUN_1074c7410(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        func_0x0001074c8f30();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074c74d0; end: 1074c7553;  */

long * FUN_1074c74d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1074c7554; end: 1074c75df;  */

void FUN_1074c7554(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001074c86d0();
  FUN_1074c75e0();
  lVar1 = *unaff_x19;
  lVar2 = unaff_x19[1];
  plVar3 = unaff_x19 + 2;
  if (param_1 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    FUN_1074c7638();
  }
  *(undefined8 *)((long)plVar3 + (lVar2 - lVar1)) = *unaff_x20;
  func_0x0001074c8a04();
  FUN_1074c7608();
  func_0x0001074c8b84();
  FUN_1074c7674();
  return;
}



/* Entry: 1074c75e0; end: 1074c7607;  */

undefined8 FUN_1074c75e0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 unaff_x21;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001074c91f0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_1074c762c();
  func_0x0001074c8634();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  func_0x0001074c85e0();
  return param_1;
}



/* Entry: 1074c7608; end: 1074c762b;  */

void FUN_1074c7608(void)

{
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0001074c8634();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  func_0x0001074c85e0();
  return;
}



/* Entry: 1074c762c; end: 1074c7637;  */

void FUN_1074c762c(void)

{
  func_0x0001074c86b8();
  FUN_1074c7658();
  return;
}



/* Entry: 1074c7638; end: 1074c7657;  */

void FUN_1074c7638(void)

{
  FUN_1074c7658();
  return;
}



/* Entry: 1074c7658; end: 1074c7673;  */

long * FUN_1074c7658(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074c76a0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074c7674; end: 1074c769f;  */

long * FUN_1074c7674(long *param_1)

{
  FUN_1074c76a0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074c76a0; end: 1074c76db;  */

void FUN_1074c76a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074c76dc; end: 1074c76ff;  */

void FUN_1074c76dc(long param_1)

{
  func_0x0001074c8930();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074c7700; end: 1074c7703;  */

undefined8 * FUN_1074c7700(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  puVar4 = param_1 + 5;
  *param_1 = &PTR_DAT_1109b3908;
  func_0x000107284284(auStack_40,puVar4);
  func_0x000107469f18(auStack_50,param_1 + 8);
  puVar2 = puVar4;
  func_0x0001072842e4();
  if ((int)puVar2 != 0) {
    puVar2 = puVar4;
    func_0x00010728433c();
    puVar3 = puVar2;
    FUN_1073af260();
    if (puVar2 == puVar3) {
      iVar1 = (int)param_1 + 0x40;
      FUN_107469f78();
      if (iVar1 != 0) {
        func_0x00010747bd38(param_1[1],param_1);
      }
    }
  }
  func_0x000107270b00(auStack_50);
  func_0x000107270b00(auStack_40);
  func_0x00010725b1d4(param_1 + 8);
  func_0x00010725b1d4(puVar4);
  func_0x00010747fd60(param_1 + 2);
  return param_1;
}


