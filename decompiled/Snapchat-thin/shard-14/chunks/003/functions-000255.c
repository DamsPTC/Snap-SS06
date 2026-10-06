/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b17f4c8; end: 10b17f6af;  */

undefined1  [16]
FUN_10b17f4c8(long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  double dVar15;
  double unaff_d8;
  undefined1 auVar16 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  pcVar5 = (char *)(param_1 + 0x198);
  func_0x000107c29b34();
  if ((((*pcVar5 == '\x01') && ((param_6 & 1) != 0)) && (0 < (long)param_5)) &&
     (((param_4 & 1) != 0 && (0 < (long)param_3)))) {
    dVar15 = 1.0 - (double)param_5 / (double)param_3;
    bVar3 = false;
    bVar4 = true;
    if (0.0 < dVar15) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(dVar15)) {
        bVar3 = dVar15 == 1.0;
        bVar4 = 1.0 <= dVar15;
      }
    }
    unaff_d8 = dVar15;
    if (!bVar4 || bVar3) {
LAB_10b17f648:
      uVar7 = 1;
      goto LAB_10b17f660;
    }
  }
  uVar13 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar13 != 0) {
    lVar9 = *(long *)(param_1 + 400);
    func_0x00010b1814d4(lVar9 + 0x18);
    __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(lVar9,auStack_60);
    lVar11 = *(long *)(lVar9 + 0x10);
    uStack_68 = 0;
    func_0x00010b1814bc();
    if (lVar11 != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_68,(long *)(lVar9 + 0x10));
      __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_68);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b17f698);
      (*pcVar2)();
    }
    func_0x00010b1814c4();
    plVar12 = *(long **)(lVar9 + 0x98);
    if ((plVar12 != (long *)0x0) && (plVar6 = (long *)(lVar9 + 0xa8), *plVar6 != 0)) {
      func_0x000107c278c4(plVar6,param_2);
      uVar13 = (long)plVar12 - 1;
      if (((ulong)plVar12 & uVar13) == 0) {
        plVar14 = (long *)((ulong)plVar6 & uVar13);
      }
      else {
        plVar14 = plVar6;
        if (plVar12 <= plVar6) {
          uVar1 = 0;
          if (plVar12 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar12;
          }
          plVar14 = (long *)((long)plVar6 - uVar1 * (long)plVar12);
        }
      }
      plVar10 = *(long **)(*(long *)(lVar9 + 0x90) + (long)plVar14 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_10b17f650;
            plVar8 = (long *)plVar10[1];
            if (plVar6 != plVar8) break;
            lVar9 = (long)(plVar10 + 2);
            func_0x000107c278d0(lVar9,param_2);
            if ((int)lVar9 != 0) {
              dVar15 = (double)plVar10[5];
              if (0.0 < dVar15) goto LAB_10b17f648;
              goto LAB_10b17f650;
            }
          }
          if (((ulong)plVar12 & uVar13) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar13);
          }
          else if (plVar12 <= plVar8) {
            uVar1 = 0;
            if (plVar12 != (long *)0x0) {
              uVar1 = (ulong)plVar8 / (ulong)plVar12;
            }
            plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar12);
          }
        } while (plVar8 == plVar14);
      }
    }
  }
LAB_10b17f650:
  uVar7 = 0;
  dVar15 = (double)((ulong)unaff_d8 & 0xffffffffffffff00);
LAB_10b17f660:
  auVar16._8_8_ = uVar7;
  auVar16._0_8_ = dVar15;
  return auVar16;
}



/* Entry: 10b17f6b0; end: 10b17f6cb;  */

undefined8 FUN_10b17f6b0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x1a0);
  FUN_10b17f6cc();
  return *puVar1;
}



/* Entry: 10b17f6cc; end: 10b17f6d3;  */

long FUN_10b17f6cc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  lVar2 = *param_1;
  func_0x00010b1814d4(lVar2 + 0x18);
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(lVar2,auStack_40);
  lVar3 = *(long *)(lVar2 + 0x10);
  uStack_48 = 0;
  func_0x00010b1814bc();
  if (lVar3 == 0) {
    func_0x00010b1814c4();
    return lVar2 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(lVar2 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b180680);
  (*pcVar1)();
}



/* Entry: 10b17f6d4; end: 10b17f70b;  */

void FUN_10b17f6d4(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b153bb4(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b168d78(&uStack_30);
  return;
}



/* Entry: 10b17f70c; end: 10b17f90b;  */

undefined8 * FUN_10b17f70c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110cc1400;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  uStack_88 = 1;
  ppuStack_90 = &PTR_DAT_110cc1490;
  uStack_78 = 2;
  ppuStack_80 = &PTR_DAT_110cc14a8;
  uStack_68 = 1;
  ppuStack_70 = &PTR_DAT_110cc14d0;
  uStack_58 = 2;
  ppuStack_60 = &PTR_DAT_110cc14e8;
  FUN_10b200ab4(param_1 + 0x14,&ppuStack_90,4);
  param_1[0x28] = 0x32aaaba7;
  param_1[0x31] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  uVar1 = 0xc0;
  __Znwm();
  func_0x00010b181440();
  func_0x00010b181480(&PTR_FUN_110cc1560);
  func_0x000107c2805c();
  func_0x00010b1806cc(&ppuStack_90);
  param_1[0x32] = uVar1;
  uVar1 = 0x90;
  __Znwm();
  func_0x00010b181440();
  func_0x00010b181480(&PTR_FUN_110cc15c0);
  func_0x000107c2805c();
  FUN_10b180b48(&ppuStack_90);
  param_1[0x33] = uVar1;
  uStack_98 = 0;
  func_0x000107c29bd8(&uStack_98);
  uVar1 = 0xa0;
  __Znwm();
  func_0x00010b181440();
  func_0x00010b181480(&PTR_FUN_110cc1620);
  func_0x000107c2805c();
  FUN_10b180c80(&ppuStack_90);
  param_1[0x34] = uVar1;
  uStack_98 = 0;
  puVar2 = &uStack_98;
  FUN_10b180d3c(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10b180c80(&ppuStack_90);
  func_0x000107c29c20(param_1 + 0x33);
  FUN_10b180dcc(param_1 + 0x32);
  FUN_10b180200(param_1 + 0x28);
  func_0x00010b180228(param_1 + 0x14);
  do {
    FUN_10b180d70(param_1 + 0xf);
    FUN_10b18052c(param_1 + 1);
    __Unwind_Resume(puVar2);
  } while( true );
}



/* Entry: 10b17f90c; end: 10b17ff8b;  */

undefined1  [16]
FUN_10b17f90c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,long *param_5,
             long param_6)

