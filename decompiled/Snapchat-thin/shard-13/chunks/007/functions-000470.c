/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab15244; end: 10ab15283;  */

void FUN_10ab15244(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_110c47040;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10ab15284; end: 10ab152ab;  */

void FUN_10ab15284(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_110c47040;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ab152ac; end: 10ab15427;  */

void FUN_10ab152ac(long param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uStack_64;
  undefined8 auStack_60 [2];
  char cStack_49;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar1 = **(byte **)(param_1 + 0x18);
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    ppuVar4 = &PTR_DAT_110c47100;
    ppuVar5 = &PTR_DAT_110c470a0;
    do {
      if ((uVar7 == 4) ||
         (func_0x000107c2b074(auStack_60,ppuVar5), *(ulong *)(param_1 + 0x10) <= uVar7)) {
LAB_10ab15404:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab15408);
        (*pcVar2)();
      }
      FUN_10a015dcc(param_2,auStack_60,*(long *)(param_1 + 8) + lVar6 + 0x10);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
      func_0x000107c2b074(auStack_60,ppuVar4);
      if (*(ulong *)(param_1 + 0x10) <= uVar7) goto LAB_10ab15404;
      uStack_64 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 8) + lVar6 + 0x44));
      FUN_10a01671c(param_2,auStack_60,&uStack_64);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
      uVar3 = *(ulong *)(param_1 + 0x10);
      if (uVar3 <= uVar7) goto LAB_10ab15404;
      bVar1 = **(byte **)(param_1 + 0x18) | *(byte *)(*(long *)(param_1 + 8) + lVar6 + 0x4c);
      uVar7 = uVar7 + 1;
      **(byte **)(param_1 + 0x18) = bVar1;
      lVar6 = lVar6 + 0x50;
      ppuVar4 = ppuVar4 + 3;
      ppuVar5 = ppuVar5 + 3;
    } while (uVar7 < uVar3);
  }
  if ((bVar1 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x38) = 7;
    *(undefined8 *)(param_2 + 0x30) = 0x607060100000000;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return;
}



/* Entry: 10ab15428; end: 10ab15463;  */

long FUN_10ab15428(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c47160);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab15464; end: 10ab1546f;  */

undefined ** FUN_10ab15464(void)

{
  return &PTR_DAT_110c47160;
}



/* Entry: 10ab15470; end: 10ab15557;  */

long * FUN_10ab15470(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab15558; end: 10ab1562f;  */

long FUN_10ab15558(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10a8ca36c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar1) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10ab15630(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10ab15630; end: 10ab156eb;  */

bool FUN_10ab15630(float *param_1,float *param_2)

{
  if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
       ((param_1[3] == param_2[3] && (*(char *)(param_1 + 4) == *(char *)(param_2 + 4))))) &&
      ((*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11) &&
       ((*(char *)((long)param_1 + 0x12) == *(char *)((long)param_2 + 0x12) &&
        (*(char *)((long)param_1 + 0x13) == *(char *)((long)param_2 + 0x13))))))) &&
     ((*(char *)(param_1 + 5) == *(char *)(param_2 + 5) &&
      (*(char *)((long)param_1 + 0x15) == *(char *)((long)param_2 + 0x15))))) {
    return param_1[6] == param_2[6];
  }
  return false;
}



/* Entry: 10ab156ec; end: 10ab15b0b;  */

undefined1  [16]
FUN_10ab156ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *unaff_x26;
  ulong uVar25;
  undefined1 auVar26 [16];
  
  plVar17 = param_1;
  FUN_10a8ca36c();
  plVar24 = (long *)param_1[1];
  if (plVar24 != (long *)0x0) {
    uVar25 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar25) == 0) {
      unaff_x26 = (long *)(uVar25 & (ulong)plVar17);
    }
    else {
      unaff_x26 = plVar17;
      if (plVar24 <= plVar17) {
        uVar10 = 0;
        if (plVar24 != (long *)0x0) {
          uVar10 = (ulong)plVar17 / (ulong)plVar24;
        }
        unaff_x26 = (long *)((long)plVar17 - uVar10 * (long)plVar24);
      }
    }
    puVar15 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar15 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar15; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar16 = (long *)plVar22[1];
        if (plVar16 == plVar17) {
          plVar16 = plVar22 + 2;
          FUN_10ab15630(plVar16,param_2);
          if (((ulong)plVar16 & 1) != 0) {
            uVar14 = 0;
            goto LAB_10ab15a8c;
          }
        }
        else {
          if (((ulong)plVar24 & uVar25) == 0) {
            plVar16 = (long *)((ulong)plVar16 & uVar25);
          }
          else if (plVar24 <= plVar16) {
            uVar10 = 0;
            if (plVar24 != (long *)0x0) {
              uVar10 = (ulong)plVar16 / (ulong)plVar24;
            }
            plVar16 = (long *)((long)plVar16 - uVar10 * (long)plVar24);
          }
          if (plVar16 != unaff_x26) break;
        }
      }
    }
  }
  plVar23 = (long *)*param_4;
  plVar22 = (long *)0x58;
  __Znwm();
  *plVar22 = 0;
  plVar22[1] = (long)plVar17;
  puVar1 = (undefined1 *)*param_5;
  puVar4 = (undefined4 *)param_5[1];
  puVar2 = (undefined4 *)param_5[2];
  puVar5 = (undefined4 *)param_5[3];
  puVar3 = (undefined4 *)param_5[4];
  plVar16 = (long *)param_5[5];
  lVar13 = plVar23[1];
  lVar12 = *plVar23;
  uVar14 = *(undefined8 *)((long)plVar23 + 0xc);
  *(undefined8 *)((long)plVar22 + 0x24) = *(undefined8 *)((long)plVar23 + 0x14);
  *(undefined8 *)((long)plVar22 + 0x1c) = uVar14;
  plVar22[3] = lVar13;
  plVar22[2] = lVar12;
  uVar6 = *puVar4;
  uVar7 = *puVar2;
  uVar8 = *puVar5;
  uVar9 = *puVar3;
  lVar13 = plVar16[1];
  lVar12 = *plVar16;
  *(undefined1 *)((long)plVar22 + 0x2c) = *puVar1;
  *(undefined4 *)(plVar22 + 6) = uVar6;
  *(undefined4 *)((long)plVar22 + 0x34) = uVar7;
  *(undefined4 *)(plVar22 + 7) = uVar8;
  *(undefined4 *)((long)plVar22 + 0x3c) = uVar9;
  plVar22[9] = lVar13;
  plVar22[8] = lVar12;
  *(undefined4 *)(plVar22 + 10) = 0x3e80000;
  if ((plVar24 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar24)) goto LAB_10ab15a14;
  uVar25 = 1;
  if ((long *)0x2 < plVar24) {
    uVar25 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
  }
  plVar16 = (long *)(uVar25 | (long)plVar24 << 1);
  plVar23 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar16 <= plVar23) {
    plVar16 = plVar23;
  }
  if ((long)plVar16 - 1U == 0) {
    plVar16 = (long *)0x2;
  }
  else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar24 = (long *)param_1[1];
  }
  if (plVar24 < plVar16) {
LAB_10ab1589c:
    if ((ulong)plVar16 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab15af8);
      (*pcVar11)();
    }
    lVar12 = (long)plVar16 << 3;
    __Znwm();
    lVar13 = *param_1;
    *param_1 = lVar12;
    if (lVar13 != 0) {
      __ZdlPv();
    }
    plVar24 = (long *)0x0;
    param_1[1] = (long)plVar16;
    do {
      *(undefined8 *)(*param_1 + (long)plVar24 * 8) = 0;
      plVar24 = (long *)((long)plVar24 + 1);
    } while (plVar16 != plVar24);
    plVar23 = (long *)param_1[2];
    plVar24 = plVar16;
    if (plVar23 != (long *)0x0) {
      plVar18 = (long *)plVar23[1];
      uVar25 = (long)plVar16 - 1;
      if (((ulong)plVar16 & uVar25) == 0) {
        plVar18 = (long *)((ulong)plVar18 & uVar25);
      }
      else if (plVar16 <= plVar18) {
        uVar10 = 0;
        if (plVar16 != (long *)0x0) {
          uVar10 = (ulong)plVar18 / (ulong)plVar16;
        }
        plVar18 = (long *)((long)plVar18 - uVar10 * (long)plVar16);
      }
      *(long **)(*param_1 + (long)plVar18 * 8) = param_1 + 2;
      plVar19 = (long *)*plVar23;
      while (plVar19 != (long *)0x0) {
        plVar21 = (long *)plVar19[1];
        if (((ulong)plVar16 & uVar25) == 0) {
          plVar21 = (long *)((ulong)plVar21 & uVar25);
        }
        else if (plVar16 <= plVar21) {
          uVar10 = 0;
          if (plVar16 != (long *)0x0) {
            uVar10 = (ulong)plVar21 / (ulong)plVar16;
          }
          plVar21 = (long *)((long)plVar21 - uVar10 * (long)plVar16);
        }
        plVar20 = plVar19;
        if (plVar21 != plVar18) {
          lVar12 = *param_1;
          if (*(long *)(lVar12 + (long)plVar21 * 8) == 0) {
            *(long **)(lVar12 + (long)plVar21 * 8) = plVar23;
            plVar18 = plVar21;
          }
          else {
            *plVar23 = *plVar19;
            *plVar19 = **(undefined8 **)(lVar12 + (long)plVar21 * 8);
            **(long **)(lVar12 + (long)plVar21 * 8) = (long)plVar19;
            plVar20 = plVar23;
          }
        }
        plVar23 = plVar20;
        plVar19 = (long *)*plVar20;
      }
    }
  }
  else if (plVar16 < plVar24) {
    plVar23 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar24 < (long *)0x3) || (((ulong)plVar24 & (long)plVar24 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar23) {
      plVar23 = (long *)(1L << (-LZCOUNT((long)plVar23 + -1) & 0x3fU));
    }
    if (plVar16 <= plVar23) {
      plVar16 = plVar23;
    }
    if (plVar16 < plVar24) {
      if (plVar16 != (long *)0x0) goto LAB_10ab1589c;
      lVar12 = *param_1;
      *param_1 = 0;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar24 = (long *)0x0;
    }
    else {
      plVar24 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar24 - 1U & (ulong)plVar17);
  }
  else {
    unaff_x26 = plVar17;
    if (plVar24 <= plVar17) {
      uVar25 = 0;
      if (plVar24 != (long *)0x0) {
        uVar25 = (ulong)plVar17 / (ulong)plVar24;
      }
      unaff_x26 = (long *)((long)plVar17 - uVar25 * (long)plVar24);
    }
  }
LAB_10ab15a14:
  lVar12 = *param_1;
  plVar17 = *(long **)(lVar12 + (long)unaff_x26 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = param_1 + 2;
    *plVar22 = *plVar17;
    *plVar17 = (long)plVar22;
    *(long **)(lVar12 + (long)unaff_x26 * 8) = plVar17;
    if (*plVar22 != 0) {
      plVar17 = *(long **)(*plVar22 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar17) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar17 / (ulong)plVar24;
        }
        plVar17 = (long *)((long)plVar17 - uVar25 * (long)plVar24);
      }
      *(long **)(*param_1 + (long)plVar17 * 8) = plVar22;
    }
  }
  else {
    *plVar22 = *plVar17;
    *plVar17 = (long)plVar22;
  }
  param_1[3] = param_1[3] + 1;
  uVar14 = 1;
LAB_10ab15a8c:
  auVar26._8_8_ = uVar14;
  auVar26._0_8_ = plVar22;
  return auVar26;
}



/* Entry: 10ab15b0c; end: 10ab16137;  */

undefined8 FUN_10ab15b0c(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  int aiStack_110 [2];
  undefined8 uStack_108;
  char cStack_f1;
  long *plStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_86;
  long *plStack_80;
  undefined8 uStack_78;
  long *aplStack_70 [2];
  
  uStack_86 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_b8 = *param_1;
  lStack_b0 = param_1[1] - lStack_b8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_e8 = &uStack_e0;
  uStack_e0 = 0;
  puStack_d0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  func_0x00010985e644(aiStack_110,&puStack_e8,&lStack_b8);
  plVar4 = plStack_f0;
  if (aiStack_110[0] == 0) {
    uVar18 = 0;
    if (plStack_f0 != (long *)0x0) {
      plStack_f0 = (long *)0x0;
      uVar1 = *(uint *)(param_2 + 0xf0);
      FUN_10ab4a154(param_2,(int)plVar4[0x14]);
      lVar20 = *(long *)(param_2 + 0xf8);
      lVar22 = *(long *)(param_2 + 0x100) - lVar20;
      if (lVar22 != 0) {
        uVar17 = 0;
        uVar11 = (lVar22 >> 3) * 0x6db6db6db6db6db7;
        do {
          lVar22 = plVar4[2];
          uVar14 = plVar4[3] - lVar22 >> 3;
          uVar16 = (uint)uVar17;
          if (uVar14 <= (ulong)(long)(int)uVar16) goto LAB_10ab16090;
          lVar20 = lVar20 + uVar17 * 0x38;
          lVar19 = *(long *)(lVar22 + (long)(int)uVar16 * 8);
          if (*(int *)(lVar20 + 0x24) == 6) {
            bVar6 = true;
          }
          else {
            bVar6 = *(int *)(lVar20 + 0x24) != 5 && *(int *)(lVar19 + 0x38) == 1;
          }
          uVar23 = *(uint *)(param_2 + 0x118);
          if (uVar23 == 0xffffffff) {
            lVar12 = *(long *)(param_2 + 0x10);
LAB_10ab15c70:
            bVar3 = false;
            lVar22 = 0;
            lVar12 = lVar12 + (ulong)*(uint *)(lVar20 + 0x30);
            if (!bVar6) goto LAB_10ab15da0;
LAB_10ab15c84:
            iVar7 = *(int *)(lVar20 + 0x28);
            if (iVar7 < 3) {
              if (iVar7 == 1) {
                func_0x00010ab507d0(&plStack_80,param_2,lVar20);
                plVar21 = plStack_80;
                aplStack_70[0] = (long *)((ulong)aplStack_70[0] & 0xffffffff00000000);
                if (*(int *)(lVar19 + 0x60) == 0) {
LAB_10ab15ef0:
                  if (plVar21 == (long *)0x0) goto LAB_10ab15f04;
                }
                else {
                  uVar11 = 0;
                  do {
                    FUN_10ab16138(lVar19,uVar11,5,aplStack_70);
                    (**(code **)(*plVar21 + 0x18))(plVar21,uVar11,aplStack_70);
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(uint *)(lVar19 + 0x60));
                }
                goto LAB_10ab15ef4;
              }
              if (iVar7 == 2) {
                func_0x00010ab50ad8(&plStack_80,param_2,lVar20);
                plVar21 = plStack_80;
                aplStack_70[0] = (long *)0x0;
                if (*(int *)(lVar19 + 0x60) == 0) goto LAB_10ab15ef0;
                uVar11 = 0;
                do {
                  FUN_10ab16138(lVar19,uVar11,5,aplStack_70);
                  (**(code **)(*plVar21 + 0x18))(plVar21,uVar11,aplStack_70);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(uint *)(lVar19 + 0x60));
                goto LAB_10ab15ef4;
              }
            }
            else {
              if (iVar7 == 3) {
                func_0x00010ab4c544(aplStack_70,param_2,lVar20);
                plVar21 = aplStack_70[0];
                plStack_80 = (long *)0x0;
                uStack_78 = uStack_78 & 0xffffffff00000000;
                if (*(int *)(lVar19 + 0x60) == 0) goto LAB_10ab15ef0;
                uVar11 = 0;
                do {
                  FUN_10ab16138(lVar19,uVar11,5,&plStack_80);
                  (**(code **)(*plVar21 + 0x18))(plVar21,uVar11,&plStack_80);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(uint *)(lVar19 + 0x60));
              }
              else {
                if (iVar7 != 4) goto LAB_10ab15f04;
                func_0x00010ab4c84c(aplStack_70,param_2,lVar20);
                plVar21 = aplStack_70[0];
                plStack_80 = (long *)0x0;
                uStack_78 = 0;
                if (*(int *)(lVar19 + 0x60) == 0) goto LAB_10ab15ef0;
                uVar11 = 0;
                do {
                  FUN_10ab16138(lVar19,uVar11,5,&plStack_80);
                  if (lVar22 != 0) {
                    FUN_10ab16138(lVar22,uVar11,5,(long)&uStack_78 + 4);
                  }
                  (**(code **)(*plVar21 + 0x18))(plVar21,uVar11,&plStack_80);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(uint *)(lVar19 + 0x60));
              }
LAB_10ab15ef4:
              (**(code **)(*plVar21 + 8))(plVar21);
            }
          }
          else {
            if (uVar11 <= uVar23) {
              FUN_10ab725fc();
              goto LAB_10ab16090;
            }
            lVar12 = *(long *)(param_2 + 0x10);
            if (uVar16 != uVar23) goto LAB_10ab15c70;
            lVar12 = lVar12 + (ulong)*(uint *)(lVar20 + 0x30);
            if (*(int *)(lVar20 + 0x28) == 4) {
              uVar11 = (plVar4[3] - lVar22) * 0x20000000 + -0x100000000 >> 0x20;
              if (uVar14 <= uVar11) goto LAB_10ab16090;
              lVar22 = *(long *)(lVar22 + uVar11 * 8);
              bVar3 = true;
            }
            else {
              bVar3 = false;
              lVar22 = 0;
            }
            if (bVar6) goto LAB_10ab15c84;
LAB_10ab15da0:
            if (*(int *)(lVar19 + 0x60) != 0) {
              uVar23 = 0;
              do {
                FUN_10ab16138(lVar19,uVar23,*(undefined4 *)(lVar20 + 0x24),lVar12);
                if (bVar3) {
                  uVar2 = *(int *)(lVar20 + 0x24) - 1;
                  if (uVar2 < 7) {
                    iVar7 = *(int *)(&UNK_10e4f6bc4 + (ulong)uVar2 * 4);
                  }
                  else {
                    iVar7 = 0;
                  }
                  uVar2 = *(int *)(lVar20 + 0x28) * iVar7;
                  FUN_10ab16138(lVar22,uVar23,*(int *)(lVar20 + 0x24),
                                lVar12 + (ulong)((uVar2 >> 2) * 2 + (uVar2 >> 2)));
                }
                lVar12 = lVar12 + (ulong)uVar1;
                uVar23 = uVar23 + 1;
              } while (uVar23 < *(uint *)(lVar19 + 0x60));
            }
          }
LAB_10ab15f04:
          uVar17 = (ulong)(uVar16 + 1);
          lVar20 = *(long *)(param_2 + 0xf8);
          uVar11 = (*(long *)(param_2 + 0x100) - lVar20 >> 3) * 0x6db6db6db6db6db7;
        } while (uVar17 <= uVar11 && uVar11 - uVar17 != 0);
      }
      uVar1 = *(uint *)(plVar4 + 0x14);
      uVar8 = 1;
      if (uVar1 >> 0x10 != 0) {
        uVar8 = 2;
      }
      *(undefined4 *)(param_2 + 0xe8) = uVar8;
      FUN_10ab4cb54(param_2,(ulong)(plVar4[0x19] - plVar4[0x18]) >> 2 & 0xffffffff);
      puVar9 = *(undefined4 **)(param_2 + 0x28);
      puVar13 = (undefined4 *)plVar4[0x18];
      uVar11 = (plVar4[0x19] - (long)puVar13 >> 2) * -0x5555555555555555;
      uVar17 = uVar11 & 0xffffffff;
      if (*(int *)(param_2 + 0xe8) == 1) {
        if (uVar17 != 0) {
          uVar14 = 0;
          do {
            if (uVar14 == uVar11) {
LAB_10ab16090:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab16094);
              (*pcVar5)();
            }
            lVar20 = 0;
            puVar10 = puVar9;
            do {
              puVar9 = (undefined4 *)((long)puVar10 + 2);
              *(short *)puVar10 = (short)*(undefined4 *)((long)puVar13 + lVar20);
              lVar20 = lVar20 + 4;
              puVar10 = puVar9;
            } while (lVar20 != 0xc);
            uVar14 = uVar14 + 1;
            puVar13 = puVar13 + 3;
          } while (uVar14 != uVar17);
        }
      }
      else if (uVar17 != 0) {
        uVar14 = 0;
        do {
          if (uVar14 == uVar11) goto LAB_10ab16090;
          lVar20 = 3;
          puVar10 = puVar9;
          puVar15 = puVar13;
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *puVar15;
            lVar20 = lVar20 + -1;
            puVar10 = puVar9;
            puVar15 = puVar15 + 1;
          } while (lVar20 != 0);
          uVar14 = uVar14 + 1;
          puVar13 = puVar13 + 3;
        } while (uVar14 != uVar17);
      }
      if (0xffff < uVar1) {
        FUN_10ab4f304(param_2);
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 0;
  }
  plVar4 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  func_0x00010945fda0(&puStack_d0,uStack_c8);
  func_0x000107c34ee4(&puStack_e8,uStack_e0);
  return uVar18;
}



/* Entry: 10ab16138; end: 10ab161db;  */

undefined1  [16] FUN_10ab16138(long *param_1,ulong param_2,int param_3,long param_4)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  ushort uVar7;
  char cVar8;
  byte bVar9;
  short sVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *pcVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  double dVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uStack_58;
  
  if ((*(byte *)((long)param_1 + 100) & 1) == 0) {
    if ((ulong)(param_1[10] - param_1[9] >> 2) <= (param_2 & 0xffffffff)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10ab161c8);
      (*pcVar17)();
    }
    param_2 = (ulong)*(uint *)(param_1[9] + (param_2 & 0xffffffff) * 4);
  }
  if (param_3 < 3) {
    if (param_3 == 1) {
      param_2 = param_2 & 0xffffffff;
      bVar9 = *(byte *)(param_1 + 3);
      if (param_4 != 0) {
        switch(*(undefined4 *)((long)param_1 + 0x1c)) {
        case 1:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar27 = *(long *)*param_1;
            lVar23 = param_1[5];
            lVar29 = param_1[6];
            do {
              puVar19 = (undefined1 *)(lVar27 + lVar23 * param_2 + lVar29 + uVar24);
              if (*(undefined1 **)(*param_1 + 8) <= puVar19) {
                uVar18 = 0;
                goto LAB_10a0dfc44;
              }
              *(undefined1 *)(param_4 + uVar24) = *puVar19;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
LAB_10a0dfc44:
          auVar55._8_8_ = param_2;
          auVar55._0_8_ = uVar18;
          return auVar55;
        case 2:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar27 = *(long *)*param_1;
            lVar23 = param_1[5];
            lVar29 = param_1[6];
            do {
              pcVar4 = (char *)(lVar27 + lVar23 * param_2 + lVar29 + uVar24);
              if ((*(char **)(*param_1 + 8) <= pcVar4) || (cVar8 = *pcVar4, cVar8 < '\0')) {
                uVar18 = 0;
                goto code_r0x00010a0dfce0;
              }
              *(char *)(param_4 + uVar24) = cVar8;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0dfce0:
          auVar56._8_8_ = param_2;
          auVar56._0_8_ = uVar18;
          return auVar56;
        case 3:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (sVar10 = *(short *)(lVar29 + uVar24 * 2), cVar8 = (char)sVar10, sVar10 != cVar8))
              {
                uVar18 = 0;
                goto code_r0x00010a0dfd8c;
              }
              *(char *)(param_4 + uVar24) = cVar8;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0dfd8c:
          auVar57._8_8_ = param_2;
          auVar57._0_8_ = uVar18;
          return auVar57;
        case 4:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar7 = *(ushort *)(lVar29 + uVar24 * 2), 0x7f < uVar7)) {
                uVar18 = 0;
                goto code_r0x00010a0dfe34;
              }
              *(char *)(param_4 + uVar24) = (char)uVar7;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0dfe34:
          auVar58._8_8_ = param_2;
          auVar58._0_8_ = uVar18;
          return auVar58;
        case 5:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (iVar6 = *(int *)(lVar29 + uVar24 * 4), cVar8 = (char)iVar6, iVar6 != cVar8)) {
                uVar18 = 0;
                goto code_r0x00010a0dfedc;
              }
              *(char *)(param_4 + uVar24) = cVar8;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0dfedc:
          auVar59._8_8_ = param_2;
          auVar59._0_8_ = uVar18;
          return auVar59;
        case 6:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar26 = *(uint *)(lVar29 + uVar24 * 4), 0x7f < uVar26)) {
                uVar18 = 0;
                goto code_r0x00010a0dff84;
              }
              *(char *)(param_4 + uVar24) = (char)uVar26;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0dff84:
          auVar60._8_8_ = param_2;
          auVar60._0_8_ = uVar18;
          return auVar60;
        case 7:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (lVar27 = *(long *)(lVar29 + uVar24 * 8), cVar8 = (char)lVar27, lVar27 != cVar8)) {
                uVar18 = 0;
                goto code_r0x00010a0e002c;
              }
              *(char *)(param_4 + uVar24) = cVar8;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e002c:
          auVar61._8_8_ = param_2;
          auVar61._0_8_ = uVar18;
          return auVar61;
        case 8:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar25 = *(ulong *)(lVar29 + uVar24 * 8), 0x7f < uVar25)) {
                uVar18 = 0;
                goto code_r0x00010a0e00d4;
              }
              *(char *)(param_4 + uVar24) = (char)uVar25;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e00d4:
          auVar62._8_8_ = param_2;
          auVar62._0_8_ = uVar18;
          return auVar62;
        case 9:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar20 = *(long *)*param_1;
            lVar29 = param_1[6];
            lVar27 = param_1[5] * param_2;
            do {
              if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar20 + lVar27 + lVar29 + lVar23)) {
                puVar19 = (undefined1 *)0x0;
                goto LAB_10a0e01a4;
              }
              param_2 = (ulong)*(byte *)(param_1 + 4);
              puVar19 = &stack0xffffffffffffffbc;
              func_0x00010a0e0334(puVar19,param_2,param_4 + uVar24);
              if ((int)puVar19 == 0) goto LAB_10a0e01a4;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          puVar19 = (undefined1 *)0x1;
LAB_10a0e01a4:
          auVar63._8_8_ = param_2;
          auVar63._0_8_ = puVar19;
          return auVar63;
        case 10:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar20 = *(long *)*param_1;
            lVar29 = param_1[6];
            lVar27 = param_1[5] * param_2;
            do {
              if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar20 + lVar27 + lVar29 + lVar23)) {
                puVar19 = (undefined1 *)0x0;
                goto code_r0x00010a0e0284;
              }
              param_2 = (ulong)*(byte *)(param_1 + 4);
              puVar19 = &stack0xffffffffffffffb8;
              func_0x00010a0e03b8(puVar19,param_2,param_4 + uVar24);
              if ((int)puVar19 == 0) goto code_r0x00010a0e0284;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          puVar19 = (undefined1 *)0x1;
