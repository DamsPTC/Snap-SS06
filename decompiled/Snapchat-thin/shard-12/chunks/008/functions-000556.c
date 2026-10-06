/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109905074; end: 1099057d3;  */

void FUN_109905074(double param_1,undefined8 *param_2,long param_3,long param_4,long *param_5,
                  double *param_6)

{
  long lVar1;
  uint *puVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  double dVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double *pdVar27;
  double dVar28;
  double *pdVar29;
  undefined8 uVar30;
  double *pdVar31;
  ulong uVar32;
  double *pdVar33;
  int iVar34;
  uint uVar35;
  double *pdVar36;
  undefined8 *puVar37;
  long *plVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dStack_1d8;
  double dStack_1d0;
  double *pdStack_1c8;
  double *pdStack_1c0;
  double *pdStack_1b8;
  double *pdStack_1b0;
  long alStack_1a8 [3];
  long *plStack_190;
  long lStack_188;
  double *pdStack_180;
  double *pdStack_178;
  double *pdStack_170;
  double *pdStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  long lStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  ulong uStack_120;
  double *pdStack_118;
  double *pdStack_110;
  ulong uStack_108;
  ulong uStack_100;
  double *pdStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  double dStack_e0;
  long *plStack_d8;
  double *pdStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double adStack_90 [3];
  double *pdStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar38 = param_5;
  pdVar36 = param_6;
  dStack_e0 = param_1;
  pdStack_d0 = param_6;
  plStack_c8 = param_5;
  lStack_c0 = param_4;
  lStack_b8 = param_3;
  (**(code **)(*param_5 + 0x20))();
  puStack_128 = param_2;
  if ((0 < (int)plVar38) && ((**(code **)(*param_5 + 0x18))(param_5), param_6 != (double *)0x0)) {
    (**(code **)(*param_5 + 0x20))();
    uVar32 = (ulong)(int)param_5;
    uVar20 = (ulong)param_6 >> 3 & 1;
    if ((long)(int)param_5 <= (long)uVar20) {
      uVar20 = uVar32;
    }
    if (((ulong)param_6 & 7) != 0) {
      uVar20 = uVar32;
    }
    lVar26 = uVar32 - uVar20;
    if (0 < (long)uVar20) {
      _bzero(param_6,uVar20 << 3);
    }
    lVar1 = (lVar26 - (lVar26 >> 0x3f) & 0xfffffffffffffffeU) + uVar20;
    if (1 < lVar26) {
      lVar12 = lVar1;
      if (lVar1 <= (long)(uVar20 + 2)) {
        lVar12 = uVar20 + 2;
      }
      _bzero(param_6 + uVar20,(lVar12 + ~uVar20 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    param_2 = puStack_128;
    if (lVar1 < (long)uVar32) {
      _bzero(param_6 + (lVar26 / 2) * 2 + uVar20,(lVar26 % 2) * 8);
    }
  }
  dVar22 = dStack_e0;
  plStack_d8 = (long *)*param_2;
  if (param_4 != 0) {
    lVar26 = *plStack_d8;
    lVar1 = plStack_d8[1];
    uVar30 = *(undefined8 *)((long)dStack_e0 + 0x10);
    uVar8 = *(undefined4 *)((long)dStack_e0 + 0x18);
    uVar9 = *(undefined4 *)((long)dStack_e0 + 8);
    pdVar14 = (double *)0x28;
    __Znwm();
    *pdVar14 = (double)&PTR_FUN_110b1d0d0;
    pdVar14[1] = dVar22;
    pdVar14[2] = (double)&plStack_c8;
    pdVar14[3] = (double)&plStack_d8;
    pdVar14[4] = (double)&lStack_c0;
    pdStack_78 = pdVar14;
    FUN_109914f50(uVar30,uVar8,(ulong)(lVar1 - lVar26) >> 3,uVar9,adStack_90);
    if (pdStack_78 == adStack_90) {
      lVar26 = 0x20;
    }
    else {
      if (pdStack_78 == (double *)0x0) goto LAB_109905228;
      lVar26 = 0x28;
    }
    (**(code **)((long)*pdStack_78 + lVar26))();
  }
LAB_109905228:
  pdVar29 = *(double **)((long)dStack_e0 + 0x10);
  lVar26 = *(long *)((long)dStack_e0 + 0x38);
  lVar1 = *(long *)((long)dStack_e0 + 0x40);
  pdVar31 = (double *)(ulong)*(uint *)((long)dStack_e0 + 8);
  pdVar14 = (double *)0x40;
  __Znwm();
  puVar37 = puStack_128;
  *pdVar14 = (double)&PTR_DAT_110b1d150;
  pdVar14[1] = dStack_e0;
  pdVar16 = (double *)((ulong)(lVar1 - lVar26) >> 5);
  pdVar14[2] = (double)&plStack_d8;
  pdVar14[3] = (double)&lStack_c0;
  pdVar14[4] = (double)puStack_128;
  pdVar14[5] = (double)&lStack_b8;
  pdVar14[6] = (double)&plStack_c8;
  pdVar14[7] = (double)&pdStack_d0;
  pdVar27 = adStack_90;
  pdVar18 = adStack_90;
  pdVar15 = (double *)0x0;
  pdVar17 = pdVar31;
  pdStack_78 = pdVar14;
  FUN_10991514c(pdVar29);
  pdVar14 = pdStack_78;
  if (pdStack_78 == pdVar27) {
    lVar26 = 0x20;
LAB_1099052b8:
    (**(code **)((long)*pdStack_78 + lVar26))();
  }
  else if (pdStack_78 != (double *)0x0) {
    lVar26 = 0x28;
    goto LAB_1099052b8;
  }
  uVar20 = (ulong)*(int *)((long)dStack_e0 + 100);
  plVar38 = (long *)*puVar37;
  lVar26 = plVar38[3];
  if (uVar20 < (ulong)(plVar38[4] - lVar26 >> 5)) {
    lStack_138 = lStack_b8;
    plStack_e8 = plStack_c8;
    pdStack_118 = (double *)puVar37[1];
    pdStack_110 = pdStack_d0;
    plStack_130 = plVar38;
    do {
      plStack_f0 = (long *)*puVar37;
      pdVar29 = (double *)(plStack_f0[3] + ((long)(uVar20 << 0x20) >> 0x1b));
      dVar22 = pdVar29[1];
      if (pdVar29[2] != dVar22) {
        lVar26 = puVar37[1];
        uStack_100 = 1;
        pdStack_f8 = (double *)0x0;
        uVar32 = 0;
        uStack_120 = uVar20;
        do {
          iVar10 = *(int *)((long)dVar22 + uVar32 * 8);
          pdVar31 = (double *)(ulong)(uint)(iVar10 - *(int *)((long)dStack_e0 + 0x18));
          pdVar33 = (double *)(ulong)*(uint *)(*plStack_f0 + (long)iVar10 * 8);
          pdVar17 = adStack_90;
          pdVar18 = (double *)&uStack_94;
          pdVar36 = (double *)&uStack_98;
          plVar38 = plStack_e8;
          pdVar15 = pdVar31;
          pdVar16 = pdVar31;
          (**(code **)(*plStack_e8 + 0x10))();
          pdVar14 = (double *)0x0;
          if (plVar38 != (long *)0x0) {
            __ZNSt3__15mutex4lockEv(plVar38 + 1);
            pdVar17 = (double *)(lVar26 + (long)*(int *)((long)pdVar29[1] + uVar32 * 8 + 4) * 8);
            pdVar15 = (double *)(ulong)*(uint *)pdVar29;
            uStack_14c = uStack_98;
            uStack_148 = uStack_a0._4_4_;
            uStack_150 = uStack_94;
            pdVar16 = pdVar33;
            pdVar18 = pdVar15;
            pdVar36 = pdVar33;
            FUN_109904224();
            pdVar14 = (double *)(plVar38 + 1);
            __ZNSt3__15mutex6unlockEv();
          }
          uStack_108 = uVar32 + 1;
          dVar22 = pdVar29[1];
          uVar21 = (long)pdVar29[2] - (long)dVar22 >> 3;
          uVar20 = uStack_100;
          pdVar27 = pdStack_f8;
          if (uStack_108 < uVar21) {
            do {
              pdVar16 = (double *)
                        (ulong)(uint)(*(int *)((long)pdVar27 + (long)dVar22 + 8) -
                                     *(int *)((long)dStack_e0 + 0x18));
              pdVar17 = (double *)&uStack_a0;
              pdVar18 = (double *)&uStack_a4;
              pdVar36 = (double *)&uStack_a8;
              plVar38 = plStack_e8;
              pdVar15 = pdVar31;
              (**(code **)(*plStack_e8 + 0x10))();
              pdVar14 = (double *)0x0;
              if (plVar38 != (long *)0x0) {
                pdVar36 = (double *)
                          (ulong)*(uint *)(*plStack_f0 +
                                          (long)*(int *)((long)pdVar27 + (long)pdVar29[1] + 8) * 8);
                __ZNSt3__15mutex4lockEv(plVar38 + 1);
                dVar22 = pdVar29[1];
                pdVar15 = (double *)(ulong)*(uint *)pdVar29;
                pdVar17 = (double *)
                          (lVar26 + (long)*(int *)((long)pdVar27 + (long)dVar22 + 0xc) * 8);
                uStack_14c = uStack_a8;
                uStack_148 = uStack_ac;
                uStack_150 = uStack_a4;
                pdVar16 = pdVar33;
                pdVar18 = pdVar15;
                FUN_109904224(lVar26 + (long)*(int *)((long)dVar22 + uVar32 * 8 + 4) * 8);
                pdVar14 = (double *)(plVar38 + 1);
                __ZNSt3__15mutex6unlockEv();
              }
              uVar20 = uVar20 + 1;
              dVar22 = pdVar29[1];
              uVar21 = (long)pdVar29[2] - (long)dVar22 >> 3;
              pdVar27 = pdVar27 + 1;
            } while (uVar20 < uVar21);
          }
          uStack_100 = uStack_100 + 1;
          pdStack_f8 = pdStack_f8 + 1;
          uVar32 = uStack_108;
        } while (uStack_108 < uVar21);
        lVar26 = plStack_130[3];
        puVar37 = puStack_128;
        uVar20 = uStack_120;
        plVar38 = plStack_130;
      }
      if (pdStack_110 != (double *)0x0) {
        puVar2 = (uint *)(lVar26 + uVar20 * 0x20);
        lVar1 = *(long *)(puVar2 + 2);
        lVar12 = *(long *)(puVar2 + 4) - lVar1;
        if (lVar12 != 0) {
          lVar23 = 0;
          lVar24 = *plVar38;
          iVar10 = *(int *)((long)dStack_e0 + 0x18);
          uVar7 = *puVar2;
          pdVar33 = (double *)(lStack_138 + (long)(int)puVar2[1] * 8);
          lVar25 = *(long *)((long)dStack_e0 + 0x20);
          uVar6 = uVar7 & 0xfffffffc;
          do {
            piVar3 = (int *)(lVar1 + lVar23 * 8);
            iVar34 = *piVar3;
            uVar11 = *(uint *)(lVar24 + (long)iVar34 * 8);
            pdVar17 = (double *)(long)(int)uVar11;
            pdVar14 = pdStack_118 + piVar3[1];
            pdVar15 = pdStack_110 + *(int *)(lVar25 + (long)(iVar34 - iVar10) * 4);
            pdVar18 = pdStack_118;
            if (((ulong)pdVar17 & 1) == 0) {
LAB_1099055a8:
              uVar32 = (ulong)uVar11;
              pdVar16 = (double *)(ulong)(uVar11 & 0xfffffffc);
              if ((uVar11 >> 1 & 1) != 0) {
                pdVar18 = (double *)(long)(int)(uVar11 & 0xfffffffc);
                if ((int)uVar7 < 1) {
                  dVar22 = 0.0;
                  dVar39 = 0.0;
                }
                else {
                  dVar22 = 0.0;
                  dVar39 = 0.0;
                  pdVar36 = pdVar14 + (long)pdVar18;
                  pdVar19 = pdVar33;
                  uVar35 = uVar7;
                  do {
                    dVar22 = dVar22 + *pdVar36 * *pdVar19;
                    dVar39 = dVar39 + pdVar36[1] * *pdVar19;
                    pdVar36 = pdVar36 + (long)pdVar17;
                    uVar35 = uVar35 - 1;
                    pdVar19 = pdVar19 + 1;
                  } while (uVar35 != 0);
                  pdVar36 = (double *)0x0;
                }
                pdVar17 = (double *)((long)pdVar18 * 8);
                dVar28 = pdVar15[(long)pdVar18];
                (pdVar15 + (long)pdVar18)[1] = dVar39 + (pdVar15 + (long)pdVar18)[1];
                pdVar15[(long)pdVar18] = dVar22 + dVar28;
              }
              if (3 < (int)uVar11) {
                pdVar17 = (double *)0x0;
                pdVar18 = (double *)(uVar32 * 0x20);
                pdVar36 = (double *)(uVar32 * 8);
                pdVar27 = pdVar14;
                do {
                  pdVar31 = pdVar33;
                  if ((int)uVar7 < 4) {
                    pdVar29 = pdVar14 + (long)pdVar17;
                    dVar22 = 0.0;
                    dVar39 = 0.0;
                    dVar28 = 0.0;
                    dVar40 = 0.0;
                  }
                  else {
                    iVar34 = 0;
                    dVar22 = 0.0;
                    dVar39 = 0.0;
                    dVar28 = 0.0;
                    dVar40 = 0.0;
                    pdVar29 = pdVar27;
                    do {
                      pdVar19 = (double *)((long)pdVar29 + (long)(pdVar36 + 2));
                      dVar13 = *pdVar31;
                      dVar41 = pdVar31[1];
                      pdVar4 = pdVar29 + uVar32 * 2 + 2;
                      dVar42 = pdVar31[2];
                      dVar43 = pdVar31[3];
                      pdVar5 = pdVar29 + (ulong)uVar11 * 3 + 2;
                      dVar22 = dVar22 + dVar13 * *pdVar29 + pdVar19[-2] * dVar41 +
                               pdVar4[-2] * dVar42 + pdVar5[-2] * dVar43;
                      dVar39 = dVar39 + dVar13 * pdVar29[1] + pdVar19[-1] * dVar41 +
                               pdVar4[-1] * dVar42 + pdVar5[-1] * dVar43;
                      dVar28 = dVar28 + dVar13 * pdVar29[2] + *pdVar19 * dVar41 + *pdVar4 * dVar42 +
                               *pdVar5 * dVar43;
                      dVar40 = dVar40 + dVar13 * pdVar29[3] + pdVar19[1] * dVar41 +
                               pdVar4[1] * dVar42 + pdVar5[1] * dVar43;
                      pdVar31 = pdVar31 + 4;
                      iVar34 = iVar34 + 4;
                      pdVar29 = pdVar29 + uVar32 * 4;
                    } while (iVar34 < (int)uVar6);
                  }
                  if (uVar6 != uVar7) {
                    pdVar29 = pdVar29 + 2;
                    uVar35 = uVar6;
                    do {
                      dVar13 = *pdVar31;
                      pdVar31 = pdVar31 + 1;
                      dVar22 = dVar22 + dVar13 * pdVar29[-2];
                      dVar39 = dVar39 + dVar13 * pdVar29[-1];
                      dVar28 = dVar28 + dVar13 * *pdVar29;
                      dVar40 = dVar40 + dVar13 * pdVar29[1];
                      uVar35 = uVar35 + 1;
                      pdVar29 = pdVar29 + uVar32;
                    } while ((int)uVar35 < (int)uVar7);
                  }
                  pdVar29 = pdVar15 + (long)pdVar17;
                  pdVar29[1] = dVar39 + pdVar29[1];
                  *pdVar29 = dVar22 + *pdVar29;
                  pdVar29[3] = dVar40 + pdVar29[3];
                  pdVar29[2] = dVar28 + pdVar29[2];
                  pdVar17 = (double *)((long)pdVar17 + 4);
                  pdVar27 = pdVar27 + 4;
                } while (pdVar17 < pdVar16);
              }
            }
            else {
              pdVar16 = (double *)(long)(int)(uVar11 - 1);
              if ((int)uVar7 < 1) {
                dVar22 = 0.0;
              }
              else {
                dVar22 = 0.0;
                pdVar36 = pdVar14 + (long)pdVar16;
                pdVar18 = pdVar33;
                uVar35 = uVar7;
                do {
                  dVar22 = dVar22 + *pdVar18 * *pdVar36;
                  pdVar36 = pdVar36 + (long)pdVar17;
                  uVar35 = uVar35 - 1;
                  pdVar18 = pdVar18 + 1;
                } while (uVar35 != 0);
                pdVar36 = (double *)0x0;
                pdVar18 = (double *)((long)pdVar17 * 8);
              }
              pdVar15[(long)pdVar16] = dVar22 + pdVar15[(long)pdVar16];
              if (uVar11 != 1) goto LAB_1099055a8;
            }
            lVar23 = lVar23 + 1;
          } while (lVar23 != lVar12 >> 3);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < (ulong)(plVar38[4] - lVar26 >> 5));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (pdStack_78 == pdVar27) {
    lVar26 = 0x20;
LAB_1099057a4:
    (**(code **)((long)*pdStack_78 + lVar26))();
  }
  else if (pdStack_78 != (double *)0x0) {
    lVar26 = 0x28;
    goto LAB_1099057a4;
  }
  pdVar33 = pdVar14;
  __Unwind_Resume();
  pcStack_158 = FUN_1099057d4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_1d0 = *pdVar15;
  dStack_1d8 = pdVar15[1];
  dVar28 = pdVar33[2];
  dVar22 = pdVar33[7];
  dVar39 = pdVar33[8];
  uVar8 = *(undefined4 *)(pdVar33 + 1);
  plVar38 = (long *)0x40;
  pdStack_1c8 = pdVar36;
  pdStack_1c0 = pdVar18;
  pdStack_1b8 = pdVar17;
  pdStack_1b0 = pdVar16;
  pdStack_180 = pdVar31;
  pdStack_178 = pdVar29;
  pdStack_170 = pdVar27;
  pdStack_168 = pdVar14;
  puStack_160 = &stack0xfffffffffffffff0;
  __Znwm();
  *plVar38 = (long)&PTR_FUN_110b1d1e0;
  plVar38[1] = (long)pdVar33;
  plVar38[2] = (long)&dStack_1d0;
  plVar38[3] = (long)&pdStack_1c8;
  plVar38[4] = (long)&pdStack_1b8;
  plVar38[5] = (long)&pdStack_1b0;
  plVar38[6] = (long)&dStack_1d8;
  plVar38[7] = (long)&pdStack_1c0;
  plStack_190 = plVar38;
  FUN_109914f50(dVar28,0,(ulong)((long)dVar39 - (long)dVar22) >> 5,uVar8,alStack_1a8);
  plVar38 = plStack_190;
  if (plStack_190 == alStack_1a8) {
    lVar26 = 0x20;
LAB_109905894:
    (**(code **)(*plStack_190 + lVar26))();
  }
  else if (plStack_190 != (long *)0x0) {
    lVar26 = 0x28;
    goto LAB_109905894;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_190 == alStack_1a8) {
    lVar26 = 0x20;
  }
  else {
    if (plStack_190 == (long *)0x0) goto LAB_109905900;
    lVar26 = 0x28;
  }
  (**(code **)(*plStack_190 + lVar26))();
LAB_109905900:
  __Unwind_Resume(plVar38);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  return;
}



/* Entry: 1099057d4; end: 109905907;  */

void FUN_1099057d4(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *param_2;
  uStack_88 = param_2[1];
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 8);
  plVar3 = (long *)0x40;
  uStack_78 = param_6;
  uStack_70 = param_5;
  uStack_68 = param_4;
  uStack_60 = param_3;
  __Znwm();
  *plVar3 = (long)&PTR_FUN_110b1d1e0;
  plVar3[1] = param_1;
  plVar3[2] = (long)&uStack_80;
  plVar3[3] = (long)&uStack_78;
  plVar3[4] = (long)&uStack_68;
  plVar3[5] = (long)&uStack_60;
  plVar3[6] = (long)&uStack_88;
  plVar3[7] = (long)&uStack_70;
  plStack_40 = plVar3;
  FUN_109914f50(uVar5,0,(ulong)(lVar1 - lVar4) >> 5,uVar2,alStack_58);
  plVar3 = plStack_40;
  if (plStack_40 == alStack_58) {
    lVar4 = 0x20;
LAB_109905894:
    (**(code **)(*plStack_40 + lVar4))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_109905894;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar4 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_109905900;
    lVar4 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar4))();
LAB_109905900:
  __Unwind_Resume(plVar3);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  return;
}



/* Entry: 109905908; end: 10990592f;  */

void FUN_109905908(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  return;
}



/* Entry: 109905930; end: 109905937;  */

void FUN_109905930(void)

{
  return;
}



/* Entry: 109905938; end: 109905977;  */

void FUN_109905938(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110b1d0d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 109905978; end: 10990599f;  */

void FUN_109905978(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_110b1d0d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1099059a0; end: 109905a7b;  */

void FUN_1099059a0(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  long lVar8;
  int iStack_40;
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_34;
  
  iVar2 = *param_2;
  iVar3 = iVar2 - *(int *)(*(long *)(param_1 + 8) + 0x18);
  plVar4 = (long *)**(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x10))(plVar4,iVar3,iVar3,&iStack_34,&iStack_38,auStack_3c,&iStack_40);
  if (plVar4 != (long *)0x0) {
    piVar1 = (int *)(*(long *)**(undefined8 **)(param_1 + 0x18) + (long)iVar2 * 8);
    lVar8 = **(long **)(param_1 + 0x20);
    iVar2 = *piVar1;
    lVar7 = (long)iVar2;
    iVar3 = piVar1[1];
    __ZNSt3__15mutex4lockEv(plVar4 + 1);
    if (0 < iVar2) {
      pdVar6 = (double *)(*plVar4 + (long)iStack_38 * 8 + (long)iStack_34 * (long)iStack_40 * 8);
      pdVar5 = (double *)(lVar8 + (long)iVar3 * 8);
      do {
        *pdVar6 = *pdVar5 * *pdVar5 + *pdVar6;
        pdVar6 = pdVar6 + (long)iStack_40 + 1;
        lVar7 = lVar7 + -1;
        pdVar5 = pdVar5 + 1;
      } while (lVar7 != 0);
    }
    __ZNSt3__15mutex6unlockEv(plVar4 + 1);
  }
  return;
}



/* Entry: 109905a7c; end: 109905acf;  */

/* WARNING: Removing unreachable block (ram,0x000109905ab0) */

long FUN_109905a7c(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00c8d8) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109905ad0; end: 109905ae3;  */

undefined ** FUN_109905ad0(void)

{
  return &PTR_DAT_110b1d130;
}



/* Entry: 109905ae4; end: 109905b33;  */

void FUN_109905ae4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = &PTR_DAT_110b1d150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



/* Entry: 109905b34; end: 109905b6b;  */

void FUN_109905b34(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_DAT_110b1d150;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[7] = *(undefined8 *)(param_1 + 0x38);
  param_2[6] = uVar6;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109905b6c; end: 1099075fb;  */

/* WARNING: Removing unreachable block (ram,0x000109907630) */

double * FUN_109905b6c(long param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  double *pdVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  code *pcVar14;
  bool bVar15;
  undefined1 *puVar16;
  long *plVar17;
  double *pdVar18;
  uint uVar19;
  double *pdVar20;
  double *pdVar21;
  long lVar22;
  long lVar23;
  double *pdVar24;
  long lVar25;
  ulong uVar26;
  double *pdVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  int *piVar35;
  long lVar36;
  int *piVar37;
  double *pdVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long *plVar42;
  uint uVar43;
  uint uVar44;
  int *piVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  int iVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  long lVar53;
  long *plVar54;
  ulong uVar55;
  long *plVar56;
  int iVar57;
  ulong uVar58;
  double *pdVar59;
  long lVar60;
  long lVar61;
  double *pdVar62;
  long lVar63;
  ulong uVar64;
  undefined8 uVar65;
  double *pdVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  int iStack_1d0;
  ulong uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulong uStack_160;
  double *pdStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined1 auStack_120 [64];
  ulong uStack_e0;
  undefined1 *puStack_d8;
  double dStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  double *pdStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar9 = *param_2;
  lVar8 = *(long *)(param_1 + 8);
  lVar39 = *(long *)(lVar8 + 0x50);
  uVar58 = (ulong)*(int *)(lVar8 + 0x60);
  iVar13 = *(int *)(lVar8 + 0x60) * iVar9;
  uVar1 = lVar39 + (long)iVar13 * 8;
  piVar3 = (int *)(*(long *)(lVar8 + 0x38) + (long)*param_3 * 0x20);
  lVar53 = (long)**(int **)(((long *)**(long **)(param_1 + 0x10))[3] + (long)piVar3[1] * 0x20 + 8);
  uVar12 = *(uint *)(*(long *)**(long **)(param_1 + 0x10) + lVar53 * 8);
  uVar28 = (ulong)(int)uVar12;
  uVar29 = uVar1 >> 3 & 1;
  if ((long)uVar58 <= (long)uVar29) {
    uVar29 = uVar58;
  }
  if ((uVar1 & 7) != 0) {
    uVar29 = uVar58;
  }
  lVar61 = uVar58 - uVar29;
  if (0 < (long)uVar29) {
    _bzero(uVar1,uVar29 << 3);
  }
  lVar30 = (lVar61 - (lVar61 >> 0x3f) & 0xfffffffffffffffeU) + uVar29;
  if (1 < lVar61) {
    lVar32 = lVar30;
    if (lVar30 <= (long)(uVar29 + 2)) {
      lVar32 = uVar29 + 2;
    }
    _bzero(uVar1 + uVar29 * 8,(lVar32 + ~uVar29 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  if (lVar30 < (long)uVar58) {
    _bzero(uVar1 + (lVar61 / 2) * 0x10 + uVar29 * 8,(lVar61 % 2) * 8);
  }
  pdStack_150 = (double *)0x0;
  uStack_148 = 0;
  uStack_140 = 0;
  if (uVar12 != 0) {
    lVar61 = 0;
    if (uVar28 != 0) {
      lVar61 = 0x7fffffffffffffff / (long)uVar28;
    }
    if ((long)uVar28 <= lVar61 && (ulong)((long)(int)uVar12 * (long)(int)uVar12) >> 0x3d == 0) {
      pdVar62 = (double *)((long)(int)uVar12 * (long)(int)uVar12 * 8);
      _malloc();
      if (pdVar62 != (double *)0x0) {
        lVar61 = **(long **)(param_1 + 0x18);
        pdStack_150 = pdVar62;
        if (lVar61 != 0) goto LAB_109905d08;
        uStack_148 = uVar28;
        uStack_140 = uVar28;
        _bzero();
        goto LAB_109905d2c;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109907538:
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10990753c);
    (*pcVar14)();
  }
  lVar61 = **(long **)(param_1 + 0x18);
  uStack_148 = uVar28;
  uStack_140 = uVar28;
  if (lVar61 == 0) {
LAB_109905d54:
    puVar16 = auStack_120;
    bVar15 = true;
    uStack_e0 = uVar28;
  }
  else {
LAB_109905d08:
    uStack_148 = uVar28;
    uStack_140 = uVar28;
    FUN_1099091a4(&pdStack_150,
                  lVar61 + (long)*(int *)(*(long *)**(undefined8 **)(param_1 + 0x10) + lVar53 * 8 +
                                         4) * 8,uVar28);
LAB_109905d2c:
    if (uVar12 < 9) goto LAB_109905d54;
    if ((int)uVar12 < 0) {
      uStack_e0 = uVar28;
      func_0x000104c4f740();
      goto LAB_109907538;
    }
    puVar16 = (undefined1 *)(uVar28 << 3);
    uStack_e0 = uVar28;
    __Znwm();
    bVar15 = false;
  }
  uVar29 = (ulong)puVar16 >> 3 & 1;
  if (uVar28 <= uVar29) {
    uVar29 = uVar28;
  }
  if (((ulong)puVar16 & 7) != 0) {
    uVar29 = uVar28;
  }
  lVar53 = uVar28 - uVar29;
  iVar57 = (int)lVar53;
  uVar19 = iVar57 / 2;
  puStack_d8 = puVar16;
  if (uVar29 != 0) {
    _bzero(puVar16,uVar29 << 3);
  }
  lVar61 = uVar29 + (long)(int)uVar19 * 2;
  if (1 < lVar53) {
    lVar30 = lVar61;
    if (lVar61 <= (long)(uVar29 + 2)) {
      lVar30 = uVar29 + 2;
    }
    _bzero(puVar16 + uVar29 * 8,(lVar30 + ~uVar29 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  if (lVar61 < (long)uVar28) {
    _bzero(puVar16 + uVar29 * 8 +
                     ((long)((ulong)(uint)(iVar57 - (iVar57 >> 0x1f)) << 0x20) >> 0x21) * 0x10,
           (lVar53 - (-(ulong)(uVar19 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar19 << 1)) * 8);
  }
  puVar16 = puStack_d8;
  uVar29 = uStack_148;
  if (0 < *piVar3) {
    lVar53 = 0;
    plVar56 = *(long **)(param_1 + 0x20);
    lVar30 = **(long **)(param_1 + 0x28);
    plVar31 = (long *)**(long **)(param_1 + 0x30);
    plVar42 = (long *)*plVar56;
    lVar61 = plVar56[1];
    iVar57 = piVar3[1];
    iStack_1d0 = *(int *)(plVar42[3] + (long)iVar57 * 0x20 + 4);
    uVar19 = (uint)uStack_148;
    lVar32 = (long)(int)(uVar19 - 1);
    uVar58 = (ulong)(int)uVar19;
    pdVar62 = (double *)(puStack_d8 + (uVar58 & 0xfffffffffffffffc) * 8);
    uVar40 = uStack_148 & 0xfffffffc;
    piVar45 = piVar3 + 4;
    do {
      lVar36 = lVar53 + iVar57;
      puVar4 = (uint *)(plVar42[3] + lVar36 * 0x20);
      lVar63 = *(long *)(puVar4 + 2);
      if (8 < (ulong)(*(long *)(puVar4 + 4) - lVar63)) {
        plVar54 = (long *)*plVar56;
        puVar5 = (undefined4 *)(plVar54[3] + ((lVar36 << 0x20) >> 0x1b));
        lVar36 = *(long *)(puVar5 + 2);
        if (8 < (ulong)(*(long *)(puVar5 + 4) - lVar36)) {
          lVar63 = 0;
          lVar60 = plVar56[1];
          uStack_178 = 2;
          uVar55 = 1;
          do {
            iVar49 = *(int *)(lVar36 + uVar55 * 8);
            iVar51 = iVar49 - *(int *)(lVar8 + 0x18);
            uVar10 = *(undefined4 *)(*plVar54 + (long)iVar49 * 8);
            plVar17 = plVar31;
            (**(code **)(*plVar31 + 0x10))
                      (plVar31,iVar51,iVar51,&dStack_d0,&uStack_168,&iStack_124,&uStack_128);
            if (plVar17 != (long *)0x0) {
              __ZNSt3__15mutex4lockEv(plVar17 + 1);
              lVar36 = lVar60 + (long)*(int *)(*(long *)(puVar5 + 2) + uVar55 * 8 + 4) * 8;
              FUN_109904224(lVar36,*puVar5,uVar10,lVar36,*puVar5,uVar10,*plVar17,
                            (ulong)dStack_d0 & 0xffffffff,uStack_168,iStack_124,uStack_128);
              __ZNSt3__15mutex6unlockEv(plVar17 + 1);
            }
            uVar26 = uVar55 + 1;
            lVar36 = *(long *)(puVar5 + 2);
            uVar34 = *(long *)(puVar5 + 4) - lVar36 >> 3;
            lVar41 = lVar63;
            uVar64 = uStack_178;
            if (uVar26 < uVar34) {
              do {
                iVar49 = *(int *)(lVar36 + lVar41 + 0x10);
                uVar11 = *(undefined4 *)(*plVar54 + (long)iVar49 * 8);
                plVar17 = plVar31;
                (**(code **)(*plVar31 + 0x10))
                          (plVar31,iVar51,iVar49 - *(int *)(lVar8 + 0x18),&iStack_12c,&uStack_130,
                           &uStack_134,&uStack_138);
                if (plVar17 != (long *)0x0) {
                  __ZNSt3__15mutex4lockEv(plVar17 + 1);
                  FUN_109904224(lVar60 + (long)*(int *)(*(long *)(puVar5 + 2) + uVar55 * 8 + 4) * 8,
                                *puVar5,uVar10,
                                lVar60 + (long)*(int *)(*(long *)(puVar5 + 2) + lVar41 + 0x14) * 8,
                                *puVar5,uVar11,*plVar17,iStack_12c,uStack_130,uStack_134,uStack_138)
                  ;
                  __ZNSt3__15mutex6unlockEv(plVar17 + 1);
                }
                uVar64 = uVar64 + 1;
                lVar36 = *(long *)(puVar5 + 2);
                uVar34 = *(long *)(puVar5 + 4) - lVar36 >> 3;
                lVar41 = lVar41 + 8;
              } while (uVar64 < uVar34);
            }
            uStack_178 = uStack_178 + 1;
            lVar63 = lVar63 + 8;
            uVar55 = uVar26;
          } while (uVar26 < uVar34);
          lVar63 = *(long *)(puVar4 + 2);
        }
      }
      FUN_109904224();
      if (lVar30 != 0) {
        pdVar18 = (double *)(lVar61 + (long)*(int *)(lVar63 + 4) * 8);
        uVar52 = *puVar4;
        pdVar66 = (double *)(lVar30 + (long)iStack_1d0 * 8);
        if ((uVar29 & 1) != 0) {
          if ((int)uVar52 < 1) {
            dVar67 = 0.0;
          }
          else {
            pdVar38 = pdVar18 + lVar32;
            dVar67 = 0.0;
            pdVar21 = pdVar66;
            uVar43 = uVar52;
            do {
              dVar67 = dVar67 + *pdVar21 * *pdVar38;
              pdVar38 = pdVar38 + uVar58;
              uVar43 = uVar43 - 1;
              pdVar21 = pdVar21 + 1;
            } while (uVar43 != 0);
          }
          *(double *)(puVar16 + lVar32 * 8) = dVar67 + *(double *)(puVar16 + lVar32 * 8);
          if (uVar19 == 1) goto LAB_109906304;
        }
        if ((uVar19 >> 1 & 1) != 0) {
          if ((int)uVar52 < 1) {
            dVar67 = 0.0;
            dVar68 = 0.0;
          }
          else {
            pdVar38 = pdVar18 + (uVar58 & 0xfffffffffffffffc);
            dVar67 = 0.0;
            dVar68 = 0.0;
            pdVar21 = pdVar66;
            uVar43 = uVar52;
            do {
              dVar67 = dVar67 + *pdVar38 * *pdVar21;
              dVar68 = dVar68 + pdVar38[1] * *pdVar21;
              pdVar38 = pdVar38 + uVar58;
              uVar43 = uVar43 - 1;
              pdVar21 = pdVar21 + 1;
            } while (uVar43 != 0);
          }
          pdVar62[1] = dVar68 + pdVar62[1];
          *pdVar62 = dVar67 + *pdVar62;
        }
        if (3 < (int)uVar19) {
          uVar55 = 0;
          uVar43 = uVar52 & 0xfffffffc;
          pdVar38 = pdVar18;
          do {
            pdVar21 = pdVar66;
            if ((int)uVar52 < 4) {
              pdVar20 = pdVar18 + uVar55;
              dVar67 = 0.0;
              dVar68 = 0.0;
              dVar69 = 0.0;
              dVar70 = 0.0;
            }
            else {
              iVar49 = 0;
              dVar67 = 0.0;
              dVar68 = 0.0;
              dVar69 = 0.0;
              dVar70 = 0.0;
              pdVar20 = pdVar38;
              do {
                pdVar2 = pdVar20 + uVar58 + 2;
                dVar71 = *pdVar21;
                dVar72 = pdVar21[1];
                pdVar6 = pdVar20 + uVar58 * 2 + 2;
                dVar73 = pdVar21[2];
                dVar74 = pdVar21[3];
                pdVar7 = pdVar20 + (long)(int)uVar19 * 3 + 2;
                dVar67 = dVar67 + dVar71 * *pdVar20 + pdVar2[-2] * dVar72 + pdVar6[-2] * dVar73 +
                         pdVar7[-2] * dVar74;
                dVar68 = dVar68 + dVar71 * pdVar20[1] + pdVar2[-1] * dVar72 + pdVar6[-1] * dVar73 +
                         pdVar7[-1] * dVar74;
                dVar69 = dVar69 + dVar71 * pdVar20[2] + *pdVar2 * dVar72 + *pdVar6 * dVar73 +
                         *pdVar7 * dVar74;
                dVar70 = dVar70 + dVar71 * pdVar20[3] + pdVar2[1] * dVar72 + pdVar6[1] * dVar73 +
                         pdVar7[1] * dVar74;
                pdVar21 = pdVar21 + 4;
                iVar49 = iVar49 + 4;
                pdVar20 = pdVar20 + uVar58 * 4;
              } while (iVar49 < (int)uVar43);
            }
            if (uVar43 != uVar52) {
              pdVar20 = pdVar20 + 2;
              uVar50 = uVar43;
              do {
                dVar71 = *pdVar21;
                pdVar21 = pdVar21 + 1;
                dVar67 = dVar67 + dVar71 * pdVar20[-2];
                dVar68 = dVar68 + dVar71 * pdVar20[-1];
                dVar69 = dVar69 + dVar71 * *pdVar20;
                dVar70 = dVar70 + dVar71 * pdVar20[1];
                uVar50 = uVar50 + 1;
                pdVar20 = pdVar20 + uVar58;
              } while ((int)uVar50 < (int)uVar52);
            }
            pdVar21 = (double *)(puVar16 + uVar55 * 8);
            pdVar21[1] = dVar68 + pdVar21[1];
            *pdVar21 = dVar67 + *pdVar21;
            pdVar21[3] = dVar70 + pdVar21[3];
            pdVar21[2] = dVar69 + pdVar21[2];
            uVar55 = uVar55 + 4;
            pdVar38 = pdVar38 + 4;
          } while (uVar55 < uVar40);
        }
      }
LAB_109906304:
      lVar36 = *(long *)(puVar4 + 2);
      if (8 < (ulong)(*(long *)(puVar4 + 4) - lVar36)) {
        uVar55 = 1;
        do {
          piVar33 = (int *)(lVar36 + uVar55 * 8);
          iVar49 = *piVar33;
          pdVar66 = (double *)(long)iVar49;
          piVar37 = *(int **)piVar45;
          if (piVar37 == (int *)0x0) {
LAB_109906434:
            dStack_d0 = 0.0;
            uStack_78 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            pdStack_88 = (double *)0x0;
            uStack_90 = 0;
            uStack_80 = 0;
            FUN_1099a9f0c(&dStack_d0,&UNK_10f589c92,0x3f,3,FUN_1099aa768,0);
            FUN_1092b4db8(lStack_c8 + 0x7540,&UNK_10f589d12,0x25);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            pdVar62 = &dStack_d0;
            func_0x0001099ab7c0();
            goto LAB_1099075d8;
          }
          uVar10 = *(undefined4 *)(*plVar42 + (long)pdVar66 * 8);
          piVar35 = piVar45;
          do {
            lVar36 = 8;
            if (iVar49 <= piVar37[7]) {
              lVar36 = 0;
              piVar35 = piVar37;
            }
            piVar37 = *(int **)((long)piVar37 + lVar36);
          } while (piVar37 != (int *)0x0);
          if ((piVar35 == piVar45) || (iVar49 < piVar35[7])) goto LAB_109906434;
          FUN_109904224(lVar61 + (long)*(int *)(lVar63 + 4) * 8,*puVar4,uVar29,
                        lVar61 + (long)piVar33[1] * 8,*puVar4,uVar10,uVar1 + (long)piVar35[8] * 8,0,
                        0,uVar19,uVar10);
          uVar55 = uVar55 + 1;
          lVar36 = *(long *)(puVar4 + 2);
        } while (uVar55 < (ulong)(*(long *)(puVar4 + 4) - lVar36 >> 3));
      }
      iStack_1d0 = *puVar4 + iStack_1d0;
      lVar53 = lVar53 + 1;
    } while (lVar53 < *piVar3);
  }
  pdVar66 = (double *)(ulong)*(byte *)(lVar8 + 0x1c);
  FUN_10990765c(&uStack_168,pdVar66,&pdStack_150);
  plVar56 = *(long **)(param_1 + 0x38);
  if (*plVar56 == 0) goto LAB_109906d30;
  uStack_90 = uVar28;
  if (bVar15) {
    pdVar62 = &dStack_d0;
  }
  else {
    pdVar62 = (double *)(uVar28 << 3);
    __Znwm();
  }
  lVar53 = CONCAT44(uStack_164,uStack_168);
  pdStack_88 = pdVar62;
  if ((uVar12 & 1) == 0) {
LAB_1099064fc:
    uVar19 = uVar12 & 0xfffffffc;
    uVar29 = (ulong)uVar19;
    if ((uVar12 >> 1 & 1) == 0) {
      if (3 < (int)uVar12) {
LAB_109906560:
        uVar58 = 0;
        lVar36 = uVar28 * 0x20;
        lVar32 = lVar53 + uVar28 * 8;
        lVar61 = lVar53 + (ulong)(uVar12 << 1) * 8;
        lVar30 = lVar53 + (ulong)(uVar12 * 3) * 8;
        pdVar18 = (double *)(lVar30 + 0x20);
        pdVar38 = (double *)(lVar61 + 0x20);
        pdVar21 = (double *)(lVar32 + 0x20);
        do {
          lVar63 = 0;
          iVar57 = 0;
          dVar69 = 0.0;
          dVar70 = 0.0;
          dVar68 = 0.0;
          dVar67 = 0.0;
          pdVar66 = pdVar21;
          pdVar20 = pdVar38;
          pdVar2 = pdVar18;
          do {
            pdVar24 = pdVar2;
            pdVar27 = pdVar20;
            pdVar59 = pdVar66;
            pdVar66 = (double *)(puStack_d8 + lVar63);
            pdVar20 = (double *)(lVar53 + lVar63);
            dVar71 = *pdVar66;
            dVar73 = pdVar66[1];
            pdVar2 = (double *)(lVar32 + lVar63);
            pdVar6 = (double *)(lVar61 + lVar63);
            pdVar7 = (double *)(lVar30 + lVar63);
            dVar72 = pdVar66[2];
            dVar74 = pdVar66[3];
            dVar69 = dVar69 + dVar71 * *pdVar20 + dVar73 * pdVar20[1] + dVar72 * pdVar20[2] +
                     dVar74 * pdVar20[3];
            dVar70 = dVar70 + dVar71 * *pdVar2 + dVar73 * pdVar2[1] + dVar72 * pdVar2[2] +
                     dVar74 * pdVar2[3];
            dVar67 = dVar67 + dVar71 * *pdVar6 + dVar73 * pdVar6[1] + dVar72 * pdVar6[2] +
                     dVar74 * pdVar6[3];
            iVar57 = iVar57 + 4;
            lVar63 = lVar63 + 0x20;
            dVar68 = dVar68 + dVar71 * *pdVar7 + dVar73 * pdVar7[1] + dVar72 * pdVar7[2] +
                     dVar74 * pdVar7[3];
            pdVar66 = pdVar59 + 4;
            pdVar20 = pdVar27 + 4;
            pdVar2 = pdVar24 + 4;
          } while (iVar57 < (int)uVar19);
          if (uVar19 != uVar12) {
            pdVar66 = (double *)(lVar53 + lVar63);
            pdVar20 = (double *)(puStack_d8 + lVar63);
            uVar40 = uVar29;
            do {
              dVar71 = *pdVar20;
              dVar69 = dVar69 + dVar71 * *pdVar66;
              dVar70 = dVar70 + dVar71 * *pdVar59;
              dVar67 = dVar67 + dVar71 * *pdVar27;
              dVar68 = dVar68 + dVar71 * *pdVar24;
              uVar52 = (int)uVar40 + 1;
              uVar40 = (ulong)uVar52;
              pdVar66 = pdVar66 + 1;
              pdVar20 = pdVar20 + 1;
              pdVar24 = pdVar24 + 1;
              pdVar27 = pdVar27 + 1;
              pdVar59 = pdVar59 + 1;
            } while ((int)uVar52 < (int)uVar12);
          }
          pdVar66 = pdVar62 + uVar58;
          uVar58 = uVar58 + 4;
          *pdVar66 = dVar69;
          pdVar66[1] = dVar70;
          lVar53 = lVar53 + lVar36;
          lVar32 = lVar32 + lVar36;
          lVar61 = lVar61 + lVar36;
          lVar30 = lVar30 + lVar36;
          pdVar66[2] = dVar67;
          pdVar66[3] = dVar68;
          pdVar18 = pdVar18 + uVar28 * 4;
          pdVar38 = pdVar38 + uVar28 * 4;
          pdVar21 = pdVar21 + uVar28 * 4;
        } while (uVar58 < uVar29);
      }
    }
    else if ((int)uVar12 < 1) {
      pdVar62[(int)uVar19] = 0.0;
      (pdVar62 + (int)uVar19)[1] = 0.0;
    }
    else {
      lVar30 = 0;
      lVar61 = lVar53 + (ulong)(uVar19 * uVar12) * 8;
      dVar67 = 0.0;
      dVar68 = 0.0;
      do {
        dVar68 = dVar68 + *(double *)(puStack_d8 + lVar30 * 8) * *(double *)(lVar61 + lVar30 * 8);
        dVar67 = dVar67 + *(double *)(puStack_d8 + lVar30 * 8) *
                          *(double *)(lVar61 + (ulong)uVar12 * 8 + lVar30 * 8);
        lVar30 = lVar30 + 1;
      } while (uVar12 != (uint)lVar30);
      pdVar62[uVar29] = dVar68;
      (pdVar62 + uVar29)[1] = dVar67;
      if (3 < uVar12) goto LAB_109906560;
    }
  }
  else {
    lVar61 = 0;
    dVar67 = 0.0;
    do {
      dVar67 = dVar67 + *(double *)(puStack_d8 + lVar61 * 8) *
                        *(double *)(lVar53 + (ulong)((uVar12 - 1) * uVar12) * 8 + lVar61 * 8);
      lVar61 = lVar61 + 1;
    } while (uVar12 != (uint)lVar61);
    pdVar62[uVar12 - 1] = dVar67;
    if (uVar12 != 1) goto LAB_1099064fc;
  }
  if (0 < *piVar3) {
    lVar53 = 0;
    iVar49 = piVar3[1];
    plVar42 = (long *)**(long **)(param_1 + 0x20);
    lVar30 = (*(long **)(param_1 + 0x20))[1];
    lVar61 = plVar42[3] + (long)iVar49 * 0x20;
    uVar19 = *(uint *)(*plVar42 + (long)**(int **)(lVar61 + 8) * 8);
    uVar29 = (ulong)uVar19;
    uVar52 = uVar19 * 3;
    lVar63 = (long)(int)uVar19;
    lVar32 = **(long **)(param_1 + 0x28);
    lVar36 = *plVar56;
    iVar57 = *(int *)(lVar61 + 4);
    uVar12 = uVar19 & 0xfffffffc;
    lVar61 = lVar63 * 0x20;
    do {
      puVar4 = (uint *)(plVar42[3] + lVar53 * 0x20 + (long)iVar49 * 0x20);
      lVar60 = *(long *)(puVar4 + 2);
      uVar43 = *puVar4;
      if (uVar43 == 0) {
        pdVar18 = (double *)0x0;
      }
      else {
        uVar28 = (ulong)(int)uVar43;
        if ((int)uVar43 < 1) {
          pdVar18 = (double *)0x0;
          uVar58 = -(-uVar28 & 0xfffffffffffffffe);
        }
        else {
          pdVar18 = (double *)(uVar28 << 3);
          _malloc();
          if (pdVar18 == (double *)0x0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109907538;
          }
          if (uVar43 == 1) {
            uVar58 = 0;
          }
          else {
            pdVar66 = (double *)(lVar32 + (long)iVar57 * 8);
            uVar58 = uVar28 & 0x7ffffffe;
            uVar40 = uVar58;
            if (uVar58 < 3) {
              uVar40 = 2;
            }
            _memcpy(pdVar18,pdVar66,uVar40 * 8);
          }
        }
        if (uVar28 - uVar58 != 0 && (long)uVar58 <= (long)uVar28) {
          pdVar66 = (double *)(lVar32 + (uVar58 + (long)iVar57) * 8);
          _memcpy(pdVar18 + uVar58,pdVar66,(uVar28 - uVar58) * 8);
        }
        lVar47 = (long)*(int *)(lVar60 + 4);
        lVar41 = lVar30 + lVar47 * 8;
        if ((uVar43 & 1) != 0) {
          iVar51 = uVar43 - 1;
          if ((int)uVar19 < 1) {
            dVar67 = 0.0;
          }
          else {
            dVar67 = 0.0;
            pdVar38 = (double *)(lVar41 + (long)(int)(iVar51 * uVar19) * 8);
            uVar28 = uVar29;
            pdVar21 = pdVar62;
            do {
              dVar67 = dVar67 + *pdVar21 * *pdVar38;
              uVar50 = (int)uVar28 - 1;
              uVar28 = (ulong)uVar50;
              pdVar38 = pdVar38 + 1;
              pdVar21 = pdVar21 + 1;
            } while (uVar50 != 0);
          }
          pdVar18[iVar51] = pdVar18[iVar51] - dVar67;
          if (uVar43 == 1) goto LAB_109906a70;
        }
        uVar28 = (ulong)uVar43 & 0xfffffffc;
        if ((uVar43 >> 1 & 1) != 0) {
          if ((int)uVar19 < 1) {
            dVar67 = 0.0;
            dVar68 = 0.0;
          }
          else {
            dVar67 = 0.0;
            dVar68 = 0.0;
            uVar58 = uVar29;
            pdVar38 = pdVar62;
            pdVar21 = (double *)(lVar41 + (long)(int)((int)uVar28 * uVar19) * 8);
            do {
              dVar67 = dVar67 + *pdVar21 * *pdVar38;
              dVar68 = dVar68 + pdVar21[uVar29] * *pdVar38;
              uVar50 = (int)uVar58 - 1;
              uVar58 = (ulong)uVar50;
              pdVar38 = pdVar38 + 1;
              pdVar21 = pdVar21 + 1;
            } while (uVar50 != 0);
          }
          uVar58 = -(ulong)(uVar43 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3;
          pdVar38 = (double *)((long)pdVar18 + uVar58);
          dVar69 = *pdVar38;
          pdVar21 = (double *)((long)pdVar18 + uVar58);
          pdVar21[1] = pdVar38[1] - dVar68;
          *pdVar21 = dVar69 - dVar67;
        }
        if (3 < (int)uVar43) {
          uVar58 = 0;
          lVar22 = lVar30 + lVar63 * 8 + 0x10 + lVar47 * 8;
          lVar23 = lVar30 + (long)(int)uVar52 * 8 + 0x10 + lVar47 * 8;
          lVar47 = lVar30 + (long)(int)(uVar19 << 1) * 8 + 0x10 + lVar47 * 8;
          lVar25 = lVar41;
          do {
            if ((int)uVar19 < 4) {
              pdVar38 = (double *)(lVar41 + uVar58 * lVar63 * 8);
              dVar67 = 0.0;
              dVar68 = 0.0;
              dVar69 = 0.0;
              dVar70 = 0.0;
              pdVar21 = pdVar62;
            }
            else {
              lVar48 = 0;
              iVar51 = 0;
              dVar67 = 0.0;
              dVar68 = 0.0;
              dVar69 = 0.0;
              dVar70 = 0.0;
              do {
                pdVar38 = (double *)((long)pdVar62 + lVar48);
                pdVar21 = (double *)(lVar25 + lVar48);
                pdVar66 = (double *)(lVar22 + lVar48);
                pdVar20 = (double *)(lVar47 + lVar48);
                pdVar2 = (double *)(lVar23 + lVar48);
                dVar71 = *pdVar38;
                dVar73 = pdVar38[1];
                dVar72 = pdVar38[2];
                dVar74 = pdVar38[3];
                dVar67 = dVar67 + dVar71 * *pdVar21 + pdVar21[1] * dVar73 + pdVar21[2] * dVar72 +
                         pdVar21[3] * dVar74;
                dVar68 = dVar68 + dVar71 * pdVar66[-2] + pdVar66[-1] * dVar73 + *pdVar66 * dVar72 +
                         pdVar66[1] * dVar74;
                dVar69 = dVar69 + dVar71 * pdVar20[-2] + pdVar20[-1] * dVar73 + *pdVar20 * dVar72 +
                         pdVar20[1] * dVar74;
                dVar70 = dVar70 + dVar71 * pdVar2[-2] + pdVar2[-1] * dVar73 + *pdVar2 * dVar72 +
                         pdVar2[1] * dVar74;
                iVar51 = iVar51 + 4;
                lVar48 = lVar48 + 0x20;
              } while (iVar51 < (int)uVar12);
              pdVar38 = (double *)(lVar25 + lVar48);
              pdVar21 = (double *)((long)pdVar62 + lVar48);
            }
            uVar50 = uVar12;
            if (uVar12 != uVar19) {
              do {
                dVar71 = *pdVar21;
                pdVar21 = pdVar21 + 1;
                dVar67 = dVar67 + dVar71 * *pdVar38;
                dVar68 = dVar68 + dVar71 * pdVar38[lVar63];
                dVar69 = dVar69 + dVar71 * pdVar38[(int)(uVar19 << 1)];
                dVar70 = dVar70 + dVar71 * *(double *)
                                            ((long)pdVar38 +
                                            (-(ulong)(uVar52 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar52 << 3));
                pdVar38 = pdVar38 + 1;
                uVar50 = uVar50 + 1;
              } while ((int)uVar50 < (int)uVar19);
            }
            pdVar38 = pdVar18 + uVar58;
            uVar58 = uVar58 + 4;
            lVar22 = lVar22 + lVar61;
            pdVar38[1] = pdVar38[1] - dVar68;
            *pdVar38 = *pdVar38 - dVar67;
            pdVar38[3] = pdVar38[3] - dVar70;
            pdVar38[2] = pdVar38[2] - dVar69;
            lVar25 = lVar25 + lVar61;
            lVar23 = lVar23 + lVar61;
            lVar47 = lVar47 + lVar61;
          } while (uVar58 < uVar28);
        }
      }
LAB_109906a70:
      if (8 < (ulong)(*(long *)(puVar4 + 4) - lVar60)) {
        uVar28 = 1;
        do {
          iVar51 = *(int *)(lVar60 + uVar28 * 8);
          uVar50 = *(uint *)(*plVar42 + (long)iVar51 * 8);
          iVar51 = iVar51 - *(int *)(lVar8 + 0x18);
          uVar65 = *(undefined8 *)(*(long *)(lVar8 + 0x68) + (long)iVar51 * 8);
          __ZNSt3__15mutex4lockEv(uVar65);
          uVar58 = (ulong)uVar50;
          pdVar38 = (double *)(lVar30 + (long)*(int *)(*(long *)(puVar4 + 2) + uVar28 * 8 + 4) * 8);
          uVar43 = *puVar4;
          lVar60 = lVar36 + (long)*(int *)(*(long *)(lVar8 + 0x20) + (long)iVar51 * 4) * 8;
          if ((uVar50 & 1) == 0) {
LAB_109906b48:
            uVar44 = uVar50 & 0xfffffffc;
            if ((uVar50 >> 1 & 1) != 0) {
              if ((int)uVar43 < 1) {
                dVar67 = 0.0;
                dVar68 = 0.0;
              }
              else {
                dVar67 = 0.0;
                dVar68 = 0.0;
                pdVar21 = pdVar38 + (int)uVar44;
                pdVar20 = pdVar18;
                uVar46 = uVar43;
                do {
                  dVar67 = dVar67 + *pdVar21 * *pdVar20;
                  dVar68 = dVar68 + pdVar21[1] * *pdVar20;
                  pdVar21 = pdVar21 + (int)uVar50;
                  uVar46 = uVar46 - 1;
                  pdVar20 = pdVar20 + 1;
                } while (uVar46 != 0);
              }
              lVar41 = (long)(int)uVar44 * 8;
              pdVar21 = (double *)(lVar60 + lVar41);
              dVar69 = *pdVar21;
              pdVar20 = (double *)(lVar60 + lVar41);
              pdVar20[1] = dVar68 + pdVar21[1];
              *pdVar20 = dVar67 + dVar69;
            }
            if (3 < (int)uVar50) {
              uVar40 = 0;
              uVar50 = uVar43 & 0xfffffffc;
              pdVar66 = pdVar38;
              do {
                pdVar21 = pdVar18;
                if ((int)uVar43 < 4) {
                  pdVar20 = pdVar38 + uVar40;
                  dVar67 = 0.0;
                  dVar68 = 0.0;
                  dVar69 = 0.0;
                  dVar70 = 0.0;
                }
                else {
                  iVar51 = 0;
                  dVar67 = 0.0;
                  dVar68 = 0.0;
                  dVar69 = 0.0;
                  dVar70 = 0.0;
                  pdVar20 = pdVar66;
                  do {
                    pdVar2 = pdVar20 + uVar58 + 2;
                    dVar71 = *pdVar21;
                    dVar72 = pdVar21[1];
                    pdVar6 = pdVar20 + uVar58 * 2 + 2;
                    dVar73 = pdVar21[2];
                    dVar74 = pdVar21[3];
                    pdVar7 = pdVar20 + uVar58 * 3 + 2;
                    dVar67 = dVar67 + dVar71 * *pdVar20 + pdVar2[-2] * dVar72 + pdVar6[-2] * dVar73
                             + pdVar7[-2] * dVar74;
                    dVar68 = dVar68 + dVar71 * pdVar20[1] + pdVar2[-1] * dVar72 +
                             pdVar6[-1] * dVar73 + pdVar7[-1] * dVar74;
                    dVar69 = dVar69 + dVar71 * pdVar20[2] + *pdVar2 * dVar72 + *pdVar6 * dVar73 +
                             *pdVar7 * dVar74;
                    dVar70 = dVar70 + dVar71 * pdVar20[3] + pdVar2[1] * dVar72 + pdVar6[1] * dVar73
                             + pdVar7[1] * dVar74;
                    pdVar21 = pdVar21 + 4;
                    iVar51 = iVar51 + 4;
                    pdVar20 = pdVar20 + uVar58 * 4;
                  } while (iVar51 < (int)uVar50);
                }
                if (uVar50 != uVar43) {
                  pdVar20 = pdVar20 + 2;
                  uVar46 = uVar50;
                  do {
                    dVar71 = *pdVar21;
                    pdVar21 = pdVar21 + 1;
                    dVar67 = dVar67 + dVar71 * pdVar20[-2];
                    dVar68 = dVar68 + dVar71 * pdVar20[-1];
                    dVar69 = dVar69 + dVar71 * *pdVar20;
                    dVar70 = dVar70 + dVar71 * pdVar20[1];
                    uVar46 = uVar46 + 1;
                    pdVar20 = pdVar20 + uVar58;
                  } while ((int)uVar46 < (int)uVar43);
                }
                pdVar21 = (double *)(lVar60 + uVar40 * 8);
                pdVar21[1] = dVar68 + pdVar21[1];
                *pdVar21 = dVar67 + *pdVar21;
                pdVar21[3] = dVar70 + pdVar21[3];
                pdVar21[2] = dVar69 + pdVar21[2];
                uVar40 = uVar40 + 4;
                pdVar66 = pdVar66 + 4;
              } while (uVar40 < uVar44);
            }
          }
          else {
            lVar41 = (long)(int)(uVar50 - 1);
            if ((int)uVar43 < 1) {
              dVar67 = 0.0;
            }
            else {
              dVar67 = 0.0;
              pdVar21 = pdVar38 + lVar41;
              pdVar20 = pdVar18;
              uVar44 = uVar43;
              do {
                dVar67 = dVar67 + *pdVar20 * *pdVar21;
                pdVar21 = pdVar21 + (int)uVar50;
                uVar44 = uVar44 - 1;
                pdVar20 = pdVar20 + 1;
              } while (uVar44 != 0);
            }
            *(double *)(lVar60 + lVar41 * 8) = dVar67 + *(double *)(lVar60 + lVar41 * 8);
            if (uVar50 != 1) goto LAB_109906b48;
          }
          __ZNSt3__15mutex6unlockEv(uVar65);
          uVar28 = uVar28 + 1;
          lVar60 = *(long *)(puVar4 + 2);
        } while (uVar28 < (ulong)(*(long *)(puVar4 + 4) - lVar60 >> 3));
        uVar43 = *puVar4;
      }
      iVar57 = uVar43 + iVar57;
      _free(pdVar18);
      lVar53 = lVar53 + 1;
      uVar28 = uStack_90;
    } while (lVar53 < *piVar3);
  }
  if (8 < uVar28) {
    __ZdlPv(pdStack_88);
  }
LAB_109906d30:
  lVar53 = CONCAT44(uStack_164,uStack_168);
  piVar45 = *(int **)(piVar3 + 2);
  piVar3 = piVar3 + 4;
  if (piVar45 != piVar3) {
    iVar9 = *(int *)(lVar8 + 0x60) * iVar9;
    plVar42 = (long *)**(undefined8 **)(param_1 + 0x10);
    lVar32 = *(long *)(lVar8 + 0x58);
    lVar61 = lVar32 + (long)iVar9 * 8;
    uVar52 = (uint)uStack_160;
    lVar36 = (long)(int)uVar52;
    uVar12 = uVar52 & 0xfffffffc;
    plVar56 = (long *)**(long **)(param_1 + 0x30);
    uVar19 = uVar52 * 4;
    uVar29 = -(uStack_160 >> 0x1f & 1) & 0xfffffff800000000 | (uStack_160 & 0xffffffff) << 3;
    lVar39 = lVar39 + (long)iVar13 * 8;
    lVar30 = (uStack_160 & 0xffffffff) << 3;
    do {
      iVar49 = *(int *)(lVar8 + 0x18);
      iVar13 = piVar45[7];
      iVar57 = piVar45[8];
      uVar43 = *(uint *)(*plVar42 + (long)iVar13 * 8);
      uVar28 = (ulong)uVar43;
      pdVar62 = (double *)(uVar1 + (long)iVar57 * 8);
      if ((uStack_160 & 1) == 0) {
LAB_109906eac:
        if (((uVar52 >> 1 & 1) != 0) && (0 < (int)uVar43)) {
          uVar58 = 0;
          pdVar18 = pdVar62;
          do {
            dVar67 = 0.0;
            dVar68 = 0.0;
            pdVar38 = pdVar18;
            pdVar21 = (double *)(lVar53 + (long)(int)uVar12 * 8);
            uVar40 = uStack_160;
            if (0 < (int)uVar52) {
              do {
                dVar67 = dVar67 + *pdVar21 * *pdVar38;
                dVar68 = dVar68 + pdVar21[1] * *pdVar38;
                uVar50 = (int)uVar40 - 1;
                pdVar38 = pdVar38 + uVar28;
                pdVar21 = pdVar21 + lVar36;
                uVar40 = (ulong)uVar50;
              } while (uVar50 != 0);
            }
            uVar50 = uVar12 + (int)uVar58 * uVar52;
            pdVar38 = (double *)
                      (lVar61 + (-(ulong)(uVar50 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar50 << 3)
                      );
            pdVar38[1] = dVar68;
            *pdVar38 = dVar67;
            uVar58 = uVar58 + 1;
            pdVar18 = pdVar18 + 1;
          } while (uVar58 != uVar28);
        }
        if (3 < (int)uVar52) {
          uVar58 = 0;
          uVar40 = (ulong)(uVar43 << 2);
          lVar60 = (long)iVar57 * 8;
          lVar63 = lVar53;
          do {
            if (0 < (int)uVar43) {
              uVar55 = 0;
              lVar23 = lVar53 + uVar58 * 8;
              pdVar66 = pdVar62;
              lVar22 = lVar39 + lVar60 + uVar28 * 8;
              lVar47 = lVar39 + lVar60 + (ulong)(uVar43 << 1) * 8;
              lVar41 = lVar39 + lVar60 + (ulong)(uVar43 * 3) * 8;
              do {
                lVar25 = 0;
                iVar57 = 0;
                iVar51 = 0;
                dVar67 = 0.0;
                dVar68 = 0.0;
                dVar69 = 0.0;
                dVar70 = 0.0;
                uVar26 = uVar40;
                uVar50 = uVar19;
                do {
                  uVar44 = uVar50;
                  uVar64 = uVar26;
                  dVar71 = pdVar66[lVar25];
                  pdVar18 = (double *)(lVar23 + (long)iVar51 * 8);
                  dVar73 = *(double *)(lVar22 + lVar25 * 8);
                  pdVar38 = (double *)(lVar23 + (long)(int)(uVar52 + iVar51) * 8);
                  dVar74 = *(double *)(lVar47 + lVar25 * 8);
                  pdVar21 = (double *)(lVar23 + (long)(int)(uVar52 * 2 + iVar51) * 8);
                  dVar72 = *(double *)(lVar41 + lVar25 * 8);
                  pdVar20 = (double *)(lVar23 + (long)(int)(uVar52 * 3 + iVar51) * 8);
                  dVar67 = dVar67 + *pdVar18 * dVar71 + *pdVar38 * dVar73 + *pdVar21 * dVar74 +
                           *pdVar20 * dVar72;
                  dVar68 = dVar68 + pdVar18[1] * dVar71 + pdVar38[1] * dVar73 + pdVar21[1] * dVar74
                           + pdVar20[1] * dVar72;
                  dVar69 = dVar69 + pdVar18[2] * dVar71 + pdVar38[2] * dVar73 + pdVar21[2] * dVar74
                           + pdVar20[2] * dVar72;
                  dVar70 = dVar70 + pdVar18[3] * dVar71 + pdVar38[3] * dVar73 + pdVar21[3] * dVar74
                           + pdVar20[3] * dVar72;
                  lVar25 = lVar25 + uVar40;
                  iVar51 = iVar51 + uVar19;
                  iVar57 = iVar57 + 4;
                  uVar26 = uVar64 + uVar40;
                  uVar50 = uVar44 + uVar19;
                } while (iVar57 < (int)uVar12);
                if (uVar12 != uVar52) {
                  lVar25 = (uVar64 & 0xfffffffc) << 3;
                  uVar26 = -(ulong)(uVar44 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar44 << 3;
                  uVar50 = uVar12;
                  do {
                    dVar71 = *(double *)((long)pdVar66 + lVar25);
                    pdVar18 = (double *)(lVar63 + uVar26);
                    dVar67 = dVar67 + *pdVar18 * dVar71;
                    dVar68 = dVar68 + pdVar18[1] * dVar71;
                    dVar69 = dVar69 + pdVar18[2] * dVar71;
                    dVar70 = dVar70 + pdVar18[3] * dVar71;
                    uVar50 = uVar50 + 1;
                    lVar25 = lVar25 + (long)(int)uVar43 * 8;
                    uVar26 = uVar26 + lVar36 * 8;
                  } while ((int)uVar50 < (int)uVar52);
                }
                pdVar18 = (double *)
                          (lVar61 + ((long)((ulong)((int)uVar58 + (int)uVar55 * uVar52) << 0x20) >>
                                    0x1d));
                uVar55 = uVar55 + 1;
                pdVar18[1] = dVar68;
                *pdVar18 = dVar67;
                pdVar18[3] = dVar70;
                pdVar18[2] = dVar69;
                lVar41 = lVar41 + 8;
                lVar47 = lVar47 + 8;
                lVar22 = lVar22 + 8;
                pdVar66 = pdVar66 + 1;
              } while (uVar55 != uVar28);
            }
            uVar58 = uVar58 + 4;
            lVar63 = lVar63 + 0x20;
          } while (uVar58 < (uStack_160 & 0xfffffffc));
        }
      }
      else {
        if (0 < (int)uVar43) {
          uVar58 = 0;
          pdVar18 = pdVar62;
          do {
            dVar67 = 0.0;
            uVar40 = uStack_160;
            pdVar38 = (double *)(lVar53 + (long)(int)(uVar52 - 1) * 8);
            pdVar21 = pdVar18;
            if (0 < (int)uVar52) {
              do {
                dVar67 = dVar67 + *pdVar38 * *pdVar21;
                uVar50 = (int)uVar40 - 1;
                uVar40 = (ulong)uVar50;
                pdVar38 = pdVar38 + lVar36;
                pdVar21 = pdVar21 + uVar28;
              } while (uVar50 != 0);
            }
            *(double *)(lVar61 + (long)(int)((uVar52 - 1) + (int)uVar58 * uVar52) * 8) = dVar67;
            uVar58 = uVar58 + 1;
            pdVar18 = pdVar18 + 1;
          } while (uVar58 != uVar28);
        }
        if (uVar52 != 1) goto LAB_109906eac;
      }
      if (piVar45 != piVar3) {
        piVar33 = piVar45;
        do {
          pdVar66 = (double *)(ulong)(uint)(iVar13 - iVar49);
          plVar31 = plVar56;
          (**(code **)(*plVar56 + 0x10))
                    (plVar56,pdVar66,piVar33[7] - *(int *)(lVar8 + 0x18),&dStack_d0,&iStack_124,
                     &uStack_128,&iStack_12c);
          if (plVar31 != (long *)0x0) {
            uVar50 = *(uint *)(*plVar42 + (long)piVar33[7] * 8);
            uVar58 = (ulong)(int)uVar50;
            __ZNSt3__15mutex4lockEv(plVar31 + 1);
            lVar63 = uVar1 + (long)piVar33[8] * 8;
            lVar60 = *plVar31;
            if ((uVar58 & 1) == 0) {
LAB_1099071fc:
              if (((uVar50 >> 1 & 1) != 0) && (0 < (int)uVar43)) {
                uVar40 = 0;
                lVar41 = lVar61;
                do {
                  if ((int)uVar52 < 1) {
                    dVar67 = 0.0;
                    dVar68 = 0.0;
                  }
                  else {
                    lVar47 = 0;
                    dVar67 = 0.0;
                    dVar68 = 0.0;
                    pdVar66 = (double *)(lVar63 + (long)(int)(uVar50 & 0xfffffffc) * 8);
                    do {
                      dVar67 = dVar67 + *pdVar66 * *(double *)(lVar41 + lVar47);
                      dVar68 = dVar68 + pdVar66[1] * *(double *)(lVar41 + lVar47);
                      lVar47 = lVar47 + 8;
                      pdVar66 = pdVar66 + uVar58;
                    } while (lVar30 != lVar47);
                  }
                  uVar44 = iStack_124 + (uVar50 & 0xfffffffc) +
                           (dStack_d0._0_4_ + (int)uVar40) * iStack_12c;
                  uVar55 = -(ulong)(uVar44 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar44 << 3;
                  pdVar62 = (double *)(lVar60 + uVar55);
                  dVar69 = *pdVar62;
                  pdVar18 = (double *)(lVar60 + uVar55);
                  pdVar18[1] = pdVar62[1] - dVar68;
                  *pdVar18 = dVar69 - dVar67;
                  uVar40 = uVar40 + 1;
                  lVar41 = lVar41 + uVar29;
                } while (uVar40 != uVar28);
              }
              if (3 < (int)uVar50) {
                uVar58 = 0;
                pdVar66 = (double *)(ulong)(uVar50 * 3);
                lVar41 = lVar63;
                do {
                  if (0 < (int)uVar43) {
                    uVar40 = 0;
                    lVar47 = lVar63 + uVar58 * 8;
                    lVar22 = lVar61;
                    pdVar62 = (double *)(lVar32 + (long)iVar9 * 8 + 0x10);
                    do {
                      if ((int)uVar52 < 4) {
                        lVar23 = 0;
                        dVar67 = 0.0;
                        dVar68 = 0.0;
                        dVar69 = 0.0;
                        dVar70 = 0.0;
                      }
                      else {
                        uVar55 = 0;
                        iVar57 = 0;
                        dVar67 = 0.0;
                        dVar68 = 0.0;
                        dVar69 = 0.0;
                        dVar70 = 0.0;
                        pdVar18 = pdVar62;
                        do {
                          pdVar38 = (double *)(lVar47 + (long)iVar57 * 8);
                          dVar72 = pdVar18[-2];
                          dVar74 = pdVar18[-1];
                          pdVar21 = (double *)(lVar47 + (long)(int)(uVar50 + iVar57) * 8);
                          dVar71 = *pdVar18;
                          pdVar20 = (double *)(lVar47 + (long)(int)(uVar50 * 2 + iVar57) * 8);
                          dVar73 = pdVar18[1];
                          pdVar2 = (double *)(lVar47 + (long)(int)(uVar50 * 3 + iVar57) * 8);
                          dVar67 = dVar67 + *pdVar38 * dVar72 + *pdVar21 * dVar74 +
                                   *pdVar20 * dVar71 + *pdVar2 * dVar73;
                          dVar68 = dVar68 + pdVar38[1] * dVar72 + pdVar21[1] * dVar74 +
                                   pdVar20[1] * dVar71 + pdVar2[1] * dVar73;
                          dVar69 = dVar69 + pdVar38[2] * dVar72 + pdVar21[2] * dVar74 +
                                   pdVar20[2] * dVar71 + pdVar2[2] * dVar73;
                          dVar70 = dVar70 + pdVar38[3] * dVar72 + pdVar21[3] * dVar74 +
                                   pdVar20[3] * dVar71 + pdVar2[3] * dVar73;
                          iVar57 = iVar57 + uVar50 * 4;
                          uVar55 = uVar55 + 4;
                          pdVar18 = pdVar18 + 4;
                        } while (uVar55 < (uStack_160 & 0xfffffffc));
                        lVar23 = (long)iVar57;
                      }
                      if (uVar12 != uVar52) {
                        lVar23 = lVar23 << 3;
                        lVar25 = (long)(int)uVar12;
                        do {
                          dVar71 = *(double *)(lVar22 + lVar25 * 8);
                          pdVar18 = (double *)(lVar41 + lVar23);
                          dVar67 = dVar67 + *pdVar18 * dVar71;
                          dVar68 = dVar68 + pdVar18[1] * dVar71;
                          dVar69 = dVar69 + pdVar18[2] * dVar71;
                          dVar70 = dVar70 + pdVar18[3] * dVar71;
                          lVar25 = lVar25 + 1;
                          lVar23 = lVar23 + (ulong)uVar50 * 8;
                        } while (lVar25 < lVar36);
                      }
                      pdVar18 = (double *)
                                (lVar60 + (long)(iStack_124 + (int)uVar58 +
                                                (dStack_d0._0_4_ + (int)uVar40) * iStack_12c) * 8);
                      pdVar18[1] = pdVar18[1] - dVar68;
                      *pdVar18 = *pdVar18 - dVar67;
                      pdVar18[3] = pdVar18[3] - dVar70;
                      pdVar18[2] = pdVar18[2] - dVar69;
                      uVar40 = uVar40 + 1;
                      pdVar62 = pdVar62 + lVar36;
                      lVar22 = lVar22 + lVar36 * 8;
                    } while (uVar40 != uVar28);
                  }
                  uVar58 = uVar58 + 4;
                  lVar41 = lVar41 + 0x20;
                } while (uVar58 < ((ulong)uVar50 & 0xfffffffc));
              }
            }
            else {
              if (0 < (int)uVar43) {
                uVar40 = 0;
                lVar41 = lVar61;
                do {
                  if ((int)uVar52 < 1) {
                    dVar67 = 0.0;
                  }
                  else {
                    lVar47 = 0;
                    dVar67 = 0.0;
                    pdVar66 = (double *)(lVar63 + (long)(int)(uVar50 - 1) * 8);
                    do {
                      dVar67 = dVar67 + *pdVar66 * *(double *)(lVar41 + lVar47);
                      lVar47 = lVar47 + 8;
                      pdVar66 = pdVar66 + uVar58;
                    } while (lVar30 != lVar47);
                  }
                  iVar57 = iStack_124 + (uVar50 - 1) + (dStack_d0._0_4_ + (int)uVar40) * iStack_12c;
                  *(double *)(lVar60 + (long)iVar57 * 8) =
                       *(double *)(lVar60 + (long)iVar57 * 8) - dVar67;
                  uVar40 = uVar40 + 1;
                  lVar41 = lVar41 + uVar29;
                } while (uVar40 != uVar28);
              }
              if (uVar50 != 1) goto LAB_1099071fc;
            }
            __ZNSt3__15mutex6unlockEv(plVar31 + 1);
          }
          piVar37 = *(int **)(piVar33 + 2);
          piVar35 = piVar33;
          if (*(int **)(piVar33 + 2) == (int *)0x0) {
            do {
              piVar33 = *(int **)(piVar35 + 4);
              bVar15 = *(int **)piVar33 != piVar35;
              piVar35 = piVar33;
            } while (bVar15);
          }
          else {
            do {
              piVar33 = piVar37;
              piVar37 = *(int **)piVar33;
            } while (*(int **)piVar33 != (int *)0x0);
          }
        } while (piVar33 != piVar3);
      }
      piVar33 = *(int **)(piVar45 + 2);
      piVar37 = piVar45;
      if (*(int **)(piVar45 + 2) == (int *)0x0) {
        do {
          piVar45 = *(int **)(piVar37 + 4);
          bVar15 = *(int **)piVar45 != piVar37;
          piVar37 = piVar45;
        } while (bVar15);
      }
      else {
        do {
          piVar45 = piVar33;
          piVar33 = *(int **)piVar45;
        } while (*(int **)piVar45 != (int *)0x0);
      }
    } while (piVar45 != piVar3);
  }
  _free(lVar53);
  if (8 < uStack_e0) {
    __ZdlPv(puStack_d8);
  }
  pdVar62 = pdStack_150;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pdVar62;
  }
  ___stack_chk_fail();
  _free(CONCAT44(uStack_164,uStack_168));
LAB_1099075d8:
  if (8 < uStack_e0) {
    __ZdlPv(puStack_d8);
  }
  _free(pdStack_150);
  __Unwind_Resume(pdVar62);
  if ((undefined *)pdVar66[1] == &DAT_10e00ca45) {
    pdVar62 = pdVar62 + 1;
  }
  else {
    pdVar62 = (double *)0x0;
  }
  return pdVar62;
}



/* Entry: 1099075fc; end: 10990764f;  */

/* WARNING: Removing unreachable block (ram,0x000109907630) */

long FUN_1099075fc(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00ca45) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109907650; end: 10990765b;  */

undefined ** FUN_109907650(void)

{
  return &PTR_DAT_110b1d1c0;
}



/* Entry: 10990765c; end: 1099091a3;  */

void FUN_10990765c(long *param_1,int param_2,ulong *param_3)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  bool bVar3;
  double ******ppppppdVar4;
  double ******ppppppdVar5;
  code *pcVar6;
  bool bVar7;
  double *******pppppppdVar8;
  double *pdVar9;
  double *pdVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double *pdVar14;
  double *******pppppppdVar15;
  ulong uVar16;
  double *******pppppppdVar17;
  long lVar18;
  double *pdVar19;
  double *******pppppppdVar20;
  long lVar21;
  double *******pppppppdVar22;
  double *pdVar23;
  ulong uVar24;
  long lVar25;
  double *pdVar26;
  double *******pppppppdVar27;
  double *pdVar28;
  int iVar29;
  double *******pppppppdVar30;
  double *******pppppppdVar31;
  double *******pppppppdVar32;
  double dVar33;
  double *******pppppppdVar34;
  undefined1 auVar35 [16];
  double ******ppppppdVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double ******ppppppdStack_310;
  double ******ppppppdStack_308;
  double ******ppppppdStack_300;
  double ******ppppppdStack_2f8;
  double ******ppppppdStack_2f0;
  long lStack_2e8;
  double *pdStack_2e0;
  undefined3 uStack_2d8;
  undefined5 uStack_2d5;
  undefined3 uStack_2d0;
  undefined8 uStack_2cd;
  undefined4 uStack_2c4;
  double ******ppppppdStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  double dStack_2a0;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined2 uStack_208;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double ******ppppppdStack_e8;
  long lStack_e0;
  double *pdStack_d8;
  double ******ppppppdStack_d0;
  double ******ppppppdStack_c8;
  double *pdStack_c0;
  double ******ppppppdStack_b8;
  double ******ppppppdStack_b0;
  double ******ppppppdStack_a8;
  double ******ppppppdStack_a0;
  double ******ppppppdStack_98;
  double ******ppppppdStack_90;
  double ******ppppppdStack_88;
  long lStack_80;
  long lStack_78;
  
  pppppppdVar30 = (double *******)param_3[1];
  iVar29 = (int)pppppppdVar30;
  if (param_2 == 0) {
    uStack_2c4 = 0;
    ppppppdStack_308 = (double ******)0x0;
    ppppppdStack_310 = (double ******)0x0;
    ppppppdStack_2f8 = (double ******)0x0;
    ppppppdStack_300 = (double ******)0x0;
    lStack_2e8 = 0;
    ppppppdStack_2f0 = (double ******)0x0;
    uStack_2d8 = 0;
    pdStack_2e0 = (double *)0x0;
    uStack_2cd = 0;
    uStack_2d5 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0xffffffffffffffff;
    lStack_2b0 = -1;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_220 = 0;
    uStack_228 = 0;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_208 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f8 = 0;
    FUN_10990bcf4(&ppppppdStack_310,param_3);
    lVar25 = lStack_2b0;
    lVar18 = (long)pppppppdVar30 << 0x20;
    pppppppdVar30 = (double *******)(long)iVar29;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((lVar18 != 0) && (lStack_2b0 != 0)) {
      lVar21 = 0;
      if (pppppppdVar30 != (double *******)0x0) {
        lVar21 = 0x7fffffffffffffff / (long)pppppppdVar30;
      }
      if (lStack_2b0 <= lVar21) goto LAB_1099077a4;
      goto LAB_1099077c8;
    }
LAB_1099077a4:
    uVar16 = lStack_2b0 * (long)pppppppdVar30;
    if (uVar16 != 0) {
      if (0 < (long)uVar16) {
        if (uVar16 >> 0x3d == 0) {
          lVar21 = uVar16 * 8;
          _malloc();
          if (lVar21 != 0) goto LAB_10990787c;
        }
LAB_1099077c8:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_109908fb4;
      }
      lVar21 = 0;
LAB_10990787c:
      *param_1 = lVar21;
    }
    ppppppdVar5 = ppppppdStack_308;
    ppppppdVar4 = ppppppdStack_310;
    param_1[1] = lVar25;
    param_1[2] = (long)pppppppdVar30;
    pdStack_d8 = (double *)0x0;
    ppppppdStack_d0 = (double ******)0x0;
    ppppppdStack_c8 = (double ******)0x0;
    if (CONCAT53(uStack_2d5,uStack_2d8) == 0) {
      pppppppdVar31 = (double *******)0x0;
LAB_1099078b4:
      pppppppdVar8 = pppppppdVar31;
      bVar7 = pppppppdVar8 == (double *******)0x0;
      if (pppppppdVar8 != (double *******)0x0 || lVar18 != 0) goto LAB_10990792c;
      bVar1 = false;
LAB_109907b50:
      pppppppdVar8 = (double *******)ppppppdStack_d0;
      pdVar9 = pdStack_d8;
      if (0 < (long)ppppppdStack_d0 * (long)pppppppdVar30) {
        _bzero(pdStack_d8,(long)ppppppdStack_d0 * (long)pppppppdVar30 * 8);
      }
      bVar3 = bVar7;
      if ((double *******)ppppppdVar5 == (double *******)0x0 || lVar18 == 0) {
        bVar3 = true;
      }
      if (!bVar3) {
        if (lVar18 == 0x100000000) {
          if (pppppppdVar8 == (double *******)0x1) {
            bVar7 = false;
            *pdVar9 = (double)*ppppppdVar4 + *pdVar9;
            goto LAB_109908624;
          }
          if (bVar1) {
            pdVar10 = (double *)0x8;
            _malloc();
            if (pdVar10 == (double *)0x0) goto LAB_109908f94;
            pppppppdVar31 = (double *******)0x0;
            do {
              dVar33 = 1.0;
              if (pppppppdVar31 != (double *******)0x0) {
                dVar33 = 0.0;
              }
              pdVar10[(long)pppppppdVar31] = dVar33;
              pppppppdVar31 = (double *******)((long)pppppppdVar31 + 1);
            } while (pppppppdVar30 != pppppppdVar31);
          }
          else {
            pdVar10 = (double *)0x0;
          }
          ppppppdStack_a8 = ppppppdVar4;
          ppppppdStack_a0 = ppppppdStack_300;
          ppppppdStack_b8 = (double ******)0x1;
          pdStack_c0 = pdVar10;
          FUN_109909a3c(0x3ff0000000000000,pppppppdVar8,ppppppdVar5,&ppppppdStack_a8,&pdStack_c0,
                        pdVar9,1);
LAB_109908618:
          _free(pdVar10);
        }
        else {
          if (pppppppdVar8 != (double *******)0x1) {
            lVar25 = 0;
            if (pppppppdVar30 != (double *******)0x0) {
              lVar25 = 0x7fffffffffffffff / (long)pppppppdVar30;
            }
            if ((long)pppppppdVar30 <= lVar25 && (ulong)((long)iVar29 * (long)iVar29) >> 0x3d == 0)
            {
              pdVar10 = (double *)((long)iVar29 * (long)iVar29 * 8);
              _malloc();
              if (pdVar10 != (double *)0x0) {
                if (bVar1) {
                  pppppppdVar31 = (double *******)0x0;
                  pdVar9 = pdVar10;
                  do {
                    pppppppdVar17 = (double *******)0x0;
                    do {
                      dVar33 = 1.0;
                      if (pppppppdVar31 != pppppppdVar17) {
                        dVar33 = 0.0;
                      }
                      pdVar9[(long)pppppppdVar17] = dVar33;
                      pppppppdVar17 = (double *******)((long)pppppppdVar17 + 1);
                    } while (pppppppdVar30 != pppppppdVar17);
                    pppppppdVar31 = (double *******)((long)pppppppdVar31 + 1);
                    pdVar9 = pdVar9 + (long)pppppppdVar30;
                  } while (pppppppdVar31 != pppppppdVar30);
                }
                ppppppdStack_a8 = (double ******)0x0;
                ppppppdStack_a0 = (double ******)0x0;
                ppppppdStack_88 = ppppppdVar5;
                ppppppdStack_98 = (double ******)pppppppdVar8;
                ppppppdStack_90 = (double ******)pppppppdVar30;
                if ((bRam00000001132dfa18 & 1) == 0) {
                  iVar29 = 0x132dfa18;
                  ___cxa_guard_acquire();
                  if (iVar29 != 0) {
                    uRam00000001132dfa08 = 0x80000;
                    uRam00000001132dfa00 = 0x4000;
                    lRam00000001132dfa10 = 0x80000;
                    ___cxa_guard_release(0x1132dfa18);
                  }
                }
                ppppppdVar36 = ppppppdStack_88;
                pppppppdVar31 = (double *******)ppppppdStack_98;
                if ((long)ppppppdStack_98 <= (long)ppppppdStack_90) {
                  pppppppdVar31 = (double *******)ppppppdStack_90;
                }
                pppppppdVar17 = (double *******)ppppppdStack_88;
                if ((long)ppppppdStack_88 <= (long)pppppppdVar31) {
                  pppppppdVar17 = pppppppdVar31;
                }
                pppppppdVar31 = (double *******)ppppppdVar36;
                if (0x2f < (long)pppppppdVar17) {
                  pppppppdVar31 =
                       (double *******)
                       ((long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8);
                  if ((long)pppppppdVar31 < 2) {
                    pppppppdVar31 = (double *******)0x1;
                  }
                  if ((long)pppppppdVar31 < (long)ppppppdStack_88) {
                    uVar16 = 0;
                    if (pppppppdVar31 != (double *******)0x0) {
                      uVar16 = (ulong)ppppppdStack_88 / (ulong)pppppppdVar31;
                    }
                    uVar24 = (long)ppppppdStack_88 - uVar16 * (long)pppppppdVar31;
                    ppppppdStack_88 = (double ******)pppppppdVar31;
                    if (uVar24 != 0) {
                      lVar25 = uVar16 * 8 + 8;
                      lVar18 = 0;
                      if (lVar25 != 0) {
                        lVar18 = (long)((long)pppppppdVar31 + ~uVar24) / lVar25;
                      }
                      ppppppdStack_88 = (double ******)(pppppppdVar31 + -lVar18);
                    }
                  }
                  uVar16 = (uRam00000001132dfa00 - 0xc0) +
                           (long)ppppppdStack_98 * (long)ppppppdStack_88 * -8;
                  if ((long)uVar16 < (long)ppppppdStack_88 * 0x20) {
                    uVar24 = 0;
                    if ((long)pppppppdVar31 << 5 != 0) {
                      uVar24 = 0x480000 / (ulong)((long)pppppppdVar31 << 5);
                    }
                  }
                  else {
                    uVar24 = 0;
                    if ((long)ppppppdStack_88 << 3 != 0) {
                      uVar24 = uVar16 / (ulong)((long)ppppppdStack_88 << 3);
                    }
                  }
                  uVar16 = 0;
                  if ((long)ppppppdStack_88 << 4 != 0) {
                    uVar16 = 0x180000 / (ulong)((long)ppppppdStack_88 << 4);
                  }
                  if ((long)uVar16 <= (long)uVar24) {
                    uVar24 = uVar16;
                  }
                  pppppppdVar17 = (double *******)(uVar24 & 0xfffffffffffffffc);
                  pppppppdVar31 = (double *******)ppppppdStack_88;
                  if ((long)pppppppdVar17 < (long)ppppppdStack_90) {
                    lVar25 = 0;
                    if (pppppppdVar17 != (double *******)0x0) {
                      lVar25 = (long)ppppppdStack_90 / (long)pppppppdVar17;
                    }
                    lVar18 = (long)ppppppdStack_90 - lVar25 * (long)pppppppdVar17;
                    ppppppdStack_90 = (double ******)pppppppdVar17;
                    if (lVar18 != 0) {
                      lVar25 = lVar25 * 4 + 4;
                      lVar21 = 0;
                      if (lVar25 != 0) {
                        lVar21 = ((long)pppppppdVar17 - lVar18) / lVar25;
                      }
                      ppppppdStack_90 = (double ******)((long)pppppppdVar17 + lVar21 * -4);
                    }
                  }
                  else if (ppppppdVar36 == ppppppdStack_88) {
                    uVar24 = (long)ppppppdVar36 * (long)ppppppdStack_90 * 8;
                    pppppppdVar17 = (double *******)ppppppdStack_98;
                    uVar16 = uRam00000001132dfa00;
                    if (0x400 < (long)uVar24) {
                      if (0x23f < (long)ppppppdStack_98) {
                        pppppppdVar17 = (double *******)0x240;
                      }
                      uVar16 = uRam00000001132dfa08;
                      if (lRam00000001132dfa10 == 0 || 0x8000 < uVar24) {
                        uVar16 = 0x180000;
                        pppppppdVar17 = (double *******)ppppppdStack_98;
                      }
                    }
                    pppppppdVar31 = (double *******)0x0;
                    if ((long)ppppppdVar36 * 0x18 != 0) {
                      pppppppdVar31 = (double *******)(uVar16 / (ulong)((long)ppppppdVar36 * 0x18));
                    }
                    if ((long)pppppppdVar31 <= (long)pppppppdVar17) {
                      pppppppdVar17 = pppppppdVar31;
                    }
                    if ((long)pppppppdVar17 < 7) {
                      pppppppdVar31 = (double *******)ppppppdVar36;
                      if (pppppppdVar17 == (double *******)0x0) goto LAB_1099085c4;
                    }
                    else {
                      pppppppdVar17 =
                           (double *******)
                           ((((ulong)pppppppdVar17 / 6) * 2 + (ulong)pppppppdVar17 / 6) * 2);
                    }
                    lVar25 = 0;
                    if (pppppppdVar17 != (double *******)0x0) {
                      lVar25 = (long)ppppppdStack_98 / (long)pppppppdVar17;
                    }
                    lVar18 = (long)ppppppdStack_98 - lVar25 * (long)pppppppdVar17;
                    pppppppdVar31 = (double *******)ppppppdVar36;
                    ppppppdStack_98 = (double ******)pppppppdVar17;
                    if (lVar18 != 0) {
                      lVar21 = lVar25 * 6 + 6;
                      lVar25 = 0;
                      if (lVar21 != 0) {
                        lVar25 = ((long)pppppppdVar17 - lVar18) / lVar21;
                      }
                      ppppppdStack_98 = (double ******)((long)pppppppdVar17 + lVar25 * -6);
                    }
                  }
                }
LAB_1099085c4:
                lStack_80 = (long)ppppppdStack_98 * (long)pppppppdVar31;
                lStack_78 = (long)pppppppdVar31 * (long)ppppppdStack_90;
                FUN_109404694(0x3ff0000000000000,pppppppdVar8,pppppppdVar30,ppppppdVar5,ppppppdVar4,
                              ppppppdStack_300,pdVar10,pppppppdVar30,pdStack_d8,1,ppppppdStack_d0,
                              &ppppppdStack_a8,0);
                _free(ppppppdStack_a8);
                _free(ppppppdStack_a0);
                goto LAB_109908618;
              }
            }
LAB_109908f94:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109908fb4;
          }
          if ((long)ppppppdVar5 < 1) {
            bVar7 = false;
            pppppppdVar8 = (double *******)0x1;
            goto LAB_109908624;
          }
          pppppppdVar31 = (double *******)0x0;
          pppppppdVar8 = (double *******)0x1;
          do {
            if (bVar1) {
              pppppppdVar17 = (double *******)0x0;
              ppppppdVar36 = (double ******)
                             ppppppdVar4[(long)pppppppdVar31 * (long)ppppppdStack_300];
              do {
                dVar33 = 1.0;
                if (pppppppdVar31 != pppppppdVar17) {
                  dVar33 = 0.0;
                }
                pdVar9[(long)pppppppdVar17] =
                     pdVar9[(long)pppppppdVar17] + (double)ppppppdVar36 * dVar33;
                pppppppdVar17 = (double *******)((long)pppppppdVar17 + 1);
              } while (pppppppdVar30 != pppppppdVar17);
            }
            pppppppdVar31 = (double *******)((long)pppppppdVar31 + 1);
          } while (pppppppdVar31 != (double *******)ppppppdVar5);
        }
        bVar7 = false;
      }
    }
    else {
      if (uStack_2cd._3_1_ != '\x01') {
        uVar16 = uStack_2a8;
        if ((long)uStack_2a8 < 2) {
          uVar16 = 1;
        }
        dStack_2a0 = (double)uVar16 / 4503599627370496.0;
      }
      dVar33 = 2.2250738585072014e-308;
      if (2.2250738585072014e-308 <= *pdStack_2e0 * dStack_2a0) {
        dVar33 = *pdStack_2e0 * dStack_2a0;
      }
      pppppppdVar31 = (double *******)ppppppdStack_2c0;
      do {
        pppppppdVar8 = pppppppdVar31;
        pppppppdVar31 = (double *******)((ulong)ppppppdStack_2c0 & (long)ppppppdStack_2c0 >> 0x3f);
        if ((long)pppppppdVar8 < 1) goto LAB_1099078b4;
        pppppppdVar31 = (double *******)((long)pppppppdVar8 + -1);
      } while (pdStack_2e0[(long)pppppppdVar8 + -1] < dVar33);
      bVar7 = false;
LAB_10990792c:
      if ((lVar18 != 0) && (!bVar7)) {
        lVar25 = 0;
        if (pppppppdVar30 != (double *******)0x0) {
          lVar25 = 0x7fffffffffffffff / (long)pppppppdVar30;
        }
        if ((long)pppppppdVar8 <= lVar25) goto LAB_109907944;
        goto LAB_109908f94;
      }
LAB_109907944:
      uVar16 = (long)pppppppdVar8 * (long)pppppppdVar30;
      pdVar9 = pdStack_d8;
      if (uVar16 != 0) {
        if ((long)uVar16 < 1) {
          pdVar9 = (double *)0x0;
          goto LAB_109907994;
        }
        if (uVar16 >> 0x3d == 0) {
          pdVar9 = (double *)(uVar16 * 8);
          _malloc();
          if (pdVar9 != (double *)0x0) goto LAB_109907994;
        }
        goto LAB_109908f94;
      }
LAB_109907994:
      pdStack_d8 = pdVar9;
      bVar1 = 0 < (long)pppppppdVar30;
      ppppppdStack_d0 = (double ******)pppppppdVar8;
      ppppppdStack_c8 = (double ******)pppppppdVar30;
      if (((long)pppppppdVar30 < 1) || (0x13 < (long)pppppppdVar8 + (lVar18 >> 0x1f)))
      goto LAB_109907b50;
      pppppppdVar17 = (double *******)0x0;
      pppppppdVar31 = (double *******)0x0;
      lVar25 = -1;
      do {
        lVar18 = (long)pppppppdVar31 * (long)pppppppdVar8;
        if (0 < (long)pppppppdVar17) {
          dVar33 = 1.0;
          if (pppppppdVar31 != (double *******)0x0) {
            dVar33 = 0.0;
          }
          dVar33 = dVar33 * (double)*ppppppdVar4;
          lVar21 = (long)pppppppdVar30 + -1;
          lVar11 = lVar25;
          pppppppdVar22 = (double *******)ppppppdVar4;
          if ((double *******)0x1 < pppppppdVar30) {
            do {
              dVar37 = 1.0;
              if (lVar11 != 0) {
                dVar37 = 0.0;
              }
              dVar33 = dVar33 + (double)pppppppdVar22[(long)ppppppdStack_300] * dVar37;
              lVar21 = lVar21 + -1;
              lVar11 = lVar11 + -1;
              pppppppdVar22 = pppppppdVar22 + (long)ppppppdStack_300;
            } while (lVar21 != 0);
          }
          pdStack_d8[lVar18] = dVar33;
        }
        uVar16 = (long)pppppppdVar8 - (long)pppppppdVar17;
        lVar21 = (uVar16 & 0xfffffffffffffffe) + (long)pppppppdVar17;
        if (1 < (long)uVar16) {
          pppppppdVar20 = (double *******)(ppppppdVar4 + (long)pppppppdVar17);
          pppppppdVar22 = pppppppdVar17;
          do {
            dVar33 = 0.0;
            dVar37 = 0.0;
            pppppppdVar27 = pppppppdVar20;
            pppppppdVar32 = pppppppdVar31;
            pppppppdVar34 = (double *******)ppppppdVar5;
            if (0 < (long)ppppppdVar5) {
              do {
                dVar39 = 1.0;
                if (pppppppdVar32 != (double *******)0x0) {
                  dVar39 = 0.0;
                }
                dVar33 = dVar33 + (double)*pppppppdVar27 * dVar39;
                dVar37 = dVar37 + (double)pppppppdVar27[1] * dVar39;
                pppppppdVar34 = (double *******)((long)pppppppdVar34 + -1);
                pppppppdVar27 = pppppppdVar27 + (long)ppppppdStack_300;
                pppppppdVar32 = (double *******)((long)pppppppdVar32 + -1);
              } while (pppppppdVar34 != (double *******)0x0);
            }
            (pdStack_d8 + (long)(lVar18 + (long)pppppppdVar22))[1] = dVar37;
            pdStack_d8[(long)(lVar18 + (long)pppppppdVar22)] = dVar33;
            pppppppdVar22 = (double *******)((long)pppppppdVar22 + 2);
            pppppppdVar20 = pppppppdVar20 + 2;
          } while ((long)pppppppdVar22 < lVar21);
        }
        if (lVar21 < (long)pppppppdVar8) {
          dVar33 = 1.0;
          if (pppppppdVar31 != (double *******)0x0) {
            dVar33 = 0.0;
          }
          pdVar9 = (double *)
                   ((long)ppppppdVar4 +
                   (uVar16 * 8 & 0xfffffffffffffff0) + (long)pppppppdVar17 * 8 +
                   (long)ppppppdStack_300 * 8);
          do {
            dVar37 = dVar33 * (double)ppppppdVar4[lVar21];
            pdVar10 = pdVar9;
            lVar11 = lVar25;
            lVar12 = (long)pppppppdVar30 + -1;
            if ((double *******)0x1 < pppppppdVar30) {
              do {
                dVar39 = 1.0;
                if (lVar11 != 0) {
                  dVar39 = 0.0;
                }
                dVar37 = dVar37 + *pdVar10 * dVar39;
                lVar12 = lVar12 + -1;
                pdVar10 = pdVar10 + (long)ppppppdStack_300;
                lVar11 = lVar11 + -1;
              } while (lVar12 != 0);
            }
            pdStack_d8[lVar18 + lVar21] = dVar37;
            lVar21 = lVar21 + 1;
            pdVar9 = pdVar9 + 1;
          } while (lVar21 < (long)pppppppdVar8);
        }
        uVar16 = (long)pppppppdVar17 + ((ulong)pppppppdVar8 & 1);
        pppppppdVar20 = (double *******)(uVar16 & 1);
        pppppppdVar22 = (double *******)-(long)pppppppdVar20;
        if ((long)uVar16 < 0 == SCARRY8((long)pppppppdVar17,(ulong)pppppppdVar8 & 1)) {
          pppppppdVar22 = pppppppdVar20;
        }
        pppppppdVar17 = pppppppdVar8;
        if ((long)pppppppdVar22 <= (long)pppppppdVar8) {
          pppppppdVar17 = pppppppdVar22;
        }
        pppppppdVar31 = (double *******)((long)pppppppdVar31 + 1);
        lVar25 = lVar25 + 1;
      } while (pppppppdVar31 != pppppppdVar30);
    }
LAB_109908624:
    ppppppdVar5 = ppppppdStack_c8;
    ppppppdVar4 = ppppppdStack_d0;
    pdVar10 = pdStack_d8;
    pdVar9 = pdStack_2e0;
    pdVar19 = pdStack_d8;
    pppppppdVar30 = (double *******)ppppppdStack_d0;
    if ((double *******)ppppppdStack_d0 != pppppppdVar8) {
      bVar1 = bVar7;
      if ((double *******)ppppppdStack_c8 == (double *******)0x0) {
        bVar1 = true;
      }
      pppppppdVar30 = pppppppdVar8;
      if (!bVar1) {
        lVar25 = 0;
        if ((double *******)ppppppdStack_c8 != (double *******)0x0) {
          lVar25 = 0x7fffffffffffffff / (long)ppppppdStack_c8;
        }
        if ((long)pppppppdVar8 <= lVar25) goto LAB_109908664;
        goto LAB_10990868c;
      }
      if ((double *******)ppppppdStack_c8 != (double *******)0x0) {
LAB_109908664:
        uVar16 = (long)ppppppdStack_c8 * (long)pppppppdVar8;
        _free(pdStack_d8);
        if (0 < (long)uVar16) {
          if (uVar16 >> 0x3d == 0) {
            pdVar19 = (double *)(uVar16 * 8);
            _malloc();
            if (pdVar19 != (double *)0x0) goto LAB_1099086bc;
          }
LAB_10990868c:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109908fb4;
        }
        pdVar19 = (double *)0x0;
      }
    }
LAB_1099086bc:
    ppppppdStack_d0 = (double ******)pppppppdVar30;
    pdStack_d8 = pdVar19;
    lVar25 = lStack_2e8;
    pppppppdVar30 = (double *******)ppppppdStack_2f0;
    ppppppdVar36 = ppppppdStack_2f8;
    pppppppdVar31 = (double *******)ppppppdVar5;
    if (0 < (long)ppppppdVar5) {
      pppppppdVar22 = (double *******)0x0;
      pppppppdVar17 = (double *******)0x0;
      auVar35 = NEON_fmov(0x3ff0000000000000,8);
      pdVar23 = pdStack_d8;
      pdVar19 = pdVar10;
      do {
        if (0 < (long)pppppppdVar22) {
          pdStack_d8[(long)pppppppdVar17 * (long)pppppppdVar8] =
               (1.0 / *pdVar9) * pdVar10[(long)pppppppdVar17 * (long)ppppppdVar4];
        }
        lVar18 = ((long)pppppppdVar8 - (long)pppppppdVar22 & 0xfffffffffffffffeU) +
                 (long)pppppppdVar22;
        if (1 < (long)pppppppdVar8 - (long)pppppppdVar22) {
          pppppppdVar31 = pppppppdVar22;
          pdVar14 = pdVar23 + (long)pppppppdVar22;
          pdVar26 = pdVar9 + (long)pppppppdVar22;
          pdVar28 = pdVar19 + (long)pppppppdVar22;
          do {
            dVar33 = *pdVar28;
            dVar37 = *pdVar26;
            pdVar14[1] = pdVar28[1] * (auVar35._8_8_ / pdVar26[1]);
            *pdVar14 = dVar33 * (auVar35._0_8_ / dVar37);
            pppppppdVar31 = (double *******)((long)pppppppdVar31 + 2);
            pdVar14 = pdVar14 + 2;
            pdVar26 = pdVar26 + 2;
            pdVar28 = pdVar28 + 2;
          } while ((long)pppppppdVar31 < lVar18);
        }
        for (; lVar18 < (long)pppppppdVar8; lVar18 = lVar18 + 1) {
          pdVar23[lVar18] = (1.0 / pdVar9[lVar18]) * pdVar19[lVar18];
        }
        uVar16 = (long)pppppppdVar22 + ((ulong)pppppppdVar8 & 1);
        pppppppdVar20 = (double *******)(uVar16 & 1);
        pppppppdVar31 = (double *******)-(long)pppppppdVar20;
        if ((long)uVar16 < 0 == SCARRY8((long)pppppppdVar22,(ulong)pppppppdVar8 & 1)) {
          pppppppdVar31 = pppppppdVar20;
        }
        pppppppdVar22 = pppppppdVar8;
        if ((long)pppppppdVar31 <= (long)pppppppdVar8) {
          pppppppdVar22 = pppppppdVar31;
        }
        pppppppdVar17 = (double *******)((long)pppppppdVar17 + 1);
        pdVar19 = pdVar19 + (long)ppppppdVar4;
        pdVar23 = pdVar23 + (long)pppppppdVar8;
        pppppppdVar31 = (double *******)ppppppdStack_c8;
      } while (pppppppdVar17 != (double *******)ppppppdVar5);
    }
    ppppppdStack_e8 = (double ******)0x0;
    lStack_e0 = 0;
    pdStack_c0 = (double *)0x0;
    ppppppdStack_b8 = (double ******)0x0;
    ppppppdStack_b0 = (double ******)0x0;
    if ((double *******)ppppppdStack_2f0 != (double *******)0x0 ||
        pppppppdVar31 != (double *******)0x0) {
      if ((pppppppdVar31 != (double *******)0x0) &&
         ((double *******)ppppppdStack_2f0 != (double *******)0x0)) {
        lVar18 = 0;
        if (pppppppdVar31 != (double *******)0x0) {
          lVar18 = 0x7fffffffffffffff / (long)pppppppdVar31;
        }
        if ((long)ppppppdStack_2f0 <= lVar18) goto LAB_1099087e0;
        goto LAB_109908804;
      }
LAB_1099087e0:
      uVar16 = (long)ppppppdStack_2f0 * (long)pppppppdVar31;
      pdVar9 = pdStack_c0;
      if (uVar16 != 0) {
        if (0 < (long)uVar16) {
          if (uVar16 >> 0x3d == 0) {
            pdVar9 = (double *)(uVar16 * 8);
            _malloc();
            if (pdVar9 != (double *)0x0) goto LAB_10990883c;
          }
LAB_109908804:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109908fb4;
        }
        pdVar9 = (double *)0x0;
      }
LAB_10990883c:
      pdStack_c0 = pdVar9;
      ppppppdStack_b8 = (double ******)pppppppdVar30;
      ppppppdStack_b0 = (double ******)pppppppdVar31;
    }
    pppppppdVar17 = (double *******)ppppppdStack_b0;
    ppppppdVar4 = ppppppdStack_d0;
    if (((long)ppppppdStack_d0 < 1) ||
       (0x13 < (long)pppppppdVar30 + (long)pppppppdVar31 + (long)ppppppdStack_d0)) {
      if (0 < (long)pppppppdVar30 * (long)pppppppdVar31) {
        _bzero();
      }
      if (pppppppdVar30 == (double *******)0x0) {
        bVar7 = true;
      }
      if ((!bVar7) && (pppppppdVar31 != (double *******)0x0)) {
        if (pppppppdVar31 == (double *******)0x1) {
          if (pppppppdVar30 == (double *******)0x1) {
            if ((double *******)ppppppdVar4 == (double *******)0x0) {
              dVar33 = 0.0;
            }
            else {
              pppppppdVar30 = (double *******)((long)ppppppdVar4 + 3);
              if (-1 < (long)ppppppdVar4) {
                pppppppdVar30 = (double *******)ppppppdVar4;
              }
              if ((long)ppppppdVar4 + 1U < 3) {
                dVar33 = (double)*ppppppdVar36 * *pdStack_d8;
              }
              else {
                uVar16 = (long)ppppppdVar4 - ((long)ppppppdVar4 >> 0x3f) & 0xfffffffffffffffe;
                dVar33 = (double)*ppppppdVar36 * *pdStack_d8;
                dVar37 = (double)ppppppdVar36[1] * pdStack_d8[1];
                if (3 < (long)ppppppdVar4) {
                  uVar24 = (ulong)pppppppdVar30 & 0xfffffffffffffffc;
                  dVar39 = (double)ppppppdVar36[2] * pdStack_d8[2];
                  dVar40 = (double)ppppppdVar36[3] * pdStack_d8[3];
                  if ((double *******)0x7 < ppppppdVar4) {
                    pdVar9 = pdStack_d8 + 6;
                    pppppppdVar30 = (double *******)(ppppppdVar36 + 6);
                    lVar25 = 4;
                    do {
                      dVar33 = dVar33 + (double)pppppppdVar30[-2] * pdVar9[-2];
                      dVar37 = dVar37 + (double)pppppppdVar30[-1] * pdVar9[-1];
                      dVar39 = dVar39 + (double)*pppppppdVar30 * *pdVar9;
                      dVar40 = dVar40 + (double)pppppppdVar30[1] * pdVar9[1];
                      lVar25 = lVar25 + 4;
                      pdVar9 = pdVar9 + 4;
                      pppppppdVar30 = pppppppdVar30 + 4;
                    } while (lVar25 < (long)uVar24);
                  }
                  dVar33 = dVar39 + dVar33;
                  dVar37 = dVar40 + dVar37;
                  if ((long)uVar24 < (long)uVar16) {
                    dVar33 = dVar33 + (double)ppppppdVar36[uVar24] * pdStack_d8[uVar24];
                    dVar37 = dVar37 + (double)(ppppppdVar36 + uVar24)[1] * (pdStack_d8 + uVar24)[1];
                  }
                }
                dVar33 = dVar33 + dVar37;
                lVar25 = (long)ppppppdVar4 % 2;
                if (lVar25 != 0 && lVar25 < 0 == SBORROW8((long)ppppppdVar4,uVar16)) {
                  pdVar9 = pdStack_d8 + ((long)ppppppdVar4 / 2) * 2;
                  pppppppdVar30 = (double *******)(ppppppdVar36 + ((long)ppppppdVar4 / 2) * 2);
                  do {
                    dVar33 = dVar33 + (double)*pppppppdVar30 * *pdVar9;
                    lVar25 = lVar25 + -1;
                    pdVar9 = pdVar9 + 1;
                    pppppppdVar30 = pppppppdVar30 + 1;
                  } while (lVar25 != 0);
                }
              }
            }
            *pdStack_c0 = dVar33 + *pdStack_c0;
LAB_109908c04:
            pppppppdVar30 = (double *******)0x1;
          }
          else {
            ppppppdStack_90 = (double ******)&ppppppdStack_2f8;
            ppppppdStack_a8 = ppppppdVar36;
            ppppppdStack_a0 = (double ******)pppppppdVar30;
            lStack_80 = lStack_e0;
            ppppppdStack_88 = ppppppdStack_e8;
            lStack_78 = lVar25;
            ppppppdStack_98 = (double ******)pppppppdVar8;
            FUN_109913ad8(0x3ff0000000000000,&ppppppdStack_a8,pdStack_d8,ppppppdVar4,pdStack_c0);
          }
        }
        else {
          if (pppppppdVar30 == (double *******)0x1) {
            FUN_109913c28(0x3ff0000000000000,&pdStack_d8,ppppppdVar36,pppppppdVar8,pdStack_c0,
                          &pdStack_c0);
            goto LAB_109908c04;
          }
          ppppppdStack_a8 = (double ******)0x0;
          ppppppdStack_a0 = (double ******)0x0;
          ppppppdStack_98 = (double ******)pppppppdVar30;
          ppppppdStack_90 = (double ******)pppppppdVar31;
          ppppppdStack_88 = (double ******)pppppppdVar8;
          if ((bRam00000001132dfa18 & 1) == 0) {
            iVar29 = 0x132dfa18;
            ___cxa_guard_acquire();
            if (iVar29 != 0) {
              uRam00000001132dfa08 = 0x80000;
              uRam00000001132dfa00 = 0x4000;
              lRam00000001132dfa10 = 0x80000;
              ___cxa_guard_release(0x1132dfa18);
            }
          }
          ppppppdVar5 = ppppppdStack_88;
          ppppppdVar4 = ppppppdStack_b8;
          pppppppdVar31 = (double *******)ppppppdStack_98;
          if ((long)ppppppdStack_98 <= (long)ppppppdStack_90) {
            pppppppdVar31 = (double *******)ppppppdStack_90;
          }
          pppppppdVar17 = (double *******)ppppppdStack_88;
          if ((long)ppppppdStack_88 <= (long)pppppppdVar31) {
            pppppppdVar17 = pppppppdVar31;
          }
          pppppppdVar31 = (double *******)ppppppdVar5;
          if (0x2f < (long)pppppppdVar17) {
            pppppppdVar31 =
                 (double *******)((long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8);
            if ((long)pppppppdVar31 < 2) {
              pppppppdVar31 = (double *******)0x1;
            }
            if ((long)pppppppdVar31 < (long)ppppppdStack_88) {
              uVar16 = 0;
              if (pppppppdVar31 != (double *******)0x0) {
                uVar16 = (ulong)ppppppdStack_88 / (ulong)pppppppdVar31;
              }
              uVar24 = (long)ppppppdStack_88 - uVar16 * (long)pppppppdVar31;
              ppppppdStack_88 = (double ******)pppppppdVar31;
              if (uVar24 != 0) {
                lVar25 = uVar16 * 8 + 8;
                lVar18 = 0;
                if (lVar25 != 0) {
                  lVar18 = (long)((long)pppppppdVar31 + ~uVar24) / lVar25;
                }
                ppppppdStack_88 = (double ******)(pppppppdVar31 + -lVar18);
              }
            }
            uVar16 = (uRam00000001132dfa00 - 0xc0) +
                     (long)ppppppdStack_98 * (long)ppppppdStack_88 * -8;
            if ((long)uVar16 < (long)ppppppdStack_88 * 0x20) {
              uVar24 = 0;
              if ((long)pppppppdVar31 << 5 != 0) {
                uVar24 = 0x480000 / (ulong)((long)pppppppdVar31 << 5);
              }
            }
            else {
              uVar24 = 0;
              if ((long)ppppppdStack_88 << 3 != 0) {
                uVar24 = uVar16 / (ulong)((long)ppppppdStack_88 << 3);
              }
            }
            uVar16 = 0;
            if ((long)ppppppdStack_88 << 4 != 0) {
              uVar16 = 0x180000 / (ulong)((long)ppppppdStack_88 << 4);
            }
            if ((long)uVar16 <= (long)uVar24) {
              uVar24 = uVar16;
            }
            pppppppdVar17 = (double *******)(uVar24 & 0xfffffffffffffffc);
            pppppppdVar31 = (double *******)ppppppdStack_88;
            if ((long)pppppppdVar17 < (long)ppppppdStack_90) {
              lVar25 = 0;
              if (pppppppdVar17 != (double *******)0x0) {
                lVar25 = (long)ppppppdStack_90 / (long)pppppppdVar17;
              }
              lVar18 = (long)ppppppdStack_90 - lVar25 * (long)pppppppdVar17;
              ppppppdStack_90 = (double ******)pppppppdVar17;
              if (lVar18 != 0) {
                lVar25 = lVar25 * 4 + 4;
                lVar21 = 0;
                if (lVar25 != 0) {
                  lVar21 = ((long)pppppppdVar17 - lVar18) / lVar25;
                }
                ppppppdStack_90 = (double ******)((long)pppppppdVar17 + lVar21 * -4);
              }
            }
            else if (ppppppdVar5 == ppppppdStack_88) {
              uVar24 = (long)ppppppdVar5 * (long)ppppppdStack_90 * 8;
              pppppppdVar17 = (double *******)ppppppdStack_98;
              uVar16 = uRam00000001132dfa00;
              if (0x400 < (long)uVar24) {
                if (0x23f < (long)ppppppdStack_98) {
                  pppppppdVar17 = (double *******)0x240;
                }
                uVar16 = uRam00000001132dfa08;
                if (lRam00000001132dfa10 == 0 || 0x8000 < uVar24) {
                  uVar16 = 0x180000;
                  pppppppdVar17 = (double *******)ppppppdStack_98;
                }
              }
              pppppppdVar31 = (double *******)0x0;
              if ((long)ppppppdVar5 * 0x18 != 0) {
                pppppppdVar31 = (double *******)(uVar16 / (ulong)((long)ppppppdVar5 * 0x18));
              }
              if ((long)pppppppdVar31 <= (long)pppppppdVar17) {
                pppppppdVar17 = pppppppdVar31;
              }
              if ((long)pppppppdVar17 < 7) {
                pppppppdVar31 = (double *******)ppppppdVar5;
                if (pppppppdVar17 == (double *******)0x0) goto LAB_109908d4c;
              }
              else {
                pppppppdVar17 =
                     (double *******)
                     ((((ulong)pppppppdVar17 / 6) * 2 + (ulong)pppppppdVar17 / 6) * 2);
              }
              lVar25 = 0;
              if (pppppppdVar17 != (double *******)0x0) {
                lVar25 = (long)ppppppdStack_98 / (long)pppppppdVar17;
              }
              lVar18 = (long)ppppppdStack_98 - lVar25 * (long)pppppppdVar17;
              pppppppdVar31 = (double *******)ppppppdVar5;
              ppppppdStack_98 = (double ******)pppppppdVar17;
              if (lVar18 != 0) {
                lVar21 = lVar25 * 6 + 6;
                lVar25 = 0;
                if (lVar21 != 0) {
                  lVar25 = ((long)pppppppdVar17 - lVar18) / lVar21;
                }
                ppppppdStack_98 = (double ******)((long)pppppppdVar17 + lVar25 * -6);
              }
            }
          }
LAB_109908d4c:
          lStack_80 = (long)ppppppdStack_98 * (long)pppppppdVar31;
          lStack_78 = (long)pppppppdVar31 * (long)ppppppdStack_90;
          FUN_109913d80(0x3ff0000000000000,pppppppdVar30,ppppppdStack_c8,pppppppdVar8,ppppppdVar36,
                        lStack_2e8,pdStack_d8,ppppppdStack_d0,pdStack_c0,1,ppppppdStack_b8,
                        &ppppppdStack_a8,0);
          _free(ppppppdStack_a8);
          _free(ppppppdStack_a0);
          pppppppdVar30 = (double *******)ppppppdVar4;
          pppppppdVar17 = (double *******)ppppppdStack_b0;
        }
      }
    }
    else if (0 < (long)pppppppdVar31) {
      pppppppdVar8 = (double *******)0x0;
      pppppppdVar22 = (double *******)((ulong)ppppppdStack_d0 & 0x7ffffffffffffffc);
      pdVar9 = pdStack_d8 + 6;
      uVar16 = (long)ppppppdStack_d0 * 8 & 0xfffffffffffffff0;
      pdVar10 = (double *)((long)pdStack_d8 + uVar16);
      do {
        if (0 < (long)pppppppdVar30) {
          pppppppdVar20 = (double *******)0x0;
          pauVar2 = (undefined1 (*) [16])(pdStack_d8 + (long)pppppppdVar8 * (long)ppppppdStack_d0);
          pdVar19 = (double *)((long)ppppppdVar36 + uVar16);
          pppppppdVar27 = (double *******)(ppppppdVar36 + 6);
          do {
            pppppppdVar32 = (double *******)(ppppppdVar36 + (long)pppppppdVar20 * lVar25);
            if (ppppppdStack_d0 < (double *******)0x2) {
              dVar33 = (double)*pppppppdVar32 * *(double *)*pauVar2;
            }
            else {
              dVar33 = (double)*pppppppdVar32 * SUB168(*pauVar2,0);
              dVar37 = (double)pppppppdVar32[1] * SUB168(*pauVar2,8);
              if ((double *******)0x3 < ppppppdStack_d0) {
                dVar39 = (double)pppppppdVar32[2] * *(double *)pauVar2[1];
                dVar40 = (double)pppppppdVar32[3] * *(double *)(pauVar2[1] + 8);
                if ((double *******)0x7 < ppppppdStack_d0) {
                  pppppppdVar34 = (double *******)0x4;
                  pppppppdVar15 = pppppppdVar27;
                  pdVar23 = pdVar9;
                  do {
                    dVar33 = dVar33 + (double)pppppppdVar15[-2] * pdVar23[-2];
                    dVar37 = dVar37 + (double)pppppppdVar15[-1] * pdVar23[-1];
                    dVar39 = dVar39 + (double)*pppppppdVar15 * *pdVar23;
                    dVar40 = dVar40 + (double)pppppppdVar15[1] * pdVar23[1];
                    pppppppdVar34 = (double *******)((long)pppppppdVar34 + 4);
                    pdVar23 = pdVar23 + 4;
                    pppppppdVar15 = pppppppdVar15 + 4;
                  } while (pppppppdVar34 < pppppppdVar22);
                }
                dVar33 = dVar39 + dVar33;
                dVar37 = dVar40 + dVar37;
                if (pppppppdVar22 < (double *******)((ulong)ppppppdStack_d0 & 0x7ffffffffffffffe)) {
                  dVar33 = dVar33 + (double)pppppppdVar32[(long)pppppppdVar22] *
                                    *(double *)(*pauVar2 + (long)pppppppdVar22 * 8);
                  dVar37 = dVar37 + (double)(pppppppdVar32 + (long)pppppppdVar22)[1] *
                                    *(double *)((long)(*pauVar2 + (long)pppppppdVar22 * 8) + 8);
                }
              }
              dVar33 = dVar33 + dVar37;
              pdVar23 = pdVar19;
              pdVar14 = pdVar10;
              uVar24 = (ulong)ppppppdStack_d0 & 0x8000000000000001;
              if ((double *******)ppppppdStack_d0 !=
                  (double *******)((ulong)ppppppdStack_d0 & 0x7ffffffffffffffe)) {
                do {
                  dVar33 = dVar33 + *pdVar23 * *pdVar14;
                  uVar24 = uVar24 - 1;
                  pdVar23 = pdVar23 + 1;
                  pdVar14 = pdVar14 + 1;
                } while (uVar24 != 0);
              }
            }
            pdStack_c0[(long)((long)pppppppdVar8 * (long)pppppppdVar30 + (long)pppppppdVar20)] =
                 dVar33;
            pppppppdVar20 = (double *******)((long)pppppppdVar20 + 1);
            pppppppdVar27 = pppppppdVar27 + lVar25;
            pdVar19 = pdVar19 + lVar25;
          } while (pppppppdVar20 != pppppppdVar30);
        }
        pppppppdVar8 = (double *******)((long)pppppppdVar8 + 1);
        pdVar9 = pdVar9 + (long)ppppppdStack_d0;
        pdVar10 = pdVar10 + (long)ppppppdStack_d0;
      } while (pppppppdVar8 != pppppppdVar31);
    }
    pdVar9 = pdStack_c0;
    if ((double *******)param_1[1] != pppppppdVar30 || (double *******)param_1[2] != pppppppdVar17)
    {
      if ((pppppppdVar17 != (double *******)0x0) && (pppppppdVar30 != (double *******)0x0)) {
        lVar25 = 0;
        if (pppppppdVar17 != (double *******)0x0) {
          lVar25 = 0x7fffffffffffffff / (long)pppppppdVar17;
        }
        if ((long)pppppppdVar30 <= lVar25) goto LAB_109908dd4;
        goto LAB_109908e08;
      }
LAB_109908dd4:
      uVar16 = (long)pppppppdVar30 * (long)pppppppdVar17;
      if (param_1[2] * param_1[1] - uVar16 != 0) {
        _free(*param_1);
        if (0 < (long)uVar16) {
          if (uVar16 >> 0x3d == 0) {
            lVar25 = uVar16 * 8;
            _malloc();
            if (lVar25 != 0) goto LAB_109908e30;
          }
LAB_109908e08:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109908fb4;
        }
        lVar25 = 0;
LAB_109908e30:
        *param_1 = lVar25;
      }
      param_1[1] = (long)pppppppdVar30;
      param_1[2] = (long)pppppppdVar17;
    }
    if (0 < (long)pppppppdVar30) {
      pppppppdVar31 = (double *******)0x0;
      pdVar19 = (double *)*param_1;
      pdVar10 = pdVar9;
      do {
        pdVar14 = pdVar19;
        pdVar23 = pdVar10;
        pppppppdVar8 = pppppppdVar17;
        if (0 < (long)pppppppdVar17) {
          do {
            *pdVar14 = *pdVar23;
            pdVar23 = pdVar23 + (long)pppppppdVar30;
            pppppppdVar8 = (double *******)((long)pppppppdVar8 - 1);
            pdVar14 = pdVar14 + 1;
          } while (pppppppdVar8 != (double *******)0x0);
        }
        pppppppdVar31 = (double *******)((long)pppppppdVar31 + 1);
        pdVar10 = pdVar10 + 1;
        pdVar19 = pdVar19 + (long)pppppppdVar17;
      } while (pppppppdVar31 != pppppppdVar30);
    }
    _free(pdVar9);
    _free(pdStack_d8);
    _free(uStack_108);
    _free(uStack_118);
    _free(uStack_150);
    _free(uStack_160);
    _free(uStack_170);
    _free(uStack_180);
    _free(uStack_190);
    _free(uStack_1a0);
    _free(uStack_1b8);
    _free(uStack_1c8);
    _free(uStack_1e0);
    _free(uStack_218);
    _free(uStack_228);
    _free(uStack_238);
    _free(uStack_248);
    _free(uStack_258);
    _free(uStack_268);
    _free(uStack_280);
    _free(uStack_298);
    _free(pdStack_2e0);
    _free(ppppppdStack_2f8);
    pppppppdVar30 = (double *******)ppppppdStack_310;
    goto LAB_109908f4c;
  }
  pppppppdVar31 = (double *******)param_3[2];
  ppppppdStack_a0 = (double ******)0x0;
  ppppppdStack_98 = (double ******)0x0;
  ppppppdStack_a8 = (double ******)0x0;
  if (pppppppdVar30 != (double *******)0x0 && pppppppdVar31 != (double *******)0x0) {
    lVar25 = 0;
    if (pppppppdVar31 != (double *******)0x0) {
      lVar25 = 0x7fffffffffffffff / (long)pppppppdVar31;
    }
    if ((long)pppppppdVar30 <= lVar25) goto LAB_1099076b4;
    goto LAB_1099076d8;
  }
LAB_1099076b4:
  uVar16 = (long)pppppppdVar31 * (long)pppppppdVar30;
  if (uVar16 == 0) {
    ppppppdStack_88 = (double ******)((ulong)ppppppdStack_88 & 0xffffffffffffff00);
    if (pppppppdVar30 != (double *******)0x0) {
LAB_109907814:
      lVar25 = 0;
      if (pppppppdVar30 != (double *******)0x0) {
        lVar25 = 0x7fffffffffffffff / (long)pppppppdVar30;
      }
      ppppppdStack_a0 = (double ******)pppppppdVar30;
      ppppppdStack_98 = (double ******)pppppppdVar31;
      if ((long)pppppppdVar30 <= lVar25) {
        pppppppdVar8 = pppppppdVar30;
        pppppppdVar17 = (double *******)ppppppdStack_a8;
        if (pppppppdVar31 == pppppppdVar30) goto LAB_109907c14;
        _free();
        if ((ulong)((long)pppppppdVar30 * (long)pppppppdVar30) >> 0x3d == 0) {
          pppppppdVar17 = (double *******)((long)pppppppdVar30 * (long)pppppppdVar30 * 8);
          _malloc();
          if (pppppppdVar17 != (double *******)0x0) goto LAB_109907c14;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109908fb4;
    }
    pppppppdVar8 = (double *******)0x0;
    pppppppdVar17 = (double *******)ppppppdStack_a8;
  }
  else {
    if (0 < (long)uVar16) {
      if (uVar16 >> 0x3d == 0) {
        pppppppdVar8 = (double *******)(uVar16 * 8);
        _malloc();
        if (pppppppdVar8 != (double *******)0x0) goto LAB_109907804;
      }
LAB_1099076d8:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109908fb4;
    }
    pppppppdVar8 = (double *******)0x0;
LAB_109907804:
    ppppppdStack_88 = (double ******)((ulong)ppppppdStack_88 & 0xffffffffffffff00);
    ppppppdStack_a8 = (double ******)pppppppdVar8;
    if (pppppppdVar30 != (double *******)0x0) goto LAB_109907814;
    ppppppdStack_a0 = (double ******)pppppppdVar30;
    ppppppdStack_98 = (double ******)pppppppdVar31;
    _free();
    pppppppdVar8 = (double *******)0x0;
    pppppppdVar17 = (double *******)0x0;
  }
LAB_109907c14:
  ppppppdStack_a8 = (double ******)pppppppdVar17;
  ppppppdStack_a0 = (double ******)pppppppdVar8;
  ppppppdStack_98 = (double ******)pppppppdVar8;
  if (((double *******)ppppppdStack_a8 != (double *******)*param_3) ||
     (pppppppdVar8 != (double *******)param_3[2])) {
    FUN_109909364(&ppppppdStack_a8,param_3,&ppppppdStack_310);
  }
  ppppppdStack_90 = (double ******)0x0;
  if (0 < (long)pppppppdVar8) {
    pppppppdVar17 = (double *******)0x0;
    pppppppdVar22 = (double *******)(ppppppdStack_a8 + (long)ppppppdStack_98);
    pppppppdVar20 = (double *******)(ppppppdStack_a8 + ((long)ppppppdStack_98 - (long)pppppppdVar8))
    ;
    pppppppdVar31 = pppppppdVar20 + 6;
    pppppppdVar32 = (double *******)0x0;
    lVar25 = -1;
    pppppppdVar27 = pppppppdVar8;
    do {
      dVar33 = 0.0;
      if ((pppppppdVar17 != (double *******)0x0) &&
         (dVar33 = ABS((double)ppppppdStack_a8[(long)pppppppdVar17]), pppppppdVar34 = pppppppdVar22,
         lVar18 = lVar25, pppppppdVar17 != (double *******)0x1)) {
        do {
          dVar33 = dVar33 + ABS((double)*pppppppdVar34);
          lVar18 = lVar18 + -1;
          pppppppdVar34 = pppppppdVar34 + (long)ppppppdStack_98;
        } while (lVar18 != 0);
      }
      uVar24 = (long)pppppppdVar8 - (long)pppppppdVar17;
      pppppppdVar34 =
           (double *******)
           (ppppppdStack_a8 +
           (long)ppppppdStack_98 + ((long)pppppppdVar17 * (long)ppppppdStack_98 - uVar24));
      uVar16 = uVar24 + 3;
      if ((long)pppppppdVar17 <= (long)pppppppdVar8) {
        uVar16 = uVar24;
      }
      if (uVar24 + 1 < 3) {
        dVar37 = ABS((double)*pppppppdVar34);
      }
      else {
        uVar13 = uVar24 - ((long)uVar24 >> 0x3f) & 0xfffffffffffffffe;
        dVar37 = ABS((double)*pppppppdVar34);
        dVar39 = ABS((double)pppppppdVar34[1]);
        if (3 < (long)uVar24) {
          uVar16 = uVar16 & 0xfffffffffffffffc;
          dVar40 = ABS((double)pppppppdVar34[2]);
          dVar41 = ABS((double)pppppppdVar34[3]);
          if (7 < uVar24) {
            lVar18 = 4;
            pppppppdVar15 = pppppppdVar31;
            do {
              dVar37 = dVar37 + ABS((double)pppppppdVar15[-2]);
              dVar39 = dVar39 + ABS((double)pppppppdVar15[-1]);
              dVar40 = dVar40 + ABS((double)*pppppppdVar15);
              dVar41 = dVar41 + ABS((double)pppppppdVar15[1]);
              lVar18 = lVar18 + 4;
              pppppppdVar15 = pppppppdVar15 + 4;
            } while (lVar18 < (long)uVar16);
          }
          dVar37 = dVar40 + dVar37;
          dVar39 = dVar41 + dVar39;
          if ((long)uVar16 < (long)uVar13) {
            dVar37 = dVar37 + ABS((double)pppppppdVar34[uVar16]);
            dVar39 = dVar39 + ABS((double)(pppppppdVar34 + uVar16)[1]);
          }
        }
        dVar37 = dVar37 + dVar39;
        if ((long)uVar13 < (long)uVar24) {
          lVar18 = (long)pppppppdVar27 - uVar13;
          pppppppdVar34 = pppppppdVar20 + ((long)uVar24 / 2) * 2;
          do {
            dVar37 = dVar37 + ABS((double)*pppppppdVar34);
            lVar18 = lVar18 + -1;
            pppppppdVar34 = pppppppdVar34 + 1;
          } while (lVar18 != 0);
        }
      }
      pppppppdVar34 = (double *******)(dVar33 + dVar37);
      if ((double)pppppppdVar32 < (double)pppppppdVar34) {
        pppppppdVar32 = pppppppdVar34;
        ppppppdStack_90 = (double ******)pppppppdVar34;
      }
      pppppppdVar17 = (double *******)((long)pppppppdVar17 + 1);
      lVar25 = lVar25 + 1;
      pppppppdVar22 = pppppppdVar22 + 1;
      pppppppdVar31 = pppppppdVar31 + (long)ppppppdStack_98 + 1;
      pppppppdVar27 = (double *******)((long)pppppppdVar27 - 1);
      pppppppdVar20 = pppppppdVar20 + (long)ppppppdStack_98 + 1;
    } while (pppppppdVar17 != pppppppdVar8);
  }
  ppppppdStack_88 = (double ******)CONCAT71(ppppppdStack_88._1_7_,1);
  ppppppdStack_310 = (double ******)&ppppppdStack_a8;
  pppppppdVar31 = &ppppppdStack_310;
  FUN_109909484();
  ppppppdVar4 = ppppppdStack_98;
  ppppppdStack_88 =
       (double ******)
       (ulong)CONCAT14(pppppppdVar31 != (double *******)0xffffffffffffffff,ppppppdStack_88._0_4_);
  pppppppdVar31 = (double *******)(long)iVar29;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((long)pppppppdVar30 << 0x20 != 0) && ((double *******)ppppppdStack_98 != (double *******)0x0)
     ) {
    lVar25 = 0;
    if (pppppppdVar31 != (double *******)0x0) {
      lVar25 = 0x7fffffffffffffff / (long)pppppppdVar31;
    }
    if ((long)ppppppdStack_98 <= lVar25) goto LAB_109907e0c;
    goto LAB_109908f70;
  }
LAB_109907e0c:
  uVar16 = (long)ppppppdStack_98 * (long)pppppppdVar31;
  if (uVar16 != 0) {
    if ((long)uVar16 < 1) {
      lVar25 = 0;
LAB_109907e40:
      *param_1 = lVar25;
      goto LAB_109907e44;
    }
    if (uVar16 >> 0x3d == 0) {
      lVar25 = uVar16 * 8;
      _malloc();
      if (lVar25 != 0) goto LAB_109907e40;
    }
LAB_109908f70:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109908fb4:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109908fb8);
    (*pcVar6)();
  }
  lVar25 = 0;
LAB_109907e44:
  param_1[1] = (long)ppppppdVar4;
  param_1[2] = (long)pppppppdVar31;
  if ((double *******)ppppppdVar4 != pppppppdVar31) {
    if ((long)pppppppdVar30 << 0x20 != 0) {
      lVar25 = 0;
      if (pppppppdVar31 != (double *******)0x0) {
        lVar25 = 0x7fffffffffffffff / (long)pppppppdVar31;
      }
      if ((long)pppppppdVar31 <= lVar25) {
        _free();
        if ((ulong)((long)iVar29 * (long)iVar29) >> 0x3d == 0) {
          lVar25 = (long)iVar29 * (long)iVar29 * 8;
          _malloc();
          if (lVar25 != 0) {
            *param_1 = lVar25;
            goto LAB_109907e84;
          }
        }
      }
      goto LAB_109908f70;
    }
LAB_109907e84:
    param_1[1] = (long)pppppppdVar31;
    param_1[2] = (long)pppppppdVar31;
  }
  ppppppdVar4 = ppppppdStack_98;
  if (0 < (long)pppppppdVar31) {
    pppppppdVar30 = (double *******)0x0;
    do {
      pppppppdVar8 = (double *******)0x0;
      do {
        uVar38 = 0x3ff0000000000000;
        if (pppppppdVar30 != pppppppdVar8) {
          uVar38 = 0;
        }
        *(undefined8 *)(lVar25 + (long)pppppppdVar8 * 8) = uVar38;
        pppppppdVar8 = (double *******)((long)pppppppdVar8 + 1);
      } while (pppppppdVar31 != pppppppdVar8);
      pppppppdVar30 = (double *******)((long)pppppppdVar30 + 1);
      lVar25 = lVar25 + (long)pppppppdVar31 * 8;
    } while (pppppppdVar30 != pppppppdVar31);
  }
  pppppppdVar8 = pppppppdVar31;
  if ((double *******)ppppppdStack_a0 != (double *******)0x0) {
    ppppppdStack_310 = (double ******)0x0;
    ppppppdStack_308 = (double ******)0x0;
    ppppppdStack_2f0 = ppppppdStack_98;
    ppppppdStack_300 = (double ******)pppppppdVar31;
    ppppppdStack_2f8 = (double ******)pppppppdVar31;
    if ((bRam00000001132dfa18 & 1) == 0) {
      iVar29 = 0x132dfa18;
      ___cxa_guard_acquire();
      if (iVar29 != 0) {
        uRam00000001132dfa08 = 0x80000;
        uRam00000001132dfa00 = 0x4000;
        lRam00000001132dfa10 = 0x80000;
        ___cxa_guard_release(0x1132dfa18);
      }
    }
    ppppppdVar5 = ppppppdStack_2f0;
    pppppppdVar30 = (double *******)ppppppdStack_300;
    if ((long)ppppppdStack_300 <= (long)pppppppdVar31) {
      pppppppdVar30 = pppppppdVar31;
    }
    pppppppdVar8 = (double *******)ppppppdStack_2f0;
    if ((long)ppppppdStack_2f0 <= (long)pppppppdVar30) {
      pppppppdVar8 = pppppppdVar30;
    }
    pppppppdVar30 = (double *******)ppppppdVar5;
    if (0x2f < (long)pppppppdVar8) {
      pppppppdVar30 =
           (double *******)((long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8);
      if ((long)pppppppdVar30 < 2) {
        pppppppdVar30 = (double *******)0x1;
      }
      if ((long)pppppppdVar30 < (long)ppppppdStack_2f0) {
        uVar16 = 0;
        if (pppppppdVar30 != (double *******)0x0) {
          uVar16 = (ulong)ppppppdStack_2f0 / (ulong)pppppppdVar30;
        }
        uVar24 = (long)ppppppdStack_2f0 - uVar16 * (long)pppppppdVar30;
        ppppppdStack_2f0 = (double ******)pppppppdVar30;
        if (uVar24 != 0) {
          lVar25 = uVar16 * 8 + 8;
          lVar18 = 0;
          if (lVar25 != 0) {
            lVar18 = (long)((long)pppppppdVar30 + ~uVar24) / lVar25;
          }
          ppppppdStack_2f0 = (double ******)(pppppppdVar30 + -lVar18);
        }
      }
      uVar16 = (uRam00000001132dfa00 - 0xc0) + (long)ppppppdStack_300 * (long)ppppppdStack_2f0 * -8;
      if ((long)uVar16 < (long)ppppppdStack_2f0 * 0x20) {
        uVar24 = 0;
        if ((long)pppppppdVar30 << 5 != 0) {
          uVar24 = 0x480000 / (ulong)((long)pppppppdVar30 << 5);
        }
      }
      else {
        uVar24 = 0;
        if ((long)ppppppdStack_2f0 << 3 != 0) {
          uVar24 = uVar16 / (ulong)((long)ppppppdStack_2f0 << 3);
        }
      }
      uVar16 = 0;
      if ((long)ppppppdStack_2f0 << 4 != 0) {
        uVar16 = 0x180000 / (ulong)((long)ppppppdStack_2f0 << 4);
      }
      if ((long)uVar16 <= (long)uVar24) {
        uVar24 = uVar16;
      }
      pppppppdVar30 = (double *******)ppppppdStack_2f0;
      if ((ppppppdVar5 == ppppppdStack_2f0) &&
         ((long)pppppppdVar31 <= (long)(uVar24 & 0xfffffffffffffffc))) {
        uVar24 = (long)ppppppdVar5 * (long)pppppppdVar31 * 8;
        uVar16 = uRam00000001132dfa00;
        pppppppdVar8 = (double *******)ppppppdStack_300;
        if (0x400 < (long)uVar24) {
          if (0x23f < (long)ppppppdStack_300) {
            pppppppdVar8 = (double *******)0x240;
          }
          uVar16 = uRam00000001132dfa08;
          if (lRam00000001132dfa10 == 0 || 0x8000 < uVar24) {
            uVar16 = 0x180000;
            pppppppdVar8 = (double *******)ppppppdStack_300;
          }
        }
        pppppppdVar30 = (double *******)0x0;
        if ((long)ppppppdVar5 * 0x18 != 0) {
          pppppppdVar30 = (double *******)(uVar16 / (ulong)((long)ppppppdVar5 * 0x18));
        }
        if ((long)pppppppdVar30 <= (long)pppppppdVar8) {
          pppppppdVar8 = pppppppdVar30;
        }
        if ((long)pppppppdVar8 < 7) {
          pppppppdVar30 = (double *******)ppppppdVar5;
          if (pppppppdVar8 == (double *******)0x0) goto LAB_109908178;
        }
        else {
          pppppppdVar8 = (double *******)
                         ((((ulong)pppppppdVar8 / 6) * 2 + (ulong)pppppppdVar8 / 6) * 2);
        }
        lVar25 = 0;
        if (pppppppdVar8 != (double *******)0x0) {
          lVar25 = (long)ppppppdStack_300 / (long)pppppppdVar8;
        }
        lVar18 = (long)ppppppdStack_300 - lVar25 * (long)pppppppdVar8;
        pppppppdVar30 = (double *******)ppppppdVar5;
        ppppppdStack_300 = (double ******)pppppppdVar8;
        if (lVar18 != 0) {
          lVar21 = lVar25 * 6 + 6;
          lVar25 = 0;
          if (lVar21 != 0) {
            lVar25 = ((long)pppppppdVar8 - lVar18) / lVar21;
          }
          ppppppdStack_300 = (double ******)((long)pppppppdVar8 + lVar25 * -6);
        }
      }
    }
LAB_109908178:
    lStack_2e8 = (long)ppppppdStack_300 * (long)pppppppdVar30;
    pdStack_2e0 = (double *)((long)ppppppdStack_2f8 * (long)pppppppdVar30);
    pppppppdVar8 = (double *******)param_1[2];
    FUN_10990a09c(ppppppdVar4,pppppppdVar31,ppppppdStack_a8,ppppppdStack_98,*param_1,1,pppppppdVar8,
                  &ppppppdStack_310);
    _free(ppppppdStack_310);
    _free(ppppppdStack_308);
  }
  ppppppdVar4 = ppppppdStack_a0;
  pppppppdVar30 = (double *******)ppppppdStack_a8;
  if ((double *******)ppppppdStack_98 == (double *******)0x0) goto LAB_109908f4c;
  pppppppdVar30 = (double *******)param_1[1];
  ppppppdStack_310 = (double ******)0x0;
  ppppppdStack_308 = (double ******)0x0;
  ppppppdStack_2f0 = ppppppdStack_a0;
  ppppppdStack_300 = (double ******)pppppppdVar8;
  ppppppdStack_2f8 = (double ******)pppppppdVar30;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar29 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar29 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18);
    }
  }
  ppppppdVar5 = ppppppdStack_2f0;
  pppppppdVar31 = (double *******)ppppppdStack_300;
  if ((long)ppppppdStack_300 <= (long)pppppppdVar30) {
    pppppppdVar31 = pppppppdVar30;
  }
  pppppppdVar17 = (double *******)ppppppdStack_2f0;
  if ((long)ppppppdStack_2f0 <= (long)pppppppdVar31) {
    pppppppdVar17 = pppppppdVar31;
  }
  pppppppdVar31 = (double *******)ppppppdVar5;
  if (0x2f < (long)pppppppdVar17) {
    pppppppdVar31 =
         (double *******)((long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8);
    if ((long)pppppppdVar31 < 2) {
      pppppppdVar31 = (double *******)0x1;
    }
    if ((long)pppppppdVar31 < (long)ppppppdStack_2f0) {
      uVar16 = 0;
      if (pppppppdVar31 != (double *******)0x0) {
        uVar16 = (ulong)ppppppdStack_2f0 / (ulong)pppppppdVar31;
      }
      uVar24 = (long)ppppppdStack_2f0 - uVar16 * (long)pppppppdVar31;
      ppppppdStack_2f0 = (double ******)pppppppdVar31;
      if (uVar24 != 0) {
        lVar25 = uVar16 * 8 + 8;
        lVar18 = 0;
        if (lVar25 != 0) {
          lVar18 = (long)((long)pppppppdVar31 + ~uVar24) / lVar25;
        }
        ppppppdStack_2f0 = (double ******)(pppppppdVar31 + -lVar18);
      }
    }
    uVar16 = (uRam00000001132dfa00 - 0xc0) + (long)ppppppdStack_300 * (long)ppppppdStack_2f0 * -8;
    if ((long)uVar16 < (long)ppppppdStack_2f0 * 0x20) {
      uVar24 = 0;
      if ((long)pppppppdVar31 << 5 != 0) {
        uVar24 = 0x480000 / (ulong)((long)pppppppdVar31 << 5);
      }
    }
    else {
      uVar24 = 0;
      if ((long)ppppppdStack_2f0 << 3 != 0) {
        uVar24 = uVar16 / (ulong)((long)ppppppdStack_2f0 << 3);
      }
    }
    uVar16 = 0;
    if ((long)ppppppdStack_2f0 << 4 != 0) {
      uVar16 = 0x180000 / (ulong)((long)ppppppdStack_2f0 << 4);
    }
    if ((long)uVar16 <= (long)uVar24) {
      uVar24 = uVar16;
    }
    pppppppdVar31 = (double *******)ppppppdStack_2f0;
    if ((ppppppdVar5 == ppppppdStack_2f0) &&
       ((long)pppppppdVar30 <= (long)(uVar24 & 0xfffffffffffffffc))) {
      uVar24 = (long)ppppppdVar5 * (long)pppppppdVar30 * 8;
      uVar16 = uRam00000001132dfa00;
      pppppppdVar30 = (double *******)ppppppdStack_300;
      if (0x400 < (long)uVar24) {
        if (0x23f < (long)ppppppdStack_300) {
          pppppppdVar30 = (double *******)0x240;
        }
        uVar16 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar24) {
          uVar16 = 0x180000;
          pppppppdVar30 = (double *******)ppppppdStack_300;
        }
      }
      pppppppdVar31 = (double *******)0x0;
      if ((long)ppppppdVar5 * 0x18 != 0) {
        pppppppdVar31 = (double *******)(uVar16 / (ulong)((long)ppppppdVar5 * 0x18));
      }
      if ((long)pppppppdVar31 <= (long)pppppppdVar30) {
        pppppppdVar30 = pppppppdVar31;
      }
      if ((long)pppppppdVar30 < 7) {
        pppppppdVar31 = (double *******)ppppppdVar5;
        if (pppppppdVar30 == (double *******)0x0) goto LAB_10990838c;
      }
      else {
        pppppppdVar30 =
             (double *******)((((ulong)pppppppdVar30 / 6) * 2 + (ulong)pppppppdVar30 / 6) * 2);
      }
      lVar25 = 0;
      if (pppppppdVar30 != (double *******)0x0) {
        lVar25 = (long)ppppppdStack_300 / (long)pppppppdVar30;
      }
      lVar18 = (long)ppppppdStack_300 - lVar25 * (long)pppppppdVar30;
      pppppppdVar31 = (double *******)ppppppdVar5;
      ppppppdStack_300 = (double ******)pppppppdVar30;
      if (lVar18 != 0) {
        lVar21 = lVar25 * 6 + 6;
        lVar25 = 0;
        if (lVar21 != 0) {
          lVar25 = ((long)pppppppdVar30 - lVar18) / lVar21;
        }
        ppppppdStack_300 = (double ******)((long)pppppppdVar30 + lVar25 * -6);
      }
    }
  }
LAB_10990838c:
  lStack_2e8 = (long)ppppppdStack_300 * (long)pppppppdVar31;
  pdStack_2e0 = (double *)((long)ppppppdStack_2f8 * (long)pppppppdVar31);
  FUN_10990b3d4(ppppppdVar4,pppppppdVar8,ppppppdStack_a8,ppppppdStack_98,*param_1,1,param_1[2],
                &ppppppdStack_310);
  _free(ppppppdStack_310);
  _free(ppppppdStack_308);
  pppppppdVar30 = (double *******)ppppppdStack_a8;
LAB_109908f4c:
  _free(pppppppdVar30);
  return;
}



/* Entry: 1099091a4; end: 109909293;  */

long * FUN_1099091a4(long *param_1,double *param_2,long param_3)

{
  long lVar1;
  double *pdVar2;
  ulong unaff_x23;
  
  if (param_3 != 0) {
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = 0x7fffffffffffffff / param_3;
    }
    if (param_3 <= lVar1) goto LAB_1099091d8;
    goto LAB_109909214;
  }
LAB_1099091d8:
  unaff_x23 = param_3 * param_3;
  pdVar2 = (double *)*param_1;
  if (param_1[2] * param_1[1] - unaff_x23 == 0) goto LAB_10990923c;
  _free(pdVar2);
  if (param_3 == 0) {
LAB_109909234:
    pdVar2 = (double *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_109909214:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109909234;
    }
    pdVar2 = (double *)(unaff_x23 * 8);
    _malloc();
    if (pdVar2 == (double *)0x0) goto LAB_109909214;
  }
  *param_1 = (long)pdVar2;
LAB_10990923c:
  param_1[1] = param_3;
  param_1[2] = param_3;
  if (0 < (long)unaff_x23) {
    _bzero(pdVar2,unaff_x23 << 3);
  }
  lVar1 = param_3;
  if (0 < param_3) {
    do {
      *pdVar2 = *param_2 * *param_2;
      pdVar2 = pdVar2 + param_3 + 1;
      lVar1 = lVar1 + -1;
      param_2 = param_2 + 1;
    } while (lVar1 != 0);
  }
  return param_1;
}



/* Entry: 109909294; end: 109909363;  */

undefined8 * FUN_109909294(undefined8 *param_1)

{
  _free(param_1[0x41]);
  _free(param_1[0x3f]);
  _free(param_1[0x38]);
  _free(param_1[0x36]);
  _free(param_1[0x34]);
  _free(param_1[0x32]);
  _free(param_1[0x30]);
  _free(param_1[0x2e]);
  _free(param_1[0x2b]);
  _free(param_1[0x29]);
  _free(param_1[0x26]);
  _free(param_1[0x1f]);
  _free(param_1[0x1d]);
  _free(param_1[0x1b]);
  _free(param_1[0x19]);
  _free(param_1[0x17]);
  _free(param_1[0x15]);
  _free(param_1[0x12]);
  _free(param_1[0xf]);
  _free(param_1[6]);
  _free(param_1[3]);
  _free(*param_1);
  return param_1;
}



/* Entry: 109909364; end: 109909483;  */

void FUN_109909364(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)*param_2;
  lVar4 = param_2[1];
  lVar8 = param_2[2];
  if (param_1[1] == lVar4 && param_1[2] == lVar8) goto LAB_109909418;
  if (lVar4 != 0 && lVar8 != 0) {
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar8;
    }
    if (lVar4 <= lVar1) goto LAB_1099093b0;
    goto LAB_1099093e4;
  }
LAB_1099093b0:
  uVar7 = lVar8 * lVar4;
  if (param_1[2] * param_1[1] - uVar7 != 0) {
    _free(*param_1);
    if (0 < (long)uVar7) {
      if (uVar7 >> 0x3d == 0) {
        lVar1 = uVar7 * 8;
        _malloc();
        if (lVar1 != 0) goto LAB_109909410;
      }
LAB_1099093e4:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109909418;
    }
    lVar1 = 0;
LAB_109909410:
    *param_1 = lVar1;
  }
  param_1[1] = lVar4;
  param_1[2] = lVar8;
LAB_109909418:
  lVar8 = lVar8 * lVar4;
  puVar2 = (undefined8 *)*param_1;
  uVar7 = lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar8) {
    lVar4 = 0;
    puVar5 = puVar2;
    puVar6 = puVar3;
    do {
      uVar9 = *puVar6;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar9;
      lVar4 = lVar4 + 2;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (lVar4 < (long)uVar7);
  }
  lVar4 = lVar8 % 2;
  if (lVar4 != 0 && lVar4 < 0 == SBORROW8(lVar8,uVar7)) {
    puVar2 = puVar2 + (lVar8 / 2) * 2;
    puVar3 = puVar3 + (lVar8 / 2) * 2;
    do {
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109909484; end: 109909a3b;  */

ulong FUN_109909484(long *param_1)

{
  ulong uVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double *pdVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  long lStack_118;
  double *pdStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  double *pdStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  double *pdStack_78;
  long lStack_70;
  
  uVar16 = *(ulong *)(*param_1 + 0x10);
  if ((long)uVar16 < 0x20) {
    if (0 < (long)uVar16) {
      lVar20 = 0;
      lVar22 = -1;
      lVar24 = 8;
      uVar4 = 0;
      uVar18 = uVar16;
      do {
        uVar18 = uVar18 - 1;
        lVar25 = *(long *)*param_1;
        lVar27 = ((long *)*param_1)[2];
        pdStack_e8 = (double *)(lVar25 + uVar4 * 8);
        lVar7 = lVar25 + lVar27 * uVar4 * 8;
        dVar28 = *(double *)(lVar7 + uVar4 * 8);
        if (uVar4 != 0) {
          dVar29 = *pdStack_e8 * *pdStack_e8;
          if (uVar4 != 1) {
            pdVar5 = (double *)(lVar25 + lVar20 + lVar27 * 8);
            lVar11 = lVar22;
            do {
              dVar29 = dVar29 + *pdVar5 * *pdVar5;
              pdVar5 = pdVar5 + lVar27;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          dVar28 = dVar28 - dVar29;
        }
        if (dVar28 <= 0.0) {
          return uVar4;
        }
        uVar1 = uVar16 + ~uVar4;
        uVar26 = uVar4 + 1;
        pdStack_b0 = (double *)(lVar25 + uVar26 * 8);
        pdVar5 = pdStack_b0 + lVar27 * uVar4;
        dVar28 = SQRT(dVar28);
        *(double *)(lVar7 + uVar4 * 8) = dVar28;
        if ((uVar4 == 0) || ((long)uVar1 < 1)) {
          if (0 < (long)uVar1) goto LAB_1099095f0;
        }
        else {
          if (uVar1 == 1) {
            dVar29 = *pdStack_b0 * *pdStack_e8;
            if (1 < uVar4) {
              lVar7 = lVar25 + lVar27 * 8;
              lVar11 = lVar22;
              do {
                dVar29 = dVar29 + ((double *)(lVar7 + lVar20))[1] * *(double *)(lVar7 + lVar20);
                lVar7 = lVar7 + lVar27 * 8;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            *pdVar5 = *pdVar5 - dVar29;
          }
          else {
            uStack_e0 = lVar27;
            lStack_a8 = lVar27;
            FUN_109909a3c(0xbff0000000000000,uVar1,uVar4,&pdStack_b0,&pdStack_e8,pdVar5,1);
          }
LAB_1099095f0:
          uVar4 = (ulong)pdVar5 >> 3 & 1;
          if (((ulong)pdVar5 & 7) != 0) {
            uVar4 = uVar1;
          }
          if (uVar4 != 0) {
            pdVar5 = (double *)(lVar25 + lVar24 + lVar27 * lVar20);
            uVar6 = uVar4;
            do {
              *pdVar5 = *pdVar5 / dVar28;
              uVar6 = uVar6 - 1;
              pdVar5 = pdVar5 + 1;
            } while (uVar6 != 0);
          }
          lVar11 = uVar1 - uVar4;
          uVar6 = lVar11 - (lVar11 >> 0x3f) & 0xfffffffffffffffe;
          lVar7 = uVar6 + uVar4;
          if (1 < lVar11) {
            lVar21 = lVar25 + lVar27 * lVar20 + uVar4 * 8;
            uVar13 = uVar4;
            do {
              dVar29 = *(double *)(lVar21 + lVar24);
              ((double *)(lVar21 + lVar24))[1] = ((double *)(lVar21 + lVar24))[1] / dVar28;
              *(double *)(lVar21 + lVar24) = dVar29 / dVar28;
              uVar13 = uVar13 + 2;
              lVar21 = lVar21 + 0x10;
            } while ((long)uVar13 < lVar7);
          }
          if (lVar7 < (long)uVar1) {
            lVar7 = (uVar18 - uVar4) - uVar6;
            lVar25 = lVar25 + lVar27 * lVar20 + (lVar11 / 2) * 0x10 + uVar4 * 8;
            do {
              *(double *)(lVar25 + lVar24) = *(double *)(lVar25 + lVar24) / dVar28;
              lVar25 = lVar25 + 8;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
        }
        lVar22 = lVar22 + 1;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + 8;
        uVar4 = uVar26;
      } while (uVar16 != uVar26);
    }
  }
  else {
    lStack_118 = 0;
    lVar22 = 0;
    uVar18 = uVar16 >> 3 & 0xffffffffffffff0;
    if (0x7f < uVar18) {
      uVar18 = 0x80;
    }
    uVar4 = 8;
    if ((uVar16 >> 3 & 0xffffffffffffff0) != 0) {
      uVar4 = uVar18;
    }
    uVar18 = uVar16;
    do {
      uVar26 = uVar4;
      if ((long)uVar18 <= (long)uVar4) {
        uVar26 = uVar18;
      }
      uVar6 = uVar16 - lVar22;
      uVar1 = uVar6;
      if ((long)uVar4 <= (long)uVar6) {
        uVar1 = uVar4;
      }
      lVar11 = uVar6 - uVar1;
      plVar17 = (long *)*param_1;
      lVar20 = *plVar17;
      lVar27 = plVar17[2];
      pdVar5 = (double *)(lVar20 + lVar22 * 8 + lVar27 * lVar22 * 8);
      lVar24 = uVar1 + lVar22;
      pdStack_b0 = (double *)(lVar20 + lVar24 * 8 + lVar27 * lVar22 * 8);
      lVar25 = plVar17[2];
      lVar7 = *plVar17;
      lStack_a8 = lVar11;
      uStack_a0 = uVar1;
      plStack_98 = plVar17;
      lStack_90 = lVar24;
      lStack_88 = lVar22;
      lStack_80 = lVar25;
      if (0 < (long)uVar1) {
        lVar19 = 0;
        lVar20 = lVar20 + lStack_118 + lStack_118 * lVar27;
        lVar21 = -1;
        uVar6 = 0;
        do {
          uVar26 = uVar26 - 1;
          lVar23 = plVar17[2];
          lVar10 = lVar23 * uVar6;
          pdVar2 = pdVar5 + uVar6;
          dVar28 = pdVar5[lVar10 + uVar6];
          if (uVar6 != 0) {
            dVar29 = *pdVar2 * *pdVar2;
            if (uVar6 != 1) {
              pdVar14 = (double *)(lVar20 + lVar23 * 8);
              lVar12 = lVar21;
              do {
                dVar29 = dVar29 + *pdVar14 * *pdVar14;
                pdVar14 = pdVar14 + lVar23;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            dVar28 = dVar28 - dVar29;
          }
          if (dVar28 <= 0.0) {
            return uVar6 + lVar22;
          }
          uVar3 = uVar1 + ~uVar6;
          uVar13 = uVar6 + 1;
          pdStack_e8 = pdVar5 + uVar13;
          pdVar14 = pdStack_e8 + lVar10;
          dVar28 = SQRT(dVar28);
          pdVar5[lVar10 + uVar6] = dVar28;
          if ((uVar6 == 0) || ((long)uVar3 < 1)) {
            if (0 < (long)uVar3) goto LAB_10990989c;
          }
          else {
            if (uVar3 == 1) {
              dVar29 = *pdStack_e8 * *pdVar2;
              if (1 < uVar6) {
                lVar10 = lVar23 * 8;
                lVar12 = lVar21;
                do {
                  dVar29 = dVar29 + ((double *)(lVar20 + lVar10))[1] * *(double *)(lVar20 + lVar10);
                  lVar10 = lVar10 + lVar23 * 8;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              *pdVar14 = *pdVar14 - dVar29;
            }
            else {
              uStack_e0 = lVar23;
              pdStack_78 = pdVar2;
              lStack_70 = lVar23;
              FUN_109909a3c(0xbff0000000000000,uVar3,uVar6,&pdStack_e8,&pdStack_78,pdVar14,1);
            }
LAB_10990989c:
            uVar6 = (ulong)pdVar14 >> 3 & 1;
            if (((ulong)pdVar14 & 7) != 0) {
              uVar6 = uVar3;
            }
            if (uVar6 != 0) {
              lVar10 = lVar23 * lVar19;
              uVar8 = uVar6;
              do {
                lVar10 = lVar10 + 8;
                *(double *)(lVar20 + lVar10) = *(double *)(lVar20 + lVar10) / dVar28;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar12 = uVar3 - uVar6;
            uVar8 = lVar12 - (lVar12 >> 0x3f) & 0xfffffffffffffffe;
            lVar10 = uVar8 + uVar6;
            if (1 < lVar12) {
              lVar9 = lVar23 * lVar19 + uVar6 * 8 + 8;
              uVar15 = uVar6;
              do {
                dVar29 = *(double *)(lVar20 + lVar9);
                ((double *)(lVar20 + lVar9))[1] = ((double *)(lVar20 + lVar9))[1] / dVar28;
                *(double *)(lVar20 + lVar9) = dVar29 / dVar28;
                uVar15 = uVar15 + 2;
                lVar9 = lVar9 + 0x10;
              } while ((long)uVar15 < lVar10);
            }
            if (lVar10 < (long)uVar3) {
              lVar9 = (uVar26 - uVar6) - uVar8;
              lVar10 = lVar23 * lVar19 + (lVar12 / 2) * 0x10 + uVar6 * 8;
              do {
                lVar10 = lVar10 + 8;
                *(double *)(lVar20 + lVar10) = *(double *)(lVar20 + lVar10) / dVar28;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
          }
          lVar21 = lVar21 + 1;
          lVar20 = lVar20 + 8;
          lVar19 = lVar19 + 8;
          uVar6 = uVar13;
        } while (uVar1 != uVar13);
      }
      if (0 < lVar11) {
        if (uVar1 != 0) {
          pdStack_e8 = pdVar5;
          uStack_e0 = uVar1;
          uStack_d8 = uVar1;
          plStack_d0 = plVar17;
          lStack_c8 = lVar22;
          lStack_c0 = lVar22;
          lStack_b8 = lVar27;
          FUN_109909dec(&pdStack_e8,&pdStack_b0);
        }
        pdStack_e8 = (double *)(lVar7 + lVar24 * 8 + lVar25 * lVar24 * 8);
        pdStack_78 = (double *)0xbff0000000000000;
        uStack_e0 = lVar11;
        uStack_d8 = lVar11;
        plStack_d0 = plVar17;
        lStack_c8 = lVar24;
        lStack_c0 = lVar24;
        lStack_b8 = lVar25;
        FUN_10990ab60(&pdStack_e8,&pdStack_b0,&pdStack_78);
      }
      lVar22 = lVar22 + uVar4;
      lStack_118 = lStack_118 + uVar4 * 8;
      uVar18 = uVar18 - uVar4;
    } while (lVar22 < (long)uVar16);
  }
  return 0xffffffffffffffff;
}



/* Entry: 109909a3c; end: 109909deb;  */

void FUN_109909a3c(double param_1,ulong param_2,long param_3,long *param_4,long *param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double *pdVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double *pdVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  
  uVar6 = param_4[1];
  lVar7 = 0x10;
  if (0x7c < (uVar6 >> 5 & 0xffffffffffffff)) {
    lVar7 = 4;
  }
  lVar2 = param_3;
  if (0x7f < param_3) {
    lVar2 = lVar7;
  }
  if (0 < param_3) {
    lVar7 = 0;
    lVar8 = *param_4;
    lVar9 = uVar6 * 8;
    pdVar4 = (double *)(lVar8 + 0x40);
    lVar5 = 0;
    do {
      lVar1 = lVar5 + lVar2;
      lVar3 = lVar1;
      if (param_3 <= lVar1) {
        lVar3 = param_3;
      }
      if ((long)param_2 < 0x10) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        pdVar11 = pdVar4;
        do {
          dVar29 = 0.0;
          dVar30 = 0.0;
          dVar33 = 0.0;
          dVar34 = 0.0;
          pdVar13 = (double *)(*param_5 + lVar7 * param_5[1]);
          dVar31 = 0.0;
          dVar32 = 0.0;
          dVar27 = 0.0;
          dVar28 = 0.0;
          dVar25 = 0.0;
          dVar26 = 0.0;
          dVar23 = 0.0;
          dVar24 = 0.0;
          dVar21 = 0.0;
          dVar22 = 0.0;
          dVar19 = 0.0;
          dVar20 = 0.0;
          pdVar16 = pdVar11;
          lVar15 = lVar5;
          do {
            dVar35 = *pdVar13;
            dVar29 = dVar29 + pdVar16[-8] * dVar35;
            dVar30 = dVar30 + pdVar16[-7] * dVar35;
            dVar33 = dVar33 + pdVar16[-6] * dVar35;
            dVar34 = dVar34 + pdVar16[-5] * dVar35;
            dVar31 = dVar31 + pdVar16[-4] * dVar35;
            dVar32 = dVar32 + pdVar16[-3] * dVar35;
            dVar27 = dVar27 + pdVar16[-2] * dVar35;
            dVar28 = dVar28 + pdVar16[-1] * dVar35;
            dVar25 = dVar25 + *pdVar16 * dVar35;
            dVar26 = dVar26 + pdVar16[1] * dVar35;
            dVar23 = dVar23 + pdVar16[2] * dVar35;
            dVar24 = dVar24 + pdVar16[3] * dVar35;
            dVar21 = dVar21 + pdVar16[4] * dVar35;
            dVar22 = dVar22 + pdVar16[5] * dVar35;
            dVar19 = dVar19 + pdVar16[6] * dVar35;
            dVar20 = dVar20 + pdVar16[7] * dVar35;
            lVar15 = lVar15 + 1;
            pdVar13 = pdVar13 + param_5[1];
            pdVar16 = pdVar16 + uVar6;
          } while (lVar15 < lVar3);
          pdVar13 = (double *)(param_6 + uVar10 * 8);
          pdVar13[1] = pdVar13[1] + dVar30 * param_1;
          *pdVar13 = *pdVar13 + dVar29 * param_1;
          pdVar13[3] = pdVar13[3] + dVar34 * param_1;
          pdVar13[2] = pdVar13[2] + dVar33 * param_1;
          pdVar13[5] = pdVar13[5] + dVar32 * param_1;
          pdVar13[4] = pdVar13[4] + dVar31 * param_1;
          pdVar13[7] = pdVar13[7] + dVar28 * param_1;
          pdVar13[6] = pdVar13[6] + dVar27 * param_1;
          pdVar13[9] = pdVar13[9] + dVar26 * param_1;
          pdVar13[8] = pdVar13[8] + dVar25 * param_1;
          pdVar13[0xb] = pdVar13[0xb] + dVar24 * param_1;
          pdVar13[10] = pdVar13[10] + dVar23 * param_1;
          pdVar13[0xd] = pdVar13[0xd] + dVar22 * param_1;
          pdVar13[0xc] = pdVar13[0xc] + dVar21 * param_1;
          pdVar13[0xf] = pdVar13[0xf] + dVar20 * param_1;
          pdVar13[0xe] = pdVar13[0xe] + dVar19 * param_1;
          uVar10 = uVar10 + 0x10;
          pdVar11 = pdVar11 + 0x10;
        } while ((long)uVar10 < (long)(param_2 - 0xf));
      }
      if ((long)uVar10 < (long)(param_2 - 7)) {
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        lVar14 = uVar10 << 3;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        lVar15 = lVar5;
        do {
          dVar27 = *pdVar11;
          pdVar13 = (double *)(lVar8 + lVar14);
          dVar23 = dVar23 + *pdVar13 * dVar27;
          dVar24 = dVar24 + pdVar13[1] * dVar27;
          dVar25 = dVar25 + pdVar13[2] * dVar27;
          dVar26 = dVar26 + pdVar13[3] * dVar27;
          dVar21 = dVar21 + pdVar13[4] * dVar27;
          dVar22 = dVar22 + pdVar13[5] * dVar27;
          dVar19 = dVar19 + pdVar13[6] * dVar27;
          dVar20 = dVar20 + pdVar13[7] * dVar27;
          lVar15 = lVar15 + 1;
          pdVar11 = pdVar11 + param_5[1];
          lVar14 = lVar14 + lVar9;
        } while (lVar15 < lVar3);
        pdVar11 = (double *)(param_6 + uVar10 * 8);
        pdVar11[1] = pdVar11[1] + dVar24 * param_1;
        *pdVar11 = *pdVar11 + dVar23 * param_1;
        pdVar11[3] = pdVar11[3] + dVar26 * param_1;
        pdVar11[2] = pdVar11[2] + dVar25 * param_1;
        pdVar11[5] = pdVar11[5] + dVar22 * param_1;
        pdVar11[4] = pdVar11[4] + dVar21 * param_1;
        pdVar11[7] = pdVar11[7] + dVar20 * param_1;
        pdVar11[6] = pdVar11[6] + dVar19 * param_1;
        uVar10 = uVar10 | 8;
      }
      if ((long)uVar10 < (long)(param_2 - 5)) {
        lVar14 = uVar10 << 3;
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        lVar15 = lVar5;
        do {
          dVar25 = *pdVar11;
          pdVar13 = (double *)(lVar8 + lVar14);
          dVar21 = dVar21 + *pdVar13 * dVar25;
          dVar22 = dVar22 + pdVar13[1] * dVar25;
          dVar23 = dVar23 + pdVar13[2] * dVar25;
          dVar24 = dVar24 + pdVar13[3] * dVar25;
          dVar19 = dVar19 + pdVar13[4] * dVar25;
          dVar20 = dVar20 + pdVar13[5] * dVar25;
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + lVar9;
          pdVar11 = pdVar11 + param_5[1];
        } while (lVar15 < lVar3);
        pdVar11 = (double *)(param_6 + uVar10 * 8);
        pdVar11[1] = pdVar11[1] + dVar22 * param_1;
        *pdVar11 = *pdVar11 + dVar21 * param_1;
        pdVar11[3] = pdVar11[3] + dVar24 * param_1;
        pdVar11[2] = pdVar11[2] + dVar23 * param_1;
        pdVar11[5] = pdVar11[5] + dVar20 * param_1;
        pdVar11[4] = pdVar11[4] + dVar19 * param_1;
        uVar10 = uVar10 + 6;
      }
      if ((long)uVar10 < (long)(param_2 - 3)) {
        lVar14 = uVar10 << 3;
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        lVar15 = lVar5;
        do {
          dVar23 = *pdVar11;
          pdVar13 = (double *)(lVar8 + lVar14);
          dVar21 = dVar21 + *pdVar13 * dVar23;
          dVar22 = dVar22 + pdVar13[1] * dVar23;
          dVar19 = dVar19 + pdVar13[2] * dVar23;
          dVar20 = dVar20 + pdVar13[3] * dVar23;
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + lVar9;
          pdVar11 = pdVar11 + param_5[1];
        } while (lVar15 < lVar3);
        pdVar11 = (double *)(param_6 + uVar10 * 8);
        pdVar11[1] = pdVar11[1] + dVar22 * param_1;
        *pdVar11 = *pdVar11 + dVar21 * param_1;
        pdVar11[3] = pdVar11[3] + dVar20 * param_1;
        pdVar11[2] = pdVar11[2] + dVar19 * param_1;
        uVar10 = uVar10 + 4;
      }
      if ((long)uVar10 < (long)(param_2 - 1)) {
        lVar12 = uVar10 * 8;
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        dVar19 = 0.0;
        dVar20 = 0.0;
        lVar14 = lVar12;
        lVar15 = lVar5;
        do {
          dVar19 = dVar19 + *(double *)(lVar8 + lVar14) * *pdVar11;
          dVar20 = dVar20 + ((double *)(lVar8 + lVar14))[1] * *pdVar11;
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + lVar9;
          pdVar11 = pdVar11 + param_5[1];
        } while (lVar15 < lVar3);
        dVar21 = *(double *)(param_6 + lVar12);
        ((double *)(param_6 + lVar12))[1] = ((double *)(param_6 + lVar12))[1] + dVar20 * param_1;
        *(double *)(param_6 + lVar12) = dVar21 + dVar19 * param_1;
        uVar10 = uVar10 + 2;
      }
      if ((long)uVar10 < (long)param_2) {
        lVar14 = *param_5;
        lVar12 = param_5[1];
        lVar15 = uVar10 << 3;
        do {
          dVar19 = 0.0;
          lVar17 = lVar15;
          pdVar11 = (double *)(lVar14 + lVar12 * lVar7);
          lVar18 = lVar5;
          do {
            dVar19 = dVar19 + *(double *)(lVar8 + lVar17) * *pdVar11;
            lVar18 = lVar18 + 1;
            pdVar11 = pdVar11 + lVar12;
            lVar17 = lVar17 + lVar9;
          } while (lVar18 < lVar3);
          *(double *)(param_6 + uVar10 * 8) = *(double *)(param_6 + uVar10 * 8) + dVar19 * param_1;
          uVar10 = uVar10 + 1;
          lVar15 = lVar15 + 8;
        } while (uVar10 != param_2);
      }
      lVar7 = lVar7 + lVar2 * 8;
      pdVar4 = pdVar4 + lVar2 * uVar6;
      lVar8 = lVar8 + lVar2 * uVar6 * 8;
      lVar5 = lVar1;
    } while (lVar1 < param_3);
  }
  return;
}



/* Entry: 109909dec; end: 10990a09b;  */

void FUN_109909dec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar7 = *param_1;
  uVar2 = param_1[2];
  lVar3 = param_1[3];
  uVar6 = param_2[1];
  uVar9 = param_2[2];
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = uVar6;
  uStack_40 = uVar9;
  uStack_38 = uVar2;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar5 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18,uVar6,uVar7);
    }
  }
  uVar4 = uStack_38;
  uVar11 = uStack_48;
  if ((long)uStack_48 <= (long)uVar9) {
    uVar11 = uVar9;
  }
  uVar12 = uStack_38;
  if ((long)uStack_38 <= (long)uVar11) {
    uVar12 = uVar11;
  }
  uVar11 = uVar4;
  if (0x2f < (long)uVar12) {
    uVar11 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
    if ((long)uVar11 < 2) {
      uVar11 = 1;
    }
    if ((long)uVar11 < (long)uStack_38) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uStack_38 / uVar11;
      }
      uVar13 = uStack_38 - uVar12 * uVar11;
      uStack_38 = uVar11;
      if (uVar13 != 0) {
        lVar1 = uVar12 * 8 + 8;
        lVar8 = 0;
        if (lVar1 != 0) {
          lVar8 = (long)(uVar11 + ~uVar13) / lVar1;
        }
        uStack_38 = uVar11 + lVar8 * -8;
      }
    }
    uVar12 = (uRam00000001132dfa00 - 0xc0) + uStack_48 * uStack_38 * -8;
    if ((long)uVar12 < (long)(uStack_38 * 0x20)) {
      uVar13 = 0;
      if (uVar11 << 5 != 0) {
        uVar13 = 0x480000 / (uVar11 << 5);
      }
    }
    else {
      uVar13 = 0;
      if (uStack_38 << 3 != 0) {
        uVar13 = uVar12 / (uStack_38 << 3);
      }
    }
    uVar11 = 0;
    if (uStack_38 << 4 != 0) {
      uVar11 = 0x180000 / (uStack_38 << 4);
    }
    if ((long)uVar11 <= (long)uVar13) {
      uVar13 = uVar11;
    }
    uVar11 = uStack_38;
    if ((uVar4 == uStack_38) && ((long)uVar9 <= (long)(uVar13 & 0xfffffffffffffffc))) {
      uVar11 = uVar4 * uVar9 * 8;
      uVar12 = uStack_48;
      uVar9 = uRam00000001132dfa00;
      if (0x400 < (long)uVar11) {
        if (0x23f < (long)uStack_48) {
          uVar12 = 0x240;
        }
        uVar9 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar11) {
          uVar9 = 0x180000;
          uVar12 = uStack_48;
        }
      }
      uVar11 = 0;
      if (uVar4 * 0x18 != 0) {
        uVar11 = uVar9 / (uVar4 * 0x18);
      }
      if ((long)uVar11 <= (long)uVar12) {
        uVar12 = uVar11;
      }
      if ((long)uVar12 < 7) {
        uVar11 = uVar4;
        if (uVar12 == 0) goto LAB_109909fc4;
      }
      else {
        uVar12 = ((uVar12 / 6) * 2 + uVar12 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar12 != 0) {
        lVar1 = (long)uStack_48 / (long)uVar12;
      }
      lVar8 = uStack_48 - lVar1 * uVar12;
      uVar11 = uVar4;
      uStack_48 = uVar12;
      if (lVar8 != 0) {
        lVar10 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar10 != 0) {
          lVar1 = (long)(uVar12 - lVar8) / lVar10;
        }
        uStack_48 = uVar12 + lVar1 * -6;
      }
    }
  }
LAB_109909fc4:
  lStack_30 = uStack_48 * uVar11;
  lStack_28 = uStack_40 * uVar11;
  FUN_10990a09c(uVar2,uVar6,uVar7,*(undefined8 *)(lVar3 + 0x10),*param_2,1,
                *(undefined8 *)(param_2[3] + 0x10),&uStack_58);
  _free(uStack_58);
  _free(uStack_50);
  return;
}



/* Entry: 10990a09c; end: 10990a80b;  */

void FUN_10990a09c(long param_1,long param_2,double *param_3,long param_4,double *param_5,
                  undefined8 param_6,long param_7,undefined8 *param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  double *pdVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double *pdVar21;
  long lVar22;
  double dVar23;
  undefined1 auStack_1a0 [8];
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  double *pdStack_150;
  double *pdStack_148;
  double *pdStack_140;
  double *pdStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  double *pdStack_e8;
  double *pdStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  double *pdStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  double *pdStack_98;
  long lStack_90;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  puVar7 = auStack_1a0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = param_8[4];
  lStack_110 = param_8[2];
  lVar18 = lStack_110;
  if (param_2 <= lStack_110) {
    lVar18 = param_2;
  }
  uVar15 = lVar18 * lVar20;
  pdStack_138 = param_5;
  lStack_a8 = param_7;
  if (uVar15 >> 0x3d == 0) {
    puStack_b0 = (undefined1 *)*param_8;
    if (puStack_b0 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(uVar15 * 8);
      if (uVar15 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar7 = auStack_1a0 + -((ulong)(puVar6 + 0x1e) & 0xfffffffffffffff0);
        puStack_190 = auStack_1a0 + -((ulong)(puVar6 + 0x1e) & 0xfffffffffffffff0);
        puStack_b0 = auStack_1a0 + -((ulong)(puVar6 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_190 = puVar6;
        puStack_b0 = puVar6;
        if (puVar6 == (undefined1 *)0x0) goto LAB_10990a730;
      }
    }
    else {
      puStack_190 = (undefined1 *)0x0;
      puVar7 = auStack_1a0;
    }
    uVar8 = lVar20 * param_1;
    if (uVar8 >> 0x3d == 0) {
      puStack_d8 = (undefined1 *)param_8[1];
      uStack_188 = uVar8;
      uStack_180 = uVar15;
      if (puStack_d8 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(uVar8 * 8);
        if (uVar8 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar7 = puVar7 + -((ulong)(puVar6 + 0x1e) & 0xfffffffffffffff0);
          puStack_198 = puVar7;
          puStack_d8 = puVar7;
          goto LAB_10990a214;
        }
        _malloc();
        puStack_198 = puVar6;
        puStack_d8 = puVar6;
        if (puVar6 != (undefined1 *)0x0) goto LAB_10990a214;
      }
      else {
        puStack_198 = (undefined1 *)0x0;
LAB_10990a214:
        lVar4 = lStack_a8;
        if (0 < param_1) {
          lVar17 = 0;
          lStack_170 = lVar20 * (param_4 * 8 + 8);
          lStack_178 = lVar20 * lStack_a8 * 8;
          lStack_120 = lVar18 << 3;
          lStack_c8 = lStack_a8 * 0x30;
          pdStack_150 = pdStack_138;
          lStack_168 = lVar20;
          lStack_160 = param_1;
          pdStack_148 = param_3;
          lStack_118 = param_2;
          lStack_108 = lVar18;
          pdStack_e0 = param_3;
          do {
            lStack_128 = lStack_168;
            if (param_1 <= lStack_168) {
              lStack_128 = param_1;
            }
            lStack_100 = lStack_160 - lVar17;
            lStack_d0 = lStack_168;
            if (lStack_100 <= lStack_168) {
              lStack_d0 = lStack_100;
            }
            lVar18 = lStack_d0 + lVar17;
            lStack_100 = lStack_100 - lStack_d0;
            puStack_130 = puStack_d8 + lStack_d0 * lStack_d0 * 8;
            if (0 < lStack_100) {
              pdStack_98 = param_3 + lVar17 * param_4 + lVar18;
              lStack_90 = param_4;
              func_0x000109404d2c(&uStack_82,puStack_130,&pdStack_98,lStack_d0,lStack_100,0,0);
            }
            lVar20 = lStack_d0;
            lStack_158 = param_1;
            lStack_c0 = lVar17;
            if (0 < lStack_d0) {
              lVar17 = 0;
              lVar19 = lStack_128 * 0x30;
              puVar6 = puStack_d8;
              pdVar21 = pdStack_148;
              lVar22 = lStack_128;
              do {
                if (lVar17 != 0) {
                  lVar2 = lVar22;
                  if (5 < lVar22) {
                    lVar2 = 6;
                  }
                  pdStack_98 = pdVar21;
                  lStack_90 = param_4;
                  FUN_10990a80c(&uStack_83,puVar6,&pdStack_98,lVar17,lVar2,lVar20,0);
                  lVar20 = lStack_d0;
                }
                lVar17 = lVar17 + 6;
                lVar22 = lVar22 + -6;
                pdVar21 = pdVar21 + 6;
                puVar6 = puVar6 + lVar19;
              } while (lVar17 < lVar20);
            }
            lVar22 = param_2;
            if (0 < param_2) {
              lVar17 = 0;
              pdStack_140 = pdStack_138 + lVar18 * lStack_a8;
              pdStack_e8 = pdStack_150;
              lVar18 = lStack_108;
              do {
                lVar19 = lStack_110;
                if (lVar22 <= lStack_110) {
                  lVar19 = lVar22;
                }
                if (param_2 <= lVar19) {
                  lVar19 = param_2;
                }
                lVar2 = lVar22 - lVar17;
                if (lVar18 <= lVar22 - lVar17) {
                  lVar2 = lVar18;
                }
                lStack_f8 = param_2;
                lStack_f0 = lVar17;
                if (0 < lVar20) {
                  lVar18 = 0;
                  pdStack_b8 = pdStack_138 + lVar17;
                  lVar17 = lStack_128;
                  pdVar21 = pdStack_e8;
                  do {
                    lVar22 = lVar17;
                    if (lVar17 < 2) {
                      lVar22 = 1;
                    }
                    if (5 < lVar22) {
                      lVar22 = 6;
                    }
                    lVar16 = lVar20 - lVar18;
                    lVar3 = lVar16;
                    if (5 < lVar16) {
                      lVar3 = 6;
                    }
                    lVar1 = lVar18 + lStack_c0;
                    lStack_a0 = lVar17;
                    if (lVar18 != 0) {
                      pdStack_98 = pdStack_b8 + lVar1 * lStack_a8;
                      lStack_90 = lStack_a8;
                      puVar6 = puStack_d8 + lVar18 * lVar20 * 8;
                      *(undefined8 *)(puVar7 + -0x18) = 0;
                      *(undefined8 *)(puVar7 + -0x10) = 0;
                      *(long *)(puVar7 + -0x20) = lVar20;
                      FUN_109404e14(0xbff0000000000000,&uStack_81,&pdStack_98,puStack_b0,puVar6,
                                    lVar2,lVar18,lVar3,lVar20);
                      lVar20 = lStack_d0;
                      param_3 = pdStack_e0;
                    }
                    if (0 < lVar16) {
                      lVar17 = 0;
                      pdVar9 = pdVar21;
                      do {
                        lVar16 = lVar17 + lVar1;
                        if (lVar17 != 0) {
                          lVar10 = 0;
                          pdVar11 = pdVar21;
                          do {
                            if (0 < lVar2) {
                              dVar23 = param_3[lVar16 + (lVar10 + lVar1) * param_4];
                              pdVar12 = pdVar11;
                              pdVar13 = pdVar9;
                              lVar14 = lVar19;
                              do {
                                *pdVar13 = *pdVar13 - dVar23 * *pdVar12;
                                lVar14 = lVar14 + -1;
                                pdVar12 = pdVar12 + 1;
                                pdVar13 = pdVar13 + 1;
                              } while (lVar14 != 0);
                            }
                            lVar10 = lVar10 + 1;
                            pdVar11 = pdVar11 + lVar4;
                          } while (lVar10 != lVar17);
                        }
                        if (0 < lVar2) {
                          lVar10 = 0;
                          dVar23 = param_3[lVar16 * param_4 + lVar16];
                          do {
                            pdVar9[lVar10] = (1.0 / dVar23) * pdVar9[lVar10];
                            lVar10 = lVar10 + 1;
                          } while (lVar19 != lVar10);
                        }
                        lVar17 = lVar17 + 1;
                        pdVar9 = pdVar9 + lVar4;
                      } while (lVar17 != lVar22);
                    }
                    pdStack_98 = pdStack_b8 + lVar1 * lStack_a8;
                    lStack_90 = lStack_a8;
                    func_0x00010990a92c(&uStack_84,puStack_b0,&pdStack_98,lVar3,lVar2,lVar20,lVar18)
                    ;
                    lVar18 = lVar18 + 6;
                    lVar17 = lStack_a0 + -6;
                    pdVar21 = (double *)((long)pdVar21 + lStack_c8);
                  } while (lVar18 < lVar20);
                }
                lVar17 = lStack_f0;
                lVar18 = lStack_108;
                lVar22 = lStack_118;
                if (0 < lStack_100) {
                  pdStack_98 = pdStack_140 + lStack_f0;
                  lStack_90 = lStack_a8;
                  *(undefined8 *)(puVar7 + -0x18) = 0;
                  *(undefined8 *)(puVar7 + -0x10) = 0;
                  *(undefined8 *)(puVar7 + -0x20) = 0xffffffffffffffff;
                  FUN_109404e14(0xbff0000000000000,&uStack_81,&pdStack_98,puStack_b0,puStack_130,
                                lVar2,lVar20,lStack_100,0xffffffffffffffff);
                  lVar20 = lStack_d0;
                }
                lVar17 = lVar17 + lVar18;
                param_2 = lStack_f8 - lVar18;
                pdStack_e8 = (double *)((long)pdStack_e8 + lStack_120);
              } while (lVar17 < lVar22);
            }
            lVar17 = lStack_c0 + lStack_168;
            param_1 = lStack_158 - lStack_168;
            pdStack_148 = (double *)((long)pdStack_148 + lStack_170);
            pdStack_150 = (double *)((long)pdStack_150 + lStack_178);
            param_2 = lVar22;
          } while (lVar17 < lStack_160);
        }
        if (0x4000 < uStack_188) {
          _free(puStack_198);
        }
        if (0x4000 < uStack_180) {
          _free(puStack_190);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10990a79c;
    }
  }
  else {
LAB_10990a730:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10990a79c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10990a7a0);
  (*pcVar5)();
}



/* Entry: 10990a80c; end: 10990ab5f;  */

void FUN_10990a80c(undefined8 param_1,long param_2,long *param_3,long param_4,ulong param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = param_5 + 3;
  if (-1 < (long)param_5) {
    uVar1 = param_5;
  }
  uVar4 = uVar1 & 0xfffffffffffffffc;
  if ((long)param_5 < 4) {
    lVar5 = 0;
  }
  else {
    lVar7 = 0;
    lVar5 = 0;
    lVar9 = param_3[1];
    puVar8 = (undefined8 *)(*param_3 + 0x10);
    do {
      lVar2 = param_7 * 4;
      if (0 < param_4) {
        puVar6 = (undefined8 *)(param_2 + param_7 * 0x20 + 0x10 + lVar5 * 8);
        puVar3 = puVar8;
        lVar10 = param_4;
        do {
          puVar6[-2] = puVar3[-2];
          puVar6[-1] = puVar3[-1];
          *puVar6 = *puVar3;
          puVar6[1] = puVar3[1];
          puVar6 = puVar6 + 4;
          puVar3 = puVar3 + lVar9;
          lVar10 = lVar10 + -1;
          lVar2 = param_7 * 4 + param_4 * 4;
        } while (lVar10 != 0);
      }
      lVar5 = lVar2 + lVar5 + (param_6 - (param_4 + param_7)) * 4;
      lVar7 = lVar7 + 4;
      puVar8 = puVar8 + 4;
    } while (lVar7 < (long)uVar4);
  }
  if ((long)uVar4 < (long)param_5) {
    lVar7 = param_3[1];
    puVar8 = (undefined8 *)(*param_3 + ((long)uVar1 >> 2) * 0x20);
    do {
      lVar5 = lVar5 + param_7;
      puVar6 = puVar8;
      lVar9 = param_4;
      if (0 < param_4) {
        do {
          *(undefined8 *)(param_2 + lVar5 * 8) = *puVar6;
          lVar5 = lVar5 + 1;
          puVar6 = puVar6 + lVar7;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar5 = (param_6 - (param_4 + param_7)) + lVar5;
      uVar4 = uVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar4 != param_5);
  }
  return;
}



/* Entry: 10990ab60; end: 10990ae13;  */

void FUN_10990ab60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_3;
  uVar4 = param_1[2];
  uVar5 = param_2[2];
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = uVar4;
  uStack_48 = uVar4;
  uStack_40 = uVar5;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar3 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18,uVar5);
    }
  }
  uVar2 = uStack_40;
  uVar7 = uStack_50;
  if ((long)uStack_50 <= (long)uVar4) {
    uVar7 = uVar4;
  }
  uVar9 = uStack_40;
  if ((long)uStack_40 <= (long)uVar7) {
    uVar9 = uVar7;
  }
  uVar7 = uVar2;
  if (0x2f < (long)uVar9) {
    uVar7 = (long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8;
    if ((long)uVar7 < 2) {
      uVar7 = 1;
    }
    if ((long)uVar7 < (long)uStack_40) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uStack_40 / uVar7;
      }
      uVar10 = uStack_40 - uVar9 * uVar7;
      uStack_40 = uVar7;
      if (uVar10 != 0) {
        lVar1 = uVar9 * 8 + 8;
        lVar6 = 0;
        if (lVar1 != 0) {
          lVar6 = (long)(uVar7 + ~uVar10) / lVar1;
        }
        uStack_40 = uVar7 + lVar6 * -8;
      }
    }
    uVar9 = (uRam00000001132dfa00 - 0xc0) + uStack_50 * uStack_40 * -8;
    if ((long)uVar9 < (long)(uStack_40 * 0x20)) {
      uVar10 = 0;
      if (uVar7 << 5 != 0) {
        uVar10 = 0x480000 / (uVar7 << 5);
      }
    }
    else {
      uVar10 = 0;
      if (uStack_40 << 3 != 0) {
        uVar10 = uVar9 / (uStack_40 << 3);
      }
    }
    uVar7 = 0;
    if (uStack_40 << 4 != 0) {
      uVar7 = 0x180000 / (uStack_40 << 4);
    }
    if ((long)uVar7 <= (long)uVar10) {
      uVar10 = uVar7;
    }
    uVar7 = uStack_40;
    if ((uVar2 == uStack_40) && ((long)uVar4 <= (long)(uVar10 & 0xfffffffffffffffc))) {
      uVar10 = uVar2 * uVar4 * 8;
      uVar7 = uRam00000001132dfa00;
      uVar9 = uStack_50;
      if (0x400 < (long)uVar10) {
        if (0x23f < (long)uStack_50) {
          uVar9 = 0x240;
        }
        uVar7 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar10) {
          uVar7 = 0x180000;
          uVar9 = uStack_50;
        }
      }
      uVar10 = 0;
      if (uVar2 * 0x18 != 0) {
        uVar10 = uVar7 / (uVar2 * 0x18);
      }
      if ((long)uVar10 <= (long)uVar9) {
        uVar9 = uVar10;
      }
      if ((long)uVar9 < 7) {
        uVar7 = uVar2;
        if (uVar9 == 0) goto LAB_10990ad3c;
      }
      else {
        uVar9 = ((uVar9 / 6) * 2 + uVar9 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar9 != 0) {
        lVar1 = (long)uStack_50 / (long)uVar9;
      }
      lVar6 = uStack_50 - lVar1 * uVar9;
      uVar7 = uVar2;
      uStack_50 = uVar9;
      if (lVar6 != 0) {
        lVar8 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar8 != 0) {
          lVar1 = (long)(uVar9 - lVar6) / lVar8;
        }
        uStack_50 = uVar9 + lVar1 * -6;
      }
    }
  }
LAB_10990ad3c:
  lStack_38 = uStack_50 * uVar7;
  lStack_30 = uStack_48 * uVar7;
  FUN_10990ae14(uVar4,uVar5,*param_2,*(undefined8 *)(param_2[3] + 0x10),*param_2,
                *(undefined8 *)(param_2[3] + 0x10),*param_1,1,*(undefined8 *)(param_1[3] + 0x10),
                &uStack_28,&uStack_60);
  _free(uStack_60);
  _free(uStack_58);
  return;
}



/* Entry: 10990ae14; end: 10990b3d3;  */

void FUN_10990ae14(ulong param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,undefined8 *param_10,long *param_11)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puStack_600;
  long lStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  undefined1 *puStack_578;
  ulong uStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  undefined1 *puStack_550;
  long lStack_548;
  long lStack_540;
  undefined8 *puStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  undefined1 uStack_513;
  undefined1 uStack_512;
  undefined1 uStack_511;
  long *plStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined1 uStack_72;
  undefined1 uStack_71;
  long lStack_70;
  
  ppuVar7 = &puStack_600;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_5c0 = param_11[4];
  uVar11 = param_11[2];
  if ((long)param_1 <= param_11[2]) {
    uVar11 = param_1;
  }
  uStack_598 = uVar11 & 0x7ffffffffffffffc;
  if ((long)uVar11 < 5) {
    uStack_598 = uVar11;
  }
  uVar11 = uStack_598 * lStack_5c0;
  lStack_5e0 = param_3;
  lStack_5d0 = param_5;
  lStack_5c8 = param_6;
  lStack_5b0 = param_8;
  lStack_588 = param_4;
  lStack_580 = param_7;
  if (uVar11 >> 0x3d == 0) {
    lStack_528 = *param_11;
    if (lStack_528 == 0) {
      lVar8 = uVar11 * 8;
      if (uVar11 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar8 = -(lVar8 + 0x1eU & 0xfffffffffffffff0);
        ppuVar7 = (undefined1 **)((long)&puStack_600 + lVar8);
        lStack_5f8 = (long)&puStack_600 + lVar8;
        lStack_528 = lStack_5f8;
      }
      else {
        _malloc();
        lStack_5f8 = lVar8;
        lStack_528 = lVar8;
        if (lVar8 == 0) goto LAB_10990b318;
      }
    }
    else {
      lStack_5f8 = 0;
      ppuVar7 = &puStack_600;
    }
    uVar9 = lStack_5c0 * param_1;
    if (uVar9 >> 0x3d == 0) {
      puStack_578 = (undefined1 *)param_11[1];
      uStack_5f0 = uVar9;
      uStack_5e8 = uVar11;
      if (puStack_578 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(uVar9 * 8);
        if (uVar9 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          ppuVar7 = (undefined1 **)((long)ppuVar7 + -((ulong)(puVar6 + 0x1e) & 0xfffffffffffffff0));
          puStack_600 = (undefined1 *)ppuVar7;
          puStack_578 = (undefined1 *)ppuVar7;
          goto LAB_10990af84;
        }
        _malloc();
        puStack_600 = puVar6;
        puStack_578 = puVar6;
        if (puVar6 != (undefined1 *)0x0) goto LAB_10990af84;
      }
      else {
        puStack_600 = (undefined1 *)0x0;
LAB_10990af84:
        if (0 < param_2) {
          puStack_538 = param_10;
          lStack_5a8 = uStack_598 * (param_9 * 8 + lStack_5b0 * 8);
          lStack_548 = param_9;
          lStack_560 = param_9 * 0x60 + 0x60;
          lVar8 = 0;
          lStack_5d8 = param_2;
          uStack_5a0 = param_1;
          do {
            lStack_5b8 = lVar8 + lStack_5c0;
            lStack_530 = lStack_5b8;
            if (lStack_5d8 <= lStack_5b8) {
              lStack_530 = lStack_5d8;
            }
            lStack_530 = lStack_530 - lVar8;
            lStack_500 = lStack_5d0 + lVar8 * lStack_5c8 * 8;
            lStack_4f8 = lStack_5c8;
            func_0x000109404d2c(&uStack_512,puStack_578,&lStack_500,lStack_530,param_1,0,0);
            if (0 < (long)param_1) {
              lStack_590 = lStack_5e0 + lVar8 * lStack_588 * 8;
              lStack_568 = lStack_580;
              uVar11 = 0;
              do {
                lVar8 = lStack_530;
                uVar9 = uVar11 + uStack_598;
                uVar1 = uVar9;
                if ((long)param_1 <= (long)uVar9) {
                  uVar1 = param_1;
                }
                lVar13 = uVar1 - uVar11;
                lStack_500 = lStack_590 + uVar11 * 8;
                lStack_4f8 = lStack_588;
                func_0x000109404b80(&uStack_511,lStack_528,&lStack_500,lStack_530,lVar13,0,0);
                lStack_500 = lStack_580 + uVar11 * 8;
                lStack_4f8 = lStack_548;
                uVar16 = *puStack_538;
                *(undefined8 *)((long)ppuVar7 + -0x18) = 0;
                *(undefined8 *)((long)ppuVar7 + -0x10) = 0;
                *(undefined8 *)((long)ppuVar7 + -0x20) = 0xffffffffffffffff;
                FUN_109404e14(uVar16,&uStack_513,&lStack_500,lStack_528,puStack_578,lVar13,lVar8,
                              uVar11,0xffffffffffffffff);
                uStack_570 = uVar9;
                if (0 < lVar13) {
                  lVar15 = 0;
                  lStack_558 = lStack_580 + uVar11 * lStack_548 * 8 + uVar11 * lStack_5b0 * 8;
                  puStack_550 = puStack_578 + uVar11 * lVar8 * 8;
                  lStack_520 = lStack_568;
                  lVar8 = lVar13;
                  do {
                    lVar3 = lVar8;
                    if (lVar8 < 2) {
                      lVar3 = 1;
                    }
                    if (0xb < lVar3) {
                      lVar3 = 0xc;
                    }
                    lVar14 = lVar13 - lVar15;
                    lVar2 = lVar14;
                    if (0xb < lVar14) {
                      lVar2 = 0xc;
                    }
                    lVar12 = lVar15 * lStack_530;
                    puVar6 = puStack_550 + lVar12 * 8;
                    lStack_540 = lVar8;
                    _bzero(&lStack_500,0x480);
                    lVar4 = lStack_530;
                    plStack_510 = &lStack_500;
                    lStack_508 = 0xc;
                    lVar8 = lStack_528 + lVar12 * 8;
                    uVar16 = *puStack_538;
                    *(undefined8 *)((long)ppuVar7 + -0x18) = 0;
                    *(undefined8 *)((long)ppuVar7 + -0x10) = 0;
                    *(undefined8 *)((long)ppuVar7 + -0x20) = 0xffffffffffffffff;
                    FUN_109404e14(uVar16,&uStack_72,&plStack_510,lVar8,puVar6,lVar2,lVar4,lVar2,
                                  0xffffffffffffffff);
                    if (0 < lVar14) {
                      lVar8 = 0;
                      plVar10 = &lStack_500;
                      lVar14 = lStack_520;
                      do {
                        lVar12 = 0;
                        do {
                          *(double *)(lVar14 + lVar12 * 8) =
                               (double)plVar10[lVar12] + *(double *)(lVar14 + lVar12 * 8);
                          lVar12 = lVar12 + 1;
                        } while (lVar8 + lVar12 < lVar2);
                        lVar8 = lVar8 + 1;
                        lVar14 = lVar14 + param_9 * 8 + 8;
                        plVar10 = plVar10 + 0xd;
                      } while (lVar8 != lVar3);
                    }
                    lVar8 = lVar2 + lVar15;
                    plStack_510 = (long *)(lStack_558 + lVar15 * lStack_548 * 8 + lVar8 * 8);
                    lStack_508 = lStack_548;
                    lVar3 = lStack_528 + lVar8 * lVar4 * 8;
                    uVar16 = *puStack_538;
                    *(undefined8 *)((long)ppuVar7 + -0x18) = 0;
                    *(undefined8 *)((long)ppuVar7 + -0x10) = 0;
                    *(undefined8 *)((long)ppuVar7 + -0x20) = 0xffffffffffffffff;
                    FUN_109404e14(uVar16,&uStack_71,&plStack_510,lVar3,puVar6,lVar13 - lVar8,lVar4,
                                  lVar2,0xffffffffffffffff);
                    lVar15 = lVar15 + 0xc;
                    lVar8 = lStack_540 + -0xc;
                    lStack_520 = lStack_520 + lStack_560;
                  } while (lVar15 < lVar13);
                }
                lStack_568 = lStack_568 + lStack_5a8;
                uVar11 = uStack_570;
                param_1 = uStack_5a0;
              } while ((long)uStack_570 < (long)uStack_5a0);
            }
            lVar8 = lStack_5b8;
          } while (lStack_5b8 < lStack_5d8);
        }
        if (0x4000 < uStack_5f0) {
          _free(puStack_600);
        }
        if (0x4000 < uStack_5e8) {
          _free(lStack_5f8);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10990b380;
    }
  }
  else {
LAB_10990b318:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10990b380:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10990b384);
  (*pcVar5)();
}



/* Entry: 10990b3d4; end: 10990bbc3;  */

void FUN_10990b3d4(long *****param_1,long *****param_2,long *****param_3,long *****param_4,
                  long *****param_5,long *****param_6,long *****param_7,ulong *param_8)

{
  bool bVar1;
  long lVar2;
  long ***ppplVar3;
  code *pcVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long lVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  ulong uVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long lVar15;
  long ****pppplVar16;
  long *****ppppplVar17;
  long *****ppppplVar18;
  long *****ppppplVar19;
  long lVar20;
  long ****pppplVar21;
  long lVar22;
  long lVar23;
  long *****ppppplVar24;
  long *****ppppplVar25;
  long ****pppplVar26;
  long ***ppplStack_1c0;
  long ****pppplStack_1b8;
  long ****pppplStack_1b0;
  ulong uStack_1a8;
  long ***ppplStack_1a0;
  long lStack_198;
  long lStack_190;
  long ****pppplStack_188;
  long ****pppplStack_180;
  long ****pppplStack_178;
  long lStack_170;
  long ****pppplStack_168;
  long lStack_160;
  long ****pppplStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long lStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  long lStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long lStack_c0;
  long ****pppplStack_b8;
  long lStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  undefined1 auStack_84 [2];
  undefined1 auStack_82 [2];
  long lStack_80;
  
  ppppplVar10 = (long *****)&ppplStack_1c0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar24 = (long *****)param_8[4];
  pppplStack_158 = (long ****)param_8[2];
  pppplStack_118 = pppplStack_158;
  if ((long)param_2 <= (long)pppplStack_158) {
    pppplStack_118 = (long ****)param_2;
  }
  pppplVar21 = (long ****)((long)pppplStack_118 * (long)ppppplVar24);
  pppplStack_128 = (long ****)param_5;
  pppplStack_b8 = (long ****)param_7;
  pppplStack_a0 = (long ****)param_4;
  if ((ulong)pppplVar21 >> 0x3d == 0) {
    pppplStack_d0 = (long ****)*param_8;
    ppppplVar14 = param_2;
    ppppplVar7 = param_3;
    if ((long *****)pppplStack_d0 == (long *****)0x0) {
      ppppplVar25 = (long *****)((long)pppplVar21 * 8);
      if (pppplVar21 < (long ****)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar22 = -((long)ppppplVar25 + 0x1eU & 0xfffffffffffffff0);
        ppppplVar10 = (long *****)((long)&ppplStack_1c0 + lVar22);
        pppplStack_1b0 = (long ****)((long)&ppplStack_1c0 + lVar22);
        pppplStack_d0 = pppplStack_1b0;
      }
      else {
        _malloc();
        pppplStack_1b0 = (long ****)ppppplVar25;
        pppplStack_d0 = (long ****)ppppplVar25;
        if (ppppplVar25 == (long *****)0x0) goto LAB_10990bb10;
      }
    }
    else {
      pppplStack_1b0 = (long ****)0x0;
      ppppplVar10 = (long *****)&ppplStack_1c0;
      ppppplVar25 = param_1;
    }
    uVar11 = (long)ppppplVar24 * (long)param_1;
    if (uVar11 >> 0x3d == 0) {
      pppplStack_f8 = (long ****)param_8[1];
      uStack_1a8 = uVar11;
      ppplStack_1a0 = (long ***)pppplVar21;
      pppplStack_120 = (long ****)param_2;
      if ((long *****)pppplStack_f8 != (long *****)0x0) {
        pppplStack_1b8 = (long ****)0x0;
LAB_10990b550:
        pppplVar21 = pppplStack_b8;
        lStack_170 = (long)param_1 - 1;
        if (0 < (long)param_1) {
          lStack_190 = (long)ppppplVar24 << 3;
          lStack_198 = (long)pppplStack_a0 << 3;
          lStack_150 = (long)pppplStack_a0 * 0x30;
          lStack_160 = (long)pppplStack_118 << 3;
          lVar22 = (long)pppplStack_b8 * 8;
          pppplStack_178 = (long ****)(param_3 + (long)param_1);
          pppplStack_188 = (long ****)ppppplVar24;
          pppplStack_100 = (long ****)param_3;
          do {
            pppplVar26 = pppplStack_188;
            ppppplVar24 = (long *****)pppplStack_188;
            if ((long)param_1 <= (long)pppplStack_188) {
              ppppplVar24 = param_1;
            }
            ppppplVar13 = (long *****)((long)param_1 - (long)ppppplVar24);
            ppppplVar12 = (long *****)(pppplStack_f8 + (long)ppppplVar24 * (long)ppppplVar24);
            pppplStack_168 = (long ****)ppppplVar12;
            pppplStack_e8 = (long ****)ppppplVar13;
            pppplStack_a8 = (long ****)ppppplVar24;
            if (0 < (long)ppppplVar13) {
              pppplStack_98 = (long ****)(param_3 + (long)ppppplVar13);
              pppplStack_90 = pppplStack_a0;
              ppppplVar25 = (long *****)auStack_82;
              ppppplVar7 = &pppplStack_98;
              param_6 = (long *****)0x0;
              param_7 = (long *****)0x0;
              FUN_1098e46ac();
              ppppplVar14 = ppppplVar12;
              param_4 = ppppplVar24;
              param_5 = ppppplVar13;
            }
            pppplVar16 = pppplStack_a8;
            pppplStack_180 = (long ****)param_1;
            if (0 < (long)pppplVar26) {
              lVar20 = 0;
              lVar23 = (long)pppplStack_178 +
                       (long)pppplStack_a8 * -8 + lStack_198 * (long)pppplStack_e8;
              ppppplVar24 = (long *****)pppplStack_a8;
              param_2 = (long *****)pppplStack_f8;
              do {
                param_5 = ppppplVar24;
                if (5 < (long)ppppplVar24) {
                  param_5 = (long *****)0x6;
                }
                param_4 = (long *****)((long)ppppplVar24 - (long)param_5);
                if (0 < (long)param_4) {
                  param_7 = (long *****)((long)param_5 + lVar20);
                  pppplStack_98 = (long ****)(lVar23 + (long)param_7 * 8);
                  pppplStack_90 = pppplStack_a0;
                  ppppplVar25 = (long *****)(auStack_84 + 1);
                  ppppplVar7 = &pppplStack_98;
                  ppppplVar14 = param_2;
                  param_6 = (long *****)pppplStack_a8;
                  FUN_10990bbc4();
                }
                lVar20 = lVar20 + 6;
                param_2 = param_2 + (long)pppplVar16 * 6;
                lVar23 = lVar23 + lStack_150;
                ppppplVar24 = (long *****)((long)ppppplVar24 - 6);
              } while (lVar20 < (long)pppplStack_a8);
            }
            if (0 < (long)pppplStack_120) {
              lVar20 = 0;
              pppplStack_130 = (long ****)(long *****)0x6;
              if ((long *****)((long)pppplStack_a8 % 6) != (long *****)0x0) {
                pppplStack_130 = (long ****)((long)pppplStack_a8 % 6);
              }
              pppplStack_138 = (long ****)((long)pppplStack_a8 - (long)pppplStack_130);
              lStack_140 = lStack_170 - (long)pppplStack_130;
              lStack_148 = (long)pppplStack_180 - (long)pppplStack_130;
              pppplStack_f0 = pppplStack_128;
              ppppplVar12 = (long *****)pppplStack_120;
              ppppplVar24 = (long *****)pppplStack_118;
              do {
                ppppplVar13 = (long *****)pppplStack_158;
                if ((long)pppplStack_120 <= (long)pppplStack_158) {
                  ppppplVar13 = (long *****)pppplStack_120;
                }
                if ((long)ppppplVar12 <= (long)ppppplVar13) {
                  ppppplVar13 = ppppplVar12;
                }
                ppppplVar9 = (long *****)((long)pppplStack_120 - lVar20);
                if ((long)ppppplVar24 <= (long)pppplStack_120 - lVar20) {
                  ppppplVar9 = ppppplVar24;
                }
                pppplStack_c8 = pppplStack_128 + lVar20;
                lStack_b0 = lStack_140;
                param_2 = (long *****)pppplStack_130;
                ppppplVar24 = (long *****)pppplStack_138;
                lVar23 = lStack_148;
                pppplStack_110 = (long ****)ppppplVar12;
                lStack_108 = lVar20;
                if (-1 < (long)pppplStack_138) {
                  do {
                    pppplVar26 = pppplStack_a8;
                    ppppplVar14 = param_2;
                    if (5 < (long)param_2) {
                      ppppplVar14 = (long *****)0x6;
                    }
                    ppppplVar7 = param_2;
                    if ((long)param_2 < 2) {
                      ppppplVar7 = (long *****)0x1;
                    }
                    if (5 < (long)ppppplVar7) {
                      ppppplVar7 = (long *****)0x6;
                    }
                    ppppplVar25 = (long *****)((long)pppplStack_a8 - (long)ppppplVar24);
                    param_4 = ppppplVar25;
                    if (5 < (long)ppppplVar25) {
                      param_4 = (long *****)0x6;
                    }
                    lVar20 = (long)ppppplVar24 + (long)pppplStack_e8;
                    lVar8 = lVar20 * (long)pppplStack_b8;
                    lStack_c0 = lVar23;
                    if (0 < (long)ppppplVar25 - (long)param_4) {
                      pppplStack_98 = pppplStack_c8 + lVar8;
                      pppplStack_90 = pppplStack_b8;
                      ppppplVar12 = (long *****)
                                    (pppplStack_f8 + (long)ppppplVar24 * (long)pppplStack_a8);
                      lStack_e0 = lVar20;
                      pppplStack_d8 = (long ****)ppppplVar14;
                      ppppplVar10[-3] = (long ****)((long)param_4 + (long)ppppplVar24);
                      ppppplVar10[-2] = (long ****)((long)param_4 + (long)ppppplVar24);
                      ppppplVar10[-4] = pppplVar26;
                      FUN_109404e14(0xbff0000000000000,auStack_82 + 1,&pppplStack_98,pppplStack_d0,
                                    ppppplVar12,ppppplVar9);
                      ppppplVar14 = (long *****)pppplStack_d8;
                      lVar20 = lStack_e0;
                      param_3 = (long *****)pppplStack_100;
                    }
                    lVar23 = lStack_c0;
                    if (0 < (long)ppppplVar25) {
                      ppppplVar25 = (long *****)0x0;
                      ppppplVar12 = (long *****)
                                    ((long)pppplStack_f0 + lVar22 * ((long)ppppplVar14 + lStack_b0))
                      ;
                      ppppplVar14 = (long *****)
                                    ((long)pppplStack_f0 + lVar22 * ((long)ppppplVar14 + lStack_c0))
                      ;
                      do {
                        lVar2 = (long)param_4 + ~(ulong)ppppplVar25 + lVar20;
                        lVar15 = lVar2 * (long)pppplStack_a0;
                        if (ppppplVar25 != (long *****)0x0) {
                          ppppplVar17 = (long *****)0x0;
                          ppppplVar18 = ppppplVar14;
                          do {
                            if (0 < (long)ppppplVar9) {
                              pppplVar26 = param_3[(long)ppppplVar17 +
                                                   (long)param_4 +
                                                   lVar15 + (lVar20 - (long)ppppplVar25)];
                              ppppplVar5 = ppppplVar12;
                              ppppplVar6 = ppppplVar13;
                              ppppplVar19 = ppppplVar18;
                              do {
                                *ppppplVar5 = (long ****)
                                              ((double)*ppppplVar5 -
                                              (double)pppplVar26 * (double)*ppppplVar19);
                                ppppplVar6 = (long *****)((long)ppppplVar6 - 1);
                                ppppplVar5 = ppppplVar5 + 1;
                                ppppplVar19 = ppppplVar19 + 1;
                              } while (ppppplVar6 != (long *****)0x0);
                            }
                            ppppplVar17 = (long *****)((long)ppppplVar17 + 1);
                            ppppplVar18 = ppppplVar18 + (long)pppplVar21;
                          } while (ppppplVar17 != ppppplVar25);
                        }
                        if (0 < (long)ppppplVar9) {
                          ppppplVar17 = (long *****)0x0;
                          pppplVar26 = param_3[lVar15 + lVar2];
                          do {
                            ppppplVar12[(long)ppppplVar17] =
                                 (long ****)
                                 ((1.0 / (double)pppplVar26) *
                                 (double)ppppplVar12[(long)ppppplVar17]);
                            ppppplVar17 = (long *****)((long)ppppplVar17 + 1);
                          } while (ppppplVar13 != ppppplVar17);
                        }
                        ppppplVar25 = (long *****)((long)ppppplVar25 + 1);
                        ppppplVar12 = ppppplVar12 + -(long)pppplVar21;
                        ppppplVar14 = ppppplVar14 + -(long)pppplVar21;
                      } while (ppppplVar25 != ppppplVar7);
                    }
                    pppplStack_98 = pppplStack_c8 + lVar8;
                    pppplStack_90 = pppplStack_b8;
                    ppppplVar25 = (long *****)auStack_84;
                    ppppplVar7 = &pppplStack_98;
                    ppppplVar14 = (long *****)pppplStack_d0;
                    param_5 = ppppplVar9;
                    param_6 = (long *****)pppplStack_a8;
                    param_7 = ppppplVar24;
                    func_0x00010990a92c();
                    param_2 = (long *****)((long)param_2 + 6);
                    lStack_b0 = lStack_b0 + -6;
                    lVar23 = lVar23 + -6;
                    bVar1 = 5 < (long)ppppplVar24;
                    ppppplVar24 = (long *****)((long)ppppplVar24 - 6);
                  } while (bVar1);
                }
                ppppplVar24 = (long *****)pppplStack_118;
                if (0 < (long)pppplStack_e8) {
                  pppplStack_98 = pppplStack_c8;
                  pppplStack_90 = pppplStack_b8;
                  ppppplVar10[-3] = (long ****)0x0;
                  ppppplVar10[-2] = (long ****)0x0;
                  ppppplVar25 = (long *****)(auStack_82 + 1);
                  ppppplVar14 = &pppplStack_98;
                  ppppplVar10[-4] = (long ****)0xffffffffffffffff;
                  ppppplVar7 = (long *****)pppplStack_d0;
                  param_4 = (long *****)pppplStack_168;
                  param_6 = (long *****)pppplStack_a8;
                  param_7 = (long *****)pppplStack_e8;
                  FUN_109404e14(0xbff0000000000000);
                  param_5 = ppppplVar9;
                }
                lVar20 = lStack_108 + (long)ppppplVar24;
                ppppplVar12 = (long *****)((long)pppplStack_110 - (long)ppppplVar24);
                pppplStack_f0 = (long ****)((long)pppplStack_f0 + lStack_160);
              } while (lVar20 < (long)pppplStack_120);
            }
            pppplStack_178 = (long ****)((long)pppplStack_178 - lStack_190);
            lStack_170 = lStack_170 - (long)pppplStack_188;
            param_1 = (long *****)((long)pppplStack_180 - (long)pppplStack_188);
          } while (param_1 != (long *****)0x0 && (long)pppplStack_188 <= (long)pppplStack_180);
        }
        if (0x4000 < uStack_1a8) {
          ppppplVar25 = (long *****)pppplStack_1b8;
          _free();
        }
        if ((long ****)0x4000 < ppplStack_1a0) {
          ppppplVar25 = (long *****)pppplStack_1b0;
          _free();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
          ___stack_chk_fail();
          ppplVar3 = ppplStack_1a0;
          if ((long ****)0x4000 < ppplStack_1a0) {
            _free(pppplStack_1b0);
          }
          __Unwind_Resume(ppppplVar25);
          ppppplVar10[-4] = (long ****)param_3;
          ppppplVar10[-3] = (long ****)param_2;
          ppppplVar10[-2] = (long ****)ppplVar3;
          ppppplVar10[-1] = (long ****)ppppplVar25;
          ppppplVar10 = (long *****)((long)param_5 + 3);
          if (-1 < (long)param_5) {
            ppppplVar10 = param_5;
          }
          ppppplVar24 = (long *****)((ulong)ppppplVar10 & 0xfffffffffffffffc);
          if ((long)param_5 < 4) {
            lVar22 = 0;
          }
          else {
            lVar20 = 0;
            lVar22 = 0;
            pppplVar21 = *ppppplVar7;
            pppplVar26 = ppppplVar7[1];
            do {
              lVar23 = (long)param_7 * 4;
              if (0 < (long)param_4) {
                ppppplVar25 = ppppplVar14 + (long)param_7 * 4 + lVar22 + 2;
                pppplVar16 = pppplVar21;
                ppppplVar12 = param_4;
                do {
                  ppppplVar25[-2] = (long ****)*pppplVar16;
                  ppppplVar25[-1] = (long ****)pppplVar16[(long)pppplVar26];
                  *ppppplVar25 = (long ****)pppplVar16[(long)pppplVar26 * 2];
                  ppppplVar25[1] = (long ****)pppplVar16[(long)pppplVar26 * 3];
                  pppplVar16 = pppplVar16 + 1;
                  ppppplVar25 = ppppplVar25 + 4;
                  ppppplVar12 = (long *****)((long)ppppplVar12 - 1);
                  lVar23 = (long)param_7 * 4 + (long)param_4 * 4;
                } while (ppppplVar12 != (long *****)0x0);
              }
              lVar22 = lVar23 + lVar22 + ((long)param_6 - ((long)param_4 + (long)param_7)) * 4;
              lVar20 = lVar20 + 4;
              pppplVar21 = pppplVar21 + (long)pppplVar26 * 4;
            } while (lVar20 < (long)ppppplVar24);
          }
          if ((long)ppppplVar24 < (long)param_5) {
            pppplVar26 = ppppplVar7[1];
            pppplVar21 = *ppppplVar7 + (long)pppplVar26 * ((long)ppppplVar10 >> 2) * 4;
            do {
              lVar22 = lVar22 + (long)param_7;
              pppplVar16 = pppplVar21;
              ppppplVar10 = param_4;
              if (0 < (long)param_4) {
                do {
                  ppppplVar14[lVar22] = (long ****)*pppplVar16;
                  lVar22 = lVar22 + 1;
                  ppppplVar10 = (long *****)((long)ppppplVar10 - 1);
                  pppplVar16 = pppplVar16 + 1;
                } while (ppppplVar10 != (long *****)0x0);
              }
              lVar22 = (long)param_6 + (lVar22 - ((long)param_4 + (long)param_7));
              ppppplVar24 = (long *****)((long)ppppplVar24 + 1);
              pppplVar21 = pppplVar21 + (long)pppplVar26;
            } while (ppppplVar24 != param_5);
          }
          return;
        }
        return;
      }
      ppppplVar25 = (long *****)(uVar11 * 8);
      if (uVar11 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        ppppplVar10 = (long *****)
                      ((long)ppppplVar10 + -((long)ppppplVar25 + 0x1eU & 0xfffffffffffffff0));
        pppplStack_1b8 = (long ****)ppppplVar10;
        pppplStack_f8 = (long ****)ppppplVar10;
        goto LAB_10990b550;
      }
      _malloc();
      pppplStack_1b8 = (long ****)ppppplVar25;
      pppplStack_f8 = (long ****)ppppplVar25;
      if (ppppplVar25 != (long *****)0x0) goto LAB_10990b550;
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10990bb50;
    }
  }
  else {
LAB_10990bb10:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10990bb50:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10990bb54);
  (*pcVar4)();
}



/* Entry: 10990bbc4; end: 10990bcf3;  */

void FUN_10990bbc4(undefined8 param_1,long param_2,long *param_3,long param_4,ulong param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = param_5 + 3;
  if (-1 < (long)param_5) {
    uVar1 = param_5;
  }
  uVar3 = uVar1 & 0xfffffffffffffffc;
  if ((long)param_5 < 4) {
    lVar4 = 0;
  }
  else {
    lVar6 = 0;
    lVar4 = 0;
    puVar7 = (undefined8 *)*param_3;
    lVar9 = param_3[1];
    do {
      lVar2 = param_7 * 4;
      if (0 < param_4) {
        puVar5 = (undefined8 *)(param_2 + param_7 * 0x20 + 0x10 + lVar4 * 8);
        puVar8 = puVar7;
        lVar10 = param_4;
        do {
          puVar5[-2] = *puVar8;
          puVar5[-1] = puVar8[lVar9];
          *puVar5 = puVar8[lVar9 * 2];
          puVar5[1] = puVar8[lVar9 * 3];
          puVar8 = puVar8 + 1;
          puVar5 = puVar5 + 4;
          lVar10 = lVar10 + -1;
          lVar2 = param_7 * 4 + param_4 * 4;
        } while (lVar10 != 0);
      }
      lVar4 = lVar2 + lVar4 + (param_6 - (param_4 + param_7)) * 4;
      lVar6 = lVar6 + 4;
      puVar7 = puVar7 + lVar9 * 4;
    } while (lVar6 < (long)uVar3);
  }
  if ((long)uVar3 < (long)param_5) {
    lVar6 = param_3[1];
    puVar7 = (undefined8 *)(*param_3 + lVar6 * ((long)uVar1 >> 2) * 0x20);
    do {
      lVar4 = lVar4 + param_7;
      puVar8 = puVar7;
      lVar9 = param_4;
      if (0 < param_4) {
        do {
          *(undefined8 *)(param_2 + lVar4 * 8) = *puVar8;
          lVar4 = lVar4 + 1;
          lVar9 = lVar9 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      lVar4 = (param_6 - (param_4 + param_7)) + lVar4;
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + lVar6;
    } while (uVar3 != param_5);
  }
  return;
}



/* Entry: 10990bcf4; end: 10990da3b;  */

long * FUN_10990bcf4(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  double *pdVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  double *pdVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  double *pdVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  double *pdVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  byte bVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  long *plVar37;
  undefined8 *puVar38;
  long *plVar39;
  ulong uVar40;
  double dVar41;
  double dVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  long *plStack_120;
  long *plStack_108;
  long *plStack_100;
  undefined1 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar37 = (long *)param_2[1];
  plVar16 = (long *)param_2[2];
  if ((((*(char *)((long)param_1 + 0x45) != '\x01') || ((long *)param_1[0xb] != plVar37)) ||
      ((long *)param_1[0xc] != plVar16)) || (*(int *)((long)param_1 + 0x4c) != 0x28)) {
    param_1[0xb] = (long)plVar37;
    param_1[0xc] = (long)plVar16;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined2 *)((long)param_1 + 0x44) = 0x100;
    *(undefined4 *)((long)param_1 + 0x4c) = 0x28;
    *(undefined4 *)((long)param_1 + 0x47) = 0x1000100;
    plVar21 = plVar16;
    if ((long)plVar37 <= (long)plVar16) {
      plVar21 = plVar37;
    }
    param_1[0xd] = (long)plVar21;
    plVar39 = plVar37;
    if ((long *)param_1[7] == plVar21) goto joined_r0x00010990bde4;
    _free(param_1[6]);
    if (0 < (long)plVar21) {
      if ((ulong)plVar21 >> 0x3d == 0) {
        lVar7 = (long)plVar21 << 3;
        _malloc();
        if (lVar7 != 0) goto LAB_10990bdd0;
      }
      goto LAB_10990c75c;
    }
    lVar7 = 0;
LAB_10990bdd0:
    plVar39 = (long *)param_1[0xb];
    param_1[6] = lVar7;
    param_1[7] = (long)plVar21;
    plVar21 = plVar39;
    if ((*(byte *)((long)param_1 + 0x47) & 1) == 0) {
      if ((char)param_1[9] == '\x01') {
        plVar21 = (long *)param_1[0xd];
        goto joined_r0x00010990bde4;
      }
      plVar21 = (long *)0x0;
    }
    else {
joined_r0x00010990bde4:
      if ((plVar39 != (long *)0x0) && (plVar21 != (long *)0x0)) {
        lVar7 = 0;
        if (plVar21 != (long *)0x0) {
          lVar7 = 0x7fffffffffffffff / (long)plVar21;
        }
        if (lVar7 < (long)plVar39) goto LAB_10990c75c;
      }
    }
    uVar40 = (long)plVar21 * (long)plVar39;
    if (param_1[2] * param_1[1] - uVar40 != 0) {
      _free(*param_1);
      if ((long)uVar40 < 1) {
        lVar7 = 0;
LAB_10990be5c:
        *param_1 = lVar7;
        goto LAB_10990be60;
      }
      if (uVar40 >> 0x3d == 0) {
        lVar7 = uVar40 * 8;
        _malloc();
        if (lVar7 != 0) goto LAB_10990be5c;
      }
      goto LAB_10990c75c;
    }
LAB_10990be60:
    param_1[1] = (long)plVar39;
    param_1[2] = (long)plVar21;
    lVar31 = param_1[0xc];
    lVar7 = lVar31;
    if ((*(byte *)((long)param_1 + 0x49) & 1) == 0) {
      if (*(char *)((long)param_1 + 0x4a) == '\x01') {
        lVar7 = param_1[0xd];
        goto LAB_10990be84;
      }
      lVar7 = 0;
    }
    else {
LAB_10990be84:
      if ((lVar31 != 0) && (lVar7 != 0)) {
        lVar22 = 0;
        if (lVar7 != 0) {
          lVar22 = 0x7fffffffffffffff / lVar7;
        }
        if (lVar22 < lVar31) goto LAB_10990c75c;
      }
    }
    uVar40 = lVar7 * lVar31;
    if (param_1[5] * param_1[4] - uVar40 != 0) {
      _free(param_1[3]);
      if ((long)uVar40 < 1) {
        lVar22 = 0;
LAB_10990bee4:
        param_1[3] = lVar22;
        goto LAB_10990bee8;
      }
      if (uVar40 >> 0x3d == 0) {
        lVar22 = uVar40 * 8;
        _malloc();
        if (lVar22 != 0) goto LAB_10990bee4;
      }
      goto LAB_10990c75c;
    }
LAB_10990bee8:
    param_1[4] = lVar31;
    param_1[5] = lVar7;
    lVar7 = param_1[0xd];
    if (lVar7 != 0) {
      lVar31 = 0;
      if (lVar7 != 0) {
        lVar31 = 0x7fffffffffffffff / lVar7;
      }
      if (lVar31 < lVar7) goto LAB_10990c75c;
    }
    uVar40 = lVar7 * lVar7;
    if (param_1[0x11] * param_1[0x10] - uVar40 != 0) {
      _free(param_1[0xf]);
      if (lVar7 == 0) {
        lVar31 = 0;
LAB_10990bf40:
        param_1[0xf] = lVar31;
        goto LAB_10990bf44;
      }
      if (uVar40 >> 0x3d == 0) {
        lVar31 = uVar40 * 8;
        _malloc();
        if (lVar31 != 0) goto LAB_10990bf40;
      }
      goto LAB_10990c75c;
    }
LAB_10990bf44:
    param_1[0x10] = lVar7;
    param_1[0x11] = lVar7;
    lVar7 = param_1[0xb];
    lVar31 = param_1[0xc];
    if (lVar7 < lVar31) {
      if ((lVar31 != param_1[0x13]) || (lVar7 != param_1[0x14])) {
        _free(param_1[0x1f]);
        _free(param_1[0x1d]);
        _free(param_1[0x1b]);
        _free(param_1[0x19]);
        _free(param_1[0x17]);
        _free(param_1[0x15]);
        _free(param_1[0x12]);
        FUN_10990db3c(param_1 + 0x12,param_1[0xc],param_1[0xb]);
      }
      if (*(char *)((long)param_1 + 0x49) == '\x01') {
        uVar40 = param_1[0xc];
LAB_10990bfd4:
        if (param_1[0x2a] == uVar40) {
LAB_10990c010:
          param_1[0x2a] = uVar40;
          goto LAB_10990c014;
        }
        _free(param_1[0x29]);
        if ((long)uVar40 < 1) {
          lVar7 = 0;
LAB_10990c00c:
          param_1[0x29] = lVar7;
          goto LAB_10990c010;
        }
        if (uVar40 >> 0x3d == 0) {
          lVar7 = uVar40 << 3;
          _malloc();
          if (lVar7 != 0) goto LAB_10990c00c;
        }
        goto LAB_10990c75c;
      }
      if (*(char *)((long)param_1 + 0x4a) == '\x01') {
        uVar40 = param_1[0xb];
        goto LAB_10990bfd4;
      }
LAB_10990c014:
      lVar22 = param_1[0xb];
      lVar28 = param_1[0xc];
      if ((lVar28 != 0) && (lVar22 != 0)) {
        lVar7 = 0;
        if (lVar22 != 0) {
          lVar7 = 0x7fffffffffffffff / lVar22;
        }
        if (lVar7 < lVar28) goto LAB_10990c75c;
      }
      uVar40 = lVar22 * lVar28;
      lVar7 = lVar22;
      lVar31 = lVar28;
      if (param_1[0x28] * param_1[0x27] - uVar40 == 0) {
LAB_10990c080:
        param_1[0x27] = lVar28;
        param_1[0x28] = lVar22;
        goto LAB_10990c084;
      }
      _free(param_1[0x26]);
      if ((long)uVar40 < 1) {
        lVar7 = 0;
LAB_10990c078:
        param_1[0x26] = lVar7;
        lVar7 = param_1[0xb];
        lVar31 = param_1[0xc];
        goto LAB_10990c080;
      }
      if (uVar40 >> 0x3d == 0) {
        lVar7 = uVar40 * 8;
        _malloc();
        if (lVar7 != 0) goto LAB_10990c078;
      }
      goto LAB_10990c75c;
    }
LAB_10990c084:
    if (lVar31 < lVar7) {
      if ((lVar7 != param_1[0x2c]) || (lVar31 != param_1[0x2d])) {
        _free(param_1[0x38]);
        _free(param_1[0x36]);
        _free(param_1[0x34]);
        _free(param_1[0x32]);
        _free(param_1[0x30]);
        _free(param_1[0x2e]);
        _free(param_1[0x2b]);
        FUN_10990db3c(param_1 + 0x2b,param_1[0xb],param_1[0xc]);
      }
      if (*(char *)((long)param_1 + 0x47) != '\x01') {
        if ((char)param_1[9] == '\x01') {
          uVar40 = param_1[0xc];
          goto LAB_10990c10c;
        }
LAB_10990c14c:
        lVar7 = param_1[0xb];
        lVar31 = param_1[0xc];
        goto LAB_10990c150;
      }
      uVar40 = param_1[0xb];
LAB_10990c10c:
      if (param_1[0x40] == uVar40) {
LAB_10990c148:
        param_1[0x40] = uVar40;
        goto LAB_10990c14c;
      }
      _free(param_1[0x3f]);
      if ((long)uVar40 < 1) {
        lVar7 = 0;
LAB_10990c144:
        param_1[0x3f] = lVar7;
        goto LAB_10990c148;
      }
      if (uVar40 >> 0x3d == 0) {
        lVar7 = uVar40 << 3;
        _malloc();
        if (lVar7 != 0) goto LAB_10990c144;
      }
      goto LAB_10990c75c;
    }
LAB_10990c150:
    if (lVar7 == lVar31) goto LAB_10990c1c0;
    if ((plVar37 != (long *)0x0) && (plVar16 != (long *)0x0)) {
      lVar7 = 0;
      if (plVar16 != (long *)0x0) {
        lVar7 = 0x7fffffffffffffff / (long)plVar16;
      }
      if (lVar7 < (long)plVar37) goto LAB_10990c75c;
    }
    uVar40 = (long)plVar16 * (long)plVar37;
    if (param_1[0x43] * param_1[0x42] - uVar40 == 0) {
LAB_10990c1b8:
      param_1[0x42] = (long)plVar37;
      param_1[0x43] = (long)plVar16;
      goto LAB_10990c1c0;
    }
    _free(param_1[0x41]);
    if ((long)uVar40 < 1) {
      lVar7 = 0;
LAB_10990c1b4:
      param_1[0x41] = lVar7;
      goto LAB_10990c1b8;
    }
    if (uVar40 >> 0x3d == 0) {
      lVar7 = uVar40 * 8;
      _malloc();
      if (lVar7 != 0) goto LAB_10990c1b4;
    }
    goto LAB_10990c75c;
  }
LAB_10990c1c0:
  pdVar20 = (double *)*param_2;
  plVar37 = (long *)param_2[2];
  uVar17 = (long)plVar37 * param_2[1];
  uVar40 = uVar17 + 3;
  if (-1 < (long)uVar17) {
    uVar40 = uVar17;
  }
  if (uVar17 + 1 < 3) {
    plVar21 = (long *)ABS(*pdVar20);
  }
  else {
    uVar36 = uVar17 - ((long)uVar17 >> 0x3f) & 0xfffffffffffffffe;
    auVar44._0_8_ = ABS(*pdVar20);
    auVar44._8_8_ = ABS(pdVar20[1]);
    if (3 < (long)uVar17) {
      uVar40 = uVar40 & 0xfffffffffffffffc;
      auVar45._0_8_ = ABS(pdVar20[2]);
      auVar45._8_8_ = ABS(pdVar20[3]);
      if (7 < uVar17) {
        pdVar24 = pdVar20 + 6;
        lVar7 = 4;
        do {
          auVar1._8_8_ = ABS(pdVar24[-1]);
          auVar1._0_8_ = ABS(pdVar24[-2]);
          auVar44 = NEON_fmax(auVar44,auVar1,8);
          auVar2._8_8_ = ABS(pdVar24[1]);
          auVar2._0_8_ = ABS(*pdVar24);
          auVar45 = NEON_fmax(auVar45,auVar2,8);
          lVar7 = lVar7 + 4;
          pdVar24 = pdVar24 + 4;
        } while (lVar7 < (long)uVar40);
      }
      auVar44 = NEON_fmax(auVar44,auVar45,8);
      if ((long)uVar40 < (long)uVar36) {
        auVar46._0_8_ = ABS(pdVar20[uVar40]);
        auVar46._8_8_ = ABS((pdVar20 + uVar40)[1]);
        auVar44 = NEON_fmax(auVar44,auVar46,8);
      }
    }
    plVar16 = auVar44._8_8_;
    plVar21 = auVar44._0_8_;
    bVar4 = true;
    if (((double)plVar16 <= (double)plVar21) && (bVar4 = true, !NAN((double)plVar16))) {
      bVar4 = false;
    }
    if (!bVar4) {
      plVar16 = plVar21;
    }
    if (!NAN((double)plVar21)) {
      plVar21 = plVar16;
    }
    lVar7 = (long)uVar17 % 2;
    if (lVar7 != 0 && lVar7 < 0 == SBORROW8(uVar17,uVar36)) {
      pdVar24 = pdVar20 + ((long)uVar17 / 2) * 2;
      do {
        plVar16 = (long *)ABS(*pdVar24);
        bVar4 = true;
        if (((double)plVar16 <= (double)plVar21) && (bVar4 = true, !NAN(*pdVar24))) {
          bVar4 = false;
        }
        if (!bVar4) {
          plVar16 = plVar21;
        }
        if (!NAN((double)plVar21)) {
          plVar21 = plVar16;
        }
        lVar7 = lVar7 + -1;
        pdVar24 = pdVar24 + 1;
      } while (lVar7 != 0);
    }
  }
  if (((ulong)plVar21 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    plStack_120 = (long *)0x3ff0000000000000;
    if ((double)plVar21 != 0.0) {
      plStack_120 = plVar21;
    }
    if (param_1[0xb] == param_1[0xc]) {
      param_2 = (long *)param_1[0xd];
      if ((long *)param_1[0x10] != param_2 || (long *)param_1[0x11] != param_2) {
        if (param_2 != (long *)0x0) {
          lVar7 = 0;
          if (param_2 != (long *)0x0) {
            lVar7 = 0x7fffffffffffffff / (long)param_2;
          }
          if (lVar7 < (long)param_2) goto LAB_10990c75c;
        }
        uVar40 = (long)param_2 * (long)param_2;
        if (param_1[0x11] * param_1[0x10] - uVar40 == 0) {
LAB_10990c40c:
          param_1[0x10] = (long)param_2;
          param_1[0x11] = (long)param_2;
          goto LAB_10990c410;
        }
        _free(param_1[0xf]);
        if (param_2 == (long *)0x0) {
          lVar7 = 0;
LAB_10990c408:
          param_1[0xf] = lVar7;
          goto LAB_10990c40c;
        }
        if (uVar40 >> 0x3d == 0) {
          lVar7 = uVar40 * 8;
          _malloc();
          if (lVar7 != 0) goto LAB_10990c408;
        }
        goto LAB_10990c75c;
      }
LAB_10990c410:
      if (0 < (long)param_2) {
        plVar21 = (long *)0x0;
        plVar16 = (long *)0x0;
        lVar31 = param_1[0xf];
        lVar7 = lVar31;
        pdVar24 = pdVar20;
        do {
          if (0 < (long)plVar21) {
            *(double *)(lVar31 + (long)plVar16 * (long)param_2 * 8) =
                 pdVar20[(long)plVar16 * (long)plVar37] / (double)plStack_120;
          }
          lVar22 = ((long)param_2 - (long)plVar21 & 0xfffffffffffffffeU) + (long)plVar21;
          if (1 < (long)param_2 - (long)plVar21) {
            plVar39 = plVar21;
            pdVar9 = (double *)(lVar7 + (long)plVar21 * 8);
            pdVar14 = pdVar24 + (long)plVar21;
            do {
              dVar41 = *pdVar14;
              pdVar9[1] = pdVar14[1] / (double)plStack_120;
              *pdVar9 = dVar41 / (double)plStack_120;
              plVar39 = (long *)((long)plVar39 + 2);
              pdVar9 = pdVar9 + 2;
              pdVar14 = pdVar14 + 2;
            } while ((long)plVar39 < lVar22);
          }
          for (; lVar22 < (long)param_2; lVar22 = lVar22 + 1) {
            *(double *)(lVar7 + lVar22 * 8) = pdVar24[lVar22] / (double)plStack_120;
          }
          uVar40 = (long)plVar21 + ((ulong)param_2 & 1);
          plVar23 = (long *)(uVar40 & 1);
          plVar39 = (long *)-(long)plVar23;
          if ((long)uVar40 < 0 == SCARRY8((long)plVar21,(ulong)param_2 & 1)) {
            plVar39 = plVar23;
          }
          plVar21 = param_2;
          if ((long)plVar39 <= (long)param_2) {
            plVar21 = plVar39;
          }
          plVar16 = (long *)((long)plVar16 + 1);
          pdVar24 = pdVar24 + (long)plVar37;
          lVar7 = lVar7 + (long)param_2 * 8;
        } while (plVar16 != param_2);
      }
      if (*(char *)((long)param_1 + 0x47) == '\x01') {
        param_2 = (long *)param_1[0xb];
        if (param_2 != (long *)0x0) {
          lVar7 = 0;
          if (param_2 != (long *)0x0) {
            lVar7 = 0x7fffffffffffffff / (long)param_2;
          }
          if (lVar7 < (long)param_2) goto LAB_10990c75c;
        }
        plVar37 = (long *)((long)param_2 * (long)param_2);
        lVar7 = *param_1;
        if (param_1[2] * param_1[1] - (long)plVar37 == 0) {
LAB_10990c548:
          param_1[1] = (long)param_2;
          param_1[2] = (long)param_2;
          if (0 < (long)param_2) {
            plVar16 = (long *)0x0;
            do {
              plVar21 = (long *)0x0;
              do {
                uVar43 = 0x3ff0000000000000;
                if (plVar16 != plVar21) {
                  uVar43 = 0;
                }
                *(undefined8 *)(lVar7 + (long)plVar21 * 8) = uVar43;
                plVar21 = (long *)((long)plVar21 + 1);
              } while (param_2 != plVar21);
              plVar16 = (long *)((long)plVar16 + 1);
              lVar7 = lVar7 + (long)param_2 * 8;
            } while (plVar16 != param_2);
          }
          goto LAB_10990c590;
        }
        _free();
        if (param_2 == (long *)0x0) {
          lVar7 = 0;
LAB_10990c544:
          *param_1 = lVar7;
          goto LAB_10990c548;
        }
        if ((ulong)plVar37 >> 0x3d == 0) {
          lVar7 = (long)plVar37 * 8;
          _malloc();
          if (lVar7 != 0) goto LAB_10990c544;
        }
        goto LAB_10990c75c;
      }
LAB_10990c590:
      if ((char)param_1[9] == '\x01') {
        param_2 = (long *)param_1[0xb];
        plVar37 = (long *)param_1[0xd];
        if ((param_2 != (long *)0x0) && (plVar37 != (long *)0x0)) {
          lVar7 = 0;
          if (plVar37 != (long *)0x0) {
            lVar7 = 0x7fffffffffffffff / (long)plVar37;
          }
          if (lVar7 < (long)param_2) goto LAB_10990c75c;
        }
        uVar40 = (long)plVar37 * (long)param_2;
        lVar7 = *param_1;
        if (param_1[2] * param_1[1] - uVar40 == 0) {
LAB_10990c600:
          param_1[1] = (long)param_2;
          param_1[2] = (long)plVar37;
          if (0 < (long)param_2) {
            plVar16 = (long *)0x0;
            do {
              if (0 < (long)plVar37) {
                plVar21 = (long *)0x0;
                do {
                  uVar43 = 0x3ff0000000000000;
                  if (plVar16 != plVar21) {
                    uVar43 = 0;
                  }
                  *(undefined8 *)(lVar7 + (long)plVar21 * 8) = uVar43;
                  plVar21 = (long *)((long)plVar21 + 1);
                } while (plVar37 != plVar21);
              }
              plVar16 = (long *)((long)plVar16 + 1);
              lVar7 = lVar7 + (long)plVar37 * 8;
            } while (plVar16 != param_2);
          }
          goto LAB_10990c650;
        }
        _free();
        if ((long)uVar40 < 1) {
          lVar7 = 0;
LAB_10990c5fc:
          *param_1 = lVar7;
          goto LAB_10990c600;
        }
        if (uVar40 >> 0x3d == 0) {
          lVar7 = uVar40 * 8;
          _malloc();
          if (lVar7 != 0) goto LAB_10990c5fc;
        }
        goto LAB_10990c75c;
      }
LAB_10990c650:
      if (*(char *)((long)param_1 + 0x49) == '\x01') {
        param_2 = (long *)param_1[0xc];
        if (param_2 != (long *)0x0) {
          lVar7 = 0;
          if (param_2 != (long *)0x0) {
            lVar7 = 0x7fffffffffffffff / (long)param_2;
          }
          if (lVar7 < (long)param_2) goto LAB_10990c75c;
        }
        plVar37 = (long *)((long)param_2 * (long)param_2);
        lVar7 = param_1[3];
        if (param_1[5] * param_1[4] - (long)plVar37 == 0) {
LAB_10990c6b4:
          param_1[4] = (long)param_2;
          param_1[5] = (long)param_2;
          if (0 < (long)param_2) {
            plVar37 = (long *)0x0;
            do {
              plVar16 = (long *)0x0;
              do {
                uVar43 = 0x3ff0000000000000;
                if (plVar37 != plVar16) {
                  uVar43 = 0;
                }
                *(undefined8 *)(lVar7 + (long)plVar16 * 8) = uVar43;
                plVar16 = (long *)((long)plVar16 + 1);
              } while (param_2 != plVar16);
              plVar37 = (long *)((long)plVar37 + 1);
              lVar7 = lVar7 + (long)param_2 * 8;
            } while (plVar37 != param_2);
          }
          goto LAB_10990c6fc;
        }
        _free();
        if (param_2 == (long *)0x0) {
          lVar7 = 0;
LAB_10990c6b0:
          param_1[3] = lVar7;
          goto LAB_10990c6b4;
        }
        if ((ulong)plVar37 >> 0x3d == 0) {
          lVar7 = (long)plVar37 * 8;
          _malloc();
          if (lVar7 != 0) goto LAB_10990c6b0;
        }
        goto LAB_10990c75c;
      }
LAB_10990c6fc:
      if (*(char *)((long)param_1 + 0x4a) == '\x01') {
        param_2 = (long *)param_1[0xc];
        plVar37 = (long *)param_1[0xd];
        if ((param_2 != (long *)0x0) && (plVar37 != (long *)0x0)) {
          lVar7 = 0;
          if (plVar37 != (long *)0x0) {
            lVar7 = 0x7fffffffffffffff / (long)plVar37;
          }
          if (lVar7 < (long)param_2) goto LAB_10990c75c;
        }
        uVar40 = (long)plVar37 * (long)param_2;
        lVar7 = param_1[3];
        if (param_1[5] * param_1[4] - uVar40 != 0) {
          _free();
          if ((long)uVar40 < 1) {
LAB_10990c77c:
            lVar7 = 0;
          }
          else {
            if (uVar40 >> 0x3d != 0) {
LAB_10990c75c:
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990c77c;
            }
            lVar7 = uVar40 * 8;
            _malloc();
            if (lVar7 == 0) goto LAB_10990c75c;
          }
          param_1[3] = lVar7;
        }
        param_1[4] = (long)param_2;
        param_1[5] = (long)plVar37;
        if (0 < (long)param_2) {
          plVar16 = (long *)0x0;
          do {
            if (0 < (long)plVar37) {
              plVar21 = (long *)0x0;
              do {
                uVar43 = 0x3ff0000000000000;
                if (plVar16 != plVar21) {
                  uVar43 = 0;
                }
                *(undefined8 *)(lVar7 + (long)plVar21 * 8) = uVar43;
                plVar21 = (long *)((long)plVar21 + 1);
              } while (plVar37 != plVar21);
            }
            plVar16 = (long *)((long)plVar16 + 1);
            lVar7 = lVar7 + (long)plVar37 * 8;
          } while (plVar16 != param_2);
        }
      }
LAB_10990d224:
      lVar31 = param_1[0x10];
      lVar22 = param_1[0x11];
      pdVar20 = (double *)param_1[0xf];
      dVar41 = ABS(*pdVar20);
      lVar7 = lVar22;
      if (lVar31 <= lVar22) {
        lVar7 = lVar31;
      }
      lVar28 = lVar7 + -1;
      dVar42 = dVar41;
      pdVar24 = pdVar20;
      if (lVar28 != 0 && 0 < lVar7) {
        do {
          dVar41 = ABS(pdVar24[lVar22 + 1]);
          if (dVar41 <= dVar42) {
            dVar41 = dVar42;
          }
          lVar28 = lVar28 + -1;
          dVar42 = dVar41;
          pdVar24 = pdVar24 + lVar22 + 1;
        } while (lVar28 != 0);
      }
      lVar7 = param_1[0xd];
      if (1 < lVar7) {
        bVar10 = 1;
        lVar28 = 1;
        do {
          lVar33 = 0;
          lVar34 = 0;
          pdVar24 = pdVar20 + lVar28 * lVar22;
          dVar42 = dVar41;
          do {
            dVar41 = dVar42 * 4.440892098500626e-16;
            if (dVar41 <= 2.2250738585072014e-308) {
              dVar41 = 2.2250738585072014e-308;
            }
            dVar47 = pdVar24[lVar34];
            dVar51 = ABS(dVar47);
            dVar53 = pdVar20[lVar28 + lVar34 * lVar22];
            dVar48 = ABS(dVar53);
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if (dVar51 <= dVar41) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(dVar48) && !NAN(dVar41)) {
                bVar4 = dVar48 < dVar41;
                bVar5 = dVar48 == dVar41;
                bVar6 = false;
              }
            }
            dVar41 = dVar42;
            if (!bVar5 && bVar4 == bVar6) {
              dVar41 = pdVar24[lVar28];
              pdVar9 = pdVar20 + lVar34 * lVar22;
              dVar48 = pdVar9[lVar34];
              if (2.2250738585072014e-308 <= ABS(dVar53 - dVar47)) {
                dVar49 = (dVar41 + dVar48) / (dVar53 - dVar47);
                dVar52 = SQRT(dVar49 * dVar49 + 1.0);
                dVar50 = 1.0 / dVar52;
                dVar49 = dVar49 / dVar52;
              }
              else {
                dVar49 = 1.0;
                dVar50 = 0.0;
              }
              if ((dVar49 != 1.0) || (dVar52 = dVar47, dVar50 != 0.0)) {
                dVar41 = dVar53 * dVar50 + dVar41 * dVar49;
                dVar52 = dVar48 * dVar50 + dVar47 * dVar49;
                dVar48 = dVar48 * dVar49 - dVar47 * dVar50;
                dVar51 = ABS(dVar52);
              }
              if (dVar51 + dVar51 < 2.2250738585072014e-308) {
                dVar41 = 1.0;
                dVar47 = 0.0;
              }
              else {
                dVar47 = (dVar41 - dVar48) / (dVar51 + dVar51);
                dVar41 = SQRT(dVar47 * dVar47 + 1.0);
                if (dVar47 <= 0.0) {
                  dVar41 = -dVar41;
                }
                dVar48 = 1.0 / (dVar47 + dVar41);
                dVar41 = 1.0 / SQRT(dVar48 * dVar48 + 1.0);
                dVar47 = -(dVar52 / dVar51);
                if (dVar48 <= 0.0) {
                  dVar47 = dVar52 / dVar51;
                }
                dVar47 = ABS(dVar48) * dVar47 * dVar41;
              }
              dVar51 = dVar50 * dVar47 + dVar41 * dVar49;
              dVar48 = dVar50 * dVar41 - dVar47 * dVar49;
              if ((0 < lVar22) &&
                 (lVar12 = lVar22, pdVar14 = pdVar24, pdVar15 = pdVar9,
                 dVar48 != 0.0 || dVar51 != 1.0)) {
                do {
                  dVar53 = *pdVar14;
                  dVar49 = *pdVar15;
                  *pdVar14 = dVar48 * dVar49 + dVar53 * dVar51;
                  *pdVar15 = dVar51 * dVar49 + dVar53 * -dVar48;
                  lVar12 = lVar12 + -1;
                  pdVar14 = pdVar14 + 1;
                  pdVar15 = pdVar15 + 1;
                } while (lVar12 != 0);
              }
              if ((((*(byte *)((long)param_1 + 0x47) & 1) != 0) || ((char)param_1[9] == '\x01')) &&
                 (lVar12 = param_1[1], 0 < lVar12 && (dVar48 != 0.0 || dVar51 != 1.0))) {
                lVar13 = param_1[2];
                lVar11 = *param_1;
                do {
                  dVar53 = *(double *)(lVar11 + lVar28 * 8);
                  dVar49 = *(double *)(lVar11 + lVar33);
                  *(double *)(lVar11 + lVar28 * 8) = dVar48 * dVar49 + dVar53 * dVar51;
                  *(double *)(lVar11 + lVar33) = dVar51 * dVar49 + dVar53 * -dVar48;
                  lVar11 = lVar11 + lVar13 * 8;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              if ((0 < lVar31) &&
                 (lVar12 = lVar31, pdVar14 = pdVar20, dVar47 != 0.0 || dVar41 != 1.0)) {
                do {
                  dVar48 = pdVar14[lVar28];
                  dVar51 = *(double *)((long)pdVar14 + lVar33);
                  pdVar14[lVar28] = dVar51 * -dVar47 + dVar48 * dVar41;
                  *(double *)((long)pdVar14 + lVar33) = dVar41 * dVar51 + dVar48 * dVar47;
                  lVar12 = lVar12 + -1;
                  pdVar14 = pdVar14 + lVar22;
                } while (lVar12 != 0);
              }
              if ((((*(byte *)((long)param_1 + 0x49) & 1) != 0) ||
                  (*(char *)((long)param_1 + 0x4a) == '\x01')) &&
                 (lVar12 = param_1[4], 0 < lVar12 && (dVar47 != 0.0 || dVar41 != 1.0))) {
                lVar13 = param_1[5];
                lVar11 = param_1[3];
                do {
                  dVar48 = *(double *)(lVar11 + lVar28 * 8);
                  dVar51 = *(double *)(lVar11 + lVar33);
                  *(double *)(lVar11 + lVar28 * 8) = dVar51 * -dVar47 + dVar48 * dVar41;
                  *(double *)(lVar11 + lVar33) = dVar41 * dVar51 + dVar48 * dVar47;
                  lVar11 = lVar11 + lVar13 * 8;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              bVar10 = 0;
              dVar41 = ABS(pdVar9[lVar34]);
              if (ABS(pdVar9[lVar34]) <= ABS(pdVar24[lVar28])) {
                dVar41 = ABS(pdVar24[lVar28]);
              }
              if (dVar41 <= dVar42) {
                dVar41 = dVar42;
              }
            }
            lVar34 = lVar34 + 1;
            lVar33 = lVar33 + 8;
            dVar42 = dVar41;
          } while (lVar34 != lVar28);
          bVar5 = lVar28 + 1 == lVar7;
          bVar4 = (bool)(bVar5 & bVar10);
          bVar10 = bVar5 | bVar10;
          lVar34 = 1;
          if (!bVar5) {
            lVar34 = lVar28 + 1;
          }
          lVar28 = lVar34;
        } while (!bVar4);
      }
      pdVar24 = (double *)param_1[6];
      if (0 < lVar7) {
        lVar28 = 0;
        lVar31 = 0;
        bVar10 = *(byte *)((long)param_1 + 0x47);
        do {
          dVar41 = pdVar20[lVar31 * lVar22 + lVar31];
          pdVar24[lVar31] = ABS(dVar41);
          if ((bVar10 & 1) == 0) {
            bVar32 = *(byte *)(param_1 + 9);
          }
          else {
            bVar32 = 1;
          }
          if (((dVar41 < 0.0) && ((bVar32 & 1) != 0)) && (lVar34 = param_1[1], 0 < lVar34)) {
            lVar33 = param_1[2];
            pdVar9 = (double *)(*param_1 + lVar28);
            do {
              *pdVar9 = -*pdVar9;
              pdVar9 = pdVar9 + lVar33;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
          lVar31 = lVar31 + 1;
          lVar28 = lVar28 + 8;
        } while (lVar31 != lVar7);
      }
      lVar7 = param_1[7];
      uVar40 = lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffe;
      if (1 < lVar7) {
        lVar31 = 0;
        pdVar20 = pdVar24;
        do {
          pdVar20[1] = pdVar20[1] * (double)plStack_120;
          *pdVar20 = *pdVar20 * (double)plStack_120;
          lVar31 = lVar31 + 2;
          pdVar20 = pdVar20 + 2;
        } while (lVar31 < (long)uVar40);
      }
      lVar31 = lVar7 % 2;
      if (lVar31 != 0 && lVar31 < 0 == SBORROW8(lVar7,uVar40)) {
        pdVar20 = pdVar24 + (lVar7 / 2) * 2;
        do {
          *pdVar20 = (double)plStack_120 * *pdVar20;
          lVar31 = lVar31 + -1;
          pdVar20 = pdVar20 + 1;
        } while (lVar31 != 0);
      }
      lVar7 = param_1[0xd];
      param_1[10] = lVar7;
      if (0 < lVar7) {
        lVar22 = 0;
        lVar31 = 0;
        lVar28 = param_1[6];
        lVar34 = param_1[7];
        lVar33 = -lVar7;
        do {
          lVar33 = lVar33 + 1;
          dVar41 = *(double *)(lVar28 + (lVar34 - (lVar7 - lVar31)) * 8);
          if (lVar7 - lVar31 < 2) {
            if (dVar41 == 0.0) goto LAB_10990d7d0;
          }
          else {
            lVar13 = 0;
            lVar12 = 1;
            lVar11 = lVar33;
            dVar42 = dVar41;
            do {
              dVar47 = *(double *)(lVar28 + lVar34 * 8 + lVar11 * 8);
              dVar48 = dVar47;
              lVar35 = lVar12;
              if (dVar47 <= dVar42) {
                dVar47 = dVar42;
                dVar48 = dVar41;
                lVar35 = lVar13;
              }
              lVar13 = lVar35;
              dVar41 = dVar48;
              lVar12 = lVar12 + 1;
              bVar4 = lVar11 != -1;
              lVar11 = lVar11 + 1;
              dVar42 = dVar47;
            } while (bVar4);
            if (dVar41 == 0.0) {
LAB_10990d7d0:
              param_1[10] = lVar31;
              break;
            }
            if (lVar13 != 0) {
              uVar43 = *(undefined8 *)(lVar28 + lVar31 * 8);
              *(undefined8 *)(lVar28 + lVar31 * 8) = *(undefined8 *)(lVar28 + (lVar13 + lVar31) * 8)
              ;
              *(undefined8 *)(lVar28 + (lVar13 + lVar31) * 8) = uVar43;
              if ((((*(byte *)((long)param_1 + 0x47) & 1) != 0) || ((char)param_1[9] == '\x01')) &&
                 (lVar12 = param_1[1], 0 < lVar12)) {
                lVar11 = param_1[2];
                puVar38 = (undefined8 *)(*param_1 + lVar22);
                puVar18 = (undefined8 *)(*param_1 + (lVar31 + lVar13) * 8);
                do {
                  uVar43 = *puVar18;
                  *puVar18 = *puVar38;
                  *puVar38 = uVar43;
                  puVar38 = puVar38 + lVar11;
                  puVar18 = puVar18 + lVar11;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              if ((((*(byte *)((long)param_1 + 0x49) & 1) != 0) ||
                  (*(char *)((long)param_1 + 0x4a) == '\x01')) && (lVar12 = param_1[4], 0 < lVar12))
              {
                lVar35 = param_1[3];
                lVar8 = param_1[5];
                lVar11 = lVar22 + lVar13 * 8;
                do {
                  uVar43 = *(undefined8 *)(lVar35 + lVar11);
                  *(undefined8 *)(lVar35 + lVar11) = *(undefined8 *)(lVar35 + lVar22);
                  *(undefined8 *)(lVar35 + lVar22) = uVar43;
                  lVar35 = lVar35 + lVar8 * 8;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
            }
          }
          lVar31 = lVar31 + 1;
          lVar22 = lVar22 + 8;
        } while (lVar31 != lVar7);
      }
      *(undefined1 *)((long)param_1 + 0x44) = 1;
      goto LAB_10990d7dc;
    }
    plStack_a8 = param_2;
    plStack_a0 = (long *)param_2[1];
    plStack_98 = plVar37;
    plStack_90 = plStack_120;
    FUN_10990de80(param_1 + 0x41,&plStack_a8,&lStack_e0);
    lVar7 = param_1[0x43];
    lVar31 = param_1[0x42];
    if (lVar7 <= lVar31) {
LAB_10990cf70:
      if (param_1[0x43] < param_1[0x42]) {
        plVar37 = param_1 + 0x2b;
        FUN_109909364(plVar37,param_1 + 0x41,&plStack_a8);
        FUN_10990e27c(plVar37);
        lVar7 = param_1[0x43];
        puVar38 = (undefined8 *)*plVar37;
        if (lVar7 != 0) {
          lVar31 = 0;
          if (lVar7 != 0) {
            lVar31 = 0x7fffffffffffffff / lVar7;
          }
          if (lVar31 < lVar7) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10990da34;
          }
        }
        uVar40 = lVar7 * lVar7;
        puVar18 = (undefined8 *)param_1[0xf];
        if (param_1[0x11] * param_1[0x10] - uVar40 != 0) {
          _free();
          if (lVar7 == 0) {
            puVar18 = (undefined8 *)0x0;
          }
          else {
            if (uVar40 >> 0x3d != 0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990da34;
            }
            puVar18 = (undefined8 *)(uVar40 * 8);
            _malloc();
            if (puVar18 == (undefined8 *)0x0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990da34;
            }
          }
          param_1[0xf] = (long)puVar18;
        }
        param_1[0x10] = lVar7;
        param_1[0x11] = lVar7;
        plVar16 = (long *)param_1[0x2d];
        if (0 < lVar7) {
          lVar31 = 0;
          puVar25 = puVar18;
          puVar29 = puVar38;
          puVar30 = puVar38;
          puVar27 = puVar18;
          lVar22 = lVar31;
          do {
            for (; lVar31 != 0; lVar31 = lVar31 + -1) {
              *puVar25 = *puVar29;
              puVar25 = puVar25 + lVar7;
              puVar29 = puVar29 + (long)plVar16;
            }
            lVar31 = lVar22;
            if (lVar22 < lVar7) {
              lVar31 = lVar22 + 1;
              puVar18[lVar22 * lVar7 + lVar22] = puVar38[lVar22 + lVar22 * (long)plVar16];
            }
            lVar28 = lVar7 - lVar31;
            if (lVar28 != 0 && lVar31 <= lVar7) {
              lVar31 = lVar7 * 8 * lVar31;
              do {
                *(undefined8 *)((long)puVar27 + lVar31) = 0;
                lVar31 = lVar31 + lVar7 * 8;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
            }
            lVar31 = lVar22 + 1;
            puVar29 = puVar30 + 1;
            puVar25 = puVar27 + 1;
            puVar30 = puVar29;
            puVar27 = puVar25;
            lVar22 = lVar31;
          } while (lVar31 != lVar7);
        }
        if (*(char *)((long)param_1 + 0x47) == '\x01') {
          plStack_a0 = param_1 + 0x2e;
          plStack_98 = (long *)((ulong)plStack_98 & 0xffffffffffffff00);
          plStack_90 = plVar16;
          if (param_1[0x2c] <= (long)plVar16) {
            plStack_90 = (long *)param_1[0x2c];
          }
          lStack_88 = 0;
          plStack_a8 = plVar37;
          FUN_109913218(&plStack_a8,param_1,param_1 + 0x3f);
        }
        else if ((char)param_1[9] == '\x01') {
          lVar7 = param_1[0x42];
          lVar31 = param_1[0x43];
          if ((lVar7 != 0) && (lVar31 != 0)) {
            lVar22 = 0;
            if (lVar31 != 0) {
              lVar22 = 0x7fffffffffffffff / lVar31;
            }
            if (lVar22 < lVar7) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990da34;
            }
          }
          uVar40 = lVar31 * lVar7;
          lVar22 = *param_1;
          if (param_1[2] * param_1[1] - uVar40 != 0) {
            _free();
            if ((long)uVar40 < 1) {
              lVar22 = 0;
            }
            else {
              if (uVar40 >> 0x3d != 0) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10990da34;
              }
              lVar22 = uVar40 * 8;
              _malloc();
              if (lVar22 == 0) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10990da34;
              }
            }
            *param_1 = lVar22;
          }
          param_1[1] = lVar7;
          param_1[2] = lVar31;
          if (0 < lVar7) {
            lVar28 = 0;
            do {
              if (0 < lVar31) {
                lVar34 = 0;
                do {
                  uVar43 = 0x3ff0000000000000;
                  if (lVar28 != lVar34) {
                    uVar43 = 0;
                  }
                  *(undefined8 *)(lVar22 + lVar34 * 8) = uVar43;
                  lVar34 = lVar34 + 1;
                } while (lVar31 != lVar34);
              }
              lVar28 = lVar28 + 1;
              lVar22 = lVar22 + lVar31 * 8;
            } while (lVar28 != lVar7);
          }
          plStack_a0 = param_1 + 0x2e;
          plStack_98 = (long *)((ulong)plStack_98 & 0xffffffffffffff00);
          plStack_90 = (long *)param_1[0x2d];
          if (param_1[0x2c] <= param_1[0x2d]) {
            plStack_90 = (long *)param_1[0x2c];
          }
          lStack_88 = 0;
          plStack_a8 = plVar37;
          FUN_109913820(&plStack_a8,param_1,param_1 + 0x3f,0);
        }
        if (((*(byte *)((long)param_1 + 0x49) & 1) != 0) ||
           ((*(byte *)((long)param_1 + 0x4a) & 1) != 0)) {
          FUN_1099130ac(param_1 + 3,param_1 + 0x30);
        }
      }
      goto LAB_10990d224;
    }
    puVar38 = (undefined8 *)param_1[0x41];
    if ((param_1[0x27] != lVar7) || (param_1[0x28] != lVar31)) {
      if ((lVar7 != 0) && (lVar31 != 0)) {
        lVar22 = 0;
        if (lVar31 != 0) {
          lVar22 = 0x7fffffffffffffff / lVar31;
        }
        if (lVar22 < lVar7) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10990da34;
        }
      }
      uVar40 = lVar31 * lVar7;
      if (param_1[0x28] * param_1[0x27] - uVar40 != 0) {
        _free(param_1[0x26]);
        if ((long)uVar40 < 1) {
          lVar22 = 0;
        }
        else {
          if (uVar40 >> 0x3d != 0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10990da34;
          }
          lVar22 = uVar40 * 8;
          _malloc();
          if (lVar22 == 0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10990da34;
          }
        }
        param_1[0x26] = lVar22;
      }
      param_1[0x27] = lVar7;
      param_1[0x28] = lVar31;
    }
    plVar37 = param_1 + 0x12;
    if (0 < lVar7) {
      lVar22 = 0;
      puVar18 = (undefined8 *)param_1[0x26];
      do {
        puVar25 = puVar18;
        puVar29 = puVar38;
        lVar28 = lVar31;
        if (0 < lVar31) {
          do {
            *puVar25 = *puVar29;
            puVar29 = puVar29 + lVar7;
            lVar28 = lVar28 + -1;
            puVar25 = puVar25 + 1;
          } while (lVar28 != 0);
        }
        lVar22 = lVar22 + 1;
        puVar38 = puVar38 + 1;
        puVar18 = puVar18 + lVar31;
      } while (lVar22 != lVar7);
    }
    FUN_109909364(plVar37,param_1 + 0x26,&plStack_a8);
    FUN_10990e27c(plVar37);
    lVar7 = param_1[0x42];
    lVar31 = param_1[0x12];
    if (lVar7 == 0) {
LAB_10990c874:
      uVar40 = lVar7 * lVar7;
      puVar38 = (undefined8 *)param_1[0xf];
      if (param_1[0x11] * param_1[0x10] - uVar40 != 0) {
        _free();
        if (lVar7 == 0) {
          puVar38 = (undefined8 *)0x0;
        }
        else {
          if (uVar40 >> 0x3d != 0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10990da34;
          }
          puVar38 = (undefined8 *)(uVar40 * 8);
          _malloc();
          if (puVar38 == (undefined8 *)0x0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10990da34;
          }
        }
        param_1[0xf] = (long)puVar38;
      }
      param_1[0x10] = lVar7;
      param_1[0x11] = lVar7;
      uVar40 = param_1[0x14];
      if (0 < lVar7) {
        lVar22 = 0;
        puVar18 = puVar38;
        puVar29 = puVar38;
        lVar28 = lVar31;
        lVar34 = lVar22;
        do {
          for (; lVar22 != 0; lVar22 = lVar22 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + lVar7;
          }
          lVar22 = lVar34;
          if (lVar34 < lVar7) {
            lVar22 = lVar34 + 1;
            puVar38[lVar34 * lVar7 + lVar34] =
                 *(undefined8 *)(lVar31 + lVar34 * 8 + lVar34 * uVar40 * 8);
          }
          lVar33 = lVar7 - lVar22;
          if (lVar33 != 0 && lVar22 <= lVar7) {
            lVar12 = lVar7 * 8 * lVar22;
            puVar18 = (undefined8 *)(lVar28 + lVar22 * 8);
            do {
              *(undefined8 *)((long)puVar29 + lVar12) = *puVar18;
              lVar12 = lVar12 + lVar7 * 8;
              lVar33 = lVar33 + -1;
              puVar18 = puVar18 + 1;
            } while (lVar33 != 0);
          }
          lVar22 = lVar34 + 1;
          puVar18 = puVar29 + 1;
          lVar28 = lVar28 + uVar40 * 8;
          puVar29 = puVar18;
          lVar34 = lVar22;
        } while (lVar22 != lVar7);
      }
      if (*(char *)((long)param_1 + 0x49) == '\x01') {
        plStack_100 = param_1 + 0x15;
        uStack_f8 = 0;
        uVar36 = param_1[0x13];
        uVar17 = uVar40;
        if ((long)uVar36 <= (long)uVar40) {
          uVar17 = uVar36;
        }
        uStack_e8 = 0;
        plStack_108 = plVar37;
        uStack_f0 = uVar17;
        if (param_1[0x2a] != uVar36) {
          _free(param_1[0x29]);
          if ((long)uVar36 < 1) {
            lVar7 = 0;
          }
          else {
            if (uVar36 >> 0x3d != 0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990da34;
            }
            lVar7 = uVar36 << 3;
            _malloc();
            if (lVar7 == 0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990da34;
            }
          }
          param_1[0x29] = lVar7;
          uVar40 = param_1[0x14];
        }
        plVar16 = param_1 + 3;
        param_1[0x2a] = uVar36;
        puVar38 = (undefined8 *)param_1[3];
        uVar36 = param_1[5];
        if ((puVar38 == (undefined8 *)param_1[0x12]) && (uVar36 == uVar40)) {
          uVar19 = param_1[4];
          uVar36 = uVar40;
          if ((long)uVar19 <= (long)uVar40) {
            uVar36 = uVar19;
          }
          puVar18 = puVar38;
          if (0 < (long)uVar36) {
            do {
              *puVar18 = 0x3ff0000000000000;
              uVar36 = uVar36 - 1;
              puVar18 = puVar18 + uVar40 + 1;
            } while (uVar36 != 0);
          }
          if (0 < (long)uVar40) {
            uVar36 = 0;
            do {
              uVar26 = uVar19;
              if ((long)uVar36 <= (long)uVar19) {
                uVar26 = uVar36;
              }
              puVar18 = puVar38;
              if (0 < (long)uVar26) {
                do {
                  *puVar18 = 0;
                  uVar26 = uVar26 - 1;
                  puVar18 = puVar18 + uVar40;
                } while (uVar26 != 0);
              }
              uVar36 = uVar36 + 1;
              puVar38 = puVar38 + 1;
            } while (uVar36 != uVar40);
          }
          lVar7 = param_1[0x13];
          if (0 < (long)uVar17) {
            lVar31 = -uVar17;
            lVar22 = uVar17 * 8;
            uVar40 = uVar17;
            do {
              lVar22 = lVar22 + -8;
              uVar36 = uVar40 - 1;
              lStack_d8 = lVar7 - uVar40;
              plStack_a0 = (long *)(lStack_d8 + 1);
              lStack_88 = param_1[4] - (long)plStack_a0;
              lStack_78 = param_1[5];
              lStack_80 = lStack_78 - (long)plStack_a0;
              plStack_a8 = (long *)(param_1[3] + lStack_80 * 8 + lStack_78 * lStack_88 * 8);
              lStack_e0 = param_1[0x12] + uVar36 * 8 + param_1[0x14] * uVar40 * 8;
              uStack_b0 = 1;
              plStack_c8 = plVar37;
              uStack_c0 = uVar40;
              uStack_b8 = uVar36;
              plStack_98 = plStack_a0;
              plStack_90 = plVar16;
              FUN_10990f3d4(&plStack_a8,&lStack_e0,param_1[0x15] + uVar36 * 8,param_1[0x29]);
              lVar7 = param_1[0x13];
              if (0 < (long)(lVar7 - uVar40)) {
                lVar34 = param_1[5];
                lVar28 = lVar7 + lVar31;
                puVar38 = (undefined8 *)
                          (param_1[3] + lVar22 + lVar34 * 8 * ((param_1[4] + uVar40) - lVar7));
                do {
                  *puVar38 = 0;
                  puVar38 = puVar38 + lVar34;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
              }
              lVar31 = lVar31 + 1;
              bVar4 = 1 < uVar40;
              uVar40 = uVar36;
            } while (bVar4);
          }
          if (0 < (long)(lVar7 - uVar17)) {
            uVar40 = 0;
            lVar22 = param_1[5];
            puVar38 = (undefined8 *)(param_1[3] + (lVar22 + lVar22 * (param_1[4] - lVar7)) * 8);
            lVar31 = lVar7;
            do {
              lVar31 = lVar31 + -1;
              puVar18 = puVar38;
              lVar28 = lVar31;
              if (0 < (long)(lVar7 + ~uVar40)) {
                do {
                  *puVar18 = 0;
                  lVar28 = lVar28 + -1;
                  puVar18 = puVar18 + lVar22;
                } while (lVar28 != 0);
              }
              uVar40 = uVar40 + 1;
              puVar38 = puVar38 + lVar22 + 1;
            } while (uVar40 != lVar7 - uVar17);
          }
        }
        else {
          lVar7 = param_1[0x13];
          if ((long)uVar17 < 0x31) {
            if (lVar7 != 0) {
              lVar31 = 0;
              if (lVar7 != 0) {
                lVar31 = 0x7fffffffffffffff / lVar7;
              }
              if (lVar31 < lVar7) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10990da34;
              }
            }
            uVar40 = lVar7 * lVar7;
            if (param_1[4] * uVar36 - uVar40 != 0) {
              _free();
              if (lVar7 == 0) {
                puVar38 = (undefined8 *)0x0;
              }
              else {
                if (uVar40 >> 0x3d != 0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_10990da34;
                }
                puVar38 = (undefined8 *)(uVar40 * 8);
                _malloc();
                if (puVar38 == (undefined8 *)0x0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_10990da34;
                }
              }
              *plVar16 = (long)puVar38;
            }
            param_1[4] = lVar7;
            param_1[5] = lVar7;
            if (0 < lVar7) {
              lVar31 = 0;
              do {
                lVar22 = 0;
                do {
                  uVar43 = 0x3ff0000000000000;
                  if (lVar31 != lVar22) {
                    uVar43 = 0;
                  }
                  puVar38[lVar22] = uVar43;
                  lVar22 = lVar22 + 1;
                } while (lVar7 != lVar22);
                lVar31 = lVar31 + 1;
                puVar38 = puVar38 + lVar7;
              } while (lVar31 != lVar7);
            }
            if (0 < (long)uVar17) {
              lVar7 = -uVar17;
              lVar22 = uVar17 * 8;
              lVar31 = lVar22;
              do {
                uVar40 = uVar17 - 1;
                lVar31 = lVar31 + -8;
                lVar28 = param_1[0x13];
                lStack_d8 = lVar7 + lVar28;
                lStack_88 = uVar40 + (param_1[4] - lVar28);
                lStack_78 = param_1[5];
                lStack_80 = uVar40 + (lStack_78 - lVar28);
                plStack_a8 = (long *)(param_1[3] + lStack_80 * 8 + lStack_78 * lStack_88 * 8);
                plStack_a0 = (long *)(lStack_d8 + 1);
                lStack_e0 = param_1[0x12] + param_1[0x14] * lVar22 + lVar31;
                uStack_b0 = 1;
                plStack_c8 = plVar37;
                uStack_c0 = uVar17;
                uStack_b8 = uVar40;
                plStack_98 = plStack_a0;
                plStack_90 = plVar16;
                FUN_10990f3d4(&plStack_a8,&lStack_e0,param_1[0x15] + lVar31,param_1[0x29]);
                lVar7 = lVar7 + 1;
                lVar22 = lVar22 + -8;
                bVar4 = 1 < uVar17;
                uVar17 = uVar40;
              } while (bVar4);
            }
          }
          else {
            if (lVar7 != 0) {
              lVar31 = 0;
              if (lVar7 != 0) {
                lVar31 = 0x7fffffffffffffff / lVar7;
              }
              if (lVar31 < lVar7) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10990da34;
              }
            }
            uVar40 = lVar7 * lVar7;
            if (param_1[4] * uVar36 - uVar40 != 0) {
              _free();
              if (lVar7 == 0) {
                puVar38 = (undefined8 *)0x0;
              }
              else {
                if (uVar40 >> 0x3d != 0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_10990da34;
                }
                puVar38 = (undefined8 *)(uVar40 * 8);
                _malloc();
                if (puVar38 == (undefined8 *)0x0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_10990da34;
                }
              }
              *plVar16 = (long)puVar38;
            }
            param_1[4] = lVar7;
            param_1[5] = lVar7;
            if (0 < lVar7) {
              lVar31 = 0;
              do {
                lVar22 = 0;
                do {
                  uVar43 = 0x3ff0000000000000;
                  if (lVar31 != lVar22) {
                    uVar43 = 0;
                  }
                  puVar38[lVar22] = uVar43;
                  lVar22 = lVar22 + 1;
                } while (lVar7 != lVar22);
                lVar31 = lVar31 + 1;
                puVar38 = puVar38 + lVar7;
              } while (lVar31 != lVar7);
            }
            FUN_10990dfc4(&plStack_108,plVar16,param_1 + 0x29,1);
          }
        }
      }
      else if (*(char *)((long)param_1 + 0x4a) == '\x01') {
        lVar7 = param_1[0x43];
        lVar31 = param_1[0x42];
        if ((lVar7 != 0) && (lVar31 != 0)) {
          lVar22 = 0;
          if (lVar31 != 0) {
            lVar22 = 0x7fffffffffffffff / lVar31;
          }
          if (lVar22 < lVar7) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10990da34;
          }
        }
        uVar40 = lVar31 * lVar7;
        lVar22 = param_1[3];
        if (param_1[5] * param_1[4] - uVar40 != 0) {
          _free();
          if ((long)uVar40 < 1) {
            lVar22 = 0;
          }
          else {
            if (uVar40 >> 0x3d != 0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990da34;
            }
            lVar22 = uVar40 * 8;
            _malloc();
            if (lVar22 == 0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10990da34;
            }
          }
          param_1[3] = lVar22;
        }
        param_1[4] = lVar7;
        param_1[5] = lVar31;
        if (0 < lVar7) {
          lVar28 = 0;
          do {
            if (0 < lVar31) {
              lVar34 = 0;
              do {
                uVar43 = 0x3ff0000000000000;
                if (lVar28 != lVar34) {
                  uVar43 = 0;
                }
                *(undefined8 *)(lVar22 + lVar34 * 8) = uVar43;
                lVar34 = lVar34 + 1;
              } while (lVar31 != lVar34);
            }
            lVar28 = lVar28 + 1;
            lVar22 = lVar22 + lVar31 * 8;
          } while (lVar28 != lVar7);
        }
        plStack_a0 = param_1 + 0x15;
        plStack_98 = (long *)((ulong)plStack_98 & 0xffffffffffffff00);
        plStack_90 = (long *)param_1[0x14];
        if (param_1[0x13] <= param_1[0x14]) {
          plStack_90 = (long *)param_1[0x13];
        }
        lStack_88 = 0;
        plStack_a8 = plVar37;
        FUN_10990dfc4(&plStack_a8,param_1 + 3,param_1 + 0x29,0);
      }
      if (((*(byte *)((long)param_1 + 0x47) & 1) != 0) || ((*(byte *)(param_1 + 9) & 1) != 0)) {
        FUN_1099130ac(param_1,param_1 + 0x17);
      }
      goto LAB_10990cf70;
    }
    lVar22 = 0;
    if (lVar7 != 0) {
      lVar22 = 0x7fffffffffffffff / lVar7;
    }
    if (lVar7 <= lVar22) goto LAB_10990c874;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x44) = 1;
    *(undefined4 *)(param_1 + 8) = 3;
LAB_10990d7dc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10990da34:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10990da38);
  (*pcVar3)();
}



/* Entry: 10990da3c; end: 10990db3b;  */

undefined8 * FUN_10990da3c(undefined8 *param_1)

{
  _free(param_1[0x14]);
  _free(param_1[0xd]);
  _free(param_1[0xb]);
  _free(param_1[9]);
  _free(param_1[7]);
  _free(param_1[5]);
  _free(param_1[3]);
  _free(*param_1);
  return param_1;
}



/* Entry: 10990db3c; end: 10990de7f;  */

long * FUN_10990db3c(long *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar2 = 0;
    if (param_3 != 0) {
      lVar2 = 0x7fffffffffffffff / (long)param_3;
    }
    if ((long)param_2 <= lVar2) goto LAB_10990db84;
    goto LAB_10990dba8;
  }
LAB_10990db84:
  uVar4 = param_3 * param_2;
  if (uVar4 != 0) {
    if (0 < (long)uVar4) {
      if (uVar4 >> 0x3d == 0) {
        lVar2 = uVar4 * 8;
        _malloc();
        if (lVar2 != 0) goto LAB_10990dbd0;
      }
LAB_10990dba8:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10990de08;
    }
    lVar2 = 0;
LAB_10990dbd0:
    *param_1 = lVar2;
  }
  param_1[3] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[4] = 0;
  uVar4 = param_3;
  if ((long)param_2 <= (long)param_3) {
    uVar4 = param_2;
  }
  if (uVar4 != 0) {
    if (0 < (long)uVar4) {
      if (uVar4 >> 0x3d == 0) {
        lVar2 = uVar4 << 3;
        _malloc();
        if (lVar2 != 0) goto LAB_10990dc34;
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10990de08;
    }
    lVar2 = 0;
LAB_10990dc34:
    param_1[3] = lVar2;
  }
  param_1[5] = 0;
  param_1[4] = uVar4;
  param_1[6] = 0;
  if ((param_3 & 0xffffffff) != 0) {
    if ((long)(int)param_3 < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = (param_3 & 0xffffffff) << 2;
      _malloc();
      if (lVar2 == 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10990de08;
      }
    }
    param_1[5] = lVar2;
  }
  param_1[7] = 0;
  param_1[6] = (long)(int)param_3;
  param_1[8] = 0;
  if (param_3 == 0) {
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    goto LAB_10990dd78;
  }
  if (0 < (long)param_3) {
    if (param_3 >> 0x3d == 0) {
      lVar2 = param_3 << 3;
      lVar3 = lVar2;
      _malloc();
      if (lVar3 != 0) {
        param_1[9] = 0;
        param_1[7] = lVar3;
        param_1[8] = param_3;
        param_1[10] = 0;
        lVar3 = lVar2;
        _malloc();
        if (lVar3 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10990de08;
        }
        param_1[0xb] = 0;
        param_1[9] = lVar3;
        param_1[10] = param_3;
        param_1[0xc] = 0;
        lVar3 = lVar2;
        _malloc();
        if (lVar3 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10990de08;
        }
        param_1[0xd] = 0;
        param_1[0xb] = lVar3;
        param_1[0xc] = param_3;
        param_1[0xe] = 0;
        _malloc();
        if (lVar2 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10990de08;
        }
        goto LAB_10990dd74;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10990de08:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10990de0c);
    (*pcVar1)();
  }
  lVar2 = 0;
  param_1[0xd] = 0;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = param_3;
  param_1[0xb] = 0;
  param_1[0xc] = param_3;
  param_1[0xe] = 0;
LAB_10990dd74:
  param_1[0xd] = lVar2;
LAB_10990dd78:
  param_1[0xe] = param_3;
  *(undefined2 *)(param_1 + 0xf) = 0;
  return param_1;
}



/* Entry: 10990de80; end: 10990dfc3;  */

void FUN_10990de80(long *param_1,undefined8 *param_2)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  lVar3 = param_2[1];
  pdVar6 = *(double **)*param_2;
  dVar9 = (double)param_2[3];
  lVar8 = param_2[2];
  dVar10 = dVar9;
  if (param_1[1] == lVar3 && param_1[2] == lVar8) goto LAB_10990df48;
  if (lVar3 != 0 && lVar8 != 0) {
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar8;
    }
    if (lVar3 <= lVar1) goto LAB_10990ded8;
    goto LAB_10990df10;
  }
LAB_10990ded8:
  uVar7 = lVar8 * lVar3;
  if (param_1[2] * param_1[1] - uVar7 != 0) {
    _free(*param_1);
    if (0 < (long)uVar7) {
      if (uVar7 >> 0x3d == 0) {
        lVar1 = uVar7 * 8;
        _malloc();
        if (lVar1 != 0) goto LAB_10990df3c;
      }
LAB_10990df10:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10990df48;
    }
    lVar1 = 0;
LAB_10990df3c:
    *param_1 = lVar1;
  }
  param_1[1] = lVar3;
  param_1[2] = lVar8;
  dVar10 = dVar9;
LAB_10990df48:
  lVar8 = lVar8 * lVar3;
  pdVar2 = (double *)*param_1;
  uVar7 = lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar8) {
    lVar3 = 0;
    pdVar4 = pdVar2;
    pdVar5 = pdVar6;
    do {
      dVar9 = *pdVar5;
      pdVar4[1] = pdVar5[1] / dVar10;
      *pdVar4 = dVar9 / dVar10;
      lVar3 = lVar3 + 2;
      pdVar4 = pdVar4 + 2;
      pdVar5 = pdVar5 + 2;
    } while (lVar3 < (long)uVar7);
  }
  lVar3 = lVar8 % 2;
  if (lVar3 != 0 && lVar3 < 0 == SBORROW8(lVar8,uVar7)) {
    pdVar2 = pdVar2 + (lVar8 / 2) * 2;
    pdVar6 = pdVar6 + (lVar8 / 2) * 2;
    do {
      *pdVar2 = *pdVar6 / dVar10;
      lVar3 = lVar3 + -1;
      pdVar2 = pdVar2 + 1;
      pdVar6 = pdVar6 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10990dfc4; end: 10990e27b;  */

void FUN_10990dfc4(ulong *param_1,ulong *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  bool bVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  ulong *puVar15;
  double *pdVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  double *pdVar20;
  ulong uVar21;
  ulong extraout_x9;
  double dVar22;
  ulong uVar23;
  undefined4 *puVar24;
  double *pdVar25;
  double *pdVar26;
  double dVar27;
  undefined4 *puVar28;
  ulong uVar29;
  double dVar30;
  undefined1 (*pauVar31) [16];
  ulong uVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  byte bVar36;
  long lVar37;
  double dVar38;
  ulong unaff_x24;
  long lVar39;
  long unaff_x26;
  long unaff_x27;
  double unaff_x28;
  double dVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double *pdStack_2f0;
  undefined8 uStack_2e8;
  double *pdStack_2e0;
  undefined8 uStack_2d8;
  double dStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  double dStack_2b8;
  ulong uStack_2b0;
  double dStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  double dStack_290;
  ulong *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  double dStack_268;
  ulong uStack_260;
  double dStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong *puStack_218;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1c8;
  undefined8 uStack_1c0;
  double dStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  double dStack_e0;
  double dStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  long lStack_a8;
  double dStack_a0;
  ulong uStack_98;
  double dStack_90;
  ulong uStack_88;
  long *plStack_78;
  double dStack_70;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_4 == 0) {
    bVar36 = 0;
  }
  else {
    bVar36 = (byte)param_1[2] ^ 1;
  }
  uVar21 = param_1[3];
  dVar38 = (double)param_2[2];
  if ((long)uVar21 < 0x30 || (long)dVar38 < 2) {
    puVar9 = param_1;
    puVar11 = param_2;
    pdVar16 = param_3;
    if (param_3[1] != dVar38) {
      _free(*param_3);
      if (0 < (long)dVar38) {
        if ((ulong)dVar38 >> 0x3d == 0) {
          puVar9 = (ulong *)((long)dVar38 << 3);
          _malloc();
          if (puVar9 != (ulong *)0x0) goto LAB_10990e174;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        uVar21 = extraout_x9;
        goto LAB_10990e074;
      }
      puVar9 = (ulong *)0x0;
LAB_10990e174:
      *param_3 = (double)puVar9;
      uVar21 = param_1[3];
    }
    param_3[1] = dVar38;
    if (0 < (long)uVar21) {
      dVar38 = 0.0;
      unaff_x24 = 0xffffffffffffffff;
      do {
        dStack_d8 = dVar38;
        if ((char)param_1[2] == '\0') {
          dStack_d8 = (double)(uVar21 + unaff_x24);
        }
        puStack_e8 = (ulong *)*param_1;
        uStack_c0 = puStack_e8[1] - (param_1[4] + (long)dStack_d8);
        uStack_98 = param_2[2];
        uStack_b8 = uStack_c0;
        if ((bVar36 & 1) == 0) {
          uStack_b8 = uStack_98;
        }
        lStack_a8 = param_2[1] - uStack_c0;
        dStack_a0 = (double)(uStack_98 - uStack_b8);
        uStack_c8 = *param_2 + (long)dStack_a0 * 8 + lStack_a8 * uStack_98 * 8;
        dStack_e0 = (double)(param_1[4] + (long)dStack_d8 + 1);
        uStack_f8 = puStack_e8[1] - (long)dStack_e0;
        uStack_100 = *puStack_e8 + (long)dStack_d8 * 8 + puStack_e8[2] * (long)dStack_e0 * 8;
        uStack_d0 = 1;
        pdVar16 = (double *)(*(long *)param_1[1] + (long)dStack_d8 * 8);
        param_4 = (double *)*param_3;
        puVar9 = &uStack_c8;
        puVar11 = &uStack_100;
        puStack_b0 = param_2;
        FUN_10990f3d4();
        dVar38 = (double)((long)dVar38 + 1);
        uVar21 = param_1[3];
        unaff_x24 = unaff_x24 - 1;
      } while ((long)dVar38 < (long)uVar21);
    }
  }
  else {
LAB_10990e074:
    lVar35 = 0;
    dVar38 = 0.0;
    unaff_x24 = uVar21 + 1 >> 1;
    if (0x5f < uVar21) {
      unaff_x24 = 0x30;
    }
    do {
      if ((byte)param_1[2] == 1) {
        dStack_a0 = dVar38;
        uStack_b8 = unaff_x24 + (long)dVar38;
        if ((long)uVar21 <= (long)(unaff_x24 + (long)dVar38)) {
          uStack_b8 = uVar21;
        }
      }
      else {
        uVar23 = (uVar21 + lVar35) - unaff_x24;
        dStack_a0 = (double)(uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU));
        uStack_b8 = uVar21 + lVar35;
      }
      uStack_b8 = uStack_b8 - (long)dStack_a0;
      lStack_a8 = param_1[4] + (long)dStack_a0;
      puStack_b0 = (ulong *)*param_1;
      plStack_78 = (long *)param_1[1];
      uStack_98 = puStack_b0[2];
      uStack_c8 = *puStack_b0 + (long)dStack_a0 * 8 + uStack_98 * lStack_a8 * 8;
      uStack_f8 = puStack_b0[1] - lStack_a8;
      dStack_e0 = (double)(param_2[1] + (lStack_a8 - puStack_b0[1]));
      bVar8 = (bVar36 & 1) == 0;
      dStack_d8 = dStack_e0;
      if (bVar8) {
        dStack_d8 = 0.0;
      }
      uStack_d0 = param_2[2];
      uStack_100 = *param_2 + (long)dStack_d8 * 8 + uStack_d0 * (long)dStack_e0 * 8;
      uStack_f0 = uStack_f8;
      if (bVar8) {
        uStack_f0 = uStack_d0;
      }
      lStack_60 = plStack_78[1];
      dStack_90 = (double)(*plStack_78 + (long)dStack_a0 * 8);
      puVar11 = &uStack_c8;
      pdVar16 = &dStack_90;
      param_4 = (double *)(ulong)((byte)param_1[2] ^ 1);
      puVar9 = &uStack_100;
      puStack_e8 = param_2;
      uStack_c0 = uStack_f8;
      uStack_88 = uStack_b8;
      dStack_70 = dStack_a0;
      FUN_109910108();
      uVar21 = param_1[3];
      dVar38 = (double)((long)dVar38 + unaff_x24);
      lVar35 = lVar35 - unaff_x24;
    } while ((long)dVar38 < (long)uVar21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_108 = FUN_10990e27c;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_258 = (double)puVar9[1];
  dVar47 = (double)puVar9[2];
  dVar27 = dVar47;
  if ((long)dStack_258 <= (long)dVar47) {
    dVar27 = dStack_258;
  }
  puVar10 = puVar9;
  puStack_110 = &stack0xfffffffffffffff0;
  if ((double)puVar9[4] != dVar27) {
    _free(puVar9[3]);
    if ((long)dVar27 < 1) {
      puVar10 = (ulong *)0x0;
LAB_10990e300:
      puVar9[3] = (ulong)puVar10;
      goto LAB_10990e304;
    }
    if ((ulong)dVar27 >> 0x3d == 0) {
      puVar10 = (ulong *)((long)dVar27 << 3);
      _malloc();
      if (puVar10 != (ulong *)0x0) goto LAB_10990e300;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e304:
  puVar9[4] = (ulong)dVar27;
  if ((double)puVar9[10] != dVar47) {
    _free(puVar9[9]);
    if ((long)dVar47 < 1) {
      puVar10 = (ulong *)0x0;
LAB_10990e340:
      puVar9[9] = (ulong)puVar10;
      goto LAB_10990e344;
    }
    if ((ulong)dVar47 >> 0x3d == 0) {
      puVar10 = (ulong *)((long)dVar47 << 3);
      _malloc();
      if (puVar10 != (ulong *)0x0) goto LAB_10990e340;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e344:
  puVar9[10] = (ulong)dVar47;
  uVar21 = puVar9[2];
  if (puVar9[8] != uVar21) {
    _free(puVar9[7]);
    if ((long)uVar21 < 1) {
      puVar10 = (ulong *)0x0;
LAB_10990e384:
      puVar9[7] = (ulong)puVar10;
      goto LAB_10990e388;
    }
    if (uVar21 >> 0x3d == 0) {
      puVar10 = (ulong *)(uVar21 << 3);
      _malloc();
      if (puVar10 != (ulong *)0x0) goto LAB_10990e384;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e388:
  puVar9[8] = uVar21;
  if ((double)puVar9[0xc] != dVar47) {
    _free(puVar9[0xb]);
    if ((long)dVar47 < 1) {
      puVar10 = (ulong *)0x0;
LAB_10990e3c4:
      puVar9[0xb] = (ulong)puVar10;
      goto LAB_10990e3c8;
    }
    if ((ulong)dVar47 >> 0x3d == 0) {
      puVar10 = (ulong *)((long)dVar47 << 3);
      _malloc();
      if (puVar10 != (ulong *)0x0) goto LAB_10990e3c4;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e3c8:
  puVar9[0xc] = (ulong)dVar47;
  if ((double)puVar9[0xe] == dVar47) goto LAB_10990e424;
  _free(puVar9[0xd]);
  if ((long)dVar47 < 1) {
LAB_10990e41c:
    puVar10 = (ulong *)0x0;
  }
  else {
    if ((ulong)dVar47 >> 0x3d != 0) {
LAB_10990e3fc:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      puVar11 = (ulong *)PTR___ZTISt9bad_alloc_110346a68;
      pdVar16 = (double *)PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      goto LAB_10990e41c;
    }
    puVar10 = (ulong *)((long)dVar47 << 3);
    _malloc();
    if (puVar10 == (ulong *)0x0) goto LAB_10990e3fc;
  }
  puVar9[0xd] = (ulong)puVar10;
LAB_10990e424:
  puVar9[0xe] = (ulong)dVar47;
  pauVar14 = (undefined1 (*) [16])puVar9[0xb];
  if (0 < (long)dVar47) {
    dVar22 = 0.0;
    uVar23 = *puVar9;
    uVar32 = puVar9[1];
    uVar29 = puVar9[0xd];
    uVar21 = uVar23;
    do {
      if (uVar32 == 0) {
        dVar40 = 0.0;
      }
      else {
        dVar40 = *(double *)(uVar23 + (long)dVar22 * 8);
        dVar40 = dVar40 * dVar40;
        if (1 < (long)uVar32) {
          pdVar25 = (double *)(uVar21 + puVar9[2] * 8);
          lVar35 = uVar32 - 1;
          do {
            dVar40 = dVar40 + *pdVar25 * *pdVar25;
            pdVar25 = pdVar25 + puVar9[2];
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
      }
      *(double *)(uVar29 + (long)dVar22 * 8) = SQRT(dVar40);
      *(double *)(*pauVar14 + (long)dVar22 * 8) = SQRT(dVar40);
      dVar22 = (double)((long)dVar22 + 1);
      uVar21 = uVar21 + 8;
    } while (dVar22 != dVar47);
  }
  uVar23 = puVar9[0xc];
  uVar21 = uVar23 + 3;
  if (-1 < (long)uVar23) {
    uVar21 = uVar23;
  }
  if (uVar23 + 1 < 3) {
    dVar22 = *(double *)*pauVar14;
  }
  else {
    uVar32 = uVar23 - ((long)uVar23 >> 0x3f) & 0xfffffffffffffffe;
    auVar42 = *pauVar14;
    if (3 < (long)uVar23) {
      uVar21 = uVar21 & 0xfffffffffffffffc;
      auVar45 = pauVar14[1];
      if (7 < uVar23) {
        pauVar31 = pauVar14 + 3;
        lVar35 = 4;
        do {
          auVar42 = NEON_fmax(auVar42,pauVar31[-1],8);
          auVar45 = NEON_fmax(auVar45,*pauVar31,8);
          lVar35 = lVar35 + 4;
          pauVar31 = pauVar31 + 2;
        } while (lVar35 < (long)uVar21);
      }
      auVar42 = NEON_fmax(auVar42,auVar45,8);
      if ((long)uVar21 < (long)uVar32) {
        auVar42 = NEON_fmax(auVar42,*(undefined1 (*) [16])(*pauVar14 + uVar21 * 8),8);
      }
    }
    dVar22 = auVar42._8_8_;
    if (auVar42._8_8_ <= auVar42._0_8_) {
      dVar22 = auVar42._0_8_;
    }
    lVar35 = (long)uVar23 % 2;
    if (lVar35 != 0 && lVar35 < 0 == SBORROW8(uVar23,uVar32)) {
      pauVar14 = pauVar14 + (long)uVar23 / 2;
      dVar40 = dVar22;
      do {
        dVar22 = *(double *)*pauVar14;
        if (*(double *)*pauVar14 <= dVar40) {
          dVar22 = dVar40;
        }
        lVar35 = lVar35 + -1;
        pauVar14 = (undefined1 (*) [16])(*pauVar14 + 8);
        dVar40 = dVar22;
      } while (lVar35 != 0);
    }
  }
  puVar9[0x11] = 0;
  puVar9[0x12] = (ulong)dVar27;
  if ((long)dVar27 < 1) {
    uVar21 = 1;
  }
  else {
    unaff_x24 = 0;
    uStack_260 = 0;
    dVar43 = (double)(long)dStack_258;
    lVar35 = -(long)dVar47;
    lVar12 = (long)dStack_258 - 2;
    lVar37 = -(long)dStack_258;
    unaff_x26 = (long)dStack_258 - 1;
    lStack_248 = -(long)dStack_258;
    lVar13 = 8;
    dVar40 = dVar47;
    dVar38 = 0.0;
    dStack_268 = dVar27;
    do {
      unaff_x28 = dVar38;
      lStack_248 = lStack_248 + 1;
      lStack_220 = (long)dVar47 - (long)unaff_x28;
      uVar21 = puVar9[0xb];
      dVar38 = *(double *)(uVar21 + (puVar9[0xc] - lStack_220) * 8);
      if (lStack_220 < 2) {
        dVar27 = 0.0;
      }
      else {
        dVar27 = 0.0;
        dVar30 = 4.94065645841247e-324;
        dVar44 = dVar38;
        do {
          dVar46 = *(double *)(uVar21 + (puVar9[0xc] + lVar35) * 8 + (long)dVar30 * 8);
          dVar5 = dVar30;
          dVar6 = dVar46;
          if (dVar46 <= dVar44) {
            dVar46 = dVar44;
            dVar5 = dVar27;
            dVar6 = dVar38;
          }
          dVar38 = dVar6;
          dVar27 = dVar5;
          dVar30 = (double)((long)dVar30 + 1);
          dVar44 = dVar46;
        } while (dVar40 != dVar30);
      }
      if (((double)puVar9[0x12] == dStack_268) &&
         (dVar38 * dVar38 <
          ((dVar22 * 2.220446049250313e-16 * dVar22 * 2.220446049250313e-16) / dVar43) *
          (double)((long)dStack_258 - (long)unaff_x28))) {
        puVar9[0x12] = (ulong)unaff_x28;
      }
      lVar39 = (long)dVar27 + (long)unaff_x28;
      *(long *)(puVar9[7] + (long)unaff_x28 * 8) = lVar39;
      if (dVar27 != 0.0) {
        uVar23 = puVar9[1];
        if (0 < (long)uVar23) {
          uVar32 = *puVar9;
          uVar29 = puVar9[2];
          do {
            uVar41 = *(undefined8 *)(uVar32 + unaff_x24);
            *(undefined8 *)(uVar32 + unaff_x24) =
                 *(undefined8 *)(uVar32 + ((long)dVar27 + (long)unaff_x28) * 8);
            *(undefined8 *)(uVar32 + ((long)dVar27 + (long)unaff_x28) * 8) = uVar41;
            uVar32 = uVar32 + uVar29 * 8;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        uVar41 = *(undefined8 *)(uVar21 + (long)unaff_x28 * 8);
        *(undefined8 *)(uVar21 + (long)unaff_x28 * 8) = *(undefined8 *)(uVar21 + lVar39 * 8);
        *(undefined8 *)(uVar21 + lVar39 * 8) = uVar41;
        uVar21 = puVar9[0xd];
        uVar41 = *(undefined8 *)(uVar21 + (long)unaff_x28 * 8);
        *(undefined8 *)(uVar21 + (long)unaff_x28 * 8) = *(undefined8 *)(uVar21 + lVar39 * 8);
        *(undefined8 *)(uVar21 + lVar39 * 8) = uVar41;
        uStack_260 = uStack_260 + 1;
      }
      uVar21 = *puVar9;
      uStack_1d8 = puVar9[1];
      lStack_1e0 = uVar21 + (long)unaff_x28 * 8;
      lVar39 = (long)dStack_258 - (long)unaff_x28;
      lStack_210 = uStack_1d8 - lVar39;
      uStack_200 = puVar9[2];
      pdVar25 = (double *)(lStack_1e0 + uStack_200 * lStack_210 * 8);
      pdVar16 = (double *)(puVar9[3] + (long)unaff_x28 * 8);
      unaff_x27 = lVar39 + -1;
      if (unaff_x27 == 0) {
        dVar38 = *pdVar25;
        dVar27 = 0.0;
LAB_10990e7a8:
        *pdVar16 = dVar27;
        dVar27 = dVar38;
      }
      else {
        dVar38 = pdVar25[uStack_200] * pdVar25[uStack_200];
        if (2 < lVar39) {
          lVar19 = uVar21 + uStack_200 * ((uStack_1d8 + lVar37) * 8 + 0x10);
          lVar33 = lVar12;
          do {
            dVar38 = dVar38 + *(double *)(lVar19 + unaff_x24) * *(double *)(lVar19 + unaff_x24);
            lVar19 = lVar19 + uStack_200 * 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
        dVar27 = *pdVar25;
        if (2.2250738585072014e-308 < dVar38) {
          dVar38 = SQRT(dVar38 + dVar27 * dVar27);
          if (0.0 <= dVar27) {
            dVar38 = -dVar38;
          }
          if (1 < lVar39) {
            lVar19 = uVar21 + uStack_200 * ((uStack_1d8 + lVar37) * 8 + 8);
            lVar33 = unaff_x26;
            do {
              *(double *)(lVar19 + unaff_x24) = *(double *)(lVar19 + unaff_x24) / (dVar27 - dVar38);
              lVar19 = lVar19 + uStack_200 * 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
          }
          dVar27 = (dVar38 - dVar27) / dVar38;
          goto LAB_10990e7a8;
        }
        *pdVar16 = 0.0;
        if (1 < lVar39) {
          lVar19 = uVar21 + uStack_200 * ((uStack_1d8 + lVar37) * 8 + 8);
          lVar33 = unaff_x26;
          do {
            *(undefined8 *)(lVar19 + unaff_x24) = 0;
            lVar19 = lVar19 + uStack_200 * 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
      }
      *(double *)(uVar21 + uStack_200 * (long)unaff_x28 * 8 + (long)unaff_x28 * 8) = dVar27;
      if ((double)puVar9[0x11] < ABS(dVar27)) {
        puVar9[0x11] = (ulong)ABS(dVar27);
      }
      lStack_220 = lStack_220 + -1;
      lStack_208 = uStack_200 - lStack_220;
      lStack_230 = uVar21 + lStack_208 * 8 + uStack_200 * lStack_210 * 8;
      lStack_1a8 = uStack_1d8 - unaff_x27;
      uStack_1f8 = lStack_1e0 + uStack_200 * lStack_1a8 * 8;
      uStack_1c0 = 0;
      uStack_1b0 = 1;
      uStack_198 = 1;
      dVar38 = (double)((long)unaff_x28 + 1);
      param_4 = (double *)(puVar9[9] + (long)dVar38 * 8);
      puVar11 = &uStack_1f8;
      lStack_250 = lVar13;
      lStack_240 = lVar12;
      lStack_238 = lVar35;
      lStack_228 = lVar39;
      puStack_218 = puVar9;
      lStack_1f0 = unaff_x27;
      puStack_1c8 = puVar9;
      dStack_1b8 = unaff_x28;
      FUN_10990eac0(&lStack_230);
      puVar10 = (ulong *)0x3e50000000000000;
      if ((long)dVar38 < (long)dVar47) {
        uVar21 = puVar9[0xb];
        lVar35 = lStack_250;
        dVar27 = dVar38;
        do {
          dVar30 = *(double *)(uVar21 + (long)dVar27 * 8);
          if (dVar30 != 0.0) {
            uVar32 = *puVar9;
            uVar23 = puVar9[2];
            dVar44 = ABS(*(double *)(uVar32 + uVar23 * (long)unaff_x28 * 8 + (long)dVar27 * 8)) /
                     dVar30;
            dVar46 = (dVar44 + 1.0) * (1.0 - dVar44);
            dVar44 = 0.0;
            if (0.0 <= dVar46) {
              dVar44 = dVar46;
            }
            dVar46 = dVar30 / *(double *)(puVar9[0xd] + (long)dVar27 * 8);
            if (dVar46 * dVar46 * dVar44 <= 1.4901161193847656e-08) {
              if (unaff_x27 == 0) {
                dVar30 = 0.0;
              }
              else {
                dVar30 = *(double *)
                          (uVar32 + (long)dVar27 * 8 + (puVar9[1] - unaff_x27) * uVar23 * 8);
                dVar30 = dVar30 * dVar30;
                if (2 < lVar39) {
                  pdVar25 = (double *)
                            (uVar32 + lVar35 + uVar23 * ((lStack_248 + puVar9[1]) * 8 + 8));
                  lVar13 = lStack_240;
                  do {
                    dVar30 = dVar30 + *pdVar25 * *pdVar25;
                    pdVar25 = pdVar25 + uVar23;
                    lVar13 = lVar13 + -1;
                  } while (lVar13 != 0);
                }
              }
              dVar30 = SQRT(dVar30);
              *(double *)(puVar9[0xd] + (long)dVar27 * 8) = dVar30;
            }
            else {
              dVar30 = dVar30 * SQRT(dVar44);
            }
            *(double *)(uVar21 + (long)dVar27 * 8) = dVar30;
          }
          dVar27 = (double)((long)dVar27 + 1);
          lVar35 = lVar35 + 8;
        } while (dVar27 != dVar47);
      }
      dVar40 = (double)((long)dVar40 - 1);
      lVar35 = lStack_238 + 1;
      unaff_x24 = unaff_x24 + 8;
      lVar12 = lStack_240 + -1;
      lVar37 = lVar37 + 1;
      unaff_x26 = unaff_x26 + -1;
      lVar13 = lStack_250 + 8;
    } while (dVar38 != dStack_268);
    uVar21 = 0xffffffffffffffff;
    dVar27 = dStack_268;
    if ((uStack_260 & 1) == 0) {
      uVar21 = 1;
    }
  }
  iVar34 = SUB84(dVar47,0);
  uVar23 = (ulong)iVar34;
  if (puVar9[6] != (long)iVar34) {
    _free(puVar9[5]);
    if ((long)uVar23 < 1) {
      puVar10 = (ulong *)0x0;
    }
    else {
      puVar10 = (ulong *)(((ulong)dVar47 & 0xffffffff) << 2);
      _malloc();
      if (puVar10 == (ulong *)0x0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10990ea08);
        (*pcVar7)();
      }
    }
    puVar9[5] = (ulong)puVar10;
  }
  puVar9[6] = uVar23;
  if (0 < iVar34) {
    uVar32 = 0;
    uVar29 = puVar9[5];
    do {
      *(int *)(uVar29 + uVar32 * 4) = (int)uVar32;
      uVar32 = uVar32 + 1;
    } while (((ulong)dVar47 & 0x7fffffff) != uVar32);
  }
  if (0 < (long)dVar27) {
    puVar24 = (undefined4 *)puVar9[5];
    puVar15 = (ulong *)puVar9[7];
    puVar28 = puVar24;
    dVar22 = dVar27;
    do {
      uVar32 = -(*puVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (*puVar15 & 0xffffffff) << 2;
      uVar4 = *puVar28;
      *puVar28 = *(undefined4 *)((long)puVar24 + uVar32);
      *(undefined4 *)((long)puVar24 + uVar32) = uVar4;
      dVar22 = (double)((long)dVar22 - 1);
      dVar27 = 0.0;
      puVar15 = puVar15 + 1;
      puVar28 = puVar28 + 1;
    } while (dVar22 != 0.0);
  }
  puVar9[0x13] = uVar21;
  *(undefined1 *)(puVar9 + 0xf) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_278 = FUN_10990eac0;
    uVar32 = puVar10[1];
    lVar35 = uVar32 - 1;
    if (lVar35 == 0) {
      dVar38 = 1.0 - *pdVar16;
      pdVar16 = (double *)*puVar10;
      uVar21 = puVar10[2];
      if (((ulong)pdVar16 & 7) == 0) {
        uVar23 = (ulong)pdVar16 >> 3 & 1;
        if ((long)uVar21 <= (long)uVar23) {
          uVar23 = uVar21;
        }
        if (0 < (long)uVar23) {
          *pdVar16 = dVar38 * *pdVar16;
        }
        lVar35 = (uVar21 - uVar23 & 0xfffffffffffffffe) + uVar23;
        if (1 < (long)(uVar21 - uVar23)) {
          pdVar25 = pdVar16 + uVar23;
          do {
            pdVar25[1] = pdVar25[1] * dVar38;
            *pdVar25 = *pdVar25 * dVar38;
            uVar23 = uVar23 + 2;
            pdVar25 = pdVar25 + 2;
          } while ((long)uVar23 < lVar35);
        }
        for (; lVar35 < (long)uVar21; lVar35 = lVar35 + 1) {
          pdVar16[lVar35] = dVar38 * pdVar16[lVar35];
        }
      }
      else if (0 < (long)uVar21) {
        do {
          *pdVar16 = dVar38 * *pdVar16;
          uVar21 = uVar21 - 1;
          pdVar16 = pdVar16 + 1;
        } while (uVar21 != 0);
      }
    }
    else if (*pdVar16 != 0.0) {
      uVar17 = *puVar10;
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      lVar37 = *(long *)(uVar3 + 0x10);
      pdVar25 = (double *)*puVar11;
      uVar18 = puVar11[6];
      uVar29 = (ulong)param_4 >> 3 & 1;
      if ((long)uVar2 <= (long)uVar29) {
        uVar29 = uVar2;
      }
      if (((ulong)param_4 & 7) != 0) {
        uVar29 = uVar2;
      }
      lVar13 = uVar2 - uVar29;
      dStack_2d0 = unaff_x28;
      lStack_2c8 = unaff_x27;
      lStack_2c0 = unaff_x26;
      dStack_2b8 = dVar27;
      uStack_2b0 = unaff_x24;
      dStack_2a8 = dVar38;
      uStack_2a0 = uVar23;
      uStack_298 = uVar21;
      dStack_290 = dVar47;
      puStack_288 = puVar9;
      ppuStack_280 = &puStack_110;
      if (0 < (long)uVar29) {
        _bzero(param_4,uVar29 << 3);
      }
      lVar12 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar29;
      if (1 < lVar13) {
        lVar39 = lVar12;
        if (lVar12 <= (long)(uVar29 + 2)) {
          lVar39 = uVar29 + 2;
        }
        _bzero(param_4 + uVar29,(lVar39 + ~uVar29 & 0x1ffffffffffffffe) * 8 + 0x10);
      }
      lVar39 = lVar13 / 2;
      pdVar1 = (double *)(uVar17 + lVar37 * 8);
      if (lVar12 < (long)uVar2) {
        _bzero(param_4 + lVar39 * 2 + uVar29,(lVar13 % 2) * 8);
      }
      if (uVar2 == 1) {
        if (lVar35 == 0) {
          dVar38 = 0.0;
        }
        else {
          dVar38 = *pdVar25 * *pdVar1;
          if (2 < (long)uVar32) {
            lVar19 = uVar32 - 2;
            pdVar26 = (double *)(uVar17 + lVar37 * 8 + *(long *)(uVar3 + 0x10) * 8);
            do {
              pdVar25 = pdVar25 + *(long *)(uVar18 + 0x10);
              dVar38 = dVar38 + *pdVar25 * *pdVar26;
              pdVar26 = pdVar26 + *(long *)(uVar3 + 0x10);
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
        }
        *param_4 = dVar38 + *param_4;
      }
      else {
        uStack_2d8 = *(undefined8 *)(uVar3 + 0x10);
        uStack_2e8 = *(undefined8 *)(uVar18 + 0x10);
        pdStack_2f0 = pdVar25;
        pdStack_2e0 = pdVar1;
        FUN_109909a3c(0x3ff0000000000000,uVar2,lVar35,&pdStack_2e0,&pdStack_2f0,param_4,1);
      }
      pdVar20 = (double *)*puVar10;
      pdVar25 = param_4;
      pdVar26 = pdVar20;
      uVar21 = uVar29;
      if (0 < (long)uVar29) {
        do {
          *pdVar25 = *pdVar26 + *pdVar25;
          uVar21 = uVar21 - 1;
          pdVar25 = pdVar25 + 1;
          pdVar26 = pdVar26 + 1;
        } while (uVar21 != 0);
      }
      if (1 < lVar13) {
        pdVar25 = pdVar20 + uVar29;
        uVar21 = uVar29;
        pdVar26 = param_4 + uVar29;
        do {
          dVar38 = *pdVar25;
          pdVar26[1] = pdVar25[1] + pdVar26[1];
          *pdVar26 = dVar38 + *pdVar26;
          uVar21 = uVar21 + 2;
          pdVar25 = pdVar25 + 2;
          pdVar26 = pdVar26 + 2;
        } while ((long)uVar21 < lVar12);
      }
      if (lVar12 < (long)uVar2) {
        lVar13 = lVar13 % 2;
        pdVar25 = pdVar20 + uVar29 + lVar39 * 2;
        pdVar26 = param_4 + uVar29 + lVar39 * 2;
        do {
          *pdVar26 = *pdVar25 + *pdVar26;
          lVar13 = lVar13 + -1;
          pdVar25 = pdVar25 + 1;
          pdVar26 = pdVar26 + 1;
        } while (lVar13 != 0);
      }
      dVar38 = *pdVar16;
      pdVar25 = (double *)*puVar10;
      uVar23 = puVar10[2];
      uVar21 = (ulong)pdVar25 >> 3 & 1;
      if ((long)uVar23 <= (long)uVar21) {
        uVar21 = uVar23;
      }
      if (((ulong)pdVar25 & 7) != 0) {
        uVar21 = uVar23;
      }
      lVar37 = uVar23 - uVar21;
      pdVar26 = pdVar25;
      pdVar20 = param_4;
      uVar29 = uVar21;
      if (0 < (long)uVar21) {
        do {
          *pdVar26 = *pdVar26 - dVar38 * *pdVar20;
          uVar29 = uVar29 - 1;
          pdVar26 = pdVar26 + 1;
          pdVar20 = pdVar20 + 1;
        } while (uVar29 != 0);
      }
      lVar13 = (lVar37 - (lVar37 >> 0x3f) & 0xfffffffffffffffeU) + uVar21;
      if (1 < lVar37) {
        pdVar26 = param_4 + uVar21;
        uVar29 = uVar21;
        pdVar20 = pdVar25 + uVar21;
        do {
          dVar27 = *pdVar26;
          pdVar20[1] = pdVar20[1] - pdVar26[1] * dVar38;
          *pdVar20 = *pdVar20 - dVar27 * dVar38;
          uVar29 = uVar29 + 2;
          pdVar26 = pdVar26 + 2;
          pdVar20 = pdVar20 + 2;
        } while ((long)uVar29 < lVar13);
      }
      if (lVar13 < (long)uVar23) {
        lVar13 = lVar37 % 2;
        pdVar25 = pdVar25 + uVar21 + (lVar37 / 2) * 2;
        pdVar26 = param_4 + uVar21 + (lVar37 / 2) * 2;
        do {
          *pdVar25 = *pdVar25 - dVar38 * *pdVar26;
          lVar13 = lVar13 + -1;
          pdVar25 = pdVar25 + 1;
          pdVar26 = pdVar26 + 1;
        } while (lVar13 != 0);
      }
      if (1 < (long)uVar32) {
        lVar13 = 0;
        lVar37 = 0;
        dVar38 = *pdVar16;
        uVar21 = *puVar11;
        lVar12 = *(long *)(puVar11[6] + 0x10);
        do {
          lVar39 = *(long *)(uVar3 + 0x10);
          dVar27 = dVar38 * *(double *)(uVar21 + lVar37 * lVar12 * 8);
          uVar23 = (ulong)(pdVar1 + lVar39 * lVar37) >> 3 & 1;
          if ((long)uVar2 <= (long)uVar23) {
            uVar23 = uVar2;
          }
          if (((ulong)(pdVar1 + lVar39 * lVar37) & 7) != 0) {
            uVar23 = uVar2;
          }
          if (0 < (long)uVar23) {
            pdVar16 = (double *)((long)pdVar1 + lVar39 * lVar13);
            pdVar25 = param_4;
            uVar32 = uVar23;
            do {
              *pdVar16 = *pdVar16 - dVar27 * *pdVar25;
              uVar32 = uVar32 - 1;
              pdVar16 = pdVar16 + 1;
              pdVar25 = pdVar25 + 1;
            } while (uVar32 != 0);
          }
          lVar33 = uVar2 - uVar23;
          lVar19 = (lVar33 - (lVar33 >> 0x3f) & 0xfffffffffffffffeU) + uVar23;
          if (1 < lVar33) {
            pdVar16 = param_4 + uVar23;
            pdVar25 = (double *)((long)pdVar1 + lVar39 * lVar13 + uVar23 * 8);
            uVar32 = uVar23;
            do {
              dVar47 = *pdVar16;
              pdVar25[1] = pdVar25[1] - pdVar16[1] * dVar27;
              *pdVar25 = *pdVar25 - dVar47 * dVar27;
              uVar32 = uVar32 + 2;
              pdVar16 = pdVar16 + 2;
              pdVar25 = pdVar25 + 2;
            } while ((long)uVar32 < lVar19);
          }
          if (lVar19 < (long)uVar2) {
            lVar19 = lVar33 % 2;
            pdVar16 = (double *)((long)pdVar1 + (lVar33 / 2) * 0x10 + uVar23 * 8 + lVar39 * lVar13);
            pdVar25 = param_4 + uVar23 + (lVar33 / 2) * 2;
            do {
              *pdVar16 = *pdVar16 - dVar27 * *pdVar25;
              lVar19 = lVar19 + -1;
              pdVar16 = pdVar16 + 1;
              pdVar25 = pdVar25 + 1;
            } while (lVar19 != 0);
          }
          lVar37 = lVar37 + 1;
          lVar13 = lVar13 + 8;
        } while (lVar37 != lVar35);
      }
    }
    return;
  }
  return;
}



/* Entry: 10990e27c; end: 10990eabf;  */

void FUN_10990e27c(ulong *param_1,long *param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  double dVar3;
  code *pcVar4;
  ulong *puVar5;
  double *pdVar6;
  long lVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  ulong *puVar10;
  double *pdVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  double *pdVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  double *pdVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  ulong unaff_x23;
  long unaff_x24;
  long lVar31;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double *pdStack_1f0;
  undefined8 uStack_1e8;
  double *pdStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong *puStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = param_1[1];
  uVar21 = param_1[2];
  uVar18 = uVar21;
  if ((long)uStack_158 <= (long)uVar21) {
    uVar18 = uStack_158;
  }
  puVar5 = param_1;
  if (param_1[4] != uVar18) {
    _free(param_1[3]);
    if ((long)uVar18 < 1) {
      puVar5 = (ulong *)0x0;
LAB_10990e300:
      param_1[3] = (ulong)puVar5;
      goto LAB_10990e304;
    }
    if (uVar18 >> 0x3d == 0) {
      puVar5 = (ulong *)(uVar18 << 3);
      _malloc();
      if (puVar5 != (ulong *)0x0) goto LAB_10990e300;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e304:
  param_1[4] = uVar18;
  if (param_1[10] != uVar21) {
    _free(param_1[9]);
    if ((long)uVar21 < 1) {
      puVar5 = (ulong *)0x0;
LAB_10990e340:
      param_1[9] = (ulong)puVar5;
      goto LAB_10990e344;
    }
    if (uVar21 >> 0x3d == 0) {
      puVar5 = (ulong *)(uVar21 << 3);
      _malloc();
      if (puVar5 != (ulong *)0x0) goto LAB_10990e340;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e344:
  param_1[10] = uVar21;
  uVar16 = param_1[2];
  if (param_1[8] != uVar16) {
    _free(param_1[7]);
    if ((long)uVar16 < 1) {
      puVar5 = (ulong *)0x0;
LAB_10990e384:
      param_1[7] = (ulong)puVar5;
      goto LAB_10990e388;
    }
    if (uVar16 >> 0x3d == 0) {
      puVar5 = (ulong *)(uVar16 << 3);
      _malloc();
      if (puVar5 != (ulong *)0x0) goto LAB_10990e384;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e388:
  param_1[8] = uVar16;
  if (param_1[0xc] != uVar21) {
    _free(param_1[0xb]);
    if ((long)uVar21 < 1) {
      puVar5 = (ulong *)0x0;
LAB_10990e3c4:
      param_1[0xb] = (ulong)puVar5;
      goto LAB_10990e3c8;
    }
    if (uVar21 >> 0x3d == 0) {
      puVar5 = (ulong *)(uVar21 << 3);
      _malloc();
      if (puVar5 != (ulong *)0x0) goto LAB_10990e3c4;
    }
    goto LAB_10990e3fc;
  }
LAB_10990e3c8:
  param_1[0xc] = uVar21;
  if (param_1[0xe] == uVar21) goto LAB_10990e424;
  _free(param_1[0xd]);
  if ((long)uVar21 < 1) {
LAB_10990e41c:
    puVar5 = (ulong *)0x0;
  }
  else {
    if (uVar21 >> 0x3d != 0) {
LAB_10990e3fc:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      param_2 = (long *)PTR___ZTISt9bad_alloc_110346a68;
      param_3 = (double *)PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      goto LAB_10990e41c;
    }
    puVar5 = (ulong *)(uVar21 << 3);
    _malloc();
    if (puVar5 == (ulong *)0x0) goto LAB_10990e3fc;
  }
  param_1[0xd] = (ulong)puVar5;
LAB_10990e424:
  param_1[0xe] = uVar21;
  pauVar9 = (undefined1 (*) [16])param_1[0xb];
  if (0 < (long)uVar21) {
    uVar16 = 0;
    uVar23 = *param_1;
    uVar26 = param_1[1];
    uVar22 = param_1[0xd];
    uVar17 = uVar23;
    do {
      if (uVar26 == 0) {
        dVar32 = 0.0;
      }
      else {
        dVar32 = *(double *)(uVar23 + uVar16 * 8);
        dVar32 = dVar32 * dVar32;
        if (1 < (long)uVar26) {
          pdVar11 = (double *)(uVar17 + param_1[2] * 8);
          lVar28 = uVar26 - 1;
          do {
            dVar32 = dVar32 + *pdVar11 * *pdVar11;
            pdVar11 = pdVar11 + param_1[2];
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
        }
      }
      *(double *)(uVar22 + uVar16 * 8) = SQRT(dVar32);
      *(double *)(*pauVar9 + uVar16 * 8) = SQRT(dVar32);
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 + 8;
    } while (uVar16 != uVar21);
  }
  uVar17 = param_1[0xc];
  uVar16 = uVar17 + 3;
  if (-1 < (long)uVar17) {
    uVar16 = uVar17;
  }
  if (uVar17 + 1 < 3) {
    dVar32 = *(double *)*pauVar9;
  }
  else {
    uVar23 = uVar17 - ((long)uVar17 >> 0x3f) & 0xfffffffffffffffe;
    auVar35 = *pauVar9;
    if (3 < (long)uVar17) {
      uVar16 = uVar16 & 0xfffffffffffffffc;
      auVar38 = pauVar9[1];
      if (7 < uVar17) {
        pauVar25 = pauVar9 + 3;
        lVar28 = 4;
        do {
          auVar35 = NEON_fmax(auVar35,pauVar25[-1],8);
          auVar38 = NEON_fmax(auVar38,*pauVar25,8);
          lVar28 = lVar28 + 4;
          pauVar25 = pauVar25 + 2;
        } while (lVar28 < (long)uVar16);
      }
      auVar35 = NEON_fmax(auVar35,auVar38,8);
      if ((long)uVar16 < (long)uVar23) {
        auVar35 = NEON_fmax(auVar35,*(undefined1 (*) [16])(*pauVar9 + uVar16 * 8),8);
      }
    }
    dVar32 = auVar35._8_8_;
    if (auVar35._8_8_ <= auVar35._0_8_) {
      dVar32 = auVar35._0_8_;
    }
    lVar28 = (long)uVar17 % 2;
    if (lVar28 != 0 && lVar28 < 0 == SBORROW8(uVar17,uVar23)) {
      pauVar9 = pauVar9 + (long)uVar17 / 2;
      dVar36 = dVar32;
      do {
        dVar32 = *(double *)*pauVar9;
        if (*(double *)*pauVar9 <= dVar36) {
          dVar32 = dVar36;
        }
        lVar28 = lVar28 + -1;
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
        dVar36 = dVar32;
      } while (lVar28 != 0);
    }
  }
  param_1[0x11] = 0;
  param_1[0x12] = uVar18;
  if ((long)uVar18 < 1) {
    uVar16 = 1;
  }
  else {
    unaff_x24 = 0;
    uStack_160 = 0;
    dVar36 = (double)(long)uStack_158;
    lVar28 = -uVar21;
    lVar7 = uStack_158 - 2;
    lVar30 = -uStack_158;
    unaff_x26 = uStack_158 - 1;
    lStack_148 = -uStack_158;
    lVar8 = 8;
    uVar16 = uVar21;
    unaff_x23 = 0;
    uStack_168 = uVar18;
    do {
      unaff_x28 = unaff_x23;
      lStack_148 = lStack_148 + 1;
      lStack_120 = uVar21 - unaff_x28;
      uVar18 = param_1[0xb];
      dVar33 = *(double *)(uVar18 + (param_1[0xc] - lStack_120) * 8);
      dVar37 = dVar33;
      if (lStack_120 < 2) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        uVar23 = 1;
        do {
          dVar39 = *(double *)(uVar18 + (param_1[0xc] + lVar28) * 8 + uVar23 * 8);
          uVar26 = uVar23;
          dVar3 = dVar39;
          if (dVar39 <= dVar33) {
            dVar39 = dVar33;
            uVar26 = uVar17;
            dVar3 = dVar37;
          }
          dVar37 = dVar3;
          uVar17 = uVar26;
          dVar33 = dVar39;
          uVar23 = uVar23 + 1;
        } while (uVar16 != uVar23);
      }
      if ((param_1[0x12] == uStack_168) &&
         (dVar37 * dVar37 <
          ((dVar32 * 2.220446049250313e-16 * dVar32 * 2.220446049250313e-16) / dVar36) *
          (double)(long)(uStack_158 - unaff_x28))) {
        param_1[0x12] = unaff_x28;
      }
      lVar31 = uVar17 + unaff_x28;
      *(long *)(param_1[7] + unaff_x28 * 8) = lVar31;
      if (uVar17 != 0) {
        uVar23 = param_1[1];
        if (0 < (long)uVar23) {
          uVar26 = *param_1;
          uVar22 = param_1[2];
          do {
            uVar34 = *(undefined8 *)(uVar26 + unaff_x24);
            *(undefined8 *)(uVar26 + unaff_x24) = *(undefined8 *)(uVar26 + (uVar17 + unaff_x28) * 8)
            ;
            *(undefined8 *)(uVar26 + (uVar17 + unaff_x28) * 8) = uVar34;
            uVar26 = uVar26 + uVar22 * 8;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        uVar34 = *(undefined8 *)(uVar18 + unaff_x28 * 8);
        *(undefined8 *)(uVar18 + unaff_x28 * 8) = *(undefined8 *)(uVar18 + lVar31 * 8);
        *(undefined8 *)(uVar18 + lVar31 * 8) = uVar34;
        uVar18 = param_1[0xd];
        uVar34 = *(undefined8 *)(uVar18 + unaff_x28 * 8);
        *(undefined8 *)(uVar18 + unaff_x28 * 8) = *(undefined8 *)(uVar18 + lVar31 * 8);
        *(undefined8 *)(uVar18 + lVar31 * 8) = uVar34;
        uStack_160 = uStack_160 + 1;
      }
      uVar18 = *param_1;
      uStack_d8 = param_1[1];
      lStack_e0 = uVar18 + unaff_x28 * 8;
      lVar31 = uStack_158 - unaff_x28;
      lStack_110 = uStack_d8 - lVar31;
      uStack_100 = param_1[2];
      pdVar11 = (double *)(lStack_e0 + uStack_100 * lStack_110 * 8);
      param_3 = (double *)(param_1[3] + unaff_x28 * 8);
      unaff_x27 = lVar31 + -1;
      if (unaff_x27 == 0) {
        dVar37 = *pdVar11;
        dVar33 = 0.0;
LAB_10990e7a8:
        *param_3 = dVar33;
        dVar33 = dVar37;
      }
      else {
        dVar37 = pdVar11[uStack_100] * pdVar11[uStack_100];
        if (2 < lVar31) {
          lVar13 = uVar18 + uStack_100 * ((uStack_d8 + lVar30) * 8 + 0x10);
          lVar14 = lVar7;
          do {
            dVar37 = dVar37 + *(double *)(lVar13 + unaff_x24) * *(double *)(lVar13 + unaff_x24);
            lVar13 = lVar13 + uStack_100 * 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        dVar33 = *pdVar11;
        if (2.2250738585072014e-308 < dVar37) {
          dVar37 = SQRT(dVar37 + dVar33 * dVar33);
          if (0.0 <= dVar33) {
            dVar37 = -dVar37;
          }
          if (1 < lVar31) {
            lVar13 = uVar18 + uStack_100 * ((uStack_d8 + lVar30) * 8 + 8);
            lVar14 = unaff_x26;
            do {
              *(double *)(lVar13 + unaff_x24) = *(double *)(lVar13 + unaff_x24) / (dVar33 - dVar37);
              lVar13 = lVar13 + uStack_100 * 8;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          dVar33 = (dVar37 - dVar33) / dVar37;
          goto LAB_10990e7a8;
        }
        *param_3 = 0.0;
        if (1 < lVar31) {
          lVar13 = uVar18 + uStack_100 * ((uStack_d8 + lVar30) * 8 + 8);
          lVar14 = unaff_x26;
          do {
            *(undefined8 *)(lVar13 + unaff_x24) = 0;
            lVar13 = lVar13 + uStack_100 * 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      *(double *)(uVar18 + uStack_100 * unaff_x28 * 8 + unaff_x28 * 8) = dVar33;
      if ((double)param_1[0x11] < ABS(dVar33)) {
        param_1[0x11] = (ulong)ABS(dVar33);
      }
      lStack_120 = lStack_120 + -1;
      lStack_108 = uStack_100 - lStack_120;
      lStack_130 = uVar18 + lStack_108 * 8 + uStack_100 * lStack_110 * 8;
      lStack_a8 = uStack_d8 - unaff_x27;
      lStack_f8 = lStack_e0 + uStack_100 * lStack_a8 * 8;
      uStack_c0 = 0;
      uStack_b0 = 1;
      uStack_98 = 1;
      unaff_x23 = unaff_x28 + 1;
      param_4 = (double *)(param_1[9] + unaff_x23 * 8);
      param_2 = &lStack_f8;
      lStack_150 = lVar8;
      lStack_140 = lVar7;
      lStack_138 = lVar28;
      lStack_128 = lVar31;
      puStack_118 = param_1;
      lStack_f0 = unaff_x27;
      puStack_c8 = param_1;
      uStack_b8 = unaff_x28;
      FUN_10990eac0(&lStack_130);
      puVar5 = (ulong *)0x3e50000000000000;
      if ((long)unaff_x23 < (long)uVar21) {
        uVar17 = param_1[0xb];
        lVar28 = lStack_150;
        uVar18 = unaff_x23;
        do {
          dVar37 = *(double *)(uVar17 + uVar18 * 8);
          if (dVar37 != 0.0) {
            uVar26 = *param_1;
            uVar23 = param_1[2];
            dVar33 = ABS(*(double *)(uVar26 + uVar23 * unaff_x28 * 8 + uVar18 * 8)) / dVar37;
            dVar39 = (dVar33 + 1.0) * (1.0 - dVar33);
            dVar33 = 0.0;
            if (0.0 <= dVar39) {
              dVar33 = dVar39;
            }
            dVar39 = dVar37 / *(double *)(param_1[0xd] + uVar18 * 8);
            if (dVar39 * dVar39 * dVar33 <= 1.4901161193847656e-08) {
              if (unaff_x27 == 0) {
                dVar37 = 0.0;
              }
              else {
                dVar37 = *(double *)(uVar26 + uVar18 * 8 + (param_1[1] - unaff_x27) * uVar23 * 8);
                dVar37 = dVar37 * dVar37;
                if (2 < lVar31) {
                  pdVar11 = (double *)
                            (uVar26 + lVar28 + uVar23 * ((lStack_148 + param_1[1]) * 8 + 8));
                  lVar8 = lStack_140;
                  do {
                    dVar37 = dVar37 + *pdVar11 * *pdVar11;
                    pdVar11 = pdVar11 + uVar23;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                }
              }
              dVar37 = SQRT(dVar37);
              *(double *)(param_1[0xd] + uVar18 * 8) = dVar37;
            }
            else {
              dVar37 = dVar37 * SQRT(dVar33);
            }
            *(double *)(uVar17 + uVar18 * 8) = dVar37;
          }
          uVar18 = uVar18 + 1;
          lVar28 = lVar28 + 8;
        } while (uVar18 != uVar21);
      }
      uVar16 = uVar16 - 1;
      lVar28 = lStack_138 + 1;
      unaff_x24 = unaff_x24 + 8;
      lVar7 = lStack_140 + -1;
      lVar30 = lVar30 + 1;
      unaff_x26 = unaff_x26 + -1;
      lVar8 = lStack_150 + 8;
    } while (unaff_x23 != uStack_168);
    uVar16 = 0xffffffffffffffff;
    uVar18 = uStack_168;
    if ((uStack_160 & 1) == 0) {
      uVar16 = 1;
    }
  }
  iVar29 = (int)uVar21;
  uVar17 = (ulong)iVar29;
  if (param_1[6] != (long)iVar29) {
    _free(param_1[5]);
    if ((long)uVar17 < 1) {
      puVar5 = (ulong *)0x0;
    }
    else {
      puVar5 = (ulong *)((uVar21 & 0xffffffff) << 2);
      _malloc();
      if (puVar5 == (ulong *)0x0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10990ea08);
        (*pcVar4)();
      }
    }
    param_1[5] = (ulong)puVar5;
  }
  param_1[6] = uVar17;
  if (0 < iVar29) {
    uVar23 = 0;
    uVar26 = param_1[5];
    do {
      *(int *)(uVar26 + uVar23 * 4) = (int)uVar23;
      uVar23 = uVar23 + 1;
    } while ((uVar21 & 0x7fffffff) != uVar23);
  }
  if (0 < (long)uVar18) {
    puVar19 = (undefined4 *)param_1[5];
    puVar10 = (ulong *)param_1[7];
    puVar20 = puVar19;
    uVar23 = uVar18;
    do {
      uVar18 = -(*puVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (*puVar10 & 0xffffffff) << 2;
      uVar2 = *puVar20;
      *puVar20 = *(undefined4 *)((long)puVar19 + uVar18);
      *(undefined4 *)((long)puVar19 + uVar18) = uVar2;
      uVar23 = uVar23 - 1;
      uVar18 = 0;
      puVar10 = puVar10 + 1;
      puVar20 = puVar20 + 1;
    } while (uVar23 != 0);
  }
  param_1[0x13] = uVar16;
  *(undefined1 *)(param_1 + 0xf) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_178 = FUN_10990eac0;
    uVar23 = puVar5[1];
    lVar28 = uVar23 - 1;
    if (lVar28 == 0) {
      dVar32 = 1.0 - *param_3;
      pdVar11 = (double *)*puVar5;
      uVar18 = puVar5[2];
      if (((ulong)pdVar11 & 7) == 0) {
        uVar21 = (ulong)pdVar11 >> 3 & 1;
        if ((long)uVar18 <= (long)uVar21) {
          uVar21 = uVar18;
        }
        if (0 < (long)uVar21) {
          *pdVar11 = dVar32 * *pdVar11;
        }
        lVar28 = (uVar18 - uVar21 & 0xfffffffffffffffe) + uVar21;
        if (1 < (long)(uVar18 - uVar21)) {
          pdVar24 = pdVar11 + uVar21;
          do {
            pdVar24[1] = pdVar24[1] * dVar32;
            *pdVar24 = *pdVar24 * dVar32;
            uVar21 = uVar21 + 2;
            pdVar24 = pdVar24 + 2;
          } while ((long)uVar21 < lVar28);
        }
        for (; lVar28 < (long)uVar18; lVar28 = lVar28 + 1) {
          pdVar11[lVar28] = dVar32 * pdVar11[lVar28];
        }
      }
      else if (0 < (long)uVar18) {
        do {
          *pdVar11 = dVar32 * *pdVar11;
          uVar18 = uVar18 - 1;
          pdVar11 = pdVar11 + 1;
        } while (uVar18 != 0);
      }
    }
    else if (*param_3 != 0.0) {
      uVar12 = *puVar5;
      uVar22 = puVar5[2];
      uVar1 = puVar5[3];
      lVar8 = *(long *)(uVar1 + 0x10);
      pdVar11 = (double *)*param_2;
      lVar30 = param_2[6];
      uVar26 = (ulong)param_4 >> 3 & 1;
      if ((long)uVar22 <= (long)uVar26) {
        uVar26 = uVar22;
      }
      if (((ulong)param_4 & 7) != 0) {
        uVar26 = uVar22;
      }
      lVar7 = uVar22 - uVar26;
      uStack_1d0 = unaff_x28;
      lStack_1c8 = unaff_x27;
      lStack_1c0 = unaff_x26;
      uStack_1b8 = uVar18;
      lStack_1b0 = unaff_x24;
      uStack_1a8 = unaff_x23;
      uStack_1a0 = uVar17;
      uStack_198 = uVar16;
      uStack_190 = uVar21;
      puStack_188 = param_1;
      puStack_180 = &stack0xfffffffffffffff0;
      if (0 < (long)uVar26) {
        _bzero(param_4,uVar26 << 3);
      }
      lVar31 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar26;
      if (1 < lVar7) {
        lVar13 = lVar31;
        if (lVar31 <= (long)(uVar26 + 2)) {
          lVar13 = uVar26 + 2;
        }
        _bzero(param_4 + uVar26,(lVar13 + ~uVar26 & 0x1ffffffffffffffe) * 8 + 0x10);
      }
      lVar13 = lVar7 / 2;
      pdVar24 = (double *)(uVar12 + lVar8 * 8);
      if (lVar31 < (long)uVar22) {
        _bzero(param_4 + lVar13 * 2 + uVar26,(lVar7 % 2) * 8);
      }
      if (uVar22 == 1) {
        if (lVar28 == 0) {
          dVar32 = 0.0;
        }
        else {
          dVar32 = *pdVar11 * *pdVar24;
          if (2 < (long)uVar23) {
            lVar14 = uVar23 - 2;
            pdVar6 = (double *)(uVar12 + lVar8 * 8 + *(long *)(uVar1 + 0x10) * 8);
            do {
              pdVar11 = pdVar11 + *(long *)(lVar30 + 0x10);
              dVar32 = dVar32 + *pdVar11 * *pdVar6;
              pdVar6 = pdVar6 + *(long *)(uVar1 + 0x10);
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        }
        *param_4 = dVar32 + *param_4;
      }
      else {
        uStack_1d8 = *(undefined8 *)(uVar1 + 0x10);
        uStack_1e8 = *(undefined8 *)(lVar30 + 0x10);
        pdStack_1f0 = pdVar11;
        pdStack_1e0 = pdVar24;
        FUN_109909a3c(0x3ff0000000000000,uVar22,lVar28,&pdStack_1e0,&pdStack_1f0,param_4,1);
      }
      pdVar15 = (double *)*puVar5;
      pdVar11 = param_4;
      pdVar6 = pdVar15;
      uVar18 = uVar26;
      if (0 < (long)uVar26) {
        do {
          *pdVar11 = *pdVar6 + *pdVar11;
          uVar18 = uVar18 - 1;
          pdVar11 = pdVar11 + 1;
          pdVar6 = pdVar6 + 1;
        } while (uVar18 != 0);
      }
      if (1 < lVar7) {
        pdVar11 = pdVar15 + uVar26;
        uVar18 = uVar26;
        pdVar6 = param_4 + uVar26;
        do {
          dVar32 = *pdVar11;
          pdVar6[1] = pdVar11[1] + pdVar6[1];
          *pdVar6 = dVar32 + *pdVar6;
          uVar18 = uVar18 + 2;
          pdVar11 = pdVar11 + 2;
          pdVar6 = pdVar6 + 2;
        } while ((long)uVar18 < lVar31);
      }
      if (lVar31 < (long)uVar22) {
        lVar7 = lVar7 % 2;
        pdVar11 = pdVar15 + uVar26 + lVar13 * 2;
        pdVar6 = param_4 + uVar26 + lVar13 * 2;
        do {
          *pdVar6 = *pdVar11 + *pdVar6;
          lVar7 = lVar7 + -1;
          pdVar11 = pdVar11 + 1;
          pdVar6 = pdVar6 + 1;
        } while (lVar7 != 0);
      }
      dVar32 = *param_3;
      pdVar11 = (double *)*puVar5;
      uVar21 = puVar5[2];
      uVar18 = (ulong)pdVar11 >> 3 & 1;
      if ((long)uVar21 <= (long)uVar18) {
        uVar18 = uVar21;
      }
      if (((ulong)pdVar11 & 7) != 0) {
        uVar18 = uVar21;
      }
      lVar30 = uVar21 - uVar18;
      pdVar6 = pdVar11;
      pdVar15 = param_4;
      uVar16 = uVar18;
      if (0 < (long)uVar18) {
        do {
          *pdVar6 = *pdVar6 - dVar32 * *pdVar15;
          uVar16 = uVar16 - 1;
          pdVar6 = pdVar6 + 1;
          pdVar15 = pdVar15 + 1;
        } while (uVar16 != 0);
      }
      lVar8 = (lVar30 - (lVar30 >> 0x3f) & 0xfffffffffffffffeU) + uVar18;
      if (1 < lVar30) {
        pdVar6 = param_4 + uVar18;
        uVar16 = uVar18;
        pdVar15 = pdVar11 + uVar18;
        do {
          dVar36 = *pdVar6;
          pdVar15[1] = pdVar15[1] - pdVar6[1] * dVar32;
          *pdVar15 = *pdVar15 - dVar36 * dVar32;
          uVar16 = uVar16 + 2;
          pdVar6 = pdVar6 + 2;
          pdVar15 = pdVar15 + 2;
        } while ((long)uVar16 < lVar8);
      }
      if (lVar8 < (long)uVar21) {
        lVar8 = lVar30 % 2;
        pdVar11 = pdVar11 + uVar18 + (lVar30 / 2) * 2;
        pdVar6 = param_4 + uVar18 + (lVar30 / 2) * 2;
        do {
          *pdVar11 = *pdVar11 - dVar32 * *pdVar6;
          lVar8 = lVar8 + -1;
          pdVar11 = pdVar11 + 1;
          pdVar6 = pdVar6 + 1;
        } while (lVar8 != 0);
      }
      if (1 < (long)uVar23) {
        lVar8 = 0;
        lVar30 = 0;
        dVar32 = *param_3;
        lVar7 = *param_2;
        lVar31 = *(long *)(param_2[6] + 0x10);
        do {
          lVar13 = *(long *)(uVar1 + 0x10);
          dVar36 = dVar32 * *(double *)(lVar7 + lVar30 * lVar31 * 8);
          uVar18 = (ulong)(pdVar24 + lVar13 * lVar30) >> 3 & 1;
          if ((long)uVar22 <= (long)uVar18) {
            uVar18 = uVar22;
          }
          if (((ulong)(pdVar24 + lVar13 * lVar30) & 7) != 0) {
            uVar18 = uVar22;
          }
          if (0 < (long)uVar18) {
            pdVar11 = (double *)((long)pdVar24 + lVar13 * lVar8);
            pdVar6 = param_4;
            uVar21 = uVar18;
            do {
              *pdVar11 = *pdVar11 - dVar36 * *pdVar6;
              uVar21 = uVar21 - 1;
              pdVar11 = pdVar11 + 1;
              pdVar6 = pdVar6 + 1;
            } while (uVar21 != 0);
          }
          lVar27 = uVar22 - uVar18;
          lVar14 = (lVar27 - (lVar27 >> 0x3f) & 0xfffffffffffffffeU) + uVar18;
          if (1 < lVar27) {
            pdVar11 = param_4 + uVar18;
            pdVar6 = (double *)((long)pdVar24 + lVar13 * lVar8 + uVar18 * 8);
            uVar21 = uVar18;
            do {
              dVar37 = *pdVar11;
              pdVar6[1] = pdVar6[1] - pdVar11[1] * dVar36;
              *pdVar6 = *pdVar6 - dVar37 * dVar36;
              uVar21 = uVar21 + 2;
              pdVar11 = pdVar11 + 2;
              pdVar6 = pdVar6 + 2;
            } while ((long)uVar21 < lVar14);
          }
          if (lVar14 < (long)uVar22) {
            lVar14 = lVar27 % 2;
            pdVar11 = (double *)((long)pdVar24 + (lVar27 / 2) * 0x10 + uVar18 * 8 + lVar13 * lVar8);
            pdVar6 = param_4 + uVar18 + (lVar27 / 2) * 2;
            do {
              *pdVar11 = *pdVar11 - dVar36 * *pdVar6;
              lVar14 = lVar14 + -1;
              pdVar11 = pdVar11 + 1;
              pdVar6 = pdVar6 + 1;
            } while (lVar14 != 0);
          }
          lVar30 = lVar30 + 1;
          lVar8 = lVar8 + 8;
        } while (lVar30 != lVar28);
      }
    }
    return;
  }
  return;
}



/* Entry: 10990eac0; end: 10990efd3;  */

void FUN_10990eac0(ulong *param_1,long *param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  ulong uVar2;
  double *pdVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double *pdStack_80;
  undefined8 uStack_78;
  double *pdStack_70;
  undefined8 uStack_68;
  
  uVar4 = param_1[1];
  lVar12 = uVar4 - 1;
  if (lVar12 == 0) {
    dVar19 = 1.0 - *param_3;
    pdVar5 = (double *)*param_1;
    uVar4 = param_1[2];
    if (((ulong)pdVar5 & 7) == 0) {
      uVar11 = (ulong)pdVar5 >> 3 & 1;
      if ((long)uVar4 <= (long)uVar11) {
        uVar11 = uVar4;
      }
      if (0 < (long)uVar11) {
        *pdVar5 = dVar19 * *pdVar5;
      }
      lVar12 = (uVar4 - uVar11 & 0xfffffffffffffffe) + uVar11;
      if (1 < (long)(uVar4 - uVar11)) {
        pdVar14 = pdVar5 + uVar11;
        do {
          pdVar14[1] = pdVar14[1] * dVar19;
          *pdVar14 = *pdVar14 * dVar19;
          uVar11 = uVar11 + 2;
          pdVar14 = pdVar14 + 2;
        } while ((long)uVar11 < lVar12);
      }
      for (; lVar12 < (long)uVar4; lVar12 = lVar12 + 1) {
        pdVar5[lVar12] = dVar19 * pdVar5[lVar12];
      }
    }
    else if (0 < (long)uVar4) {
      do {
        *pdVar5 = dVar19 * *pdVar5;
        uVar4 = uVar4 - 1;
        pdVar5 = pdVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (*param_3 != 0.0) {
    uVar6 = *param_1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    lVar18 = *(long *)(uVar2 + 0x10);
    pdVar5 = (double *)*param_2;
    lVar7 = param_2[6];
    uVar11 = (ulong)param_4 >> 3 & 1;
    if ((long)uVar1 <= (long)uVar11) {
      uVar11 = uVar1;
    }
    if (((ulong)param_4 & 7) != 0) {
      uVar11 = uVar1;
    }
    lVar17 = uVar1 - uVar11;
    if (0 < (long)uVar11) {
      _bzero(param_4,uVar11 << 3);
    }
    lVar13 = (lVar17 - (lVar17 >> 0x3f) & 0xfffffffffffffffeU) + uVar11;
    if (1 < lVar17) {
      lVar8 = lVar13;
      if (lVar13 <= (long)(uVar11 + 2)) {
        lVar8 = uVar11 + 2;
      }
      _bzero(param_4 + uVar11,(lVar8 + ~uVar11 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    lVar8 = lVar17 / 2;
    pdVar14 = (double *)(uVar6 + lVar18 * 8);
    if (lVar13 < (long)uVar1) {
      _bzero(param_4 + lVar8 * 2 + uVar11,(lVar17 % 2) * 8);
    }
    if (uVar1 == 1) {
      if (lVar12 == 0) {
        dVar19 = 0.0;
      }
      else {
        dVar19 = *pdVar5 * *pdVar14;
        if (2 < (long)uVar4) {
          lVar9 = uVar4 - 2;
          pdVar3 = (double *)(uVar6 + lVar18 * 8 + *(long *)(uVar2 + 0x10) * 8);
          do {
            pdVar5 = pdVar5 + *(long *)(lVar7 + 0x10);
            dVar19 = dVar19 + *pdVar5 * *pdVar3;
            pdVar3 = pdVar3 + *(long *)(uVar2 + 0x10);
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      *param_4 = dVar19 + *param_4;
    }
    else {
      uStack_68 = *(undefined8 *)(uVar2 + 0x10);
      uStack_78 = *(undefined8 *)(lVar7 + 0x10);
      pdStack_80 = pdVar5;
      pdStack_70 = pdVar14;
      FUN_109909a3c(0x3ff0000000000000,uVar1,lVar12,&pdStack_70,&pdStack_80,param_4,1);
    }
    pdVar10 = (double *)*param_1;
    pdVar5 = param_4;
    pdVar3 = pdVar10;
    uVar6 = uVar11;
    if (0 < (long)uVar11) {
      do {
        *pdVar5 = *pdVar3 + *pdVar5;
        uVar6 = uVar6 - 1;
        pdVar5 = pdVar5 + 1;
        pdVar3 = pdVar3 + 1;
      } while (uVar6 != 0);
    }
    if (1 < lVar17) {
      pdVar5 = pdVar10 + uVar11;
      uVar6 = uVar11;
      pdVar3 = param_4 + uVar11;
      do {
        dVar19 = *pdVar5;
        pdVar3[1] = pdVar5[1] + pdVar3[1];
        *pdVar3 = dVar19 + *pdVar3;
        uVar6 = uVar6 + 2;
        pdVar5 = pdVar5 + 2;
        pdVar3 = pdVar3 + 2;
      } while ((long)uVar6 < lVar13);
    }
    if (lVar13 < (long)uVar1) {
      lVar17 = lVar17 % 2;
      pdVar5 = pdVar10 + uVar11 + lVar8 * 2;
      pdVar3 = param_4 + uVar11 + lVar8 * 2;
      do {
        *pdVar3 = *pdVar5 + *pdVar3;
        lVar17 = lVar17 + -1;
        pdVar5 = pdVar5 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar17 != 0);
    }
    dVar19 = *param_3;
    pdVar5 = (double *)*param_1;
    uVar6 = param_1[2];
    uVar11 = (ulong)pdVar5 >> 3 & 1;
    if ((long)uVar6 <= (long)uVar11) {
      uVar11 = uVar6;
    }
    if (((ulong)pdVar5 & 7) != 0) {
      uVar11 = uVar6;
    }
    lVar7 = uVar6 - uVar11;
    pdVar3 = pdVar5;
    pdVar10 = param_4;
    uVar16 = uVar11;
    if (0 < (long)uVar11) {
      do {
        *pdVar3 = *pdVar3 - dVar19 * *pdVar10;
        uVar16 = uVar16 - 1;
        pdVar3 = pdVar3 + 1;
        pdVar10 = pdVar10 + 1;
      } while (uVar16 != 0);
    }
    lVar18 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar11;
    if (1 < lVar7) {
      pdVar3 = param_4 + uVar11;
      uVar16 = uVar11;
      pdVar10 = pdVar5 + uVar11;
      do {
        dVar20 = *pdVar3;
        pdVar10[1] = pdVar10[1] - pdVar3[1] * dVar19;
        *pdVar10 = *pdVar10 - dVar20 * dVar19;
        uVar16 = uVar16 + 2;
        pdVar3 = pdVar3 + 2;
        pdVar10 = pdVar10 + 2;
      } while ((long)uVar16 < lVar18);
    }
    if (lVar18 < (long)uVar6) {
      lVar18 = lVar7 % 2;
      pdVar5 = pdVar5 + uVar11 + (lVar7 / 2) * 2;
      pdVar3 = param_4 + uVar11 + (lVar7 / 2) * 2;
      do {
        *pdVar5 = *pdVar5 - dVar19 * *pdVar3;
        lVar18 = lVar18 + -1;
        pdVar5 = pdVar5 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar18 != 0);
    }
    if (1 < (long)uVar4) {
      lVar18 = 0;
      lVar7 = 0;
      dVar19 = *param_3;
      lVar17 = *param_2;
      lVar13 = *(long *)(param_2[6] + 0x10);
      do {
        lVar8 = *(long *)(uVar2 + 0x10);
        dVar20 = dVar19 * *(double *)(lVar17 + lVar7 * lVar13 * 8);
        uVar4 = (ulong)(pdVar14 + lVar8 * lVar7) >> 3 & 1;
        if ((long)uVar1 <= (long)uVar4) {
          uVar4 = uVar1;
        }
        if (((ulong)(pdVar14 + lVar8 * lVar7) & 7) != 0) {
          uVar4 = uVar1;
        }
        if (0 < (long)uVar4) {
          pdVar5 = (double *)((long)pdVar14 + lVar8 * lVar18);
          pdVar3 = param_4;
          uVar11 = uVar4;
          do {
            *pdVar5 = *pdVar5 - dVar20 * *pdVar3;
            uVar11 = uVar11 - 1;
            pdVar5 = pdVar5 + 1;
            pdVar3 = pdVar3 + 1;
          } while (uVar11 != 0);
        }
        lVar15 = uVar1 - uVar4;
        lVar9 = (lVar15 - (lVar15 >> 0x3f) & 0xfffffffffffffffeU) + uVar4;
        if (1 < lVar15) {
          pdVar5 = param_4 + uVar4;
          pdVar3 = (double *)((long)pdVar14 + lVar8 * lVar18 + uVar4 * 8);
          uVar11 = uVar4;
          do {
            dVar21 = *pdVar5;
            pdVar3[1] = pdVar3[1] - pdVar5[1] * dVar20;
            *pdVar3 = *pdVar3 - dVar21 * dVar20;
            uVar11 = uVar11 + 2;
            pdVar5 = pdVar5 + 2;
            pdVar3 = pdVar3 + 2;
          } while ((long)uVar11 < lVar9);
        }
        if (lVar9 < (long)uVar1) {
          lVar9 = lVar15 % 2;
          pdVar5 = (double *)((long)pdVar14 + (lVar15 / 2) * 0x10 + uVar4 * 8 + lVar8 * lVar18);
          pdVar3 = param_4 + uVar4 + (lVar15 / 2) * 2;
          do {
            *pdVar5 = *pdVar5 - dVar20 * *pdVar3;
            lVar9 = lVar9 + -1;
            pdVar5 = pdVar5 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar9 != 0);
        }
        lVar7 = lVar7 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar7 != lVar12);
    }
  }
  return;
}



/* Entry: 10990efd4; end: 10990f3d3;  */

void FUN_10990efd4(double **param_1,double **param_2,double ***param_3,double **param_4)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  double *pdVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  double **unaff_x19;
  long unaff_x20;
  double *unaff_x21;
  long lVar13;
  double *pdVar14;
  long unaff_x24;
  double *unaff_x25;
  double *unaff_x26;
  double *unaff_x27;
  long unaff_x28;
  double dVar15;
  double **ppdVar16;
  double **ppdVar17;
  double **ppdVar18;
  double *pdVar19;
  double *pdVar20;
  double dVar21;
  double *pdStack_270;
  double dStack_268;
  double *pdStack_260;
  double dStack_258;
  long lStack_250;
  double *pdStack_248;
  double *pdStack_240;
  double *pdStack_238;
  long lStack_230;
  double *pdStack_228;
  double **ppdStack_220;
  double *pdStack_218;
  long lStack_210;
  double **ppdStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  double *pdStack_1e8;
  double *pdStack_1e0;
  double dStack_1d8;
  double *pdStack_1d0;
  double *pdStack_1c8;
  double **ppdStack_1c0;
  double *pdStack_1b8;
  double ***pppdStack_1b0;
  double *pdStack_1a8;
  double *pdStack_1a0;
  long lStack_198;
  double *pdStack_190;
  double *pdStack_188;
  double *pdStack_180;
  double **ppdStack_170;
  double *pdStack_168;
  double *pdStack_158;
  double *pdStack_150;
  double *pdStack_148;
  double *pdStack_140;
  double *pdStack_138;
  double *pdStack_130;
  double *pdStack_128;
  double *pdStack_120;
  double *pdStack_118;
  double *pdStack_110;
  long lStack_108;
  double *pdStack_100;
  double *pdStack_f8;
  double *pdStack_f0;
  double *pdStack_e8;
  double *pdStack_e0;
  double *pdStack_d8;
  double *pdStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  double *pdStack_b0;
  double *pdStack_a8;
  double *pdStack_a0;
  double *pdStack_90;
  double *pdStack_88;
  double *pdStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar14 = param_1[2];
  lVar1 = (long)pdVar14 - 1;
  ppdVar18 = param_1;
  if (lVar1 == 0) {
    dVar15 = 1.0 - (double)*param_3;
    dVar8 = param_1[3][2];
    pdVar2 = *param_1;
    pdVar9 = param_1[1];
    if (((ulong)pdVar2 & 7) == 0) {
      if (0 < (long)pdVar9) {
        do {
          *pdVar2 = dVar15 * *pdVar2;
          pdVar2 = pdVar2 + (long)dVar8;
          pdVar9 = (double *)((long)pdVar9 - 1);
        } while (pdVar9 != (double *)0x0);
      }
    }
    else if (0 < (long)pdVar9) {
      do {
        *pdVar2 = dVar15 * *pdVar2;
        pdVar2 = pdVar2 + (long)dVar8;
        pdVar9 = (double *)((long)pdVar9 - 1);
      } while (pdVar9 != (double *)0x0);
    }
    goto LAB_10990f394;
  }
  if ((double)*param_3 == 0.0) goto LAB_10990f394;
  unaff_x25 = param_1[1];
  pdStack_80 = param_1[2];
  pdVar2 = *param_1;
  pdStack_88 = param_1[1];
  pdStack_90 = *param_1;
  pdStack_1a0 = param_1[3];
  pdStack_a8 = param_1[5];
  pdStack_b0 = param_1[4];
  pdStack_a0 = param_1[6];
  dStack_1d8 = pdStack_1a0[2];
  pdStack_1a8 = *param_2;
  pdStack_1e0 = param_2[1];
  pdStack_1c8 = param_2[2];
  pdStack_1d0 = param_2[1];
  pdStack_1b8 = param_2[3];
  pdStack_188 = param_2[5];
  pdStack_190 = param_2[4];
  unaff_x26 = (double *)((ulong)param_4 >> 3 & 1);
  if ((long)unaff_x25 <= (long)unaff_x26) {
    unaff_x26 = unaff_x25;
  }
  pdStack_180 = param_2[6];
  if (((ulong)param_4 & 7) != 0) {
    unaff_x26 = unaff_x25;
  }
  unaff_x28 = (long)unaff_x25 - (long)unaff_x26;
  ppdVar17 = param_4;
  ppdStack_1c0 = param_2;
  pppdStack_1b0 = param_3;
  lStack_198 = lVar1;
  ppdStack_170 = param_4;
  pdStack_168 = unaff_x25;
  if (0 < (long)unaff_x26) {
    param_2 = (double **)((long)unaff_x26 << 3);
    ppdVar18 = param_4;
    _bzero();
  }
  unaff_x24 = (unaff_x28 - (unaff_x28 >> 0x3f) & 0xfffffffffffffffeU) + (long)unaff_x26;
  if (1 < unaff_x28) {
    ppdVar18 = param_4 + (long)unaff_x26;
    lVar1 = unaff_x24;
    if (unaff_x24 <= (long)((long)unaff_x26 + 2U)) {
      lVar1 = (long)unaff_x26 + 2U;
    }
    param_2 = (double **)((lVar1 + ~(ulong)unaff_x26 & 0x1ffffffffffffffe) * 8 + 0x10);
    _bzero();
  }
  unaff_x27 = pdVar2 + 1;
  pdStack_1e8 = pdVar2;
  if (unaff_x24 < (long)unaff_x25) {
    ppdVar18 = param_4 + (unaff_x28 / 2) * 2 + (long)unaff_x26;
    param_2 = (double **)((unaff_x28 % 2) * 8);
    _bzero();
  }
  unaff_x20 = lStack_198;
  unaff_x21 = pdStack_1a0;
  pdStack_158 = (double *)0x3ff0000000000000;
  if (unaff_x25 == (double *)0x1) {
    if (pdStack_1e0 == (double *)0x0) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = *unaff_x27 * *pdStack_1a8;
      if (1 < (long)pdStack_1e0) {
        lVar1 = (long)pdStack_1e0 + -1;
        pdVar9 = pdStack_1e8 + 2;
        pdVar2 = pdStack_1a8;
        do {
          pdVar2 = pdVar2 + (long)pdStack_1b8[2];
          dVar8 = dVar8 + *pdVar9 * *pdVar2;
          lVar1 = lVar1 + -1;
          pdVar9 = pdVar9 + 1;
        } while (lVar1 != 0);
      }
    }
    *param_4 = (double *)(dVar8 + (double)*param_4);
    pdVar2 = *param_1;
    dVar8 = param_1[3][2];
    pdVar9 = (double *)0x1;
    pdVar4 = pdVar2;
    ppdVar16 = param_4;
    param_4 = ppdVar17;
LAB_10990f2b8:
    do {
      *ppdVar16 = (double *)(*pdVar4 + (double)*ppdVar16);
      pdVar9 = (double *)((long)pdVar9 - 1);
      pdVar4 = pdVar4 + (long)dVar8;
      ppdVar16 = ppdVar16 + 1;
    } while (pdVar9 != (double *)0x0);
    dVar8 = param_1[3][2];
  }
  else {
    pdStack_f8 = pdStack_88;
    pdStack_100 = pdStack_90;
    lStack_108 = lStack_198;
    pdStack_f0 = pdStack_80;
    pdStack_e8 = pdStack_1a0;
    pdStack_d8 = pdStack_a8;
    pdStack_e0 = pdStack_b0;
    pdStack_d0 = pdStack_a0;
    uStack_c0 = 1;
    uStack_c8 = 0;
    dStack_b8 = dStack_1d8;
    pdStack_150 = pdStack_1a8;
    pdStack_140 = pdStack_1c8;
    pdStack_148 = pdStack_1d0;
    pdStack_138 = pdStack_1b8;
    pdStack_128 = pdStack_188;
    pdStack_130 = pdStack_190;
    pdStack_120 = pdStack_180;
    ppdVar18 = &pdStack_118;
    param_2 = &pdStack_150;
    param_3 = &ppdStack_170;
    param_4 = &pdStack_158;
    pdStack_118 = unaff_x27;
    pdStack_110 = unaff_x25;
    FUN_10990f8e8();
    pdVar2 = *param_1;
    dVar8 = param_1[3][2];
    pdVar9 = pdStack_168;
    pdVar4 = pdVar2;
    ppdVar16 = ppdStack_170;
    if (0 < (long)pdStack_168) goto LAB_10990f2b8;
  }
  ppdVar16 = *pppdStack_1b0;
  pdVar9 = param_1[1];
  ppdVar17 = ppdStack_170;
  if (0 < (long)pdVar9) {
    do {
      *pdVar2 = *pdVar2 - (double)ppdVar16 * (double)*ppdVar17;
      pdVar2 = pdVar2 + (long)dVar8;
      pdVar9 = (double *)((long)pdVar9 - 1);
      ppdVar17 = ppdVar17 + 1;
    } while (pdVar9 != (double *)0x0);
    ppdVar16 = *pppdStack_1b0;
  }
  unaff_x19 = ppdStack_170;
  if (0 < (long)unaff_x25) {
    pdVar2 = (double *)0x0;
    pdVar9 = *ppdStack_1c0;
    dVar15 = unaff_x21[2];
    dVar8 = ppdStack_1c0[3][2];
    do {
      if (1 < (long)pdVar14) {
        pdVar19 = ppdStack_170[(long)pdVar2];
        pdVar11 = unaff_x27;
        pdVar4 = pdVar9;
        lVar1 = unaff_x20;
        do {
          *pdVar11 = *pdVar11 - (double)ppdVar16 * (double)pdVar19 * *pdVar4;
          pdVar4 = pdVar4 + (long)dVar8;
          lVar1 = lVar1 + -1;
          pdVar11 = pdVar11 + 1;
        } while (lVar1 != 0);
      }
      pdVar2 = (double *)((long)pdVar2 + 1);
      unaff_x27 = unaff_x27 + (long)dVar15;
    } while (pdVar2 != unaff_x25);
  }
LAB_10990f394:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_1f8 = FUN_10990f3d4;
    pdVar2 = ppdVar18[1];
    lVar1 = (long)pdVar2 - 1;
    if (lVar1 == 0) {
      dVar8 = 1.0 - (double)*param_3;
      pdVar2 = *ppdVar18;
      pdVar14 = ppdVar18[2];
      if (((ulong)pdVar2 & 7) == 0) {
        pdVar9 = (double *)((ulong)pdVar2 >> 3 & 1);
        if ((long)pdVar14 <= (long)pdVar9) {
          pdVar9 = pdVar14;
        }
        if (0 < (long)pdVar9) {
          *pdVar2 = dVar8 * *pdVar2;
        }
        lVar1 = ((long)pdVar14 - (long)pdVar9 & 0xfffffffffffffffeU) + (long)pdVar9;
        if (1 < (long)pdVar14 - (long)pdVar9) {
          pdVar4 = pdVar2 + (long)pdVar9;
          do {
            pdVar4[1] = pdVar4[1] * dVar8;
            *pdVar4 = *pdVar4 * dVar8;
            pdVar9 = (double *)((long)pdVar9 + 2);
            pdVar4 = pdVar4 + 2;
          } while ((long)pdVar9 < lVar1);
        }
        for (; lVar1 < (long)pdVar14; lVar1 = lVar1 + 1) {
          pdVar2[lVar1] = dVar8 * pdVar2[lVar1];
        }
      }
      else if (0 < (long)pdVar14) {
        do {
          *pdVar2 = dVar8 * *pdVar2;
          pdVar14 = (double *)((long)pdVar14 - 1);
          pdVar2 = pdVar2 + 1;
        } while (pdVar14 != (double *)0x0);
      }
    }
    else if ((double)*param_3 != 0.0) {
      pdVar9 = *ppdVar18;
      pdVar11 = ppdVar18[2];
      pdVar19 = ppdVar18[3];
      dVar8 = pdVar19[2];
      pdVar7 = *param_2;
      pdVar3 = param_2[3];
      pdVar4 = (double *)((ulong)param_4 >> 3 & 1);
      if ((long)pdVar11 <= (long)pdVar4) {
        pdVar4 = pdVar11;
      }
      if (((ulong)param_4 & 7) != 0) {
        pdVar4 = pdVar11;
      }
      lVar13 = (long)pdVar11 - (long)pdVar4;
      lStack_250 = unaff_x28;
      pdStack_248 = unaff_x27;
      pdStack_240 = unaff_x26;
      pdStack_238 = unaff_x25;
      lStack_230 = unaff_x24;
      pdStack_228 = pdVar14;
      ppdStack_220 = param_1;
      pdStack_218 = unaff_x21;
      lStack_210 = unaff_x20;
      ppdStack_208 = unaff_x19;
      puStack_200 = &stack0xfffffffffffffff0;
      if (0 < (long)pdVar4) {
        _bzero(param_4,(long)pdVar4 << 3);
      }
      lVar10 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar4;
      if (1 < lVar13) {
        lVar5 = lVar10;
        if (lVar10 <= (long)((long)pdVar4 + 2U)) {
          lVar5 = (long)pdVar4 + 2U;
        }
        _bzero(param_4 + (long)pdVar4,(lVar5 + ~(ulong)pdVar4 & 0x1ffffffffffffffe) * 8 + 0x10);
      }
      lVar5 = lVar13 / 2;
      pdVar14 = pdVar9 + (long)dVar8;
      if (lVar10 < (long)pdVar11) {
        _bzero(param_4 + lVar5 * 2 + (long)pdVar4,(lVar13 % 2) * 8);
      }
      if (pdVar11 == (double *)0x1) {
        if (lVar1 == 0) {
          dVar15 = 0.0;
        }
        else {
          dVar15 = *pdVar7 * *pdVar14;
          if (2 < (long)pdVar2) {
            lVar6 = (long)pdVar2 - 2;
            pdVar9 = pdVar9 + (long)pdVar19[2] + (long)dVar8;
            do {
              pdVar7 = pdVar7 + (long)pdVar3[2];
              dVar15 = dVar15 + *pdVar7 * *pdVar9;
              pdVar9 = pdVar9 + (long)pdVar19[2];
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
        }
        *param_4 = (double *)(dVar15 + (double)*param_4);
      }
      else {
        dStack_258 = pdVar19[2];
        dStack_268 = pdVar3[2];
        pdStack_270 = pdVar7;
        pdStack_260 = pdVar14;
        FUN_109909a3c(0x3ff0000000000000,pdVar11,lVar1,&pdStack_260,&pdStack_270,param_4,1);
      }
      pdVar3 = *ppdVar18;
      ppdVar17 = param_4;
      pdVar7 = pdVar3;
      pdVar9 = pdVar4;
      if (0 < (long)pdVar4) {
        do {
          *ppdVar17 = (double *)(*pdVar7 + (double)*ppdVar17);
          pdVar9 = (double *)((long)pdVar9 - 1);
          ppdVar17 = ppdVar17 + 1;
          pdVar7 = pdVar7 + 1;
        } while (pdVar9 != (double *)0x0);
      }
      if (1 < lVar13) {
        pdVar7 = pdVar3 + (long)pdVar4;
        pdVar9 = pdVar4;
        ppdVar17 = param_4 + (long)pdVar4;
        do {
          dVar8 = *pdVar7;
          ppdVar17[1] = (double *)(pdVar7[1] + (double)ppdVar17[1]);
          *ppdVar17 = (double *)(dVar8 + (double)*ppdVar17);
          pdVar9 = (double *)((long)pdVar9 + 2);
          pdVar7 = pdVar7 + 2;
          ppdVar17 = ppdVar17 + 2;
        } while ((long)pdVar9 < lVar10);
      }
      if (lVar10 < (long)pdVar11) {
        lVar13 = lVar13 % 2;
        pdVar9 = pdVar3 + (long)pdVar4 + lVar5 * 2;
        ppdVar17 = param_4 + (long)pdVar4 + lVar5 * 2;
        do {
          *ppdVar17 = (double *)(*pdVar9 + (double)*ppdVar17);
          lVar13 = lVar13 + -1;
          pdVar9 = pdVar9 + 1;
          ppdVar17 = ppdVar17 + 1;
        } while (lVar13 != 0);
      }
      ppdVar17 = *param_3;
      pdVar4 = *ppdVar18;
      pdVar7 = ppdVar18[2];
      pdVar9 = (double *)((ulong)pdVar4 >> 3 & 1);
      if ((long)pdVar7 <= (long)pdVar9) {
        pdVar9 = pdVar7;
      }
      if (((ulong)pdVar4 & 7) != 0) {
        pdVar9 = pdVar7;
      }
      lVar13 = (long)pdVar7 - (long)pdVar9;
      pdVar12 = pdVar4;
      ppdVar18 = param_4;
      pdVar3 = pdVar9;
      if (0 < (long)pdVar9) {
        do {
          *pdVar12 = *pdVar12 - (double)ppdVar17 * (double)*ppdVar18;
          pdVar3 = (double *)((long)pdVar3 - 1);
          pdVar12 = pdVar12 + 1;
          ppdVar18 = ppdVar18 + 1;
        } while (pdVar3 != (double *)0x0);
      }
      lVar10 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar9;
      if (1 < lVar13) {
        ppdVar18 = param_4 + (long)pdVar9;
        pdVar3 = pdVar9;
        pdVar12 = pdVar4 + (long)pdVar9;
        do {
          pdVar20 = *ppdVar18;
          pdVar12[1] = pdVar12[1] - (double)ppdVar18[1] * (double)ppdVar17;
          *pdVar12 = *pdVar12 - (double)pdVar20 * (double)ppdVar17;
          pdVar3 = (double *)((long)pdVar3 + 2);
          ppdVar18 = ppdVar18 + 2;
          pdVar12 = pdVar12 + 2;
        } while ((long)pdVar3 < lVar10);
      }
      if (lVar10 < (long)pdVar7) {
        lVar10 = lVar13 % 2;
        pdVar4 = pdVar4 + (long)pdVar9 + (lVar13 / 2) * 2;
        ppdVar18 = param_4 + (long)pdVar9 + (lVar13 / 2) * 2;
        do {
          *pdVar4 = *pdVar4 - (double)ppdVar17 * (double)*ppdVar18;
          lVar10 = lVar10 + -1;
          pdVar4 = pdVar4 + 1;
          ppdVar18 = ppdVar18 + 1;
        } while (lVar10 != 0);
      }
      if (1 < (long)pdVar2) {
        lVar10 = 0;
        lVar13 = 0;
        ppdVar18 = *param_3;
        pdVar2 = *param_2;
        dVar8 = param_2[3][2];
        do {
          dVar15 = pdVar19[2];
          dVar21 = (double)ppdVar18 * pdVar2[lVar13 * (long)dVar8];
          pdVar9 = (double *)((ulong)(pdVar14 + (long)dVar15 * lVar13) >> 3 & 1);
          if ((long)pdVar11 <= (long)pdVar9) {
            pdVar9 = pdVar11;
          }
          if (((ulong)(pdVar14 + (long)dVar15 * lVar13) & 7) != 0) {
            pdVar9 = pdVar11;
          }
          if (0 < (long)pdVar9) {
            pdVar7 = (double *)((long)pdVar14 + (long)dVar15 * lVar10);
            ppdVar17 = param_4;
            pdVar4 = pdVar9;
            do {
              *pdVar7 = *pdVar7 - dVar21 * (double)*ppdVar17;
              pdVar4 = (double *)((long)pdVar4 - 1);
              pdVar7 = pdVar7 + 1;
              ppdVar17 = ppdVar17 + 1;
            } while (pdVar4 != (double *)0x0);
          }
          lVar6 = (long)pdVar11 - (long)pdVar9;
          lVar5 = (lVar6 - (lVar6 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar9;
          if (1 < lVar6) {
            ppdVar17 = param_4 + (long)pdVar9;
            pdVar7 = (double *)((long)pdVar14 + (long)dVar15 * lVar10 + (long)pdVar9 * 8);
            pdVar4 = pdVar9;
            do {
              pdVar3 = *ppdVar17;
              pdVar7[1] = pdVar7[1] - (double)ppdVar17[1] * dVar21;
              *pdVar7 = *pdVar7 - (double)pdVar3 * dVar21;
              pdVar4 = (double *)((long)pdVar4 + 2);
              ppdVar17 = ppdVar17 + 2;
              pdVar7 = pdVar7 + 2;
            } while ((long)pdVar4 < lVar5);
          }
          if (lVar5 < (long)pdVar11) {
            lVar5 = lVar6 % 2;
            pdVar4 = (double *)
                     ((long)pdVar14 + (lVar6 / 2) * 0x10 + (long)pdVar9 * 8 + (long)dVar15 * lVar10)
            ;
            ppdVar17 = param_4 + (long)pdVar9 + (lVar6 / 2) * 2;
            do {
              *pdVar4 = *pdVar4 - dVar21 * (double)*ppdVar17;
              lVar5 = lVar5 + -1;
              pdVar4 = pdVar4 + 1;
              ppdVar17 = ppdVar17 + 1;
            } while (lVar5 != 0);
          }
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + 8;
        } while (lVar13 != lVar1);
      }
    }
    return;
  }
  return;
}



/* Entry: 10990f3d4; end: 10990f8e7;  */

void FUN_10990f3d4(ulong *param_1,long *param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  ulong uVar2;
  double *pdVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double *pdStack_80;
  undefined8 uStack_78;
  double *pdStack_70;
  undefined8 uStack_68;
  
  uVar4 = param_1[1];
  lVar12 = uVar4 - 1;
  if (lVar12 == 0) {
    dVar19 = 1.0 - *param_3;
    pdVar5 = (double *)*param_1;
    uVar4 = param_1[2];
    if (((ulong)pdVar5 & 7) == 0) {
      uVar11 = (ulong)pdVar5 >> 3 & 1;
      if ((long)uVar4 <= (long)uVar11) {
        uVar11 = uVar4;
      }
      if (0 < (long)uVar11) {
        *pdVar5 = dVar19 * *pdVar5;
      }
      lVar12 = (uVar4 - uVar11 & 0xfffffffffffffffe) + uVar11;
      if (1 < (long)(uVar4 - uVar11)) {
        pdVar14 = pdVar5 + uVar11;
        do {
          pdVar14[1] = pdVar14[1] * dVar19;
          *pdVar14 = *pdVar14 * dVar19;
          uVar11 = uVar11 + 2;
          pdVar14 = pdVar14 + 2;
        } while ((long)uVar11 < lVar12);
      }
      for (; lVar12 < (long)uVar4; lVar12 = lVar12 + 1) {
        pdVar5[lVar12] = dVar19 * pdVar5[lVar12];
      }
    }
    else if (0 < (long)uVar4) {
      do {
        *pdVar5 = dVar19 * *pdVar5;
        uVar4 = uVar4 - 1;
        pdVar5 = pdVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (*param_3 != 0.0) {
    uVar6 = *param_1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    lVar18 = *(long *)(uVar2 + 0x10);
    pdVar5 = (double *)*param_2;
    lVar7 = param_2[3];
    uVar11 = (ulong)param_4 >> 3 & 1;
    if ((long)uVar1 <= (long)uVar11) {
      uVar11 = uVar1;
    }
    if (((ulong)param_4 & 7) != 0) {
      uVar11 = uVar1;
    }
    lVar17 = uVar1 - uVar11;
    if (0 < (long)uVar11) {
      _bzero(param_4,uVar11 << 3);
    }
    lVar13 = (lVar17 - (lVar17 >> 0x3f) & 0xfffffffffffffffeU) + uVar11;
    if (1 < lVar17) {
      lVar8 = lVar13;
      if (lVar13 <= (long)(uVar11 + 2)) {
        lVar8 = uVar11 + 2;
      }
      _bzero(param_4 + uVar11,(lVar8 + ~uVar11 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    lVar8 = lVar17 / 2;
    pdVar14 = (double *)(uVar6 + lVar18 * 8);
    if (lVar13 < (long)uVar1) {
      _bzero(param_4 + lVar8 * 2 + uVar11,(lVar17 % 2) * 8);
    }
    if (uVar1 == 1) {
      if (lVar12 == 0) {
        dVar19 = 0.0;
      }
      else {
        dVar19 = *pdVar5 * *pdVar14;
        if (2 < (long)uVar4) {
          lVar9 = uVar4 - 2;
          pdVar3 = (double *)(uVar6 + lVar18 * 8 + *(long *)(uVar2 + 0x10) * 8);
          do {
            pdVar5 = pdVar5 + *(long *)(lVar7 + 0x10);
            dVar19 = dVar19 + *pdVar5 * *pdVar3;
            pdVar3 = pdVar3 + *(long *)(uVar2 + 0x10);
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      *param_4 = dVar19 + *param_4;
    }
    else {
      uStack_68 = *(undefined8 *)(uVar2 + 0x10);
      uStack_78 = *(undefined8 *)(lVar7 + 0x10);
      pdStack_80 = pdVar5;
      pdStack_70 = pdVar14;
      FUN_109909a3c(0x3ff0000000000000,uVar1,lVar12,&pdStack_70,&pdStack_80,param_4,1);
    }
    pdVar10 = (double *)*param_1;
    pdVar5 = param_4;
    pdVar3 = pdVar10;
    uVar6 = uVar11;
    if (0 < (long)uVar11) {
      do {
        *pdVar5 = *pdVar3 + *pdVar5;
        uVar6 = uVar6 - 1;
        pdVar5 = pdVar5 + 1;
        pdVar3 = pdVar3 + 1;
      } while (uVar6 != 0);
    }
    if (1 < lVar17) {
      pdVar5 = pdVar10 + uVar11;
      uVar6 = uVar11;
      pdVar3 = param_4 + uVar11;
      do {
        dVar19 = *pdVar5;
        pdVar3[1] = pdVar5[1] + pdVar3[1];
        *pdVar3 = dVar19 + *pdVar3;
        uVar6 = uVar6 + 2;
        pdVar5 = pdVar5 + 2;
        pdVar3 = pdVar3 + 2;
      } while ((long)uVar6 < lVar13);
    }
    if (lVar13 < (long)uVar1) {
      lVar17 = lVar17 % 2;
      pdVar5 = pdVar10 + uVar11 + lVar8 * 2;
      pdVar3 = param_4 + uVar11 + lVar8 * 2;
      do {
        *pdVar3 = *pdVar5 + *pdVar3;
        lVar17 = lVar17 + -1;
        pdVar5 = pdVar5 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar17 != 0);
    }
    dVar19 = *param_3;
    pdVar5 = (double *)*param_1;
    uVar6 = param_1[2];
    uVar11 = (ulong)pdVar5 >> 3 & 1;
    if ((long)uVar6 <= (long)uVar11) {
      uVar11 = uVar6;
    }
    if (((ulong)pdVar5 & 7) != 0) {
      uVar11 = uVar6;
    }
    lVar7 = uVar6 - uVar11;
    pdVar3 = pdVar5;
    pdVar10 = param_4;
    uVar16 = uVar11;
    if (0 < (long)uVar11) {
      do {
        *pdVar3 = *pdVar3 - dVar19 * *pdVar10;
        uVar16 = uVar16 - 1;
        pdVar3 = pdVar3 + 1;
        pdVar10 = pdVar10 + 1;
      } while (uVar16 != 0);
    }
    lVar18 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar11;
    if (1 < lVar7) {
      pdVar3 = param_4 + uVar11;
      uVar16 = uVar11;
      pdVar10 = pdVar5 + uVar11;
      do {
        dVar20 = *pdVar3;
        pdVar10[1] = pdVar10[1] - pdVar3[1] * dVar19;
        *pdVar10 = *pdVar10 - dVar20 * dVar19;
        uVar16 = uVar16 + 2;
        pdVar3 = pdVar3 + 2;
        pdVar10 = pdVar10 + 2;
      } while ((long)uVar16 < lVar18);
    }
    if (lVar18 < (long)uVar6) {
      lVar18 = lVar7 % 2;
      pdVar5 = pdVar5 + uVar11 + (lVar7 / 2) * 2;
      pdVar3 = param_4 + uVar11 + (lVar7 / 2) * 2;
      do {
        *pdVar5 = *pdVar5 - dVar19 * *pdVar3;
        lVar18 = lVar18 + -1;
        pdVar5 = pdVar5 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar18 != 0);
    }
    if (1 < (long)uVar4) {
      lVar18 = 0;
      lVar7 = 0;
      dVar19 = *param_3;
      lVar17 = *param_2;
      lVar13 = *(long *)(param_2[3] + 0x10);
      do {
        lVar8 = *(long *)(uVar2 + 0x10);
        dVar20 = dVar19 * *(double *)(lVar17 + lVar7 * lVar13 * 8);
        uVar4 = (ulong)(pdVar14 + lVar8 * lVar7) >> 3 & 1;
        if ((long)uVar1 <= (long)uVar4) {
          uVar4 = uVar1;
        }
        if (((ulong)(pdVar14 + lVar8 * lVar7) & 7) != 0) {
          uVar4 = uVar1;
        }
        if (0 < (long)uVar4) {
          pdVar5 = (double *)((long)pdVar14 + lVar8 * lVar18);
          pdVar3 = param_4;
          uVar11 = uVar4;
          do {
            *pdVar5 = *pdVar5 - dVar20 * *pdVar3;
            uVar11 = uVar11 - 1;
            pdVar5 = pdVar5 + 1;
            pdVar3 = pdVar3 + 1;
          } while (uVar11 != 0);
        }
        lVar15 = uVar1 - uVar4;
        lVar9 = (lVar15 - (lVar15 >> 0x3f) & 0xfffffffffffffffeU) + uVar4;
        if (1 < lVar15) {
          pdVar5 = param_4 + uVar4;
          pdVar3 = (double *)((long)pdVar14 + lVar8 * lVar18 + uVar4 * 8);
          uVar11 = uVar4;
          do {
            dVar21 = *pdVar5;
            pdVar3[1] = pdVar3[1] - pdVar5[1] * dVar20;
            *pdVar3 = *pdVar3 - dVar21 * dVar20;
            uVar11 = uVar11 + 2;
            pdVar5 = pdVar5 + 2;
            pdVar3 = pdVar3 + 2;
          } while ((long)uVar11 < lVar9);
        }
        if (lVar9 < (long)uVar1) {
          lVar9 = lVar15 % 2;
          pdVar5 = (double *)((long)pdVar14 + (lVar15 / 2) * 0x10 + uVar4 * 8 + lVar8 * lVar18);
          pdVar3 = param_4 + uVar4 + (lVar15 / 2) * 2;
          do {
            *pdVar5 = *pdVar5 - dVar20 * *pdVar3;
            lVar9 = lVar9 + -1;
            pdVar5 = pdVar5 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar9 != 0);
        }
        lVar7 = lVar7 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar7 != lVar12);
    }
  }
  return;
}



/* Entry: 10990f8e8; end: 10990fa5b;  */

void FUN_10990f8e8(undefined8 *param_1,long *param_2,long *param_3,double *param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  double *pdVar11;
  long lVar12;
  double *pdVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  double *pdVar17;
  long lVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  ulong uVar23;
  long lVar24;
  double *pdVar25;
  ulong uVar26;
  ulong uVar27;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  ulong uVar28;
  undefined8 unaff_x24;
  undefined1 *puVar29;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar30;
  undefined8 unaff_x28;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double unaff_d8;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = param_2[1];
  if (uVar28 >> 0x3d == 0) {
    unaff_d8 = *param_4;
    puVar3 = (undefined1 *)(uVar28 << 3);
    if (uVar28 < 0x4001) goto LAB_10990f968;
    _malloc();
    unaff_x19 = param_3;
    unaff_x21 = param_1;
    unaff_x22 = param_2;
    if (puVar3 == (undefined1 *)0x0) goto LAB_10990f948;
  }
  else {
LAB_10990f948:
    param_2 = unaff_x22;
    param_1 = unaff_x21;
    param_3 = unaff_x19;
    puVar3 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10990f968:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar2 = auStack_80 + -((ulong)(puVar3 + 0x1e) & 0xfffffffffffffff0);
    puVar3 = auStack_80 + -((ulong)(puVar3 + 0x1e) & 0xfffffffffffffff0);
    if (uVar28 == 0) goto LAB_10990f9c4;
  }
  uVar14 = 0;
  puVar15 = (undefined8 *)*param_2;
  lVar16 = *(long *)(param_2[3] + 0x10);
  do {
    *(undefined8 *)(puVar3 + uVar14 * 8) = *puVar15;
    uVar14 = uVar14 + 1;
    puVar15 = puVar15 + lVar16;
  } while (uVar28 != uVar14);
LAB_10990f9c4:
  puVar29 = (undefined1 *)param_1[1];
  uVar14 = param_1[2];
  puStack_68 = (undefined1 *)*param_1;
  uStack_60 = *(undefined8 *)(param_1[6] + 0x10);
  uStack_70 = 1;
  lVar16 = *param_3;
  ppuVar9 = &puStack_68;
  ppuVar10 = &puStack_78;
  lVar12 = 1;
  puStack_78 = puVar3;
  FUN_10990fa5c();
  if (0x4000 < uVar28) {
    puVar29 = puVar3;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (0x4000 < uVar28) {
      _free(puVar3);
    }
    puVar4 = puVar29;
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(ulong *)(puVar2 + -0x38) = uVar28;
    *(long **)(puVar2 + -0x30) = param_2;
    *(undefined8 **)(puVar2 + -0x28) = param_1;
    *(undefined1 **)(puVar2 + -0x20) = puVar3;
    *(undefined1 **)(puVar2 + -0x18) = puVar29;
    *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar2 + -8) = FUN_10990fa5c;
    uVar28 = 0;
    puVar3 = ppuVar9[1];
    *(undefined1 **)(puVar2 + -0xb8) = *ppuVar9;
    *(undefined1 ***)(puVar2 + -0xb0) = ppuVar10;
    *(undefined1 **)(puVar2 + -0xc0) = puVar3;
    puVar29 = puVar4 + -3;
    *(undefined1 **)(puVar2 + -0xa8) = puVar4;
    if ((7 < (long)puVar4) && ((ulong)((long)puVar3 * 8) < 0x7d01)) {
      uVar28 = 0;
      lVar24 = *(long *)(puVar2 + -0xa8) + -7;
      *(undefined8 *)(puVar2 + -0x68) = **(undefined8 **)(puVar2 + -0xb0);
      *(ulong *)(puVar2 + -0xa0) = uVar14 & 0xfffffffffffffffe;
      *(long *)(puVar2 + -0x98) = lVar24;
      lVar18 = *(long *)(puVar2 + -0xc0);
      pdVar8 = *(double **)(puVar2 + -0xb8);
      pdVar25 = pdVar8 + lVar18 * 7;
      pdVar7 = pdVar8 + lVar18 * 6;
      pdVar13 = pdVar8 + (long)puVar3;
      pdVar11 = pdVar8 + lVar18 * 5;
      pdVar19 = pdVar8 + lVar18 * 3;
      pdVar21 = pdVar8 + lVar18 * 4;
      pdVar20 = pdVar8 + lVar18 * 2;
      *(undefined1 **)(puVar2 + -0x90) = puVar29;
      lVar30 = *(long *)(puVar2 + -0x68);
      do {
        if ((long)uVar14 < 2) {
          lVar5 = 0;
          dVar31 = 0.0;
          dVar46 = 0.0;
          dVar32 = 0.0;
          dVar47 = 0.0;
          dVar34 = 0.0;
          dVar39 = 0.0;
          dVar35 = 0.0;
          dVar36 = 0.0;
          dVar37 = 0.0;
          dVar38 = 0.0;
          dVar40 = 0.0;
          dVar48 = 0.0;
          dVar43 = 0.0;
          dVar41 = 0.0;
          dVar45 = 0.0;
          dVar33 = 0.0;
        }
        else {
          dVar45 = 0.0;
          dVar33 = 0.0;
          dVar43 = 0.0;
          dVar41 = 0.0;
          lVar5 = 2;
          dVar40 = 0.0;
          dVar48 = 0.0;
          dVar37 = 0.0;
          dVar38 = 0.0;
          dVar35 = 0.0;
          dVar36 = 0.0;
          dVar34 = 0.0;
          dVar39 = 0.0;
          dVar32 = 0.0;
          dVar47 = 0.0;
          dVar31 = 0.0;
          dVar46 = 0.0;
          pdVar17 = *(double **)(puVar2 + -0x68);
          pdVar22 = pdVar8;
          do {
            dVar44 = pdVar17[1];
            dVar42 = *pdVar17;
            dVar45 = dVar45 + dVar42 * *pdVar22;
            dVar33 = dVar33 + dVar44 * pdVar22[1];
            pdVar1 = pdVar22 + (long)puVar3;
            dVar43 = dVar43 + dVar42 * *pdVar1;
            dVar41 = dVar41 + dVar44 * pdVar1[1];
            pdVar1 = pdVar1 + (long)puVar3;
            dVar40 = dVar40 + dVar42 * *pdVar1;
            dVar48 = dVar48 + dVar44 * pdVar1[1];
            pdVar1 = pdVar1 + (long)puVar3;
            dVar37 = dVar37 + dVar42 * *pdVar1;
            dVar38 = dVar38 + dVar44 * pdVar1[1];
            pdVar1 = pdVar1 + (long)puVar3;
            dVar35 = dVar35 + dVar42 * *pdVar1;
            dVar36 = dVar36 + dVar44 * pdVar1[1];
            pdVar1 = pdVar1 + (long)puVar3;
            dVar34 = dVar34 + dVar42 * *pdVar1;
            dVar39 = dVar39 + dVar44 * pdVar1[1];
            pdVar1 = pdVar1 + (long)puVar3;
            dVar32 = dVar32 + dVar42 * *pdVar1;
            dVar47 = dVar47 + dVar44 * pdVar1[1];
            dVar31 = dVar31 + dVar42 * pdVar1[(long)puVar3];
            dVar46 = dVar46 + dVar44 * (pdVar1 + (long)puVar3)[1];
            lVar5 = lVar5 + 2;
            pdVar22 = pdVar22 + 2;
            pdVar17 = pdVar17 + 2;
          } while (lVar5 <= (long)uVar14);
          lVar5 = *(long *)(puVar2 + -0xa0);
        }
        dVar45 = dVar45 + dVar33;
        dVar43 = dVar43 + dVar41;
        dVar40 = dVar40 + dVar48;
        dVar37 = dVar37 + dVar38;
        dVar35 = dVar35 + dVar36;
        dVar34 = dVar34 + dVar39;
        dVar32 = dVar32 + dVar47;
        dVar31 = dVar31 + dVar46;
        if (lVar5 < (long)uVar14) {
          lVar24 = 0;
          *(ulong *)(puVar2 + -0x78) = uVar28 | 2;
          *(ulong *)(puVar2 + -0x88) = uVar28 | 3;
          *(ulong *)(puVar2 + -0x70) = uVar28 | 4;
          *(ulong *)(puVar2 + -0x80) = uVar28 | 6;
          do {
            dVar46 = *(double *)(lVar30 + lVar5 * 8 + lVar24 * 8);
            dVar45 = dVar45 + dVar46 * pdVar8[lVar5 + lVar24];
            dVar43 = dVar43 + dVar46 * pdVar13[lVar5 + lVar24];
            dVar40 = dVar40 + dVar46 * pdVar20[lVar5 + lVar24];
            dVar37 = dVar37 + dVar46 * pdVar19[lVar5 + lVar24];
            dVar35 = dVar35 + dVar46 * pdVar21[lVar5 + lVar24];
            dVar34 = dVar34 + dVar46 * pdVar11[lVar5 + lVar24];
            dVar32 = dVar32 + dVar46 * pdVar7[lVar5 + lVar24];
            dVar31 = dVar31 + dVar46 * pdVar25[lVar5 + lVar24];
            lVar24 = lVar24 + 1;
          } while (uVar14 - lVar5 != lVar24);
          lVar24 = *(long *)(puVar2 + -0x98);
          puVar29 = *(undefined1 **)(puVar2 + -0x90);
          uVar27 = *(ulong *)(puVar2 + -0x78);
          uVar23 = *(ulong *)(puVar2 + -0x70);
          uVar6 = *(ulong *)(puVar2 + -0x88);
          uVar26 = *(ulong *)(puVar2 + -0x80);
        }
        else {
          uVar27 = uVar28 | 2;
          uVar6 = uVar28 | 3;
          uVar23 = uVar28 | 4;
          uVar26 = uVar28 | 6;
        }
        *(double *)(lVar16 + uVar28 * lVar12 * 8) =
             *(double *)(lVar16 + uVar28 * lVar12 * 8) + dVar45 * unaff_d8;
        lVar5 = (uVar28 | 1) * lVar12;
        *(double *)(lVar16 + lVar5 * 8) = *(double *)(lVar16 + lVar5 * 8) + dVar43 * unaff_d8;
        *(double *)(lVar16 + uVar27 * lVar12 * 8) =
             *(double *)(lVar16 + uVar27 * lVar12 * 8) + dVar40 * unaff_d8;
        *(double *)(lVar16 + uVar6 * lVar12 * 8) =
             *(double *)(lVar16 + uVar6 * lVar12 * 8) + dVar37 * unaff_d8;
        *(double *)(lVar16 + uVar23 * lVar12 * 8) =
             *(double *)(lVar16 + uVar23 * lVar12 * 8) + dVar35 * unaff_d8;
        lVar5 = (uVar28 | 5) * lVar12;
        *(double *)(lVar16 + lVar5 * 8) = *(double *)(lVar16 + lVar5 * 8) + dVar34 * unaff_d8;
        *(double *)(lVar16 + uVar26 * lVar12 * 8) =
             *(double *)(lVar16 + uVar26 * lVar12 * 8) + dVar32 * unaff_d8;
        lVar5 = (uVar28 | 7) * lVar12;
        *(double *)(lVar16 + lVar5 * 8) = *(double *)(lVar16 + lVar5 * 8) + dVar31 * unaff_d8;
        uVar28 = uVar28 + 8;
        pdVar8 = pdVar8 + lVar18 * 8;
        pdVar25 = pdVar25 + lVar18 * 8;
        pdVar7 = pdVar7 + lVar18 * 8;
        pdVar11 = pdVar11 + lVar18 * 8;
        pdVar21 = pdVar21 + lVar18 * 8;
        pdVar19 = pdVar19 + lVar18 * 8;
        pdVar20 = pdVar20 + lVar18 * 8;
        pdVar13 = pdVar13 + lVar18 * 8;
      } while ((long)uVar28 < lVar24);
    }
    lVar18 = *(long *)(puVar2 + -0xa8);
    if ((long)uVar28 < (long)puVar29) {
      lVar24 = *(long *)(puVar2 + -0xb8);
      pdVar25 = (double *)**(long **)(puVar2 + -0xb0);
      lVar30 = *(long *)(puVar2 + -0xc0);
      pdVar13 = (double *)(lVar24 + lVar30 * (uVar28 + 3) * 8);
      pdVar21 = (double *)(lVar24 + lVar30 * (uVar28 + 2) * 8);
      pdVar20 = (double *)(lVar24 + (lVar30 + uVar28 * lVar30) * 8);
      pdVar8 = (double *)(lVar24 + uVar28 * lVar30 * 8);
      do {
        if ((long)uVar14 < 2) {
          dVar46 = 0.0;
          dVar39 = 0.0;
          dVar33 = 0.0;
          dVar35 = 0.0;
          dVar32 = 0.0;
          dVar34 = 0.0;
          dVar31 = 0.0;
          dVar45 = 0.0;
          uVar27 = 0;
        }
        else {
          dVar31 = 0.0;
          dVar45 = 0.0;
          dVar32 = 0.0;
          dVar34 = 0.0;
          lVar24 = 2;
          dVar33 = 0.0;
          dVar35 = 0.0;
          dVar46 = 0.0;
          dVar39 = 0.0;
          pdVar7 = pdVar21;
          pdVar11 = pdVar13;
          pdVar19 = pdVar25;
          pdVar22 = pdVar8;
          pdVar17 = pdVar20;
          do {
            dVar37 = pdVar19[1];
            dVar36 = *pdVar19;
            dVar31 = dVar31 + dVar36 * *pdVar22;
            dVar45 = dVar45 + dVar37 * pdVar22[1];
            dVar32 = dVar32 + dVar36 * *pdVar17;
            dVar34 = dVar34 + dVar37 * pdVar17[1];
            dVar33 = dVar33 + dVar36 * *pdVar7;
            dVar35 = dVar35 + dVar37 * pdVar7[1];
            dVar46 = dVar46 + dVar36 * *pdVar11;
            dVar39 = dVar39 + dVar37 * pdVar11[1];
            lVar24 = lVar24 + 2;
            pdVar7 = pdVar7 + 2;
            pdVar11 = pdVar11 + 2;
            pdVar19 = pdVar19 + 2;
            pdVar22 = pdVar22 + 2;
            pdVar17 = pdVar17 + 2;
            uVar27 = uVar14 & 0xfffffffffffffffe;
          } while (lVar24 <= (long)uVar14);
        }
        dVar31 = dVar31 + dVar45;
        dVar32 = dVar32 + dVar34;
        dVar33 = dVar33 + dVar35;
        dVar46 = dVar46 + dVar39;
        if ((long)uVar27 < (long)uVar14) {
          lVar24 = 0;
          do {
            dVar45 = pdVar25[uVar27 + lVar24];
            dVar31 = dVar31 + dVar45 * pdVar8[uVar27 + lVar24];
            dVar32 = dVar32 + dVar45 * pdVar20[uVar27 + lVar24];
            dVar33 = dVar33 + dVar45 * pdVar21[uVar27 + lVar24];
            dVar46 = dVar46 + dVar45 * pdVar13[uVar27 + lVar24];
            lVar24 = lVar24 + 1;
          } while (uVar14 - uVar27 != lVar24);
        }
        *(double *)(lVar16 + uVar28 * lVar12 * 8) =
             *(double *)(lVar16 + uVar28 * lVar12 * 8) + dVar31 * unaff_d8;
        lVar24 = (uVar28 + 1) * lVar12;
        *(double *)(lVar16 + lVar24 * 8) = *(double *)(lVar16 + lVar24 * 8) + dVar32 * unaff_d8;
        lVar24 = (uVar28 + 2) * lVar12;
        *(double *)(lVar16 + lVar24 * 8) = *(double *)(lVar16 + lVar24 * 8) + dVar33 * unaff_d8;
        lVar24 = (uVar28 + 3) * lVar12;
        *(double *)(lVar16 + lVar24 * 8) = *(double *)(lVar16 + lVar24 * 8) + dVar46 * unaff_d8;
        uVar28 = uVar28 + 4;
        pdVar13 = pdVar13 + lVar30 * 4;
        pdVar21 = pdVar21 + lVar30 * 4;
        pdVar20 = pdVar20 + lVar30 * 4;
        pdVar8 = pdVar8 + lVar30 * 4;
      } while ((long)uVar28 < (long)puVar29);
    }
    if ((long)uVar28 < lVar18 + -1) {
      pdVar20 = (double *)**(long **)(puVar2 + -0xb0);
      lVar24 = *(long *)(puVar2 + -0xc0);
      pdVar13 = (double *)(*(long *)(puVar2 + -0xb8) + (lVar24 + uVar28 * lVar24) * 8);
      pdVar21 = (double *)(*(long *)(puVar2 + -0xb8) + uVar28 * lVar24 * 8);
      do {
        if ((long)uVar14 < 2) {
          dVar45 = 0.0;
          dVar32 = 0.0;
          dVar31 = 0.0;
          dVar46 = 0.0;
          uVar27 = 0;
        }
        else {
          dVar31 = 0.0;
          dVar46 = 0.0;
          lVar30 = 2;
          dVar45 = 0.0;
          dVar32 = 0.0;
          pdVar8 = pdVar13;
          pdVar25 = pdVar20;
          pdVar7 = pdVar21;
          do {
            dVar45 = dVar45 + *pdVar25 * *pdVar7;
            dVar32 = dVar32 + pdVar25[1] * pdVar7[1];
            dVar31 = dVar31 + *pdVar25 * *pdVar8;
            dVar46 = dVar46 + pdVar25[1] * pdVar8[1];
            lVar30 = lVar30 + 2;
            pdVar8 = pdVar8 + 2;
            uVar27 = uVar14 & 0xfffffffffffffffe;
            pdVar25 = pdVar25 + 2;
            pdVar7 = pdVar7 + 2;
          } while (lVar30 <= (long)uVar14);
        }
        dVar45 = dVar45 + dVar32;
        dVar31 = dVar31 + dVar46;
        if ((long)uVar27 < (long)uVar14) {
          do {
            dVar46 = pdVar20[uVar27];
            dVar45 = dVar45 + dVar46 * pdVar21[uVar27];
            dVar31 = dVar31 + dVar46 * pdVar13[uVar27];
            uVar27 = uVar27 + 1;
          } while (uVar14 != uVar27);
        }
        *(double *)(lVar16 + uVar28 * lVar12 * 8) =
             *(double *)(lVar16 + uVar28 * lVar12 * 8) + dVar45 * unaff_d8;
        lVar30 = (uVar28 + 1) * lVar12;
        *(double *)(lVar16 + lVar30 * 8) = *(double *)(lVar16 + lVar30 * 8) + dVar31 * unaff_d8;
        uVar28 = uVar28 + 2;
        pdVar13 = pdVar13 + lVar24 * 2;
        pdVar21 = pdVar21 + lVar24 * 2;
      } while ((long)uVar28 < lVar18 + -1);
    }
    uVar27 = *(ulong *)(puVar2 + -0xa8);
    if ((long)uVar28 < (long)uVar27) {
      pdVar21 = (double *)**(long **)(puVar2 + -0xb0);
      pdVar13 = (double *)(*(long *)(puVar2 + -0xb8) + uVar28 * *(long *)(puVar2 + -0xc0) * 8);
      do {
        if ((long)uVar14 < 2) {
          dVar31 = 0.0;
          dVar46 = 0.0;
          uVar6 = 0;
        }
        else {
          dVar31 = 0.0;
          dVar46 = 0.0;
          lVar18 = 2;
          pdVar20 = pdVar21;
          pdVar8 = pdVar13;
          do {
            dVar31 = dVar31 + *pdVar20 * *pdVar8;
            dVar46 = dVar46 + pdVar20[1] * pdVar8[1];
            lVar18 = lVar18 + 2;
            uVar6 = uVar14 & 0xfffffffffffffffe;
            pdVar20 = pdVar20 + 2;
            pdVar8 = pdVar8 + 2;
          } while (lVar18 <= (long)uVar14);
        }
        dVar31 = dVar31 + dVar46;
        if ((long)uVar6 < (long)uVar14) {
          do {
            dVar31 = dVar31 + pdVar13[uVar6] * pdVar21[uVar6];
            uVar6 = uVar6 + 1;
          } while (uVar14 != uVar6);
        }
        *(double *)(lVar16 + uVar28 * lVar12 * 8) =
             *(double *)(lVar16 + uVar28 * lVar12 * 8) + dVar31 * unaff_d8;
        uVar28 = uVar28 + 1;
        pdVar13 = pdVar13 + (long)puVar3;
      } while (uVar28 != uVar27);
    }
    return;
  }
  return;
}



/* Entry: 10990fa5c; end: 109910107;  */

void FUN_10990fa5c(double param_1,ulong param_2,ulong param_3,long *param_4,long *param_5,
                  long param_6,long param_7)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  ulong uVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  
  uVar8 = 0;
  pdVar16 = (double *)*param_4;
  lVar2 = param_4[1];
  if ((7 < (long)param_2) && ((ulong)(lVar2 * 8) < 0x7d01)) {
    uVar8 = 0;
    pdVar9 = (double *)*param_5;
    pdVar17 = pdVar16 + lVar2 * 7;
    pdVar4 = pdVar16 + lVar2 * 6;
    pdVar13 = pdVar16 + lVar2;
    pdVar7 = pdVar16 + lVar2 * 5;
    pdVar11 = pdVar16 + lVar2 * 3;
    pdVar6 = pdVar16 + lVar2 * 4;
    pdVar12 = pdVar16 + lVar2 * 2;
    pdVar5 = pdVar16;
    do {
      if ((long)param_3 < 2) {
        dVar18 = 0.0;
        dVar33 = 0.0;
        dVar19 = 0.0;
        dVar34 = 0.0;
        dVar21 = 0.0;
        dVar26 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar27 = 0.0;
        dVar35 = 0.0;
        dVar30 = 0.0;
        dVar28 = 0.0;
        dVar32 = 0.0;
        dVar20 = 0.0;
        uVar3 = 0;
      }
      else {
        dVar32 = 0.0;
        dVar20 = 0.0;
        dVar30 = 0.0;
        dVar28 = 0.0;
        lVar15 = 2;
        dVar27 = 0.0;
        dVar35 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar21 = 0.0;
        dVar26 = 0.0;
        dVar19 = 0.0;
        dVar34 = 0.0;
        dVar18 = 0.0;
        dVar33 = 0.0;
        pdVar10 = pdVar9;
        pdVar14 = pdVar5;
        do {
          dVar31 = pdVar10[1];
          dVar29 = *pdVar10;
          dVar32 = dVar32 + dVar29 * *pdVar14;
          dVar20 = dVar20 + dVar31 * pdVar14[1];
          pdVar1 = pdVar14 + lVar2;
          dVar30 = dVar30 + dVar29 * *pdVar1;
          dVar28 = dVar28 + dVar31 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar27 = dVar27 + dVar29 * *pdVar1;
          dVar35 = dVar35 + dVar31 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar24 = dVar24 + dVar29 * *pdVar1;
          dVar25 = dVar25 + dVar31 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar22 = dVar22 + dVar29 * *pdVar1;
          dVar23 = dVar23 + dVar31 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar21 = dVar21 + dVar29 * *pdVar1;
          dVar26 = dVar26 + dVar31 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar19 = dVar19 + dVar29 * *pdVar1;
          dVar34 = dVar34 + dVar31 * pdVar1[1];
          dVar18 = dVar18 + dVar29 * pdVar1[lVar2];
          dVar33 = dVar33 + dVar31 * (pdVar1 + lVar2)[1];
          lVar15 = lVar15 + 2;
          pdVar14 = pdVar14 + 2;
          uVar3 = param_3 & 0xfffffffffffffffe;
          pdVar10 = pdVar10 + 2;
        } while (lVar15 <= (long)param_3);
      }
      dVar32 = dVar32 + dVar20;
      dVar30 = dVar30 + dVar28;
      dVar27 = dVar27 + dVar35;
      dVar24 = dVar24 + dVar25;
      dVar22 = dVar22 + dVar23;
      dVar21 = dVar21 + dVar26;
      dVar19 = dVar19 + dVar34;
      dVar18 = dVar18 + dVar33;
      if ((long)uVar3 < (long)param_3) {
        lVar15 = 0;
        do {
          dVar33 = pdVar9[uVar3 + lVar15];
          dVar32 = dVar32 + dVar33 * pdVar5[uVar3 + lVar15];
          dVar30 = dVar30 + dVar33 * pdVar13[uVar3 + lVar15];
          dVar27 = dVar27 + dVar33 * pdVar12[uVar3 + lVar15];
          dVar24 = dVar24 + dVar33 * pdVar11[uVar3 + lVar15];
          dVar22 = dVar22 + dVar33 * pdVar6[uVar3 + lVar15];
          dVar21 = dVar21 + dVar33 * pdVar7[uVar3 + lVar15];
          dVar19 = dVar19 + dVar33 * pdVar4[uVar3 + lVar15];
          dVar18 = dVar18 + dVar33 * pdVar17[uVar3 + lVar15];
          lVar15 = lVar15 + 1;
        } while (param_3 - uVar3 != lVar15);
      }
      *(double *)(param_6 + uVar8 * param_7 * 8) =
           *(double *)(param_6 + uVar8 * param_7 * 8) + dVar32 * param_1;
      lVar15 = (uVar8 | 1) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar30 * param_1;
      lVar15 = (uVar8 | 2) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar27 * param_1;
      lVar15 = (uVar8 | 3) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar24 * param_1;
      lVar15 = (uVar8 | 4) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar22 * param_1;
      lVar15 = (uVar8 | 5) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar21 * param_1;
      lVar15 = (uVar8 | 6) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar19 * param_1;
      lVar15 = (uVar8 | 7) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar18 * param_1;
      uVar8 = uVar8 + 8;
      pdVar5 = pdVar5 + lVar2 * 8;
      pdVar17 = pdVar17 + lVar2 * 8;
      pdVar4 = pdVar4 + lVar2 * 8;
      pdVar7 = pdVar7 + lVar2 * 8;
      pdVar6 = pdVar6 + lVar2 * 8;
      pdVar11 = pdVar11 + lVar2 * 8;
      pdVar12 = pdVar12 + lVar2 * 8;
      pdVar13 = pdVar13 + lVar2 * 8;
    } while ((long)uVar8 < (long)(param_2 - 7));
  }
  if ((long)uVar8 < (long)(param_2 - 3)) {
    pdVar17 = (double *)*param_5;
    pdVar13 = pdVar16 + lVar2 * (uVar8 + 3);
    pdVar6 = pdVar16 + lVar2 * (uVar8 + 2);
    pdVar12 = pdVar16 + lVar2 + uVar8 * lVar2;
    pdVar5 = pdVar16 + uVar8 * lVar2;
    do {
      if ((long)param_3 < 2) {
        dVar33 = 0.0;
        dVar26 = 0.0;
        dVar20 = 0.0;
        dVar22 = 0.0;
        dVar19 = 0.0;
        dVar21 = 0.0;
        dVar18 = 0.0;
        dVar32 = 0.0;
        uVar3 = 0;
      }
      else {
        dVar18 = 0.0;
        dVar32 = 0.0;
        dVar19 = 0.0;
        dVar21 = 0.0;
        lVar15 = 2;
        dVar20 = 0.0;
        dVar22 = 0.0;
        dVar33 = 0.0;
        dVar26 = 0.0;
        pdVar4 = pdVar6;
        pdVar7 = pdVar13;
        pdVar11 = pdVar17;
        pdVar9 = pdVar5;
        pdVar14 = pdVar12;
        do {
          dVar24 = pdVar11[1];
          dVar23 = *pdVar11;
          dVar18 = dVar18 + dVar23 * *pdVar9;
          dVar32 = dVar32 + dVar24 * pdVar9[1];
          dVar19 = dVar19 + dVar23 * *pdVar14;
          dVar21 = dVar21 + dVar24 * pdVar14[1];
          dVar20 = dVar20 + dVar23 * *pdVar4;
          dVar22 = dVar22 + dVar24 * pdVar4[1];
          dVar33 = dVar33 + dVar23 * *pdVar7;
          dVar26 = dVar26 + dVar24 * pdVar7[1];
          lVar15 = lVar15 + 2;
          pdVar4 = pdVar4 + 2;
          pdVar7 = pdVar7 + 2;
          pdVar11 = pdVar11 + 2;
          pdVar9 = pdVar9 + 2;
          pdVar14 = pdVar14 + 2;
          uVar3 = param_3 & 0xfffffffffffffffe;
        } while (lVar15 <= (long)param_3);
      }
      dVar18 = dVar18 + dVar32;
      dVar19 = dVar19 + dVar21;
      dVar20 = dVar20 + dVar22;
      dVar33 = dVar33 + dVar26;
      if ((long)uVar3 < (long)param_3) {
        lVar15 = 0;
        do {
          dVar32 = pdVar17[uVar3 + lVar15];
          dVar18 = dVar18 + dVar32 * pdVar5[uVar3 + lVar15];
          dVar19 = dVar19 + dVar32 * pdVar12[uVar3 + lVar15];
          dVar20 = dVar20 + dVar32 * pdVar6[uVar3 + lVar15];
          dVar33 = dVar33 + dVar32 * pdVar13[uVar3 + lVar15];
          lVar15 = lVar15 + 1;
        } while (param_3 - uVar3 != lVar15);
      }
      *(double *)(param_6 + uVar8 * param_7 * 8) =
           *(double *)(param_6 + uVar8 * param_7 * 8) + dVar18 * param_1;
      lVar15 = (uVar8 + 1) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar19 * param_1;
      lVar15 = (uVar8 + 2) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar20 * param_1;
      lVar15 = (uVar8 + 3) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar33 * param_1;
      uVar8 = uVar8 + 4;
      pdVar13 = pdVar13 + lVar2 * 4;
      pdVar6 = pdVar6 + lVar2 * 4;
      pdVar12 = pdVar12 + lVar2 * 4;
      pdVar5 = pdVar5 + lVar2 * 4;
    } while ((long)uVar8 < (long)(param_2 - 3));
  }
  if ((long)uVar8 < (long)(param_2 - 1)) {
    pdVar12 = (double *)*param_5;
    pdVar13 = pdVar16 + lVar2 + uVar8 * lVar2;
    pdVar6 = pdVar16 + uVar8 * lVar2;
    do {
      if ((long)param_3 < 2) {
        dVar32 = 0.0;
        dVar19 = 0.0;
        dVar18 = 0.0;
        dVar33 = 0.0;
        uVar3 = 0;
      }
      else {
        dVar18 = 0.0;
        dVar33 = 0.0;
        lVar15 = 2;
        dVar32 = 0.0;
        dVar19 = 0.0;
        pdVar5 = pdVar13;
        pdVar17 = pdVar12;
        pdVar4 = pdVar6;
        do {
          dVar32 = dVar32 + *pdVar17 * *pdVar4;
          dVar19 = dVar19 + pdVar17[1] * pdVar4[1];
          dVar18 = dVar18 + *pdVar17 * *pdVar5;
          dVar33 = dVar33 + pdVar17[1] * pdVar5[1];
          lVar15 = lVar15 + 2;
          pdVar5 = pdVar5 + 2;
          uVar3 = param_3 & 0xfffffffffffffffe;
          pdVar17 = pdVar17 + 2;
          pdVar4 = pdVar4 + 2;
        } while (lVar15 <= (long)param_3);
      }
      dVar32 = dVar32 + dVar19;
      dVar18 = dVar18 + dVar33;
      if ((long)uVar3 < (long)param_3) {
        do {
          dVar33 = pdVar12[uVar3];
          dVar32 = dVar32 + dVar33 * pdVar6[uVar3];
          dVar18 = dVar18 + dVar33 * pdVar13[uVar3];
          uVar3 = uVar3 + 1;
        } while (param_3 != uVar3);
      }
      *(double *)(param_6 + uVar8 * param_7 * 8) =
           *(double *)(param_6 + uVar8 * param_7 * 8) + dVar32 * param_1;
      lVar15 = (uVar8 + 1) * param_7;
      *(double *)(param_6 + lVar15 * 8) = *(double *)(param_6 + lVar15 * 8) + dVar18 * param_1;
      uVar8 = uVar8 + 2;
      pdVar13 = pdVar13 + lVar2 * 2;
      pdVar6 = pdVar6 + lVar2 * 2;
    } while ((long)uVar8 < (long)(param_2 - 1));
  }
  if ((long)uVar8 < (long)param_2) {
    pdVar13 = (double *)*param_5;
    pdVar16 = pdVar16 + uVar8 * lVar2;
    do {
      if ((long)param_3 < 2) {
        dVar18 = 0.0;
        dVar33 = 0.0;
        uVar3 = 0;
      }
      else {
        dVar18 = 0.0;
        dVar33 = 0.0;
        lVar15 = 2;
        pdVar6 = pdVar13;
        pdVar12 = pdVar16;
        do {
          dVar18 = dVar18 + *pdVar6 * *pdVar12;
          dVar33 = dVar33 + pdVar6[1] * pdVar12[1];
          lVar15 = lVar15 + 2;
          uVar3 = param_3 & 0xfffffffffffffffe;
          pdVar6 = pdVar6 + 2;
          pdVar12 = pdVar12 + 2;
        } while (lVar15 <= (long)param_3);
      }
      dVar18 = dVar18 + dVar33;
      if ((long)uVar3 < (long)param_3) {
        do {
          dVar18 = dVar18 + pdVar16[uVar3] * pdVar13[uVar3];
          uVar3 = uVar3 + 1;
        } while (param_3 != uVar3);
      }
      *(double *)(param_6 + uVar8 * param_7 * 8) =
           *(double *)(param_6 + uVar8 * param_7 * 8) + dVar18 * param_1;
      uVar8 = uVar8 + 1;
      pdVar16 = pdVar16 + lVar2;
    } while (uVar8 != param_2);
  }
  return;
}



/* Entry: 109910108; end: 10991057b;  */

void FUN_109910108(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_140;
  undefined8 **ppuStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  lVar8 = param_2[2];
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  lVar3 = lStack_60;
  if (lVar8 != 0) {
    lVar3 = 0;
    if (lVar8 != 0) {
      lVar3 = 0x7fffffffffffffff / lVar8;
    }
    if (lVar8 <= lVar3 && (ulong)(lVar8 * lVar8) >> 0x3d == 0) {
      lVar3 = lVar8 * lVar8 * 8;
      _malloc();
      if (lVar3 != 0) goto LAB_10991016c;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_109910530;
  }
LAB_10991016c:
  lStack_60 = lVar3;
  lStack_58 = lVar8;
  lStack_50 = lVar8;
  if (param_4 == 0) {
    FUN_1099109ac(&lStack_60,param_2,param_3);
  }
  else {
    FUN_10991057c(&lStack_60,param_2,param_3);
  }
  uStack_98 = param_2[1];
  puStack_a0 = (undefined8 *)*param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  lStack_128 = param_2[1];
  puStack_130 = (undefined8 *)*param_2;
  uStack_118 = param_2[3];
  lVar3 = param_2[2];
  uStack_108 = param_2[5];
  uStack_110 = param_2[4];
  uStack_f0 = param_1[1];
  ppuStack_f8 = (undefined8 **)*param_1;
  uStack_e0 = param_1[3];
  lVar8 = param_1[2];
  uStack_70 = param_2[6];
  uStack_100 = param_2[6];
  uStack_d0 = param_1[5];
  uStack_d8 = param_1[4];
  uStack_c8 = param_1[6];
  lStack_b0 = 0;
  lStack_a8 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_120 = lVar3;
  lStack_e8 = lVar8;
  if ((lVar3 != 0) && (lVar8 != 0)) {
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar8;
    }
    if (lVar3 <= lVar1) goto LAB_10991020c;
    goto LAB_109910230;
  }
LAB_10991020c:
  uVar6 = lVar8 * lVar3;
  puVar4 = puStack_b8;
  if (uVar6 != 0) {
    if (0 < (long)uVar6) {
      if (uVar6 >> 0x3d == 0) {
        puVar4 = (undefined8 *)(uVar6 * 8);
        _malloc();
        if (puVar4 != (undefined8 *)0x0) goto LAB_10991025c;
      }
LAB_109910230:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109910530;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_10991025c:
  puStack_b8 = puVar4;
  lStack_b0 = lVar3;
  lStack_a8 = lVar8;
  FUN_109911548(&puStack_b8,&puStack_130,&plStack_140);
  plStack_140 = &lStack_60;
  ppuStack_138 = &puStack_b8;
  if (param_4 == 0) {
    puStack_130 = (undefined8 *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    FUN_1099123a0(&puStack_130,&plStack_140,&uStack_41);
    lVar8 = lStack_120;
    lVar3 = lStack_128;
    puVar4 = puStack_130;
    if ((lStack_b0 != lStack_128) || (lStack_a8 != lStack_120)) {
      if ((lStack_128 != 0) && (lStack_120 != 0)) {
        lVar1 = 0;
        if (lStack_120 != 0) {
          lVar1 = 0x7fffffffffffffff / lStack_120;
        }
        if (lStack_128 <= lVar1) goto LAB_109910384;
        goto LAB_1099103b8;
      }
LAB_109910384:
      uVar6 = lStack_120 * lStack_128;
      puVar5 = puStack_b8;
      if (lStack_a8 * lStack_b0 - uVar6 != 0) {
        _free(puStack_b8);
        if (0 < (long)uVar6) {
          if (uVar6 >> 0x3d == 0) {
            puVar5 = (undefined8 *)(uVar6 * 8);
            _malloc();
            if (puVar5 != (undefined8 *)0x0) goto LAB_10991044c;
          }
LAB_1099103b8:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109910530;
        }
        puVar5 = (undefined8 *)0x0;
      }
LAB_10991044c:
      puStack_b8 = puVar5;
      lStack_b0 = lVar3;
      lStack_a8 = lVar8;
    }
    lVar8 = lVar8 * lVar3;
    uVar6 = lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < lVar8) {
      lVar3 = 0;
      puVar5 = puStack_b8;
      puVar7 = puVar4;
      do {
        uVar9 = *puVar7;
        puVar5[1] = puVar7[1];
        *puVar5 = uVar9;
        lVar3 = lVar3 + 2;
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
      } while (lVar3 < (long)uVar6);
    }
    lVar3 = lVar8 % 2;
    if (lVar3 != 0 && lVar3 < 0 == SBORROW8(lVar8,uVar6)) {
      puVar5 = puStack_b8 + (lVar8 / 2) * 2;
      puVar4 = puVar4 + (lVar8 / 2) * 2;
      do {
        *puVar5 = *puVar4;
        lVar3 = lVar3 + -1;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
    }
    goto LAB_1099104a8;
  }
  puStack_130 = (undefined8 *)0x0;
  lStack_128 = 0;
  lStack_120 = 0;
  FUN_109911fd0(&puStack_130,&plStack_140,&uStack_41);
  lVar8 = lStack_120;
  lVar3 = lStack_128;
  puVar4 = puStack_130;
  if ((lStack_b0 != lStack_128) || (lStack_a8 != lStack_120)) {
    if ((lStack_128 != 0) && (lStack_120 != 0)) {
      lVar1 = 0;
      if (lStack_120 != 0) {
        lVar1 = 0x7fffffffffffffff / lStack_120;
      }
      if (lStack_128 <= lVar1) goto LAB_109910314;
      goto LAB_109910348;
    }
LAB_109910314:
    uVar6 = lStack_120 * lStack_128;
    puVar5 = puStack_b8;
    if (lStack_a8 * lStack_b0 - uVar6 != 0) {
      _free(puStack_b8);
      if (0 < (long)uVar6) {
        if (uVar6 >> 0x3d == 0) {
          puVar5 = (undefined8 *)(uVar6 * 8);
          _malloc();
          if (puVar5 != (undefined8 *)0x0) goto LAB_1099103e4;
        }
LAB_109910348:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
LAB_109910530:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109910534);
        (*pcVar2)();
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_1099103e4:
    puStack_b8 = puVar5;
    lStack_b0 = lVar3;
    lStack_a8 = lVar8;
  }
  lVar8 = lVar8 * lVar3;
  uVar6 = lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar8) {
    lVar3 = 0;
    puVar5 = puStack_b8;
    puVar7 = puVar4;
    do {
      uVar9 = *puVar7;
      puVar5[1] = puVar7[1];
      *puVar5 = uVar9;
      lVar3 = lVar3 + 2;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
    } while (lVar3 < (long)uVar6);
  }
  lVar3 = lVar8 % 2;
  if (lVar3 != 0 && lVar3 < 0 == SBORROW8(lVar8,uVar6)) {
    puVar5 = puStack_b8 + (lVar8 / 2) * 2;
    puVar4 = puVar4 + (lVar8 / 2) * 2;
    do {
      *puVar5 = *puVar4;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
LAB_1099104a8:
  _free(puStack_130);
  lStack_128 = uStack_98;
  puStack_130 = puStack_a0;
  uStack_118 = uStack_88;
  lStack_120 = uStack_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  ppuStack_f8 = &puStack_b8;
  uStack_100 = uStack_70;
  plStack_140 = (long *)0xbff0000000000000;
  FUN_109912778(param_1,&puStack_130,&puStack_b8,&plStack_140);
  _free(puStack_b8);
  _free(lStack_60);
  return;
}



/* Entry: 10991057c; end: 1099109ab;  */

void FUN_10991057c(long *param_1,long *param_2,ulong *param_3,double *param_4,long param_5,
                  long param_6,double *param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  long *plVar8;
  long *plVar9;
  double *pdVar10;
  double *pdVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double *pdVar17;
  double *pdVar18;
  long lVar19;
  double *pdVar20;
  long lVar21;
  ulong uVar22;
  double *pdVar23;
  double *pdVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  double *pdVar28;
  double *unaff_x23;
  ulong unaff_x24;
  ulong uVar29;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  double *pdVar30;
  ulong unaff_x28;
  double dVar31;
  double dVar32;
  double dVar33;
  double dStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  ulong uStack_640;
  double *pdStack_638;
  ulong uStack_630;
  long *plStack_628;
  long lStack_620;
  long lStack_618;
  undefined1 **ppuStack_610;
  code *pcStack_608;
  long lStack_600;
  ulong uStack_5f8;
  long lStack_5f0;
  ulong *puStack_5e8;
  long *plStack_5e0;
  ulong uStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  ulong uStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  double dStack_538;
  long lStack_530;
  long lStack_528;
  ulong uStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined1 auStack_4a8 [16];
  long lStack_498;
  double dStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_470;
  long lStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_3f8;
  ulong auStack_3e8 [2];
  ulong uStack_3d8;
  long lStack_3d0;
  long lStack_3c0;
  long *plStack_3b8;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  undefined1 *puStack_310;
  code *pcStack_308;
  long lStack_300;
  ulong uStack_2f8;
  long *plStack_2f0;
  ulong *puStack_2e8;
  long *plStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  double dStack_238;
  long lStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  double dStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  ulong auStack_e8 [2];
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_5e0 = (long *)param_2[2];
  uStack_2d8 = (long)plStack_5e0 - 1;
  plVar8 = param_1;
  plStack_2e0 = param_2;
  if (0 < (long)plStack_5e0) {
    unaff_x25 = (long)plStack_5e0 * 8 + -8;
    uVar29 = uStack_2d8;
    lStack_300 = unaff_x25;
    plStack_2f0 = plStack_5e0;
    puStack_2e8 = param_3;
    do {
      uVar13 = ~uVar29;
      unaff_x27 = (long)plStack_5e0 + uVar13;
      if (unaff_x27 != 0) {
        dVar33 = *(double *)(*param_3 + uVar29 * 8);
        lStack_2b0 = *plStack_2e0;
        lStack_2a0 = plStack_2e0[1];
        lStack_268 = plStack_2e0[1];
        lStack_270 = *plStack_2e0;
        lStack_2c0 = plStack_2e0[2];
        lStack_298 = plStack_2e0[3];
        lStack_288 = plStack_2e0[5];
        lStack_290 = plStack_2e0[4];
        lStack_280 = plStack_2e0[6];
        lStack_2a8 = *(long *)(lStack_298 + 0x10);
        unaff_x20 = param_1[2];
        lStack_2d0 = *param_1 + unaff_x20 * uVar29 * 8;
        lStack_2c8 = unaff_x20 - unaff_x27;
        unaff_x22 = lStack_2d0 + lStack_2c8 * 8;
        unaff_x28 = unaff_x22 >> 3 & 1;
        if ((unaff_x22 & 7) != 0) {
          unaff_x28 = unaff_x27;
        }
        uStack_2b8 = uVar13;
        lStack_260 = lStack_2c0;
        lStack_250 = lStack_290;
        lStack_248 = lStack_288;
        lStack_240 = lStack_280;
        lStack_1c0 = lStack_270;
        lStack_1b8 = lStack_268;
        lStack_1b0 = lStack_2c0;
        if (unaff_x28 != 0) {
          _bzero(unaff_x22,unaff_x28 << 3);
        }
        unaff_x19 = unaff_x27 - unaff_x28;
        unaff_x23 = (double *)(unaff_x19 - (unaff_x19 >> 0x3f));
        uVar13 = (ulong)unaff_x23 & 0xfffffffffffffffe;
        unaff_x26 = uVar13 + unaff_x28;
        if (1 < unaff_x19) {
          lVar16 = unaff_x26;
          if (unaff_x26 <= (long)(unaff_x28 + 2)) {
            lVar16 = unaff_x28 + 2;
          }
          uStack_2f8 = uVar13;
          _bzero(unaff_x22 + unaff_x28 * 8,(lVar16 + ~unaff_x28 & 0x1ffffffffffffffe) * 8 + 0x10);
          uVar13 = uStack_2f8;
        }
        if (unaff_x26 < (long)unaff_x27) {
          _bzero(unaff_x22 + (unaff_x19 / 2) * 0x10 + unaff_x28 * 8,(unaff_x19 - uVar13) * 8);
        }
        lStack_1e0 = uVar29 + 1;
        dStack_238 = 1.0;
        lStack_228 = lStack_2a0 + uStack_2b8;
        dStack_190 = -dVar33;
        lStack_170 = lStack_2b0 + uVar29 * 8;
        lStack_188 = lStack_170 + lStack_2a8 * lStack_1e0 * 8;
        lStack_1d8 = lStack_2c0 - unaff_x27;
        lStack_d0 = lStack_2d0;
        uStack_a8 = 0;
        lStack_230 = lStack_2b0 + lStack_1d8 * 8 + lStack_2a8 * lStack_1e0 * 8;
        lStack_90 = lStack_2c8;
        lStack_210 = lStack_268;
        lStack_218 = lStack_270;
        lStack_208 = lStack_260;
        lStack_200 = lStack_298;
        lStack_1f0 = lStack_288;
        lStack_1f8 = lStack_290;
        lStack_1e8 = lStack_280;
        lStack_1d0 = lStack_2a8;
        lStack_168 = lStack_2a0;
        lStack_158 = lStack_1c0;
        uStack_160 = uStack_1c8;
        lStack_148 = lStack_1b0;
        lStack_150 = lStack_1b8;
        lStack_130 = lStack_248;
        lStack_138 = lStack_250;
        lStack_128 = lStack_240;
        lStack_140 = lStack_298;
        uStack_120 = 0;
        uStack_110 = 1;
        uStack_f8 = 1;
        plVar8 = &lStack_230;
        param_4 = &dStack_238;
        uStack_220 = unaff_x27;
        lStack_198 = lStack_228;
        lStack_180 = lStack_228;
        uStack_118 = uVar29;
        lStack_108 = lStack_1e0;
        auStack_e8[0] = unaff_x22;
        uStack_d8 = unaff_x27;
        lStack_c0 = unaff_x20;
        plStack_b8 = param_1;
        uStack_b0 = uVar29;
        lStack_a0 = unaff_x20;
        lStack_88 = unaff_x20;
        FUN_109910ddc(plVar8,auStack_1a8,auStack_e8);
        plStack_5e0 = plStack_2f0;
        param_3 = puStack_2e8;
        if ((long)uVar29 < (long)uStack_2d8) {
          lVar14 = 0;
          lVar16 = lStack_300;
          uVar13 = uStack_2d8;
          do {
            lVar19 = *param_1;
            lVar21 = param_1[2];
            lVar15 = lVar19 + lVar21 * uVar29 * 8;
            dVar33 = *(double *)(lVar15 + uVar13 * 8);
            *(double *)(lVar15 + uVar13 * 8) =
                 dVar33 * *(double *)(lVar19 + lVar21 * uVar13 * 8 + uVar13 * 8);
            uVar2 = (long)plStack_2f0 + ~uVar13;
            if (0 < (long)uVar2) {
              uVar27 = lVar15 + (lVar21 - uVar2) * 8;
              uVar22 = uVar27 >> 3 & 1;
              if ((uVar27 & 7) != 0) {
                uVar22 = uVar2;
              }
              if (uVar22 != 0) {
                pdVar30 = (double *)(lVar19 + lVar21 * lVar16 + (lVar21 + lVar14) * 8);
                pdVar6 = (double *)(lVar19 + unaff_x25 * lVar21 + (lVar21 + lVar14) * 8);
                uVar27 = uVar22;
                do {
                  *pdVar6 = dVar33 * *pdVar30 + *pdVar6;
                  uVar27 = uVar27 - 1;
                  pdVar30 = pdVar30 + 1;
                  pdVar6 = pdVar6 + 1;
                } while (uVar27 != 0);
              }
              lVar25 = uVar2 - uVar22;
              lVar15 = (lVar25 - (lVar25 >> 0x3f) & 0xfffffffffffffffeU) + uVar22;
              if (1 < lVar25) {
                plVar8 = (long *)(unaff_x25 * lVar21 + uVar22 * 8);
                pdVar30 = (double *)(lVar19 + lVar21 * lVar16 + uVar22 * 8 + (lVar21 + lVar14) * 8);
                pdVar6 = (double *)((long)plVar8 + lVar19 + (lVar21 + lVar14) * 8);
                do {
                  dVar31 = *pdVar30;
                  pdVar6[1] = pdVar6[1] + pdVar30[1] * dVar33;
                  *pdVar6 = *pdVar6 + dVar31 * dVar33;
                  uVar22 = uVar22 + 2;
                  pdVar30 = pdVar30 + 2;
                  pdVar6 = pdVar6 + 2;
                } while ((long)uVar22 < lVar15);
              }
              if (lVar15 < (long)uVar2) {
                lVar25 = lVar19 + unaff_x25 * lVar21 + (lVar21 + lVar14) * 8;
                do {
                  *(double *)(lVar25 + lVar15 * 8) =
                       dVar33 * *(double *)
                                 (lVar19 + lVar21 * lVar16 + (lVar21 + lVar14) * 8 + lVar15 * 8) +
                       *(double *)(lVar25 + lVar15 * 8);
                  lVar15 = lVar15 + 1;
                } while (lVar14 + lVar15 != 0);
              }
            }
            uVar13 = uVar13 - 1;
            lVar16 = lVar16 + -8;
            lVar14 = lVar14 + -1;
          } while ((long)uVar29 < (long)uVar13);
        }
      }
      *(undefined8 *)(*param_1 + param_1[2] * uVar29 * 8 + uVar29 * 8) =
           *(undefined8 *)(*param_3 + uVar29 * 8);
      unaff_x25 = unaff_x25 + -8;
      unaff_x24 = uVar29 - 1;
      bVar1 = 0 < (long)uVar29;
      unaff_x21 = param_1;
      uVar29 = unaff_x24;
    } while (bVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_310 = &stack0xfffffffffffffff0;
  pcStack_308 = FUN_1099109ac;
  lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = plStack_5e0[2];
  uStack_5d8 = lVar16 - 1U;
  plVar9 = plVar8;
  if (0 < lVar16) {
    unaff_x25 = lVar16 * 8 + -8;
    lStack_600 = unaff_x25;
    lStack_5f0 = lVar16;
    puStack_5e8 = param_3;
    uVar29 = lVar16 - 1U;
    do {
      unaff_x27 = lVar16 + ~uVar29;
      if (unaff_x27 != 0) {
        uStack_5b8 = ~uVar29;
        dVar33 = *(double *)(*param_3 + uVar29 * 8);
        lStack_4b8 = plStack_5e0[1];
        lStack_4c0 = *plStack_5e0;
        lStack_5a0 = plStack_5e0[1];
        lStack_5c0 = plStack_5e0[2];
        lStack_4b0 = lStack_5c0;
        lStack_548 = plStack_5e0[5];
        lStack_550 = plStack_5e0[4];
        lStack_540 = plStack_5e0[6];
        lStack_598 = plStack_5e0[3];
        lStack_5b0 = *plStack_5e0;
        lStack_5a8 = *(long *)(plStack_5e0[3] + 0x10);
        lStack_560 = lStack_5c0;
        lStack_568 = plStack_5e0[1];
        lStack_570 = *plStack_5e0;
        lStack_588 = plStack_5e0[5];
        lStack_590 = plStack_5e0[4];
        lStack_580 = plStack_5e0[6];
        unaff_x20 = plVar8[2];
        lStack_5d0 = *plVar8 + unaff_x20 * uVar29 * 8;
        lStack_5c8 = unaff_x20 - unaff_x27;
        unaff_x22 = lStack_5d0 + lStack_5c8 * 8;
        unaff_x28 = unaff_x22 >> 3 & 1;
        if ((unaff_x22 & 7) != 0) {
          unaff_x28 = unaff_x27;
        }
        if (unaff_x28 != 0) {
          _bzero(unaff_x22,unaff_x28 << 3);
        }
        unaff_x19 = unaff_x27 - unaff_x28;
        unaff_x23 = (double *)(unaff_x19 - (unaff_x19 >> 0x3f));
        uVar13 = (ulong)unaff_x23 & 0xfffffffffffffffe;
        unaff_x26 = uVar13 + unaff_x28;
        if (1 < unaff_x19) {
          lVar16 = unaff_x26;
          if (unaff_x26 <= (long)(unaff_x28 + 2)) {
            lVar16 = unaff_x28 + 2;
          }
          uStack_5f8 = uVar13;
          _bzero(unaff_x22 + unaff_x28 * 8,(lVar16 + ~unaff_x28 & 0x1ffffffffffffffe) * 8 + 0x10);
          uVar13 = uStack_5f8;
        }
        if (unaff_x26 < (long)unaff_x27) {
          _bzero(unaff_x22 + (unaff_x19 / 2) * 0x10 + unaff_x28 * 8,(unaff_x19 - uVar13) * 8);
        }
        lStack_4e0 = uVar29 + 1;
        dStack_538 = 1.0;
        lStack_528 = lStack_5a0 + uStack_5b8;
        dStack_490 = -dVar33;
        lStack_470 = lStack_5b0 + uVar29 * 8;
        lStack_488 = lStack_470 + lStack_5a8 * lStack_4e0 * 8;
        lStack_4d8 = lStack_5c0 - unaff_x27;
        lStack_3d0 = lStack_5d0;
        uStack_3a8 = 0;
        lStack_530 = lStack_5b0 + lStack_4d8 * 8 + lStack_5a8 * lStack_4e0 * 8;
        lStack_390 = lStack_5c8;
        lStack_510 = lStack_568;
        lStack_518 = lStack_570;
        lStack_508 = lStack_560;
        lStack_500 = lStack_598;
        lStack_4f0 = lStack_588;
        lStack_4f8 = lStack_590;
        lStack_4e8 = lStack_580;
        lStack_4d0 = lStack_5a8;
        lStack_468 = lStack_5a0;
        lStack_458 = lStack_4c0;
        uStack_460 = uStack_4c8;
        lStack_448 = lStack_4b0;
        lStack_450 = lStack_4b8;
        lStack_430 = lStack_548;
        lStack_438 = lStack_550;
        lStack_428 = lStack_540;
        lStack_440 = lStack_598;
        uStack_420 = 0;
        uStack_410 = 1;
        uStack_3f8 = 1;
        plVar9 = &lStack_530;
        param_4 = &dStack_538;
        uStack_520 = unaff_x27;
        lStack_498 = lStack_528;
        lStack_480 = lStack_528;
        uStack_418 = uVar29;
        lStack_408 = lStack_4e0;
        auStack_3e8[0] = unaff_x22;
        uStack_3d8 = unaff_x27;
        lStack_3c0 = unaff_x20;
        plStack_3b8 = plVar8;
        uStack_3b0 = uVar29;
        lStack_3a0 = unaff_x20;
        lStack_388 = unaff_x20;
        FUN_109910ddc(plVar9,auStack_4a8,auStack_3e8);
        lVar16 = lStack_5f0;
        param_3 = puStack_5e8;
        if ((long)uVar29 < (long)uStack_5d8) {
          lVar15 = 0;
          lVar14 = lStack_600;
          uVar13 = uStack_5d8;
          do {
            lVar21 = *plVar8;
            lVar25 = plVar8[2];
            lVar19 = lVar21 + lVar25 * uVar29 * 8;
            dVar33 = *(double *)(lVar19 + uVar13 * 8);
            *(double *)(lVar19 + uVar13 * 8) =
                 dVar33 * *(double *)(lVar21 + lVar25 * uVar13 * 8 + uVar13 * 8);
            uVar2 = lStack_5f0 + ~uVar13;
            if (0 < (long)uVar2) {
              uVar27 = lVar19 + (lVar25 - uVar2) * 8;
              uVar22 = uVar27 >> 3 & 1;
              if ((uVar27 & 7) != 0) {
                uVar22 = uVar2;
              }
              if (uVar22 != 0) {
                pdVar30 = (double *)(lVar21 + lVar25 * lVar14 + (lVar25 + lVar15) * 8);
                pdVar6 = (double *)(lVar21 + unaff_x25 * lVar25 + (lVar25 + lVar15) * 8);
                uVar27 = uVar22;
                do {
                  *pdVar6 = dVar33 * *pdVar30 + *pdVar6;
                  uVar27 = uVar27 - 1;
                  pdVar30 = pdVar30 + 1;
                  pdVar6 = pdVar6 + 1;
                } while (uVar27 != 0);
              }
              lVar26 = uVar2 - uVar22;
              lVar19 = (lVar26 - (lVar26 >> 0x3f) & 0xfffffffffffffffeU) + uVar22;
              if (1 < lVar26) {
                plVar9 = (long *)(unaff_x25 * lVar25 + uVar22 * 8);
                pdVar30 = (double *)(lVar21 + lVar25 * lVar14 + uVar22 * 8 + (lVar25 + lVar15) * 8);
                pdVar6 = (double *)((long)plVar9 + lVar21 + (lVar25 + lVar15) * 8);
                do {
                  dVar31 = *pdVar30;
                  pdVar6[1] = pdVar6[1] + pdVar30[1] * dVar33;
                  *pdVar6 = *pdVar6 + dVar31 * dVar33;
                  uVar22 = uVar22 + 2;
                  pdVar30 = pdVar30 + 2;
                  pdVar6 = pdVar6 + 2;
                } while ((long)uVar22 < lVar19);
              }
              if (lVar19 < (long)uVar2) {
                lVar26 = lVar21 + unaff_x25 * lVar25 + (lVar25 + lVar15) * 8;
                do {
                  *(double *)(lVar26 + lVar19 * 8) =
                       dVar33 * *(double *)
                                 (lVar21 + lVar25 * lVar14 + (lVar25 + lVar15) * 8 + lVar19 * 8) +
                       *(double *)(lVar26 + lVar19 * 8);
                  lVar19 = lVar19 + 1;
                } while (lVar15 + lVar19 != 0);
              }
            }
            uVar13 = uVar13 - 1;
            lVar14 = lVar14 + -8;
            lVar15 = lVar15 + -1;
          } while ((long)uVar29 < (long)uVar13);
        }
      }
      *(undefined8 *)(*plVar8 + plVar8[2] * uVar29 * 8 + uVar29 * 8) =
           *(undefined8 *)(*param_3 + uVar29 * 8);
      unaff_x25 = unaff_x25 + -8;
      unaff_x24 = uVar29 - 1;
      bVar1 = 0 < (long)uVar29;
      unaff_x21 = plVar8;
      uVar29 = unaff_x24;
    } while (bVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_380) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_650 = unaff_x26;
  lStack_648 = unaff_x25;
  uStack_640 = unaff_x24;
  pdStack_638 = unaff_x23;
  uStack_630 = unaff_x22;
  plStack_628 = unaff_x21;
  lStack_620 = unaff_x20;
  lStack_618 = unaff_x19;
  ppuStack_610 = &puStack_310;
  pcStack_608 = FUN_109910ddc;
  pdVar6 = &dStack_660;
  pdVar7 = &dStack_660;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined *)*plVar9;
  pdVar30 = (double *)plVar9[1];
  pdVar28 = (double *)plVar9[2];
  lVar15 = plVar9[6];
  lVar14 = *(long *)(lVar16 + 0x20);
  lVar19 = *(long *)(lVar16 + 0x68);
  dStack_660 = *(double *)(lVar16 + 0x18) * *param_4;
  uVar29 = param_3[2];
  if (uVar29 >> 0x3d == 0) {
    param_7 = (double *)*param_3;
    if (param_7 == (double *)0x0) {
      param_7 = (double *)(uVar29 << 3);
      if (uVar29 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar16 = -((ulong)((long)param_7 + 0x1eU) & 0xfffffffffffffff0);
        pdVar6 = (double *)((long)&dStack_660 + lVar16);
        param_7 = (double *)((long)&dStack_660 + lVar16);
        unaff_x23 = param_7;
      }
      else {
        _malloc();
        unaff_x23 = param_7;
        if (param_7 == (double *)0x0) goto LAB_109910f08;
      }
    }
    else {
      pdVar6 = &dStack_660;
      unaff_x23 = (double *)0x0;
    }
    param_4 = *(double **)(lVar15 + 0x10);
    param_6 = *(long *)(lVar19 + 0x10);
    *(double **)((long)pdVar6 + -0x10) = &dStack_660;
    param_8 = 1;
    pdVar10 = pdVar28;
    pdVar11 = pdVar30;
    param_5 = lVar14;
    FUN_109910f48();
    if (0x4000 < uVar29) {
      pdVar10 = unaff_x23;
      _free();
    }
    pdVar7 = pdVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
      return;
    }
  }
  else {
LAB_109910f08:
    pdVar10 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar11 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    puVar12 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < uVar29) {
    _free(unaff_x23);
  }
  pdVar6 = pdVar10;
  __Unwind_Resume();
  pdVar7[-0xc] = (double)unaff_x28;
  pdVar7[-0xb] = (double)unaff_x27;
  pdVar7[-10] = (double)lVar19;
  pdVar7[-9] = (double)lVar15;
  pdVar7[-8] = (double)uVar29;
  pdVar7[-7] = (double)unaff_x23;
  pdVar7[-6] = (double)pdVar28;
  pdVar7[-5] = (double)lVar14;
  pdVar7[-4] = (double)pdVar30;
  pdVar7[-3] = (double)pdVar10;
  pdVar7[-2] = (double)&ppuStack_610;
  pdVar7[-1] = (double)FUN_109910f48;
  pdVar7[-0x15] = (double)param_8;
  pdVar7[-0x14] = (double)puVar12;
  pdVar7[-0x13] = (double)param_4;
  pdVar30 = (double *)*pdVar7;
  pdVar7[-0x17] = (double)pdVar6;
  pdVar7[-0x16] = (double)pdVar11;
  if ((long)pdVar6 <= (long)pdVar11) {
    pdVar11 = pdVar6;
  }
  if (0 < (long)pdVar11) {
    lVar16 = 0;
    pdVar28 = (double *)pdVar7[-0x14];
    lVar14 = (long)pdVar7[-0x13];
    pdVar7[-0x12] = (double)(lVar14 * 0x40 + 0x40);
    pdVar6 = param_7;
    pdVar10 = pdVar11;
    do {
      pdVar3 = pdVar10;
      if ((long)pdVar10 < 2) {
        pdVar3 = (double *)0x1;
      }
      if (7 < (long)pdVar3) {
        pdVar3 = (double *)0x8;
      }
      lVar19 = (long)pdVar11 - lVar16;
      lVar15 = lVar19;
      if (7 < lVar19) {
        lVar15 = 8;
      }
      if (0 < lVar19) {
        pdVar17 = (double *)0x0;
        pdVar18 = (double *)((ulong)param_7 >> 3 & 1);
        pdVar20 = pdVar28;
        do {
          puVar12 = (undefined *)((long)pdVar17 + lVar16);
          if (pdVar17 != (double *)0x0) {
            dVar33 = *pdVar30 * *(double *)(param_5 + (long)puVar12 * param_6 * 8);
            pdVar24 = pdVar18;
            if ((long)pdVar17 <= (long)pdVar18) {
              pdVar24 = pdVar17;
            }
            pdVar4 = pdVar20;
            pdVar5 = pdVar6;
            pdVar23 = pdVar24;
            if (((ulong)param_7 & 7) != 0) {
              pdVar24 = pdVar17;
              pdVar23 = pdVar17;
            }
            for (; pdVar24 != (double *)0x0; pdVar24 = (double *)((long)pdVar24 - 1)) {
              *pdVar5 = dVar33 * *pdVar4 + *pdVar5;
              pdVar4 = pdVar4 + 1;
              pdVar5 = pdVar5 + 1;
            }
            lVar19 = (long)pdVar17 - (long)pdVar23;
            pdVar24 = (double *)((lVar19 - (lVar19 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar23);
            if (1 < lVar19) {
              lVar19 = (long)pdVar23 << 3;
              do {
                dVar31 = *(double *)((long)pdVar20 + lVar19);
                dVar32 = *(double *)((long)pdVar6 + lVar19);
                ((double *)((long)pdVar6 + lVar19))[1] =
                     ((double *)((long)pdVar6 + lVar19))[1] +
                     ((double *)((long)pdVar20 + lVar19))[1] * dVar33;
                *(double *)((long)pdVar6 + lVar19) = dVar32 + dVar31 * dVar33;
                pdVar23 = (double *)((long)pdVar23 + 2);
                lVar19 = lVar19 + 0x10;
              } while ((long)pdVar23 < (long)pdVar24);
            }
            if ((long)pdVar24 < (long)pdVar17) {
              do {
                pdVar6[(long)pdVar24] = dVar33 * pdVar20[(long)pdVar24] + pdVar6[(long)pdVar24];
                pdVar24 = (double *)((long)pdVar24 + 1);
              } while (pdVar17 != pdVar24);
            }
          }
          pdVar17 = (double *)((long)pdVar17 + 1);
          param_7[(long)puVar12] =
               param_7[(long)puVar12] +
               *(double *)(param_5 + (long)puVar12 * param_6 * 8) * *pdVar30;
          pdVar20 = pdVar20 + lVar14;
        } while (pdVar17 != pdVar3);
      }
      if (lVar16 != 0) {
        pdVar7[-0xe] = (double)((long)pdVar7[-0x14] + lVar16 * (long)pdVar7[-0x13] * 8);
        pdVar7[-0xd] = pdVar7[-0x13];
        pdVar7[-0x10] = (double)(param_5 + lVar16 * param_6 * 8);
        pdVar7[-0xf] = (double)param_6;
        dVar33 = *pdVar30;
        pdVar7[-0x11] = (double)pdVar28;
        FUN_109911198(dVar33,lVar16,lVar15,pdVar7 + -0xe,pdVar7 + -0x10,param_7,pdVar7[-0x15]);
        pdVar28 = (double *)pdVar7[-0x11];
      }
      lVar16 = lVar16 + 8;
      pdVar10 = pdVar10 + -1;
      pdVar28 = (double *)((long)pdVar28 + (long)pdVar7[-0x12]);
      pdVar6 = pdVar6 + 8;
    } while (lVar16 < (long)pdVar11);
  }
  if ((long)pdVar7[-0x17] < (long)pdVar7[-0x16]) {
    pdVar7[-0xe] = (double)((long)pdVar7[-0x14] + (long)pdVar7[-0x13] * (long)pdVar11 * 8);
    pdVar7[-0xd] = pdVar7[-0x13];
    pdVar7[-0x10] = (double)(param_5 + param_6 * (long)pdVar11 * 8);
    pdVar7[-0xf] = (double)param_6;
    FUN_109909a3c(*pdVar30,pdVar11,(long)pdVar7[-0x16] - (long)pdVar11,pdVar7 + -0xe,pdVar7 + -0x10,
                  param_7,pdVar7[-0x15]);
  }
  return;
}



/* Entry: 1099109ac; end: 109910ddb;  */

void FUN_1099109ac(long *param_1,long *param_2,ulong *param_3,double *param_4,long param_5,
                  long param_6,double *param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  long *plVar8;
  double *pdVar9;
  long lVar10;
  double *pdVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  double *pdVar16;
  double *pdVar17;
  long lVar18;
  double *pdVar19;
  long lVar20;
  ulong uVar21;
  double *pdVar22;
  double *pdVar23;
  long lVar24;
  ulong uVar25;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  double *pdVar26;
  double *unaff_x23;
  ulong unaff_x24;
  ulong uVar27;
  long unaff_x25;
  long unaff_x26;
  long lVar28;
  ulong unaff_x27;
  double *pdVar29;
  ulong unaff_x28;
  double dVar30;
  double dVar31;
  double dVar32;
  double dStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  ulong uStack_340;
  double *pdStack_338;
  ulong uStack_330;
  long *plStack_328;
  long lStack_320;
  long lStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  long lStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  ulong *puStack_2e8;
  long *plStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  double dStack_238;
  long lStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  double dStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  ulong auStack_e8 [2];
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2[2];
  uStack_2d8 = lVar10 - 1;
  plVar8 = param_1;
  plStack_2e0 = param_2;
  if (0 < lVar10) {
    unaff_x25 = lVar10 * 8 + -8;
    uVar27 = uStack_2d8;
    lStack_300 = unaff_x25;
    lStack_2f0 = lVar10;
    puStack_2e8 = param_3;
    do {
      uVar13 = ~uVar27;
      unaff_x27 = lVar10 + uVar13;
      if (unaff_x27 != 0) {
        dVar32 = *(double *)(*param_3 + uVar27 * 8);
        lStack_2b0 = *plStack_2e0;
        lStack_2a0 = plStack_2e0[1];
        lStack_268 = plStack_2e0[1];
        lStack_270 = *plStack_2e0;
        lStack_2c0 = plStack_2e0[2];
        lStack_298 = plStack_2e0[3];
        lStack_288 = plStack_2e0[5];
        lStack_290 = plStack_2e0[4];
        lStack_280 = plStack_2e0[6];
        lStack_2a8 = *(long *)(lStack_298 + 0x10);
        unaff_x20 = param_1[2];
        lStack_2d0 = *param_1 + unaff_x20 * uVar27 * 8;
        lStack_2c8 = unaff_x20 - unaff_x27;
        unaff_x22 = lStack_2d0 + lStack_2c8 * 8;
        unaff_x28 = unaff_x22 >> 3 & 1;
        if ((unaff_x22 & 7) != 0) {
          unaff_x28 = unaff_x27;
        }
        uStack_2b8 = uVar13;
        lStack_260 = lStack_2c0;
        lStack_250 = lStack_290;
        lStack_248 = lStack_288;
        lStack_240 = lStack_280;
        lStack_1c0 = lStack_270;
        lStack_1b8 = lStack_268;
        lStack_1b0 = lStack_2c0;
        if (unaff_x28 != 0) {
          _bzero(unaff_x22,unaff_x28 << 3);
        }
        unaff_x19 = unaff_x27 - unaff_x28;
        unaff_x23 = (double *)(unaff_x19 - (unaff_x19 >> 0x3f));
        uVar13 = (ulong)unaff_x23 & 0xfffffffffffffffe;
        unaff_x26 = uVar13 + unaff_x28;
        if (1 < unaff_x19) {
          lVar10 = unaff_x26;
          if (unaff_x26 <= (long)(unaff_x28 + 2)) {
            lVar10 = unaff_x28 + 2;
          }
          uStack_2f8 = uVar13;
          _bzero(unaff_x22 + unaff_x28 * 8,(lVar10 + ~unaff_x28 & 0x1ffffffffffffffe) * 8 + 0x10);
          uVar13 = uStack_2f8;
        }
        if (unaff_x26 < (long)unaff_x27) {
          _bzero(unaff_x22 + (unaff_x19 / 2) * 0x10 + unaff_x28 * 8,(unaff_x19 - uVar13) * 8);
        }
        lStack_1e0 = uVar27 + 1;
        dStack_238 = 1.0;
        lStack_228 = lStack_2a0 + uStack_2b8;
        dStack_190 = -dVar32;
        lStack_170 = lStack_2b0 + uVar27 * 8;
        lStack_188 = lStack_170 + lStack_2a8 * lStack_1e0 * 8;
        lStack_1d8 = lStack_2c0 - unaff_x27;
        lStack_d0 = lStack_2d0;
        uStack_a8 = 0;
        lStack_230 = lStack_2b0 + lStack_1d8 * 8 + lStack_2a8 * lStack_1e0 * 8;
        lStack_90 = lStack_2c8;
        lStack_210 = lStack_268;
        lStack_218 = lStack_270;
        lStack_208 = lStack_260;
        lStack_200 = lStack_298;
        lStack_1f0 = lStack_288;
        lStack_1f8 = lStack_290;
        lStack_1e8 = lStack_280;
        lStack_1d0 = lStack_2a8;
        lStack_168 = lStack_2a0;
        lStack_158 = lStack_1c0;
        uStack_160 = uStack_1c8;
        lStack_148 = lStack_1b0;
        lStack_150 = lStack_1b8;
        lStack_130 = lStack_248;
        lStack_138 = lStack_250;
        lStack_128 = lStack_240;
        lStack_140 = lStack_298;
        uStack_120 = 0;
        uStack_110 = 1;
        uStack_f8 = 1;
        plVar8 = &lStack_230;
        param_4 = &dStack_238;
        uStack_220 = unaff_x27;
        lStack_198 = lStack_228;
        lStack_180 = lStack_228;
        uStack_118 = uVar27;
        lStack_108 = lStack_1e0;
        auStack_e8[0] = unaff_x22;
        uStack_d8 = unaff_x27;
        lStack_c0 = unaff_x20;
        plStack_b8 = param_1;
        uStack_b0 = uVar27;
        lStack_a0 = unaff_x20;
        lStack_88 = unaff_x20;
        FUN_109910ddc(plVar8,auStack_1a8,auStack_e8);
        lVar10 = lStack_2f0;
        param_3 = puStack_2e8;
        if ((long)uVar27 < (long)uStack_2d8) {
          lVar14 = 0;
          lVar15 = lStack_300;
          uVar13 = uStack_2d8;
          do {
            lVar18 = *param_1;
            lVar20 = param_1[2];
            lVar28 = lVar18 + lVar20 * uVar27 * 8;
            dVar32 = *(double *)(lVar28 + uVar13 * 8);
            *(double *)(lVar28 + uVar13 * 8) =
                 dVar32 * *(double *)(lVar18 + lVar20 * uVar13 * 8 + uVar13 * 8);
            uVar2 = lStack_2f0 + ~uVar13;
            if (0 < (long)uVar2) {
              uVar25 = lVar28 + (lVar20 - uVar2) * 8;
              uVar21 = uVar25 >> 3 & 1;
              if ((uVar25 & 7) != 0) {
                uVar21 = uVar2;
              }
              if (uVar21 != 0) {
                pdVar29 = (double *)(lVar18 + lVar20 * lVar15 + (lVar20 + lVar14) * 8);
                pdVar6 = (double *)(lVar18 + unaff_x25 * lVar20 + (lVar20 + lVar14) * 8);
                uVar25 = uVar21;
                do {
                  *pdVar6 = dVar32 * *pdVar29 + *pdVar6;
                  uVar25 = uVar25 - 1;
                  pdVar29 = pdVar29 + 1;
                  pdVar6 = pdVar6 + 1;
                } while (uVar25 != 0);
              }
              lVar24 = uVar2 - uVar21;
              lVar28 = (lVar24 - (lVar24 >> 0x3f) & 0xfffffffffffffffeU) + uVar21;
              if (1 < lVar24) {
                plVar8 = (long *)(unaff_x25 * lVar20 + uVar21 * 8);
                pdVar29 = (double *)(lVar18 + lVar20 * lVar15 + uVar21 * 8 + (lVar20 + lVar14) * 8);
                pdVar6 = (double *)((long)plVar8 + lVar18 + (lVar20 + lVar14) * 8);
                do {
                  dVar30 = *pdVar29;
                  pdVar6[1] = pdVar6[1] + pdVar29[1] * dVar32;
                  *pdVar6 = *pdVar6 + dVar30 * dVar32;
                  uVar21 = uVar21 + 2;
                  pdVar29 = pdVar29 + 2;
                  pdVar6 = pdVar6 + 2;
                } while ((long)uVar21 < lVar28);
              }
              if (lVar28 < (long)uVar2) {
                lVar24 = lVar18 + unaff_x25 * lVar20 + (lVar20 + lVar14) * 8;
                do {
                  *(double *)(lVar24 + lVar28 * 8) =
                       dVar32 * *(double *)
                                 (lVar18 + lVar20 * lVar15 + (lVar20 + lVar14) * 8 + lVar28 * 8) +
                       *(double *)(lVar24 + lVar28 * 8);
                  lVar28 = lVar28 + 1;
                } while (lVar14 + lVar28 != 0);
              }
            }
            uVar13 = uVar13 - 1;
            lVar15 = lVar15 + -8;
            lVar14 = lVar14 + -1;
          } while ((long)uVar27 < (long)uVar13);
        }
      }
      *(undefined8 *)(*param_1 + param_1[2] * uVar27 * 8 + uVar27 * 8) =
           *(undefined8 *)(*param_3 + uVar27 * 8);
      unaff_x25 = unaff_x25 + -8;
      unaff_x24 = uVar27 - 1;
      bVar1 = 0 < (long)uVar27;
      unaff_x21 = param_1;
      uVar27 = unaff_x24;
    } while (bVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_350 = unaff_x26;
  lStack_348 = unaff_x25;
  uStack_340 = unaff_x24;
  pdStack_338 = unaff_x23;
  uStack_330 = unaff_x22;
  plStack_328 = unaff_x21;
  lStack_320 = unaff_x20;
  lStack_318 = unaff_x19;
  puStack_310 = &stack0xfffffffffffffff0;
  pcStack_308 = FUN_109910ddc;
  pdVar6 = &dStack_360;
  pdVar7 = &dStack_360;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined *)*plVar8;
  pdVar29 = (double *)plVar8[1];
  pdVar26 = (double *)plVar8[2];
  lVar14 = plVar8[6];
  lVar15 = *(long *)(lVar10 + 0x20);
  lVar28 = *(long *)(lVar10 + 0x68);
  dStack_360 = *(double *)(lVar10 + 0x18) * *param_4;
  uVar27 = param_3[2];
  if (uVar27 >> 0x3d == 0) {
    param_7 = (double *)*param_3;
    if (param_7 == (double *)0x0) {
      param_7 = (double *)(uVar27 << 3);
      if (uVar27 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar10 = -((ulong)((long)param_7 + 0x1eU) & 0xfffffffffffffff0);
        pdVar6 = (double *)((long)&dStack_360 + lVar10);
        param_7 = (double *)((long)&dStack_360 + lVar10);
        unaff_x23 = param_7;
      }
      else {
        _malloc();
        unaff_x23 = param_7;
        if (param_7 == (double *)0x0) goto LAB_109910f08;
      }
    }
    else {
      pdVar6 = &dStack_360;
      unaff_x23 = (double *)0x0;
    }
    param_4 = *(double **)(lVar14 + 0x10);
    param_6 = *(long *)(lVar28 + 0x10);
    *(double **)((long)pdVar6 + -0x10) = &dStack_360;
    param_8 = 1;
    pdVar9 = pdVar26;
    pdVar11 = pdVar29;
    param_5 = lVar15;
    FUN_109910f48();
    if (0x4000 < uVar27) {
      pdVar9 = unaff_x23;
      _free();
    }
    pdVar7 = pdVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
      return;
    }
  }
  else {
LAB_109910f08:
    pdVar9 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar11 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    puVar12 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < uVar27) {
    _free(unaff_x23);
  }
  pdVar6 = pdVar9;
  __Unwind_Resume();
  pdVar7[-0xc] = (double)unaff_x28;
  pdVar7[-0xb] = (double)unaff_x27;
  pdVar7[-10] = (double)lVar28;
  pdVar7[-9] = (double)lVar14;
  pdVar7[-8] = (double)uVar27;
  pdVar7[-7] = (double)unaff_x23;
  pdVar7[-6] = (double)pdVar26;
  pdVar7[-5] = (double)lVar15;
  pdVar7[-4] = (double)pdVar29;
  pdVar7[-3] = (double)pdVar9;
  pdVar7[-2] = (double)&puStack_310;
  pdVar7[-1] = (double)FUN_109910f48;
  pdVar7[-0x15] = (double)param_8;
  pdVar7[-0x14] = (double)puVar12;
  pdVar7[-0x13] = (double)param_4;
  pdVar29 = (double *)*pdVar7;
  pdVar7[-0x17] = (double)pdVar6;
  pdVar7[-0x16] = (double)pdVar11;
  if ((long)pdVar6 <= (long)pdVar11) {
    pdVar11 = pdVar6;
  }
  if (0 < (long)pdVar11) {
    lVar10 = 0;
    pdVar26 = (double *)pdVar7[-0x14];
    lVar15 = (long)pdVar7[-0x13];
    pdVar7[-0x12] = (double)(lVar15 * 0x40 + 0x40);
    pdVar6 = param_7;
    pdVar9 = pdVar11;
    do {
      pdVar3 = pdVar9;
      if ((long)pdVar9 < 2) {
        pdVar3 = (double *)0x1;
      }
      if (7 < (long)pdVar3) {
        pdVar3 = (double *)0x8;
      }
      lVar28 = (long)pdVar11 - lVar10;
      lVar14 = lVar28;
      if (7 < lVar28) {
        lVar14 = 8;
      }
      if (0 < lVar28) {
        pdVar16 = (double *)0x0;
        pdVar17 = (double *)((ulong)param_7 >> 3 & 1);
        pdVar19 = pdVar26;
        do {
          puVar12 = (undefined *)((long)pdVar16 + lVar10);
          if (pdVar16 != (double *)0x0) {
            dVar32 = *pdVar29 * *(double *)(param_5 + (long)puVar12 * param_6 * 8);
            pdVar23 = pdVar17;
            if ((long)pdVar16 <= (long)pdVar17) {
              pdVar23 = pdVar16;
            }
            pdVar4 = pdVar19;
            pdVar5 = pdVar6;
            pdVar22 = pdVar23;
            if (((ulong)param_7 & 7) != 0) {
              pdVar23 = pdVar16;
              pdVar22 = pdVar16;
            }
            for (; pdVar23 != (double *)0x0; pdVar23 = (double *)((long)pdVar23 - 1)) {
              *pdVar5 = dVar32 * *pdVar4 + *pdVar5;
              pdVar4 = pdVar4 + 1;
              pdVar5 = pdVar5 + 1;
            }
            lVar28 = (long)pdVar16 - (long)pdVar22;
            pdVar23 = (double *)((lVar28 - (lVar28 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar22);
            if (1 < lVar28) {
              lVar28 = (long)pdVar22 << 3;
              do {
                dVar30 = *(double *)((long)pdVar19 + lVar28);
                dVar31 = *(double *)((long)pdVar6 + lVar28);
                ((double *)((long)pdVar6 + lVar28))[1] =
                     ((double *)((long)pdVar6 + lVar28))[1] +
                     ((double *)((long)pdVar19 + lVar28))[1] * dVar32;
                *(double *)((long)pdVar6 + lVar28) = dVar31 + dVar30 * dVar32;
                pdVar22 = (double *)((long)pdVar22 + 2);
                lVar28 = lVar28 + 0x10;
              } while ((long)pdVar22 < (long)pdVar23);
            }
            if ((long)pdVar23 < (long)pdVar16) {
              do {
                pdVar6[(long)pdVar23] = dVar32 * pdVar19[(long)pdVar23] + pdVar6[(long)pdVar23];
                pdVar23 = (double *)((long)pdVar23 + 1);
              } while (pdVar16 != pdVar23);
            }
          }
          pdVar16 = (double *)((long)pdVar16 + 1);
          param_7[(long)puVar12] =
               param_7[(long)puVar12] +
               *(double *)(param_5 + (long)puVar12 * param_6 * 8) * *pdVar29;
          pdVar19 = pdVar19 + lVar15;
        } while (pdVar16 != pdVar3);
      }
      if (lVar10 != 0) {
        pdVar7[-0xe] = (double)((long)pdVar7[-0x14] + lVar10 * (long)pdVar7[-0x13] * 8);
        pdVar7[-0xd] = pdVar7[-0x13];
        pdVar7[-0x10] = (double)(param_5 + lVar10 * param_6 * 8);
        pdVar7[-0xf] = (double)param_6;
        dVar32 = *pdVar29;
        pdVar7[-0x11] = (double)pdVar26;
        FUN_109911198(dVar32,lVar10,lVar14,pdVar7 + -0xe,pdVar7 + -0x10,param_7,pdVar7[-0x15]);
        pdVar26 = (double *)pdVar7[-0x11];
      }
      lVar10 = lVar10 + 8;
      pdVar9 = pdVar9 + -1;
      pdVar26 = (double *)((long)pdVar26 + (long)pdVar7[-0x12]);
      pdVar6 = pdVar6 + 8;
    } while (lVar10 < (long)pdVar11);
  }
  if ((long)pdVar7[-0x17] < (long)pdVar7[-0x16]) {
    pdVar7[-0xe] = (double)((long)pdVar7[-0x14] + (long)pdVar7[-0x13] * (long)pdVar11 * 8);
    pdVar7[-0xd] = pdVar7[-0x13];
    pdVar7[-0x10] = (double)(param_5 + param_6 * (long)pdVar11 * 8);
    pdVar7[-0xf] = (double)param_6;
    FUN_109909a3c(*pdVar29,pdVar11,(long)pdVar7[-0x16] - (long)pdVar11,pdVar7 + -0xe,pdVar7 + -0x10,
                  param_7,pdVar7[-0x15]);
  }
  return;
}



/* Entry: 109910ddc; end: 109910f47;  */

void FUN_109910ddc(undefined8 *param_1,long param_2,undefined8 *param_3,double *param_4,long param_5
                  ,long param_6,double *param_7,undefined8 param_8)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined *puVar8;
  long lVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  double *unaff_x23;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 unaff_x27;
  double *pdVar20;
  undefined8 unaff_x28;
  double dVar21;
  double dVar22;
  double dVar23;
  double dStack_60;
  long lStack_58;
  
  pdVar4 = &dStack_60;
  pdVar5 = &dStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined *)*param_1;
  pdVar20 = (double *)param_1[1];
  pdVar16 = (double *)param_1[2];
  lVar18 = param_1[6];
  lVar15 = *(long *)(param_2 + 0x20);
  lVar19 = *(long *)(param_2 + 0x68);
  dStack_60 = *(double *)(param_2 + 0x18) * *param_4;
  uVar17 = param_3[2];
  if (uVar17 >> 0x3d == 0) {
    param_7 = (double *)*param_3;
    if (param_7 == (double *)0x0) {
      param_7 = (double *)(uVar17 << 3);
      if (uVar17 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar9 = -((ulong)((long)param_7 + 0x1eU) & 0xfffffffffffffff0);
        pdVar4 = (double *)((long)&dStack_60 + lVar9);
        param_7 = (double *)((long)&dStack_60 + lVar9);
        unaff_x23 = param_7;
      }
      else {
        _malloc();
        unaff_x23 = param_7;
        if (param_7 == (double *)0x0) goto LAB_109910f08;
      }
    }
    else {
      pdVar4 = &dStack_60;
      unaff_x23 = (double *)0x0;
    }
    param_4 = *(double **)(lVar18 + 0x10);
    param_6 = *(long *)(lVar19 + 0x10);
    *(double **)((long)pdVar4 + -0x10) = &dStack_60;
    param_8 = 1;
    pdVar6 = pdVar16;
    pdVar7 = pdVar20;
    param_5 = lVar15;
    FUN_109910f48();
    if (0x4000 < uVar17) {
      pdVar6 = unaff_x23;
      _free();
    }
    pdVar5 = pdVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
LAB_109910f08:
    pdVar6 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar7 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    puVar8 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < uVar17) {
    _free(unaff_x23);
  }
  pdVar4 = pdVar6;
  __Unwind_Resume();
  pdVar5[-0xc] = (double)unaff_x28;
  pdVar5[-0xb] = (double)unaff_x27;
  pdVar5[-10] = (double)lVar19;
  pdVar5[-9] = (double)lVar18;
  pdVar5[-8] = (double)uVar17;
  pdVar5[-7] = (double)unaff_x23;
  pdVar5[-6] = (double)pdVar16;
  pdVar5[-5] = (double)lVar15;
  pdVar5[-4] = (double)pdVar20;
  pdVar5[-3] = (double)pdVar6;
  pdVar5[-2] = (double)&stack0xfffffffffffffff0;
  pdVar5[-1] = (double)FUN_109910f48;
  pdVar5[-0x15] = (double)param_8;
  pdVar5[-0x14] = (double)puVar8;
  pdVar5[-0x13] = (double)param_4;
  pdVar20 = (double *)*pdVar5;
  pdVar5[-0x17] = (double)pdVar4;
  pdVar5[-0x16] = (double)pdVar7;
  if ((long)pdVar4 <= (long)pdVar7) {
    pdVar7 = pdVar4;
  }
  if (0 < (long)pdVar7) {
    lVar15 = 0;
    pdVar16 = (double *)pdVar5[-0x14];
    lVar18 = (long)pdVar5[-0x13];
    pdVar5[-0x12] = (double)(lVar18 * 0x40 + 0x40);
    pdVar4 = param_7;
    pdVar6 = pdVar7;
    do {
      pdVar1 = pdVar6;
      if ((long)pdVar6 < 2) {
        pdVar1 = (double *)0x1;
      }
      if (7 < (long)pdVar1) {
        pdVar1 = (double *)0x8;
      }
      lVar9 = (long)pdVar7 - lVar15;
      lVar19 = lVar9;
      if (7 < lVar9) {
        lVar19 = 8;
      }
      if (0 < lVar9) {
        pdVar10 = (double *)0x0;
        pdVar11 = (double *)((ulong)param_7 >> 3 & 1);
        pdVar12 = pdVar16;
        do {
          puVar8 = (undefined *)((long)pdVar10 + lVar15);
          if (pdVar10 != (double *)0x0) {
            dVar21 = *pdVar20 * *(double *)(param_5 + (long)puVar8 * param_6 * 8);
            pdVar14 = pdVar11;
            if ((long)pdVar10 <= (long)pdVar11) {
              pdVar14 = pdVar10;
            }
            pdVar2 = pdVar12;
            pdVar3 = pdVar4;
            pdVar13 = pdVar14;
            if (((ulong)param_7 & 7) != 0) {
              pdVar14 = pdVar10;
              pdVar13 = pdVar10;
            }
            for (; pdVar14 != (double *)0x0; pdVar14 = (double *)((long)pdVar14 + -1)) {
              *pdVar3 = dVar21 * *pdVar2 + *pdVar3;
              pdVar2 = pdVar2 + 1;
              pdVar3 = pdVar3 + 1;
            }
            lVar9 = (long)pdVar10 - (long)pdVar13;
            pdVar14 = (double *)((lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar13);
            if (1 < lVar9) {
              lVar9 = (long)pdVar13 << 3;
              do {
                dVar22 = *(double *)((long)pdVar12 + lVar9);
                dVar23 = *(double *)((long)pdVar4 + lVar9);
                ((double *)((long)pdVar4 + lVar9))[1] =
                     ((double *)((long)pdVar4 + lVar9))[1] +
                     ((double *)((long)pdVar12 + lVar9))[1] * dVar21;
                *(double *)((long)pdVar4 + lVar9) = dVar23 + dVar22 * dVar21;
                pdVar13 = (double *)((long)pdVar13 + 2);
                lVar9 = lVar9 + 0x10;
              } while ((long)pdVar13 < (long)pdVar14);
            }
            if ((long)pdVar14 < (long)pdVar10) {
              do {
                pdVar4[(long)pdVar14] = dVar21 * pdVar12[(long)pdVar14] + pdVar4[(long)pdVar14];
                pdVar14 = (double *)((long)pdVar14 + 1);
              } while (pdVar10 != pdVar14);
            }
          }
          pdVar10 = (double *)((long)pdVar10 + 1);
          param_7[(long)puVar8] =
               param_7[(long)puVar8] + *(double *)(param_5 + (long)puVar8 * param_6 * 8) * *pdVar20;
          pdVar12 = pdVar12 + lVar18;
        } while (pdVar10 != pdVar1);
      }
      if (lVar15 != 0) {
        pdVar5[-0xe] = (double)((long)pdVar5[-0x14] + lVar15 * (long)pdVar5[-0x13] * 8);
        pdVar5[-0xd] = pdVar5[-0x13];
        pdVar5[-0x10] = (double)(param_5 + lVar15 * param_6 * 8);
        pdVar5[-0xf] = (double)param_6;
        dVar21 = *pdVar20;
        pdVar5[-0x11] = (double)pdVar16;
        FUN_109911198(dVar21,lVar15,lVar19,pdVar5 + -0xe,pdVar5 + -0x10,param_7,pdVar5[-0x15]);
        pdVar16 = (double *)pdVar5[-0x11];
      }
      lVar15 = lVar15 + 8;
      pdVar6 = pdVar6 + -1;
      pdVar16 = (double *)((long)pdVar16 + (long)pdVar5[-0x12]);
      pdVar4 = pdVar4 + 8;
    } while (lVar15 < (long)pdVar7);
  }
  if ((long)pdVar5[-0x17] < (long)pdVar5[-0x16]) {
    pdVar5[-0xe] = (double)((long)pdVar5[-0x14] + (long)pdVar5[-0x13] * (long)pdVar7 * 8);
    pdVar5[-0xd] = pdVar5[-0x13];
    pdVar5[-0x10] = (double)(param_5 + param_6 * (long)pdVar7 * 8);
    pdVar5[-0xf] = (double)param_6;
    FUN_109909a3c(*pdVar20,pdVar7,(long)pdVar5[-0x16] - (long)pdVar7,pdVar5 + -0xe,pdVar5 + -0x10,
                  param_7,pdVar5[-0x15]);
  }
  return;
}



/* Entry: 109910f48; end: 109911197;  */

void FUN_109910f48(ulong param_1,ulong param_2,double *param_3,long param_4,long param_5,
                  long param_6,double *param_7,undefined8 param_8,double *param_9)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double *pdVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  double *pdVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_80;
  long lStack_78;
  double *pdStack_70;
  long lStack_68;
  
  uVar1 = param_2;
  if ((long)param_1 <= (long)param_2) {
    uVar1 = param_1;
  }
  if (0 < (long)uVar1) {
    lVar16 = 0;
    pdVar6 = param_3;
    pdVar14 = param_7;
    uVar15 = uVar1;
    do {
      uVar3 = uVar15;
      if ((long)uVar15 < 2) {
        uVar3 = 1;
      }
      if (7 < (long)uVar3) {
        uVar3 = 8;
      }
      lVar7 = uVar1 - lVar16;
      lVar2 = lVar7;
      if (7 < lVar7) {
        lVar2 = 8;
      }
      if (0 < lVar7) {
        uVar8 = 0;
        uVar9 = (ulong)param_7 >> 3 & 1;
        pdVar10 = pdVar6;
        do {
          lVar7 = uVar8 + lVar16;
          if (uVar8 != 0) {
            dVar17 = *param_9 * *(double *)(param_5 + lVar7 * param_6 * 8);
            uVar12 = uVar9;
            if ((long)uVar8 <= (long)uVar9) {
              uVar12 = uVar8;
            }
            pdVar4 = pdVar10;
            pdVar5 = pdVar14;
            uVar11 = uVar12;
            if (((ulong)param_7 & 7) != 0) {
              uVar12 = uVar8;
              uVar11 = uVar8;
            }
            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pdVar5 = dVar17 * *pdVar4 + *pdVar5;
              pdVar4 = pdVar4 + 1;
              pdVar5 = pdVar5 + 1;
            }
            lVar13 = uVar8 - uVar11;
            uVar12 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar11;
            if (1 < lVar13) {
              lVar13 = uVar11 << 3;
              do {
                dVar18 = *(double *)((long)pdVar10 + lVar13);
                dVar19 = *(double *)((long)pdVar14 + lVar13);
                ((double *)((long)pdVar14 + lVar13))[1] =
                     ((double *)((long)pdVar14 + lVar13))[1] +
                     ((double *)((long)pdVar10 + lVar13))[1] * dVar17;
                *(double *)((long)pdVar14 + lVar13) = dVar19 + dVar18 * dVar17;
                uVar11 = uVar11 + 2;
                lVar13 = lVar13 + 0x10;
              } while ((long)uVar11 < (long)uVar12);
            }
            if ((long)uVar12 < (long)uVar8) {
              do {
                pdVar14[uVar12] = dVar17 * pdVar10[uVar12] + pdVar14[uVar12];
                uVar12 = uVar12 + 1;
              } while (uVar8 != uVar12);
            }
          }
          uVar8 = uVar8 + 1;
          param_7[lVar7] = param_7[lVar7] + *(double *)(param_5 + lVar7 * param_6 * 8) * *param_9;
          pdVar10 = pdVar10 + param_4;
        } while (uVar8 != uVar3);
      }
      if (lVar16 != 0) {
        pdStack_70 = param_3 + lVar16 * param_4;
        lStack_80 = param_5 + lVar16 * param_6 * 8;
        lStack_78 = param_6;
        lStack_68 = param_4;
        FUN_109911198(*param_9,lVar16,lVar2,&pdStack_70,&lStack_80,param_7,param_8);
      }
      lVar16 = lVar16 + 8;
      uVar15 = uVar15 - 8;
      pdVar6 = pdVar6 + param_4 * 8 + 8;
      pdVar14 = pdVar14 + 8;
    } while (lVar16 < (long)uVar1);
  }
  if ((long)param_1 < (long)param_2) {
    pdStack_70 = param_3 + param_4 * uVar1;
    lStack_80 = param_5 + param_6 * uVar1 * 8;
    lStack_78 = param_6;
    lStack_68 = param_4;
    FUN_109909a3c(*param_9,uVar1,param_2 - uVar1,&pdStack_70,&lStack_80,param_7,param_8);
  }
  return;
}



/* Entry: 109911198; end: 109911547;  */

void FUN_109911198(double param_1,ulong param_2,long param_3,long *param_4,long *param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double *pdVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double *pdVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  
  uVar6 = param_4[1];
  lVar7 = 0x10;
  if (0x7c < (uVar6 >> 5 & 0xffffffffffffff)) {
    lVar7 = 4;
  }
  lVar2 = param_3;
  if (0x7f < param_3) {
    lVar2 = lVar7;
  }
  if (0 < param_3) {
    lVar7 = 0;
    lVar8 = *param_4;
    lVar9 = uVar6 * 8;
    pdVar4 = (double *)(lVar8 + 0x40);
    lVar5 = 0;
    do {
      lVar1 = lVar5 + lVar2;
      lVar3 = lVar1;
      if (param_3 <= lVar1) {
        lVar3 = param_3;
      }
      if ((long)param_2 < 0x10) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        pdVar11 = pdVar4;
        do {
          dVar29 = 0.0;
          dVar30 = 0.0;
          dVar33 = 0.0;
          dVar34 = 0.0;
          pdVar13 = (double *)(*param_5 + lVar7 * param_5[1]);
          dVar31 = 0.0;
          dVar32 = 0.0;
          dVar27 = 0.0;
          dVar28 = 0.0;
          dVar25 = 0.0;
          dVar26 = 0.0;
          dVar23 = 0.0;
          dVar24 = 0.0;
          dVar21 = 0.0;
          dVar22 = 0.0;
          dVar19 = 0.0;
          dVar20 = 0.0;
          pdVar16 = pdVar11;
          lVar15 = lVar5;
          do {
            dVar35 = *pdVar13;
            dVar29 = dVar29 + pdVar16[-8] * dVar35;
            dVar30 = dVar30 + pdVar16[-7] * dVar35;
            dVar33 = dVar33 + pdVar16[-6] * dVar35;
            dVar34 = dVar34 + pdVar16[-5] * dVar35;
            dVar31 = dVar31 + pdVar16[-4] * dVar35;
            dVar32 = dVar32 + pdVar16[-3] * dVar35;
            dVar27 = dVar27 + pdVar16[-2] * dVar35;
            dVar28 = dVar28 + pdVar16[-1] * dVar35;
            dVar25 = dVar25 + *pdVar16 * dVar35;
            dVar26 = dVar26 + pdVar16[1] * dVar35;
            dVar23 = dVar23 + pdVar16[2] * dVar35;
            dVar24 = dVar24 + pdVar16[3] * dVar35;
            dVar21 = dVar21 + pdVar16[4] * dVar35;
            dVar22 = dVar22 + pdVar16[5] * dVar35;
            dVar19 = dVar19 + pdVar16[6] * dVar35;
            dVar20 = dVar20 + pdVar16[7] * dVar35;
            lVar15 = lVar15 + 1;
            pdVar13 = pdVar13 + param_5[1];
            pdVar16 = pdVar16 + uVar6;
          } while (lVar15 < lVar3);
          pdVar13 = (double *)(param_6 + uVar10 * 8);
          pdVar13[1] = pdVar13[1] + dVar30 * param_1;
          *pdVar13 = *pdVar13 + dVar29 * param_1;
          pdVar13[3] = pdVar13[3] + dVar34 * param_1;
          pdVar13[2] = pdVar13[2] + dVar33 * param_1;
          pdVar13[5] = pdVar13[5] + dVar32 * param_1;
          pdVar13[4] = pdVar13[4] + dVar31 * param_1;
          pdVar13[7] = pdVar13[7] + dVar28 * param_1;
          pdVar13[6] = pdVar13[6] + dVar27 * param_1;
          pdVar13[9] = pdVar13[9] + dVar26 * param_1;
          pdVar13[8] = pdVar13[8] + dVar25 * param_1;
          pdVar13[0xb] = pdVar13[0xb] + dVar24 * param_1;
          pdVar13[10] = pdVar13[10] + dVar23 * param_1;
          pdVar13[0xd] = pdVar13[0xd] + dVar22 * param_1;
          pdVar13[0xc] = pdVar13[0xc] + dVar21 * param_1;
          pdVar13[0xf] = pdVar13[0xf] + dVar20 * param_1;
          pdVar13[0xe] = pdVar13[0xe] + dVar19 * param_1;
          uVar10 = uVar10 + 0x10;
          pdVar11 = pdVar11 + 0x10;
        } while ((long)uVar10 < (long)(param_2 - 0xf));
      }
      if ((long)uVar10 < (long)(param_2 - 7)) {
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        lVar14 = uVar10 << 3;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        lVar15 = lVar5;
        do {
          dVar27 = *pdVar11;
          pdVar13 = (double *)(lVar8 + lVar14);
          dVar23 = dVar23 + *pdVar13 * dVar27;
          dVar24 = dVar24 + pdVar13[1] * dVar27;
          dVar25 = dVar25 + pdVar13[2] * dVar27;
          dVar26 = dVar26 + pdVar13[3] * dVar27;
          dVar21 = dVar21 + pdVar13[4] * dVar27;
          dVar22 = dVar22 + pdVar13[5] * dVar27;
          dVar19 = dVar19 + pdVar13[6] * dVar27;
          dVar20 = dVar20 + pdVar13[7] * dVar27;
          lVar15 = lVar15 + 1;
          pdVar11 = pdVar11 + param_5[1];
          lVar14 = lVar14 + lVar9;
        } while (lVar15 < lVar3);
        pdVar11 = (double *)(param_6 + uVar10 * 8);
        pdVar11[1] = pdVar11[1] + dVar24 * param_1;
        *pdVar11 = *pdVar11 + dVar23 * param_1;
        pdVar11[3] = pdVar11[3] + dVar26 * param_1;
        pdVar11[2] = pdVar11[2] + dVar25 * param_1;
        pdVar11[5] = pdVar11[5] + dVar22 * param_1;
        pdVar11[4] = pdVar11[4] + dVar21 * param_1;
        pdVar11[7] = pdVar11[7] + dVar20 * param_1;
        pdVar11[6] = pdVar11[6] + dVar19 * param_1;
        uVar10 = uVar10 | 8;
      }
      if ((long)uVar10 < (long)(param_2 - 5)) {
        lVar14 = uVar10 << 3;
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        lVar15 = lVar5;
        do {
          dVar25 = *pdVar11;
          pdVar13 = (double *)(lVar8 + lVar14);
          dVar21 = dVar21 + *pdVar13 * dVar25;
          dVar22 = dVar22 + pdVar13[1] * dVar25;
          dVar23 = dVar23 + pdVar13[2] * dVar25;
          dVar24 = dVar24 + pdVar13[3] * dVar25;
          dVar19 = dVar19 + pdVar13[4] * dVar25;
          dVar20 = dVar20 + pdVar13[5] * dVar25;
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + lVar9;
          pdVar11 = pdVar11 + param_5[1];
        } while (lVar15 < lVar3);
        pdVar11 = (double *)(param_6 + uVar10 * 8);
        pdVar11[1] = pdVar11[1] + dVar22 * param_1;
        *pdVar11 = *pdVar11 + dVar21 * param_1;
        pdVar11[3] = pdVar11[3] + dVar24 * param_1;
        pdVar11[2] = pdVar11[2] + dVar23 * param_1;
        pdVar11[5] = pdVar11[5] + dVar20 * param_1;
        pdVar11[4] = pdVar11[4] + dVar19 * param_1;
        uVar10 = uVar10 + 6;
      }
      if ((long)uVar10 < (long)(param_2 - 3)) {
        lVar14 = uVar10 << 3;
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        lVar15 = lVar5;
        do {
          dVar23 = *pdVar11;
          pdVar13 = (double *)(lVar8 + lVar14);
          dVar21 = dVar21 + *pdVar13 * dVar23;
          dVar22 = dVar22 + pdVar13[1] * dVar23;
          dVar19 = dVar19 + pdVar13[2] * dVar23;
          dVar20 = dVar20 + pdVar13[3] * dVar23;
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + lVar9;
          pdVar11 = pdVar11 + param_5[1];
        } while (lVar15 < lVar3);
        pdVar11 = (double *)(param_6 + uVar10 * 8);
        pdVar11[1] = pdVar11[1] + dVar22 * param_1;
        *pdVar11 = *pdVar11 + dVar21 * param_1;
        pdVar11[3] = pdVar11[3] + dVar20 * param_1;
        pdVar11[2] = pdVar11[2] + dVar19 * param_1;
        uVar10 = uVar10 + 4;
      }
      if ((long)uVar10 < (long)(param_2 - 1)) {
        lVar12 = uVar10 * 8;
        pdVar11 = (double *)(*param_5 + param_5[1] * lVar7);
        dVar19 = 0.0;
        dVar20 = 0.0;
        lVar14 = lVar12;
        lVar15 = lVar5;
        do {
          dVar19 = dVar19 + *(double *)(lVar8 + lVar14) * *pdVar11;
          dVar20 = dVar20 + ((double *)(lVar8 + lVar14))[1] * *pdVar11;
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + lVar9;
          pdVar11 = pdVar11 + param_5[1];
        } while (lVar15 < lVar3);
        dVar21 = *(double *)(param_6 + lVar12);
        ((double *)(param_6 + lVar12))[1] = ((double *)(param_6 + lVar12))[1] + dVar20 * param_1;
        *(double *)(param_6 + lVar12) = dVar21 + dVar19 * param_1;
        uVar10 = uVar10 + 2;
      }
      if ((long)uVar10 < (long)param_2) {
        lVar14 = *param_5;
        lVar12 = param_5[1];
        lVar15 = uVar10 << 3;
        do {
          dVar19 = 0.0;
          lVar17 = lVar15;
          pdVar11 = (double *)(lVar14 + lVar12 * lVar7);
          lVar18 = lVar5;
          do {
            dVar19 = dVar19 + *(double *)(lVar8 + lVar17) * *pdVar11;
            lVar18 = lVar18 + 1;
            pdVar11 = pdVar11 + lVar12;
            lVar17 = lVar17 + lVar9;
          } while (lVar18 < lVar3);
          *(double *)(param_6 + uVar10 * 8) = *(double *)(param_6 + uVar10 * 8) + dVar19 * param_1;
          uVar10 = uVar10 + 1;
          lVar15 = lVar15 + 8;
        } while (uVar10 != param_2);
      }
      lVar7 = lVar7 + lVar2 * 8;
      pdVar4 = pdVar4 + lVar2 * uVar6;
      lVar8 = lVar8 + lVar2 * uVar6 * 8;
      lVar5 = lVar1;
    } while (lVar1 < param_3);
  }
  return;
}



/* Entry: 109911548; end: 10991164b;  */

void FUN_109911548(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x48);
  if (param_1[1] == lVar2 && param_1[2] == lVar3) goto LAB_109911604;
  if (lVar2 != 0 && lVar3 != 0) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar3;
    }
    if (lVar2 <= lVar1) goto LAB_10991159c;
    goto LAB_1099115d0;
  }
LAB_10991159c:
  uVar4 = lVar3 * lVar2;
  if (param_1[2] * param_1[1] - uVar4 != 0) {
    _free(*param_1);
    if (0 < (long)uVar4) {
      if (uVar4 >> 0x3d == 0) {
        lVar1 = uVar4 * 8;
        _malloc();
        if (lVar1 != 0) goto LAB_1099115fc;
      }
LAB_1099115d0:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109911604;
    }
    lVar1 = 0;
LAB_1099115fc:
    *param_1 = lVar1;
  }
  param_1[1] = lVar2;
  param_1[2] = lVar3;
LAB_109911604:
  if (0 < lVar3 * lVar2) {
    _bzero(*param_1,lVar3 * lVar2 * 8);
  }
  uStack_48 = 0x3ff0000000000000;
  FUN_10991164c(param_1,param_2,param_2 + 0x38,&uStack_48);
  return;
}



/* Entry: 10991164c; end: 10991191f;  */

void FUN_10991164c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  lVar5 = param_2[3];
  uStack_28 = *param_4;
  uVar2 = uVar4;
  if ((long)param_2[2] <= (long)uVar4) {
    uVar2 = param_2[2];
  }
  uVar8 = param_3[2];
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = uVar2;
  uStack_48 = uVar8;
  uStack_40 = uVar4;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar7 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18,uVar8,uVar4,uVar3);
    }
  }
  uVar6 = uStack_40;
  uVar11 = uStack_50;
  if ((long)uStack_50 <= (long)uVar8) {
    uVar11 = uVar8;
  }
  uVar12 = uStack_40;
  if ((long)uStack_40 <= (long)uVar11) {
    uVar12 = uVar11;
  }
  uVar11 = uVar6;
  if (0x2f < (long)uVar12) {
    uVar11 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
    if ((long)uVar11 < 2) {
      uVar11 = 1;
    }
    if ((long)uVar11 < (long)uStack_40) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uStack_40 / uVar11;
      }
      uVar13 = uStack_40 - uVar12 * uVar11;
      uStack_40 = uVar11;
      if (uVar13 != 0) {
        lVar1 = uVar12 * 8 + 8;
        lVar9 = 0;
        if (lVar1 != 0) {
          lVar9 = (long)(uVar11 + ~uVar13) / lVar1;
        }
        uStack_40 = uVar11 + lVar9 * -8;
      }
    }
    uVar12 = (uRam00000001132dfa00 - 0xc0) + uStack_50 * uStack_40 * -8;
    if ((long)uVar12 < (long)(uStack_40 * 0x20)) {
      uVar13 = 0;
      if (uVar11 << 5 != 0) {
        uVar13 = 0x480000 / (uVar11 << 5);
      }
    }
    else {
      uVar13 = 0;
      if (uStack_40 << 3 != 0) {
        uVar13 = uVar12 / (uStack_40 << 3);
      }
    }
    uVar11 = 0;
    if (uStack_40 << 4 != 0) {
      uVar11 = 0x180000 / (uStack_40 << 4);
    }
    if ((long)uVar11 <= (long)uVar13) {
      uVar13 = uVar11;
    }
    uVar11 = uStack_40;
    if ((uVar6 == uStack_40) && ((long)uVar8 <= (long)(uVar13 & 0xfffffffffffffffc))) {
      uVar13 = uVar6 * uVar8 * 8;
      uVar11 = uRam00000001132dfa00;
      uVar12 = uStack_50;
      if (0x400 < (long)uVar13) {
        if (0x23f < (long)uStack_50) {
          uVar12 = 0x240;
        }
        uVar11 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar13) {
          uVar11 = 0x180000;
          uVar12 = uStack_50;
        }
      }
      uVar13 = 0;
      if (uVar6 * 0x18 != 0) {
        uVar13 = uVar11 / (uVar6 * 0x18);
      }
      if ((long)uVar13 <= (long)uVar12) {
        uVar12 = uVar13;
      }
      if ((long)uVar12 < 7) {
        uVar11 = uVar6;
        if (uVar12 == 0) goto LAB_109911838;
      }
      else {
        uVar12 = ((uVar12 / 6) * 2 + uVar12 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar12 != 0) {
        lVar1 = (long)uStack_50 / (long)uVar12;
      }
      lVar9 = uStack_50 - lVar1 * uVar12;
      uVar11 = uVar6;
      uStack_50 = uVar12;
      if (lVar9 != 0) {
        lVar10 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar10 != 0) {
          lVar1 = (long)(uVar12 - lVar9) / lVar10;
        }
        uStack_50 = uVar12 + lVar1 * -6;
      }
    }
  }
LAB_109911838:
  lStack_38 = uStack_50 * uVar11;
  lStack_30 = uStack_48 * uVar11;
  FUN_109911920(uVar2,uVar8,uVar4,uVar3,*(undefined8 *)(lVar5 + 0x10),*param_3,
                *(undefined8 *)(param_3[3] + 0x10),*param_1,1,param_1[1],&uStack_28,&uStack_60);
  _free(uStack_60);
  _free(uStack_58);
  return;
}



/* Entry: 109911920; end: 109911fcf;  */

void FUN_109911920(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,undefined8 *param_8,undefined4 param_9,undefined4 param_10,
                  long param_11,undefined8 *param_12,long *param_13)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 *puStack_620;
  long lStack_618;
  ulong uStack_610;
  ulong uStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  undefined8 *puStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  long lStack_540;
  undefined1 *puStack_538;
  long lStack_530;
  long lStack_528;
  undefined1 uStack_519;
  undefined8 *puStack_518;
  long lStack_510;
  undefined1 uStack_503;
  undefined1 uStack_502;
  undefined1 uStack_501;
  undefined8 auStack_500 [13];
  undefined8 uStack_498;
  undefined8 uStack_430;
  undefined8 uStack_3c8;
  undefined8 uStack_360;
  undefined8 uStack_2f8;
  undefined8 uStack_290;
  undefined8 uStack_228;
  undefined8 uStack_1c0;
  undefined8 uStack_158;
  undefined8 uStack_f0;
  undefined8 uStack_88;
  long lStack_78;
  
  ppuVar4 = &puStack_620;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_5c8 = param_3;
  if (param_1 <= param_3) {
    lStack_5c8 = param_1;
  }
  lVar13 = param_13[4];
  lStack_5a0 = param_13[2];
  lStack_578 = lStack_5a0;
  if (lStack_5c8 <= lStack_5a0) {
    lStack_578 = lStack_5c8;
  }
  lStack_588 = lStack_578;
  if (lVar13 <= lStack_578) {
    lStack_588 = lVar13;
  }
  if (0xb < lStack_588) {
    lStack_588 = 0xc;
  }
  uVar9 = lStack_578 * lVar13;
  lStack_5f8 = param_4;
  lStack_5e8 = param_6;
  lStack_5e0 = param_7;
  puStack_598 = param_8;
  lStack_530 = param_2;
  if (uVar9 >> 0x3d == 0) {
    lStack_540 = *param_13;
    if (lStack_540 == 0) {
      lVar6 = uVar9 * 8;
      if (uVar9 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar6 = -(lVar6 + 0x1eU & 0xfffffffffffffff0);
        ppuVar4 = (undefined1 **)((long)&puStack_620 + lVar6);
        lStack_618 = (long)&puStack_620 + lVar6;
        lStack_540 = lStack_618;
      }
      else {
        _malloc();
        lStack_618 = lVar6;
        lStack_540 = lVar6;
        if (lVar6 == 0) goto LAB_109911f08;
      }
    }
    else {
      lStack_618 = 0;
      ppuVar4 = &puStack_620;
    }
    uVar5 = lVar13 * lStack_530;
    if (uVar5 >> 0x3d == 0) {
      puStack_538 = (undefined1 *)param_13[1];
      uStack_610 = uVar5;
      uStack_608 = uVar9;
      if (puStack_538 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(uVar5 * 8);
        if (uVar5 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          ppuVar4 = (undefined1 **)((long)ppuVar4 + -((ulong)(puVar3 + 0x1e) & 0xfffffffffffffff0));
          puStack_620 = (undefined1 *)ppuVar4;
          puStack_538 = (undefined1 *)ppuVar4;
          goto LAB_109911aa0;
        }
        _malloc();
        puStack_620 = puVar3;
        puStack_538 = puVar3;
        if (puVar3 != (undefined1 *)0x0) goto LAB_109911aa0;
      }
      else {
        puStack_620 = (undefined1 *)0x0;
LAB_109911aa0:
        _bzero(auStack_500,0x480);
        auStack_500[0] = 0x3ff0000000000000;
        uStack_498 = 0x3ff0000000000000;
        uStack_430 = 0x3ff0000000000000;
        uStack_3c8 = 0x3ff0000000000000;
        uStack_360 = 0x3ff0000000000000;
        uStack_2f8 = 0x3ff0000000000000;
        uStack_290 = 0x3ff0000000000000;
        uStack_228 = 0x3ff0000000000000;
        uStack_1c0 = 0x3ff0000000000000;
        uStack_158 = 0x3ff0000000000000;
        uStack_f0 = 0x3ff0000000000000;
        uStack_88 = 0x3ff0000000000000;
        if (0 < param_3) {
          lVar6 = 0;
          puStack_548 = param_12;
          lStack_550 = param_11;
          lStack_5f0 = lStack_5c8 - lVar13;
          lStack_5d8 = param_5 * 8;
          lStack_600 = lStack_5d8 + 8;
          lStack_5b0 = lStack_588 * lStack_600;
          lStack_580 = lStack_578 << 3;
          lStack_5a8 = param_5;
          lStack_590 = lVar13;
          lStack_568 = param_3;
          lStack_560 = param_1;
          do {
            lVar8 = lStack_560;
            lVar7 = lStack_588;
            lVar10 = lStack_590;
            lVar1 = lStack_5d8;
            lVar13 = lStack_590;
            if (param_3 - lVar6 <= lStack_590) {
              lVar13 = param_3 - lVar6;
            }
            lStack_5d0 = lStack_5f0;
            lStack_528 = lStack_5c8 - lVar6;
            if (lStack_560 <= lVar6 || lVar13 + lVar6 <= lStack_5c8) {
              lStack_5d0 = lVar6;
              lStack_528 = lVar13;
            }
            puStack_518 = (undefined8 *)(lStack_5e8 + lVar6 * lStack_5e0 * 8);
            lStack_510 = lStack_5e0;
            func_0x000109404d2c(&uStack_503,puStack_538,&puStack_518,lStack_528,lStack_530,0,0);
            lStack_558 = lVar6;
            if ((lVar6 < lVar8) && (0 < lStack_528)) {
              lVar13 = 0;
              lStack_570 = lStack_5f8 + lVar6 * lStack_600;
              lStack_5b8 = lStack_5f8 + lVar6 * 8;
              puStack_5c0 = puStack_598 + lVar6;
              lVar6 = lStack_528;
              do {
                if (lStack_5a0 <= lVar10) {
                  lVar10 = lStack_5a0;
                }
                if (param_3 <= lVar10) {
                  lVar10 = param_3;
                }
                if (lVar8 <= lVar10) {
                  lVar10 = lVar8;
                }
                if (lVar6 <= lVar10) {
                  lVar10 = lVar6;
                }
                if (0xb < lVar10) {
                  lVar10 = 0xc;
                }
                if (lStack_528 - lVar13 <= lVar7) {
                  lVar7 = lStack_528 - lVar13;
                }
                if (0 < lVar7) {
                  lVar14 = 0;
                  lVar8 = 0;
                  puVar15 = auStack_500;
                  lVar11 = lStack_570;
                  do {
                    if (lVar8 != 0) {
                      _memcpy(puVar15,lVar11,lVar14);
                    }
                    lVar8 = lVar8 + 1;
                    lVar14 = lVar14 + 8;
                    lVar11 = lVar11 + lVar1;
                    puVar15 = puVar15 + 0xc;
                  } while (lVar10 != lVar8);
                }
                lVar10 = lStack_540;
                puStack_518 = auStack_500;
                lStack_510 = 0xc;
                func_0x000109404b80(&uStack_502,lStack_540,&puStack_518,lVar7,lVar7,0,0);
                lVar14 = lVar13 + lStack_558;
                puStack_518 = puStack_598 + lVar14;
                lStack_510 = lStack_550;
                uVar16 = *puStack_548;
                *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                *(long *)((long)ppuVar4 + -0x10) = lVar13;
                *(long *)((long)ppuVar4 + -0x20) = lStack_528;
                FUN_109404e14(uVar16,&uStack_501,&puStack_518,lVar10,puStack_538,lVar7,lVar7,
                              lStack_530,lVar7);
                lVar11 = lStack_540;
                lVar8 = lStack_560;
                param_3 = lStack_568;
                lVar10 = lStack_590;
                param_5 = lStack_5a8;
                if (0 < lVar13) {
                  puStack_518 = (undefined8 *)(lStack_5b8 + lVar14 * lStack_5a8 * 8);
                  lStack_510 = lStack_5a8;
                  func_0x000109404b80(&uStack_502,lStack_540,&puStack_518,lVar7,lVar13,0,0);
                  puStack_518 = puStack_5c0;
                  lStack_510 = lStack_550;
                  uVar16 = *puStack_548;
                  *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                  *(long *)((long)ppuVar4 + -0x10) = lVar13;
                  *(long *)((long)ppuVar4 + -0x20) = lStack_528;
                  FUN_109404e14(uVar16,&uStack_501,&puStack_518,lVar11,puStack_538,lVar13,lVar7,
                                lStack_530,lVar7);
                }
                lVar13 = lVar13 + lStack_588;
                lVar6 = lVar6 - lStack_588;
                lStack_570 = lStack_570 + lStack_5b0;
                lVar7 = lStack_588;
              } while (lVar13 < lStack_528);
            }
            lStack_570 = lStack_5c8;
            if (lStack_558 <= lStack_5c8) {
              lStack_570 = lStack_558;
            }
            if (0 < lStack_570) {
              lVar10 = 0;
              lVar13 = 0;
              puVar12 = (undefined8 *)(lStack_5f8 + lStack_5d8 * lStack_558);
              lVar6 = lStack_578;
              puVar15 = puStack_598;
              do {
                lVar8 = lStack_528;
                lVar1 = lStack_540;
                lVar7 = lStack_558;
                if (param_3 <= lStack_558) {
                  lVar7 = param_3;
                }
                if (lStack_560 <= lVar7) {
                  lVar7 = lStack_560;
                }
                if (lVar6 <= lVar7) {
                  lVar7 = lVar6;
                }
                puStack_518 = puVar12;
                lStack_510 = param_5;
                func_0x000109404b80(&uStack_519,lStack_540,&puStack_518,lStack_528,lVar7 + lVar10,0,
                                    0);
                lStack_510 = lStack_550;
                uVar16 = *puStack_548;
                puStack_518 = puVar15;
                *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                *(undefined8 *)((long)ppuVar4 + -0x10) = 0;
                *(undefined8 *)((long)ppuVar4 + -0x20) = 0xffffffffffffffff;
                FUN_109404e14(uVar16,&uStack_501,&puStack_518,lVar1,puStack_538,lVar7 + lVar10,lVar8
                              ,lStack_530,0xffffffffffffffff);
                lVar13 = lVar13 + lStack_578;
                puVar15 = (undefined8 *)((long)puVar15 + lStack_580);
                puVar12 = (undefined8 *)((long)puVar12 + lStack_580);
                lVar6 = lVar6 + lStack_578;
                lVar10 = lVar10 - lStack_578;
                param_3 = lStack_568;
              } while (lVar13 < lStack_570);
            }
            lVar6 = lStack_5d0 + lStack_590;
          } while (lVar6 < param_3);
        }
        if (0x4000 < uStack_610) {
          _free(puStack_620);
        }
        if (0x4000 < uStack_608) {
          _free(lStack_618);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109911f70;
    }
  }
  else {
LAB_109911f08:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109911f70:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109911f74);
  (*pcVar2)();
}



/* Entry: 109911fd0; end: 1099120db;  */

void FUN_109911fd0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_48;
  
  lVar2 = param_2[1];
  lVar3 = *(long *)(*param_2 + 8);
  lVar4 = *(long *)(lVar2 + 0x10);
  if (param_1[1] == lVar3 && param_1[2] == lVar4) goto LAB_109912094;
  if (lVar3 != 0 && lVar4 != 0) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar4;
    }
    if (lVar3 <= lVar1) goto LAB_109912028;
    goto LAB_10991205c;
  }
LAB_109912028:
  uVar5 = lVar4 * lVar3;
  if (param_1[2] * param_1[1] - uVar5 != 0) {
    _free(*param_1);
    if (0 < (long)uVar5) {
      if (uVar5 >> 0x3d == 0) {
        lVar1 = uVar5 * 8;
        _malloc();
        if (lVar1 != 0) goto LAB_109912088;
      }
LAB_10991205c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109912094;
    }
    lVar1 = 0;
LAB_109912088:
    *param_1 = lVar1;
    lVar2 = param_2[1];
  }
  param_1[1] = lVar3;
  param_1[2] = lVar4;
LAB_109912094:
  if (0 < lVar4 * lVar3) {
    _bzero(*param_1,lVar4 * lVar3 * 8);
  }
  uStack_48 = 0x3ff0000000000000;
  FUN_1099120dc(param_1,*param_2,lVar2,&uStack_48);
  return;
}



/* Entry: 1099120dc; end: 10991239f;  */

void FUN_1099120dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_4;
  uVar3 = param_2[2];
  uVar2 = uVar3;
  if ((long)param_2[1] <= (long)uVar3) {
    uVar2 = param_2[1];
  }
  uVar6 = param_3[2];
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = uVar2;
  uStack_48 = uVar6;
  uStack_40 = uVar3;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar5 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18,uVar6,uVar3);
    }
  }
  uVar4 = uStack_40;
  uVar8 = uStack_50;
  if ((long)uStack_50 <= (long)uVar6) {
    uVar8 = uVar6;
  }
  uVar10 = uStack_40;
  if ((long)uStack_40 <= (long)uVar8) {
    uVar10 = uVar8;
  }
  uVar8 = uVar4;
  if (0x2f < (long)uVar10) {
    uVar8 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
    if ((long)uVar8 < 2) {
      uVar8 = 1;
    }
    if ((long)uVar8 < (long)uStack_40) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uStack_40 / uVar8;
      }
      uVar11 = uStack_40 - uVar10 * uVar8;
      uStack_40 = uVar8;
      if (uVar11 != 0) {
        lVar1 = uVar10 * 8 + 8;
        lVar7 = 0;
        if (lVar1 != 0) {
          lVar7 = (long)(uVar8 + ~uVar11) / lVar1;
        }
        uStack_40 = uVar8 + lVar7 * -8;
      }
    }
    uVar10 = (uRam00000001132dfa00 - 0xc0) + uStack_50 * uStack_40 * -8;
    if ((long)uVar10 < (long)(uStack_40 * 0x20)) {
      uVar11 = 0;
      if (uVar8 << 5 != 0) {
        uVar11 = 0x480000 / (uVar8 << 5);
      }
    }
    else {
      uVar11 = 0;
      if (uStack_40 << 3 != 0) {
        uVar11 = uVar10 / (uStack_40 << 3);
      }
    }
    uVar8 = 0;
    if (uStack_40 << 4 != 0) {
      uVar8 = 0x180000 / (uStack_40 << 4);
    }
    if ((long)uVar8 <= (long)uVar11) {
      uVar11 = uVar8;
    }
    uVar8 = uStack_40;
    if ((uVar4 == uStack_40) && ((long)uVar6 <= (long)(uVar11 & 0xfffffffffffffffc))) {
      uVar11 = uVar4 * uVar6 * 8;
      uVar8 = uRam00000001132dfa00;
      uVar10 = uStack_50;
      if (0x400 < (long)uVar11) {
        if (0x23f < (long)uStack_50) {
          uVar10 = 0x240;
        }
        uVar8 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar11) {
          uVar8 = 0x180000;
          uVar10 = uStack_50;
        }
      }
      uVar11 = 0;
      if (uVar4 * 0x18 != 0) {
        uVar11 = uVar8 / (uVar4 * 0x18);
      }
      if ((long)uVar11 <= (long)uVar10) {
        uVar10 = uVar11;
      }
      if ((long)uVar10 < 7) {
        uVar8 = uVar4;
        if (uVar10 == 0) goto LAB_1099122c4;
      }
      else {
        uVar10 = ((uVar10 / 6) * 2 + uVar10 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar10 != 0) {
        lVar1 = (long)uStack_50 / (long)uVar10;
      }
      lVar7 = uStack_50 - lVar1 * uVar10;
      uVar8 = uVar4;
      uStack_50 = uVar10;
      if (lVar7 != 0) {
        lVar9 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar9 != 0) {
          lVar1 = (long)(uVar10 - lVar7) / lVar9;
        }
        uStack_50 = uVar10 + lVar1 * -6;
      }
    }
  }
LAB_1099122c4:
  lStack_38 = uStack_50 * uVar8;
  lStack_30 = uStack_48 * uVar8;
  FUN_1098e49a8(uVar2,uVar6,uVar3,*param_2,param_2[2],*param_3,param_3[1],*param_1,1,param_1[1],
                &uStack_28,&uStack_60);
  _free(uStack_60);
  _free(uStack_58);
  return;
}



/* Entry: 1099123a0; end: 1099124ab;  */

void FUN_1099123a0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_48;
  
  lVar2 = param_2[1];
  lVar3 = *(long *)(*param_2 + 0x10);
  lVar4 = *(long *)(lVar2 + 0x10);
  if (param_1[1] == lVar3 && param_1[2] == lVar4) goto LAB_109912464;
  if (lVar3 != 0 && lVar4 != 0) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar4;
    }
    if (lVar3 <= lVar1) goto LAB_1099123f8;
    goto LAB_10991242c;
  }
LAB_1099123f8:
  uVar5 = lVar4 * lVar3;
  if (param_1[2] * param_1[1] - uVar5 != 0) {
    _free(*param_1);
    if (0 < (long)uVar5) {
      if (uVar5 >> 0x3d == 0) {
        lVar1 = uVar5 * 8;
        _malloc();
        if (lVar1 != 0) goto LAB_109912458;
      }
LAB_10991242c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109912464;
    }
    lVar1 = 0;
LAB_109912458:
    *param_1 = lVar1;
    lVar2 = param_2[1];
  }
  param_1[1] = lVar3;
  param_1[2] = lVar4;
LAB_109912464:
  if (0 < lVar4 * lVar3) {
    _bzero(*param_1,lVar4 * lVar3 * 8);
  }
  uStack_48 = 0x3ff0000000000000;
  FUN_1099124ac(param_1,param_2,lVar2,&uStack_48);
  return;
}



/* Entry: 1099124ac; end: 109912777;  */

void FUN_1099124ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  param_2 = (undefined8 *)*param_2;
  uStack_28 = *param_4;
  uVar6 = param_3[2];
  uVar3 = param_2[2];
  uVar2 = uVar3;
  if ((long)param_2[1] <= (long)uVar3) {
    uVar2 = param_2[1];
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = uVar3;
  uStack_48 = uVar6;
  uStack_40 = uVar2;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar5 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18,uVar6,uVar2);
    }
  }
  uVar4 = uStack_40;
  uVar9 = uStack_50;
  if ((long)uStack_50 <= (long)uVar6) {
    uVar9 = uVar6;
  }
  uVar10 = uStack_40;
  if ((long)uStack_40 <= (long)uVar9) {
    uVar10 = uVar9;
  }
  uVar9 = uVar4;
  if (0x2f < (long)uVar10) {
    uVar9 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
    if ((long)uVar9 < 2) {
      uVar9 = 1;
    }
    if ((long)uVar9 < (long)uStack_40) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uStack_40 / uVar9;
      }
      uVar11 = uStack_40 - uVar10 * uVar9;
      uStack_40 = uVar9;
      if (uVar11 != 0) {
        lVar1 = uVar10 * 8 + 8;
        lVar7 = 0;
        if (lVar1 != 0) {
          lVar7 = (long)(uVar9 + ~uVar11) / lVar1;
        }
        uStack_40 = uVar9 + lVar7 * -8;
      }
    }
    uVar10 = (uRam00000001132dfa00 - 0xc0) + uStack_50 * uStack_40 * -8;
    if ((long)uVar10 < (long)(uStack_40 * 0x20)) {
      uVar11 = 0;
      if (uVar9 << 5 != 0) {
        uVar11 = 0x480000 / (uVar9 << 5);
      }
    }
    else {
      uVar11 = 0;
      if (uStack_40 << 3 != 0) {
        uVar11 = uVar10 / (uStack_40 << 3);
      }
    }
    uVar9 = 0;
    if (uStack_40 << 4 != 0) {
      uVar9 = 0x180000 / (uStack_40 << 4);
    }
    if ((long)uVar9 <= (long)uVar11) {
      uVar11 = uVar9;
    }
    uVar9 = uStack_40;
    if ((uVar4 == uStack_40) && ((long)uVar6 <= (long)(uVar11 & 0xfffffffffffffffc))) {
      uVar11 = uVar4 * uVar6 * 8;
      uVar9 = uRam00000001132dfa00;
      uVar10 = uStack_50;
      if (0x400 < (long)uVar11) {
        if (0x23f < (long)uStack_50) {
          uVar10 = 0x240;
        }
        uVar9 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar11) {
          uVar9 = 0x180000;
          uVar10 = uStack_50;
        }
      }
      uVar11 = 0;
      if (uVar4 * 0x18 != 0) {
        uVar11 = uVar9 / (uVar4 * 0x18);
      }
      if ((long)uVar11 <= (long)uVar10) {
        uVar10 = uVar11;
      }
      if ((long)uVar10 < 7) {
        uVar9 = uVar4;
        if (uVar10 == 0) goto LAB_109912694;
      }
      else {
        uVar10 = ((uVar10 / 6) * 2 + uVar10 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar10 != 0) {
        lVar1 = (long)uStack_50 / (long)uVar10;
      }
      lVar7 = uStack_50 - lVar1 * uVar10;
      uVar9 = uVar4;
      uStack_50 = uVar10;
      if (lVar7 != 0) {
        lVar8 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar8 != 0) {
          lVar1 = (long)(uVar10 - lVar7) / lVar8;
        }
        uStack_50 = uVar10 + lVar1 * -6;
      }
    }
  }
LAB_109912694:
  lStack_38 = uStack_50 * uVar9;
  lStack_30 = uStack_48 * uVar9;
  FUN_1098e507c(uVar3,uVar6,uVar2,*param_2,param_2[2],*param_3,param_3[1],*param_1,1,param_1[1],
                &uStack_28,&uStack_60);
  _free(uStack_60);
  _free(uStack_58);
  return;
}



/* Entry: 109912778; end: 109912a4b;  */

void FUN_109912778(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_4;
  uVar5 = param_3[2];
  uVar6 = param_2[1];
  uVar2 = uVar6;
  if ((long)param_2[2] <= (long)uVar6) {
    uVar2 = param_2[2];
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  uStack_40 = uVar2;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar4 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18,uVar6,uVar2);
    }
  }
  uVar3 = uStack_40;
  uVar8 = uStack_50;
  if ((long)uStack_50 <= (long)uVar6) {
    uVar8 = uVar6;
  }
  uVar10 = uStack_40;
  if ((long)uStack_40 <= (long)uVar8) {
    uVar10 = uVar8;
  }
  uVar8 = uVar3;
  if (0x2f < (long)uVar10) {
    uVar8 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
    if ((long)uVar8 < 2) {
      uVar8 = 1;
    }
    if ((long)uVar8 < (long)uStack_40) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uStack_40 / uVar8;
      }
      uVar11 = uStack_40 - uVar10 * uVar8;
      uStack_40 = uVar8;
      if (uVar11 != 0) {
        lVar1 = uVar10 * 8 + 8;
        lVar7 = 0;
        if (lVar1 != 0) {
          lVar7 = (long)(uVar8 + ~uVar11) / lVar1;
        }
        uStack_40 = uVar8 + lVar7 * -8;
      }
    }
    uVar10 = (uRam00000001132dfa00 - 0xc0) + uStack_50 * uStack_40 * -8;
    if ((long)uVar10 < (long)(uStack_40 * 0x20)) {
      uVar11 = 0;
      if (uVar8 << 5 != 0) {
        uVar11 = 0x480000 / (uVar8 << 5);
      }
    }
    else {
      uVar11 = 0;
      if (uStack_40 << 3 != 0) {
        uVar11 = uVar10 / (uStack_40 << 3);
      }
    }
    uVar8 = 0;
    if (uStack_40 << 4 != 0) {
      uVar8 = 0x180000 / (uStack_40 << 4);
    }
    if ((long)uVar8 <= (long)uVar11) {
      uVar11 = uVar8;
    }
    uVar8 = uStack_40;
    if ((uVar3 == uStack_40) && ((long)uVar6 <= (long)(uVar11 & 0xfffffffffffffffc))) {
      uVar11 = uVar3 * uVar6 * 8;
      uVar8 = uRam00000001132dfa00;
      uVar10 = uStack_50;
      if (0x400 < (long)uVar11) {
        if (0x23f < (long)uStack_50) {
          uVar10 = 0x240;
        }
        uVar8 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar11) {
          uVar8 = 0x180000;
          uVar10 = uStack_50;
        }
      }
      uVar11 = 0;
      if (uVar3 * 0x18 != 0) {
        uVar11 = uVar8 / (uVar3 * 0x18);
      }
      if ((long)uVar11 <= (long)uVar10) {
        uVar10 = uVar11;
      }
      if ((long)uVar10 < 7) {
        uVar8 = uVar3;
        if (uVar10 == 0) goto LAB_109912964;
      }
      else {
        uVar10 = ((uVar10 / 6) * 2 + uVar10 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar10 != 0) {
        lVar1 = (long)uStack_50 / (long)uVar10;
      }
      lVar7 = uStack_50 - lVar1 * uVar10;
      uVar8 = uVar3;
      uStack_50 = uVar10;
      if (lVar7 != 0) {
        lVar9 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar9 != 0) {
          lVar1 = (long)(uVar10 - lVar7) / lVar9;
        }
        uStack_50 = uVar10 + lVar1 * -6;
      }
    }
  }
LAB_109912964:
  lStack_38 = uStack_50 * uVar8;
  lStack_30 = uStack_48 * uVar8;
  FUN_109912a4c(uVar5,uVar6,uVar2,*param_3,param_3[1],*param_2,*(undefined8 *)(param_2[3] + 0x10),
                *param_1,1,*(undefined8 *)(param_1[3] + 0x10),&uStack_28,&uStack_60);
  _free(uStack_60);
  _free(uStack_58);
  return;
}



/* Entry: 109912a4c; end: 1099130ab;  */

void FUN_109912a4c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,undefined4 param_9,undefined4 param_10,long param_11,
                  undefined8 *param_12,long *param_13)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 *puStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  ppuVar4 = &puStack_2b0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 <= param_3) {
    param_3 = param_2;
  }
  lVar10 = param_13[4];
  lVar1 = param_13[2];
  if (param_1 <= param_13[2]) {
    lVar1 = param_1;
  }
  uVar7 = lVar1 * lVar10;
  lStack_288 = param_4;
  lStack_280 = param_8;
  lStack_270 = param_2;
  lStack_268 = param_6;
  lStack_240 = param_5;
  lStack_208 = param_7;
  if (uVar7 >> 0x3d == 0) {
    lStack_1c0 = *param_13;
    if (lStack_1c0 == 0) {
      lVar8 = uVar7 * 8;
      if (uVar7 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar8 = -(lVar8 + 0x1eU & 0xfffffffffffffff0);
        ppuVar4 = (undefined1 **)((long)&puStack_2b0 + lVar8);
        lStack_2a8 = (long)&puStack_2b0 + lVar8;
        lStack_1c0 = lStack_2a8;
      }
      else {
        _malloc();
        lStack_2a8 = lVar8;
        lStack_1c0 = lVar8;
        if (lVar8 == 0) goto LAB_109912fe8;
      }
    }
    else {
      lStack_2a8 = 0;
      ppuVar4 = &puStack_2b0;
    }
    uVar6 = lVar10 * lStack_270 + 2;
    if (uVar6 >> 0x3d == 0) {
      puStack_1f8 = (undefined1 *)param_13[1];
      uStack_2a0 = uVar6;
      uStack_298 = uVar7;
      if (puStack_1f8 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(uVar6 * 8);
        if (uVar6 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          ppuVar4 = (undefined1 **)((long)ppuVar4 + -((ulong)(puVar3 + 0x1e) & 0xfffffffffffffff0));
          puStack_2b0 = (undefined1 *)ppuVar4;
          puStack_1f8 = (undefined1 *)ppuVar4;
          goto LAB_109912ba8;
        }
        _malloc();
        puStack_2b0 = puVar3;
        puStack_1f8 = puVar3;
        if (puVar3 != (undefined1 *)0x0) goto LAB_109912ba8;
      }
      else {
        puStack_2b0 = (undefined1 *)0x0;
LAB_109912ba8:
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0x3ff0000000000000;
        uStack_168 = 0x3ff0000000000000;
        uStack_130 = 0x3ff0000000000000;
        uStack_f8 = 0x3ff0000000000000;
        uStack_c0 = 0x3ff0000000000000;
        uStack_88 = 0x3ff0000000000000;
        if (0 < param_3) {
          puStack_1d0 = param_12;
          lStack_1d8 = lStack_208 << 3;
          lStack_258 = lStack_268 + param_3 * 8;
          lStack_248 = lStack_208 * 0x30 + 0x30;
          lStack_278 = lVar10 * -8;
          lStack_290 = param_11 << 3;
          lStack_1c8 = param_11;
          lStack_250 = lVar1 << 3;
          lStack_1e0 = param_11 * 0x30;
          lStack_220 = lVar10;
          lStack_218 = lVar1;
          lStack_210 = param_1;
          do {
            lVar10 = lStack_220;
            lVar1 = lStack_220;
            if (param_3 <= lStack_220) {
              lVar1 = param_3;
            }
            lStack_200 = param_3 - lVar1;
            lStack_228 = lStack_270 - param_3;
            puStack_230 = puStack_1f8 + lVar1 * lVar1 * 8;
            uVar7 = (ulong)puStack_230 >> 3 & 1;
            if (((ulong)puStack_230 & 7) != 0) {
              uVar7 = 2;
            }
            puStack_230 = puStack_230 + uVar7 * 8;
            puStack_1b8 = (undefined8 *)(lStack_268 + param_3 * lStack_208 * 8 + lStack_200 * 8);
            lStack_1b0 = lStack_208;
            FUN_1098e46ac(&uStack_1a3,puStack_230,&puStack_1b8,lVar1,lStack_228,0,0);
            lStack_260 = param_3;
            if (0 < lVar10) {
              lVar10 = 0;
              puStack_1e8 = (undefined8 *)(lStack_258 + lStack_1d8 * lStack_200 + lVar1 * -8);
              lStack_238 = lStack_268 + lStack_200 * 8;
              lVar8 = lVar1;
              do {
                lVar9 = lVar8;
                if (lVar8 < 2) {
                  lVar9 = 1;
                }
                if (5 < lVar9) {
                  lVar9 = 6;
                }
                lVar12 = lVar1 - lVar10;
                lVar5 = lVar12;
                if (5 < lVar12) {
                  lVar5 = 6;
                }
                puVar3 = puStack_1f8 + lVar10 * lVar1 * 8;
                puStack_1b8 = (undefined8 *)(lStack_238 + (lVar10 + lStack_200) * lStack_208 * 8);
                lStack_1b0 = lStack_208;
                FUN_10990bbc4(&uStack_1a4,puVar3,&puStack_1b8,lVar10,lVar5,lVar1,0);
                puStack_1f0 = puVar3;
                if (0 < lVar12) {
                  lVar12 = 0;
                  puVar11 = &uStack_1a0;
                  puVar13 = puStack_1e8;
                  do {
                    if (lVar12 != 0) {
                      _memcpy(puVar11,puVar13,lVar12);
                    }
                    lVar12 = lVar12 + 8;
                    puVar13 = (undefined8 *)((long)puVar13 + lStack_1d8);
                    puVar11 = puVar11 + 6;
                  } while (lVar9 * 8 - lVar12 != 0);
                }
                puStack_1b8 = &uStack_1a0;
                lStack_1b0 = 6;
                FUN_10990bbc4(&uStack_1a4,puStack_1f0,&puStack_1b8,lVar5,lVar5,lVar1,lVar10);
                lVar10 = lVar10 + 6;
                lVar8 = lVar8 + -6;
                puStack_1e8 = (undefined8 *)((long)puStack_1e8 + lStack_248);
              } while (lVar10 < lVar1);
            }
            if (0 < lStack_210) {
              lVar10 = 0;
              puStack_1e8 = (undefined8 *)(lStack_280 + lStack_290 * lStack_200);
              puStack_1f0 = (undefined1 *)(lStack_288 + lStack_200 * 8);
              lStack_200 = lStack_280 + lStack_260 * lStack_1c8 * 8;
              do {
                lVar8 = lStack_210 - lVar10;
                if (lStack_218 <= lStack_210 - lVar10) {
                  lVar8 = lStack_218;
                }
                puStack_1b8 = (undefined8 *)(puStack_1f0 + lVar10 * lStack_240 * 8);
                lStack_1b0 = lStack_240;
                FUN_1098e479c(&uStack_1a2,lStack_1c0,&puStack_1b8,lVar1,lVar8,0,0);
                if (0 < lStack_220) {
                  lVar9 = 0;
                  lVar5 = lVar1;
                  puVar3 = puStack_1f8;
                  puVar11 = puStack_1e8;
                  do {
                    lVar12 = lVar5 + -6;
                    if (5 < lVar5) {
                      lVar5 = 6;
                    }
                    lStack_1b0 = lStack_1c8;
                    uVar14 = *puStack_1d0;
                    puStack_1b8 = puVar11;
                    *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                    *(undefined8 *)((long)ppuVar4 + -0x10) = 0;
                    *(long *)((long)ppuVar4 + -0x20) = lVar1;
                    FUN_109404e14(uVar14,&uStack_1a1,&puStack_1b8,lStack_1c0,puVar3,lVar8,
                                  lVar5 + lVar9,lVar5,lVar1);
                    lVar9 = lVar9 + 6;
                    puVar3 = puVar3 + lVar1 * 0x30;
                    puVar11 = (undefined8 *)((long)puVar11 + lStack_1e0);
                    lVar5 = lVar12;
                  } while (lVar9 < lVar1);
                }
                puStack_1b8 = (undefined8 *)(lStack_200 + lVar10 * 8);
                lStack_1b0 = lStack_1c8;
                uVar14 = *puStack_1d0;
                *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                *(undefined8 *)((long)ppuVar4 + -0x10) = 0;
                *(undefined8 *)((long)ppuVar4 + -0x20) = 0xffffffffffffffff;
                FUN_109404e14(uVar14,&uStack_1a1,&puStack_1b8,lStack_1c0,puStack_230,lVar8,lVar1,
                              lStack_228,0xffffffffffffffff);
                lVar10 = lVar10 + lStack_218;
                puStack_1e8 = (undefined8 *)((long)puStack_1e8 + lStack_250);
              } while (lVar10 < lStack_210);
            }
            lStack_258 = lStack_258 + lStack_278;
            param_3 = lStack_260 - lStack_220;
          } while (param_3 != 0 && lStack_220 <= lStack_260);
        }
        if (0x4000 < uStack_2a0) {
          _free(puStack_2b0);
        }
        if (0x4000 < uStack_298) {
          _free(lStack_2a8);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109913050;
    }
  }
  else {
LAB_109912fe8:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109913050:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109913054);
  (*pcVar2)();
}



/* Entry: 1099130ac; end: 109913217;  */

/* WARNING: Removing unreachable block (ram,0x000109913868) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_1099130ac(undefined8 param_1,long *******param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,long *******param_6,long ******param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  long *******ppppppplVar6;
  bool bVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  undefined *puVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  int *piVar19;
  long *******ppppppplVar20;
  long ******pppppplVar21;
  long ******extraout_x9;
  ulong uVar22;
  long lVar23;
  long ******pppppplVar24;
  long *****ppppplVar25;
  long lVar26;
  undefined8 *puVar27;
  long ******pppppplVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  long *plVar31;
  long ******pppppplVar32;
  long *******ppppppplVar33;
  ulong uVar34;
  long ******unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar35;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long ******pppppplVar39;
  long ******pppppplVar40;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long ******pppppplStack_1b0;
  long *******ppppppplStack_1a8;
  undefined8 uStack_1a0;
  long ******pppppplStack_198;
  long *****ppppplStack_190;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long ******pppppplStack_140;
  long ******pppppplStack_138;
  long ******pppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long ******pppppplStack_110;
  long ******pppppplStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long *******ppppppplStack_f0;
  long ******pppppplStack_e8;
  long *******ppppppplStack_e0;
  long ******pppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long *******ppppppplStack_c0;
  long ******pppppplStack_b8;
  long *******ppppppplStack_b0;
  long ******pppppplStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  pppppplVar32 = (long ******)param_3[1];
  if (pppppplVar32 != (long ******)0x0) {
    lVar23 = 0;
    if (pppppplVar32 != (long ******)0x0) {
      lVar23 = 0x7fffffffffffffff / (long)pppppplVar32;
    }
    if ((long)pppppplVar32 <= lVar23) goto LAB_1099130e0;
    goto LAB_1099131f8;
  }
LAB_1099130e0:
  uVar34 = (long)pppppplVar32 * (long)pppppplVar32;
  if ((long)param_2[2] * (long)param_2[1] - uVar34 == 0) goto LAB_109913194;
  _free(*param_2);
  if (pppppplVar32 != (long ******)0x0) {
    if (uVar34 >> 0x3d == 0) {
      pppppplVar21 = (long ******)(uVar34 * 8);
      _malloc();
      if (pppppplVar21 != (long ******)0x0) goto LAB_109913124;
    }
    goto LAB_1099131f8;
  }
  pppppplVar21 = (long ******)0x0;
LAB_109913124:
  unaff_x23 = (long ******)param_3[1];
  *param_2 = pppppplVar21;
  param_2[1] = pppppplVar32;
  param_2[2] = pppppplVar32;
  if (pppppplVar32 == unaff_x23) goto LAB_10991319c;
  pppppplVar32 = unaff_x23;
  if (unaff_x23 == (long ******)0x0) {
    if (uVar34 == 0) {
      pppppplVar32 = (long ******)0x0;
    }
    else {
      _free();
      uVar22 = 0;
      pppppplVar21 = (long ******)0x0;
LAB_109913188:
      *param_2 = pppppplVar21;
      uVar34 = uVar22;
    }
LAB_109913194:
    param_2[1] = pppppplVar32;
    param_2[2] = pppppplVar32;
LAB_10991319c:
    if (0 < (long)uVar34) {
      _bzero(*param_2,uVar34 << 3);
    }
    if (0 < (long)pppppplVar32) {
      pppppplVar21 = *param_2;
      lVar23 = (long)pppppplVar32 * 8;
      piVar19 = (int *)*param_3;
      do {
        *(long ******)((long)pppppplVar21 + lVar23 * *piVar19) = (long *****)0x3ff0000000000000;
        pppppplVar21 = pppppplVar21 + 1;
        pppppplVar32 = (long ******)((long)pppppplVar32 + -1);
        piVar19 = piVar19 + 1;
      } while (pppppplVar32 != (long ******)0x0);
    }
    return param_2;
  }
  lVar23 = 0;
  if (unaff_x23 != (long ******)0x0) {
    lVar23 = 0x7fffffffffffffff / (long)unaff_x23;
  }
  if ((long)unaff_x23 <= lVar23) {
    uVar22 = (long)unaff_x23 * (long)unaff_x23;
    if (uVar34 - uVar22 == 0) goto LAB_109913194;
    _free();
    if (uVar22 >> 0x3d == 0) {
      pppppplVar21 = (long ******)(uVar22 * 8);
      _malloc();
      if (pppppplVar21 != (long ******)0x0) goto LAB_109913188;
    }
  }
LAB_1099131f8:
  ppppppplVar8 = (long *******)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ppppppplVar13 = (long *******)PTR___ZTISt9bad_alloc_110346a68;
  ppppppplVar33 = (long *******)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  pcStack_48 = FUN_109913218;
  pppppplVar32 = *ppppppplVar8;
  pppppplVar21 = (long ******)pppppplVar32[1];
  puStack_50 = &stack0xfffffffffffffff0;
  if (ppppppplVar33[1] != pppppplVar21) {
    _free(*ppppppplVar33);
    if ((long)pppppplVar21 < 1) {
      pppppplVar32 = (long ******)0x0;
LAB_109913284:
      *ppppppplVar33 = pppppplVar32;
      pppppplVar32 = *ppppppplVar8;
      goto LAB_10991328c;
    }
    if ((ulong)pppppplVar21 >> 0x3d == 0) {
      pppppplVar32 = (long ******)((long)pppppplVar21 << 3);
      _malloc();
      if (pppppplVar32 != (long ******)0x0) goto LAB_109913284;
    }
    goto LAB_1099135a0;
  }
LAB_10991328c:
  ppppppplVar33[1] = pppppplVar21;
  pppppplVar39 = ppppppplVar8[3];
  ppppppplVar9 = (long *******)*ppppppplVar13;
  pppppplVar21 = ppppppplVar13[2];
  if (ppppppplVar9 == (long *******)*pppppplVar32 && pppppplVar21 == (long ******)pppppplVar32[2]) {
    pppppplVar24 = ppppppplVar13[1];
    pppppplVar40 = pppppplVar21;
    if ((long)pppppplVar24 <= (long)pppppplVar21) {
      pppppplVar40 = pppppplVar24;
    }
    ppppppplVar16 = ppppppplVar9;
    if (0 < (long)pppppplVar40) {
      do {
        *ppppppplVar16 = (long ******)0x3ff0000000000000;
        pppppplVar40 = (long ******)((long)pppppplVar40 + -1);
        ppppppplVar16 = ppppppplVar16 + (long)pppppplVar21 + 1;
      } while (pppppplVar40 != (long ******)0x0);
    }
    if (0 < (long)pppppplVar21) {
      pppppplVar40 = (long ******)0x0;
      do {
        pppppplVar28 = pppppplVar24;
        if ((long)pppppplVar40 <= (long)pppppplVar24) {
          pppppplVar28 = pppppplVar40;
        }
        ppppppplVar16 = ppppppplVar9;
        if (0 < (long)pppppplVar28) {
          do {
            *ppppppplVar16 = (long ******)0x0;
            pppppplVar28 = (long ******)((long)pppppplVar28 + -1);
            ppppppplVar16 = ppppppplVar16 + (long)pppppplVar21;
          } while (pppppplVar28 != (long ******)0x0);
        }
        pppppplVar40 = (long ******)((long)pppppplVar40 + 1);
        ppppppplVar9 = ppppppplVar9 + 1;
      } while (pppppplVar40 != pppppplVar21);
    }
    if (0 < (long)pppppplVar39) {
      ppppplVar29 = pppppplVar32[1];
      lVar23 = -(long)pppppplVar39;
      lVar26 = (long)pppppplVar39 * 8;
      pppppplVar21 = pppppplVar39;
      do {
        lVar26 = lVar26 + -8;
        pppppplVar40 = (long ******)((long)pppppplVar21 + -1);
        ppppppplStack_f0 = (long *******)((long)ppppppplVar8[4] + (long)pppppplVar21);
        pppppplStack_108 = (long ******)((long)ppppplVar29 - (long)ppppppplStack_f0);
        pppppplStack_d0 = (long ******)((long)pppppplStack_108 + 1);
        pppppplStack_f8 = pppppplVar32;
        pppppplStack_e8 = pppppplVar40;
        pppppplStack_c8 = pppppplStack_d0;
        if (*(char *)(ppppppplVar8 + 2) == '\x01') {
          pppppplStack_b8 = (long ******)((long)ppppppplVar13[1] - (long)pppppplStack_d0);
          pppppplStack_a8 = ppppppplVar13[2];
          ppppppplStack_b0 = (long *******)((long)pppppplStack_a8 - (long)pppppplStack_d0);
          pppppplStack_d8 =
               *ppppppplVar13 +
               (long)ppppppplStack_b0 + (long)pppppplStack_a8 * (long)pppppplStack_b8;
          pppppplStack_108 = (long ******)((long)pppppplVar32[1] - (long)ppppppplStack_f0);
          pppppplStack_110 =
               (long ******)
               (*pppppplVar32 +
               (long)((long)pppppplVar40 + (long)pppppplVar32[2] * (long)ppppppplStack_f0));
          ppppppplStack_e0 = (long *******)0x1;
          ppppppplVar9 = &pppppplStack_d8;
          ppppppplStack_c0 = ppppppplVar13;
          FUN_10990efd4(ppppppplVar9,&pppppplStack_110,*ppppppplVar8[1] + (long)pppppplVar40,
                        *ppppppplVar33);
        }
        else {
          pppppplStack_b8 = (long ******)((long)ppppppplVar13[1] - (long)pppppplStack_d0);
          pppppplStack_a8 = ppppppplVar13[2];
          ppppppplStack_b0 = (long *******)((long)pppppplStack_a8 - (long)pppppplStack_d0);
          pppppplStack_d8 =
               *ppppppplVar13 +
               (long)ppppppplStack_b0 + (long)pppppplStack_a8 * (long)pppppplStack_b8;
          pppppplStack_110 =
               (long ******)
               (*pppppplVar32 +
               (long)((long)pppppplVar40 + (long)pppppplVar32[2] * (long)ppppppplStack_f0));
          ppppppplStack_e0 = (long *******)0x1;
          ppppppplVar9 = &pppppplStack_d8;
          ppppppplStack_c0 = ppppppplVar13;
          FUN_10990f3d4(ppppppplVar9,&pppppplStack_110,*ppppppplVar8[1] + (long)pppppplVar40,
                        *ppppppplVar33);
        }
        pppppplVar32 = *ppppppplVar8;
        ppppplVar29 = pppppplVar32[1];
        if (0 < (long)ppppplVar29 - (long)pppppplVar21) {
          pppppplVar24 = ppppppplVar13[2];
          lVar35 = (long)ppppplVar29 + lVar23;
          puVar27 = (undefined8 *)
                    ((long)*ppppppplVar13 +
                    lVar26 + (long)pppppplVar24 * 8 *
                             (((long)ppppppplVar13[1] + (long)pppppplVar21) - (long)ppppplVar29));
          do {
            *puVar27 = 0;
            puVar27 = puVar27 + (long)pppppplVar24;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
        lVar23 = lVar23 + 1;
        bVar7 = (long ******)0x1 < pppppplVar21;
        pppppplVar21 = pppppplVar40;
      } while (bVar7);
    }
    ppppplVar29 = pppppplVar32[1];
    if ((long)ppppplVar29 - (long)pppppplVar39 < 1) {
      return ppppppplVar9;
    }
    uVar34 = 0;
    pppppplVar21 = ppppppplVar13[2];
    pppppplVar32 = *ppppppplVar13 +
                   (long)((long)pppppplVar21 +
                         (long)pppppplVar21 * ((long)ppppppplVar13[1] - (long)ppppplVar29));
    ppppplVar25 = ppppplVar29;
    do {
      ppppplVar25 = (long *****)((long)ppppplVar25 + -1);
      pppppplVar40 = pppppplVar32;
      ppppplVar30 = ppppplVar25;
      if (0 < (long)((long)ppppplVar29 + ~uVar34)) {
        do {
          *pppppplVar40 = (long *****)0x0;
          ppppplVar30 = (long *****)((long)ppppplVar30 + -1);
          pppppplVar40 = pppppplVar40 + (long)pppppplVar21;
        } while (ppppplVar30 != (long *****)0x0);
      }
      uVar34 = uVar34 + 1;
      pppppplVar32 = pppppplVar32 + (long)pppppplVar21 + 1;
    } while (uVar34 != (long)ppppplVar29 - (long)pppppplVar39);
    return ppppppplVar9;
  }
  unaff_x23 = (long ******)pppppplVar32[1];
  if ((long)pppppplVar39 < 0x31) {
    if (unaff_x23 != (long ******)0x0) {
      lVar23 = 0;
      if (unaff_x23 != (long ******)0x0) {
        lVar23 = 0x7fffffffffffffff / (long)unaff_x23;
      }
      if (lVar23 < (long)unaff_x23) goto LAB_1099135a0;
    }
    uVar34 = (long)unaff_x23 * (long)unaff_x23;
    if ((long)ppppppplVar13[1] * (long)pppppplVar21 - uVar34 == 0) goto LAB_109913648;
    _free();
    if (unaff_x23 == (long ******)0x0) {
      ppppppplVar9 = (long *******)0x0;
LAB_109913644:
      *ppppppplVar13 = (long ******)ppppppplVar9;
LAB_109913648:
      ppppppplVar13[1] = unaff_x23;
      ppppppplVar13[2] = unaff_x23;
      if (0 < (long)unaff_x23) {
        pppppplVar32 = (long ******)0x0;
        do {
          pppppplVar21 = (long ******)0x0;
          do {
            pppppplVar40 = (long ******)0x3ff0000000000000;
            if (pppppplVar32 != pppppplVar21) {
              pppppplVar40 = (long ******)0x0;
            }
            ppppppplVar9[(long)pppppplVar21] = pppppplVar40;
            pppppplVar21 = (long ******)((long)pppppplVar21 + 1);
          } while (unaff_x23 != pppppplVar21);
          pppppplVar32 = (long ******)((long)pppppplVar32 + 1);
          ppppppplVar9 = ppppppplVar9 + (long)unaff_x23;
        } while (pppppplVar32 != unaff_x23);
      }
      if (0 < (long)pppppplVar39) {
        uVar34 = (long)pppppplVar39 + 1;
        lVar23 = -(long)pppppplVar39;
        lVar26 = (long)pppppplVar39 * 8;
        do {
          lVar26 = lVar26 + -8;
          pppppplStack_e8 = (long ******)(uVar34 - 2);
          pppppplStack_f8 = *ppppppplVar8;
          ppppplVar29 = pppppplStack_f8[1];
          pppppplVar32 = ppppppplVar8[4];
          ppppppplStack_f0 = (long *******)((long)pppppplVar32 + (uVar34 - 1));
          pppppplStack_108 = (long ******)((long)ppppplVar29 + (lVar23 - (long)pppppplVar32));
          pppppplStack_d0 = (long ******)((long)pppppplStack_108 + 1);
          pppppplStack_c8 = pppppplStack_d0;
          if (*(char *)(ppppppplVar8 + 2) == '\x01') {
            pppppplStack_b8 =
                 (long ******)
                 (uVar34 + (((long)pppppplVar32 + (long)ppppppplVar13[1]) - (long)ppppplVar29) + -2)
            ;
            pppppplStack_a8 = ppppppplVar13[2];
            ppppppplStack_b0 =
                 (long *******)
                 (uVar34 + (((long)pppppplVar32 + (long)pppppplStack_a8) - (long)ppppplVar29) + -2);
            pppppplStack_d8 =
                 *ppppppplVar13 +
                 (long)ppppppplStack_b0 + (long)pppppplStack_a8 * (long)pppppplStack_b8;
            pppppplStack_110 =
                 (long ******)
                 ((long)*pppppplStack_f8 +
                 lVar26 + (long)pppppplStack_f8[2] * ((long)pppppplVar32 + (long)pppppplVar39) * 8);
            ppppppplStack_e0 = (long *******)0x1;
            ppppppplVar9 = &pppppplStack_d8;
            ppppppplStack_c0 = ppppppplVar13;
            FUN_10990efd4(ppppppplVar9,&pppppplStack_110,(long)*ppppppplVar8[1] + lVar26,
                          *ppppppplVar33);
          }
          else {
            pppppplStack_b8 =
                 (long ******)
                 (uVar34 + (((long)pppppplVar32 + (long)ppppppplVar13[1]) - (long)ppppplVar29) + -2)
            ;
            pppppplStack_a8 = ppppppplVar13[2];
            ppppppplStack_b0 =
                 (long *******)
                 (uVar34 + (((long)pppppplVar32 + (long)pppppplStack_a8) - (long)ppppplVar29) + -2);
            pppppplStack_d8 =
                 *ppppppplVar13 +
                 (long)ppppppplStack_b0 + (long)pppppplStack_a8 * (long)pppppplStack_b8;
            pppppplStack_110 =
                 (long ******)
                 ((long)*pppppplStack_f8 +
                 lVar26 + (long)pppppplStack_f8[2] * ((long)pppppplVar32 + (long)pppppplVar39) * 8);
            ppppppplStack_e0 = (long *******)0x1;
            ppppppplVar9 = &pppppplStack_d8;
            ppppppplStack_c0 = ppppppplVar13;
            FUN_10990f3d4(ppppppplVar9,&pppppplStack_110,(long)*ppppppplVar8[1] + lVar26,
                          *ppppppplVar33);
          }
          uVar34 = uVar34 - 1;
          lVar23 = lVar23 + 1;
          pppppplVar39 = (long ******)((long)pppppplVar39 + -1);
        } while (1 < uVar34);
      }
      return ppppppplVar9;
    }
    if (uVar34 >> 0x3d == 0) {
      ppppppplVar9 = (long *******)(uVar34 * 8);
      _malloc();
      if (ppppppplVar9 != (long *******)0x0) goto LAB_109913644;
    }
    goto LAB_1099135a0;
  }
  if (unaff_x23 != (long ******)0x0) {
    lVar23 = 0;
    if (unaff_x23 != (long ******)0x0) {
      lVar23 = 0x7fffffffffffffff / (long)unaff_x23;
    }
    if (lVar23 < (long)unaff_x23) goto LAB_1099135a0;
  }
  uVar34 = (long)unaff_x23 * (long)unaff_x23;
  if ((long)ppppppplVar13[1] * (long)pppppplVar21 - uVar34 != 0) {
    _free();
    if (unaff_x23 == (long ******)0x0) {
LAB_1099135c0:
      ppppppplVar9 = (long *******)0x0;
    }
    else {
      if (uVar34 >> 0x3d != 0) {
LAB_1099135a0:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_1099135c0;
      }
      ppppppplVar9 = (long *******)(uVar34 * 8);
      _malloc();
      if (ppppppplVar9 == (long *******)0x0) goto LAB_1099135a0;
    }
    *ppppppplVar13 = (long ******)ppppppplVar9;
  }
  ppppppplVar13[1] = unaff_x23;
  ppppppplVar13[2] = unaff_x23;
  if (0 < (long)unaff_x23) {
    pppppplVar32 = (long ******)0x0;
    param_1 = 0;
    do {
      pppppplVar21 = (long ******)0x0;
      do {
        pppppplVar39 = (long ******)0x3ff0000000000000;
        if (pppppplVar32 != pppppplVar21) {
          pppppplVar39 = (long ******)0x0;
        }
        ppppppplVar9[(long)pppppplVar21] = pppppplVar39;
        pppppplVar21 = (long ******)((long)pppppplVar21 + 1);
      } while (unaff_x23 != pppppplVar21);
      pppppplVar32 = (long ******)((long)pppppplVar32 + 1);
      ppppppplVar9 = ppppppplVar9 + (long)unaff_x23;
    } while (pppppplVar32 != unaff_x23);
  }
  ppppppplVar16 = (long *******)0x1;
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(byte *)(ppppppplVar8 + 2) ^ 1;
  pppppplVar32 = ppppppplVar8[3];
  ppppppplVar9 = (long *******)ppppppplVar13[2];
  if ((long)pppppplVar32 < 0x30 || (long)ppppppplVar9 < 2) {
    ppppppplVar10 = ppppppplVar8;
    ppppppplVar20 = ppppppplVar13;
    ppppppplVar6 = ppppppplVar33;
    if ((long *******)ppppppplVar33[1] != ppppppplVar9) {
      _free(*ppppppplVar33);
      if (0 < (long)ppppppplVar9) {
        if ((ulong)ppppppplVar9 >> 0x3d == 0) {
          ppppppplVar10 = (long *******)((long)ppppppplVar9 << 3);
          _malloc();
          if (ppppppplVar10 != (long *******)0x0) goto LAB_1099139d0;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        pppppplVar32 = extraout_x9;
        goto LAB_1099138d0;
      }
      ppppppplVar10 = (long *******)0x0;
LAB_1099139d0:
      *ppppppplVar33 = (long ******)ppppppplVar10;
      pppppplVar32 = ppppppplVar8[3];
    }
    ppppppplVar33[1] = (long ******)ppppppplVar9;
    if (0 < (long)pppppplVar32) {
      ppppppplVar9 = (long *******)0x0;
      unaff_x24 = 0xffffffffffffffff;
      unaff_x25 = 1;
      do {
        ppppppplStack_118 = ppppppplVar9;
        if (*(char *)(ppppppplVar8 + 2) == '\0') {
          ppppppplStack_118 = (long *******)((long)pppppplVar32 + unaff_x24);
        }
        ppppppplStack_128 = (long *******)*ppppppplVar8;
        pppppplStack_100 =
             (long ******)
             ((long)ppppppplStack_128[1] - ((long)ppppppplVar8[4] + (long)ppppppplStack_118));
        pppppplStack_d8 = ppppppplVar13[2];
        pppppplStack_f8 = pppppplStack_100;
        if ((uVar3 & 1) == 0) {
          pppppplStack_f8 = pppppplStack_d8;
        }
        pppppplStack_e8 = (long ******)((long)ppppppplVar13[1] - (long)pppppplStack_100);
        ppppppplStack_e0 = (long *******)((long)pppppplStack_d8 - (long)pppppplStack_f8);
        pppppplStack_108 =
             *ppppppplVar13 +
             (long)((long)ppppppplStack_e0 + (long)pppppplStack_e8 * (long)pppppplStack_d8);
        ppppppplStack_120 = (long *******)((long)ppppppplVar8[4] + (long)ppppppplStack_118 + 1);
        pppppplStack_138 = (long ******)((long)ppppppplStack_128[1] - (long)ppppppplStack_120);
        pppppplStack_140 =
             *ppppppplStack_128 +
             (long)((long)ppppppplStack_118 + (long)ppppppplStack_128[2] * (long)ppppppplStack_120);
        pppppplStack_110 = (long ******)0x1;
        ppppppplVar6 = (long *******)(*ppppppplVar8[1] + (long)ppppppplStack_118);
        ppppppplVar16 = (long *******)*ppppppplVar33;
        ppppppplVar10 = &pppppplStack_108;
        ppppppplVar20 = &pppppplStack_140;
        ppppppplStack_f0 = ppppppplVar13;
        FUN_10990f3d4();
        ppppppplVar9 = (long *******)((long)ppppppplVar9 + 1);
        pppppplVar32 = ppppppplVar8[3];
        unaff_x24 = unaff_x24 - 1;
      } while ((long)ppppppplVar9 < (long)pppppplVar32);
    }
  }
  else {
LAB_1099138d0:
    ppppppplVar33 = (long *******)0x0;
    ppppppplVar9 = (long *******)0x0;
    unaff_x24 = (long)pppppplVar32 + 1U >> 1;
    if ((long ******)0x5f < pppppplVar32) {
      unaff_x24 = 0x30;
    }
    unaff_x25 = -unaff_x24;
    do {
      if (*(byte *)(ppppppplVar8 + 2) == 1) {
        ppppppplStack_e0 = ppppppplVar9;
        pppppplStack_f8 = (long ******)(unaff_x24 + (long)ppppppplVar9);
        if ((long)pppppplVar32 <= (long)(unaff_x24 + (long)ppppppplVar9)) {
          pppppplStack_f8 = pppppplVar32;
        }
      }
      else {
        uVar34 = (long)pppppplVar32 + (long)ppppppplVar33 + unaff_x25;
        ppppppplStack_e0 = (long *******)(uVar34 & ((long)uVar34 >> 0x3f ^ 0xffffffffffffffffU));
        pppppplStack_f8 = (long ******)((long)pppppplVar32 + (long)ppppppplVar33);
      }
      pppppplStack_f8 = (long ******)((long)pppppplStack_f8 - (long)ppppppplStack_e0);
      pppppplStack_e8 = (long ******)((long)ppppppplVar8[4] + (long)ppppppplStack_e0);
      ppppppplStack_f0 = (long *******)*ppppppplVar8;
      pppppplStack_b8 = ppppppplVar8[1];
      pppppplStack_d8 = ppppppplStack_f0[2];
      pppppplStack_108 =
           *ppppppplStack_f0 +
           (long)((long)ppppppplStack_e0 + (long)pppppplStack_d8 * (long)pppppplStack_e8);
      pppppplStack_138 = (long ******)((long)ppppppplStack_f0[1] - (long)pppppplStack_e8);
      ppppppplStack_120 =
           (long *******)
           ((long)ppppppplVar13[1] + ((long)pppppplStack_e8 - (long)ppppppplStack_f0[1]));
      bVar7 = (uVar3 & 1) == 0;
      ppppppplStack_118 = ppppppplStack_120;
      if (bVar7) {
        ppppppplStack_118 = (long *******)0x0;
      }
      pppppplStack_110 = ppppppplVar13[2];
      pppppplStack_140 =
           *ppppppplVar13 +
           (long)((long)ppppppplStack_118 + (long)pppppplStack_110 * (long)ppppppplStack_120);
      pppppplStack_130 = pppppplStack_138;
      if (bVar7) {
        pppppplStack_130 = pppppplStack_110;
      }
      pppppplStack_d0 = (long ******)(*pppppplStack_b8 + (long)ppppppplStack_e0);
      ppppppplVar20 = &pppppplStack_108;
      ppppppplVar6 = &pppppplStack_d0;
      ppppppplVar16 = (long *******)(ulong)(*(byte *)(ppppppplVar8 + 2) ^ 1);
      ppppppplVar10 = &pppppplStack_140;
      ppppppplStack_128 = ppppppplVar13;
      pppppplStack_100 = pppppplStack_138;
      pppppplStack_c8 = pppppplStack_f8;
      ppppppplStack_b0 = ppppppplStack_e0;
      FUN_109910108();
      pppppplVar32 = ppppppplVar8[3];
      ppppppplVar9 = (long *******)((long)ppppppplVar9 + unaff_x24);
      ppppppplVar33 = (long *******)((long)ppppppplVar33 - unaff_x24);
    } while ((long)ppppppplVar9 < (long)pppppplVar32);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return ppppppplVar10;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuStack_150 = &puStack_50;
  pcStack_148 = FUN_109913ad8;
  pppppplVar32 = (long ******)&pppppplStack_1b0;
  pppppplVar21 = (long ******)&pppppplStack_1b0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar17 = ppppppplVar16;
  ppppppplVar8 = (long *******)(ulong)uVar3;
  uVar37 = param_1;
  if ((ulong)ppppppplVar6 >> 0x3d == 0) {
    ppppppplVar13 = ppppppplVar6;
    ppppppplVar8 = ppppppplVar10;
    unaff_d8 = param_1;
    if (ppppppplVar20 == (long *******)0x0) {
      ppppppplVar20 = (long *******)((long)ppppppplVar6 << 3);
      if (ppppppplVar6 < (long *******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar23 = -((long)ppppppplVar20 + 0x1eU & 0xfffffffffffffff0);
        pppppplVar32 = (long ******)((long)&pppppplStack_1b0 + lVar23);
        ppppppplVar20 = (long *******)((long)&pppppplStack_1b0 + lVar23);
        ppppppplVar33 = ppppppplVar20;
      }
      else {
        _malloc();
        ppppppplVar33 = ppppppplVar20;
        if (ppppppplVar20 == (long *******)0x0) goto LAB_109913be8;
      }
    }
    else {
      pppppplVar32 = (long ******)&pppppplStack_1b0;
      ppppppplVar33 = (long *******)0x0;
    }
    pppppplStack_198 = *ppppppplVar10;
    ppppppplVar18 = (long *******)ppppppplVar10[1];
    ppppppplVar14 = (long *******)ppppppplVar10[2];
    ppppplStack_190 = ppppppplVar10[3][2];
    uStack_1a0 = 1;
    ppppppplVar10 = &pppppplStack_198;
    ppppppplVar17 = (long *******)&ppppppplStack_1a8;
    param_7 = (long ******)0x1;
    uVar37 = param_1;
    ppppppplStack_1a8 = ppppppplVar20;
    FUN_10990fa5c();
    if ((long *******)0x4000 < ppppppplVar6) {
      ppppppplVar18 = ppppppplVar33;
      _free();
    }
    pppppplVar21 = pppppplVar32;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
      return ppppppplVar18;
    }
  }
  else {
LAB_109913be8:
    ppppppplVar16 = param_6;
    ppppppplVar18 = (long *******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ppppppplVar14 = (long *******)PTR___ZTISt9bad_alloc_110346a68;
    ppppppplVar10 = (long *******)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *******)0x4000 < ppppppplVar13) {
    _free(ppppppplVar33);
  }
  ppppppplVar11 = ppppppplVar18;
  __Unwind_Resume();
  *(undefined8 *)((long)pppppplVar21 + -0x50) = unaff_d9;
  *(undefined8 *)((long)pppppplVar21 + -0x48) = unaff_d8;
  *(ulong *)((long)pppppplVar21 + -0x40) = unaff_x24;
  *(long ********)((long)pppppplVar21 + -0x38) = ppppppplVar9;
  *(long ********)((long)pppppplVar21 + -0x30) = ppppppplVar8;
  *(long ********)((long)pppppplVar21 + -0x28) = ppppppplVar33;
  *(long ********)((long)pppppplVar21 + -0x20) = ppppppplVar18;
  *(long ********)((long)pppppplVar21 + -0x18) = ppppppplVar13;
  *(undefined1 ****)((long)pppppplVar21 + -0x10) = &ppuStack_150;
  *(code **)((long)pppppplVar21 + -8) = FUN_109913c28;
  ppppppplVar20 = (long *******)((long)pppppplVar21 + -0x80);
  ppppppplVar6 = (long *******)((long)pppppplVar21 + -0x80);
  *(undefined8 *)((long)pppppplVar21 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar18 = ppppppplVar17;
  ppppppplVar12 = ppppppplVar16;
  uVar38 = uVar37;
  if ((ulong)ppppppplVar10 >> 0x3d == 0) {
    ppppppplVar13 = ppppppplVar10;
    ppppppplVar33 = ppppppplVar16;
    ppppppplVar9 = ppppppplVar11;
    unaff_d8 = uVar37;
    if (ppppppplVar14 == (long *******)0x0) {
      ppppppplVar8 = (long *******)((long)ppppppplVar10 << 3);
      if (ppppppplVar10 < (long *******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        ppppppplVar20 =
             (long *******)
             ((long)pppppplVar21 + (-0x80 - ((long)ppppppplVar8 + 0x1eU & 0xfffffffffffffff0)));
        ppppppplVar8 = ppppppplVar20;
        ppppppplVar14 = ppppppplVar20;
      }
      else {
        _malloc();
        ppppppplVar14 = ppppppplVar8;
        if (ppppppplVar8 == (long *******)0x0) goto LAB_109913d40;
      }
    }
    else {
      ppppppplVar20 = (long *******)((long)pppppplVar21 + -0x80);
      ppppppplVar8 = ppppppplVar14;
      ppppppplVar14 = (long *******)0x0;
    }
    pppppplVar32 = ppppppplVar11[1];
    ppppppplVar12 = (long *******)ppppppplVar11[2];
    *(long *******)((long)pppppplVar21 + -0x68) = *ppppppplVar11;
    *(long *******)((long)pppppplVar21 + -0x60) = pppppplVar32;
    *(long ********)((long)pppppplVar21 + -0x78) = ppppppplVar8;
    *(undefined8 *)((long)pppppplVar21 + -0x70) = 1;
    param_7 = ppppppplVar16[1];
    puVar15 = (undefined *)((long)pppppplVar21 + -0x68);
    ppppppplVar18 = (long *******)((long)pppppplVar21 + -0x78);
    uVar38 = uVar37;
    FUN_10990fa5c(uVar37);
    if ((long *******)0x4000 < ppppppplVar10) {
      ppppppplVar12 = ppppppplVar14;
      _free();
    }
    ppppppplVar6 = ppppppplVar20;
    ppppppplVar8 = ppppppplVar14;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppppplVar21 + -0x58)) {
      return ppppppplVar12;
    }
  }
  else {
LAB_109913d40:
    ppppppplVar17 = ppppppplVar12;
    ppppppplVar12 = (long *******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pppppplVar32 = (long ******)PTR___ZTISt9bad_alloc_110346a68;
    puVar15 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *******)0x4000 < ppppppplVar13) {
    _free(ppppppplVar8);
  }
  ppppppplVar16 = ppppppplVar12;
  __Unwind_Resume();
  *(undefined8 *)((long)ppppppplVar6 + -0x70) = unaff_d9;
  *(undefined8 *)((long)ppppppplVar6 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppppppplVar6 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppppppplVar6 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppppppplVar6 + -0x50) = unaff_x26;
  *(long *)((long)ppppppplVar6 + -0x48) = unaff_x25;
  *(ulong *)((long)ppppppplVar6 + -0x40) = unaff_x24;
  *(long ********)((long)ppppppplVar6 + -0x38) = ppppppplVar9;
  *(long ********)((long)ppppppplVar6 + -0x30) = ppppppplVar8;
  *(long ********)((long)ppppppplVar6 + -0x28) = ppppppplVar33;
  *(long ********)((long)ppppppplVar6 + -0x20) = ppppppplVar12;
  *(long ********)((long)ppppppplVar6 + -0x18) = ppppppplVar13;
  *(undefined1 **)((long)ppppppplVar6 + -0x10) = (undefined1 *)((long)pppppplVar21 + -0x10);
  *(code **)((long)ppppppplVar6 + -8) = FUN_109913d80;
  ppppppplVar33 = (long *******)((long)ppppppplVar6 + -0x170);
  *(undefined8 *)((long)ppppppplVar6 + -0x110) = param_9;
  *(undefined8 *)((long)ppppppplVar6 + -0xd0) = param_8;
  *(long *******)((long)ppppppplVar6 + -0x138) = param_7;
  *(long ********)((long)ppppppplVar6 + -0xe8) = ppppppplVar17;
  *(long ********)((long)ppppppplVar6 + -0x140) = ppppppplVar18;
  plVar31 = *(long **)((long)ppppppplVar6 + 0x10);
  *(undefined8 *)((long)ppppppplVar6 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar21 = (long ******)plVar31[3];
  lVar23 = plVar31[4];
  ppppppplVar8 = (long *******)plVar31[2];
  ppppppplVar13 = ppppppplVar8;
  if ((long)ppppppplVar16 <= (long)ppppppplVar8) {
    ppppppplVar13 = ppppppplVar16;
  }
  pppppplVar39 = pppppplVar21;
  if ((long)pppppplVar32 <= (long)pppppplVar21) {
    pppppplVar39 = pppppplVar32;
  }
  *(long *)((long)ppppppplVar6 + -0xf8) = lVar23;
  *(long ********)((long)ppppppplVar6 + -0x120) = ppppppplVar13;
  uVar34 = (long)ppppppplVar13 * lVar23;
  if (uVar34 >> 0x3d == 0) {
    lVar23 = *plVar31;
    *(long *)((long)ppppppplVar6 + -0xa8) = lVar23;
    if (lVar23 == 0) {
      ppppppplVar13 = (long *******)(uVar34 * 8);
      if (uVar34 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        ppppppplVar33 =
             (long *******)
             ((long)ppppppplVar6 + (-0x170 - ((long)ppppppplVar13 + 0x1eU & 0xfffffffffffffff0)));
        *(long ********)((long)ppppppplVar6 + -0x160) = ppppppplVar33;
        *(long ********)((long)ppppppplVar6 + -0xa8) = ppppppplVar33;
      }
      else {
        _malloc();
        *(long ********)((long)ppppppplVar6 + -0xa8) = ppppppplVar13;
        *(long ********)((long)ppppppplVar6 + -0x160) = ppppppplVar13;
        if (ppppppplVar13 == (long *******)0x0) goto LAB_10991419c;
      }
    }
    else {
      *(undefined8 *)((long)ppppppplVar6 + -0x160) = 0;
      ppppppplVar33 = (long *******)((long)ppppppplVar6 + -0x170);
      ppppppplVar13 = ppppppplVar16;
    }
    uVar22 = (long)pppppplVar39 * *(long *)((long)ppppppplVar6 + -0xf8);
    if (uVar22 >> 0x3d == 0) {
      ppppppplVar9 = (long *******)plVar31[1];
      *(ulong *)((long)ppppppplVar6 + -0x150) = uVar34;
      *(ulong *)((long)ppppppplVar6 + -0x158) = uVar22;
      if (ppppppplVar9 == (long *******)0x0) {
        ppppppplVar13 = (long *******)(uVar22 * 8);
        if (uVar22 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          ppppppplVar33 =
               (long *******)
               ((long)ppppppplVar33 + -((long)ppppppplVar13 + 0x1eU & 0xfffffffffffffff0));
          *(long ********)((long)ppppppplVar6 + -0x168) = ppppppplVar33;
          ppppppplVar9 = ppppppplVar33;
          goto LAB_109913f14;
        }
        _malloc();
        *(long ********)((long)ppppppplVar6 + -0x168) = ppppppplVar13;
        ppppppplVar9 = ppppppplVar13;
        if (ppppppplVar13 != (long *******)0x0) goto LAB_109913f14;
      }
      else {
        *(undefined8 *)((long)ppppppplVar6 + -0x168) = 0;
LAB_109913f14:
        *(uint *)((long)ppppppplVar6 + -0x144) =
             (uint)((*(undefined **)((long)ppppppplVar6 + -0xf8) != puVar15 ||
                    (long)ppppppplVar16 <= (long)ppppppplVar8) ||
                   (long)pppppplVar21 < (long)pppppplVar32);
        if (0 < (long)ppppppplVar16) {
          lVar23 = 0;
          *(long *)((long)ppppppplVar6 + -0x130) = *(long *)((long)ppppppplVar6 + -0x120) << 3;
          *(long *)((long)ppppppplVar6 + -0xc0) =
               *(long *)((long)ppppppplVar6 + 8) * (long)pppppplVar39 * 8;
          *(long *)((long)ppppppplVar6 + -0xb8) = *(long *)((long)ppppppplVar6 + 8);
          *(long *)((long)ppppppplVar6 + -0x108) = *(long *)((long)ppppppplVar6 + -0xf8) << 3;
          *(undefined **)((long)ppppppplVar6 + -0x100) = puVar15;
          *(long *)((long)ppppppplVar6 + -200) =
               *(long *)((long)ppppppplVar6 + -0xd0) * (long)pppppplVar39 * 8;
          *(long ********)((long)ppppppplVar6 + -0x128) = ppppppplVar16;
          do {
            ppppppplVar8 = (long *******)(lVar23 + *(long *)((long)ppppppplVar6 + -0x120));
            *(long ********)((long)ppppppplVar6 + -0x118) = ppppppplVar8;
            if ((long)ppppppplVar16 <= (long)ppppppplVar8) {
              ppppppplVar8 = ppppppplVar16;
            }
            if (0 < (long)puVar15) {
              lVar26 = 0;
              *(long *)((long)ppppppplVar6 + -0xa0) = (long)ppppppplVar8 - lVar23;
              *(long *)((long)ppppppplVar6 + -0xf0) =
                   *(long *)((long)ppppppplVar6 + -0x140) +
                   lVar23 * *(long *)((long)ppppppplVar6 + -0xe8) * 8;
              uVar4 = *(undefined4 *)((long)ppppppplVar6 + -0x144);
              if (lVar23 == 0) {
                uVar4 = 1;
              }
              *(undefined4 *)((long)ppppppplVar6 + -0xac) = uVar4;
              *(undefined8 *)((long)ppppppplVar6 + -0xd8) =
                   *(undefined8 *)((long)ppppppplVar6 + -0x138);
              do {
                puVar1 = (undefined *)(lVar26 + *(long *)((long)ppppppplVar6 + -0xf8));
                puVar2 = puVar1;
                if ((long)puVar15 <= (long)puVar1) {
                  puVar2 = puVar15;
                }
                lVar23 = (long)puVar2 - lVar26;
                *(long *)((long)ppppppplVar6 + -0x98) =
                     *(long *)((long)ppppppplVar6 + -0xf0) + lVar26 * 8;
                *(undefined8 *)((long)ppppppplVar6 + -0x90) =
                     *(undefined8 *)((long)ppppppplVar6 + -0xe8);
                ppppppplVar13 = (long *******)((long)ppppppplVar6 + -0x81);
                FUN_1098e479c(ppppppplVar13,*(undefined8 *)((long)ppppppplVar6 + -0xa8),
                              (undefined1 *)((long)ppppppplVar6 + -0x98),lVar23,
                              *(undefined8 *)((long)ppppppplVar6 + -0xa0),0,0);
                *(undefined **)((long)ppppppplVar6 + -0xe0) = puVar1;
                if (0 < (long)pppppplVar32) {
                  lVar36 = 0;
                  puVar15 = (undefined *)0x0;
                  lVar35 = *(long *)((long)ppppppplVar6 + -0xd8);
                  lVar26 = *(long *)((long)ppppppplVar6 + -0x110);
                  pppppplVar21 = pppppplVar39;
                  do {
                    pppppplVar40 = pppppplVar32;
                    if ((long)pppppplVar21 <= (long)pppppplVar32) {
                      pppppplVar40 = pppppplVar21;
                    }
                    if (*(int *)((long)ppppppplVar6 + -0xac) != 0) {
                      *(long *)((long)ppppppplVar6 + -0x98) = lVar35;
                      *(undefined8 *)((long)ppppppplVar6 + -0x90) =
                           *(undefined8 *)((long)ppppppplVar6 + -0xd0);
                      FUN_1098e46ac((undefined1 *)((long)ppppppplVar6 + -0x82),ppppppplVar9,
                                    (undefined1 *)((long)ppppppplVar6 + -0x98),lVar23,
                                    (undefined *)((long)pppppplVar40 + lVar36),0,0);
                    }
                    *(long *)((long)ppppppplVar6 + -0x98) = lVar26;
                    *(undefined8 *)((long)ppppppplVar6 + -0x90) =
                         *(undefined8 *)((long)ppppppplVar6 + -0xb8);
                    ppppppplVar33[-3] = (long ******)0x0;
                    ppppppplVar33[-2] = (long ******)0x0;
                    ppppppplVar13 = (long *******)((long)ppppppplVar6 + -0x83);
                    ppppppplVar33[-4] = (long ******)0xffffffffffffffff;
                    FUN_109404e14(uVar38,ppppppplVar13,(undefined1 *)((long)ppppppplVar6 + -0x98),
                                  *(undefined8 *)((long)ppppppplVar6 + -0xa8),ppppppplVar9,
                                  *(undefined8 *)((long)ppppppplVar6 + -0xa0),lVar23,
                                  (undefined *)((long)pppppplVar40 + lVar36),0xffffffffffffffff);
                    puVar15 = puVar15 + (long)pppppplVar39;
                    lVar26 = lVar26 + *(long *)((long)ppppppplVar6 + -0xc0);
                    lVar35 = lVar35 + *(long *)((long)ppppppplVar6 + -200);
                    pppppplVar21 = (long ******)((long)pppppplVar21 + (long)pppppplVar39);
                    lVar36 = lVar36 - (long)pppppplVar39;
                  } while ((long)puVar15 < (long)pppppplVar32);
                }
                puVar15 = *(undefined **)((long)ppppppplVar6 + -0x100);
                lVar26 = *(long *)((long)ppppppplVar6 + -0xe0);
                *(long *)((long)ppppppplVar6 + -0xd8) =
                     *(long *)((long)ppppppplVar6 + -0xd8) + *(long *)((long)ppppppplVar6 + -0x108);
              } while (lVar26 < (long)puVar15);
            }
            *(long *)((long)ppppppplVar6 + -0x110) =
                 *(long *)((long)ppppppplVar6 + -0x110) + *(long *)((long)ppppppplVar6 + -0x130);
            lVar23 = *(long *)((long)ppppppplVar6 + -0x118);
            ppppppplVar16 = *(long ********)((long)ppppppplVar6 + -0x128);
          } while (lVar23 < (long)ppppppplVar16);
        }
        if (0x4000 < *(ulong *)((long)ppppppplVar6 + -0x158)) {
          ppppppplVar13 = *(long ********)((long)ppppppplVar6 + -0x168);
          _free(ppppppplVar13);
        }
        if (0x4000 < *(ulong *)((long)ppppppplVar6 + -0x150)) {
          ppppppplVar13 = *(long ********)((long)ppppppplVar6 + -0x160);
          _free(ppppppplVar13);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppppppplVar6 + -0x80)) {
          return ppppppplVar13;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109914204;
    }
  }
  else {
LAB_10991419c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109914204:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109914208);
  (*pcVar5)();
}



/* Entry: 109913218; end: 10991381f;  */

/* WARNING: Removing unreachable block (ram,0x000109913868) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109913218(undefined8 param_1,long ******param_2,long *******param_3,long *******param_4,
                  undefined8 param_5,long *******param_6,long ******param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  long ******pppppplVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  undefined *puVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *****ppppplVar17;
  long lVar18;
  undefined1 *puVar19;
  long *****extraout_x9;
  ulong uVar20;
  long ******pppppplVar21;
  long ****pppplVar22;
  long lVar23;
  undefined8 *puVar24;
  long ****pppplVar25;
  long ****pppplVar26;
  long *plVar27;
  undefined1 *puVar28;
  ulong uVar29;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long *****ppppplVar32;
  long ******unaff_x23;
  long *******ppppppplVar33;
  ulong unaff_x24;
  long ******pppppplVar34;
  long unaff_x25;
  long lVar35;
  undefined8 unaff_x26;
  long *****ppppplVar36;
  undefined8 unaff_x27;
  long *****ppppplVar37;
  undefined8 unaff_x28;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long ******pppppplStack_170;
  long *******ppppppplStack_168;
  undefined8 uStack_160;
  long ******pppppplStack_158;
  long ****pppplStack_150;
  long lStack_148;
  undefined1 *puStack_110;
  code *pcStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  long *******ppppppplStack_b0;
  long *****ppppplStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  long ******pppppplStack_90;
  long ******pppppplStack_88;
  long *******ppppppplStack_80;
  long *****ppppplStack_78;
  long *******ppppppplStack_70;
  long ******pppppplStack_68;
  
  ppppplVar17 = *param_2;
  pppppplVar31 = (long ******)ppppplVar17[1];
  if (param_4[1] != pppppplVar31) {
    _free(*param_4);
    if ((long)pppppplVar31 < 1) {
      pppppplVar7 = (long ******)0x0;
LAB_109913284:
      *param_4 = pppppplVar7;
      ppppplVar17 = *param_2;
      goto LAB_10991328c;
    }
    if ((ulong)pppppplVar31 >> 0x3d == 0) {
      pppppplVar7 = (long ******)((long)pppppplVar31 << 3);
      _malloc();
      if (pppppplVar7 != (long ******)0x0) goto LAB_109913284;
    }
    goto LAB_1099135a0;
  }
LAB_10991328c:
  param_4[1] = pppppplVar31;
  ppppplVar32 = param_2[3];
  pppppplVar31 = *param_3;
  pppppplVar7 = param_3[2];
  if (pppppplVar31 == (long ******)*ppppplVar17 && pppppplVar7 == (long ******)ppppplVar17[2]) {
    pppppplVar30 = param_3[1];
    pppppplVar21 = pppppplVar7;
    if ((long)pppppplVar30 <= (long)pppppplVar7) {
      pppppplVar21 = pppppplVar30;
    }
    pppppplVar34 = pppppplVar31;
    if (0 < (long)pppppplVar21) {
      do {
        *pppppplVar34 = (long *****)0x3ff0000000000000;
        pppppplVar21 = (long ******)((long)pppppplVar21 + -1);
        pppppplVar34 = pppppplVar34 + (long)pppppplVar7 + 1;
      } while (pppppplVar21 != (long ******)0x0);
    }
    if (0 < (long)pppppplVar7) {
      pppppplVar21 = (long ******)0x0;
      do {
        pppppplVar34 = pppppplVar30;
        if ((long)pppppplVar21 <= (long)pppppplVar30) {
          pppppplVar34 = pppppplVar21;
        }
        pppppplVar11 = pppppplVar31;
        if (0 < (long)pppppplVar34) {
          do {
            *pppppplVar11 = (long *****)0x0;
            pppppplVar34 = (long ******)((long)pppppplVar34 + -1);
            pppppplVar11 = pppppplVar11 + (long)pppppplVar7;
          } while (pppppplVar34 != (long ******)0x0);
        }
        pppppplVar21 = (long ******)((long)pppppplVar21 + 1);
        pppppplVar31 = pppppplVar31 + 1;
      } while (pppppplVar21 != pppppplVar7);
    }
    if (0 < (long)ppppplVar32) {
      pppplVar25 = ppppplVar17[1];
      lVar18 = -(long)ppppplVar32;
      lVar23 = (long)ppppplVar32 * 8;
      ppppplVar36 = ppppplVar32;
      do {
        lVar23 = lVar23 + -8;
        ppppplVar37 = (long *****)((long)ppppplVar36 + -1);
        ppppppplStack_b0 = (long *******)((long)param_2[4] + (long)ppppplVar36);
        pppppplStack_c8 = (long ******)((long)pppplVar25 - (long)ppppppplStack_b0);
        pppppplStack_90 = (long ******)((long)pppppplStack_c8 + 1);
        pppppplStack_b8 = (long ******)ppppplVar17;
        ppppplStack_a8 = ppppplVar37;
        pppppplStack_88 = pppppplStack_90;
        if (*(char *)(param_2 + 2) == '\x01') {
          ppppplStack_78 = (long *****)((long)param_3[1] - (long)pppppplStack_90);
          pppppplStack_68 = param_3[2];
          ppppppplStack_70 = (long *******)((long)pppppplStack_68 - (long)pppppplStack_90);
          pppppplStack_98 =
               *param_3 + (long)ppppppplStack_70 + (long)pppppplStack_68 * (long)ppppplStack_78;
          pppppplStack_c8 = (long ******)((long)ppppplVar17[1] - (long)ppppppplStack_b0);
          pppppplStack_d0 =
               (long ******)
               (*ppppplVar17 +
               (long)((long)ppppplVar37 + (long)ppppplVar17[2] * (long)ppppppplStack_b0));
          ppppppplStack_a0 = (long *******)0x1;
          ppppppplStack_80 = param_3;
          FUN_10990efd4(&pppppplStack_98,&pppppplStack_d0,*param_2[1] + (long)ppppplVar37,*param_4);
        }
        else {
          ppppplStack_78 = (long *****)((long)param_3[1] - (long)pppppplStack_90);
          pppppplStack_68 = param_3[2];
          ppppppplStack_70 = (long *******)((long)pppppplStack_68 - (long)pppppplStack_90);
          pppppplStack_98 =
               *param_3 + (long)ppppppplStack_70 + (long)pppppplStack_68 * (long)ppppplStack_78;
          pppppplStack_d0 =
               (long ******)
               (*ppppplVar17 +
               (long)((long)ppppplVar37 + (long)ppppplVar17[2] * (long)ppppppplStack_b0));
          ppppppplStack_a0 = (long *******)0x1;
          ppppppplStack_80 = param_3;
          FUN_10990f3d4(&pppppplStack_98,&pppppplStack_d0,*param_2[1] + (long)ppppplVar37,*param_4);
        }
        ppppplVar17 = *param_2;
        pppplVar25 = ppppplVar17[1];
        if (0 < (long)pppplVar25 - (long)ppppplVar36) {
          pppppplVar31 = param_3[2];
          lVar35 = (long)pppplVar25 + lVar18;
          puVar24 = (undefined8 *)
                    ((long)*param_3 +
                    lVar23 + (long)pppppplVar31 * 8 *
                             ((long)param_3[1] + ((long)ppppplVar36 - (long)pppplVar25)));
          do {
            *puVar24 = 0;
            puVar24 = puVar24 + (long)pppppplVar31;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
        lVar18 = lVar18 + 1;
        bVar6 = (long *****)0x1 < ppppplVar36;
        ppppplVar36 = ppppplVar37;
      } while (bVar6);
    }
    pppplVar25 = ppppplVar17[1];
    if ((long)pppplVar25 - (long)ppppplVar32 < 1) {
      return;
    }
    uVar29 = 0;
    pppppplVar7 = param_3[2];
    pppppplVar31 = *param_3 +
                   (long)((long)pppppplVar7 +
                         (long)pppppplVar7 * ((long)param_3[1] - (long)pppplVar25));
    pppplVar22 = pppplVar25;
    do {
      pppplVar22 = (long ****)((long)pppplVar22 + -1);
      pppppplVar21 = pppppplVar31;
      pppplVar26 = pppplVar22;
      if (0 < (long)((long)pppplVar25 + ~uVar29)) {
        do {
          *pppppplVar21 = (long *****)0x0;
          pppplVar26 = (long ****)((long)pppplVar26 + -1);
          pppppplVar21 = pppppplVar21 + (long)pppppplVar7;
        } while (pppplVar26 != (long ****)0x0);
      }
      uVar29 = uVar29 + 1;
      pppppplVar31 = pppppplVar31 + (long)pppppplVar7 + 1;
    } while (uVar29 != (long)pppplVar25 - (long)ppppplVar32);
    return;
  }
  unaff_x23 = (long ******)ppppplVar17[1];
  if ((long)ppppplVar32 < 0x31) {
    if (unaff_x23 != (long ******)0x0) {
      lVar18 = 0;
      if (unaff_x23 != (long ******)0x0) {
        lVar18 = 0x7fffffffffffffff / (long)unaff_x23;
      }
      if (lVar18 < (long)unaff_x23) goto LAB_1099135a0;
    }
    uVar29 = (long)unaff_x23 * (long)unaff_x23;
    if ((long)param_3[1] * (long)pppppplVar7 - uVar29 == 0) goto LAB_109913648;
    _free();
    if (unaff_x23 == (long ******)0x0) {
      pppppplVar31 = (long ******)0x0;
LAB_109913644:
      *param_3 = pppppplVar31;
LAB_109913648:
      param_3[1] = unaff_x23;
      param_3[2] = unaff_x23;
      if (0 < (long)unaff_x23) {
        pppppplVar7 = (long ******)0x0;
        do {
          pppppplVar21 = (long ******)0x0;
          do {
            ppppplVar17 = (long *****)0x3ff0000000000000;
            if (pppppplVar7 != pppppplVar21) {
              ppppplVar17 = (long *****)0x0;
            }
            pppppplVar31[(long)pppppplVar21] = ppppplVar17;
            pppppplVar21 = (long ******)((long)pppppplVar21 + 1);
          } while (unaff_x23 != pppppplVar21);
          pppppplVar7 = (long ******)((long)pppppplVar7 + 1);
          pppppplVar31 = pppppplVar31 + (long)unaff_x23;
        } while (pppppplVar7 != unaff_x23);
      }
      if (0 < (long)ppppplVar32) {
        uVar29 = (long)ppppplVar32 + 1;
        lVar18 = -(long)ppppplVar32;
        lVar23 = (long)ppppplVar32 * 8;
        do {
          lVar23 = lVar23 + -8;
          ppppplStack_a8 = (long *****)(uVar29 - 2);
          pppppplStack_b8 = (long ******)*param_2;
          pppplVar25 = (long ****)pppppplStack_b8[1];
          ppppplVar17 = param_2[4];
          ppppppplStack_b0 = (long *******)((long)ppppplVar17 + (uVar29 - 1));
          pppppplStack_c8 = (long ******)((long)pppplVar25 + (lVar18 - (long)ppppplVar17));
          pppppplStack_90 = (long ******)((long)pppppplStack_c8 + 1);
          pppppplStack_88 = pppppplStack_90;
          if (*(char *)(param_2 + 2) == '\x01') {
            ppppplStack_78 =
                 (long *****)
                 ((long)param_3[1] + (long)ppppplVar17 + (uVar29 - (long)pppplVar25) + -2);
            pppppplStack_68 = param_3[2];
            ppppppplStack_70 =
                 (long *******)
                 ((long)pppppplStack_68 + (long)ppppplVar17 + (uVar29 - (long)pppplVar25) + -2);
            pppppplStack_98 =
                 *param_3 + (long)ppppppplStack_70 + (long)pppppplStack_68 * (long)ppppplStack_78;
            pppppplStack_d0 =
                 (long ******)
                 ((long)*pppppplStack_b8 +
                 lVar23 + (long)pppppplStack_b8[2] * ((long)ppppplVar17 + (long)ppppplVar32) * 8);
            ppppppplStack_a0 = (long *******)0x1;
            ppppppplStack_80 = param_3;
            FUN_10990efd4(&pppppplStack_98,&pppppplStack_d0,(long)*param_2[1] + lVar23,*param_4);
          }
          else {
            ppppplStack_78 =
                 (long *****)
                 ((long)param_3[1] + (long)ppppplVar17 + (uVar29 - (long)pppplVar25) + -2);
            pppppplStack_68 = param_3[2];
            ppppppplStack_70 =
                 (long *******)
                 ((long)pppppplStack_68 + (long)ppppplVar17 + (uVar29 - (long)pppplVar25) + -2);
            pppppplStack_98 =
                 *param_3 + (long)ppppppplStack_70 + (long)pppppplStack_68 * (long)ppppplStack_78;
            pppppplStack_d0 =
                 (long ******)
                 ((long)*pppppplStack_b8 +
                 lVar23 + (long)pppppplStack_b8[2] * ((long)ppppplVar17 + (long)ppppplVar32) * 8);
            ppppppplStack_a0 = (long *******)0x1;
            ppppppplStack_80 = param_3;
            FUN_10990f3d4(&pppppplStack_98,&pppppplStack_d0,(long)*param_2[1] + lVar23,*param_4);
          }
          uVar29 = uVar29 - 1;
          lVar18 = lVar18 + 1;
          ppppplVar32 = (long *****)((long)ppppplVar32 + -1);
        } while (1 < uVar29);
      }
      return;
    }
    if (uVar29 >> 0x3d == 0) {
      pppppplVar31 = (long ******)(uVar29 * 8);
      _malloc();
      if (pppppplVar31 != (long ******)0x0) goto LAB_109913644;
    }
    goto LAB_1099135a0;
  }
  if (unaff_x23 != (long ******)0x0) {
    lVar18 = 0;
    if (unaff_x23 != (long ******)0x0) {
      lVar18 = 0x7fffffffffffffff / (long)unaff_x23;
    }
    if (lVar18 < (long)unaff_x23) goto LAB_1099135a0;
  }
  uVar29 = (long)unaff_x23 * (long)unaff_x23;
  if ((long)param_3[1] * (long)pppppplVar7 - uVar29 != 0) {
    _free();
    if (unaff_x23 == (long ******)0x0) {
LAB_1099135c0:
      pppppplVar31 = (long ******)0x0;
    }
    else {
      if (uVar29 >> 0x3d != 0) {
LAB_1099135a0:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_1099135c0;
      }
      pppppplVar31 = (long ******)(uVar29 * 8);
      _malloc();
      if (pppppplVar31 == (long ******)0x0) goto LAB_1099135a0;
    }
    *param_3 = pppppplVar31;
  }
  param_3[1] = unaff_x23;
  param_3[2] = unaff_x23;
  if (0 < (long)unaff_x23) {
    pppppplVar7 = (long ******)0x0;
    param_1 = 0;
    do {
      pppppplVar21 = (long ******)0x0;
      do {
        ppppplVar17 = (long *****)0x3ff0000000000000;
        if (pppppplVar7 != pppppplVar21) {
          ppppplVar17 = (long *****)0x0;
        }
        pppppplVar31[(long)pppppplVar21] = ppppplVar17;
        pppppplVar21 = (long ******)((long)pppppplVar21 + 1);
      } while (unaff_x23 != pppppplVar21);
      pppppplVar7 = (long ******)((long)pppppplVar7 + 1);
      pppppplVar31 = pppppplVar31 + (long)unaff_x23;
    } while (pppppplVar7 != unaff_x23);
  }
  ppppppplVar14 = (long *******)0x1;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(byte *)(param_2 + 2) ^ 1;
  ppppplVar17 = param_2[3];
  ppppppplVar33 = (long *******)param_3[2];
  if ((long)ppppplVar17 < 0x30 || (long)ppppppplVar33 < 2) {
    pppppplVar31 = param_2;
    ppppppplVar8 = param_3;
    ppppppplVar16 = param_4;
    if ((long *******)param_4[1] != ppppppplVar33) {
      _free(*param_4);
      if (0 < (long)ppppppplVar33) {
        if ((ulong)ppppppplVar33 >> 0x3d == 0) {
          pppppplVar31 = (long ******)((long)ppppppplVar33 << 3);
          _malloc();
          if (pppppplVar31 != (long ******)0x0) goto LAB_1099139d0;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        ppppplVar17 = extraout_x9;
        goto LAB_1099138d0;
      }
      pppppplVar31 = (long ******)0x0;
LAB_1099139d0:
      *param_4 = pppppplVar31;
      ppppplVar17 = param_2[3];
    }
    param_4[1] = (long ******)ppppppplVar33;
    if (0 < (long)ppppplVar17) {
      ppppppplVar33 = (long *******)0x0;
      unaff_x24 = 0xffffffffffffffff;
      unaff_x25 = 1;
      do {
        ppppppplStack_d8 = ppppppplVar33;
        if (*(char *)(param_2 + 2) == '\0') {
          ppppppplStack_d8 = (long *******)((long)ppppplVar17 + unaff_x24);
        }
        ppppppplStack_e8 = (long *******)*param_2;
        pppppplStack_c0 =
             (long ******)((long)ppppppplStack_e8[1] - ((long)param_2[4] + (long)ppppppplStack_d8));
        pppppplStack_98 = param_3[2];
        pppppplStack_b8 = pppppplStack_c0;
        if ((uVar3 & 1) == 0) {
          pppppplStack_b8 = pppppplStack_98;
        }
        ppppplStack_a8 = (long *****)((long)param_3[1] - (long)pppppplStack_c0);
        ppppppplStack_a0 = (long *******)((long)pppppplStack_98 - (long)pppppplStack_b8);
        pppppplStack_c8 =
             *param_3 +
             (long)((long)ppppppplStack_a0 + (long)ppppplStack_a8 * (long)pppppplStack_98);
        ppppppplStack_e0 = (long *******)((long)param_2[4] + (long)ppppppplStack_d8 + 1);
        pppppplStack_f8 = (long ******)((long)ppppppplStack_e8[1] - (long)ppppppplStack_e0);
        pppppplStack_100 =
             *ppppppplStack_e8 +
             (long)((long)ppppppplStack_d8 + (long)ppppppplStack_e8[2] * (long)ppppppplStack_e0);
        pppppplStack_d0 = (long ******)0x1;
        ppppppplVar16 = (long *******)(*param_2[1] + (long)ppppppplStack_d8);
        ppppppplVar14 = (long *******)*param_4;
        pppppplVar31 = (long ******)&pppppplStack_c8;
        ppppppplVar8 = &pppppplStack_100;
        ppppppplStack_b0 = param_3;
        FUN_10990f3d4();
        ppppppplVar33 = (long *******)((long)ppppppplVar33 + 1);
        ppppplVar17 = param_2[3];
        unaff_x24 = unaff_x24 - 1;
      } while ((long)ppppppplVar33 < (long)ppppplVar17);
    }
  }
  else {
LAB_1099138d0:
    param_4 = (long *******)0x0;
    ppppppplVar33 = (long *******)0x0;
    unaff_x24 = (long)ppppplVar17 + 1U >> 1;
    if ((long *****)0x5f < ppppplVar17) {
      unaff_x24 = 0x30;
    }
    unaff_x25 = -unaff_x24;
    do {
      if (*(byte *)(param_2 + 2) == 1) {
        ppppppplStack_a0 = ppppppplVar33;
        ppppplVar32 = (long *****)(unaff_x24 + (long)ppppppplVar33);
        if ((long)ppppplVar17 <= (long)(unaff_x24 + (long)ppppppplVar33)) {
          ppppplVar32 = ppppplVar17;
        }
      }
      else {
        uVar29 = (long)ppppplVar17 + (long)param_4 + unaff_x25;
        ppppppplStack_a0 = (long *******)(uVar29 & ((long)uVar29 >> 0x3f ^ 0xffffffffffffffffU));
        ppppplVar32 = (long *****)((long)ppppplVar17 + (long)param_4);
      }
      pppppplStack_b8 = (long ******)((long)ppppplVar32 - (long)ppppppplStack_a0);
      ppppplStack_a8 = (long *****)((long)param_2[4] + (long)ppppppplStack_a0);
      ppppppplStack_b0 = (long *******)*param_2;
      ppppplStack_78 = param_2[1];
      pppppplStack_98 = ppppppplStack_b0[2];
      pppppplStack_c8 =
           *ppppppplStack_b0 +
           (long)((long)ppppppplStack_a0 + (long)pppppplStack_98 * (long)ppppplStack_a8);
      pppppplStack_f8 = (long ******)((long)ppppppplStack_b0[1] - (long)ppppplStack_a8);
      ppppppplStack_e0 =
           (long *******)((long)param_3[1] + ((long)ppppplStack_a8 - (long)ppppppplStack_b0[1]));
      bVar6 = (uVar3 & 1) == 0;
      ppppppplStack_d8 = ppppppplStack_e0;
      if (bVar6) {
        ppppppplStack_d8 = (long *******)0x0;
      }
      pppppplStack_d0 = param_3[2];
      pppppplStack_100 =
           *param_3 +
           (long)((long)ppppppplStack_d8 + (long)pppppplStack_d0 * (long)ppppppplStack_e0);
      pppppplStack_f0 = pppppplStack_f8;
      if (bVar6) {
        pppppplStack_f0 = pppppplStack_d0;
      }
      pppppplStack_90 = (long ******)(*ppppplStack_78 + (long)ppppppplStack_a0);
      ppppppplVar8 = &pppppplStack_c8;
      ppppppplVar16 = &pppppplStack_90;
      ppppppplVar14 = (long *******)(ulong)(*(byte *)(param_2 + 2) ^ 1);
      pppppplVar31 = (long ******)&pppppplStack_100;
      ppppppplStack_e8 = param_3;
      pppppplStack_c0 = pppppplStack_f8;
      pppppplStack_88 = pppppplStack_b8;
      ppppppplStack_70 = ppppppplStack_a0;
      FUN_109910108();
      ppppplVar17 = param_2[3];
      ppppppplVar33 = (long *******)((long)ppppppplVar33 + unaff_x24);
      param_4 = (long *******)((long)param_4 - unaff_x24);
    } while ((long)ppppppplVar33 < (long)ppppplVar17);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_110 = &stack0xfffffffffffffff0;
  pcStack_108 = FUN_109913ad8;
  pppppplVar7 = (long ******)&pppppplStack_170;
  pppppplVar21 = (long ******)&pppppplStack_170;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar15 = ppppppplVar14;
  pppppplVar30 = (long ******)(ulong)uVar3;
  uVar39 = param_1;
  if ((ulong)ppppppplVar16 >> 0x3d == 0) {
    pppppplVar30 = pppppplVar31;
    param_3 = ppppppplVar16;
    unaff_d8 = param_1;
    if (ppppppplVar8 == (long *******)0x0) {
      ppppppplVar8 = (long *******)((long)ppppppplVar16 << 3);
      if (ppppppplVar16 < (long *******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar18 = -((long)ppppppplVar8 + 0x1eU & 0xfffffffffffffff0);
        pppppplVar7 = (long ******)((long)&pppppplStack_170 + lVar18);
        ppppppplVar8 = (long *******)((long)&pppppplStack_170 + lVar18);
        param_4 = ppppppplVar8;
      }
      else {
        _malloc();
        param_4 = ppppppplVar8;
        if (ppppppplVar8 == (long *******)0x0) goto LAB_109913be8;
      }
    }
    else {
      pppppplVar7 = (long ******)&pppppplStack_170;
      param_4 = (long *******)0x0;
    }
    pppppplStack_158 = (long ******)*pppppplVar31;
    ppppppplVar9 = (long *******)pppppplVar31[1];
    pppppplVar34 = (long ******)pppppplVar31[2];
    pppplStack_150 = pppppplVar31[3][2];
    uStack_160 = 1;
    ppppppplVar12 = &pppppplStack_158;
    ppppppplVar15 = (long *******)&ppppppplStack_168;
    param_7 = (long ******)0x1;
    uVar39 = param_1;
    ppppppplStack_168 = ppppppplVar8;
    FUN_10990fa5c();
    if ((long *******)0x4000 < ppppppplVar16) {
      ppppppplVar9 = param_4;
      _free();
    }
    pppppplVar21 = pppppplVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
      return;
    }
  }
  else {
LAB_109913be8:
    ppppppplVar14 = param_6;
    ppppppplVar9 = (long *******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pppppplVar34 = (long ******)PTR___ZTISt9bad_alloc_110346a68;
    ppppppplVar12 = (long *******)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *******)0x4000 < param_3) {
    _free(param_4);
  }
  ppppppplVar8 = ppppppplVar9;
  __Unwind_Resume();
  *(undefined8 *)((long)pppppplVar21 + -0x50) = unaff_d9;
  *(undefined8 *)((long)pppppplVar21 + -0x48) = unaff_d8;
  *(ulong *)((long)pppppplVar21 + -0x40) = unaff_x24;
  *(long ********)((long)pppppplVar21 + -0x38) = ppppppplVar33;
  *(long *******)((long)pppppplVar21 + -0x30) = pppppplVar30;
  *(long ********)((long)pppppplVar21 + -0x28) = param_4;
  *(long ********)((long)pppppplVar21 + -0x20) = ppppppplVar9;
  *(long ********)((long)pppppplVar21 + -0x18) = param_3;
  *(undefined1 ***)((long)pppppplVar21 + -0x10) = &puStack_110;
  *(code **)((long)pppppplVar21 + -8) = FUN_109913c28;
  pppppplVar31 = (long ******)((long)pppppplVar21 + -0x80);
  pppppplVar7 = (long ******)((long)pppppplVar21 + -0x80);
  *(undefined8 *)((long)pppppplVar21 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar16 = ppppppplVar15;
  ppppppplVar9 = ppppppplVar14;
  uVar40 = uVar39;
  if ((ulong)ppppppplVar12 >> 0x3d == 0) {
    param_3 = ppppppplVar12;
    param_4 = ppppppplVar14;
    ppppppplVar33 = ppppppplVar8;
    unaff_d8 = uVar39;
    if (pppppplVar34 == (long ******)0x0) {
      pppppplVar30 = (long ******)((long)ppppppplVar12 << 3);
      if (ppppppplVar12 < (long *******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pppppplVar31 = (long ******)
                       ((long)pppppplVar21 +
                       (-0x80 - ((long)pppppplVar30 + 0x1eU & 0xfffffffffffffff0)));
        pppppplVar30 = pppppplVar31;
        pppppplVar34 = pppppplVar31;
      }
      else {
        _malloc();
        pppppplVar34 = pppppplVar30;
        if (pppppplVar30 == (long ******)0x0) goto LAB_109913d40;
      }
    }
    else {
      pppppplVar31 = (long ******)((long)pppppplVar21 + -0x80);
      pppppplVar30 = pppppplVar34;
      pppppplVar34 = (long ******)0x0;
    }
    pppppplVar11 = ppppppplVar8[1];
    pppppplVar10 = ppppppplVar8[2];
    *(long *******)((long)pppppplVar21 + -0x68) = *ppppppplVar8;
    *(long *******)((long)pppppplVar21 + -0x60) = pppppplVar11;
    *(long *******)((long)pppppplVar21 + -0x78) = pppppplVar30;
    *(undefined8 *)((long)pppppplVar21 + -0x70) = 1;
    param_7 = ppppppplVar14[1];
    puVar13 = (undefined *)((long)pppppplVar21 + -0x68);
    ppppppplVar16 = (long *******)((long)pppppplVar21 + -0x78);
    uVar40 = uVar39;
    FUN_10990fa5c(uVar39);
    if ((long *******)0x4000 < ppppppplVar12) {
      pppppplVar10 = pppppplVar34;
      _free();
    }
    pppppplVar7 = pppppplVar31;
    pppppplVar30 = pppppplVar34;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppppplVar21 + -0x58)) {
      return;
    }
  }
  else {
LAB_109913d40:
    ppppppplVar15 = ppppppplVar9;
    pppppplVar10 = (long ******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pppppplVar11 = (long ******)PTR___ZTISt9bad_alloc_110346a68;
    puVar13 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *******)0x4000 < param_3) {
    _free(pppppplVar30);
  }
  pppppplVar34 = pppppplVar10;
  __Unwind_Resume();
  *(undefined8 *)((long)pppppplVar7 + -0x70) = unaff_d9;
  *(undefined8 *)((long)pppppplVar7 + -0x68) = unaff_d8;
  *(undefined8 *)((long)pppppplVar7 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pppppplVar7 + -0x58) = unaff_x27;
  *(undefined8 *)((long)pppppplVar7 + -0x50) = unaff_x26;
  *(long *)((long)pppppplVar7 + -0x48) = unaff_x25;
  *(ulong *)((long)pppppplVar7 + -0x40) = unaff_x24;
  *(long ********)((long)pppppplVar7 + -0x38) = ppppppplVar33;
  *(long *******)((long)pppppplVar7 + -0x30) = pppppplVar30;
  *(long ********)((long)pppppplVar7 + -0x28) = param_4;
  *(long *******)((long)pppppplVar7 + -0x20) = pppppplVar10;
  *(long ********)((long)pppppplVar7 + -0x18) = param_3;
  *(undefined1 **)((long)pppppplVar7 + -0x10) = (undefined1 *)((long)pppppplVar21 + -0x10);
  *(code **)((long)pppppplVar7 + -8) = FUN_109913d80;
  puVar19 = (undefined1 *)((long)pppppplVar7 + -0x170);
  *(undefined8 *)((long)pppppplVar7 + -0x110) = param_9;
  *(undefined8 *)((long)pppppplVar7 + -0xd0) = param_8;
  *(long *******)((long)pppppplVar7 + -0x138) = param_7;
  *(long ********)((long)pppppplVar7 + -0xe8) = ppppppplVar15;
  *(long ********)((long)pppppplVar7 + -0x140) = ppppppplVar16;
  plVar27 = *(long **)((long)pppppplVar7 + 0x10);
  *(undefined8 *)((long)pppppplVar7 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar21 = (long ******)plVar27[3];
  lVar18 = plVar27[4];
  pppppplVar30 = (long ******)plVar27[2];
  pppppplVar31 = pppppplVar30;
  if ((long)pppppplVar34 <= (long)pppppplVar30) {
    pppppplVar31 = pppppplVar34;
  }
  pppppplVar10 = pppppplVar21;
  if ((long)pppppplVar11 <= (long)pppppplVar21) {
    pppppplVar10 = pppppplVar11;
  }
  *(long *)((long)pppppplVar7 + -0xf8) = lVar18;
  *(long *******)((long)pppppplVar7 + -0x120) = pppppplVar31;
  uVar29 = (long)pppppplVar31 * lVar18;
  if (uVar29 >> 0x3d == 0) {
    lVar18 = *plVar27;
    *(long *)((long)pppppplVar7 + -0xa8) = lVar18;
    if (lVar18 == 0) {
      lVar18 = uVar29 * 8;
      if (uVar29 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar19 = (undefined1 *)
                  ((long)pppppplVar7 + (-0x170 - (lVar18 + 0x1eU & 0xfffffffffffffff0)));
        *(undefined1 **)((long)pppppplVar7 + -0x160) = puVar19;
        *(undefined1 **)((long)pppppplVar7 + -0xa8) = puVar19;
      }
      else {
        _malloc();
        *(long *)((long)pppppplVar7 + -0xa8) = lVar18;
        *(long *)((long)pppppplVar7 + -0x160) = lVar18;
        if (lVar18 == 0) goto LAB_10991419c;
      }
    }
    else {
      *(undefined8 *)((long)pppppplVar7 + -0x160) = 0;
      puVar19 = (undefined1 *)((long)pppppplVar7 + -0x170);
    }
    uVar20 = (long)pppppplVar10 * *(long *)((long)pppppplVar7 + -0xf8);
    if (uVar20 >> 0x3d == 0) {
      puVar28 = (undefined1 *)plVar27[1];
      *(ulong *)((long)pppppplVar7 + -0x150) = uVar29;
      *(ulong *)((long)pppppplVar7 + -0x158) = uVar20;
      if (puVar28 == (undefined1 *)0x0) {
        puVar28 = (undefined1 *)(uVar20 * 8);
        if (uVar20 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar19 = puVar19 + -((ulong)(puVar28 + 0x1e) & 0xfffffffffffffff0);
          *(undefined1 **)((long)pppppplVar7 + -0x168) = puVar19;
          puVar28 = puVar19;
          goto LAB_109913f14;
        }
        _malloc();
        *(undefined1 **)((long)pppppplVar7 + -0x168) = puVar28;
        if (puVar28 != (undefined1 *)0x0) goto LAB_109913f14;
      }
      else {
        *(undefined8 *)((long)pppppplVar7 + -0x168) = 0;
LAB_109913f14:
        *(uint *)((long)pppppplVar7 + -0x144) =
             (uint)((*(undefined **)((long)pppppplVar7 + -0xf8) != puVar13 ||
                    (long)pppppplVar34 <= (long)pppppplVar30) ||
                   (long)pppppplVar21 < (long)pppppplVar11);
        if (0 < (long)pppppplVar34) {
          lVar18 = 0;
          *(long *)((long)pppppplVar7 + -0x130) = *(long *)((long)pppppplVar7 + -0x120) << 3;
          *(long *)((long)pppppplVar7 + -0xc0) =
               *(long *)((long)pppppplVar7 + 8) * (long)pppppplVar10 * 8;
          *(long *)((long)pppppplVar7 + -0xb8) = *(long *)((long)pppppplVar7 + 8);
          *(long *)((long)pppppplVar7 + -0x108) = *(long *)((long)pppppplVar7 + -0xf8) << 3;
          *(undefined **)((long)pppppplVar7 + -0x100) = puVar13;
          *(long *)((long)pppppplVar7 + -200) =
               *(long *)((long)pppppplVar7 + -0xd0) * (long)pppppplVar10 * 8;
          *(long *******)((long)pppppplVar7 + -0x128) = pppppplVar34;
          do {
            pppppplVar31 = (long ******)(lVar18 + *(long *)((long)pppppplVar7 + -0x120));
            *(long *******)((long)pppppplVar7 + -0x118) = pppppplVar31;
            if ((long)pppppplVar34 <= (long)pppppplVar31) {
              pppppplVar31 = pppppplVar34;
            }
            if (0 < (long)puVar13) {
              lVar23 = 0;
              *(long *)((long)pppppplVar7 + -0xa0) = (long)pppppplVar31 - lVar18;
              *(long *)((long)pppppplVar7 + -0xf0) =
                   *(long *)((long)pppppplVar7 + -0x140) +
                   lVar18 * *(long *)((long)pppppplVar7 + -0xe8) * 8;
              uVar4 = *(undefined4 *)((long)pppppplVar7 + -0x144);
              if (lVar18 == 0) {
                uVar4 = 1;
              }
              *(undefined4 *)((long)pppppplVar7 + -0xac) = uVar4;
              *(undefined8 *)((long)pppppplVar7 + -0xd8) =
                   *(undefined8 *)((long)pppppplVar7 + -0x138);
              do {
                puVar1 = (undefined *)(lVar23 + *(long *)((long)pppppplVar7 + -0xf8));
                puVar2 = puVar1;
                if ((long)puVar13 <= (long)puVar1) {
                  puVar2 = puVar13;
                }
                lVar18 = (long)puVar2 - lVar23;
                *(long *)((long)pppppplVar7 + -0x98) =
                     *(long *)((long)pppppplVar7 + -0xf0) + lVar23 * 8;
                *(undefined8 *)((long)pppppplVar7 + -0x90) =
                     *(undefined8 *)((long)pppppplVar7 + -0xe8);
                FUN_1098e479c((undefined1 *)((long)pppppplVar7 + -0x81),
                              *(undefined8 *)((long)pppppplVar7 + -0xa8),
                              (undefined1 *)((long)pppppplVar7 + -0x98),lVar18,
                              *(undefined8 *)((long)pppppplVar7 + -0xa0),0,0);
                *(undefined **)((long)pppppplVar7 + -0xe0) = puVar1;
                if (0 < (long)pppppplVar11) {
                  lVar38 = 0;
                  puVar13 = (undefined *)0x0;
                  lVar35 = *(long *)((long)pppppplVar7 + -0xd8);
                  lVar23 = *(long *)((long)pppppplVar7 + -0x110);
                  pppppplVar31 = pppppplVar10;
                  do {
                    pppppplVar21 = pppppplVar11;
                    if ((long)pppppplVar31 <= (long)pppppplVar11) {
                      pppppplVar21 = pppppplVar31;
                    }
                    if (*(int *)((long)pppppplVar7 + -0xac) != 0) {
                      *(long *)((long)pppppplVar7 + -0x98) = lVar35;
                      *(undefined8 *)((long)pppppplVar7 + -0x90) =
                           *(undefined8 *)((long)pppppplVar7 + -0xd0);
                      FUN_1098e46ac((undefined1 *)((long)pppppplVar7 + -0x82),puVar28,
                                    (undefined1 *)((long)pppppplVar7 + -0x98),lVar18,
                                    (undefined *)((long)pppppplVar21 + lVar38),0,0);
                    }
                    *(long *)((long)pppppplVar7 + -0x98) = lVar23;
                    *(undefined8 *)((long)pppppplVar7 + -0x90) =
                         *(undefined8 *)((long)pppppplVar7 + -0xb8);
                    *(undefined8 *)(puVar19 + -0x18) = 0;
                    *(undefined8 *)(puVar19 + -0x10) = 0;
                    *(undefined8 *)(puVar19 + -0x20) = 0xffffffffffffffff;
                    FUN_109404e14(uVar40,(undefined1 *)((long)pppppplVar7 + -0x83),
                                  (undefined1 *)((long)pppppplVar7 + -0x98),
                                  *(undefined8 *)((long)pppppplVar7 + -0xa8),puVar28,
                                  *(undefined8 *)((long)pppppplVar7 + -0xa0),lVar18,
                                  (undefined *)((long)pppppplVar21 + lVar38),0xffffffffffffffff);
                    puVar13 = puVar13 + (long)pppppplVar10;
                    lVar23 = lVar23 + *(long *)((long)pppppplVar7 + -0xc0);
                    lVar35 = lVar35 + *(long *)((long)pppppplVar7 + -200);
                    pppppplVar31 = (long ******)((long)pppppplVar31 + (long)pppppplVar10);
                    lVar38 = lVar38 - (long)pppppplVar10;
                  } while ((long)puVar13 < (long)pppppplVar11);
                }
                puVar13 = *(undefined **)((long)pppppplVar7 + -0x100);
                lVar23 = *(long *)((long)pppppplVar7 + -0xe0);
                *(long *)((long)pppppplVar7 + -0xd8) =
                     *(long *)((long)pppppplVar7 + -0xd8) + *(long *)((long)pppppplVar7 + -0x108);
              } while (lVar23 < (long)puVar13);
            }
            *(long *)((long)pppppplVar7 + -0x110) =
                 *(long *)((long)pppppplVar7 + -0x110) + *(long *)((long)pppppplVar7 + -0x130);
            lVar18 = *(long *)((long)pppppplVar7 + -0x118);
            pppppplVar34 = *(long *******)((long)pppppplVar7 + -0x128);
          } while (lVar18 < (long)pppppplVar34);
        }
        if (0x4000 < *(ulong *)((long)pppppplVar7 + -0x158)) {
          _free(*(undefined8 *)((long)pppppplVar7 + -0x168));
        }
        if (0x4000 < *(ulong *)((long)pppppplVar7 + -0x150)) {
          _free(*(undefined8 *)((long)pppppplVar7 + -0x160));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppppplVar7 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109914204;
    }
  }
  else {
LAB_10991419c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109914204:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109914208);
  (*pcVar5)();
}



/* Entry: 109913820; end: 109913ad7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109913820(undefined8 param_1,long ******param_2,long *******param_3,long *******param_4,
                  long *******param_5,long *******param_6,long ******param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  long ******pppppplVar5;
  bool bVar6;
  long ******pppppplVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  undefined *puVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long lVar16;
  undefined1 *puVar17;
  long *****ppppplVar18;
  long *****extraout_x9;
  ulong uVar19;
  long *****ppppplVar20;
  long lVar21;
  long *plVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long *******ppppppplVar27;
  ulong unaff_x24;
  long ******pppppplVar28;
  long unaff_x25;
  long lVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long ******pppppplStack_170;
  long *******ppppppplStack_168;
  undefined8 uStack_160;
  long ******pppppplStack_158;
  long ****pppplStack_150;
  long lStack_148;
  undefined1 *puStack_110;
  code *pcStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  long *******ppppppplStack_b0;
  long lStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  long ******pppppplStack_90;
  long ******pppppplStack_88;
  long *****ppppplStack_78;
  long *******ppppppplStack_70;
  long ****pppplStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_5 == 0) {
    pppppplVar26 = (long ******)0x0;
  }
  else {
    pppppplVar26 = (long ******)(ulong)(*(byte *)(param_2 + 2) ^ 1);
  }
  ppppplVar18 = param_2[3];
  ppppppplVar27 = (long *******)param_3[2];
  if ((long)ppppplVar18 < 0x30 || (long)ppppppplVar27 < 2) {
    pppppplVar7 = param_2;
    ppppppplVar8 = param_3;
    ppppppplVar15 = param_4;
    if ((long *******)param_4[1] != ppppppplVar27) {
      _free(*param_4);
      if (0 < (long)ppppppplVar27) {
        if ((ulong)ppppppplVar27 >> 0x3d == 0) {
          pppppplVar7 = (long ******)((long)ppppppplVar27 << 3);
          _malloc();
          if (pppppplVar7 != (long ******)0x0) goto LAB_1099139d0;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        ppppplVar18 = extraout_x9;
        goto LAB_1099138d0;
      }
      pppppplVar7 = (long ******)0x0;
LAB_1099139d0:
      *param_4 = pppppplVar7;
      ppppplVar18 = param_2[3];
    }
    param_4[1] = (long ******)ppppppplVar27;
    if (0 < (long)ppppplVar18) {
      ppppppplVar27 = (long *******)0x0;
      unaff_x24 = 0xffffffffffffffff;
      unaff_x25 = 1;
      do {
        ppppppplStack_d8 = ppppppplVar27;
        if (*(char *)(param_2 + 2) == '\0') {
          ppppppplStack_d8 = (long *******)((long)ppppplVar18 + unaff_x24);
        }
        ppppppplStack_e8 = (long *******)*param_2;
        pppppplStack_c0 =
             (long ******)((long)ppppppplStack_e8[1] - ((long)param_2[4] + (long)ppppppplStack_d8));
        pppppplStack_98 = param_3[2];
        pppppplStack_b8 = pppppplStack_c0;
        if (((ulong)pppppplVar26 & 1) == 0) {
          pppppplStack_b8 = pppppplStack_98;
        }
        lStack_a8 = (long)param_3[1] - (long)pppppplStack_c0;
        ppppppplStack_a0 = (long *******)((long)pppppplStack_98 - (long)pppppplStack_b8);
        pppppplStack_c8 =
             *param_3 + (long)((long)ppppppplStack_a0 + lStack_a8 * (long)pppppplStack_98);
        ppppppplStack_e0 = (long *******)((long)param_2[4] + (long)ppppppplStack_d8 + 1);
        pppppplStack_f8 = (long ******)((long)ppppppplStack_e8[1] - (long)ppppppplStack_e0);
        pppppplStack_100 =
             *ppppppplStack_e8 +
             (long)((long)ppppppplStack_d8 + (long)ppppppplStack_e8[2] * (long)ppppppplStack_e0);
        pppppplStack_d0 = (long ******)0x1;
        ppppppplVar15 = (long *******)(*param_2[1] + (long)ppppppplStack_d8);
        param_5 = (long *******)*param_4;
        pppppplVar7 = (long ******)&pppppplStack_c8;
        ppppppplVar8 = &pppppplStack_100;
        ppppppplStack_b0 = param_3;
        FUN_10990f3d4();
        ppppppplVar27 = (long *******)((long)ppppppplVar27 + 1);
        ppppplVar18 = param_2[3];
        unaff_x24 = unaff_x24 - 1;
      } while ((long)ppppppplVar27 < (long)ppppplVar18);
    }
  }
  else {
LAB_1099138d0:
    param_4 = (long *******)0x0;
    ppppppplVar27 = (long *******)0x0;
    unaff_x24 = (long)ppppplVar18 + 1U >> 1;
    if ((long *****)0x5f < ppppplVar18) {
      unaff_x24 = 0x30;
    }
    unaff_x25 = -unaff_x24;
    do {
      if (*(byte *)(param_2 + 2) == 1) {
        ppppppplStack_a0 = ppppppplVar27;
        ppppplVar20 = (long *****)(unaff_x24 + (long)ppppppplVar27);
        if ((long)ppppplVar18 <= (long)(unaff_x24 + (long)ppppppplVar27)) {
          ppppplVar20 = ppppplVar18;
        }
      }
      else {
        uVar24 = (long)ppppplVar18 + (long)param_4 + unaff_x25;
        ppppppplStack_a0 = (long *******)(uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU));
        ppppplVar20 = (long *****)((long)ppppplVar18 + (long)param_4);
      }
      pppppplStack_b8 = (long ******)((long)ppppplVar20 - (long)ppppppplStack_a0);
      lStack_a8 = (long)param_2[4] + (long)ppppppplStack_a0;
      ppppppplStack_b0 = (long *******)*param_2;
      ppppplStack_78 = param_2[1];
      pppppplStack_98 = ppppppplStack_b0[2];
      pppppplStack_c8 =
           *ppppppplStack_b0 + (long)((long)ppppppplStack_a0 + (long)pppppplStack_98 * lStack_a8);
      pppppplStack_f8 = (long ******)((long)ppppppplStack_b0[1] - lStack_a8);
      ppppppplStack_e0 = (long *******)((long)param_3[1] + (lStack_a8 - (long)ppppppplStack_b0[1]));
      bVar6 = ((ulong)pppppplVar26 & 1) == 0;
      ppppppplStack_d8 = ppppppplStack_e0;
      if (bVar6) {
        ppppppplStack_d8 = (long *******)0x0;
      }
      pppppplStack_d0 = param_3[2];
      pppppplStack_100 =
           *param_3 +
           (long)((long)ppppppplStack_d8 + (long)pppppplStack_d0 * (long)ppppppplStack_e0);
      pppppplStack_f0 = pppppplStack_f8;
      if (bVar6) {
        pppppplStack_f0 = pppppplStack_d0;
      }
      pppplStack_60 = ppppplStack_78[1];
      pppppplStack_90 = (long ******)(*ppppplStack_78 + (long)ppppppplStack_a0);
      ppppppplVar8 = &pppppplStack_c8;
      ppppppplVar15 = &pppppplStack_90;
      param_5 = (long *******)(ulong)(*(byte *)(param_2 + 2) ^ 1);
      pppppplVar7 = (long ******)&pppppplStack_100;
      ppppppplStack_e8 = param_3;
      pppppplStack_c0 = pppppplStack_f8;
      pppppplStack_88 = pppppplStack_b8;
      ppppppplStack_70 = ppppppplStack_a0;
      FUN_109910108();
      ppppplVar18 = param_2[3];
      ppppppplVar27 = (long *******)((long)ppppppplVar27 + unaff_x24);
      param_4 = (long *******)((long)param_4 - unaff_x24);
    } while ((long)ppppppplVar27 < (long)ppppplVar18);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_110 = &stack0xfffffffffffffff0;
  pcStack_108 = FUN_109913ad8;
  pppppplVar5 = (long ******)&pppppplStack_170;
  pppppplVar25 = (long ******)&pppppplStack_170;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar14 = param_5;
  uVar31 = param_1;
  if ((ulong)ppppppplVar15 >> 0x3d == 0) {
    pppppplVar26 = pppppplVar7;
    param_3 = ppppppplVar15;
    unaff_d8 = param_1;
    if (ppppppplVar8 == (long *******)0x0) {
      ppppppplVar8 = (long *******)((long)ppppppplVar15 << 3);
      if (ppppppplVar15 < (long *******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar16 = -((long)ppppppplVar8 + 0x1eU & 0xfffffffffffffff0);
        pppppplVar5 = (long ******)((long)&pppppplStack_170 + lVar16);
        ppppppplVar8 = (long *******)((long)&pppppplStack_170 + lVar16);
        param_4 = ppppppplVar8;
      }
      else {
        _malloc();
        param_4 = ppppppplVar8;
        if (ppppppplVar8 == (long *******)0x0) goto LAB_109913be8;
      }
    }
    else {
      pppppplVar5 = (long ******)&pppppplStack_170;
      param_4 = (long *******)0x0;
    }
    pppppplStack_158 = (long ******)*pppppplVar7;
    ppppppplVar9 = (long *******)pppppplVar7[1];
    pppppplVar28 = (long ******)pppppplVar7[2];
    pppplStack_150 = pppppplVar7[3][2];
    uStack_160 = 1;
    ppppppplVar12 = &pppppplStack_158;
    ppppppplVar14 = (long *******)&ppppppplStack_168;
    param_7 = (long ******)0x1;
    uVar31 = param_1;
    ppppppplStack_168 = ppppppplVar8;
    FUN_10990fa5c();
    if ((long *******)0x4000 < ppppppplVar15) {
      ppppppplVar9 = param_4;
      _free();
    }
    pppppplVar25 = pppppplVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
      return;
    }
  }
  else {
LAB_109913be8:
    param_5 = param_6;
    ppppppplVar9 = (long *******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pppppplVar28 = (long ******)PTR___ZTISt9bad_alloc_110346a68;
    ppppppplVar12 = (long *******)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *******)0x4000 < param_3) {
    _free(param_4);
  }
  ppppppplVar8 = ppppppplVar9;
  __Unwind_Resume();
  *(undefined8 *)((long)pppppplVar25 + -0x50) = unaff_d9;
  *(undefined8 *)((long)pppppplVar25 + -0x48) = unaff_d8;
  *(ulong *)((long)pppppplVar25 + -0x40) = unaff_x24;
  *(long ********)((long)pppppplVar25 + -0x38) = ppppppplVar27;
  *(long *******)((long)pppppplVar25 + -0x30) = pppppplVar26;
  *(long ********)((long)pppppplVar25 + -0x28) = param_4;
  *(long ********)((long)pppppplVar25 + -0x20) = ppppppplVar9;
  *(long ********)((long)pppppplVar25 + -0x18) = param_3;
  *(undefined1 ***)((long)pppppplVar25 + -0x10) = &puStack_110;
  *(code **)((long)pppppplVar25 + -8) = FUN_109913c28;
  pppppplVar7 = (long ******)((long)pppppplVar25 + -0x80);
  pppppplVar5 = (long ******)((long)pppppplVar25 + -0x80);
  *(undefined8 *)((long)pppppplVar25 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar15 = ppppppplVar14;
  ppppppplVar9 = param_5;
  uVar32 = uVar31;
  if ((ulong)ppppppplVar12 >> 0x3d == 0) {
    param_3 = ppppppplVar12;
    param_4 = param_5;
    ppppppplVar27 = ppppppplVar8;
    unaff_d8 = uVar31;
    if (pppppplVar28 == (long ******)0x0) {
      pppppplVar26 = (long ******)((long)ppppppplVar12 << 3);
      if (ppppppplVar12 < (long *******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pppppplVar7 = (long ******)
                      ((long)pppppplVar25 +
                      (-0x80 - ((long)pppppplVar26 + 0x1eU & 0xfffffffffffffff0)));
        pppppplVar26 = pppppplVar7;
        pppppplVar28 = pppppplVar7;
      }
      else {
        _malloc();
        pppppplVar28 = pppppplVar26;
        if (pppppplVar26 == (long ******)0x0) goto LAB_109913d40;
      }
    }
    else {
      pppppplVar7 = (long ******)((long)pppppplVar25 + -0x80);
      pppppplVar26 = pppppplVar28;
      pppppplVar28 = (long ******)0x0;
    }
    pppppplVar11 = ppppppplVar8[1];
    pppppplVar10 = ppppppplVar8[2];
    *(long *******)((long)pppppplVar25 + -0x68) = *ppppppplVar8;
    *(long *******)((long)pppppplVar25 + -0x60) = pppppplVar11;
    *(long *******)((long)pppppplVar25 + -0x78) = pppppplVar26;
    *(undefined8 *)((long)pppppplVar25 + -0x70) = 1;
    param_7 = param_5[1];
    puVar13 = (undefined *)((long)pppppplVar25 + -0x68);
    ppppppplVar15 = (long *******)((long)pppppplVar25 + -0x78);
    uVar32 = uVar31;
    FUN_10990fa5c(uVar31);
    if ((long *******)0x4000 < ppppppplVar12) {
      pppppplVar10 = pppppplVar28;
      _free();
    }
    pppppplVar5 = pppppplVar7;
    pppppplVar26 = pppppplVar28;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppppplVar25 + -0x58)) {
      return;
    }
  }
  else {
LAB_109913d40:
    ppppppplVar14 = ppppppplVar9;
    pppppplVar10 = (long ******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pppppplVar11 = (long ******)PTR___ZTISt9bad_alloc_110346a68;
    puVar13 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *******)0x4000 < param_3) {
    _free(pppppplVar26);
  }
  pppppplVar28 = pppppplVar10;
  __Unwind_Resume();
  *(undefined8 *)((long)pppppplVar5 + -0x70) = unaff_d9;
  *(undefined8 *)((long)pppppplVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)pppppplVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pppppplVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)pppppplVar5 + -0x50) = unaff_x26;
  *(long *)((long)pppppplVar5 + -0x48) = unaff_x25;
  *(ulong *)((long)pppppplVar5 + -0x40) = unaff_x24;
  *(long ********)((long)pppppplVar5 + -0x38) = ppppppplVar27;
  *(long *******)((long)pppppplVar5 + -0x30) = pppppplVar26;
  *(long ********)((long)pppppplVar5 + -0x28) = param_4;
  *(long *******)((long)pppppplVar5 + -0x20) = pppppplVar10;
  *(long ********)((long)pppppplVar5 + -0x18) = param_3;
  *(undefined1 **)((long)pppppplVar5 + -0x10) = (undefined1 *)((long)pppppplVar25 + -0x10);
  *(code **)((long)pppppplVar5 + -8) = FUN_109913d80;
  puVar17 = (undefined1 *)((long)pppppplVar5 + -0x170);
  *(undefined8 *)((long)pppppplVar5 + -0x110) = param_9;
  *(undefined8 *)((long)pppppplVar5 + -0xd0) = param_8;
  *(long *******)((long)pppppplVar5 + -0x138) = param_7;
  *(long ********)((long)pppppplVar5 + -0xe8) = ppppppplVar14;
  *(long ********)((long)pppppplVar5 + -0x140) = ppppppplVar15;
  plVar22 = *(long **)((long)pppppplVar5 + 0x10);
  *(undefined8 *)((long)pppppplVar5 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar7 = (long ******)plVar22[3];
  lVar16 = plVar22[4];
  pppppplVar25 = (long ******)plVar22[2];
  pppppplVar26 = pppppplVar25;
  if ((long)pppppplVar28 <= (long)pppppplVar25) {
    pppppplVar26 = pppppplVar28;
  }
  pppppplVar10 = pppppplVar7;
  if ((long)pppppplVar11 <= (long)pppppplVar7) {
    pppppplVar10 = pppppplVar11;
  }
  *(long *)((long)pppppplVar5 + -0xf8) = lVar16;
  *(long *******)((long)pppppplVar5 + -0x120) = pppppplVar26;
  uVar24 = (long)pppppplVar26 * lVar16;
  if (uVar24 >> 0x3d == 0) {
    lVar16 = *plVar22;
    *(long *)((long)pppppplVar5 + -0xa8) = lVar16;
    if (lVar16 == 0) {
      lVar16 = uVar24 * 8;
      if (uVar24 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar17 = (undefined1 *)
                  ((long)pppppplVar5 + (-0x170 - (lVar16 + 0x1eU & 0xfffffffffffffff0)));
        *(undefined1 **)((long)pppppplVar5 + -0x160) = puVar17;
        *(undefined1 **)((long)pppppplVar5 + -0xa8) = puVar17;
      }
      else {
        _malloc();
        *(long *)((long)pppppplVar5 + -0xa8) = lVar16;
        *(long *)((long)pppppplVar5 + -0x160) = lVar16;
        if (lVar16 == 0) goto LAB_10991419c;
      }
    }
    else {
      *(undefined8 *)((long)pppppplVar5 + -0x160) = 0;
      puVar17 = (undefined1 *)((long)pppppplVar5 + -0x170);
    }
    uVar19 = (long)pppppplVar10 * *(long *)((long)pppppplVar5 + -0xf8);
    if (uVar19 >> 0x3d == 0) {
      puVar23 = (undefined1 *)plVar22[1];
      *(ulong *)((long)pppppplVar5 + -0x150) = uVar24;
      *(ulong *)((long)pppppplVar5 + -0x158) = uVar19;
      if (puVar23 == (undefined1 *)0x0) {
        puVar23 = (undefined1 *)(uVar19 * 8);
        if (uVar19 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar17 = puVar17 + -((ulong)(puVar23 + 0x1e) & 0xfffffffffffffff0);
          *(undefined1 **)((long)pppppplVar5 + -0x168) = puVar17;
          puVar23 = puVar17;
          goto LAB_109913f14;
        }
        _malloc();
        *(undefined1 **)((long)pppppplVar5 + -0x168) = puVar23;
        if (puVar23 != (undefined1 *)0x0) goto LAB_109913f14;
      }
      else {
        *(undefined8 *)((long)pppppplVar5 + -0x168) = 0;
LAB_109913f14:
        *(uint *)((long)pppppplVar5 + -0x144) =
             (uint)((*(undefined **)((long)pppppplVar5 + -0xf8) != puVar13 ||
                    (long)pppppplVar28 <= (long)pppppplVar25) ||
                   (long)pppppplVar7 < (long)pppppplVar11);
        if (0 < (long)pppppplVar28) {
          lVar16 = 0;
          *(long *)((long)pppppplVar5 + -0x130) = *(long *)((long)pppppplVar5 + -0x120) << 3;
          *(long *)((long)pppppplVar5 + -0xc0) =
               *(long *)((long)pppppplVar5 + 8) * (long)pppppplVar10 * 8;
          *(long *)((long)pppppplVar5 + -0xb8) = *(long *)((long)pppppplVar5 + 8);
          *(long *)((long)pppppplVar5 + -0x108) = *(long *)((long)pppppplVar5 + -0xf8) << 3;
          *(undefined **)((long)pppppplVar5 + -0x100) = puVar13;
          *(long *)((long)pppppplVar5 + -200) =
               *(long *)((long)pppppplVar5 + -0xd0) * (long)pppppplVar10 * 8;
          *(long *******)((long)pppppplVar5 + -0x128) = pppppplVar28;
          do {
            pppppplVar26 = (long ******)(lVar16 + *(long *)((long)pppppplVar5 + -0x120));
            *(long *******)((long)pppppplVar5 + -0x118) = pppppplVar26;
            if ((long)pppppplVar28 <= (long)pppppplVar26) {
              pppppplVar26 = pppppplVar28;
            }
            if (0 < (long)puVar13) {
              lVar21 = 0;
              *(long *)((long)pppppplVar5 + -0xa0) = (long)pppppplVar26 - lVar16;
              *(long *)((long)pppppplVar5 + -0xf0) =
                   *(long *)((long)pppppplVar5 + -0x140) +
                   lVar16 * *(long *)((long)pppppplVar5 + -0xe8) * 8;
              uVar3 = *(undefined4 *)((long)pppppplVar5 + -0x144);
              if (lVar16 == 0) {
                uVar3 = 1;
              }
              *(undefined4 *)((long)pppppplVar5 + -0xac) = uVar3;
              *(undefined8 *)((long)pppppplVar5 + -0xd8) =
                   *(undefined8 *)((long)pppppplVar5 + -0x138);
              do {
                puVar1 = (undefined *)(lVar21 + *(long *)((long)pppppplVar5 + -0xf8));
                puVar2 = puVar1;
                if ((long)puVar13 <= (long)puVar1) {
                  puVar2 = puVar13;
                }
                lVar16 = (long)puVar2 - lVar21;
                *(long *)((long)pppppplVar5 + -0x98) =
                     *(long *)((long)pppppplVar5 + -0xf0) + lVar21 * 8;
                *(undefined8 *)((long)pppppplVar5 + -0x90) =
                     *(undefined8 *)((long)pppppplVar5 + -0xe8);
                FUN_1098e479c((undefined1 *)((long)pppppplVar5 + -0x81),
                              *(undefined8 *)((long)pppppplVar5 + -0xa8),
                              (undefined1 *)((long)pppppplVar5 + -0x98),lVar16,
                              *(undefined8 *)((long)pppppplVar5 + -0xa0),0,0);
                *(undefined **)((long)pppppplVar5 + -0xe0) = puVar1;
                if (0 < (long)pppppplVar11) {
                  lVar30 = 0;
                  puVar13 = (undefined *)0x0;
                  lVar29 = *(long *)((long)pppppplVar5 + -0xd8);
                  lVar21 = *(long *)((long)pppppplVar5 + -0x110);
                  pppppplVar26 = pppppplVar10;
                  do {
                    pppppplVar7 = pppppplVar11;
                    if ((long)pppppplVar26 <= (long)pppppplVar11) {
                      pppppplVar7 = pppppplVar26;
                    }
                    if (*(int *)((long)pppppplVar5 + -0xac) != 0) {
                      *(long *)((long)pppppplVar5 + -0x98) = lVar29;
                      *(undefined8 *)((long)pppppplVar5 + -0x90) =
                           *(undefined8 *)((long)pppppplVar5 + -0xd0);
                      FUN_1098e46ac((undefined1 *)((long)pppppplVar5 + -0x82),puVar23,
                                    (undefined1 *)((long)pppppplVar5 + -0x98),lVar16,
                                    (undefined *)((long)pppppplVar7 + lVar30),0,0);
                    }
                    *(long *)((long)pppppplVar5 + -0x98) = lVar21;
                    *(undefined8 *)((long)pppppplVar5 + -0x90) =
                         *(undefined8 *)((long)pppppplVar5 + -0xb8);
                    *(undefined8 *)(puVar17 + -0x18) = 0;
                    *(undefined8 *)(puVar17 + -0x10) = 0;
                    *(undefined8 *)(puVar17 + -0x20) = 0xffffffffffffffff;
                    FUN_109404e14(uVar32,(undefined1 *)((long)pppppplVar5 + -0x83),
                                  (undefined1 *)((long)pppppplVar5 + -0x98),
                                  *(undefined8 *)((long)pppppplVar5 + -0xa8),puVar23,
                                  *(undefined8 *)((long)pppppplVar5 + -0xa0),lVar16,
                                  (undefined *)((long)pppppplVar7 + lVar30),0xffffffffffffffff);
                    puVar13 = puVar13 + (long)pppppplVar10;
                    lVar21 = lVar21 + *(long *)((long)pppppplVar5 + -0xc0);
                    lVar29 = lVar29 + *(long *)((long)pppppplVar5 + -200);
                    pppppplVar26 = (long ******)((long)pppppplVar26 + (long)pppppplVar10);
                    lVar30 = lVar30 - (long)pppppplVar10;
                  } while ((long)puVar13 < (long)pppppplVar11);
                }
                puVar13 = *(undefined **)((long)pppppplVar5 + -0x100);
                lVar21 = *(long *)((long)pppppplVar5 + -0xe0);
                *(long *)((long)pppppplVar5 + -0xd8) =
                     *(long *)((long)pppppplVar5 + -0xd8) + *(long *)((long)pppppplVar5 + -0x108);
              } while (lVar21 < (long)puVar13);
            }
            *(long *)((long)pppppplVar5 + -0x110) =
                 *(long *)((long)pppppplVar5 + -0x110) + *(long *)((long)pppppplVar5 + -0x130);
            lVar16 = *(long *)((long)pppppplVar5 + -0x118);
            pppppplVar28 = *(long *******)((long)pppppplVar5 + -0x128);
          } while (lVar16 < (long)pppppplVar28);
        }
        if (0x4000 < *(ulong *)((long)pppppplVar5 + -0x158)) {
          _free(*(undefined8 *)((long)pppppplVar5 + -0x168));
        }
        if (0x4000 < *(ulong *)((long)pppppplVar5 + -0x150)) {
          _free(*(undefined8 *)((long)pppppplVar5 + -0x160));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppppplVar5 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109914204;
    }
  }
  else {
LAB_10991419c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109914204:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109914208);
  (*pcVar4)();
}



/* Entry: 109913ad8; end: 109913c27;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109913ad8(undefined8 param_1,undefined8 *****param_2,undefined8 ******param_3,
                  undefined8 ******param_4,undefined8 ******param_5,undefined8 ******param_6,
                  undefined8 *****param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *****pppppuVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined *puVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *****pppppuVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 ******unaff_x19;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined8 ******unaff_x21;
  undefined8 *****pppppuVar24;
  undefined8 *****unaff_x22;
  undefined8 ******unaff_x23;
  undefined8 unaff_x24;
  undefined8 *****pppppuVar25;
  undefined8 unaff_x25;
  long lVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 ******appppppuStack_70 [4];
  undefined8 ***pppuStack_50;
  long lStack_48;
  
  ppppppuVar6 = appppppuStack_70;
  ppppppuVar7 = appppppuStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar13 = param_5;
  uVar28 = param_1;
  if ((ulong)param_4 >> 0x3d == 0) {
    unaff_x22 = param_2;
    unaff_x19 = param_4;
    unaff_d8 = param_1;
    if (param_3 == (undefined8 ******)0x0) {
      param_3 = (undefined8 ******)((long)param_4 << 3);
      if (param_4 < (undefined8 ******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar17 = -((ulong)((long)param_3 + 0x1eU) & 0xfffffffffffffff0);
        ppppppuVar6 = (undefined8 ******)((long)appppppuStack_70 + lVar17);
        param_3 = (undefined8 ******)((long)appppppuStack_70 + lVar17);
        unaff_x21 = param_3;
      }
      else {
        _malloc();
        unaff_x21 = param_3;
        if (param_3 == (undefined8 ******)0x0) goto LAB_109913be8;
      }
    }
    else {
      ppppppuVar6 = appppppuStack_70;
      unaff_x21 = (undefined8 ******)0x0;
    }
    appppppuStack_70[3] = (undefined8 ******)*param_2;
    ppppppuVar14 = (undefined8 ******)param_2[1];
    pppppuVar9 = (undefined8 *****)param_2[2];
    pppuStack_50 = param_2[3][2];
    appppppuStack_70[2] = (undefined8 ******)0x1;
    ppppppuVar11 = appppppuStack_70 + 3;
    ppppppuVar13 = appppppuStack_70 + 1;
    param_7 = (undefined8 *****)0x1;
    uVar28 = param_1;
    appppppuStack_70[1] = param_3;
    FUN_10990fa5c();
    if ((undefined8 ******)0x4000 < param_4) {
      ppppppuVar14 = unaff_x21;
      _free();
    }
    ppppppuVar7 = ppppppuVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  else {
LAB_109913be8:
    param_5 = param_6;
    ppppppuVar14 = (undefined8 ******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pppppuVar9 = (undefined8 *****)PTR___ZTISt9bad_alloc_110346a68;
    ppppppuVar11 = (undefined8 ******)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((undefined8 ******)0x4000 < unaff_x19) {
    _free(unaff_x21);
  }
  ppppppuVar6 = ppppppuVar14;
  __Unwind_Resume();
  *(undefined8 *)((long)ppppppuVar7 + -0x50) = unaff_d9;
  *(undefined8 *)((long)ppppppuVar7 + -0x48) = unaff_d8;
  *(undefined8 *)((long)ppppppuVar7 + -0x40) = unaff_x24;
  *(undefined8 *******)((long)ppppppuVar7 + -0x38) = unaff_x23;
  *(undefined8 ******)((long)ppppppuVar7 + -0x30) = unaff_x22;
  *(undefined8 *******)((long)ppppppuVar7 + -0x28) = unaff_x21;
  *(undefined8 *******)((long)ppppppuVar7 + -0x20) = ppppppuVar14;
  *(undefined8 *******)((long)ppppppuVar7 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppppppuVar7 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppppppuVar7 + -8) = FUN_109913c28;
  pppppuVar16 = (undefined8 *****)((long)ppppppuVar7 + -0x80);
  pppppuVar8 = (undefined8 *****)((long)ppppppuVar7 + -0x80);
  *(undefined8 *)((long)ppppppuVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar14 = ppppppuVar13;
  ppppppuVar15 = param_5;
  uVar29 = uVar28;
  if ((ulong)ppppppuVar11 >> 0x3d == 0) {
    unaff_x19 = ppppppuVar11;
    unaff_x21 = param_5;
    unaff_x23 = ppppppuVar6;
    unaff_d8 = uVar28;
    if (pppppuVar9 == (undefined8 *****)0x0) {
      unaff_x22 = (undefined8 *****)((long)ppppppuVar11 << 3);
      if (ppppppuVar11 < (undefined8 ******)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pppppuVar16 = (undefined8 *****)
                      ((long)ppppppuVar7 + (-0x80 - ((long)unaff_x22 + 0x1eU & 0xfffffffffffffff0)))
        ;
        unaff_x22 = pppppuVar16;
        pppppuVar9 = pppppuVar16;
      }
      else {
        _malloc();
        pppppuVar9 = unaff_x22;
        if (unaff_x22 == (undefined8 *****)0x0) goto LAB_109913d40;
      }
    }
    else {
      pppppuVar16 = (undefined8 *****)((long)ppppppuVar7 + -0x80);
      unaff_x22 = pppppuVar9;
      pppppuVar9 = (undefined8 *****)0x0;
    }
    pppppuVar10 = ppppppuVar6[1];
    pppppuVar24 = ppppppuVar6[2];
    *(undefined8 ******)((long)ppppppuVar7 + -0x68) = *ppppppuVar6;
    *(undefined8 ******)((long)ppppppuVar7 + -0x60) = pppppuVar10;
    *(undefined8 ******)((long)ppppppuVar7 + -0x78) = unaff_x22;
    *(undefined8 *)((long)ppppppuVar7 + -0x70) = 1;
    param_7 = param_5[1];
    puVar12 = (undefined *)((long)ppppppuVar7 + -0x68);
    ppppppuVar14 = (undefined8 ******)((long)ppppppuVar7 + -0x78);
    uVar29 = uVar28;
    FUN_10990fa5c(uVar28);
    if ((undefined8 ******)0x4000 < ppppppuVar11) {
      pppppuVar24 = pppppuVar9;
      _free();
    }
    pppppuVar8 = pppppuVar16;
    unaff_x22 = pppppuVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppppppuVar7 + -0x58)) {
      return;
    }
  }
  else {
LAB_109913d40:
    ppppppuVar13 = ppppppuVar15;
    pppppuVar24 = (undefined8 *****)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pppppuVar10 = (undefined8 *****)PTR___ZTISt9bad_alloc_110346a68;
    puVar12 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((undefined8 ******)0x4000 < unaff_x19) {
    _free(unaff_x22);
  }
  pppppuVar25 = pppppuVar24;
  __Unwind_Resume();
  *(undefined8 *)((long)pppppuVar8 + -0x70) = unaff_d9;
  *(undefined8 *)((long)pppppuVar8 + -0x68) = unaff_d8;
  *(undefined8 *)((long)pppppuVar8 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pppppuVar8 + -0x58) = unaff_x27;
  *(undefined8 *)((long)pppppuVar8 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pppppuVar8 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pppppuVar8 + -0x40) = unaff_x24;
  *(undefined8 *******)((long)pppppuVar8 + -0x38) = unaff_x23;
  *(undefined8 ******)((long)pppppuVar8 + -0x30) = unaff_x22;
  *(undefined8 *******)((long)pppppuVar8 + -0x28) = unaff_x21;
  *(undefined8 ******)((long)pppppuVar8 + -0x20) = pppppuVar24;
  *(undefined8 *******)((long)pppppuVar8 + -0x18) = unaff_x19;
  *(undefined1 **)((long)pppppuVar8 + -0x10) = (undefined1 *)((long)ppppppuVar7 + -0x10);
  *(code **)((long)pppppuVar8 + -8) = FUN_109913d80;
  puVar18 = (undefined1 *)((long)pppppuVar8 + -0x170);
  *(undefined8 *)((long)pppppuVar8 + -0x110) = param_9;
  *(undefined8 *)((long)pppppuVar8 + -0xd0) = param_8;
  *(undefined8 ******)((long)pppppuVar8 + -0x138) = param_7;
  *(undefined8 *******)((long)pppppuVar8 + -0xe8) = ppppppuVar13;
  *(undefined8 *******)((long)pppppuVar8 + -0x140) = ppppppuVar14;
  plVar21 = *(long **)((long)pppppuVar8 + 0x10);
  *(undefined8 *)((long)pppppuVar8 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar16 = (undefined8 *****)plVar21[3];
  lVar17 = plVar21[4];
  pppppuVar24 = (undefined8 *****)plVar21[2];
  pppppuVar9 = pppppuVar24;
  if ((long)pppppuVar25 <= (long)pppppuVar24) {
    pppppuVar9 = pppppuVar25;
  }
  pppppuVar2 = pppppuVar16;
  if ((long)pppppuVar10 <= (long)pppppuVar16) {
    pppppuVar2 = pppppuVar10;
  }
  *(long *)((long)pppppuVar8 + -0xf8) = lVar17;
  *(undefined8 ******)((long)pppppuVar8 + -0x120) = pppppuVar9;
  uVar23 = (long)pppppuVar9 * lVar17;
  if (uVar23 >> 0x3d == 0) {
    lVar17 = *plVar21;
    *(long *)((long)pppppuVar8 + -0xa8) = lVar17;
    if (lVar17 == 0) {
      lVar17 = uVar23 * 8;
      if (uVar23 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar18 = (undefined1 *)
                  ((long)pppppuVar8 + (-0x170 - (lVar17 + 0x1eU & 0xfffffffffffffff0)));
        *(undefined1 **)((long)pppppuVar8 + -0x160) = puVar18;
        *(undefined1 **)((long)pppppuVar8 + -0xa8) = puVar18;
      }
      else {
        _malloc();
        *(long *)((long)pppppuVar8 + -0xa8) = lVar17;
        *(long *)((long)pppppuVar8 + -0x160) = lVar17;
        if (lVar17 == 0) goto LAB_10991419c;
      }
    }
    else {
      *(undefined8 *)((long)pppppuVar8 + -0x160) = 0;
      puVar18 = (undefined1 *)((long)pppppuVar8 + -0x170);
    }
    uVar19 = (long)pppppuVar2 * *(long *)((long)pppppuVar8 + -0xf8);
    if (uVar19 >> 0x3d == 0) {
      puVar22 = (undefined1 *)plVar21[1];
      *(ulong *)((long)pppppuVar8 + -0x150) = uVar23;
      *(ulong *)((long)pppppuVar8 + -0x158) = uVar19;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = (undefined1 *)(uVar19 * 8);
        if (uVar19 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar18 = puVar18 + -((ulong)(puVar22 + 0x1e) & 0xfffffffffffffff0);
          *(undefined1 **)((long)pppppuVar8 + -0x168) = puVar18;
          puVar22 = puVar18;
          goto LAB_109913f14;
        }
        _malloc();
        *(undefined1 **)((long)pppppuVar8 + -0x168) = puVar22;
        if (puVar22 != (undefined1 *)0x0) goto LAB_109913f14;
      }
      else {
        *(undefined8 *)((long)pppppuVar8 + -0x168) = 0;
LAB_109913f14:
        *(uint *)((long)pppppuVar8 + -0x144) =
             (uint)((*(undefined **)((long)pppppuVar8 + -0xf8) != puVar12 ||
                    (long)pppppuVar25 <= (long)pppppuVar24) || (long)pppppuVar16 < (long)pppppuVar10
                   );
        if (0 < (long)pppppuVar25) {
          lVar17 = 0;
          *(long *)((long)pppppuVar8 + -0x130) = *(long *)((long)pppppuVar8 + -0x120) << 3;
          *(long *)((long)pppppuVar8 + -0xc0) =
               *(long *)((long)pppppuVar8 + 8) * (long)pppppuVar2 * 8;
          *(long *)((long)pppppuVar8 + -0xb8) = *(long *)((long)pppppuVar8 + 8);
          *(long *)((long)pppppuVar8 + -0x108) = *(long *)((long)pppppuVar8 + -0xf8) << 3;
          *(undefined **)((long)pppppuVar8 + -0x100) = puVar12;
          *(long *)((long)pppppuVar8 + -200) =
               *(long *)((long)pppppuVar8 + -0xd0) * (long)pppppuVar2 * 8;
          *(undefined8 ******)((long)pppppuVar8 + -0x128) = pppppuVar25;
          do {
            pppppuVar9 = (undefined8 *****)(lVar17 + *(long *)((long)pppppuVar8 + -0x120));
            *(undefined8 ******)((long)pppppuVar8 + -0x118) = pppppuVar9;
            if ((long)pppppuVar25 <= (long)pppppuVar9) {
              pppppuVar9 = pppppuVar25;
            }
            if (0 < (long)puVar12) {
              lVar20 = 0;
              *(long *)((long)pppppuVar8 + -0xa0) = (long)pppppuVar9 - lVar17;
              *(long *)((long)pppppuVar8 + -0xf0) =
                   *(long *)((long)pppppuVar8 + -0x140) +
                   lVar17 * *(long *)((long)pppppuVar8 + -0xe8) * 8;
              uVar4 = *(undefined4 *)((long)pppppuVar8 + -0x144);
              if (lVar17 == 0) {
                uVar4 = 1;
              }
              *(undefined4 *)((long)pppppuVar8 + -0xac) = uVar4;
              *(undefined8 *)((long)pppppuVar8 + -0xd8) = *(undefined8 *)((long)pppppuVar8 + -0x138)
              ;
              do {
                puVar1 = (undefined *)(lVar20 + *(long *)((long)pppppuVar8 + -0xf8));
                puVar3 = puVar1;
                if ((long)puVar12 <= (long)puVar1) {
                  puVar3 = puVar12;
                }
                lVar17 = (long)puVar3 - lVar20;
                *(long *)((long)pppppuVar8 + -0x98) =
                     *(long *)((long)pppppuVar8 + -0xf0) + lVar20 * 8;
                *(undefined8 *)((long)pppppuVar8 + -0x90) =
                     *(undefined8 *)((long)pppppuVar8 + -0xe8);
                FUN_1098e479c((undefined1 *)((long)pppppuVar8 + -0x81),
                              *(undefined8 *)((long)pppppuVar8 + -0xa8),
                              (undefined1 *)((long)pppppuVar8 + -0x98),lVar17,
                              *(undefined8 *)((long)pppppuVar8 + -0xa0),0,0);
                *(undefined **)((long)pppppuVar8 + -0xe0) = puVar1;
                if (0 < (long)pppppuVar10) {
                  lVar27 = 0;
                  puVar12 = (undefined *)0x0;
                  lVar26 = *(long *)((long)pppppuVar8 + -0xd8);
                  lVar20 = *(long *)((long)pppppuVar8 + -0x110);
                  pppppuVar9 = pppppuVar2;
                  do {
                    pppppuVar16 = pppppuVar10;
                    if ((long)pppppuVar9 <= (long)pppppuVar10) {
                      pppppuVar16 = pppppuVar9;
                    }
                    if (*(int *)((long)pppppuVar8 + -0xac) != 0) {
                      *(long *)((long)pppppuVar8 + -0x98) = lVar26;
                      *(undefined8 *)((long)pppppuVar8 + -0x90) =
                           *(undefined8 *)((long)pppppuVar8 + -0xd0);
                      FUN_1098e46ac((undefined1 *)((long)pppppuVar8 + -0x82),puVar22,
                                    (undefined1 *)((long)pppppuVar8 + -0x98),lVar17,
                                    (undefined *)((long)pppppuVar16 + lVar27),0,0);
                    }
                    *(long *)((long)pppppuVar8 + -0x98) = lVar20;
                    *(undefined8 *)((long)pppppuVar8 + -0x90) =
                         *(undefined8 *)((long)pppppuVar8 + -0xb8);
                    *(undefined8 *)(puVar18 + -0x18) = 0;
                    *(undefined8 *)(puVar18 + -0x10) = 0;
                    *(undefined8 *)(puVar18 + -0x20) = 0xffffffffffffffff;
                    FUN_109404e14(uVar29,(undefined1 *)((long)pppppuVar8 + -0x83),
                                  (undefined1 *)((long)pppppuVar8 + -0x98),
                                  *(undefined8 *)((long)pppppuVar8 + -0xa8),puVar22,
                                  *(undefined8 *)((long)pppppuVar8 + -0xa0),lVar17,
                                  (undefined *)((long)pppppuVar16 + lVar27),0xffffffffffffffff);
                    puVar12 = puVar12 + (long)pppppuVar2;
                    lVar20 = lVar20 + *(long *)((long)pppppuVar8 + -0xc0);
                    lVar26 = lVar26 + *(long *)((long)pppppuVar8 + -200);
                    pppppuVar9 = (undefined8 *****)((long)pppppuVar9 + (long)pppppuVar2);
                    lVar27 = lVar27 - (long)pppppuVar2;
                  } while ((long)puVar12 < (long)pppppuVar10);
                }
                puVar12 = *(undefined **)((long)pppppuVar8 + -0x100);
                lVar20 = *(long *)((long)pppppuVar8 + -0xe0);
                *(long *)((long)pppppuVar8 + -0xd8) =
                     *(long *)((long)pppppuVar8 + -0xd8) + *(long *)((long)pppppuVar8 + -0x108);
              } while (lVar20 < (long)puVar12);
            }
            *(long *)((long)pppppuVar8 + -0x110) =
                 *(long *)((long)pppppuVar8 + -0x110) + *(long *)((long)pppppuVar8 + -0x130);
            lVar17 = *(long *)((long)pppppuVar8 + -0x118);
            pppppuVar25 = *(undefined8 ******)((long)pppppuVar8 + -0x128);
          } while (lVar17 < (long)pppppuVar25);
        }
        if (0x4000 < *(ulong *)((long)pppppuVar8 + -0x158)) {
          _free(*(undefined8 *)((long)pppppuVar8 + -0x168));
        }
        if (0x4000 < *(ulong *)((long)pppppuVar8 + -0x150)) {
          _free(*(undefined8 *)((long)pppppuVar8 + -0x160));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppppuVar8 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109914204;
    }
  }
  else {
LAB_10991419c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109914204:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109914208);
  (*pcVar5)();
}



/* Entry: 109913c28; end: 109913d7f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109913c28(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,ulong param_4,
                  undefined1 **param_5,undefined1 **param_6,undefined1 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong unaff_x19;
  long *plVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined1 **unaff_x21;
  undefined1 *puVar18;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined8 unaff_x25;
  long lVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined *puVar21;
  undefined8 unaff_x28;
  long lVar22;
  undefined8 uVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar15 = auStack_80;
  puVar6 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_5;
  ppuVar8 = param_6;
  uVar23 = param_1;
  if (param_4 >> 0x3d == 0) {
    unaff_x19 = param_4;
    unaff_x21 = param_6;
    unaff_x23 = param_2;
    unaff_d8 = param_1;
    if (param_3 == (undefined1 *)0x0) {
      param_3 = (undefined1 *)(param_4 << 3);
      if (param_4 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar15 = auStack_80 + -((ulong)(param_3 + 0x1e) & 0xfffffffffffffff0);
        param_3 = auStack_80 + -((ulong)(param_3 + 0x1e) & 0xfffffffffffffff0);
        unaff_x22 = param_3;
      }
      else {
        _malloc();
        unaff_x22 = param_3;
        if (param_3 == (undefined1 *)0x0) goto LAB_109913d40;
      }
    }
    else {
      puVar15 = auStack_80;
      unaff_x22 = (undefined1 *)0x0;
    }
    puVar7 = (undefined *)param_2[1];
    puVar11 = (undefined1 *)param_2[2];
    puStack_68 = (undefined1 *)*param_2;
    uStack_70 = 1;
    param_7 = param_6[1];
    ppuVar8 = &puStack_68;
    ppuVar9 = &puStack_78;
    uVar23 = param_1;
    puStack_78 = param_3;
    puStack_60 = puVar7;
    FUN_10990fa5c(param_1);
    if (0x4000 < param_4) {
      puVar11 = unaff_x22;
      _free();
    }
    puVar6 = puVar15;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
LAB_109913d40:
    param_5 = ppuVar8;
    puVar11 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar7 = PTR___ZTISt9bad_alloc_110346a68;
    ppuVar8 = (undefined1 **)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < unaff_x19) {
    _free(unaff_x22);
  }
  puVar19 = puVar11;
  __Unwind_Resume();
  *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar6 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar6 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar6 + -0x30) = unaff_x22;
  *(undefined1 ***)(puVar6 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar6 + -0x20) = puVar11;
  *(ulong *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar6 + -8) = FUN_109913d80;
  puVar11 = puVar6 + -0x170;
  *(undefined8 *)(puVar6 + -0x110) = param_9;
  *(undefined8 *)(puVar6 + -0xd0) = param_8;
  *(undefined1 **)(puVar6 + -0x138) = param_7;
  *(undefined1 ***)(puVar6 + -0xe8) = param_5;
  *(undefined1 ***)(puVar6 + -0x140) = ppuVar9;
  plVar14 = *(long **)(puVar6 + 0x10);
  *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (undefined *)plVar14[3];
  lVar10 = plVar14[4];
  puVar18 = (undefined1 *)plVar14[2];
  puVar15 = puVar18;
  if ((long)puVar19 <= (long)puVar18) {
    puVar15 = puVar19;
  }
  puVar1 = puVar21;
  if ((long)puVar7 <= (long)puVar21) {
    puVar1 = puVar7;
  }
  *(long *)(puVar6 + -0xf8) = lVar10;
  *(undefined1 **)(puVar6 + -0x120) = puVar15;
  uVar16 = (long)puVar15 * lVar10;
  if (uVar16 >> 0x3d == 0) {
    lVar10 = *plVar14;
    *(long *)(puVar6 + -0xa8) = lVar10;
    if (lVar10 == 0) {
      lVar10 = uVar16 * 8;
      if (uVar16 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar11 = puVar6 + (-0x170 - (lVar10 + 0x1eU & 0xfffffffffffffff0));
        *(undefined1 **)(puVar6 + -0x160) = puVar11;
        *(undefined1 **)(puVar6 + -0xa8) = puVar11;
      }
      else {
        _malloc();
        *(long *)(puVar6 + -0xa8) = lVar10;
        *(long *)(puVar6 + -0x160) = lVar10;
        if (lVar10 == 0) goto LAB_10991419c;
      }
    }
    else {
      *(undefined8 *)(puVar6 + -0x160) = 0;
      puVar11 = puVar6 + -0x170;
    }
    uVar12 = (long)puVar1 * *(long *)(puVar6 + -0xf8);
    if (uVar12 >> 0x3d == 0) {
      puVar15 = (undefined1 *)plVar14[1];
      *(ulong *)(puVar6 + -0x150) = uVar16;
      *(ulong *)(puVar6 + -0x158) = uVar12;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)(uVar12 * 8);
        if (uVar12 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar11 = puVar11 + -((ulong)(puVar15 + 0x1e) & 0xfffffffffffffff0);
          *(undefined1 **)(puVar6 + -0x168) = puVar11;
          puVar15 = puVar11;
          goto LAB_109913f14;
        }
        _malloc();
        *(undefined1 **)(puVar6 + -0x168) = puVar15;
        if (puVar15 != (undefined1 *)0x0) goto LAB_109913f14;
      }
      else {
        *(undefined8 *)(puVar6 + -0x168) = 0;
LAB_109913f14:
        *(uint *)(puVar6 + -0x144) =
             (uint)((*(undefined1 ***)(puVar6 + -0xf8) != ppuVar8 || (long)puVar19 <= (long)puVar18)
                   || (long)puVar21 < (long)puVar7);
        if (0 < (long)puVar19) {
          lVar10 = 0;
          *(long *)(puVar6 + -0x130) = *(long *)(puVar6 + -0x120) << 3;
          *(long *)(puVar6 + -0xc0) = *(long *)(puVar6 + 8) * (long)puVar1 * 8;
          *(long *)(puVar6 + -0xb8) = *(long *)(puVar6 + 8);
          *(long *)(puVar6 + -0x108) = *(long *)(puVar6 + -0xf8) << 3;
          *(undefined1 ***)(puVar6 + -0x100) = ppuVar8;
          *(long *)(puVar6 + -200) = *(long *)(puVar6 + -0xd0) * (long)puVar1 * 8;
          *(undefined1 **)(puVar6 + -0x128) = puVar19;
          do {
            puVar18 = (undefined1 *)(lVar10 + *(long *)(puVar6 + -0x120));
            *(undefined1 **)(puVar6 + -0x118) = puVar18;
            if ((long)puVar19 <= (long)puVar18) {
              puVar18 = puVar19;
            }
            if (0 < (long)ppuVar8) {
              lVar13 = 0;
              *(long *)(puVar6 + -0xa0) = (long)puVar18 - lVar10;
              *(long *)(puVar6 + -0xf0) =
                   *(long *)(puVar6 + -0x140) + lVar10 * *(long *)(puVar6 + -0xe8) * 8;
              uVar4 = *(undefined4 *)(puVar6 + -0x144);
              if (lVar10 == 0) {
                uVar4 = 1;
              }
              *(undefined4 *)(puVar6 + -0xac) = uVar4;
              *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(puVar6 + -0x138);
              do {
                ppuVar9 = (undefined1 **)(lVar13 + *(long *)(puVar6 + -0xf8));
                ppuVar2 = ppuVar9;
                if ((long)ppuVar8 <= (long)ppuVar9) {
                  ppuVar2 = ppuVar8;
                }
                lVar10 = (long)ppuVar2 - lVar13;
                *(long *)(puVar6 + -0x98) = *(long *)(puVar6 + -0xf0) + lVar13 * 8;
                *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0xe8);
                FUN_1098e479c(puVar6 + -0x81,*(undefined8 *)(puVar6 + -0xa8),puVar6 + -0x98,lVar10,
                              *(undefined8 *)(puVar6 + -0xa0),0,0);
                *(undefined1 ***)(puVar6 + -0xe0) = ppuVar9;
                if (0 < (long)puVar7) {
                  lVar22 = 0;
                  puVar21 = (undefined *)0x0;
                  lVar20 = *(long *)(puVar6 + -0xd8);
                  lVar13 = *(long *)(puVar6 + -0x110);
                  puVar17 = puVar1;
                  do {
                    puVar3 = puVar7;
                    if ((long)puVar17 <= (long)puVar7) {
                      puVar3 = puVar17;
                    }
                    if (*(int *)(puVar6 + -0xac) != 0) {
                      *(long *)(puVar6 + -0x98) = lVar20;
                      *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0xd0);
                      FUN_1098e46ac(puVar6 + -0x82,puVar15,puVar6 + -0x98,lVar10,puVar3 + lVar22,0,0
                                   );
                    }
                    *(long *)(puVar6 + -0x98) = lVar13;
                    *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0xb8);
                    *(undefined8 *)(puVar11 + -0x18) = 0;
                    *(undefined8 *)(puVar11 + -0x10) = 0;
                    *(undefined8 *)(puVar11 + -0x20) = 0xffffffffffffffff;
                    FUN_109404e14(uVar23,puVar6 + -0x83,puVar6 + -0x98,
                                  *(undefined8 *)(puVar6 + -0xa8),puVar15,
                                  *(undefined8 *)(puVar6 + -0xa0),lVar10,puVar3 + lVar22,
                                  0xffffffffffffffff);
                    puVar21 = puVar21 + (long)puVar1;
                    lVar13 = lVar13 + *(long *)(puVar6 + -0xc0);
                    lVar20 = lVar20 + *(long *)(puVar6 + -200);
                    puVar17 = puVar17 + (long)puVar1;
                    lVar22 = lVar22 - (long)puVar1;
                  } while ((long)puVar21 < (long)puVar7);
                }
                ppuVar8 = *(undefined1 ***)(puVar6 + -0x100);
                lVar13 = *(long *)(puVar6 + -0xe0);
                *(long *)(puVar6 + -0xd8) = *(long *)(puVar6 + -0xd8) + *(long *)(puVar6 + -0x108);
              } while (lVar13 < (long)ppuVar8);
            }
            *(long *)(puVar6 + -0x110) = *(long *)(puVar6 + -0x110) + *(long *)(puVar6 + -0x130);
            lVar10 = *(long *)(puVar6 + -0x118);
            puVar19 = *(undefined1 **)(puVar6 + -0x128);
          } while (lVar10 < (long)puVar19);
        }
        if (0x4000 < *(ulong *)(puVar6 + -0x158)) {
          _free(*(undefined8 *)(puVar6 + -0x168));
        }
        if (0x4000 < *(ulong *)(puVar6 + -0x150)) {
          _free(*(undefined8 *)(puVar6 + -0x160));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109914204;
    }
  }
  else {
LAB_10991419c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109914204:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109914208);
  (*pcVar5)();
}



/* Entry: 109913d80; end: 10991426b;  */

void FUN_109913d80(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,undefined4 param_10,
                  undefined4 param_11,long param_12,undefined8 *param_13)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_170 [8];
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  uint uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  puVar5 = auStack_170;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_13[3];
  lStack_f8 = param_13[4];
  lVar9 = param_13[2];
  lStack_120 = lVar9;
  if (param_2 <= lVar9) {
    lStack_120 = param_2;
  }
  lVar1 = lVar12;
  if (param_3 <= lVar12) {
    lVar1 = param_3;
  }
  uVar7 = lStack_120 * lStack_f8;
  lStack_140 = param_5;
  lStack_138 = param_7;
  lStack_110 = param_9;
  lStack_e8 = param_6;
  lStack_d0 = param_8;
  if (uVar7 >> 0x3d == 0) {
    puStack_a8 = (undefined1 *)*param_13;
    if (puStack_a8 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar7 * 8);
      if (uVar7 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar5 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_160 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_a8 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_160 = puVar4;
        puStack_a8 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_10991419c;
      }
    }
    else {
      puStack_160 = (undefined1 *)0x0;
      puVar5 = auStack_170;
    }
    uVar6 = lVar1 * lStack_f8;
    if (uVar6 >> 0x3d == 0) {
      uStack_158 = uVar6;
      uStack_150 = uVar7;
      if ((undefined1 *)param_13[1] == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(uVar6 * 8);
        if (uVar6 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar5 = puVar5 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
          puVar4 = puVar5;
          puStack_168 = puVar5;
          goto LAB_109913f14;
        }
        _malloc();
        puStack_168 = puVar4;
        if (puVar4 != (undefined1 *)0x0) goto LAB_109913f14;
      }
      else {
        puStack_168 = (undefined1 *)0x0;
        puVar4 = (undefined1 *)param_13[1];
LAB_109913f14:
        uStack_144 = (uint)((lStack_f8 != param_4 || param_2 <= lVar9) || lVar12 < param_3);
        if (0 < param_2) {
          lStack_118 = 0;
          lStack_130 = lStack_120 << 3;
          lStack_c0 = param_12 * lVar1 * 8;
          lStack_b8 = param_12;
          lStack_108 = lStack_f8 << 3;
          lStack_c8 = lStack_d0 * lVar1 * 8;
          lStack_128 = param_2;
          lStack_100 = param_4;
          do {
            lVar12 = lStack_118 + lStack_120;
            lVar9 = lVar12;
            if (lStack_128 <= lVar12) {
              lVar9 = lStack_128;
            }
            if (0 < param_4) {
              lStack_a0 = lVar9 - lStack_118;
              lStack_f0 = lStack_140 + lStack_118 * lStack_e8 * 8;
              uStack_ac = uStack_144;
              if (lStack_118 == 0) {
                uStack_ac = 1;
              }
              lStack_d8 = lStack_138;
              lVar9 = 0;
              lStack_118 = lVar12;
              do {
                lVar12 = lVar9 + lStack_f8;
                lVar10 = lVar12;
                if (param_4 <= lVar12) {
                  lVar10 = param_4;
                }
                lVar10 = lVar10 - lVar9;
                lStack_98 = lStack_f0 + lVar9 * 8;
                lStack_90 = lStack_e8;
                FUN_1098e479c(&uStack_81,puStack_a8,&lStack_98,lVar10,lStack_a0,0,0);
                lStack_e0 = lVar12;
                if (0 < param_3) {
                  lVar13 = 0;
                  lVar12 = 0;
                  lVar8 = lVar1;
                  lVar9 = lStack_110;
                  lVar11 = lStack_d8;
                  do {
                    lVar2 = param_3;
                    if (lVar8 <= param_3) {
                      lVar2 = lVar8;
                    }
                    if (uStack_ac != 0) {
                      lStack_90 = lStack_d0;
                      lStack_98 = lVar11;
                      FUN_1098e46ac(&uStack_82,puVar4,&lStack_98,lVar10,lVar2 + lVar13,0,0);
                    }
                    lStack_90 = lStack_b8;
                    lStack_98 = lVar9;
                    *(undefined8 *)(puVar5 + -0x18) = 0;
                    *(undefined8 *)(puVar5 + -0x10) = 0;
                    *(undefined8 *)(puVar5 + -0x20) = 0xffffffffffffffff;
                    FUN_109404e14(param_1,&uStack_83,&lStack_98,puStack_a8,puVar4,lStack_a0,lVar10,
                                  lVar2 + lVar13,0xffffffffffffffff);
                    lVar12 = lVar12 + lVar1;
                    lVar9 = lVar9 + lStack_c0;
                    lVar11 = lVar11 + lStack_c8;
                    lVar8 = lVar8 + lVar1;
                    lVar13 = lVar13 - lVar1;
                  } while (lVar12 < param_3);
                }
                lStack_d8 = lStack_d8 + lStack_108;
                lVar9 = lStack_e0;
                param_4 = lStack_100;
                lVar12 = lStack_118;
              } while (lStack_e0 < lStack_100);
            }
            lStack_118 = lVar12;
            lStack_110 = lStack_110 + lStack_130;
          } while (lStack_118 < lStack_128);
        }
        if (0x4000 < uStack_158) {
          _free(puStack_168);
        }
        if (0x4000 < uStack_150) {
          _free(puStack_160);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109914204;
    }
  }
  else {
LAB_10991419c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109914204:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109914208);
  (*pcVar3)();
}



/* Entry: 10991426c; end: 109914273;  */

void FUN_10991426c(void)

{
  return;
}



/* Entry: 109914274; end: 1099142c3;  */

void FUN_109914274(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = &PTR_FUN_110b1d1e0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



/* Entry: 1099142c4; end: 1099142fb;  */

void FUN_1099142c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_110b1d1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[7] = *(undefined8 *)(param_1 + 0x38);
  param_2[6] = uVar6;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1099142fc; end: 109914da3;  */

/* WARNING: Removing unreachable block (ram,0x000109914dd8) */

long FUN_1099142fc(long param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  double **ppdVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double *pdVar15;
  double *pdVar16;
  uint uVar17;
  code *pcVar18;
  double **ppdVar19;
  long lVar20;
  double *pdVar21;
  double *pdVar22;
  ulong uVar23;
  ulong uVar24;
  double *pdVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  double *pdVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  double **ppdVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  long lVar46;
  int iVar47;
  int iVar48;
  long lVar49;
  ulong uVar50;
  long *plVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  double *pdVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double *pdVar63;
  double *pdVar64;
  double *pdVar65;
  double dVar66;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  double *pdStack_c0;
  ulong uStack_b8;
  ulong uStack_80;
  double **ppdStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = *(long *)(param_1 + 8);
  piVar1 = (int *)(*(long *)(lVar32 + 0x38) + (long)*param_2 * 0x20);
  puVar2 = (uint *)(*(long *)**(long **)(param_1 + 0x10) +
                   (long)**(int **)(((long *)**(long **)(param_1 + 0x10))[3] +
                                    (long)piVar1[1] * 0x20 + 8) * 8);
  lVar49 = **(long **)(param_1 + 0x18);
  uVar8 = *puVar2;
  uVar9 = (ulong)(int)uVar8;
  lVar10 = (long)(int)puVar2[1];
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (uVar8 != 0) {
    lVar52 = 0;
    if (uVar9 != 0) {
      lVar52 = 0x7fffffffffffffff / (long)uVar9;
    }
    if ((long)uVar9 <= lVar52 && (ulong)((long)(int)uVar8 * (long)(int)uVar8) >> 0x3d == 0) {
      lVar52 = (long)(int)uVar8 * (long)(int)uVar8 * 8;
      _malloc();
      if (lVar52 != 0) {
        lVar27 = **(long **)(param_1 + 0x20);
        lStack_d8 = lVar52;
        if (lVar27 != 0) goto LAB_1099143dc;
        uStack_d0 = uVar9;
        uStack_c8 = uVar9;
        _bzero();
        goto LAB_1099143ec;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_109914d44;
  }
  lVar27 = **(long **)(param_1 + 0x20);
  uStack_d0 = uVar9;
  uStack_c8 = uVar9;
  if (lVar27 != 0) {
LAB_1099143dc:
    uStack_d0 = uVar9;
    uStack_c8 = uVar9;
    FUN_1099091a4(&lStack_d8,lVar27 + lVar10 * 8,uVar9);
  }
LAB_1099143ec:
  pdVar30 = (double *)(lVar49 + lVar10 * 8);
  if (0 < *piVar1) {
    iVar33 = 0;
    iVar13 = uVar8 - 1;
    uVar50 = (ulong)uVar8 & 0xfffffffc;
    iVar48 = (int)uVar50;
    pdVar21 = pdVar30 + iVar48;
    do {
      plVar51 = *(long **)(param_1 + 0x10);
      iVar42 = piVar1[1];
      puVar2 = (uint *)(*(long *)(*plVar51 + 0x18) + ((long)iVar42 + (long)iVar33) * 0x20);
      lVar52 = *(long *)(puVar2 + 2);
      uVar12 = *puVar2;
      uVar28 = (ulong)(int)uVar12;
      uStack_80 = uVar28;
      if (uVar12 < 9) {
        ppdVar19 = &pdStack_c0;
      }
      else {
        if ((int)uVar12 < 0) {
          func_0x000104c4f740();
          goto LAB_109914d44;
        }
        ppdVar19 = (double **)(uVar28 << 3);
        __Znwm();
        uVar28 = (ulong)(int)*puVar2;
      }
      lVar27 = **(long **)(param_1 + 0x28);
      lVar34 = (long)*(int *)(*(long *)(*plVar51 + 0x18) + ((long)iVar42 + (long)iVar33) * 0x20 + 4)
      ;
      uVar38 = (ulong)ppdVar19 >> 3 & 1;
      if ((long)uVar28 <= (long)uVar38) {
        uVar38 = uVar28;
      }
      if (((ulong)ppdVar19 & 7) != 0) {
        uVar38 = uVar28;
      }
      ppdStack_78 = ppdVar19;
      if (0 < (long)uVar38) {
        pdVar22 = (double *)(lVar27 + lVar34 * 8);
        ppdVar39 = ppdVar19;
        uVar23 = uVar38;
        do {
          *ppdVar39 = (double *)*pdVar22;
          uVar23 = uVar23 - 1;
          pdVar22 = pdVar22 + 1;
          ppdVar39 = ppdVar39 + 1;
        } while (uVar23 != 0);
      }
      lVar40 = uVar28 - uVar38;
      lVar29 = (lVar40 - (lVar40 >> 0x3f) & 0xfffffffffffffffeU) + uVar38;
      if (1 < lVar40) {
        uVar23 = uVar38;
        pdVar22 = (double *)(lVar27 + uVar38 * 8 + lVar34 * 8);
        ppdVar39 = ppdVar19 + uVar38;
        do {
          pdVar56 = (double *)*pdVar22;
          ppdVar39[1] = (double *)pdVar22[1];
          *ppdVar39 = pdVar56;
          uVar23 = uVar23 + 2;
          pdVar22 = pdVar22 + 2;
          ppdVar39 = ppdVar39 + 2;
        } while ((long)uVar23 < lVar29);
      }
      if (lVar29 < (long)uVar28) {
        lVar29 = lVar40 % 2;
        pdVar22 = (double *)(lVar27 + (lVar40 / 2) * 0x10 + uVar38 * 8 + lVar34 * 8);
        ppdVar19 = ppdVar19 + uVar38 + (lVar40 / 2) * 2;
        do {
          *ppdVar19 = (double *)*pdVar22;
          lVar29 = lVar29 + -1;
          pdVar22 = pdVar22 + 1;
          ppdVar19 = ppdVar19 + 1;
        } while (lVar29 != 0);
      }
      ppdVar19 = ppdStack_78;
      lVar27 = *(long *)(puVar2 + 2);
      uVar38 = *(long *)(puVar2 + 4) - lVar27 >> 3;
      lVar34 = **(long **)(param_1 + 0x30);
      uVar12 = *puVar2;
      uVar28 = (ulong)uVar12;
      if (1 < uVar38) {
        lVar35 = *(long *)*plVar51;
        iVar42 = *(int *)(lVar32 + 0x18);
        lVar36 = **(long **)(param_1 + 0x38);
        lVar37 = *(long *)(lVar32 + 0x20);
        lVar40 = (long)(int)uVar12 + -1;
        iVar47 = (int)(uVar28 & 0xfffffffc);
        ppdVar39 = ppdStack_78 + iVar47;
        lVar29 = lVar34 + 0x10;
        uVar23 = 1;
        do {
          piVar3 = (int *)(lVar27 + uVar23 * 8);
          iVar31 = *piVar3;
          lVar41 = (long)piVar3[1];
          uVar11 = *(uint *)(lVar35 + (long)iVar31 * 8);
          uVar24 = (ulong)uVar11;
          pdVar22 = (double *)(lVar36 + (long)*(int *)(lVar37 + (long)(iVar31 - iVar42) * 4) * 8);
          lVar4 = lVar34 + lVar41 * 8;
          if ((uVar12 & 1) == 0) {
LAB_109914684:
            if ((uVar12 >> 1 & 1) != 0) {
              if ((int)uVar11 < 1) {
                dVar57 = 0.0;
                dVar58 = 0.0;
              }
              else {
                dVar57 = 0.0;
                dVar58 = 0.0;
                uVar44 = uVar24;
                pdVar56 = pdVar22;
                pdVar25 = (double *)(lVar4 + (long)(int)(uVar11 * iVar47) * 8);
                do {
                  dVar57 = dVar57 + *pdVar25 * *pdVar56;
                  dVar58 = dVar58 + pdVar25[uVar24] * *pdVar56;
                  uVar43 = (int)uVar44 - 1;
                  uVar44 = (ulong)uVar43;
                  pdVar56 = pdVar56 + 1;
                  pdVar25 = pdVar25 + 1;
                } while (uVar43 != 0);
              }
              ppdVar39[1] = (double *)((double)ppdVar39[1] - dVar58);
              *ppdVar39 = (double *)((double)*ppdVar39 - dVar57);
            }
            if (3 < (int)uVar12) {
              uVar24 = 0;
              lVar55 = (long)(int)uVar11;
              uVar43 = uVar11 & 0xfffffffc;
              uVar17 = uVar11 * 3;
              lVar54 = lVar29 + lVar55 * 8 + lVar41 * 8;
              lVar53 = lVar55 * 0x20;
              lVar20 = lVar29 + lVar41 * 8 + (long)(int)uVar17 * 8;
              lVar41 = lVar29 + lVar41 * 8 + (long)(int)(uVar11 << 1) * 8;
              lVar26 = lVar4;
              do {
                if ((int)uVar11 < 4) {
                  pdVar56 = (double *)(lVar4 + uVar24 * lVar55 * 8);
                  dVar57 = 0.0;
                  dVar58 = 0.0;
                  dVar60 = 0.0;
                  dVar61 = 0.0;
                  pdVar25 = pdVar22;
                }
                else {
                  lVar46 = 0;
                  iVar31 = 0;
                  dVar57 = 0.0;
                  dVar58 = 0.0;
                  dVar60 = 0.0;
                  dVar61 = 0.0;
                  do {
                    pdVar56 = (double *)((long)pdVar22 + lVar46);
                    pdVar25 = (double *)(lVar26 + lVar46);
                    pdVar16 = (double *)(lVar54 + lVar46);
                    pdVar5 = (double *)(lVar41 + lVar46);
                    pdVar6 = (double *)(lVar20 + lVar46);
                    dVar14 = *pdVar56;
                    dVar62 = pdVar56[1];
                    dVar59 = pdVar56[2];
                    dVar66 = pdVar56[3];
                    dVar57 = dVar57 + dVar14 * *pdVar25 + pdVar25[1] * dVar62 + pdVar25[2] * dVar59
                             + pdVar25[3] * dVar66;
                    dVar58 = dVar58 + dVar14 * pdVar16[-2] + pdVar16[-1] * dVar62 +
                             *pdVar16 * dVar59 + pdVar16[1] * dVar66;
                    dVar60 = dVar60 + dVar14 * pdVar5[-2] + pdVar5[-1] * dVar62 + *pdVar5 * dVar59 +
                             pdVar5[1] * dVar66;
                    dVar61 = dVar61 + dVar14 * pdVar6[-2] + pdVar6[-1] * dVar62 + *pdVar6 * dVar59 +
                             pdVar6[1] * dVar66;
                    iVar31 = iVar31 + 4;
                    lVar46 = lVar46 + 0x20;
                  } while (iVar31 < (int)uVar43);
                  pdVar56 = (double *)(lVar26 + lVar46);
                  pdVar25 = (double *)((long)pdVar22 + lVar46);
                }
                uVar45 = uVar43;
                if (uVar43 != uVar11) {
                  do {
                    dVar14 = *pdVar25;
                    pdVar25 = pdVar25 + 1;
                    dVar57 = dVar57 + dVar14 * *pdVar56;
                    dVar58 = dVar58 + dVar14 * pdVar56[lVar55];
                    dVar60 = dVar60 + dVar14 * pdVar56[(int)(uVar11 << 1)];
                    dVar61 = dVar61 + dVar14 * *(double *)
                                                ((long)pdVar56 +
                                                (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 |
                                                (ulong)uVar17 << 3));
                    pdVar56 = pdVar56 + 1;
                    uVar45 = uVar45 + 1;
                  } while ((int)uVar45 < (int)uVar11);
                }
                ppdVar7 = ppdVar19 + uVar24;
                uVar24 = uVar24 + 4;
                lVar54 = lVar54 + lVar53;
                ppdVar7[1] = (double *)((double)ppdVar7[1] - dVar58);
                *ppdVar7 = (double *)((double)*ppdVar7 - dVar57);
                ppdVar7[3] = (double *)((double)ppdVar7[3] - dVar61);
                ppdVar7[2] = (double *)((double)ppdVar7[2] - dVar60);
                lVar26 = lVar26 + lVar53;
                lVar20 = lVar20 + lVar53;
                lVar41 = lVar41 + lVar53;
              } while (uVar24 < (uVar28 & 0xfffffffc));
            }
          }
          else {
            if ((int)uVar11 < 1) {
              dVar57 = 0.0;
            }
            else {
              dVar57 = 0.0;
              pdVar56 = (double *)(lVar4 + (long)(int)(uVar11 * (int)lVar40) * 8);
              uVar44 = uVar24;
              pdVar25 = pdVar22;
              do {
                dVar57 = dVar57 + *pdVar25 * *pdVar56;
                uVar43 = (int)uVar44 - 1;
                uVar44 = (ulong)uVar43;
                pdVar56 = pdVar56 + 1;
                pdVar25 = pdVar25 + 1;
              } while (uVar43 != 0);
            }
            ppdVar19[lVar40] = (double *)((double)ppdVar19[lVar40] - dVar57);
            if (uVar12 != 1) goto LAB_109914684;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar38);
      }
      pdVar22 = (double *)(lVar34 + (long)*(int *)(lVar52 + 4) * 8);
      if ((uVar9 & 1) == 0) {
LAB_1099148e4:
        if ((uVar8 >> 1 & 1) != 0) {
          if ((int)uVar12 < 1) {
            dVar57 = 0.0;
            dVar58 = 0.0;
          }
          else {
            pdVar56 = pdVar22 + iVar48;
            dVar57 = 0.0;
            dVar58 = 0.0;
            uVar38 = uVar28;
            ppdVar39 = ppdVar19;
            do {
              dVar57 = dVar57 + *pdVar56 * (double)*ppdVar39;
              dVar58 = dVar58 + pdVar56[1] * (double)*ppdVar39;
              pdVar56 = pdVar56 + uVar9;
              uVar11 = (int)uVar38 - 1;
              uVar38 = (ulong)uVar11;
              ppdVar39 = ppdVar39 + 1;
            } while (uVar11 != 0);
          }
          pdVar21[1] = dVar58 + pdVar21[1];
          *pdVar21 = dVar57 + *pdVar21;
        }
        if (3 < (int)uVar8) {
          uVar38 = 0;
          uVar11 = uVar12 & 0xfffffffc;
          pdVar56 = pdVar22;
          do {
            ppdVar39 = ppdVar19;
            if ((int)uVar12 < 4) {
              pdVar25 = pdVar22 + uVar38;
              dVar57 = 0.0;
              dVar58 = 0.0;
              dVar60 = 0.0;
              dVar61 = 0.0;
            }
            else {
              iVar42 = 0;
              dVar57 = 0.0;
              dVar58 = 0.0;
              dVar60 = 0.0;
              dVar61 = 0.0;
              pdVar25 = pdVar56;
              do {
                pdVar16 = pdVar25 + uVar9 + 2;
                pdVar15 = *ppdVar39;
                pdVar63 = ppdVar39[1];
                pdVar5 = pdVar25 + uVar9 * 2 + 2;
                pdVar64 = ppdVar39[2];
                pdVar65 = ppdVar39[3];
                pdVar6 = pdVar25 + (long)(int)uVar8 * 3 + 2;
                dVar57 = dVar57 + (double)pdVar15 * *pdVar25 + pdVar16[-2] * (double)pdVar63 +
                         pdVar5[-2] * (double)pdVar64 + pdVar6[-2] * (double)pdVar65;
                dVar58 = dVar58 + (double)pdVar15 * pdVar25[1] + pdVar16[-1] * (double)pdVar63 +
                         pdVar5[-1] * (double)pdVar64 + pdVar6[-1] * (double)pdVar65;
                dVar60 = dVar60 + (double)pdVar15 * pdVar25[2] + *pdVar16 * (double)pdVar63 +
                         *pdVar5 * (double)pdVar64 + *pdVar6 * (double)pdVar65;
                dVar61 = dVar61 + (double)pdVar15 * pdVar25[3] + pdVar16[1] * (double)pdVar63 +
                         pdVar5[1] * (double)pdVar64 + pdVar6[1] * (double)pdVar65;
                ppdVar39 = ppdVar39 + 4;
                iVar42 = iVar42 + 4;
                pdVar25 = pdVar25 + uVar9 * 4;
              } while (iVar42 < (int)uVar11);
            }
            if (uVar11 != uVar12) {
              pdVar25 = pdVar25 + 2;
              uVar43 = uVar11;
              do {
                pdVar16 = *ppdVar39;
                ppdVar39 = ppdVar39 + 1;
                dVar57 = dVar57 + (double)pdVar16 * pdVar25[-2];
                dVar58 = dVar58 + (double)pdVar16 * pdVar25[-1];
                dVar60 = dVar60 + (double)pdVar16 * *pdVar25;
                dVar61 = dVar61 + (double)pdVar16 * pdVar25[1];
                uVar43 = uVar43 + 1;
                pdVar25 = pdVar25 + uVar9;
              } while ((int)uVar43 < (int)uVar12);
            }
            pdVar25 = pdVar30 + uVar38;
            pdVar25[1] = dVar58 + pdVar25[1];
            *pdVar25 = dVar57 + *pdVar25;
            pdVar25[3] = dVar61 + pdVar25[3];
            pdVar25[2] = dVar60 + pdVar25[2];
            uVar38 = uVar38 + 4;
            pdVar56 = pdVar56 + 4;
          } while (uVar38 < uVar50);
        }
      }
      else {
        if ((int)uVar12 < 1) {
          dVar57 = 0.0;
        }
        else {
          pdVar56 = pdVar22 + iVar13;
          dVar57 = 0.0;
          uVar38 = uVar28;
          ppdVar39 = ppdVar19;
          do {
            dVar57 = dVar57 + (double)*ppdVar39 * *pdVar56;
            pdVar56 = pdVar56 + uVar9;
            uVar11 = (int)uVar38 - 1;
            uVar38 = (ulong)uVar11;
            ppdVar39 = ppdVar39 + 1;
          } while (uVar11 != 0);
        }
        pdVar30[iVar13] = dVar57 + pdVar30[iVar13];
        if (uVar8 != 1) goto LAB_1099148e4;
      }
      FUN_109904224(pdVar22,uVar28,uVar9,pdVar22,uVar28,(ulong)uVar8,lStack_d8,0,0,uVar8,uVar8);
      if (8 < uStack_80) {
        __ZdlPv(ppdStack_78);
      }
      iVar33 = iVar33 + 1;
    } while (iVar33 < *piVar1);
  }
  FUN_10990765c(&pdStack_c0,*(undefined1 *)(lVar32 + 0x1c),&lStack_d8);
  if (0 < (long)uStack_b8) {
    if (uStack_b8 >> 0x3d == 0) {
      pdVar22 = (double *)(uStack_b8 << 3);
      pdVar21 = (double *)0x1;
      _calloc();
      if (pdVar21 != (double *)0x0) {
        if (uStack_b8 == 1) {
          dVar57 = 0.0;
          if (uVar8 != 0) {
            uVar50 = uVar9 + 3;
            if (-1 < (long)uVar9) {
              uVar50 = uVar9;
            }
            if (uVar9 + 1 < 3) {
              dVar57 = *pdStack_c0 * *pdVar30;
            }
            else {
              uVar28 = uVar9 - ((long)uVar9 >> 0x3f) & 0xfffffffffffffffe;
              dVar57 = *pdStack_c0 * *pdVar30;
              dVar58 = pdStack_c0[1] * pdVar30[1];
              if (3 < (int)uVar8) {
                uVar50 = uVar50 & 0xfffffffffffffffc;
                dVar60 = pdStack_c0[2] * pdVar30[2];
                dVar61 = pdStack_c0[3] * pdVar30[3];
                if (7 < uVar8) {
                  pdVar56 = pdVar30 + 6;
                  pdVar25 = pdStack_c0 + 6;
                  lVar32 = 4;
                  do {
                    dVar57 = dVar57 + pdVar25[-2] * pdVar56[-2];
                    dVar58 = dVar58 + pdVar25[-1] * pdVar56[-1];
                    dVar60 = dVar60 + *pdVar25 * *pdVar56;
                    dVar61 = dVar61 + pdVar25[1] * pdVar56[1];
                    lVar32 = lVar32 + 4;
                    pdVar56 = pdVar56 + 4;
                    pdVar25 = pdVar25 + 4;
                  } while (lVar32 < (long)uVar50);
                }
                dVar57 = dVar60 + dVar57;
                dVar58 = dVar61 + dVar58;
                if ((long)uVar50 < (long)uVar28) {
                  dVar57 = dVar57 + pdStack_c0[uVar50] * pdVar30[uVar50];
                  dVar58 = dVar58 + (pdStack_c0 + uVar50)[1] * (pdVar30 + uVar50)[1];
                }
              }
              dVar57 = dVar57 + dVar58;
              lVar32 = (long)uVar9 % 2;
              if (lVar32 != 0 && lVar32 < 0 == SBORROW8(uVar9,uVar28)) {
                pdVar56 = pdStack_c0 + ((long)uVar9 / 2) * 2;
                pdVar25 = (double *)(lVar49 + ((long)uVar9 / 2) * 0x10 + lVar10 * 8);
                do {
                  dVar57 = dVar57 + *pdVar56 * *pdVar25;
                  lVar32 = lVar32 + -1;
                  pdVar56 = pdVar56 + 1;
                  pdVar25 = pdVar25 + 1;
                } while (lVar32 != 0);
              }
            }
          }
          *pdVar21 = dVar57 + 0.0;
          goto LAB_109914bfc;
        }
        goto LAB_109914b14;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109914d44:
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x109914d48);
    (*pcVar18)();
  }
  pdVar21 = (double *)0x0;
LAB_109914b14:
  pdVar22 = pdVar30;
  FUN_109914e04(0x3ff0000000000000,&pdStack_c0,pdVar30,uVar9,pdVar21);
LAB_109914bfc:
  uVar50 = (ulong)pdVar30 >> 3 & 1;
  if ((long)uVar9 <= (long)uVar50) {
    uVar50 = uVar9;
  }
  if (((ulong)pdVar30 & 7) != 0) {
    uVar50 = uVar9;
  }
  lVar32 = uVar9 - uVar50;
  pdVar56 = pdVar21;
  uVar28 = uVar50;
  if (0 < (long)uVar50) {
    do {
      *pdVar30 = *pdVar56;
      uVar28 = uVar28 - 1;
      pdVar56 = pdVar56 + 1;
      pdVar30 = pdVar30 + 1;
    } while (uVar28 != 0);
  }
  lVar52 = (lVar32 - (lVar32 >> 0x3f) & 0xfffffffffffffffeU) + uVar50;
  if (1 < lVar32) {
    pdVar30 = pdVar21 + uVar50;
    pdVar56 = (double *)(lVar49 + uVar50 * 8 + lVar10 * 8);
    uVar28 = uVar50;
    do {
      dVar57 = *pdVar30;
      pdVar56[1] = pdVar30[1];
      *pdVar56 = dVar57;
      uVar28 = uVar28 + 2;
      pdVar30 = pdVar30 + 2;
      pdVar56 = pdVar56 + 2;
    } while ((long)uVar28 < lVar52);
  }
  if (lVar52 < (long)uVar9) {
    lVar52 = lVar32 % 2;
    pdVar30 = pdVar21 + uVar50 + (lVar32 / 2) * 2;
    pdVar56 = (double *)(lVar49 + (lVar32 / 2) * 0x10 + uVar50 * 8 + lVar10 * 8);
    do {
      *pdVar56 = *pdVar30;
      lVar52 = lVar52 + -1;
      pdVar30 = pdVar30 + 1;
      pdVar56 = pdVar56 + 1;
    } while (lVar52 != 0);
  }
  _free(pdVar21);
  _free(pdStack_c0);
  lVar32 = lStack_d8;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar32;
  }
  ___stack_chk_fail();
  _free(lStack_d8);
  __Unwind_Resume(lVar32);
  if ((undefined *)pdVar22[1] == &DAT_10e00cb78) {
    lVar32 = lVar32 + 8;
  }
  else {
    lVar32 = 0;
  }
  return lVar32;
}



/* Entry: 109914da4; end: 109914df7;  */

/* WARNING: Removing unreachable block (ram,0x000109914dd8) */

long FUN_109914da4(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00cb78) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109914df8; end: 109914e03;  */

undefined ** FUN_109914df8(void)

{
  return &PTR_DAT_110b1d240;
}



/* Entry: 109914e04; end: 109914f4f;  */

long *****
FUN_109914e04(undefined8 param_1,undefined8 *param_2,long *****param_3,ulong param_4,
             long *****param_5,long *****param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined1 *puVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  ulong unaff_x19;
  undefined *puVar22;
  long *****unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  int iVar23;
  undefined8 unaff_x24;
  undefined *puVar24;
  long *****ppppplVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long ***ppplStack_70;
  long ****pppplStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  pppplVar11 = &ppplStack_70;
  pppplVar6 = &ppplStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar25 = param_5;
  if (param_4 >> 0x3d == 0) {
    unaff_x19 = param_4;
    unaff_x22 = param_2;
    if (param_3 == (long *****)0x0) {
      param_3 = (long *****)(param_4 << 3);
      if (param_4 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar20 = -((ulong)((long)param_3 + 0x1eU) & 0xfffffffffffffff0);
        pppplVar11 = (long ****)((long)&ppplStack_70 + lVar20);
        param_3 = (long *****)((long)&ppplStack_70 + lVar20);
        unaff_x21 = param_3;
      }
      else {
        _malloc();
        unaff_x21 = param_3;
        if (param_3 == (long *****)0x0) goto LAB_109914f10;
      }
    }
    else {
      pppplVar11 = &ppplStack_70;
      unaff_x21 = (long *****)0x0;
    }
    ppppplVar8 = (long *****)param_2[1];
    puVar22 = (undefined *)param_2[2];
    uStack_58 = *param_2;
    uStack_60 = 1;
    puVar13 = &uStack_58;
    ppppplVar25 = &pppplStack_68;
    pppplStack_68 = (long ****)param_3;
    puStack_50 = puVar22;
    FUN_10990fa5c(param_1);
    if (0x4000 < param_4) {
      ppppplVar8 = unaff_x21;
      _free();
    }
    pppplVar6 = pppplVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return ppppplVar8;
    }
  }
  else {
LAB_109914f10:
    param_5 = param_6;
    ppppplVar8 = (long *****)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar22 = PTR___ZTISt9bad_alloc_110346a68;
    puVar13 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < unaff_x19) {
    _free(unaff_x21);
  }
  ppppplVar7 = ppppplVar8;
  __Unwind_Resume();
  uVar17 = (uint)puVar13;
  puVar16 = (undefined *)((long)pppplVar6 + -0xb0);
  ppppplVar12 = (long *****)((long)pppplVar6 + -0xb0);
  *(undefined8 *)((long)pppplVar6 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pppplVar6 + -0x38) = unaff_x23;
  *(undefined8 **)((long)pppplVar6 + -0x30) = unaff_x22;
  *(long ******)((long)pppplVar6 + -0x28) = unaff_x21;
  *(long ******)((long)pppplVar6 + -0x20) = ppppplVar8;
  *(ulong *)((long)pppplVar6 + -0x18) = unaff_x19;
  *(undefined1 **)((long)pppplVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)pppplVar6 + -8) = FUN_109914f50;
  *(undefined8 *)((long)pppplVar6 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar19 = (int)ppppplVar25;
  *(int *)((long)pppplVar6 + -0xa8) = iVar19;
  *(undefined4 *)((long)pppplVar6 + -0xb0) = 0;
  ppppplVar8 = ppppplVar7;
  puVar24 = puVar22;
  ppppplVar10 = ppppplVar25;
  pcVar5 = (code *)param_5;
  if (iVar19 < 1) {
    puVar13 = (undefined8 *)&UNK_10f589d4c;
    puVar9 = (undefined1 *)((long)pppplVar6 + -0xa8);
    FUN_109904144();
    *(undefined1 **)((long)pppplVar6 + -0xb0) = puVar9;
    ppppplVar8 = (long *****)0x0;
    puVar24 = puVar16;
    if (puVar9 == (undefined1 *)0x0) goto LAB_109914f9c;
    puVar24 = &UNK_10f589d5c;
    uVar18 = 0x84;
    FUN_1099ab8e4((undefined1 *)((long)pppplVar6 + -0xa8));
LAB_109915138:
    ppppplVar8 = (long *****)((long)pppplVar6 + -0xa8);
    func_0x0001099ab7c0();
  }
  else {
LAB_109914f9c:
    ppppplVar12 = ppppplVar10;
    uVar18 = (uint)puVar13;
    if (ppppplVar7 == (long *****)0x0) {
      *(undefined8 *)((long)pppplVar6 + -0xa8) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x50) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x90) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x98) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x80) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x88) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x70) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x78) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x60) = 0;
      *(undefined8 *)((long)pppplVar6 + -0x68) = 0;
      *(undefined4 *)((long)pppplVar6 + -0x58) = 0;
      pcVar5 = FUN_1099aa768;
      ppppplVar12 = (long *****)0x3;
      FUN_1099a9f0c((undefined1 *)((long)pppplVar6 + -0xa8),&UNK_10f589d5c,0x85,3,FUN_1099aa768,0);
      puVar24 = &UNK_10f589de5;
      uVar18 = 0x21;
      FUN_1092b4db8(*(long *)((long)pppplVar6 + -0xa0) + 0x7540);
      goto LAB_109915138;
    }
    if ((int)puVar22 < (int)uVar17) {
      if (iVar19 == 1) {
        do {
          *(int *)((long)pppplVar6 + -0xa8) = (int)puVar22;
          ppppplVar8 = (long *****)param_5[3];
          if (ppppplVar8 == (long *****)0x0) {
            func_0x000104c501e4();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x109915104);
            (*pcVar5)();
          }
          puVar24 = (undefined *)((long)pppplVar6 + -0xa8);
          (*(code *)(*ppppplVar8)[6])();
          uVar18 = (uint)puVar13;
          uVar1 = (int)puVar22 + 1;
          puVar22 = (undefined *)(ulong)uVar1;
        } while (uVar17 != uVar1);
      }
      else {
        *(undefined ***)((long)pppplVar6 + -0xa8) = &PTR_FUN_110b1d2b0;
        *(long ******)((long)pppplVar6 + -0xa0) = param_5;
        param_5 = (long *****)((long)pppplVar6 + -0xa8);
        *(long ******)((long)pppplVar6 + -0x90) = param_5;
        pcVar5 = (code *)((long)pppplVar6 + -0xa8);
        puVar24 = puVar22;
        ppppplVar12 = ppppplVar25;
        uVar18 = uVar17;
        FUN_10991514c(ppppplVar7);
        ppppplVar8 = *(long ******)((long)pppplVar6 + -0x90);
        if (ppppplVar8 == param_5) {
          lVar20 = 0x20;
        }
        else {
          if (ppppplVar8 == (long *****)0x0) goto LAB_109915030;
          lVar20 = 0x28;
        }
        (**(code **)((long)*ppppplVar8 + lVar20))();
      }
    }
LAB_109915030:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppplVar6 + -0x48)) {
      return ppppplVar8;
    }
    ___stack_chk_fail();
    ppppplVar10 = *(long ******)((long)pppplVar6 + -0x90);
    if (ppppplVar10 == param_5) {
      lVar20 = 0x20;
LAB_109915128:
      (**(code **)((long)*ppppplVar10 + lVar20))();
    }
    else if (ppppplVar10 != (long *****)0x0) {
      lVar20 = 0x28;
      goto LAB_109915128;
    }
  }
  ppppplVar10 = ppppplVar8;
  __Unwind_Resume();
  *(undefined8 *)((long)pppplVar6 + -0x110) = unaff_x28;
  *(undefined8 *)((long)pppplVar6 + -0x108) = unaff_x27;
  *(undefined8 *)((long)pppplVar6 + -0x100) = unaff_x26;
  *(undefined8 *)((long)pppplVar6 + -0xf8) = unaff_x25;
  *(undefined8 *)((long)pppplVar6 + -0xf0) = unaff_x24;
  *(long ******)((long)pppplVar6 + -0xe8) = ppppplVar7;
  *(long ******)((long)pppplVar6 + -0xe0) = ppppplVar25;
  *(long ******)((long)pppplVar6 + -0xd8) = param_5;
  *(undefined **)((long)pppplVar6 + -0xd0) = puVar22;
  *(long ******)((long)pppplVar6 + -200) = ppppplVar8;
  *(undefined1 **)((long)pppplVar6 + -0xc0) = (undefined1 *)((long)pppplVar6 + -0x10);
  *(code **)((long)pppplVar6 + -0xb8) = FUN_10991514c;
  *(undefined8 *)((long)pppplVar6 + -0x120) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar19 = (int)ppppplVar12;
  *(int *)((long)pppplVar6 + -0x1c8) = iVar19;
  *(undefined4 *)((long)pppplVar6 + -0x1f8) = 0;
  ppppplVar25 = ppppplVar10;
  if (iVar19 < 1) {
    puVar9 = (undefined1 *)((long)pppplVar6 + -0x1c8);
    FUN_109904144(puVar9,(undefined1 *)((long)pppplVar6 + -0x1f8),&UNK_10f589d4c);
    *(undefined1 **)((long)pppplVar6 + -0x1f8) = puVar9;
    ppppplVar25 = (long *****)0x0;
    if (puVar9 == (undefined1 *)0x0) goto LAB_1099151a0;
    FUN_1099ab8e4((undefined1 *)((long)pppplVar6 + -0x1c8),&UNK_10f589d5c,0xae,
                  (undefined1 *)((long)pppplVar6 + -0x1f8));
  }
  else {
LAB_1099151a0:
    if (ppppplVar10 != (long *****)0x0) {
      iVar23 = (int)puVar24;
      iVar4 = uVar18 - iVar23;
      if (iVar4 != 0 && iVar23 <= (int)uVar18) {
        if (iVar19 == 1) {
          FUN_1099896d4((undefined1 *)((long)pppplVar6 + -0x1c8),1);
          *(undefined1 **)((long)pppplVar6 + -0x1f8) = (undefined1 *)((long)pppplVar6 + -0x1c8);
          puVar9 = (undefined1 *)((long)pppplVar6 + -0x1c8);
          FUN_1099897f8();
          *(int *)((long)pppplVar6 + -0x1f0) = (int)puVar9;
          do {
            *(int *)((long)pppplVar6 + -0x1e0) = (int)puVar9;
            *(int *)((long)pppplVar6 + -0x1cc) = (int)puVar24;
            pppplVar11 = *(long *****)((long)pcVar5 + 0x18);
            if (pppplVar11 == (long ****)0x0) {
              func_0x000104c501e4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1099155c0);
              (*pcVar5)();
            }
            (*(code *)(*pppplVar11)[6])
                      (pppplVar11,(undefined1 *)((long)pppplVar6 + -0x1e0),
                       (undefined1 *)((long)pppplVar6 + -0x1cc));
            uVar17 = (int)puVar24 + 1;
            puVar24 = (undefined *)(ulong)uVar17;
          } while (uVar18 != uVar17);
          FUN_109989934((undefined1 *)((long)pppplVar6 + -0x1c8),puVar9);
          pcVar5 = *(code **)((long)pppplVar6 + -0x150);
          ppppplVar12 = *(long ******)((long)pppplVar6 + -0x148);
          *(undefined8 *)((long)pppplVar6 + -0x130) = 0;
          lVar20 = (long)ppppplVar12 - (long)pcVar5;
          while (uVar15 = lVar20 >> 3, 2 < uVar15) {
            __ZdlPv(*(long *****)pcVar5);
            ppppplVar12 = *(long ******)((long)pppplVar6 + -0x148);
            pcVar5 = (code *)(*(long *)((long)pppplVar6 + -0x150) + 8);
            *(code **)((long)pppplVar6 + -0x150) = pcVar5;
            lVar20 = (long)ppppplVar12 - (long)pcVar5;
          }
          if (uVar15 == 1) {
            uVar21 = 0x200;
LAB_109915488:
            *(undefined8 *)((long)pppplVar6 + -0x138) = uVar21;
          }
          else if (uVar15 == 2) {
            uVar21 = 0x400;
            goto LAB_109915488;
          }
          ppppplVar25 = (long *****)pcVar5;
          if ((long *****)pcVar5 != ppppplVar12) {
            do {
              pcVar5 = (code *)(ppppplVar25 + 1);
              __ZdlPv(*ppppplVar25);
              ppppplVar25 = (long *****)pcVar5;
            } while ((long *****)pcVar5 != ppppplVar12);
            lVar20 = *(long *)((long)pppplVar6 + -0x148);
            if (lVar20 != *(long *)((long)pppplVar6 + -0x150)) {
              *(ulong *)((long)pppplVar6 + -0x148) =
                   lVar20 + ((*(long *)((long)pppplVar6 + -0x150) - lVar20) + 7U &
                            0xfffffffffffffff8);
            }
          }
          if (*(long *)((long)pppplVar6 + -0x158) != 0) {
            __ZdlPv();
          }
          __ZNSt3__118condition_variableD1Ev((undefined1 *)((long)pppplVar6 + -0x188));
          ppppplVar25 = (long *****)((long)pppplVar6 + -0x1c8);
          __ZNSt3__15mutexD1Ev();
        }
        else {
          if (iVar19 <= iVar4) {
            iVar4 = iVar19;
          }
          ppppplVar12 = (long *****)0x170;
          __Znwm();
          *(int *)ppppplVar12 = iVar23;
          *(uint *)((long)ppppplVar12 + 4) = uVar18;
          ppppplVar12[2] = (long ****)0x32aaaba7;
          *(int *)(ppppplVar12 + 1) = iVar4;
          *(undefined4 *)((long)ppppplVar12 + 0xc) = 0;
          ppppplVar12[4] = (long ****)0x0;
          ppppplVar12[3] = (long ****)0x0;
          ppppplVar12[6] = (long ****)0x0;
          ppppplVar12[5] = (long ****)0x0;
          ppppplVar12[8] = (long ****)0x0;
          ppppplVar12[7] = (long ****)0x0;
          ppppplVar12[9] = (long ****)0x0;
          FUN_1099896d4(ppppplVar12 + 10,iVar4);
          ppppplVar25 = ppppplVar12 + 0x1f;
          *ppppplVar25 = (long ****)0x32aaaba7;
          ppppplVar12[0x21] = (long ****)0x0;
          ppppplVar12[0x20] = (long ****)0x0;
          ppppplVar12[0x23] = (long ****)0x0;
          ppppplVar12[0x22] = (long ****)0x0;
          ppppplVar12[0x25] = (long ****)0x0;
          ppppplVar12[0x24] = (long ****)0x0;
          ppppplVar12[0x26] = (long ****)0x0;
          ppppplVar12[0x27] = (long ****)0x3cb0b1bb;
          ppppplVar12[0x29] = (long ****)0x0;
          ppppplVar12[0x28] = (long ****)0x0;
          ppppplVar12[0x2b] = (long ****)0x0;
          ppppplVar12[0x2a] = (long ****)0x0;
          *(undefined8 *)((long)ppppplVar12 + 0x164) = 0;
          *(undefined8 *)((long)ppppplVar12 + 0x15c) = 0;
          *(int *)((long)ppppplVar12 + 0x16c) = iVar4;
          *(long ******)((long)pppplVar6 + -0x1e0) = ppppplVar12;
          *(long ******)((long)pppplVar6 + -0x1c8) = ppppplVar12;
          ppppplVar8 = (long *****)0x20;
          __Znwm();
          ppppplVar7 = ppppplVar8 + 1;
          *ppppplVar7 = (long ****)0x0;
          *ppppplVar8 = (long ****)&PTR_FUN_110b1d330;
          ppppplVar8[2] = (long ****)0x0;
          ppppplVar8[3] = (long ****)ppppplVar12;
          *(long ******)((long)pppplVar6 + -0x1d8) = ppppplVar8;
          *(long ******)((long)pppplVar6 + -0x1f8) = ppppplVar12;
          *(long ******)((long)pppplVar6 + -0x1f0) = ppppplVar8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
            if (bVar3) {
              *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          *(code **)((long)pppplVar6 + -0x1e8) = pcVar5;
          if (0 < iVar4) {
            iVar19 = 0;
            do {
              *(long ******)((long)pppplVar6 + -0x210) = ppppplVar12;
              *(long ******)((long)pppplVar6 + -0x208) = ppppplVar8;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
                if (bVar3) {
                  *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              *(undefined8 *)((long)pppplVar6 + -0x1b0) = 0;
              puVar13 = (undefined8 *)0x20;
              __Znwm();
              *puVar13 = &PTR_FUN_110b1d380;
              puVar13[1] = ppppplVar12;
              *(undefined8 *)((long)pppplVar6 + -0x210) = 0;
              *(undefined8 *)((long)pppplVar6 + -0x208) = 0;
              puVar13[2] = ppppplVar8;
              puVar13[3] = pcVar5;
              *(undefined8 **)((long)pppplVar6 + -0x1b0) = puVar13;
              FUN_1099168bc(ppppplVar10 + 1,(undefined1 *)((long)pppplVar6 + -0x1c8));
              plVar14 = *(long **)((long)pppplVar6 + -0x1b0);
              if (plVar14 == (long *)((long)pppplVar6 + -0x1c8)) {
                lVar20 = 0x20;
LAB_10991539c:
                (**(code **)(*plVar14 + lVar20))();
              }
              else if (plVar14 != (long *)0x0) {
                lVar20 = 0x28;
                goto LAB_10991539c;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 != iVar4);
            *(code **)((long)pppplVar6 + -0x200) = pcVar5;
          }
          do {
            uVar15 = 0;
            FUN_1099157f4();
          } while ((uVar15 & 1) != 0);
          *(long ******)((long)pppplVar6 + -0x1c8) = ppppplVar25;
          *(undefined1 *)((long)pppplVar6 + -0x1c0) = 1;
          __ZNSt3__15mutex4lockEv(ppppplVar25);
          if (*(int *)(ppppplVar12 + 0x2d) == *(int *)((long)ppppplVar12 + 0x16c)) {
LAB_109915414:
            __ZNSt3__15mutex6unlockEv();
          }
          else {
            do {
              ppppplVar25 = ppppplVar12 + 0x27;
              __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                        (ppppplVar25,(undefined1 *)((long)pppplVar6 + -0x1c8));
            } while (*(int *)(ppppplVar12 + 0x2d) != *(int *)((long)ppppplVar12 + 0x16c));
            if (*(char *)((long)pppplVar6 + -0x1c0) == '\x01') {
              ppppplVar25 = *(long ******)((long)pppplVar6 + -0x1c8);
              goto LAB_109915414;
            }
          }
          do {
            pppplVar11 = *ppppplVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
            if (bVar3) {
              *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppplVar11 == (long ****)0x0) {
            (*(code *)(*ppppplVar8)[2])(ppppplVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppplVar25 = ppppplVar8;
          }
          pcVar5 = *(code **)((long)pppplVar6 + -0x1d8);
          if ((long *****)pcVar5 != (long *****)0x0) {
            ppppplVar8 = (long *****)((long)pcVar5 + 8);
            do {
              pppplVar11 = *ppppplVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
              if (bVar3) {
                *ppppplVar8 = (long ****)((long)pppplVar11 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (pppplVar11 == (long ****)0x0) {
              (*(code *)(*(long *****)pcVar5)[2])(pcVar5);
              ppppplVar25 = (long *****)pcVar5;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppplVar6 + -0x120)) {
        return ppppplVar25;
      }
      ___stack_chk_fail();
      FUN_10991599c((undefined1 *)((long)pppplVar6 + -0x1f8));
      func_0x0001099159f4((undefined1 *)((long)pppplVar6 + -0x1e0));
      goto LAB_109915694;
    }
    *(undefined8 *)((long)pppplVar6 + -0x1c8) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x170) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x1b0) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x1b8) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x1a0) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x1a8) = 0;
    *(undefined8 *)((long)pppplVar6 + -400) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x198) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x180) = 0;
    *(undefined8 *)((long)pppplVar6 + -0x188) = 0;
    *(undefined4 *)((long)pppplVar6 + -0x178) = 0;
    FUN_1099a9f0c((undefined1 *)((long)pppplVar6 + -0x1c8),&UNK_10f589d5c,0xaf,3,FUN_1099aa768,0);
    FUN_1092b4db8(*(long *)((long)pppplVar6 + -0x1c0) + 0x7540,&UNK_10f589de5,0x21);
  }
  ppppplVar25 = (long *****)((long)pppplVar6 + -0x1c8);
  func_0x0001099ab7c0();
LAB_109915694:
  __Unwind_Resume();
  *(long ******)((long)pppplVar6 + -0x230) = ppppplVar12;
  *(code **)((long)pppplVar6 + -0x228) = pcVar5;
  *(undefined1 **)((long)pppplVar6 + -0x220) = (undefined1 *)((long)pppplVar6 + -0xc0);
  *(code **)((long)pppplVar6 + -0x218) = FUN_10991569c;
  FUN_109989934(*ppppplVar25,*(undefined4 *)(ppppplVar25 + 1));
  return ppppplVar25;
}



/* Entry: 109914f50; end: 10991514b;  */

undefined ******
FUN_109914f50(undefined ******param_1,undefined *****param_2,undefined *param_3,undefined8 param_4,
             undefined ******param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined ******ppppppuVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined ******ppppppuVar11;
  ulong uVar12;
  undefined ******ppppppuVar13;
  undefined *****pppppuVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar21;
  int iVar22;
  undefined ******ppppppuVar23;
  undefined8 uStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined *****pppppuStack_1e0;
  undefined *****pppppuStack_1d8;
  int iStack_1cc;
  undefined *****pppppuStack_1c8;
  char cStack_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b8;
  undefined *****pppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  undefined ****ppppuStack_b0;
  undefined ****ppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined8 uStack_98;
  undefined *****pppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puVar20;
  
  iVar17 = (int)param_4;
  uVar15 = (uint)param_3;
  pppppuVar14 = &ppppuStack_b0;
  iVar22 = (int)&ppppuStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_a8 = (undefined ****)CONCAT44(ppppuStack_a8._4_4_,iVar17);
  ppppuStack_b0 = (undefined ****)((ulong)ppppuStack_b0 & 0xffffffff00000000);
  ppppppuVar6 = param_1;
  pppppuVar8 = param_2;
  pcVar5 = (code *)param_5;
  if (iVar17 < 1) {
    param_3 = &UNK_10f589d4c;
    pppppuVar7 = &ppppuStack_a8;
    FUN_109904144();
    ppppppuVar6 = (undefined ******)0x0;
    pppppuVar8 = pppppuVar14;
    ppppuStack_b0 = (undefined ****)pppppuVar7;
    if (pppppuVar7 == (undefined *****)0x0) goto LAB_109914f9c;
    pppppuVar8 = (undefined *****)&UNK_10f589d5c;
    uVar16 = 0x84;
    FUN_1099ab8e4(&ppppuStack_a8);
LAB_109915138:
    ppppppuVar6 = (undefined ******)&ppppuStack_a8;
    func_0x0001099ab7c0();
  }
  else {
LAB_109914f9c:
    iVar22 = (int)param_4;
    uVar16 = (uint)param_3;
    if (param_1 == (undefined ******)0x0) {
      ppppuStack_a8 = (undefined ****)0x0;
      uStack_50 = 0;
      pppppuStack_90 = (undefined *****)0x0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      pcVar5 = FUN_1099aa768;
      iVar22 = 3;
      FUN_1099a9f0c(&ppppuStack_a8,&UNK_10f589d5c,0x85,3,FUN_1099aa768,0);
      pppppuVar8 = (undefined *****)&UNK_10f589de5;
      uVar16 = 0x21;
      FUN_1092b4db8(pppppuStack_a0 + 0xea8);
      goto LAB_109915138;
    }
    if ((int)param_2 < (int)uVar15) {
      if (iVar17 == 1) {
        do {
          ppppuStack_a8 = (undefined ****)CONCAT44(ppppuStack_a8._4_4_,(int)param_2);
          ppppppuVar6 = (undefined ******)param_5[3];
          if (ppppppuVar6 == (undefined ******)0x0) {
            func_0x000104c501e4();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x109915104);
            (*pcVar5)();
          }
          pppppuVar8 = &ppppuStack_a8;
          (*(code *)(*ppppppuVar6)[6])();
          iVar22 = (int)param_4;
          uVar16 = (uint)param_3;
          uVar1 = (int)param_2 + 1;
          param_2 = (undefined *****)(ulong)uVar1;
        } while (uVar15 != uVar1);
      }
      else {
        ppppuStack_a8 = (undefined ****)&PTR_FUN_110b1d2b0;
        pcVar5 = (code *)&ppppuStack_a8;
        pppppuStack_a0 = (undefined *****)param_5;
        pppppuStack_90 = &ppppuStack_a8;
        uVar16 = uVar15;
        iVar22 = iVar17;
        FUN_10991514c(param_1);
        ppppppuVar6 = (undefined ******)pppppuStack_90;
        param_5 = (undefined ******)&ppppuStack_a8;
        if (pppppuStack_90 == &ppppuStack_a8) {
          lVar18 = 0x20;
        }
        else {
          pppppuVar8 = param_2;
          if ((undefined ******)pppppuStack_90 == (undefined ******)0x0) goto LAB_109915030;
          lVar18 = 0x28;
        }
        (**(code **)((long)*pppppuStack_90 + lVar18))();
        pppppuVar8 = param_2;
      }
    }
LAB_109915030:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return ppppppuVar6;
    }
    ___stack_chk_fail();
    if ((undefined ******)pppppuStack_90 == param_5) {
      lVar18 = 0x20;
LAB_109915128:
      (**(code **)((long)*pppppuStack_90 + lVar18))();
    }
    else if ((undefined ******)pppppuStack_90 != (undefined ******)0x0) {
      lVar18 = 0x28;
      goto LAB_109915128;
    }
  }
  __Unwind_Resume();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_1c8 = (undefined *****)CONCAT44(pppppuStack_1c8._4_4_,iVar22);
  uStack_1f8 = (undefined ******)((ulong)uStack_1f8._4_4_ << 0x20);
  ppppppuVar11 = ppppppuVar6;
  if (iVar22 < 1) {
    ppppppuVar13 = &pppppuStack_1c8;
    FUN_109904144(ppppppuVar13,&uStack_1f8,&UNK_10f589d4c);
    ppppppuVar11 = (undefined ******)0x0;
    uStack_1f8 = ppppppuVar13;
    if (ppppppuVar13 == (undefined ******)0x0) goto LAB_1099151a0;
    FUN_1099ab8e4(&pppppuStack_1c8,&UNK_10f589d5c,0xae,&uStack_1f8);
  }
  else {
LAB_1099151a0:
    if (ppppppuVar6 != (undefined ******)0x0) {
      iVar21 = (int)pppppuVar8;
      iVar17 = uVar16 - iVar21;
      if (iVar17 != 0 && iVar21 <= (int)uVar16) {
        if (iVar22 == 1) {
          FUN_1099896d4(&pppppuStack_1c8,1);
          ppppppuVar6 = &pppppuStack_1c8;
          uStack_1f8 = &pppppuStack_1c8;
          FUN_1099897f8();
          pppppuStack_1f0 = (undefined *****)CONCAT44(pppppuStack_1f0._4_4_,(int)ppppppuVar6);
          do {
            pppppuStack_1e0 = (undefined *****)CONCAT44(pppppuStack_1e0._4_4_,(int)ppppppuVar6);
            iVar22 = (int)pppppuVar8;
            pppppuVar8 = *(undefined ******)((long)pcVar5 + 0x18);
            iStack_1cc = iVar22;
            if (pppppuVar8 == (undefined *****)0x0) {
              func_0x000104c501e4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1099155c0);
              (*pcVar5)();
            }
            (*(code *)(*pppppuVar8)[6])(pppppuVar8,&pppppuStack_1e0,&iStack_1cc);
            pppppuVar8 = (undefined *****)(ulong)(iVar22 + 1U);
          } while (uVar16 != iVar22 + 1U);
          FUN_109989934(&pppppuStack_1c8,ppppppuVar6);
          uStack_130 = 0;
          lVar18 = (long)puStack_148 - (long)puStack_150;
          puVar4 = puStack_148;
          while (uVar12 = lVar18 >> 3, puStack_148 = puVar4, 2 < uVar12) {
            __ZdlPv(*puStack_150);
            puStack_150 = puStack_150 + 1;
            puVar4 = puStack_148;
            lVar18 = (long)puStack_148 - (long)puStack_150;
          }
          if (uVar12 == 1) {
            uStack_138 = 0x200;
          }
          else if (uVar12 == 2) {
            uStack_138 = 0x400;
          }
          puVar19 = puStack_150;
          if (puStack_150 != puVar4) {
            do {
              puVar20 = puVar19 + 1;
              __ZdlPv(*puVar19);
              puVar19 = puVar20;
            } while (puVar20 != puVar4);
            if (puStack_148 != puStack_150) {
              puStack_148 = (undefined8 *)
                            ((long)puStack_148 +
                            ((long)puStack_150 + (7 - (long)puStack_148) & 0xfffffffffffffff8U));
            }
          }
          if (lStack_158 != 0) {
            __ZdlPv();
          }
          __ZNSt3__118condition_variableD1Ev(&uStack_188);
          ppppppuVar11 = &pppppuStack_1c8;
          __ZNSt3__15mutexD1Ev();
        }
        else {
          if (iVar22 <= iVar17) {
            iVar17 = iVar22;
          }
          ppppppuVar9 = (undefined ******)0x170;
          __Znwm();
          *(int *)ppppppuVar9 = iVar21;
          *(uint *)((long)ppppppuVar9 + 4) = uVar16;
          ppppppuVar9[2] = (undefined *****)0x32aaaba7;
          *(int *)(ppppppuVar9 + 1) = iVar17;
          *(undefined4 *)((long)ppppppuVar9 + 0xc) = 0;
          ppppppuVar9[4] = (undefined *****)0x0;
          ppppppuVar9[3] = (undefined *****)0x0;
          ppppppuVar9[6] = (undefined *****)0x0;
          ppppppuVar9[5] = (undefined *****)0x0;
          ppppppuVar9[8] = (undefined *****)0x0;
          ppppppuVar9[7] = (undefined *****)0x0;
          ppppppuVar9[9] = (undefined *****)0x0;
          FUN_1099896d4(ppppppuVar9 + 10,iVar17);
          ppppppuVar13 = ppppppuVar9 + 0x1f;
          *ppppppuVar13 = (undefined *****)0x32aaaba7;
          ppppppuVar9[0x21] = (undefined *****)0x0;
          ppppppuVar9[0x20] = (undefined *****)0x0;
          ppppppuVar9[0x23] = (undefined *****)0x0;
          ppppppuVar9[0x22] = (undefined *****)0x0;
          ppppppuVar9[0x25] = (undefined *****)0x0;
          ppppppuVar9[0x24] = (undefined *****)0x0;
          ppppppuVar9[0x26] = (undefined *****)0x0;
          ppppppuVar9[0x27] = (undefined *****)0x3cb0b1bb;
          ppppppuVar9[0x29] = (undefined *****)0x0;
          ppppppuVar9[0x28] = (undefined *****)0x0;
          ppppppuVar9[0x2b] = (undefined *****)0x0;
          ppppppuVar9[0x2a] = (undefined *****)0x0;
          *(undefined8 *)((long)ppppppuVar9 + 0x164) = 0;
          *(undefined8 *)((long)ppppppuVar9 + 0x15c) = 0;
          *(int *)((long)ppppppuVar9 + 0x16c) = iVar17;
          ppppppuVar10 = (undefined ******)0x20;
          pppppuStack_1e0 = (undefined *****)ppppppuVar9;
          pppppuStack_1c8 = (undefined *****)ppppppuVar9;
          __Znwm();
          ppppppuVar23 = ppppppuVar10 + 1;
          *ppppppuVar23 = (undefined *****)0x0;
          *ppppppuVar10 = (undefined *****)&PTR_FUN_110b1d330;
          ppppppuVar10[2] = (undefined *****)0x0;
          ppppppuVar10[3] = (undefined *****)ppppppuVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar23,0x10);
            if (bVar3) {
              *ppppppuVar23 = (undefined *****)((long)*ppppppuVar23 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uStack_1f8 = ppppppuVar9;
          pppppuStack_1f0 = (undefined *****)ppppppuVar10;
          pppppuStack_1e8 = (undefined *****)pcVar5;
          pppppuStack_1d8 = (undefined *****)ppppppuVar10;
          if (0 < iVar17) {
            iVar22 = 0;
            do {
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar23,0x10);
                if (bVar3) {
                  *ppppppuVar23 = (undefined *****)((long)*ppppppuVar23 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pppppuStack_1b0 = (undefined *****)0x0;
              ppppppuVar11 = (undefined ******)0x20;
              __Znwm();
              *ppppppuVar11 = (undefined *****)&PTR_FUN_110b1d380;
              ppppppuVar11[1] = (undefined *****)ppppppuVar9;
              ppppppuVar11[2] = (undefined *****)ppppppuVar10;
              ppppppuVar11[3] = (undefined *****)pcVar5;
              pppppuStack_1b0 = (undefined *****)ppppppuVar11;
              FUN_1099168bc(ppppppuVar6 + 1,&pppppuStack_1c8);
              if ((undefined ******)pppppuStack_1b0 == &pppppuStack_1c8) {
                lVar18 = 0x20;
LAB_10991539c:
                (**(code **)((long)*pppppuStack_1b0 + lVar18))();
              }
              else if ((undefined ******)pppppuStack_1b0 != (undefined ******)0x0) {
                lVar18 = 0x28;
                goto LAB_10991539c;
              }
              iVar22 = iVar22 + 1;
            } while (iVar22 != iVar17);
          }
          do {
            uVar12 = 0;
            FUN_1099157f4();
          } while ((uVar12 & 1) != 0);
          cStack_1c0 = '\x01';
          pppppuStack_1c8 = (undefined *****)ppppppuVar13;
          __ZNSt3__15mutex4lockEv(ppppppuVar13);
          if (*(int *)(ppppppuVar9 + 0x2d) == *(int *)((long)ppppppuVar9 + 0x16c)) {
LAB_109915414:
            ppppppuVar11 = ppppppuVar13;
            __ZNSt3__15mutex6unlockEv();
          }
          else {
            do {
              ppppppuVar11 = ppppppuVar9 + 0x27;
              __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                        (ppppppuVar11,&pppppuStack_1c8);
            } while (*(int *)(ppppppuVar9 + 0x2d) != *(int *)((long)ppppppuVar9 + 0x16c));
            ppppppuVar13 = (undefined ******)pppppuStack_1c8;
            if (cStack_1c0 == '\x01') goto LAB_109915414;
          }
          do {
            pppppuVar8 = *ppppppuVar23;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar23,0x10);
            if (bVar3) {
              *ppppppuVar23 = (undefined *****)((long)pppppuVar8 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppppuVar8 == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar10)[2])(ppppppuVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppuVar11 = ppppppuVar10;
          }
          ppppppuVar6 = (undefined ******)pppppuStack_1d8;
          if ((undefined ******)pppppuStack_1d8 != (undefined ******)0x0) {
            ppppppuVar13 = (undefined ******)(pppppuStack_1d8 + 1);
            do {
              pppppuVar8 = *ppppppuVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
              if (bVar3) {
                *ppppppuVar13 = (undefined *****)((long)pppppuVar8 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (pppppuVar8 == (undefined *****)0x0) {
              (*(code *)(*pppppuStack_1d8)[2])(pppppuStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppuVar11 = ppppppuVar6;
            }
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
        return ppppppuVar11;
      }
      ___stack_chk_fail();
      FUN_10991599c(&uStack_1f8);
      func_0x0001099159f4(&pppppuStack_1e0);
      goto LAB_109915694;
    }
    pppppuStack_1c8 = (undefined *****)0x0;
    uStack_170 = 0;
    pppppuStack_1b0 = (undefined *****)0x0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_178 = 0;
    FUN_1099a9f0c(&pppppuStack_1c8,&UNK_10f589d5c,0xaf,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT71(uStack_1bf,cStack_1c0) + 0x7540,&UNK_10f589de5,0x21);
  }
  ppppppuVar11 = &pppppuStack_1c8;
  func_0x0001099ab7c0();
LAB_109915694:
  __Unwind_Resume();
  FUN_109989934(*ppppppuVar11,*(undefined4 *)(ppppppuVar11 + 1));
  return ppppppuVar11;
}



/* Entry: 10991514c; end: 10991569b;  */

long ****** FUN_10991514c(long ******param_1,int param_2,int param_3,int param_4,long *****param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long ****pppplVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  ulong uVar10;
  long ******pppppplVar11;
  long lVar12;
  long *****ppppplVar13;
  undefined8 *puVar14;
  long ******pppppplVar16;
  int iVar17;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  long ****pppplStack_138;
  long *****ppppplStack_130;
  long *****ppppplStack_128;
  int iStack_11c;
  long *****ppppplStack_118;
  char cStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  long *****ppppplStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 *puVar15;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_118 = (long *****)CONCAT44(ppppplStack_118._4_4_,param_4);
  ppppplStack_148 = (long *****)((ulong)ppppplStack_148 & 0xffffffff00000000);
  pppppplVar9 = param_1;
  if (param_4 < 1) {
    pppppplVar11 = &ppppplStack_118;
    FUN_109904144(pppppplVar11,&ppppplStack_148,&UNK_10f589d4c);
    pppppplVar9 = (long ******)0x0;
    ppppplStack_148 = (long *****)pppppplVar11;
    if (pppppplVar11 == (long ******)0x0) goto LAB_1099151a0;
    FUN_1099ab8e4(&ppppplStack_118,&UNK_10f589d5c,0xae,&ppppplStack_148);
  }
  else {
LAB_1099151a0:
    if (param_1 != (long ******)0x0) {
      iVar3 = param_3 - param_2;
      if (iVar3 != 0 && param_2 <= param_3) {
        if (param_4 == 1) {
          FUN_1099896d4(&ppppplStack_118,1);
          pppppplVar9 = &ppppplStack_118;
          ppppplStack_148 = (long *****)&ppppplStack_118;
          FUN_1099897f8();
          ppppplStack_140 = (long *****)CONCAT44(ppppplStack_140._4_4_,(int)pppppplVar9);
          do {
            ppppplStack_130 = (long *****)CONCAT44(ppppplStack_130._4_4_,(int)pppppplVar9);
            pppplVar6 = param_5[3];
            iStack_11c = param_2;
            if (pppplVar6 == (long ****)0x0) {
              func_0x000104c501e4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1099155c0);
              (*pcVar5)();
            }
            (*(code *)(*pppplVar6)[6])(pppplVar6,&ppppplStack_130,&iStack_11c);
            param_2 = param_2 + 1;
          } while (param_3 != param_2);
          FUN_109989934(&ppppplStack_118,pppppplVar9);
          uStack_80 = 0;
          lVar12 = (long)puStack_98 - (long)puStack_a0;
          puVar4 = puStack_98;
          while (uVar10 = lVar12 >> 3, puStack_98 = puVar4, 2 < uVar10) {
            __ZdlPv(*puStack_a0);
            puStack_a0 = puStack_a0 + 1;
            puVar4 = puStack_98;
            lVar12 = (long)puStack_98 - (long)puStack_a0;
          }
          if (uVar10 == 1) {
            uStack_88 = 0x200;
          }
          else if (uVar10 == 2) {
            uStack_88 = 0x400;
          }
          puVar14 = puStack_a0;
          if (puStack_a0 != puVar4) {
            do {
              puVar15 = puVar14 + 1;
              __ZdlPv(*puVar14);
              puVar14 = puVar15;
            } while (puVar15 != puVar4);
            if (puStack_98 != puStack_a0) {
              puStack_98 = (undefined8 *)
                           ((long)puStack_98 +
                           ((long)puStack_a0 + (7 - (long)puStack_98) & 0xfffffffffffffff8U));
            }
          }
          if (lStack_a8 != 0) {
            __ZdlPv();
          }
          __ZNSt3__118condition_variableD1Ev(&uStack_d8);
          pppppplVar9 = &ppppplStack_118;
          __ZNSt3__15mutexD1Ev();
        }
        else {
          if (param_4 <= iVar3) {
            iVar3 = param_4;
          }
          pppppplVar7 = (long ******)0x170;
          __Znwm();
          *(int *)pppppplVar7 = param_2;
          *(int *)((long)pppppplVar7 + 4) = param_3;
          pppppplVar7[2] = (long *****)0x32aaaba7;
          *(int *)(pppppplVar7 + 1) = iVar3;
          *(undefined4 *)((long)pppppplVar7 + 0xc) = 0;
          pppppplVar7[4] = (long *****)0x0;
          pppppplVar7[3] = (long *****)0x0;
          pppppplVar7[6] = (long *****)0x0;
          pppppplVar7[5] = (long *****)0x0;
          pppppplVar7[8] = (long *****)0x0;
          pppppplVar7[7] = (long *****)0x0;
          pppppplVar7[9] = (long *****)0x0;
          FUN_1099896d4(pppppplVar7 + 10,iVar3);
          pppppplVar11 = pppppplVar7 + 0x1f;
          *pppppplVar11 = (long *****)0x32aaaba7;
          pppppplVar7[0x21] = (long *****)0x0;
          pppppplVar7[0x20] = (long *****)0x0;
          pppppplVar7[0x23] = (long *****)0x0;
          pppppplVar7[0x22] = (long *****)0x0;
          pppppplVar7[0x25] = (long *****)0x0;
          pppppplVar7[0x24] = (long *****)0x0;
          pppppplVar7[0x26] = (long *****)0x0;
          pppppplVar7[0x27] = (long *****)0x3cb0b1bb;
          pppppplVar7[0x29] = (long *****)0x0;
          pppppplVar7[0x28] = (long *****)0x0;
          pppppplVar7[0x2b] = (long *****)0x0;
          pppppplVar7[0x2a] = (long *****)0x0;
          *(undefined8 *)((long)pppppplVar7 + 0x164) = 0;
          *(undefined8 *)((long)pppppplVar7 + 0x15c) = 0;
          *(int *)((long)pppppplVar7 + 0x16c) = iVar3;
          pppppplVar8 = (long ******)0x20;
          ppppplStack_130 = (long *****)pppppplVar7;
          ppppplStack_118 = (long *****)pppppplVar7;
          __Znwm();
          pppppplVar16 = pppppplVar8 + 1;
          *pppppplVar16 = (long *****)0x0;
          *pppppplVar8 = (long *****)&PTR_FUN_110b1d330;
          pppppplVar8[2] = (long *****)0x0;
          pppppplVar8[3] = (long *****)pppppplVar7;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
            if (bVar2) {
              *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          ppppplStack_148 = (long *****)pppppplVar7;
          ppppplStack_140 = (long *****)pppppplVar8;
          pppplStack_138 = (long ****)param_5;
          ppppplStack_128 = (long *****)pppppplVar8;
          if (0 < iVar3) {
            iVar17 = 0;
            do {
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
                if (bVar2) {
                  *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              ppppplStack_100 = (long *****)0x0;
              pppppplVar9 = (long ******)0x20;
              __Znwm();
              *pppppplVar9 = (long *****)&PTR_FUN_110b1d380;
              pppppplVar9[1] = (long *****)pppppplVar7;
              pppppplVar9[2] = (long *****)pppppplVar8;
              pppppplVar9[3] = param_5;
              ppppplStack_100 = (long *****)pppppplVar9;
              FUN_1099168bc(param_1 + 1,&ppppplStack_118);
              if ((long ******)ppppplStack_100 == &ppppplStack_118) {
                lVar12 = 0x20;
LAB_10991539c:
                (**(code **)((long)*ppppplStack_100 + lVar12))();
              }
              else if ((long ******)ppppplStack_100 != (long ******)0x0) {
                lVar12 = 0x28;
                goto LAB_10991539c;
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 != iVar3);
          }
          do {
            uVar10 = 0;
            FUN_1099157f4();
          } while ((uVar10 & 1) != 0);
          cStack_110 = '\x01';
          ppppplStack_118 = (long *****)pppppplVar11;
          __ZNSt3__15mutex4lockEv(pppppplVar11);
          if (*(int *)(pppppplVar7 + 0x2d) == *(int *)((long)pppppplVar7 + 0x16c)) {
LAB_109915414:
            pppppplVar9 = pppppplVar11;
            __ZNSt3__15mutex6unlockEv();
          }
          else {
            do {
              pppppplVar9 = pppppplVar7 + 0x27;
              __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                        (pppppplVar9,&ppppplStack_118);
            } while (*(int *)(pppppplVar7 + 0x2d) != *(int *)((long)pppppplVar7 + 0x16c));
            pppppplVar11 = (long ******)ppppplStack_118;
            if (cStack_110 == '\x01') goto LAB_109915414;
          }
          do {
            ppppplVar13 = *pppppplVar16;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
            if (bVar2) {
              *pppppplVar16 = (long *****)((long)ppppplVar13 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppplVar13 == (long *****)0x0) {
            (*(code *)(*pppppplVar8)[2])(pppppplVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppplVar9 = pppppplVar8;
          }
          pppppplVar11 = (long ******)ppppplStack_128;
          if ((long ******)ppppplStack_128 != (long ******)0x0) {
            pppppplVar7 = (long ******)(ppppplStack_128 + 1);
            do {
              ppppplVar13 = *pppppplVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppplVar7,0x10);
              if (bVar2) {
                *pppppplVar7 = (long *****)((long)ppppplVar13 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppplVar13 == (long *****)0x0) {
              (*(code *)(*ppppplStack_128)[2])(ppppplStack_128);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppppplVar9 = pppppplVar11;
            }
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return pppppplVar9;
      }
      ___stack_chk_fail();
      FUN_10991599c(&ppppplStack_148);
      func_0x0001099159f4(&ppppplStack_130);
      goto LAB_109915694;
    }
    ppppplStack_118 = (long *****)0x0;
    uStack_c0 = 0;
    ppppplStack_100 = (long *****)0x0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0;
    FUN_1099a9f0c(&ppppplStack_118,&UNK_10f589d5c,0xaf,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT71(uStack_10f,cStack_110) + 0x7540,&UNK_10f589de5,0x21);
  }
  pppppplVar9 = &ppppplStack_118;
  func_0x0001099ab7c0();
LAB_109915694:
  __Unwind_Resume();
  FUN_109989934(*pppppplVar9,*(undefined4 *)(pppppplVar9 + 1));
  return pppppplVar9;
}



/* Entry: 10991569c; end: 1099156cb;  */

undefined8 * FUN_10991569c(undefined8 *param_1)

{
  FUN_109989934(*param_1,*(undefined4 *)(param_1 + 1));
  return param_1;
}



/* Entry: 1099156cc; end: 10991579b;  */

void FUN_1099156cc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = *(undefined8 **)(param_1 + 0x80);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x78) + 8);
    *(undefined8 **)(param_1 + 0x78) = puVar5;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10991573c;
    uVar4 = 0x400;
  }
  *(undefined8 *)(param_1 + 0x90) = uVar4;
LAB_10991573c:
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      __ZdlPv(*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
    lVar3 = *(long *)(param_1 + 0x80);
    if (lVar3 != *(long *)(param_1 + 0x78)) {
      *(ulong *)(param_1 + 0x80) =
           lVar3 + ((*(long *)(param_1 + 0x78) - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10991579c; end: 1099157f3;  */

long FUN_10991579c(long param_1)

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



/* Entry: 1099157f4; end: 10991599b;  */

int * FUN_1099157f4(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long lStack_c0;
  int iStack_b8;
  int aiStack_b0 [24];
  int *piStack_50;
  int iStack_44;
  
  lVar12 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar12 + 0x10);
  lVar10 = *param_1;
  iVar2 = *(int *)(lVar10 + 8);
  iVar3 = *(int *)(lVar10 + 0xc);
  if (iVar3 < iVar2) {
    *(int *)(lVar10 + 0xc) = iVar3 + 1;
    __ZNSt3__15mutex6unlockEv(lVar12 + 0x10);
    lVar10 = *param_1 + 0x50;
    lStack_c0 = lVar10;
    FUN_1099897f8();
    iVar7 = (int)lVar10;
    piVar13 = (int *)*param_1;
    iVar11 = piVar13[1];
    iStack_b8 = iVar7;
    for (iVar14 = *piVar13 + iVar3; iVar14 < iVar11; iVar14 = piVar13[2] + iVar14) {
      piStack_50 = (int *)CONCAT44(piStack_50._4_4_,iVar14);
      plVar8 = *(long **)(param_1[2] + 0x18);
      aiStack_b0[0] = iVar7;
      if (plVar8 == (long *)0x0) {
        func_0x000104c501e4();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109915948);
        (*pcVar6)();
      }
      (**(code **)(*plVar8 + 0x30))(plVar8,aiStack_b0,&piStack_50);
      piVar13 = (int *)*param_1;
      iVar11 = piVar13[1];
    }
    __ZNSt3__15mutex4lockEv(piVar13 + 0x3e);
    iVar14 = piVar13[0x5a];
    aiStack_b0[0] = iVar14 + 1;
    piVar13[0x5a] = aiStack_b0[0];
    iVar11 = piVar13[0x5b];
    iStack_44 = iVar11;
    iVar7 = aiStack_b0[0];
    if (iVar11 <= iVar14) {
      piVar9 = aiStack_b0;
      FUN_109904144(piVar9,&iStack_44,&UNK_10f589e07);
      if (piVar9 != (int *)0x0) {
        piStack_50 = piVar9;
        FUN_1099ab8e4(aiStack_b0,&UNK_10f589d5c,0x45,&piStack_50);
        piVar9 = aiStack_b0;
        func_0x0001099ab7c0();
        __ZNSt3__15mutex6unlockEv(piVar13 + 0x3e);
        FUN_10991569c(&lStack_c0);
        __Unwind_Resume();
        plVar8 = *(long **)(piVar9 + 2);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar10 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        return piVar9;
      }
      iVar7 = piVar13[0x5a];
      iVar11 = piVar13[0x5b];
      piStack_50 = (int *)0x0;
    }
    if (iVar7 == iVar11) {
      __ZNSt3__118condition_variable10notify_oneEv(piVar13 + 0x4e);
    }
    __ZNSt3__15mutex6unlockEv(piVar13 + 0x3e);
    FUN_109989934(lStack_c0,lVar10);
  }
  else {
    __ZNSt3__15mutex6unlockEv(lVar12 + 0x10);
  }
  return (int *)(ulong)(iVar3 < iVar2);
}



/* Entry: 10991599c; end: 109915a4b;  */

long FUN_10991599c(long param_1)

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



/* Entry: 109915a4c; end: 109915a53;  */

void FUN_109915a4c(void)

{
  return;
}



/* Entry: 109915a54; end: 109915a87;  */

void FUN_109915a54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110b1d2b0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109915a88; end: 109915aa3;  */

void FUN_109915a88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110b1d2b0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109915aa4; end: 109915ae3;  */

/* WARNING: Removing unreachable block (ram,0x000109915b18) */

long * FUN_109915aa4(long param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 uStack_14;
  
  uStack_14 = *param_3;
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x000104c501e4();
    if (*(undefined **)(param_2 + 8) == &DAT_10e00cca5) {
      plVar1 = plVar1 + 1;
    }
    else {
      plVar1 = (long *)0x0;
    }
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_14);
  return plVar1;
}



/* Entry: 109915ae4; end: 109915b37;  */

/* WARNING: Removing unreachable block (ram,0x000109915b18) */

long FUN_109915ae4(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00cca5) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109915b38; end: 109915b43;  */

undefined ** FUN_109915b38(void)

{
  return &PTR_DAT_110b1d310;
}



/* Entry: 109915b44; end: 109915c47;  */

long * FUN_109915b44(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return param_1;
  }
  __ZNSt3__118condition_variableD1Ev(lVar5 + 0x138);
  __ZNSt3__15mutexD1Ev(lVar5 + 0xf8);
  puVar6 = *(undefined8 **)(lVar5 + 200);
  puVar1 = *(undefined8 **)(lVar5 + 0xd0);
  *(undefined8 *)(lVar5 + 0xe8) = 0;
  lVar3 = (long)puVar1 - (long)puVar6;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar6);
    puVar1 = *(undefined8 **)(lVar5 + 0xd0);
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 200) + 8);
    *(undefined8 **)(lVar5 + 200) = puVar6;
    lVar3 = (long)puVar1 - (long)puVar6;
  }
  if (uVar2 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_109915bd0;
    uVar4 = 0x400;
  }
  *(undefined8 *)(lVar5 + 0xe0) = uVar4;
LAB_109915bd0:
  if (puVar6 != puVar1) {
    do {
      puVar7 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puVar1);
    lVar3 = *(long *)(lVar5 + 0xd0);
    if (lVar3 != *(long *)(lVar5 + 200)) {
      *(ulong *)(lVar5 + 0xd0) =
           lVar3 + ((*(long *)(lVar5 + 200) - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*(long *)(lVar5 + 0xc0) != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(lVar5 + 0x90);
  __ZNSt3__15mutexD1Ev(lVar5 + 0x50);
  __ZNSt3__15mutexD1Ev(lVar5 + 0x10);
  __ZdlPv(lVar5);
  return param_1;
}



/* Entry: 109915c48; end: 109915c4b;  */

void FUN_109915c48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109915c4c; end: 109915c5f;  */

void FUN_109915c4c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109915c60; end: 109915d63;  */

void FUN_109915c60(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    return;
  }
  __ZNSt3__118condition_variableD1Ev(lVar5 + 0x138);
  __ZNSt3__15mutexD1Ev(lVar5 + 0xf8);
  puVar6 = *(undefined8 **)(lVar5 + 200);
  puVar1 = *(undefined8 **)(lVar5 + 0xd0);
  *(undefined8 *)(lVar5 + 0xe8) = 0;
  lVar3 = (long)puVar1 - (long)puVar6;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar6);
    puVar1 = *(undefined8 **)(lVar5 + 0xd0);
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 200) + 8);
    *(undefined8 **)(lVar5 + 200) = puVar6;
    lVar3 = (long)puVar1 - (long)puVar6;
  }
  if (uVar2 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_109915cf4;
    uVar4 = 0x400;
  }
  *(undefined8 *)(lVar5 + 0xe0) = uVar4;
LAB_109915cf4:
  if (puVar6 != puVar1) {
    do {
      puVar7 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puVar1);
    lVar3 = *(long *)(lVar5 + 0xd0);
    if (lVar3 != *(long *)(lVar5 + 200)) {
      *(ulong *)(lVar5 + 0xd0) =
           lVar3 + ((*(long *)(lVar5 + 200) - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*(long *)(lVar5 + 0xc0) != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(lVar5 + 0x90);
  __ZNSt3__15mutexD1Ev(lVar5 + 0x50);
  __ZNSt3__15mutexD1Ev(lVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar5);
  return;
}



/* Entry: 109915d64; end: 109915db3;  */

/* WARNING: Removing unreachable block (ram,0x000109915d90) */

undefined8 FUN_109915d64(undefined8 param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) != &UNK_10e00cd94) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109915db4; end: 109915db7;  */

void FUN_109915db4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109915db8; end: 109915edb;  */

undefined8 * FUN_109915db8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b1d380;
  plVar5 = (long *)param_1[2];
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



/* Entry: 109915edc; end: 109915f17;  */

void FUN_109915edc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110b1d380;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 109915f18; end: 109915fc7;  */

void FUN_109915f18(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 109915fc8; end: 109915fcf;  */

int * FUN_109915fc8(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  int iVar14;
  long lStack_c0;
  int iStack_b8;
  int aiStack_b0 [24];
  int *piStack_50;
  int iStack_44;
  
  plVar12 = (long *)(param_1 + 8);
  lVar11 = *plVar12;
  __ZNSt3__15mutex4lockEv(lVar11 + 0x10);
  lVar9 = *plVar12;
  iVar1 = *(int *)(lVar9 + 8);
  iVar2 = *(int *)(lVar9 + 0xc);
  if (iVar2 < iVar1) {
    *(int *)(lVar9 + 0xc) = iVar2 + 1;
    __ZNSt3__15mutex6unlockEv(lVar11 + 0x10);
    lVar9 = *plVar12 + 0x50;
    lStack_c0 = lVar9;
    FUN_1099897f8();
    iVar6 = (int)lVar9;
    piVar13 = (int *)*plVar12;
    iVar10 = piVar13[1];
    iStack_b8 = iVar6;
    for (iVar14 = *piVar13 + iVar2; iVar14 < iVar10; iVar14 = piVar13[2] + iVar14) {
      piStack_50 = (int *)CONCAT44(piStack_50._4_4_,iVar14);
      plVar7 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
      aiStack_b0[0] = iVar6;
      if (plVar7 == (long *)0x0) {
        func_0x000104c501e4();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109915948);
        (*pcVar5)();
      }
      (**(code **)(*plVar7 + 0x30))(plVar7,aiStack_b0,&piStack_50);
      piVar13 = (int *)*plVar12;
      iVar10 = piVar13[1];
    }
    __ZNSt3__15mutex4lockEv(piVar13 + 0x3e);
    iVar14 = piVar13[0x5a];
    aiStack_b0[0] = iVar14 + 1;
    piVar13[0x5a] = aiStack_b0[0];
    iVar10 = piVar13[0x5b];
    iStack_44 = iVar10;
    iVar6 = aiStack_b0[0];
    if (iVar10 <= iVar14) {
      piVar8 = aiStack_b0;
      FUN_109904144(piVar8,&iStack_44,&UNK_10f589e07);
      if (piVar8 != (int *)0x0) {
        piStack_50 = piVar8;
        FUN_1099ab8e4(aiStack_b0,&UNK_10f589d5c,0x45,&piStack_50);
        piVar8 = aiStack_b0;
        func_0x0001099ab7c0();
        __ZNSt3__15mutex6unlockEv(piVar13 + 0x3e);
        FUN_10991569c(&lStack_c0);
        __Unwind_Resume();
        plVar12 = *(long **)(piVar8 + 2);
        if (plVar12 != (long *)0x0) {
          plVar7 = plVar12 + 1;
          do {
            lVar9 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        return piVar8;
      }
      iVar6 = piVar13[0x5a];
      iVar10 = piVar13[0x5b];
      piStack_50 = (int *)0x0;
    }
    if (iVar6 == iVar10) {
      __ZNSt3__118condition_variable10notify_oneEv(piVar13 + 0x4e);
    }
    __ZNSt3__15mutex6unlockEv(piVar13 + 0x3e);
    FUN_109989934(lStack_c0,lVar9);
  }
  else {
    __ZNSt3__15mutex6unlockEv(lVar11 + 0x10);
  }
  return (int *)(ulong)(iVar2 < iVar1);
}



/* Entry: 109915fd0; end: 109916023;  */

/* WARNING: Removing unreachable block (ram,0x000109916004) */

long FUN_109915fd0(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00ce81) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109916024; end: 10991602f;  */

undefined ** FUN_109916024(void)

{
  return &PTR_DAT_110b1d3e0;
}



/* Entry: 109916030; end: 10991630b;  */

void FUN_109916030(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  
  iVar5 = (int)param_1 + 0xc0;
  __ZNSt3__15mutex4lockEv();
  plVar18 = (long *)(param_1 + 0xa8);
  iVar15 = (int)((ulong)(*(long *)(param_1 + 0xb0) - *plVar18) >> 3);
  if (iVar15 < param_2) {
    __ZNSt3__16thread20hardware_concurrencyEv();
    iVar2 = iVar5;
    if (param_2 <= iVar5) {
      iVar2 = param_2;
    }
    if (iVar5 != 0) {
      param_2 = iVar2;
    }
    param_2 = param_2 - iVar15;
    if (0 < param_2) {
      iVar5 = 0;
      uVar16 = *(ulong *)(param_1 + 0xb0);
      do {
        if (uVar16 < *(ulong *)(param_1 + 0xb8)) {
          uVar6 = 8;
          __Znwm();
          __ZNSt3__115__thread_structC1Ev();
          puVar7 = (undefined8 *)0x20;
          __Znwm();
          *puVar7 = uVar6;
          puVar7[1] = FUN_10991651c;
          puVar7[2] = 0;
          puVar7[3] = param_1;
          uVar13 = uVar16;
          _pthread_create(uVar16,0,FUN_1099169ac,puVar7);
          if ((int)uVar13 != 0) {
            __ZNSt3__120__throw_system_errorEiPKc();
            goto LAB_10991626c;
          }
          uVar16 = uVar16 + 8;
          *(ulong *)(param_1 + 0xb0) = uVar16;
        }
        else {
          lVar17 = uVar16 - *plVar18;
          uVar16 = (lVar17 >> 3) + 1;
          if (uVar16 >> 0x3d != 0) {
            FUN_1096c7644();
LAB_10991626c:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109916270);
            (*pcVar4)();
          }
          uVar10 = *(ulong *)(param_1 + 0xb8) - *plVar18;
          uVar13 = (long)uVar10 >> 2;
          if (uVar13 <= uVar16) {
            uVar13 = uVar16;
          }
          if (0x7ffffffffffffff7 < uVar10) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            lVar8 = 0;
          }
          else {
            if (uVar13 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10991626c;
            }
            lVar8 = uVar13 << 3;
            __Znwm();
          }
          lVar17 = lVar8 + lVar17;
          uVar6 = 8;
          __Znwm();
          __ZNSt3__115__thread_structC1Ev();
          puVar7 = (undefined8 *)0x20;
          __Znwm();
          *puVar7 = uVar6;
          puVar7[1] = FUN_10991651c;
          puVar7[2] = 0;
          puVar7[3] = param_1;
          lVar9 = lVar17;
          _pthread_create(lVar17,0,FUN_1099169ac,puVar7);
          if ((int)lVar9 != 0) {
            __ZNSt3__120__throw_system_errorEiPKc();
            goto LAB_10991626c;
          }
          puVar7 = *(undefined8 **)(param_1 + 0xa8);
          puVar3 = *(undefined8 **)(param_1 + 0xb0);
          puVar1 = (undefined8 *)((long)puVar7 + (lVar17 - (long)puVar3));
          puVar11 = puVar7;
          puVar14 = puVar1;
          if (puVar3 != puVar7) {
            do {
              *puVar14 = *puVar11;
              puVar12 = puVar11 + 1;
              *puVar11 = 0;
              puVar11 = puVar12;
              puVar14 = puVar14 + 1;
            } while (puVar12 != puVar3);
            do {
              __ZNSt3__16threadD1Ev();
              puVar7 = puVar7 + 1;
            } while (puVar7 != puVar3);
            puVar7 = (undefined8 *)*plVar18;
          }
          uVar16 = lVar17 + 8;
          *(undefined8 **)(param_1 + 0xa8) = puVar1;
          *(ulong *)(param_1 + 0xb0) = uVar16;
          *(ulong *)(param_1 + 0xb8) = lVar8 + uVar13 * 8;
          if (puVar7 != (undefined8 *)0x0) {
            __ZdlPv();
          }
        }
        *(ulong *)(param_1 + 0xb0) = uVar16;
        iVar5 = iVar5 + 1;
      } while (iVar5 != param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xc0);
  return;
}



/* Entry: 10991630c; end: 10991651b;  */

void FUN_10991630c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0xc0);
  __ZNSt3__15mutex4lockEv(param_1);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x40);
  __ZNSt3__15mutex6unlockEv(param_1);
  lVar4 = *(long *)(param_1 + 0xb0);
  for (lVar8 = *(long *)(param_1 + 0xa8); lVar8 != lVar4; lVar8 = lVar8 + 8) {
    __ZNSt3__16thread4joinEv(lVar8);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc0);
  lVar8 = *(long *)(param_1 + 0xa8);
  if (lVar8 != 0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    lVar4 = lVar8;
    if (lVar2 != lVar8) {
      do {
        lVar2 = lVar2 + -8;
        __ZNSt3__16threadD1Ev();
      } while (lVar2 != lVar8);
      lVar4 = *(long *)(param_1 + 0xa8);
    }
    *(long *)(param_1 + 0xb0) = lVar8;
    __ZdlPv(lVar4);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x78);
  puVar11 = puVar9;
  if (*(undefined8 **)(param_1 + 0x80) != puVar9) {
    uVar7 = *(ulong *)(param_1 + 0x90);
    plVar12 = puVar9 + (uVar7 >> 7);
    plVar5 = (long *)*plVar12;
    plVar13 = plVar5 + (uVar7 & 0x7f) * 4;
    uVar7 = *(long *)(param_1 + 0x98) + uVar7;
    plVar1 = (long *)(puVar9[uVar7 >> 7] + (uVar7 & 0x7f) * 0x20);
    puVar11 = *(undefined8 **)(param_1 + 0x80);
    if (plVar13 != plVar1) {
      do {
        plVar3 = (long *)plVar13[3];
        if (plVar3 == plVar13) {
          lVar8 = 0x20;
LAB_109916414:
          (**(code **)(*plVar3 + lVar8))();
          plVar5 = (long *)*plVar12;
        }
        else if (plVar3 != (long *)0x0) {
          lVar8 = 0x28;
          goto LAB_109916414;
        }
        plVar13 = plVar13 + 4;
        if ((long)plVar13 - (long)plVar5 == 0x1000) {
          plVar12 = plVar12 + 1;
          plVar5 = (long *)*plVar12;
          plVar13 = plVar5;
        }
      } while (plVar13 != plVar1);
      puVar9 = *(undefined8 **)(param_1 + 0x78);
      puVar11 = *(undefined8 **)(param_1 + 0x80);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar8 = (long)puVar11 - (long)puVar9;
  while (uVar7 = lVar8 >> 3, 2 < uVar7) {
    __ZdlPv(*puVar9);
    puVar11 = *(undefined8 **)(param_1 + 0x80);
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x78) + 8);
    *(undefined8 **)(param_1 + 0x78) = puVar9;
    lVar8 = (long)puVar11 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar6 = 0x40;
  }
  else {
    if (uVar7 != 2) goto LAB_1099164ac;
    uVar6 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x90) = uVar6;
LAB_1099164ac:
  if (puVar9 != puVar11) {
    do {
      puVar10 = puVar9 + 1;
      __ZdlPv(*puVar9);
      puVar9 = puVar10;
    } while (puVar10 != puVar11);
    lVar8 = *(long *)(param_1 + 0x80);
    if (lVar8 != *(long *)(param_1 + 0x78)) {
      *(ulong *)(param_1 + 0x80) =
           lVar8 + ((*(long *)(param_1 + 0x78) - lVar8) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10991651c; end: 1099168bb;  */

void FUN_10991651c(long param_1,long *param_2)

{
  bool bVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_b0;
  char cStack_a8;
  long alStack_a0 [3];
  long *plStack_88;
  long alStack_80 [3];
  long *plStack_68;
  long alStack_60 [3];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_88 = (long *)0x0;
  do {
    cStack_a8 = '\x01';
    lStack_b0 = param_1;
    __ZNSt3__15mutex4lockEv(param_1);
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      do {
        if (*(long *)(param_1 + 0x98) != 0) goto LAB_109916598;
        param_2 = &lStack_b0;
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x40);
      } while ((*(byte *)(param_1 + 0xa0) & 1) != 0);
    }
    if (*(long *)(param_1 + 0x98) == 0) {
      bVar1 = false;
    }
    else {
LAB_109916598:
      plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + (*(ulong *)(param_1 + 0x90) >> 7) * 8)
                       + (*(ulong *)(param_1 + 0x90) & 0x7f) * 0x20);
      plVar3 = (long *)plVar4[3];
      if (plVar3 == (long *)0x0) {
        plStack_68 = (long *)0x0;
LAB_109916614:
        plVar4 = plStack_68;
        if (plStack_88 != alStack_a0) {
          plStack_68 = plStack_88;
          plStack_88 = plVar4;
          goto LAB_109916718;
        }
        param_2 = alStack_80;
        (**(code **)(*plStack_88 + 0x18))();
        (**(code **)(*plStack_88 + 0x20))();
        plStack_88 = plStack_68;
        plStack_68 = alStack_80;
LAB_10991672c:
        lVar5 = 0x20;
LAB_109916730:
        (**(code **)(*plStack_68 + lVar5))();
      }
      else {
        if (plVar3 == plVar4) {
          param_2 = alStack_80;
          plStack_68 = alStack_80;
          (**(code **)(*plVar3 + 0x18))();
        }
        else {
          (**(code **)(*plVar3 + 0x10))();
          plStack_68 = plVar3;
        }
        if (plStack_68 != alStack_80) goto LAB_109916614;
        if (plStack_88 == alStack_a0) {
          (**(code **)(*plStack_68 + 0x18))(plStack_68,alStack_60);
          (**(code **)(*plStack_68 + 0x20))();
          plStack_68 = (long *)0x0;
          (**(code **)(*plStack_88 + 0x18))(plStack_88,alStack_80);
          (**(code **)(*plStack_88 + 0x20))();
          plStack_88 = (long *)0x0;
          param_2 = alStack_a0;
          plStack_68 = alStack_80;
          (**(code **)(alStack_60[0] + 0x18))(alStack_60);
          (**(code **)(alStack_60[0] + 0x20))(alStack_60);
          plStack_88 = alStack_a0;
        }
        else {
          param_2 = alStack_a0;
          (**(code **)(*plStack_68 + 0x18))(plStack_68);
          (**(code **)(*plStack_68 + 0x20))();
          plStack_68 = plStack_88;
          plStack_88 = alStack_a0;
        }
LAB_109916718:
        if (plStack_68 == alStack_80) goto LAB_10991672c;
        if (plStack_68 != (long *)0x0) {
          lVar5 = 0x28;
          goto LAB_109916730;
        }
      }
      uVar6 = *(ulong *)(param_1 + 0x90);
      plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + (uVar6 >> 7) * 8) +
                       (uVar6 & 0x7f) * 0x20);
      plVar3 = (long *)plVar4[3];
      if (plVar3 == plVar4) {
        lVar5 = 0x20;
LAB_109916770:
        (**(code **)(*plVar3 + lVar5))();
        uVar6 = *(ulong *)(param_1 + 0x90);
      }
      else if (plVar3 != (long *)0x0) {
        lVar5 = 0x28;
        goto LAB_109916770;
      }
      *(ulong *)(param_1 + 0x90) = uVar6 + 1;
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
      if (0xff < uVar6 + 1) {
        __ZdlPv(**(undefined8 **)(param_1 + 0x78));
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -0x80;
      }
      bVar1 = true;
    }
    if (cStack_a8 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_b0);
    }
    if (!bVar1) {
      plVar4 = plStack_88;
      if (plStack_88 == alStack_a0) {
        lVar5 = 0x20;
LAB_10991680c:
        (**(code **)(*plStack_88 + lVar5))();
      }
      else if (plStack_88 != (long *)0x0) {
        lVar5 = 0x28;
        goto LAB_10991680c;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
      if (cStack_a8 == '\x01') {
        __ZNSt3__15mutex6unlockEv(lStack_b0);
      }
      if (plStack_88 == alStack_a0) {
        lVar5 = 0x20;
LAB_1099168a8:
        (**(code **)(*plStack_88 + lVar5))();
      }
      else if (plStack_88 != (long *)0x0) {
        lVar5 = 0x28;
        goto LAB_1099168a8;
      }
      __Unwind_Resume();
      __ZNSt3__15mutex4lockEv();
      lVar7 = plVar4[0xf];
      lVar8 = plVar4[0x10];
      lVar5 = 0;
      if (lVar8 != lVar7) {
        lVar5 = (lVar8 - lVar7) * 0x10 + -1;
      }
      if (lVar5 == plVar4[0x13] + plVar4[0x12]) {
        func_0x00010834f9ec(plVar4 + 0xe);
        lVar7 = plVar4[0xf];
        lVar8 = plVar4[0x10];
      }
      if (lVar8 == lVar7) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(lVar7 + ((ulong)(plVar4[0x13] + plVar4[0x12]) >> 7) * 8) +
                (plVar4[0x13] + plVar4[0x12] & 0x7fU) * 0x20;
      }
      plVar3 = (long *)param_2[3];
      if (plVar3 != (long *)0x0) {
        if (plVar3 == param_2) {
          *(long *)(lVar5 + 0x18) = lVar5;
          (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],lVar5);
          goto LAB_109916970;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      *(long **)(lVar5 + 0x18) = plVar3;
LAB_109916970:
      plVar4[0x13] = plVar4[0x13] + 1;
      __ZNSt3__118condition_variable10notify_oneEv(plVar4 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar4);
      return;
    }
    if (plStack_88 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109916850);
      (*pcVar2)();
    }
    (**(code **)(*plStack_88 + 0x30))();
  } while( true );
}



/* Entry: 1099168bc; end: 1099169ab;  */

void FUN_1099168bc(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  __ZNSt3__15mutex4lockEv();
  lVar3 = *(long *)(param_1 + 0x78);
  lVar4 = *(long *)(param_1 + 0x80);
  lVar5 = 0;
  if (lVar4 != lVar3) {
    lVar5 = (lVar4 - lVar3) * 0x10 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0x90)) {
    func_0x00010834f9ec(param_1 + 0x70);
    lVar3 = *(long *)(param_1 + 0x78);
    lVar4 = *(long *)(param_1 + 0x80);
  }
  if (lVar4 == lVar3) {
    lVar5 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0x90);
    lVar5 = *(long *)(lVar3 + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
  }
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    if (plVar2 == param_2) {
      *(long *)(lVar5 + 0x18) = lVar5;
      (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],lVar5);
      goto LAB_109916970;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *(long **)(lVar5 + 0x18) = plVar2;
LAB_109916970:
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  __ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
  return;
}



/* Entry: 1099169ac; end: 109916a37;  */

undefined8 FUN_1099169ac(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  
  plVar1 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  lVar2 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*plVar1,lVar2);
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(*(long *)(param_1[3] + (param_1[2] >> 1)) + ((ulong)pcVar3 & 0xffffffff));
  }
  (*pcVar3)();
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZNSt3__115__thread_structD1Ev();
    __ZdlPv();
  }
  __ZdlPv(param_1);
  return 0;
}



/* Entry: 109916a38; end: 109916aff;  */

undefined8 * FUN_109916a38(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 109916b00; end: 109916bbb;  */

void FUN_109916b00(uint param_1,double *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  double *pdVar3;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    pdVar3 = param_2;
    do {
      if (param_2 == (double *)0x0) {
        puVar1 = &UNK_10f589e23;
      }
      else {
        puVar1 = &UNK_10f589e41;
        if (*pdVar3 == 1e+302) {
          puVar1 = &UNK_10f589e32;
        }
      }
      FUN_109988e8c(param_3,puVar1);
      pdVar3 = pdVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109916bbc; end: 109916c8b;  */

void FUN_109916bbc(long *param_1,long *param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  
  if (param_4 == 0) {
    lVar7 = *param_2;
    uVar4 = *(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8);
    if (0 < (int)(uVar4 >> 2)) {
      uVar6 = 0;
      iVar1 = *(int *)(lVar7 + 0x20);
      lVar7 = param_1[1];
      do {
        lVar5 = *(long *)(param_2[2] + uVar6 * 8);
        if ((*(byte *)(lVar5 + 0xc) & 1) == 0) {
          plVar3 = *(long **)(lVar5 + 0x10);
          if (plVar3 == (long *)0x0) {
            iVar2 = *(int *)(lVar5 + 8);
          }
          else {
            (**(code **)(*plVar3 + 0x18))();
            iVar2 = (int)plVar3;
          }
          if (iVar2 == 0) goto LAB_109987424;
          *(long *)(param_5 + uVar6 * 8) = lVar7;
          plVar3 = *(long **)(lVar5 + 0x10);
          if (plVar3 == (long *)0x0) {
            iVar2 = *(int *)(lVar5 + 8);
          }
          else {
            (**(code **)(*plVar3 + 0x18))();
            iVar2 = (int)plVar3;
          }
          lVar7 = lVar7 + (long)(iVar2 * iVar1) * 8;
        }
        else {
LAB_109987424:
          *(undefined8 *)(param_5 + uVar6 * 8) = 0;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar4 >> 2 & 0x7fffffff) != uVar6);
    }
    return;
  }
  uVar4 = *(long *)(*param_2 + 0x10) - *(long *)(*param_2 + 8);
  if (0 < (int)(uVar4 >> 2)) {
    uVar6 = 0;
    lVar7 = *(long *)(param_4 + 0x18);
    piVar8 = *(int **)(*param_1 + (long)param_3 * 8);
    do {
      lVar5 = *(long *)(param_2[2] + uVar6 * 8);
      if ((*(byte *)(lVar5 + 0xc) & 1) == 0) {
        plVar3 = *(long **)(lVar5 + 0x10);
        if (plVar3 == (long *)0x0) {
          iVar1 = *(int *)(lVar5 + 8);
        }
        else {
          (**(code **)(*plVar3 + 0x18))();
          iVar1 = (int)plVar3;
        }
        if (iVar1 == 0) goto LAB_109916c48;
        *(long *)(param_5 + uVar6 * 8) = lVar7 + (long)*piVar8 * 8;
        piVar8 = piVar8 + 1;
      }
      else {
LAB_109916c48:
        *(undefined8 *)(param_5 + uVar6 * 8) = 0;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar4 >> 2 & 0x7fffffff) != uVar6);
  }
  return;
}



/* Entry: 109916c8c; end: 109916dcb;  */

undefined8 * FUN_109916c8c(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  *param_1 = &PTR_FUN_110b1d400;
  param_1[1] = 0;
  puVar7 = (undefined4 *)**(long **)(param_2 + 0x20);
  lVar1 = (*(long **)(param_2 + 0x20))[1] - (long)puVar7;
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    if ((ulong)(lVar1 >> 3) >> 0x3e != 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109916d80);
      (*pcVar2)();
    }
    lVar6 = lVar1 >> 1;
    __Znwm();
    _bzero();
    uVar5 = 0;
    do {
      *(undefined4 *)(lVar6 + uVar5 * 4) = *puVar7;
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 2;
    } while (lVar1 >> 3 != uVar5);
  }
  uVar3 = 0x40;
  __Znwm();
  FUN_109919714();
  plVar4 = (long *)param_1[1];
  param_1[1] = uVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lVar6 != 0) {
    __ZdlPv(lVar6);
  }
  return param_1;
}