{
  long **pplVar1;
  ulong *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *plVar12;
  long *plVar13;
  int extraout_w10;
  int extraout_w10_00;
  int *piVar14;
  uint uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long *extraout_x15;
  long *extraout_x15_00;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  ulong *puVar22;
  byte bVar23;
  ulong *puVar24;
  long *plVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  char cStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  
  FUN_10b155ca4(auStack_c0,param_4);
  FUN_10b17a83c(auStack_e0,param_4);
  if (((((char)param_5[7] != '\x01') || ((*(byte *)(param_5 + 4) & 1) == 0)) ||
      (*param_5 == param_5[1])) || ((int)param_5[3] < 1)) {
    if ((*(char *)(param_6 + 0x38) != '\x01') ||
       (plVar25 = *(long **)(param_6 + 0x18),
       *(char *)(param_6 + 0x20) != '\x01' || (long)*(long **)(param_6 + 0x18) < 1)) {
      func_0x00010b17ff8c(param_1,param_2);
      plVar25 = param_1;
    }
    goto LAB_10b17fedc;
  }
  plStack_b0 = param_1;
  if (param_1[0xe] != -1) {
    uStack_98 = &plStack_b0;
    plStack_80 = &uStack_98;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(param_1 + 0xe,&plStack_80,FUN_10b180e00);
  }
  if ((char)param_1[0xd] == '\x01') {
    pplVar1 = (long **)(param_1 + 0x28);
    uStack_98 = pplVar1;
    cStack_90 = (char)param_1[0xd];
    __ZNSt3__15mutex4lockEv(pplVar1);
    plVar25 = param_1 + 0x30;
    plVar19 = (long *)param_1[0x30];
    lStack_78 = param_1[0x31];
    plStack_88 = plVar25;
    plStack_80 = plVar19;
    if (lStack_78 != 0) {
      do {
        func_0x00010b181530();
      } while (extraout_w10 != 0);
    }
    func_0x000107c2798c(&uStack_98);
    if (plVar19 == (long *)0x0) {
      FUN_10b4a1840(&uStack_98);
      if (uStack_98 != (long **)0x0) {
        FUN_10b4a188c(&plStack_b0);
        func_0x00010b180024(&plStack_80,&plStack_b0);
        func_0x00010b181548();
        lStack_a8 = lStack_78;
        plStack_b0 = plStack_80;
        if (lStack_78 != 0) {
          do {
            func_0x00010b181530();
          } while (extraout_w10_00 != 0);
        }
        __ZNSt3__15mutex4lockEv(pplVar1);
        func_0x00010b180024(plVar25,&plStack_b0);
        __ZNSt3__15mutex6unlockEv(pplVar1);
        func_0x00010b181548();
      }
      func_0x000107c27f58(&uStack_98);
      plVar19 = plStack_80;
      if (plStack_80 != (long *)0x0) goto LAB_10b17fa80;
      plVar19 = (long *)0xffffffffffffffff;
    }
    else {
LAB_10b17fa80:
      (**(code **)(*plVar19 + 0x10))();
    }
    func_0x000107c2be30(&plStack_80);
    if ((long)plVar19 < 1) goto LAB_10b17fc80;
    lVar9 = (long)*(char *)((long)param_3 + 0x17);
    if (lVar9 < 0) {
      lVar9 = param_3[1];
      if (lVar9 != 0) {
        puVar7 = (undefined8 *)*param_3;
        goto LAB_10b17faf4;
      }
    }
    else {
      puVar7 = param_3;
      if (*(char *)((long)param_3 + 0x17) != '\0') {
LAB_10b17faf4:
        FUN_10b5d295c(puVar7,lVar9,&plStack_80);
        if ((int)puVar7 != 0) {
          uVar10 = param_1[6];
          puVar11 = (ulong *)(param_1 + 6);
          if ((uVar10 & 1) != 0) {
            puVar11 = (ulong *)(uVar10 + 7);
          }
          puVar22 = puVar11 + (int)param_1[7];
          for (; puVar11 != puVar22; puVar11 = puVar11 + 1) {
            uVar10 = *puVar11;
            lVar9 = (long)*(int *)(uVar10 + 0x10) << 2;
            piVar14 = *(int **)(uVar10 + 0x18);
            while (lVar9 != 0) {
              iVar3 = *piVar14;
              lVar9 = lVar9 + -4;
              piVar14 = piVar14 + 1;
              if (iVar3 == (int)plStack_80) {
                if (*(int *)(uVar10 + 0x30) != 0) {
                  if (*(int *)(uVar10 + 0x30) != 0) {
                    do {
                      func_0x00010b181514();
                      lVar9 = extraout_x12;
                      if (plVar19 <= extraout_x15) {
                        lVar9 = extraout_x13;
                      }
                    } while (lVar9 != 0);
                  }
                  func_0x00010b1814f8();
                  uVar10 = extraout_x8;
                  if ((int)extraout_x8 == 0) goto LAB_10b17fb9c;
                  goto LAB_10b17fc74;
                }
                goto LAB_10b17fb9c;
              }
            }
          }
        }
      }
    }
LAB_10b17fb9c:
    puVar22 = (ulong *)(param_1 + 3);
    puVar11 = puVar22;
    if ((*puVar22 & 1) != 0) {
      puVar11 = (ulong *)(*puVar22 + 7);
    }
    puVar2 = puVar11 + (int)param_1[4];
    for (lVar9 = (long)(int)param_1[4] << 3; puVar24 = puVar2, lVar9 != 0; lVar9 = lVar9 + -8) {
      uVar16 = *puVar11;
      uVar10 = (ulong)uStack_98 >> 0x20;
      uStack_98 = (long **)CONCAT44((int)uVar10,(int)param_2);
      puVar8 = &UNK_10e496048;
      func_0x00010b18054c(&UNK_10e496048,uVar16 + 0x10,&uStack_98);
      puVar24 = puVar11;
      if ((undefined *)(*(long *)(uVar16 + 0x18) + (long)*(int *)(uVar16 + 0x10) * 4) != puVar8)
      break;
      puVar11 = puVar11 + 1;
    }
    if ((param_1[3] & 1U) != 0) {
      puVar22 = (ulong *)(param_1[3] + 7);
    }
    if ((puVar24 == puVar22 + (int)param_1[4]) || (*(int *)(*puVar24 + 0x30) == 0))
    goto LAB_10b17fc80;
    if (*(int *)(*puVar24 + 0x30) != 0) {
      do {
        func_0x00010b181514();
        lVar9 = extraout_x12_00;
        if (plVar19 <= extraout_x15_00) {
          lVar9 = extraout_x13_00;
        }
      } while (lVar9 != 0);
    }
    func_0x00010b1814f8();
    uVar10 = extraout_x8_00;
    if ((int)extraout_x8_00 == 0) goto LAB_10b17fc80;
LAB_10b17fc74:
    bVar4 = false;
    plVar19 = (long *)(uVar10 & 0xffffffff);
  }
  else {
LAB_10b17fc80:
    if ((*(char *)(param_6 + 0x38) != '\x01') ||
       (plVar19 = *(long **)(param_6 + 8), *(char *)(param_6 + 0x10) != '\x01' || (long)plVar19 < 1)
       ) {
      plVar19 = param_1;
      func_0x00010b17ffd8(param_1,param_2);
    }
    bVar4 = true;
  }
  if (*(char *)(param_6 + 0x38) == '\x01') {
    uVar15 = *(uint *)(param_6 + 0x2c) & 0xffffff00;
    bVar23 = *(byte *)(param_6 + 0x34);
    uVar21 = *(uint *)(param_6 + 0x2c) & 0xff;
    dVar30 = (double)*(int *)(param_6 + 0x30);
  }
  else {
    uVar21 = 0;
    uVar15 = 0;
    bVar23 = 0;
    dVar30 = 0.0;
  }
  plVar25 = (long *)param_1[0x10];
  if ((plVar25 != (long *)0x0) && (plVar13 = param_1 + 0x12, *plVar13 != 0)) {
    func_0x000107c278c4(plVar13,param_3);
    uVar10 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar10) == 0) {
      plVar20 = (long *)((ulong)plVar13 & uVar10);
    }
    else {
      plVar20 = plVar13;
      if (plVar25 <= plVar13) {
        uVar16 = 0;
        if (plVar25 != (long *)0x0) {
          uVar16 = (ulong)plVar13 / (ulong)plVar25;
        }
        plVar20 = (long *)((long)plVar13 - uVar16 * (long)plVar25);
      }
    }
    plVar17 = *(long **)(param_1[0xf] + (long)plVar20 * 8);
    if (plVar17 != (long *)0x0) {
      do {
        while( true ) {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_10b17fe90;
          plVar12 = (long *)plVar17[1];
          if (plVar13 != plVar12) break;
          lVar9 = (long)(plVar17 + 2);
          func_0x000107c278d0(lVar9,param_3);
          if ((int)lVar9 != 0) {
            lVar9 = plVar17[5];
            if (lVar9 != 0) {
              dVar26 = 1.0;
              if (((bVar23 & 1) != 0) &&
                 (((!bVar4 || (*(char *)(lVar9 + 0x24) == '\x01')) && (*(int *)(lVar9 + 0x3c) == 2))
                 )) {
                lVar18 = *(long *)(lVar9 + 0x30);
                dVar26 = (double)*(float *)(lVar18 + 0x10);
                if (*(float *)(lVar18 + 0x10) <= 0.0) {
                  dVar26 = 1.0;
                }
                dVar29 = (double)*(float *)(lVar18 + 0x14);
                if (*(float *)(lVar18 + 0x14) <= 0.0) {
                  dVar29 = 1.0;
                }
                dVar26 = dVar26 * (double)(int)(uVar15 | uVar21);
                dVar30 = -((double)*(float *)(lVar18 + 0x1c) *
                          (SQRT(dVar30 * dVar29 * dVar30 * dVar29 + dVar26 * dVar26) -
                          (double)*(float *)(lVar18 + 0x18)));
                _exp();
                fVar28 = *(float *)(lVar18 + 0x20);
                fVar27 = *(float *)(lVar18 + 0x24);
                bVar4 = false;
                bVar5 = true;
                bVar6 = false;
                if (dVar30 < (double)fVar28) {
                  bVar4 = false;
                  bVar5 = false;
                  bVar6 = true;
                  if (!NAN(fVar28)) {
                    bVar4 = fVar28 < 0.0;
                    bVar5 = fVar28 == 0.0;
                    bVar6 = false;
                  }
                }
                dVar29 = (double)fVar28;
                if (bVar5 || bVar4 != bVar6) {
                  dVar29 = dVar30;
                }
                bVar4 = true;
                bVar5 = false;
                if (0.0 < fVar27) {
                  bVar4 = false;
                  bVar5 = true;
                  if (!NAN(fVar27) && !NAN(fVar28)) {
                    bVar4 = fVar27 < fVar28;
                    bVar5 = false;
                  }
                }
                dVar26 = dVar29;
                if ((bVar4 == bVar5) && (dVar26 = (double)fVar27, dVar29 <= (double)fVar27)) {
                  dVar26 = dVar29;
                }
              }
              plVar13 = (long *)(ulong)*(uint *)(lVar9 + 0x28);
              plVar25 = (long *)(long)(dVar26 * (double)(long)plVar19);
              if (*(uint *)(lVar9 + 0x28) != 0) {
                lVar18 = 0;
                if (plVar13 != (long *)0x0) {
                  lVar18 = (long)(dVar26 * (double)(long)plVar19) / (long)plVar13;
                }
                plVar25 = (long *)(lVar18 * (long)plVar13);
                if ((long)plVar25 - (long)plVar13 == 0 || (long)plVar25 < (long)plVar13) {
                  plVar25 = plVar13;
                }
              }
              uVar15 = *(uint *)(lVar9 + 0x2c);
              plVar19 = plVar25;
              if ((uVar15 != 0) && ((long)(ulong)uVar15 <= (long)plVar25)) {
                plVar19 = (long *)(ulong)uVar15;
              }
            }
            goto LAB_10b17fe90;
          }
        }
        if (((ulong)plVar25 & uVar10) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar10);
        }
        else if (plVar25 <= plVar12) {
          uVar16 = 0;
          if (plVar25 != (long *)0x0) {
            uVar16 = (ulong)plVar12 / (ulong)plVar25;
          }
          plVar12 = (long *)((long)plVar12 - uVar16 * (long)plVar25);
        }
      } while (plVar12 == plVar20);
    }
  }
LAB_10b17fe90:
  plVar25 = (long *)0x0;
  lVar9 = 0;
  piVar14 = (int *)*param_5;
  do {
    if (piVar14 == (int *)param_5[1]) break;
    plVar25 = plVar25 + (long)*piVar14 * 0x80;
    lVar9 = lVar9 + (int)param_5[3];
    piVar14 = piVar14 + 1;
  } while (lVar9 < (long)plVar19);
  if (lVar9 < (long)plVar19 && 0 < lVar9) {
    lVar18 = (long)plVar25 * (long)plVar19;
    plVar25 = (long *)0x0;
    if (lVar9 != 0) {
      plVar25 = (long *)(lVar18 / lVar9);
    }
  }
  if ((long)plVar25 < 0x801) {
    plVar25 = (long *)0x800;
  }
LAB_10b17fedc:
  if ((long)plVar25 % 0x10 != 0) {
    plVar25 = (long *)(((long)plVar25 / 0x10) * 0x10 + 0x10);
  }
  func_0x000107c279a4(auStack_e0);
  func_0x00010b167f44(auStack_c0);
  auVar31._8_8_ = 1;
  auVar31._0_8_ = plVar25;
  return auVar31;
}



/* Entry: 10b17ff8c; end: 10b180067;  */

void FUN_10b17ff8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 0xa0;
  func_0x00010b2019a0(lVar1,&PTR_DAT_110cc14e8,param_2);
  if (0 < lVar1) {
    return;
  }
  ppuStack_28 = &PTR_DAT_110cc14d0;
  param_1 = param_1 + 200;
  func_0x00010b202020(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be18(&PTR_DAT_110cc14d0);
  }
  else {
    FUN_10b17f6cc();
  }
  return;
}



/* Entry: 10b180068; end: 10b1800c3;  */

void FUN_10b180068(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010b17ffd8();
  func_0x00010b17ff8c(param_2,param_3);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10b1800c4; end: 10b1800c7;  */

undefined8 * FUN_10b1800c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1400;
  func_0x00010b1802e8(param_1 + 0x34);
  func_0x000107c29c20(param_1 + 0x33);
  FUN_10b180dcc(param_1 + 0x32);
  func_0x00010b180200(param_1 + 0x28);
  func_0x00010b180228(param_1 + 0x14);
  FUN_10b180d70(param_1 + 0xf);
  FUN_10b18052c(param_1 + 1);
  return param_1;
}



/* Entry: 10b1800c8; end: 10b1800f7;  */

void FUN_10b1800c8(void)