code_r0x00010a0e0284:
          auVar64._8_8_ = param_2;
          auVar64._0_8_ = puVar19;
          return auVar64;
        case 0xb:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar27 = *(long *)*param_1;
            lVar23 = param_1[5];
            lVar29 = param_1[6];
            do {
              puVar19 = (undefined1 *)(lVar27 + lVar23 * param_2 + lVar29 + uVar24);
              if (*(undefined1 **)(*param_1 + 8) <= puVar19) {
                uVar18 = 0;
                goto LAB_10a0e032c;
              }
              *(undefined1 *)(param_4 + uVar24) = *puVar19;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
LAB_10a0e032c:
          auVar65._8_8_ = param_2;
          auVar65._0_8_ = uVar18;
          return auVar65;
        }
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_2;
      return auVar14 << 0x40;
    }
    if (param_3 == 2) {
      param_2 = param_2 & 0xffffffff;
      bVar9 = *(byte *)(param_1 + 3);
      if (param_4 != 0) {
        switch(*(undefined4 *)((long)param_1 + 0x1c)) {
        case 1:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar27 = *(long *)*param_1;
            lVar23 = param_1[5];
            lVar29 = param_1[6];
            do {
              pcVar4 = (char *)(lVar27 + lVar23 * param_2 + lVar29 + uVar24);
              if ((*(char **)(*param_1 + 8) <= pcVar4) || (cVar8 = *pcVar4, cVar8 < '\0')) {
                uVar18 = 0;
                goto LAB_10a0df35c;
              }
              *(char *)(param_4 + uVar24) = cVar8;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
LAB_10a0df35c:
          auVar44._8_8_ = param_2;
          auVar44._0_8_ = uVar18;
          return auVar44;
        case 2:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar27 = *(long *)*param_1;
            lVar23 = param_1[5];
            lVar29 = param_1[6];
            do {
              puVar19 = (undefined1 *)(lVar27 + lVar23 * param_2 + lVar29 + uVar24);
              if (*(undefined1 **)(*param_1 + 8) <= puVar19) {
                uVar18 = 0;
                goto code_r0x00010a0df3f4;
              }
              *(undefined1 *)(param_4 + uVar24) = *puVar19;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0df3f4:
          auVar45._8_8_ = param_2;
          auVar45._0_8_ = uVar18;
          return auVar45;
        case 3:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar7 = *(ushort *)(lVar29 + uVar24 * 2), 0xff < uVar7)) {
                uVar18 = 0;
                goto code_r0x00010a0df49c;
              }
              *(char *)(param_4 + uVar24) = (char)uVar7;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0df49c:
          auVar46._8_8_ = param_2;
          auVar46._0_8_ = uVar18;
          return auVar46;
        case 4:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar7 = *(ushort *)(lVar29 + uVar24 * 2), 0xff < uVar7)) {
                uVar18 = 0;
                goto code_r0x00010a0df544;
              }
              *(char *)(param_4 + uVar24) = (char)uVar7;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0df544:
          auVar47._8_8_ = param_2;
          auVar47._0_8_ = uVar18;
          return auVar47;
        case 5:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar26 = *(uint *)(lVar29 + uVar24 * 4), 0xff < uVar26)) {
                uVar18 = 0;
                goto code_r0x00010a0df5ec;
              }
              *(char *)(param_4 + uVar24) = (char)uVar26;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0df5ec:
          auVar48._8_8_ = param_2;
          auVar48._0_8_ = uVar18;
          return auVar48;
        case 6:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar26 = *(uint *)(lVar29 + uVar24 * 4), 0xff < uVar26)) {
                uVar18 = 0;
                goto code_r0x00010a0df694;
              }
              *(char *)(param_4 + uVar24) = (char)uVar26;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0df694:
          auVar49._8_8_ = param_2;
          auVar49._0_8_ = uVar18;
          return auVar49;
        case 7:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar25 = *(ulong *)(lVar29 + uVar24 * 8), 0xff < uVar25)) {
                uVar18 = 0;
                goto code_r0x00010a0df73c;
              }
              *(char *)(param_4 + uVar24) = (char)uVar25;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0df73c:
          auVar50._8_8_ = param_2;
          auVar50._0_8_ = uVar18;
          return auVar50;
        case 8:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) ||
                 (uVar25 = *(ulong *)(lVar29 + uVar24 * 8), 0xff < uVar25)) {
                uVar18 = 0;
                goto code_r0x00010a0df7e4;
              }
              *(char *)(param_4 + uVar24) = (char)uVar25;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0df7e4:
          auVar51._8_8_ = param_2;
          auVar51._0_8_ = uVar18;
          return auVar51;
        case 9:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar20 = *(long *)*param_1;
            lVar29 = param_1[6];
            lVar27 = param_1[5] * param_2;
            do {
              if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar20 + lVar27 + lVar29 + lVar23)) {
                puVar19 = (undefined1 *)0x0;
                goto LAB_10a0df8b4;
              }
              param_2 = (ulong)*(byte *)(param_1 + 4);
              puVar19 = &stack0xffffffffffffffbc;
              FUN_10a0dfa78(puVar19,param_2,param_4 + uVar24);
              if ((int)puVar19 == 0) goto LAB_10a0df8b4;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          puVar19 = (undefined1 *)0x1;
LAB_10a0df8b4:
          auVar52._8_8_ = param_2;
          auVar52._0_8_ = puVar19;
          return auVar52;
        case 10:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar29 + lVar23)) {
LAB_10a0df9d0:
                uVar18 = 0;
                goto LAB_10a0df9d4;
              }
              uVar18 = 0;
              dVar22 = *(double *)(lVar29 + uVar24 * 8);
              param_2 = (long)ABS(dVar22) + 0xfff0000000000000U >> 0x35;
              if ((((0x7fffffffffffffff < (ulong)dVar22 || 0x3fe < param_2) &&
                   0xffffffffffffe < (long)dVar22 - 1U) && ABS(dVar22) != 0.0) || (255.0 <= dVar22))
              goto LAB_10a0df9d4;
              if ((char)param_1[4] == '\x01') {
                if (1.0 < dVar22) goto LAB_10a0df9d0;
                dVar22 = (double)(long)(dVar22 * 255.0 + 0.5);
              }
              *(char *)(param_4 + uVar24) = (char)(int)dVar22;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
LAB_10a0df9d4:
          auVar53._8_8_ = param_2;
          auVar53._0_8_ = uVar18;
          return auVar53;
        case 0xb:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar27 = *(long *)*param_1;
            lVar23 = param_1[5];
            lVar29 = param_1[6];
            do {
              puVar19 = (undefined1 *)(lVar27 + lVar23 * param_2 + lVar29 + uVar24);
              if (*(undefined1 **)(*param_1 + 8) <= puVar19) {
                uVar18 = 0;
                goto code_r0x00010a0dfa70;
              }
              *(undefined1 *)(param_4 + uVar24) = *puVar19;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) + 1;
            _bzero(param_4 + (ulong)uVar26,param_2);
          }
          uVar18 = 1;