{
  func_0x00010b1805a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1800f8; end: 10b180117;  */

void FUN_10b1800f8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10b180118; end: 10b18017b;  */

long FUN_10b180118(long param_1,long param_2)

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
      FUN_10b58dcd0(param_1);
    }
    else {
      FUN_10b58dc9c(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b18017c; end: 10b180197;  */

void FUN_10b18017c(long param_1)

{
  FUN_10b180198();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b180198; end: 10b1801a3;  */

undefined8 * FUN_10b180198(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d0fb20;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_10b180118(param_1,param_2);
  return param_1;
}



/* Entry: 10b1801a4; end: 10b1801df;  */

undefined8 * FUN_10b1801a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d0fb20;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_10b180118(param_1,param_3);
  return param_1;
}



/* Entry: 10b1801e0; end: 10b1801ff;  */

void FUN_10b1801e0(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b58d930();
  }
  return;
}



/* Entry: 10b180200; end: 10b18033b;  */

void FUN_10b180200(long param_1)

{
  func_0x000107c2be30(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b18033c; end: 10b180353;  */

void FUN_10b18033c(long *param_1)

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



/* Entry: 10b180354; end: 10b1803fb;  */

undefined8 FUN_10b180354(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b18157c();
  func_0x00010b180378();
  func_0x00010b181570();
  FUN_10b1803fc();
  return unaff_x19;
}



/* Entry: 10b1803fc; end: 10b180413;  */

void FUN_10b1803fc(long *param_1)

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



/* Entry: 10b180414; end: 10b180487;  */

undefined8 FUN_10b180414(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b18157c();
  func_0x00010b180438();
  func_0x00010b181570();
  FUN_10b180488();
  return unaff_x19;
}



/* Entry: 10b180488; end: 10b18049f;  */

void FUN_10b180488(long *param_1)

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



/* Entry: 10b1804a0; end: 10b180513;  */

undefined8 FUN_10b1804a0(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b18157c();
  func_0x00010b1804c4();
  func_0x00010b181570();
  FUN_10b180514();
  return unaff_x19;
}



/* Entry: 10b180514; end: 10b18052b;  */

void FUN_10b180514(long *param_1)

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



/* Entry: 10b18052c; end: 10b180577;  */

void FUN_10b18052c(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b522b10();
  }
  return;
}



/* Entry: 10b180578; end: 10b18060b;  */

long FUN_10b180578(long param_1,long param_2,undefined4 *param_3)

{
  _wmemchr(param_1,*param_3,param_2 - param_1 >> 2);
  if (param_1 != 0) {
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 10b18060c; end: 10b180693;  */

long FUN_10b18060c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  func_0x00010b1814d4(param_1 + 0x18);
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,auStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  func_0x00010b1814bc();
  if (lVar2 == 0) {
    func_0x00010b1814c4();
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b180680);
  (*pcVar1)();
}



/* Entry: 10b180694; end: 10b180703;  */

void FUN_10b180694(long *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    func_0x0001078bd144(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b1806c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10b180704; end: 10b180707;  */

void FUN_10b180704(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b180708; end: 10b18071b;  */

void FUN_10b180708(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18071c; end: 10b180b47;  */

void FUN_10b18071c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x25;
  ulong uVar12;
  long *plVar13;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  float fStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  char cStack_d8;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  
  plStack_118 = (long *)0x0;
  lStack_120 = 0;
  lStack_108 = 0;
  plStack_110 = (long *)0x0;
  fStack_100 = 1.0;
  func_0x000107c3018c(auStack_98,&DAT_10f730d77,0x1d,&UNK_110cc1538,2);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  func_0x000107c31434(&lStack_e0,auStack_98,&uStack_b0);
  if ((cStack_b8 == '\x01') && (cStack_d8 == '\a')) {
    func_0x0001098f428c(&lStack_f8,&lStack_e0);
    for (lVar10 = lStack_f8; lVar10 != lStack_f0; lVar10 = lVar10 + 0x18) {
      plVar6 = &lStack_e0;
      func_0x0001098f426c(plVar6,lVar10);
      plVar9 = plVar6;
      func_0x0001098f37f0();
      if ((int)plVar9 != 0) {
        func_0x0001098f3888();
        plVar9 = &lStack_108;
        func_0x000107c278c4(plVar9,lVar10);
        plVar13 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          uVar12 = (long)plStack_118 - 1;
          if (((ulong)plStack_118 & uVar12) == 0) {
            unaff_x25 = (long *)(uVar12 & (ulong)plVar9);
          }
          else {
            unaff_x25 = plVar9;
            if (plStack_118 <= plVar9) {
              uVar2 = 0;
              if (plStack_118 != (long *)0x0) {
                uVar2 = (ulong)plVar9 / (ulong)plStack_118;
              }
              unaff_x25 = (long *)((long)plVar9 - uVar2 * (long)plStack_118);
            }
          }
          plVar11 = *(long **)(lStack_120 + (long)unaff_x25 * 8);
          if (plVar11 != (long *)0x0) {
            do {
              while( true ) {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_10b180884;
                plVar8 = (long *)plVar11[1];
                if (plVar8 != plVar9) break;
                plVar8 = plVar11 + 2;
                func_0x000107c278d0(plVar8,lVar10);
                if (((ulong)plVar8 & 1) != 0) goto LAB_10b1809ac;
              }
              if (((ulong)plVar13 & uVar12) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar12);
              }
              else if (plVar13 <= plVar8) {
                uVar2 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar2 = (ulong)plVar8 / (ulong)plVar13;
                }
                plVar8 = (long *)((long)plVar8 - uVar2 * (long)plVar13);
              }
            } while (plVar8 == unaff_x25);
          }
        }
LAB_10b180884:
        plVar11 = (long *)0x30;
        __Znwm();
        uStack_70 = 0;
        *plVar11 = 0;
        plVar11[1] = (long)plVar9;
        plStack_80 = plVar11;
        pplStack_78 = &plStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar11 + 2,lVar10)
        ;
        plVar11[5] = 0;
        uStack_70 = CONCAT71(uStack_70._1_7_,1);
        if ((plVar13 == (long *)0x0) || (fStack_100 * (float)plVar13 < (float)(lStack_108 + 1))) {
          bVar4 = (long *)0x2 < plVar13;
          bVar5 = plVar13 == (long *)0x3;
          func_0x00010b181588((long)plVar13 << 1);
          uVar1 = extraout_x8;
          if (!bVar4 || bVar5) {
            uVar1 = extraout_x9;
          }
          func_0x0001078bcf14(&lStack_120,uVar1);
          plVar13 = plStack_118;
          if (((ulong)plStack_118 & (long)plStack_118 - 1U) == 0) {
            unaff_x25 = (long *)((long)plStack_118 - 1U & (ulong)plVar9);
          }
          else {
            unaff_x25 = plVar9;
            if (plStack_118 <= plVar9) {
              uVar12 = 0;
              if (plStack_118 != (long *)0x0) {
                uVar12 = (ulong)plVar9 / (ulong)plStack_118;
              }
              unaff_x25 = (long *)((long)plVar9 - uVar12 * (long)plStack_118);
            }
          }
        }
        plVar11 = plStack_80;
        plVar9 = *(long **)(lStack_120 + (long)unaff_x25 * 8);
        if (plVar9 == (long *)0x0) {
          *plStack_80 = (long)plStack_110;
          plStack_110 = plStack_80;
          *(long ***)(lStack_120 + (long)unaff_x25 * 8) = &plStack_110;
          if (*plStack_80 != 0) {
            plVar9 = *(long **)(*plStack_80 + 8);
            if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
              plVar9 = (long *)((ulong)plVar9 & (long)plVar13 - 1U);
            }
            else if (plVar13 <= plVar9) {
              uVar12 = 0;
              if (plVar13 != (long *)0x0) {
                uVar12 = (ulong)plVar9 / (ulong)plVar13;
              }
              plVar9 = (long *)((long)plVar9 - uVar12 * (long)plVar13);
            }
            *(long **)(lStack_120 + (long)plVar9 * 8) = plStack_80;
          }
        }
        else {
          *plStack_80 = *plVar9;
          *plVar9 = (long)plStack_80;
        }
        plStack_80 = (long *)0x0;
        lStack_108 = lStack_108 + 1;
        func_0x0001078bd0c4(&plStack_80);
LAB_10b1809ac:
        plVar11[5] = (long)((double)(long)plVar6 / 100.0);
      }
    }
    func_0x000107c278a8(&lStack_f8);
  }
  func_0x000107c28224(&lStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  lStack_e0 = param_1 + 0x18;
  cStack_d8 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar7 = param_1;
  func_0x000107c28058();
  plVar6 = plStack_118;
  lVar10 = lStack_120;
  if ((int)lVar7 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = plStack_110;
    lStack_120 = 0;
    plStack_118 = (long *)0x0;
    *(long *)(param_1 + 0x90) = lVar10;
    *(long **)(param_1 + 0x98) = plVar6;
    *(long *)(param_1 + 0xa8) = lStack_108;
    *(float *)(param_1 + 0xb0) = fStack_100;
    if (lStack_108 != 0) {
      plVar9 = (long *)plStack_110[1];
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar9) {
        uVar12 = 0;
        if (plVar6 != (long *)0x0) {
          uVar12 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar12 * (long)plVar6);
      }
      *(undefined8 **)(lVar10 + (long)plVar9 * 8) = (undefined8 *)(param_1 + 0xa0);
      plStack_110 = (long *)0x0;
      lStack_108 = 0;
    }
    func_0x00010b181498();
    func_0x000107c2798c(&lStack_e0);
    func_0x0001078bd144(&lStack_120);
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b180aa4);
  (*pcVar3)();
}



/* Entry: 10b180b48; end: 10b180b7f;  */

void FUN_10b180b48(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b1814ec();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    do {
      func_0x00010b18145c();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b181434();
    }
  }
  return;
}



/* Entry: 10b180b80; end: 10b180b83;  */

void FUN_10b180b80(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b180b84; end: 10b180b97;  */

void FUN_10b180b84(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b180b98; end: 10b180c03;  */

void FUN_10b180b98(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 0x98;
  func_0x000107c2be10();
  func_0x000108820be4(param_1,&uStack_21);
  return;
}



/* Entry: 10b180c04; end: 10b180c0f;  */

void FUN_10b180c04(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b180c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10b180c10; end: 10b180c7f;  */

void FUN_10b180c10(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x18;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar2 = param_1;
  func_0x000107c28058();
  if ((int)lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x90) = *param_2;
    func_0x00010b181498();
    func_0x000107c2798c(&lStack_30);
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b180c70);
  (*pcVar1)();
}



/* Entry: 10b180c80; end: 10b180cb7;  */

void FUN_10b180c80(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b1814ec();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    do {
      func_0x00010b18145c();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b181434();
    }
  }
  return;
}



/* Entry: 10b180cb8; end: 10b180cbb;  */

void FUN_10b180cb8(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b180cbc; end: 10b180ccf;  */

void FUN_10b180cbc(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b180cd0; end: 10b180d3b;  */

void FUN_10b180cd0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  
  ppuVar1 = &PTR_DAT_110cc15f8;
  func_0x000107c2be18();
  ppuStack_28 = ppuVar1;
  FUN_10b180c10(param_1,&ppuStack_28);
  return;
}



/* Entry: 10b180d3c; end: 10b180d6f;  */

void FUN_10b180d3c(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  func_0x00010b1814ec();
  if (param_1 != 0) {
    do {
      func_0x00010b18145c();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b181434();
    }
  }
  return;
}



/* Entry: 10b180d70; end: 10b180dcb;  */

long * FUN_10b180d70(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b180dcc; end: 10b180dff;  */

void FUN_10b180dcc(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  func_0x00010b1814ec();
  if (param_1 != 0) {
    do {
      func_0x00010b18145c();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b181434();
    }
  }
  return;
}



/* Entry: 10b180e00; end: 10b18134b;  */

void FUN_10b180e00(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  uint *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong extraout_x8;
  ulong *puVar14;
  ulong extraout_x9;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  uint *puVar23;
  ulong uVar24;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  char cStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  long lStack_80;
  long lStack_78;
  
  lVar21 = **(long **)*param_1;
  iVar8 = 0x10cc1658;
  func_0x000107c2be10();
  if (iVar8 != 0) {
    func_0x000107c30194(&lStack_80,&UNK_10f730e07,0x25,&UNK_10f730e2d,0x17);
    if (lStack_80 == lStack_78) {
      plStack_148 = (long *)((ulong)plStack_148 & 0xffffffffffffff00);
      cStack_e8 = '\0';
    }
    else {
      ppuStack_e0 = &PTR_FUN_110cfca50;
      uStack_d8 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_8c = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      pppuVar9 = &ppuStack_e0;
      func_0x000107c3034c(pppuVar9,lStack_80,(int)lStack_78 - (int)lStack_80);
      bVar7 = ((ulong)pppuVar9 & 1) == 0;
      if (bVar7) {
        plStack_148 = (long *)((ulong)plStack_148 & 0xffffffffffffff00);
      }
      else {
        FUN_10b18134c(&plStack_148,&ppuStack_e0);
      }
      cStack_e8 = !bVar7;
      FUN_10b522b10(&ppuStack_e0);
    }
    func_0x000107c27914(&lStack_80);
    cVar4 = *(char *)(lVar21 + 0x68);
    if (cVar4 == cStack_e8) {
      if (cVar4 != '\0') {
        FUN_10b181374(lVar21 + 8,&plStack_148);
      }
    }
    else if (cVar4 == '\0') {
      FUN_10b18134c(lVar21 + 8,&plStack_148);
      *(undefined1 *)(lVar21 + 0x68) = 1;
    }
    else {
      FUN_10b522b10();
      *(undefined1 *)(lVar21 + 0x68) = 0;
    }
    FUN_10b18052c(&plStack_148);
    if (*(char *)(lVar21 + 0x68) == '\x01') {
      uVar12 = *(ulong *)(lVar21 + 0x48);
      puVar14 = (ulong *)(lVar21 + 0x48);
      if ((uVar12 & 1) != 0) {
        puVar14 = (ulong *)(uVar12 + 7);
      }
      puVar2 = puVar14 + *(int *)(lVar21 + 0x50);
      plVar1 = (long *)(lVar21 + 0x88);
      for (; puVar14 != puVar2; puVar14 = puVar14 + 1) {
        uVar12 = *puVar14;
        puVar23 = *(uint **)(uVar12 + 0x18);
        puVar3 = puVar23 + *(int *)(uVar12 + 0x10);
        for (; puVar23 != puVar3; puVar23 = puVar23 + 1) {
          uVar10 = (ulong)*puVar23;
          FUN_10b5d28a4(uVar10);
          uVar15 = lVar21 + 0x90;
          func_0x000107c278c4(uVar15,uVar10);
          uVar24 = *(ulong *)(lVar21 + 0x80);
          if (uVar24 != 0) {
            uVar20 = uVar24 - 1;
            if ((uVar24 & uVar20) == 0) {
              unaff_x19 = uVar20 & uVar15;
            }
            else {
              unaff_x19 = uVar15;
              if (uVar24 <= uVar15) {
                uVar13 = 0;
                if (uVar24 != 0) {
                  uVar13 = uVar15 / uVar24;
                }
                unaff_x19 = uVar15 - uVar13 * uVar24;
              }
            }
            plVar22 = *(long **)(*(long *)(lVar21 + 0x78) + unaff_x19 * 8);
            if (plVar22 != (long *)0x0) {
              do {
                while( true ) {
                  plVar22 = (long *)*plVar22;
                  if (plVar22 == (long *)0x0) goto LAB_10b181034;
                  uVar13 = plVar22[1];
                  if (uVar13 != uVar15) break;
                  uVar13 = (ulong)(plVar22 + 2);
                  func_0x000107c278d0(uVar13,uVar10);
                  if ((uVar13 & 1) != 0) goto LAB_10b1812e0;
                }
                if ((uVar24 & uVar20) == 0) {
                  uVar13 = uVar13 & uVar20;
                }
                else if (uVar24 <= uVar13) {
                  uVar18 = 0;
                  if (uVar24 != 0) {
                    uVar18 = uVar13 / uVar24;
                  }
                  uVar13 = uVar13 - uVar18 * uVar24;
                }
              } while (uVar13 == unaff_x19);
            }
          }
LAB_10b181034:
          plVar22 = (long *)0x30;
          __Znwm();
          uStack_138 = 0;
          *plVar22 = 0;
          plVar22[1] = uVar15;
          plStack_148 = plVar22;
          plStack_140 = plVar1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (plVar22 + 2,uVar10);
          plVar22[5] = uVar12;
          uStack_138 = CONCAT71(uStack_138._1_7_,1);
          if ((uVar24 == 0) ||
             (*(float *)(lVar21 + 0x98) * (float)uVar24 < (float)(*(long *)(lVar21 + 0x90) + 1))) {
            bVar6 = 2 < uVar24;
            bVar7 = uVar24 == 3;
            func_0x00010b181588(uVar24 << 1);
            uVar10 = extraout_x8;
            if (!bVar6 || bVar7) {
              uVar10 = extraout_x9;
            }
            if (uVar10 - 1 == 0) {
              uVar10 = 2;
            }
            else if ((uVar10 & uVar10 - 1) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            uVar24 = *(ulong *)(lVar21 + 0x80);
            if (uVar24 < uVar10) {
LAB_10b1810dc:
              if (uVar10 >> 0x3d != 0) {
                func_0x000104bd35f4();
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10b18131c);
                (*pcVar5)();
              }
              lVar11 = uVar10 << 3;
              __Znwm(lVar11);
              FUN_10b1813d8(lVar21 + 0x78,lVar11);
              *(ulong *)(lVar21 + 0x80) = uVar10;
              lVar11 = *(long *)(lVar21 + 0x78);
              for (uVar24 = 0; uVar10 != uVar24; uVar24 = uVar24 + 1) {
                *(undefined8 *)(lVar11 + uVar24 * 8) = 0;
              }
              plVar16 = (long *)*plVar1;
              uVar24 = uVar10;
              if (plVar16 != (long *)0x0) {
                uVar18 = plVar16[1];
                uVar13 = uVar10 - 1;
                uVar20 = 0;
                if (uVar10 != 0) {
                  uVar20 = uVar18 / uVar10;
                }
                uVar19 = uVar18;
                if (uVar10 <= uVar18) {
                  uVar19 = uVar18 - uVar20 * uVar10;
                }
                if ((uVar10 & uVar13) == 0) {
                  uVar19 = uVar18 & uVar13;
                }
                *(long **)(lVar11 + uVar19 * 8) = plVar1;
                while (plVar17 = plVar16, plVar16 = (long *)*plVar17, plVar16 != (long *)0x0) {
                  uVar20 = plVar16[1];
                  if ((uVar10 & uVar13) == 0) {
                    uVar20 = uVar20 & uVar13;
                  }
                  else if (uVar10 <= uVar20) {
                    uVar18 = 0;
                    if (uVar10 != 0) {
                      uVar18 = uVar20 / uVar10;
                    }
                    uVar20 = uVar20 - uVar18 * uVar10;
                  }
                  if (uVar20 != uVar19) {
                    if (*(long *)(lVar11 + uVar20 * 8) == 0) {
                      *(long **)(lVar11 + uVar20 * 8) = plVar17;
                      uVar19 = uVar20;
                    }
                    else {
                      *plVar17 = *plVar16;
                      *plVar16 = **(undefined8 **)(lVar11 + uVar20 * 8);
                      **(long **)(lVar11 + uVar20 * 8) = (long)plVar16;
                      plVar16 = plVar17;
                    }
                  }
                }
              }
            }
            else if (uVar10 < uVar24) {
              uVar20 = (ulong)((float)*(ulong *)(lVar21 + 0x90) / *(float *)(lVar21 + 0x98));
              if ((uVar24 < 3) || ((uVar24 & uVar24 - 1) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if (1 < uVar20) {
                uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
              }
              if (uVar10 <= uVar20) {
                uVar10 = uVar20;
              }
              if (uVar10 < uVar24) {
                if (uVar10 != 0) goto LAB_10b1810dc;
                FUN_10b1813d8(lVar21 + 0x78,0);
                *(undefined8 *)(lVar21 + 0x80) = 0;
                uVar24 = 0;
              }
              else {
                uVar24 = *(ulong *)(lVar21 + 0x80);
              }
            }
            if ((uVar24 & uVar24 - 1) == 0) {
              unaff_x19 = uVar24 - 1 & uVar15;
            }
            else {
              unaff_x19 = uVar15;
              if (uVar24 <= uVar15) {
                uVar10 = 0;
                if (uVar24 != 0) {
                  uVar10 = uVar15 / uVar24;
                }
                unaff_x19 = uVar15 - uVar10 * uVar24;
              }
            }
          }
          lVar11 = *(long *)(lVar21 + 0x78);
          plVar16 = *(long **)(lVar11 + unaff_x19 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar22 = *plVar1;
            *plVar1 = (long)plVar22;
            *(long **)(lVar11 + unaff_x19 * 8) = plVar1;
            if (*plVar22 != 0) {
              uVar15 = *(ulong *)(*plVar22 + 8);
              if ((uVar24 & uVar24 - 1) == 0) {
                uVar15 = uVar15 & uVar24 - 1;
              }
              else if (uVar24 <= uVar15) {
                uVar10 = 0;
                if (uVar24 != 0) {
                  uVar10 = uVar15 / uVar24;
                }
                uVar15 = uVar15 - uVar10 * uVar24;
              }
              *(long **)(lVar11 + uVar15 * 8) = plVar22;
            }
          }
          else {
            *plVar22 = *plVar16;
            *plVar16 = (long)plVar22;
          }
          plStack_148 = (long *)0x0;
          *(long *)(lVar21 + 0x90) = *(long *)(lVar21 + 0x90) + 1;
          FUN_10b1813f0(&plStack_148);
LAB_10b1812e0:
        }
      }
    }
  }
  return;
}



/* Entry: 10b18134c; end: 10b181373;  */

long FUN_10b18134c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_10b522ae8(param_1,0);
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
      func_0x00010b522dfc(param_1);
    }
    else {
      FUN_10b522dc4(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b181374; end: 10b1813d7;  */

long FUN_10b181374(long param_1,long param_2)

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
      func_0x00010b522dfc(param_1);
    }
    else {
      FUN_10b522dc4(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1813d8; end: 10b1813ef;  */

void FUN_10b1813d8(long *param_1,long param_2)

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



/* Entry: 10b1813f0; end: 10b181433;  */

long * FUN_10b1813f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b181434; end: 10b18159b;  */

void FUN_10b181434(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10b18159c; end: 10b181777;  */

void FUN_10b18159c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined8 uVar4;
  undefined1 auStack_110 [128];
  undefined1 auStack_90 [56];
  undefined8 *puStack_58;
  
  puVar1 = param_3;
  func_0x00010b18508c();
  uVar4 = *puVar1;
  FUN_10b123790(auStack_110);
  FUN_10b1a1a14(uVar4,auStack_110);
  FUN_10b0faf98(auStack_110);
  *(undefined8 *)(unaff_x19 + 0x10) = *param_3;
  *(undefined8 *)(unaff_x19 + 8) = uVar4;
  lVar2 = param_3[1];
  *(long *)(unaff_x19 + 0x18) = lVar2;
  lVar3 = 0;
  if (lVar2 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
    lVar3 = param_3[1];
  }
  if (lVar3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  if (*(long *)(param_5 + 8) != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_01 != 0);
  }
  if (*(long *)(param_4 + 8) != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_02 != 0);
  }
  FUN_10b182a20(auStack_90,&stack0xfffffffffffffeb8);
  FUN_10b182a20(auStack_110,auStack_90);
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = 0x32aaaba7;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3cb0b1bb;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *puVar1 = &PTR_SUB_110cc17f8;
  puVar1[1] = 0;
  FUN_10b182a20(puVar1 + 0x16,auStack_110);
  *(uint *)(puVar1 + 0x11) = *(uint *)(puVar1 + 0x11) | 8;
  puStack_58 = puVar1;
  func_0x000107c2805c(puVar1);
  FUN_10b183684(&puStack_58);
  FUN_10b181778(auStack_110);
  FUN_10b181778(auStack_90);
  *(undefined8 **)(unaff_x19 + 0x20) = puVar1;
  FUN_10b181778(&stack0xfffffffffffffeb8);
  return;
}



/* Entry: 10b181778; end: 10b1817ab;  */

long FUN_10b181778(long param_1)

{
  FUN_10b127f28(param_1 + 0x28);
  func_0x00010b1257f8(param_1 + 0x18);
  func_0x00010b129c40(param_1 + 8);
  return param_1;
}



/* Entry: 10b1817ac; end: 10b181883;  */

void FUN_10b1817ac(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int extraout_w10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b184e50();
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  FUN_10b181920(&uStack_50,param_2 + 0x10,&uStack_70);
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  uVar2 = uStack_48;
  uVar1 = uStack_50;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc1840;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar3[3] = &PTR_DAT_110cc1890;
  puVar3[5] = uVar2;
  puVar3[4] = uVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b141ff4(&uStack_40);
  *param_1 = puVar3 + 3;
  param_1[1] = puVar3;
  func_0x00010b184f08();
  func_0x0001052aacf8(&uStack_60);
  return;
}



/* Entry: 10b181884; end: 10b18191f;  */

long FUN_10b181884(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  func_0x00010b184d64();
  if (lVar2 == 0) {
    func_0x000107c2798c(&lStack_40);
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(&uStack_48,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b181908);
  (*pcVar1)();
}



/* Entry: 10b181920; end: 10b181b6f;  */

void FUN_10b181920(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 extraout_w8;
  long lVar5;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  *puVar1 = FUN_10b184aa8;
  puVar1[1] = FUN_10b184bf8;
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  puVar1[0xc] = param_3[1];
  puVar1[0xb] = uVar6;
  puVar1[0xe] = uVar8;
  puVar1[0xd] = uVar7;
  if (param_3[3] != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  FUN_10b141d98(puVar1 + 2);
  puVar4 = puVar1 + 0xf;
  FUN_10b141ce8(param_1,puVar1 + 2);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar1[0x12] = param_2[1];
  puVar1[0x11] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b14670c(puVar4,puVar1 + 0x11);
  puVar2 = puVar4;
  FUN_10b12d174();
  if (((ulong)puVar2 & 1) == 0) {
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puStack_70 = puVar1;
    puStack_68 = puVar4;
    FUN_10b12d1c8(&uStack_60,puVar4,&puStack_70);
    if (lStack_58 != 0) {
      do {
        func_0x00010b184c98();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b184c30();
        func_0x00010b184d9c();
      }
    }
  }
  else {
    FUN_10b12d0d0(puVar4);
    func_0x000107c27b58(puVar4);
    plVar3 = puVar1 + 0x11;
    FUN_10b146ae4();
    func_0x00010b184f64();
    puVar1[0xf] = plVar3;
    lVar5 = *(long *)(extraout_x8 + 8);
    puVar1[0x10] = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10_01 != 0);
    }
    if (plVar3 == (long *)0x0) {
      func_0x00010b184fe8();
      uStack_60 = 0;
      lStack_58 = 0;
    }
    else {
      (**(code **)(*plVar3 + 0x10))(&uStack_60);
      func_0x00010b184fe8();
    }
    puVar4 = &uStack_60;
    func_0x00010b14222c(puVar1 + 7);
    func_0x0001052aad20(&uStack_60);
    func_0x00010b184e14();
    func_0x00010b184d40();
    *(undefined1 *)(puVar1 + 0x13) = extraout_w8;
    func_0x00010b184cbc();
    if ((bool)in_ZR) {
      puStack_48 = puVar4;
      func_0x00010b184d88();
      FUN_10b142300();
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_50);
      puStack_48 = &uStack_50;
      func_0x00010b184d88();
      FUN_10b1420d8();
      func_0x00010b184de8();
    }
    func_0x00010b184ec8();
    func_0x0001052aacf8(puVar1 + 0xd);
    func_0x00010b184cb4();
  }
  return;
}



/* Entry: 10b181b70; end: 10b181c17;  */

undefined1  [16] FUN_10b181b70(int param_1,ulong param_2)

{
  long *plVar1;
  long extraout_x8;
  ulong uVar2;
  int extraout_w10;
  long unaff_x19;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  func_0x00010b184e50();
  func_0x00010b184f20();
  func_0x00010b143580();
  if (param_1 != 0) {
    plVar1 = (long *)(unaff_x19 + 0x10);
    FUN_10b146ae4();
    func_0x00010b184f64();
    if (*(long *)(extraout_x8 + 8) != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
      uVar3 = (ulong)plVar1 & 0xffffffffffffff00;
      func_0x00010b18502c();
      uVar2 = (ulong)plVar1 & 0xff;
      param_2 = param_2 & 0xff;
      goto LAB_10b181bf4;
    }
    func_0x00010b18502c();
  }
  uVar3 = 0;
  param_2 = 0;
  uVar2 = 0;
LAB_10b181bf4:
  auVar4._0_8_ = uVar2 | uVar3;
  auVar4._8_8_ = param_2;
  return auVar4;
}



/* Entry: 10b181c18; end: 10b181ccb;  */

void FUN_10b181c18(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [16];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [128];
  long alStack_40 [2];
  
  lVar1 = param_1;
  func_0x00010b184e50();
  uVar2 = lVar1 + 0x10;
  func_0x00010b143580();
  if ((uVar2 & 1) == 0) {
    func_0x00010b11fabc(alStack_40,param_1 + 0x10);
    if (alStack_40[0] != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      FUN_10b123790(auStack_c0,param_2);
      auStack_d8[0] = 0;
      uStack_c8 = 0;
      FUN_10b19e5d8(alStack_40[0],uVar3,auStack_c0,auStack_d8,0);
      FUN_10b0faf98(auStack_c0);
    }
    func_0x00010b129c40(alStack_40);
  }
  return;
}



/* Entry: 10b181ccc; end: 10b181f8f;  */

void FUN_10b181ccc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 extraout_w8;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_var;
  int extraout_w11;
  undefined8 unaff_x23;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  *puVar4 = FUN_10b184814;
  puVar4[1] = FUN_10b18498c;
  FUN_10b16657c(puVar4 + 2);
  FUN_10b15b5c8(param_1,puVar4 + 2);
  func_0x00010b184fac();
  if (lStack_70 == 0) {
    func_0x00010b184de0();
    lVar5 = *(long *)(param_2 + 0x20);
    FUN_10b181884();
    lVar7 = *(long *)(lVar5 + 0x18);
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar5 + 0x10);
    puVar4[0xe] = uVar9;
    puVar4[0xd] = uVar8;
    if (lVar7 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    puVar6 = puVar4 + 0xd;
    func_0x00010b143580();
    if (((ulong)puVar6 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x12) = 0;
      func_0x00010b184e38();
      lVar5 = puVar4[0xd];
      if ((*(byte *)(lVar5 + 0x58) & 1) != 0) {
        func_0x00010b184d38();
        func_0x00010b184cd4(*puVar4);
        return;
      }
      puVar6 = *(undefined8 **)(lVar5 + 0x68);
      uVar3 = *(undefined8 **)(lVar5 + 0x70) <= puVar6;
      if ((bool)uVar3) {
        lVar7 = *(long *)(lVar5 + 0x60);
        func_0x00010b184df0();
        if (CONCAT44(extraout_var,extraout_w10_01) != 0) {
          func_0x00010552fc6c();
LAB_10b181efc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b181f00);
          (*pcVar2)();
        }
        func_0x00010b184c70(extraout_x8_00 - lVar7);
        uVar1 = extraout_x9_00;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_01;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b181efc;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b184c50();
        *(undefined8 *)(lVar5 + 0x60) = unaff_x23;
        *(undefined8 **)(lVar5 + 0x68) = puVar6;
        *(ulong *)(lVar5 + 0x70) = uVar1;
        if (lVar7 != 0) {
          func_0x00010b184fe0();
        }
      }
      else {
        *puVar6 = puVar4;
        puVar6 = puVar6 + 1;
      }
      *(undefined8 **)(lVar5 + 0x68) = puVar6;
      func_0x00010b184d38();
      return;
    }
    FUN_10b1435a8(puVar4 + 0xd);
    puVar6 = puVar4 + 0xf;
    func_0x00010b185058();
    puVar4[0xc] = uVar9;
    puVar4[0xb] = uVar8;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b184e04();
    puVar4[0x11] = puVar4[0xb];
    if (puVar4[0xb] == 0) {
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
    }
    else {
      func_0x00010b184e78();
      FUN_10b16b9dc();
      if (((ulong)puVar6 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x12) = 1;
        func_0x00010b184d54();
        FUN_10b16ba64();
        if (lStack_68 == 0) {
          return;
        }
        do {
          func_0x00010b184c98();
        } while (extraout_w11 != 0);
        if (extraout_x9 != 0) {
          return;
        }
        func_0x00010b184c30();
        func_0x00010b184d9c();
        return;
      }
      func_0x00010b184f70();
    }
    func_0x00010b184f90();
    lVar5 = puVar4[0x11];
    func_0x00010b184e88();
    if (lVar5 != 0) {
      func_0x00010b184ef8();
    }
    func_0x00010b184e48();
  }
  else {
    func_0x00010b16c718(puVar4 + 7);
    func_0x00010b184de0();
  }
  func_0x00010b184e58();
  *(undefined1 *)(puVar4 + 0x12) = extraout_w8;
  func_0x00010b184cbc();
  if ((bool)in_ZR) {
    func_0x00010b184d88();
    FUN_10b16c638();
  }
  else {
    func_0x00010b184cdc();
    func_0x00010b184d88();
    FUN_10b16688c();
    func_0x00010b184de8();
  }
  func_0x00010b184eb0();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b181f90; end: 10b182253;  */

void FUN_10b181f90(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_var;
  int extraout_w11;
  undefined8 unaff_x23;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  puVar4 = (undefined8 *)0xa8;
  __Znwm();
  *puVar4 = FUN_10b184658;
  puVar4[1] = FUN_10b1847cc;
  FUN_10b14704c(puVar4 + 2);
  FUN_10b147440(param_1,puVar4 + 2);
  func_0x00010b184fac();
  if (lStack_70 == 0) {
    func_0x00010b184de0();
    lVar5 = *(long *)(param_2 + 0x20);
    FUN_10b181884();
    lVar7 = *(long *)(lVar5 + 0x18);
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar5 + 0x10);
    puVar4[0xd] = uVar9;
    puVar4[0xc] = uVar8;
    if (lVar7 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    puVar6 = puVar4 + 0xc;
    func_0x00010b143580();
    if (((ulong)puVar6 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x14) = 0;
      func_0x00010b184e38();
      lVar5 = puVar4[0xc];
      if ((*(byte *)(lVar5 + 0x58) & 1) != 0) {
        func_0x00010b184d38();
        func_0x00010b184cd4(*puVar4);
        return;
      }
      puVar6 = *(undefined8 **)(lVar5 + 0x68);
      uVar3 = *(undefined8 **)(lVar5 + 0x70) <= puVar6;
      if ((bool)uVar3) {
        lVar7 = *(long *)(lVar5 + 0x60);
        func_0x00010b184df0();
        if (CONCAT44(extraout_var,extraout_w10_01) != 0) {
          func_0x00010552fc6c();
LAB_10b1821c0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1821c4);
          (*pcVar2)();
        }
        func_0x00010b184c70(extraout_x8_00 - lVar7);
        uVar1 = extraout_x9_00;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_01;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1821c0;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b184c50();
        *(undefined8 *)(lVar5 + 0x60) = unaff_x23;
        *(undefined8 **)(lVar5 + 0x68) = puVar6;
        *(ulong *)(lVar5 + 0x70) = uVar1;
        if (lVar7 != 0) {
          func_0x00010b184fe0();
        }
      }
      else {
        *puVar6 = puVar4;
        puVar6 = puVar6 + 1;
      }
      *(undefined8 **)(lVar5 + 0x68) = puVar6;
      func_0x00010b184d38();
      return;
    }
    FUN_10b1435a8(puVar4 + 0xc);
    puVar6 = puVar4 + 0x11;
    func_0x00010b185058();
    puVar4[0x10] = uVar9;
    puVar4[0xf] = uVar8;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b184e1c();
    puVar4[0x13] = puVar4[0xf];
    if (puVar4[0xf] == 0) {
      func_0x00010b184e98();
    }
    else {
      func_0x00010b184e78();
      FUN_10b1479ac();
      if (((ulong)puVar6 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x14) = 1;
        func_0x00010b184d54();
        FUN_10b147a3c();
        if (lStack_68 == 0) {
          return;
        }
        do {
          func_0x00010b184c98();
        } while (extraout_w11 != 0);
        if (extraout_x9 != 0) {
          return;
        }
        func_0x00010b184c30();
        func_0x00010b184d9c();
        return;
      }
      func_0x00010b184ffc();
    }
    func_0x00010b184f7c();
    lVar5 = puVar4[0x13];
    func_0x00010b184ed8();
    if (lVar5 != 0) {
      func_0x00010b184f00();
    }
    func_0x00010b184d80();
  }
  else {
    func_0x00010b12cc78();
    FUN_10b16c83c(puVar4 + 7);
    func_0x00010b184de0();
  }
  func_0x00010b184e58();
  func_0x00010b185064();
  if ((bool)in_ZR) {
    func_0x00010b184d88();
    FUN_10b147d74();
  }
  else {
    func_0x00010b184cdc();
    func_0x00010b184d88();
    FUN_10b147358();
    func_0x00010b184de8();
  }
  func_0x00010b184ed0();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b182254; end: 10b1822ab;  */

void FUN_10b182254(long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 auStack_30 [16];
  
  func_0x00010b184e50();
  uStack_40 = param_3[1];
  uStack_48 = *param_3;
  uStack_38 = *(undefined1 *)(param_3 + 2);
  auStack_50[0] = param_2;
  FUN_10b1822ac(auStack_30,param_1 + 0x10,auStack_50);
  func_0x000107c27b58(auStack_30);
  return;
}



/* Entry: 10b1822ac; end: 10b1824ab;  */

void FUN_10b1822ac(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 extraout_w8;
  long lVar5;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 uVar6;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  
  puVar2 = (undefined8 *)0xb0;
  __Znwm();
  *puVar2 = FUN_10b184514;
  puVar2[1] = FUN_10b184628;
  *(undefined4 *)((long)puVar2 + 0xa4) = *param_3;
  uVar6 = *(undefined8 *)(param_3 + 1);
  puVar2[0x12] = *(undefined8 *)(param_3 + 3);
  puVar2[0x11] = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)puVar2 + 0x9c) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)puVar2 + 0x94) = uVar6;
  FUN_10b124f8c(puVar2 + 2);
  puVar1 = puVar2 + 10;
  FUN_10b124f40(param_1,puVar2 + 2);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar2[0x10] = param_2[1];
  puVar2[0xf] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  FUN_10b14670c(puVar1,puVar2 + 0xf);
  puVar3 = puVar1;
  FUN_10b12d174();
  if (((ulong)puVar3 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0x15) = 0;
    func_0x00010b184d54();
    FUN_10b12d1c8();
    if (lStack_48 != 0) {
      do {
        func_0x00010b184c98();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b184c30();
        func_0x00010b184d9c();
      }
    }
  }
  else {
    FUN_10b12d0d0(puVar1);
    func_0x000107c27b58(puVar1);
    plVar4 = puVar2 + 0xf;
    FUN_10b146ae4();
    func_0x00010b184f64();
    puVar2[0xd] = plVar4;
    lVar5 = *(long *)(extraout_x8 + 8);
    puVar2[0xe] = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10_00 != 0);
    }
    if (plVar4 != (long *)0x0) {
      puVar2[0xb] = *(undefined8 *)((long)puVar2 + 0x94);
      *puVar1 = *(undefined8 *)((long)puVar2 + 0x8c);
      puVar2[0xc] = *(undefined8 *)((long)puVar2 + 0x9c);
      (**(code **)(*plVar4 + 0x40))();
    }
    func_0x00010b184e80();
    func_0x00010b184e70();
    func_0x00010b184e0c();
    func_0x00010b184d40();
    *(undefined1 *)(puVar2 + 0x15) = extraout_w8;
    func_0x00010b1850a0();
    if ((bool)in_ZR) {
      puStack_38 = auStack_40;
      func_0x00010b184d88();
      func_0x000107c27b6c();
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_40,puVar2 + 7);
      puStack_38 = auStack_40;
      func_0x00010b184d88();
      func_0x000104bf33ec();
      func_0x00010b184de8();
    }
    func_0x00010b184da4();
    func_0x00010b184cb4();
  }
  return;
}