code_r0x00010a0dfa70:
          auVar54._8_8_ = param_2;
          auVar54._0_8_ = uVar18;
          return auVar54;
        }
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = param_2;
      return auVar13 << 0x40;
    }
  }
  else {
    if (param_3 == 3) {
      param_2 = param_2 & 0xffffffff;
      bVar9 = *(byte *)(param_1 + 3);
      if (param_4 != 0) {
        switch(*(undefined4 *)((long)param_1 + 0x1c)) {
        case 1:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pcVar4 = (char *)((long *)*param_1)[1];
            do {
              pcVar1 = (char *)(lVar29 + lVar23 * param_2 + lVar27 + uVar24);
              if (pcVar4 <= pcVar1) {
                uVar18 = 0;
                goto LAB_10a0e0e4c;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)*pcVar1;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
LAB_10a0e0e4c:
          auVar77._8_8_ = param_2;
          auVar77._0_8_ = uVar18;
          return auVar77;
        case 2:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pbVar5 = (byte *)((long *)*param_1)[1];
            do {
              pbVar2 = (byte *)(lVar29 + lVar23 * param_2 + lVar27 + uVar24);
              if (pbVar5 <= pbVar2) {
                uVar18 = 0;
                goto code_r0x00010a0e0ee0;
              }
              *(ushort *)(param_4 + uVar24 * 2) = (ushort)*pbVar2;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e0ee0:
          auVar78._8_8_ = param_2;
          auVar78._0_8_ = uVar18;
          return auVar78;
        case 3:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x00010a0e0f7c;
              }
              *(undefined2 *)(param_4 + uVar24 * 2) = *(undefined2 *)(lVar29 + uVar24 * 2);
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e0f7c:
          auVar79._8_8_ = param_2;
          auVar79._0_8_ = uVar18;
          return auVar79;
        case 4:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (sVar10 = *(short *)(lVar29 + uVar24 * 2), sVar10 < 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e101c;
              }
              *(short *)(param_4 + uVar24 * 2) = sVar10;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e101c:
          auVar80._8_8_ = param_2;
          auVar80._0_8_ = uVar18;
          return auVar80;
        case 5:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (iVar6 = *(int *)(lVar29 + uVar24 * 4), sVar10 = (short)iVar6, iVar6 != sVar10)) {
                uVar18 = 0;
                goto code_r0x00010a0e10c0;
              }
              *(short *)(param_4 + uVar24 * 2) = sVar10;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e10c0:
          auVar81._8_8_ = param_2;
          auVar81._0_8_ = uVar18;
          return auVar81;
        case 6:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (uVar26 = *(uint *)(lVar29 + uVar24 * 4), uVar26 >> 0xf != 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e1164;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)uVar26;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e1164:
          auVar82._8_8_ = param_2;
          auVar82._0_8_ = uVar18;
          return auVar82;
        case 7:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (lVar27 = *(long *)(lVar29 + uVar24 * 8), sVar10 = (short)lVar27, lVar27 != sVar10)
                 ) {
                uVar18 = 0;
                goto code_r0x00010a0e1208;
              }
              *(short *)(param_4 + uVar24 * 2) = sVar10;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e1208:
          auVar83._8_8_ = param_2;
          auVar83._0_8_ = uVar18;
          return auVar83;
        case 8:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (uVar28 = *(ulong *)(lVar29 + uVar24 * 8), uVar28 >> 0xf != 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e12ac;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)uVar28;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
code_r0x00010a0e12ac:
          auVar84._8_8_ = param_2;
          auVar84._0_8_ = uVar18;
          return auVar84;
        case 9:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar29 = 0;
            uVar24 = 0;
            lVar27 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            lVar23 = param_4;
            do {
              if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar27 + lVar29)) {
                lVar20 = 0;
                goto LAB_10a0e138c;
              }
              uStack_58 = CONCAT44(*(undefined4 *)(lVar27 + uVar24 * 4),(undefined4)uStack_58);
              param_2 = (ulong)*(byte *)(param_1 + 4);
              lVar20 = (long)&uStack_58 + 4;
              func_0x00010a0e1530(lVar20,param_2,lVar23);
              if ((int)lVar20 == 0) goto LAB_10a0e138c;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
              lVar29 = lVar29 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          lVar20 = 1;
LAB_10a0e138c:
          auVar85._8_8_ = param_2;
          auVar85._0_8_ = lVar20;
          return auVar85;
        case 10:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar29 = 0;
            uVar24 = 0;
            lVar27 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            lVar23 = param_4;
            do {
              if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar27 + lVar29)) {
                puVar21 = (undefined8 *)0x0;
                goto code_r0x00010a0e1480;
              }
              uStack_58 = *(undefined8 *)(lVar27 + uVar24 * 8);
              param_2 = (ulong)*(byte *)(param_1 + 4);
              puVar21 = &uStack_58;
              func_0x00010a0e15b4(puVar21,param_2,lVar23);
              if ((int)puVar21 == 0) goto code_r0x00010a0e1480;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
              lVar29 = lVar29 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          puVar21 = (undefined8 *)0x1;
code_r0x00010a0e1480:
          auVar86._8_8_ = param_2;
          auVar86._0_8_ = puVar21;
          return auVar86;
        case 0xb:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pbVar5 = (byte *)((long *)*param_1)[1];
            do {
              pbVar2 = (byte *)(lVar29 + lVar23 * param_2 + lVar27 + uVar24);
              if (pbVar5 <= pbVar2) {
                uVar18 = 0;
                goto LAB_10a0e1528;
              }
              *(ushort *)(param_4 + uVar24 * 2) = (ushort)*pbVar2;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 2 + 2;
            _bzero(param_4 + (ulong)uVar26 * 2,param_2);
          }
          uVar18 = 1;
LAB_10a0e1528:
          auVar87._8_8_ = param_2;
          auVar87._0_8_ = uVar18;
          return auVar87;
        }
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_2;
      return auVar16 << 0x40;
    }
    if (param_3 == 4) {
      dVar22 = (double)(param_2 & 0xffffffff);
      bVar9 = *(byte *)(param_1 + 3);
      if (param_4 != 0) {
        switch(*(undefined4 *)((long)param_1 + 0x1c)) {
        case 1:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pcVar4 = (char *)((long *)*param_1)[1];
            do {
              pcVar1 = (char *)(lVar29 + lVar23 * (long)dVar22 + lVar27 + uVar24);
              if ((pcVar4 <= pcVar1) || (cVar8 = *pcVar1, cVar8 < '\0')) {
                uVar18 = 0;
                goto LAB_10a0e0578;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)cVar8;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
LAB_10a0e0578:
          auVar66._8_8_ = dVar22;
          auVar66._0_8_ = uVar18;
          return auVar66;
        case 2:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pbVar5 = (byte *)((long *)*param_1)[1];
            do {
              pbVar2 = (byte *)(lVar29 + lVar23 * (long)dVar22 + lVar27 + uVar24);
              if (pbVar5 <= pbVar2) {
                uVar18 = 0;
                goto code_r0x00010a0e060c;
              }
              *(ushort *)(param_4 + uVar24 * 2) = (ushort)*pbVar2;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e060c:
          auVar67._8_8_ = dVar22;
          auVar67._0_8_ = uVar18;
          return auVar67;
        case 3:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (sVar10 = *(short *)(lVar29 + uVar24 * 2), sVar10 < 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e06ac;
              }
              *(short *)(param_4 + uVar24 * 2) = sVar10;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e06ac:
          auVar68._8_8_ = dVar22;
          auVar68._0_8_ = uVar18;
          return auVar68;
        case 4:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x00010a0e0748;
              }
              *(undefined2 *)(param_4 + uVar24 * 2) = *(undefined2 *)(lVar29 + uVar24 * 2);
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e0748:
          auVar69._8_8_ = dVar22;
          auVar69._0_8_ = uVar18;
          return auVar69;
        case 5:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (uVar26 = *(uint *)(lVar29 + uVar24 * 4), uVar26 >> 0x10 != 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e07ec;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)uVar26;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e07ec:
          auVar70._8_8_ = dVar22;
          auVar70._0_8_ = uVar18;
          return auVar70;
        case 6:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (uVar26 = *(uint *)(lVar29 + uVar24 * 4), uVar26 >> 0x10 != 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e0890;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)uVar26;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e0890:
          auVar71._8_8_ = dVar22;
          auVar71._0_8_ = uVar18;
          return auVar71;
        case 7:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (uVar28 = *(ulong *)(lVar29 + uVar24 * 8), uVar28 >> 0x10 != 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e0934;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)uVar28;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e0934:
          auVar72._8_8_ = dVar22;
          auVar72._0_8_ = uVar18;
          return auVar72;
        case 8:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            do {
              if ((uVar25 <= (ulong)(lVar29 + lVar23)) ||
                 (uVar28 = *(ulong *)(lVar29 + uVar24 * 8), uVar28 >> 0x10 != 0)) {
                uVar18 = 0;
                goto code_r0x00010a0e09d8;
              }
              *(short *)(param_4 + uVar24 * 2) = (short)uVar28;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e09d8:
          auVar73._8_8_ = dVar22;
          auVar73._0_8_ = uVar18;
          return auVar73;
        case 9:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar29 = 0;
            uVar24 = 0;
            lVar27 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            lVar23 = param_4;
            do {
              if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar27 + lVar29)) {
                lVar20 = 0;
                goto LAB_10a0e0ab8;
              }
              uStack_58 = CONCAT44(*(undefined4 *)(lVar27 + uVar24 * 4),(undefined4)uStack_58);
              dVar22 = (double)(ulong)*(byte *)(param_1 + 4);
              lVar20 = (long)&uStack_58 + 4;
              FUN_10a0e0c78(lVar20,dVar22,lVar23);
              if ((int)lVar20 == 0) goto LAB_10a0e0ab8;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
              lVar29 = lVar29 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          lVar20 = 1;
LAB_10a0e0ab8:
          auVar74._8_8_ = dVar22;
          auVar74._0_8_ = lVar20;
          return auVar74;
        case 10:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * (long)dVar22 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
LAB_10a0e0bd4:
                uVar18 = 0;
                goto LAB_10a0e0bd8;
              }
              uVar18 = 0;
              dVar32 = *(double *)(lVar29 + uVar24 * 8);
              dVar22 = ABS(dVar32);
              if ((((0x7fffffffffffffff < (ulong)dVar32 ||
                    0x3fe < (long)dVar22 + 0xfff0000000000000U >> 0x35) &&
                   0xffffffffffffe < (long)dVar32 - 1U) && dVar22 != 0.0) || (65535.0 <= dVar32))
              goto LAB_10a0e0bd8;
              if ((char)param_1[4] == '\x01') {
                if (1.0 < dVar32) goto LAB_10a0e0bd4;
                dVar32 = (double)(long)(dVar32 * 65535.0 + 0.5);
              }
              *(short *)(param_4 + uVar24 * 2) = (short)(int)dVar32;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
LAB_10a0e0bd8:
          auVar75._8_8_ = dVar22;
          auVar75._0_8_ = uVar18;
          return auVar75;
        case 0xb:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pbVar5 = (byte *)((long *)*param_1)[1];
            do {
              pbVar2 = (byte *)(lVar29 + lVar23 * (long)dVar22 + lVar27 + uVar24);
              if (pbVar5 <= pbVar2) {
                uVar18 = 0;
                goto code_r0x00010a0e0c70;
              }
              *(ushort *)(param_4 + uVar24 * 2) = (ushort)*pbVar2;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            dVar22 = (double)((ulong)(~uVar26 + uVar3) * 2 + 2);
            _bzero(param_4 + (ulong)uVar26 * 2,dVar22);
          }
          uVar18 = 1;
code_r0x00010a0e0c70:
          auVar76._8_8_ = dVar22;
          auVar76._0_8_ = uVar18;
          return auVar76;
        }
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar22;
      return auVar15 << 0x40;
    }
    if (param_3 == 5) {
      param_2 = param_2 & 0xffffffff;
      bVar9 = *(byte *)(param_1 + 3);
      if (param_4 != 0) {
        switch(*(undefined4 *)((long)param_1 + 0x1c)) {
        case 1:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pcVar4 = (char *)((long *)*param_1)[1];
            do {
              pcVar1 = (char *)(lVar29 + lVar23 * param_2 + lVar27 + uVar24);
              if (pcVar4 <= pcVar1) {
                uVar18 = 0;
                goto code_r0x0001098557f8;
              }
              fVar30 = (float)(int)*pcVar1;
              fVar12 = fVar30 / 127.0;
              if ((char)param_1[4] == '\0') {
                fVar12 = fVar30;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x0001098557f8:
          auVar33._8_8_ = param_2;
          auVar33._0_8_ = uVar18;
          return auVar33;
        case 2:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pbVar5 = (byte *)((long *)*param_1)[1];
            do {
              pbVar2 = (byte *)(lVar29 + lVar23 * param_2 + lVar27 + uVar24);
              if (pbVar5 <= pbVar2) {
                uVar18 = 0;
                goto code_r0x0001098558a8;
              }
              fVar30 = (float)NEON_ucvtf((uint)*pbVar2);
              fVar12 = fVar30 / 255.0;
              if ((char)param_1[4] == '\0') {
                fVar12 = fVar30;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x0001098558a8:
          auVar34._8_8_ = param_2;
          auVar34._0_8_ = uVar18;
          return auVar34;
        case 3:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855960;
              }
              fVar30 = (float)(int)*(short *)(lVar29 + uVar24 * 2);
              fVar12 = fVar30 / 32767.0;
              if ((char)param_1[4] == '\0') {
                fVar12 = fVar30;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855960:
          auVar35._8_8_ = param_2;
          auVar35._0_8_ = uVar18;
          return auVar35;
        case 4:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855a18;
              }
              fVar30 = (float)NEON_ucvtf((uint)*(ushort *)(lVar29 + uVar24 * 2));
              fVar12 = fVar30 / 65535.0;
              if ((char)param_1[4] == '\0') {
                fVar12 = fVar30;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 2;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855a18:
          auVar36._8_8_ = param_2;
          auVar36._0_8_ = uVar18;
          return auVar36;
        case 5:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855acc;
              }
              fVar30 = (float)*(int *)(lVar29 + uVar24 * 4);
              fVar12 = fVar30 * 4.656613e-10;
              if ((char)param_1[4] == '\0') {
                fVar12 = fVar30;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855acc:
          auVar37._8_8_ = param_2;
          auVar37._0_8_ = uVar18;
          return auVar37;
        case 6:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855b84;
              }
              fVar30 = (float)NEON_ucvtf(*(undefined4 *)(lVar29 + uVar24 * 4));
              fVar12 = fVar30 * 2.3283064e-10;
              if ((char)param_1[4] == '\0') {
                fVar12 = fVar30;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855b84:
          auVar38._8_8_ = param_2;
          auVar38._0_8_ = uVar18;
          return auVar38;
        case 7:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855c34;
              }
              lVar27 = *(long *)(lVar29 + uVar24 * 8);
              fVar12 = (float)lVar27 / -9.223372e+18;
              if ((char)param_1[4] == '\0') {
                fVar12 = (float)lVar27;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855c34:
          auVar39._8_8_ = param_2;
          auVar39._0_8_ = uVar18;
          return auVar39;
        case 8:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855ce4;
              }
              uVar28 = *(ulong *)(lVar29 + uVar24 * 8);
              fVar12 = (float)uVar28 / 1.0;
              if ((char)param_1[4] == '\0') {
                fVar12 = (float)uVar28;
              }
              *(float *)(param_4 + uVar24 * 4) = fVar12;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855ce4:
          auVar40._8_8_ = param_2;
          auVar40._0_8_ = uVar18;
          return auVar40;
        case 9:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855d80;
              }
              *(undefined4 *)(param_4 + uVar24 * 4) = *(undefined4 *)(lVar29 + uVar24 * 4);
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 4;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855d80:
          auVar41._8_8_ = param_2;
          auVar41._0_8_ = uVar18;
          return auVar41;
        case 10:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            lVar23 = 0;
            uVar24 = 0;
            uVar25 = ((long *)*param_1)[1];
            lVar29 = *(long *)*param_1 + param_1[5] * param_2 + param_1[6];
            do {
              if (uVar25 <= (ulong)(lVar29 + lVar23)) {
                uVar18 = 0;
                goto code_r0x000109855e20;
              }
              *(float *)(param_4 + uVar24 * 4) = (float)*(double *)(lVar29 + uVar24 * 8);
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
              lVar23 = lVar23 + 8;
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855e20:
          auVar42._8_8_ = param_2;
          auVar42._0_8_ = uVar18;
          return auVar42;
        case 0xb:
          uVar3 = (uint)bVar9;
          bVar9 = *(byte *)(param_1 + 3);
          uVar26 = (uint)bVar9;
          if (uVar3 <= bVar9) {
            uVar26 = uVar3;
          }
          if (uVar26 != 0) {
            uVar24 = 0;
            lVar23 = param_1[5];
            lVar27 = param_1[6];
            lVar29 = *(long *)*param_1;
            pbVar5 = (byte *)((long *)*param_1)[1];
            do {
              pbVar2 = (byte *)(lVar29 + lVar23 * param_2 + lVar27 + uVar24);
              if (pbVar5 <= pbVar2) {
                uVar18 = 0;
                goto code_r0x000109855eb8;
              }
              uVar31 = NEON_ucvtf((uint)*pbVar2);
              *(undefined4 *)(param_4 + uVar24 * 4) = uVar31;
              uVar24 = uVar24 + 1;
              bVar9 = *(byte *)(param_1 + 3);
              uVar26 = (uint)bVar9;
              if (uVar3 <= bVar9) {
                uVar26 = uVar3;
              }
            } while (uVar24 < uVar26);
          }
          uVar26 = (uint)bVar9;
          if (uVar26 < uVar3) {
            param_2 = (ulong)(~uVar26 + uVar3) * 4 + 4;
            _bzero(param_4 + (ulong)uVar26 * 4,param_2);
          }
          uVar18 = 1;
code_r0x000109855eb8:
          auVar43._8_8_ = param_2;
          auVar43._0_8_ = uVar18;
          return auVar43;
        }
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_2;
      return auVar11 << 0x40;
    }
  }
  FUN_10a0ee06c(&UNK_10f691a8e);
  auVar88._8_8_ = 0x10;
  auVar88._0_8_ = &UNK_10f691aa4;
  return auVar88;
}



/* Entry: 10ab161dc; end: 10ab1625b;  */

undefined1  [16] FUN_10ab161dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f691aa4;
  return auVar1;
}



/* Entry: 10ab1625c; end: 10ab1629f;  */

void FUN_10ab1625c(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab162a0; end: 10ab16343;  */

void FUN_10ab162a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10ab2d5c0;
  appuStack_60[0] = &PTR_FUN_110c484e0;
  FUN_10a57077c(param_1,param_2,&pcStack_68,param_3,0);
  pppuVar1 = appuStack_60;
  (*(code *)*appuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_60[0])(appuStack_60);
  __Unwind_Resume();
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_10f68ffda;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  puStack_e0 = &UNK_10f68ffe7;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puStack_d0 = &UNK_10f68ffe7;
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  *(undefined1 *)((long)pppuVar1 + 0x1ac) = 1;
  FUN_10a0050a8(pppuVar1 + 0x2d,&puStack_108);
  pppuVar2 = pppuVar1;
  FUN_10a0051e8(pppuVar1,uStack_f0 & 0xffffffff,uStack_f0._4_4_,uStack_b8,uStack_e8 & 0xffffffff,
                uStack_e8._4_4_);
  if (((ulong)pppuVar2 & 1) == 0) {
    func_0x0001098946ac(pppuVar1,puStack_108);
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_10f650574;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  puStack_e0 = &UNK_10f68ffe7;
  puStack_d0 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010ab16558(pppuVar1,&puStack_108,0);
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_10f65057e;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  puStack_e0 = &UNK_10f68ffe7;
  puStack_d0 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010ab16558();
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_10f65058c;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  puStack_e0 = &UNK_10f68ffe7;
  puStack_d0 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010ab16558();
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_10f650598;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  puStack_e0 = &UNK_10f68ffe7;
  puStack_d0 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010ab16558();
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_10f65059f;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  puStack_e0 = &UNK_10f68ffe7;
  puStack_d0 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010ab16558();
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_10f6505a5;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  puStack_e0 = &UNK_10f68ffe7;
  puStack_d0 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010ab16558();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ab16344; end: 10ab16703;  */

void FUN_10ab16344(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68ffda;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f68ffe7;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f650574;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ab16558(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65057e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ab16558();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65058c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ab16558();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f650598;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ab16558();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65059f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ab16558();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6505a5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ab16558();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ab16704; end: 10ab1675b;  */

ulong FUN_10ab16704(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10ab1675c; end: 10ab167b3;  */

ulong FUN_10ab1675c(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ab2d660(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ab167b4; end: 10ab16947;  */

void FUN_10ab167b4(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f690002;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ab168f0(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f690011;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10ab16948(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69001d;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 2;
  FUN_10ab16948(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f690028;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 3;
  FUN_10ab16948(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ab16948; end: 10ab16ec3;  */

ulong FUN_10ab16948(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010ab2d6d4(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ab16ec4; end: 10ab17087;  */

void FUN_10ab16ec4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6900ac;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000064;
  puStack_60 = &UNK_10f68ffe7;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f49d0b2;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ab17088(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f5a37ad;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ab17088();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b28e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ab17088();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b296;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ab17088();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b2a0;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ab17088();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ab17088; end: 10ab1712f;  */

undefined8 * FUN_10ab17088(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab17130);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ab17130; end: 10ab1713f;  */

undefined1 FUN_10ab17130(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10ab17140; end: 10ab1719b;  */

undefined8 * FUN_10ab17140(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c47180;
  puStack_28 = param_1 + 10;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 8);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10ab1719c; end: 10ab1719f;  */

undefined8 * FUN_10ab1719c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c47180;
  puStack_28 = param_1 + 10;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 8);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10ab171a0; end: 10ab171b3;  */

void FUN_10ab171a0(void)

{
  FUN_10ab17140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab171b4; end: 10ab172d3;  */

void FUN_10ab171b4(long *param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c48130);
  FUN_10a00d760(param_2,&PTR_DAT_110c471d0,param_1 + 2);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c471f0,(int)param_1[6]);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c47210,*(undefined4 *)((long)param_1 + 0x34));
  (**(code **)(*param_2 + 0x60))((int)param_1[7],param_2,&PTR_DAT_110c47230);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c47250,plVar1);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c48150);
  FUN_10a02e188(param_2,&PTR_DAT_110c47270,param_1 + 8,&UNK_10f633e9d,0xd);
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010ab172d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab172d4; end: 10ab174f7;  */

void FUN_10ab172d4(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined **ppuVar9;
  code **ppcVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  float fVar20;
  long lVar19;
  undefined8 uVar21;
  undefined *puVar22;
  long lStack_140;
  long *plStack_138;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_4 + 0x210))(param_4,&PTR_DAT_110c48130);
  (**(code **)(*param_4 + 0xa8))(&uStack_b8,param_4,&PTR_DAT_110c471d0,&DAT_10f6900bf,0xb);
  uStack_90 = uStack_a8;
  lStack_98 = lStack_b0;
  uStack_a0 = uStack_b8;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  lStack_88 = 0;
  func_0x000107c2b080(&uStack_a0);
  if (*(char *)((long)param_3 + 0x27) < '\0') {
    __ZdlPv(param_3[2]);
  }
  uVar12 = uStack_90;
  param_3[3] = lStack_98;
  param_3[2] = uStack_a0;
  uStack_90 = uStack_90 & 0xffffffffffffff;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  param_3[4] = uVar12;
  param_3[5] = lStack_88;
  if ((long)uStack_a8 < 0) {
    __ZdlPv(uStack_b8);
  }
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c471f0,0x3f);
  *(int *)(param_3 + 6) = (int)plVar8;
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c47210,0x43);
  *(int *)((long)param_3 + 0x34) = (int)plVar8;
  lVar19 = 0x3e0a3d71;
  (**(code **)(*param_4 + 0x48))(param_4,&PTR_DAT_110c47230);
  *(int *)(param_3 + 7) = (int)lVar19;
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x50))(param_4,&PTR_DAT_110c47250);
  (**(code **)(*param_3 + 0x48))(param_3,plVar8);
  (**(code **)(*param_4 + 0x210))(param_4,&PTR_DAT_110c48150);
  pcStack_78 = FUN_10ab2d748;
  ppuStack_70 = &PTR_DAT_110c48500;
  ppuVar9 = &PTR_DAT_110c47270;
  ppcVar10 = &pcStack_78;
  plStack_68 = param_3;
  FUN_10a02d928(param_4,&PTR_DAT_110c47270,ppcVar10,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*param_4 + 0x220))(param_4);
  (**(code **)(*param_4 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  __Unwind_Resume();
  if (param_4[8] != 0) {
    pcVar7 = *ppcVar10;
    pcVar4 = ppcVar10[1];
    if (pcVar7 != pcVar4) {
      uVar12 = 0;
      pcVar14 = pcVar7;
      do {
        lVar13 = *(long *)pcVar14 + 0x1f0;
        lVar16 = *(long *)(*(long *)pcVar14 + 0x1f0);
        if (lVar16 == 0) {
LAB_10ab1758c:
          lVar15 = lVar13;
        }
        else {
          lVar15 = lVar13;
          do {
            lVar2 = 8;
            if ((ulong)param_4[5] <= *(ulong *)(lVar16 + 0x38)) {
              lVar2 = 0;
              lVar15 = lVar16;
            }
            lVar16 = *(long *)(lVar16 + lVar2);
          } while (lVar16 != 0);
          if ((lVar15 == lVar13) || ((ulong)param_4[5] < *(ulong *)(lVar15 + 0x38)))
          goto LAB_10ab1758c;
        }
        uVar11 = (uint)uVar12;
        if (lVar15 != lVar13) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = (ulong)uVar11;
        pcVar14 = pcVar14 + 0x10;
      } while (pcVar14 != pcVar4);
      if (uVar12 == param_4[0xb] - param_4[10] >> 4) {
        iVar17 = 0;
        do {
          fVar20 = (float)param_2;
          fVar18 = (float)lVar19;
          lVar16 = *(long *)pcVar7;
          lVar13 = *(long *)(lVar16 + 0x1f0);
          if (lVar13 != 0) {
            lVar15 = lVar16 + 0x1f0;
            do {
              lVar2 = 8;
              if ((ulong)param_4[5] <= *(ulong *)(lVar13 + 0x38)) {
                lVar2 = 0;
                lVar15 = lVar13;
              }
              lVar13 = *(long *)(lVar13 + lVar2);
            } while (lVar13 != 0);
            if ((lVar15 != lVar16 + 0x1f0) && (*(ulong *)(lVar15 + 0x38) <= (ulong)param_4[5])) {
              puVar22 = ppuVar9[0x30];
              FUN_10a14cdf8(ppuVar9);
              puVar3 = ppuVar9[2];
              uVar12 = (long)ppuVar9[3] - (long)puVar3 >> 3;
              if ((uVar12 <= (ulong)(long)(int)param_4[6]) ||
                 (uVar12 <= (ulong)(long)*(int *)((long)param_4 + 0x34))) {
LAB_10ab17730:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab17734);
                (*pcVar7)();
              }
              uVar21 = NEON_scvtf(puVar22,4);
              fVar18 = ((float)*(undefined8 *)(puVar3 + (long)(int)param_4[6] * 8) -
                       (float)*(undefined8 *)(puVar3 + (long)*(int *)((long)param_4 + 0x34) * 8)) /
                       (fVar18 * (float)uVar21);
              fVar20 = ((float)((ulong)*(undefined8 *)(puVar3 + (long)(int)param_4[6] * 8) >> 0x20)
                       - (float)((ulong)*(undefined8 *)
                                         (puVar3 + (long)*(int *)((long)param_4 + 0x34) * 8) >> 0x20
                                )) / (fVar20 * (float)((ulong)uVar21 >> 0x20));
              param_2 = (ulong)(uint)*(float *)(param_4 + 7);
              plVar8 = param_4 + 8;
              if (*(float *)(param_4 + 7) <= SQRT(fVar18 * fVar18 + fVar20 * fVar20)) {
                if ((ulong)(param_4[0xb] - param_4[10] >> 4) <= (ulong)(long)iVar17)
                goto LAB_10ab17730;
                plVar8 = (long *)(param_4[10] + (long)iVar17 * 0x10);
              }
              plStack_138 = (long *)plVar8[1];
              lVar19 = *plVar8;
              if (plVar8[1] != 0) {
                plVar8 = (long *)(plVar8[1] + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar6) {
                    *plVar8 = *plVar8 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lStack_140 = lVar19;
              FUN_10a3368d0(lVar16,param_4 + 2,&lStack_140,&UNK_10e4ac8a8,0xd);
              plVar8 = plStack_138;
              if (plStack_138 != (long *)0x0) {
                plVar1 = plStack_138 + 1;
                do {
                  lVar13 = *plVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar13 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_138 + 0x10))(plStack_138);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                }
              }
              iVar17 = iVar17 + 1;
            }
          }
          pcVar7 = pcVar7 + 0x10;
        } while (pcVar7 != pcVar4);
      }
    }
  }
  return;
}



/* Entry: 10ab174f8; end: 10ab17747;  */

void FUN_10ab174f8(long param_1,ulong param_2,long param_3,long param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_80;
  long *plStack_78;
  
  if (*(long *)(param_3 + 0x40) != 0) {
    plVar13 = (long *)*param_5;
    plVar3 = (long *)param_5[1];
    if (plVar13 != plVar3) {
      uVar8 = 0;
      plVar10 = plVar13;
      do {
        lVar9 = *plVar10 + 0x1f0;
        lVar12 = *(long *)(*plVar10 + 0x1f0);
        if (lVar12 == 0) {
LAB_10ab1758c:
          lVar11 = lVar9;
        }
        else {
          lVar11 = lVar9;
          do {
            lVar2 = 8;
            if (*(ulong *)(param_3 + 0x28) <= *(ulong *)(lVar12 + 0x38)) {
              lVar2 = 0;
              lVar11 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + lVar2);
          } while (lVar12 != 0);
          if ((lVar11 == lVar9) || (*(ulong *)(param_3 + 0x28) < *(ulong *)(lVar11 + 0x38)))
          goto LAB_10ab1758c;
        }
        uVar7 = (uint)uVar8;
        if (lVar11 != lVar9) {
          uVar7 = uVar7 + 1;
        }
        uVar8 = (ulong)uVar7;
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar3);
      if (uVar8 == *(long *)(param_3 + 0x58) - *(long *)(param_3 + 0x50) >> 4) {
        iVar14 = 0;
        do {
          fVar16 = (float)param_2;
          fVar15 = (float)param_1;
          lVar12 = *plVar13;
          lVar9 = *(long *)(lVar12 + 0x1f0);
          if (lVar9 != 0) {
            lVar11 = lVar12 + 0x1f0;
            do {
              lVar2 = 8;
              if (*(ulong *)(param_3 + 0x28) <= *(ulong *)(lVar9 + 0x38)) {
                lVar2 = 0;
                lVar11 = lVar9;
              }
              lVar9 = *(long *)(lVar9 + lVar2);
            } while (lVar9 != 0);
            if ((lVar11 != lVar12 + 0x1f0) &&
               (*(ulong *)(lVar11 + 0x38) <= *(ulong *)(param_3 + 0x28))) {
              uVar19 = *(undefined8 *)(param_4 + 0x180);
              FUN_10a14cdf8(param_4);
              lVar9 = *(long *)(param_4 + 0x10);
              uVar8 = *(long *)(param_4 + 0x18) - lVar9 >> 3;
              if ((uVar8 <= (ulong)(long)*(int *)(param_3 + 0x30)) ||
                 (uVar8 <= (ulong)(long)*(int *)(param_3 + 0x34))) {
LAB_10ab17730:
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab17734);
                (*pcVar6)();
              }
              uVar17 = NEON_scvtf(uVar19,4);
              uVar19 = *(undefined8 *)(lVar9 + (long)*(int *)(param_3 + 0x30) * 8);
              uVar18 = *(undefined8 *)(lVar9 + (long)*(int *)(param_3 + 0x34) * 8);
              fVar15 = ((float)uVar19 - (float)uVar18) / (fVar15 * (float)uVar17);
              fVar16 = ((float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar18 >> 0x20)) /
                       (fVar16 * (float)((ulong)uVar17 >> 0x20));
              param_2 = (ulong)(uint)*(float *)(param_3 + 0x38);
              plVar10 = (long *)(param_3 + 0x40);
              if (*(float *)(param_3 + 0x38) <= SQRT(fVar15 * fVar15 + fVar16 * fVar16)) {
                if ((ulong)(*(long *)(param_3 + 0x58) - *(long *)(param_3 + 0x50) >> 4) <=
                    (ulong)(long)iVar14) goto LAB_10ab17730;
                plVar10 = (long *)(*(long *)(param_3 + 0x50) + (long)iVar14 * 0x10);
              }
              plStack_78 = (long *)plVar10[1];
              param_1 = *plVar10;
              if (plVar10[1] != 0) {
                plVar10 = (long *)(plVar10[1] + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar5) {
                    *plVar10 = *plVar10 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              lStack_80 = param_1;
              FUN_10a3368d0(lVar12,param_3 + 0x10,&lStack_80,&UNK_10e4ac8a8,0xd);
              plVar10 = plStack_78;
              if (plStack_78 != (long *)0x0) {
                plVar1 = plStack_78 + 1;
                do {
                  lVar9 = *plVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar9 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar9 == 0) {
                  (**(code **)(*plStack_78 + 0x10))(plStack_78);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                }
              }
              iVar14 = iVar14 + 1;
            }
          }
          plVar13 = plVar13 + 2;
        } while (plVar13 != plVar3);
      }
    }
  }
  return;
}



/* Entry: 10ab17748; end: 10ab17863;  */

void FUN_10ab17748(long *param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c48170);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c47250,plVar1);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)param_1 + 0xc),param_2,&PTR_DAT_110c48190);
                    /* WARNING: Could not recover jumptable at 0x00010ab177d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab17864; end: 10ab17ab3;  */

void FUN_10ab17864(float param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 *param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  char cStack_b9;
  ulong uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  plVar1 = (long *)*param_6;
  plVar2 = (long *)param_6[1];
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar10 = *plVar1;
    plVar3 = (long *)plVar1[1];
    if (plVar3 != (long *)0x0) {
      plVar9 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_b0 = lVar10;
    plStack_a8 = plVar3;
    func_0x000107c2b074(&fStack_d0,&PTR_DAT_110c481b0);
    fVar15 = (float)param_2;
    uVar16 = (undefined4)param_3;
    plVar8 = (long *)(*(long *)(lVar10 + 0x1b8) + 8);
    plVar11 = (long *)*plVar8;
    plVar9 = plVar8;
    if (plVar11 == (long *)0x0) {
LAB_10ab17944:
      lVar12 = 0;
LAB_10ab17948:
      bVar5 = true;
    }
    else {
      do {
        lVar12 = 8;
        if (uStack_b8 <= (ulong)plVar11[7]) {
          lVar12 = 0;
          plVar9 = plVar11;
        }
        plVar11 = *(long **)((long)plVar11 + lVar12);
      } while (plVar11 != (long *)0x0);
      if ((plVar9 == plVar8) || (uStack_b8 < (ulong)plVar9[7])) goto LAB_10ab17944;
      lVar12 = plVar9[8];
      if (lVar12 == 0) goto LAB_10ab17948;
      do {
        lVar6 = lRam0000000113301700;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
        if (bVar5) {
          cVar4 = ExclusiveMonitorsStatus();
          lRam0000000113301700 = lRam0000000113301700 + 1;
        }
      } while (cVar4 != '\0');
      bVar5 = false;
      *(long *)(lVar10 + 0x1c8) = lVar6;
    }
    if (cStack_b9 < '\0') {
      __ZdlPv(CONCAT44(fStack_cc,fStack_d0));
      fVar15 = (float)param_2;
      uVar16 = (undefined4)param_3;
    }
    if (!bVar5) {
      FUN_10a0dad84(lVar12);
      uVar17 = *(undefined8 *)(param_5 + 0x180);
      fVar13 = param_1;
      fVar14 = fVar15;
      FUN_10a14cdf8(param_5);
      lVar10 = *(long *)(param_5 + 0x10);
      if ((ulong)(*(long *)(param_5 + 0x18) - lVar10) < 0x219) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab17a98);
        (*pcVar7)();
      }
      uVar17 = NEON_scvtf(uVar17,4);
      param_3 = *(undefined8 *)(lVar10 + 0x218);
      fVar13 = ((float)*(undefined8 *)(lVar10 + 0x1f8) - (float)param_3) / (fVar13 * (float)uVar17);
      fVar14 = ((float)((ulong)*(undefined8 *)(lVar10 + 0x1f8) >> 0x20) -
               (float)((ulong)param_3 >> 0x20)) / (fVar14 * (float)((ulong)uVar17 >> 0x20));
      fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
      fVar13 = 0.0;
      if ((0.12 <= fVar14) && (fVar13 = 1.0, fVar14 <= 0.19)) {
        fVar13 = (fVar14 + -0.12) / 0.07;
      }
      param_2 = (ulong)(uint)*(float *)(param_4 + 0xc);
      fVar13 = fVar13 * *(float *)(param_4 + 0xc);
      fStack_d0 = param_1;
      fStack_cc = fVar15;
      uStack_c8 = uVar16;
      fStack_c4 = fVar13;
      FUN_10a0dadb0(lVar12,&fStack_d0);
      param_1 = fVar13;
    }
    if (plVar3 != (long *)0x0) {
      plVar9 = plVar3 + 1;
      do {
        lVar10 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    plVar1 = plVar1 + 2;
  } while( true );
}



/* Entry: 10ab17ab4; end: 10ab17b37;  */

undefined1  [16] FUN_10ab17ab4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f691b2f;
  return auVar1;
}



/* Entry: 10ab17b38; end: 10ab17c2f;  */

void FUN_10ab17b38(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x135;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ab17c30(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6900cb;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68ffe7;
  uStack_38 = 0;
  FUN_10ab2d874();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6900d5;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68ffe7;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68ffe7;
  uStack_38 = 0;
  func_0x00010ab2db30(param_1,&puStack_98);
  FUN_10ab2dd4c(param_1);
  return;
}



/* Entry: 10ab17c30; end: 10ab17d07;  */

/* WARNING: Removing unreachable block (ram,0x00010ab17cc8) */

undefined1  [16] FUN_10ab17c30(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f691b2f,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab2d778(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab17d08; end: 10ab17db3;  */

undefined *** FUN_10ab17d08(long param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  undefined8 *puStack_1c0;
  undefined ***pppuStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 auStack_178 [2];
  char cStack_161;
  code *pcStack_160;
  undefined8 *apuStack_158 [7];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  func_0x00010aa70acc();
  pppuVar12 = param_2;
  (*(code *)(*param_2)[6])(param_2,&PTR_DAT_110c472f0);
  *(int *)(param_1 + 0xe0) = (int)pppuVar12;
  ppuVar10 = &PTR_DAT_110c20520;
  lStack_58 = param_1 + 0xe8;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a2029bc;
  ppuStack_60 = &PTR_FUN_110bb2db0;
  ppcVar9 = &pcStack_68;
  uVar11 = 0;
  FUN_10a202534(param_2,&PTR_DAT_110c20520,ppcVar9,0);
  pppuVar12 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  pcStack_78 = FUN_10a202534;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_160 = *ppcVar9;
  puStack_80 = &stack0xfffffffffffffff0;
  (**(code **)(ppcVar9[1] + 0x10))(apuStack_158,ppcVar9 + 1);
  FUN_109ffe064(&uStack_120,*ppuVar10,ppuVar10[1]);
  pcStack_108 = FUN_10a202700;
  ppuStack_100 = &PTR_FUN_110bb2d98;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = pcStack_160;
  (*(code *)apuStack_158[0][2])(puVar4 + 1,apuStack_158);
  puVar4[9] = uStack_118;
  puVar4[8] = uStack_120;
  puVar4[10] = lStack_110;
  uStack_118 = 0;
  lStack_110 = 0;
  uStack_120 = 0;
  puStack_f8 = puVar4;
  func_0x000107c2b054(auStack_178,&UNK_10f643dac);
  ppuVar8 = ppuVar10;
  (*(code *)(*pppuVar12)[0x4a])(pppuVar12,ppuVar10,&pcStack_108,uVar11,auStack_178);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  (*(code *)*ppuStack_100)(&ppuStack_100);
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  ppuVar5 = apuStack_158;
  (*(code *)*apuStack_158[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar12;
  }
  ___stack_chk_fail();
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  (*(code *)*ppuStack_100)(&ppuStack_100);
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  (*(code *)*apuStack_158[0])(apuStack_158);
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  pcStack_188 = FUN_10a202700;
  pppuVar12 = (undefined ***)ppuVar8[2];
  pppuStack_1b8 = (undefined ***)ppuVar6[1];
  puStack_1c0 = *ppuVar6;
  ppuStack_1a0 = ppuVar10;
  ppuStack_198 = ppuVar5;
  ppuStack_190 = &puStack_80;
  *ppuVar6 = (undefined8 *)0x0;
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar10 = (undefined **)(long)*(char *)((long)pppuVar12 + 0x57);
  if ((long)ppuVar10 < 0) {
    pppuVar7 = (undefined ***)pppuVar12[8];
    ppuVar10 = pppuVar12[9];
  }
  else {
    pppuVar7 = pppuVar12 + 8;
  }
  FUN_10a20287c(auStack_1b0,&puStack_1c0,pppuVar7,ppuVar10);
  FUN_10a2027f0(pppuVar12,auStack_1b0);
  if (pppuStack_1a8 != (undefined ***)0x0) {
    pppuVar7 = pppuStack_1a8 + 1;
    do {
      ppuVar10 = *pppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar3) {
        *pppuVar7 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1a8)[2])(pppuStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_1a8);
      pppuVar12 = pppuStack_1a8;
    }
  }
  pppuVar7 = pppuStack_1b8;
  if (pppuStack_1b8 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_1b8 + 1;
    do {
      ppuVar10 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1b8)[2])(pppuStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
      pppuVar12 = pppuVar7;
    }
  }
  return pppuVar12;
}



/* Entry: 10ab17db4; end: 10ab17e4f;  */

undefined1  [16] FUN_10ab17db4(long param_1,long param_2,undefined4 param_3)

{
  long **pplVar1;
  undefined4 **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  long lStack_28;
  undefined4 uStack_20;
  long *plStack_18;
  
  lStack_28 = param_1;
  uStack_20 = param_3;
  if (*(uint *)(param_2 + 0x10) != 0xffffffff) {
    plStack_18 = &lStack_28;
    pplVar1 = &plStack_18;
    (*(code *)(&PTR_FUN_110c481c8)[*(uint *)(param_2 + 0x10)])(pplVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = pplVar1;
    return auVar3;
  }
  FUN_10a0d459c();
  uStack_38 = 0x10ab17e00;
  uStack_4c = (undefined4)param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    puStack_48 = &uStack_4c;
    ppuVar2 = &puStack_48;
    (*(code *)(&PTR_FUN_110c481e8)[*(uint *)(param_1 + 0x10)])(ppuVar2,param_1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = ppuVar2;
    return auVar4;
  }
  FUN_10a0d459c();
  auVar5._8_8_ = 10;
  auVar5._0_8_ = &UNK_10f645a1b;
  return auVar5;
}



/* Entry: 10ab17e50; end: 10ab17eb3;  */

undefined1  [16] FUN_10ab17e50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f645a1b;
  return auVar1;
}



/* Entry: 10ab17eb4; end: 10ab1851b;  */

void FUN_10ab17eb4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f645a1b,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c48e80;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c48e80;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f6900e1,FUN_10ab2de60,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f6900f6,FUN_10ab2e074,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f690107,FUN_10ab2e304,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f66ab61,FUN_10ab2e6a0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f690117,FUN_10ab2e77c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f690125,FUN_10ab2e844,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f690131,FUN_10ab2e90c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f69013e,FUN_10ab2e9d4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f690152,FUN_10ab2ea9c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f690167,FUN_10ab2eb64,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f69017d,FUN_10ab2ec2c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f69018f,FUN_10ab2edbc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab184fc;
    FUN_10a054dac(param_1,&UNK_10f69019d,FUN_10ab2ee6c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6901aa,FUN_10ab2ef1c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6901b9,FUN_10ab2f040,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6901c7,FUN_10ab2f3ac,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6901d6,FUN_10ab2f700,FUN_10ab2f948);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f645a1b,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ab184fc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab18500);
  (*pcVar6)();
}



/* Entry: 10ab1851c; end: 10ab18bff;  */

void FUN_10ab1851c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  cVar3 = *(char *)(param_2 + 0x10f);
  lVar8 = (long)cVar3;
  if (lVar8 < 0) {
    lVar8 = *(long *)(param_2 + 0x100);
  }
  lVar7 = *(long *)(param_2 + 0x50);
  if (lVar8 == 0) {
    if (lVar7 == 0) {
      plVar6 = (long *)0x150;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_DAT_110bc85c8;
      plVar9 = plVar6 + 3;
      plStack_88 = *(long **)(param_2 + 0xe8);
      lStack_90 = *(long *)(param_2 + 0xe0);
      if (*(long *)(param_2 + 0xe8) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0xe8) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a3781a0(plVar9,0,&lStack_90);
      plVar1 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar2 = plStack_88 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      plStack_50 = plVar9;
      plStack_48 = plVar6;
      FUN_10a3782dc(&plStack_50,plVar6 + 8,plVar9);
      FUN_10a37803c(&plStack_a0,&plStack_50);
      if (plStack_48 == (long *)0x0) goto LAB_10ab18af0;
      plVar9 = plStack_48 + 1;
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_48;
      } while (cVar3 != '\0');
    }
    else {
      lStack_70 = *(long *)(lVar7 + 0x858);
      plStack_68 = *(long **)(lVar7 + 0x860);
      if (plStack_68 != (long *)0x0) {
        plVar9 = plStack_68 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar8 = *(long *)(param_2 + 0xe8);
      plVar9 = *(long **)(param_2 + 0xe8);
      lVar10 = *(long *)(param_2 + 0xe0);
      uVar5 = 0x138;
      __Znwm(0x138);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_90 = lVar10;
      plStack_88 = plVar9;
      FUN_10a3781a0(uVar5,lVar7,&lStack_90);
      plVar9 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          lVar8 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_68;
      lVar8 = lStack_70;
      lStack_60 = lStack_70;
      plStack_58 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar6 = plStack_68 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
      lStack_90 = lVar8;
      plStack_88 = plVar9;
      FUN_10a37823c(&plStack_50,uVar5,&lStack_90);
      FUN_10a37803c(&plStack_a0);
      plVar9 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar6 = plStack_48 + 1;
        do {
          lVar8 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (plStack_88 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar6 = plStack_58 + 1;
        do {
          lVar8 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if ((lStack_70 != 0) && (plStack_a0 != (long *)0x0)) {
        plStack_50 = plStack_a0;
        plStack_48 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar9 = plStack_98 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = *plVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10aa88c30(lStack_70,&plStack_50);
        plVar9 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar6 = plStack_48 + 1;
          do {
            lVar8 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      if (plStack_68 == (long *)0x0) goto LAB_10ab18af0;
      plVar9 = plStack_68 + 1;
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_68;
      } while (cVar3 != '\0');
    }
  }
  else if (lVar7 == 0) {
    plVar9 = (long *)0x150;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_DAT_110bc85c8;
    if (cVar3 < '\0') {
      func_0x000107c3192c(&lStack_90,*(undefined8 *)(param_2 + 0xf8),
                          *(undefined8 *)(param_2 + 0x100));
    }
    else {
      plStack_88 = *(long **)(param_2 + 0x100);
      lStack_90 = *(long *)(param_2 + 0xf8);
      lStack_80 = *(long *)(param_2 + 0x108);
    }
    plVar6 = plVar9 + 3;
    FUN_10a7a1910(plVar6,0,&lStack_90,0);
    if (lStack_80 < 0) {
      __ZdlPv(lStack_90);
    }
    plStack_50 = plVar6;
    plStack_48 = plVar9;
    FUN_10a3782dc(&plStack_50,plVar9 + 8,plVar6);
    FUN_10a37803c(&plStack_a0,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10ab18af0;
    plVar9 = plStack_48 + 1;
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_48;
    } while (cVar3 != '\0');
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x858);
    plVar9 = *(long **)(lVar7 + 0x860);
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar5 = 0x138;
    lStack_70 = lVar8;
    plStack_68 = plVar9;
    __Znwm(0x138);
    if (*(char *)(param_2 + 0x10f) < '\0') {
      func_0x000107c3192c(&lStack_90,*(undefined8 *)(param_2 + 0xf8),
                          *(undefined8 *)(param_2 + 0x100));
    }
    else {
      plStack_88 = *(long **)(param_2 + 0x100);
      lStack_90 = *(long *)(param_2 + 0xf8);
      lStack_80 = *(long *)(param_2 + 0x108);
    }
    FUN_10a7a1910(uVar5,lVar7,&lStack_90,0);
    if (lStack_80 < 0) {
      __ZdlPv(lStack_90);
    }
    lStack_60 = lVar8;
    plStack_58 = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = plVar9 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    lStack_90 = lVar8;
    plStack_88 = plVar9;
    FUN_10a37823c(&plStack_50,uVar5,&lStack_90);
    FUN_10a37803c(&plStack_a0);
    plVar9 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_88 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar9 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if ((lStack_70 != 0) && (plStack_a0 != (long *)0x0)) {
      plStack_50 = plStack_a0;
      plStack_48 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar9 = plStack_98 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10aa88c30(lStack_70,&plStack_50);
      plVar9 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar6 = plStack_48 + 1;
        do {
          lVar8 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    if (plStack_68 == (long *)0x0) goto LAB_10ab18af0;
    plVar9 = plStack_68 + 1;
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_68;
    } while (cVar3 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10ab18af0:
  param_1[1] = plStack_98;
  *param_1 = plStack_a0;
  return;
}



/* Entry: 10ab18c00; end: 10ab192f3;  */

void FUN_10ab18c00(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  int iVar17;
  long *plVar18;
  undefined4 uVar19;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  
  func_0x00010aa70acc();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_provider_110c47680);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110c47680);
    FUN_10a7f02bc(&lStack_88,param_2,0);
    FUN_10a7f03b4(param_1 + 0xe0,&lStack_88);
    plVar3 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar16 = plStack_80 + 1;
      do {
        lVar11 = *plVar16;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c476a0);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c476a0);
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x208))();
    lVar11 = *(long *)(param_1 + 0x120);
    lVar4 = *(long *)(param_1 + 0x128);
    while (lVar4 != lVar11) {
      lVar4 = lVar4 + -0x10;
      func_0x00010ab2de08();
    }
    *(long *)(param_1 + 0x128) = lVar11;
    FUN_10ab192f4(param_1 + 0x120,(ulong)plVar3 & 0xffffffff);
    if ((int)plVar3 != 0) {
      iVar17 = 0;
      plVar16 = plVar3;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar17);
        plVar5 = (long *)0xa0;
        __Znwm();
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar7 = plVar5 + 3;
        *plVar7 = (long)&PTR_FUN_110c464b8;
        *plVar5 = (long)&PTR_FUN_110c48528;
        plVar5[10] = 0;
        plVar5[9] = 0;
        plVar5[0xc] = 0;
        plVar5[0xb] = 0;
        plVar5[0x11] = 0;
        plVar5[0x12] = 0;
        plVar5[6] = 0;
        plVar5[5] = 0;
        plVar5[0x10] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0xd] = 0;
        plVar6 = plVar5 + 7;
        plVar5[8] = 0;
        *plVar6 = 0;
        plVar5[4] = (long)&PTR_DAT_110c46510;
        *plVar6 = 0;
        plVar5[8] = 0;
        plVar5[9] = 0;
        plVar5[10] = 0x42c8000043c80000;
        *(undefined4 *)(plVar5 + 0xc) = 0x42400000;
        *(undefined4 *)(plVar5 + 0x11) = 0x3f800000;
        plVar5[0x13] = 0;
        plStack_98 = plVar7;
        plStack_90 = plVar5;
        (**(code **)(*param_2 + 0xa8))(&lStack_88,param_2,&PTR_DAT_110c476c0,&UNK_10f68ffe7,0);
        if (*(char *)((long)plVar5 + 0x4f) < '\0') {
          __ZdlPv(*plVar6);
        }
        plVar5[8] = (long)plStack_80;
        *plVar6 = lStack_88;
        plVar5[9] = lStack_78;
        uVar19 = 0x43c80000;
        (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c476e0);
        *(undefined4 *)(plVar5 + 10) = uVar19;
        uVar19 = 0x42c80000;
        (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_width_110c47700);
        *(undefined4 *)((long)plVar5 + 0x54) = uVar19;
        uVar19 = 0;
        (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c47720);
        *(undefined4 *)(plVar5 + 0xb) = uVar19;
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_italic_110c47740,0);
        *(char *)((long)plVar5 + 0x5c) = (char)plVar6;
        uVar19 = 0x42400000;
        (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c47760);
        *(undefined4 *)(plVar5 + 0xc) = uVar19;
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c47780);
        if ((int)plVar5 != 0) {
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c47780);
          plVar7 = param_2;
          (**(code **)(*param_2 + 0x208))();
          if ((int)plVar7 != 0) {
            iVar15 = 0;
            do {
              (**(code **)(*param_2 + 0x218))(param_2,iVar15);
              (**(code **)(*param_2 + 0xa8))
                        (&lStack_b0,param_2,&PTR_s_tag_110c477a0,&UNK_10f68ffe7,0);
              uVar19 = 0;
              (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_value_110c477c0);
              plVar5 = plStack_98;
              uVar14 = uStack_a8;
              if (-1 < (long)uStack_a0) {
                uVar14 = uStack_a0 >> 0x38;
              }
              if (uVar14 != 0) {
                plVar6 = plStack_98 + 10;
                plVar10 = plVar6;
                func_0x000107c2b05c(plVar6,&lStack_b0);
                plVar18 = (long *)plVar5[0xb];
                if (plVar18 != (long *)0x0) {
                  uVar14 = (long)plVar18 - 1;
                  if (((ulong)plVar18 & uVar14) == 0) {
                    plVar16 = (long *)(uVar14 & (ulong)plVar10);
                  }
                  else {
                    plVar16 = plVar10;
                    if (plVar18 <= plVar10) {
                      uVar12 = 0;
                      if (plVar18 != (long *)0x0) {
                        uVar12 = (ulong)plVar10 / (ulong)plVar18;
                      }
                      plVar16 = (long *)((long)plVar10 - uVar12 * (long)plVar18);
                    }
                  }
                  puVar8 = *(undefined8 **)(*plVar6 + (long)plVar16 * 8);
                  if (puVar8 != (undefined8 *)0x0) {
                    for (plVar13 = (long *)*puVar8; plVar13 != (long *)0x0;
                        plVar13 = (long *)*plVar13) {
                      plVar9 = (long *)plVar13[1];
                      if (plVar9 == plVar10) {
                        plVar9 = plVar6;
                        func_0x000107c2b068(plVar6,plVar13 + 2,&lStack_b0);
                        if (((ulong)plVar9 & 1) != 0) goto LAB_10ab19188;
                      }
                      else {
                        if (((ulong)plVar18 & uVar14) == 0) {
                          plVar9 = (long *)((ulong)plVar9 & uVar14);
                        }
                        else if (plVar18 <= plVar9) {
                          uVar12 = 0;
                          if (plVar18 != (long *)0x0) {
                            uVar12 = (ulong)plVar9 / (ulong)plVar18;
                          }
                          plVar9 = (long *)((long)plVar9 - uVar12 * (long)plVar18);
                        }
                        if (plVar9 != plVar16) break;
                      }
                    }
                  }
                }
                plVar13 = (long *)0x30;
                __Znwm();
                lStack_78 = 1;
                *plVar13 = 0;
                plVar13[1] = (long)plVar10;
                plVar13[4] = uStack_a0;
                plVar13[3] = uStack_a8;
                plVar13[2] = lStack_b0;
                lStack_b0 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                *(undefined4 *)(plVar13 + 5) = 0;
                plStack_80 = plVar6;
                if ((plVar18 == (long *)0x0) ||
                   (*(float *)(plVar5 + 0xe) * (float)plVar18 < (float)(plVar5[0xd] + 1))) {
                  uVar14 = 1;
                  if ((long *)0x2 < plVar18) {
                    uVar14 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
                  }
                  uVar14 = uVar14 | (long)plVar18 << 1;
                  uVar12 = (ulong)((float)(plVar5[0xd] + 1) / *(float *)(plVar5 + 0xe));
                  if (uVar14 <= uVar12) {
                    uVar14 = uVar12;
                  }
                  func_0x0001094caf24(plVar6,uVar14);
                  plVar18 = (long *)plVar5[0xb];
                  if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
                    plVar16 = (long *)((long)plVar18 - 1U & (ulong)plVar10);
                  }
                  else {
                    plVar16 = plVar10;
                    if (plVar18 <= plVar10) {
                      uVar14 = 0;
                      if (plVar18 != (long *)0x0) {
                        uVar14 = (ulong)plVar10 / (ulong)plVar18;
                      }
                      plVar16 = (long *)((long)plVar10 - uVar14 * (long)plVar18);
                    }
                  }
                }
                lVar11 = *plVar6;
                plVar10 = *(long **)(lVar11 + (long)plVar16 * 8);
                if (plVar10 == (long *)0x0) {
                  plVar10 = plVar5 + 0xc;
                  *plVar13 = *plVar10;
                  *plVar10 = (long)plVar13;
                  *(long **)(lVar11 + (long)plVar16 * 8) = plVar10;
                  if (*plVar13 != 0) {
                    plVar10 = *(long **)(*plVar13 + 8);
                    if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
                      plVar10 = (long *)((ulong)plVar10 & (long)plVar18 - 1U);
                    }
                    else if (plVar18 <= plVar10) {
                      uVar14 = 0;
                      if (plVar18 != (long *)0x0) {
                        uVar14 = (ulong)plVar10 / (ulong)plVar18;
                      }
                      plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar18);
                    }
                    plVar10 = (long *)(*plVar6 + (long)plVar10 * 8);
                    goto LAB_10ab19178;
                  }
                }
                else {
                  *plVar13 = *plVar10;
LAB_10ab19178:
                  *plVar10 = (long)plVar13;
                }
                plVar5[0xd] = plVar5[0xd] + 1;
LAB_10ab19188:
                *(undefined4 *)(plVar13 + 5) = uVar19;
              }
              (**(code **)(*param_2 + 0x220))(param_2);
              if ((long)uStack_a0 < 0) {
                __ZdlPv(lStack_b0);
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 != (int)plVar7);
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          plVar16 = (long *)((ulong)plVar3 & 0xffffffff);
          plVar7 = plStack_98;
        }
        FUN_10aaf6174(plVar7,param_1);
        func_0x00010ab19390(param_1 + 0x120,&plStack_98);
        (**(code **)(*param_2 + 0x220))(param_2);
        plVar7 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar5 = plStack_90 + 1;
          do {
            lVar11 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 != (int)plVar16);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10ab192f4; end: 10ab1946f;  */