/* Entry: 10b1824ac; end: 10b1824af;  */

void FUN_10b1824ac(long param_1)

{
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  long unaff_x19;
  
  func_0x00010b18508c();
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x00010b184c98();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b184f58();
      (*extraout_x8)();
    }
  }
  func_0x00010b124c0c(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1824b0; end: 10b1824c3;  */

void FUN_10b1824b0(void)

{
  FUN_10b1824ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1824c4; end: 10b1824e7;  */

void FUN_10b1824c4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong extraout_x8;
  ulong extraout_x9;
  int extraout_w10;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  func_0x00010b184e50();
  puVar5 = (undefined8 *)0x2e0;
  __Znwm();
  *puVar5 = FUN_10b1849d4;
  puVar5[1] = FUN_10b184a7c;
  FUN_10b182880(puVar5 + 2);
  FUN_10b1827a4(param_1,puVar5 + 2);
  puVar12 = param_2;
  FUN_10b1827bc();
  if ((int)puVar12 == 0) {
    plVar1 = puVar5 + 0x59;
    puVar5[0x59] = *param_2;
    lVar8 = param_2[1];
    puVar5[0x5a] = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    plVar6 = plVar1;
    FUN_10b1827bc();
    if (((ulong)plVar6 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x5b) = 0;
      uVar9 = puVar5[0x59];
      __ZNSt3__115recursive_mutex4lockEv(uVar9);
      lVar8 = *plVar1;
      if ((*(byte *)(lVar8 + 0x2c8) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar9);
        func_0x00010b184cd4(*puVar5);
        return;
      }
      puVar12 = *(undefined8 **)(lVar8 + 0x2d8);
      bVar4 = *(undefined8 **)(lVar8 + 0x2e0) <= puVar12;
      if (bVar4) {
        lVar10 = *(long *)(lVar8 + 0x2d0);
        lVar11 = (long)puVar12 - lVar10;
        if ((lVar11 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b182738:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b18273c);
          (*pcVar3)();
        }
        func_0x00010b184c70((long)*(undefined8 **)(lVar8 + 0x2e0) - lVar10);
        uVar2 = extraout_x9;
        if (bVar4) {
          uVar2 = extraout_x8;
        }
        if (uVar2 == 0) {
          lVar7 = 0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b182738;
          }
          lVar7 = uVar2 << 3;
          __Znwm();
        }
        puVar12 = (undefined8 *)(lVar7 + lVar11);
        puVar13 = puVar12 + 1;
        *puVar12 = puVar5;
        _memcpy(puVar12 + -(lVar11 >> 3),lVar10,lVar11);
        *(undefined8 **)(lVar8 + 0x2d0) = puVar12 + -(lVar11 >> 3);
        *(undefined8 **)(lVar8 + 0x2d8) = puVar13;
        *(ulong *)(lVar8 + 0x2e0) = lVar7 + uVar2 * 8;
        if (lVar10 != 0) {
          __ZdlPv(lVar10);
        }
      }
      else {
        puVar13 = puVar12 + 1;
        *puVar12 = puVar5;
      }
      *(undefined8 **)(lVar8 + 0x2d8) = puVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar9);
      return;
    }
    FUN_10b1827f0();
    func_0x00010b184f88();
    FUN_10b182964(plVar1);
  }
  else {
    FUN_10b1827f0();
    func_0x00010b184f88();
  }
  func_0x00010b184d40();
  func_0x00010b185078();
  if ((bool)in_ZR) {
    func_0x00010b184d74();
    FUN_10b179070();
  }
  else {
    func_0x00010b185008();
    func_0x00010b184d74();
    FUN_10b178f08();
    func_0x00010b184dac();
  }
  func_0x00010b184eb8();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b1824e8; end: 10b1824eb;  */

void FUN_10b1824e8(void)

{
  return;
}



/* Entry: 10b1824ec; end: 10b18252f;  */

void FUN_10b1824ec(long param_1)

{
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  long unaff_x19;
  
  func_0x00010b18508c();
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x00010b184c98();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b184f58();
      (*extraout_x8)();
    }
  }
  func_0x00010b124c0c(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b182530; end: 10b1827a3;  */

void FUN_10b182530(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong extraout_x8;
  ulong extraout_x9;
  int extraout_w10;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar5 = (undefined8 *)0x2e0;
  __Znwm();
  *puVar5 = FUN_10b1849d4;
  puVar5[1] = FUN_10b184a7c;
  FUN_10b182880(puVar5 + 2);
  FUN_10b1827a4(param_1,puVar5 + 2);
  puVar12 = param_2;
  FUN_10b1827bc();
  if ((int)puVar12 == 0) {
    plVar1 = puVar5 + 0x59;
    puVar5[0x59] = *param_2;
    lVar8 = param_2[1];
    puVar5[0x5a] = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    plVar6 = plVar1;
    FUN_10b1827bc();
    if (((ulong)plVar6 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x5b) = 0;
      uVar9 = puVar5[0x59];
      __ZNSt3__115recursive_mutex4lockEv(uVar9);
      lVar8 = *plVar1;
      if ((*(byte *)(lVar8 + 0x2c8) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar9);
        func_0x00010b184cd4(*puVar5);
        return;
      }
      puVar12 = *(undefined8 **)(lVar8 + 0x2d8);
      bVar4 = *(undefined8 **)(lVar8 + 0x2e0) <= puVar12;
      if (bVar4) {
        lVar10 = *(long *)(lVar8 + 0x2d0);
        lVar11 = (long)puVar12 - lVar10;
        if ((lVar11 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b182738:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b18273c);
          (*pcVar3)();
        }
        func_0x00010b184c70((long)*(undefined8 **)(lVar8 + 0x2e0) - lVar10);
        uVar2 = extraout_x9;
        if (bVar4) {
          uVar2 = extraout_x8;
        }
        if (uVar2 == 0) {
          lVar7 = 0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b182738;
          }
          lVar7 = uVar2 << 3;
          __Znwm();
        }
        puVar12 = (undefined8 *)(lVar7 + lVar11);
        puVar13 = puVar12 + 1;
        *puVar12 = puVar5;
        _memcpy(puVar12 + -(lVar11 >> 3),lVar10,lVar11);
        *(undefined8 **)(lVar8 + 0x2d0) = puVar12 + -(lVar11 >> 3);
        *(undefined8 **)(lVar8 + 0x2d8) = puVar13;
        *(ulong *)(lVar8 + 0x2e0) = lVar7 + uVar2 * 8;
        if (lVar10 != 0) {
          __ZdlPv(lVar10);
        }
      }
      else {
        puVar13 = puVar12 + 1;
        *puVar12 = puVar5;
      }
      *(undefined8 **)(lVar8 + 0x2d8) = puVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar9);
      return;
    }
    FUN_10b1827f0();
    func_0x00010b184f88();
    FUN_10b182964(plVar1);
  }
  else {
    FUN_10b1827f0();
    func_0x00010b184f88();
  }
  func_0x00010b184d40();
  func_0x00010b185078();
  if ((bool)in_ZR) {
    func_0x00010b184d74();
    FUN_10b179070();
  }
  else {
    func_0x00010b185008();
    func_0x00010b184d74();
    FUN_10b178f08();
    func_0x00010b184dac();
  }
  func_0x00010b184eb8();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b1827a4; end: 10b1827bb;  */