void FUN_10ab192f4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  if ((long *)(param_1[2] - lVar4 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10ab2a93c();
      plVar2 = (long *)param_1[1];
      if (plVar2 < (long *)param_1[2]) {
        lVar4 = *param_2;
        plVar8 = plVar2 + 2;
        plVar2[1] = param_2[1];
        *plVar2 = lVar4;
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        lVar4 = (long)plVar2 - *param_1;
        uVar1 = (lVar4 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10ab2a93c();
          func_0x00010aa70b70();
          (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_provider_110c47680,param_1[0x1c]);
          if (param_1[0x24] == param_1[0x25]) {
            return;
          }
          (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c476a0);
          plVar3 = (long *)param_1[0x25];
          for (plVar2 = (long *)param_1[0x24]; plVar2 != plVar3; plVar2 = plVar2 + 2) {
            if (*plVar2 != 0) {
              (**(code **)(*param_2 + 0x10))(param_2);
              FUN_10a00d760(param_2,&PTR_DAT_110c476c0,*plVar2 + 0x20);
              (**(code **)(*param_2 + 0x60))
                        (*(undefined4 *)(*plVar2 + 0x38),param_2,&PTR_DAT_110c476e0);
              (**(code **)(*param_2 + 0x60))
                        (*(undefined4 *)(*plVar2 + 0x3c),param_2,&PTR_s_width_110c47700);
              (**(code **)(*param_2 + 0x60))
                        (*(undefined4 *)(*plVar2 + 0x40),param_2,&PTR_DAT_110c47720);
              (**(code **)(*param_2 + 0x70))
                        (param_2,&PTR_s_italic_110c47740,*(undefined1 *)(*plVar2 + 0x44));
              (**(code **)(*param_2 + 0x60))
                        (*(undefined4 *)(*plVar2 + 0x48),param_2,&PTR_DAT_110c47760);
              if (*(long *)(*plVar2 + 0x68) != 0) {
                (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c47780);
                for (plVar8 = *(long **)(*plVar2 + 0x60); plVar8 != (long *)0x0;
                    plVar8 = (long *)*plVar8) {
                  (**(code **)(*param_2 + 0x10))(param_2);
                  FUN_10a00d760(param_2,&PTR_s_tag_110c477a0,plVar8 + 2);
                  (**(code **)(*param_2 + 0x60))
                            (*(undefined4 *)(plVar8 + 5),param_2,&PTR_s_value_110c477c0);
                  (**(code **)(*param_2 + 0x20))(param_2);
                }
                (**(code **)(*param_2 + 0x20))(param_2);
              }
              (**(code **)(*param_2 + 0x20))(param_2);
            }
          }
                    /* WARNING: Could not recover jumptable at 0x00010ab196a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x20))(param_2);
          return;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 3;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar7 = 0xfffffffffffffff;
        }
        plVar3 = param_2;
        plStack_98 = param_1;
        FUN_10ab2a950();
        plVar2 = (long *)(uVar7 + lVar4);
        lVar4 = *param_2;
        plVar8 = plVar2 + 2;
        plVar2[1] = param_2[1];
        *plVar2 = lVar4;
        *param_2 = 0;
        param_2[1] = 0;
        lVar4 = (long)plVar2 - (param_1[1] - *param_1);
        _memcpy(lVar4);
        lStack_b8 = *param_1;
        *param_1 = lVar4;
        param_1[1] = (long)plVar8;
        lStack_a0 = param_1[2];
        param_1[2] = uVar7 + (long)plVar3 * 0x10;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010ab2a984(&lStack_b8);
      }
      param_1[1] = (long)plVar8;
      return;
    }
    lVar6 = param_1[1];
    plVar2 = param_2;
    plStack_38 = param_1;
    FUN_10ab2a950();
    lVar4 = (long)param_2 + (lVar6 - lVar4);
    lVar6 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_58 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar4;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)plVar2 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010ab2a984(&lStack_58);
  }
  return;
}



/* Entry: 10ab19470; end: 10ab196c3;  */

void FUN_10ab19470(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_provider_110c47680,*(undefined8 *)(param_1 + 0xe0))
  ;
  if (*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x128)) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c476a0);
  plVar2 = *(long **)(param_1 + 0x128);
  for (plVar1 = *(long **)(param_1 + 0x120); plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*plVar1 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110c476c0,*plVar1 + 0x20);
      (**(code **)(*param_2 + 0x60))(*(undefined4 *)(*plVar1 + 0x38),param_2,&PTR_DAT_110c476e0);
      (**(code **)(*param_2 + 0x60))(*(undefined4 *)(*plVar1 + 0x3c),param_2,&PTR_s_width_110c47700)
      ;
      (**(code **)(*param_2 + 0x60))(*(undefined4 *)(*plVar1 + 0x40),param_2,&PTR_DAT_110c47720);
      (**(code **)(*param_2 + 0x70))
                (param_2,&PTR_s_italic_110c47740,*(undefined1 *)(*plVar1 + 0x44));
      (**(code **)(*param_2 + 0x60))(*(undefined4 *)(*plVar1 + 0x48),param_2,&PTR_DAT_110c47760);
      if (*(long *)(*plVar1 + 0x68) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c47780);
        for (plVar3 = *(long **)(*plVar1 + 0x60); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          (**(code **)(*param_2 + 0x10))(param_2);
          FUN_10a00d760(param_2,&PTR_s_tag_110c477a0,plVar3 + 2);
          (**(code **)(*param_2 + 0x60))(*(undefined4 *)(plVar3 + 5),param_2,&PTR_s_value_110c477c0)
          ;
          (**(code **)(*param_2 + 0x20))(param_2);
        }
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab196a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab196c4; end: 10ab197d3;  */

void FUN_10ab196c4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar12;
  long *extraout_x8;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  if (*(long *)(param_1 + 0xf0) != 0) goto LAB_10ab19760;
  FUN_10a9e1910(&uStack_38,param_1);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if (uStack_30 == 0) {
    bVar7 = false;
    if (((uint)(int)(char)bStack_21 >> 7 & 1) != 0) goto LAB_10ab19754;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa90) + 0x18);
    param_2 = &uStack_38;
    FUN_10a9df994(lVar8,param_2,*(undefined4 *)(param_1 + 0x110),0,0);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x50);
    }
    *(long *)(param_1 + 0xf0) = lVar8;
    bVar7 = lVar8 != 0;
    if ((char)bStack_21 < '\0') {
LAB_10ab19754:
      __ZdlPv(uStack_38);
    }
  }
  if (bVar7) {
LAB_10ab19760:
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0xa90);
    FUN_10a9e1910(&uStack_38,param_1);
    FUN_10a9eeb28(uVar15,&uStack_38,*(undefined4 *)(param_1 + 0x110),100);
    if ((char)bStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
    return;
  }
  puVar9 = &UNK_10f6901ec;
  FUN_10a00946c();
  if ((char)bStack_21 < '\0') {
    __ZdlPv(uStack_38);
  }
  __Unwind_Resume();
  puVar10 = puVar9;
  FUN_10ab19a64();
  if (((ulong)puVar10 & 1) != 0) {
    uVar12 = (uint)(char)*(byte *)((long)param_2 + 0x17);
    uVar13 = param_2[1];
    uVar2 = uVar13;
    if (-1 < (int)uVar12) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    if (uVar2 != 0) {
      puVar11 = (undefined8 *)*param_2;
      if (-1 < (int)uVar12) {
        puVar11 = param_2;
      }
      puVar10 = puVar9;
      FUN_10ab19af8(puVar9,puVar11);
      if ((int)puVar10 == 0) {
        puVar11 = (undefined8 *)0xa0;
        __Znwm();
        plVar17 = puVar11 + 1;
        *plVar17 = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_FUN_110c48528;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_b0,*param_2,param_2[1]);
        }
        else {
          uStack_a8 = param_2[1];
          uStack_b0 = *param_2;
          lStack_a0 = param_2[2];
        }
        puVar1 = puVar11 + 3;
        puVar10 = puVar9;
        FUN_10aaf5eb8(puVar1,puVar9,&uStack_b0);
        if (lStack_a0 < 0) {
          __ZdlPv(uStack_b0);
        }
        *extraout_x8 = (long)puVar1;
        extraout_x8[1] = (long)puVar11;
        plVar16 = *(long **)(puVar9 + 0x128);
        if (plVar16 < *(long **)(puVar9 + 0x130)) {
          *plVar16 = (long)puVar1;
          plVar16[1] = (long)puVar11;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar16 = plVar16 + 2;
        }
        else {
          plStack_90 = (long *)(puVar9 + 0x120);
          lVar8 = (long)plVar16 - *plStack_90;
          uVar2 = (lVar8 >> 4) + 1;
          if (uVar2 >> 0x3c != 0) goto LAB_10ab19a0c;
          uVar14 = (long)*(long **)(puVar9 + 0x130) - *plStack_90;
          uVar13 = (long)uVar14 >> 3;
          if (uVar13 <= uVar2) {
            uVar13 = uVar2;
          }
          if (0x7fffffffffffffef < uVar14) {
            uVar13 = 0xfffffffffffffff;
          }
          FUN_10ab2a950();
          plVar3 = (long *)(uVar13 + lVar8);
          *plVar3 = (long)puVar1;
          plVar3[1] = (long)puVar11;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar16 = plVar3 + 2;
          lVar8 = (long)plVar3 - (*(long *)(puVar9 + 0x128) - *(long *)(puVar9 + 0x120));
          _memcpy(lVar8);
          uStack_b0 = *(undefined8 *)(puVar9 + 0x120);
          *(long *)(puVar9 + 0x120) = lVar8;
          *(long **)(puVar9 + 0x128) = plVar16;
          uStack_98 = *(undefined8 *)(puVar9 + 0x130);
          *(ulong *)(puVar9 + 0x130) = uVar13 + (long)puVar10 * 0x10;
          uStack_a8 = uStack_b0;
          lStack_a0 = uStack_b0;
          func_0x00010ab2a984(&uStack_b0);
        }
        *(long **)(puVar9 + 0x128) = plVar16;
        *(long *)(puVar9 + 0x118) = *(long *)(puVar9 + 0x118) + 1;
        return;
      }
      uVar12 = (uint)*(byte *)((long)param_2 + 0x17);
      uVar13 = param_2[1];
    }
    puVar11 = (undefined8 *)*param_2;
    uVar5 = (uint)uVar13;
    if (-1 < (char)uVar12) {
      puVar11 = param_2;
      uVar5 = uVar12 & 0xff;
    }
    func_0x00010ae06f08(1,0x12,&UNK_10f68ffe7,&UNK_10f68ffe7,0xffffffff,&UNK_10f69024d,in_x6,in_x7,
                        uVar5,puVar11);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return;
  }
  uVar15 = 0x120;
  ___cxa_allocate_exception(0x120);
  FUN_10a2e1840();
  ___cxa_throw(uVar15,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10ab19a0c:
  FUN_10ab2a93c();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab19a14);
  (*pcVar6)();
}



/* Entry: 10ab197d4; end: 10ab19a63;  */

void FUN_10ab197d4(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  uVar7 = param_2;
  FUN_10ab19a64();
  if ((uVar7 & 1) == 0) {
    uVar9 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a2e1840();
    ___cxa_throw(uVar9,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10ab19a0c:
    FUN_10ab2a93c();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab19a14);
    (*pcVar6)();
  }
  uVar10 = (uint)(char)*(byte *)((long)param_3 + 0x17);
  uVar11 = param_3[1];
  uVar7 = uVar11;
  if (-1 < (int)uVar10) {
    uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar7 != 0) {
    puVar8 = (undefined8 *)*param_3;
    if (-1 < (int)uVar10) {
      puVar8 = param_3;
    }
    uVar7 = param_2;
    FUN_10ab19af8(param_2,puVar8);
    if ((int)uVar7 == 0) {
      puVar8 = (undefined8 *)0xa0;
      __Znwm();
      plVar15 = puVar8 + 1;
      *plVar15 = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110c48528;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_70,*param_3,param_3[1]);
      }
      else {
        uStack_68 = param_3[1];
        uStack_70 = *param_3;
        lStack_60 = param_3[2];
      }
      puVar1 = puVar8 + 3;
      uVar7 = param_2;
      FUN_10aaf5eb8(puVar1,param_2,&uStack_70);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar8;
      plVar14 = *(long **)(param_2 + 0x128);
      if (plVar14 < *(long **)(param_2 + 0x130)) {
        *plVar14 = (long)puVar1;
        plVar14[1] = (long)puVar8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar14 = plVar14 + 2;
      }
      else {
        plStack_50 = (long *)(param_2 + 0x120);
        lVar16 = (long)plVar14 - *plStack_50;
        uVar11 = (lVar16 >> 4) + 1;
        if (uVar11 >> 0x3c != 0) goto LAB_10ab19a0c;
        uVar12 = (long)*(long **)(param_2 + 0x130) - *plStack_50;
        uVar13 = (long)uVar12 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar13 = 0xfffffffffffffff;
        }
        FUN_10ab2a950();
        plVar2 = (long *)(uVar13 + lVar16);
        *plVar2 = (long)puVar1;
        plVar2[1] = (long)puVar8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar14 = plVar2 + 2;
        lVar16 = (long)plVar2 - (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120));
        _memcpy(lVar16);
        uStack_70 = *(undefined8 *)(param_2 + 0x120);
        *(long *)(param_2 + 0x120) = lVar16;
        *(long **)(param_2 + 0x128) = plVar14;
        uStack_58 = *(undefined8 *)(param_2 + 0x130);
        *(ulong *)(param_2 + 0x130) = uVar13 + uVar7 * 0x10;
        uStack_68 = uStack_70;
        lStack_60 = uStack_70;
        func_0x00010ab2a984(&uStack_70);
      }
      *(long **)(param_2 + 0x128) = plVar14;
      *(long *)(param_2 + 0x118) = *(long *)(param_2 + 0x118) + 1;
      return;
    }
    uVar10 = (uint)*(byte *)((long)param_3 + 0x17);
    uVar11 = param_3[1];
  }
  puVar8 = (undefined8 *)*param_3;
  uVar5 = (uint)uVar11;
  if (-1 < (char)uVar10) {
    puVar8 = param_3;
    uVar5 = uVar10 & 0xff;
  }
  func_0x00010ae06f08(1,0x12,&UNK_10f68ffe7,&UNK_10f68ffe7,0xffffffff,&UNK_10f69024d,in_x6,in_x7,
                      uVar5,puVar8);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10ab19a64; end: 10ab19af7;  */

bool FUN_10ab19a64(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0xa90);
  FUN_10a9e1910(auStack_38);
  lVar2 = *(long *)(lVar2 + 0x18);
  FUN_10a9df994(lVar2,auStack_38,*(undefined4 *)(param_1 + 0x110),0,0);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(lVar2 + 0x78) != *(long *)(lVar2 + 0x80);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return bVar1;
}



/* Entry: 10ab19af8; end: 10ab19c07;  */

uint FUN_10ab19af8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  puVar3 = param_1;
  FUN_10ab19eec();
  puVar1 = (undefined8 *)puVar3[1];
  for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 6) {
    lVar7 = (long)*(char *)((long)puVar3 + 0x17);
    puVar4 = puVar3;
    if (lVar7 < 0) {
      lVar7 = puVar3[1];
      puVar4 = (undefined8 *)*puVar3;
    }
    FUN_10ab19f7c(puVar4,lVar7,param_2,param_3);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10ab19bd4;
  }
  plStack_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  FUN_10ab2a9d0(&plStack_58,param_1[0x24],param_1[0x25],(long)(param_1[0x25] - param_1[0x24]) >> 4);
  plVar2 = plStack_50;
  plVar9 = plStack_58;
  do {
    if (plVar9 == plVar2) {
      FUN_10ab2aa74(&plStack_58);
      FUN_10ab1a068(param_2,param_3);
      uVar6 = (uint)param_3;
LAB_10ab19bd8:
      return uVar6 & 1;
    }
    lVar7 = *plVar9;
    if (lVar7 != 0) {
      lVar8 = (long)*(char *)(lVar7 + 0x37);
      if (lVar8 < 0) {
        uVar5 = *(ulong *)(lVar7 + 0x20);
        lVar8 = *(long *)(lVar7 + 0x28);
      }
      else {
        uVar5 = lVar7 + 0x20;
      }
      FUN_10ab19f7c(uVar5,lVar8,param_2,param_3);
      if ((uVar5 & 1) != 0) {
        FUN_10ab2aa74(&plStack_58);
LAB_10ab19bd4:
        uVar6 = 1;
        goto LAB_10ab19bd8;
      }
    }
    plVar9 = plVar9 + 2;
  } while( true );
}



/* Entry: 10ab19c08; end: 10ab19e5b;  */