void FUN_10b1827a4(void)

{
  FUN_10b178968();
  return;
}



/* Entry: 10b1827bc; end: 10b1827ef;  */

undefined1 FUN_10b1827bc(long *param_1)

{
  undefined1 uVar1;
  
  func_0x00010b184e38();
  uVar1 = *(undefined1 *)(*param_1 + 0x2c8);
  func_0x00010b184d38();
  return uVar1;
}



/* Entry: 10b1827f0; end: 10b18283f;  */

long FUN_10b1827f0(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x2c0) & 1) != 0) {
    return param_1 + 0x40;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_1 + 0x40);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b182838);
  (*pcVar1)();
}



/* Entry: 10b182840; end: 10b18287f;  */

void FUN_10b182840(long param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x00010b184f9c();
  func_0x00010b18298c(param_1 + 0x28,&UNK_10ddb182d,auStack_28);
  func_0x00010b184d64();
  return;
}



/* Entry: 10b182880; end: 10b18289b;  */

void FUN_10b182880(long param_1)

{
  FUN_10b178b94();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  return;
}



/* Entry: 10b18289c; end: 10b1828d3;  */

void FUN_10b18289c(long param_1,undefined8 param_2)

{
  FUN_10b1828d4();
  FUN_10b182920(param_1,param_2);
  *(undefined1 *)(param_1 + 0x280) = 1;
  *(undefined1 *)(param_1 + 0x288) = 1;
  return;
}



/* Entry: 10b1828d4; end: 10b18291f;  */

void FUN_10b1828d4(long param_1)

{
  if (*(char *)(param_1 + 0x288) == '\x01') {
    func_0x00010b1828f8();
    *(undefined1 *)(param_1 + 0x288) = 0;
  }
  return;
}



/* Entry: 10b182920; end: 10b182963;  */

void FUN_10b182920(undefined1 *param_1,long param_2)

{
  bool bVar1;
  
  *param_1 = 0;
  param_1[0x278] = 0;
  bVar1 = *(char *)(param_2 + 0x278) != '\x01';
  if (bVar1) {
    func_0x0001052a0760();
  }
  else {
    FUN_10b12394c();
  }
  param_1[0x278] = !bVar1;
  return;
}



/* Entry: 10b182964; end: 10b1829bf;  */

long FUN_10b182964(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1829c0; end: 10b1829d7;  */

void FUN_10b1829c0(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x280) = 0;
  return;
}



/* Entry: 10b1829d8; end: 10b1829ff;  */

long FUN_10b1829d8(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  FUN_10b182a00(param_1 + 0x28);
  func_0x00010b179f40();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b178e78(unaff_x19,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x00010b148c7c(unaff_x19 + 0x18);
  func_0x00010b148c7c((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 10b182a00; end: 10b182a1f;  */

void FUN_10b182a00(long param_1)

{
  if (*(char *)(param_1 + 0x288) == '\x01') {
    func_0x00010b1828f8();
  }
  return;
}



/* Entry: 10b182a20; end: 10b182a93;  */

void FUN_10b182a20(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 10b182a94; end: 10b182b13;  */

void FUN_10b182a94(long *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    func_0x00010b182acc(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b182ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10b182b14; end: 10b182cbf;  */

void FUN_10b182b14(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uStack_588;
  long lStack_580;
  undefined8 uStack_578;
  long lStack_570;
  undefined1 auStack_568 [640];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  char cStack_2b0;
  char cStack_2a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar2 = param_1[2];
  uStack_588 = param_2;
  lStack_580 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  uStack_578 = param_2;
  lStack_570 = param_3;
  func_0x0001052a5804(&uStack_2e8,&uStack_578);
  uVar1 = uStack_2d8;
  if (cStack_2a8 == '\x01') {
    uStack_68 = uStack_2e0;
    uStack_70 = uStack_2e8;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d8 = 0;
    uStack_60 = uVar1;
    uStack_58 = uStack_2d0;
    uStack_50 = uStack_50 & 0xffffffffffffff00;
    uStack_38 = cStack_2b0 == '\x01';
    if ((bool)uStack_38) {
      uStack_48 = uStack_2c0;
      uStack_50 = uStack_2c8;
      uStack_40 = uStack_2b8;
      uStack_2b8 = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
    }
    FUN_10b1792b4(auStack_568,&uStack_70);
    func_0x0001052a03ac(&uStack_70);
    func_0x0001052a038c(&uStack_2e8);
  }
  else {
    func_0x0001052a038c(&uStack_2e8);
    FUN_10b1a23e0(&uStack_2e8,*param_1);
    func_0x00010b1792e4(auStack_568,&uStack_2e8);
    func_0x00010b121af0(&uStack_2e8);
  }
  FUN_10b179050(uVar2,auStack_568);
  func_0x00010b14917c(auStack_568);
  func_0x0001052a55c0(&uStack_578);
  func_0x0001052a55c0(&uStack_588);
  return;
}



/* Entry: 10b182cc0; end: 10b182d0f;  */

long FUN_10b182cc0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b184f20();
  FUN_10b179300();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b182d10; end: 10b182d23;  */

void FUN_10b182d10(void)

{
  func_0x00010b182ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b182d24; end: 10b182d6f;  */

void FUN_10b182d24(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b184db4();
  if (param_3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  FUN_10b182b14(param_1 + 8);
  func_0x0001052a55c0(auStack_30);
  return;
}



/* Entry: 10b182d70; end: 10b182d73;  */

void FUN_10b182d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1768;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b182d74; end: 10b182d87;  */

void FUN_10b182d74(void)

{
  FUN_10b182db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b182d88; end: 10b182db7;  */

void FUN_10b182d88(long param_1)

{
  func_0x000107c281bc(param_1 + 0x2e8);
  FUN_10b182a00(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b182db8; end: 10b182dcb;  */

void FUN_10b182db8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b182dcc; end: 10b18304b;  */

void FUN_10b182dcc(long *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [640];
  undefined1 auStack_48 [8];
  
  uStack_300 = param_2;
  lStack_2f8 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  uStack_2f0 = param_2;
  lStack_2e8 = param_3;
  func_0x00010b184e38();
  FUN_10b148ff4(auStack_2c8,&uStack_2f0);
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x2c8) == '\x01') {
    if (*(char *)(lVar1 + 0x2c0) == '\x01') {
      func_0x00010b184f3c();
      FUN_10b179180();
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_48,lVar1 + 0x40);
      __ZNSt13exception_ptrD1Ev(lVar1 + 0x40);
      func_0x00010b184f3c();
      FUN_10b149108();
      *(undefined1 *)(lVar1 + 0x2c0) = 1;
      func_0x00010b18503c();
    }
  }
  else {
    func_0x00010b184f3c();
    FUN_10b149108();
    *(undefined1 *)(lVar1 + 0x2c0) = 1;
    *(undefined1 *)(lVar1 + 0x2c8) = 1;
  }
  func_0x00010b14917c(auStack_2c8);
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x2d0);
  uStack_2d0 = *(undefined8 *)(lVar1 + 0x2e0);
  puVar3 = *(undefined8 **)(lVar1 + 0x2d8);
  *(undefined8 *)(lVar1 + 0x2d0) = 0;
  *(undefined8 *)(lVar1 + 0x2d8) = 0;
  *(undefined8 *)(lVar1 + 0x2e0) = 0;
  puStack_2e0 = puVar2;
  puStack_2d8 = puVar3;
  func_0x00010b184d38();
  for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)*puVar2)();
  }
  func_0x000107c281bc(&puStack_2e0);
  func_0x00010b184f10();
  func_0x00010b148c7c(&uStack_300);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b18304c; end: 10b18304f;  */

undefined8 * FUN_10b18304c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc17b8;
  func_0x00010b1830dc(param_1 + 1);
  return param_1;
}



/* Entry: 10b183050; end: 10b183063;  */

void FUN_10b183050(void)

{
  FUN_10b1830b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b183064; end: 10b1830af;  */

void FUN_10b183064(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b184db4();
  if (param_3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  FUN_10b182dcc(param_1 + 8);
  func_0x00010b148c7c(auStack_30);
  return;
}



/* Entry: 10b1830b0; end: 10b1830ff;  */

undefined8 * FUN_10b1830b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc17b8;
  func_0x00010b1830dc(param_1 + 1);
  return param_1;
}



/* Entry: 10b183100; end: 10b18349b;  */

void FUN_10b183100(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 extraout_w8;
  long lVar7;
  code *extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 *puVar8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  puVar4 = (undefined8 *)0x5d0;
  __Znwm();
  *puVar4 = FUN_10b184238;
  puVar4[1] = FUN_10b1844d4;
  lVar7 = param_3[1];
  uVar5 = *param_3;
  puVar4[0xab] = param_3[1];
  puVar4[0xaa] = uVar5;
  if (lVar7 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  lVar7 = param_3[3];
  uVar5 = param_3[2];
  puVar4[0xad] = param_3[3];
  puVar4[0xac] = uVar5;
  if (lVar7 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b1612a8(puVar4 + 2);
  puVar6 = puVar4 + 0xb;
  FUN_10b154f24(param_1,puVar4 + 2);
  lVar7 = param_2[1];
  puVar4[0xb5] = *param_2;
  puVar4[0xb6] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b184ff0();
  puVar8 = puVar6;
  FUN_10b12d174();
  if (((ulong)puVar8 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0xb9) = 0;
    puStack_80 = puVar4;
    puStack_78 = puVar6;
    FUN_10b12d1c8(&uStack_d0,puVar6,&puStack_80);
    if (lStack_c8 == 0) {
      return;
    }
    do {
      func_0x00010b184c98();
    } while (extraout_w11 != 0);
    if (extraout_x9 != 0) {
      return;
    }
    func_0x00010b184c30();
    func_0x00010b184d9c();
    return;
  }
  FUN_10b12d0d0(puVar6);
  puVar8 = puVar4 + 0xb3;
  func_0x000107c27b58(puVar6);
  FUN_10b18349c(puVar8,puVar4 + 0xb5);
  FUN_10b124eb8(puVar8);
  func_0x000107c27b58(puVar8);
  uVar5 = puVar4[0xb5];
  FUN_10b1827f0(uVar5);
  puVar1 = puVar4 + 0xb7;
  FUN_10b182920(puVar6,uVar5);
  uVar2 = *(char *)(puVar4 + 0x5a) == '\x01';
  if ((bool)uVar2) {
    uVar5 = puVar4[0xaa];
    FUN_10b202630(&uStack_d0,puVar6);
    func_0x00010b1f70f0(puVar8,uVar5,&uStack_d0);
    func_0x00010b184ef0();
    iVar3 = (int)*puVar8;
    func_0x00010b184f58();
    (*extraout_x8)();
    if (iVar3 == 0) {
      (**(code **)(*(long *)*puVar8 + 0x20))(&puStack_80);
      func_0x00010b185044();
      puVar8 = (undefined8 *)puVar4[0xb0];
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110cc0868;
      puVar8[1] = 0;
      FUN_10b12394c(puVar4 + 0x5b,puVar6);
      puVar4[0xb2] = puStack_78;
      puVar4[0xb1] = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      func_0x00010b184e24(puVar8 + 3);
      func_0x00010b184e90();
      func_0x00010b184f18();
      lVar7 = puVar4[0xb0];
      puVar4[0xb0] = 0;
      func_0x00010b184f34();
      puVar4[0xb7] = lVar7 + 0x18;
      puVar4[0xb8] = lVar7;
      uStack_d0 = 0;
      lStack_c8 = 0;
      FUN_10b169a18(&uStack_d0);
      func_0x000107c27d78(&puStack_80);
      func_0x00010b184fb8();
      func_0x00010b18501c();
      goto LAB_10b183268;
    }
    func_0x00010b184fb8();
  }
  func_0x00010b18501c();
  *puVar1 = 0;
  puVar4[0xb8] = 0;
LAB_10b183268:
  puVar6 = puVar1;
  FUN_10b168f60(puVar4 + 7);
  FUN_10b144044(puVar1);
  func_0x00010b184f2c();
  func_0x00010b184d40();
  *(undefined1 *)(puVar4 + 0xb9) = extraout_w8;
  func_0x00010b184cbc();
  if ((bool)uVar2) {
    puStack_68 = puVar6;
    FUN_10b168e2c(puVar4 + 2,&puStack_68);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_70);
    puStack_68 = &uStack_70;
    FUN_10b1615bc(puVar4 + 2,&puStack_68);
    __ZNSt13exception_ptrD1Ev(&uStack_70);
  }
  func_0x00010b184ec0();
  func_0x00010b185034();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b18349c; end: 10b183683;  */

void FUN_10b18349c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 extraout_w8;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 unaff_x23;
  long lVar8;
  undefined8 *puVar9;
  
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  *puVar4 = FUN_10b184170;
  puVar4[1] = FUN_10b184218;
  puVar4[10] = param_2;
  FUN_10b124f8c(puVar4 + 2);
  FUN_10b124f40(param_1,puVar4 + 2);
  FUN_10b1827bc();
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0xb) = 0;
    plVar6 = (long *)puVar4[10];
    lVar5 = *plVar6;
    func_0x00010b184e38();
    lVar8 = *plVar6;
    if ((*(byte *)(lVar8 + 0x2c8) & 1) == 0) {
      puVar9 = *(undefined8 **)(lVar8 + 0x2d8);
      uVar3 = *(undefined8 **)(lVar8 + 0x2e0) <= puVar9;
      if ((bool)uVar3) {
        lVar7 = *(long *)(lVar8 + 0x2d0);
        func_0x00010b184df0();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b18362c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b183630);
          (*pcVar2)();
        }
        func_0x00010b184c70(extraout_x8 - lVar7);
        uVar1 = extraout_x9;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b18362c;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b184c50();
        *(undefined8 *)(lVar8 + 0x2d0) = unaff_x23;
        *(undefined8 **)(lVar8 + 0x2d8) = puVar9;
        *(ulong *)(lVar8 + 0x2e0) = uVar1;
        if (lVar7 != 0) {
          func_0x00010b184fe0();
        }
      }
      else {
        *puVar9 = puVar4;
        puVar9 = puVar9 + 1;
      }
      *(undefined8 **)(lVar8 + 0x2d8) = puVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar5);
      return;
    }
    func_0x00010b184d38();
    func_0x00010b184cd4(*puVar4);
  }
  else {
    FUN_10b1827f0(*(undefined8 *)puVar4[10]);
    func_0x00010b184e70();
    func_0x00010b184d40();
    *(undefined1 *)(puVar4 + 0xb) = extraout_w8;
    func_0x00010b1850a0();
    if ((bool)in_ZR) {
      func_0x00010b184f48();
      func_0x00010b184d74();
      func_0x000107c27b6c();
    }
    else {
      func_0x00010b184cf4();
      func_0x00010b184d74();
      func_0x000104bf33ec();
      func_0x00010b184dac();
    }
    func_0x00010b184da4();
    func_0x00010b184cb4();
  }
  return;
}



/* Entry: 10b183684; end: 10b1836f3;  */

long * FUN_10b183684(long *param_1)

{
  long lVar1;
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010b184c98();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b184f58();
      (*extraout_x8)();
    }
  }
  return param_1;
}



/* Entry: 10b1836f4; end: 10b183707;  */

void FUN_10b1836f4(void)

{
  func_0x00010b1836c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b183708; end: 10b183d67;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b183708(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long *plVar8;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined1 auStack_100 [16];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long alStack_58 [3];
  
  FUN_10b1a2b7c(auStack_100,*(undefined8 *)(param_1 + 0xb8),
                *(undefined8 *)(*(long *)(param_1 + 0xb0) + 8));
  lStack_108 = *(long *)(param_1 + 0xc0);
  puStack_110 = *(undefined8 **)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xc0) != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  puStack_130 = (undefined8 *)0x0;
  lStack_128 = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  func_0x0001052a5474(&puStack_d0,auStack_100,alStack_58 + 1);
  func_0x0001052a549c(&puStack_130,&puStack_d0);
  func_0x0001052a55c0(&puStack_d0);
  func_0x0001052a55c0(alStack_58 + 1);
  FUN_10b17891c(&lStack_a0);
  FUN_10b178968(&lStack_70,lStack_a0);
  puStack_c8 = (undefined8 *)lStack_108;
  puStack_d0 = puStack_110;
  if (lStack_108 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  lStack_c0 = lStack_a0;
  lStack_a0 = 0;
  puStack_80 = (undefined8 *)0x0;
  lStack_78 = 0;
  puStack_90 = puStack_130 + 0x10;
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  puVar4 = puStack_130;
  func_0x0001052a54c0();
  if ((int)puVar4 == 0) {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_SUB_110cc1728;
    puVar4[2] = puStack_c8;
    puVar4[1] = puStack_d0;
    if (puStack_c8 != (undefined8 *)0x0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b1850ac();
    lVar7 = *(long *)(extraout_x9 + 200);
    *(undefined8 **)(extraout_x9 + 200) = puVar4;
    if (lVar7 != 0) {
      func_0x00010b184d20();
    }
  }
  else {
    func_0x0001052a549c(&puStack_80,&puStack_130);
  }
  func_0x00010b184ee0();
  if (puStack_80 != (undefined8 *)0x0) {
    puStack_90 = puStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10_02 != 0);
    }
    FUN_10b182b14(&puStack_d0);
    func_0x0001052a55c0(&puStack_90);
  }
  uStack_e8 = uStack_68;
  lStack_f0 = lStack_70;
  lStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052a55c0(&puStack_80);
  FUN_10b182cc0(&puStack_d0);
  func_0x00010b148c7c(&lStack_70);
  lVar7 = lStack_a0;
  lStack_a0 = 0;
  if (lVar7 != 0) {
    func_0x00010b184ca8();
  }
  func_0x0001052a55c0(&puStack_130);
  puVar5 = (undefined8 *)0x300;
  __Znwm();
  plVar8 = puVar5 + 1;
  *plVar8 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110cc1768;
  puVar4 = puVar5 + 3;
  _bzero(puVar4,0x2e8);
  __ZNSt3__115recursive_mutexC1Ev(puVar4);
  *(undefined1 *)(puVar5 + 0xb) = 0;
  *(undefined1 *)(puVar5 + 0x5c) = 0;
  puVar5[0x5d] = 0;
  puVar5[0x5f] = 0;
  puVar5[0x5e] = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_130 = (undefined8 *)0x0;
  lStack_128 = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  puStack_e0 = puVar4;
  puStack_d8 = puVar5;
  puStack_b0 = puVar4;
  puStack_a8 = puVar5;
  FUN_10b148df4(&puStack_d0,&lStack_f0,alStack_58 + 1);
  FUN_10b148e1c(&puStack_130,&puStack_d0);
  func_0x00010b148c7c(&puStack_d0);
  func_0x00010b148c7c(alStack_58 + 1);
  func_0x000107c27b48(alStack_58);
  func_0x000107c27b4c(&lStack_70,alStack_58[0]);
  lStack_c0 = alStack_58[0];
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  alStack_58[0] = 0;
  puStack_80 = (undefined8 *)0x0;
  lStack_78 = 0;
  puStack_90 = puStack_130 + 0x57;
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  puStack_d0 = puVar4;
  puStack_c8 = puVar5;
  __ZNSt3__15mutex4lockEv();
  puVar6 = puStack_130;
  func_0x00010b148c44();
  if ((int)puVar6 == 0) {
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    *puVar6 = &PTR_FUN_110cc17b8;
    puVar6[2] = puStack_c8;
    puVar6[1] = puStack_d0;
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    func_0x00010b1850ac();
    lVar7 = *(long *)(extraout_x9_00 + 0x300);
    *(undefined8 **)(extraout_x9_00 + 0x300) = puVar6;
    if (lVar7 != 0) {
      func_0x00010b184d20();
    }
  }
  else {
    FUN_10b148e1c(&puStack_80,&puStack_130);
  }
  func_0x00010b184ee0();
  if (puStack_80 != (undefined8 *)0x0) {
    puStack_90 = puStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10_03 != 0);
    }
    FUN_10b182dcc(&puStack_d0);
    func_0x00010b148c7c(&puStack_90);
  }
  uStack_98 = uStack_68;
  lStack_a0 = lStack_70;
  lStack_70 = 0;
  uStack_68 = 0;
  func_0x00010b148c7c(&puStack_80);
  func_0x00010b1830dc(&puStack_d0);
  func_0x000107c27b58(&lStack_70);
  lVar7 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar7 != 0) {
    func_0x00010b184ca8();
  }
  func_0x00010b184f10();
  func_0x000107c27b58(&lStack_a0);
  FUN_10b182964(&puStack_b0);
  func_0x00010b148c7c(&lStack_f0);
  func_0x00010b129c40(&puStack_110);
  func_0x0001052a55c0(auStack_100);
  puStack_130 = *(undefined8 **)(param_1 + 200);
  lStack_128 = *(long *)(param_1 + 0xd0);
  if (lStack_128 != 0) {
    plVar8 = (long *)(lStack_128 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_120 = *(undefined8 *)(param_1 + 0xd8);
  lStack_118 = *(long *)(param_1 + 0xe0);
  if (lStack_118 != 0) {
    plVar8 = (long *)(lStack_118 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lStack_128 != 0) {
    plVar8 = (long *)(lStack_128 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_d0 = puStack_130;
  puStack_c8 = (undefined8 *)lStack_128;
  lStack_c0 = uStack_120;
  lStack_b8 = lStack_118;
  if (lStack_118 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10_04 != 0);
  }
  FUN_10b183100(alStack_58 + 1,&puStack_e0,&puStack_d0);
  FUN_10b144ed8(&lStack_70,alStack_58 + 1);
  FUN_10b141ca0(alStack_58 + 1);
  func_0x00010b182af0(&puStack_d0);
  func_0x00010b182af0(&puStack_130);
  puStack_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  uStack_138 = uStack_68;
  lStack_140 = lStack_70;
  lStack_70 = 0;
  uStack_68 = 0;
  puStack_150 = puVar4;
  puStack_148 = puVar5;
  func_0x00010b141cc4(&lStack_70);
  func_0x00010b184fd0();
  puStack_d0 = (undefined8 *)(param_1 + 0x18);
  puStack_c8 = (undefined8 *)CONCAT71(puStack_c8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar7 = param_1;
  func_0x000107c28058();
  puVar5 = puStack_148;
  puVar4 = puStack_150;
  if ((int)lVar7 != 0) {
    func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b183bc4);
    (*pcVar3)();
  }
  puStack_150 = (undefined8 *)0x0;
  puStack_148 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x98) = puVar5;
  *(undefined8 **)(param_1 + 0x90) = puVar4;
  *(undefined8 *)(param_1 + 0xa8) = uStack_138;
  *(long *)(param_1 + 0xa0) = lStack_140;
  lStack_140 = 0;
  uStack_138 = 0;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
  func_0x000107c2798c(&puStack_d0);
  func_0x00010b182acc(&puStack_150);
  return;
}



/* Entry: 10b183d68; end: 10b183d6b;  */

void FUN_10b183d68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