void FUN_10ab19c08(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  float fVar13;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar4 = param_2;
  FUN_10ab19e5c();
  if (*plVar4 != plVar4[1]) {
    plVar5 = param_2;
    FUN_10ab19eec();
    puVar1 = (undefined8 *)plVar5[1];
    for (puVar12 = (undefined8 *)*plVar5; puVar12 != puVar1; puVar12 = puVar12 + 6) {
      lVar8 = (long)*(char *)((long)puVar12 + 0x17);
      puVar6 = puVar12;
      if (lVar8 < 0) {
        lVar8 = puVar12[1];
        puVar6 = (undefined8 *)*puVar12;
      }
      FUN_10ab19f7c(puVar6,lVar8,param_3,param_4);
      if ((int)puVar6 != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        FUN_10a0ca588(param_1,puVar12[3],puVar12[4],(long)(puVar12[4] - puVar12[3]) >> 2);
        goto LAB_10ab19e0c;
      }
    }
    plVar2 = (long *)param_2[0x25];
    for (plVar5 = (long *)param_2[0x24]; plVar5 != plVar2; plVar5 = plVar5 + 2) {
      lVar8 = *plVar5;
      if (lVar8 != 0) {
        lVar9 = (long)*(char *)(lVar8 + 0x37);
        if (lVar9 < 0) {
          lVar7 = *(long *)(lVar8 + 0x20);
          lVar9 = *(long *)(lVar8 + 0x28);
        }
        else {
          lVar7 = lVar8 + 0x20;
        }
        FUN_10ab19f7c(lVar7,lVar9,param_3,param_4);
        if ((int)lVar7 != 0) {
          FUN_10aaf6220(&uStack_80,*plVar5,plVar4);
          goto LAB_10ab19dfc;
        }
      }
    }
    FUN_10ab1a068();
    if ((param_4 & 1) != 0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      func_0x0001073b504c(&uStack_80,plVar4[1] - *plVar4 >> 6);
      piVar11 = (int *)*plVar4;
      piVar3 = (int *)plVar4[1];
      if (piVar11 != piVar3) {
        fVar13 = 0.0;
        if ((param_3 & 0x100000000) != 0) {
          fVar13 = 1.0;
        }
        do {
          lVar8 = (long)*(char *)((long)piVar11 + 0x17);
          piVar10 = piVar11;
          lVar9 = lVar8;
          if (lVar8 < 0) {
            piVar10 = *(int **)piVar11;
            lVar9 = *(long *)(piVar11 + 2);
          }
          if ((lVar9 == 4) && (*piVar10 == 0x74686777)) {
            fStack_84 = (float)(int)param_3;
            FUN_10a001c34(&uStack_80,&fStack_84);
          }
          else {
            piVar10 = piVar11;
            if (*(char *)((long)piVar11 + 0x17) < '\0') {
              lVar8 = *(long *)(piVar11 + 2);
              piVar10 = *(int **)piVar11;
            }
            if ((lVar8 == 4) && (*piVar10 == 0x6c617469)) {
              fStack_84 = fVar13;
              FUN_10a001c34(&uStack_80,&fStack_84);
            }
            else {
              FUN_10a0ca014(&uStack_80,piVar11 + 0xd);
            }
          }
          piVar11 = piVar11 + 0x10;
        } while (piVar11 != piVar3);
      }
LAB_10ab19dfc:
      param_1[1] = uStack_78;
      *param_1 = uStack_80;
      param_1[2] = uStack_70;
LAB_10ab19e0c:
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10ab19e5c; end: 10ab19eeb;  */

undefined * FUN_10ab19e5c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0xa90);
  FUN_10a9e1910(auStack_38);
  lVar2 = *(long *)(lVar2 + 0x18);
  FUN_10a9df994(lVar2,auStack_38,*(undefined4 *)(param_1 + 0x110),0,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  puVar1 = &UNK_10e4e8fc0;
  if (lVar2 != 0) {
    puVar1 = (undefined *)(lVar2 + 0x78);
  }
  return puVar1;
}



/* Entry: 10ab19eec; end: 10ab19f7b;  */

undefined * FUN_10ab19eec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0xa90);
  FUN_10a9e1910(auStack_38);
  lVar2 = *(long *)(lVar2 + 0x18);
  FUN_10a9df994(lVar2,auStack_38,*(undefined4 *)(param_1 + 0x110),0,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  puVar1 = &UNK_10e4e8fd8;
  if (lVar2 != 0) {
    puVar1 = (undefined *)(lVar2 + 0x90);
  }
  return puVar1;
}



/* Entry: 10ab19f7c; end: 10ab1a067;  */

bool FUN_10ab19f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 **ppuVar1;
  bool bVar2;
  undefined8 *****pppppuVar3;
  uint uVar4;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 ****ppppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_10ab203cc(&ppppuStack_48);
  FUN_10ab203cc(&puStack_60,param_3,param_4);
  uVar4 = (uint)(char)bStack_31;
  if (-1 < (int)uVar4) {
    uStack_40 = (ulong)bStack_31;
  }
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
  }
  if (uStack_40 == uStack_58) {
    pppppuVar3 = (undefined8 *****)ppppuStack_48;
    if (-1 < (int)uVar4) {
      pppppuVar3 = &ppppuStack_48;
    }
    ppuVar1 = (undefined1 **)puStack_60;
    if (-1 < (char)bStack_49) {
      ppuVar1 = &puStack_60;
    }
    _memcmp(pppppuVar3,ppuVar1);
    bVar2 = (int)pppppuVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
    uVar4 = (uint)bStack_31;
  }
  if ((uVar4 >> 7 & 1) != 0) {
    __ZdlPv(ppppuStack_48);
  }
  return bVar2;
}



/* Entry: 10ab1a068; end: 10ab1a15f;  */

undefined1  [16] FUN_10ab1a068(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((bRam00000001138356a0 & 1) == 0) {
    iVar1 = 0x138356a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10ab2b3fc();
      ___cxa_atexit(FUN_10ab2bae4,0x113835678,0x100000000);
      ___cxa_guard_release(0x1138356a0);
    }
  }
  FUN_10ab203cc(auStack_38,param_1,param_2);
  lVar2 = 0x113835678;
  FUN_10ab355a0(0x113835678,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
  }
  auVar4[8] = lVar2 != 0;
  auVar4._0_8_ = uVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10ab1a160; end: 10ab1a21f;  */

ulong * FUN_10ab1a160(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong *puVar6;
  
  FUN_10ab196c4();
  lVar5 = *(long *)(param_2 + 0xf0);
  func_0x000109755db8();
  puVar6 = (ulong *)0x0;
  if (lVar5 != 0) {
    puVar6 = (ulong *)&UNK_10f68ffe7;
  }
  puVar2 = puVar6;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar6 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar6;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar6,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10ab1a220; end: 10ab1ac1b;  */

/* WARNING: Removing unreachable block (ram,0x00010ab1a988) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a698) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a668) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a638) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a278) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a658) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a688) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a978) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a998) */

void FUN_10ab1a220(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  long lVar10;
  undefined8 **ppuStack_2a8;
  ulong uStack_2a0;
  byte bStack_291;
  undefined8 **ppuStack_290;
  ulong uStack_288;
  byte bStack_279;
  undefined8 **ppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined8 **ppuStack_260;
  ulong uStack_258;
  byte bStack_249;
  undefined8 **ppuStack_248;
  ulong uStack_240;
  byte bStack_231;
  undefined8 **ppuStack_230;
  ulong uStack_228;
  byte bStack_219;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  func_0x00010989f98c(&uStack_68,param_2 + 2);
  plVar7 = param_2;
  FUN_10ab19a64();
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  param_1[2] = CONCAT17(uStack_51,uStack_58);
  if ((int)plVar7 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f6902e4,0xb);
  }
  FUN_10ab196c4(param_2);
  __ZNSt3__19to_stringEi(auStack_218,*(undefined2 *)(param_2[0x1e] + 0x88));
  puVar8 = auStack_218;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar8,0,&UNK_10f6902f0,0xd);
  uStack_1f8 = puVar8[1];
  uStack_200 = *puVar8;
  lStack_1f0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f6902fe,0xc);
  uStack_1d8 = puVar8[1];
  uStack_1e0 = *puVar8;
  lStack_1d0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10ab196c4(param_2);
  __ZNSt3__19to_stringEf(&ppuStack_230,(float)(int)*(short *)(param_2[0x1e] + 0x8a));
  pppuVar5 = (undefined8 ***)ppuStack_230;
  if (-1 < (char)bStack_219) {
    uStack_228 = (ulong)bStack_219;
    pppuVar5 = &ppuStack_230;
  }
  puVar8 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar5,uStack_228);
  uStack_1b8 = puVar8[1];
  uStack_1c0 = *puVar8;
  lStack_1b0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f69030b,0xd);
  uStack_198 = puVar8[1];
  uStack_1a0 = *puVar8;
  lStack_190 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10ab196c4(param_2);
  __ZNSt3__19to_stringEf(&ppuStack_248,(float)(int)*(short *)(param_2[0x1e] + 0x8c));
  pppuVar5 = (undefined8 ***)ppuStack_248;
  if (-1 < (char)bStack_231) {
    uStack_240 = (ulong)bStack_231;
    pppuVar5 = &ppuStack_248;
  }
  puVar8 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar5,uStack_240);
  uStack_178 = puVar8[1];
  uStack_180 = *puVar8;
  lStack_170 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f690319,0x14);
  uStack_158 = puVar8[1];
  uStack_160 = *puVar8;
  lStack_150 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10ab196c4(param_2);
  __ZNSt3__19to_stringEf(&ppuStack_260,(float)(int)*(short *)(param_2[0x1e] + 0x8e));
  pppuVar5 = (undefined8 ***)ppuStack_260;
  if (-1 < (char)bStack_249) {
    uStack_258 = (ulong)bStack_249;
    pppuVar5 = &ppuStack_260;
  }
  puVar8 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar5,uStack_258);
  uStack_138 = puVar8[1];
  uStack_140 = *puVar8;
  lStack_130 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f69032e,0x15);
  uStack_118 = puVar8[1];
  uStack_120 = *puVar8;
  lStack_110 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10ab196c4(param_2);
  __ZNSt3__19to_stringEf(&ppuStack_278,(float)(int)*(short *)(param_2[0x1e] + 0x94));
  pppuVar5 = (undefined8 ***)ppuStack_278;
  if (-1 < (char)bStack_261) {
    uStack_270 = (ulong)bStack_261;
    pppuVar5 = &ppuStack_278;
  }
  puVar8 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar5,uStack_270);
  uStack_f8 = puVar8[1];
  uStack_100 = *puVar8;
  uStack_f0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f690344,0x16);
  uStack_d8 = puVar8[1];
  uStack_e0 = *puVar8;
  uStack_d0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10ab196c4(param_2);
  __ZNSt3__19to_stringEf(&ppuStack_290,(float)(int)*(short *)(param_2[0x1e] + 0x96));
  pppuVar5 = (undefined8 ***)ppuStack_290;
  if (-1 < (char)bStack_279) {
    uStack_288 = (ulong)bStack_279;
    pppuVar5 = &ppuStack_290;
  }
  puVar8 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar5,uStack_288);
  uStack_b8 = puVar8[1];
  uStack_c0 = *puVar8;
  uStack_b0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f69035b,0xe);
  uStack_98 = puVar8[1];
  uStack_a0 = *puVar8;
  uStack_90 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10ab196c4(param_2);
  puVar2 = &UNK_10f68ffe7;
  if (*(undefined **)(param_2[0x1e] + 0x28) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2[0x1e] + 0x28);
  }
  func_0x000107c2b054(&ppuStack_2a8,puVar2);
  pppuVar5 = (undefined8 ***)ppuStack_2a8;
  if (-1 < (char)bStack_291) {
    uStack_2a0 = (ulong)bStack_291;
    pppuVar5 = &ppuStack_2a8;
  }
  puVar8 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar5,uStack_2a0);
  uStack_78 = puVar8[1];
  ppuStack_80 = (undefined8 **)*puVar8;
  uStack_70 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uVar1 = uStack_78;
  pppuVar5 = (undefined8 ***)ppuStack_80;
  if (-1 < (long)uStack_70) {
    uVar1 = uStack_70 >> 0x38;
    pppuVar5 = &ppuStack_80;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar5,uVar1);
  if ((char)bStack_291 < '\0') {
    __ZdlPv(ppuStack_2a8);
  }
  if ((char)bStack_279 < '\0') {
    __ZdlPv(ppuStack_290);
  }
  if ((char)bStack_261 < '\0') {
    __ZdlPv(ppuStack_278);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if ((char)bStack_249 < '\0') {
    __ZdlPv(ppuStack_260);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if ((char)bStack_231 < '\0') {
    __ZdlPv(ppuStack_248);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if ((char)bStack_219 < '\0') {
    __ZdlPv(ppuStack_230);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  if (((ulong)plVar7 & 1) == 0) {
    FUN_10ab196c4(param_2);
    puVar2 = &UNK_10f68ffe7;
    if (*(undefined **)(param_2[0x1e] + 0x30) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_2[0x1e] + 0x30);
    }
    puVar8 = &uStack_a0;
    func_0x000107c2b054(puVar8,puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm();
    uStack_78 = puVar8[1];
    ppuStack_80 = (undefined8 **)*puVar8;
    uStack_70 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    uVar1 = uStack_78;
    pppuVar5 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar5 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppuVar5,uVar1);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f690378,9);
    plVar7 = param_2;
    FUN_10ab19e5c();
    puVar8 = (undefined8 *)*plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    if (puVar8 != puVar3) {
      bVar9 = true;
      do {
        if (!bVar9) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&DAT_10f68f19e,2);
        }
        uVar1 = puVar8[1];
        puVar6 = (undefined8 *)*puVar8;
        if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar8 + 0x17);
          puVar6 = puVar8;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,puVar6,uVar1);
        bVar9 = false;
        puVar8 = puVar8 + 8;
      } while (puVar8 != puVar3);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f690382,0x14);
    plVar7 = param_2;
    FUN_10ab19eec();
    puVar8 = (undefined8 *)*plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    if (puVar8 != puVar3) {
      bVar9 = true;
      do {
        if (!bVar9) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&DAT_10f68f19e,2);
        }
        uVar1 = puVar8[1];
        puVar6 = (undefined8 *)*puVar8;
        if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar8 + 0x17);
          puVar6 = puVar8;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,puVar6,uVar1);
        bVar9 = false;
        puVar8 = puVar8 + 6;
      } while (puVar8 != puVar3);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f690397,0x1b);
    plVar7 = (long *)param_2[0x24];
    plVar4 = (long *)param_2[0x25];
    if (plVar7 != plVar4) {
      bVar9 = true;
      do {
        lVar10 = *plVar7;
        if (lVar10 != 0) {
          if (!bVar9) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,&DAT_10f68f19e,2);
            lVar10 = *plVar7;
          }
          uVar1 = *(ulong *)(lVar10 + 0x28);
          puVar8 = *(undefined8 **)(lVar10 + 0x20);
          if (-1 < (char)*(byte *)(lVar10 + 0x37)) {
            uVar1 = (ulong)*(byte *)(lVar10 + 0x37);
            puVar8 = (undefined8 *)(lVar10 + 0x20);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,puVar8,uVar1);
          bVar9 = false;
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar4);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&DAT_10f62a9ea,1);
  }
  return;
}



/* Entry: 10ab1ac1c; end: 10ab1ac9f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab1a988) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a698) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a668) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a638) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a278) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a658) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a688) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a978) */
/* WARNING: Removing unreachable block (ram,0x00010ab1a998) */

void FUN_10ab1ac1c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  bool bVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 **ppuStack_2a8;
  ulong uStack_2a0;
  byte bStack_291;
  undefined8 **ppuStack_290;
  ulong uStack_288;
  byte bStack_279;
  undefined8 **ppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined8 **ppuStack_260;
  ulong uStack_258;
  byte bStack_249;
  undefined8 **ppuStack_248;
  ulong uStack_240;
  byte bStack_231;
  undefined8 **ppuStack_230;
  ulong uStack_228;
  byte bStack_219;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  plVar8 = (long *)(param_2 + -0x10);
  func_0x00010989f98c(&uStack_68,param_2);
  plVar6 = plVar8;
  FUN_10ab19a64();
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  param_1[2] = CONCAT17(uStack_51,uStack_58);
  if ((int)plVar6 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f6902e4,0xb);
  }
  FUN_10ab196c4(plVar8);
  __ZNSt3__19to_stringEi(auStack_218,*(undefined2 *)(*(long *)(param_2 + 0xe0) + 0x88));
  puVar7 = auStack_218;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar7,0,&UNK_10f6902f0,0xd);
  uStack_1f8 = puVar7[1];
  uStack_200 = *puVar7;
  lStack_1f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f6902fe,0xc);
  uStack_1d8 = puVar7[1];
  uStack_1e0 = *puVar7;
  lStack_1d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ab196c4(plVar8);
  __ZNSt3__19to_stringEf(&ppuStack_230,(float)(int)*(short *)(*(long *)(param_2 + 0xe0) + 0x8a));
  pppuVar4 = (undefined8 ***)ppuStack_230;
  if (-1 < (char)bStack_219) {
    uStack_228 = (ulong)bStack_219;
    pppuVar4 = &ppuStack_230;
  }
  puVar7 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar4,uStack_228);
  uStack_1b8 = puVar7[1];
  uStack_1c0 = *puVar7;
  lStack_1b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69030b,0xd);
  uStack_198 = puVar7[1];
  uStack_1a0 = *puVar7;
  lStack_190 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ab196c4(plVar8);
  __ZNSt3__19to_stringEf(&ppuStack_248,(float)(int)*(short *)(*(long *)(param_2 + 0xe0) + 0x8c));
  pppuVar4 = (undefined8 ***)ppuStack_248;
  if (-1 < (char)bStack_231) {
    uStack_240 = (ulong)bStack_231;
    pppuVar4 = &ppuStack_248;
  }
  puVar7 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar4,uStack_240);
  uStack_178 = puVar7[1];
  uStack_180 = *puVar7;
  lStack_170 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f690319,0x14);
  uStack_158 = puVar7[1];
  uStack_160 = *puVar7;
  lStack_150 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ab196c4(plVar8);
  __ZNSt3__19to_stringEf(&ppuStack_260,(float)(int)*(short *)(*(long *)(param_2 + 0xe0) + 0x8e));
  pppuVar4 = (undefined8 ***)ppuStack_260;
  if (-1 < (char)bStack_249) {
    uStack_258 = (ulong)bStack_249;
    pppuVar4 = &ppuStack_260;
  }
  puVar7 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar4,uStack_258);
  uStack_138 = puVar7[1];
  uStack_140 = *puVar7;
  lStack_130 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69032e,0x15);
  uStack_118 = puVar7[1];
  uStack_120 = *puVar7;
  lStack_110 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ab196c4(plVar8);
  __ZNSt3__19to_stringEf(&ppuStack_278,(float)(int)*(short *)(*(long *)(param_2 + 0xe0) + 0x94));
  pppuVar4 = (undefined8 ***)ppuStack_278;
  if (-1 < (char)bStack_261) {
    uStack_270 = (ulong)bStack_261;
    pppuVar4 = &ppuStack_278;
  }
  puVar7 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar4,uStack_270);
  uStack_f8 = puVar7[1];
  uStack_100 = *puVar7;
  uStack_f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f690344,0x16);
  uStack_d8 = puVar7[1];
  uStack_e0 = *puVar7;
  uStack_d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ab196c4(plVar8);
  __ZNSt3__19to_stringEf(&ppuStack_290,(float)(int)*(short *)(*(long *)(param_2 + 0xe0) + 0x96));
  pppuVar4 = (undefined8 ***)ppuStack_290;
  if (-1 < (char)bStack_279) {
    uStack_288 = (ulong)bStack_279;
    pppuVar4 = &ppuStack_290;
  }
  puVar7 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar4,uStack_288);
  uStack_b8 = puVar7[1];
  uStack_c0 = *puVar7;
  uStack_b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69035b,0xe);
  uStack_98 = puVar7[1];
  uStack_a0 = *puVar7;
  uStack_90 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ab196c4(plVar8);
  puVar10 = *(undefined **)(*(long *)(param_2 + 0xe0) + 0x28);
  puVar2 = &UNK_10f68ffe7;
  if (puVar10 != (undefined *)0x0) {
    puVar2 = puVar10;
  }
  func_0x000107c2b054(&ppuStack_2a8,puVar2);
  pppuVar4 = (undefined8 ***)ppuStack_2a8;
  if (-1 < (char)bStack_291) {
    uStack_2a0 = (ulong)bStack_291;
    pppuVar4 = &ppuStack_2a8;
  }
  puVar7 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar4,uStack_2a0);
  uStack_78 = puVar7[1];
  ppuStack_80 = (undefined8 **)*puVar7;
  uStack_70 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  uVar1 = uStack_78;
  pppuVar4 = (undefined8 ***)ppuStack_80;
  if (-1 < (long)uStack_70) {
    uVar1 = uStack_70 >> 0x38;
    pppuVar4 = &ppuStack_80;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar4,uVar1);
  if ((char)bStack_291 < '\0') {
    __ZdlPv(ppuStack_2a8);
  }
  if ((char)bStack_279 < '\0') {
    __ZdlPv(ppuStack_290);
  }
  if ((char)bStack_261 < '\0') {
    __ZdlPv(ppuStack_278);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if ((char)bStack_249 < '\0') {
    __ZdlPv(ppuStack_260);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if ((char)bStack_231 < '\0') {
    __ZdlPv(ppuStack_248);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if ((char)bStack_219 < '\0') {
    __ZdlPv(ppuStack_230);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  if (((ulong)plVar6 & 1) == 0) {
    FUN_10ab196c4(plVar8);
    puVar10 = *(undefined **)(*(long *)(param_2 + 0xe0) + 0x30);
    puVar2 = &UNK_10f68ffe7;
    if (puVar10 != (undefined *)0x0) {
      puVar2 = puVar10;
    }
    puVar7 = &uStack_a0;
    func_0x000107c2b054(puVar7,puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm();
    uStack_78 = puVar7[1];
    ppuStack_80 = (undefined8 **)*puVar7;
    uStack_70 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = uStack_78;
    pppuVar4 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar4 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppuVar4,uVar1);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f690378,9);
    plVar6 = plVar8;
    FUN_10ab19e5c();
    puVar7 = (undefined8 *)*plVar6;
    puVar3 = (undefined8 *)plVar6[1];
    if (puVar7 != puVar3) {
      bVar9 = true;
      do {
        if (!bVar9) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&DAT_10f68f19e,2);
        }
        uVar1 = puVar7[1];
        puVar5 = (undefined8 *)*puVar7;
        if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar7 + 0x17);
          puVar5 = puVar7;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,puVar5,uVar1);
        bVar9 = false;
        puVar7 = puVar7 + 8;
      } while (puVar7 != puVar3);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f690382,0x14);
    FUN_10ab19eec();
    puVar7 = (undefined8 *)*plVar8;
    puVar3 = (undefined8 *)plVar8[1];
    if (puVar7 != puVar3) {
      bVar9 = true;
      do {
        if (!bVar9) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&DAT_10f68f19e,2);
        }
        uVar1 = puVar7[1];
        puVar5 = (undefined8 *)*puVar7;
        if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar7 + 0x17);
          puVar5 = puVar7;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,puVar5,uVar1);
        bVar9 = false;
        puVar7 = puVar7 + 6;
      } while (puVar7 != puVar3);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f690397,0x1b);
    plVar6 = *(long **)(param_2 + 0x110);
    plVar8 = *(long **)(param_2 + 0x118);
    if (plVar6 != plVar8) {
      bVar9 = true;
      do {
        lVar11 = *plVar6;
        if (lVar11 != 0) {
          if (!bVar9) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,&DAT_10f68f19e,2);
            lVar11 = *plVar6;
          }
          uVar1 = *(ulong *)(lVar11 + 0x28);
          puVar7 = *(undefined8 **)(lVar11 + 0x20);
          if (-1 < (char)*(byte *)(lVar11 + 0x37)) {
            uVar1 = (ulong)*(byte *)(lVar11 + 0x37);
            puVar7 = (undefined8 *)(lVar11 + 0x20);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,puVar7,uVar1);
          bVar9 = false;
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar8);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&DAT_10f62a9ea,1);
  }
  return;
}



/* Entry: 10ab1aca0; end: 10ab1af97;  */

void FUN_10ab1aca0(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c48568;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0x13;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0x13;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 0xf) = 0x7972746e;
  puVar6[1] = 0x6e456e6f69746365;
  *puVar6 = 0x6c6c6f43746e6f46;
  *(undefined1 *)((long)puVar6 + 0x13) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f6903b3;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x164;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c48568;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f6903b3,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f305a7e,FUN_10ab2fed8,FUN_10ab2ffec);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0d4,FUN_10ab302b4,FUN_10ab30370);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"italic",FUN_10ab30430,FUN_10ab304e8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    puStack_78 = *(undefined **)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f6903b3,0x13);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_a0 = &UNK_10f6903b3;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68ffe7;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&puStack_a0);
    uVar5 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab1af94;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10ab305a8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab1af94:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab1af98);
  (*pcVar4)();
}



/* Entry: 10ab1af98; end: 10ab1b233;  */

void FUN_10ab1af98(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f645c7d,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c47f58;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c47f58;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"entries",FUN_10ab307f4,FUN_10ab30ac8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f645c7d,0x14);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f6903c7;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68ffe7;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab1b214;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10ab31048,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab1b214:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab1b218);
  (*pcVar6)();
}



/* Entry: 10ab1b234; end: 10ab1b793;  */

/* WARNING: Removing unreachable block (ram,0x00010ab1b598) */
/* WARNING: Removing unreachable block (ram,0x00010ab1b59c) */
/* WARNING: Removing unreachable block (ram,0x00010ab1b5a4) */
/* WARNING: Removing unreachable block (ram,0x00010ab1b5ac) */
/* WARNING: Removing unreachable block (ram,0x00010ab1b5b0) */

void FUN_10ab1b234(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  undefined **ppuVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined **appuStack_c8 [8];
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    plVar6 = (long *)0x1d0;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c48628;
    pppuVar9 = (undefined ***)(plVar6 + 3);
    FUN_10ab312a8(pppuVar9,0);
    pppuStack_e0 = pppuVar9;
    pppuStack_d8 = (undefined ***)plVar6;
    func_0x00010ab31370(&pppuStack_e0,plVar6 + 8,pppuVar9);
    FUN_10ab31144(&pppuStack_f0,&pppuStack_e0);
    pppuVar9 = pppuStack_d8;
    if (pppuStack_d8 != (undefined ***)0x0) {
      plVar6 = (long *)(pppuStack_d8 + 1);
      do {
        lVar8 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)((long)*pppuStack_d8 + 0x10))(pppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuStack_d8 = (undefined ***)0x0;
    }
    else {
      pppuVar9 = pppuStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_d8 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar3) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppuStack_88 = (undefined ***)&UNK_1053a6a3c;
    appuStack_c8[0] = &PTR_DAT_110c48668;
    uStack_d0 = 0x10ab31550;
    pppuStack_e0 = pppuStack_f0;
    pppuStack_80 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_88);
    (*(code *)*pppuStack_80)(&pppuStack_80);
    pppuVar9 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_e8 + 1;
      do {
        ppuVar7 = *pppuVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar3) {
          *pppuVar10 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    param_1[1] = pppuStack_d8;
    *param_1 = pppuStack_e0;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(&uStack_d0);
    pppuVar9 = appuStack_c8;
    (*(code *)*appuStack_c8[0])();
    pppuVar10 = pppuStack_d8;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_d8 + 1;
      do {
        ppuVar7 = *pppuVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_d8)[2])(pppuStack_d8);
        pppuVar9 = pppuVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  else {
    pppuVar10 = *(undefined ****)(param_2 + 0x858);
    pppuVar9 = *(undefined ****)(param_2 + 0x860);
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar4 = pppuVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuVar4 = (undefined ***)0x1b8;
    pppuStack_100 = pppuVar10;
    pppuStack_f8 = pppuVar9;
    __Znwm();
    FUN_10ab312a8();
    pppuStack_f0 = pppuVar10;
    pppuStack_e8 = pppuVar9;
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar5 = pppuVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar5 = pppuVar9 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
    }
    pppuVar5 = (undefined ***)0x30;
    pppuStack_e0 = pppuVar4;
    pppuStack_88 = pppuVar10;
    pppuStack_80 = pppuVar9;
    __Znwm();
    pppuStack_88 = (undefined ***)0x0;
    pppuStack_80 = (undefined ***)0x0;
    *pppuVar5 = &PTR_DAT_110c485c8;
    pppuVar5[1] = (undefined **)0x0;
    pppuVar5[2] = (undefined **)0x0;
    pppuVar5[3] = (undefined **)pppuVar4;
    pppuVar5[4] = (undefined **)pppuVar10;
    pppuVar5[5] = (undefined **)pppuVar9;
    pppuStack_d8 = pppuVar5;
    func_0x00010ab31370(&pppuStack_e0,pppuVar4 + 5,pppuVar4);
    FUN_10ab31144(param_1,&pppuStack_e0);
    pppuVar9 = pppuStack_d8;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_d8 + 1;
      do {
        ppuVar7 = *pppuVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar3) {
          *pppuVar10 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_d8)[2])(pppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_80 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar9 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_e8 + 1;
      do {
        ppuVar7 = *pppuVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar3) {
          *pppuVar10 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar9 = pppuStack_100;
    if ((pppuStack_100 != (undefined ***)0x0) &&
       (pppuVar10 = (undefined ***)*param_1, pppuVar10 != (undefined ***)0x0)) {
      pppuStack_d8 = (undefined ***)param_1[1];
      if (pppuStack_d8 != (undefined ***)0x0) {
        pppuVar4 = pppuStack_d8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
          if (bVar3) {
            *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuStack_e0 = pppuVar10;
      FUN_10aa88c30(pppuStack_100,&pppuStack_e0);
      pppuVar10 = pppuStack_d8;
      if (pppuStack_d8 != (undefined ***)0x0) {
        pppuVar4 = pppuStack_d8 + 1;
        do {
          ppuVar7 = *pppuVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
          if (bVar3) {
            *pppuVar4 = (undefined **)((long)ppuVar7 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar7 == (undefined **)0x0) {
          (*(code *)(*pppuStack_d8)[2])(pppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar10;
        }
      }
    }
    pppuVar10 = pppuStack_f8;
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_f8 + 1;
      do {
        ppuVar7 = *pppuVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        pppuVar9 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[2])();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppuVar10);
          return;
        }
        goto LAB_10ab1b6cc;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10ab1b6cc:
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_e0);
  func_0x00010a1f58c4(pppuVar10);
  FUN_10a054c5c(&pppuStack_100);
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10ab1b8d0(extraout_x8,(long)pppuVar9[0x34] - (long)pppuVar9[0x33] >> 5);
  ppuVar7 = pppuVar9[0x33];
  ppuVar1 = pppuVar9[0x34];
  do {
    if (ppuVar7 == ppuVar1) {
      return;
    }
    if (ppuVar7 != (undefined **)0x0) {
      if (*(int *)(ppuVar7 + 3) == 1) {
        puStack_158 = ppuVar7[1];
        puStack_160 = *ppuVar7;
        if (ppuVar7[1] != (undefined *)0x0) {
          plVar6 = (long *)(ppuVar7[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_150 = 2;
        uStack_148 = 0;
        uStack_144 = 0;
        FUN_10ab1b96c(extraout_x8,&puStack_160);
      }
      else {
        if (*(int *)(ppuVar7 + 3) != 0) goto LAB_10ab1b884;
        puStack_158 = ppuVar7[1];
        puStack_160 = *ppuVar7;
        if (ppuVar7[1] != (undefined *)0x0) {
          plVar6 = (long *)(ppuVar7[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_150 = 1;
        uStack_148 = *(undefined4 *)(ppuVar7 + 2);
        uStack_144 = *(undefined1 *)((long)ppuVar7 + 0x14);
        FUN_10ab1b96c(extraout_x8,&puStack_160);
      }
      FUN_10ab2ab54(&puStack_160);
    }
LAB_10ab1b884:
    ppuVar7 = ppuVar7 + 4;
  } while( true );
}



/* Entry: 10ab1b794; end: 10ab1b8cf;  */

void FUN_10ab1b794(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10ab1b8d0(param_1,*(long *)(param_2 + 0x1a0) - *(long *)(param_2 + 0x198) >> 5);
  puVar2 = *(undefined8 **)(param_2 + 0x198);
  puVar3 = *(undefined8 **)(param_2 + 0x1a0);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    if (puVar2 != (undefined8 *)0x0) {
      if (*(int *)(puVar2 + 3) == 1) {
        uStack_58 = puVar2[1];
        uStack_60 = *puVar2;
        if (puVar2[1] != 0) {
          plVar1 = (long *)(puVar2[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_50 = 2;
        uStack_48 = 0;
        uStack_44 = 0;
        FUN_10ab1b96c(param_1,&uStack_60);
      }
      else {
        if (*(int *)(puVar2 + 3) != 0) goto LAB_10ab1b884;
        uStack_58 = puVar2[1];
        uStack_60 = *puVar2;
        if (puVar2[1] != 0) {
          plVar1 = (long *)(puVar2[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_50 = 1;
        uStack_48 = *(undefined4 *)(puVar2 + 2);
        uStack_44 = *(undefined1 *)((long)puVar2 + 0x14);
        FUN_10ab1b96c(param_1,&uStack_60);
      }
      FUN_10ab2ab54(&uStack_60);
    }
LAB_10ab1b884:
    puVar2 = puVar2 + 4;
  } while( true );
}



/* Entry: 10ab1b8d0; end: 10ab1b96b;  */

long * FUN_10ab1b8d0(long *param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  long *plVar5;
  undefined ****ppppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_198;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar8 = *param_1;
  if ((long *)(param_1[2] - lVar8 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      FUN_10ab2ad00();
      plVar4 = (long *)param_1[1];
      if (plVar4 < (long *)param_1[2]) {
        FUN_10ab2adc0(plVar4,param_2);
        lVar8 = param_2[3];
        *(undefined1 *)((long)plVar4 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
        *(int *)(plVar4 + 3) = (int)lVar8;
        plVar5 = plVar4 + 4;
      }
      else {
        lVar8 = (long)plVar4 - *param_1;
        uVar7 = (lVar8 >> 5) + 1;
        if (uVar7 >> 0x3b != 0) {
          FUN_10ab2ad00();
          plVar5 = (long *)plVar4[1];
          if (plVar5 < (long *)plVar4[2]) {
            FUN_10ab2afc4(plVar5,param_2);
            plVar12 = plVar5 + 4;
          }
          else {
            lVar8 = (long)plVar5 - *plVar4;
            uVar7 = (lVar8 >> 5) + 1;
            if (uVar7 >> 0x3b != 0) {
              FUN_10ab2af14();
              ppppuVar6 = &pppuStack_1f0;
              uVar7 = 0;
              lVar8 = *plVar5;
              lVar13 = plVar5[1];
              lVar10 = *param_2;
              if (lVar13 - lVar8 == param_2[1] - lVar10) {
                if (lVar8 != lVar13) {
                  do {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 == 0xffffffff || *(uint *)(lVar10 + 0x18) != uVar1) {
                      if (*(uint *)(lVar10 + 0x18) != uVar1) {
LAB_10ab1bc1c:
                        lVar8 = *plVar5;
                        goto LAB_10ab1bc20;
                      }
                    }
                    else {
                      uVar11 = 0;
                      pppuStack_1f0 = &ppuStack_198;
                      (*(code *)(&PTR_DAT_110c48698)[uVar1])(&pppuStack_1f0,lVar8,lVar10);
                      if ((uVar11 & 1) == 0) goto LAB_10ab1bc1c;
                    }
                    lVar8 = lVar8 + 0x20;
                    lVar10 = lVar10 + 0x20;
                  } while (lVar8 != lVar13);
                }
              }
              else {
LAB_10ab1bc20:
                if (lVar8 != 0) {
                  lVar13 = plVar5[1];
                  lVar10 = lVar8;
                  if (lVar13 != lVar8) {
                    do {
                      lVar13 = lVar13 + -0x20;
                      FUN_10ab2b038(lVar13);
                    } while (lVar13 != lVar8);
                    lVar10 = *plVar5;
                  }
                  plVar5[1] = lVar8;
                  __ZdlPv(lVar10);
                  *plVar5 = 0;
                  plVar5[1] = 0;
                  plVar5[2] = 0;
                }
                lVar8 = *param_2;
                plVar5[1] = param_2[1];
                *plVar5 = lVar8;
                plVar5[2] = param_2[2];
                *param_2 = 0;
                param_2[1] = 0;
                param_2[2] = 0;
                func_0x00010a1bd170();
                uVar3 = uRam0000000113302768;
                uVar2 = *(ushort *)((long)plVar5 + (0x139 - (ulong)uRam0000000113302768));
                if ((uVar2 >> 8 & 1) == 0) {
                  if (((*(long *)((long)plVar5 + (0x110 - (ulong)uRam0000000113302768)) != 0) ||
                      ((uVar2 >> 9 & 1) != 0)) ||
                     (*(long *)((long)plVar5 + (0x130 - (ulong)uRam0000000113302768)) != 0)) {
                    func_0x00010a1bd170();
                    if ((uVar7 & 1) != 0) {
                      return plVar5;
                    }
                    uStack_1b8 = 0;
                    uStack_1c0 = 0;
                    uStack_1a8 = 0;
                    uStack_1b0 = 0;
                    uStack_1d8 = 0;
                    uStack_1e0 = 0;
                    uStack_1c8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e8 = 0;
                    pppuStack_1f0 = (undefined ***)0x0;
                    ppuStack_198 = &PTR_DAT_110c48680;
                    uVar7 = (ulong)&pppuStack_1f0 | 8;
                    FUN_10a0dad0c(uVar7,&ppuStack_198);
                    uVar11 = (ulong)uRam0000000113302768;
                    if ((*(ushort *)((long)plVar5 + (0x139 - uVar11)) >> 8 & 1) != 0) {
                      FUN_10a1bd5e0();
                      uVar11 = (ulong)uRam0000000113302768;
                      if (uVar7 != 0) {
                        FUN_10a1bd648();
                        uVar11 = (ulong)uRam0000000113302768;
                      }
                    }
                    FUN_10a1c054c((long)plVar5 + (0xe0 - uVar11),&pppuStack_1f0);
                    return plVar5;
                  }
                  *(long *)((long)plVar5 + (0xf0 - (ulong)uRam0000000113302768)) =
                       *(long *)((long)plVar5 + (0xf0 - (ulong)uRam0000000113302768)) + 1;
                }
                if ((*(undefined ***)((long)plVar5 + (0x140 - (ulong)uVar3)) != &PTR_DAT_110c48680)
                   && (FUN_10a1bd5e0(), ppppuVar6 != (undefined ****)0x0)) {
                  FUN_10a1bd648();
                  *(undefined ***)((long)plVar5 + (0x140 - (ulong)uVar3)) = &PTR_DAT_110c48680;
                }
              }
              return plVar5;
            }
            uVar9 = plVar4[2] - *plVar4;
            uVar11 = (long)uVar9 >> 4;
            if (uVar11 <= uVar7) {
              uVar11 = uVar7;
            }
            if (0x7fffffffffffffdf < uVar9) {
              uVar11 = 0x7ffffffffffffff;
            }
            plStack_118 = plVar4;
            if (uVar11 == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              plVar5 = param_2;
              FUN_10ab2af28();
            }
            lVar8 = uVar11 + lVar8;
            FUN_10ab2afc4(lVar8,param_2);
            plVar12 = (long *)(lVar8 + 0x20);
            lVar8 = lVar8 + (*plVar4 - plVar4[1]);
            FUN_10ab2af5c(*plVar4,plVar4[1],lVar8);
            lStack_138 = *plVar4;
            *plVar4 = lVar8;
            plVar4[1] = (long)plVar12;
            lStack_120 = plVar4[2];
            plVar4[2] = uVar11 + (long)plVar5 * 0x20;
            plVar5 = &lStack_138;
            lStack_130 = lStack_138;
            lStack_128 = lStack_138;
            FUN_10ab2b0cc(plVar5);
          }
          plVar4[1] = (long)plVar12;
          return plVar5;
        }
        uVar9 = param_1[2] - *param_1;
        uVar11 = (long)uVar9 >> 4;
        if (uVar11 <= uVar7) {
          uVar11 = uVar7;
        }
        if (0x7fffffffffffffdf < uVar9) {
          uVar11 = 0x7ffffffffffffff;
        }
        plStack_a8 = param_1;
        if (uVar11 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = param_2;
          FUN_10ab2ad14();
        }
        lVar8 = uVar11 + lVar8;
        FUN_10ab2adc0(lVar8,param_2);
        lVar10 = param_2[3];
        *(undefined1 *)(lVar8 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
        *(int *)(lVar8 + 0x18) = (int)lVar10;
        plVar5 = (long *)(lVar8 + 0x20);
        lVar8 = lVar8 + (*param_1 - param_1[1]);
        FUN_10ab2ad48(*param_1,param_1[1],lVar8);
        lStack_c8 = *param_1;
        *param_1 = lVar8;
        param_1[1] = (long)plVar5;
        lStack_b0 = param_1[2];
        param_1[2] = uVar11 + (long)plVar4 * 0x20;
        plVar4 = &lStack_c8;
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        FUN_10ab2ae60(plVar4);
      }
      param_1[1] = (long)plVar5;
      return plVar4;
    }
    lVar10 = param_1[1];
    plVar4 = param_2;
    plStack_38 = param_1;
    FUN_10ab2ad14();
    lVar8 = (long)param_2 + (lVar10 - lVar8);
    lVar10 = lVar8 + (*param_1 - param_1[1]);
    FUN_10ab2ad48(*param_1,param_1[1],lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar8;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)plVar4 * 4);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10ab2ae60(param_1);
  }
  return param_1;
}



/* Entry: 10ab1b96c; end: 10ab1bb7b;  */

long * FUN_10ab1b96c(long *param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined ****ppppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined ***pppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_138;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    FUN_10ab2adc0(plVar4,param_2);
    lVar11 = param_2[3];
    *(undefined1 *)((long)plVar4 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
    *(int *)(plVar4 + 3) = (int)lVar11;
    plVar5 = plVar4 + 4;
  }
  else {
    lVar11 = (long)plVar4 - *param_1;
    uVar8 = (lVar11 >> 5) + 1;
    if (uVar8 >> 0x3b != 0) {
      FUN_10ab2ad00();
      plVar5 = (long *)plVar4[1];
      if (plVar5 < (long *)plVar4[2]) {
        FUN_10ab2afc4(plVar5,param_2);
        plVar12 = plVar5 + 4;
      }
      else {
        lVar11 = (long)plVar5 - *plVar4;
        uVar8 = (lVar11 >> 5) + 1;
        if (uVar8 >> 0x3b != 0) {
          FUN_10ab2af14();
          ppppuVar7 = &pppuStack_190;
          uVar8 = 0;
          lVar11 = *plVar5;
          lVar13 = plVar5[1];
          lVar6 = *param_2;
          if (lVar13 - lVar11 == param_2[1] - lVar6) {
            if (lVar11 != lVar13) {
              do {
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 == 0xffffffff || *(uint *)(lVar6 + 0x18) != uVar1) {
                  if (*(uint *)(lVar6 + 0x18) != uVar1) {
LAB_10ab1bc1c:
                    lVar11 = *plVar5;
                    goto LAB_10ab1bc20;
                  }
                }
                else {
                  uVar10 = 0;
                  pppuStack_190 = &ppuStack_138;
                  (*(code *)(&PTR_DAT_110c48698)[uVar1])(&pppuStack_190,lVar11,lVar6);
                  if ((uVar10 & 1) == 0) goto LAB_10ab1bc1c;
                }
                lVar11 = lVar11 + 0x20;
                lVar6 = lVar6 + 0x20;
              } while (lVar11 != lVar13);
            }
          }
          else {
LAB_10ab1bc20:
            if (lVar11 != 0) {
              lVar13 = plVar5[1];
              lVar6 = lVar11;
              if (lVar13 != lVar11) {
                do {
                  lVar13 = lVar13 + -0x20;
                  FUN_10ab2b038(lVar13);
                } while (lVar13 != lVar11);
                lVar6 = *plVar5;
              }
              plVar5[1] = lVar11;
              __ZdlPv(lVar6);
              *plVar5 = 0;
              plVar5[1] = 0;
              plVar5[2] = 0;
            }
            lVar11 = *param_2;
            plVar5[1] = param_2[1];
            *plVar5 = lVar11;
            plVar5[2] = param_2[2];
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            func_0x00010a1bd170();
            uVar3 = uRam0000000113302768;
            uVar2 = *(ushort *)((long)plVar5 + (0x139 - (ulong)uRam0000000113302768));
            if ((uVar2 >> 8 & 1) == 0) {
              if (((*(long *)((long)plVar5 + (0x110 - (ulong)uRam0000000113302768)) != 0) ||
                  ((uVar2 >> 9 & 1) != 0)) ||
                 (*(long *)((long)plVar5 + (0x130 - (ulong)uRam0000000113302768)) != 0)) {
                func_0x00010a1bd170();
                if ((uVar8 & 1) != 0) {
                  return plVar5;
                }
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_148 = 0;
                uStack_150 = 0;
                uStack_178 = 0;
                uStack_180 = 0;
                uStack_168 = 0;
                uStack_170 = 0;
                uStack_188 = 0;
                pppuStack_190 = (undefined ***)0x0;
                ppuStack_138 = &PTR_DAT_110c48680;
                uVar8 = (ulong)&pppuStack_190 | 8;
                FUN_10a0dad0c(uVar8,&ppuStack_138);
                uVar10 = (ulong)uRam0000000113302768;
                if ((*(ushort *)((long)plVar5 + (0x139 - uVar10)) >> 8 & 1) != 0) {
                  FUN_10a1bd5e0();
                  uVar10 = (ulong)uRam0000000113302768;
                  if (uVar8 != 0) {
                    FUN_10a1bd648();
                    uVar10 = (ulong)uRam0000000113302768;
                  }
                }
                FUN_10a1c054c((long)plVar5 + (0xe0 - uVar10),&pppuStack_190);
                return plVar5;
              }
              *(long *)((long)plVar5 + (0xf0 - (ulong)uRam0000000113302768)) =
                   *(long *)((long)plVar5 + (0xf0 - (ulong)uRam0000000113302768)) + 1;
            }
            if ((*(undefined ***)((long)plVar5 + (0x140 - (ulong)uVar3)) != &PTR_DAT_110c48680) &&
               (FUN_10a1bd5e0(), ppppuVar7 != (undefined ****)0x0)) {
              FUN_10a1bd648();
              *(undefined ***)((long)plVar5 + (0x140 - (ulong)uVar3)) = &PTR_DAT_110c48680;
            }
          }
          return plVar5;
        }
        uVar9 = plVar4[2] - *plVar4;
        uVar10 = (long)uVar9 >> 4;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffdf < uVar9) {
          uVar10 = 0x7ffffffffffffff;
        }
        plStack_b8 = plVar4;
        if (uVar10 == 0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = param_2;
          FUN_10ab2af28();
        }
        lVar11 = uVar10 + lVar11;
        FUN_10ab2afc4(lVar11,param_2);
        plVar12 = (long *)(lVar11 + 0x20);
        lVar11 = lVar11 + (*plVar4 - plVar4[1]);
        FUN_10ab2af5c(*plVar4,plVar4[1],lVar11);
        lStack_d8 = *plVar4;
        *plVar4 = lVar11;
        plVar4[1] = (long)plVar12;
        lStack_c0 = plVar4[2];
        plVar4[2] = uVar10 + (long)plVar5 * 0x20;
        plVar5 = &lStack_d8;
        lStack_d0 = lStack_d8;
        lStack_c8 = lStack_d8;
        FUN_10ab2b0cc(plVar5);
      }
      plVar4[1] = (long)plVar12;
      return plVar5;
    }
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 4;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar10 = 0x7ffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar10 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_2;
      FUN_10ab2ad14();
    }
    lVar11 = uVar10 + lVar11;
    FUN_10ab2adc0(lVar11,param_2);
    lVar6 = param_2[3];
    *(undefined1 *)(lVar11 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
    *(int *)(lVar11 + 0x18) = (int)lVar6;
    plVar5 = (long *)(lVar11 + 0x20);
    lVar11 = lVar11 + (*param_1 - param_1[1]);
    FUN_10ab2ad48(*param_1,param_1[1],lVar11);
    lStack_68 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)plVar5;
    lStack_50 = param_1[2];
    param_1[2] = uVar10 + (long)plVar4 * 0x20;
    plVar4 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_10ab2ae60(plVar4);
  }
  param_1[1] = (long)plVar5;
  return plVar4;
}



/* Entry: 10ab1bb7c; end: 10ab1bd87;  */

long * FUN_10ab1bb7c(long *param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  undefined ****ppppuVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  
  ppppuVar5 = &pppuStack_b0;
  uVar6 = 0;
  lVar8 = *param_1;
  lVar9 = param_1[1];
  lVar4 = *param_2;
  if (lVar9 - lVar8 == param_2[1] - lVar4) {
    if (lVar8 != lVar9) {
      do {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 == 0xffffffff || *(uint *)(lVar4 + 0x18) != uVar1) {
          if (*(uint *)(lVar4 + 0x18) != uVar1) {
LAB_10ab1bc1c:
            lVar8 = *param_1;
            goto LAB_10ab1bc20;
          }
        }
        else {
          uVar7 = 0;
          pppuStack_b0 = &ppuStack_58;
          (*(code *)(&PTR_DAT_110c48698)[uVar1])(&pppuStack_b0,lVar8,lVar4);
          if ((uVar7 & 1) == 0) goto LAB_10ab1bc1c;
        }
        lVar8 = lVar8 + 0x20;
        lVar4 = lVar4 + 0x20;
      } while (lVar8 != lVar9);
    }
  }
  else {
LAB_10ab1bc20:
    if (lVar8 != 0) {
      lVar9 = param_1[1];
      lVar4 = lVar8;
      if (lVar9 != lVar8) {
        do {
          lVar9 = lVar9 + -0x20;
          FUN_10ab2b038(lVar9);
        } while (lVar9 != lVar8);
        lVar4 = *param_1;
      }
      param_1[1] = lVar8;
      __ZdlPv(lVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    lVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar8;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    func_0x00010a1bd170();
    uVar3 = uRam0000000113302768;
    uVar2 = *(ushort *)((long)param_1 + (0x139 - (ulong)uRam0000000113302768));
    if ((uVar2 >> 8 & 1) == 0) {
      if (((*(long *)((long)param_1 + (0x110 - (ulong)uRam0000000113302768)) != 0) ||
          ((uVar2 >> 9 & 1) != 0)) ||
         (*(long *)((long)param_1 + (0x130 - (ulong)uRam0000000113302768)) != 0)) {
        func_0x00010a1bd170();
        if ((uVar6 & 1) != 0) {
          return param_1;
        }
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        pppuStack_b0 = (undefined ***)0x0;
        ppuStack_58 = &PTR_DAT_110c48680;
        uVar6 = (ulong)&pppuStack_b0 | 8;
        FUN_10a0dad0c(uVar6,&ppuStack_58);
        uVar7 = (ulong)uRam0000000113302768;
        if ((*(ushort *)((long)param_1 + (0x139 - uVar7)) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar7 = (ulong)uRam0000000113302768;
          if (uVar6 != 0) {
            FUN_10a1bd648();
            uVar7 = (ulong)uRam0000000113302768;
          }
        }
        FUN_10a1c054c((long)param_1 + (0xe0 - uVar7),&pppuStack_b0);
        return param_1;
      }
      *(long *)((long)param_1 + (0xf0 - (ulong)uRam0000000113302768)) =
           *(long *)((long)param_1 + (0xf0 - (ulong)uRam0000000113302768)) + 1;
    }
    if ((*(undefined ***)((long)param_1 + (0x140 - (ulong)uVar3)) != &PTR_DAT_110c48680) &&
       (FUN_10a1bd5e0(), ppppuVar5 != (undefined ****)0x0)) {
      FUN_10a1bd648();
      *(undefined ***)((long)param_1 + (0x140 - (ulong)uVar3)) = &PTR_DAT_110c48680;
    }
  }
  return param_1;
}



/* Entry: 10ab1bd88; end: 10ab1bde3;  */

ulong FUN_10ab1bd88(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x1b0);
  for (plVar1 = *(long **)(param_1 + 0x198); plVar1 != *(long **)(param_1 + 0x1a0);
      plVar1 = plVar1 + 4) {
    if (((plVar1 != (long *)0x0) && ((int)plVar1[3] == 1)) && (*plVar1 != 0)) {
      uVar2 = uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 + *(long *)(*plVar1 + 0x1c8) ^ uVar2;
    }
  }
  return uVar2;
}



/* Entry: 10ab1bde4; end: 10ab1bedb;  */

ulong FUN_10ab1bde4(long param_1,int param_2,uint param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  int iStack_58;
  undefined1 uStack_54;
  
  puVar1 = *(ulong **)(param_1 + 0x198);
  puVar2 = *(ulong **)(param_1 + 0x1a0);
  do {
    if (puVar1 == puVar2) {
      return 0;
    }
    if (puVar1 != (ulong *)0x0) {
      if ((int)puVar1[3] == 1) {
        uVar3 = *puVar1;
        if (uVar3 != 0) {
          uStack_54 = (undefined1)param_3;
          lVar4 = uVar3 + 0x1b0;
          iStack_58 = param_2;
          FUN_10ab2b1e0(lVar4,&iStack_58);
          if ((uVar3 + 0x1b8 != lVar4) && (*(ulong *)(lVar4 + 0x28) != 0)) {
            return *(ulong *)(lVar4 + 0x28);
          }
        }
      }
      else if (((int)puVar1[3] == 0) && (uVar3 = *puVar1, uVar3 != 0)) {
        FUN_10ab19a64();
        if ((int)uVar3 == 0) {
          if (((int)puVar1[2] == param_2) && (*(byte *)((long)puVar1 + 0x14) == param_3)) {
LAB_10ab1bed4:
            return *puVar1;
          }
        }
        else if (param_5 != 0) {
          uVar3 = *puVar1;
          FUN_10ab19af8(uVar3,param_4,param_5);
          if ((uVar3 & 1) != 0) goto LAB_10ab1bed4;
        }
      }
    }
    puVar1 = puVar1 + 4;
  } while( true );
}



/* Entry: 10ab1bedc; end: 10ab1c08f;  */

void FUN_10ab1bedc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_50;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  plVar4 = *(long **)(param_1 + 0x198);
  plVar1 = *(long **)(param_1 + 0x1a0);
  if (plVar4 != plVar1) {
    do {
      if (plVar4 != (long *)0x0) {
        if ((int)plVar4[3] == 1) {
          lVar3 = *plVar4;
          if ((lVar3 != 0) && (func_0x00010ab1bfb8(lVar3,param_2), lVar3 != 0)) {
            return;
          }
        }
        else if (((int)plVar4[3] == 0) && (lVar3 = *plVar4, lVar3 != 0)) {
          uStack_38 = *(ulong *)(lVar3 + 0x60);
          lStack_40 = *(long *)(lVar3 + 0x58);
          if (-1 < (char)*(byte *)(lVar3 + 0x6f)) {
            uStack_38 = (ulong)*(byte *)(lVar3 + 0x6f);
            lStack_40 = lVar3 + 0x58;
          }
          uStack_48 = param_2[1];
          puStack_50 = (undefined8 *)*param_2;
          if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
            uStack_48 = (ulong)*(byte *)((long)param_2 + 0x17);
            puStack_50 = param_2;
          }
          iVar2 = 0x13835670;
          FUN_10a15aadc(0x113835670,&lStack_40,&puStack_50);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar1);
  }
  return;
}



/* Entry: 10ab1c090; end: 10ab1c183;  */

long FUN_10ab1c090(long param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar4 = *(long **)(param_1 + 0x198);
  plVar1 = *(long **)(param_1 + 0x1a0);
  if (plVar4 != plVar1) {
    do {
      if (((plVar4 != (long *)0x0) && ((int)plVar4[3] == 1)) && (lVar3 = *plVar4, lVar3 != 0)) {
        lStack_58 = (long)*(char *)(lVar3 + 0x1af);
        if (lStack_58 < 0) {
          uStack_60 = *(long *)(lVar3 + 0x198);
          lStack_58 = *(long *)(lVar3 + 0x1a0);
        }
        else {
          uStack_60 = lVar3 + 0x198;
        }
        uStack_68 = param_2[1];
        puStack_70 = (undefined8 *)*param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          uStack_68 = (ulong)*(byte *)((long)param_2 + 0x17);
          puStack_70 = param_2;
        }
        iVar2 = 0x13835670;
        FUN_10a15aadc(0x113835670,&uStack_60,&puStack_70);
        if (iVar2 != 0) {
          lVar5 = *plVar4;
          uStack_60._0_5_ = CONCAT14(param_4,param_3);
          lVar3 = lVar5 + 0x1b0;
          FUN_10ab2b1e0(lVar3,&uStack_60);
          if ((lVar5 + 0x1b8 != lVar3) && (*(long *)(lVar3 + 0x28) != 0)) {
            return *(long *)(lVar3 + 0x28);
          }
        }
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar1);
  }
  return 0;
}



/* Entry: 10ab1c184; end: 10ab1c647;  */

void FUN_10ab1c184(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined8 ***pppuVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  long *plVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  long alStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = CONCAT17(0x14,(undefined7)uStack_70);
  uStack_78 = 0x63656c6c6f43746e;
  ppuStack_80 = (undefined8 ***)0x6f462e7465737341;
  uStack_70 = CONCAT35(uStack_70._5_3_,0x6e6f6974);
  pppuVar10 = &ppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar10,&UNK_10f6903d6,0xb);
  ppuVar17 = pppuVar10[1];
  ppuVar16 = *pppuVar10;
  param_1[2] = pppuVar10[2];
  param_1[1] = ppuVar17;
  *param_1 = ppuVar16;
  pppuVar10[1] = (undefined8 **)0x0;
  pppuVar10[2] = (undefined8 **)0x0;
  *pppuVar10 = (undefined8 **)0x0;
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  plVar15 = *(long **)(param_2 + 0x198);
  plVar5 = *(long **)(param_2 + 0x1a0);
  if (plVar15 != plVar5) {
    bVar9 = true;
    pcVar1 = "Unknown";
    do {
      if (plVar15 != (long *)0x0) {
        if ((int)plVar15[3] == 1) {
          lVar13 = *plVar15;
          if (lVar13 != 0) {
            if (!bVar9) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&DAT_10f68f19e,2);
              lVar13 = *plVar15;
            }
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&lStack_a0,&UNK_10f6903f4,lVar13 + 0x198);
            plVar11 = &lStack_a0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (plVar11,&DAT_10f2da10d,1);
            uStack_78 = plVar11[1];
            ppuStack_80 = (undefined8 **)*plVar11;
            uStack_70 = plVar11[2];
            plVar11[1] = 0;
            plVar11[2] = 0;
            *plVar11 = 0;
            uVar4 = uStack_78;
            pppuVar10 = (undefined8 ***)ppuStack_80;
            if (-1 < (long)uStack_70) {
              uVar4 = uStack_70 >> 0x38;
              pppuVar10 = &ppuStack_80;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pppuVar10,uVar4);
            if ((long)uStack_70 < 0) {
              __ZdlPv(ppuStack_80);
            }
            lVar13 = lStack_a0;
            if (lStack_90 < 0) goto LAB_10ab1c534;
            goto LAB_10ab1c538;
          }
        }
        else if (((int)plVar15[3] == 0) && (lVar13 = *plVar15, lVar13 != 0)) {
          if (!bVar9) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,&DAT_10f68f19e,2);
            lVar13 = *plVar15;
          }
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (alStack_d8,&UNK_10f6903e2,lVar13 + 0x58);
          plVar11 = alStack_d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar11,&UNK_10f6903ea,9);
          lStack_b8 = plVar11[1];
          lStack_c0 = *plVar11;
          lStack_b0 = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          iVar6 = (int)plVar15[2];
          cVar7 = *(char *)((long)plVar15 + 0x14);
          if (iVar6 < 500) {
            pcVar14 = "Light Italic";
            if (cVar7 == '\0') {
              pcVar14 = "Light";
            }
            pcVar12 = "Regular Italic";
            if (cVar7 == '\0') {
              pcVar12 = "Regular";
            }
            if (iVar6 != 400) {
              pcVar12 = pcVar1;
            }
            if (iVar6 != 300) {
              pcVar14 = pcVar12;
            }
            pcVar12 = "Thin Italic";
            if (cVar7 == '\0') {
              pcVar12 = "Thin";
            }
            pcVar3 = "ExtraLight Italic";
            if (cVar7 == '\0') {
              pcVar3 = "ExtraLight";
            }
            if (iVar6 != 200) {
              pcVar3 = pcVar1;
            }
            if (iVar6 != 100) {
              pcVar12 = pcVar3;
            }
            bVar8 = SBORROW4(iVar6,299);
            iVar2 = iVar6 + -299;
            bVar9 = iVar6 == 299;
          }
          else {
            bVar9 = cVar7 == '\0';
            pcVar14 = "Bold Italic";
            if (bVar9) {
              pcVar14 = "Bold";
            }
            pcVar12 = "ExtraBold Italic";
            if (bVar9) {
              pcVar12 = "ExtraBold";
            }
            pcVar3 = "Heavy Italic";
            if (bVar9) {
              pcVar3 = "Heavy";
            }
            if (iVar6 != 900) {
              pcVar3 = pcVar1;
            }
            if (iVar6 != 800) {
              pcVar12 = pcVar3;
            }
            if (iVar6 != 700) {
              pcVar14 = pcVar12;
            }
            pcVar12 = "Medium Italic";
            if (cVar7 == '\0') {
              pcVar12 = "Medium";
            }
            pcVar3 = "SemiBold Italic";
            if (cVar7 == '\0') {
              pcVar3 = "SemiBold";
            }
            if (iVar6 != 600) {
              pcVar3 = pcVar1;
            }
            if (iVar6 != 500) {
              pcVar12 = pcVar3;
            }
            bVar8 = SBORROW4(iVar6,699);
            iVar2 = iVar6 + -699;
            bVar9 = iVar6 == 699;
          }
          if (bVar9 || iVar2 < 0 != bVar8) {
            pcVar14 = pcVar12;
          }
          pcVar12 = pcVar14;
          _strlen(pcVar14);
          plVar11 = &lStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar11,pcVar14,pcVar12);
          lStack_98 = plVar11[1];
          lStack_a0 = *plVar11;
          lStack_90 = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          plVar11 = &lStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar11,&DAT_10f2da10d,1);
          uStack_78 = plVar11[1];
          ppuStack_80 = (undefined8 **)*plVar11;
          uStack_70 = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          uVar4 = uStack_78;
          pppuVar10 = (undefined8 ***)ppuStack_80;
          if (-1 < (long)uStack_70) {
            uVar4 = uStack_70 >> 0x38;
            pppuVar10 = &ppuStack_80;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,pppuVar10,uVar4);
          if ((long)uStack_70 < 0) {
            __ZdlPv(ppuStack_80);
          }
          if (lStack_90 < 0) {
            __ZdlPv(lStack_a0);
          }
          if (lStack_b0 < 0) {
            __ZdlPv(lStack_c0);
          }
          lVar13 = alStack_d8[0];
          if (cStack_c1 < '\0') {
LAB_10ab1c534:
            __ZdlPv(lVar13);
          }
LAB_10ab1c538:
          bVar9 = false;
        }
      }
      plVar15 = plVar15 + 4;
    } while (plVar15 != plVar5);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10ab1c648; end: 10ab1c64f;  */

void FUN_10ab1c648(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined8 ***pppuVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  long *plVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  long alStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = CONCAT17(0x14,(undefined7)uStack_70);
  uStack_78 = 0x63656c6c6f43746e;
  ppuStack_80 = (undefined8 ***)0x6f462e7465737341;
  uStack_70 = CONCAT35(uStack_70._5_3_,0x6e6f6974);
  pppuVar10 = &ppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar10,&UNK_10f6903d6,0xb);
  ppuVar17 = pppuVar10[1];
  ppuVar16 = *pppuVar10;
  param_1[2] = pppuVar10[2];
  param_1[1] = ppuVar17;
  *param_1 = ppuVar16;
  pppuVar10[1] = (undefined8 **)0x0;
  pppuVar10[2] = (undefined8 **)0x0;
  *pppuVar10 = (undefined8 **)0x0;
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  plVar15 = *(long **)(param_2 + 0x188);
  plVar5 = *(long **)(param_2 + 400);
  if (plVar15 != plVar5) {
    bVar9 = true;
    pcVar1 = "Unknown";
    do {
      if (plVar15 != (long *)0x0) {
        if ((int)plVar15[3] == 1) {
          lVar13 = *plVar15;
          if (lVar13 != 0) {
            if (!bVar9) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&DAT_10f68f19e,2);
              lVar13 = *plVar15;
            }
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&lStack_a0,&UNK_10f6903f4,lVar13 + 0x198);
            plVar11 = &lStack_a0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (plVar11,&DAT_10f2da10d,1);
            uStack_78 = plVar11[1];
            ppuStack_80 = (undefined8 **)*plVar11;
            uStack_70 = plVar11[2];
            plVar11[1] = 0;
            plVar11[2] = 0;
            *plVar11 = 0;
            uVar4 = uStack_78;
            pppuVar10 = (undefined8 ***)ppuStack_80;
            if (-1 < (long)uStack_70) {
              uVar4 = uStack_70 >> 0x38;
              pppuVar10 = &ppuStack_80;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pppuVar10,uVar4);
            if ((long)uStack_70 < 0) {
              __ZdlPv(ppuStack_80);
            }
            lVar13 = lStack_a0;
            if (lStack_90 < 0) goto LAB_10ab1c534;
            goto LAB_10ab1c538;
          }
        }
        else if (((int)plVar15[3] == 0) && (lVar13 = *plVar15, lVar13 != 0)) {
          if (!bVar9) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,&DAT_10f68f19e,2);
            lVar13 = *plVar15;
          }
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (alStack_d8,&UNK_10f6903e2,lVar13 + 0x58);
          plVar11 = alStack_d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar11,&UNK_10f6903ea,9);
          lStack_b8 = plVar11[1];
          lStack_c0 = *plVar11;
          lStack_b0 = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          iVar6 = (int)plVar15[2];
          cVar7 = *(char *)((long)plVar15 + 0x14);
          if (iVar6 < 500) {
            pcVar14 = "Light Italic";
            if (cVar7 == '\0') {
              pcVar14 = "Light";
            }
            pcVar12 = "Regular Italic";
            if (cVar7 == '\0') {
              pcVar12 = "Regular";
            }
            if (iVar6 != 400) {
              pcVar12 = pcVar1;
            }
            if (iVar6 != 300) {
              pcVar14 = pcVar12;
            }
            pcVar12 = "Thin Italic";
            if (cVar7 == '\0') {
              pcVar12 = "Thin";
            }
            pcVar3 = "ExtraLight Italic";
            if (cVar7 == '\0') {
              pcVar3 = "ExtraLight";
            }
            if (iVar6 != 200) {
              pcVar3 = pcVar1;
            }
            if (iVar6 != 100) {
              pcVar12 = pcVar3;
            }
            bVar8 = SBORROW4(iVar6,299);
            iVar2 = iVar6 + -299;
            bVar9 = iVar6 == 299;
          }
          else {
            bVar9 = cVar7 == '\0';
            pcVar14 = "Bold Italic";
            if (bVar9) {
              pcVar14 = "Bold";
            }
            pcVar12 = "ExtraBold Italic";
            if (bVar9) {
              pcVar12 = "ExtraBold";
            }
            pcVar3 = "Heavy Italic";
            if (bVar9) {
              pcVar3 = "Heavy";
            }
            if (iVar6 != 900) {
              pcVar3 = pcVar1;
            }
            if (iVar6 != 800) {
              pcVar12 = pcVar3;
            }
            if (iVar6 != 700) {
              pcVar14 = pcVar12;
            }
            pcVar12 = "Medium Italic";
            if (cVar7 == '\0') {
              pcVar12 = "Medium";
            }
            pcVar3 = "SemiBold Italic";
            if (cVar7 == '\0') {
              pcVar3 = "SemiBold";
            }
            if (iVar6 != 600) {
              pcVar3 = pcVar1;
            }
            if (iVar6 != 500) {
              pcVar12 = pcVar3;
            }
            bVar8 = SBORROW4(iVar6,699);
            iVar2 = iVar6 + -699;
            bVar9 = iVar6 == 699;
          }
          if (bVar9 || iVar2 < 0 != bVar8) {
            pcVar14 = pcVar12;
          }
          pcVar12 = pcVar14;
          _strlen(pcVar14);
          plVar11 = &lStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar11,pcVar14,pcVar12);
          lStack_98 = plVar11[1];
          lStack_a0 = *plVar11;
          lStack_90 = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          plVar11 = &lStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar11,&DAT_10f2da10d,1);
          uStack_78 = plVar11[1];
          ppuStack_80 = (undefined8 **)*plVar11;
          uStack_70 = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          uVar4 = uStack_78;
          pppuVar10 = (undefined8 ***)ppuStack_80;
          if (-1 < (long)uStack_70) {
            uVar4 = uStack_70 >> 0x38;
            pppuVar10 = &ppuStack_80;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,pppuVar10,uVar4);
          if ((long)uStack_70 < 0) {
            __ZdlPv(ppuStack_80);
          }
          if (lStack_90 < 0) {
            __ZdlPv(lStack_a0);
          }
          if (lStack_b0 < 0) {
            __ZdlPv(lStack_c0);
          }
          lVar13 = alStack_d8[0];
          if (cStack_c1 < '\0') {
LAB_10ab1c534:
            __ZdlPv(lVar13);
          }
LAB_10ab1c538:
          bVar9 = false;
        }
      }
      plVar15 = plVar15 + 4;
    } while (plVar15 != plVar5);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10ab1c650; end: 10ab1c853;  */

void FUN_10ab1c650(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  char cStack_71;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_entries_110c477e0);
  lVar2 = *(long *)(param_1 + 0x198);
  lVar1 = *(long *)(param_1 + 0x1a0);
  if (lVar2 != lVar1) {
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 1) {
          cStack_71 = '\n';
          uStack_80 = 0x796c;
          uStack_88 = 0x696d6146746e6f66;
          uStack_7e = 0;
          uStack_68 = 10;
          puStack_70 = &uStack_88;
          (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c48288,&puStack_70);
          if (cStack_71 < '\0') {
            __ZdlPv(uStack_88);
          }
          FUN_10a1f5d14(param_2,&PTR_DAT_110c482a8,lVar2,&UNK_10f645c6c,0x10);
        }
        else if (*(int *)(lVar2 + 0x18) == 0) {
          cStack_71 = '\x04';
          uStack_88 = CONCAT35(uStack_88._5_3_,0x746e6f66);
          uStack_68 = 4;
          puStack_70 = &uStack_88;
          (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c48288,&puStack_70);
          if (cStack_71 < '\0') {
            __ZdlPv(uStack_88);
          }
          FUN_10a1f4a50(param_2,&PTR_DAT_110c482a8,lVar2,&UNK_10f645a1b,10);
          (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c47800,*(undefined4 *)(lVar2 + 0x10));
          (**(code **)(*param_2 + 0x70))
                    (param_2,&PTR_s_italic_110c482c8,*(undefined1 *)(lVar2 + 0x14));
        }
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar1);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab1c854; end: 10ab1cdf3;  */

void FUN_10ab1c854(undefined **param_1,long *****param_2,long *****param_3)

{
  long *****ppppplVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  code *pcVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long *extraout_x8;
  ulong uVar15;
  ulong uVar16;
  undefined **unaff_x21;
  long *****unaff_x22;
  int iVar17;
  undefined *unaff_x23;
  long *****unaff_x24;
  undefined8 unaff_x25;
  long lVar18;
  code *unaff_x26;
  long *****unaff_x27;
  ulong unaff_x28;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined1 *puStack_338;
  ulong uStack_330;
  long ****pppplStack_328;
  code *pcStack_320;
  undefined8 uStack_318;
  long ****pppplStack_310;
  code **ppcStack_308;
  long ***ppplStack_300;
  undefined8 *puStack_2f8;
  long ****pppplStack_2f0;
  undefined8 **ppuStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined8 auStack_2c8 [2];
  char cStack_2b1;
  long ***ppplStack_2b0;
  undefined8 *apuStack_2a8 [7];
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  code *pcStack_258;
  undefined **ppuStack_250;
  undefined8 *puStack_248;
  long lStack_218;
  long ****pppplStack_210;
  undefined *puStack_208;
  long ****pppplStack_200;
  long ****pppplStack_1f8;
  undefined **ppuStack_1f0;
  long ****pppplStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined ***pppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined **ppuStack_1c0;
  long ****pppplStack_1b8;
  ulong uStack_1b0;
  byte bStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  int iStack_170;
  undefined4 uStack_16c;
  long ***ppplStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  long ***ppplStack_e8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long ***ppplStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  ppuVar13 = &PTR_s_entries_110c477e0;
  ppppplVar7 = param_2;
  (*(code *)(*param_2)[0x40])();
  pppplStack_1e8 = (long ****)ppppplVar7;
  if ((int)ppppplVar7 != 0) {
    ppuVar13 = &PTR_s_entries_110c477e0;
    (*(code *)(*param_2)[0x42])(param_2);
    ppppplVar7 = param_2;
    (*(code *)(*param_2)[0x41])();
    ppplStack_b0 = (long ***)(param_1 + 0x33);
    ppuStack_a8 = (undefined **)((ulong)ppuStack_a8 & 0xffffffffffffff00);
    unaff_x28 = (ulong)ppppplVar7 & 0xffffffff;
    puVar3 = param_1[0x33];
    unaff_x21 = (undefined **)param_1[0x34];
    unaff_x22 = (long *****)((long)unaff_x21 - (long)puVar3);
    uVar16 = (long)unaff_x22 >> 5;
    if (uVar16 < unaff_x28) {
      unaff_x23 = (undefined *)(unaff_x28 - uVar16);
      if ((undefined *)((long)param_1[0x35] - (long)unaff_x21 >> 5) < unaff_x23) {
        uVar15 = (long)param_1[0x35] - (long)puVar3;
        uVar16 = (long)uVar15 >> 4;
        if (uVar16 <= unaff_x28) {
          uVar16 = unaff_x28;
        }
        if (0x7fffffffffffffdf < uVar15) {
          uVar16 = 0x7ffffffffffffff;
        }
        ppplStack_e8 = ppplStack_b0;
        FUN_10ab2af28();
        ppppplVar1 = (long *****)(uVar16 + (long)unaff_x22);
        unaff_x22 = ppppplVar1 + (long)unaff_x23 * 4;
        ppppplVar8 = ppppplVar1;
        do {
          ppppplVar8[1] = (long ****)0x0;
          ppppplVar8[2] = (long ****)0x0;
          *ppppplVar8 = (long ****)0x0;
          *(undefined4 *)(ppppplVar8 + 2) = 400;
          *(undefined4 *)(ppppplVar8 + 3) = 0;
          ppppplVar8 = ppppplVar8 + 4;
        } while (ppppplVar8 != unaff_x22);
        unaff_x23 = (undefined *)(uVar16 + (long)ppuVar13 * 0x20);
        ppuVar13 = (undefined **)param_1[0x34];
        unaff_x21 = (undefined **)((long)ppppplVar1 + ((long)param_1[0x33] - (long)ppuVar13));
        param_3 = (long *****)unaff_x21;
        FUN_10ab2af5c();
        ppuStack_108 = (undefined **)param_1[0x33];
        param_1[0x33] = (undefined *)unaff_x21;
        param_1[0x34] = (undefined *)unaff_x22;
        puStack_f0 = param_1[0x35];
        param_1[0x35] = unaff_x23;
        ppuStack_100 = ppuStack_108;
        ppuStack_f8 = ppuStack_108;
        FUN_10ab2b0cc(&ppuStack_108);
      }
      else {
        ppppplVar8 = (long *****)(unaff_x21 + (long)unaff_x23 * 4);
        do {
          unaff_x21[1] = (undefined *)0x0;
          unaff_x21[2] = (undefined *)0x0;
          *unaff_x21 = (undefined *)0x0;
          *(undefined4 *)(unaff_x21 + 2) = 400;
          *(undefined4 *)(unaff_x21 + 3) = 0;
          unaff_x21 = unaff_x21 + 4;
        } while ((long *****)unaff_x21 != ppppplVar8);
        param_1[0x34] = (undefined *)ppppplVar8;
      }
    }
    else if (unaff_x28 < uVar16) {
      unaff_x22 = (long *****)(puVar3 + unaff_x28 * 0x20);
      while ((long *****)unaff_x21 != unaff_x22) {
        unaff_x21 = unaff_x21 + -4;
        FUN_10ab2b038(unaff_x21);
      }
      param_1[0x34] = (undefined *)unaff_x22;
    }
    ppuStack_1c0 = param_1;
    FUN_10ab315d4(&ppplStack_b0);
    if ((uint)ppppplVar7 != 0) {
      unaff_x23 = (undefined *)0x0;
      pppuStack_1c8 = &ppuStack_180;
      pppuStack_1d0 = &ppuStack_140;
      unaff_x24 = (long *****)&UNK_10f68ffe7;
      unaff_x26 = FUN_10ab31d20;
      param_1 = &PTR_FUN_110c486f0;
      do {
        ppuVar13 = &PTR_DAT_110c48288;
        (*(code *)(*param_2)[0x43])(param_2,unaff_x23);
        param_3 = unaff_x24;
        (*(code *)(*param_2)[0x15])(&pppplStack_1b8,param_2,&PTR_DAT_110c48288,&UNK_10f68ffe7,0);
        uVar16 = uStack_1b0;
        if (-1 < (char)bStack_1a1) {
          uVar16 = (ulong)bStack_1a1;
        }
        iVar17 = (int)unaff_x23;
        if (uVar16 == 10) {
          ppppplVar8 = (long *****)pppplStack_1b8;
          if (-1 < (char)bStack_1a1) {
            ppppplVar8 = &pppplStack_1b8;
          }
          if (*ppppplVar8 == (long ****)0x696d6146746e6f66 && *(short *)(ppppplVar8 + 1) == 0x796c)
          {
            pcStack_188 = FUN_10ab31d20;
            ppuStack_180 = &PTR_FUN_110c486f0;
            ppuStack_178 = ppuStack_1c0;
            ppuStack_108 = (undefined **)FUN_10ab31d20;
            ppuStack_100 = &PTR_FUN_110c486f0;
            puStack_f0 = (undefined *)CONCAT44(uStack_16c,iVar17);
            ppuStack_f8 = ppuStack_1c0;
            uStack_b8 = CONCAT17(3,(undefined7)uStack_b8);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,0x666572);
            ppplStack_b0 = (long ***)FUN_10ab31ae0;
            ppuStack_a8 = &PTR_FUN_110c486d8;
            puVar10 = (undefined8 *)0x58;
            iStack_170 = iVar17;
            __Znwm();
            *puVar10 = FUN_10ab31d20;
            puVar10[1] = &PTR_FUN_110c486f0;
            puVar10[3] = CONCAT44(uStack_16c,iStack_170);
            puVar10[2] = ppuStack_178;
            puVar10[9] = uStack_c0;
            puVar10[8] = uStack_c8;
            puVar10[10] = uStack_b8;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            puStack_a0 = puVar10;
            func_0x000107c2b054(auStack_1a0,&UNK_10f68ffe7);
            param_3 = (long *****)&ppplStack_b0;
            ppuVar13 = &PTR_DAT_110c482a8;
            (*(code *)(*param_2)[0x4a])(param_2,&PTR_DAT_110c482a8,param_3,0,auStack_1a0);
            if (cStack_189 < '\0') {
              __ZdlPv(auStack_1a0[0]);
            }
            (*(code *)*ppuStack_a8)(&ppuStack_a8);
            if (uStack_b8 < 0) {
              __ZdlPv(uStack_c8);
            }
            (*(code *)*ppuStack_100)(&ppuStack_100);
            pppuVar9 = pppuStack_1c8;
            unaff_x27 = unaff_x24;
LAB_10ab1cc98:
            (*(code *)**pppuVar9)();
          }
        }
        else if (uVar16 == 4) {
          ppppplVar8 = (long *****)pppplStack_1b8;
          if (-1 < (char)bStack_1a1) {
            ppppplVar8 = &pppplStack_1b8;
          }
          if (*(int *)ppppplVar8 == 0x746e6f66) {
            unaff_x27 = param_2;
            (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110c47800,400);
            ppppplVar8 = param_2;
            (*(code *)(*param_2)[0xb])(param_2,&PTR_s_italic_110c482c8,0);
            ppplStack_148 = (long ***)FUN_10ab31978;
            ppuStack_140 = &PTR_FUN_110c486c0;
            ppuStack_138 = ppuStack_1c0;
            uStack_12c = SUB84(unaff_x27,0);
            uStack_128 = SUB81(ppppplVar8,0);
            param_3 = (long *****)&ppplStack_148;
            ppuVar13 = &PTR_DAT_110c482a8;
            iStack_130 = iVar17;
            FUN_10ab1cdf4(param_2);
            pppuVar9 = pppuStack_1d0;
            goto LAB_10ab1cc98;
          }
        }
        unaff_x25 = 0x746e6f66;
        unaff_x22 = &pppplStack_1b8;
        unaff_x21 = &PTR_DAT_110c48288;
        (*(code *)(*param_2)[0x44])(param_2);
        if ((char)bStack_1a1 < '\0') {
          __ZdlPv(pppplStack_1b8);
        }
        unaff_x23 = (undefined *)(ulong)(iVar17 + 1U);
      } while ((uint)ppppplVar7 != iVar17 + 1U);
    }
    (*(code *)(*param_2)[0x44])();
    pppplStack_1e8 = (long ****)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ab315d4(&ppplStack_b0);
  ppppplVar7 = (long *****)pppplStack_1e8;
  __Unwind_Resume();
  pcStack_1d8 = FUN_10ab1cdf4;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_2b0 = (long ***)*param_3;
  pppplStack_210 = (long ****)unaff_x24;
  puStack_208 = unaff_x23;
  pppplStack_200 = (long ****)unaff_x22;
  pppplStack_1f8 = (long ****)unaff_x21;
  ppuStack_1f0 = param_1;
  puStack_1e0 = &stack0xfffffffffffffff0;
  (*(code *)param_3[1][2])(apuStack_2a8,param_3 + 1);
  FUN_109ffe064(&lStack_270,*ppuVar13,ppuVar13[1]);
  pcStack_258 = FUN_10ab31738;
  ppuStack_250 = &PTR_FUN_110c486a8;
  puVar10 = (undefined8 *)0x58;
  __Znwm();
  *puVar10 = ppplStack_2b0;
  (*(code *)apuStack_2a8[0][2])(puVar10 + 1,apuStack_2a8);
  puVar10[9] = uStack_268;
  puVar10[8] = lStack_270;
  puVar10[10] = lStack_260;
  uStack_268 = 0;
  lStack_260 = 0;
  lStack_270 = 0;
  puStack_248 = puVar10;
  func_0x000107c2b054(auStack_2c8,&UNK_10f68ffe7);
  (*(code *)(*ppppplVar7)[0x4a])(ppppplVar7,ppuVar13,&pcStack_258,0,auStack_2c8);
  if (cStack_2b1 < '\0') {
    __ZdlPv(auStack_2c8[0]);
  }
  (*(code *)*ppuStack_250)(&ppuStack_250);
  if (lStack_260 < 0) {
    __ZdlPv(lStack_270);
  }
  ppuVar11 = apuStack_2a8;
  (*(code *)*apuStack_2a8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_2b1 < '\0') {
    __ZdlPv(auStack_2c8[0]);
  }
  (*(code *)*ppuStack_250)(&ppuStack_250);
  if (lStack_260 < 0) {
    __ZdlPv(lStack_270);
  }
  (*(code *)*apuStack_2a8[0])(apuStack_2a8);
  ppuVar12 = ppuVar11;
  __Unwind_Resume();
  pcStack_2d8 = FUN_10ab1cfac;
  puVar14 = ppuVar12[10];
  uStack_330 = unaff_x28;
  pppplStack_328 = (long ****)unaff_x27;
  pcStack_320 = unaff_x26;
  uStack_318 = unaff_x25;
  pppplStack_310 = (long ****)unaff_x24;
  ppcStack_308 = &pcStack_258;
  ppplStack_300 = (long ***)&ppplStack_2b0;
  puStack_2f8 = puVar10;
  pppplStack_2f0 = (long ****)ppppplVar7;
  ppuStack_2e8 = ppuVar11;
  ppuStack_2e0 = &puStack_1e0;
  FUN_10ab1b234(&lStack_350);
  uStack_368 = 0;
  lStack_360 = 0;
  lStack_358 = 0;
  puVar10 = ppuVar12[0x33];
  puVar4 = ppuVar12[0x34];
  lVar18 = (long)puVar4 - (long)puVar10;
  if (lVar18 != 0) {
    uVar16 = lVar18 >> 5;
    if (uVar16 >> 0x3b != 0) {
      FUN_10ab2af14();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab1d0c0);
      (*pcVar6)();
    }
    FUN_10ab2af28();
    lVar18 = 0;
    lStack_358 = uVar16 + (long)puVar14 * 0x20;
    uStack_368 = uVar16;
    do {
      puVar2 = (undefined1 *)(uVar16 + lVar18);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
      FUN_10ab2b038(puVar2);
      uVar5 = *(uint *)((long)puVar10 + lVar18 + 0x18);
      if (uVar5 != 0xffffffff) {
        puStack_338 = puVar2;
        (*(code *)(&PTR_FUN_110c482e8)[uVar5])(&puStack_338,(long)puVar10 + lVar18);
        *(uint *)(puVar2 + 0x18) = uVar5;
      }
      lVar18 = lVar18 + 0x20;
    } while ((undefined8 *)((long)puVar10 + lVar18) != puVar4);
    lStack_360 = uVar16 + lVar18;
  }
  FUN_10ab1bb7c(lStack_350 + 0x198,&uStack_368);
  FUN_10ab2b118(&uStack_368);
  extraout_x8[1] = lStack_348;
  *extraout_x8 = lStack_350;
  return;
}



/* Entry: 10ab1cdf4; end: 10ab1cfab;  */

void FUN_10ab1cdf4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *extraout_x8;
  long lVar9;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_168;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 *apuStack_d8 [7];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_d8,param_3 + 1);
  FUN_109ffe064(&uStack_a0,*param_2,param_2[1]);
  pcStack_88 = FUN_10ab31738;
  ppuStack_80 = &PTR_FUN_110c486a8;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = uStack_e0;
  (*(code *)apuStack_d8[0][2])(puVar5 + 1,apuStack_d8);
  puVar5[9] = uStack_98;
  puVar5[8] = uStack_a0;
  puVar5[10] = lStack_90;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  puStack_78 = puVar5;
  func_0x000107c2b054(auStack_f8,&UNK_10f68ffe7);
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_88,0,auStack_f8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  ppuVar6 = apuStack_d8;
  (*(code *)*apuStack_d8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  (*(code *)*apuStack_d8[0])(apuStack_d8);
  __Unwind_Resume();
  puVar8 = ppuVar6[10];
  FUN_10ab1b234(&lStack_180);
  uStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  puVar5 = ppuVar6[0x33];
  puVar2 = ppuVar6[0x34];
  lVar9 = (long)puVar2 - (long)puVar5;
  if (lVar9 != 0) {
    uVar7 = lVar9 >> 5;
    if (uVar7 >> 0x3b != 0) {
      FUN_10ab2af14();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab1d0c0);
      (*pcVar4)();
    }
    FUN_10ab2af28();
    lVar9 = 0;
    lStack_188 = uVar7 + (long)puVar8 * 0x20;
    uStack_198 = uVar7;
    do {
      puVar1 = (undefined1 *)(uVar7 + lVar9);
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      FUN_10ab2b038(puVar1);
      uVar3 = *(uint *)((long)puVar5 + lVar9 + 0x18);
      if (uVar3 != 0xffffffff) {
        puStack_168 = puVar1;
        (*(code *)(&PTR_FUN_110c482e8)[uVar3])(&puStack_168,(long)puVar5 + lVar9);
        *(uint *)(puVar1 + 0x18) = uVar3;
      }
      lVar9 = lVar9 + 0x20;
    } while ((undefined8 *)((long)puVar5 + lVar9) != puVar2);
    lStack_190 = uVar7 + lVar9;
  }
  FUN_10ab1bb7c(lStack_180 + 0x198,&uStack_198);
  FUN_10ab2b118(&uStack_198);
  extraout_x8[1] = lStack_178;
  *extraout_x8 = lStack_180;
  return;
}



/* Entry: 10ab1cfac; end: 10ab1d117;  */

void FUN_10ab1cfac(long *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_68;
  
  lVar7 = *(long *)(param_2 + 0x50);
  FUN_10ab1b234(&lStack_80);
  uStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lVar2 = *(long *)(param_2 + 0x198);
  lVar3 = *(long *)(param_2 + 0x1a0);
  lVar8 = lVar3 - lVar2;
  if (lVar8 != 0) {
    uVar6 = lVar8 >> 5;
    if (uVar6 >> 0x3b != 0) {
      FUN_10ab2af14();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab1d0c0);
      (*pcVar5)();
    }
    FUN_10ab2af28();
    lVar8 = 0;
    lStack_88 = uVar6 + lVar7 * 0x20;
    uStack_98 = uVar6;
    do {
      puVar1 = (undefined1 *)(uVar6 + lVar8);
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      FUN_10ab2b038(puVar1);
      uVar4 = *(uint *)(lVar2 + lVar8 + 0x18);
      if (uVar4 != 0xffffffff) {
        puStack_68 = puVar1;
        (*(code *)(&PTR_FUN_110c482e8)[uVar4])(&puStack_68,lVar2 + lVar8);
        *(uint *)(puVar1 + 0x18) = uVar4;
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar2 + lVar8 != lVar3);
    lStack_90 = uVar6 + lVar8;
  }
  FUN_10ab1bb7c(lStack_80 + 0x198,&uStack_98);
  FUN_10ab2b118(&uStack_98);
  param_1[1] = lStack_78;
  *param_1 = lStack_80;
  return;
}



/* Entry: 10ab1d118; end: 10ab1d183;  */

undefined1  [16] FUN_10ab1d118(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f645c6c;
  return auVar1;
}



/* Entry: 10ab1d184; end: 10ab1d477;  */

void FUN_10ab1d184(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c48708;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0xf;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0xf;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *puVar6 = 0x696d6146746e6f46;
  *(undefined8 *)((long)puVar6 + 7) = 0x7972746e45796c69;
  *(undefined1 *)((long)puVar6 + 0xf) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f6903fe;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x164;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c48708;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f6903fe,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"font",FUN_10ab31e24,FUN_10ab31f40);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0d4,FUN_10ab32168,FUN_10ab32224);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"italic",FUN_10ab322e4,FUN_10ab3239c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    puStack_78 = *(undefined **)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f6903fe,0xf);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_a0 = &UNK_10f6903fe;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68ffe7;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&puStack_a0);
    uVar5 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab1d474;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10ab3245c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab1d474:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab1d478);
  (*pcVar4)();
}



/* Entry: 10ab1d478; end: 10ab1dbd3;  */

void FUN_10ab1d478(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f645c6c,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c47f08;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c47f08;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f47bb2f,FUN_10ab32670,FUN_10ab32720);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69040e,FUN_10ab32a90,FUN_10ab32b40);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f477c20,FUN_10ab32bf8,FUN_10ab32ca8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f690419,FUN_10ab32d60,FUN_10ab32e10);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"light",FUN_10ab32ec8,FUN_10ab32f78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69042a,FUN_10ab33030,FUN_10ab330e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"regular",FUN_10ab33198,FUN_10ab33248);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f690436,FUN_10ab33300,FUN_10ab333b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"medium",FUN_10ab33468,FUN_10ab33518);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f690444,FUN_10ab335d0,FUN_10ab33680);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f690451,FUN_10ab33738,FUN_10ab337e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69045a,FUN_10ab338a0,FUN_10ab33950);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"bold",FUN_10ab33a08,FUN_10ab33ab8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f690469,FUN_10ab33b70,FUN_10ab33c20);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f690474,FUN_10ab33cd8,FUN_10ab33d88);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69047e,FUN_10ab33e40,FUN_10ab33ef0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"heavy",FUN_10ab33fa8,FUN_10ab34058);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69048e,FUN_10ab34110,FUN_10ab341c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"entries",FUN_10ab34278,FUN_10ab344fc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"familyName",FUN_10ab349c4,FUN_10ab34aa4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f645c6c,0x10);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f69049a;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68ffe7;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab1dbb4;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10ab34c08,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab1dbb4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab1dbb8);
  (*pcVar6)();
}



/* Entry: 10ab1dbd4; end: 10ab1e133;  */

/* WARNING: Removing unreachable block (ram,0x00010ab1df38) */
/* WARNING: Removing unreachable block (ram,0x00010ab1df3c) */
/* WARNING: Removing unreachable block (ram,0x00010ab1df44) */
/* WARNING: Removing unreachable block (ram,0x00010ab1df4c) */
/* WARNING: Removing unreachable block (ram,0x00010ab1df50) */

void FUN_10ab1dbd4(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  undefined *****pppppuVar3;
  undefined *****pppppuVar4;
  long *plVar5;
  undefined *****pppppuVar6;
  undefined4 uVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  long lVar10;
  undefined *****pppppuVar11;
  undefined *****pppppuVar12;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined ****ppppuStack_120;
  undefined ****ppppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined ****ppppuStack_f0;
  undefined ****ppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined ***apppuStack_c8 [8];
  undefined ****ppppuStack_88;
  undefined ****ppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    plVar5 = (long *)0x1e8;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110c487b0;
    ppppuVar9 = (undefined ****)(plVar5 + 3);
    FUN_10ab34e68(ppppuVar9,0);
    ppppuStack_e0 = ppppuVar9;
    ppppuStack_d8 = (undefined ****)plVar5;
    func_0x00010ab34f3c(&ppppuStack_e0,plVar5 + 8);
    uVar7 = SUB84(ppppuVar9,0);
    pppppuVar11 = &ppppuStack_e0;
    FUN_10ab34d04(&ppppuStack_f0);
    ppppuVar9 = ppppuStack_d8;
    if (ppppuStack_d8 != (undefined ****)0x0) {
      plVar5 = (long *)(ppppuStack_d8 + 1);
      do {
        lVar10 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)((long)*ppppuStack_d8 + 0x10))(ppppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
      }
    }
    if ((undefined *****)ppppuStack_e8 == (undefined *****)0x0) {
      ppppuStack_d8 = (undefined ****)0x0;
    }
    else {
      pppppuVar12 = (undefined *****)(ppppuStack_e8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
        if (bVar2) {
          *pppppuVar12 = (undefined ****)((long)*pppppuVar12 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppppuStack_d8 = ppppuStack_e8;
      if ((undefined *****)ppppuStack_e8 != (undefined *****)0x0) {
        pppppuVar12 = (undefined *****)(ppppuStack_e8 + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
          if (bVar2) {
            *pppppuVar12 = (undefined ****)((long)*pppppuVar12 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    ppppuStack_88 = (undefined ****)&UNK_1053a6a3c;
    apppuStack_c8[0] = (undefined ***)&PTR_DAT_110c487f0;
    uStack_d0 = 0x10ab3511c;
    ppppuStack_e0 = ppppuStack_f0;
    ppppuStack_80 = (undefined ****)&PTR_DAT_110ae9180;
    FUN_10a044790(&ppppuStack_88);
    (*(code *)*ppppuStack_80)(&ppppuStack_80);
    ppppuVar9 = ppppuStack_e8;
    if ((undefined *****)ppppuStack_e8 != (undefined *****)0x0) {
      pppppuVar12 = (undefined *****)(ppppuStack_e8 + 1);
      do {
        ppppuVar8 = *pppppuVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
        if (bVar2) {
          *pppppuVar12 = (undefined ****)((long)ppppuVar8 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppuVar8 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_e8)[2])(ppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
      }
    }
    pppppuVar12 = &ppppuStack_e0;
    param_1[1] = ppppuStack_d8;
    *param_1 = ppppuStack_e0;
    if ((undefined *****)ppppuStack_d8 != (undefined *****)0x0) {
      pppppuVar3 = (undefined *****)(ppppuStack_d8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
        if (bVar2) {
          *pppppuVar3 = (undefined ****)((long)*pppppuVar3 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a044790(&uStack_d0);
    pppppuVar3 = (undefined *****)apppuStack_c8;
    (*(code *)*apppuStack_c8[0])();
    pppppuVar4 = (undefined *****)ppppuStack_d8;
    if ((undefined *****)ppppuStack_d8 != (undefined *****)0x0) {
      pppppuVar6 = (undefined *****)(ppppuStack_d8 + 1);
      do {
        ppppuVar9 = *pppppuVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
        if (bVar2) {
          *pppppuVar6 = (undefined ****)((long)ppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppuVar9 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_d8)[2])(ppppuStack_d8);
        pppppuVar3 = pppppuVar4;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  else {
    pppppuVar12 = *(undefined ******)(param_2 + 0x858);
    pppppuVar11 = *(undefined ******)(param_2 + 0x860);
    if (pppppuVar11 != (undefined *****)0x0) {
      pppppuVar3 = pppppuVar11 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
        if (bVar2) {
          *pppppuVar3 = (undefined ****)((long)*pppppuVar3 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuVar3 = (undefined *****)0x1d0;
    ppppuStack_100 = (undefined ****)pppppuVar12;
    ppppuStack_f8 = (undefined ****)pppppuVar11;
    __Znwm();
    FUN_10ab34e68();
    ppppuStack_f0 = (undefined ****)pppppuVar12;
    ppppuStack_e8 = (undefined ****)pppppuVar11;
    if (pppppuVar11 != (undefined *****)0x0) {
      pppppuVar4 = pppppuVar11 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar4,0x10);
        if (bVar2) {
          *pppppuVar4 = (undefined ****)((long)*pppppuVar4 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pppppuVar4 = pppppuVar11 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar4,0x10);
        if (bVar2) {
          *pppppuVar4 = (undefined ****)((long)*pppppuVar4 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar4,0x10);
        if (bVar2) {
          *pppppuVar4 = (undefined ****)((long)*pppppuVar4 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
    }
    pppppuVar4 = (undefined *****)0x30;
    ppppuStack_e0 = (undefined ****)pppppuVar3;
    ppppuStack_88 = (undefined ****)pppppuVar12;
    ppppuStack_80 = (undefined ****)pppppuVar11;
    __Znwm();
    ppppuStack_88 = (undefined ****)0x0;
    ppppuStack_80 = (undefined ****)0x0;
    *pppppuVar4 = (undefined ****)&PTR_DAT_110c48750;
    pppppuVar4[1] = (undefined ****)0x0;
    pppppuVar4[2] = (undefined ****)0x0;
    pppppuVar4[3] = (undefined ****)pppppuVar3;
    pppppuVar4[4] = (undefined ****)pppppuVar12;
    pppppuVar4[5] = (undefined ****)pppppuVar11;
    ppppuStack_d8 = (undefined ****)pppppuVar4;
    func_0x00010ab34f3c(&ppppuStack_e0,pppppuVar3 + 5);
    uVar7 = SUB84(pppppuVar3,0);
    pppppuVar11 = &ppppuStack_e0;
    FUN_10ab34d04(param_1);
    ppppuVar9 = ppppuStack_d8;
    if ((undefined *****)ppppuStack_d8 != (undefined *****)0x0) {
      pppppuVar12 = (undefined *****)(ppppuStack_d8 + 1);
      do {
        ppppuVar8 = *pppppuVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
        if (bVar2) {
          *pppppuVar12 = (undefined ****)((long)ppppuVar8 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppuVar8 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_d8)[2])(ppppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
      }
    }
    if (ppppuStack_80 != (undefined ****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppppuVar12 = (undefined *****)ppppuStack_e8;
    if ((undefined *****)ppppuStack_e8 != (undefined *****)0x0) {
      pppppuVar3 = (undefined *****)(ppppuStack_e8 + 1);
      do {
        ppppuVar9 = *pppppuVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
        if (bVar2) {
          *pppppuVar3 = (undefined ****)((long)ppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppuVar9 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_e8)[2])(ppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar12);
      }
    }
    pppppuVar3 = (undefined *****)ppppuStack_100;
    if (((undefined *****)ppppuStack_100 != (undefined *****)0x0) &&
       (pppppuVar4 = (undefined *****)*param_1, pppppuVar4 != (undefined *****)0x0)) {
      ppppuStack_d8 = (undefined ****)param_1[1];
      if ((undefined *****)ppppuStack_d8 != (undefined *****)0x0) {
        pppppuVar11 = (undefined *****)(ppppuStack_d8 + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
          if (bVar2) {
            *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppppuVar11 = &ppppuStack_e0;
      ppppuStack_e0 = (undefined ****)pppppuVar4;
      FUN_10aa88c30();
      pppppuVar4 = (undefined *****)ppppuStack_d8;
      if ((undefined *****)ppppuStack_d8 != (undefined *****)0x0) {
        pppppuVar6 = (undefined *****)(ppppuStack_d8 + 1);
        do {
          ppppuVar9 = *pppppuVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
          if (bVar2) {
            *pppppuVar6 = (undefined ****)((long)ppppuVar9 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (ppppuVar9 == (undefined ****)0x0) {
          (*(code *)(*ppppuStack_d8)[2])(ppppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppuVar3 = pppppuVar4;
        }
      }
    }
    pppppuVar4 = (undefined *****)ppppuStack_f8;
    if ((undefined *****)ppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar6 = (undefined *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar9 = *pppppuVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
        if (bVar2) {
          *pppppuVar6 = (undefined ****)((long)ppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppuVar9 == (undefined ****)0x0) {
        pppppuVar3 = (undefined *****)ppppuStack_f8;
        (*(code *)(*ppppuStack_f8)[2])();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppppuVar4);
          return;
        }
        goto LAB_10ab1e06c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10ab1e06c:
  ___stack_chk_fail();
  func_0x00010a0536d4(&ppppuStack_e0);
  FUN_10a1f586c(pppppuVar4);
  FUN_10a054c5c(&ppppuStack_100);
  __Unwind_Resume();
  pcStack_108 = FUN_10ab1e134;
  pppppuVar6 = pppppuVar11 + 0x36;
  uStack_128 = uVar7;
  uStack_124 = param_4;
  ppppuStack_120 = (undefined ****)pppppuVar12;
  ppppuStack_118 = (undefined ****)pppppuVar4;
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_10ab2b1e0(pppppuVar6,&uStack_128);
  if (pppppuVar11 + 0x37 == pppppuVar6) {
    *pppppuVar3 = (undefined ****)0x0;
    pppppuVar3[1] = (undefined ****)0x0;
  }
  else {
    ppppuVar9 = pppppuVar6[6];
    ppppuVar8 = pppppuVar6[5];
    pppppuVar3[1] = pppppuVar6[6];
    *pppppuVar3 = ppppuVar8;
    if (ppppuVar9 != (undefined ****)0x0) {
      ppppuVar9 = ppppuVar9 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppuVar9,0x10);
        if (bVar2) {
          *ppppuVar9 = (undefined ***)((long)*ppppuVar9 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 10ab1e134; end: 10ab1e1a7;  */

void FUN_10ab1e134(undefined8 *param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  lVar4 = param_2 + 0x1b0;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e1a8; end: 10ab1e47f;  */

void FUN_10ab1e1a8(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  ushort *puVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  long *plVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *extraout_x8;
  undefined8 uVar17;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  
  plVar9 = &lStack_c0;
  plVar10 = &lStack_c0;
  plVar14 = &lStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ab1e480(*(undefined8 *)(param_1 + 0x50),*param_4);
  if (*param_4 != 0) {
    lVar15 = param_1 + 0x1b0;
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    uStack_60._0_5_ = CONCAT14((char)param_3,(int)param_2);
    lStack_c0 = lVar15;
    FUN_10ab352b8(lVar15,param_2,param_3,&uStack_60);
    plVar12 = param_4;
    FUN_10a1e8610(lVar15 + 0x28);
    FUN_10ab35154();
    goto LAB_10ab1e22c;
  }
  plVar1 = (long *)(param_1 + 0x1b0);
  plVar9 = plVar1;
  plVar12 = param_2;
  FUN_10ab35404(plVar1,param_2,param_3);
  if ((long *)(param_1 + 0x1b8) == plVar9) goto LAB_10ab1e22c;
  param_4 = (long *)plVar9[6];
  lStack_58 = plVar9[6];
  uStack_60 = plVar9[5];
  if (param_4 != (long *)0x0) {
    plVar9 = param_4 + 1;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010a1bd170(&lStack_c0);
  func_0x00010a1bd170(&lStack_c0);
  plVar9 = plVar1;
  FUN_10ab35404(plVar1,param_2,param_3);
  plVar12 = param_2;
  if ((long *)(param_1 + 0x1b8) != plVar9) {
    plVar12 = plVar9;
    plVar6 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar16 = (long *)plVar12[2];
        bVar7 = (long *)*plVar16 != plVar12;
        plVar12 = plVar16;
      } while (bVar7);
    }
    else {
      do {
        plVar16 = plVar6;
        plVar6 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
    if ((long *)*plVar1 == plVar9) {
      *plVar1 = (long)plVar16;
    }
    *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + -1;
    plVar12 = plVar9;
    FUN_10a04815c(*(undefined8 *)(param_1 + 0x1b8));
    func_0x00010a1ff0cc(plVar9 + 5);
    __ZdlPv();
  }
  uVar5 = uRam000000011330276a;
  puVar2 = (ushort *)((long)plVar1 + (0x139 - (ulong)uRam000000011330276a));
  uVar3 = *puVar2;
  if ((uVar3 >> 8 & 1) == 0) {
    if (((*(long *)((long)plVar1 + (0x110 - (ulong)uRam000000011330276a)) == 0) &&
        ((uVar3 >> 9 & 1) == 0)) &&
       (*(long *)((long)plVar1 + (0x130 - (ulong)uRam000000011330276a)) == 0)) {
      *(long *)((long)plVar1 + (0xf0 - (ulong)uRam000000011330276a)) =
           *(long *)((long)plVar1 + (0xf0 - (ulong)uRam000000011330276a)) + 1;
      goto LAB_10ab1e3dc;
    }
    func_0x00010a1bd170();
    plVar9 = plVar10;
    if (((ulong)plVar10 & 1) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      lStack_c0 = 0;
      ppuStack_68 = &PTR_DAT_110c48808;
      uVar11 = (ulong)&lStack_c0 | 8;
      FUN_10a0dad0c(uVar11,&ppuStack_68);
      if (((*puVar2 >> 8 & 1) != 0) && (FUN_10a1bd5e0(), uVar11 != 0)) {
        FUN_10a1bd648();
      }
      plVar9 = (long *)((long)plVar1 + (0xe0 - (ulong)uVar5));
      FUN_10a1c054c();
      plVar12 = plVar14;
    }
  }
  else {
LAB_10ab1e3dc:
    if ((*(undefined ***)((long)plVar1 + (0x140 - (ulong)uVar5)) != &PTR_DAT_110c48808) &&
       (FUN_10a1bd5e0(), plVar9 != (long *)0x0)) {
      plVar12 = (long *)((long)plVar1 + (0xe0 - (ulong)uVar5));
      FUN_10a1bd648();
      *(undefined ***)((long)plVar1 + (0x140 - (ulong)uVar5)) = &PTR_DAT_110c48808;
    }
  }
  if (param_4 != (long *)0x0) {
    plVar10 = param_4 + 1;
    do {
      lVar15 = *plVar10;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      plVar9 = param_4;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
LAB_10ab1e22c:
  *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar12 != 0) {
    func_0x000104bd46a0();
    func_0x00010a1ff0cc(&uStack_60);
  }
  plVar10 = plVar9;
  __Unwind_Resume();
  pcStack_c8 = FUN_10ab1e480;
  if ((((plVar10 != (long *)0x0) && (plVar12 != (long *)0x0)) &&
      (0x173 < *(int *)(plVar10[0x144] + 0x18))) &&
     (puStack_d0 = &stack0xfffffffffffffff0, FUN_10ab19a64(), (int)plVar12 != 0)) {
    puVar13 = &UNK_10f691be4;
    FUN_10a3ee510();
    pcStack_d8 = FUN_10ab1e4c0;
    uStack_f8 = 100;
    uStack_f4 = 0;
    puVar8 = puVar13 + 0x1b0;
    plStack_f0 = param_4;
    plStack_e8 = plVar9;
    puStack_e0 = (undefined1 *)&puStack_d0;
    FUN_10ab2b1e0(puVar8,&uStack_f8);
    if (puVar13 + 0x1b8 == puVar8) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
    }
    else {
      lVar15 = *(long *)(puVar8 + 0x30);
      uVar17 = *(undefined8 *)(puVar8 + 0x28);
      extraout_x8[1] = *(undefined8 *)(puVar8 + 0x30);
      *extraout_x8 = uVar17;
      if (lVar15 != 0) {
        plVar9 = (long *)(lVar15 + 8);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    return;
  }
  return;
}



/* Entry: 10ab1e480; end: 10ab1e4bf;  */

void FUN_10ab1e480(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 uVar7;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (0x173 < *(int *)(*(long *)(param_1 + 0xa20) + 0x18)))
     && (FUN_10ab19a64(), (int)param_2 != 0)) {
    puVar5 = &UNK_10f691be4;
    FUN_10a3ee510();
    uStack_38 = 100;
    uStack_34 = 0;
    puVar4 = puVar5 + 0x1b0;
    FUN_10ab2b1e0(puVar4,&uStack_38);
    if (puVar5 + 0x1b8 == puVar4) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
    }
    else {
      lVar6 = *(long *)(puVar4 + 0x30);
      uVar7 = *(undefined8 *)(puVar4 + 0x28);
      extraout_x8[1] = *(undefined8 *)(puVar4 + 0x30);
      *extraout_x8 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    return;
  }
  return;
}



/* Entry: 10ab1e4c0; end: 10ab1e4d3;  */

void FUN_10ab1e4c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 100;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e4d4; end: 10ab1e55b;  */

void FUN_10ab1e4d4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,100,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1e55c; end: 10ab1e56f;  */

void FUN_10ab1e55c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 100;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e570; end: 10ab1e5f7;  */

void FUN_10ab1e570(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,100,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1e5f8; end: 10ab1e60b;  */

void FUN_10ab1e5f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 200;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e60c; end: 10ab1e693;  */

void FUN_10ab1e60c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,200,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1e694; end: 10ab1e6a7;  */

void FUN_10ab1e694(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 200;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e6a8; end: 10ab1e72f;  */

void FUN_10ab1e6a8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,200,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1e730; end: 10ab1e743;  */

void FUN_10ab1e730(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 300;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e744; end: 10ab1e7cb;  */

void FUN_10ab1e744(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,300,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1e7cc; end: 10ab1e7df;  */

void FUN_10ab1e7cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 300;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e7e0; end: 10ab1e867;  */

void FUN_10ab1e7e0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,300,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1e868; end: 10ab1e87b;  */

void FUN_10ab1e868(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 400;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e87c; end: 10ab1e903;  */

void FUN_10ab1e87c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,400,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1e904; end: 10ab1e917;  */

void FUN_10ab1e904(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 400;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e918; end: 10ab1e99f;  */

void FUN_10ab1e918(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,400,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1e9a0; end: 10ab1e9b3;  */

void FUN_10ab1e9a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 500;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1e9b4; end: 10ab1ea3b;  */

void FUN_10ab1e9b4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,500,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1ea3c; end: 10ab1ea4f;  */

void FUN_10ab1ea3c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 500;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1ea50; end: 10ab1ead7;  */

void FUN_10ab1ea50(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,500,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1ead8; end: 10ab1eaeb;  */

void FUN_10ab1ead8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 600;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}



/* Entry: 10ab1eaec; end: 10ab1eb73;  */

void FUN_10ab1eaec(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ab1e1a8(param_1,600,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1eb74; end: 10ab1eb87;  */

void FUN_10ab1eb74(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 600;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
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
  }
  return;
}


