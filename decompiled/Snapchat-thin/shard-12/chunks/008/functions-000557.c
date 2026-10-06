/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109916dcc; end: 109916e4b;  */

undefined8 * FUN_109916dcc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_110b1d400;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 109916e4c; end: 10991755b;  */

undefined8 FUN_109916e4c(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  double *pdVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  double *pdVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  double *pdVar28;
  long lVar29;
  int *piVar30;
  ulong uVar31;
  ulong uVar32;
  double *pdVar33;
  double *pdVar34;
  double dVar35;
  double dVar36;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar9 = *(long *)(param_2 + 0x18);
  plVar2 = *(long **)(param_2 + 0x20);
  FUN_109919d84(*(undefined8 *)(param_1 + 8));
  lVar29 = plVar2[3];
  lVar15 = plVar2[4];
  if (lVar15 != lVar29) {
    uVar20 = 0;
    do {
      puVar1 = (uint *)(lVar29 + uVar20 * 0x20);
      piVar30 = *(int **)(puVar1 + 2);
      piVar3 = *(int **)(puVar1 + 4);
      if (piVar30 != piVar3) {
        uVar4 = *puVar1;
        uVar31 = (ulong)(int)uVar4;
        lVar29 = uVar31 - 1;
        do {
          lVar15 = (long)*piVar30;
          iVar18 = *(int *)(*plVar2 + lVar15 * 8);
          uVar32 = (ulong)iVar18;
          if (iVar18 == 0) {
            pdVar28 = (double *)0x0;
          }
          else {
            lVar17 = 0;
            if (uVar32 != 0) {
              lVar17 = 0x7fffffffffffffff / (long)uVar32;
            }
            if (lVar17 < (long)uVar32 || (ulong)((long)iVar18 * (long)iVar18) >> 0x3d != 0) {
LAB_109917508:
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10991752c);
              (*pcVar6)();
            }
            iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + lVar15 * 4);
            pdVar34 = (double *)**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x20) + lVar15 * 8);
            lVar15 = (long)piVar30[1];
            pdVar33 = (double *)((long)iVar18 * (long)iVar18 * 8);
            pdVar28 = pdVar33;
            _malloc();
            if (pdVar28 == (double *)0x0) goto LAB_109917508;
            pdVar19 = (double *)(lVar9 + lVar15 * 8);
            if (((int)uVar4 < 1) || ((long)(0x14 - uVar31) <= (long)(uVar32 * 2))) {
              _bzero(pdVar28,pdVar33);
              if (uVar4 == 0) goto LAB_10991737c;
              if (iVar18 != 1) {
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_90 = uVar32;
                uStack_88 = uVar32;
                uStack_80 = uVar31;
                if ((bRam00000001132dfa18 & 1) == 0) {
                  iVar7 = 0x132dfa18;
                  ___cxa_guard_acquire();
                  if (iVar7 != 0) {
                    uRam00000001132dfa08 = 0x80000;
                    uRam00000001132dfa00 = 0x4000;
                    lRam00000001132dfa10 = 0x80000;
                    ___cxa_guard_release(0x1132dfa18);
                  }
                }
                uVar21 = uStack_80;
                uVar16 = uStack_90;
                if ((long)uStack_90 <= (long)uStack_88) {
                  uVar16 = uStack_88;
                }
                uVar11 = uStack_80;
                if ((long)uStack_80 <= (long)uVar16) {
                  uVar11 = uVar16;
                }
                uVar16 = uVar21;
                if (0x2f < (long)uVar11) {
                  uVar16 = (long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8;
                  if ((long)uVar16 < 2) {
                    uVar16 = 1;
                  }
                  if ((long)uVar16 < (long)uStack_80) {
                    uVar11 = 0;
                    if (uVar16 != 0) {
                      uVar11 = uStack_80 / uVar16;
                    }
                    uVar27 = uStack_80 - uVar11 * uVar16;
                    uStack_80 = uVar16;
                    if (uVar27 != 0) {
                      lVar15 = uVar11 * 8 + 8;
                      lVar17 = 0;
                      if (lVar15 != 0) {
                        lVar17 = (long)(uVar16 + ~uVar27) / lVar15;
                      }
                      uStack_80 = uVar16 + lVar17 * -8;
                    }
                  }
                  uVar11 = (uRam00000001132dfa00 - 0xc0) + uStack_90 * uStack_80 * -8;
                  if ((long)uVar11 < (long)(uStack_80 * 0x20)) {
                    uVar27 = 0;
                    if (uVar16 << 5 != 0) {
                      uVar27 = 0x480000 / (uVar16 << 5);
                    }
                  }
                  else {
                    uVar27 = 0;
                    if (uStack_80 << 3 != 0) {
                      uVar27 = uVar11 / (uStack_80 << 3);
                    }
                  }
                  uVar16 = 0;
                  if (uStack_80 << 4 != 0) {
                    uVar16 = 0x180000 / (uStack_80 << 4);
                  }
                  if ((long)uVar16 <= (long)uVar27) {
                    uVar27 = uVar16;
                  }
                  uVar27 = uVar27 & 0xfffffffffffffffc;
                  uVar16 = uStack_80;
                  if ((long)uVar27 < (long)uStack_88) {
                    lVar15 = 0;
                    if (uVar27 != 0) {
                      lVar15 = (long)uStack_88 / (long)uVar27;
                    }
                    lVar17 = uStack_88 - lVar15 * uVar27;
                    uStack_88 = uVar27;
                    if (lVar17 != 0) {
                      lVar15 = lVar15 * 4 + 4;
                      lVar24 = 0;
                      if (lVar15 != 0) {
                        lVar24 = (long)(uVar27 - lVar17) / lVar15;
                      }
                      uStack_88 = uVar27 + lVar24 * -4;
                    }
                  }
                  else if (uVar21 == uStack_80) {
                    uVar27 = uVar21 * uStack_88 * 8;
                    uVar11 = uStack_90;
                    uVar16 = uRam00000001132dfa00;
                    if (0x400 < (long)uVar27) {
                      if (0x23f < (long)uStack_90) {
                        uVar11 = 0x240;
                      }
                      uVar16 = uRam00000001132dfa08;
                      if (lRam00000001132dfa10 == 0 || 0x8000 < uVar27) {
                        uVar16 = 0x180000;
                        uVar11 = uStack_90;
                      }
                    }
                    uVar27 = 0;
                    if (uVar21 * 0x18 != 0) {
                      uVar27 = uVar16 / (uVar21 * 0x18);
                    }
                    if ((long)uVar27 <= (long)uVar11) {
                      uVar11 = uVar27;
                    }
                    if ((long)uVar11 < 7) {
                      uVar16 = uVar21;
                      if (uVar11 == 0) goto LAB_109917328;
                    }
                    else {
                      uVar11 = ((uVar11 / 6) * 2 + uVar11 / 6) * 2;
                    }
                    lVar15 = 0;
                    if (uVar11 != 0) {
                      lVar15 = (long)uStack_90 / (long)uVar11;
                    }
                    lVar17 = uStack_90 - lVar15 * uVar11;
                    uVar16 = uVar21;
                    uStack_90 = uVar11;
                    if (lVar17 != 0) {
                      lVar24 = lVar15 * 6 + 6;
                      lVar15 = 0;
                      if (lVar24 != 0) {
                        lVar15 = (long)(uVar11 - lVar17) / lVar24;
                      }
                      uStack_90 = uVar11 + lVar15 * -6;
                    }
                  }
                }
LAB_109917328:
                lStack_78 = uStack_90 * uVar16;
                lStack_70 = uVar16 * uStack_88;
                FUN_109404694(0x3ff0000000000000,uVar32,uVar32,uVar31,pdVar19,uVar32,pdVar19,uVar32,
                              pdVar28,1,uVar32,&uStack_a0,0);
                _free(uStack_a0);
                _free(uStack_98);
                goto LAB_10991737c;
              }
              dVar35 = *pdVar19 * *pdVar19;
              if (1 < (int)uVar4) {
                pdVar33 = (double *)(lVar9 + lVar15 * 8 + 8);
                pdVar19 = (double *)(lVar9 + 8 + lVar15 * 8);
                lVar15 = lVar29;
                do {
                  dVar35 = dVar35 + *pdVar19 * *pdVar33;
                  pdVar33 = pdVar33 + 1;
                  lVar15 = lVar15 + -1;
                  pdVar19 = pdVar19 + 1;
                } while (lVar15 != 0);
              }
              *pdVar28 = dVar35 + *pdVar28;
            }
            else {
              if (iVar18 < 1) goto LAB_1099173d4;
              uVar21 = 0;
              uVar16 = 0;
              lVar15 = lVar15 * 8;
              lVar25 = uVar32 * 8;
              lVar26 = lVar9 + lVar15 + uVar32 * 8;
              lVar24 = lVar26;
              lVar17 = lVar15;
              do {
                lVar8 = uVar16 * uVar32;
                if (0 < (long)uVar21) {
                  dVar35 = *pdVar19 * pdVar19[uVar16];
                  lVar10 = lVar29;
                  lVar12 = lVar9 + uVar32 * 8;
                  if (1 < uVar4) {
                    do {
                      dVar35 = dVar35 + *(double *)(lVar12 + lVar15) * *(double *)(lVar12 + lVar17);
                      lVar10 = lVar10 + -1;
                      lVar12 = lVar12 + lVar25;
                    } while (lVar10 != 0);
                  }
                  pdVar28[lVar8] = dVar35;
                }
                uVar11 = uVar32 - uVar21;
                lVar10 = (uVar11 & 0xfffffffffffffffe) + uVar21;
                if (1 < (long)uVar11) {
                  lVar12 = lVar15 + uVar21 * 8;
                  uVar27 = uVar21;
                  do {
                    dVar35 = 0.0;
                    dVar36 = 0.0;
                    lVar13 = lVar9;
                    uVar22 = uVar31;
                    do {
                      dVar35 = dVar35 + *(double *)(lVar13 + lVar12) * *(double *)(lVar13 + lVar17);
                      dVar36 = dVar36 + ((double *)(lVar13 + lVar12))[1] *
                                        *(double *)(lVar13 + lVar17);
                      lVar13 = lVar13 + lVar25;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                    (pdVar28 + lVar8 + uVar27)[1] = dVar36;
                    pdVar28[lVar8 + uVar27] = dVar35;
                    uVar27 = uVar27 + 2;
                    lVar12 = lVar12 + 0x10;
                  } while ((long)uVar27 < lVar10);
                }
                if (lVar10 < (long)uVar32) {
                  lVar12 = lVar26 + (uVar11 * 8 & 0xfffffffffffffff0) + uVar21 * 8;
                  do {
                    dVar35 = pdVar19[lVar10] * pdVar19[uVar16];
                    if (1 < uVar4) {
                      lVar13 = 0;
                      lVar14 = lVar29;
                      do {
                        dVar35 = dVar35 + *(double *)(lVar12 + lVar13) *
                                          *(double *)(lVar24 + lVar13);
                        lVar13 = lVar13 + lVar25;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                    }
                    pdVar28[lVar8 + lVar10] = dVar35;
                    lVar10 = lVar10 + 1;
                    lVar12 = lVar12 + 8;
                  } while (lVar10 < (long)uVar32);
                }
                uVar11 = uVar21 + (uVar32 & 1);
                uVar22 = uVar11 & 1;
                uVar27 = -uVar22;
                if ((long)uVar11 < 0 == SCARRY8(uVar21,uVar32 & 1)) {
                  uVar27 = uVar22;
                }
                uVar21 = uVar32;
                if ((long)uVar27 <= (long)uVar32) {
                  uVar21 = uVar27;
                }
                uVar16 = uVar16 + 1;
                lVar17 = lVar17 + 8;
                lVar24 = lVar24 + 8;
              } while (uVar16 != uVar32);
LAB_10991737c:
              if (iVar18 < 1) goto LAB_1099173d4;
            }
            uVar16 = 0;
            pdVar33 = pdVar28;
            uVar21 = uVar32;
            pdVar19 = pdVar34;
            pdVar23 = pdVar28;
            do {
              do {
                *pdVar34 = *pdVar33 + *pdVar34;
                uVar21 = uVar21 - 1;
                pdVar34 = pdVar34 + 1;
                pdVar33 = pdVar33 + uVar32;
              } while (uVar21 != 0);
              uVar16 = uVar16 + 1;
              pdVar33 = pdVar23 + 1;
              pdVar34 = pdVar19 + iVar5;
              uVar21 = uVar32;
              pdVar19 = pdVar34;
              pdVar23 = pdVar33;
            } while (uVar16 != uVar32);
          }
LAB_1099173d4:
          _free(pdVar28);
          piVar30 = piVar30 + 2;
        } while (piVar30 != piVar3);
        lVar29 = plVar2[3];
        lVar15 = plVar2[4];
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < (ulong)(lVar15 - lVar29 >> 5));
  }
  if (param_3 == 0) {
    lVar9 = *(long *)(param_1 + 8);
  }
  else {
    lVar29 = *plVar2;
    lVar9 = *(long *)(param_1 + 8);
    lVar15 = plVar2[1] - lVar29;
    if (lVar15 != 0) {
      lVar17 = 0;
      iVar18 = 0;
      lVar24 = *(long *)(lVar9 + 8);
      lVar26 = *(long *)(lVar9 + 0x20);
      do {
        iVar5 = *(int *)(lVar29 + lVar17 * 8);
        lVar25 = (long)iVar5;
        if (0 < iVar5) {
          iVar7 = *(int *)(lVar24 + (long)(int)lVar17 * 4);
          pdVar28 = (double *)**(long **)(lVar26 + (long)(int)lVar17 * 8);
          pdVar34 = (double *)(param_3 + (long)iVar18 * 8);
          do {
            *pdVar28 = *pdVar34 * *pdVar34 + *pdVar28;
            pdVar28 = pdVar28 + (long)iVar7 + 1;
            lVar25 = lVar25 + -1;
            pdVar34 = pdVar34 + 1;
          } while (lVar25 != 0);
        }
        iVar18 = iVar5 + iVar18;
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar15 >> 3);
    }
  }
  FUN_109919e60(lVar9);
  return 1;
}



/* Entry: 10991755c; end: 10991759b;  */

double ** FUN_10991755c(long param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  double **ppdVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  double *pdStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  double *pdStack_d0;
  long lStack_c8;
  double *pdStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppdVar3 = *(double ***)(param_1 + 8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (double *)0x0) {
    pdStack_b8 = (double *)0x0;
    uStack_60 = 0;
    uStack_a0 = 0;
    lStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&pdStack_b8,&UNK_10f589f79,0x88,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b0 + 0x7540,&UNK_10f58a023,0x1b);
  }
  else if (param_3 == (double *)0x0) {
    pdStack_b8 = (double *)0x0;
    uStack_60 = 0;
    uStack_a0 = 0;
    lStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&pdStack_b8,&UNK_10f589f79,0x89,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b0 + 0x7540,&UNK_10f58a03f,0x1b);
  }
  else {
    pdVar4 = ppdVar3[1];
    pdVar1 = ppdVar3[2];
    if (pdVar4 != pdVar1) {
      pdVar5 = (double *)ppdVar3[7][5];
      do {
        iVar2 = *(int *)pdVar4;
        lVar6 = (long)iVar2;
        uStack_d8 = 0x3ff0000000000000;
        pdStack_f0 = param_3;
        lStack_e8 = lVar6;
        if (iVar2 == 1) {
          *param_3 = *pdVar5 * *param_2 + *param_3;
        }
        else {
          ppdVar3 = &pdStack_b8;
          pdStack_d0 = param_2;
          lStack_c8 = lVar6;
          pdStack_b8 = pdVar5;
          lStack_b0 = lVar6;
          lStack_a8 = lVar6;
          FUN_10991ab6c(ppdVar3,&pdStack_d0,&pdStack_f0,&uStack_d8);
        }
        param_2 = param_2 + lVar6;
        param_3 = param_3 + lVar6;
        pdVar5 = pdVar5 + (uint)(iVar2 * iVar2);
        pdVar4 = (double *)((long)pdVar4 + 4);
      } while (pdVar4 != pdVar1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return ppdVar3;
    }
    ___stack_chk_fail();
  }
  ppdVar3 = &pdStack_b8;
  func_0x0001099ab7c0();
  __Unwind_Resume();
  return (double **)(ulong)*(uint *)(ppdVar3[7] + 1);
}



/* Entry: 10991759c; end: 109917a37;  */

long * FUN_10991759c(long *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *extraout_x8;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  int iVar24;
  int iStack_d4;
  int aiStack_d0 [2];
  long lStack_c8;
  int *piStack_70;
  undefined4 uStack_64;
  
  plVar11 = param_1 + 1;
  param_1[2] = 0;
  *plVar11 = 0;
  *param_1 = param_3;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  iStack_d4 = *(int *)(param_2 + 4);
  uStack_64 = 0;
  aiStack_d0[0] = iStack_d4;
  if (iStack_d4 < 0) {
    piVar9 = aiStack_d0;
    FUN_109904144(piVar9,&uStack_64,&UNK_10f589e47);
    if (piVar9 != (int *)0x0) {
      piStack_70 = piVar9;
      FUN_1099aa6cc(aiStack_d0,&UNK_10f589e69,0x82,&piStack_70);
      puVar12 = &UNK_10f589ef7;
      FUN_109365950(lStack_c8 + 0x7540);
      piVar9 = aiStack_d0;
      func_0x0001099ab7c0();
      if (param_1[4] != 0) {
        param_1[5] = param_1[4];
        __ZdlPv();
      }
      if (*plVar11 != 0) {
        param_1[2] = *plVar11;
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar10 = *(undefined8 *)piVar9;
      FUN_1099794a4(uVar10);
      iVar20 = (int)puVar12;
      plVar11 = (long *)((long)iVar20 * 0x10 + 0x10);
      if (0xffffffffffffffef < (ulong)((long)iVar20 * 0x10) || iVar20 < 0) {
        plVar11 = (long *)0xffffffffffffffff;
      }
      __Znam();
      *plVar11 = 0x10;
      plVar11[1] = (long)iVar20;
      plVar22 = plVar11 + 2;
      if (iVar20 == 0) {
        *extraout_x8 = plVar22;
        plVar7 = plVar11;
      }
      else {
        plVar7 = plVar22;
        _bzero(plVar22,-((ulong)puVar12 >> 0x1f & 1) & 0xfffffff000000000 |
                       ((ulong)puVar12 & 0xffffffff) << 4);
        *extraout_x8 = plVar22;
        if (0 < iVar20) {
          uVar15 = (ulong)puVar12 & 0xffffffff;
          plVar11 = plVar11 + 3;
          do {
            plVar11[-1] = *(long *)(piVar9 + 2);
            plVar7 = plVar11;
            FUN_109987330(plVar11,uVar10);
            plVar11 = plVar11 + 2;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      return plVar7;
    }
    iStack_d4 = *(int *)(param_2 + 4);
    piStack_70 = (int *)0x0;
  }
  puVar14 = *(undefined8 **)(param_3 + 0x18);
  puVar19 = *(undefined8 **)(param_3 + 0x20);
  if (puVar14 == puVar19) {
    iVar20 = 0;
    iVar24 = 0;
    puVar19 = puVar14;
  }
  else {
    iVar24 = 0;
    iVar20 = 0;
    do {
      plVar22 = (long *)*puVar14;
      lVar13 = *plVar22;
      uVar15 = *(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8);
      if (0 < (int)(uVar15 >> 2)) {
        uVar18 = 0;
        iVar2 = *(int *)(lVar13 + 0x20);
        do {
          lVar13 = *(long *)(plVar22[2] + uVar18 * 8);
          if ((*(byte *)(lVar13 + 0xc) & 1) == 0) {
            plVar7 = *(long **)(lVar13 + 0x10);
            if (plVar7 == (long *)0x0) {
              iVar5 = *(int *)(lVar13 + 8);
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
              iVar5 = (int)plVar7;
            }
            if ((iVar5 != 0) && (iVar20 = iVar20 + 1, *(int *)(lVar13 + 0x28) < iStack_d4)) {
              plVar7 = *(long **)(lVar13 + 0x10);
              if (plVar7 == (long *)0x0) {
                iVar5 = *(int *)(lVar13 + 8);
              }
              else {
                (**(code **)(*plVar7 + 0x18))();
                iVar5 = (int)plVar7;
              }
              iVar24 = iVar24 + iVar5 * iVar2;
            }
          }
          uVar18 = uVar18 + 1;
        } while ((uVar15 >> 2 & 0x7fffffff) != uVar18);
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar19);
    puVar14 = *(undefined8 **)(param_3 + 0x20);
    puVar19 = *(undefined8 **)(param_3 + 0x18);
  }
  uVar15 = ((long)puVar14 - (long)puVar19) * 0x20000000 >> 0x20;
  lVar23 = param_1[1];
  lVar13 = param_1[2];
  lVar21 = lVar13 - lVar23;
  uVar18 = lVar21 >> 3;
  if (uVar18 < uVar15) {
    uVar18 = uVar15 - uVar18;
    if (uVar18 <= (ulong)(param_1[3] - lVar13 >> 3)) {
      _bzero(lVar13,uVar18 * 8);
      lVar13 = lVar13 + uVar18 * 8;
LAB_109917794:
      param_1[2] = lVar13;
      goto LAB_109917798;
    }
    if (((ulong)((long)puVar14 - (long)puVar19) >> 0x22 & 1) != 0) {
      FUN_109918074();
      goto LAB_1099179b4;
    }
    uVar16 = param_1[3] - lVar23;
    uVar17 = (long)uVar16 >> 2;
    if (uVar17 <= uVar15) {
      uVar17 = uVar15;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar17 = 0x1fffffffffffffff;
    }
    if (uVar17 >> 0x3d == 0) {
      lVar13 = uVar17 << 3;
      __Znwm();
      _bzero(lVar13 + lVar21,uVar18 * 8);
      _memcpy(lVar13,lVar23,lVar21);
      param_1[1] = lVar13;
      param_1[2] = lVar13 + lVar21 + uVar18 * 8;
      param_1[3] = lVar13 + uVar17 * 8;
      if (lVar23 != 0) {
        __ZdlPv(lVar23);
      }
      goto LAB_109917798;
    }
LAB_1099179a0:
    func_0x000104c4f740();
LAB_1099179b4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1099179b8);
    (*pcVar4)();
  }
  if (uVar15 < uVar18) {
    lVar13 = lVar23 + uVar15 * 8;
    goto LAB_109917794;
  }
LAB_109917798:
  uVar15 = (ulong)iVar20;
  piVar9 = (int *)param_1[4];
  lVar13 = param_1[5];
  lVar23 = lVar13 - (long)piVar9;
  uVar18 = lVar23 >> 2;
  piVar8 = piVar9;
  if (uVar18 < uVar15) {
    uVar18 = uVar15 - uVar18;
    if ((ulong)(param_1[6] - lVar13 >> 2) < uVar18) {
      if (iVar20 < 0) {
        FUN_10923f788();
        goto LAB_1099179b4;
      }
      uVar16 = param_1[6] - (long)piVar9;
      uVar17 = (long)uVar16 >> 1;
      if (uVar17 <= uVar15) {
        uVar17 = uVar15;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar17 = 0x3fffffffffffffff;
      }
      if (uVar17 >> 0x3e == 0) {
        piVar8 = (int *)(uVar17 << 2);
        __Znwm();
        _bzero((long)piVar8 + lVar23,uVar18 * 4);
        _memcpy(piVar8,piVar9,lVar23);
        param_1[4] = (long)piVar8;
        param_1[5] = (long)piVar8 + lVar23 + uVar18 * 4;
        param_1[6] = (long)(piVar8 + uVar17);
        if (piVar9 != (int *)0x0) {
          __ZdlPv(piVar9);
          piVar8 = (int *)param_1[4];
        }
        goto LAB_109917868;
      }
      goto LAB_1099179a0;
    }
    _bzero(lVar13,uVar18 * 4);
    piVar9 = (int *)(lVar13 + uVar18 * 4);
  }
  else {
    if (uVar18 <= uVar15) goto LAB_109917868;
    piVar9 = piVar9 + uVar15;
  }
  param_1[5] = (long)piVar9;
LAB_109917868:
  lVar13 = *(long *)(param_3 + 0x18);
  if (*(long *)(param_3 + 0x20) != lVar13) {
    uVar15 = 0;
    iVar20 = 0;
    do {
      plVar22 = *(long **)(lVar13 + uVar15 * 8);
      lVar13 = *plVar22;
      iVar2 = *(int *)(lVar13 + 0x20);
      uVar18 = *(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8);
      *(int **)(*plVar11 + uVar15 * 8) = piVar8;
      if (0 < (int)(uVar18 >> 2)) {
        uVar17 = 0;
        do {
          lVar13 = *(long *)(plVar22[2] + uVar17 * 8);
          if ((*(byte *)(lVar13 + 0xc) & 1) == 0) {
            iVar5 = *(int *)(lVar13 + 0x28);
            plVar7 = *(long **)(lVar13 + 0x10);
            if (plVar7 == (long *)0x0) {
              iVar6 = *(int *)(lVar13 + 8);
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
              iVar6 = (int)plVar7;
            }
            if (iVar6 != 0) {
              plVar7 = *(long **)(lVar13 + 0x10);
              if (plVar7 == (long *)0x0) {
                iVar6 = *(int *)(lVar13 + 8);
              }
              else {
                (**(code **)(*plVar7 + 0x18))();
                iVar6 = (int)plVar7;
              }
              iVar6 = iVar6 * iVar2;
              iVar1 = iVar6;
              iVar3 = iVar20;
              if (iStack_d4 <= iVar5) {
                iVar1 = 0;
                iVar3 = iVar24;
              }
              iVar20 = iVar1 + iVar20;
              iVar1 = 0;
              if (iStack_d4 <= iVar5) {
                iVar1 = iVar6;
              }
              iVar24 = iVar1 + iVar24;
              *piVar8 = iVar3;
              piVar8 = piVar8 + 1;
            }
          }
          uVar17 = uVar17 + 1;
        } while ((uVar18 >> 2 & 0x7fffffff) != uVar17);
      }
      uVar15 = uVar15 + 1;
      lVar13 = *(long *)(param_3 + 0x18);
    } while (uVar15 < (ulong)(*(long *)(param_3 + 0x20) - lVar13 >> 3));
  }
  return param_1;
}



/* Entry: 109917a38; end: 109917b0f;  */

void FUN_109917a38(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar2 = *param_2;
  FUN_1099794a4(uVar2);
  iVar4 = (int)param_3;
  puVar3 = (undefined8 *)((long)iVar4 * 0x10 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)iVar4 * 0x10) || iVar4 < 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x10;
  puVar3[1] = (long)iVar4;
  puVar1 = puVar3 + 2;
  if (iVar4 == 0) {
    *param_1 = puVar1;
  }
  else {
    _bzero(puVar1,-(param_3 >> 0x1f & 1) & 0xfffffff000000000 | (param_3 & 0xffffffff) << 4);
    *param_1 = puVar1;
    if (0 < iVar4) {
      param_3 = param_3 & 0xffffffff;
      puVar3 = puVar3 + 3;
      do {
        puVar3[-1] = param_2[1];
        FUN_109987330(puVar3,uVar2);
        puVar3 = puVar3 + 2;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  return;
}



/* Entry: 109917b10; end: 109917b73;  */

long * FUN_109917b10(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -8);
    if (*plVar3 != 0) {
      lVar4 = *plVar3 << 4;
      do {
        lVar1 = *(long *)((long)plVar3 + lVar4);
        *(undefined8 *)((long)plVar3 + lVar4) = 0;
        if (lVar1 != 0) {
          __ZdaPv();
        }
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    __ZdaPv(lVar2 + -0x10);
  }
  return param_1;
}



/* Entry: 109917b74; end: 109918073;  */

void FUN_109917b74(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined *puVar18;
  undefined1 (*pauVar19) [16];
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  ulong in_x4;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long *unaff_x20;
  int *unaff_x21;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 *puVar31;
  long unaff_x23;
  code ***pppcVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  undefined1 (*pauVar39) [16];
  ulong *unaff_x28;
  undefined1 auVar40 [16];
  undefined8 uStack_198;
  ulong *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  ulong *puStack_178;
  ulong uStack_170;
  long lStack_168;
  long *plStack_160;
  int *piStack_158;
  long *plStack_150;
  ulong *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  long lStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  undefined8 *puStack_e8;
  int iStack_dc;
  long *plStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  code **appcStack_70 [2];
  
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar36 = (ulong *)*param_2;
  uVar34 = *puVar36;
  plVar30 = (long *)(puVar36[1] - uVar34);
  puVar37 = puVar36;
  puStack_f8 = param_2;
  if (plVar30 != (long *)0x0) {
    if ((long)plVar30 < 0) {
LAB_109918034:
      FUN_1099041e8();
      goto LAB_109918038;
    }
    plVar8 = plVar30;
    __Znwm();
    _memset();
    param_2 = (ulong *)0x0;
    unaff_x20 = (long *)0x0;
    *puVar7 = plVar8;
    puVar7[1] = (undefined *)((long)plVar8 + (long)plVar30);
    unaff_x21 = (int *)((long)plVar8 + 4);
    unaff_x23 = 0xffffffff;
    puVar7[2] = (undefined *)((long)plVar8 + (long)plVar30);
    plVar30 = (long *)&UNK_10f589f24;
    do {
      iVar5 = *(int *)(*(long *)(uVar34 + (long)param_2 * 8) + 0x28);
      pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,iVar5);
      appcStack_70[0] = (code **)CONCAT44(appcStack_70[0]._4_4_,0xffffffff);
      unaff_x28 = puVar36;
      if (iVar5 == -1) {
        ppcVar9 = &pcStack_d0;
        FUN_109904144(ppcVar9,appcStack_70,&UNK_10f589f24);
        appcStack_70[0] = ppcVar9;
        if (ppcVar9 != (code **)0x0) goto LAB_10991803c;
        uVar34 = *puVar36;
      }
      lVar24 = *(long *)(uVar34 + (long)param_2 * 8);
      if ((*(byte *)(lVar24 + 0xc) & 1) != 0) {
LAB_109917fd4:
        pcStack_d0 = (code *)0x0;
        uStack_78 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        in_x4 = 0;
        pppcVar32 = (code ***)0x3;
        FUN_1099a9f0c(&pcStack_d0,&UNK_10f589e69,0xa3,3,FUN_1099aa768,0);
        pauVar19 = (undefined1 (*) [16])&UNK_10f589f47;
        puVar29 = (undefined8 *)0x31;
        FUN_1092b4db8(lStack_c8 + 0x7540);
        puStack_190 = puVar36;
        goto LAB_10991806c;
      }
      plVar8 = *(long **)(lVar24 + 0x10);
      if (plVar8 == (long *)0x0) {
        iVar5 = *(int *)(lVar24 + 8);
      }
      else {
        (**(code **)(*plVar8 + 0x18))();
        iVar5 = (int)plVar8;
      }
      if (iVar5 == 0) goto LAB_109917fd4;
      uVar34 = *puVar36;
      lVar24 = *(long *)(uVar34 + (long)param_2 * 8);
      plVar8 = *(long **)(lVar24 + 0x10);
      if (plVar8 == (long *)0x0) {
        iVar5 = *(int *)(lVar24 + 8);
      }
      else {
        (**(code **)(*plVar8 + 0x18))();
        iVar5 = (int)plVar8;
        uVar34 = *puVar36;
      }
      unaff_x21[-1] = iVar5;
      *unaff_x21 = (int)unaff_x20;
      unaff_x20 = (long *)(ulong)(uint)(iVar5 + (int)unaff_x20);
      param_2 = (ulong *)((long)param_2 + 1);
      unaff_x21 = unaff_x21 + 2;
    } while (param_2 < (ulong *)((long)(puVar36[1] - uVar34) >> 3));
    puVar37 = (ulong *)*puStack_f8;
  }
  uVar27 = puVar37[3];
  uVar25 = puVar37[4];
  lVar24 = uVar25 - uVar27;
  puStack_118 = param_1;
  puStack_110 = puVar7;
  if (lVar24 == 0) {
    puStack_e8 = (undefined8 *)0x0;
  }
  else {
    param_2 = (ulong *)(lVar24 >> 3);
    puVar36 = puVar37;
    if ((ulong)param_2 >> 0x3b != 0) {
LAB_109918038:
      func_0x0001099041fc();
LAB_10991803c:
      pauVar19 = (undefined1 (*) [16])&UNK_10f589e69;
      pppcVar32 = appcStack_70;
      puVar29 = (undefined8 *)0xa2;
      FUN_1099ab8e4(&pcStack_d0);
      puStack_190 = unaff_x28;
LAB_10991806c:
      func_0x0001099ab7c0(&pcStack_d0);
      pcStack_128 = FUN_109918074;
      pauVar13 = (undefined1 (*) [16])&DAT_10f62a4d8;
      puStack_130 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_138 = FUN_109918088;
      puStack_188 = puVar7;
      puStack_180 = param_1;
      puStack_178 = puVar36;
      uStack_170 = uVar34;
      lStack_168 = unaff_x23;
      plStack_160 = plVar30;
      piStack_158 = unaff_x21;
      plStack_150 = unaff_x20;
      puStack_148 = param_2;
      puStack_140 = (undefined1 *)&puStack_130;
LAB_1099180bc:
      puVar31 = (undefined8 *)(pauVar19[-1] + 8);
      pauVar22 = pauVar19 + -1;
      puVar7 = (undefined8 *)(pauVar19[-2] + 8);
      pauVar23 = pauVar13;
LAB_1099180d4:
      do {
        pauVar13 = pauVar23;
        uVar34 = (long)pauVar19 - (long)pauVar13 >> 3;
        if (uVar34 - 2 != 0 && 1 < (long)uVar34) {
          if (uVar34 != 3) {
            if (uVar34 == 4) {
              puVar18 = *pauVar13 + 8;
              (*(code *)*puVar29)(puVar18,pauVar13);
              pauVar19 = pauVar13 + 1;
              (*(code *)*puVar29)(pauVar19,*pauVar13 + 8);
              if (((ulong)puVar18 & 1) == 0) {
                if ((int)pauVar19 != 0) {
                  auVar40 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                     *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                  *(long *)pauVar13[1] = auVar40._8_8_;
                  *(long *)(*pauVar13 + 8) = auVar40._0_8_;
                  puVar18 = *pauVar13 + 8;
                  (*(code *)*puVar29)(puVar18,pauVar13);
                  if ((int)puVar18 != 0) {
                    auVar40 = NEON_ext(*pauVar13,*pauVar13,8,1);
                    *(long *)(*pauVar13 + 8) = auVar40._8_8_;
                    *(long *)*pauVar13 = auVar40._0_8_;
                  }
                }
              }
              else {
                uVar12 = *(undefined8 *)*pauVar13;
                if ((int)pauVar19 == 0) {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)(*pauVar13 + 8);
                  *(undefined8 *)(*pauVar13 + 8) = uVar12;
                  pauVar19 = pauVar13 + 1;
                  (*(code *)*puVar29)(pauVar19,*pauVar13 + 8);
                  if ((int)pauVar19 != 0) {
                    auVar40 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                       *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                    *(long *)pauVar13[1] = auVar40._8_8_;
                    *(long *)(*pauVar13 + 8) = auVar40._0_8_;
                  }
                }
                else {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)pauVar13[1];
                  *(undefined8 *)pauVar13[1] = uVar12;
                }
              }
              puVar7 = puVar31;
              (*(code *)*puVar29)(puVar31,pauVar13 + 1);
              if ((int)puVar7 == 0) {
                return;
              }
              uVar12 = *(undefined8 *)pauVar13[1];
              *(undefined8 *)pauVar13[1] = *puVar31;
              *puVar31 = uVar12;
            }
            else {
              if (uVar34 != 5) goto LAB_109918110;
              puVar18 = *pauVar13 + 8;
              (*(code *)*puVar29)(puVar18,pauVar13);
              pauVar19 = pauVar13 + 1;
              (*(code *)*puVar29)(pauVar19,*pauVar13 + 8);
              if (((ulong)puVar18 & 1) == 0) {
                if ((int)pauVar19 != 0) {
                  auVar40 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                     *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                  *(long *)pauVar13[1] = auVar40._8_8_;
                  *(long *)(*pauVar13 + 8) = auVar40._0_8_;
                  puVar18 = *pauVar13 + 8;
                  (*(code *)*puVar29)(puVar18,pauVar13);
                  if ((int)puVar18 != 0) {
                    auVar40 = NEON_ext(*pauVar13,*pauVar13,8,1);
                    *(long *)(*pauVar13 + 8) = auVar40._8_8_;
                    *(long *)*pauVar13 = auVar40._0_8_;
                  }
                }
              }
              else {
                uVar12 = *(undefined8 *)*pauVar13;
                if ((int)pauVar19 == 0) {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)(*pauVar13 + 8);
                  *(undefined8 *)(*pauVar13 + 8) = uVar12;
                  pauVar19 = pauVar13 + 1;
                  (*(code *)*puVar29)(pauVar19,*pauVar13 + 8);
                  if ((int)pauVar19 != 0) {
                    auVar40 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                       *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                    *(long *)pauVar13[1] = auVar40._8_8_;
                    *(long *)(*pauVar13 + 8) = auVar40._0_8_;
                  }
                }
                else {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)pauVar13[1];
                  *(undefined8 *)pauVar13[1] = uVar12;
                }
              }
              puVar18 = pauVar13[1] + 8;
              (*(code *)*puVar29)(puVar18,pauVar13 + 1);
              if ((int)puVar18 != 0) {
                auVar40 = NEON_ext(pauVar13[1],pauVar13[1],8,1);
                *(long *)(pauVar13[1] + 8) = auVar40._8_8_;
                *(long *)pauVar13[1] = auVar40._0_8_;
                pauVar19 = pauVar13 + 1;
                (*(code *)*puVar29)(pauVar19,*pauVar13 + 8);
                if ((int)pauVar19 != 0) {
                  auVar40 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                     *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                  *(long *)pauVar13[1] = auVar40._8_8_;
                  *(long *)(*pauVar13 + 8) = auVar40._0_8_;
                  puVar18 = *pauVar13 + 8;
                  (*(code *)*puVar29)(puVar18,pauVar13);
                  if ((int)puVar18 != 0) {
                    auVar40 = NEON_ext(*pauVar13,*pauVar13,8,1);
                    *(long *)(*pauVar13 + 8) = auVar40._8_8_;
                    *(long *)*pauVar13 = auVar40._0_8_;
                  }
                }
              }
              puVar7 = puVar31;
              (*(code *)*puVar29)(puVar31,pauVar13[1] + 8);
              if ((int)puVar7 == 0) {
                return;
              }
              uVar12 = *(undefined8 *)(pauVar13[1] + 8);
              *(undefined8 *)(pauVar13[1] + 8) = *puVar31;
              *puVar31 = uVar12;
              puVar18 = pauVar13[1] + 8;
              (*(code *)*puVar29)(puVar18,pauVar13 + 1);
              if ((int)puVar18 == 0) {
                return;
              }
              auVar40 = NEON_ext(pauVar13[1],pauVar13[1],8,1);
              *(long *)(pauVar13[1] + 8) = auVar40._8_8_;
              *(long *)pauVar13[1] = auVar40._0_8_;
            }
            pauVar19 = pauVar13 + 1;
            (*(code *)*puVar29)(pauVar19,*pauVar13 + 8);
            if ((int)pauVar19 == 0) {
              return;
            }
            auVar40 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                               *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
            *(long *)pauVar13[1] = auVar40._8_8_;
            *(long *)(*pauVar13 + 8) = auVar40._0_8_;
LAB_109918cf4:
            puVar18 = *pauVar13 + 8;
            (*(code *)*puVar29)(puVar18,pauVar13);
            if ((int)puVar18 == 0) {
              return;
            }
            auVar40 = NEON_ext(*pauVar13,*pauVar13,8,1);
            *(long *)(*pauVar13 + 8) = auVar40._8_8_;
            *(long *)*pauVar13 = auVar40._0_8_;
            return;
          }
          puVar18 = *pauVar13 + 8;
          (*(code *)*puVar29)(puVar18,pauVar13);
          puVar7 = puVar31;
          (*(code *)*puVar29)(puVar31,*pauVar13 + 8);
          if (((ulong)puVar18 & 1) == 0) {
            if ((int)puVar7 == 0) {
              return;
            }
            uVar12 = *(undefined8 *)(*pauVar13 + 8);
            *(undefined8 *)(*pauVar13 + 8) = *puVar31;
            *puVar31 = uVar12;
            goto LAB_109918cf4;
          }
          uVar12 = *(undefined8 *)*pauVar13;
          if ((int)puVar7 == 0) {
            *(undefined8 *)*pauVar13 = *(undefined8 *)(*pauVar13 + 8);
            *(undefined8 *)(*pauVar13 + 8) = uVar12;
            puVar7 = puVar31;
            (*(code *)*puVar29)(puVar31,*pauVar13 + 8);
            if ((int)puVar7 == 0) {
              return;
            }
            uVar12 = *(undefined8 *)(*pauVar13 + 8);
            *(undefined8 *)(*pauVar13 + 8) = *puVar31;
            goto LAB_1099187a4;
          }
LAB_10991879c:
          *(undefined8 *)*pauVar13 = *puVar31;
LAB_1099187a4:
          *puVar31 = uVar12;
          return;
        }
        if (uVar34 < 2) {
          return;
        }
        if (uVar34 == 2) {
          puVar7 = puVar31;
          (*(code *)*puVar29)(puVar31,pauVar13);
          if ((int)puVar7 == 0) {
            return;
          }
          uVar12 = *(undefined8 *)*pauVar13;
          goto LAB_10991879c;
        }
LAB_109918110:
        if ((long)uVar34 < 0x18) {
          pauVar23 = (undefined1 (*) [16])(*pauVar13 + 8);
          if ((in_x4 & 1) == 0) {
            if (pauVar13 == pauVar19 || pauVar23 == pauVar19) {
              return;
            }
            pauVar22 = pauVar13 + -1;
            do {
              pauVar17 = pauVar23;
              pauVar22 = (undefined1 (*) [16])(*pauVar22 + 8);
              pauVar23 = pauVar17;
              (*(code *)*puVar29)(pauVar17,pauVar13);
              if ((int)pauVar23 != 0) {
                uStack_198 = *(undefined8 *)*pauVar17;
                pauVar13 = pauVar22;
                do {
                  pauVar23 = pauVar13;
                  *(undefined8 *)pauVar23[1] = *(undefined8 *)(*pauVar23 + 8);
                  puVar7 = &uStack_198;
                  (*(code *)*puVar29)(puVar7,pauVar23);
                  pauVar13 = (undefined1 (*) [16])(pauVar23[-1] + 8);
                } while (((ulong)puVar7 & 1) != 0);
                *(undefined8 *)(*pauVar23 + 8) = uStack_198;
              }
              pauVar23 = (undefined1 (*) [16])(*pauVar17 + 8);
              pauVar13 = pauVar17;
            } while ((undefined1 (*) [16])(*pauVar17 + 8) != pauVar19);
            return;
          }
          if (pauVar13 == pauVar19 || pauVar23 == pauVar19) {
            return;
          }
          lVar24 = 0;
          pauVar22 = pauVar13;
          goto LAB_10991880c;
        }
        if (pppcVar32 == (code ***)0x0) {
          if (pauVar13 == pauVar19) {
            return;
          }
          uVar25 = uVar34 - 2 >> 1;
          uVar27 = uVar25;
          goto LAB_109918894;
        }
        puVar10 = (undefined8 *)(*pauVar13 + (uVar34 >> 1) * 8);
        if (uVar34 < 0x81) {
          pauVar23 = pauVar13;
          (*(code *)*puVar29)(pauVar13,puVar10);
          puVar20 = puVar31;
          (*(code *)*puVar29)(puVar31,pauVar13);
          if (((ulong)pauVar23 & 1) == 0) {
            if ((int)puVar20 != 0) {
              uVar12 = *(undefined8 *)*pauVar13;
              *(undefined8 *)*pauVar13 = *puVar31;
              *puVar31 = uVar12;
              pauVar23 = pauVar13;
              (*(code *)*puVar29)(pauVar13,puVar10);
              if ((int)pauVar23 != 0) {
                uVar12 = *puVar10;
                *puVar10 = *(undefined8 *)*pauVar13;
                *(undefined8 *)*pauVar13 = uVar12;
              }
            }
          }
          else {
            uVar12 = *puVar10;
            if ((int)puVar20 == 0) {
              *puVar10 = *(undefined8 *)*pauVar13;
              *(undefined8 *)*pauVar13 = uVar12;
              puVar10 = puVar31;
              (*(code *)*puVar29)(puVar31,pauVar13);
              if ((int)puVar10 == 0) goto LAB_109918494;
              uVar12 = *(undefined8 *)*pauVar13;
              *(undefined8 *)*pauVar13 = *puVar31;
            }
            else {
              *puVar10 = *puVar31;
            }
            *puVar31 = uVar12;
          }
        }
        else {
          puVar20 = puVar10;
          (*(code *)*puVar29)(puVar10,pauVar13);
          puVar14 = puVar31;
          (*(code *)*puVar29)(puVar31,puVar10);
          if (((ulong)puVar20 & 1) == 0) {
            if ((int)puVar14 != 0) {
              uVar12 = *puVar10;
              *puVar10 = *puVar31;
              *puVar31 = uVar12;
              puVar20 = puVar10;
              (*(code *)*puVar29)(puVar10,pauVar13);
              if ((int)puVar20 != 0) {
                uVar12 = *(undefined8 *)*pauVar13;
                *(undefined8 *)*pauVar13 = *puVar10;
                *puVar10 = uVar12;
              }
            }
          }
          else {
            uVar12 = *(undefined8 *)*pauVar13;
            if ((int)puVar14 == 0) {
              *(undefined8 *)*pauVar13 = *puVar10;
              *puVar10 = uVar12;
              puVar20 = puVar31;
              (*(code *)*puVar29)(puVar31,puVar10);
              if ((int)puVar20 == 0) goto LAB_109918248;
              uVar12 = *puVar10;
              *puVar10 = *puVar31;
            }
            else {
              *(undefined8 *)*pauVar13 = *puVar31;
            }
            *puVar31 = uVar12;
          }
LAB_109918248:
          puVar14 = puVar10 + -1;
          puVar20 = puVar14;
          (*(code *)*puVar29)(puVar14,*pauVar13 + 8);
          pauVar23 = pauVar22;
          (*(code *)*puVar29)(pauVar22,puVar14);
          if (((ulong)puVar20 & 1) == 0) {
            if ((int)pauVar23 != 0) {
              uVar12 = *puVar14;
              *puVar14 = *(undefined8 *)*pauVar22;
              *(undefined8 *)*pauVar22 = uVar12;
              puVar20 = puVar14;
              (*(code *)*puVar29)(puVar14,*pauVar13 + 8);
              if ((int)puVar20 != 0) {
                uVar12 = *(undefined8 *)(*pauVar13 + 8);
                *(undefined8 *)(*pauVar13 + 8) = *puVar14;
                *puVar14 = uVar12;
              }
            }
          }
          else {
            uVar12 = *(undefined8 *)(*pauVar13 + 8);
            if ((int)pauVar23 == 0) {
              *(undefined8 *)(*pauVar13 + 8) = *puVar14;
              *puVar14 = uVar12;
              pauVar23 = pauVar22;
              (*(code *)*puVar29)(pauVar22,puVar14);
              if ((int)pauVar23 == 0) goto LAB_109918334;
              uVar12 = *puVar14;
              *puVar14 = *(undefined8 *)*pauVar22;
            }
            else {
              *(undefined8 *)(*pauVar13 + 8) = *(undefined8 *)*pauVar22;
            }
            *(undefined8 *)*pauVar22 = uVar12;
          }
LAB_109918334:
          puVar20 = puVar10 + 1;
          (*(code *)*puVar29)(puVar20,pauVar13 + 1);
          puVar15 = puVar7;
          (*(code *)*puVar29)(puVar7,puVar10 + 1);
          if (((ulong)puVar20 & 1) == 0) {
            if ((int)puVar15 != 0) {
              uVar12 = puVar10[1];
              puVar10[1] = *puVar7;
              *puVar7 = uVar12;
              puVar20 = puVar10 + 1;
              (*(code *)*puVar29)(puVar20,pauVar13 + 1);
              if ((int)puVar20 != 0) {
                uVar12 = *(undefined8 *)pauVar13[1];
                *(undefined8 *)pauVar13[1] = puVar10[1];
                puVar10[1] = uVar12;
              }
            }
          }
          else {
            uVar12 = *(undefined8 *)pauVar13[1];
            if ((int)puVar15 == 0) {
              *(undefined8 *)pauVar13[1] = puVar10[1];
              puVar10[1] = uVar12;
              puVar20 = puVar7;
              (*(code *)*puVar29)(puVar7,puVar10 + 1);
              if ((int)puVar20 == 0) goto LAB_1099183e8;
              uVar12 = puVar10[1];
              puVar10[1] = *puVar7;
            }
            else {
              *(undefined8 *)pauVar13[1] = *puVar7;
            }
            *puVar7 = uVar12;
          }
LAB_1099183e8:
          puVar15 = puVar10;
          (*(code *)*puVar29)(puVar10,puVar14);
          puVar20 = puVar10 + 1;
          (*(code *)*puVar29)(puVar20,puVar10);
          if (((ulong)puVar15 & 1) == 0) {
            uVar12 = *puVar10;
            if ((int)puVar20 != 0) {
              *puVar10 = puVar10[1];
              puVar10[1] = uVar12;
              puVar20 = puVar10;
              (*(code *)*puVar29)(puVar10,puVar14);
              uVar12 = *puVar10;
              if ((int)puVar20 != 0) {
                uVar12 = puVar10[-1];
                puVar10[-1] = *puVar10;
                *puVar10 = uVar12;
              }
            }
          }
          else {
            uVar12 = *puVar14;
            if ((int)puVar20 == 0) {
              puVar10[-1] = *puVar10;
              *puVar10 = uVar12;
              puVar20 = puVar10 + 1;
              (*(code *)*puVar29)(puVar20,puVar10);
              uVar28 = *puVar10;
              uVar12 = uVar28;
              if ((int)puVar20 != 0) {
                uVar12 = puVar10[1];
                *puVar10 = uVar12;
                puVar10[1] = uVar28;
              }
            }
            else {
              puVar10[-1] = puVar10[1];
              puVar10[1] = uVar12;
              uVar12 = *puVar10;
            }
          }
          uVar28 = *(undefined8 *)*pauVar13;
          *(undefined8 *)*pauVar13 = uVar12;
          *puVar10 = uVar28;
        }
LAB_109918494:
        pppcVar32 = (code ***)((long)pppcVar32 + -1);
        if ((in_x4 & 1) != 0) {
          uStack_198 = *(undefined8 *)*pauVar13;
LAB_1099184bc:
          lVar24 = 0;
          do {
            lVar24 = lVar24 + 8;
            puVar18 = *pauVar13 + lVar24;
            (*(code *)*puVar29)(puVar18,&uStack_198);
          } while (((ulong)puVar18 & 1) != 0);
          pauVar17 = (undefined1 (*) [16])(*pauVar13 + lVar24);
          pauVar21 = pauVar19;
          if (lVar24 == 8) {
            do {
              if (pauVar21 <= pauVar17) break;
              pauVar21 = (undefined1 (*) [16])(pauVar21[-1] + 8);
              pauVar23 = pauVar21;
              (*(code *)*puVar29)(pauVar21,&uStack_198);
            } while (((ulong)pauVar23 & 1) == 0);
          }
          else {
            do {
              pauVar21 = (undefined1 (*) [16])(pauVar21[-1] + 8);
              pauVar23 = pauVar21;
              (*(code *)*puVar29)(pauVar21,&uStack_198);
            } while ((int)pauVar23 == 0);
          }
          pauVar39 = pauVar21;
          pauVar23 = pauVar17;
          if (pauVar17 < pauVar21) {
            do {
              uVar12 = *(undefined8 *)*pauVar23;
              *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar39;
              *(undefined8 *)*pauVar39 = uVar12;
              do {
                pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
                pauVar16 = pauVar23;
                (*(code *)*puVar29)(pauVar23,&uStack_198);
              } while (((ulong)pauVar16 & 1) != 0);
              do {
                pauVar39 = (undefined1 (*) [16])(pauVar39[-1] + 8);
                pauVar16 = pauVar39;
                (*(code *)*puVar29)(pauVar39,&uStack_198);
              } while ((int)pauVar16 == 0);
            } while (pauVar23 < pauVar39);
          }
          pauVar39 = (undefined1 (*) [16])(pauVar23[-1] + 8);
          if (pauVar39 != pauVar13) {
            *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar39;
          }
          *(undefined8 *)*pauVar39 = uStack_198;
          if (pauVar21 <= pauVar17) {
            pauVar17 = pauVar13;
            FUN_109918d34(pauVar13,pauVar39,puVar29);
            pauVar21 = pauVar23;
            FUN_109918d34(pauVar23,pauVar19,puVar29);
            if ((int)pauVar21 != 0) goto LAB_109918704;
            if (((ulong)pauVar17 & 1) != 0) goto LAB_1099180d4;
          }
          FUN_109918088(pauVar13,pauVar39,puVar29,pppcVar32,(uint)in_x4 & 1);
          in_x4 = 0;
          goto LAB_1099180d4;
        }
        puVar18 = pauVar13[-1] + 8;
        (*(code *)*puVar29)(puVar18,pauVar13);
        uStack_198 = *(undefined8 *)*pauVar13;
        if (((ulong)puVar18 & 1) != 0) goto LAB_1099184bc;
        puVar10 = &uStack_198;
        (*(code *)*puVar29)(puVar10,puVar31);
        pauVar23 = pauVar13;
        if (((ulong)puVar10 & 1) == 0) {
          do {
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            if (pauVar19 <= pauVar23) break;
            puVar10 = &uStack_198;
            (*(code *)*puVar29)(puVar10,pauVar23);
          } while ((int)puVar10 == 0);
        }
        else {
          do {
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar29)(puVar10,pauVar23);
          } while (((ulong)puVar10 & 1) == 0);
        }
        pauVar17 = pauVar19;
        if (pauVar23 < pauVar19) {
          do {
            pauVar17 = (undefined1 (*) [16])(pauVar17[-1] + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar29)(puVar10,pauVar17);
          } while (((ulong)puVar10 & 1) != 0);
        }
        while (pauVar23 < pauVar17) {
          uVar12 = *(undefined8 *)*pauVar23;
          *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar17;
          *(undefined8 *)*pauVar17 = uVar12;
          do {
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar29)(puVar10,pauVar23);
          } while ((int)puVar10 == 0);
          do {
            pauVar17 = (undefined1 (*) [16])(pauVar17[-1] + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar29)(puVar10,pauVar17);
          } while (((ulong)puVar10 & 1) != 0);
        }
        pauVar17 = (undefined1 (*) [16])(pauVar23[-1] + 8);
        if (pauVar17 != pauVar13) {
          *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar17;
        }
        in_x4 = 0;
        *(undefined8 *)*pauVar17 = uStack_198;
      } while( true );
    }
    puVar10 = (undefined8 *)(lVar24 * 4);
    __Znwm();
    puVar31 = puVar10 + (long)param_2 * 4;
    puVar29 = puVar10;
    do {
      *puVar29 = 0xffffffffffffffff;
      puVar29[2] = 0;
      puVar29[3] = 0;
      puVar29[1] = 0;
      puVar29 = puVar29 + 4;
    } while (puVar29 != puVar31);
    puVar7[3] = puVar10;
    puVar7[4] = puVar31;
    puVar7[5] = puVar31;
    uVar27 = puVar37[3];
    uVar25 = puVar37[4];
    puStack_e8 = puVar10;
  }
  if (uVar25 != uVar27) {
    unaff_x28 = (ulong *)0x0;
    param_2 = (ulong *)0x0;
    puVar38 = puStack_f8;
    puStack_f0 = puVar37;
    do {
      plVar30 = *(long **)(uVar27 + (long)unaff_x28 * 8);
      unaff_x21 = (int *)(puStack_e8 + (long)unaff_x28 * 4);
      lVar24 = *plVar30;
      iStack_dc = *(int *)(lVar24 + 0x20);
      *unaff_x21 = iStack_dc;
      unaff_x21[1] = (int)param_2;
      uVar34 = *(long *)(lVar24 + 0x10) - *(long *)(lVar24 + 8);
      puVar7 = (undefined8 *)(uVar34 >> 2 & 0x7fffffff);
      iVar5 = (int)(uVar34 >> 2);
      if (iVar5 < 1) {
        uVar27 = 0;
        unaff_x23 = *(long *)(unaff_x21 + 2);
        lVar24 = *(long *)(unaff_x21 + 4);
        uVar34 = lVar24 - unaff_x23 >> 3;
LAB_109917e84:
        plStack_d8 = (long *)(unaff_x21 + 4);
        if (uVar27 < uVar34) {
          lVar24 = unaff_x23 + uVar27 * 8;
          *plStack_d8 = lVar24;
        }
        if (0 < iVar5) goto LAB_109917ec4;
      }
      else {
        uVar27 = 0;
        plVar8 = (long *)plVar30[2];
        puVar29 = puVar7;
        do {
          uVar26 = (uint)uVar27;
          if (*(int *)(*plVar8 + 0x28) != -1) {
            uVar26 = uVar26 + 1;
          }
          uVar27 = (ulong)uVar26;
          puVar29 = (undefined8 *)((long)puVar29 + -1);
          plVar8 = plVar8 + 1;
        } while (puVar29 != (undefined8 *)0x0);
        unaff_x20 = (long *)(unaff_x21 + 2);
        unaff_x23 = *unaff_x20;
        plStack_d8 = (long *)(unaff_x21 + 4);
        lVar24 = *plStack_d8;
        puVar36 = (ulong *)(lVar24 - unaff_x23);
        uVar34 = (long)puVar36 >> 3;
        puVar37 = puStack_f0;
        if (uVar27 <= uVar34) goto LAB_109917e84;
        param_1 = (undefined8 *)(uVar27 - uVar34);
        if ((undefined8 *)(*(long *)(unaff_x21 + 6) - lVar24 >> 3) < param_1) {
          uVar25 = *(long *)(unaff_x21 + 6) - unaff_x23;
          uVar34 = (long)uVar25 >> 2;
          if (uVar34 <= uVar27) {
            uVar34 = uVar27;
          }
          if (0x7ffffffffffffff7 < uVar25) {
            uVar34 = 0x1fffffffffffffff;
          }
          if (uVar34 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109918034;
          }
          lVar11 = uVar34 << 3;
          __Znwm();
          lStack_108 = lVar11 + (long)puVar36;
          lStack_100 = lVar11 + uVar34 * 8;
          _memset(lStack_108,0xff,(long)param_1 * 8);
          lVar24 = lStack_108 + (long)param_1 * 8;
          _memcpy(lVar11,unaff_x23,puVar36);
          *(long *)(unaff_x21 + 2) = lVar11;
          *(long *)(unaff_x21 + 4) = lVar24;
          *(long *)(unaff_x21 + 6) = lStack_100;
          puVar37 = puStack_f0;
          puVar38 = puStack_f8;
          if (unaff_x23 != 0) {
            __ZdlPv(unaff_x23);
            puVar37 = puStack_f0;
            puVar38 = puStack_f8;
          }
        }
        else {
          _memset(lVar24,0xff,(long)param_1 * 8);
          *plStack_d8 = lVar24 + (long)param_1 * 8;
          puVar37 = puStack_f0;
          puVar38 = puStack_f8;
        }
LAB_109917ec4:
        puVar29 = (undefined8 *)0x0;
        iVar5 = 0;
        do {
          lVar24 = *(long *)(plVar30[2] + (long)puVar29 * 8);
          if ((*(byte *)(lVar24 + 0xc) & 1) == 0) {
            plVar8 = *(long **)(lVar24 + 0x10);
            if (plVar8 == (long *)0x0) {
              iVar6 = *(int *)(lVar24 + 8);
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
              iVar6 = (int)plVar8;
            }
            if (iVar6 != 0) {
              puVar2 = (undefined4 *)(*(long *)(unaff_x21 + 2) + (long)iVar5 * 8);
              *puVar2 = *(undefined4 *)(lVar24 + 0x28);
              puVar2[1] = *(undefined4 *)
                           (*(long *)(puVar38[1] + (long)unaff_x28 * 8) + (long)iVar5 * 4);
              iVar5 = iVar5 + 1;
            }
          }
          puVar29 = (undefined8 *)((long)puVar29 + 1);
        } while (puVar7 != puVar29);
        unaff_x23 = *(long *)(unaff_x21 + 2);
        lVar24 = *plStack_d8;
      }
      param_2 = (ulong *)(ulong)(uint)(iStack_dc + (int)param_2);
      pcStack_d0 = FUN_10991e654;
      lVar11 = 0;
      if (lVar24 != unaff_x23) {
        lVar11 = LZCOUNT(lVar24 - unaff_x23 >> 3) * -2 + 0x7e;
      }
      in_x4 = 1;
      FUN_109918088(unaff_x23,lVar24,&pcStack_d0,lVar11);
      unaff_x28 = (ulong *)((long)unaff_x28 + 1);
      uVar27 = puVar37[3];
    } while (unaff_x28 < (ulong *)((long)(puVar37[4] - uVar27) >> 3));
  }
  uVar12 = 0x28;
  __Znwm();
  FUN_10991c340();
  *puStack_118 = uVar12;
  return;
LAB_10991880c:
  pauVar17 = pauVar23;
  pauVar23 = pauVar17;
  (*(code *)*puVar29)(pauVar17,pauVar22);
  if ((int)pauVar23 != 0) {
    uStack_198 = *(undefined8 *)*pauVar17;
    lVar11 = lVar24;
    do {
      lVar33 = lVar11;
      *(undefined8 *)((long)(*pauVar13 + lVar33) + 8) = *(undefined8 *)(*pauVar13 + lVar33);
      pauVar23 = pauVar13;
      if (lVar33 == 0) goto LAB_109918868;
      puVar7 = &uStack_198;
      (*(code *)*puVar29)(puVar7,pauVar13[-1] + lVar33 + 8);
      lVar11 = lVar33 + -8;
    } while (((ulong)puVar7 & 1) != 0);
    pauVar23 = (undefined1 (*) [16])(*pauVar13 + lVar33);
LAB_109918868:
    *(undefined8 *)*pauVar23 = uStack_198;
  }
  lVar24 = lVar24 + 8;
  pauVar23 = (undefined1 (*) [16])(*pauVar17 + 8);
  pauVar22 = pauVar17;
  if ((undefined1 (*) [16])(*pauVar17 + 8) == pauVar19) {
    return;
  }
  goto LAB_10991880c;
LAB_109918894:
  do {
    if ((long)uVar27 <= (long)uVar25) {
      uVar4 = (uVar27 & 0x1fffffffffffffff) << 1 | 1;
      puVar7 = (undefined8 *)(*pauVar13 + uVar4 * 8);
      uVar3 = (uVar27 & 0x1fffffffffffffff) * 2 + 2;
      puVar31 = puVar7;
      uVar35 = uVar4;
      if ((long)uVar3 < (long)uVar34) {
        puVar10 = puVar7;
        (*(code *)*puVar29)(puVar7,puVar7 + 1);
        puVar31 = puVar7 + 1;
        uVar35 = uVar3;
        if ((int)puVar10 == 0) {
          puVar31 = puVar7;
          uVar35 = uVar4;
        }
      }
      puVar7 = (undefined8 *)(*pauVar13 + uVar27 * 8);
      puVar10 = puVar31;
      (*(code *)*puVar29)(puVar31,puVar7);
      if (((ulong)puVar10 & 1) == 0) {
        uStack_198 = *puVar7;
        do {
          puVar10 = puVar31;
          *puVar7 = *puVar10;
          if ((long)uVar25 < (long)uVar35) break;
          uVar4 = (uVar35 & 0x3fffffffffffffff) << 1 | 1;
          puVar7 = (undefined8 *)(*pauVar13 + uVar4 * 8);
          uVar3 = uVar35 * 2 + 2;
          puVar31 = puVar7;
          uVar35 = uVar4;
          if ((long)uVar3 < (long)uVar34) {
            puVar20 = puVar7;
            (*(code *)*puVar29)(puVar7,puVar7 + 1);
            puVar31 = puVar7 + 1;
            uVar35 = uVar3;
            if ((int)puVar20 == 0) {
              puVar31 = puVar7;
              uVar35 = uVar4;
            }
          }
          puVar20 = puVar31;
          (*(code *)*puVar29)(puVar31,&uStack_198);
          puVar7 = puVar10;
        } while ((int)puVar20 == 0);
        *puVar10 = uStack_198;
      }
    }
    bVar1 = 0 < (long)uVar27;
    uVar27 = uVar27 - 1;
  } while (bVar1);
  do {
    uVar27 = 0;
    uVar12 = *(undefined8 *)*pauVar13;
    pauVar23 = pauVar13;
    do {
      pauVar22 = (undefined1 (*) [16])(*pauVar23 + uVar27 * 8 + 8);
      uVar3 = uVar27 << 1 | 1;
      uVar25 = uVar27 * 2 + 2;
      pauVar17 = pauVar22;
      uVar4 = uVar3;
      if ((long)uVar25 < (long)uVar34) {
        pauVar21 = pauVar22;
        (*(code *)*puVar29)(pauVar22,(undefined1 (*) [16])(pauVar23[1] + uVar27 * 8));
        pauVar17 = (undefined1 (*) [16])(pauVar23[1] + uVar27 * 8);
        uVar4 = uVar25;
        if ((int)pauVar21 == 0) {
          pauVar17 = pauVar22;
          uVar4 = uVar3;
        }
      }
      uVar27 = uVar4;
      *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar17;
      pauVar23 = pauVar17;
    } while ((long)uVar27 <= (long)(uVar34 - 2 >> 1));
    pauVar19 = (undefined1 (*) [16])(pauVar19[-1] + 8);
    if (pauVar17 == pauVar19) {
      *(undefined8 *)*pauVar17 = uVar12;
    }
    else {
      *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar19;
      *(undefined8 *)*pauVar19 = uVar12;
      lVar24 = (long)((long)pauVar17 + (8 - (long)pauVar13)) >> 3;
      if (1 < lVar24) {
        uVar27 = lVar24 - 2U >> 1;
        pauVar23 = (undefined1 (*) [16])(*pauVar13 + uVar27 * 8);
        pauVar22 = pauVar23;
        (*(code *)*puVar29)(pauVar23,pauVar17);
        if ((int)pauVar22 != 0) {
          uStack_198 = *(undefined8 *)*pauVar17;
          do {
            pauVar22 = pauVar23;
            *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar22;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1 >> 1;
            pauVar23 = (undefined1 (*) [16])(*pauVar13 + uVar27 * 8);
            pauVar21 = pauVar23;
            (*(code *)*puVar29)(pauVar23,&uStack_198);
            pauVar17 = pauVar22;
          } while (((ulong)pauVar21 & 1) != 0);
          *(undefined8 *)*pauVar22 = uStack_198;
        }
      }
    }
    bVar1 = (long)uVar34 < 3;
    uVar34 = uVar34 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_109918704:
  pauVar19 = pauVar39;
  if (((ulong)pauVar17 & 1) != 0) {
    return;
  }
  goto LAB_1099180bc;
}



/* Entry: 109918074; end: 109918087;  */

void FUN_109918074(undefined8 param_1,undefined1 (*param_2) [16],undefined8 *param_3,long param_4,
                  ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_78;
  
  pauVar5 = (undefined1 (*) [16])&DAT_10f62a4d8;
  func_0x000104c4f6cc();
LAB_1099180bc:
  puVar20 = (undefined8 *)(param_2[-1] + 8);
  pauVar16 = param_2 + -1;
  puVar11 = (undefined8 *)(param_2[-2] + 8);
  pauVar12 = pauVar5;
LAB_1099180d4:
  do {
    pauVar5 = pauVar12;
    uVar26 = (long)param_2 - (long)pauVar5 >> 3;
    if (uVar26 - 2 != 0 && 1 < (long)uVar26) {
      if (uVar26 != 3) {
        if (uVar26 == 4) {
          puVar10 = *pauVar5 + 8;
          (*(code *)*param_3)(puVar10,pauVar5);
          pauVar12 = pauVar5 + 1;
          (*(code *)*param_3)(pauVar12,*pauVar5 + 8);
          if (((ulong)puVar10 & 1) == 0) {
            if ((int)pauVar12 != 0) {
              auVar27 = NEON_ext(*(undefined1 (*) [16])(*pauVar5 + 8),
                                 *(undefined1 (*) [16])(*pauVar5 + 8),8,1);
              *(long *)pauVar5[1] = auVar27._8_8_;
              *(long *)(*pauVar5 + 8) = auVar27._0_8_;
              puVar10 = *pauVar5 + 8;
              (*(code *)*param_3)(puVar10,pauVar5);
              if ((int)puVar10 != 0) {
                auVar27 = NEON_ext(*pauVar5,*pauVar5,8,1);
                *(long *)(*pauVar5 + 8) = auVar27._8_8_;
                *(long *)*pauVar5 = auVar27._0_8_;
              }
            }
          }
          else {
            uVar17 = *(undefined8 *)*pauVar5;
            if ((int)pauVar12 == 0) {
              *(undefined8 *)*pauVar5 = *(undefined8 *)(*pauVar5 + 8);
              *(undefined8 *)(*pauVar5 + 8) = uVar17;
              pauVar12 = pauVar5 + 1;
              (*(code *)*param_3)(pauVar12,*pauVar5 + 8);
              if ((int)pauVar12 != 0) {
                auVar27 = NEON_ext(*(undefined1 (*) [16])(*pauVar5 + 8),
                                   *(undefined1 (*) [16])(*pauVar5 + 8),8,1);
                *(long *)pauVar5[1] = auVar27._8_8_;
                *(long *)(*pauVar5 + 8) = auVar27._0_8_;
              }
            }
            else {
              *(undefined8 *)*pauVar5 = *(undefined8 *)pauVar5[1];
              *(undefined8 *)pauVar5[1] = uVar17;
            }
          }
          puVar11 = puVar20;
          (*(code *)*param_3)(puVar20,pauVar5 + 1);
          if ((int)puVar11 == 0) {
            return;
          }
          uVar17 = *(undefined8 *)pauVar5[1];
          *(undefined8 *)pauVar5[1] = *puVar20;
          *puVar20 = uVar17;
        }
        else {
          if (uVar26 != 5) goto LAB_109918110;
          puVar10 = *pauVar5 + 8;
          (*(code *)*param_3)(puVar10,pauVar5);
          pauVar12 = pauVar5 + 1;
          (*(code *)*param_3)(pauVar12,*pauVar5 + 8);
          if (((ulong)puVar10 & 1) == 0) {
            if ((int)pauVar12 != 0) {
              auVar27 = NEON_ext(*(undefined1 (*) [16])(*pauVar5 + 8),
                                 *(undefined1 (*) [16])(*pauVar5 + 8),8,1);
              *(long *)pauVar5[1] = auVar27._8_8_;
              *(long *)(*pauVar5 + 8) = auVar27._0_8_;
              puVar10 = *pauVar5 + 8;
              (*(code *)*param_3)(puVar10,pauVar5);
              if ((int)puVar10 != 0) {
                auVar27 = NEON_ext(*pauVar5,*pauVar5,8,1);
                *(long *)(*pauVar5 + 8) = auVar27._8_8_;
                *(long *)*pauVar5 = auVar27._0_8_;
              }
            }
          }
          else {
            uVar17 = *(undefined8 *)*pauVar5;
            if ((int)pauVar12 == 0) {
              *(undefined8 *)*pauVar5 = *(undefined8 *)(*pauVar5 + 8);
              *(undefined8 *)(*pauVar5 + 8) = uVar17;
              pauVar12 = pauVar5 + 1;
              (*(code *)*param_3)(pauVar12,*pauVar5 + 8);
              if ((int)pauVar12 != 0) {
                auVar27 = NEON_ext(*(undefined1 (*) [16])(*pauVar5 + 8),
                                   *(undefined1 (*) [16])(*pauVar5 + 8),8,1);
                *(long *)pauVar5[1] = auVar27._8_8_;
                *(long *)(*pauVar5 + 8) = auVar27._0_8_;
              }
            }
            else {
              *(undefined8 *)*pauVar5 = *(undefined8 *)pauVar5[1];
              *(undefined8 *)pauVar5[1] = uVar17;
            }
          }
          puVar10 = pauVar5[1] + 8;
          (*(code *)*param_3)(puVar10,pauVar5 + 1);
          if ((int)puVar10 != 0) {
            auVar27 = NEON_ext(pauVar5[1],pauVar5[1],8,1);
            *(long *)(pauVar5[1] + 8) = auVar27._8_8_;
            *(long *)pauVar5[1] = auVar27._0_8_;
            pauVar12 = pauVar5 + 1;
            (*(code *)*param_3)(pauVar12,*pauVar5 + 8);
            if ((int)pauVar12 != 0) {
              auVar27 = NEON_ext(*(undefined1 (*) [16])(*pauVar5 + 8),
                                 *(undefined1 (*) [16])(*pauVar5 + 8),8,1);
              *(long *)pauVar5[1] = auVar27._8_8_;
              *(long *)(*pauVar5 + 8) = auVar27._0_8_;
              puVar10 = *pauVar5 + 8;
              (*(code *)*param_3)(puVar10,pauVar5);
              if ((int)puVar10 != 0) {
                auVar27 = NEON_ext(*pauVar5,*pauVar5,8,1);
                *(long *)(*pauVar5 + 8) = auVar27._8_8_;
                *(long *)*pauVar5 = auVar27._0_8_;
              }
            }
          }
          puVar11 = puVar20;
          (*(code *)*param_3)(puVar20,pauVar5[1] + 8);
          if ((int)puVar11 == 0) {
            return;
          }
          uVar17 = *(undefined8 *)(pauVar5[1] + 8);
          *(undefined8 *)(pauVar5[1] + 8) = *puVar20;
          *puVar20 = uVar17;
          puVar10 = pauVar5[1] + 8;
          (*(code *)*param_3)(puVar10,pauVar5 + 1);
          if ((int)puVar10 == 0) {
            return;
          }
          auVar27 = NEON_ext(pauVar5[1],pauVar5[1],8,1);
          *(long *)(pauVar5[1] + 8) = auVar27._8_8_;
          *(long *)pauVar5[1] = auVar27._0_8_;
        }
        pauVar12 = pauVar5 + 1;
        (*(code *)*param_3)(pauVar12,*pauVar5 + 8);
        if ((int)pauVar12 == 0) {
          return;
        }
        auVar27 = NEON_ext(*(undefined1 (*) [16])(*pauVar5 + 8),*(undefined1 (*) [16])(*pauVar5 + 8)
                           ,8,1);
        *(long *)pauVar5[1] = auVar27._8_8_;
        *(long *)(*pauVar5 + 8) = auVar27._0_8_;
LAB_109918cf4:
        puVar10 = *pauVar5 + 8;
        (*(code *)*param_3)(puVar10,pauVar5);
        if ((int)puVar10 == 0) {
          return;
        }
        auVar27 = NEON_ext(*pauVar5,*pauVar5,8,1);
        *(long *)(*pauVar5 + 8) = auVar27._8_8_;
        *(long *)*pauVar5 = auVar27._0_8_;
        return;
      }
      puVar10 = *pauVar5 + 8;
      (*(code *)*param_3)(puVar10,pauVar5);
      puVar11 = puVar20;
      (*(code *)*param_3)(puVar20,*pauVar5 + 8);
      if (((ulong)puVar10 & 1) == 0) {
        if ((int)puVar11 == 0) {
          return;
        }
        uVar17 = *(undefined8 *)(*pauVar5 + 8);
        *(undefined8 *)(*pauVar5 + 8) = *puVar20;
        *puVar20 = uVar17;
        goto LAB_109918cf4;
      }
      uVar17 = *(undefined8 *)*pauVar5;
      if ((int)puVar11 == 0) {
        *(undefined8 *)*pauVar5 = *(undefined8 *)(*pauVar5 + 8);
        *(undefined8 *)(*pauVar5 + 8) = uVar17;
        puVar11 = puVar20;
        (*(code *)*param_3)(puVar20,*pauVar5 + 8);
        if ((int)puVar11 == 0) {
          return;
        }
        uVar17 = *(undefined8 *)(*pauVar5 + 8);
        *(undefined8 *)(*pauVar5 + 8) = *puVar20;
        goto LAB_1099187a4;
      }
LAB_10991879c:
      *(undefined8 *)*pauVar5 = *puVar20;
LAB_1099187a4:
      *puVar20 = uVar17;
      return;
    }
    if (uVar26 < 2) {
      return;
    }
    if (uVar26 == 2) {
      puVar11 = puVar20;
      (*(code *)*param_3)(puVar20,pauVar5);
      if ((int)puVar11 == 0) {
        return;
      }
      uVar17 = *(undefined8 *)*pauVar5;
      goto LAB_10991879c;
    }
LAB_109918110:
    if ((long)uVar26 < 0x18) {
      pauVar12 = (undefined1 (*) [16])(*pauVar5 + 8);
      if ((param_5 & 1) == 0) {
        if (pauVar5 == param_2 || pauVar12 == param_2) {
          return;
        }
        pauVar16 = pauVar5 + -1;
        do {
          pauVar9 = pauVar12;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 8);
          pauVar12 = pauVar9;
          (*(code *)*param_3)(pauVar9,pauVar5);
          if ((int)pauVar12 != 0) {
            uStack_78 = *(undefined8 *)*pauVar9;
            pauVar5 = pauVar16;
            do {
              pauVar12 = pauVar5;
              *(undefined8 *)pauVar12[1] = *(undefined8 *)(*pauVar12 + 8);
              puVar11 = &uStack_78;
              (*(code *)*param_3)(puVar11,pauVar12);
              pauVar5 = (undefined1 (*) [16])(pauVar12[-1] + 8);
            } while (((ulong)puVar11 & 1) != 0);
            *(undefined8 *)(*pauVar12 + 8) = uStack_78;
          }
          pauVar12 = (undefined1 (*) [16])(*pauVar9 + 8);
          pauVar5 = pauVar9;
        } while ((undefined1 (*) [16])(*pauVar9 + 8) != param_2);
        return;
      }
      if (pauVar5 == param_2 || pauVar12 == param_2) {
        return;
      }
      lVar23 = 0;
      pauVar16 = pauVar5;
      break;
    }
    if (param_4 == 0) {
      if (pauVar5 == param_2) {
        return;
      }
      uVar22 = uVar26 - 2 >> 1;
      uVar18 = uVar22;
      goto LAB_109918894;
    }
    puVar13 = (undefined8 *)(*pauVar5 + (uVar26 >> 1) * 8);
    if (uVar26 < 0x81) {
      pauVar12 = pauVar5;
      (*(code *)*param_3)(pauVar5,puVar13);
      puVar14 = puVar20;
      (*(code *)*param_3)(puVar20,pauVar5);
      if (((ulong)pauVar12 & 1) == 0) {
        if ((int)puVar14 != 0) {
          uVar17 = *(undefined8 *)*pauVar5;
          *(undefined8 *)*pauVar5 = *puVar20;
          *puVar20 = uVar17;
          pauVar12 = pauVar5;
          (*(code *)*param_3)(pauVar5,puVar13);
          if ((int)pauVar12 != 0) {
            uVar17 = *puVar13;
            *puVar13 = *(undefined8 *)*pauVar5;
            *(undefined8 *)*pauVar5 = uVar17;
          }
        }
      }
      else {
        uVar17 = *puVar13;
        if ((int)puVar14 == 0) {
          *puVar13 = *(undefined8 *)*pauVar5;
          *(undefined8 *)*pauVar5 = uVar17;
          puVar13 = puVar20;
          (*(code *)*param_3)(puVar20,pauVar5);
          if ((int)puVar13 == 0) goto LAB_109918494;
          uVar17 = *(undefined8 *)*pauVar5;
          *(undefined8 *)*pauVar5 = *puVar20;
        }
        else {
          *puVar13 = *puVar20;
        }
        *puVar20 = uVar17;
      }
    }
    else {
      puVar14 = puVar13;
      (*(code *)*param_3)(puVar13,pauVar5);
      puVar6 = puVar20;
      (*(code *)*param_3)(puVar20,puVar13);
      if (((ulong)puVar14 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uVar17 = *puVar13;
          *puVar13 = *puVar20;
          *puVar20 = uVar17;
          puVar14 = puVar13;
          (*(code *)*param_3)(puVar13,pauVar5);
          if ((int)puVar14 != 0) {
            uVar17 = *(undefined8 *)*pauVar5;
            *(undefined8 *)*pauVar5 = *puVar13;
            *puVar13 = uVar17;
          }
        }
      }
      else {
        uVar17 = *(undefined8 *)*pauVar5;
        if ((int)puVar6 == 0) {
          *(undefined8 *)*pauVar5 = *puVar13;
          *puVar13 = uVar17;
          puVar14 = puVar20;
          (*(code *)*param_3)(puVar20,puVar13);
          if ((int)puVar14 == 0) goto LAB_109918248;
          uVar17 = *puVar13;
          *puVar13 = *puVar20;
        }
        else {
          *(undefined8 *)*pauVar5 = *puVar20;
        }
        *puVar20 = uVar17;
      }
LAB_109918248:
      puVar6 = puVar13 + -1;
      puVar14 = puVar6;
      (*(code *)*param_3)(puVar6,*pauVar5 + 8);
      pauVar12 = pauVar16;
      (*(code *)*param_3)(pauVar16,puVar6);
      if (((ulong)puVar14 & 1) == 0) {
        if ((int)pauVar12 != 0) {
          uVar17 = *puVar6;
          *puVar6 = *(undefined8 *)*pauVar16;
          *(undefined8 *)*pauVar16 = uVar17;
          puVar14 = puVar6;
          (*(code *)*param_3)(puVar6,*pauVar5 + 8);
          if ((int)puVar14 != 0) {
            uVar17 = *(undefined8 *)(*pauVar5 + 8);
            *(undefined8 *)(*pauVar5 + 8) = *puVar6;
            *puVar6 = uVar17;
          }
        }
      }
      else {
        uVar17 = *(undefined8 *)(*pauVar5 + 8);
        if ((int)pauVar12 == 0) {
          *(undefined8 *)(*pauVar5 + 8) = *puVar6;
          *puVar6 = uVar17;
          pauVar12 = pauVar16;
          (*(code *)*param_3)(pauVar16,puVar6);
          if ((int)pauVar12 == 0) goto LAB_109918334;
          uVar17 = *puVar6;
          *puVar6 = *(undefined8 *)*pauVar16;
        }
        else {
          *(undefined8 *)(*pauVar5 + 8) = *(undefined8 *)*pauVar16;
        }
        *(undefined8 *)*pauVar16 = uVar17;
      }
LAB_109918334:
      puVar14 = puVar13 + 1;
      (*(code *)*param_3)(puVar14,pauVar5 + 1);
      puVar7 = puVar11;
      (*(code *)*param_3)(puVar11,puVar13 + 1);
      if (((ulong)puVar14 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar17 = puVar13[1];
          puVar13[1] = *puVar11;
          *puVar11 = uVar17;
          puVar14 = puVar13 + 1;
          (*(code *)*param_3)(puVar14,pauVar5 + 1);
          if ((int)puVar14 != 0) {
            uVar17 = *(undefined8 *)pauVar5[1];
            *(undefined8 *)pauVar5[1] = puVar13[1];
            puVar13[1] = uVar17;
          }
        }
      }
      else {
        uVar17 = *(undefined8 *)pauVar5[1];
        if ((int)puVar7 == 0) {
          *(undefined8 *)pauVar5[1] = puVar13[1];
          puVar13[1] = uVar17;
          puVar14 = puVar11;
          (*(code *)*param_3)(puVar11,puVar13 + 1);
          if ((int)puVar14 == 0) goto LAB_1099183e8;
          uVar17 = puVar13[1];
          puVar13[1] = *puVar11;
        }
        else {
          *(undefined8 *)pauVar5[1] = *puVar11;
        }
        *puVar11 = uVar17;
      }
LAB_1099183e8:
      puVar7 = puVar13;
      (*(code *)*param_3)(puVar13,puVar6);
      puVar14 = puVar13 + 1;
      (*(code *)*param_3)(puVar14,puVar13);
      if (((ulong)puVar7 & 1) == 0) {
        uVar17 = *puVar13;
        if ((int)puVar14 != 0) {
          *puVar13 = puVar13[1];
          puVar13[1] = uVar17;
          puVar14 = puVar13;
          (*(code *)*param_3)(puVar13,puVar6);
          uVar17 = *puVar13;
          if ((int)puVar14 != 0) {
            uVar17 = puVar13[-1];
            puVar13[-1] = *puVar13;
            *puVar13 = uVar17;
          }
        }
      }
      else {
        uVar17 = *puVar6;
        if ((int)puVar14 == 0) {
          puVar13[-1] = *puVar13;
          *puVar13 = uVar17;
          puVar14 = puVar13 + 1;
          (*(code *)*param_3)(puVar14,puVar13);
          uVar19 = *puVar13;
          uVar17 = uVar19;
          if ((int)puVar14 != 0) {
            uVar17 = puVar13[1];
            *puVar13 = uVar17;
            puVar13[1] = uVar19;
          }
        }
        else {
          puVar13[-1] = puVar13[1];
          puVar13[1] = uVar17;
          uVar17 = *puVar13;
        }
      }
      uVar19 = *(undefined8 *)*pauVar5;
      *(undefined8 *)*pauVar5 = uVar17;
      *puVar13 = uVar19;
    }
LAB_109918494:
    param_4 = param_4 + -1;
    if ((param_5 & 1) != 0) {
      uStack_78 = *(undefined8 *)*pauVar5;
LAB_1099184bc:
      lVar23 = 0;
      do {
        lVar23 = lVar23 + 8;
        puVar10 = *pauVar5 + lVar23;
        (*(code *)*param_3)(puVar10,&uStack_78);
      } while (((ulong)puVar10 & 1) != 0);
      pauVar9 = (undefined1 (*) [16])(*pauVar5 + lVar23);
      pauVar15 = param_2;
      if (lVar23 == 8) {
        do {
          if (pauVar15 <= pauVar9) break;
          pauVar15 = (undefined1 (*) [16])(pauVar15[-1] + 8);
          pauVar12 = pauVar15;
          (*(code *)*param_3)(pauVar15,&uStack_78);
        } while (((ulong)pauVar12 & 1) == 0);
      }
      else {
        do {
          pauVar15 = (undefined1 (*) [16])(pauVar15[-1] + 8);
          pauVar12 = pauVar15;
          (*(code *)*param_3)(pauVar15,&uStack_78);
        } while ((int)pauVar12 == 0);
      }
      pauVar25 = pauVar15;
      pauVar12 = pauVar9;
      if (pauVar9 < pauVar15) {
        do {
          uVar17 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar25;
          *(undefined8 *)*pauVar25 = uVar17;
          do {
            pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
            pauVar8 = pauVar12;
            (*(code *)*param_3)(pauVar12,&uStack_78);
          } while (((ulong)pauVar8 & 1) != 0);
          do {
            pauVar25 = (undefined1 (*) [16])(pauVar25[-1] + 8);
            pauVar8 = pauVar25;
            (*(code *)*param_3)(pauVar25,&uStack_78);
          } while ((int)pauVar8 == 0);
        } while (pauVar12 < pauVar25);
      }
      pauVar25 = (undefined1 (*) [16])(pauVar12[-1] + 8);
      if (pauVar25 != pauVar5) {
        *(undefined8 *)*pauVar5 = *(undefined8 *)*pauVar25;
      }
      *(undefined8 *)*pauVar25 = uStack_78;
      if (pauVar15 <= pauVar9) {
        pauVar9 = pauVar5;
        FUN_109918d34(pauVar5,pauVar25,param_3);
        pauVar15 = pauVar12;
        FUN_109918d34(pauVar12,param_2,param_3);
        if ((int)pauVar15 != 0) goto LAB_109918704;
        if (((ulong)pauVar9 & 1) != 0) goto LAB_1099180d4;
      }
      FUN_109918088(pauVar5,pauVar25,param_3,param_4,(uint)param_5 & 1);
      param_5 = 0;
      goto LAB_1099180d4;
    }
    puVar10 = pauVar5[-1] + 8;
    (*(code *)*param_3)(puVar10,pauVar5);
    uStack_78 = *(undefined8 *)*pauVar5;
    if (((ulong)puVar10 & 1) != 0) goto LAB_1099184bc;
    puVar13 = &uStack_78;
    (*(code *)*param_3)(puVar13,puVar20);
    pauVar12 = pauVar5;
    if (((ulong)puVar13 & 1) == 0) {
      do {
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
        if (param_2 <= pauVar12) break;
        puVar13 = &uStack_78;
        (*(code *)*param_3)(puVar13,pauVar12);
      } while ((int)puVar13 == 0);
    }
    else {
      do {
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
        puVar13 = &uStack_78;
        (*(code *)*param_3)(puVar13,pauVar12);
      } while (((ulong)puVar13 & 1) == 0);
    }
    pauVar9 = param_2;
    if (pauVar12 < param_2) {
      do {
        pauVar9 = (undefined1 (*) [16])(pauVar9[-1] + 8);
        puVar13 = &uStack_78;
        (*(code *)*param_3)(puVar13,pauVar9);
      } while (((ulong)puVar13 & 1) != 0);
    }
    while (pauVar12 < pauVar9) {
      uVar17 = *(undefined8 *)*pauVar12;
      *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar9;
      *(undefined8 *)*pauVar9 = uVar17;
      do {
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
        puVar13 = &uStack_78;
        (*(code *)*param_3)(puVar13,pauVar12);
      } while ((int)puVar13 == 0);
      do {
        pauVar9 = (undefined1 (*) [16])(pauVar9[-1] + 8);
        puVar13 = &uStack_78;
        (*(code *)*param_3)(puVar13,pauVar9);
      } while (((ulong)puVar13 & 1) != 0);
    }
    pauVar9 = (undefined1 (*) [16])(pauVar12[-1] + 8);
    if (pauVar9 != pauVar5) {
      *(undefined8 *)*pauVar5 = *(undefined8 *)*pauVar9;
    }
    param_5 = 0;
    *(undefined8 *)*pauVar9 = uStack_78;
  } while( true );
LAB_10991880c:
  pauVar9 = pauVar12;
  pauVar12 = pauVar9;
  (*(code *)*param_3)(pauVar9,pauVar16);
  if ((int)pauVar12 != 0) {
    uStack_78 = *(undefined8 *)*pauVar9;
    lVar4 = lVar23;
    do {
      lVar21 = lVar4;
      *(undefined8 *)((long)(*pauVar5 + lVar21) + 8) = *(undefined8 *)(*pauVar5 + lVar21);
      pauVar12 = pauVar5;
      if (lVar21 == 0) goto LAB_109918868;
      puVar11 = &uStack_78;
      (*(code *)*param_3)(puVar11,pauVar5[-1] + lVar21 + 8);
      lVar4 = lVar21 + -8;
    } while (((ulong)puVar11 & 1) != 0);
    pauVar12 = (undefined1 (*) [16])(*pauVar5 + lVar21);
LAB_109918868:
    *(undefined8 *)*pauVar12 = uStack_78;
  }
  lVar23 = lVar23 + 8;
  pauVar12 = (undefined1 (*) [16])(*pauVar9 + 8);
  pauVar16 = pauVar9;
  if ((undefined1 (*) [16])(*pauVar9 + 8) == param_2) {
    return;
  }
  goto LAB_10991880c;
LAB_109918894:
  do {
    if ((long)uVar18 <= (long)uVar22) {
      uVar3 = (uVar18 & 0x1fffffffffffffff) << 1 | 1;
      puVar11 = (undefined8 *)(*pauVar5 + uVar3 * 8);
      uVar2 = (uVar18 & 0x1fffffffffffffff) * 2 + 2;
      puVar20 = puVar11;
      uVar24 = uVar3;
      if ((long)uVar2 < (long)uVar26) {
        puVar13 = puVar11;
        (*(code *)*param_3)(puVar11,puVar11 + 1);
        puVar20 = puVar11 + 1;
        uVar24 = uVar2;
        if ((int)puVar13 == 0) {
          puVar20 = puVar11;
          uVar24 = uVar3;
        }
      }
      puVar11 = (undefined8 *)(*pauVar5 + uVar18 * 8);
      puVar13 = puVar20;
      (*(code *)*param_3)(puVar20,puVar11);
      if (((ulong)puVar13 & 1) == 0) {
        uStack_78 = *puVar11;
        do {
          puVar13 = puVar20;
          *puVar11 = *puVar13;
          if ((long)uVar22 < (long)uVar24) break;
          uVar3 = (uVar24 & 0x3fffffffffffffff) << 1 | 1;
          puVar11 = (undefined8 *)(*pauVar5 + uVar3 * 8);
          uVar2 = uVar24 * 2 + 2;
          puVar20 = puVar11;
          uVar24 = uVar3;
          if ((long)uVar2 < (long)uVar26) {
            puVar14 = puVar11;
            (*(code *)*param_3)(puVar11,puVar11 + 1);
            puVar20 = puVar11 + 1;
            uVar24 = uVar2;
            if ((int)puVar14 == 0) {
              puVar20 = puVar11;
              uVar24 = uVar3;
            }
          }
          puVar14 = puVar20;
          (*(code *)*param_3)(puVar20,&uStack_78);
          puVar11 = puVar13;
        } while ((int)puVar14 == 0);
        *puVar13 = uStack_78;
      }
    }
    bVar1 = 0 < (long)uVar18;
    uVar18 = uVar18 - 1;
  } while (bVar1);
  do {
    uVar18 = 0;
    uVar17 = *(undefined8 *)*pauVar5;
    pauVar12 = pauVar5;
    do {
      pauVar16 = (undefined1 (*) [16])(*pauVar12 + uVar18 * 8 + 8);
      uVar2 = uVar18 << 1 | 1;
      uVar22 = uVar18 * 2 + 2;
      pauVar9 = pauVar16;
      uVar3 = uVar2;
      if ((long)uVar22 < (long)uVar26) {
        pauVar15 = pauVar16;
        (*(code *)*param_3)(pauVar16,(undefined1 (*) [16])(pauVar12[1] + uVar18 * 8));
        pauVar9 = (undefined1 (*) [16])(pauVar12[1] + uVar18 * 8);
        uVar3 = uVar22;
        if ((int)pauVar15 == 0) {
          pauVar9 = pauVar16;
          uVar3 = uVar2;
        }
      }
      uVar18 = uVar3;
      *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar9;
      pauVar12 = pauVar9;
    } while ((long)uVar18 <= (long)(uVar26 - 2 >> 1));
    param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
    if (pauVar9 == param_2) {
      *(undefined8 *)*pauVar9 = uVar17;
    }
    else {
      *(undefined8 *)*pauVar9 = *(undefined8 *)*param_2;
      *(undefined8 *)*param_2 = uVar17;
      lVar23 = (long)((long)pauVar9 + (8 - (long)pauVar5)) >> 3;
      if (1 < lVar23) {
        uVar18 = lVar23 - 2U >> 1;
        pauVar12 = (undefined1 (*) [16])(*pauVar5 + uVar18 * 8);
        pauVar16 = pauVar12;
        (*(code *)*param_3)(pauVar12,pauVar9);
        if ((int)pauVar16 != 0) {
          uStack_78 = *(undefined8 *)*pauVar9;
          do {
            pauVar16 = pauVar12;
            *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar16;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1 >> 1;
            pauVar12 = (undefined1 (*) [16])(*pauVar5 + uVar18 * 8);
            pauVar15 = pauVar12;
            (*(code *)*param_3)(pauVar12,&uStack_78);
            pauVar9 = pauVar16;
          } while (((ulong)pauVar15 & 1) != 0);
          *(undefined8 *)*pauVar16 = uStack_78;
        }
      }
    }
    bVar1 = (long)uVar26 < 3;
    uVar26 = uVar26 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_109918704:
  param_2 = pauVar25;
  if (((ulong)pauVar9 & 1) != 0) {
    return;
  }
  goto LAB_1099180bc;
}



/* Entry: 109918088; end: 109918d33;  */

void FUN_109918088(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                  long param_4,uint param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_68;
  
LAB_1099180bc:
  puVar19 = (undefined8 *)(param_2[-1] + 8);
  pauVar15 = param_2 + -1;
  puVar10 = (undefined8 *)(param_2[-2] + 8);
  pauVar11 = param_1;
LAB_1099180d4:
  do {
    param_1 = pauVar11;
    uVar25 = (long)param_2 - (long)param_1 >> 3;
    if (uVar25 - 2 != 0 && 1 < (long)uVar25) {
      if (uVar25 != 3) {
        if (uVar25 == 4) {
          puVar9 = *param_1 + 8;
          (*(code *)*param_3)(puVar9,param_1);
          pauVar11 = param_1 + 1;
          (*(code *)*param_3)(pauVar11,*param_1 + 8);
          if (((ulong)puVar9 & 1) == 0) {
            if ((int)pauVar11 != 0) {
              auVar26 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                 *(undefined1 (*) [16])(*param_1 + 8),8,1);
              *(long *)param_1[1] = auVar26._8_8_;
              *(long *)(*param_1 + 8) = auVar26._0_8_;
              puVar9 = *param_1 + 8;
              (*(code *)*param_3)(puVar9,param_1);
              if ((int)puVar9 != 0) {
                auVar26 = NEON_ext(*param_1,*param_1,8,1);
                *(long *)(*param_1 + 8) = auVar26._8_8_;
                *(long *)*param_1 = auVar26._0_8_;
              }
            }
          }
          else {
            uVar16 = *(undefined8 *)*param_1;
            if ((int)pauVar11 == 0) {
              *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
              *(undefined8 *)(*param_1 + 8) = uVar16;
              pauVar11 = param_1 + 1;
              (*(code *)*param_3)(pauVar11,*param_1 + 8);
              if ((int)pauVar11 != 0) {
                auVar26 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                   *(undefined1 (*) [16])(*param_1 + 8),8,1);
                *(long *)param_1[1] = auVar26._8_8_;
                *(long *)(*param_1 + 8) = auVar26._0_8_;
              }
            }
            else {
              *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
              *(undefined8 *)param_1[1] = uVar16;
            }
          }
          puVar10 = puVar19;
          (*(code *)*param_3)(puVar19,param_1 + 1);
          if ((int)puVar10 == 0) {
            return;
          }
          uVar16 = *(undefined8 *)param_1[1];
          *(undefined8 *)param_1[1] = *puVar19;
          *puVar19 = uVar16;
        }
        else {
          if (uVar25 != 5) goto LAB_109918110;
          puVar9 = *param_1 + 8;
          (*(code *)*param_3)(puVar9,param_1);
          pauVar11 = param_1 + 1;
          (*(code *)*param_3)(pauVar11,*param_1 + 8);
          if (((ulong)puVar9 & 1) == 0) {
            if ((int)pauVar11 != 0) {
              auVar26 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                 *(undefined1 (*) [16])(*param_1 + 8),8,1);
              *(long *)param_1[1] = auVar26._8_8_;
              *(long *)(*param_1 + 8) = auVar26._0_8_;
              puVar9 = *param_1 + 8;
              (*(code *)*param_3)(puVar9,param_1);
              if ((int)puVar9 != 0) {
                auVar26 = NEON_ext(*param_1,*param_1,8,1);
                *(long *)(*param_1 + 8) = auVar26._8_8_;
                *(long *)*param_1 = auVar26._0_8_;
              }
            }
          }
          else {
            uVar16 = *(undefined8 *)*param_1;
            if ((int)pauVar11 == 0) {
              *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
              *(undefined8 *)(*param_1 + 8) = uVar16;
              pauVar11 = param_1 + 1;
              (*(code *)*param_3)(pauVar11,*param_1 + 8);
              if ((int)pauVar11 != 0) {
                auVar26 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                   *(undefined1 (*) [16])(*param_1 + 8),8,1);
                *(long *)param_1[1] = auVar26._8_8_;
                *(long *)(*param_1 + 8) = auVar26._0_8_;
              }
            }
            else {
              *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
              *(undefined8 *)param_1[1] = uVar16;
            }
          }
          puVar9 = param_1[1] + 8;
          (*(code *)*param_3)(puVar9,param_1 + 1);
          if ((int)puVar9 != 0) {
            auVar26 = NEON_ext(param_1[1],param_1[1],8,1);
            *(long *)(param_1[1] + 8) = auVar26._8_8_;
            *(long *)param_1[1] = auVar26._0_8_;
            pauVar11 = param_1 + 1;
            (*(code *)*param_3)(pauVar11,*param_1 + 8);
            if ((int)pauVar11 != 0) {
              auVar26 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                 *(undefined1 (*) [16])(*param_1 + 8),8,1);
              *(long *)param_1[1] = auVar26._8_8_;
              *(long *)(*param_1 + 8) = auVar26._0_8_;
              puVar9 = *param_1 + 8;
              (*(code *)*param_3)(puVar9,param_1);
              if ((int)puVar9 != 0) {
                auVar26 = NEON_ext(*param_1,*param_1,8,1);
                *(long *)(*param_1 + 8) = auVar26._8_8_;
                *(long *)*param_1 = auVar26._0_8_;
              }
            }
          }
          puVar10 = puVar19;
          (*(code *)*param_3)(puVar19,param_1[1] + 8);
          if ((int)puVar10 == 0) {
            return;
          }
          uVar16 = *(undefined8 *)(param_1[1] + 8);
          *(undefined8 *)(param_1[1] + 8) = *puVar19;
          *puVar19 = uVar16;
          puVar9 = param_1[1] + 8;
          (*(code *)*param_3)(puVar9,param_1 + 1);
          if ((int)puVar9 == 0) {
            return;
          }
          auVar26 = NEON_ext(param_1[1],param_1[1],8,1);
          *(long *)(param_1[1] + 8) = auVar26._8_8_;
          *(long *)param_1[1] = auVar26._0_8_;
        }
        pauVar11 = param_1 + 1;
        (*(code *)*param_3)(pauVar11,*param_1 + 8);
        if ((int)pauVar11 == 0) {
          return;
        }
        auVar26 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8)
                           ,8,1);
        *(long *)param_1[1] = auVar26._8_8_;
        *(long *)(*param_1 + 8) = auVar26._0_8_;
LAB_109918cf4:
        puVar9 = *param_1 + 8;
        (*(code *)*param_3)(puVar9,param_1);
        if ((int)puVar9 == 0) {
          return;
        }
        auVar26 = NEON_ext(*param_1,*param_1,8,1);
        *(long *)(*param_1 + 8) = auVar26._8_8_;
        *(long *)*param_1 = auVar26._0_8_;
        return;
      }
      puVar9 = *param_1 + 8;
      (*(code *)*param_3)(puVar9,param_1);
      puVar10 = puVar19;
      (*(code *)*param_3)(puVar19,*param_1 + 8);
      if (((ulong)puVar9 & 1) == 0) {
        if ((int)puVar10 == 0) {
          return;
        }
        uVar16 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *puVar19;
        *puVar19 = uVar16;
        goto LAB_109918cf4;
      }
      uVar16 = *(undefined8 *)*param_1;
      if ((int)puVar10 == 0) {
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar16;
        puVar10 = puVar19;
        (*(code *)*param_3)(puVar19,*param_1 + 8);
        if ((int)puVar10 == 0) {
          return;
        }
        uVar16 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *puVar19;
        goto LAB_1099187a4;
      }
LAB_10991879c:
      *(undefined8 *)*param_1 = *puVar19;
LAB_1099187a4:
      *puVar19 = uVar16;
      return;
    }
    if (uVar25 < 2) {
      return;
    }
    if (uVar25 == 2) {
      puVar10 = puVar19;
      (*(code *)*param_3)(puVar19,param_1);
      if ((int)puVar10 == 0) {
        return;
      }
      uVar16 = *(undefined8 *)*param_1;
      goto LAB_10991879c;
    }
LAB_109918110:
    if ((long)uVar25 < 0x18) {
      pauVar11 = (undefined1 (*) [16])(*param_1 + 8);
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || pauVar11 == param_2) {
          return;
        }
        pauVar15 = param_1 + -1;
        do {
          pauVar8 = pauVar11;
          pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
          pauVar11 = pauVar8;
          (*(code *)*param_3)(pauVar8,param_1);
          if ((int)pauVar11 != 0) {
            uStack_68 = *(undefined8 *)*pauVar8;
            pauVar11 = pauVar15;
            do {
              pauVar14 = pauVar11;
              *(undefined8 *)pauVar14[1] = *(undefined8 *)((long)*pauVar14 + 8);
              puVar10 = &uStack_68;
              (*(code *)*param_3)(puVar10,pauVar14);
              pauVar11 = (undefined1 (*) [16])(pauVar14[-1] + 8);
            } while (((ulong)puVar10 & 1) != 0);
            *(undefined8 *)((long)*pauVar14 + 8) = uStack_68;
          }
          pauVar11 = (undefined1 (*) [16])(*pauVar8 + 8);
          param_1 = pauVar8;
        } while ((undefined1 (*) [16])(*pauVar8 + 8) != param_2);
        return;
      }
      if (param_1 == param_2 || pauVar11 == param_2) {
        return;
      }
      lVar22 = 0;
      pauVar15 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar21 = uVar25 - 2 >> 1;
      uVar17 = uVar21;
      goto LAB_109918894;
    }
    puVar12 = (undefined8 *)(*param_1 + (uVar25 >> 1) * 8);
    if (uVar25 < 0x81) {
      pauVar11 = param_1;
      (*(code *)*param_3)(param_1,puVar12);
      puVar13 = puVar19;
      (*(code *)*param_3)(puVar19,param_1);
      if (((ulong)pauVar11 & 1) == 0) {
        if ((int)puVar13 != 0) {
          uVar16 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *puVar19;
          *puVar19 = uVar16;
          pauVar11 = param_1;
          (*(code *)*param_3)(param_1,puVar12);
          if ((int)pauVar11 != 0) {
            uVar16 = *puVar12;
            *puVar12 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = uVar16;
          }
        }
      }
      else {
        uVar16 = *puVar12;
        if ((int)puVar13 == 0) {
          *puVar12 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = uVar16;
          puVar12 = puVar19;
          (*(code *)*param_3)(puVar19,param_1);
          if ((int)puVar12 == 0) goto LAB_109918494;
          uVar16 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *puVar19;
        }
        else {
          *puVar12 = *puVar19;
        }
        *puVar19 = uVar16;
      }
    }
    else {
      puVar13 = puVar12;
      (*(code *)*param_3)(puVar12,param_1);
      puVar5 = puVar19;
      (*(code *)*param_3)(puVar19,puVar12);
      if (((ulong)puVar13 & 1) == 0) {
        if ((int)puVar5 != 0) {
          uVar16 = *puVar12;
          *puVar12 = *puVar19;
          *puVar19 = uVar16;
          puVar13 = puVar12;
          (*(code *)*param_3)(puVar12,param_1);
          if ((int)puVar13 != 0) {
            uVar16 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = *puVar12;
            *puVar12 = uVar16;
          }
        }
      }
      else {
        uVar16 = *(undefined8 *)*param_1;
        if ((int)puVar5 == 0) {
          *(undefined8 *)*param_1 = *puVar12;
          *puVar12 = uVar16;
          puVar13 = puVar19;
          (*(code *)*param_3)(puVar19,puVar12);
          if ((int)puVar13 == 0) goto LAB_109918248;
          uVar16 = *puVar12;
          *puVar12 = *puVar19;
        }
        else {
          *(undefined8 *)*param_1 = *puVar19;
        }
        *puVar19 = uVar16;
      }
LAB_109918248:
      puVar5 = puVar12 + -1;
      puVar13 = puVar5;
      (*(code *)*param_3)(puVar5,*param_1 + 8);
      pauVar11 = pauVar15;
      (*(code *)*param_3)(pauVar15,puVar5);
      if (((ulong)puVar13 & 1) == 0) {
        if ((int)pauVar11 != 0) {
          uVar16 = *puVar5;
          *puVar5 = *(undefined8 *)*pauVar15;
          *(undefined8 *)*pauVar15 = uVar16;
          puVar13 = puVar5;
          (*(code *)*param_3)(puVar5,*param_1 + 8);
          if ((int)puVar13 != 0) {
            uVar16 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = *puVar5;
            *puVar5 = uVar16;
          }
        }
      }
      else {
        uVar16 = *(undefined8 *)(*param_1 + 8);
        if ((int)pauVar11 == 0) {
          *(undefined8 *)(*param_1 + 8) = *puVar5;
          *puVar5 = uVar16;
          pauVar11 = pauVar15;
          (*(code *)*param_3)(pauVar15,puVar5);
          if ((int)pauVar11 == 0) goto LAB_109918334;
          uVar16 = *puVar5;
          *puVar5 = *(undefined8 *)*pauVar15;
        }
        else {
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)*pauVar15;
        }
        *(undefined8 *)*pauVar15 = uVar16;
      }
LAB_109918334:
      puVar13 = puVar12 + 1;
      (*(code *)*param_3)(puVar13,param_1 + 1);
      puVar6 = puVar10;
      (*(code *)*param_3)(puVar10,puVar12 + 1);
      if (((ulong)puVar13 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uVar16 = puVar12[1];
          puVar12[1] = *puVar10;
          *puVar10 = uVar16;
          puVar13 = puVar12 + 1;
          (*(code *)*param_3)(puVar13,param_1 + 1);
          if ((int)puVar13 != 0) {
            uVar16 = *(undefined8 *)param_1[1];
            *(undefined8 *)param_1[1] = puVar12[1];
            puVar12[1] = uVar16;
          }
        }
      }
      else {
        uVar16 = *(undefined8 *)param_1[1];
        if ((int)puVar6 == 0) {
          *(undefined8 *)param_1[1] = puVar12[1];
          puVar12[1] = uVar16;
          puVar13 = puVar10;
          (*(code *)*param_3)(puVar10,puVar12 + 1);
          if ((int)puVar13 == 0) goto LAB_1099183e8;
          uVar16 = puVar12[1];
          puVar12[1] = *puVar10;
        }
        else {
          *(undefined8 *)param_1[1] = *puVar10;
        }
        *puVar10 = uVar16;
      }
LAB_1099183e8:
      puVar6 = puVar12;
      (*(code *)*param_3)(puVar12,puVar5);
      puVar13 = puVar12 + 1;
      (*(code *)*param_3)(puVar13,puVar12);
      if (((ulong)puVar6 & 1) == 0) {
        uVar16 = *puVar12;
        if ((int)puVar13 != 0) {
          *puVar12 = puVar12[1];
          puVar12[1] = uVar16;
          puVar13 = puVar12;
          (*(code *)*param_3)(puVar12,puVar5);
          uVar16 = *puVar12;
          if ((int)puVar13 != 0) {
            uVar16 = puVar12[-1];
            puVar12[-1] = *puVar12;
            *puVar12 = uVar16;
          }
        }
      }
      else {
        uVar16 = *puVar5;
        if ((int)puVar13 == 0) {
          puVar12[-1] = *puVar12;
          *puVar12 = uVar16;
          puVar13 = puVar12 + 1;
          (*(code *)*param_3)(puVar13,puVar12);
          uVar18 = *puVar12;
          uVar16 = uVar18;
          if ((int)puVar13 != 0) {
            uVar16 = puVar12[1];
            *puVar12 = uVar16;
            puVar12[1] = uVar18;
          }
        }
        else {
          puVar12[-1] = puVar12[1];
          puVar12[1] = uVar16;
          uVar16 = *puVar12;
        }
      }
      uVar18 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = uVar16;
      *puVar12 = uVar18;
    }
LAB_109918494:
    param_4 = param_4 + -1;
    if ((param_5 & 1) != 0) {
      uStack_68 = *(undefined8 *)*param_1;
LAB_1099184bc:
      lVar22 = 0;
      do {
        lVar22 = lVar22 + 8;
        puVar9 = *param_1 + lVar22;
        (*(code *)*param_3)(puVar9,&uStack_68);
      } while (((ulong)puVar9 & 1) != 0);
      pauVar8 = (undefined1 (*) [16])(*param_1 + lVar22);
      pauVar14 = param_2;
      if (lVar22 == 8) {
        do {
          if (pauVar14 <= pauVar8) break;
          pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 8);
          pauVar11 = pauVar14;
          (*(code *)*param_3)(pauVar14,&uStack_68);
        } while (((ulong)pauVar11 & 1) == 0);
      }
      else {
        do {
          pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 8);
          pauVar11 = pauVar14;
          (*(code *)*param_3)(pauVar14,&uStack_68);
        } while ((int)pauVar11 == 0);
      }
      pauVar24 = pauVar14;
      pauVar11 = pauVar8;
      if (pauVar8 < pauVar14) {
        do {
          uVar16 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar24;
          *(undefined8 *)*pauVar24 = uVar16;
          do {
            pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
            pauVar7 = pauVar11;
            (*(code *)*param_3)(pauVar11,&uStack_68);
          } while (((ulong)pauVar7 & 1) != 0);
          do {
            pauVar24 = (undefined1 (*) [16])(pauVar24[-1] + 8);
            pauVar7 = pauVar24;
            (*(code *)*param_3)(pauVar24,&uStack_68);
          } while ((int)pauVar7 == 0);
        } while (pauVar11 < pauVar24);
      }
      pauVar24 = (undefined1 (*) [16])(pauVar11[-1] + 8);
      if (pauVar24 != param_1) {
        *(undefined8 *)*param_1 = *(undefined8 *)*pauVar24;
      }
      *(undefined8 *)*pauVar24 = uStack_68;
      if (pauVar14 <= pauVar8) {
        pauVar8 = param_1;
        FUN_109918d34(param_1,pauVar24,param_3);
        pauVar14 = pauVar11;
        FUN_109918d34(pauVar11,param_2,param_3);
        if ((int)pauVar14 != 0) goto LAB_109918704;
        if (((ulong)pauVar8 & 1) != 0) goto LAB_1099180d4;
      }
      FUN_109918088(param_1,pauVar24,param_3,param_4,param_5 & 1);
      param_5 = 0;
      goto LAB_1099180d4;
    }
    puVar9 = param_1[-1] + 8;
    (*(code *)*param_3)(puVar9,param_1);
    uStack_68 = *(undefined8 *)*param_1;
    if (((ulong)puVar9 & 1) != 0) goto LAB_1099184bc;
    puVar12 = &uStack_68;
    (*(code *)*param_3)(puVar12,puVar19);
    pauVar11 = param_1;
    if (((ulong)puVar12 & 1) == 0) {
      do {
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
        if (param_2 <= pauVar11) break;
        puVar12 = &uStack_68;
        (*(code *)*param_3)(puVar12,pauVar11);
      } while ((int)puVar12 == 0);
    }
    else {
      do {
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
        puVar12 = &uStack_68;
        (*(code *)*param_3)(puVar12,pauVar11);
      } while (((ulong)puVar12 & 1) == 0);
    }
    pauVar8 = param_2;
    if (pauVar11 < param_2) {
      do {
        pauVar8 = (undefined1 (*) [16])(pauVar8[-1] + 8);
        puVar12 = &uStack_68;
        (*(code *)*param_3)(puVar12,pauVar8);
      } while (((ulong)puVar12 & 1) != 0);
    }
    while (pauVar11 < pauVar8) {
      uVar16 = *(undefined8 *)*pauVar11;
      *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar8;
      *(undefined8 *)*pauVar8 = uVar16;
      do {
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
        puVar12 = &uStack_68;
        (*(code *)*param_3)(puVar12,pauVar11);
      } while ((int)puVar12 == 0);
      do {
        pauVar8 = (undefined1 (*) [16])(pauVar8[-1] + 8);
        puVar12 = &uStack_68;
        (*(code *)*param_3)(puVar12,pauVar8);
      } while (((ulong)puVar12 & 1) != 0);
    }
    pauVar8 = (undefined1 (*) [16])(pauVar11[-1] + 8);
    if (pauVar8 != param_1) {
      *(undefined8 *)*param_1 = *(undefined8 *)*pauVar8;
    }
    param_5 = 0;
    *(undefined8 *)*pauVar8 = uStack_68;
  } while( true );
LAB_10991880c:
  pauVar8 = pauVar11;
  pauVar11 = pauVar8;
  (*(code *)*param_3)(pauVar8,pauVar15);
  if ((int)pauVar11 != 0) {
    uStack_68 = *(undefined8 *)*pauVar8;
    lVar4 = lVar22;
    do {
      lVar20 = lVar4;
      *(undefined8 *)((long)(*param_1 + lVar20) + 8) = *(undefined8 *)(*param_1 + lVar20);
      pauVar11 = param_1;
      if (lVar20 == 0) goto LAB_109918868;
      puVar10 = &uStack_68;
      (*(code *)*param_3)(puVar10,param_1[-1] + lVar20 + 8);
      lVar4 = lVar20 + -8;
    } while (((ulong)puVar10 & 1) != 0);
    pauVar11 = (undefined1 (*) [16])(*param_1 + lVar20);
LAB_109918868:
    *(undefined8 *)*pauVar11 = uStack_68;
  }
  lVar22 = lVar22 + 8;
  pauVar11 = (undefined1 (*) [16])(*pauVar8 + 8);
  pauVar15 = pauVar8;
  if ((undefined1 (*) [16])(*pauVar8 + 8) == param_2) {
    return;
  }
  goto LAB_10991880c;
LAB_109918894:
  do {
    if ((long)uVar17 <= (long)uVar21) {
      uVar3 = (uVar17 & 0x1fffffffffffffff) << 1 | 1;
      puVar10 = (undefined8 *)(*param_1 + uVar3 * 8);
      uVar2 = (uVar17 & 0x1fffffffffffffff) * 2 + 2;
      puVar19 = puVar10;
      uVar23 = uVar3;
      if ((long)uVar2 < (long)uVar25) {
        puVar12 = puVar10;
        (*(code *)*param_3)(puVar10,puVar10 + 1);
        puVar19 = puVar10 + 1;
        uVar23 = uVar2;
        if ((int)puVar12 == 0) {
          puVar19 = puVar10;
          uVar23 = uVar3;
        }
      }
      puVar10 = (undefined8 *)(*param_1 + uVar17 * 8);
      puVar12 = puVar19;
      (*(code *)*param_3)(puVar19,puVar10);
      if (((ulong)puVar12 & 1) == 0) {
        uStack_68 = *puVar10;
        do {
          puVar12 = puVar19;
          *puVar10 = *puVar12;
          if ((long)uVar21 < (long)uVar23) break;
          uVar3 = (uVar23 & 0x3fffffffffffffff) << 1 | 1;
          puVar10 = (undefined8 *)(*param_1 + uVar3 * 8);
          uVar2 = uVar23 * 2 + 2;
          puVar19 = puVar10;
          uVar23 = uVar3;
          if ((long)uVar2 < (long)uVar25) {
            puVar13 = puVar10;
            (*(code *)*param_3)(puVar10,puVar10 + 1);
            puVar19 = puVar10 + 1;
            uVar23 = uVar2;
            if ((int)puVar13 == 0) {
              puVar19 = puVar10;
              uVar23 = uVar3;
            }
          }
          puVar13 = puVar19;
          (*(code *)*param_3)(puVar19,&uStack_68);
          puVar10 = puVar12;
        } while ((int)puVar13 == 0);
        *puVar12 = uStack_68;
      }
    }
    bVar1 = 0 < (long)uVar17;
    uVar17 = uVar17 - 1;
  } while (bVar1);
  do {
    uVar17 = 0;
    uVar16 = *(undefined8 *)*param_1;
    pauVar11 = param_1;
    do {
      pauVar15 = (undefined1 (*) [16])(*pauVar11 + uVar17 * 8 + 8);
      uVar2 = uVar17 << 1 | 1;
      uVar21 = uVar17 * 2 + 2;
      pauVar8 = pauVar15;
      uVar3 = uVar2;
      if ((long)uVar21 < (long)uVar25) {
        pauVar14 = pauVar15;
        (*(code *)*param_3)(pauVar15,(undefined1 (*) [16])(pauVar11[1] + uVar17 * 8));
        pauVar8 = (undefined1 (*) [16])(pauVar11[1] + uVar17 * 8);
        uVar3 = uVar21;
        if ((int)pauVar14 == 0) {
          pauVar8 = pauVar15;
          uVar3 = uVar2;
        }
      }
      uVar17 = uVar3;
      *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar8;
      pauVar11 = pauVar8;
    } while ((long)uVar17 <= (long)(uVar25 - 2 >> 1));
    param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
    if (pauVar8 == param_2) {
      *(undefined8 *)*pauVar8 = uVar16;
    }
    else {
      *(undefined8 *)*pauVar8 = *(undefined8 *)*param_2;
      *(undefined8 *)*param_2 = uVar16;
      lVar22 = (long)((long)pauVar8 + (8 - (long)param_1)) >> 3;
      if (1 < lVar22) {
        uVar17 = lVar22 - 2U >> 1;
        pauVar11 = (undefined1 (*) [16])(*param_1 + uVar17 * 8);
        pauVar15 = pauVar11;
        (*(code *)*param_3)(pauVar11,pauVar8);
        if ((int)pauVar15 != 0) {
          uStack_68 = *(undefined8 *)*pauVar8;
          do {
            pauVar15 = pauVar11;
            *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar15;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            pauVar11 = (undefined1 (*) [16])(*param_1 + uVar17 * 8);
            pauVar14 = pauVar11;
            (*(code *)*param_3)(pauVar11,&uStack_68);
            pauVar8 = pauVar15;
          } while (((ulong)pauVar14 & 1) != 0);
          *(undefined8 *)*pauVar15 = uStack_68;
        }
      }
    }
    bVar1 = (long)uVar25 < 3;
    uVar25 = uVar25 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_109918704:
  param_2 = pauVar24;
  if (((ulong)pauVar8 & 1) != 0) {
    return;
  }
  goto LAB_1099180bc;
}



/* Entry: 109918d34; end: 1099191ff;  */

bool FUN_109918d34(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_58;
  
  uVar8 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      puVar7 = (undefined8 *)(param_2[-1] + 8);
      puVar3 = puVar7;
      (*(code *)*param_3)(puVar7,param_1);
      if ((int)puVar3 == 0) {
        return true;
      }
      uVar9 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *puVar7;
      *puVar7 = uVar9;
      return true;
    }
LAB_109918e60:
    pauVar5 = param_1 + 1;
    puVar2 = *param_1 + 8;
    (*(code *)*param_3)(puVar2,param_1);
    pauVar4 = pauVar5;
    (*(code *)*param_3)(pauVar5,*param_1 + 8);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)pauVar4 != 0) {
        auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8)
                           ,8,1);
        *(long *)param_1[1] = auVar13._8_8_;
        *(long *)(*param_1 + 8) = auVar13._0_8_;
        puVar2 = *param_1 + 8;
        (*(code *)*param_3)(puVar2,param_1);
        if ((int)puVar2 != 0) {
          auVar13 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar13._8_8_;
          *(long *)*param_1 = auVar13._0_8_;
        }
      }
    }
    else {
      uVar9 = *(undefined8 *)*param_1;
      if ((int)pauVar4 == 0) {
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar9;
        pauVar4 = pauVar5;
        (*(code *)*param_3)(pauVar5,*param_1 + 8);
        if ((int)pauVar4 != 0) {
          auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                             *(undefined1 (*) [16])(*param_1 + 8),8,1);
          *(long *)param_1[1] = auVar13._8_8_;
          *(long *)(*param_1 + 8) = auVar13._0_8_;
        }
      }
      else {
        *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
        *(undefined8 *)param_1[1] = uVar9;
      }
    }
    if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
      lVar11 = 0;
      iVar12 = 0;
      pauVar4 = (undefined1 (*) [16])(param_1[1] + 8);
      do {
        pauVar6 = pauVar4;
        (*(code *)*param_3)(pauVar4,pauVar5);
        if ((int)pauVar6 != 0) {
          uStack_58 = *(undefined8 *)*pauVar4;
          lVar1 = lVar11;
          do {
            lVar10 = lVar1;
            *(undefined8 *)(param_1[1] + lVar10 + 8) = *(undefined8 *)(param_1[1] + lVar10);
            pauVar5 = param_1;
            if (lVar10 == -0x10) goto LAB_109919064;
            puVar3 = &uStack_58;
            (*(code *)*param_3)(puVar3,*param_1 + lVar10 + 8);
            lVar1 = lVar10 + -8;
          } while (((ulong)puVar3 & 1) != 0);
          pauVar5 = (undefined1 (*) [16])(param_1[1] + lVar10);
LAB_109919064:
          *(undefined8 *)*pauVar5 = uStack_58;
          iVar12 = iVar12 + 1;
          if (iVar12 == 8) {
            return (undefined1 (*) [16])(*pauVar4 + 8) == param_2;
          }
        }
        puVar2 = *pauVar4;
        lVar11 = lVar11 + 8;
        pauVar5 = pauVar4;
        pauVar4 = (undefined1 (*) [16])(puVar2 + 8);
      } while ((undefined1 (*) [16])(puVar2 + 8) != param_2);
    }
  }
  else {
    if (uVar8 == 3) {
      puVar7 = (undefined8 *)(param_2[-1] + 8);
      puVar2 = *param_1 + 8;
      (*(code *)*param_3)(puVar2,param_1);
      puVar3 = puVar7;
      (*(code *)*param_3)(puVar7,*param_1 + 8);
      if (((ulong)puVar2 & 1) != 0) {
        uVar9 = *(undefined8 *)*param_1;
        if ((int)puVar3 == 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = uVar9;
          puVar3 = puVar7;
          (*(code *)*param_3)(puVar7,*param_1 + 8);
          if ((int)puVar3 == 0) {
            return true;
          }
          uVar9 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = *puVar7;
        }
        else {
          *(undefined8 *)*param_1 = *puVar7;
        }
        *puVar7 = uVar9;
        return true;
      }
      if ((int)puVar3 == 0) {
        return true;
      }
      uVar9 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = *puVar7;
      *puVar7 = uVar9;
    }
    else {
      if (uVar8 == 4) {
        puVar3 = (undefined8 *)(param_2[-1] + 8);
        puVar2 = *param_1 + 8;
        (*(code *)*param_3)(puVar2,param_1);
        pauVar5 = param_1 + 1;
        (*(code *)*param_3)(pauVar5,*param_1 + 8);
        if (((ulong)puVar2 & 1) == 0) {
          if ((int)pauVar5 != 0) {
            auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                               *(undefined1 (*) [16])(*param_1 + 8),8,1);
            *(long *)param_1[1] = auVar13._8_8_;
            *(long *)(*param_1 + 8) = auVar13._0_8_;
            puVar2 = *param_1 + 8;
            (*(code *)*param_3)(puVar2,param_1);
            if ((int)puVar2 != 0) {
              auVar13 = NEON_ext(*param_1,*param_1,8,1);
              *(long *)(*param_1 + 8) = auVar13._8_8_;
              *(long *)*param_1 = auVar13._0_8_;
            }
          }
        }
        else {
          uVar9 = *(undefined8 *)*param_1;
          if ((int)pauVar5 == 0) {
            *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = uVar9;
            pauVar5 = param_1 + 1;
            (*(code *)*param_3)(pauVar5,*param_1 + 8);
            if ((int)pauVar5 != 0) {
              auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                 *(undefined1 (*) [16])(*param_1 + 8),8,1);
              *(long *)param_1[1] = auVar13._8_8_;
              *(long *)(*param_1 + 8) = auVar13._0_8_;
            }
          }
          else {
            *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
            *(undefined8 *)param_1[1] = uVar9;
          }
        }
        puVar7 = puVar3;
        (*(code *)*param_3)(puVar3,param_1 + 1);
        if ((int)puVar7 == 0) {
          return true;
        }
        uVar9 = *(undefined8 *)param_1[1];
        *(undefined8 *)param_1[1] = *puVar3;
        *puVar3 = uVar9;
      }
      else {
        if (uVar8 != 5) goto LAB_109918e60;
        puVar3 = (undefined8 *)(param_2[-1] + 8);
        puVar2 = *param_1 + 8;
        (*(code *)*param_3)(puVar2,param_1);
        pauVar5 = param_1 + 1;
        (*(code *)*param_3)(pauVar5,*param_1 + 8);
        if (((ulong)puVar2 & 1) == 0) {
          if ((int)pauVar5 != 0) {
            auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                               *(undefined1 (*) [16])(*param_1 + 8),8,1);
            *(long *)param_1[1] = auVar13._8_8_;
            *(long *)(*param_1 + 8) = auVar13._0_8_;
            puVar2 = *param_1 + 8;
            (*(code *)*param_3)(puVar2,param_1);
            if ((int)puVar2 != 0) {
              auVar13 = NEON_ext(*param_1,*param_1,8,1);
              *(long *)(*param_1 + 8) = auVar13._8_8_;
              *(long *)*param_1 = auVar13._0_8_;
            }
          }
        }
        else {
          uVar9 = *(undefined8 *)*param_1;
          if ((int)pauVar5 == 0) {
            *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = uVar9;
            pauVar5 = param_1 + 1;
            (*(code *)*param_3)(pauVar5,*param_1 + 8);
            if ((int)pauVar5 != 0) {
              auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                 *(undefined1 (*) [16])(*param_1 + 8),8,1);
              *(long *)param_1[1] = auVar13._8_8_;
              *(long *)(*param_1 + 8) = auVar13._0_8_;
            }
          }
          else {
            *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
            *(undefined8 *)param_1[1] = uVar9;
          }
        }
        puVar2 = param_1[1] + 8;
        (*(code *)*param_3)(puVar2,param_1 + 1);
        if ((int)puVar2 != 0) {
          auVar13 = NEON_ext(param_1[1],param_1[1],8,1);
          *(long *)(param_1[1] + 8) = auVar13._8_8_;
          *(long *)param_1[1] = auVar13._0_8_;
          pauVar5 = param_1 + 1;
          (*(code *)*param_3)(pauVar5,*param_1 + 8);
          if ((int)pauVar5 != 0) {
            auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                               *(undefined1 (*) [16])(*param_1 + 8),8,1);
            *(long *)param_1[1] = auVar13._8_8_;
            *(long *)(*param_1 + 8) = auVar13._0_8_;
            puVar2 = *param_1 + 8;
            (*(code *)*param_3)(puVar2,param_1);
            if ((int)puVar2 != 0) {
              auVar13 = NEON_ext(*param_1,*param_1,8,1);
              *(long *)(*param_1 + 8) = auVar13._8_8_;
              *(long *)*param_1 = auVar13._0_8_;
            }
          }
        }
        puVar7 = puVar3;
        (*(code *)*param_3)(puVar3,param_1[1] + 8);
        if ((int)puVar7 == 0) {
          return true;
        }
        uVar9 = *(undefined8 *)(param_1[1] + 8);
        *(undefined8 *)(param_1[1] + 8) = *puVar3;
        *puVar3 = uVar9;
        puVar2 = param_1[1] + 8;
        (*(code *)*param_3)(puVar2,param_1 + 1);
        if ((int)puVar2 == 0) {
          return true;
        }
        auVar13 = NEON_ext(param_1[1],param_1[1],8,1);
        *(long *)(param_1[1] + 8) = auVar13._8_8_;
        *(long *)param_1[1] = auVar13._0_8_;
      }
      pauVar5 = param_1 + 1;
      (*(code *)*param_3)(pauVar5,*param_1 + 8);
      if ((int)pauVar5 == 0) {
        return true;
      }
      auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8),8
                         ,1);
      *(long *)param_1[1] = auVar13._8_8_;
      *(long *)(*param_1 + 8) = auVar13._0_8_;
    }
    puVar2 = *param_1 + 8;
    (*(code *)*param_3)(puVar2,param_1);
    if ((int)puVar2 != 0) {
      auVar13 = NEON_ext(*param_1,*param_1,8,1);
      *(long *)(*param_1 + 8) = auVar13._8_8_;
      *(long *)*param_1 = auVar13._0_8_;
    }
  }
  return true;
}



/* Entry: 109919200; end: 10991944b;  */

undefined8 * FUN_109919200(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  
  param_1[3] = 0;
  param_1[2] = 0;
  puVar10 = param_1 + 6;
  *puVar10 = 0;
  *param_1 = &PTR_FUN_110b1d480;
  param_1[5] = 0;
  param_1[4] = 0;
  uVar16 = param_2[1] - *param_2;
  if (uVar16 * 0x40000000 == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    uVar11 = (long)(uVar16 * 0x40000000) >> 0x20;
    if (uVar11 >> 0x3e != 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109919410);
      (*pcVar3)();
    }
    piVar12 = (int *)((long)(uVar16 * 0x40000000) >> 0x1e);
    __Znwm();
    _bzero();
    param_1[2] = piVar12;
    param_1[3] = piVar12 + uVar11;
    param_1[4] = piVar12 + uVar11;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar15 = (int)(uVar16 >> 2);
  if (iVar15 < 1) {
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    uVar16 = uVar16 >> 2 & 0x7fffffff;
    piVar6 = (int *)*param_2;
    do {
      *piVar12 = iVar14;
      iVar14 = *piVar6 + iVar14;
      *(int *)(param_1 + 1) = iVar14;
      uVar16 = uVar16 - 1;
      piVar6 = piVar6 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar16 != 0);
  }
  uVar13 = (ulong)(uint)(iVar14 * iVar14);
  uVar16 = uVar13 << 3;
  __Znam();
  _bzero();
  param_1[5] = uVar16;
  uVar11 = (ulong)(uint)(iVar15 * iVar15);
  puVar5 = (undefined8 *)(uVar11 * 0x48 + 0x10);
  __Znam();
  *puVar5 = 0x48;
  puVar5[1] = uVar11;
  puVar7 = puVar5 + 2;
  if (iVar15 == 0) {
    *puVar10 = puVar7;
  }
  else {
    puVar9 = puVar7;
    do {
      puVar9[1] = 0x32aaaba7;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[8] = 0;
      puVar9 = puVar9 + 9;
    } while (puVar9 != puVar7 + uVar11 * 9);
    *puVar10 = puVar7;
    lVar8 = -uVar11;
    do {
      *puVar7 = uVar16;
      bVar4 = lVar8 != -1;
      lVar8 = lVar8 + 1;
      puVar7 = puVar7 + 9;
    } while (bVar4);
  }
  if (iVar14 != 0) {
    uVar11 = uVar16 >> 3 & 1;
    if (uVar13 <= uVar11) {
      uVar11 = uVar13;
    }
    if ((uVar16 & 7) != 0) {
      uVar11 = uVar13;
    }
    lVar8 = uVar13 - uVar11;
    if (uVar11 != 0) {
      _bzero(uVar16,uVar11 << 3);
    }
    lVar1 = (lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffeU) + uVar11;
    if (1 < lVar8) {
      lVar2 = lVar1;
      if (lVar1 <= (long)(uVar11 + 2)) {
        lVar2 = uVar11 + 2;
      }
      _bzero(uVar16 + uVar11 * 8,(lVar2 + ~uVar11 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar1 < (long)uVar13) {
      _bzero(uVar16 + (lVar8 / 2) * 0x10 + uVar11 * 8,(lVar8 % 2) * 8);
    }
  }
  return param_1;
}



/* Entry: 10991944c; end: 1099194b7;  */

long * FUN_10991944c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
    if (lVar3 != 0) {
      lVar1 = lVar2 + lVar3 * 0x48 + -0x40;
      lVar3 = lVar3 * -0x48;
      do {
        __ZNSt3__15mutexD1Ev(lVar1);
        lVar1 = lVar1 + -0x48;
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != 0);
    }
    __ZdaPv(lVar2 + -0x10);
  }
  return param_1;
}



/* Entry: 1099194b8; end: 10991958f;  */

void FUN_1099194b8(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    uVar6 = (ulong)(uint)(iVar3 * iVar3);
    uVar4 = uVar5 >> 3 & 1;
    if (uVar6 <= uVar4) {
      uVar4 = uVar6;
    }
    if ((uVar5 & 7) != 0) {
      uVar4 = uVar6;
    }
    lVar7 = uVar6 - uVar4;
    if (uVar4 != 0) {
      _bzero(uVar5,uVar4 << 3);
    }
    lVar1 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar4;
    if (1 < lVar7) {
      lVar2 = lVar1;
      if (lVar1 <= (long)(uVar4 + 2)) {
        lVar2 = uVar4 + 2;
      }
      _bzero(uVar5 + uVar4 * 8,(lVar2 + ~uVar4 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar1 < (long)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(uVar5 + (lVar7 / 2) * 0x10 + uVar4 * 8,(lVar7 % 2) * 8);
      return;
    }
  }
  return;
}



/* Entry: 109919590; end: 1099196bf;  */

undefined8 * FUN_109919590(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110b1d480;
  lVar2 = param_1[6];
  param_1[6] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
    if (lVar3 != 0) {
      lVar1 = lVar2 + lVar3 * 0x48 + -0x40;
      lVar3 = lVar3 * -0x48;
      do {
        __ZNSt3__15mutexD1Ev(lVar1);
        lVar1 = lVar1 + -0x48;
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != 0);
    }
    __ZdaPv(lVar2 + -0x10);
  }
  lVar2 = param_1[5];
  param_1[5] = 0;
  if (lVar2 != 0) {
    __ZdaPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099196c0; end: 109919713;  */

long FUN_1099196c0(long param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                  undefined4 *param_6,undefined4 *param_7)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  *param_4 = *(undefined4 *)(lVar1 + (long)param_2 * 4);
  *param_5 = *(undefined4 *)(lVar1 + (long)param_3 * 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *param_6 = uVar3;
  *param_7 = uVar3;
  return *(long *)(param_1 + 0x30) + ((ulong)(lVar2 - lVar1) >> 2) * (long)param_2 * 0x48 +
         (long)param_3 * 0x48;
}



/* Entry: 109919714; end: 109919bfb;  */

undefined8 * FUN_109919714(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plStack_f0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  puVar23 = param_1 + 1;
  *puVar23 = 0;
  *param_1 = &PTR_FUN_110b1d4d8;
  param_1[2] = 0;
  param_1[3] = 0;
  piVar20 = (int *)(param_2[1] - *param_2);
  if (piVar20 == (int *)0x0) {
    lVar5 = 0;
    iVar21 = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    plVar8 = param_1 + 7;
    param_1[7] = 0;
    param_1[6] = 0;
  }
  else {
    if ((long)piVar20 < 0) {
      FUN_10923f788();
LAB_109919b64:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109919b68);
      (*pcVar3)();
    }
    piVar4 = piVar20;
    __Znwm();
    param_1[1] = piVar4;
    param_1[2] = piVar4;
    param_1[3] = (long)piVar4 + (long)piVar20;
    _memcpy();
    iVar19 = 0;
    iVar21 = 0;
    piVar22 = (int *)0x0;
    piVar18 = (int *)0x0;
    param_1[2] = (long)piVar4 + (long)piVar20;
    param_1[5] = 0;
    param_1[4] = 0;
    plVar8 = param_1 + 7;
    param_1[7] = 0;
    param_1[6] = 0;
    lVar6 = 0;
    do {
      iVar10 = *piVar4;
      if (piVar18 < piVar22) {
        *piVar18 = iVar19;
        lVar5 = lVar6;
      }
      else {
        uVar16 = ((long)piVar18 - lVar6 >> 2) + 1;
        if (uVar16 >> 0x3e != 0) {
          FUN_10923f788();
          goto LAB_109919b64;
        }
        uVar13 = (long)piVar22 - lVar6 >> 1;
        if (uVar13 <= uVar16) {
          uVar13 = uVar16;
        }
        if (0x7ffffffffffffffb < (ulong)((long)piVar22 - lVar6)) {
          uVar13 = 0x3fffffffffffffff;
        }
        if (uVar13 >> 0x3e != 0) {
          func_0x000104c4f740();
          goto LAB_109919b64;
        }
        lVar5 = uVar13 << 2;
        __Znwm();
        piVar18 = (int *)(lVar5 + ((long)piVar18 - lVar6));
        piVar22 = (int *)(lVar5 + uVar13 * 4);
        *piVar18 = iVar19;
        _memcpy();
        if (lVar6 != 0) {
          __ZdlPv(lVar6);
        }
      }
      piVar18 = piVar18 + 1;
      iVar19 = iVar10 + iVar19;
      iVar21 = iVar21 + iVar10 * iVar10;
      piVar4 = piVar4 + 1;
      piVar20 = piVar20 + -1;
      lVar6 = lVar5;
    } while (piVar20 != (int *)0x0);
  }
  plStack_f0 = param_1 + 4;
  plVar24 = plVar8;
  if (piRam000000011373ca60 == (int *)0x0) {
    iVar19 = 0x1373ca60;
    FUN_1099adbb8(0x11373ca60,0x11382bb14,&UNK_10f589f79,1);
    if (iVar19 == 0) goto LAB_109919970;
  }
  else if (*piRam000000011373ca60 < 1) goto LAB_109919970;
  uStack_c8 = 0;
  uStack_70 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  FUN_1099a9f0c(&uStack_c8,&UNK_10f589f79,0x43,0,FUN_1099aa768,0,in_x6,in_x7,puVar23,plVar24);
  FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58a015,0xd);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1099ab3b0(&uStack_c8);
LAB_109919970:
  lVar6 = 0x30;
  __Znwm();
  FUN_109989a6c();
  lVar7 = *plVar8;
  *plVar8 = lVar6;
  if (lVar7 != 0) {
    FUN_1099899cc();
    __ZdlPv();
    lVar6 = *plVar8;
  }
  func_0x000109989e78(lVar6,iVar21);
  lVar6 = param_1[1];
  if (param_1[2] != lVar6) {
    uVar16 = 0;
    iVar21 = 0;
    lVar12 = param_1[7];
    lVar7 = *(long *)(lVar12 + 0x18);
    lVar1 = *(long *)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    do {
      iVar19 = *(int *)(lVar6 + uVar16 * 4);
      plVar8 = (long *)0x48;
      __Znwm();
      *plVar8 = lVar12 + (long)iVar21 * 8;
      plVar8[1] = 0x32aaaba7;
      plVar8[3] = 0;
      plVar8[2] = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[8] = 0;
      puVar23 = (undefined8 *)param_1[5];
      if (puVar23 < (undefined8 *)param_1[6]) {
        puVar17 = puVar23 + 1;
        *puVar23 = plVar8;
      }
      else {
        lVar6 = *plStack_f0;
        uVar13 = ((long)puVar23 - lVar6 >> 3) + 1;
        if (uVar13 >> 0x3d != 0) {
          FUN_10991a1a8();
          goto LAB_109919b64;
        }
        uVar11 = (long)param_1[6] - lVar6;
        uVar14 = (long)uVar11 >> 2;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar14 = 0x1fffffffffffffff;
        }
        if (uVar14 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_109919b64;
        }
        lVar9 = uVar14 << 3;
        __Znwm();
        puVar23 = (undefined8 *)(lVar9 + ((long)puVar23 - lVar6));
        puVar17 = puVar23 + 1;
        *puVar23 = plVar8;
        _memcpy();
        param_1[4] = lVar9;
        param_1[5] = puVar17;
        param_1[6] = lVar9 + uVar14 * 8;
        if (lVar6 != 0) {
          __ZdlPv(lVar6);
        }
      }
      param_1[5] = puVar17;
      if (0 < iVar19) {
        iVar10 = 0;
        iVar2 = *(int *)(lVar5 + uVar16 * 4);
        do {
          lVar15 = 0;
          lVar6 = (long)iVar21;
          lVar9 = (long)iVar21;
          iVar21 = iVar19 + iVar21;
          do {
            *(int *)(lVar7 + lVar9 * 4 + lVar15 * 4) = iVar10 + iVar2;
            *(int *)(lVar1 + lVar6 * 4 + lVar15 * 4) = iVar2 + (int)lVar15;
            lVar15 = lVar15 + 1;
          } while (iVar19 != (int)lVar15);
          iVar10 = iVar10 + 1;
        } while (iVar10 != iVar19);
      }
      uVar16 = uVar16 + 1;
      lVar6 = param_1[1];
    } while (uVar16 < (ulong)(param_1[2] - lVar6 >> 2));
  }
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109919bfc; end: 109919c2f;  */

long * FUN_109919bfc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1099899cc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109919c30; end: 109919d4f;  */

undefined8 * FUN_109919c30(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_110b1d4d8;
  plVar1 = (long *)param_1[5];
  plVar3 = (long *)param_1[4];
  while (plVar3 != plVar1) {
    plVar4 = plVar3 + 1;
    lVar2 = *plVar3;
    plVar3 = plVar4;
    if (lVar2 != 0) {
      __ZNSt3__15mutexD1Ev(lVar2 + 8);
      __ZdlPv(lVar2);
    }
  }
  lVar2 = param_1[7];
  param_1[7] = 0;
  if (lVar2 != 0) {
    FUN_1099899cc();
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109919d50; end: 109919d83;  */

undefined8
FUN_109919d50(long param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  if (param_2 == param_3) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + (long)param_2 * 4);
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = uVar1;
    *param_7 = uVar1;
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)param_2 * 8);
  }
  return 0;
}



/* Entry: 109919d84; end: 109919e5f;  */

void FUN_109919d84(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0x38) + 0x14);
  uVar6 = (ulong)iVar3;
  if (iVar3 != 0) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x28);
    uVar4 = uVar5 >> 3 & 1;
    if ((long)uVar6 <= (long)uVar4) {
      uVar4 = uVar6;
    }
    if ((uVar5 & 7) != 0) {
      uVar4 = uVar6;
    }
    lVar7 = uVar6 - uVar4;
    if (0 < (long)uVar4) {
      _bzero(uVar5,uVar4 << 3);
    }
    lVar1 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar4;
    if (1 < lVar7) {
      lVar2 = lVar1;
      if (lVar1 <= (long)(uVar4 + 2)) {
        lVar2 = uVar4 + 2;
      }
      _bzero(uVar5 + uVar4 * 8,(lVar2 + ~uVar4 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar1 < (long)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(uVar5 + (lVar7 / 2) * 0x10 + uVar4 * 8,(lVar7 % 2) * 8);
      return;
    }
  }
  return;
}



/* Entry: 109919e60; end: 109919fbf;  */

double ** FUN_109919e60(double **param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  double **ppdVar3;
  long lVar4;
  double dVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  double *pdVar9;
  undefined8 uVar10;
  double *pdStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1a8;
  double *pdStack_1a0;
  long lStack_198;
  double *pdStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  double **ppdStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_a8;
  double dStack_a0;
  long lStack_98;
  long lStack_90;
  double dStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar7 = param_1[1];
  pdVar1 = param_1[2];
  if (pdVar7 != pdVar1) {
    dVar8 = param_1[7][5];
    do {
      iVar2 = *(int *)pdVar7;
      lStack_98 = (long)iVar2;
      param_2 = &dStack_a0;
      dStack_a0 = dVar8;
      lStack_90 = lStack_98;
      dStack_78 = dVar8;
      lStack_70 = lStack_98;
      lStack_68 = lStack_98;
      FUN_10991a1bc(&ppdStack_d0);
      if (0 < lStack_70) {
        lVar4 = 0;
        dVar5 = dStack_78;
        do {
          if (0 < lStack_68) {
            lVar6 = 0;
            do {
              uVar10 = 0x3ff0000000000000;
              if (lVar4 != lVar6) {
                uVar10 = 0;
              }
              *(undefined8 *)((long)dVar5 + lVar6 * 8) = uVar10;
              lVar6 = lVar6 + 1;
            } while (lStack_68 != lVar6);
          }
          lVar4 = lVar4 + 1;
          dVar5 = (double)((long)dVar5 + lStack_68 * 8);
        } while (lVar4 != lStack_70);
      }
      puStack_a8 = (undefined1 *)&ppdStack_d0;
      if (lStack_c8 != 0) {
        param_2 = &dStack_78;
        puStack_a8 = (undefined1 *)&ppdStack_d0;
        FUN_10991a628(&puStack_a8);
      }
      if (lStack_c0 != 0) {
        param_2 = &dStack_78;
        FUN_10991a8cc(&ppdStack_d0);
      }
      param_1 = ppdStack_d0;
      _free();
      dVar8 = (double)((long)dVar8 + (ulong)(uint)(iVar2 * iVar2) * 8);
      pdVar7 = (double *)((long)pdVar7 + 4);
    } while (pdVar7 != pdVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (double *)0x0) {
    pdStack_188 = (double *)0x0;
    uStack_130 = 0;
    uStack_170 = 0;
    lStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_138 = 0;
    FUN_1099a9f0c(&pdStack_188,&UNK_10f589f79,0x88,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_180 + 0x7540,&UNK_10f58a023,0x1b);
  }
  else if (param_3 == (double *)0x0) {
    pdStack_188 = (double *)0x0;
    uStack_130 = 0;
    uStack_170 = 0;
    lStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_138 = 0;
    FUN_1099a9f0c(&pdStack_188,&UNK_10f589f79,0x89,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_180 + 0x7540,&UNK_10f58a03f,0x1b);
  }
  else {
    pdVar7 = param_1[1];
    pdVar1 = param_1[2];
    if (pdVar7 != pdVar1) {
      pdVar9 = (double *)param_1[7][5];
      do {
        iVar2 = *(int *)pdVar7;
        lVar4 = (long)iVar2;
        uStack_1a8 = 0x3ff0000000000000;
        pdStack_1c0 = param_3;
        lStack_1b8 = lVar4;
        if (iVar2 == 1) {
          *param_3 = *pdVar9 * *param_2 + *param_3;
        }
        else {
          param_1 = &pdStack_188;
          pdStack_1a0 = param_2;
          lStack_198 = lVar4;
          pdStack_188 = pdVar9;
          lStack_180 = lVar4;
          lStack_178 = lVar4;
          FUN_10991ab6c(param_1,&pdStack_1a0,&pdStack_1c0,&uStack_1a8);
        }
        param_2 = param_2 + lVar4;
        param_3 = param_3 + lVar4;
        pdVar9 = pdVar9 + (uint)(iVar2 * iVar2);
        pdVar7 = (double *)((long)pdVar7 + 4);
      } while (pdVar7 != pdVar1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  ppdVar3 = &pdStack_188;
  func_0x0001099ab7c0();
  __Unwind_Resume();
  return (double **)(ulong)*(uint *)(ppdVar3[7] + 1);
}



/* Entry: 109919fc0; end: 10991a18f;  */

double ** FUN_109919fc0(double **param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  double **ppdVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  double *pdStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  double *pdStack_d0;
  long lStack_c8;
  double *pdStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (double *)0x0) {
    pdStack_b8 = (double *)0x0;
    uStack_60 = 0;
    uStack_a0 = 0;
    lStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&pdStack_b8,&UNK_10f589f79,0x88,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b0 + 0x7540,&UNK_10f58a023,0x1b);
  }
  else if (param_3 == (double *)0x0) {
    pdStack_b8 = (double *)0x0;
    uStack_60 = 0;
    uStack_a0 = 0;
    lStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&pdStack_b8,&UNK_10f589f79,0x89,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b0 + 0x7540,&UNK_10f58a03f,0x1b);
  }
  else {
    pdVar4 = param_1[1];
    pdVar1 = param_1[2];
    if (pdVar4 != pdVar1) {
      pdVar5 = (double *)param_1[7][5];
      do {
        iVar2 = *(int *)pdVar4;
        lVar6 = (long)iVar2;
        uStack_d8 = 0x3ff0000000000000;
        pdStack_f0 = param_3;
        lStack_e8 = lVar6;
        if (iVar2 == 1) {
          *param_3 = *pdVar5 * *param_2 + *param_3;
        }
        else {
          param_1 = &pdStack_b8;
          pdStack_d0 = param_2;
          lStack_c8 = lVar6;
          pdStack_b8 = pdVar5;
          lStack_b0 = lVar6;
          lStack_a8 = lVar6;
          FUN_10991ab6c(param_1,&pdStack_d0,&pdStack_f0,&uStack_d8);
        }
        param_2 = param_2 + lVar6;
        param_3 = param_3 + lVar6;
        pdVar5 = pdVar5 + (uint)(iVar2 * iVar2);
        pdVar4 = (double *)((long)pdVar4 + 4);
      } while (pdVar4 != pdVar1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  ppdVar3 = &pdStack_b8;
  func_0x0001099ab7c0();
  __Unwind_Resume();
  return (double **)(ulong)*(uint *)(ppdVar3[7] + 1);
}



/* Entry: 10991a190; end: 10991a1a7;  */

undefined4 FUN_10991a190(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x38) + 8);
}



/* Entry: 10991a1a8; end: 10991a1bb;  */

long * FUN_10991a1a8(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  double *pdVar4;
  long **pplVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double *pdVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 uStack_69;
  long *plStack_68;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar16 = param_2[1];
  lVar9 = param_2[2];
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  if (lVar16 != 0 && lVar9 != 0) {
    lVar3 = 0;
    if (lVar9 != 0) {
      lVar3 = 0x7fffffffffffffff / lVar9;
    }
    if (lVar16 <= lVar3) goto LAB_10991a208;
    goto LAB_10991a22c;
  }
LAB_10991a208:
  uVar17 = lVar9 * lVar16;
  if (uVar17 != 0) {
    if (0 < (long)uVar17) {
      if (uVar17 >> 0x3d == 0) {
        lVar3 = uVar17 * 8;
        _malloc();
        if (lVar3 != 0) goto LAB_10991a278;
      }
LAB_10991a22c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991a2ec;
    }
    lVar3 = 0;
LAB_10991a278:
    plVar2[2] = lVar9;
    *plVar2 = lVar3;
    plVar2[1] = lVar16;
    *(undefined1 *)(plVar2 + 4) = 0;
    lVar16 = param_2[1];
    if (lVar16 != 0) goto LAB_10991a298;
    _free();
    lVar3 = 0;
LAB_10991a2f8:
    *plVar2 = lVar3;
LAB_10991a304:
    plVar2[1] = lVar16;
    plVar2[2] = lVar16;
    if ((lVar3 != *param_2) || (lVar16 != param_2[2])) {
      FUN_10991a508(plVar2,param_2,&uStack_69);
    }
    plVar2[3] = 0;
    if (0 < lVar16) {
      lVar9 = 0;
      lVar10 = *plVar2;
      lVar11 = plVar2[2];
      pdVar12 = (double *)(lVar10 + lVar11 * 8);
      lVar13 = lVar10 + lVar11 * 8 + lVar16 * -8;
      pdVar14 = (double *)(lVar13 + 0x30);
      dVar19 = 0.0;
      lVar3 = -1;
      lVar15 = lVar16;
      do {
        dVar20 = 0.0;
        if ((lVar9 != 0) &&
           (dVar20 = ABS(*(double *)(lVar10 + lVar9 * 8)), pdVar4 = pdVar12, lVar8 = lVar3,
           lVar9 != 1)) {
          do {
            dVar20 = dVar20 + ABS(*pdVar4);
            lVar8 = lVar8 + -1;
            pdVar4 = pdVar4 + lVar11;
          } while (lVar8 != 0);
        }
        uVar18 = lVar16 - lVar9;
        pdVar4 = (double *)(lVar10 + lVar9 * lVar11 * 8 + (lVar11 - uVar18) * 8);
        uVar17 = uVar18 + 3;
        if (lVar9 <= lVar16) {
          uVar17 = uVar18;
        }
        if (uVar18 + 1 < 3) {
          dVar21 = ABS(*pdVar4);
        }
        else {
          uVar6 = uVar18 - ((long)uVar18 >> 0x3f) & 0xfffffffffffffffe;
          dVar21 = ABS(*pdVar4);
          dVar22 = ABS(pdVar4[1]);
          if (3 < (long)uVar18) {
            uVar17 = uVar17 & 0xfffffffffffffffc;
            dVar23 = ABS(pdVar4[2]);
            dVar24 = ABS(pdVar4[3]);
            if (7 < uVar18) {
              lVar8 = 4;
              pdVar7 = pdVar14;
              do {
                dVar21 = dVar21 + ABS(pdVar7[-2]);
                dVar22 = dVar22 + ABS(pdVar7[-1]);
                dVar23 = dVar23 + ABS(*pdVar7);
                dVar24 = dVar24 + ABS(pdVar7[1]);
                lVar8 = lVar8 + 4;
                pdVar7 = pdVar7 + 4;
              } while (lVar8 < (long)uVar17);
            }
            dVar21 = dVar23 + dVar21;
            dVar22 = dVar24 + dVar22;
            if ((long)uVar17 < (long)uVar6) {
              dVar21 = dVar21 + ABS(pdVar4[uVar17]);
              dVar22 = dVar22 + ABS((pdVar4 + uVar17)[1]);
            }
          }
          dVar21 = dVar21 + dVar22;
          if ((long)uVar6 < (long)uVar18) {
            lVar8 = lVar15 - uVar6;
            pdVar4 = (double *)(lVar13 + ((long)uVar18 / 2) * 0x10);
            do {
              dVar21 = dVar21 + ABS(*pdVar4);
              lVar8 = lVar8 + -1;
              pdVar4 = pdVar4 + 1;
            } while (lVar8 != 0);
          }
        }
        dVar20 = dVar20 + dVar21;
        if (dVar19 < dVar20) {
          plVar2[3] = (long)dVar20;
          dVar19 = dVar20;
        }
        lVar9 = lVar9 + 1;
        lVar3 = lVar3 + 1;
        pdVar12 = pdVar12 + 1;
        pdVar14 = pdVar14 + lVar11 + 1;
        lVar15 = lVar15 + -1;
        lVar13 = lVar13 + lVar11 * 8 + 8;
      } while (lVar9 != lVar16);
    }
    *(undefined1 *)(plVar2 + 4) = 1;
    pplVar5 = &plStack_68;
    plStack_68 = plVar2;
    FUN_109909484();
    *(uint *)((long)plVar2 + 0x24) = (uint)(pplVar5 != (long **)0xffffffffffffffff);
    return plVar2;
  }
  plVar2[2] = lVar9;
  plVar2[1] = lVar16;
  *(undefined1 *)(plVar2 + 4) = 0;
  lVar16 = param_2[1];
  if (lVar16 == 0) {
    lVar3 = 0;
    goto LAB_10991a304;
  }
  lVar3 = 0;
LAB_10991a298:
  lVar9 = 0;
  if (lVar16 != 0) {
    lVar9 = 0x7fffffffffffffff / lVar16;
  }
  if (lVar16 <= lVar9) {
    uVar18 = lVar16 * lVar16;
    if (uVar17 - uVar18 == 0) goto LAB_10991a304;
    _free();
    if (uVar18 >> 0x3d == 0) {
      lVar3 = uVar18 * 8;
      _malloc();
      if (lVar3 != 0) goto LAB_10991a2f8;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10991a2ec:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10991a2f0);
  (*pcVar1)();
}



/* Entry: 10991a1bc; end: 10991a507;  */

long * FUN_10991a1bc(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  double *pdVar3;
  long **pplVar4;
  ulong uVar5;
  double *pdVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double *pdVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 uStack_59;
  long *plStack_58;
  
  lVar15 = param_2[1];
  lVar8 = param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar15 != 0 && lVar8 != 0) {
    lVar2 = 0;
    if (lVar8 != 0) {
      lVar2 = 0x7fffffffffffffff / lVar8;
    }
    if (lVar15 <= lVar2) goto LAB_10991a208;
    goto LAB_10991a22c;
  }
LAB_10991a208:
  uVar16 = lVar8 * lVar15;
  if (uVar16 != 0) {
    if (0 < (long)uVar16) {
      if (uVar16 >> 0x3d == 0) {
        lVar2 = uVar16 * 8;
        _malloc();
        if (lVar2 != 0) goto LAB_10991a278;
      }
LAB_10991a22c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991a2ec;
    }
    lVar2 = 0;
LAB_10991a278:
    param_1[2] = lVar8;
    *param_1 = lVar2;
    param_1[1] = lVar15;
    *(undefined1 *)(param_1 + 4) = 0;
    lVar15 = param_2[1];
    if (lVar15 != 0) goto LAB_10991a298;
    _free();
    lVar2 = 0;
LAB_10991a2f8:
    *param_1 = lVar2;
LAB_10991a304:
    param_1[1] = lVar15;
    param_1[2] = lVar15;
    if ((lVar2 != *param_2) || (lVar15 != param_2[2])) {
      FUN_10991a508(param_1,param_2,&uStack_59);
    }
    param_1[3] = 0;
    if (0 < lVar15) {
      lVar8 = 0;
      lVar9 = *param_1;
      lVar10 = param_1[2];
      pdVar11 = (double *)(lVar9 + lVar10 * 8);
      lVar12 = lVar9 + lVar10 * 8 + lVar15 * -8;
      pdVar13 = (double *)(lVar12 + 0x30);
      dVar18 = 0.0;
      lVar2 = -1;
      lVar14 = lVar15;
      do {
        dVar19 = 0.0;
        if ((lVar8 != 0) &&
           (dVar19 = ABS(*(double *)(lVar9 + lVar8 * 8)), pdVar3 = pdVar11, lVar7 = lVar2,
           lVar8 != 1)) {
          do {
            dVar19 = dVar19 + ABS(*pdVar3);
            lVar7 = lVar7 + -1;
            pdVar3 = pdVar3 + lVar10;
          } while (lVar7 != 0);
        }
        uVar17 = lVar15 - lVar8;
        pdVar3 = (double *)(lVar9 + lVar8 * lVar10 * 8 + (lVar10 - uVar17) * 8);
        uVar16 = uVar17 + 3;
        if (lVar8 <= lVar15) {
          uVar16 = uVar17;
        }
        if (uVar17 + 1 < 3) {
          dVar20 = ABS(*pdVar3);
        }
        else {
          uVar5 = uVar17 - ((long)uVar17 >> 0x3f) & 0xfffffffffffffffe;
          dVar20 = ABS(*pdVar3);
          dVar21 = ABS(pdVar3[1]);
          if (3 < (long)uVar17) {
            uVar16 = uVar16 & 0xfffffffffffffffc;
            dVar22 = ABS(pdVar3[2]);
            dVar23 = ABS(pdVar3[3]);
            if (7 < uVar17) {
              lVar7 = 4;
              pdVar6 = pdVar13;
              do {
                dVar20 = dVar20 + ABS(pdVar6[-2]);
                dVar21 = dVar21 + ABS(pdVar6[-1]);
                dVar22 = dVar22 + ABS(*pdVar6);
                dVar23 = dVar23 + ABS(pdVar6[1]);
                lVar7 = lVar7 + 4;
                pdVar6 = pdVar6 + 4;
              } while (lVar7 < (long)uVar16);
            }
            dVar20 = dVar22 + dVar20;
            dVar21 = dVar23 + dVar21;
            if ((long)uVar16 < (long)uVar5) {
              dVar20 = dVar20 + ABS(pdVar3[uVar16]);
              dVar21 = dVar21 + ABS((pdVar3 + uVar16)[1]);
            }
          }
          dVar20 = dVar20 + dVar21;
          if ((long)uVar5 < (long)uVar17) {
            lVar7 = lVar14 - uVar5;
            pdVar3 = (double *)(lVar12 + ((long)uVar17 / 2) * 0x10);
            do {
              dVar20 = dVar20 + ABS(*pdVar3);
              lVar7 = lVar7 + -1;
              pdVar3 = pdVar3 + 1;
            } while (lVar7 != 0);
          }
        }
        dVar19 = dVar19 + dVar20;
        if (dVar18 < dVar19) {
          param_1[3] = (long)dVar19;
          dVar18 = dVar19;
        }
        lVar8 = lVar8 + 1;
        lVar2 = lVar2 + 1;
        pdVar11 = pdVar11 + 1;
        pdVar13 = pdVar13 + lVar10 + 1;
        lVar14 = lVar14 + -1;
        lVar12 = lVar12 + lVar10 * 8 + 8;
      } while (lVar8 != lVar15);
    }
    *(undefined1 *)(param_1 + 4) = 1;
    pplVar4 = &plStack_58;
    plStack_58 = param_1;
    FUN_109909484();
    *(uint *)((long)param_1 + 0x24) = (uint)(pplVar4 != (long **)0xffffffffffffffff);
    return param_1;
  }
  param_1[2] = lVar8;
  param_1[1] = lVar15;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar15 = param_2[1];
  if (lVar15 == 0) {
    lVar2 = 0;
    goto LAB_10991a304;
  }
  lVar2 = 0;
LAB_10991a298:
  lVar8 = 0;
  if (lVar15 != 0) {
    lVar8 = 0x7fffffffffffffff / lVar15;
  }
  if (lVar15 <= lVar8) {
    uVar17 = lVar15 * lVar15;
    if (uVar16 - uVar17 == 0) goto LAB_10991a304;
    _free();
    if (uVar17 >> 0x3d == 0) {
      lVar2 = uVar17 * 8;
      _malloc();
      if (lVar2 != 0) goto LAB_10991a2f8;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10991a2ec:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10991a2f0);
  (*pcVar1)();
}



/* Entry: 10991a508; end: 10991a627;  */

void FUN_10991a508(long *param_1,long *param_2)

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
  if (param_1[1] == lVar4 && param_1[2] == lVar8) goto LAB_10991a5bc;
  if (lVar4 != 0 && lVar8 != 0) {
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar8;
    }
    if (lVar4 <= lVar1) goto LAB_10991a554;
    goto LAB_10991a588;
  }
LAB_10991a554:
  uVar7 = lVar8 * lVar4;
  if (param_1[2] * param_1[1] - uVar7 != 0) {
    _free(*param_1);
    if (0 < (long)uVar7) {
      if (uVar7 >> 0x3d == 0) {
        lVar1 = uVar7 * 8;
        _malloc();
        if (lVar1 != 0) goto LAB_10991a5b4;
      }
LAB_10991a588:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991a5bc;
    }
    lVar1 = 0;
LAB_10991a5b4:
    *param_1 = lVar1;
  }
  param_1[1] = lVar4;
  param_1[2] = lVar8;
LAB_10991a5bc:
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



/* Entry: 10991a628; end: 10991a8cb;  */

void FUN_10991a628(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  param_1 = (undefined8 *)*param_1;
  uVar4 = param_1[2];
  uVar5 = param_2[2];
  uVar7 = param_2[1];
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar4;
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
  uVar2 = uStack_38;
  uVar9 = uStack_48;
  if ((long)uStack_48 <= (long)uVar7) {
    uVar9 = uVar7;
  }
  uVar10 = uStack_38;
  if ((long)uStack_38 <= (long)uVar9) {
    uVar10 = uVar9;
  }
  uVar9 = uVar2;
  if (0x2f < (long)uVar10) {
    uVar9 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
    if ((long)uVar9 < 2) {
      uVar9 = 1;
    }
    if ((long)uVar9 < (long)uStack_38) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uStack_38 / uVar9;
      }
      uVar11 = uStack_38 - uVar10 * uVar9;
      uStack_38 = uVar9;
      if (uVar11 != 0) {
        lVar1 = uVar10 * 8 + 8;
        lVar6 = 0;
        if (lVar1 != 0) {
          lVar6 = (long)(uVar9 + ~uVar11) / lVar1;
        }
        uStack_38 = uVar9 + lVar6 * -8;
      }
    }
    uVar10 = (uRam00000001132dfa00 - 0xc0) + uStack_48 * uStack_38 * -8;
    if ((long)uVar10 < (long)(uStack_38 * 0x20)) {
      uVar11 = 0;
      if (uVar9 << 5 != 0) {
        uVar11 = 0x480000 / (uVar9 << 5);
      }
    }
    else {
      uVar11 = 0;
      if (uStack_38 << 3 != 0) {
        uVar11 = uVar10 / (uStack_38 << 3);
      }
    }
    uVar9 = 0;
    if (uStack_38 << 4 != 0) {
      uVar9 = 0x180000 / (uStack_38 << 4);
    }
    if ((long)uVar9 <= (long)uVar11) {
      uVar11 = uVar9;
    }
    uVar9 = uStack_38;
    if ((uVar2 == uStack_38) && ((long)uVar7 <= (long)(uVar11 & 0xfffffffffffffffc))) {
      uVar9 = uVar2 * uVar7 * 8;
      uVar10 = uStack_48;
      uVar7 = uRam00000001132dfa00;
      if (0x400 < (long)uVar9) {
        if (0x23f < (long)uStack_48) {
          uVar10 = 0x240;
        }
        uVar7 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar9) {
          uVar7 = 0x180000;
          uVar10 = uStack_48;
        }
      }
      uVar9 = 0;
      if (uVar2 * 0x18 != 0) {
        uVar9 = uVar7 / (uVar2 * 0x18);
      }
      if ((long)uVar9 <= (long)uVar10) {
        uVar10 = uVar9;
      }
      if ((long)uVar10 < 7) {
        uVar9 = uVar2;
        if (uVar10 == 0) goto LAB_10991a800;
      }
      else {
        uVar10 = ((uVar10 / 6) * 2 + uVar10 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar10 != 0) {
        lVar1 = (long)uStack_48 / (long)uVar10;
      }
      lVar6 = uStack_48 - lVar1 * uVar10;
      uVar9 = uVar2;
      uStack_48 = uVar10;
      if (lVar6 != 0) {
        lVar8 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar8 != 0) {
          lVar1 = (long)(uVar10 - lVar6) / lVar8;
        }
        uStack_48 = uVar10 + lVar1 * -6;
      }
    }
  }
LAB_10991a800:
  lStack_30 = uStack_48 * uVar9;
  lStack_28 = uStack_40 * uVar9;
  FUN_10990a09c(uVar4,uVar5,*param_1,param_1[2],*param_2,1,param_2[2],&uStack_58);
  _free(uStack_58);
  _free(uStack_50);
  return;
}



/* Entry: 10991a8cc; end: 10991ab6b;  */

void FUN_10991a8cc(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar4 = param_1[1];
  uVar5 = param_2[2];
  uVar7 = param_2[1];
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar4;
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
  uVar2 = uStack_38;
  uVar9 = uStack_48;
  if ((long)uStack_48 <= (long)uVar7) {
    uVar9 = uVar7;
  }
  uVar10 = uStack_38;
  if ((long)uStack_38 <= (long)uVar9) {
    uVar10 = uVar9;
  }
  uVar9 = uVar2;
  if (0x2f < (long)uVar10) {
    uVar9 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
    if ((long)uVar9 < 2) {
      uVar9 = 1;
    }
    if ((long)uVar9 < (long)uStack_38) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uStack_38 / uVar9;
      }
      uVar11 = uStack_38 - uVar10 * uVar9;
      uStack_38 = uVar9;
      if (uVar11 != 0) {
        lVar1 = uVar10 * 8 + 8;
        lVar6 = 0;
        if (lVar1 != 0) {
          lVar6 = (long)(uVar9 + ~uVar11) / lVar1;
        }
        uStack_38 = uVar9 + lVar6 * -8;
      }
    }
    uVar10 = (uRam00000001132dfa00 - 0xc0) + uStack_48 * uStack_38 * -8;
    if ((long)uVar10 < (long)(uStack_38 * 0x20)) {
      uVar11 = 0;
      if (uVar9 << 5 != 0) {
        uVar11 = 0x480000 / (uVar9 << 5);
      }
    }
    else {
      uVar11 = 0;
      if (uStack_38 << 3 != 0) {
        uVar11 = uVar10 / (uStack_38 << 3);
      }
    }
    uVar9 = 0;
    if (uStack_38 << 4 != 0) {
      uVar9 = 0x180000 / (uStack_38 << 4);
    }
    if ((long)uVar9 <= (long)uVar11) {
      uVar11 = uVar9;
    }
    uVar9 = uStack_38;
    if ((uVar2 == uStack_38) && ((long)uVar7 <= (long)(uVar11 & 0xfffffffffffffffc))) {
      uVar9 = uVar2 * uVar7 * 8;
      uVar10 = uStack_48;
      uVar7 = uRam00000001132dfa00;
      if (0x400 < (long)uVar9) {
        if (0x23f < (long)uStack_48) {
          uVar10 = 0x240;
        }
        uVar7 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar9) {
          uVar7 = 0x180000;
          uVar10 = uStack_48;
        }
      }
      uVar9 = 0;
      if (uVar2 * 0x18 != 0) {
        uVar9 = uVar7 / (uVar2 * 0x18);
      }
      if ((long)uVar9 <= (long)uVar10) {
        uVar10 = uVar9;
      }
      if ((long)uVar10 < 7) {
        uVar9 = uVar2;
        if (uVar10 == 0) goto LAB_10991aaa4;
      }
      else {
        uVar10 = ((uVar10 / 6) * 2 + uVar10 / 6) * 2;
      }
      lVar1 = 0;
      if (uVar10 != 0) {
        lVar1 = (long)uStack_48 / (long)uVar10;
      }
      lVar6 = uStack_48 - lVar1 * uVar10;
      uVar9 = uVar2;
      uStack_48 = uVar10;
      if (lVar6 != 0) {
        lVar8 = lVar1 * 6 + 6;
        lVar1 = 0;
        if (lVar8 != 0) {
          lVar1 = (long)(uVar10 - lVar6) / lVar8;
        }
        uStack_48 = uVar10 + lVar1 * -6;
      }
    }
  }
LAB_10991aaa4:
  lStack_30 = uStack_48 * uVar9;
  lStack_28 = uStack_40 * uVar9;
  FUN_10990b3d4(uVar4,uVar5,*param_1,param_1[2],*param_2,1,param_2[2],&uStack_58);
  _free(uStack_58);
  _free(uStack_50);
  return;
}



/* Entry: 10991ab6c; end: 10991acb7;  */

undefined8 *
FUN_10991ab6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 **ppuVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  undefined8 *puVar29;
  int iVar30;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar31;
  ulong uVar32;
  int *piVar33;
  long *plVar34;
  undefined8 unaff_x23;
  int *piVar35;
  undefined8 *puVar36;
  undefined8 unaff_x24;
  long *plVar37;
  undefined8 unaff_x25;
  undefined8 *puVar38;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 *apuStack_70 [4];
  long *plStack_50;
  long lStack_48;
  
  ppuVar5 = apuStack_70;
  ppuVar6 = apuStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar32 = param_2[1];
  if (uVar32 >> 0x3d == 0) {
    uVar41 = *param_4;
    unaff_x20 = (undefined8 *)*param_2;
    unaff_x21 = param_1;
    if (unaff_x20 == (undefined8 *)0x0) {
      unaff_x20 = (undefined8 *)(uVar32 << 3);
      if (uVar32 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar10 = -((long)unaff_x20 + 0x1eU & 0xfffffffffffffff0);
        ppuVar5 = (undefined8 **)((long)apuStack_70 + lVar10);
        unaff_x20 = (undefined8 *)((long)apuStack_70 + lVar10);
        puVar22 = unaff_x20;
      }
      else {
        _malloc();
        puVar22 = unaff_x20;
        if (unaff_x20 == (undefined8 *)0x0) goto LAB_10991ac78;
      }
    }
    else {
      ppuVar5 = apuStack_70;
      puVar22 = (undefined8 *)0x0;
    }
    puVar38 = (undefined8 *)param_1[1];
    plVar19 = (long *)param_1[2];
    apuStack_70[3] = (undefined8 *)*param_1;
    apuStack_70[2] = (undefined8 *)0x1;
    ppuVar13 = apuStack_70 + 3;
    apuStack_70[1] = unaff_x20;
    plStack_50 = plVar19;
    FUN_10990fa5c(uVar41);
    if (0x4000 < uVar32) {
      puVar38 = puVar22;
      _free();
    }
    ppuVar6 = ppuVar5;
    unaff_x20 = puVar22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar38;
    }
  }
  else {
LAB_10991ac78:
    puVar38 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    plVar19 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    ppuVar13 = (undefined8 **)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < uVar32) {
    _free(unaff_x20);
  }
  puVar22 = puVar38;
  __Unwind_Resume();
  *(undefined8 *)((long)ppuVar6 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppuVar6 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppuVar6 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppuVar6 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppuVar6 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppuVar6 + -0x38) = unaff_x23;
  *(ulong *)((long)ppuVar6 + -0x30) = uVar32;
  *(undefined8 **)((long)ppuVar6 + -0x28) = unaff_x21;
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = puVar38;
  *(undefined1 **)((long)ppuVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppuVar6 + -8) = FUN_10991acb8;
  *(undefined8 ***)((long)ppuVar6 + -0x120) = ppuVar13;
  puVar22[2] = 0;
  *(undefined8 **)((long)ppuVar6 + -0x130) = puVar22 + 2;
  *puVar22 = &PTR_FUN_110b1d540;
  puVar22[1] = 10000000;
  puVar22[3] = 0;
  puVar22[4] = 0;
  piVar28 = (int *)(plVar19[1] - *plVar19);
  *(undefined8 **)((long)ppuVar6 + -0xe0) = puVar22;
  if (piVar28 == (int *)0x0) {
    piVar33 = (int *)0x0;
    piVar28 = (int *)0x0;
  }
  else {
    if ((long)piVar28 < 0) {
      FUN_10923f788();
      goto LAB_10991b664;
    }
    piVar33 = piVar28;
    __Znwm();
    puVar22[2] = piVar33;
    puVar22[3] = piVar33;
    piVar28 = (int *)((long)piVar33 + (long)piVar28);
    puVar22[4] = piVar28;
    _memcpy();
    puVar22[3] = piVar28;
  }
  puVar22[6] = 0;
  puVar22[5] = 0;
  puVar22[0xb] = 0;
  puVar22[8] = 0;
  puVar22[7] = 0;
  puVar22[10] = 0;
  puVar22[9] = 0;
  *(undefined4 *)(puVar22 + 0xc) = 0x3f800000;
  puVar22[0xe] = 0;
  puVar22[0xd] = 0;
  puVar22[0x10] = 0;
  puVar22[0xf] = 0;
  uVar32 = plVar19[1] - *plVar19 >> 2;
  if (9999999 < uVar32) {
    FUN_10991bfb0(uVar32,10000000);
    *(ulong *)((long)ppuVar6 + -0x70) = uVar32;
    FUN_1099ab8e4((undefined1 *)((long)ppuVar6 + -0xd0),&UNK_10f58a079,0x37,
                  (undefined1 *)((long)ppuVar6 + -0x70));
    func_0x0001099ab7c0((undefined1 *)((long)ppuVar6 + -0xd0));
LAB_10991b638:
    FUN_10923f788();
LAB_10991b664:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10991b668);
    (*pcVar4)();
  }
  piVar2 = (int *)((long)piVar28 - (long)piVar33);
  *(undefined8 **)((long)ppuVar6 + -0xd8) = puVar22 + 5;
  *(undefined8 **)((long)ppuVar6 + -0x128) = puVar22 + 0xd;
  if (piVar2 != (int *)0x0) {
    if ((long)piVar2 < 0) {
      FUN_10923f788();
      goto LAB_10991b664;
    }
    piVar9 = piVar2;
    __Znwm();
    iVar30 = 0;
    puVar22[5] = piVar9;
    puVar22[6] = piVar9;
    puVar22[7] = (long)piVar9 + (long)piVar2;
    do {
      iVar8 = *piVar33;
      if (piVar9 < (int *)puVar22[7]) {
        piVar35 = piVar9 + 1;
        *piVar9 = iVar30;
      }
      else {
        lVar10 = **(long **)((long)ppuVar6 + -0xd8);
        uVar32 = ((long)piVar9 - lVar10 >> 2) + 1;
        if (uVar32 >> 0x3e != 0) goto LAB_10991b638;
        uVar21 = (long)puVar22[7] - lVar10;
        uVar15 = (long)uVar21 >> 1;
        if (uVar15 <= uVar32) {
          uVar15 = uVar32;
        }
        if (0x7ffffffffffffffb < uVar21) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 >> 0x3e != 0) {
          func_0x000104c4f740();
          goto LAB_10991b664;
        }
        lVar31 = uVar15 << 2;
        __Znwm();
        piVar2 = (int *)(lVar31 + ((long)piVar9 - lVar10));
        piVar35 = piVar2 + 1;
        *piVar2 = iVar30;
        _memcpy();
        puVar22 = *(undefined8 **)((long)ppuVar6 + -0xe0);
        puVar22[5] = lVar31;
        puVar22[6] = piVar35;
        puVar22[7] = lVar31 + uVar15 * 4;
        if (lVar10 != 0) {
          __ZdlPv(lVar10);
        }
      }
      puVar22[6] = piVar35;
      iVar30 = iVar8 + iVar30;
      piVar33 = piVar33 + 1;
      piVar9 = piVar35;
    } while (piVar33 != piVar28);
  }
  plVar37 = *(long **)((long)ppuVar6 + -0x120) + 1;
  plVar19 = (long *)**(long **)((long)ppuVar6 + -0x120);
  *(long **)((long)ppuVar6 + -0xe8) = plVar37;
  if (plVar19 == plVar37) {
    iVar30 = 0;
  }
  else {
    iVar30 = 0;
    do {
      plVar37 = (long *)plVar19[1];
      plVar11 = plVar19;
      if ((long *)plVar19[1] == (long *)0x0) {
        do {
          plVar34 = (long *)plVar11[2];
          bVar7 = (long *)*plVar34 != plVar11;
          plVar11 = plVar34;
        } while (bVar7);
      }
      else {
        do {
          plVar34 = plVar37;
          plVar37 = (long *)*plVar34;
        } while ((long *)*plVar34 != (long *)0x0);
      }
      iVar30 = iVar30 + *(int *)(**(long **)((long)ppuVar6 + -0x130) + (long)(int)plVar19[4] * 4) *
                        *(int *)(**(long **)((long)ppuVar6 + -0x130) +
                                (long)*(int *)((long)plVar19 + 0x1c) * 4);
      plVar19 = plVar34;
    } while (plVar34 != *(long **)((long)ppuVar6 + -0xe8));
  }
  uVar32 = *(ulong *)((long)ppuVar6 + -0xd8);
  plVar19 = *(long **)((long)ppuVar6 + -0x128);
  if (piRam000000011373ca80 == (int *)0x0) {
    iVar8 = 0x1373ca80;
    FUN_1099adbb8(0x11373ca80,0x11382bb14,&UNK_10f58a079,1);
    if (iVar8 == 0) goto LAB_10991afcc;
  }
  else if (*piRam000000011373ca80 < 1) goto LAB_10991afcc;
  *(undefined8 *)((long)ppuVar6 + -0xd0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x78) = 0;
  *(undefined8 *)((long)ppuVar6 + -0xb8) = 0;
  *(undefined8 *)((long)ppuVar6 + -0xc0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0xa8) = 0;
  *(undefined8 *)((long)ppuVar6 + -0xb0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x98) = 0;
  *(undefined8 *)((long)ppuVar6 + -0xa0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x88) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x90) = 0;
  *(undefined4 *)((long)ppuVar6 + -0x80) = 0;
  FUN_1099a9f0c((undefined1 *)((long)ppuVar6 + -0xd0),&UNK_10f58a079,0x4c,0,FUN_1099aa768,0);
  FUN_1092b4db8(*(long *)((long)ppuVar6 + -200) + 0x7540,&UNK_10f58a015,0xd);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1099ab3b0((undefined1 *)((long)ppuVar6 + -0xd0));
LAB_10991afcc:
  uVar41 = 0x30;
  __Znwm();
  FUN_109989a6c();
  lVar10 = *(long *)(uVar32 + 0x58);
  *(undefined8 *)(uVar32 + 0x58) = uVar41;
  if (lVar10 != 0) {
    FUN_1099899cc();
    __ZdlPv();
    uVar41 = *(undefined8 *)(uVar32 + 0x58);
  }
  func_0x000109989e78(uVar41,iVar30);
  lVar10 = *(long *)(uVar32 + 0x58);
  uVar41 = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 *)((long)ppuVar6 + -0x110) = *(undefined8 *)(lVar10 + 0x20);
  *(undefined8 *)((long)ppuVar6 + -0x108) = uVar41;
  *(undefined8 *)((long)ppuVar6 + -0xf0) = *(undefined8 *)(lVar10 + 0x28);
  plVar37 = (long *)**(undefined8 **)((long)ppuVar6 + -0x120);
  if (plVar37 != *(long **)((long)ppuVar6 + -0xe8)) {
    iVar30 = 0;
    *(undefined8 **)((long)ppuVar6 + -0x118) = puVar22 + 10;
    do {
      uVar1 = *(undefined4 *)(puVar22[2] + (long)*(int *)((long)plVar37 + 0x1c) * 4);
      *(undefined4 *)((long)ppuVar6 + -0xfc) =
           *(undefined4 *)(puVar22[2] + (long)(int)plVar37[4] * 4);
      *(undefined4 *)((long)ppuVar6 + -0xf8) = uVar1;
      lVar10 = *(long *)((long)ppuVar6 + -0xf0) + (long)iVar30 * 8;
      puVar38 = (undefined8 *)puVar22[0xe];
      if (puVar38 < (undefined8 *)puVar22[0xf]) {
        *puVar38 = *(undefined8 *)((long)plVar37 + 0x1c);
        puVar38[1] = lVar10;
        puVar38 = puVar38 + 2;
      }
      else {
        lVar31 = *plVar19;
        uVar15 = ((long)puVar38 - lVar31 >> 4) + 1;
        if (uVar15 >> 0x3c != 0) {
          FUN_10991bf9c();
          goto LAB_10991b664;
        }
        uVar17 = (long)puVar22[0xf] - lVar31;
        uVar21 = (long)uVar17 >> 3;
        if (uVar21 <= uVar15) {
          uVar21 = uVar15;
        }
        if (0x7fffffffffffffef < uVar17) {
          uVar21 = 0xfffffffffffffff;
        }
        if (uVar21 >> 0x3c != 0) {
          func_0x000104c4f740();
          goto LAB_10991b664;
        }
        lVar24 = uVar21 << 4;
        __Znwm();
        puVar38 = (undefined8 *)(lVar24 + ((long)puVar38 - lVar31));
        *puVar38 = *(undefined8 *)((long)plVar37 + 0x1c);
        puVar38[1] = lVar10;
        puVar38 = puVar38 + 2;
        _memcpy();
        puVar22 = *(undefined8 **)((long)ppuVar6 + -0xe0);
        puVar22[0xd] = lVar24;
        puVar22[0xe] = puVar38;
        puVar22[0xf] = lVar24 + uVar21 * 0x10;
        if (lVar31 != 0) {
          __ZdlPv(lVar31);
        }
      }
      puVar22[0xe] = puVar38;
      plVar11 = (long *)0x48;
      __Znwm();
      *plVar11 = lVar10;
      plVar11[1] = 0x32aaaba7;
      plVar11[3] = 0;
      plVar11[2] = 0;
      plVar11[5] = 0;
      plVar11[4] = 0;
      plVar11[7] = 0;
      plVar11[6] = 0;
      plVar11[8] = 0;
      puVar36 = (undefined8 *)
                ((long)(int)plVar37[4] + puVar22[1] * (long)*(int *)((long)plVar37 + 0x1c));
      puVar29 = (undefined8 *)puVar22[9];
      if (puVar29 != (undefined8 *)0x0) {
        uVar15 = (long)puVar29 - 1;
        if (((ulong)puVar29 & uVar15) == 0) {
          puVar38 = (undefined8 *)(uVar15 & (ulong)puVar36);
        }
        else {
          puVar38 = puVar36;
          if (puVar29 <= puVar36) {
            uVar21 = 0;
            if (puVar29 != (undefined8 *)0x0) {
              uVar21 = (ulong)puVar36 / (ulong)puVar29;
            }
            puVar38 = (undefined8 *)((long)puVar36 - uVar21 * (long)puVar29);
          }
        }
        puVar20 = *(undefined8 **)(*(long *)(uVar32 + 0x18) + (long)puVar38 * 8);
        if (puVar20 != (undefined8 *)0x0) {
          for (plVar34 = (long *)*puVar20; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
            puVar20 = (undefined8 *)plVar34[1];
            if (puVar20 == puVar36) {
              if ((undefined8 *)plVar34[2] == puVar36) goto LAB_10991b2dc;
            }
            else {
              if (((ulong)puVar29 & uVar15) == 0) {
                puVar20 = (undefined8 *)((ulong)puVar20 & uVar15);
              }
              else if (puVar29 <= puVar20) {
                uVar21 = 0;
                if (puVar29 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar20 / (ulong)puVar29;
                }
                puVar20 = (undefined8 *)((long)puVar20 - uVar21 * (long)puVar29);
              }
              if (puVar20 != puVar38) break;
            }
          }
        }
      }
      plVar34 = (long *)0x20;
      __Znwm();
      *plVar34 = 0;
      plVar34[1] = (long)puVar36;
      plVar34[2] = (long)puVar36;
      plVar34[3] = 0;
      if ((puVar29 == (undefined8 *)0x0) ||
         (*(float *)(puVar22 + 0xc) * (float)puVar29 < (float)(puVar22[0xb] + 1))) {
        uVar15 = 1;
        if ((undefined8 *)0x2 < puVar29) {
          uVar15 = (ulong)(((ulong)puVar29 & (long)puVar29 - 1U) != 0);
        }
        uVar15 = uVar15 | (long)puVar29 << 1;
        uVar21 = (ulong)((float)(puVar22[0xb] + 1) / *(float *)(puVar22 + 0xc));
        if (uVar15 <= uVar21) {
          uVar15 = uVar21;
        }
        FUN_10991c058(uVar32 + 0x18,uVar15);
        puVar29 = (undefined8 *)puVar22[9];
        if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
          puVar38 = (undefined8 *)((long)puVar29 - 1U & (ulong)puVar36);
        }
        else {
          puVar38 = puVar36;
          if (puVar29 <= puVar36) {
            uVar15 = 0;
            if (puVar29 != (undefined8 *)0x0) {
              uVar15 = (ulong)puVar36 / (ulong)puVar29;
            }
            puVar38 = (undefined8 *)((long)puVar36 - uVar15 * (long)puVar29);
          }
        }
      }
      lVar10 = *(long *)(uVar32 + 0x18);
      plVar16 = *(long **)(lVar10 + (long)puVar38 * 8);
      if (plVar16 == (long *)0x0) {
        plVar16 = *(long **)((long)ppuVar6 + -0x118);
        *plVar34 = *plVar16;
        *plVar16 = (long)plVar34;
        *(long **)(lVar10 + (long)puVar38 * 8) = plVar16;
        if (*plVar34 != 0) {
          puVar38 = *(undefined8 **)(*plVar34 + 8);
          if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
            puVar38 = (undefined8 *)((ulong)puVar38 & (long)puVar29 - 1U);
          }
          else if (puVar29 <= puVar38) {
            uVar15 = 0;
            if (puVar29 != (undefined8 *)0x0) {
              uVar15 = (ulong)puVar38 / (ulong)puVar29;
            }
            puVar38 = (undefined8 *)((long)puVar38 - uVar15 * (long)puVar29);
          }
          plVar16 = (long *)(*(long *)(uVar32 + 0x18) + (long)puVar38 * 8);
          goto LAB_10991b2cc;
        }
      }
      else {
        *plVar34 = *plVar16;
LAB_10991b2cc:
        *plVar16 = (long)plVar34;
      }
      puVar22[0xb] = puVar22[0xb] + 1;
LAB_10991b2dc:
      plVar34[3] = (long)plVar11;
      plVar11 = (long *)plVar37[1];
      plVar34 = plVar37;
      if ((long *)plVar37[1] == (long *)0x0) {
        do {
          plVar37 = (long *)plVar34[2];
          bVar7 = (long *)*plVar37 != plVar34;
          plVar34 = plVar37;
        } while (bVar7);
      }
      else {
        do {
          plVar37 = plVar11;
          plVar11 = (long *)*plVar37;
        } while ((long *)*plVar37 != (long *)0x0);
      }
      iVar30 = iVar30 + *(int *)((long)ppuVar6 + -0xfc) * *(int *)((long)ppuVar6 + -0xf8);
    } while (plVar37 != *(long **)((long)ppuVar6 + -0xe8));
    plVar37 = (long *)**(undefined8 **)((long)ppuVar6 + -0x120);
  }
  if (plVar37 != *(long **)((long)ppuVar6 + -0xe8)) {
    *(undefined8 **)((long)ppuVar6 + -0xf8) = puVar22 + 10;
    uVar15 = puVar22[9];
    do {
      lVar10 = (long)*(int *)((long)plVar37 + 0x1c);
      lVar31 = (long)(int)plVar37[4];
      iVar30 = *(int *)(puVar22[2] + lVar10 * 4);
      iVar8 = *(int *)(puVar22[2] + lVar31 * 4);
      uVar21 = lVar31 + puVar22[1] * lVar10;
      if (uVar15 != 0) {
        uVar17 = uVar15 - 1;
        if ((uVar15 & uVar17) == 0) {
          uVar32 = uVar21 & uVar17;
        }
        else {
          uVar32 = uVar21;
          if (uVar15 <= uVar21) {
            uVar32 = 0;
            if (uVar15 != 0) {
              uVar32 = uVar21 / uVar15;
            }
            uVar32 = uVar21 - uVar32 * uVar15;
          }
        }
        puVar22 = *(undefined8 **)(*(long *)(*(long *)((long)ppuVar6 + -0xd8) + 0x18) + uVar32 * 8);
        if (puVar22 != (undefined8 *)0x0) {
          for (plVar19 = (long *)*puVar22; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            uVar23 = plVar19[1];
            if (uVar23 == uVar21) {
              if (plVar19[2] == uVar21) {
                puVar22 = *(undefined8 **)((long)ppuVar6 + -0xe0);
                plVar11 = *(long **)((long)ppuVar6 + -0xd8);
                lVar24 = *(long *)((long)ppuVar6 + -0x110);
                lVar27 = *(long *)((long)ppuVar6 + -0x108);
                lVar12 = *(long *)((long)ppuVar6 + -0xf0);
                goto LAB_10991b524;
              }
            }
            else {
              if ((uVar15 & uVar17) == 0) {
                uVar23 = uVar23 & uVar17;
              }
              else if (uVar15 <= uVar23) {
                uVar3 = 0;
                if (uVar15 != 0) {
                  uVar3 = uVar23 / uVar15;
                }
                uVar23 = uVar23 - uVar3 * uVar15;
              }
              if (uVar23 != uVar32) break;
            }
          }
        }
      }
      plVar19 = (long *)0x20;
      __Znwm();
      *plVar19 = 0;
      plVar19[1] = uVar21;
      plVar19[2] = uVar21;
      plVar19[3] = 0;
      fVar39 = (float)(*(long *)(*(long *)((long)ppuVar6 + -0xe0) + 0x58) + 1);
      fVar40 = *(float *)(*(long *)((long)ppuVar6 + -0xe0) + 0x60);
      if ((uVar15 == 0) || (fVar40 * (float)uVar15 < fVar39)) {
        uVar32 = 1;
        if (2 < uVar15) {
          uVar32 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar32 = uVar32 | uVar15 << 1;
        uVar15 = (ulong)(fVar39 / fVar40);
        if (uVar32 <= uVar15) {
          uVar32 = uVar15;
        }
        FUN_10991c058(*(long *)((long)ppuVar6 + -0xd8) + 0x18,uVar32);
        uVar15 = *(ulong *)(*(long *)((long)ppuVar6 + -0xe0) + 0x48);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar32 = uVar15 - 1 & uVar21;
        }
        else {
          uVar32 = uVar21;
          if (uVar15 <= uVar21) {
            uVar32 = 0;
            if (uVar15 != 0) {
              uVar32 = uVar21 / uVar15;
            }
            uVar32 = uVar21 - uVar32 * uVar15;
          }
        }
      }
      puVar22 = *(undefined8 **)((long)ppuVar6 + -0xe0);
      lVar24 = *(long *)(*(long *)((long)ppuVar6 + -0xd8) + 0x18);
      plVar34 = *(long **)(lVar24 + uVar32 * 8);
      if (plVar34 == (long *)0x0) {
        plVar11 = *(long **)((long)ppuVar6 + -0xf8);
        lVar12 = *(long *)((long)ppuVar6 + -0xf0);
        *plVar19 = *plVar11;
        *plVar11 = (long)plVar19;
        *(long **)(lVar24 + uVar32 * 8) = plVar11;
        plVar11 = *(long **)((long)ppuVar6 + -0xd8);
        lVar24 = *(long *)((long)ppuVar6 + -0x110);
        lVar27 = *(long *)((long)ppuVar6 + -0x108);
        if (*plVar19 != 0) {
          uVar21 = *(ulong *)(*plVar19 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar21 = uVar21 & uVar15 - 1;
          }
          else if (uVar15 <= uVar21) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar21 / uVar15;
            }
            uVar21 = uVar21 - uVar17 * uVar15;
          }
          plVar34 = (long *)(plVar11[3] + uVar21 * 8);
          goto LAB_10991b514;
        }
      }
      else {
        *plVar19 = *plVar34;
        plVar11 = *(long **)((long)ppuVar6 + -0xd8);
        lVar24 = *(long *)((long)ppuVar6 + -0x110);
        lVar27 = *(long *)((long)ppuVar6 + -0x108);
        lVar12 = *(long *)((long)ppuVar6 + -0xf0);
LAB_10991b514:
        *plVar34 = (long)plVar19;
      }
      puVar22[0xb] = puVar22[0xb] + 1;
LAB_10991b524:
      if (0 < iVar30) {
        iVar14 = 0;
        uVar21 = (ulong)(*(long *)plVar19[3] - lVar12) >> 3;
        do {
          if (0 < iVar8) {
            lVar25 = 0;
            lVar26 = *plVar11;
            iVar18 = (int)uVar21;
            uVar21 = (ulong)(uint)(iVar8 + iVar18);
            do {
              *(int *)(lVar27 + (long)iVar18 * 4 + lVar25 * 4) =
                   *(int *)(lVar26 + lVar10 * 4) + iVar14;
              *(int *)(lVar24 + (long)iVar18 * 4 + lVar25 * 4) =
                   (int)lVar25 + *(int *)(lVar26 + lVar31 * 4);
              *(undefined8 *)(lVar12 + (long)iVar18 * 8 + lVar25 * 8) = 0x3ff0000000000000;
              lVar25 = lVar25 + 1;
            } while (iVar8 != (int)lVar25);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar30);
      }
      plVar19 = (long *)plVar37[1];
      plVar11 = plVar37;
      if ((long *)plVar37[1] == (long *)0x0) {
        do {
          plVar37 = (long *)plVar11[2];
          bVar7 = (long *)*plVar37 != plVar11;
          plVar11 = plVar37;
        } while (bVar7);
      }
      else {
        do {
          plVar37 = plVar19;
          plVar19 = (long *)*plVar37;
        } while ((long *)*plVar37 != (long *)0x0);
      }
    } while (plVar37 != *(long **)((long)ppuVar6 + -0xe8));
  }
  return puVar22;
}



/* Entry: 10991acb8; end: 10991b763;  */

undefined8 * FUN_10991acb8(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  undefined8 *puVar25;
  int iVar26;
  long *plVar27;
  long lVar28;
  int *piVar29;
  long *plVar30;
  int *piVar31;
  undefined8 *puVar32;
  long *plVar33;
  undefined8 *puVar34;
  long *plVar35;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b1d540;
  param_1[1] = 10000000;
  param_1[3] = 0;
  param_1[4] = 0;
  piVar24 = (int *)(param_2[1] - *param_2);
  if (piVar24 == (int *)0x0) {
    piVar29 = (int *)0x0;
    piVar24 = (int *)0x0;
  }
  else {
    if ((long)piVar24 < 0) {
      FUN_10923f788();
      goto LAB_10991b664;
    }
    piVar29 = piVar24;
    __Znwm();
    param_1[2] = piVar29;
    param_1[3] = piVar29;
    piVar24 = (int *)((long)piVar29 + (long)piVar24);
    param_1[4] = piVar24;
    _memcpy();
    param_1[3] = piVar24;
  }
  plVar35 = param_1 + 5;
  param_1[6] = 0;
  *plVar35 = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar6 = param_2[1] - *param_2 >> 2;
  if (9999999 < uVar6) {
    FUN_10991bfb0(uVar6,10000000);
    auStack_70[0] = uVar6;
    FUN_1099ab8e4(&uStack_d0,&UNK_10f58a079,0x37,auStack_70);
    func_0x0001099ab7c0(&uStack_d0);
LAB_10991b638:
    FUN_10923f788();
LAB_10991b664:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10991b668);
    (*pcVar3)();
  }
  piVar1 = (int *)((long)piVar24 - (long)piVar29);
  if (piVar1 != (int *)0x0) {
    if ((long)piVar1 < 0) {
      FUN_10923f788();
      goto LAB_10991b664;
    }
    piVar7 = piVar1;
    __Znwm();
    iVar26 = 0;
    param_1[5] = piVar7;
    param_1[6] = piVar7;
    param_1[7] = (long)piVar7 + (long)piVar1;
    do {
      iVar5 = *piVar29;
      if (piVar7 < (int *)param_1[7]) {
        piVar31 = piVar7 + 1;
        *piVar7 = iVar26;
      }
      else {
        lVar13 = *plVar35;
        uVar6 = ((long)piVar7 - lVar13 >> 2) + 1;
        if (uVar6 >> 0x3e != 0) goto LAB_10991b638;
        uVar15 = (long)param_1[7] - lVar13;
        uVar19 = (long)uVar15 >> 1;
        if (uVar19 <= uVar6) {
          uVar19 = uVar6;
        }
        if (0x7ffffffffffffffb < uVar15) {
          uVar19 = 0x3fffffffffffffff;
        }
        if (uVar19 >> 0x3e != 0) {
          func_0x000104c4f740();
          goto LAB_10991b664;
        }
        lVar8 = uVar19 << 2;
        __Znwm();
        piVar1 = (int *)(lVar8 + ((long)piVar7 - lVar13));
        piVar31 = piVar1 + 1;
        *piVar1 = iVar26;
        _memcpy();
        param_1[5] = lVar8;
        param_1[6] = piVar31;
        param_1[7] = lVar8 + uVar19 * 4;
        if (lVar13 != 0) {
          __ZdlPv(lVar13);
        }
      }
      param_1[6] = piVar31;
      iVar26 = iVar5 + iVar26;
      piVar29 = piVar29 + 1;
      piVar7 = piVar31;
    } while (piVar29 != piVar24);
  }
  plVar12 = param_3 + 1;
  if ((long *)*param_3 == plVar12) {
    iVar26 = 0;
  }
  else {
    iVar26 = 0;
    lVar13 = param_1[2];
    plVar33 = (long *)*param_3;
    do {
      plVar2 = (long *)plVar33[1];
      plVar10 = plVar33;
      if ((long *)plVar33[1] == (long *)0x0) {
        do {
          plVar30 = (long *)plVar10[2];
          bVar4 = (long *)*plVar30 != plVar10;
          plVar10 = plVar30;
        } while (bVar4);
      }
      else {
        do {
          plVar30 = plVar2;
          plVar2 = (long *)*plVar30;
        } while ((long *)*plVar30 != (long *)0x0);
      }
      iVar26 = iVar26 + *(int *)(lVar13 + (long)(int)plVar33[4] * 4) *
                        *(int *)(lVar13 + (long)*(int *)((long)plVar33 + 0x1c) * 4);
      plVar33 = plVar30;
    } while (plVar30 != plVar12);
  }
  if (piRam000000011373ca80 == (int *)0x0) {
    iVar5 = 0x1373ca80;
    FUN_1099adbb8(0x11373ca80,0x11382bb14,&UNK_10f58a079,1);
    if (iVar5 == 0) goto LAB_10991afcc;
  }
  else if (*piRam000000011373ca80 < 1) goto LAB_10991afcc;
  uStack_d0 = 0;
  uStack_78 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  FUN_1099a9f0c(&uStack_d0,&UNK_10f58a079,0x4c,0,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_c8 + 0x7540,&UNK_10f58a015,0xd);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1099ab3b0(&uStack_d0);
LAB_10991afcc:
  uVar9 = 0x30;
  __Znwm();
  FUN_109989a6c();
  lVar13 = param_1[0x10];
  param_1[0x10] = uVar9;
  if (lVar13 != 0) {
    FUN_1099899cc();
    __ZdlPv();
    uVar9 = param_1[0x10];
  }
  func_0x000109989e78(uVar9,iVar26);
  lVar14 = param_1[0x10];
  lVar13 = *(long *)(lVar14 + 0x18);
  lVar8 = *(long *)(lVar14 + 0x20);
  lVar14 = *(long *)(lVar14 + 0x28);
  plVar33 = (long *)*param_3;
  if (plVar33 != plVar12) {
    iVar26 = 0;
    plVar2 = param_1 + 10;
    do {
      iVar5 = *(int *)(param_1[2] + (long)*(int *)((long)plVar33 + 0x1c) * 4);
      iVar11 = *(int *)(param_1[2] + (long)(int)plVar33[4] * 4);
      lVar20 = lVar14 + (long)iVar26 * 8;
      puVar34 = (undefined8 *)param_1[0xe];
      if (puVar34 < (undefined8 *)param_1[0xf]) {
        *puVar34 = *(undefined8 *)((long)plVar33 + 0x1c);
        puVar34[1] = lVar20;
        puVar34 = puVar34 + 2;
      }
      else {
        lVar28 = param_1[0xd];
        uVar6 = ((long)puVar34 - lVar28 >> 4) + 1;
        if (uVar6 >> 0x3c != 0) {
          FUN_10991bf9c();
          goto LAB_10991b664;
        }
        uVar15 = (long)param_1[0xf] - lVar28;
        uVar19 = (long)uVar15 >> 3;
        if (uVar19 <= uVar6) {
          uVar19 = uVar6;
        }
        if (0x7fffffffffffffef < uVar15) {
          uVar19 = 0xfffffffffffffff;
        }
        if (uVar19 >> 0x3c != 0) {
          func_0x000104c4f740();
          goto LAB_10991b664;
        }
        lVar22 = uVar19 << 4;
        __Znwm();
        puVar34 = (undefined8 *)(lVar22 + ((long)puVar34 - lVar28));
        *puVar34 = *(undefined8 *)((long)plVar33 + 0x1c);
        puVar34[1] = lVar20;
        puVar34 = puVar34 + 2;
        _memcpy();
        param_1[0xd] = lVar22;
        param_1[0xe] = puVar34;
        param_1[0xf] = lVar22 + uVar19 * 0x10;
        if (lVar28 != 0) {
          __ZdlPv(lVar28);
        }
      }
      param_1[0xe] = puVar34;
      plVar10 = (long *)0x48;
      __Znwm();
      *plVar10 = lVar20;
      plVar10[1] = 0x32aaaba7;
      plVar10[3] = 0;
      plVar10[2] = 0;
      plVar10[5] = 0;
      plVar10[4] = 0;
      plVar10[7] = 0;
      plVar10[6] = 0;
      plVar10[8] = 0;
      puVar32 = (undefined8 *)
                ((long)(int)plVar33[4] + param_1[1] * (long)*(int *)((long)plVar33 + 0x1c));
      puVar25 = (undefined8 *)param_1[9];
      if (puVar25 != (undefined8 *)0x0) {
        uVar6 = (long)puVar25 - 1;
        if (((ulong)puVar25 & uVar6) == 0) {
          puVar34 = (undefined8 *)(uVar6 & (ulong)puVar32);
        }
        else {
          puVar34 = puVar32;
          if (puVar25 <= puVar32) {
            uVar19 = 0;
            if (puVar25 != (undefined8 *)0x0) {
              uVar19 = (ulong)puVar32 / (ulong)puVar25;
            }
            puVar34 = (undefined8 *)((long)puVar32 - uVar19 * (long)puVar25);
          }
        }
        puVar18 = *(undefined8 **)(param_1[8] + (long)puVar34 * 8);
        if (puVar18 != (undefined8 *)0x0) {
          for (plVar30 = (long *)*puVar18; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
            puVar18 = (undefined8 *)plVar30[1];
            if (puVar18 == puVar32) {
              if ((undefined8 *)plVar30[2] == puVar32) goto LAB_10991b2dc;
            }
            else {
              if (((ulong)puVar25 & uVar6) == 0) {
                puVar18 = (undefined8 *)((ulong)puVar18 & uVar6);
              }
              else if (puVar25 <= puVar18) {
                uVar19 = 0;
                if (puVar25 != (undefined8 *)0x0) {
                  uVar19 = (ulong)puVar18 / (ulong)puVar25;
                }
                puVar18 = (undefined8 *)((long)puVar18 - uVar19 * (long)puVar25);
              }
              if (puVar18 != puVar34) break;
            }
          }
        }
      }
      plVar30 = (long *)0x20;
      __Znwm();
      *plVar30 = 0;
      plVar30[1] = (long)puVar32;
      plVar30[2] = (long)puVar32;
      plVar30[3] = 0;
      if ((puVar25 == (undefined8 *)0x0) ||
         (*(float *)(param_1 + 0xc) * (float)puVar25 < (float)(param_1[0xb] + 1))) {
        uVar6 = 1;
        if ((undefined8 *)0x2 < puVar25) {
          uVar6 = (ulong)(((ulong)puVar25 & (long)puVar25 - 1U) != 0);
        }
        uVar6 = uVar6 | (long)puVar25 << 1;
        uVar19 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
        if (uVar6 <= uVar19) {
          uVar6 = uVar19;
        }
        FUN_10991c058(param_1 + 8,uVar6);
        puVar25 = (undefined8 *)param_1[9];
        if (((ulong)puVar25 & (long)puVar25 - 1U) == 0) {
          puVar34 = (undefined8 *)((long)puVar25 - 1U & (ulong)puVar32);
        }
        else {
          puVar34 = puVar32;
          if (puVar25 <= puVar32) {
            uVar6 = 0;
            if (puVar25 != (undefined8 *)0x0) {
              uVar6 = (ulong)puVar32 / (ulong)puVar25;
            }
            puVar34 = (undefined8 *)((long)puVar32 - uVar6 * (long)puVar25);
          }
        }
      }
      lVar20 = param_1[8];
      plVar16 = *(long **)(lVar20 + (long)puVar34 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar30 = *plVar2;
        *plVar2 = (long)plVar30;
        *(long **)(lVar20 + (long)puVar34 * 8) = plVar2;
        if (*plVar30 != 0) {
          puVar34 = *(undefined8 **)(*plVar30 + 8);
          if (((ulong)puVar25 & (long)puVar25 - 1U) == 0) {
            puVar34 = (undefined8 *)((ulong)puVar34 & (long)puVar25 - 1U);
          }
          else if (puVar25 <= puVar34) {
            uVar6 = 0;
            if (puVar25 != (undefined8 *)0x0) {
              uVar6 = (ulong)puVar34 / (ulong)puVar25;
            }
            puVar34 = (undefined8 *)((long)puVar34 - uVar6 * (long)puVar25);
          }
          plVar16 = (long *)(param_1[8] + (long)puVar34 * 8);
          goto LAB_10991b2cc;
        }
      }
      else {
        *plVar30 = *plVar16;
LAB_10991b2cc:
        *plVar16 = (long)plVar30;
      }
      param_1[0xb] = param_1[0xb] + 1;
LAB_10991b2dc:
      plVar30[3] = (long)plVar10;
      plVar10 = (long *)plVar33[1];
      plVar30 = plVar33;
      if ((long *)plVar33[1] == (long *)0x0) {
        do {
          plVar33 = (long *)plVar30[2];
          bVar4 = (long *)*plVar33 != plVar30;
          plVar30 = plVar33;
        } while (bVar4);
      }
      else {
        do {
          plVar33 = plVar10;
          plVar10 = (long *)*plVar33;
        } while ((long *)*plVar33 != (long *)0x0);
      }
      iVar26 = iVar26 + iVar11 * iVar5;
    } while (plVar33 != plVar12);
    plVar33 = (long *)*param_3;
  }
  if (plVar33 != plVar12) {
    plVar2 = param_1 + 10;
    plVar30 = (long *)param_1[9];
    plVar10 = plVar35;
    do {
      lVar20 = (long)*(int *)((long)plVar33 + 0x1c);
      lVar28 = (long)(int)plVar33[4];
      iVar26 = *(int *)(param_1[2] + lVar20 * 4);
      iVar5 = *(int *)(param_1[2] + lVar28 * 4);
      plVar16 = (long *)(lVar28 + param_1[1] * lVar20);
      if (plVar30 != (long *)0x0) {
        uVar6 = (long)plVar30 - 1;
        if (((ulong)plVar30 & uVar6) == 0) {
          plVar10 = (long *)((ulong)plVar16 & uVar6);
        }
        else {
          plVar10 = plVar16;
          if (plVar30 <= plVar16) {
            uVar19 = 0;
            if (plVar30 != (long *)0x0) {
              uVar19 = (ulong)plVar16 / (ulong)plVar30;
            }
            plVar10 = (long *)((long)plVar16 - uVar19 * (long)plVar30);
          }
        }
        puVar34 = *(undefined8 **)(param_1[8] + (long)plVar10 * 8);
        if (puVar34 != (undefined8 *)0x0) {
          for (plVar27 = (long *)*puVar34; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
            plVar21 = (long *)plVar27[1];
            if (plVar21 == plVar16) {
              if ((long *)plVar27[2] == plVar16) goto LAB_10991b524;
            }
            else {
              if (((ulong)plVar30 & uVar6) == 0) {
                plVar21 = (long *)((ulong)plVar21 & uVar6);
              }
              else if (plVar30 <= plVar21) {
                uVar19 = 0;
                if (plVar30 != (long *)0x0) {
                  uVar19 = (ulong)plVar21 / (ulong)plVar30;
                }
                plVar21 = (long *)((long)plVar21 - uVar19 * (long)plVar30);
              }
              if (plVar21 != plVar10) break;
            }
          }
        }
      }
      plVar27 = (long *)0x20;
      __Znwm();
      *plVar27 = 0;
      plVar27[1] = (long)plVar16;
      plVar27[2] = (long)plVar16;
      plVar27[3] = 0;
      if ((plVar30 == (long *)0x0) ||
         (*(float *)(param_1 + 0xc) * (float)plVar30 < (float)(param_1[0xb] + 1))) {
        uVar6 = 1;
        if ((long *)0x2 < plVar30) {
          uVar6 = (ulong)(((ulong)plVar30 & (long)plVar30 - 1U) != 0);
        }
        uVar6 = uVar6 | (long)plVar30 << 1;
        uVar19 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
        if (uVar6 <= uVar19) {
          uVar6 = uVar19;
        }
        FUN_10991c058(param_1 + 8,uVar6);
        plVar30 = (long *)param_1[9];
        if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
          plVar10 = (long *)((long)plVar30 - 1U & (ulong)plVar16);
        }
        else {
          plVar10 = plVar16;
          if (plVar30 <= plVar16) {
            uVar6 = 0;
            if (plVar30 != (long *)0x0) {
              uVar6 = (ulong)plVar16 / (ulong)plVar30;
            }
            plVar10 = (long *)((long)plVar16 - uVar6 * (long)plVar30);
          }
        }
      }
      lVar22 = param_1[8];
      plVar16 = *(long **)(lVar22 + (long)plVar10 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar27 = *plVar2;
        *plVar2 = (long)plVar27;
        *(long **)(lVar22 + (long)plVar10 * 8) = plVar2;
        if (*plVar27 != 0) {
          plVar16 = *(long **)(*plVar27 + 8);
          if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
            plVar16 = (long *)((ulong)plVar16 & (long)plVar30 - 1U);
          }
          else if (plVar30 <= plVar16) {
            uVar6 = 0;
            if (plVar30 != (long *)0x0) {
              uVar6 = (ulong)plVar16 / (ulong)plVar30;
            }
            plVar16 = (long *)((long)plVar16 - uVar6 * (long)plVar30);
          }
          plVar16 = (long *)(param_1[8] + (long)plVar16 * 8);
          goto LAB_10991b514;
        }
      }
      else {
        *plVar27 = *plVar16;
LAB_10991b514:
        *plVar16 = (long)plVar27;
      }
      param_1[0xb] = param_1[0xb] + 1;
LAB_10991b524:
      if (0 < iVar26) {
        iVar11 = 0;
        uVar6 = (ulong)(*(long *)plVar27[3] - lVar14) >> 3;
        do {
          if (0 < iVar5) {
            lVar22 = 0;
            lVar23 = *plVar35;
            iVar17 = (int)uVar6;
            uVar6 = (ulong)(uint)(iVar5 + iVar17);
            do {
              *(int *)(lVar13 + (long)iVar17 * 4 + lVar22 * 4) =
                   *(int *)(lVar23 + lVar20 * 4) + iVar11;
              *(int *)(lVar8 + (long)iVar17 * 4 + lVar22 * 4) =
                   (int)lVar22 + *(int *)(lVar23 + lVar28 * 4);
              *(undefined8 *)(lVar14 + (long)iVar17 * 8 + lVar22 * 8) = 0x3ff0000000000000;
              lVar22 = lVar22 + 1;
            } while (iVar5 != (int)lVar22);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar26);
      }
      plVar16 = (long *)plVar33[1];
      plVar27 = plVar33;
      if ((long *)plVar33[1] == (long *)0x0) {
        do {
          plVar33 = (long *)plVar27[2];
          bVar4 = (long *)*plVar33 != plVar27;
          plVar27 = plVar33;
        } while (bVar4);
      }
      else {
        do {
          plVar33 = plVar16;
          plVar16 = (long *)*plVar33;
        } while ((long *)*plVar33 != (long *)0x0);
      }
    } while (plVar33 != plVar12);
  }
  return param_1;
}



/* Entry: 10991b764; end: 10991b7ab;  */

long * FUN_10991b764(long *param_1)

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



/* Entry: 10991b7ac; end: 10991b93b;  */

undefined8 * FUN_10991b7ac(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110b1d540;
  for (plVar2 = (long *)param_1[10]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = plVar2[3];
    if (lVar1 != 0) {
      __ZNSt3__15mutexD1Ev(lVar1 + 8);
      __ZdlPv(lVar1);
    }
  }
  lVar1 = param_1[0x10];
  param_1[0x10] = 0;
  if (lVar1 != 0) {
    FUN_1099899cc();
    __ZdlPv();
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[10];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10991b93c; end: 10991b9ff;  */

undefined8
FUN_10991b93c(long param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6,undefined4 *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)(param_1 + 0x48);
  if (uVar3 != 0) {
    uVar1 = *(long *)(param_1 + 8) * (long)param_2 + (long)param_3;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar1;
    }
    else {
      uVar6 = uVar1;
      if (uVar3 <= uVar1) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar1 / uVar3;
        }
        uVar6 = uVar1 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x40) + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
          uVar8 = plVar7[1];
          if (uVar8 != uVar1) break;
          if (plVar7[2] == uVar1) {
            *param_4 = 0;
            *param_5 = 0;
            lVar4 = *(long *)(param_1 + 0x10);
            *param_6 = *(undefined4 *)(lVar4 + (long)param_2 * 4);
            *param_7 = *(undefined4 *)(lVar4 + (long)param_3 * 4);
            return plVar7[3];
          }
        }
        if ((uVar3 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uVar3 <= uVar8) {
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar8 / uVar3;
          }
          uVar8 = uVar8 - uVar2 * uVar3;
        }
      } while (uVar8 == uVar6);
    }
  }
  return 0;
}



/* Entry: 10991ba00; end: 10991badb;  */

void FUN_10991ba00(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0x80) + 0x14);
  uVar6 = (ulong)iVar3;
  if (iVar3 != 0) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
    uVar4 = uVar5 >> 3 & 1;
    if ((long)uVar6 <= (long)uVar4) {
      uVar4 = uVar6;
    }
    if ((uVar5 & 7) != 0) {
      uVar4 = uVar6;
    }
    lVar7 = uVar6 - uVar4;
    if (0 < (long)uVar4) {
      _bzero(uVar5,uVar4 << 3);
    }
    lVar1 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar4;
    if (1 < lVar7) {
      lVar2 = lVar1;
      if (lVar1 <= (long)(uVar4 + 2)) {
        lVar2 = uVar4 + 2;
      }
      _bzero(uVar5 + uVar4 * 8,(lVar2 + ~uVar4 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar1 < (long)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(uVar5 + (lVar7 / 2) * 0x10 + uVar4 * 8,(lVar7 % 2) * 8);
      return;
    }
  }
  return;
}



/* Entry: 10991badc; end: 10991bf83;  */

void FUN_10991badc(long param_1,long param_2,long param_3)

{
  double *pdVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  uint uVar11;
  long lVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  double *pdVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  double *pdVar25;
  ulong uVar26;
  double *pdVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  double *pdVar31;
  uint uVar32;
  long lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  
  piVar17 = *(int **)(param_1 + 0x68);
  piVar6 = *(int **)(param_1 + 0x70);
  if (piVar17 != piVar6) {
    lVar20 = *(long *)(param_1 + 0x10);
    lVar18 = *(long *)(param_1 + 0x28);
    do {
      iVar23 = *piVar17;
      iVar7 = piVar17[1];
      uVar8 = *(uint *)(lVar20 + (long)iVar23 * 4);
      uVar26 = (ulong)uVar8;
      lVar21 = (long)*(int *)(lVar18 + (long)iVar23 * 4);
      uVar9 = *(uint *)(lVar20 + (long)iVar7 * 4);
      uVar28 = (ulong)uVar9;
      lVar29 = (long)(int)uVar9;
      lVar12 = (long)*(int *)(lVar18 + (long)iVar7 * 4);
      pdVar27 = *(double **)(piVar17 + 2);
      pdVar1 = (double *)(param_2 + lVar12 * 8);
      lVar2 = param_3 + lVar21 * 8;
      if ((uVar8 & 1) == 0) {
LAB_10991bb9c:
        uVar16 = uVar26 & 0xfffffffc;
        if ((uVar8 >> 1 & 1) != 0) {
          if ((int)uVar9 < 1) {
            dVar34 = 0.0;
            dVar35 = 0.0;
          }
          else {
            dVar34 = 0.0;
            dVar35 = 0.0;
            pdVar15 = pdVar1;
            uVar30 = uVar28;
            pdVar13 = pdVar27 + (int)(uVar9 * (int)uVar16);
            do {
              dVar34 = dVar34 + *pdVar13 * *pdVar15;
              dVar35 = dVar35 + pdVar13[uVar28] * *pdVar15;
              uVar24 = (int)uVar30 - 1;
              uVar30 = (ulong)uVar24;
              pdVar15 = pdVar15 + 1;
              pdVar13 = pdVar13 + 1;
            } while (uVar24 != 0);
          }
          uVar30 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
          pdVar15 = (double *)(lVar2 + uVar30);
          dVar36 = *pdVar15;
          pdVar13 = (double *)(lVar2 + uVar30);
          pdVar13[1] = dVar35 + pdVar15[1];
          *pdVar13 = dVar34 + dVar36;
        }
        if (3 < (int)uVar8) {
          uVar30 = 0;
          uVar24 = uVar9 & 0xfffffffc;
          uVar11 = uVar9 * 3;
          pdVar19 = pdVar27 + lVar29 + 2;
          pdVar15 = pdVar27 + (long)(int)uVar11 + 2;
          pdVar13 = pdVar27 + (long)(int)(uVar9 << 1) + 2;
          pdVar31 = pdVar27;
          do {
            if ((int)uVar9 < 4) {
              pdVar25 = pdVar27 + uVar30 * lVar29;
              dVar34 = 0.0;
              dVar35 = 0.0;
              dVar36 = 0.0;
              dVar37 = 0.0;
              pdVar14 = pdVar1;
            }
            else {
              lVar33 = 0;
              iVar22 = 0;
              dVar34 = 0.0;
              dVar35 = 0.0;
              dVar36 = 0.0;
              dVar37 = 0.0;
              do {
                pdVar25 = (double *)((long)pdVar1 + lVar33);
                pdVar14 = (double *)((long)pdVar31 + lVar33);
                pdVar3 = (double *)((long)pdVar19 + lVar33);
                pdVar4 = (double *)((long)pdVar13 + lVar33);
                pdVar5 = (double *)((long)pdVar15 + lVar33);
                dVar10 = *pdVar25;
                dVar39 = pdVar25[1];
                dVar38 = pdVar25[2];
                dVar40 = pdVar25[3];
                dVar34 = dVar34 + dVar10 * *pdVar14 + pdVar14[1] * dVar39 + pdVar14[2] * dVar38 +
                         pdVar14[3] * dVar40;
                dVar35 = dVar35 + dVar10 * pdVar3[-2] + pdVar3[-1] * dVar39 + *pdVar3 * dVar38 +
                         pdVar3[1] * dVar40;
                dVar36 = dVar36 + dVar10 * pdVar4[-2] + pdVar4[-1] * dVar39 + *pdVar4 * dVar38 +
                         pdVar4[1] * dVar40;
                dVar37 = dVar37 + dVar10 * pdVar5[-2] + pdVar5[-1] * dVar39 + *pdVar5 * dVar38 +
                         pdVar5[1] * dVar40;
                iVar22 = iVar22 + 4;
                lVar33 = lVar33 + 0x20;
              } while (iVar22 < (int)uVar24);
              pdVar25 = (double *)((long)pdVar31 + lVar33);
              pdVar14 = (double *)((long)pdVar1 + lVar33);
            }
            uVar32 = uVar24;
            if (uVar24 != uVar9) {
              do {
                dVar10 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                dVar34 = dVar34 + dVar10 * *pdVar25;
                dVar35 = dVar35 + dVar10 * pdVar25[lVar29];
                dVar36 = dVar36 + dVar10 * pdVar25[(int)(uVar9 << 1)];
                dVar37 = dVar37 + dVar10 * *(double *)
                                            ((long)pdVar25 +
                                            (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar11 << 3));
                pdVar25 = pdVar25 + 1;
                uVar32 = uVar32 + 1;
              } while ((int)uVar32 < (int)uVar9);
            }
            pdVar25 = (double *)(lVar2 + uVar30 * 8);
            uVar30 = uVar30 + 4;
            pdVar19 = pdVar19 + lVar29 * 4;
            pdVar25[1] = dVar35 + pdVar25[1];
            *pdVar25 = dVar34 + *pdVar25;
            pdVar25[3] = dVar37 + pdVar25[3];
            pdVar25[2] = dVar36 + pdVar25[2];
            pdVar31 = pdVar31 + lVar29 * 4;
            pdVar15 = pdVar15 + lVar29 * 4;
            pdVar13 = pdVar13 + lVar29 * 4;
          } while (uVar30 < uVar16);
        }
      }
      else {
        iVar22 = uVar8 - 1;
        if ((int)uVar9 < 1) {
          dVar34 = 0.0;
        }
        else {
          dVar34 = 0.0;
          pdVar15 = pdVar27 + (int)(uVar9 * iVar22);
          uVar16 = uVar28;
          pdVar13 = pdVar1;
          do {
            dVar34 = dVar34 + *pdVar13 * *pdVar15;
            uVar24 = (int)uVar16 - 1;
            uVar16 = (ulong)uVar24;
            pdVar15 = pdVar15 + 1;
            pdVar13 = pdVar13 + 1;
          } while (uVar24 != 0);
        }
        *(double *)(lVar2 + (long)iVar22 * 8) = dVar34 + *(double *)(lVar2 + (long)iVar22 * 8);
        if (uVar8 != 1) goto LAB_10991bb9c;
      }
      if (iVar23 != iVar7) {
        pdVar1 = (double *)(param_2 + lVar21 * 8);
        lVar2 = param_3 + lVar12 * 8;
        if ((uVar9 & 1) != 0) {
          lVar12 = (long)(int)(uVar9 - 1);
          if ((int)uVar8 < 1) {
            dVar34 = 0.0;
          }
          else {
            dVar34 = 0.0;
            pdVar15 = pdVar27 + lVar12;
            uVar16 = uVar26;
            pdVar13 = pdVar1;
            do {
              dVar34 = dVar34 + *pdVar13 * *pdVar15;
              pdVar15 = pdVar15 + lVar29;
              uVar24 = (int)uVar16 - 1;
              uVar16 = (ulong)uVar24;
              pdVar13 = pdVar13 + 1;
            } while (uVar24 != 0);
          }
          *(double *)(lVar2 + lVar12 * 8) = dVar34 + *(double *)(lVar2 + lVar12 * 8);
          if (uVar9 == 1) goto LAB_10991bf54;
        }
        if ((uVar9 >> 1 & 1) != 0) {
          lVar12 = (long)(int)(uVar28 & 0xfffffffc);
          if ((int)uVar8 < 1) {
            dVar34 = 0.0;
            dVar35 = 0.0;
          }
          else {
            dVar34 = 0.0;
            dVar35 = 0.0;
            pdVar15 = pdVar27 + lVar12;
            pdVar13 = pdVar1;
            do {
              dVar34 = dVar34 + *pdVar15 * *pdVar13;
              dVar35 = dVar35 + pdVar15[1] * *pdVar13;
              pdVar15 = pdVar15 + lVar29;
              uVar24 = (int)uVar26 - 1;
              uVar26 = (ulong)uVar24;
              pdVar13 = pdVar13 + 1;
            } while (uVar24 != 0);
          }
          lVar12 = lVar12 * 8;
          pdVar15 = (double *)(lVar2 + lVar12);
          dVar36 = *pdVar15;
          pdVar13 = (double *)(lVar2 + lVar12);
          pdVar13[1] = dVar35 + pdVar15[1];
          *pdVar13 = dVar34 + dVar36;
        }
        if (3 < (int)uVar9) {
          uVar26 = 0;
          uVar9 = uVar8 & 0xfffffffc;
          pdVar15 = pdVar27;
          do {
            pdVar13 = pdVar1;
            if ((int)uVar8 < 4) {
              pdVar19 = pdVar27 + uVar26;
              dVar34 = 0.0;
              dVar35 = 0.0;
              dVar36 = 0.0;
              dVar37 = 0.0;
            }
            else {
              iVar23 = 0;
              dVar34 = 0.0;
              dVar35 = 0.0;
              dVar36 = 0.0;
              dVar37 = 0.0;
              pdVar19 = pdVar15;
              do {
                pdVar31 = pdVar19 + uVar28 + 2;
                dVar10 = *pdVar13;
                dVar38 = pdVar13[1];
                pdVar25 = pdVar19 + uVar28 * 2 + 2;
                dVar39 = pdVar13[2];
                dVar40 = pdVar13[3];
                pdVar14 = pdVar19 + uVar28 * 3 + 2;
                dVar34 = dVar34 + dVar10 * *pdVar19 + pdVar31[-2] * dVar38 + pdVar25[-2] * dVar39 +
                         pdVar14[-2] * dVar40;
                dVar35 = dVar35 + dVar10 * pdVar19[1] + pdVar31[-1] * dVar38 + pdVar25[-1] * dVar39
                         + pdVar14[-1] * dVar40;
                dVar36 = dVar36 + dVar10 * pdVar19[2] + *pdVar31 * dVar38 + *pdVar25 * dVar39 +
                         *pdVar14 * dVar40;
                dVar37 = dVar37 + dVar10 * pdVar19[3] + pdVar31[1] * dVar38 + pdVar25[1] * dVar39 +
                         pdVar14[1] * dVar40;
                pdVar13 = pdVar13 + 4;
                iVar23 = iVar23 + 4;
                pdVar19 = pdVar19 + uVar28 * 4;
              } while (iVar23 < (int)uVar9);
            }
            if (uVar9 != uVar8) {
              pdVar19 = pdVar19 + 2;
              uVar24 = uVar9;
              do {
                dVar10 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                dVar34 = dVar34 + dVar10 * pdVar19[-2];
                dVar35 = dVar35 + dVar10 * pdVar19[-1];
                dVar36 = dVar36 + dVar10 * *pdVar19;
                dVar37 = dVar37 + dVar10 * pdVar19[1];
                uVar24 = uVar24 + 1;
                pdVar19 = pdVar19 + uVar28;
              } while ((int)uVar24 < (int)uVar8);
            }
            pdVar13 = (double *)(lVar2 + uVar26 * 8);
            pdVar13[1] = dVar35 + pdVar13[1];
            *pdVar13 = dVar34 + *pdVar13;
            pdVar13[3] = dVar37 + pdVar13[3];
            pdVar13[2] = dVar36 + pdVar13[2];
            uVar26 = uVar26 + 4;
            pdVar15 = pdVar15 + 4;
          } while (uVar26 < (uVar28 & 0xfffffffc));
        }
      }
LAB_10991bf54:
      piVar17 = piVar17 + 4;
    } while (piVar17 != piVar6);
  }
  return;
}



/* Entry: 10991bf84; end: 10991bf9b;  */

undefined4 FUN_10991bf84(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x80) + 8);
}



/* Entry: 10991bf9c; end: 10991bfaf;  */

long ** FUN_10991bf9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long **pplVar2;
  long *plStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  FUN_1099ab908(&plStack_38,&UNK_10f58a05b);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(plStack_38,puVar1);
  FUN_1092b4db8(plStack_38,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(plStack_38,param_2);
  pplVar2 = &plStack_38;
  FUN_1099ab984(pplVar2);
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 8))();
  }
  return pplVar2;
}



/* Entry: 10991bfb0; end: 10991c057;  */

long ** FUN_10991bfb0(undefined8 param_1,undefined8 param_2)

{
  long **pplVar1;
  long *plStack_28;
  
  FUN_1099ab908(&plStack_28,&UNK_10f58a05b);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(plStack_28,param_1);
  FUN_1092b4db8(plStack_28,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(plStack_28,param_2);
  pplVar1 = &plStack_28;
  FUN_1099ab984(pplVar1);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar1;
}



/* Entry: 10991c058; end: 10991c33f;  */

long * FUN_10991c058(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long *plVar19;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  int *piVar18;
  
  plVar4 = param_1;
  plVar8 = param_2;
  if ((long)param_2 - 1U == 0) {
    plVar19 = (long *)param_1[1];
    param_2 = (long *)0x2;
    if (plVar19 < (long *)0x2) {
LAB_10991c0bc:
      lVar5 = (long)param_2 << 3;
      __Znwm();
      plVar4 = (long *)*param_1;
      *param_1 = lVar5;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      plVar8 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar8 * 8) = 0;
        plVar8 = (long *)((long)plVar8 + 1);
      } while (param_2 != plVar8);
      plVar8 = (long *)param_1[2];
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      plVar19 = (long *)plVar8[1];
      uVar9 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar9) == 0) {
        plVar19 = (long *)((ulong)plVar19 & uVar9);
      }
      else if (param_2 <= plVar19) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar19 / (ulong)param_2;
        }
        plVar19 = (long *)((long)plVar19 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar19 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar15 = (long *)plVar11[1];
        if (((ulong)param_2 & uVar9) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar9);
        }
        else if (param_2 <= plVar15) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar15 / (ulong)param_2;
          }
          plVar15 = (long *)((long)plVar15 - uVar3 * (long)param_2);
        }
        plVar12 = plVar11;
        if (plVar15 != plVar19) {
          lVar5 = *param_1;
          if (*(long *)(lVar5 + (long)plVar15 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar15 * 8) = plVar8;
            plVar19 = plVar15;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar5 + (long)plVar15 * 8);
            **(long **)(lVar5 + (long)plVar15 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
      return plVar4;
    }
LAB_10991c124:
    if (plVar19 <= param_2) {
      return plVar4;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar19 <= param_2) {
      return plVar4;
    }
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar4;
    }
    if ((ulong)param_2 >> 0x3d == 0) {
      lVar5 = (long)param_2 << 3;
      __Znwm();
      plVar4 = (long *)*param_1;
      *param_1 = lVar5;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      plVar8 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar8 * 8) = 0;
        plVar8 = (long *)((long)plVar8 + 1);
      } while (param_2 != plVar8);
      plVar8 = (long *)param_1[2];
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      plVar19 = (long *)plVar8[1];
      uVar9 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar9) == 0) {
        plVar19 = (long *)((ulong)plVar19 & uVar9);
      }
      else if (param_2 <= plVar19) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar19 / (ulong)param_2;
        }
        plVar19 = (long *)((long)plVar19 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar19 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar15 = (long *)plVar11[1];
        if (((ulong)param_2 & uVar9) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar9);
        }
        else if (param_2 <= plVar15) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar15 / (ulong)param_2;
          }
          plVar15 = (long *)((long)plVar15 - uVar3 * (long)param_2);
        }
        plVar12 = plVar11;
        if (plVar15 != plVar19) {
          lVar5 = *param_1;
          if (*(long *)(lVar5 + (long)plVar15 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar15 * 8) = plVar8;
            plVar19 = plVar15;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar5 + (long)plVar15 * 8);
            **(long **)(lVar5 + (long)plVar15 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
      return plVar4;
    }
  }
  else {
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar4 = param_2;
    }
    plVar19 = (long *)param_1[1];
    if (param_2 <= plVar19) goto LAB_10991c124;
    if ((ulong)param_2 >> 0x3d == 0) goto LAB_10991c0bc;
  }
  func_0x000104c4f740();
  *plVar4 = (long)&PTR_FUN_110b1d598;
  plVar4[1] = 0;
  *(undefined4 *)(plVar4 + 2) = 0;
  plVar4[3] = 0;
  plVar4[4] = (long)plVar8;
  if (plVar8 == (long *)0x0) {
    lStack_d8 = 0;
    uStack_80 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    FUN_1099a9f0c(&lStack_d8,&UNK_10f58a113,0x38,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_d0 + 0x7540,&UNK_10f58a19f,0x2a);
    goto LAB_10991c70c;
  }
  piVar1 = (int *)*plVar8;
  if (piVar1 == (int *)plVar8[1]) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    piVar13 = piVar1;
    do {
      piVar17 = piVar13 + 2;
      iVar7 = *piVar13 + iVar7;
      piVar13 = piVar17;
    } while (piVar17 != (int *)plVar8[1]);
    *(int *)((long)plVar4 + 0xc) = iVar7;
  }
  lVar5 = plVar8[3];
  lVar6 = plVar8[4] - lVar5;
  if (lVar6 != 0) {
    iVar14 = 0;
    lVar16 = 0;
    iVar10 = 0;
    do {
      piVar13 = (int *)(lVar5 + lVar16 * 0x20);
      iVar2 = *piVar13;
      piVar17 = *(int **)(piVar13 + 2);
      if (*(int **)(piVar13 + 2) != *(int **)(piVar13 + 4)) {
        do {
          piVar18 = piVar17 + 2;
          iVar14 = iVar14 + piVar1[(long)*piVar17 * 2] * iVar2;
          piVar17 = piVar18;
        } while (piVar18 != *(int **)(piVar13 + 4));
        *(int *)(plVar4 + 2) = iVar14;
      }
      iVar10 = iVar2 + iVar10;
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar6 >> 5);
    *(int *)(plVar4 + 1) = iVar10;
    lStack_d8 = CONCAT44(lStack_d8._4_4_,iVar10);
    uStack_74 = 0;
    if (iVar10 < 0) {
      plVar8 = &lStack_d8;
      FUN_109904144(plVar8,&uStack_74,&UNK_10f58a1ca);
      plStack_e0 = plVar8;
      if (plVar8 != (long *)0x0) {
        FUN_1099ab8e4(&lStack_d8,&UNK_10f58a113,0x4d,&plStack_e0);
        goto LAB_10991c70c;
      }
      iVar7 = *(int *)((long)plVar4 + 0xc);
    }
  }
  lStack_d8 = CONCAT44(lStack_d8._4_4_,iVar7);
  uStack_74 = 0;
  if (iVar7 < 0) {
    plVar8 = &lStack_d8;
    FUN_109904144(plVar8,&uStack_74,&UNK_10f58a1d9);
    plStack_e0 = plVar8;
    if (plVar8 != (long *)0x0) {
      FUN_1099ab8e4(&lStack_d8,&UNK_10f58a113,0x4e,&plStack_e0);
      goto LAB_10991c70c;
    }
  }
  lStack_d8 = CONCAT44(lStack_d8._4_4_,(int)plVar4[2]);
  uStack_74 = 0;
  if ((int)plVar4[2] < 0) {
    plVar8 = &lStack_d8;
    FUN_109904144(plVar8,&uStack_74,&UNK_10f58a1e8);
    plStack_e0 = plVar8;
    if (plVar8 != (long *)0x0) {
      FUN_1099ab8e4(&lStack_d8,&UNK_10f58a113,0x4f,&plStack_e0);
      goto LAB_10991c70c;
    }
  }
  if (piRam000000011373caa0 == (int *)0x0) {
    iVar7 = 0x1373caa0;
    FUN_1099adbb8(0x11373caa0,0x11382bb14,&UNK_10f58a113,2);
    if (iVar7 != 0) goto LAB_10991c474;
  }
  else if (1 < *piRam000000011373caa0) {
LAB_10991c474:
    lStack_d8 = 0;
    uStack_80 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    FUN_1099a9f0c(&lStack_d8,&UNK_10f58a113,0x50,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_d0 + 0x7540,&UNK_10f58a1fb,0x1d);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
    FUN_1092b4db8();
    FUN_1099ab3b0(&lStack_d8);
  }
  iVar7 = (int)plVar4[2];
  lVar5 = (long)iVar7 << 3;
  if (iVar7 < 0) {
    lVar5 = -1;
  }
  __Znam();
  _bzero();
  lVar6 = plVar4[3];
  plVar4[3] = lVar5;
  if (lVar6 == 0) {
    *(int *)((long)plVar4 + 0x14) = iVar7;
  }
  else {
    __ZdaPv();
    *(int *)((long)plVar4 + 0x14) = (int)plVar4[2];
    if (plVar4[3] == 0) {
      lStack_d8 = 0;
      uStack_80 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      FUN_1099a9f0c(&lStack_d8,&UNK_10f58a113,0x54,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_d0 + 0x7540,&UNK_10f58a221,0x21);
LAB_10991c70c:
      plVar8 = &lStack_d8;
      func_0x0001099ab7c0();
      FUN_10991c73c(plVar4 + 4);
      lVar5 = plVar4[3];
      plVar4[3] = 0;
      if (lVar5 != 0) {
        __ZdaPv();
      }
      __Unwind_Resume();
      plVar4 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar4 != (long *)0x0) {
        lVar5 = plVar4[3];
        if (lVar5 != 0) {
          lVar16 = plVar4[4];
          lVar6 = lVar5;
          if (lVar16 != lVar5) {
            do {
              if (*(long *)(lVar16 + -0x18) != 0) {
                *(long *)(lVar16 + -0x10) = *(long *)(lVar16 + -0x18);
                __ZdlPv();
              }
              lVar16 = lVar16 + -0x20;
            } while (lVar16 != lVar5);
            lVar6 = plVar4[3];
          }
          plVar4[4] = lVar5;
          __ZdlPv(lVar6);
        }
        if (*plVar4 != 0) {
          plVar4[1] = *plVar4;
          __ZdlPv();
        }
        __ZdlPv(plVar4);
      }
      return plVar8;
    }
  }
  return plVar4;
}



/* Entry: 10991c340; end: 10991c73b;  */

undefined8 * FUN_10991c340(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long *plVar13;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  int *piVar12;
  
  *param_1 = &PTR_FUN_110b1d598;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (param_2 == (long *)0x0) {
    uStack_a8 = 0;
    uStack_50 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    FUN_1099a9f0c(&uStack_a8,&UNK_10f58a113,0x38,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_a0 + 0x7540,&UNK_10f58a19f,0x2a);
    goto LAB_10991c70c;
  }
  piVar1 = (int *)*param_2;
  if (piVar1 == (int *)param_2[1]) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    piVar8 = piVar1;
    do {
      piVar11 = piVar8 + 2;
      iVar5 = *piVar8 + iVar5;
      piVar8 = piVar11;
    } while (piVar11 != (int *)param_2[1]);
    *(int *)((long)param_1 + 0xc) = iVar5;
  }
  lVar6 = param_2[3];
  lVar3 = param_2[4] - lVar6;
  if (lVar3 != 0) {
    iVar9 = 0;
    lVar10 = 0;
    iVar7 = 0;
    do {
      piVar8 = (int *)(lVar6 + lVar10 * 0x20);
      iVar2 = *piVar8;
      piVar11 = *(int **)(piVar8 + 2);
      if (*(int **)(piVar8 + 2) != *(int **)(piVar8 + 4)) {
        do {
          piVar12 = piVar11 + 2;
          iVar9 = iVar9 + piVar1[(long)*piVar11 * 2] * iVar2;
          piVar11 = piVar12;
        } while (piVar12 != *(int **)(piVar8 + 4));
        *(int *)(param_1 + 2) = iVar9;
      }
      iVar7 = iVar2 + iVar7;
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar3 >> 5);
    *(int *)(param_1 + 1) = iVar7;
    uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar7);
    uStack_44 = 0;
    if (iVar7 < 0) {
      puVar4 = &uStack_a8;
      FUN_109904144(puVar4,&uStack_44,&UNK_10f58a1ca);
      puStack_b0 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_1099ab8e4(&uStack_a8,&UNK_10f58a113,0x4d,&puStack_b0);
        goto LAB_10991c70c;
      }
      iVar5 = *(int *)((long)param_1 + 0xc);
    }
  }
  uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar5);
  uStack_44 = 0;
  if (iVar5 < 0) {
    puVar4 = &uStack_a8;
    FUN_109904144(puVar4,&uStack_44,&UNK_10f58a1d9);
    puStack_b0 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1099ab8e4(&uStack_a8,&UNK_10f58a113,0x4e,&puStack_b0);
      goto LAB_10991c70c;
    }
  }
  uStack_a8 = CONCAT44(uStack_a8._4_4_,*(int *)(param_1 + 2));
  uStack_44 = 0;
  if (*(int *)(param_1 + 2) < 0) {
    puVar4 = &uStack_a8;
    FUN_109904144(puVar4,&uStack_44,&UNK_10f58a1e8);
    puStack_b0 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1099ab8e4(&uStack_a8,&UNK_10f58a113,0x4f,&puStack_b0);
      goto LAB_10991c70c;
    }
  }
  if (piRam000000011373caa0 == (int *)0x0) {
    iVar5 = 0x1373caa0;
    FUN_1099adbb8(0x11373caa0,0x11382bb14,&UNK_10f58a113,2);
    if (iVar5 != 0) goto LAB_10991c474;
  }
  else if (1 < *piRam000000011373caa0) {
LAB_10991c474:
    uStack_a8 = 0;
    uStack_50 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    FUN_1099a9f0c(&uStack_a8,&UNK_10f58a113,0x50,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_a0 + 0x7540,&UNK_10f58a1fb,0x1d);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
    FUN_1092b4db8();
    FUN_1099ab3b0(&uStack_a8);
  }
  iVar5 = *(int *)(param_1 + 2);
  lVar6 = (long)iVar5 << 3;
  if (iVar5 < 0) {
    lVar6 = -1;
  }
  __Znam();
  _bzero();
  lVar3 = param_1[3];
  param_1[3] = lVar6;
  if (lVar3 == 0) {
    *(int *)((long)param_1 + 0x14) = iVar5;
  }
  else {
    __ZdaPv();
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 2);
    if (param_1[3] == 0) {
      uStack_a8 = 0;
      uStack_50 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      FUN_1099a9f0c(&uStack_a8,&UNK_10f58a113,0x54,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_a0 + 0x7540,&UNK_10f58a221,0x21);
LAB_10991c70c:
      puVar4 = &uStack_a8;
      func_0x0001099ab7c0();
      FUN_10991c73c(param_1 + 4);
      lVar6 = param_1[3];
      param_1[3] = 0;
      if (lVar6 != 0) {
        __ZdaPv();
      }
      __Unwind_Resume();
      plVar13 = (long *)*puVar4;
      *puVar4 = 0;
      if (plVar13 != (long *)0x0) {
        lVar6 = plVar13[3];
        if (lVar6 != 0) {
          lVar10 = plVar13[4];
          lVar3 = lVar6;
          if (lVar10 != lVar6) {
            do {
              if (*(long *)(lVar10 + -0x18) != 0) {
                *(long *)(lVar10 + -0x10) = *(long *)(lVar10 + -0x18);
                __ZdlPv();
              }
              lVar10 = lVar10 + -0x20;
            } while (lVar10 != lVar6);
            lVar3 = plVar13[3];
          }
          plVar13[4] = lVar6;
          __ZdlPv(lVar3);
        }
        if (*plVar13 != 0) {
          plVar13[1] = *plVar13;
          __ZdlPv();
        }
        __ZdlPv(plVar13);
      }
      return puVar4;
    }
  }
  return param_1;
}



/* Entry: 10991c73c; end: 10991c7c7;  */

undefined8 * FUN_10991c73c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    lVar3 = plVar2[3];
    if (lVar3 != 0) {
      lVar4 = plVar2[4];
      lVar1 = lVar3;
      if (lVar4 != lVar3) {
        do {
          if (*(long *)(lVar4 + -0x18) != 0) {
            *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
            __ZdlPv();
          }
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != lVar3);
        lVar1 = plVar2[3];
      }
      plVar2[4] = lVar3;
      __ZdlPv(lVar1);
    }
    if (*plVar2 != 0) {
      plVar2[1] = *plVar2;
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 10991c7c8; end: 10991c7e3;  */

void FUN_10991c7c8(long param_1)

{
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)
              (*(undefined8 *)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0x10) << 3);
    return;
  }
  return;
}



/* Entry: 10991c7e4; end: 10991cbef;  */

double * FUN_10991c7e4(double *param_1,long param_2,long param_3)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  double *pdVar9;
  double *pdVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double *pdVar15;
  undefined *puVar16;
  double *pdVar17;
  long lVar18;
  ulong uVar19;
  double *pdVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  double *pdVar25;
  long lVar26;
  undefined8 *extraout_x8;
  long lVar27;
  uint *puVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  int *piVar32;
  int iVar33;
  double dVar34;
  long lVar35;
  undefined8 uVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  undefined4 *puVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  uint uVar46;
  int iVar47;
  ulong uVar48;
  double *pdVar49;
  double *pdVar50;
  ulong unaff_x23;
  long lVar51;
  long lVar52;
  undefined8 *puVar53;
  long lVar54;
  undefined8 *puVar55;
  uint uVar56;
  long lVar57;
  long lVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  int *piStack_4c0;
  double dStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined8 uStack_450;
  double dStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined8 uStack_388;
  double dStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 ***pppuStack_2e0;
  code *pcStack_2d8;
  ulong uStack_2c8;
  double *pdStack_2c0;
  int *piStack_2b8;
  double dStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  double dStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  double *pdStack_110;
  long lStack_e8;
  double dStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  pdStack_110 = param_1;
  lStack_e8 = param_2;
  if (param_2 == 0) {
    dStack_c8 = 0.0;
    uStack_70 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_1099a9f0c(&dStack_c8,&UNK_10f58a113,0x5c,3,FUN_1099aa768,0);
    puVar16 = &UNK_10f58a243;
    lVar18 = 0x1b;
    FUN_1092b4db8(lStack_c0 + 0x7540);
  }
  else {
    if (param_3 != 0) {
      plVar29 = (long *)param_1[4];
      lVar18 = plVar29[3];
      lVar27 = plVar29[4] - lVar18;
      pdVar9 = param_1;
      if (lVar27 != 0) {
        lVar30 = 0;
        do {
          puVar28 = (uint *)(lVar18 + lVar30 * 0x20);
          piVar32 = *(int **)(puVar28 + 2);
          piVar4 = *(int **)(puVar28 + 4);
          if (piVar32 != piVar4) {
            uVar2 = *puVar28;
            lVar38 = *plVar29;
            dVar34 = param_1[3];
            lVar42 = param_3 + (long)(int)puVar28[1] * 8;
            lVar21 = (long)(int)uVar2 - 1;
            iVar22 = (int)((ulong)uVar2 & 0xfffffffc);
            pdVar10 = (double *)(lVar42 + (long)iVar22 * 8);
            lVar35 = (long)dVar34 + 0x10;
            do {
              lVar26 = (long)piVar32[1];
              puVar28 = (uint *)(lVar38 + (long)*piVar32 * 8);
              uVar3 = *puVar28;
              uVar48 = (ulong)uVar3;
              lVar54 = (long)dVar34 + lVar26 * 8;
              pdVar15 = (double *)(param_2 + (long)(int)puVar28[1] * 8);
              if (((long)(int)uVar2 & 1U) == 0) {
LAB_10991c904:
                if ((uVar2 >> 1 & 1) != 0) {
                  if ((int)uVar3 < 1) {
                    dVar59 = 0.0;
                    dVar60 = 0.0;
                  }
                  else {
                    dVar59 = 0.0;
                    dVar60 = 0.0;
                    pdVar49 = (double *)(lVar54 + (long)(int)(uVar3 * iVar22) * 8);
                    uVar39 = uVar48;
                    pdVar17 = pdVar15;
                    do {
                      pdVar9 = pdVar49 + 1;
                      dVar59 = dVar59 + *pdVar49 * *pdVar17;
                      dVar60 = dVar60 + pdVar49[uVar48] * *pdVar17;
                      uVar56 = (int)uVar39 - 1;
                      uVar39 = (ulong)uVar56;
                      pdVar49 = pdVar9;
                      pdVar17 = pdVar17 + 1;
                    } while (uVar56 != 0);
                  }
                  pdVar10[1] = dVar60 + pdVar10[1];
                  *pdVar10 = dVar59 + *pdVar10;
                }
                if (3 < (int)uVar2) {
                  uVar48 = 0;
                  lVar51 = (long)(int)uVar3;
                  uVar56 = uVar3 & 0xfffffffc;
                  uVar37 = uVar3 * 3;
                  lVar24 = lVar35 + lVar51 * 8 + lVar26 * 8;
                  lVar57 = lVar51 * 0x20;
                  lVar45 = lVar35 + lVar26 * 8 + (long)(int)uVar37 * 8;
                  lVar26 = lVar35 + lVar26 * 8 + (long)(int)(uVar3 << 1) * 8;
                  pdVar9 = (double *)
                           (-(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar37 << 3);
                  lVar44 = lVar54;
                  do {
                    if ((int)uVar3 < 4) {
                      pdVar49 = (double *)(lVar54 + uVar48 * lVar51 * 8);
                      dVar59 = 0.0;
                      dVar60 = 0.0;
                      dVar61 = 0.0;
                      dVar62 = 0.0;
                      pdVar17 = pdVar15;
                    }
                    else {
                      lVar40 = 0;
                      iVar33 = 0;
                      dVar59 = 0.0;
                      dVar60 = 0.0;
                      dVar61 = 0.0;
                      dVar62 = 0.0;
                      do {
                        pdVar49 = (double *)((long)pdVar15 + lVar40);
                        pdVar17 = (double *)(lVar44 + lVar40);
                        pdVar20 = (double *)(lVar24 + lVar40);
                        pdVar25 = (double *)(lVar26 + lVar40);
                        pdVar50 = (double *)(lVar45 + lVar40);
                        dVar64 = *pdVar49;
                        dVar65 = pdVar49[1];
                        dVar63 = pdVar49[2];
                        dVar68 = pdVar49[3];
                        dVar59 = dVar59 + dVar64 * *pdVar17 + pdVar17[1] * dVar65 +
                                 pdVar17[2] * dVar63 + pdVar17[3] * dVar68;
                        dVar60 = dVar60 + dVar64 * pdVar20[-2] + pdVar20[-1] * dVar65 +
                                 *pdVar20 * dVar63 + pdVar20[1] * dVar68;
                        dVar61 = dVar61 + dVar64 * pdVar25[-2] + pdVar25[-1] * dVar65 +
                                 *pdVar25 * dVar63 + pdVar25[1] * dVar68;
                        dVar62 = dVar62 + dVar64 * pdVar50[-2] + pdVar50[-1] * dVar65 +
                                 *pdVar50 * dVar63 + pdVar50[1] * dVar68;
                        iVar33 = iVar33 + 4;
                        lVar40 = lVar40 + 0x20;
                      } while (iVar33 < (int)uVar56);
                      pdVar49 = (double *)(lVar44 + lVar40);
                      pdVar17 = (double *)((long)pdVar15 + lVar40);
                    }
                    uVar37 = uVar56;
                    if (uVar56 != uVar3) {
                      do {
                        dVar64 = *pdVar17;
                        pdVar17 = pdVar17 + 1;
                        dVar59 = dVar59 + dVar64 * *pdVar49;
                        dVar60 = dVar60 + dVar64 * pdVar49[lVar51];
                        dVar61 = dVar61 + dVar64 * pdVar49[(int)(uVar3 << 1)];
                        dVar62 = dVar62 + dVar64 * *(double *)((long)pdVar49 + (long)pdVar9);
                        pdVar49 = pdVar49 + 1;
                        uVar37 = uVar37 + 1;
                      } while ((int)uVar37 < (int)uVar3);
                    }
                    pdVar49 = (double *)(lVar42 + uVar48 * 8);
                    uVar48 = uVar48 + 4;
                    lVar24 = lVar24 + lVar57;
                    pdVar49[1] = dVar60 + pdVar49[1];
                    *pdVar49 = dVar59 + *pdVar49;
                    pdVar49[3] = dVar62 + pdVar49[3];
                    pdVar49[2] = dVar61 + pdVar49[2];
                    lVar44 = lVar44 + lVar57;
                    lVar45 = lVar45 + lVar57;
                    lVar26 = lVar26 + lVar57;
                  } while (uVar48 < ((ulong)uVar2 & 0xfffffffc));
                }
              }
              else {
                if ((int)uVar3 < 1) {
                  dVar59 = 0.0;
                }
                else {
                  dVar59 = 0.0;
                  pdVar49 = pdVar15;
                  pdVar17 = (double *)(lVar54 + (long)(int)(uVar3 * (int)lVar21) * 8);
                  uVar39 = uVar48;
                  do {
                    pdVar9 = pdVar49 + 1;
                    dVar59 = dVar59 + *pdVar49 * *pdVar17;
                    uVar56 = (int)uVar39 - 1;
                    uVar39 = (ulong)uVar56;
                    pdVar49 = pdVar9;
                    pdVar17 = pdVar17 + 1;
                  } while (uVar56 != 0);
                }
                *(double *)(lVar42 + lVar21 * 8) = dVar59 + *(double *)(lVar42 + lVar21 * 8);
                if (uVar2 != 1) goto LAB_10991c904;
              }
              piVar32 = piVar32 + 2;
            } while (piVar32 != piVar4);
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 != lVar27 >> 5);
      }
      return pdVar9;
    }
    dStack_c8 = 0.0;
    uStack_70 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_1099a9f0c(&dStack_c8,&UNK_10f58a113,0x5d,3,FUN_1099aa768,0);
    puVar16 = &UNK_10f58a25f;
    lVar18 = 0x1b;
    FUN_1092b4db8(lStack_c0 + 0x7540);
  }
  pdVar9 = &dStack_c8;
  func_0x0001099ab7c0();
  pcStack_128 = FUN_10991cbf0;
  puStack_1e8 = puVar16;
  puStack_130 = &stack0xfffffffffffffff0;
  if (puVar16 == (undefined *)0x0) {
    dStack_1e0 = 0.0;
    uStack_188 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0;
    FUN_1099a9f0c(&dStack_1e0,&UNK_10f58a113,0x72,3,FUN_1099aa768,0);
    pdVar9 = (double *)&UNK_10f58a243;
    FUN_1092b4db8(lStack_1d8 + 0x7540,&UNK_10f58a243,0x1b);
  }
  else {
    if (lVar18 != 0) {
      plVar29 = (long *)pdVar9[4];
      lVar27 = plVar29[3];
      lVar30 = plVar29[4] - lVar27;
      if (lVar30 != 0) {
        lVar35 = 0;
        do {
          puVar28 = (uint *)(lVar27 + lVar35 * 0x20);
          piVar32 = *(int **)(puVar28 + 2);
          piVar4 = *(int **)(puVar28 + 4);
          if (piVar32 != piVar4) {
            uVar3 = *puVar28;
            lVar42 = *plVar29;
            dVar34 = pdVar9[3];
            pdVar10 = (double *)(puVar16 + (long)(int)puVar28[1] * 8);
            uVar2 = uVar3 & 0xfffffffc;
            do {
              puVar28 = (uint *)(lVar42 + (long)*piVar32 * 8);
              uVar56 = *puVar28;
              uVar48 = (ulong)(int)uVar56;
              pdVar15 = (double *)((long)dVar34 + (long)piVar32[1] * 8);
              lVar21 = lVar18 + (long)(int)puVar28[1] * 8;
              if ((uVar48 & 1) == 0) {
LAB_10991ccd4:
                uVar37 = uVar56 & 0xfffffffc;
                if ((uVar56 >> 1 & 1) != 0) {
                  if ((int)uVar3 < 1) {
                    dVar59 = 0.0;
                    dVar60 = 0.0;
                  }
                  else {
                    dVar59 = 0.0;
                    dVar60 = 0.0;
                    pdVar49 = pdVar15 + (int)uVar37;
                    pdVar17 = pdVar10;
                    uVar46 = uVar3;
                    do {
                      dVar59 = dVar59 + *pdVar49 * *pdVar17;
                      dVar60 = dVar60 + pdVar49[1] * *pdVar17;
                      pdVar49 = pdVar49 + uVar48;
                      uVar46 = uVar46 - 1;
                      pdVar17 = pdVar17 + 1;
                    } while (uVar46 != 0);
                  }
                  lVar38 = (long)(int)uVar37 * 8;
                  pdVar49 = (double *)(lVar21 + lVar38);
                  dVar61 = *pdVar49;
                  pdVar17 = (double *)(lVar21 + lVar38);
                  pdVar17[1] = dVar60 + pdVar49[1];
                  *pdVar17 = dVar59 + dVar61;
                }
                if (3 < (int)uVar56) {
                  uVar48 = 0;
                  uVar39 = (ulong)uVar56;
                  pdVar49 = pdVar15;
                  do {
                    pdVar17 = pdVar10;
                    if ((int)uVar3 < 4) {
                      pdVar20 = pdVar15 + uVar48;
                      dVar59 = 0.0;
                      dVar60 = 0.0;
                      dVar61 = 0.0;
                      dVar62 = 0.0;
                    }
                    else {
                      iVar22 = 0;
                      dVar59 = 0.0;
                      dVar60 = 0.0;
                      dVar61 = 0.0;
                      dVar62 = 0.0;
                      pdVar20 = pdVar49;
                      do {
                        pdVar25 = pdVar20 + uVar39 + 2;
                        dVar64 = *pdVar17;
                        dVar63 = pdVar17[1];
                        pdVar50 = pdVar20 + uVar39 * 2 + 2;
                        dVar65 = pdVar17[2];
                        dVar68 = pdVar17[3];
                        pdVar1 = pdVar20 + uVar39 * 3 + 2;
                        dVar59 = dVar59 + dVar64 * *pdVar20 + pdVar25[-2] * dVar63 +
                                 pdVar50[-2] * dVar65 + pdVar1[-2] * dVar68;
                        dVar60 = dVar60 + dVar64 * pdVar20[1] + pdVar25[-1] * dVar63 +
                                 pdVar50[-1] * dVar65 + pdVar1[-1] * dVar68;
                        dVar61 = dVar61 + dVar64 * pdVar20[2] + *pdVar25 * dVar63 +
                                 *pdVar50 * dVar65 + *pdVar1 * dVar68;
                        dVar62 = dVar62 + dVar64 * pdVar20[3] + pdVar25[1] * dVar63 +
                                 pdVar50[1] * dVar65 + pdVar1[1] * dVar68;
                        pdVar17 = pdVar17 + 4;
                        iVar22 = iVar22 + 4;
                        pdVar20 = pdVar20 + uVar39 * 4;
                      } while (iVar22 < (int)uVar2);
                    }
                    if (uVar2 != uVar3) {
                      pdVar20 = pdVar20 + 2;
                      uVar56 = uVar2;
                      do {
                        dVar64 = *pdVar17;
                        pdVar17 = pdVar17 + 1;
                        dVar59 = dVar59 + dVar64 * pdVar20[-2];
                        dVar60 = dVar60 + dVar64 * pdVar20[-1];
                        dVar61 = dVar61 + dVar64 * *pdVar20;
                        dVar62 = dVar62 + dVar64 * pdVar20[1];
                        uVar56 = uVar56 + 1;
                        pdVar20 = pdVar20 + uVar39;
                      } while ((int)uVar56 < (int)uVar3);
                    }
                    pdVar17 = (double *)(lVar21 + uVar48 * 8);
                    pdVar17[1] = dVar60 + pdVar17[1];
                    *pdVar17 = dVar59 + *pdVar17;
                    pdVar17[3] = dVar62 + pdVar17[3];
                    pdVar17[2] = dVar61 + pdVar17[2];
                    uVar48 = uVar48 + 4;
                    pdVar49 = pdVar49 + 4;
                  } while (uVar48 < uVar37);
                }
              }
              else {
                lVar38 = (long)(int)(uVar56 - 1);
                if ((int)uVar3 < 1) {
                  dVar59 = 0.0;
                }
                else {
                  dVar59 = 0.0;
                  pdVar49 = pdVar15 + lVar38;
                  pdVar17 = pdVar10;
                  uVar37 = uVar3;
                  do {
                    dVar59 = dVar59 + *pdVar17 * *pdVar49;
                    pdVar49 = pdVar49 + uVar48;
                    uVar37 = uVar37 - 1;
                    pdVar17 = pdVar17 + 1;
                  } while (uVar37 != 0);
                }
                *(double *)(lVar21 + lVar38 * 8) = dVar59 + *(double *)(lVar21 + lVar38 * 8);
                if (uVar56 != 1) goto LAB_10991ccd4;
              }
              piVar32 = piVar32 + 2;
            } while (piVar32 != piVar4);
          }
          lVar35 = lVar35 + 1;
        } while (lVar35 != lVar30 >> 5);
      }
      return pdVar9;
    }
    dStack_1e0 = 0.0;
    uStack_188 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0;
    FUN_1099a9f0c(&dStack_1e0,&UNK_10f58a113,0x73,3,FUN_1099aa768,0);
    pdVar9 = (double *)&UNK_10f58a25f;
    FUN_1092b4db8(lStack_1d8 + 0x7540,&UNK_10f58a25f,0x1b);
  }
  pdVar10 = &dStack_1e0;
  func_0x0001099ab7c0();
  ppuStack_200 = &puStack_130;
  pcStack_1f8 = FUN_10991cf48;
  if (pdVar9 != (double *)0x0) {
    uVar39 = (ulong)*(int *)((long)pdVar10 + 0xc);
    uVar48 = (ulong)pdVar9 >> 3 & 1;
    if ((long)uVar39 <= (long)uVar48) {
      uVar48 = uVar39;
    }
    if (((ulong)pdVar9 & 7) != 0) {
      uVar48 = uVar39;
    }
    lVar18 = uVar39 - uVar48;
    pdVar15 = pdVar10;
    if (0 < (long)uVar48) {
      pdVar15 = pdVar9;
      _bzero(pdVar9,uVar48 << 3);
    }
    lVar27 = (lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffeU) + uVar48;
    if (1 < lVar18) {
      pdVar15 = pdVar9 + uVar48;
      lVar30 = lVar27;
      if (lVar27 <= (long)(uVar48 + 2)) {
        lVar30 = uVar48 + 2;
      }
      _bzero(pdVar15,(lVar30 + ~uVar48 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar27 < (long)uVar39) {
      pdVar15 = pdVar9 + (lVar18 / 2) * 2 + uVar48;
      _bzero(pdVar15,(lVar18 % 2) * 8);
    }
    dVar34 = pdVar10[4];
    lVar18 = *(long *)((long)dVar34 + 0x18);
    if (*(long *)((long)dVar34 + 0x20) != lVar18) {
      uStack_2c8 = 0;
      pdStack_2c0 = pdVar10;
      do {
        piVar4 = (int *)(lVar18 + uStack_2c8 * 0x20);
        piVar32 = *(int **)(piVar4 + 2);
        piStack_2b8 = *(int **)(piVar4 + 4);
        if (piVar32 != piStack_2b8) {
          iVar22 = *piVar4;
          lVar18 = (long)iVar22;
          uVar48 = lVar18 - 1;
          pdVar49 = pdVar10;
          do {
            dVar34 = pdVar49[3];
            lVar30 = (long)piVar32[1];
            piVar4 = (int *)(*(long *)pdVar49[4] + (long)*piVar32 * 8);
            iVar33 = *piVar4;
            uVar43 = (ulong)iVar33;
            lVar27 = (long)dVar34 + lVar30 * 8;
            pdVar15 = pdVar9 + piVar4[1];
            uVar39 = (ulong)pdVar15 >> 3 & 1;
            if ((long)uVar43 <= (long)uVar39) {
              uVar39 = uVar43;
            }
            if (((ulong)pdVar15 & 7) != 0) {
              uVar39 = uVar43;
            }
            if (0 < (long)uVar39) {
              uVar23 = 0;
              pdVar49 = (double *)((long)dVar34 + uVar43 * 8 + lVar30 * 8);
              do {
                if (iVar22 == 0) {
                  dVar59 = 0.0;
                }
                else {
                  dVar59 = *(double *)(lVar27 + uVar23 * 8);
                  dVar59 = dVar59 * dVar59;
                  pdVar17 = pdVar49;
                  uVar31 = uVar48;
                  if (1 < iVar22) {
                    do {
                      dVar59 = dVar59 + *pdVar17 * *pdVar17;
                      uVar31 = uVar31 - 1;
                      pdVar17 = pdVar17 + uVar43;
                    } while (uVar31 != 0);
                  }
                }
                pdVar15[uVar23] = dVar59 + pdVar15[uVar23];
                uVar23 = uVar23 + 1;
                pdVar49 = pdVar49 + 1;
              } while (uVar23 != uVar39);
            }
            lVar35 = uVar43 - uVar39;
            uVar23 = (lVar35 - (lVar35 >> 0x3f) & 0xfffffffffffffffeU) + uVar39;
            if (1 < lVar35) {
              lVar24 = lVar30 * 8;
              lVar45 = uVar43 * 0x20;
              lVar42 = (long)dVar34 + lVar45 + uVar39 * 8;
              lVar21 = (long)dVar34 + (long)iVar33 * 0x18 + uVar39 * 8;
              lVar38 = (long)dVar34 + uVar43 * 0x10 + uVar39 * 8;
              lVar54 = (long)dVar34 + uVar39 * 8 + uVar43 * 8;
              lVar26 = (long)dVar34 + uVar39 * 8 + lVar30 * 8;
              uVar31 = uVar39;
              do {
                if (iVar22 == 0) {
                  dVar59 = 0.0;
                  dVar60 = 0.0;
                }
                else {
                  pdVar49 = (double *)(lVar27 + uVar31 * 8);
                  dVar60 = pdVar49[1];
                  dVar59 = *pdVar49;
                  dVar59 = dVar59 * dVar59;
                  dVar60 = dVar60 * dVar60;
                  if (iVar22 < 5) {
                    lVar44 = 1;
                  }
                  else {
                    lVar51 = 1;
                    lVar57 = lVar42;
                    lVar40 = lVar21;
                    lVar52 = lVar38;
                    lVar58 = lVar54;
                    do {
                      dVar62 = ((double *)(lVar58 + lVar24))[1];
                      dVar61 = *(double *)(lVar58 + lVar24);
                      dVar65 = ((double *)(lVar52 + lVar24))[1];
                      dVar64 = *(double *)(lVar52 + lVar24);
                      dVar68 = ((double *)(lVar40 + lVar24))[1];
                      dVar63 = *(double *)(lVar40 + lVar24);
                      dVar67 = ((double *)(lVar57 + lVar24))[1];
                      dVar66 = *(double *)(lVar57 + lVar24);
                      lVar51 = lVar51 + 4;
                      lVar57 = lVar57 + lVar45;
                      dVar59 = dVar59 + dVar61 * dVar61 + dVar64 * dVar64 +
                                        dVar63 * dVar63 + dVar66 * dVar66;
                      dVar60 = dVar60 + dVar62 * dVar62 + dVar65 * dVar65 +
                                        dVar68 * dVar68 + dVar67 * dVar67;
                      lVar40 = lVar40 + lVar45;
                      lVar52 = lVar52 + lVar45;
                      lVar58 = lVar58 + lVar45;
                      lVar44 = (uVar48 & 0xfffffffffffffffc) + 1;
                    } while (lVar51 < (long)(uVar48 & 0xfffffffffffffffc));
                  }
                  lVar51 = lVar18 - lVar44;
                  if (lVar51 != 0 && lVar44 <= lVar18) {
                    pdVar49 = (double *)(lVar26 + uVar43 * 8 * lVar44);
                    do {
                      dVar59 = dVar59 + *pdVar49 * *pdVar49;
                      dVar60 = dVar60 + pdVar49[1] * pdVar49[1];
                      pdVar49 = pdVar49 + uVar43;
                      lVar51 = lVar51 + -1;
                    } while (lVar51 != 0);
                  }
                }
                dVar61 = pdVar15[uVar31];
                (pdVar15 + uVar31)[1] = dVar60 + (pdVar15 + uVar31)[1];
                pdVar15[uVar31] = dVar59 + dVar61;
                uVar31 = uVar31 + 2;
                lVar42 = lVar42 + 0x10;
                lVar21 = lVar21 + 0x10;
                lVar38 = lVar38 + 0x10;
                lVar54 = lVar54 + 0x10;
                lVar26 = lVar26 + 0x10;
              } while ((long)uVar31 < (long)uVar23);
            }
            if ((long)uVar23 < (long)uVar43) {
              pdVar49 = (double *)
                        ((long)dVar34 + (lVar35 / 2) * 0x10 + uVar39 * 8 + uVar43 * 8 + lVar30 * 8);
              do {
                if (iVar22 == 0) {
                  dVar34 = 0.0;
                }
                else {
                  dVar34 = *(double *)(lVar27 + uVar23 * 8);
                  dVar34 = dVar34 * dVar34;
                  pdVar17 = pdVar49;
                  uVar39 = uVar48;
                  if (1 < iVar22) {
                    do {
                      dVar34 = dVar34 + *pdVar17 * *pdVar17;
                      uVar39 = uVar39 - 1;
                      pdVar17 = pdVar17 + uVar43;
                    } while (uVar39 != 0);
                  }
                }
                pdVar15[uVar23] = dVar34 + pdVar15[uVar23];
                uVar23 = uVar23 + 1;
                pdVar49 = pdVar49 + 1;
              } while (uVar23 != uVar43);
            }
            piVar32 = piVar32 + 2;
            pdVar49 = pdStack_2c0;
          } while (piVar32 != piStack_2b8);
          dVar34 = pdVar10[4];
        }
        uStack_2c8 = uStack_2c8 + 1;
        lVar18 = *(long *)((long)dVar34 + 0x18);
      } while (uStack_2c8 < (ulong)(*(long *)((long)dVar34 + 0x20) - lVar18 >> 5));
    }
    return pdVar15;
  }
  dStack_2b0 = 0.0;
  uStack_258 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_260 = 0;
  FUN_1099a9f0c(&dStack_2b0,&UNK_10f58a113,0x88,3,FUN_1099aa768,0);
  puVar16 = &UNK_10f58a243;
  FUN_1092b4db8(lStack_2a8 + 0x7540,&UNK_10f58a243,0x1b);
  pdVar9 = &dStack_2b0;
  func_0x0001099ab7c0();
  pdVar10 = &dStack_340;
  pcStack_2d8 = FUN_10991d354;
  if (puVar16 != (undefined *)0x0) {
    dVar34 = pdVar9[4];
    lVar18 = *(long *)((long)dVar34 + 0x18);
    if (*(long *)((long)dVar34 + 0x20) != lVar18) {
      uVar48 = 0;
      do {
        piVar4 = (int *)(lVar18 + uVar48 * 0x20);
        piVar32 = *(int **)(piVar4 + 2);
        piVar5 = *(int **)(piVar4 + 4);
        if (piVar32 != piVar5) {
          iVar22 = *piVar4;
          do {
            piVar4 = (int *)(*(long *)pdVar9[4] + (long)*piVar32 * 8);
            iVar33 = *piVar4;
            uVar39 = (ulong)iVar33;
            pdVar10 = (double *)((long)pdVar9[3] + (long)piVar32[1] * 8);
            pdVar15 = (double *)(puVar16 + (long)piVar4[1] * 8);
            if (((ulong)pdVar10 & 7) == 0) {
              if (0 < iVar22) {
                lVar18 = 0;
                uVar43 = (ulong)pdVar10 >> 3 & 1;
                pdVar49 = pdVar10;
                if ((long)uVar39 <= (long)uVar43) {
                  uVar43 = uVar39;
                }
                do {
                  if (0 < (long)uVar43) {
                    pdVar10[lVar18 * uVar39] = pdVar10[lVar18 * uVar39] * *pdVar15;
                  }
                  lVar27 = (uVar39 - uVar43 & 0xfffffffffffffffe) + uVar43;
                  if (1 < (long)(uVar39 - uVar43)) {
                    pdVar17 = pdVar15 + uVar43;
                    uVar23 = uVar43;
                    pdVar20 = pdVar49 + uVar43;
                    do {
                      dVar34 = *pdVar17;
                      pdVar20[1] = pdVar20[1] * pdVar17[1];
                      *pdVar20 = *pdVar20 * dVar34;
                      uVar23 = uVar23 + 2;
                      pdVar17 = pdVar17 + 2;
                      pdVar20 = pdVar20 + 2;
                    } while ((long)uVar23 < lVar27);
                  }
                  for (; lVar27 < (long)uVar39; lVar27 = lVar27 + 1) {
                    pdVar49[lVar27] = pdVar49[lVar27] * pdVar15[lVar27];
                  }
                  uVar23 = uVar43 + (uVar39 & 1);
                  uVar19 = uVar23 & 1;
                  uVar31 = -uVar19;
                  if ((long)uVar23 < 0 == SCARRY8(uVar43,uVar39 & 1)) {
                    uVar31 = uVar19;
                  }
                  uVar43 = uVar39;
                  if ((long)uVar31 <= (long)uVar39) {
                    uVar43 = uVar31;
                  }
                  lVar18 = lVar18 + 1;
                  pdVar49 = pdVar49 + uVar39;
                } while (lVar18 != iVar22);
              }
            }
            else if (0 < iVar22) {
              lVar18 = 0;
              do {
                pdVar49 = pdVar15;
                uVar43 = uVar39;
                pdVar17 = pdVar10;
                if (0 < iVar33) {
                  do {
                    *pdVar17 = *pdVar17 * *pdVar49;
                    uVar43 = uVar43 - 1;
                    pdVar49 = pdVar49 + 1;
                    pdVar17 = pdVar17 + 1;
                  } while (uVar43 != 0);
                }
                lVar18 = lVar18 + 1;
                pdVar10 = pdVar10 + uVar39;
              } while (lVar18 != iVar22);
            }
            piVar32 = piVar32 + 2;
          } while (piVar32 != piVar5);
          dVar34 = pdVar9[4];
        }
        uVar48 = uVar48 + 1;
        lVar18 = *(long *)((long)dVar34 + 0x18);
      } while (uVar48 < (ulong)(*(long *)((long)dVar34 + 0x20) - lVar18 >> 5));
    }
    return pdVar9;
  }
  dStack_340 = 0.0;
  uStack_2e8 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0;
  pppuStack_2e0 = &ppuStack_200;
  FUN_1099a9f0c(&dStack_340,&UNK_10f58a113,0x99,3,FUN_1099aa768,0);
  plVar29 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_338 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  pdVar9 = &dStack_3e0;
  if (plVar29 == (long *)0x0) {
    dStack_3e0 = 0.0;
    uStack_388 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_390 = 0;
    FUN_1099a9f0c(&dStack_3e0,&UNK_10f58a113,0xaa,3,FUN_1099aa768,0);
    pdVar10 = (double *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_3d8 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    if (pdVar10 != (double *)0x0) {
      dVar34 = pdVar9[4];
      lVar18 = *(long *)((long)dVar34 + 0x18);
      pdVar15 = pdVar9;
      if (*(long *)((long)dVar34 + 0x20) != lVar18) {
        uVar48 = 0;
        do {
          piVar32 = (int *)(lVar18 + uVar48 * 0x20);
          piStack_4c0 = *(int **)(piVar32 + 2);
          piVar4 = *(int **)(piVar32 + 4);
          if (piStack_4c0 != piVar4) {
            iVar22 = *piVar32;
            do {
              if (0 < iVar22) {
                iVar33 = 0;
                iVar7 = *(int *)(*(long *)pdVar9[4] + (long)*piStack_4c0 * 8);
                do {
                  iVar47 = iVar7;
                  if (0 < iVar7) {
                    do {
                      pdVar15 = pdVar10;
                      _fprintf(pdVar10,&UNK_10f58a2e1);
                      iVar47 = iVar47 + -1;
                    } while (iVar47 != 0);
                  }
                  iVar33 = iVar33 + 1;
                } while (iVar33 != iVar22);
              }
              piStack_4c0 = piStack_4c0 + 2;
            } while (piStack_4c0 != piVar4);
            dVar34 = pdVar9[4];
          }
          uVar48 = uVar48 + 1;
          lVar18 = *(long *)((long)dVar34 + 0x18);
        } while (uVar48 < (ulong)(*(long *)((long)dVar34 + 0x20) - lVar18 >> 5));
      }
      return pdVar15;
    }
    dStack_4a8 = 0.0;
    uStack_450 = 0;
    uStack_490 = 0;
    uStack_498 = 0;
    uStack_480 = 0;
    uStack_488 = 0;
    uStack_470 = 0;
    uStack_478 = 0;
    uStack_460 = 0;
    uStack_468 = 0;
    uStack_458 = 0;
    FUN_1099a9f0c(&dStack_4a8,&UNK_10f58a113,0xe3,3,FUN_1099aa768,0);
    plVar29 = (long *)&UNK_10f58a2c2;
    FUN_1092b4db8(lStack_4a0 + 0x7540,&UNK_10f58a2c2,0x1e);
    pdVar9 = &dStack_4a8;
    func_0x0001099ab7c0();
    plVar11 = (long *)0x30;
    __Znwm();
    plVar11[1] = 0;
    *plVar11 = 0;
    plVar11[3] = 0;
    plVar11[2] = 0;
    plVar11[5] = 0;
    plVar11[4] = 0;
    if (plVar11 == plVar29) {
      uVar48 = plVar29[1] - *plVar29 >> 3;
    }
    else {
      lVar18 = plVar29[1] - *plVar29;
      if (lVar18 == 0) {
        plVar11[1] = 0;
        puVar12 = (undefined8 *)0x8;
        __Znwm();
        *puVar12 = 0xffffffffffffffff;
        goto LAB_10991db28;
      }
      uVar48 = lVar18 >> 3;
      if (uVar48 >> 0x3d != 0) {
        func_0x0001099041e8();
        __ZdlPv(lVar18);
        __Unwind_Resume();
        return (double *)plVar11[3];
      }
      lVar27 = lVar18;
      __Znwm();
      *plVar11 = lVar27;
      plVar11[1] = lVar27;
      plVar11[2] = lVar27 + lVar18;
      _memcpy();
      plVar11[1] = lVar27 + lVar18;
    }
    puVar12 = (undefined8 *)0x8;
    __Znwm();
    *puVar12 = 0xffffffffffffffff;
    if (uVar48 != 0) {
      if (uVar48 >> 0x3b != 0) {
        func_0x0001099041fc();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10991dc38);
        (*pcVar8)();
      }
      puVar53 = (undefined8 *)(uVar48 << 5);
      puVar13 = puVar53;
      __Znwm();
      puVar55 = puVar13;
      do {
        *puVar55 = 0xffffffffffffffff;
        puVar55[1] = 0;
        puVar55[2] = 0;
        puVar55[3] = 0;
        puVar14 = (undefined8 *)0x8;
        __Znwm();
        puVar55[1] = puVar14;
        *puVar14 = 0xffffffffffffffff;
        puVar55[2] = puVar14 + 1;
        puVar55[3] = puVar14 + 1;
        puVar55 = puVar55 + 4;
        puVar53 = puVar53 + -4;
      } while (puVar53 != (undefined8 *)0x0);
      plVar11[3] = (long)puVar13;
      plVar11[4] = (long)(puVar13 + uVar48 * 4);
      plVar11[5] = (long)(puVar13 + uVar48 * 4);
    }
LAB_10991db28:
    __ZdlPv(puVar12);
    lVar18 = *plVar29;
    if (plVar29[1] != lVar18) {
      lVar27 = 0;
      uVar48 = 0;
      iVar22 = 0;
      do {
        lVar30 = plVar11[3];
        uVar36 = *(undefined8 *)(lVar18 + uVar48 * 8);
        *(undefined8 *)(lVar30 + lVar27) = uVar36;
        puVar41 = (undefined4 *)((undefined8 *)(lVar30 + lVar27))[1];
        *puVar41 = (int)uVar48;
        puVar41[1] = iVar22;
        iVar33 = (int)uVar36;
        iVar22 = iVar22 + iVar33 * iVar33;
        uVar48 = uVar48 + 1;
        lVar18 = *plVar29;
        lVar27 = lVar27 + 0x20;
      } while (uVar48 < (ulong)(plVar29[1] - lVar18 >> 3));
    }
    pdVar15 = (double *)0x28;
    __Znwm();
    pdVar10 = pdVar15;
    FUN_10991c340();
    *extraout_x8 = pdVar15;
    if ((int)*(uint *)(pdVar15 + 2) < 1) {
      pdVar49 = (double *)pdVar15[3];
    }
    else {
      pdVar49 = (double *)pdVar15[3];
      pdVar10 = pdVar49;
      _bzero(pdVar49,(ulong)*(uint *)(pdVar15 + 2) << 3);
    }
    puVar6 = (uint *)plVar29[1];
    for (puVar28 = (uint *)*plVar29; puVar28 != puVar6; puVar28 = puVar28 + 2) {
      uVar2 = *puVar28;
      pdVar15 = pdVar9;
      pdVar17 = pdVar49;
      uVar48 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        do {
          *pdVar17 = *pdVar15;
          uVar48 = uVar48 - 1;
          pdVar15 = pdVar15 + 1;
          pdVar17 = pdVar17 + (ulong)uVar2 + 1;
        } while (uVar48 != 0);
      }
      pdVar9 = pdVar9 + (int)uVar2;
      pdVar49 = pdVar49 + uVar2 * uVar2;
    }
    return pdVar10;
  }
  iVar22 = *(int *)(pdVar10 + 1);
  iVar33 = *(int *)((long)pdVar10 + 0xc);
  lVar18 = (long)iVar33;
  if (iVar22 != 0 && iVar33 != 0) {
    lVar27 = 0;
    if (lVar18 != 0) {
      lVar27 = 0x7fffffffffffffff / lVar18;
    }
    if (iVar22 <= lVar27) goto LAB_10991d5a0;
    goto LAB_10991d5d8;
  }
LAB_10991d5a0:
  unaff_x23 = (long)iVar33 * (long)iVar22;
  pdVar9 = pdVar10;
  if (plVar29[2] * plVar29[1] - unaff_x23 == 0) goto LAB_10991d600;
  _free(*plVar29);
  if ((long)unaff_x23 < 1) {
LAB_10991d5f8:
    pdVar9 = (double *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10991d5d8:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991d5f8;
    }
    pdVar9 = (double *)(unaff_x23 * 8);
    _malloc();
    if (pdVar9 == (double *)0x0) goto LAB_10991d5d8;
  }
  *plVar29 = (long)pdVar9;
LAB_10991d600:
  plVar29[1] = (long)iVar22;
  plVar29[2] = lVar18;
  if (0 < (long)unaff_x23) {
    pdVar9 = (double *)*plVar29;
    _bzero(pdVar9,unaff_x23 << 3);
  }
  dVar34 = pdVar10[4];
  lVar18 = *(long *)((long)dVar34 + 0x18);
  if (*(long *)((long)dVar34 + 0x20) != lVar18) {
    uVar48 = 0;
    do {
      piVar4 = (int *)(lVar18 + uVar48 * 0x20);
      piVar32 = *(int **)(piVar4 + 2);
      piVar5 = *(int **)(piVar4 + 4);
      if (piVar32 != piVar5) {
        iVar22 = *piVar4;
        iVar33 = piVar4[1];
        do {
          piVar4 = (int *)(*(long *)pdVar10[4] + (long)*piVar32 * 8);
          iVar7 = *piVar4;
          uVar39 = (ulong)iVar7;
          pdVar15 = (double *)((long)pdVar10[3] + (long)piVar32[1] * 8);
          uVar43 = plVar29[2];
          pdVar49 = (double *)(*plVar29 + (long)piVar4[1] * 8 + uVar43 * (long)iVar33 * 8);
          if (((ulong)pdVar49 & 7) == 0) {
            if (0 < iVar22) {
              lVar18 = 0;
              pdVar9 = (double *)(uVar43 & 1);
              uVar23 = (ulong)pdVar49 >> 3 & 1;
              pdVar17 = pdVar49;
              pdVar20 = pdVar15;
              if ((long)uVar39 <= (long)uVar23) {
                uVar23 = uVar39;
              }
              do {
                if (0 < (long)uVar23) {
                  pdVar49[lVar18 * uVar43] = pdVar15[lVar18 * uVar39] + pdVar49[lVar18 * uVar43];
                }
                lVar27 = (uVar39 - uVar23 & 0xfffffffffffffffe) + uVar23;
                if (1 < (long)(uVar39 - uVar23)) {
                  pdVar25 = pdVar20 + uVar23;
                  uVar31 = uVar23;
                  pdVar50 = pdVar17 + uVar23;
                  do {
                    dVar34 = *pdVar25;
                    pdVar50[1] = pdVar25[1] + pdVar50[1];
                    *pdVar50 = dVar34 + *pdVar50;
                    uVar31 = uVar31 + 2;
                    pdVar25 = pdVar25 + 2;
                    pdVar50 = pdVar50 + 2;
                  } while ((long)uVar31 < lVar27);
                }
                for (; lVar27 < (long)uVar39; lVar27 = lVar27 + 1) {
                  pdVar17[lVar27] = pdVar20[lVar27] + pdVar17[lVar27];
                }
                uVar19 = (ulong)(uVar23 + (long)pdVar9) & 1;
                uVar31 = -uVar19;
                if ((long)(uVar23 + (long)pdVar9) < 0 == SCARRY8(uVar23,(long)pdVar9)) {
                  uVar31 = uVar19;
                }
                uVar23 = uVar39;
                if ((long)uVar31 <= (long)uVar39) {
                  uVar23 = uVar31;
                }
                lVar18 = lVar18 + 1;
                pdVar17 = pdVar17 + uVar43;
                pdVar20 = pdVar20 + uVar39;
              } while (lVar18 != iVar22);
            }
          }
          else if (0 < iVar22) {
            lVar18 = 0;
            pdVar9 = (double *)(uVar39 * 8);
            do {
              pdVar17 = pdVar49;
              pdVar20 = pdVar15;
              uVar23 = uVar39;
              if (0 < iVar7) {
                do {
                  *pdVar17 = *pdVar20 + *pdVar17;
                  uVar23 = uVar23 - 1;
                  pdVar17 = pdVar17 + 1;
                  pdVar20 = pdVar20 + 1;
                } while (uVar23 != 0);
              }
              lVar18 = lVar18 + 1;
              pdVar15 = pdVar15 + uVar39;
              pdVar49 = pdVar49 + uVar43;
            } while (lVar18 != iVar22);
          }
          piVar32 = piVar32 + 2;
        } while (piVar32 != piVar5);
        dVar34 = pdVar10[4];
      }
      uVar48 = uVar48 + 1;
      lVar18 = *(long *)((long)dVar34 + 0x18);
    } while (uVar48 < (ulong)(*(long *)((long)dVar34 + 0x20) - lVar18 >> 5));
  }
  return pdVar9;
}



/* Entry: 10991cbf0; end: 10991cf47;  */

undefined8 * FUN_10991cbf0(undefined8 *param_1,long param_2,long param_3)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined *puVar17;
  double *pdVar18;
  ulong uVar19;
  double *pdVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  double *pdVar24;
  double *pdVar25;
  long *extraout_x8;
  uint *puVar26;
  ulong uVar27;
  long lVar28;
  int *piVar29;
  int iVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined4 *puVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  double *pdVar48;
  double *pdVar49;
  ulong unaff_x23;
  long lVar50;
  ulong uVar51;
  long lVar52;
  undefined8 *puVar53;
  long lVar54;
  long lVar55;
  int iVar56;
  uint uVar57;
  long lVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  int *piStack_3a0;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  ulong uStack_1a8;
  undefined8 *puStack_1a0;
  int *piStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  lStack_c8 = param_2;
  if (param_2 == 0) {
    uStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f58a113,0x72,3,FUN_1099aa768,0);
    puVar10 = (undefined8 *)&UNK_10f58a243;
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58a243,0x1b);
  }
  else {
    if (param_3 != 0) {
      plVar16 = (long *)param_1[4];
      lVar42 = plVar16[3];
      lVar34 = plVar16[4] - lVar42;
      if (lVar34 != 0) {
        lVar31 = 0;
        do {
          puVar26 = (uint *)(lVar42 + lVar31 * 0x20);
          piVar29 = *(int **)(puVar26 + 2);
          piVar5 = *(int **)(puVar26 + 4);
          if (piVar29 != piVar5) {
            uVar4 = *puVar26;
            lVar36 = *plVar16;
            lVar37 = param_1[3];
            pdVar48 = (double *)(param_2 + (long)(int)puVar26[1] * 8);
            uVar3 = uVar4 & 0xfffffffc;
            do {
              puVar26 = (uint *)(lVar36 + (long)*piVar29 * 8);
              uVar57 = *puVar26;
              uVar39 = (ulong)(int)uVar57;
              pdVar25 = (double *)(lVar37 + (long)piVar29[1] * 8);
              lVar40 = param_3 + (long)(int)puVar26[1] * 8;
              if ((uVar39 & 1) == 0) {
LAB_10991ccd4:
                uVar41 = uVar57 & 0xfffffffc;
                if ((uVar57 >> 1 & 1) != 0) {
                  if ((int)uVar4 < 1) {
                    dVar59 = 0.0;
                    dVar60 = 0.0;
                  }
                  else {
                    dVar59 = 0.0;
                    dVar60 = 0.0;
                    pdVar18 = pdVar25 + (int)uVar41;
                    pdVar20 = pdVar48;
                    uVar44 = uVar4;
                    do {
                      dVar59 = dVar59 + *pdVar18 * *pdVar20;
                      dVar60 = dVar60 + pdVar18[1] * *pdVar20;
                      pdVar18 = pdVar18 + uVar39;
                      uVar44 = uVar44 - 1;
                      pdVar20 = pdVar20 + 1;
                    } while (uVar44 != 0);
                  }
                  lVar22 = (long)(int)uVar41 * 8;
                  pdVar18 = (double *)(lVar40 + lVar22);
                  dVar61 = *pdVar18;
                  pdVar20 = (double *)(lVar40 + lVar22);
                  pdVar20[1] = dVar60 + pdVar18[1];
                  *pdVar20 = dVar59 + dVar61;
                }
                if (3 < (int)uVar57) {
                  uVar39 = 0;
                  uVar51 = (ulong)uVar57;
                  pdVar18 = pdVar25;
                  do {
                    pdVar20 = pdVar48;
                    if ((int)uVar4 < 4) {
                      pdVar24 = pdVar25 + uVar39;
                      dVar59 = 0.0;
                      dVar60 = 0.0;
                      dVar61 = 0.0;
                      dVar62 = 0.0;
                    }
                    else {
                      iVar56 = 0;
                      dVar59 = 0.0;
                      dVar60 = 0.0;
                      dVar61 = 0.0;
                      dVar62 = 0.0;
                      pdVar24 = pdVar18;
                      do {
                        pdVar49 = pdVar24 + uVar51 + 2;
                        dVar63 = *pdVar20;
                        dVar64 = pdVar20[1];
                        pdVar1 = pdVar24 + uVar51 * 2 + 2;
                        dVar67 = pdVar20[2];
                        dVar68 = pdVar20[3];
                        pdVar2 = pdVar24 + uVar51 * 3 + 2;
                        dVar59 = dVar59 + dVar63 * *pdVar24 + pdVar49[-2] * dVar64 +
                                 pdVar1[-2] * dVar67 + pdVar2[-2] * dVar68;
                        dVar60 = dVar60 + dVar63 * pdVar24[1] + pdVar49[-1] * dVar64 +
                                 pdVar1[-1] * dVar67 + pdVar2[-1] * dVar68;
                        dVar61 = dVar61 + dVar63 * pdVar24[2] + *pdVar49 * dVar64 + *pdVar1 * dVar67
                                 + *pdVar2 * dVar68;
                        dVar62 = dVar62 + dVar63 * pdVar24[3] + pdVar49[1] * dVar64 +
                                 pdVar1[1] * dVar67 + pdVar2[1] * dVar68;
                        pdVar20 = pdVar20 + 4;
                        iVar56 = iVar56 + 4;
                        pdVar24 = pdVar24 + uVar51 * 4;
                      } while (iVar56 < (int)uVar3);
                    }
                    if (uVar3 != uVar4) {
                      pdVar24 = pdVar24 + 2;
                      uVar57 = uVar3;
                      do {
                        dVar63 = *pdVar20;
                        pdVar20 = pdVar20 + 1;
                        dVar59 = dVar59 + dVar63 * pdVar24[-2];
                        dVar60 = dVar60 + dVar63 * pdVar24[-1];
                        dVar61 = dVar61 + dVar63 * *pdVar24;
                        dVar62 = dVar62 + dVar63 * pdVar24[1];
                        uVar57 = uVar57 + 1;
                        pdVar24 = pdVar24 + uVar51;
                      } while ((int)uVar57 < (int)uVar4);
                    }
                    pdVar20 = (double *)(lVar40 + uVar39 * 8);
                    pdVar20[1] = dVar60 + pdVar20[1];
                    *pdVar20 = dVar59 + *pdVar20;
                    pdVar20[3] = dVar62 + pdVar20[3];
                    pdVar20[2] = dVar61 + pdVar20[2];
                    uVar39 = uVar39 + 4;
                    pdVar18 = pdVar18 + 4;
                  } while (uVar39 < uVar41);
                }
              }
              else {
                lVar22 = (long)(int)(uVar57 - 1);
                if ((int)uVar4 < 1) {
                  dVar59 = 0.0;
                }
                else {
                  dVar59 = 0.0;
                  pdVar18 = pdVar25 + lVar22;
                  pdVar20 = pdVar48;
                  uVar41 = uVar4;
                  do {
                    dVar59 = dVar59 + *pdVar20 * *pdVar18;
                    pdVar18 = pdVar18 + uVar39;
                    uVar41 = uVar41 - 1;
                    pdVar20 = pdVar20 + 1;
                  } while (uVar41 != 0);
                }
                *(double *)(lVar40 + lVar22 * 8) = dVar59 + *(double *)(lVar40 + lVar22 * 8);
                if (uVar57 != 1) goto LAB_10991ccd4;
              }
              piVar29 = piVar29 + 2;
            } while (piVar29 != piVar5);
          }
          lVar31 = lVar31 + 1;
        } while (lVar31 != lVar34 >> 5);
      }
      return param_1;
    }
    uStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f58a113,0x73,3,FUN_1099aa768,0);
    puVar10 = (undefined8 *)&UNK_10f58a25f;
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58a25f,0x1b);
  }
  puVar12 = &uStack_c0;
  func_0x0001099ab7c0();
  puStack_e0 = &stack0xfffffffffffffff0;
  pcStack_d8 = FUN_10991cf48;
  if (puVar10 != (undefined8 *)0x0) {
    uVar51 = (ulong)*(int *)((long)puVar12 + 0xc);
    uVar39 = (ulong)puVar10 >> 3 & 1;
    if ((long)uVar51 <= (long)uVar39) {
      uVar39 = uVar51;
    }
    if (((ulong)puVar10 & 7) != 0) {
      uVar39 = uVar51;
    }
    lVar42 = uVar51 - uVar39;
    puVar15 = puVar12;
    if (0 < (long)uVar39) {
      puVar15 = puVar10;
      _bzero(puVar10,uVar39 << 3);
    }
    lVar34 = (lVar42 - (lVar42 >> 0x3f) & 0xfffffffffffffffeU) + uVar39;
    if (1 < lVar42) {
      puVar15 = puVar10 + uVar39;
      lVar31 = lVar34;
      if (lVar34 <= (long)(uVar39 + 2)) {
        lVar31 = uVar39 + 2;
      }
      _bzero(puVar15,(lVar31 + ~uVar39 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar34 < (long)uVar51) {
      puVar15 = puVar10 + (lVar42 / 2) * 2 + uVar39;
      _bzero(puVar15,(lVar42 % 2) * 8);
    }
    lVar34 = puVar12[4];
    lVar42 = *(long *)(lVar34 + 0x18);
    if (*(long *)(lVar34 + 0x20) != lVar42) {
      uStack_1a8 = 0;
      puStack_1a0 = puVar12;
      do {
        piVar5 = (int *)(lVar42 + uStack_1a8 * 0x20);
        piVar29 = *(int **)(piVar5 + 2);
        piStack_198 = *(int **)(piVar5 + 4);
        if (piVar29 != piStack_198) {
          iVar56 = *piVar5;
          lVar42 = (long)iVar56;
          uVar39 = lVar42 - 1;
          puVar53 = puVar12;
          do {
            lVar31 = puVar53[3];
            lVar36 = (long)piVar29[1];
            piVar5 = (int *)(*(long *)puVar53[4] + (long)*piVar29 * 8);
            iVar30 = *piVar5;
            uVar38 = (ulong)iVar30;
            lVar34 = lVar31 + lVar36 * 8;
            puVar15 = puVar10 + piVar5[1];
            uVar51 = (ulong)puVar15 >> 3 & 1;
            if ((long)uVar38 <= (long)uVar51) {
              uVar51 = uVar38;
            }
            if (((ulong)puVar15 & 7) != 0) {
              uVar51 = uVar38;
            }
            if (0 < (long)uVar51) {
              uVar21 = 0;
              pdVar48 = (double *)(lVar31 + uVar38 * 8 + lVar36 * 8);
              do {
                if (iVar56 == 0) {
                  dVar59 = 0.0;
                }
                else {
                  dVar59 = *(double *)(lVar34 + uVar21 * 8);
                  dVar59 = dVar59 * dVar59;
                  pdVar25 = pdVar48;
                  uVar27 = uVar39;
                  if (1 < iVar56) {
                    do {
                      dVar59 = dVar59 + *pdVar25 * *pdVar25;
                      uVar27 = uVar27 - 1;
                      pdVar25 = pdVar25 + uVar38;
                    } while (uVar27 != 0);
                  }
                }
                puVar15[uVar21] = dVar59 + (double)puVar15[uVar21];
                uVar21 = uVar21 + 1;
                pdVar48 = pdVar48 + 1;
              } while (uVar21 != uVar51);
            }
            lVar37 = uVar38 - uVar51;
            uVar21 = (lVar37 - (lVar37 >> 0x3f) & 0xfffffffffffffffeU) + uVar51;
            if (1 < lVar37) {
              lVar23 = lVar36 * 8;
              lVar43 = uVar38 * 0x20;
              lVar40 = lVar31 + lVar43 + uVar51 * 8;
              lVar22 = lVar31 + (long)iVar30 * 0x18 + uVar51 * 8;
              lVar28 = lVar31 + uVar38 * 0x10 + uVar51 * 8;
              lVar54 = lVar31 + uVar51 * 8 + uVar38 * 8;
              lVar55 = lVar31 + uVar51 * 8 + lVar36 * 8;
              uVar27 = uVar51;
              do {
                if (iVar56 == 0) {
                  dVar59 = 0.0;
                  dVar60 = 0.0;
                }
                else {
                  pdVar48 = (double *)(lVar34 + uVar27 * 8);
                  dVar60 = pdVar48[1];
                  dVar59 = *pdVar48;
                  dVar59 = dVar59 * dVar59;
                  dVar60 = dVar60 * dVar60;
                  if (iVar56 < 5) {
                    lVar47 = 1;
                  }
                  else {
                    lVar33 = 1;
                    lVar46 = lVar40;
                    lVar50 = lVar22;
                    lVar52 = lVar28;
                    lVar58 = lVar54;
                    do {
                      dVar62 = ((double *)(lVar58 + lVar23))[1];
                      dVar61 = *(double *)(lVar58 + lVar23);
                      dVar67 = ((double *)(lVar52 + lVar23))[1];
                      dVar63 = *(double *)(lVar52 + lVar23);
                      dVar68 = ((double *)(lVar50 + lVar23))[1];
                      dVar64 = *(double *)(lVar50 + lVar23);
                      dVar66 = ((double *)(lVar46 + lVar23))[1];
                      dVar65 = *(double *)(lVar46 + lVar23);
                      lVar33 = lVar33 + 4;
                      lVar46 = lVar46 + lVar43;
                      dVar59 = dVar59 + dVar61 * dVar61 + dVar63 * dVar63 +
                                        dVar64 * dVar64 + dVar65 * dVar65;
                      dVar60 = dVar60 + dVar62 * dVar62 + dVar67 * dVar67 +
                                        dVar68 * dVar68 + dVar66 * dVar66;
                      lVar50 = lVar50 + lVar43;
                      lVar52 = lVar52 + lVar43;
                      lVar58 = lVar58 + lVar43;
                      lVar47 = (uVar39 & 0xfffffffffffffffc) + 1;
                    } while (lVar33 < (long)(uVar39 & 0xfffffffffffffffc));
                  }
                  lVar33 = lVar42 - lVar47;
                  if (lVar33 != 0 && lVar47 <= lVar42) {
                    pdVar48 = (double *)(lVar55 + uVar38 * 8 * lVar47);
                    do {
                      dVar59 = dVar59 + *pdVar48 * *pdVar48;
                      dVar60 = dVar60 + pdVar48[1] * pdVar48[1];
                      pdVar48 = pdVar48 + uVar38;
                      lVar33 = lVar33 + -1;
                    } while (lVar33 != 0);
                  }
                }
                dVar61 = (double)puVar15[uVar27];
                (puVar15 + uVar27)[1] = dVar60 + (double)(puVar15 + uVar27)[1];
                puVar15[uVar27] = dVar59 + dVar61;
                uVar27 = uVar27 + 2;
                lVar40 = lVar40 + 0x10;
                lVar22 = lVar22 + 0x10;
                lVar28 = lVar28 + 0x10;
                lVar54 = lVar54 + 0x10;
                lVar55 = lVar55 + 0x10;
              } while ((long)uVar27 < (long)uVar21);
            }
            if ((long)uVar21 < (long)uVar38) {
              pdVar48 = (double *)
                        (lVar31 + (lVar37 / 2) * 0x10 + uVar51 * 8 + uVar38 * 8 + lVar36 * 8);
              do {
                if (iVar56 == 0) {
                  dVar59 = 0.0;
                }
                else {
                  dVar59 = *(double *)(lVar34 + uVar21 * 8);
                  dVar59 = dVar59 * dVar59;
                  pdVar25 = pdVar48;
                  uVar51 = uVar39;
                  if (1 < iVar56) {
                    do {
                      dVar59 = dVar59 + *pdVar25 * *pdVar25;
                      uVar51 = uVar51 - 1;
                      pdVar25 = pdVar25 + uVar38;
                    } while (uVar51 != 0);
                  }
                }
                puVar15[uVar21] = dVar59 + (double)puVar15[uVar21];
                uVar21 = uVar21 + 1;
                pdVar48 = pdVar48 + 1;
              } while (uVar21 != uVar38);
            }
            piVar29 = piVar29 + 2;
            puVar53 = puStack_1a0;
          } while (piVar29 != piStack_198);
          lVar34 = puVar12[4];
        }
        uStack_1a8 = uStack_1a8 + 1;
        lVar42 = *(long *)(lVar34 + 0x18);
      } while (uStack_1a8 < (ulong)(*(long *)(lVar34 + 0x20) - lVar42 >> 5));
    }
    return puVar15;
  }
  uStack_190 = 0;
  uStack_138 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0;
  FUN_1099a9f0c(&uStack_190,&UNK_10f58a113,0x88,3,FUN_1099aa768,0);
  puVar17 = &UNK_10f58a243;
  FUN_1092b4db8(lStack_188 + 0x7540,&UNK_10f58a243,0x1b);
  puVar10 = &uStack_190;
  func_0x0001099ab7c0();
  puVar12 = &uStack_220;
  pcStack_1b8 = FUN_10991d354;
  if (puVar17 != (undefined *)0x0) {
    lVar34 = puVar10[4];
    lVar42 = *(long *)(lVar34 + 0x18);
    if (*(long *)(lVar34 + 0x20) != lVar42) {
      uVar39 = 0;
      do {
        piVar5 = (int *)(lVar42 + uVar39 * 0x20);
        piVar29 = *(int **)(piVar5 + 2);
        piVar6 = *(int **)(piVar5 + 4);
        if (piVar29 != piVar6) {
          iVar56 = *piVar5;
          do {
            piVar5 = (int *)(*(long *)puVar10[4] + (long)*piVar29 * 8);
            iVar30 = *piVar5;
            uVar51 = (ulong)iVar30;
            pdVar48 = (double *)(puVar10[3] + (long)piVar29[1] * 8);
            pdVar25 = (double *)(puVar17 + (long)piVar5[1] * 8);
            if (((ulong)pdVar48 & 7) == 0) {
              if (0 < iVar56) {
                lVar42 = 0;
                uVar38 = (ulong)pdVar48 >> 3 & 1;
                pdVar18 = pdVar48;
                if ((long)uVar51 <= (long)uVar38) {
                  uVar38 = uVar51;
                }
                do {
                  if (0 < (long)uVar38) {
                    pdVar48[lVar42 * uVar51] = pdVar48[lVar42 * uVar51] * *pdVar25;
                  }
                  lVar34 = (uVar51 - uVar38 & 0xfffffffffffffffe) + uVar38;
                  if (1 < (long)(uVar51 - uVar38)) {
                    pdVar20 = pdVar25 + uVar38;
                    uVar21 = uVar38;
                    pdVar24 = pdVar18 + uVar38;
                    do {
                      dVar59 = *pdVar20;
                      pdVar24[1] = pdVar24[1] * pdVar20[1];
                      *pdVar24 = *pdVar24 * dVar59;
                      uVar21 = uVar21 + 2;
                      pdVar20 = pdVar20 + 2;
                      pdVar24 = pdVar24 + 2;
                    } while ((long)uVar21 < lVar34);
                  }
                  for (; lVar34 < (long)uVar51; lVar34 = lVar34 + 1) {
                    pdVar18[lVar34] = pdVar18[lVar34] * pdVar25[lVar34];
                  }
                  uVar21 = uVar38 + (uVar51 & 1);
                  uVar19 = uVar21 & 1;
                  uVar27 = -uVar19;
                  if ((long)uVar21 < 0 == SCARRY8(uVar38,uVar51 & 1)) {
                    uVar27 = uVar19;
                  }
                  uVar38 = uVar51;
                  if ((long)uVar27 <= (long)uVar51) {
                    uVar38 = uVar27;
                  }
                  lVar42 = lVar42 + 1;
                  pdVar18 = pdVar18 + uVar51;
                } while (lVar42 != iVar56);
              }
            }
            else if (0 < iVar56) {
              lVar42 = 0;
              do {
                pdVar18 = pdVar25;
                uVar38 = uVar51;
                pdVar20 = pdVar48;
                if (0 < iVar30) {
                  do {
                    *pdVar20 = *pdVar20 * *pdVar18;
                    uVar38 = uVar38 - 1;
                    pdVar18 = pdVar18 + 1;
                    pdVar20 = pdVar20 + 1;
                  } while (uVar38 != 0);
                }
                lVar42 = lVar42 + 1;
                pdVar48 = pdVar48 + uVar51;
              } while (lVar42 != iVar56);
            }
            piVar29 = piVar29 + 2;
          } while (piVar29 != piVar6);
          lVar34 = puVar10[4];
        }
        uVar39 = uVar39 + 1;
        lVar42 = *(long *)(lVar34 + 0x18);
      } while (uVar39 < (ulong)(*(long *)(lVar34 + 0x20) - lVar42 >> 5));
    }
    return puVar10;
  }
  uStack_220 = 0;
  uStack_1c8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = 0;
  ppuStack_1c0 = &puStack_e0;
  FUN_1099a9f0c(&uStack_220,&UNK_10f58a113,0x99,3,FUN_1099aa768,0);
  plVar16 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_218 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  puVar10 = &uStack_2c0;
  if (plVar16 == (long *)0x0) {
    uStack_2c0 = 0;
    uStack_268 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_270 = 0;
    FUN_1099a9f0c(&uStack_2c0,&UNK_10f58a113,0xaa,3,FUN_1099aa768,0);
    puVar12 = (undefined8 *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_2b8 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    if (puVar12 != (undefined8 *)0x0) {
      lVar34 = puVar10[4];
      lVar42 = *(long *)(lVar34 + 0x18);
      puVar15 = puVar10;
      if (*(long *)(lVar34 + 0x20) != lVar42) {
        uVar39 = 0;
        do {
          piVar29 = (int *)(lVar42 + uVar39 * 0x20);
          piStack_3a0 = *(int **)(piVar29 + 2);
          piVar5 = *(int **)(piVar29 + 4);
          if (piStack_3a0 != piVar5) {
            iVar56 = *piVar29;
            do {
              if (0 < iVar56) {
                iVar30 = 0;
                iVar8 = *(int *)(*(long *)puVar10[4] + (long)*piStack_3a0 * 8);
                do {
                  iVar45 = iVar8;
                  if (0 < iVar8) {
                    do {
                      puVar15 = puVar12;
                      _fprintf(puVar12,&UNK_10f58a2e1);
                      iVar45 = iVar45 + -1;
                    } while (iVar45 != 0);
                  }
                  iVar30 = iVar30 + 1;
                } while (iVar30 != iVar56);
              }
              piStack_3a0 = piStack_3a0 + 2;
            } while (piStack_3a0 != piVar5);
            lVar34 = puVar10[4];
          }
          uVar39 = uVar39 + 1;
          lVar42 = *(long *)(lVar34 + 0x18);
        } while (uVar39 < (ulong)(*(long *)(lVar34 + 0x20) - lVar42 >> 5));
      }
      return puVar15;
    }
    uStack_388 = 0;
    uStack_330 = 0;
    uStack_370 = 0;
    uStack_378 = 0;
    uStack_360 = 0;
    uStack_368 = 0;
    uStack_350 = 0;
    uStack_358 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_338 = 0;
    FUN_1099a9f0c(&uStack_388,&UNK_10f58a113,0xe3,3,FUN_1099aa768,0);
    plVar16 = (long *)&UNK_10f58a2c2;
    FUN_1092b4db8(lStack_380 + 0x7540,&UNK_10f58a2c2,0x1e);
    puVar10 = &uStack_388;
    func_0x0001099ab7c0();
    plVar11 = (long *)0x30;
    __Znwm();
    plVar11[1] = 0;
    *plVar11 = 0;
    plVar11[3] = 0;
    plVar11[2] = 0;
    plVar11[5] = 0;
    plVar11[4] = 0;
    if (plVar11 == plVar16) {
      uVar39 = plVar16[1] - *plVar16 >> 3;
    }
    else {
      lVar42 = plVar16[1] - *plVar16;
      if (lVar42 == 0) {
        plVar11[1] = 0;
        puVar12 = (undefined8 *)0x8;
        __Znwm();
        *puVar12 = 0xffffffffffffffff;
        goto LAB_10991db28;
      }
      uVar39 = lVar42 >> 3;
      if (uVar39 >> 0x3d != 0) {
        func_0x0001099041e8();
        __ZdlPv(lVar42);
        __Unwind_Resume();
        return (undefined8 *)plVar11[3];
      }
      lVar34 = lVar42;
      __Znwm();
      *plVar11 = lVar34;
      plVar11[1] = lVar34;
      plVar11[2] = lVar34 + lVar42;
      _memcpy();
      plVar11[1] = lVar34 + lVar42;
    }
    puVar12 = (undefined8 *)0x8;
    __Znwm();
    *puVar12 = 0xffffffffffffffff;
    if (uVar39 != 0) {
      if (uVar39 >> 0x3b != 0) {
        func_0x0001099041fc();
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10991dc38);
        (*pcVar9)();
      }
      puVar53 = (undefined8 *)(uVar39 << 5);
      puVar13 = puVar53;
      __Znwm();
      puVar15 = puVar13;
      do {
        *puVar15 = 0xffffffffffffffff;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar14 = (undefined8 *)0x8;
        __Znwm();
        puVar15[1] = puVar14;
        *puVar14 = 0xffffffffffffffff;
        puVar15[2] = puVar14 + 1;
        puVar15[3] = puVar14 + 1;
        puVar15 = puVar15 + 4;
        puVar53 = puVar53 + -4;
      } while (puVar53 != (undefined8 *)0x0);
      plVar11[3] = (long)puVar13;
      plVar11[4] = (long)(puVar13 + uVar39 * 4);
      plVar11[5] = (long)(puVar13 + uVar39 * 4);
    }
LAB_10991db28:
    __ZdlPv(puVar12);
    lVar42 = *plVar16;
    if (plVar16[1] != lVar42) {
      lVar34 = 0;
      uVar39 = 0;
      iVar56 = 0;
      do {
        lVar31 = plVar11[3];
        uVar32 = *(undefined8 *)(lVar42 + uVar39 * 8);
        *(undefined8 *)(lVar31 + lVar34) = uVar32;
        puVar35 = (undefined4 *)((undefined8 *)(lVar31 + lVar34))[1];
        *puVar35 = (int)uVar39;
        puVar35[1] = iVar56;
        iVar30 = (int)uVar32;
        iVar56 = iVar56 + iVar30 * iVar30;
        uVar39 = uVar39 + 1;
        lVar42 = *plVar16;
        lVar34 = lVar34 + 0x20;
      } while (uVar39 < (ulong)(plVar16[1] - lVar42 >> 3));
    }
    puVar15 = (undefined8 *)0x28;
    __Znwm();
    puVar12 = puVar15;
    FUN_10991c340();
    *extraout_x8 = (long)puVar15;
    if ((int)*(uint *)(puVar15 + 2) < 1) {
      puVar53 = (undefined8 *)puVar15[3];
    }
    else {
      puVar53 = (undefined8 *)puVar15[3];
      puVar12 = puVar53;
      _bzero(puVar53,(ulong)*(uint *)(puVar15 + 2) << 3);
    }
    puVar7 = (uint *)plVar16[1];
    for (puVar26 = (uint *)*plVar16; puVar26 != puVar7; puVar26 = puVar26 + 2) {
      uVar3 = *puVar26;
      puVar15 = puVar10;
      puVar13 = puVar53;
      uVar39 = (ulong)uVar3;
      if (0 < (int)uVar3) {
        do {
          *puVar13 = *puVar15;
          uVar39 = uVar39 - 1;
          puVar15 = puVar15 + 1;
          puVar13 = puVar13 + (ulong)uVar3 + 1;
        } while (uVar39 != 0);
      }
      puVar10 = puVar10 + (int)uVar3;
      puVar53 = puVar53 + uVar3 * uVar3;
    }
    return puVar12;
  }
  iVar56 = *(int *)(puVar12 + 1);
  iVar30 = *(int *)((long)puVar12 + 0xc);
  lVar42 = (long)iVar30;
  if (iVar56 != 0 && iVar30 != 0) {
    lVar34 = 0;
    if (lVar42 != 0) {
      lVar34 = 0x7fffffffffffffff / lVar42;
    }
    if (iVar56 <= lVar34) goto LAB_10991d5a0;
    goto LAB_10991d5d8;
  }
LAB_10991d5a0:
  unaff_x23 = (long)iVar30 * (long)iVar56;
  puVar10 = puVar12;
  if (plVar16[2] * plVar16[1] - unaff_x23 == 0) goto LAB_10991d600;
  _free(*plVar16);
  if ((long)unaff_x23 < 1) {
LAB_10991d5f8:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10991d5d8:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991d5f8;
    }
    puVar10 = (undefined8 *)(unaff_x23 * 8);
    _malloc();
    if (puVar10 == (undefined8 *)0x0) goto LAB_10991d5d8;
  }
  *plVar16 = (long)puVar10;
LAB_10991d600:
  plVar16[1] = (long)iVar56;
  plVar16[2] = lVar42;
  if (0 < (long)unaff_x23) {
    puVar10 = (undefined8 *)*plVar16;
    _bzero(puVar10,unaff_x23 << 3);
  }
  lVar34 = puVar12[4];
  lVar42 = *(long *)(lVar34 + 0x18);
  if (*(long *)(lVar34 + 0x20) != lVar42) {
    uVar39 = 0;
    do {
      piVar5 = (int *)(lVar42 + uVar39 * 0x20);
      piVar29 = *(int **)(piVar5 + 2);
      piVar6 = *(int **)(piVar5 + 4);
      if (piVar29 != piVar6) {
        iVar56 = *piVar5;
        iVar30 = piVar5[1];
        do {
          piVar5 = (int *)(*(long *)puVar12[4] + (long)*piVar29 * 8);
          iVar8 = *piVar5;
          uVar51 = (ulong)iVar8;
          pdVar48 = (double *)(puVar12[3] + (long)piVar29[1] * 8);
          uVar38 = plVar16[2];
          pdVar25 = (double *)(*plVar16 + (long)piVar5[1] * 8 + uVar38 * (long)iVar30 * 8);
          if (((ulong)pdVar25 & 7) == 0) {
            if (0 < iVar56) {
              lVar42 = 0;
              puVar10 = (undefined8 *)(uVar38 & 1);
              uVar21 = (ulong)pdVar25 >> 3 & 1;
              pdVar18 = pdVar25;
              pdVar20 = pdVar48;
              if ((long)uVar51 <= (long)uVar21) {
                uVar21 = uVar51;
              }
              do {
                if (0 < (long)uVar21) {
                  pdVar25[lVar42 * uVar38] = pdVar48[lVar42 * uVar51] + pdVar25[lVar42 * uVar38];
                }
                lVar34 = (uVar51 - uVar21 & 0xfffffffffffffffe) + uVar21;
                if (1 < (long)(uVar51 - uVar21)) {
                  pdVar24 = pdVar20 + uVar21;
                  uVar27 = uVar21;
                  pdVar49 = pdVar18 + uVar21;
                  do {
                    dVar59 = *pdVar24;
                    pdVar49[1] = pdVar24[1] + pdVar49[1];
                    *pdVar49 = dVar59 + *pdVar49;
                    uVar27 = uVar27 + 2;
                    pdVar24 = pdVar24 + 2;
                    pdVar49 = pdVar49 + 2;
                  } while ((long)uVar27 < lVar34);
                }
                for (; lVar34 < (long)uVar51; lVar34 = lVar34 + 1) {
                  pdVar18[lVar34] = pdVar20[lVar34] + pdVar18[lVar34];
                }
                uVar19 = (ulong)(uVar21 + (long)puVar10) & 1;
                uVar27 = -uVar19;
                if ((long)(uVar21 + (long)puVar10) < 0 == SCARRY8(uVar21,(long)puVar10)) {
                  uVar27 = uVar19;
                }
                uVar21 = uVar51;
                if ((long)uVar27 <= (long)uVar51) {
                  uVar21 = uVar27;
                }
                lVar42 = lVar42 + 1;
                pdVar18 = pdVar18 + uVar38;
                pdVar20 = pdVar20 + uVar51;
              } while (lVar42 != iVar56);
            }
          }
          else if (0 < iVar56) {
            lVar42 = 0;
            puVar10 = (undefined8 *)(uVar51 * 8);
            do {
              pdVar18 = pdVar25;
              pdVar20 = pdVar48;
              uVar21 = uVar51;
              if (0 < iVar8) {
                do {
                  *pdVar18 = *pdVar20 + *pdVar18;
                  uVar21 = uVar21 - 1;
                  pdVar18 = pdVar18 + 1;
                  pdVar20 = pdVar20 + 1;
                } while (uVar21 != 0);
              }
              lVar42 = lVar42 + 1;
              pdVar48 = pdVar48 + uVar51;
              pdVar25 = pdVar25 + uVar38;
            } while (lVar42 != iVar56);
          }
          piVar29 = piVar29 + 2;
        } while (piVar29 != piVar6);
        lVar34 = puVar12[4];
      }
      uVar39 = uVar39 + 1;
      lVar42 = *(long *)(lVar34 + 0x18);
    } while (uVar39 < (ulong)(*(long *)(lVar34 + 0x20) - lVar42 >> 5));
  }
  return puVar10;
}



/* Entry: 10991cf48; end: 10991d353;  */

undefined8 * FUN_10991cf48(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long *plVar15;
  double *pdVar16;
  ulong uVar17;
  ulong uVar18;
  double *pdVar19;
  ulong uVar20;
  long lVar21;
  double *pdVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  double *pdVar27;
  long *extraout_x8;
  uint *puVar28;
  long lVar29;
  int *piVar30;
  int iVar31;
  undefined8 uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined4 *puVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  int iVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  double *pdVar45;
  double *pdVar46;
  ulong unaff_x23;
  long lVar47;
  long lVar48;
  undefined8 *puVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  int *piStack_2d0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar42 = (ulong)*(int *)((long)param_1 + 0xc);
    uVar23 = (ulong)param_2 >> 3 & 1;
    if ((long)uVar42 <= (long)uVar23) {
      uVar23 = uVar42;
    }
    if (((ulong)param_2 & 7) != 0) {
      uVar23 = uVar42;
    }
    lVar39 = uVar42 - uVar23;
    puVar8 = param_1;
    if (0 < (long)uVar23) {
      puVar8 = param_2;
      _bzero(param_2,uVar23 << 3);
    }
    lVar35 = (lVar39 - (lVar39 >> 0x3f) & 0xfffffffffffffffeU) + uVar23;
    if (1 < lVar39) {
      puVar8 = param_2 + uVar23;
      lVar36 = lVar35;
      if (lVar35 <= (long)(uVar23 + 2)) {
        lVar36 = uVar23 + 2;
      }
      _bzero(puVar8,(lVar36 + ~uVar23 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar35 < (long)uVar42) {
      puVar8 = param_2 + (lVar39 / 2) * 2 + uVar23;
      _bzero(puVar8,(lVar39 % 2) * 8);
    }
    lVar35 = param_1[4];
    lVar39 = *(long *)(lVar35 + 0x18);
    if (*(long *)(lVar35 + 0x20) != lVar39) {
      uVar23 = 0;
      do {
        piVar1 = (int *)(lVar39 + uVar23 * 0x20);
        piVar30 = *(int **)(piVar1 + 2);
        piVar2 = *(int **)(piVar1 + 4);
        if (piVar30 != piVar2) {
          iVar33 = *piVar1;
          lVar39 = (long)iVar33;
          uVar42 = lVar39 - 1;
          do {
            lVar36 = param_1[3];
            lVar5 = (long)piVar30[1];
            piVar1 = (int *)(*(long *)param_1[4] + (long)*piVar30 * 8);
            iVar31 = *piVar1;
            uVar17 = (ulong)iVar31;
            lVar35 = lVar36 + lVar5 * 8;
            puVar8 = param_2 + piVar1[1];
            uVar24 = (ulong)puVar8 >> 3 & 1;
            if ((long)uVar17 <= (long)uVar24) {
              uVar24 = uVar17;
            }
            if (((ulong)puVar8 & 7) != 0) {
              uVar24 = uVar17;
            }
            if (0 < (long)uVar24) {
              uVar20 = 0;
              pdVar45 = (double *)(lVar36 + uVar17 * 8 + lVar5 * 8);
              do {
                if (iVar33 == 0) {
                  dVar53 = 0.0;
                }
                else {
                  dVar53 = *(double *)(lVar35 + uVar20 * 8);
                  dVar53 = dVar53 * dVar53;
                  pdVar27 = pdVar45;
                  uVar18 = uVar42;
                  if (1 < iVar33) {
                    do {
                      dVar53 = dVar53 + *pdVar27 * *pdVar27;
                      uVar18 = uVar18 - 1;
                      pdVar27 = pdVar27 + uVar17;
                    } while (uVar18 != 0);
                  }
                }
                puVar8[uVar20] = dVar53 + (double)puVar8[uVar20];
                uVar20 = uVar20 + 1;
                pdVar45 = pdVar45 + 1;
              } while (uVar20 != uVar24);
            }
            lVar25 = uVar17 - uVar24;
            uVar20 = (lVar25 - (lVar25 >> 0x3f) & 0xfffffffffffffffeU) + uVar24;
            if (1 < lVar25) {
              lVar21 = lVar5 * 8;
              lVar40 = uVar17 * 0x20;
              lVar38 = lVar36 + lVar40 + uVar24 * 8;
              lVar26 = lVar36 + (long)iVar31 * 0x18 + uVar24 * 8;
              lVar29 = lVar36 + uVar17 * 0x10 + uVar24 * 8;
              lVar50 = lVar36 + uVar24 * 8 + uVar17 * 8;
              lVar51 = lVar36 + uVar24 * 8 + lVar5 * 8;
              uVar18 = uVar24;
              do {
                if (iVar33 == 0) {
                  dVar53 = 0.0;
                  dVar54 = 0.0;
                }
                else {
                  pdVar45 = (double *)(lVar35 + uVar18 * 8);
                  dVar54 = pdVar45[1];
                  dVar53 = *pdVar45;
                  dVar53 = dVar53 * dVar53;
                  dVar54 = dVar54 * dVar54;
                  if (iVar33 < 5) {
                    lVar44 = 1;
                  }
                  else {
                    lVar34 = 1;
                    lVar43 = lVar38;
                    lVar47 = lVar26;
                    lVar48 = lVar29;
                    lVar52 = lVar50;
                    do {
                      dVar56 = ((double *)(lVar52 + lVar21))[1];
                      dVar55 = *(double *)(lVar52 + lVar21);
                      dVar59 = ((double *)(lVar48 + lVar21))[1];
                      dVar57 = *(double *)(lVar48 + lVar21);
                      dVar60 = ((double *)(lVar47 + lVar21))[1];
                      dVar58 = *(double *)(lVar47 + lVar21);
                      dVar62 = ((double *)(lVar43 + lVar21))[1];
                      dVar61 = *(double *)(lVar43 + lVar21);
                      lVar34 = lVar34 + 4;
                      lVar43 = lVar43 + lVar40;
                      dVar53 = dVar53 + dVar55 * dVar55 + dVar57 * dVar57 +
                                        dVar58 * dVar58 + dVar61 * dVar61;
                      dVar54 = dVar54 + dVar56 * dVar56 + dVar59 * dVar59 +
                                        dVar60 * dVar60 + dVar62 * dVar62;
                      lVar47 = lVar47 + lVar40;
                      lVar48 = lVar48 + lVar40;
                      lVar52 = lVar52 + lVar40;
                      lVar44 = (uVar42 & 0xfffffffffffffffc) + 1;
                    } while (lVar34 < (long)(uVar42 & 0xfffffffffffffffc));
                  }
                  lVar34 = lVar39 - lVar44;
                  if (lVar34 != 0 && lVar44 <= lVar39) {
                    pdVar45 = (double *)(lVar51 + uVar17 * 8 * lVar44);
                    do {
                      dVar53 = dVar53 + *pdVar45 * *pdVar45;
                      dVar54 = dVar54 + pdVar45[1] * pdVar45[1];
                      pdVar45 = pdVar45 + uVar17;
                      lVar34 = lVar34 + -1;
                    } while (lVar34 != 0);
                  }
                }
                dVar55 = (double)puVar8[uVar18];
                (puVar8 + uVar18)[1] = dVar54 + (double)(puVar8 + uVar18)[1];
                puVar8[uVar18] = dVar53 + dVar55;
                uVar18 = uVar18 + 2;
                lVar38 = lVar38 + 0x10;
                lVar26 = lVar26 + 0x10;
                lVar29 = lVar29 + 0x10;
                lVar50 = lVar50 + 0x10;
                lVar51 = lVar51 + 0x10;
              } while ((long)uVar18 < (long)uVar20);
            }
            if ((long)uVar20 < (long)uVar17) {
              pdVar45 = (double *)
                        (lVar36 + (lVar25 / 2) * 0x10 + uVar24 * 8 + uVar17 * 8 + lVar5 * 8);
              do {
                if (iVar33 == 0) {
                  dVar53 = 0.0;
                }
                else {
                  dVar53 = *(double *)(lVar35 + uVar20 * 8);
                  dVar53 = dVar53 * dVar53;
                  pdVar27 = pdVar45;
                  uVar24 = uVar42;
                  if (1 < iVar33) {
                    do {
                      dVar53 = dVar53 + *pdVar27 * *pdVar27;
                      uVar24 = uVar24 - 1;
                      pdVar27 = pdVar27 + uVar17;
                    } while (uVar24 != 0);
                  }
                }
                puVar8[uVar20] = dVar53 + (double)puVar8[uVar20];
                uVar20 = uVar20 + 1;
                pdVar45 = pdVar45 + 1;
              } while (uVar20 != uVar17);
            }
            piVar30 = piVar30 + 2;
          } while (piVar30 != piVar2);
          lVar35 = param_1[4];
        }
        uVar23 = uVar23 + 1;
        lVar39 = *(long *)(lVar35 + 0x18);
      } while (uVar23 < (ulong)(*(long *)(lVar35 + 0x20) - lVar39 >> 5));
    }
    return puVar8;
  }
  uStack_c0 = 0;
  uStack_68 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  FUN_1099a9f0c(&uStack_c0,&UNK_10f58a113,0x88,3,FUN_1099aa768,0);
  puVar14 = &UNK_10f58a243;
  FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58a243,0x1b);
  puVar8 = &uStack_c0;
  func_0x0001099ab7c0();
  puVar10 = &uStack_150;
  pcStack_e8 = FUN_10991d354;
  if (puVar14 != (undefined *)0x0) {
    lVar35 = puVar8[4];
    lVar39 = *(long *)(lVar35 + 0x18);
    if (*(long *)(lVar35 + 0x20) != lVar39) {
      uVar23 = 0;
      do {
        piVar1 = (int *)(lVar39 + uVar23 * 0x20);
        piVar30 = *(int **)(piVar1 + 2);
        piVar2 = *(int **)(piVar1 + 4);
        if (piVar30 != piVar2) {
          iVar33 = *piVar1;
          do {
            piVar1 = (int *)(*(long *)puVar8[4] + (long)*piVar30 * 8);
            iVar31 = *piVar1;
            uVar42 = (ulong)iVar31;
            pdVar45 = (double *)(puVar8[3] + (long)piVar30[1] * 8);
            pdVar27 = (double *)(puVar14 + (long)piVar1[1] * 8);
            if (((ulong)pdVar45 & 7) == 0) {
              if (0 < iVar33) {
                lVar39 = 0;
                uVar24 = (ulong)pdVar45 >> 3 & 1;
                pdVar16 = pdVar45;
                if ((long)uVar42 <= (long)uVar24) {
                  uVar24 = uVar42;
                }
                do {
                  if (0 < (long)uVar24) {
                    pdVar45[lVar39 * uVar42] = pdVar45[lVar39 * uVar42] * *pdVar27;
                  }
                  lVar35 = (uVar42 - uVar24 & 0xfffffffffffffffe) + uVar24;
                  if (1 < (long)(uVar42 - uVar24)) {
                    pdVar19 = pdVar27 + uVar24;
                    uVar17 = uVar24;
                    pdVar22 = pdVar16 + uVar24;
                    do {
                      dVar53 = *pdVar19;
                      pdVar22[1] = pdVar22[1] * pdVar19[1];
                      *pdVar22 = *pdVar22 * dVar53;
                      uVar17 = uVar17 + 2;
                      pdVar19 = pdVar19 + 2;
                      pdVar22 = pdVar22 + 2;
                    } while ((long)uVar17 < lVar35);
                  }
                  for (; lVar35 < (long)uVar42; lVar35 = lVar35 + 1) {
                    pdVar16[lVar35] = pdVar16[lVar35] * pdVar27[lVar35];
                  }
                  uVar17 = uVar24 + (uVar42 & 1);
                  uVar18 = uVar17 & 1;
                  uVar20 = -uVar18;
                  if ((long)uVar17 < 0 == SCARRY8(uVar24,uVar42 & 1)) {
                    uVar20 = uVar18;
                  }
                  uVar24 = uVar42;
                  if ((long)uVar20 <= (long)uVar42) {
                    uVar24 = uVar20;
                  }
                  lVar39 = lVar39 + 1;
                  pdVar16 = pdVar16 + uVar42;
                } while (lVar39 != iVar33);
              }
            }
            else if (0 < iVar33) {
              lVar39 = 0;
              do {
                pdVar16 = pdVar27;
                uVar24 = uVar42;
                pdVar19 = pdVar45;
                if (0 < iVar31) {
                  do {
                    *pdVar19 = *pdVar19 * *pdVar16;
                    uVar24 = uVar24 - 1;
                    pdVar16 = pdVar16 + 1;
                    pdVar19 = pdVar19 + 1;
                  } while (uVar24 != 0);
                }
                lVar39 = lVar39 + 1;
                pdVar45 = pdVar45 + uVar42;
              } while (lVar39 != iVar33);
            }
            piVar30 = piVar30 + 2;
          } while (piVar30 != piVar2);
          lVar35 = puVar8[4];
        }
        uVar23 = uVar23 + 1;
        lVar39 = *(long *)(lVar35 + 0x18);
      } while (uVar23 < (ulong)(*(long *)(lVar35 + 0x20) - lVar39 >> 5));
    }
    return puVar8;
  }
  uStack_150 = 0;
  uStack_f8 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_1099a9f0c(&uStack_150,&UNK_10f58a113,0x99,3,FUN_1099aa768,0);
  plVar15 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_148 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  puVar8 = &uStack_1f0;
  if (plVar15 == (long *)0x0) {
    uStack_1f0 = 0;
    uStack_198 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1a0 = 0;
    FUN_1099a9f0c(&uStack_1f0,&UNK_10f58a113,0xaa,3,FUN_1099aa768,0);
    puVar10 = (undefined8 *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_1e8 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    if (puVar10 != (undefined8 *)0x0) {
      lVar35 = puVar8[4];
      lVar39 = *(long *)(lVar35 + 0x18);
      puVar13 = puVar8;
      if (*(long *)(lVar35 + 0x20) != lVar39) {
        uVar23 = 0;
        do {
          piVar30 = (int *)(lVar39 + uVar23 * 0x20);
          piStack_2d0 = *(int **)(piVar30 + 2);
          piVar1 = *(int **)(piVar30 + 4);
          if (piStack_2d0 != piVar1) {
            iVar33 = *piVar30;
            do {
              if (0 < iVar33) {
                iVar31 = 0;
                iVar4 = *(int *)(*(long *)puVar8[4] + (long)*piStack_2d0 * 8);
                do {
                  iVar41 = iVar4;
                  if (0 < iVar4) {
                    do {
                      puVar13 = puVar10;
                      _fprintf(puVar10,&UNK_10f58a2e1);
                      iVar41 = iVar41 + -1;
                    } while (iVar41 != 0);
                  }
                  iVar31 = iVar31 + 1;
                } while (iVar31 != iVar33);
              }
              piStack_2d0 = piStack_2d0 + 2;
            } while (piStack_2d0 != piVar1);
            lVar35 = puVar8[4];
          }
          uVar23 = uVar23 + 1;
          lVar39 = *(long *)(lVar35 + 0x18);
        } while (uVar23 < (ulong)(*(long *)(lVar35 + 0x20) - lVar39 >> 5));
      }
      return puVar13;
    }
    uStack_2b8 = 0;
    uStack_260 = 0;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uStack_268 = 0;
    FUN_1099a9f0c(&uStack_2b8,&UNK_10f58a113,0xe3,3,FUN_1099aa768,0);
    plVar15 = (long *)&UNK_10f58a2c2;
    FUN_1092b4db8(lStack_2b0 + 0x7540,&UNK_10f58a2c2,0x1e);
    puVar8 = &uStack_2b8;
    func_0x0001099ab7c0();
    plVar9 = (long *)0x30;
    __Znwm();
    plVar9[1] = 0;
    *plVar9 = 0;
    plVar9[3] = 0;
    plVar9[2] = 0;
    plVar9[5] = 0;
    plVar9[4] = 0;
    if (plVar9 == plVar15) {
      uVar23 = plVar15[1] - *plVar15 >> 3;
    }
    else {
      lVar39 = plVar15[1] - *plVar15;
      if (lVar39 == 0) {
        plVar9[1] = 0;
        puVar10 = (undefined8 *)0x8;
        __Znwm();
        *puVar10 = 0xffffffffffffffff;
        goto LAB_10991db28;
      }
      uVar23 = lVar39 >> 3;
      if (uVar23 >> 0x3d != 0) {
        func_0x0001099041e8();
        __ZdlPv(lVar39);
        __Unwind_Resume();
        return (undefined8 *)plVar9[3];
      }
      lVar35 = lVar39;
      __Znwm();
      *plVar9 = lVar35;
      plVar9[1] = lVar35;
      plVar9[2] = lVar35 + lVar39;
      _memcpy();
      plVar9[1] = lVar35 + lVar39;
    }
    puVar10 = (undefined8 *)0x8;
    __Znwm();
    *puVar10 = 0xffffffffffffffff;
    if (uVar23 != 0) {
      if (uVar23 >> 0x3b != 0) {
        func_0x0001099041fc();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10991dc38);
        (*pcVar7)();
      }
      puVar49 = (undefined8 *)(uVar23 << 5);
      puVar11 = puVar49;
      __Znwm();
      puVar13 = puVar11;
      do {
        *puVar13 = 0xffffffffffffffff;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar12 = (undefined8 *)0x8;
        __Znwm();
        puVar13[1] = puVar12;
        *puVar12 = 0xffffffffffffffff;
        puVar13[2] = puVar12 + 1;
        puVar13[3] = puVar12 + 1;
        puVar13 = puVar13 + 4;
        puVar49 = puVar49 + -4;
      } while (puVar49 != (undefined8 *)0x0);
      plVar9[3] = (long)puVar11;
      plVar9[4] = (long)(puVar11 + uVar23 * 4);
      plVar9[5] = (long)(puVar11 + uVar23 * 4);
    }
LAB_10991db28:
    __ZdlPv(puVar10);
    lVar39 = *plVar15;
    if (plVar15[1] != lVar39) {
      lVar35 = 0;
      uVar23 = 0;
      iVar33 = 0;
      do {
        lVar36 = plVar9[3];
        uVar32 = *(undefined8 *)(lVar39 + uVar23 * 8);
        *(undefined8 *)(lVar36 + lVar35) = uVar32;
        puVar37 = (undefined4 *)((undefined8 *)(lVar36 + lVar35))[1];
        *puVar37 = (int)uVar23;
        puVar37[1] = iVar33;
        iVar31 = (int)uVar32;
        iVar33 = iVar33 + iVar31 * iVar31;
        uVar23 = uVar23 + 1;
        lVar39 = *plVar15;
        lVar35 = lVar35 + 0x20;
      } while (uVar23 < (ulong)(plVar15[1] - lVar39 >> 3));
    }
    puVar13 = (undefined8 *)0x28;
    __Znwm();
    puVar10 = puVar13;
    FUN_10991c340();
    *extraout_x8 = (long)puVar13;
    if ((int)*(uint *)(puVar13 + 2) < 1) {
      puVar49 = (undefined8 *)puVar13[3];
    }
    else {
      puVar49 = (undefined8 *)puVar13[3];
      puVar10 = puVar49;
      _bzero(puVar49,(ulong)*(uint *)(puVar13 + 2) << 3);
    }
    puVar3 = (uint *)plVar15[1];
    for (puVar28 = (uint *)*plVar15; puVar28 != puVar3; puVar28 = puVar28 + 2) {
      uVar6 = *puVar28;
      puVar13 = puVar8;
      puVar11 = puVar49;
      uVar23 = (ulong)uVar6;
      if (0 < (int)uVar6) {
        do {
          *puVar11 = *puVar13;
          uVar23 = uVar23 - 1;
          puVar13 = puVar13 + 1;
          puVar11 = puVar11 + (ulong)uVar6 + 1;
        } while (uVar23 != 0);
      }
      puVar8 = puVar8 + (int)uVar6;
      puVar49 = puVar49 + uVar6 * uVar6;
    }
    return puVar10;
  }
  iVar33 = *(int *)(puVar10 + 1);
  iVar31 = *(int *)((long)puVar10 + 0xc);
  lVar39 = (long)iVar31;
  if (iVar33 != 0 && iVar31 != 0) {
    lVar35 = 0;
    if (lVar39 != 0) {
      lVar35 = 0x7fffffffffffffff / lVar39;
    }
    if (iVar33 <= lVar35) goto LAB_10991d5a0;
    goto LAB_10991d5d8;
  }
LAB_10991d5a0:
  unaff_x23 = (long)iVar31 * (long)iVar33;
  puVar8 = puVar10;
  if (plVar15[2] * plVar15[1] - unaff_x23 == 0) goto LAB_10991d600;
  _free(*plVar15);
  if ((long)unaff_x23 < 1) {
LAB_10991d5f8:
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10991d5d8:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991d5f8;
    }
    puVar8 = (undefined8 *)(unaff_x23 * 8);
    _malloc();
    if (puVar8 == (undefined8 *)0x0) goto LAB_10991d5d8;
  }
  *plVar15 = (long)puVar8;
LAB_10991d600:
  plVar15[1] = (long)iVar33;
  plVar15[2] = lVar39;
  if (0 < (long)unaff_x23) {
    puVar8 = (undefined8 *)*plVar15;
    _bzero(puVar8,unaff_x23 << 3);
  }
  lVar35 = puVar10[4];
  lVar39 = *(long *)(lVar35 + 0x18);
  if (*(long *)(lVar35 + 0x20) != lVar39) {
    uVar23 = 0;
    do {
      piVar1 = (int *)(lVar39 + uVar23 * 0x20);
      piVar30 = *(int **)(piVar1 + 2);
      piVar2 = *(int **)(piVar1 + 4);
      if (piVar30 != piVar2) {
        iVar33 = *piVar1;
        iVar31 = piVar1[1];
        do {
          piVar1 = (int *)(*(long *)puVar10[4] + (long)*piVar30 * 8);
          iVar4 = *piVar1;
          uVar42 = (ulong)iVar4;
          pdVar45 = (double *)(puVar10[3] + (long)piVar30[1] * 8);
          uVar24 = plVar15[2];
          pdVar27 = (double *)(*plVar15 + (long)piVar1[1] * 8 + uVar24 * (long)iVar31 * 8);
          if (((ulong)pdVar27 & 7) == 0) {
            if (0 < iVar33) {
              lVar39 = 0;
              puVar8 = (undefined8 *)(uVar24 & 1);
              uVar17 = (ulong)pdVar27 >> 3 & 1;
              pdVar16 = pdVar27;
              pdVar19 = pdVar45;
              if ((long)uVar42 <= (long)uVar17) {
                uVar17 = uVar42;
              }
              do {
                if (0 < (long)uVar17) {
                  pdVar27[lVar39 * uVar24] = pdVar45[lVar39 * uVar42] + pdVar27[lVar39 * uVar24];
                }
                lVar35 = (uVar42 - uVar17 & 0xfffffffffffffffe) + uVar17;
                if (1 < (long)(uVar42 - uVar17)) {
                  pdVar22 = pdVar19 + uVar17;
                  uVar20 = uVar17;
                  pdVar46 = pdVar16 + uVar17;
                  do {
                    dVar53 = *pdVar22;
                    pdVar46[1] = pdVar22[1] + pdVar46[1];
                    *pdVar46 = dVar53 + *pdVar46;
                    uVar20 = uVar20 + 2;
                    pdVar22 = pdVar22 + 2;
                    pdVar46 = pdVar46 + 2;
                  } while ((long)uVar20 < lVar35);
                }
                for (; lVar35 < (long)uVar42; lVar35 = lVar35 + 1) {
                  pdVar16[lVar35] = pdVar19[lVar35] + pdVar16[lVar35];
                }
                uVar18 = (ulong)(uVar17 + (long)puVar8) & 1;
                uVar20 = -uVar18;
                if ((long)(uVar17 + (long)puVar8) < 0 == SCARRY8(uVar17,(long)puVar8)) {
                  uVar20 = uVar18;
                }
                uVar17 = uVar42;
                if ((long)uVar20 <= (long)uVar42) {
                  uVar17 = uVar20;
                }
                lVar39 = lVar39 + 1;
                pdVar16 = pdVar16 + uVar24;
                pdVar19 = pdVar19 + uVar42;
              } while (lVar39 != iVar33);
            }
          }
          else if (0 < iVar33) {
            lVar39 = 0;
            puVar8 = (undefined8 *)(uVar42 * 8);
            do {
              pdVar16 = pdVar27;
              pdVar19 = pdVar45;
              uVar17 = uVar42;
              if (0 < iVar4) {
                do {
                  *pdVar16 = *pdVar19 + *pdVar16;
                  uVar17 = uVar17 - 1;
                  pdVar16 = pdVar16 + 1;
                  pdVar19 = pdVar19 + 1;
                } while (uVar17 != 0);
              }
              lVar39 = lVar39 + 1;
              pdVar45 = pdVar45 + uVar42;
              pdVar27 = pdVar27 + uVar24;
            } while (lVar39 != iVar33);
          }
          piVar30 = piVar30 + 2;
        } while (piVar30 != piVar2);
        lVar35 = puVar10[4];
      }
      uVar23 = uVar23 + 1;
      lVar39 = *(long *)(lVar35 + 0x18);
    } while (uVar23 < (ulong)(*(long *)(lVar35 + 0x20) - lVar39 >> 5));
  }
  return puVar8;
}



/* Entry: 10991d354; end: 10991d553;  */

undefined8 * FUN_10991d354(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  double *pdVar15;
  ulong uVar16;
  ulong uVar17;
  double *pdVar18;
  double *pdVar19;
  ulong uVar20;
  long *extraout_x8;
  uint *puVar21;
  int *piVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  double *pdVar29;
  long lVar30;
  double *pdVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  double *pdVar35;
  ulong unaff_x23;
  undefined8 *puVar36;
  double dVar37;
  int *piStack_1f0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puVar8 = &uStack_70;
  if (param_2 != 0) {
    lVar26 = param_1[4];
    lVar30 = *(long *)(lVar26 + 0x18);
    if (*(long *)(lVar26 + 0x20) != lVar30) {
      uVar20 = 0;
      do {
        piVar1 = (int *)(lVar30 + uVar20 * 0x20);
        piVar22 = *(int **)(piVar1 + 2);
        piVar2 = *(int **)(piVar1 + 4);
        if (piVar22 != piVar2) {
          iVar25 = *piVar1;
          do {
            piVar1 = (int *)(*(long *)param_1[4] + (long)*piVar22 * 8);
            iVar23 = *piVar1;
            uVar5 = (ulong)iVar23;
            pdVar29 = (double *)(param_1[3] + (long)piVar22[1] * 8);
            pdVar31 = (double *)(param_2 + (long)piVar1[1] * 8);
            if (((ulong)pdVar29 & 7) == 0) {
              if (0 < iVar25) {
                lVar30 = 0;
                uVar32 = (ulong)pdVar29 >> 3 & 1;
                pdVar15 = pdVar29;
                if ((long)uVar5 <= (long)uVar32) {
                  uVar32 = uVar5;
                }
                do {
                  if (0 < (long)uVar32) {
                    pdVar29[lVar30 * uVar5] = pdVar29[lVar30 * uVar5] * *pdVar31;
                  }
                  lVar26 = (uVar5 - uVar32 & 0xfffffffffffffffe) + uVar32;
                  if (1 < (long)(uVar5 - uVar32)) {
                    pdVar18 = pdVar31 + uVar32;
                    uVar16 = uVar32;
                    pdVar19 = pdVar15 + uVar32;
                    do {
                      dVar37 = *pdVar18;
                      pdVar19[1] = pdVar19[1] * pdVar18[1];
                      *pdVar19 = *pdVar19 * dVar37;
                      uVar16 = uVar16 + 2;
                      pdVar18 = pdVar18 + 2;
                      pdVar19 = pdVar19 + 2;
                    } while ((long)uVar16 < lVar26);
                  }
                  for (; lVar26 < (long)uVar5; lVar26 = lVar26 + 1) {
                    pdVar15[lVar26] = pdVar15[lVar26] * pdVar31[lVar26];
                  }
                  uVar16 = uVar32 + (uVar5 & 1);
                  uVar17 = uVar16 & 1;
                  uVar33 = -uVar17;
                  if ((long)uVar16 < 0 == SCARRY8(uVar32,uVar5 & 1)) {
                    uVar33 = uVar17;
                  }
                  uVar32 = uVar5;
                  if ((long)uVar33 <= (long)uVar5) {
                    uVar32 = uVar33;
                  }
                  lVar30 = lVar30 + 1;
                  pdVar15 = pdVar15 + uVar5;
                } while (lVar30 != iVar25);
              }
            }
            else if (0 < iVar25) {
              lVar30 = 0;
              do {
                pdVar15 = pdVar31;
                uVar32 = uVar5;
                pdVar18 = pdVar29;
                if (0 < iVar23) {
                  do {
                    *pdVar18 = *pdVar18 * *pdVar15;
                    uVar32 = uVar32 - 1;
                    pdVar15 = pdVar15 + 1;
                    pdVar18 = pdVar18 + 1;
                  } while (uVar32 != 0);
                }
                lVar30 = lVar30 + 1;
                pdVar29 = pdVar29 + uVar5;
              } while (lVar30 != iVar25);
            }
            piVar22 = piVar22 + 2;
          } while (piVar22 != piVar2);
          lVar26 = param_1[4];
        }
        uVar20 = uVar20 + 1;
        lVar30 = *(long *)(lVar26 + 0x18);
      } while (uVar20 < (ulong)(*(long *)(lVar26 + 0x20) - lVar30 >> 5));
    }
    return param_1;
  }
  uStack_70 = 0;
  uStack_18 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  FUN_1099a9f0c(&uStack_70,&UNK_10f58a113,0x99,3,FUN_1099aa768,0);
  plVar14 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_68 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  puVar9 = &uStack_110;
  if (plVar14 == (long *)0x0) {
    uStack_110 = 0;
    uStack_b8 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0;
    FUN_1099a9f0c(&uStack_110,&UNK_10f58a113,0xaa,3,FUN_1099aa768,0);
    puVar8 = (undefined8 *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_108 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    if (puVar8 != (undefined8 *)0x0) {
      lVar26 = puVar9[4];
      lVar30 = *(long *)(lVar26 + 0x18);
      puVar13 = puVar9;
      if (*(long *)(lVar26 + 0x20) != lVar30) {
        uVar20 = 0;
        do {
          piVar22 = (int *)(lVar30 + uVar20 * 0x20);
          piStack_1f0 = *(int **)(piVar22 + 2);
          piVar1 = *(int **)(piVar22 + 4);
          if (piStack_1f0 != piVar1) {
            iVar25 = *piVar22;
            do {
              if (0 < iVar25) {
                iVar23 = 0;
                iVar4 = *(int *)(*(long *)puVar9[4] + (long)*piStack_1f0 * 8);
                do {
                  iVar34 = iVar4;
                  if (0 < iVar4) {
                    do {
                      puVar13 = puVar8;
                      _fprintf(puVar8,&UNK_10f58a2e1);
                      iVar34 = iVar34 + -1;
                    } while (iVar34 != 0);
                  }
                  iVar23 = iVar23 + 1;
                } while (iVar23 != iVar25);
              }
              piStack_1f0 = piStack_1f0 + 2;
            } while (piStack_1f0 != piVar1);
            lVar26 = puVar9[4];
          }
          uVar20 = uVar20 + 1;
          lVar30 = *(long *)(lVar26 + 0x18);
        } while (uVar20 < (ulong)(*(long *)(lVar26 + 0x20) - lVar30 >> 5));
      }
      return puVar13;
    }
    uStack_1d8 = 0;
    uStack_180 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_188 = 0;
    FUN_1099a9f0c(&uStack_1d8,&UNK_10f58a113,0xe3,3,FUN_1099aa768,0);
    plVar14 = (long *)&UNK_10f58a2c2;
    FUN_1092b4db8(lStack_1d0 + 0x7540,&UNK_10f58a2c2,0x1e);
    puVar8 = &uStack_1d8;
    func_0x0001099ab7c0();
    plVar10 = (long *)0x30;
    __Znwm();
    plVar10[1] = 0;
    *plVar10 = 0;
    plVar10[3] = 0;
    plVar10[2] = 0;
    plVar10[5] = 0;
    plVar10[4] = 0;
    if (plVar10 == plVar14) {
      uVar20 = plVar14[1] - *plVar14 >> 3;
    }
    else {
      lVar30 = plVar14[1] - *plVar14;
      if (lVar30 == 0) {
        plVar10[1] = 0;
        puVar9 = (undefined8 *)0x8;
        __Znwm();
        *puVar9 = 0xffffffffffffffff;
        goto LAB_10991db28;
      }
      uVar20 = lVar30 >> 3;
      if (uVar20 >> 0x3d != 0) {
        func_0x0001099041e8();
        __ZdlPv(lVar30);
        __Unwind_Resume();
        return (undefined8 *)plVar10[3];
      }
      lVar26 = lVar30;
      __Znwm();
      *plVar10 = lVar26;
      plVar10[1] = lVar26;
      plVar10[2] = lVar26 + lVar30;
      _memcpy();
      plVar10[1] = lVar26 + lVar30;
    }
    puVar9 = (undefined8 *)0x8;
    __Znwm();
    *puVar9 = 0xffffffffffffffff;
    if (uVar20 != 0) {
      if (uVar20 >> 0x3b != 0) {
        func_0x0001099041fc();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10991dc38);
        (*pcVar7)();
      }
      puVar36 = (undefined8 *)(uVar20 << 5);
      puVar11 = puVar36;
      __Znwm();
      puVar13 = puVar11;
      do {
        *puVar13 = 0xffffffffffffffff;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar12 = (undefined8 *)0x8;
        __Znwm();
        puVar13[1] = puVar12;
        *puVar12 = 0xffffffffffffffff;
        puVar13[2] = puVar12 + 1;
        puVar13[3] = puVar12 + 1;
        puVar13 = puVar13 + 4;
        puVar36 = puVar36 + -4;
      } while (puVar36 != (undefined8 *)0x0);
      plVar10[3] = (long)puVar11;
      plVar10[4] = (long)(puVar11 + uVar20 * 4);
      plVar10[5] = (long)(puVar11 + uVar20 * 4);
    }
LAB_10991db28:
    __ZdlPv(puVar9);
    lVar30 = *plVar14;
    if (plVar14[1] != lVar30) {
      lVar26 = 0;
      uVar20 = 0;
      iVar25 = 0;
      do {
        lVar27 = plVar10[3];
        uVar24 = *(undefined8 *)(lVar30 + uVar20 * 8);
        *(undefined8 *)(lVar27 + lVar26) = uVar24;
        puVar28 = (undefined4 *)((undefined8 *)(lVar27 + lVar26))[1];
        *puVar28 = (int)uVar20;
        puVar28[1] = iVar25;
        iVar23 = (int)uVar24;
        iVar25 = iVar25 + iVar23 * iVar23;
        uVar20 = uVar20 + 1;
        lVar30 = *plVar14;
        lVar26 = lVar26 + 0x20;
      } while (uVar20 < (ulong)(plVar14[1] - lVar30 >> 3));
    }
    puVar13 = (undefined8 *)0x28;
    __Znwm();
    puVar9 = puVar13;
    FUN_10991c340();
    *extraout_x8 = (long)puVar13;
    if ((int)*(uint *)(puVar13 + 2) < 1) {
      puVar36 = (undefined8 *)puVar13[3];
    }
    else {
      puVar36 = (undefined8 *)puVar13[3];
      puVar9 = puVar36;
      _bzero(puVar36,(ulong)*(uint *)(puVar13 + 2) << 3);
    }
    puVar3 = (uint *)plVar14[1];
    for (puVar21 = (uint *)*plVar14; puVar21 != puVar3; puVar21 = puVar21 + 2) {
      uVar6 = *puVar21;
      puVar13 = puVar8;
      puVar11 = puVar36;
      uVar20 = (ulong)uVar6;
      if (0 < (int)uVar6) {
        do {
          *puVar11 = *puVar13;
          uVar20 = uVar20 - 1;
          puVar13 = puVar13 + 1;
          puVar11 = puVar11 + (ulong)uVar6 + 1;
        } while (uVar20 != 0);
      }
      puVar8 = puVar8 + (int)uVar6;
      puVar36 = puVar36 + uVar6 * uVar6;
    }
    return puVar9;
  }
  iVar25 = *(int *)(puVar8 + 1);
  iVar23 = *(int *)((long)puVar8 + 0xc);
  lVar30 = (long)iVar23;
  if (iVar25 != 0 && iVar23 != 0) {
    lVar26 = 0;
    if (lVar30 != 0) {
      lVar26 = 0x7fffffffffffffff / lVar30;
    }
    if (iVar25 <= lVar26) goto LAB_10991d5a0;
    goto LAB_10991d5d8;
  }
LAB_10991d5a0:
  unaff_x23 = (long)iVar23 * (long)iVar25;
  puVar9 = puVar8;
  if (plVar14[2] * plVar14[1] - unaff_x23 == 0) goto LAB_10991d600;
  _free(*plVar14);
  if ((long)unaff_x23 < 1) {
LAB_10991d5f8:
    puVar9 = (undefined8 *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10991d5d8:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991d5f8;
    }
    puVar9 = (undefined8 *)(unaff_x23 * 8);
    _malloc();
    if (puVar9 == (undefined8 *)0x0) goto LAB_10991d5d8;
  }
  *plVar14 = (long)puVar9;
LAB_10991d600:
  plVar14[1] = (long)iVar25;
  plVar14[2] = lVar30;
  if (0 < (long)unaff_x23) {
    puVar9 = (undefined8 *)*plVar14;
    _bzero(puVar9,unaff_x23 << 3);
  }
  lVar26 = puVar8[4];
  lVar30 = *(long *)(lVar26 + 0x18);
  if (*(long *)(lVar26 + 0x20) != lVar30) {
    uVar20 = 0;
    do {
      piVar1 = (int *)(lVar30 + uVar20 * 0x20);
      piVar22 = *(int **)(piVar1 + 2);
      piVar2 = *(int **)(piVar1 + 4);
      if (piVar22 != piVar2) {
        iVar25 = *piVar1;
        iVar23 = piVar1[1];
        do {
          piVar1 = (int *)(*(long *)puVar8[4] + (long)*piVar22 * 8);
          iVar4 = *piVar1;
          uVar5 = (ulong)iVar4;
          pdVar29 = (double *)(puVar8[3] + (long)piVar22[1] * 8);
          uVar32 = plVar14[2];
          pdVar31 = (double *)(*plVar14 + (long)piVar1[1] * 8 + uVar32 * (long)iVar23 * 8);
          if (((ulong)pdVar31 & 7) == 0) {
            if (0 < iVar25) {
              lVar30 = 0;
              puVar9 = (undefined8 *)(uVar32 & 1);
              uVar16 = (ulong)pdVar31 >> 3 & 1;
              pdVar15 = pdVar31;
              pdVar18 = pdVar29;
              if ((long)uVar5 <= (long)uVar16) {
                uVar16 = uVar5;
              }
              do {
                if (0 < (long)uVar16) {
                  pdVar31[lVar30 * uVar32] = pdVar29[lVar30 * uVar5] + pdVar31[lVar30 * uVar32];
                }
                lVar26 = (uVar5 - uVar16 & 0xfffffffffffffffe) + uVar16;
                if (1 < (long)(uVar5 - uVar16)) {
                  pdVar19 = pdVar18 + uVar16;
                  uVar33 = uVar16;
                  pdVar35 = pdVar15 + uVar16;
                  do {
                    dVar37 = *pdVar19;
                    pdVar35[1] = pdVar19[1] + pdVar35[1];
                    *pdVar35 = dVar37 + *pdVar35;
                    uVar33 = uVar33 + 2;
                    pdVar19 = pdVar19 + 2;
                    pdVar35 = pdVar35 + 2;
                  } while ((long)uVar33 < lVar26);
                }
                for (; lVar26 < (long)uVar5; lVar26 = lVar26 + 1) {
                  pdVar15[lVar26] = pdVar18[lVar26] + pdVar15[lVar26];
                }
                uVar17 = (ulong)(uVar16 + (long)puVar9) & 1;
                uVar33 = -uVar17;
                if ((long)(uVar16 + (long)puVar9) < 0 == SCARRY8(uVar16,(long)puVar9)) {
                  uVar33 = uVar17;
                }
                uVar16 = uVar5;
                if ((long)uVar33 <= (long)uVar5) {
                  uVar16 = uVar33;
                }
                lVar30 = lVar30 + 1;
                pdVar15 = pdVar15 + uVar32;
                pdVar18 = pdVar18 + uVar5;
              } while (lVar30 != iVar25);
            }
          }
          else if (0 < iVar25) {
            lVar30 = 0;
            puVar9 = (undefined8 *)(uVar5 * 8);
            do {
              pdVar15 = pdVar31;
              pdVar18 = pdVar29;
              uVar16 = uVar5;
              if (0 < iVar4) {
                do {
                  *pdVar15 = *pdVar18 + *pdVar15;
                  uVar16 = uVar16 - 1;
                  pdVar15 = pdVar15 + 1;
                  pdVar18 = pdVar18 + 1;
                } while (uVar16 != 0);
              }
              lVar30 = lVar30 + 1;
              pdVar29 = pdVar29 + uVar5;
              pdVar31 = pdVar31 + uVar32;
            } while (lVar30 != iVar25);
          }
          piVar22 = piVar22 + 2;
        } while (piVar22 != piVar2);
        lVar26 = puVar8[4];
      }
      uVar20 = uVar20 + 1;
      lVar30 = *(long *)(lVar26 + 0x18);
    } while (uVar20 < (ulong)(*(long *)(lVar26 + 0x20) - lVar30 >> 5));
  }
  return puVar9;
}



/* Entry: 10991d554; end: 10991d83b;  */

undefined8 * FUN_10991d554(undefined8 *param_1,ulong *param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double *pdVar14;
  ulong uVar15;
  long *plVar16;
  double *pdVar17;
  ulong uVar18;
  double *pdVar19;
  long *extraout_x8;
  uint *puVar20;
  int *piVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  double *pdVar28;
  double *pdVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  double *pdVar35;
  ulong unaff_x23;
  undefined8 *puVar36;
  double dVar37;
  int *piStack_180;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = &uStack_a0;
  if (param_2 == (ulong *)0x0) {
    uStack_a0 = 0;
    uStack_48 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    FUN_1099a9f0c(&uStack_a0,&UNK_10f58a113,0xaa,3,FUN_1099aa768,0);
    puVar10 = (undefined8 *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_98 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    if (puVar10 != (undefined8 *)0x0) {
      lVar25 = puVar8[4];
      lVar31 = *(long *)(lVar25 + 0x18);
      puVar13 = puVar8;
      if (*(long *)(lVar25 + 0x20) != lVar31) {
        uVar34 = 0;
        do {
          piVar21 = (int *)(lVar31 + uVar34 * 0x20);
          piStack_180 = *(int **)(piVar21 + 2);
          piVar1 = *(int **)(piVar21 + 4);
          if (piStack_180 != piVar1) {
            iVar24 = *piVar21;
            do {
              if (0 < iVar24) {
                iVar22 = 0;
                iVar4 = *(int *)(*(long *)puVar8[4] + (long)*piStack_180 * 8);
                do {
                  iVar33 = iVar4;
                  if (0 < iVar4) {
                    do {
                      puVar13 = puVar10;
                      _fprintf(puVar10,&UNK_10f58a2e1);
                      iVar33 = iVar33 + -1;
                    } while (iVar33 != 0);
                  }
                  iVar22 = iVar22 + 1;
                } while (iVar22 != iVar24);
              }
              piStack_180 = piStack_180 + 2;
            } while (piStack_180 != piVar1);
            lVar25 = puVar8[4];
          }
          uVar34 = uVar34 + 1;
          lVar31 = *(long *)(lVar25 + 0x18);
        } while (uVar34 < (ulong)(*(long *)(lVar25 + 0x20) - lVar31 >> 5));
      }
      return puVar13;
    }
    uStack_168 = 0;
    uStack_110 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_118 = 0;
    FUN_1099a9f0c(&uStack_168,&UNK_10f58a113,0xe3,3,FUN_1099aa768,0);
    plVar16 = (long *)&UNK_10f58a2c2;
    FUN_1092b4db8(lStack_160 + 0x7540,&UNK_10f58a2c2,0x1e);
    puVar8 = &uStack_168;
    func_0x0001099ab7c0();
    plVar9 = (long *)0x30;
    __Znwm();
    plVar9[1] = 0;
    *plVar9 = 0;
    plVar9[3] = 0;
    plVar9[2] = 0;
    plVar9[5] = 0;
    plVar9[4] = 0;
    if (plVar9 == plVar16) {
      uVar34 = plVar16[1] - *plVar16 >> 3;
    }
    else {
      lVar31 = plVar16[1] - *plVar16;
      if (lVar31 == 0) {
        plVar9[1] = 0;
        puVar10 = (undefined8 *)0x8;
        __Znwm();
        *puVar10 = 0xffffffffffffffff;
        goto LAB_10991db28;
      }
      uVar34 = lVar31 >> 3;
      if (uVar34 >> 0x3d != 0) {
        func_0x0001099041e8();
        __ZdlPv(lVar31);
        __Unwind_Resume();
        return (undefined8 *)plVar9[3];
      }
      lVar25 = lVar31;
      __Znwm();
      *plVar9 = lVar25;
      plVar9[1] = lVar25;
      plVar9[2] = lVar25 + lVar31;
      _memcpy();
      plVar9[1] = lVar25 + lVar31;
    }
    puVar10 = (undefined8 *)0x8;
    __Znwm();
    *puVar10 = 0xffffffffffffffff;
    if (uVar34 != 0) {
      if (uVar34 >> 0x3b != 0) {
        func_0x0001099041fc();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10991dc38);
        (*pcVar7)();
      }
      puVar36 = (undefined8 *)(uVar34 << 5);
      puVar11 = puVar36;
      __Znwm();
      puVar13 = puVar11;
      do {
        *puVar13 = 0xffffffffffffffff;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar12 = (undefined8 *)0x8;
        __Znwm();
        puVar13[1] = puVar12;
        *puVar12 = 0xffffffffffffffff;
        puVar13[2] = puVar12 + 1;
        puVar13[3] = puVar12 + 1;
        puVar13 = puVar13 + 4;
        puVar36 = puVar36 + -4;
      } while (puVar36 != (undefined8 *)0x0);
      plVar9[3] = (long)puVar11;
      plVar9[4] = (long)(puVar11 + uVar34 * 4);
      plVar9[5] = (long)(puVar11 + uVar34 * 4);
    }
LAB_10991db28:
    __ZdlPv(puVar10);
    lVar31 = *plVar16;
    if (plVar16[1] != lVar31) {
      lVar25 = 0;
      uVar34 = 0;
      iVar24 = 0;
      do {
        lVar26 = plVar9[3];
        uVar23 = *(undefined8 *)(lVar31 + uVar34 * 8);
        *(undefined8 *)(lVar26 + lVar25) = uVar23;
        puVar27 = (undefined4 *)((undefined8 *)(lVar26 + lVar25))[1];
        *puVar27 = (int)uVar34;
        puVar27[1] = iVar24;
        iVar22 = (int)uVar23;
        iVar24 = iVar24 + iVar22 * iVar22;
        uVar34 = uVar34 + 1;
        lVar31 = *plVar16;
        lVar25 = lVar25 + 0x20;
      } while (uVar34 < (ulong)(plVar16[1] - lVar31 >> 3));
    }
    puVar13 = (undefined8 *)0x28;
    __Znwm();
    puVar10 = puVar13;
    FUN_10991c340();
    *extraout_x8 = (long)puVar13;
    if ((int)*(uint *)(puVar13 + 2) < 1) {
      puVar36 = (undefined8 *)puVar13[3];
    }
    else {
      puVar36 = (undefined8 *)puVar13[3];
      puVar10 = puVar36;
      _bzero(puVar36,(ulong)*(uint *)(puVar13 + 2) << 3);
    }
    puVar3 = (uint *)plVar16[1];
    for (puVar20 = (uint *)*plVar16; puVar20 != puVar3; puVar20 = puVar20 + 2) {
      uVar6 = *puVar20;
      puVar13 = puVar8;
      puVar11 = puVar36;
      uVar34 = (ulong)uVar6;
      if (0 < (int)uVar6) {
        do {
          *puVar11 = *puVar13;
          uVar34 = uVar34 - 1;
          puVar13 = puVar13 + 1;
          puVar11 = puVar11 + (ulong)uVar6 + 1;
        } while (uVar34 != 0);
      }
      puVar8 = puVar8 + (int)uVar6;
      puVar36 = puVar36 + uVar6 * uVar6;
    }
    return puVar10;
  }
  iVar24 = *(int *)(param_1 + 1);
  iVar22 = *(int *)((long)param_1 + 0xc);
  uVar34 = (ulong)iVar22;
  if (iVar24 != 0 && iVar22 != 0) {
    lVar31 = 0;
    if (uVar34 != 0) {
      lVar31 = 0x7fffffffffffffff / (long)uVar34;
    }
    if (iVar24 <= lVar31) goto LAB_10991d5a0;
    goto LAB_10991d5d8;
  }
LAB_10991d5a0:
  unaff_x23 = (long)iVar22 * (long)iVar24;
  puVar8 = param_1;
  if (param_2[2] * param_2[1] - unaff_x23 == 0) goto LAB_10991d600;
  _free(*param_2);
  if ((long)unaff_x23 < 1) {
LAB_10991d5f8:
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10991d5d8:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10991d5f8;
    }
    puVar8 = (undefined8 *)(unaff_x23 * 8);
    _malloc();
    if (puVar8 == (undefined8 *)0x0) goto LAB_10991d5d8;
  }
  *param_2 = (ulong)puVar8;
LAB_10991d600:
  param_2[1] = (long)iVar24;
  param_2[2] = uVar34;
  if (0 < (long)unaff_x23) {
    puVar8 = (undefined8 *)*param_2;
    _bzero(puVar8,unaff_x23 << 3);
  }
  lVar25 = param_1[4];
  lVar31 = *(long *)(lVar25 + 0x18);
  if (*(long *)(lVar25 + 0x20) != lVar31) {
    uVar34 = 0;
    do {
      piVar1 = (int *)(lVar31 + uVar34 * 0x20);
      piVar21 = *(int **)(piVar1 + 2);
      piVar2 = *(int **)(piVar1 + 4);
      if (piVar21 != piVar2) {
        iVar24 = *piVar1;
        iVar22 = piVar1[1];
        do {
          piVar1 = (int *)(*(long *)param_1[4] + (long)*piVar21 * 8);
          iVar4 = *piVar1;
          uVar5 = (ulong)iVar4;
          pdVar28 = (double *)(param_1[3] + (long)piVar21[1] * 8);
          uVar30 = param_2[2];
          pdVar29 = (double *)(*param_2 + (long)piVar1[1] * 8 + uVar30 * (long)iVar22 * 8);
          if (((ulong)pdVar29 & 7) == 0) {
            if (0 < iVar24) {
              lVar31 = 0;
              puVar8 = (undefined8 *)(uVar30 & 1);
              uVar15 = (ulong)pdVar29 >> 3 & 1;
              pdVar14 = pdVar29;
              pdVar17 = pdVar28;
              if ((long)uVar5 <= (long)uVar15) {
                uVar15 = uVar5;
              }
              do {
                if (0 < (long)uVar15) {
                  pdVar29[lVar31 * uVar30] = pdVar28[lVar31 * uVar5] + pdVar29[lVar31 * uVar30];
                }
                lVar25 = (uVar5 - uVar15 & 0xfffffffffffffffe) + uVar15;
                if (1 < (long)(uVar5 - uVar15)) {
                  pdVar19 = pdVar17 + uVar15;
                  uVar32 = uVar15;
                  pdVar35 = pdVar14 + uVar15;
                  do {
                    dVar37 = *pdVar19;
                    pdVar35[1] = pdVar19[1] + pdVar35[1];
                    *pdVar35 = dVar37 + *pdVar35;
                    uVar32 = uVar32 + 2;
                    pdVar19 = pdVar19 + 2;
                    pdVar35 = pdVar35 + 2;
                  } while ((long)uVar32 < lVar25);
                }
                for (; lVar25 < (long)uVar5; lVar25 = lVar25 + 1) {
                  pdVar14[lVar25] = pdVar17[lVar25] + pdVar14[lVar25];
                }
                uVar18 = uVar15 + (long)puVar8 & 1;
                uVar32 = -uVar18;
                if ((long)(uVar15 + (long)puVar8) < 0 == SCARRY8(uVar15,(long)puVar8)) {
                  uVar32 = uVar18;
                }
                uVar15 = uVar5;
                if ((long)uVar32 <= (long)uVar5) {
                  uVar15 = uVar32;
                }
                lVar31 = lVar31 + 1;
                pdVar14 = pdVar14 + uVar30;
                pdVar17 = pdVar17 + uVar5;
              } while (lVar31 != iVar24);
            }
          }
          else if (0 < iVar24) {
            lVar31 = 0;
            puVar8 = (undefined8 *)(uVar5 * 8);
            do {
              pdVar14 = pdVar29;
              pdVar17 = pdVar28;
              uVar15 = uVar5;
              if (0 < iVar4) {
                do {
                  *pdVar14 = *pdVar17 + *pdVar14;
                  uVar15 = uVar15 - 1;
                  pdVar14 = pdVar14 + 1;
                  pdVar17 = pdVar17 + 1;
                } while (uVar15 != 0);
              }
              lVar31 = lVar31 + 1;
              pdVar28 = pdVar28 + uVar5;
              pdVar29 = pdVar29 + uVar30;
            } while (lVar31 != iVar24);
          }
          piVar21 = piVar21 + 2;
        } while (piVar21 != piVar2);
        lVar25 = param_1[4];
      }
      uVar34 = uVar34 + 1;
      lVar31 = *(long *)(lVar25 + 0x18);
    } while (uVar34 < (ulong)(*(long *)(lVar25 + 0x20) - lVar31 >> 5));
  }
  return puVar8;
}



/* Entry: 10991d83c; end: 10991d9eb;  */

undefined8 * FUN_10991d83c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *extraout_x8;
  uint *puVar15;
  long lVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  int *piStack_e0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar14 = param_1[4];
    lVar16 = *(long *)(lVar14 + 0x18);
    puVar7 = param_1;
    if (*(long *)(lVar14 + 0x20) != lVar16) {
      uVar20 = 0;
      do {
        piVar1 = (int *)(lVar16 + uVar20 * 0x20);
        piStack_e0 = *(int **)(piVar1 + 2);
        piVar3 = *(int **)(piVar1 + 4);
        if (piStack_e0 != piVar3) {
          iVar19 = *piVar1;
          do {
            if (0 < iVar19) {
              iVar17 = 0;
              iVar2 = *(int *)(*(long *)param_1[4] + (long)*piStack_e0 * 8);
              do {
                iVar23 = iVar2;
                if (0 < iVar2) {
                  do {
                    puVar7 = param_2;
                    _fprintf(param_2,&UNK_10f58a2e1);
                    iVar23 = iVar23 + -1;
                  } while (iVar23 != 0);
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 != iVar19);
            }
            piStack_e0 = piStack_e0 + 2;
          } while (piStack_e0 != piVar3);
          lVar14 = param_1[4];
        }
        uVar20 = uVar20 + 1;
        lVar16 = *(long *)(lVar14 + 0x18);
      } while (uVar20 < (ulong)(*(long *)(lVar14 + 0x20) - lVar16 >> 5));
    }
    return puVar7;
  }
  uStack_c8 = 0;
  uStack_70 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  FUN_1099a9f0c(&uStack_c8,&UNK_10f58a113,0xe3,3,FUN_1099aa768,0);
  plVar13 = (long *)&UNK_10f58a2c2;
  FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58a2c2,0x1e);
  puVar7 = &uStack_c8;
  func_0x0001099ab7c0();
  plVar8 = (long *)0x30;
  __Znwm();
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8[3] = 0;
  plVar8[2] = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  if (plVar8 == plVar13) {
    uVar20 = plVar13[1] - *plVar13 >> 3;
  }
  else {
    lVar16 = plVar13[1] - *plVar13;
    if (lVar16 == 0) {
      plVar8[1] = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xffffffffffffffff;
      goto LAB_10991db28;
    }
    uVar20 = lVar16 >> 3;
    if (uVar20 >> 0x3d != 0) {
      func_0x0001099041e8();
      __ZdlPv(lVar16);
      __Unwind_Resume();
      return (undefined8 *)plVar8[3];
    }
    lVar14 = lVar16;
    __Znwm();
    *plVar8 = lVar14;
    plVar8[1] = lVar14;
    plVar8[2] = lVar14 + lVar16;
    _memcpy();
    plVar8[1] = lVar14 + lVar16;
  }
  puVar9 = (undefined8 *)0x8;
  __Znwm();
  *puVar9 = 0xffffffffffffffff;
  if (uVar20 != 0) {
    if (uVar20 >> 0x3b != 0) {
      func_0x0001099041fc();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10991dc38);
      (*pcVar6)();
    }
    puVar24 = (undefined8 *)(uVar20 << 5);
    puVar10 = puVar24;
    __Znwm();
    puVar12 = puVar10;
    do {
      *puVar12 = 0xffffffffffffffff;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar11 = (undefined8 *)0x8;
      __Znwm();
      puVar12[1] = puVar11;
      *puVar11 = 0xffffffffffffffff;
      puVar12[2] = puVar11 + 1;
      puVar12[3] = puVar11 + 1;
      puVar12 = puVar12 + 4;
      puVar24 = puVar24 + -4;
    } while (puVar24 != (undefined8 *)0x0);
    plVar8[3] = (long)puVar10;
    plVar8[4] = (long)(puVar10 + uVar20 * 4);
    plVar8[5] = (long)(puVar10 + uVar20 * 4);
  }
LAB_10991db28:
  __ZdlPv(puVar9);
  lVar16 = *plVar13;
  if (plVar13[1] != lVar16) {
    lVar14 = 0;
    uVar20 = 0;
    iVar19 = 0;
    do {
      lVar21 = plVar8[3];
      uVar18 = *(undefined8 *)(lVar16 + uVar20 * 8);
      *(undefined8 *)(lVar21 + lVar14) = uVar18;
      puVar22 = (undefined4 *)((undefined8 *)(lVar21 + lVar14))[1];
      *puVar22 = (int)uVar20;
      puVar22[1] = iVar19;
      iVar17 = (int)uVar18;
      iVar19 = iVar19 + iVar17 * iVar17;
      uVar20 = uVar20 + 1;
      lVar16 = *plVar13;
      lVar14 = lVar14 + 0x20;
    } while (uVar20 < (ulong)(plVar13[1] - lVar16 >> 3));
  }
  puVar12 = (undefined8 *)0x28;
  __Znwm();
  puVar9 = puVar12;
  FUN_10991c340();
  *extraout_x8 = (long)puVar12;
  if ((int)*(uint *)(puVar12 + 2) < 1) {
    puVar24 = (undefined8 *)puVar12[3];
  }
  else {
    puVar24 = (undefined8 *)puVar12[3];
    puVar9 = puVar24;
    _bzero(puVar24,(ulong)*(uint *)(puVar12 + 2) << 3);
  }
  puVar4 = (uint *)plVar13[1];
  for (puVar15 = (uint *)*plVar13; puVar15 != puVar4; puVar15 = puVar15 + 2) {
    uVar5 = *puVar15;
    puVar12 = puVar7;
    puVar10 = puVar24;
    uVar20 = (ulong)uVar5;
    if (0 < (int)uVar5) {
      do {
        *puVar10 = *puVar12;
        uVar20 = uVar20 - 1;
        puVar12 = puVar12 + 1;
        puVar10 = puVar10 + (ulong)uVar5 + 1;
      } while (uVar20 != 0);
    }
    puVar7 = puVar7 + (int)uVar5;
    puVar24 = puVar24 + uVar5 * uVar5;
  }
  return puVar9;
}



/* Entry: 10991d9ec; end: 10991dc77;  */

undefined8 * FUN_10991d9ec(long *param_1,undefined8 *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  *plVar4 = 0;
  plVar4[3] = 0;
  plVar4[2] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  if (plVar4 == param_3) {
    uVar18 = param_3[1] - *param_3 >> 3;
  }
  else {
    lVar12 = param_3[1] - *param_3;
    if (lVar12 == 0) {
      plVar4[1] = 0;
      puVar5 = (undefined8 *)0x8;
      __Znwm();
      *puVar5 = 0xffffffffffffffff;
      goto LAB_10991db28;
    }
    uVar18 = lVar12 >> 3;
    if (uVar18 >> 0x3d != 0) {
      func_0x0001099041e8();
      __ZdlPv(lVar12);
      __Unwind_Resume();
      return (undefined8 *)plVar4[3];
    }
    lVar9 = lVar12;
    __Znwm();
    *plVar4 = lVar9;
    plVar4[1] = lVar9;
    plVar4[2] = lVar9 + lVar12;
    _memcpy();
    plVar4[1] = lVar9 + lVar12;
  }
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xffffffffffffffff;
  if (uVar18 != 0) {
    if (uVar18 >> 0x3b != 0) {
      func_0x0001099041fc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10991dc38);
      (*pcVar3)();
    }
    puVar17 = (undefined8 *)(uVar18 << 5);
    puVar6 = puVar17;
    __Znwm();
    puVar8 = puVar6;
    do {
      *puVar8 = 0xffffffffffffffff;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar7 = (undefined8 *)0x8;
      __Znwm();
      puVar8[1] = puVar7;
      *puVar7 = 0xffffffffffffffff;
      puVar8[2] = puVar7 + 1;
      puVar8[3] = puVar7 + 1;
      puVar8 = puVar8 + 4;
      puVar17 = puVar17 + -4;
    } while (puVar17 != (undefined8 *)0x0);
    plVar4[3] = (long)puVar6;
    plVar4[4] = (long)(puVar6 + uVar18 * 4);
    plVar4[5] = (long)(puVar6 + uVar18 * 4);
  }
LAB_10991db28:
  __ZdlPv(puVar5);
  lVar12 = *param_3;
  if (param_3[1] != lVar12) {
    lVar9 = 0;
    uVar18 = 0;
    iVar14 = 0;
    do {
      lVar15 = plVar4[3];
      uVar13 = *(undefined8 *)(lVar12 + uVar18 * 8);
      *(undefined8 *)(lVar15 + lVar9) = uVar13;
      puVar16 = (undefined4 *)((undefined8 *)(lVar15 + lVar9))[1];
      *puVar16 = (int)uVar18;
      puVar16[1] = iVar14;
      iVar11 = (int)uVar13;
      iVar14 = iVar14 + iVar11 * iVar11;
      uVar18 = uVar18 + 1;
      lVar12 = *param_3;
      lVar9 = lVar9 + 0x20;
    } while (uVar18 < (ulong)(param_3[1] - lVar12 >> 3));
  }
  puVar8 = (undefined8 *)0x28;
  __Znwm();
  puVar5 = puVar8;
  FUN_10991c340();
  *param_1 = (long)puVar8;
  if ((int)*(uint *)(puVar8 + 2) < 1) {
    puVar17 = (undefined8 *)puVar8[3];
  }
  else {
    puVar17 = (undefined8 *)puVar8[3];
    puVar5 = puVar17;
    _bzero(puVar17,(ulong)*(uint *)(puVar8 + 2) << 3);
  }
  puVar1 = (uint *)param_3[1];
  for (puVar10 = (uint *)*param_3; puVar10 != puVar1; puVar10 = puVar10 + 2) {
    uVar2 = *puVar10;
    puVar8 = param_2;
    puVar6 = puVar17;
    uVar18 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      do {
        *puVar6 = *puVar8;
        uVar18 = uVar18 - 1;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + (ulong)uVar2 + 1;
      } while (uVar18 != 0);
    }
    param_2 = param_2 + (int)uVar2;
    puVar17 = puVar17 + uVar2 * uVar2;
  }
  return puVar5;
}



/* Entry: 10991dc78; end: 10991dc7f;  */

undefined8 FUN_10991dc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10991dc80; end: 10991e11f;  */

undefined8 * FUN_10991dc80(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lStack_d0;
  long alStack_c8 [12];
  long *plStack_68;
  
  alStack_c8[0] = CONCAT44(alStack_c8[0]._4_4_,*(int *)(param_2 + 0xc));
  plStack_68 = (long *)CONCAT44(plStack_68._4_4_,*(int *)((long)param_1 + 0xc));
  puVar5 = param_1;
  if (*(int *)(param_2 + 0xc) != *(int *)((long)param_1 + 0xc)) {
    plVar16 = alStack_c8;
    FUN_109904144(plVar16,&plStack_68,&UNK_10f58a2f3);
    puVar5 = (undefined8 *)0x0;
    plStack_68 = plVar16;
    if (plVar16 != (long *)0x0) {
      uVar7 = 0x11e;
      goto LAB_10991e114;
    }
  }
  plVar16 = *(long **)(param_2 + 0x20);
  alStack_c8[0] = plVar16[1] - *plVar16 >> 3;
  plVar20 = (long *)param_1[4];
  lStack_d0 = plVar20[1] - *plVar20 >> 3;
  if (alStack_c8[0] == lStack_d0) {
LAB_10991dcf4:
    iVar4 = *(int *)(param_1 + 2);
    puVar19 = (undefined8 *)plVar20[3];
    puVar6 = (undefined8 *)plVar20[4];
    uVar22 = (long)puVar6 - (long)puVar19;
    uVar23 = (long)uVar22 >> 5;
    uVar24 = (plVar16[4] - plVar16[3] >> 5) + (long)(int)(uVar22 >> 5);
    if (uVar24 <= uVar23) {
      if (uVar24 < uVar23) {
        for (; puVar6 != puVar19 + uVar24 * 4; puVar6 = puVar6 + -4) {
          puVar5 = (undefined8 *)puVar6[-3];
          if (puVar5 != (undefined8 *)0x0) {
            puVar6[-2] = puVar5;
            __ZdlPv();
          }
        }
        plVar20[4] = (long)(puVar19 + uVar24 * 4);
      }
LAB_10991de70:
      lVar21 = plVar16[3];
      if (plVar16[4] != lVar21) {
        uVar24 = 0;
        do {
          piVar9 = (int *)(lVar21 + uVar24 * 0x20);
          piVar15 = (int *)(*(long *)(param_1[4] + 0x18) + uVar24 * 0x20 +
                           ((long)(uVar22 * 0x8000000) >> 0x20) * 0x20);
          iVar17 = *piVar9;
          *piVar15 = iVar17;
          iVar14 = *(int *)(param_1 + 1);
          piVar15[1] = iVar14;
          *(int *)(param_1 + 1) = iVar14 + iVar17;
          uVar23 = *(long *)(piVar9 + 4) - *(long *)(piVar9 + 2) >> 3;
          puVar19 = *(undefined8 **)(piVar15 + 2);
          puVar6 = *(undefined8 **)(piVar15 + 4);
          lVar21 = (long)puVar6 - (long)puVar19;
          uVar18 = lVar21 >> 3;
          if (uVar18 < uVar23) {
            uVar18 = uVar23 - uVar18;
            if ((ulong)(*(long *)(piVar15 + 6) - (long)puVar6 >> 3) < uVar18) {
              if (uVar23 >> 0x3d != 0) goto LAB_10991e0f8;
              uVar10 = *(long *)(piVar15 + 6) - (long)puVar19;
              uVar12 = (long)uVar10 >> 2;
              if (uVar12 <= uVar23) {
                uVar12 = uVar23;
              }
              if (0x7ffffffffffffff7 < uVar10) {
                uVar12 = 0x1fffffffffffffff;
              }
              if (uVar12 >> 0x3d != 0) goto LAB_10991e0f4;
              puVar6 = (undefined8 *)(uVar12 << 3);
              __Znwm();
              _memset((long)puVar6 + lVar21,0xff,uVar18 * 8);
              puVar5 = puVar6;
              _memcpy(puVar6,puVar19,lVar21);
              *(undefined8 **)(piVar15 + 2) = puVar6;
              *(ulong *)(piVar15 + 4) = (long)puVar6 + lVar21 + uVar18 * 8;
              *(undefined8 **)(piVar15 + 6) = puVar6 + uVar12;
              if (puVar19 != (undefined8 *)0x0) {
                __ZdlPv(puVar19);
                puVar5 = puVar19;
              }
            }
            else {
              puVar5 = puVar6;
              _memset(puVar6,0xff,uVar18 * 8);
              puVar19 = puVar6 + uVar18;
LAB_10991df9c:
              *(undefined8 **)(piVar15 + 4) = puVar19;
            }
          }
          else if (uVar23 < uVar18) {
            puVar19 = (undefined8 *)
                      ((long)puVar19 + (*(long *)(piVar9 + 4) - *(long *)(piVar9 + 2)));
            goto LAB_10991df9c;
          }
          lVar21 = *(long *)(piVar9 + 4) - (long)*(int **)(piVar9 + 2);
          if (lVar21 != 0) {
            lVar21 = lVar21 >> 3;
            iVar17 = *piVar9;
            lVar13 = *plVar16;
            iVar14 = *(int *)(param_1 + 2);
            piVar15 = (int *)(*(long *)(piVar15 + 2) + 4);
            piVar9 = *(int **)(piVar9 + 2);
            do {
              iVar3 = *piVar9;
              piVar15[-1] = iVar3;
              *piVar15 = iVar14;
              iVar14 = iVar14 + *(int *)(lVar13 + (long)iVar3 * 8) * iVar17;
              piVar15 = piVar15 + 2;
              lVar21 = lVar21 + -1;
              piVar9 = piVar9 + 2;
            } while (lVar21 != 0);
            *(int *)(param_1 + 2) = iVar14;
          }
          uVar24 = uVar24 + 1;
          lVar21 = plVar16[3];
        } while (uVar24 < (ulong)(plVar16[4] - lVar21 >> 5));
      }
      iVar17 = *(int *)(param_1 + 2);
      if (*(int *)((long)param_1 + 0x14) < iVar17) {
        puVar19 = (undefined8 *)((long)iVar17 << 3);
        if (iVar17 < 0) {
          puVar19 = (undefined8 *)0xffffffffffffffff;
        }
        __Znam();
        puVar5 = puVar19;
        _bzero();
        puVar6 = (undefined8 *)param_1[3];
        if (iVar4 != 0) {
          puVar5 = puVar19;
          _memmove(puVar19,puVar6,(long)iVar4 << 3);
        }
        param_1[3] = puVar19;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdaPv(puVar6);
          iVar17 = *(int *)(param_1 + 2);
          puVar5 = puVar6;
        }
        *(int *)((long)param_1 + 0x14) = iVar17;
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        puVar5 = (undefined8 *)(param_1[3] + (long)iVar4 * 8);
        _memmove(puVar5,*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 0x10) << 3);
      }
      return puVar5;
    }
    uVar18 = uVar24 - uVar23;
    if (uVar18 <= (ulong)(plVar20[5] - (long)puVar6 >> 5)) {
      puVar19 = puVar6 + uVar18 * 4;
      do {
        *puVar6 = 0xffffffffffffffff;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[1] = 0;
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar19);
      plVar20[4] = (long)puVar19;
      goto LAB_10991de70;
    }
    if (uVar24 >> 0x3b == 0) {
      uVar10 = plVar20[5] - (long)puVar19;
      uVar12 = (long)uVar10 >> 4;
      if (uVar12 <= uVar24) {
        uVar12 = uVar24;
      }
      if (0x7fffffffffffffdf < uVar10) {
        uVar12 = 0x7ffffffffffffff;
      }
      if (uVar12 >> 0x3b == 0) {
        puVar5 = (undefined8 *)(uVar12 << 5);
        __Znwm();
        puVar1 = (undefined8 *)((long)puVar5 + uVar22);
        puVar11 = puVar1;
        do {
          *puVar11 = 0xffffffffffffffff;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[1] = 0;
          puVar11 = puVar11 + 4;
        } while (puVar11 != puVar1 + uVar18 * 4);
        puVar2 = puVar5 + uVar12 * 4;
        puVar8 = puVar1 + uVar23 * -4;
        puVar11 = puVar19;
        if (puVar19 != puVar6) {
          do {
            *puVar8 = *puVar11;
            uVar7 = puVar11[1];
            puVar8[2] = puVar11[2];
            puVar8[1] = uVar7;
            puVar8[3] = puVar11[3];
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11 = puVar11 + 4;
            puVar8 = puVar8 + 4;
          } while (puVar11 != puVar6);
          do {
            puVar5 = (undefined8 *)puVar19[1];
            if (puVar5 != (undefined8 *)0x0) {
              puVar19[2] = puVar5;
              __ZdlPv();
            }
            puVar19 = puVar19 + 4;
          } while (puVar19 != puVar6);
          puVar19 = (undefined8 *)plVar20[3];
        }
        plVar20[3] = (long)(puVar1 + uVar23 * -4);
        plVar20[4] = (long)(puVar1 + uVar18 * 4);
        plVar20[5] = (long)puVar2;
        if (puVar19 != (undefined8 *)0x0) {
          __ZdlPv(puVar19);
          puVar5 = puVar19;
        }
        goto LAB_10991de70;
      }
LAB_10991e0f4:
      func_0x000104c4f740();
LAB_10991e0f8:
      func_0x000109904210();
    }
    func_0x0001099041fc();
  }
  else {
    plVar20 = alStack_c8;
    FUN_10991e50c(plVar20,&lStack_d0,&UNK_10f58a30e);
    plStack_68 = plVar20;
    if (plVar20 == (long *)0x0) {
      plVar20 = (long *)param_1[4];
      puVar5 = (undefined8 *)0x0;
      goto LAB_10991dcf4;
    }
  }
  uVar7 = 0x120;
LAB_10991e114:
  FUN_1099ab8e4(alStack_c8,&UNK_10f58a113,uVar7,&plStack_68);
  plVar16 = alStack_c8;
  func_0x0001099ab7c0();
  return (undefined8 *)(ulong)*(uint *)((long)plVar16 + 0xc);
}



/* Entry: 10991e120; end: 10991e137;  */

undefined4 FUN_10991e120(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10991e138; end: 10991e36b;  */

undefined8 * FUN_10991e138(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  
  plVar17 = (long *)param_1[4];
  puVar16 = (undefined8 *)plVar17[3];
  puVar18 = (undefined8 *)plVar17[4];
  uVar19 = (long)puVar18 - (long)puVar16 >> 5;
  if ((int)param_2 < 1) {
    iVar6 = 0;
    iVar9 = 0;
  }
  else {
    uVar12 = 0;
    iVar9 = 0;
    iVar6 = 0;
    do {
      piVar1 = (int *)((long)puVar16 +
                      ((long)((ulong)((int)uVar19 + ~(uint)uVar12) << 0x20) >> 0x1b));
      lVar15 = *(long *)(piVar1 + 4) - (long)*(int **)(piVar1 + 2);
      if (lVar15 != 0) {
        lVar15 = lVar15 >> 3;
        piVar14 = *(int **)(piVar1 + 2);
        do {
          iVar9 = iVar9 + *(int *)(*plVar17 + (long)*piVar14 * 8) * *piVar1;
          lVar15 = lVar15 + -1;
          piVar14 = piVar14 + 2;
        } while (lVar15 != 0);
      }
      iVar6 = *piVar1 + iVar6;
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_2);
  }
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - iVar9;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) - iVar6;
  iVar6 = (int)uVar19 - param_2;
  uVar7 = (ulong)iVar6;
  uVar12 = uVar7 - uVar19;
  if (uVar7 < uVar19 || uVar12 == 0) {
    if (uVar7 < uVar19) {
      for (; puVar18 != puVar16 + uVar7 * 4; puVar18 = puVar18 + -4) {
        param_1 = (undefined8 *)puVar18[-3];
        if (param_1 != (undefined8 *)0x0) {
          puVar18[-2] = param_1;
          __ZdlPv();
        }
      }
      plVar17[4] = (long)(puVar16 + uVar7 * 4);
    }
  }
  else {
    if ((ulong)(plVar17[5] - (long)puVar18 >> 5) < uVar12) {
      if (iVar6 < 0) {
        func_0x0001099041fc();
      }
      else {
        uVar10 = plVar17[5] - (long)puVar16;
        uVar13 = (long)uVar10 >> 4;
        if (uVar13 <= uVar7) {
          uVar13 = uVar7;
        }
        if (0x7fffffffffffffdf < uVar10) {
          uVar13 = 0x7ffffffffffffff;
        }
        if (uVar13 >> 0x3b == 0) {
          puVar4 = (undefined8 *)(uVar13 << 5);
          __Znwm();
          puVar2 = (undefined8 *)((long)puVar4 + ((long)puVar18 - (long)puVar16));
          puVar11 = puVar2;
          do {
            *puVar11 = 0xffffffffffffffff;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[1] = 0;
            puVar11 = puVar11 + 4;
          } while (puVar11 != puVar2 + uVar12 * 4);
          puVar3 = puVar4 + uVar13 * 4;
          puVar8 = puVar2 + uVar19 * -4;
          puVar11 = puVar16;
          if (puVar16 != puVar18) {
            do {
              *puVar8 = *puVar11;
              uVar21 = puVar11[1];
              puVar8[2] = puVar11[2];
              puVar8[1] = uVar21;
              puVar8[3] = puVar11[3];
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11 = puVar11 + 4;
              puVar8 = puVar8 + 4;
            } while (puVar11 != puVar18);
            do {
              puVar4 = (undefined8 *)puVar16[1];
              if (puVar4 != (undefined8 *)0x0) {
                puVar16[2] = puVar4;
                __ZdlPv();
              }
              puVar16 = puVar16 + 4;
            } while (puVar16 != puVar18);
            puVar16 = (undefined8 *)plVar17[3];
          }
          plVar17[3] = (long)(puVar2 + uVar19 * -4);
          plVar17[4] = (long)(puVar2 + uVar12 * 4);
          plVar17[5] = (long)puVar3;
          if (puVar16 == (undefined8 *)0x0) {
            return puVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar16);
          return puVar16;
        }
      }
      func_0x000104c4f740();
      plVar17 = (long *)param_1[4];
      param_1[4] = 0;
      if (plVar17 != (long *)0x0) {
        lVar15 = plVar17[3];
        if (lVar15 != 0) {
          lVar20 = plVar17[4];
          lVar5 = lVar15;
          if (lVar20 != lVar15) {
            do {
              if (*(long *)(lVar20 + -0x18) != 0) {
                *(long *)(lVar20 + -0x10) = *(long *)(lVar20 + -0x18);
                __ZdlPv();
              }
              lVar20 = lVar20 + -0x20;
            } while (lVar20 != lVar15);
            lVar5 = plVar17[3];
          }
          plVar17[4] = lVar15;
          __ZdlPv(lVar5);
        }
        if (*plVar17 != 0) {
          plVar17[1] = *plVar17;
          __ZdlPv();
        }
        __ZdlPv(plVar17);
      }
      lVar15 = param_1[3];
      param_1[3] = 0;
      if (lVar15 != 0) {
        __ZdaPv();
      }
      return param_1;
    }
    puVar16 = puVar18 + uVar12 * 4;
    do {
      *puVar18 = 0xffffffffffffffff;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar18[1] = 0;
      puVar18 = puVar18 + 4;
    } while (puVar18 != puVar16);
    plVar17[4] = (long)puVar16;
  }
  return param_1;
}



/* Entry: 10991e36c; end: 10991e4a3;  */

long FUN_10991e36c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (long *)0x0) {
    lVar3 = plVar2[3];
    if (lVar3 != 0) {
      lVar4 = plVar2[4];
      lVar1 = lVar3;
      if (lVar4 != lVar3) {
        do {
          if (*(long *)(lVar4 + -0x18) != 0) {
            *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
            __ZdlPv();
          }
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != lVar3);
        lVar1 = plVar2[3];
      }
      plVar2[4] = lVar3;
      __ZdlPv(lVar1);
    }
    if (*plVar2 != 0) {
      plVar2[1] = *plVar2;
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar3 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 10991e4a4; end: 10991e4ab;  */

undefined4 FUN_10991e4a4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10991e4ac; end: 10991e50b;  */

long * FUN_10991e4ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar3 = lVar2, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x20;
    lVar2 = lVar3 + -0x20;
    if (*(long *)(lVar3 + -0x18) != 0) {
      *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
      __ZdlPv();
      lVar2 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10991e50c; end: 10991e5af;  */

long ** FUN_10991e50c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long **pplVar1;
  long *plStack_28;
  
  FUN_1099ab908(&plStack_28,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(plStack_28,*param_1);
  FUN_1092b4db8(plStack_28,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(plStack_28,*param_2);
  pplVar1 = &plStack_28;
  FUN_1099ab984(pplVar1);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar1;
}



/* Entry: 10991e5b0; end: 10991e653;  */

long ** FUN_10991e5b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long **pplVar1;
  long *plStack_28;
  
  FUN_1099ab908(&plStack_28,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*param_1,plStack_28);
  FUN_1092b4db8(plStack_28,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*param_2,plStack_28);
  pplVar1 = &plStack_28;
  FUN_1099ab984(pplVar1);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar1;
}



/* Entry: 10991e654; end: 10991e67b;  */

bool FUN_10991e654(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = param_1[1] < param_2[1];
  if (*param_1 != *param_2) {
    bVar1 = *param_1 < *param_2;
  }
  return bVar1;
}



/* Entry: 10991e67c; end: 10991e6e3;  */

undefined8 FUN_10991e67c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  FUN_109978124(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 8))[1];
  for (puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8); puVar3 != puVar1; puVar3 = puVar3 + 1)
  {
    plVar2 = (long *)*puVar3;
    if ((plVar2[3] != *plVar2) && ((int)plVar2[1] != 0)) {
      _memmove(*plVar2,plVar2[3],(long)(int)plVar2[1] << 3);
    }
  }
  return 0;
}



/* Entry: 10991e6e4; end: 10991e6eb;  */

void FUN_10991e6e4(void)

{
  return;
}



/* Entry: 10991e6ec; end: 10991eba3;  */

/* WARNING: Removing unreachable block (ram,0x00010991e944) */
/* WARNING: Removing unreachable block (ram,0x00010991e77c) */
/* WARNING: Removing unreachable block (ram,0x00010991eb94) */
/* WARNING: Removing unreachable block (ram,0x00010991eaa8) */

long FUN_10991e6ec(long param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *******pppppppuVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *******pppppppuVar20;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [2];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 ******ppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  ppppppuStack_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) != 0) {
      ppppppuStack_e0 = (undefined8 ******)0x0;
      uStack_88 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_90 = 0;
      uVar14 = 0x77;
      uVar15 = 3;
      FUN_1099a9f0c(&ppppppuStack_e0,&UNK_10f58a448,0x77,3,FUN_1099aa768,0);
      puVar13 = &UNK_10f58a4ca;
      FUN_109365950(uStack_d8 + 0x7540,&UNK_10f58a4ca);
      pppppppuVar9 = &ppppppuStack_e0;
      func_0x0001099ab7c0();
      __Unwind_Resume(pppppppuVar9);
      lVar10 = 0;
      _time(0);
      auStack_1f8[0] = 3;
      uStack_1e8 = 0x4059000000000000;
      uStack_1f0 = 0x4017000000000000;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      lStack_1d0 = 0;
      uStack_1b8 = 0;
      plStack_1c0 = (long *)0x0;
      uStack_1b0 = 0x3f800000;
      uStack_1a0 = 0;
      lStack_1a8 = 0;
      uStack_190 = 0;
      plStack_198 = (long *)0x0;
      uStack_188 = 0x3f800000;
      FUN_10991ed88(auStack_1f8,pppppppuVar9,puVar13,uVar14,uVar15);
      if (piRam000000011382ba08 == (int *)0x0) {
        iVar7 = 0x1382ba08;
        FUN_1099adbb8(0x11382ba08,0x11382bb14,&UNK_10f58a4e2,2);
        lVar11 = lStack_1a8;
        plVar19 = plStack_198;
        if (iVar7 == 0) goto joined_r0x00010991ecf4;
      }
      else {
        lVar11 = lStack_1a8;
        plVar19 = plStack_198;
        if (*piRam000000011382ba08 < 2) goto joined_r0x00010991ecf4;
      }
      uStack_258 = 0;
      uStack_200 = 0;
      uStack_240 = 0;
      uStack_248 = 0;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_220 = 0;
      uStack_228 = 0;
      uStack_210 = 0;
      uStack_218 = 0;
      uStack_208 = 0;
      FUN_1099a9f0c(&uStack_258,&UNK_10f58a4e2,0x5a,0,FUN_1099aa768,0);
      lVar11 = lStack_250 + 0x7540;
      FUN_1092b4db8(lVar11,&UNK_10f58a575,0x28);
      lVar12 = 0;
      _time(0);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEl(lVar11,lVar12 - lVar10);
      FUN_1099ab3b0(&uStack_258);
      lVar11 = lStack_1a8;
      plVar19 = plStack_198;
joined_r0x00010991ecf4:
      while (plVar19 != (long *)0x0) {
        plVar19 = (long *)*plVar19;
        lStack_1a8 = lVar11;
        __ZdlPv();
        lVar11 = lStack_1a8;
      }
      lStack_1a8 = 0;
      lVar10 = lStack_1d0;
      plVar19 = plStack_1c0;
      if (lVar11 != 0) {
        __ZdlPv();
        lVar10 = lStack_1d0;
        plVar19 = plStack_1c0;
      }
      while (plVar19 != (long *)0x0) {
        plVar19 = (long *)*plVar19;
        lStack_1d0 = lVar10;
        __ZdlPv();
        lVar10 = lStack_1d0;
      }
      lStack_1d0 = 0;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      return lVar10;
    }
    FUN_109988e2c(&ppppppuStack_e0,&UNK_10f58a341);
    uStack_78 = uStack_d8;
    ppppppuStack_80 = ppppppuStack_e0;
    uStack_70 = uStack_d0;
    goto LAB_10991e960;
  }
  if (*param_2 == 0) {
    func_0x000107c2c4d8(&ppppppuStack_80,&UNK_10f58a38d,0x6c);
  }
  FUN_109988e2c(&ppppppuStack_e0,&UNK_10f58a3fa);
  uVar16 = (uint)(char)uStack_d0._7_1_;
  uVar5 = uStack_d8;
  pppppppuVar9 = (undefined8 *******)ppppppuStack_e0;
  if (-1 < (int)uVar16) {
    uVar5 = (ulong)uStack_d0._7_1_;
    pppppppuVar9 = &ppppppuStack_e0;
  }
  uVar18 = (uStack_70 & 0x7fffffffffffffff) - 1;
  uVar2 = uStack_78;
  if (-1 < (long)uStack_70) {
    uVar18 = 0x16;
    uVar2 = uStack_70 >> 0x38;
  }
  if (uVar18 - uVar2 < uVar5) {
    uVar1 = uVar2 + uVar5;
    if (0x7ffffffffffffff6 - uVar18 < uVar1 - uVar18) {
      func_0x000104c4f6b8();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10991eb34);
      (*pcVar6)();
    }
    pppppppuVar4 = (undefined8 *******)ppppppuStack_80;
    if (-1 < (long)uStack_70) {
      pppppppuVar4 = &ppppppuStack_80;
    }
    if (uVar18 < 0x3ffffffffffffff3) {
      uVar3 = uVar1;
      if (uVar1 <= uVar18 * 2) {
        uVar3 = uVar18 << 1;
      }
      pppppppuVar8 = (undefined8 *******)0x19;
      if ((uVar3 | 7) != 0x17) {
        pppppppuVar8 = (undefined8 *******)((uVar3 | 7) + 1);
      }
      pppppppuVar20 = (undefined8 *******)0x17;
      if (0x16 < uVar3) {
        pppppppuVar20 = pppppppuVar8;
      }
    }
    else {
      pppppppuVar20 = (undefined8 *******)0x7ffffffffffffff7;
    }
    pppppppuVar8 = pppppppuVar20;
    __Znwm();
    if (uVar2 != 0) {
      _memmove(pppppppuVar8,pppppppuVar4,uVar2);
    }
    _memcpy((long)pppppppuVar8 + uVar2,pppppppuVar9,uVar5);
    if (uVar18 != 0x16) {
      __ZdlPv(pppppppuVar4);
    }
    uStack_70 = (ulong)pppppppuVar20 | 0x8000000000000000;
    puVar17 = (undefined1 *)((long)pppppppuVar8 + uVar1);
    ppppppuStack_80 = pppppppuVar8;
    uStack_78 = uVar1;
LAB_10991e94c:
    *puVar17 = 0;
    uVar16 = (uint)uStack_d0._7_1_;
  }
  else if (uVar5 != 0) {
    pppppppuVar4 = (undefined8 *******)ppppppuStack_80;
    if (-1 < (long)uStack_70) {
      pppppppuVar4 = &ppppppuStack_80;
    }
    _memmove((long)pppppppuVar4 + uVar2,pppppppuVar9,uVar5);
    uStack_70 = CONCAT17((char)(uVar2 + uVar5),(undefined7)uStack_70) & 0x7fffffffffffffff;
    puVar17 = (undefined1 *)((long)pppppppuVar4 + uVar2 + uVar5);
    goto LAB_10991e94c;
  }
  if ((uVar16 >> 7 & 1) != 0) {
    __ZdlPv(ppppppuStack_e0);
  }
LAB_10991e960:
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar5 = uStack_78;
    pppppppuVar9 = (undefined8 *******)ppppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar5 = uStack_70 >> 0x38;
      pppppppuVar9 = &ppppppuStack_80;
    }
    plVar19 = (long *)PTR___ZNSt3__14coutE_110346740;
    FUN_1092b4db8(PTR___ZNSt3__14coutE_110346740,pppppppuVar9,uVar5);
    __ZNKSt3__18ios_base6getlocEv
              (&ppppppuStack_e0,(undefined *)((long)plVar19 + *(long *)(*plVar19 + -0x18)));
    pppppppuVar9 = &ppppppuStack_e0;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppppppuVar9,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppppppuVar9)[7])();
    __ZNSt3__16localeD1Ev(&ppppppuStack_e0);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar19,pppppppuVar9);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar19);
  }
  else {
    if (piRam000000011373cac0 == (int *)0x0) {
      iVar7 = 0x1373cac0;
      FUN_1099adbb8(0x11373cac0,0x11382bb14,&UNK_10f58a448,1);
      if (iVar7 == 0) {
        return 0;
      }
    }
    else if (*piRam000000011373cac0 < 1) {
      return 0;
    }
    ppppppuStack_e0 = (undefined8 ******)0x0;
    uStack_88 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    FUN_1099a9f0c(&ppppppuStack_e0,&UNK_10f58a448,0x7d,0,FUN_1099aa768,0);
    uVar5 = uStack_78;
    pppppppuVar9 = (undefined8 *******)ppppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar5 = uStack_70 >> 0x38;
      pppppppuVar9 = &ppppppuStack_80;
    }
    FUN_1092b4db8(uStack_d8 + 0x7540,pppppppuVar9,uVar5);
    FUN_1099ab3b0(&ppppppuStack_e0);
  }
  return 0;
}



/* Entry: 10991eba4; end: 10991ed87;  */

void FUN_10991eba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar2 = 0;
  _time(0);
  auStack_c8[0] = 3;
  uStack_b8 = 0x4059000000000000;
  uStack_c0 = 0x4017000000000000;
  uStack_b0 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_80 = 0x3f800000;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  plStack_68 = (long *)0x0;
  uStack_58 = 0x3f800000;
  FUN_10991ed88(auStack_c8,param_1,param_2,param_3,param_4);
  if (piRam000000011382ba08 == (int *)0x0) {
    iVar1 = 0x1382ba08;
    FUN_1099adbb8(0x11382ba08,0x11382bb14,&UNK_10f58a4e2,2);
    lVar3 = lStack_78;
    plVar5 = plStack_68;
    if (iVar1 == 0) goto joined_r0x00010991ecf4;
  }
  else {
    lVar3 = lStack_78;
    plVar5 = plStack_68;
    if (*piRam000000011382ba08 < 2) goto joined_r0x00010991ecf4;
  }
  uStack_128 = 0;
  uStack_d0 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  FUN_1099a9f0c(&uStack_128,&UNK_10f58a4e2,0x5a,0,FUN_1099aa768,0);
  lVar3 = lStack_120 + 0x7540;
  FUN_1092b4db8(lVar3,&UNK_10f58a575,0x28);
  lVar4 = 0;
  _time(0);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEl(lVar3,lVar4 - lVar2);
  FUN_1099ab3b0(&uStack_128);
  lVar3 = lStack_78;
  plVar5 = plStack_68;
joined_r0x00010991ecf4:
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    lStack_78 = lVar3;
    __ZdlPv();
    lVar3 = lStack_78;
  }
  lStack_78 = 0;
  lVar2 = lStack_a0;
  plVar5 = plStack_90;
  if (lVar3 != 0) {
    __ZdlPv();
    lVar2 = lStack_a0;
    plVar5 = plStack_90;
  }
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    lStack_a0 = lVar2;
    __ZdlPv();
    lVar2 = lStack_a0;
  }
  lStack_a0 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10991ed88; end: 1099204a7;  */

undefined8 *
FUN_10991ed88(int *param_1,undefined8 *param_2,long param_3,long *param_4,long *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long **pplVar6;
  code *pcVar7;
  long *plVar8;
  double *pdVar9;
  long **pplVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long **pplVar22;
  long *plVar23;
  long *plVar24;
  undefined4 *puVar25;
  int *piVar26;
  int *piVar27;
  int iVar28;
  ulong uVar29;
  long *unaff_x24;
  long *unaff_x25;
  long *plVar30;
  long *unaff_x27;
  float fVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double *pdStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  float fStack_120;
  double dStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  
  uVar32 = *param_2;
  uVar35 = param_2[3];
  uVar34 = param_2[2];
  *(undefined8 *)(param_1 + 2) = param_2[1];
  *(undefined8 *)param_1 = uVar32;
  *(undefined8 *)(param_1 + 6) = uVar35;
  *(undefined8 *)(param_1 + 4) = uVar34;
  if (param_4 == (long *)0x0) {
    uStack_e0 = 0;
    uStack_88 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    FUN_1099a9f0c(&uStack_e0,&UNK_10f58a4e2,0x65,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f58a59e,0x21);
  }
  else {
    if (param_5 != (long *)0x0) {
      param_4[1] = *param_4;
      if (param_5[3] != 0) {
        plVar8 = (long *)param_5[2];
        while (plVar8 != (long *)0x0) {
          plVar8 = (long *)*plVar8;
          __ZdlPv();
        }
        param_5[2] = 0;
        lVar11 = param_5[1];
        if (lVar11 != 0) {
          lVar13 = 0;
          do {
            *(undefined8 *)(*param_5 + lVar13 * 8) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar11 != lVar13);
        }
        param_5[3] = 0;
      }
      *(long *)(param_1 + 8) = param_3;
      plStack_138 = (long *)0x0;
      puStack_140 = (undefined8 *)0x0;
      plStack_128 = (long *)0x0;
      plStack_130 = (long *)0x0;
      fStack_120 = 1.0;
      plVar8 = *(long **)(param_3 + 0x10);
      if (plVar8 != (long *)0x0) {
        unaff_x27 = (long *)0x0;
        unaff_x25 = (long *)0x0;
        do {
          plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x30);
          if (plVar12 == (long *)0x0) {
LAB_109920114:
            uStack_e0 = 0;
            uStack_88 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_90 = 0;
            FUN_1099a9f0c(&uStack_e0,&UNK_10f589c92,0x3f,3,FUN_1099aa768,0);
            FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f589d12,0x25);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            goto LAB_10992048c;
          }
          iVar28 = (int)plVar8[2];
          plVar30 = (long *)(long)iVar28;
          uVar14 = (long)plVar12 - 1;
          if (((ulong)plVar12 & uVar14) == 0) {
            plVar16 = (long *)(uVar14 & (ulong)plVar30);
          }
          else {
            plVar16 = plVar30;
            if (plVar12 <= plVar30) {
              uVar29 = 0;
              if (plVar12 != (long *)0x0) {
                uVar29 = (ulong)plVar30 / (ulong)plVar12;
              }
              plVar16 = (long *)((long)plVar30 - uVar29 * (long)plVar12);
            }
          }
          plVar17 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x28) + (long)plVar16 * 8);
          if (plVar17 == (long *)0x0) goto LAB_109920114;
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_109920114;
              plVar19 = (long *)plVar17[1];
              if (plVar19 == plVar30) break;
              if (((ulong)plVar12 & uVar14) == 0) {
                plVar19 = (long *)((ulong)plVar19 & uVar14);
              }
              else if (plVar12 <= plVar19) {
                uVar29 = 0;
                if (plVar12 != (long *)0x0) {
                  uVar29 = (ulong)plVar19 / (ulong)plVar12;
                }
                plVar19 = (long *)((long)plVar19 - uVar29 * (long)plVar12);
              }
              if (plVar19 != plVar16) goto LAB_109920114;
            }
          } while (*(int *)(plVar17 + 2) != iVar28);
          if (unaff_x25 != (long *)0x0) {
            uVar14 = (long)unaff_x25 - 1;
            if (((ulong)unaff_x25 & uVar14) == 0) {
              unaff_x24 = (long *)(uVar14 & (ulong)plVar30);
            }
            else {
              unaff_x24 = plVar30;
              if (unaff_x25 <= plVar30) {
                uVar29 = 0;
                if (unaff_x25 != (long *)0x0) {
                  uVar29 = (ulong)plVar30 / (ulong)unaff_x25;
                }
                unaff_x24 = (long *)((long)plVar30 - uVar29 * (long)unaff_x25);
              }
            }
            plVar12 = (long *)puStack_140[(long)unaff_x24];
            if (plVar12 != (long *)0x0) {
              do {
                while( true ) {
                  plVar12 = (long *)*plVar12;
                  if (plVar12 == (long *)0x0) goto LAB_10991ef74;
                  plVar16 = (long *)plVar12[1];
                  if (plVar16 != plVar30) break;
                  if (*(int *)(plVar12 + 2) == iVar28) goto LAB_10991f080;
                }
                if (((ulong)unaff_x25 & uVar14) == 0) {
                  plVar16 = (long *)((ulong)plVar16 & uVar14);
                }
                else if (unaff_x25 <= plVar16) {
                  uVar29 = 0;
                  if (unaff_x25 != (long *)0x0) {
                    uVar29 = (ulong)plVar16 / (ulong)unaff_x25;
                  }
                  plVar16 = (long *)((long)plVar16 - uVar29 * (long)unaff_x25);
                }
              } while (plVar16 == unaff_x24);
            }
          }
LAB_10991ef74:
          plVar12 = (long *)0x18;
          __Znwm();
          *plVar12 = 0;
          plVar12[1] = (long)plVar30;
          *(int *)(plVar12 + 2) = iVar28;
          if ((unaff_x25 == (long *)0x0) ||
             (fStack_120 * (float)unaff_x25 < (float)((long)unaff_x27 + 1))) {
            uVar14 = 1;
            if ((long *)0x2 < unaff_x25) {
              uVar14 = (ulong)(((ulong)unaff_x25 & (long)unaff_x25 - 1U) != 0);
            }
            uVar14 = uVar14 | (long)unaff_x25 << 1;
            uVar29 = (ulong)((float)((long)unaff_x27 + 1) / fStack_120);
            if (uVar14 <= uVar29) {
              uVar14 = uVar29;
            }
            func_0x000107c2ab20(&puStack_140,uVar14);
            unaff_x25 = plStack_138;
            if (((ulong)plStack_138 & (long)plStack_138 - 1U) == 0) {
              unaff_x24 = (long *)((long)plStack_138 - 1U & (ulong)plVar30);
            }
            else {
              unaff_x24 = plVar30;
              if (plStack_138 <= plVar30) {
                uVar14 = 0;
                if (plStack_138 != (long *)0x0) {
                  uVar14 = (ulong)plVar30 / (ulong)plStack_138;
                }
                unaff_x24 = (long *)((long)plVar30 - uVar14 * (long)plStack_138);
              }
            }
          }
          plVar16 = (long *)puStack_140[(long)unaff_x24];
          if (plVar16 == (long *)0x0) {
            *plVar12 = (long)plStack_130;
            puStack_140[(long)unaff_x24] = &plStack_130;
            plStack_130 = plVar12;
            if (*plVar12 != 0) {
              plVar16 = *(long **)(*plVar12 + 8);
              if (((ulong)unaff_x25 & (long)unaff_x25 - 1U) == 0) {
                plVar16 = (long *)((ulong)plVar16 & (long)unaff_x25 - 1U);
              }
              else if (unaff_x25 <= plVar16) {
                uVar14 = 0;
                if (unaff_x25 != (long *)0x0) {
                  uVar14 = (ulong)plVar16 / (ulong)unaff_x25;
                }
                plVar16 = (long *)((long)plVar16 - uVar14 * (long)unaff_x25);
              }
              plVar16 = puStack_140 + (long)plVar16;
              goto LAB_10991f070;
            }
          }
          else {
            *plVar12 = *plVar16;
LAB_10991f070:
            *plVar16 = (long)plVar12;
          }
          unaff_x27 = (long *)((long)plStack_128 + 1);
          plStack_128 = unaff_x27;
LAB_10991f080:
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        if (unaff_x27 != (long *)0x0) {
          plVar8 = (long *)(param_1 + 0xe);
          plVar12 = (long *)(param_1 + 0x18);
LAB_10991f09c:
          dStack_110 = -1.79769313486232e+308;
          iVar28 = 0;
          plVar16 = plStack_130;
          if (plStack_130 != (long *)0x0) {
LAB_10991f0b0:
            iVar2 = (int)plVar16[2];
            uVar29 = (ulong)iVar2;
            pdStack_148 = (double *)CONCAT44(pdStack_148._4_4_,iVar2);
            lVar11 = *(long *)(param_1 + 8);
            uVar14 = *(ulong *)(lVar11 + 0x30);
            if (uVar14 != 0) {
              uVar18 = uVar14 - 1;
              if ((uVar14 & uVar18) == 0) {
                uVar20 = uVar18 & uVar29;
              }
              else {
                uVar20 = uVar29;
                if (uVar14 <= uVar29) {
                  uVar20 = 0;
                  if (uVar14 != 0) {
                    uVar20 = uVar29 / uVar14;
                  }
                  uVar20 = uVar29 - uVar20 * uVar14;
                }
              }
              plVar17 = *(long **)(*(long *)(lVar11 + 0x28) + uVar20 * 8);
              if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0))
              {
                dVar33 = *(double *)(param_1 + 6);
                do {
                  uVar21 = plVar17[1];
                  if (uVar21 == uVar29) {
                    if ((int)plVar17[2] == iVar2) goto LAB_10991f154;
                  }
                  else {
                    if ((uVar14 & uVar18) == 0) {
                      uVar21 = uVar21 & uVar18;
                    }
                    else if (uVar14 <= uVar21) {
                      uVar4 = 0;
                      if (uVar14 != 0) {
                        uVar4 = uVar21 / uVar14;
                      }
                      uVar21 = uVar21 - uVar4 * uVar14;
                    }
                    if (uVar21 != uVar20) break;
                  }
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) break;
                } while( true );
              }
            }
            uStack_e0 = 0;
            uStack_88 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_90 = 0;
            FUN_1099a9f0c(&uStack_e0,&UNK_10f589c92,0x3f,3,FUN_1099aa768,0);
            FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f589d12,0x25);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            goto LAB_10992048c;
          }
          goto LAB_10991f32c;
        }
      }
LAB_10991fa68:
      if (param_5[3] != 0) {
        plVar8 = (long *)param_5[2];
        while (plVar8 != (long *)0x0) {
          plVar8 = (long *)*plVar8;
          __ZdlPv();
        }
        param_5[2] = 0;
        lVar11 = param_5[1];
        if (lVar11 != 0) {
          lVar13 = 0;
          do {
            *(undefined8 *)(*param_5 + lVar13 * 8) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar11 != lVar13);
        }
        param_5[3] = 0;
      }
      plStack_108 = (long *)0x0;
      dStack_110 = 0.0;
      plStack_f8 = (long *)0x0;
      plStack_100 = (long *)0x0;
      fStack_f0 = 1.0;
      lVar11 = *param_4;
      lVar13 = param_4[1];
      if (lVar13 != lVar11) {
        unaff_x27 = (long *)0x0;
        plVar8 = (long *)0x0;
        uVar14 = 0;
        do {
          iVar28 = *(int *)(lVar11 + uVar14 * 4);
          plVar12 = (long *)(long)iVar28;
          if (plVar8 != (long *)0x0) {
            uVar29 = (long)plVar8 - 1;
            if (((ulong)plVar8 & uVar29) == 0) {
              unaff_x25 = (long *)(uVar29 & (ulong)plVar12);
            }
            else {
              unaff_x25 = plVar12;
              if (plVar8 <= plVar12) {
                uVar18 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar18 = (ulong)plVar12 / (ulong)plVar8;
                }
                unaff_x25 = (long *)((long)plVar12 - uVar18 * (long)plVar8);
              }
            }
            puVar15 = *(undefined8 **)((long)dStack_110 + (long)unaff_x25 * 8);
            if (puVar15 != (undefined8 *)0x0) {
              for (plVar30 = (long *)*puVar15; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
                plVar16 = (long *)plVar30[1];
                if (plVar16 == plVar12) {
                  if ((int)plVar30[2] == iVar28) goto LAB_10991fc88;
                }
                else {
                  if (((ulong)plVar8 & uVar29) == 0) {
                    plVar16 = (long *)((ulong)plVar16 & uVar29);
                  }
                  else if (plVar8 <= plVar16) {
                    uVar18 = 0;
                    if (plVar8 != (long *)0x0) {
                      uVar18 = (ulong)plVar16 / (ulong)plVar8;
                    }
                    plVar16 = (long *)((long)plVar16 - uVar18 * (long)plVar8);
                  }
                  if (plVar16 != unaff_x25) break;
                }
              }
            }
          }
          plVar30 = (long *)0x18;
          __Znwm();
          *plVar30 = 0;
          plVar30[1] = (long)plVar12;
          *(int *)(plVar30 + 2) = iVar28;
          *(undefined4 *)((long)plVar30 + 0x14) = 0;
          if ((plVar8 == (long *)0x0) || (fStack_f0 * (float)plVar8 < (float)((long)unaff_x27 + 1)))
          {
            uVar29 = 1;
            if ((long *)0x2 < plVar8) {
              uVar29 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
            }
            uVar29 = uVar29 | (long)plVar8 << 1;
            uVar18 = (ulong)((float)((long)unaff_x27 + 1) / fStack_f0);
            if (uVar29 <= uVar18) {
              uVar29 = uVar18;
            }
            FUN_1093c8d00(&dStack_110,uVar29);
            plVar8 = plStack_108;
            if (((ulong)plStack_108 & (long)plStack_108 - 1U) == 0) {
              unaff_x25 = (long *)((long)plStack_108 - 1U & (ulong)plVar12);
            }
            else {
              unaff_x25 = plVar12;
              if (plStack_108 <= plVar12) {
                uVar29 = 0;
                if (plStack_108 != (long *)0x0) {
                  uVar29 = (ulong)plVar12 / (ulong)plStack_108;
                }
                unaff_x25 = (long *)((long)plVar12 - uVar29 * (long)plStack_108);
              }
            }
          }
          plVar12 = *(long **)((long)dStack_110 + (long)unaff_x25 * 8);
          if (plVar12 == (long *)0x0) {
            *plVar30 = (long)plStack_100;
            *(long ***)((long)dStack_110 + (long)unaff_x25 * 8) = &plStack_100;
            plStack_100 = plVar30;
            if (*plVar30 != 0) {
              plVar12 = *(long **)(*plVar30 + 8);
              if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
                plVar12 = (long *)((ulong)plVar12 & (long)plVar8 - 1U);
              }
              else if (plVar8 <= plVar12) {
                uVar29 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar29 = (ulong)plVar12 / (ulong)plVar8;
                }
                plVar12 = (long *)((long)plVar12 - uVar29 * (long)plVar8);
              }
              plVar12 = (long *)((long)dStack_110 + (long)plVar12 * 8);
              goto LAB_10991fc74;
            }
          }
          else {
            *plVar30 = *plVar12;
LAB_10991fc74:
            *plVar12 = (long)plVar30;
          }
          unaff_x27 = (long *)((long)plStack_f8 + 1);
          lVar11 = *param_4;
          lVar13 = param_4[1];
          plStack_f8 = unaff_x27;
LAB_10991fc88:
          *(int *)((long)plVar30 + 0x14) = (int)uVar14;
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulong)(lVar13 - lVar11 >> 2));
      }
      plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x10);
      dVar33 = dStack_110;
      plVar8 = plStack_100;
      if (plVar12 == (long *)0x0) {
joined_r0x00010991ffac:
        while (plVar8 != (long *)0x0) {
          plVar8 = (long *)*plVar8;
          dStack_110 = dVar33;
          __ZdlPv();
          dVar33 = dStack_110;
        }
        dStack_110 = 0.0;
        puVar15 = puStack_140;
        plVar8 = plStack_130;
        if (dVar33 != 0.0) {
          __ZdlPv();
          puVar15 = puStack_140;
          plVar8 = plStack_130;
        }
        while (plVar8 != (long *)0x0) {
          plVar8 = (long *)*plVar8;
          puStack_140 = puVar15;
          __ZdlPv();
          puVar15 = puStack_140;
        }
        puStack_140 = (undefined8 *)0x0;
        if (puVar15 != (undefined8 *)0x0) {
          __ZdlPv();
        }
        return puVar15;
      }
      plVar30 = param_5 + 2;
LAB_10991fcb4:
      uVar3 = *(uint *)(plVar12 + 2);
      plVar16 = (long *)(long)(int)uVar3;
      plVar8 = *(long **)(param_1 + 0xc);
      if (plVar8 != (long *)0x0) {
        uVar14 = (long)plVar8 - 1;
        if (((ulong)plVar8 & uVar14) == 0) {
          plVar17 = (long *)(uVar14 & (ulong)plVar16);
        }
        else {
          plVar17 = plVar16;
          if (plVar8 <= plVar16) {
            uVar29 = 0;
            if (plVar8 != (long *)0x0) {
              uVar29 = (ulong)plVar16 / (ulong)plVar8;
            }
            plVar17 = (long *)((long)plVar16 - uVar29 * (long)plVar8);
          }
        }
        plVar19 = *(long **)(*(long *)(param_1 + 10) + (long)plVar17 * 8);
        if (plVar19 != (long *)0x0) {
          for (plVar19 = (long *)*plVar19; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            plVar23 = (long *)plVar19[1];
            if (plVar23 == plVar16) {
              if (*(uint *)(plVar19 + 2) == uVar3) {
                if (plStack_108 == (long *)0x0) goto LAB_1099202cc;
                plVar8 = (long *)(long)*(int *)((long)plVar19 + 0x14);
                uVar14 = (long)plStack_108 - 1;
                if (((ulong)plStack_108 & uVar14) == 0) {
                  plVar17 = (long *)(uVar14 & (ulong)plVar8);
                }
                else {
                  plVar17 = plVar8;
                  if (plStack_108 <= plVar8) {
                    uVar29 = 0;
                    if (plStack_108 != (long *)0x0) {
                      uVar29 = (ulong)plVar8 / (ulong)plStack_108;
                    }
                    plVar17 = (long *)((long)plVar8 - uVar29 * (long)plStack_108);
                  }
                }
                plVar23 = *(long **)((long)dStack_110 + (long)plVar17 * 8);
                if (plVar23 == (long *)0x0) goto LAB_1099202cc;
                goto LAB_10991ff4c;
              }
            }
            else {
              if (((ulong)plVar8 & uVar14) == 0) {
                plVar23 = (long *)((ulong)plVar23 & uVar14);
              }
              else if (plVar8 <= plVar23) {
                uVar29 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar29 = (ulong)plVar23 / (ulong)plVar8;
                }
                plVar23 = (long *)((long)plVar23 - uVar29 * (long)plVar8);
              }
              if (plVar23 != plVar17) break;
            }
          }
        }
      }
      uVar14 = 0xffffffff00000000;
      goto LAB_10991fd4c;
    }
    uStack_e0 = 0;
    uStack_88 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    FUN_1099a9f0c(&uStack_e0,&UNK_10f58a4e2,0x66,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f58a5c0,0x24);
  }
LAB_10992048c:
  puVar15 = &uStack_e0;
  func_0x0001099ab7c0();
  FUN_1094507e8(&puStack_140);
  __Unwind_Resume();
  plVar8 = (long *)puVar15[0xc];
  while (plVar8 != (long *)0x0) {
    plVar8 = (long *)*plVar8;
    __ZdlPv();
  }
  lVar11 = puVar15[10];
  puVar15[10] = 0;
  if (lVar11 != 0) {
    __ZdlPv();
  }
  plVar8 = (long *)puVar15[7];
  while (plVar8 != (long *)0x0) {
    plVar8 = (long *)*plVar8;
    __ZdlPv();
  }
  lVar11 = puVar15[5];
  puVar15[5] = 0;
  if (lVar11 != 0) {
    __ZdlPv();
  }
  return puVar15;
LAB_10991f154:
  uVar14 = *(ulong *)(lVar11 + 0x58);
  if (uVar14 != 0) {
    uVar18 = uVar14 - 1;
    if ((uVar14 & uVar18) == 0) {
      uVar20 = uVar18 & uVar29;
    }
    else {
      uVar20 = uVar29;
      if (uVar14 <= uVar29) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar29 / uVar14;
        }
        uVar20 = uVar29 - uVar20 * uVar14;
      }
    }
    plVar19 = *(long **)(*(long *)(lVar11 + 0x50) + uVar20 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      do {
        uVar21 = plVar19[1];
        if (uVar21 == uVar29) {
          if ((int)plVar19[2] == iVar2) goto LAB_10991f1f0;
        }
        else {
          if ((uVar14 & uVar18) == 0) {
            uVar21 = uVar21 & uVar18;
          }
          else if (uVar14 <= uVar21) {
            uVar4 = 0;
            if (uVar14 != 0) {
              uVar4 = uVar21 / uVar14;
            }
            uVar21 = uVar21 - uVar4 * uVar14;
          }
          if (uVar21 != uVar20) break;
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) break;
      } while( true );
    }
  }
  uStack_e0 = 0;
  uStack_88 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  FUN_1099a9f0c(&uStack_e0,&UNK_10f589c92,0x3f,3,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f589d12,0x25);
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  goto LAB_10992048c;
LAB_10991f1f0:
  dVar37 = dVar33 * (double)plVar17[3];
  for (plVar19 = (long *)plVar19[5]; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    iVar2 = *(int *)(plVar19 + 2);
    uVar14 = (ulong)iVar2;
    uVar29 = *(ulong *)(param_1 + 0x16);
    dVar38 = 0.0;
    if (uVar29 != 0) {
      uVar18 = uVar29 - 1;
      if ((uVar29 & uVar18) == 0) {
        uVar20 = uVar18 & uVar14;
      }
      else {
        uVar20 = uVar14;
        if (uVar29 <= uVar14) {
          uVar20 = 0;
          if (uVar29 != 0) {
            uVar20 = uVar14 / uVar29;
          }
          uVar20 = uVar14 - uVar20 * uVar29;
        }
      }
      plVar17 = *(long **)(*(long *)(param_1 + 0x14) + uVar20 * 8);
      if (plVar17 != (long *)0x0) {
        do {
          while( true ) {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_10991f294;
            uVar21 = plVar17[1];
            if (uVar21 != uVar14) break;
            if (*(int *)(plVar17 + 2) == iVar2) {
              dVar38 = (double)plVar17[3];
              goto LAB_10991f294;
            }
          }
          if ((uVar29 & uVar18) == 0) {
            uVar21 = uVar21 & uVar18;
          }
          else if (uVar29 <= uVar21) {
            uVar4 = 0;
            if (uVar29 != 0) {
              uVar4 = uVar21 / uVar29;
            }
            uVar21 = uVar21 - uVar4 * uVar29;
          }
        } while (uVar21 == uVar20);
      }
    }
LAB_10991f294:
    FUN_109920518(*(undefined8 *)(param_1 + 8),plVar19 + 2,&pdStack_148);
    dVar36 = dVar37 + (dVar33 - dVar38);
    if (dVar33 <= dVar38) {
      dVar36 = dVar37;
    }
    dVar37 = dVar36;
  }
  dVar33 = *(double *)(param_1 + 2);
  dVar37 = dVar37 - dVar33;
  puVar1 = (undefined4 *)param_4[1];
  for (puVar25 = (undefined4 *)*param_4; puVar25 != puVar1; puVar25 = puVar25 + 1) {
    uStack_e0 = CONCAT44(uStack_e0._4_4_,*puVar25);
    dVar38 = *(double *)(param_1 + 4);
    FUN_109920518(*(undefined8 *)(param_1 + 8),&uStack_e0,&pdStack_148);
    dVar37 = dVar37 - dVar33 * dVar38;
  }
  if (dStack_110 < dVar37) {
    iVar28 = (int)plVar16[2];
    dStack_110 = dVar37;
  }
  plVar16 = (long *)*plVar16;
  if (plVar16 == (long *)0x0) goto code_r0x00010991f310;
  goto LAB_10991f0b0;
code_r0x00010991f310:
  uStack_e0 = 0xffefffffffffffff;
  if (dStack_110 <= -1.79769313486232e+308) {
LAB_10991f32c:
    uStack_e0 = 0xffefffffffffffff;
    pdVar9 = &dStack_110;
    FUN_10991e5b0(pdVar9,&uStack_e0,&UNK_10f58a5e5);
    pdStack_148 = pdVar9;
    if (pdVar9 != (double *)0x0) {
      FUN_1099ab8e4(&uStack_e0,&UNK_10f58a4e2,0x7c,&pdStack_148);
      goto LAB_10992048c;
    }
  }
  piVar26 = (int *)param_4[1];
  if ((dStack_110 <= 0.0) && ((ulong)(long)*param_1 <= (ulong)((long)piVar26 - *param_4 >> 2)))
  goto LAB_10991fa68;
  dVar33 = dStack_110;
  if ((int *)param_4[2] <= piVar26) {
    lVar11 = *param_4;
    uVar14 = ((long)piVar26 - lVar11 >> 2) + 1;
    if (uVar14 >> 0x3e == 0) {
      uVar18 = param_4[2] - lVar11;
      uVar29 = (long)uVar18 >> 1;
      if (uVar29 <= uVar14) {
        uVar29 = uVar14;
      }
      if (0x7ffffffffffffffb < uVar18) {
        uVar29 = 0x3fffffffffffffff;
      }
      if (uVar29 >> 0x3e == 0) {
        unaff_x25 = (long *)(uVar29 << 2);
        __Znwm();
        piVar26 = (int *)((long)unaff_x25 + ((long)piVar26 - lVar11));
        plVar30 = (long *)((long)unaff_x25 + uVar29 * 4);
        piVar27 = piVar26 + 1;
        *piVar26 = iVar28;
        _memcpy();
        *param_4 = (long)unaff_x25;
        param_4[1] = (long)piVar27;
        param_4[2] = (long)plVar30;
        if (lVar11 != 0) {
          __ZdlPv(lVar11);
        }
        goto LAB_10991f3f8;
      }
      func_0x000104c4f740();
    }
    else {
      FUN_10923f788();
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1099203d4);
    (*pcVar7)();
  }
  piVar27 = piVar26 + 1;
  *piVar26 = iVar28;
LAB_10991f3f8:
  param_4[1] = (long)piVar27;
  plVar16 = (long *)(long)iVar28;
  if (plStack_138 != (long *)0x0) {
    uVar14 = (long)plStack_138 - 1;
    if (((ulong)plStack_138 & uVar14) == 0) {
      plVar17 = (long *)(uVar14 & (ulong)plVar16);
    }
    else {
      plVar17 = plVar16;
      if (plStack_138 <= plVar16) {
        uVar29 = 0;
        if (plStack_138 != (long *)0x0) {
          uVar29 = (ulong)plVar16 / (ulong)plStack_138;
        }
        plVar17 = (long *)((long)plVar16 - uVar29 * (long)plStack_138);
      }
    }
    if (((undefined8 *)puStack_140[(long)plVar17] != (undefined8 *)0x0) &&
       (pplVar10 = *(long ***)puStack_140[(long)plVar17], pplVar10 != (long **)0x0)) {
LAB_10991f444:
      plVar19 = pplVar10[1];
      if (plVar19 == plVar16) {
        if (*(int *)(pplVar10 + 2) != iVar28) goto LAB_10991f488;
        if (((ulong)plStack_138 & uVar14) == 0) {
          plVar17 = (long *)(uVar14 & (ulong)plVar16);
        }
        else {
          plVar17 = plVar16;
          if (plStack_138 <= plVar16) {
            uVar29 = 0;
            if (plStack_138 != (long *)0x0) {
              uVar29 = (ulong)plVar16 / (ulong)plStack_138;
            }
            plVar17 = (long *)((long)plVar16 - uVar29 * (long)plStack_138);
          }
        }
        plVar19 = *pplVar10;
        pplVar6 = (long **)puStack_140[(long)plVar17];
        do {
          pplVar22 = pplVar6;
          pplVar6 = (long **)*pplVar22;
        } while ((long **)*pplVar22 != pplVar10);
        if (pplVar22 == &plStack_130) {
LAB_10991f508:
          if (plVar19 == (long *)0x0) {
LAB_10991f53c:
            puStack_140[(long)plVar17] = 0;
            plVar19 = *pplVar10;
            goto LAB_10991f544;
          }
          plVar23 = (long *)plVar19[1];
          if (((ulong)plStack_138 & uVar14) == 0) {
            plVar24 = (long *)((ulong)plVar23 & uVar14);
          }
          else {
            plVar24 = plVar23;
            if (plStack_138 <= plVar23) {
              uVar29 = 0;
              if (plStack_138 != (long *)0x0) {
                uVar29 = (ulong)plVar23 / (ulong)plStack_138;
              }
              plVar24 = (long *)((long)plVar23 - uVar29 * (long)plStack_138);
            }
          }
          if (plVar24 != plVar17) goto LAB_10991f53c;
LAB_10991f54c:
          if (((ulong)plStack_138 & uVar14) == 0) {
            plVar23 = (long *)((ulong)plVar23 & uVar14);
          }
          else if (plStack_138 <= plVar23) {
            uVar14 = 0;
            if (plStack_138 != (long *)0x0) {
              uVar14 = (ulong)plVar23 / (ulong)plStack_138;
            }
            plVar23 = (long *)((long)plVar23 - uVar14 * (long)plStack_138);
          }
          if (plVar23 != plVar17) {
            puStack_140[(long)plVar23] = pplVar22;
            plVar19 = *pplVar10;
          }
        }
        else {
          plVar23 = pplVar22[1];
          if (((ulong)plStack_138 & uVar14) == 0) {
            plVar23 = (long *)((ulong)plVar23 & uVar14);
          }
          else if (plStack_138 <= plVar23) {
            uVar29 = 0;
            if (plStack_138 != (long *)0x0) {
              uVar29 = (ulong)plVar23 / (ulong)plStack_138;
            }
            plVar23 = (long *)((long)plVar23 - uVar29 * (long)plStack_138);
          }
          if (plVar23 != plVar17) goto LAB_10991f508;
LAB_10991f544:
          if (plVar19 != (long *)0x0) {
            plVar23 = (long *)plVar19[1];
            goto LAB_10991f54c;
          }
        }
        *pplVar22 = plVar19;
        *pplVar10 = (long *)0x0;
        plStack_128 = (long *)((long)plStack_128 + -1);
        __ZdlPv();
      }
      else {
        if (((ulong)plStack_138 & uVar14) == 0) {
          plVar19 = (long *)((ulong)plVar19 & uVar14);
        }
        else if (plStack_138 <= plVar19) {
          uVar29 = 0;
          if (plStack_138 != (long *)0x0) {
            uVar29 = (ulong)plVar19 / (ulong)plStack_138;
          }
          plVar19 = (long *)((long)plVar19 - uVar29 * (long)plStack_138);
        }
        if (plVar19 == plVar17) goto LAB_10991f488;
      }
    }
  }
LAB_10991f598:
  pdStack_148 = (double *)CONCAT44(pdStack_148._4_4_,iVar28);
  plVar17 = *(long **)(*(long *)(param_1 + 8) + 0x58);
  if (plVar17 != (long *)0x0) {
    uVar14 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar14) == 0) {
      plVar19 = (long *)(uVar14 & (ulong)plVar16);
    }
    else {
      plVar19 = plVar16;
      if (plVar17 <= plVar16) {
        uVar29 = 0;
        if (plVar17 != (long *)0x0) {
          uVar29 = (ulong)plVar16 / (ulong)plVar17;
        }
        plVar19 = (long *)((long)plVar16 - uVar29 * (long)plVar17);
      }
    }
    plVar23 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x50) + (long)plVar19 * 8);
    if (plVar23 != (long *)0x0) {
      do {
        while( true ) {
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) goto LAB_109920190;
          plVar24 = (long *)plVar23[1];
          if (plVar24 == plVar16) break;
          if (((ulong)plVar17 & uVar14) == 0) {
            plVar24 = (long *)((ulong)plVar24 & uVar14);
          }
          else if (plVar17 <= plVar24) {
            uVar29 = 0;
            if (plVar17 != (long *)0x0) {
              uVar29 = (ulong)plVar24 / (ulong)plVar17;
            }
            plVar24 = (long *)((long)plVar24 - uVar29 * (long)plVar17);
          }
          if (plVar24 != plVar19) goto LAB_109920190;
        }
      } while (*(int *)(plVar23 + 2) != iVar28);
      for (plVar16 = (long *)plVar23[5]; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        piVar26 = (int *)(plVar16 + 2);
        uVar14 = (ulong)*piVar26;
        uVar29 = *(ulong *)(param_1 + 0x16);
        dVar37 = 0.0;
        if (uVar29 != 0) {
          uVar18 = uVar29 - 1;
          if ((uVar29 & uVar18) == 0) {
            uVar20 = uVar18 & uVar14;
          }
          else {
            uVar20 = uVar14;
            if (uVar29 <= uVar14) {
              uVar20 = 0;
              if (uVar29 != 0) {
                uVar20 = uVar14 / uVar29;
              }
              uVar20 = uVar14 - uVar20 * uVar29;
            }
          }
          plVar17 = *(long **)(*(long *)(param_1 + 0x14) + uVar20 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_10991f6d0;
                uVar21 = plVar17[1];
                if (uVar21 != uVar14) break;
                if (*(int *)(plVar17 + 2) == *piVar26) {
                  dVar37 = (double)plVar17[3];
                  goto LAB_10991f6d0;
                }
              }
              if ((uVar29 & uVar18) == 0) {
                uVar21 = uVar21 & uVar18;
              }
              else if (uVar29 <= uVar21) {
                uVar4 = 0;
                if (uVar29 != 0) {
                  uVar4 = uVar21 / uVar29;
                }
                uVar21 = uVar21 - uVar4 * uVar29;
              }
            } while (uVar21 == uVar20);
          }
        }
LAB_10991f6d0:
        FUN_109920518(*(undefined8 *)(param_1 + 8),piVar26,&pdStack_148);
        dVar38 = dVar33;
        if (dVar37 < dVar33) {
          uVar5 = pdStack_148._0_4_;
          iVar28 = *piVar26;
          plVar17 = (long *)(long)iVar28;
          unaff_x27 = *(long **)(param_1 + 0xc);
          if (unaff_x27 != (long *)0x0) {
            uVar14 = (long)unaff_x27 - 1;
            if (((ulong)unaff_x27 & uVar14) == 0) {
              plVar30 = (long *)(uVar14 & (ulong)plVar17);
            }
            else {
              plVar30 = plVar17;
              if (unaff_x27 <= plVar17) {
                uVar29 = 0;
                if (unaff_x27 != (long *)0x0) {
                  uVar29 = (ulong)plVar17 / (ulong)unaff_x27;
                }
                plVar30 = (long *)((long)plVar17 - uVar29 * (long)unaff_x27);
              }
            }
            puVar15 = *(undefined8 **)(*(long *)(param_1 + 10) + (long)plVar30 * 8);
            if (puVar15 != (undefined8 *)0x0) {
              for (plVar19 = (long *)*puVar15; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
                plVar23 = (long *)plVar19[1];
                if (plVar23 == plVar17) {
                  if ((int)plVar19[2] == iVar28) goto LAB_10991f89c;
                }
                else {
                  if (((ulong)unaff_x27 & uVar14) == 0) {
                    plVar23 = (long *)((ulong)plVar23 & uVar14);
                  }
                  else if (unaff_x27 <= plVar23) {
                    uVar29 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar29 = (ulong)plVar23 / (ulong)unaff_x27;
                    }
                    plVar23 = (long *)((long)plVar23 - uVar29 * (long)unaff_x27);
                  }
                  if (plVar23 != plVar30) break;
                }
              }
            }
          }
          plVar19 = (long *)0x18;
          __Znwm();
          *plVar19 = 0;
          plVar19[1] = (long)plVar17;
          *(int *)(plVar19 + 2) = iVar28;
          *(undefined4 *)((long)plVar19 + 0x14) = 0;
          fVar31 = (float)(*(long *)(param_1 + 0x10) + 1);
          dVar38 = (double)(ulong)(uint)fVar31;
          if ((unaff_x27 == (long *)0x0) || ((float)param_1[0x12] * (float)unaff_x27 < fVar31)) {
            uVar14 = 1;
            if ((long *)0x2 < unaff_x27) {
              uVar14 = (ulong)(((ulong)unaff_x27 & (long)unaff_x27 - 1U) != 0);
            }
            uVar14 = uVar14 | (long)unaff_x27 << 1;
            fVar31 = fVar31 / (float)param_1[0x12];
            dVar38 = (double)(ulong)(uint)fVar31;
            uVar29 = (ulong)fVar31;
            if (uVar14 <= uVar29) {
              uVar14 = uVar29;
            }
            FUN_1093c8d00(param_1 + 10,uVar14);
            unaff_x27 = *(long **)(param_1 + 0xc);
            if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
              plVar30 = (long *)((long)unaff_x27 - 1U & (ulong)plVar17);
            }
            else {
              plVar30 = plVar17;
              if (unaff_x27 <= plVar17) {
                uVar14 = 0;
                if (unaff_x27 != (long *)0x0) {
                  uVar14 = (ulong)plVar17 / (ulong)unaff_x27;
                }
                plVar30 = (long *)((long)plVar17 - uVar14 * (long)unaff_x27);
              }
            }
          }
          lVar11 = *(long *)(param_1 + 10);
          plVar17 = *(long **)(lVar11 + (long)plVar30 * 8);
          if (plVar17 == (long *)0x0) {
            *plVar19 = *plVar8;
            *plVar8 = (long)plVar19;
            *(long **)(lVar11 + (long)plVar30 * 8) = plVar8;
            if (*plVar19 != 0) {
              plVar17 = *(long **)(*plVar19 + 8);
              if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                plVar17 = (long *)((ulong)plVar17 & (long)unaff_x27 - 1U);
              }
              else if (unaff_x27 <= plVar17) {
                uVar14 = 0;
                if (unaff_x27 != (long *)0x0) {
                  uVar14 = (ulong)plVar17 / (ulong)unaff_x27;
                }
                plVar17 = (long *)((long)plVar17 - uVar14 * (long)unaff_x27);
              }
              plVar17 = (long *)(*(long *)(param_1 + 10) + (long)plVar17 * 8);
              goto LAB_10991f88c;
            }
          }
          else {
            *plVar19 = *plVar17;
LAB_10991f88c:
            *plVar17 = (long)plVar19;
          }
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
LAB_10991f89c:
          *(undefined4 *)((long)plVar19 + 0x14) = uVar5;
          iVar28 = *piVar26;
          unaff_x25 = (long *)(long)iVar28;
          plVar17 = *(long **)(param_1 + 0x16);
          if (plVar17 != (long *)0x0) {
            uVar14 = (long)plVar17 - 1;
            if (((ulong)plVar17 & uVar14) == 0) {
              plVar30 = (long *)(uVar14 & (ulong)unaff_x25);
            }
            else {
              plVar30 = unaff_x25;
              if (plVar17 <= unaff_x25) {
                uVar29 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar29 = (ulong)unaff_x25 / (ulong)plVar17;
                }
                plVar30 = (long *)((long)unaff_x25 - uVar29 * (long)plVar17);
              }
            }
            puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x14) + (long)plVar30 * 8);
            if (puVar15 != (undefined8 *)0x0) {
              for (plVar19 = (long *)*puVar15; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
                plVar23 = (long *)plVar19[1];
                if (plVar23 == unaff_x25) {
                  if ((int)plVar19[2] == iVar28) goto LAB_10991fa50;
                }
                else {
                  if (((ulong)plVar17 & uVar14) == 0) {
                    plVar23 = (long *)((ulong)plVar23 & uVar14);
                  }
                  else if (plVar17 <= plVar23) {
                    uVar29 = 0;
                    if (plVar17 != (long *)0x0) {
                      uVar29 = (ulong)plVar23 / (ulong)plVar17;
                    }
                    plVar23 = (long *)((long)plVar23 - uVar29 * (long)plVar17);
                  }
                  if (plVar23 != plVar30) break;
                }
              }
            }
          }
          plVar19 = (long *)0x20;
          __Znwm();
          *plVar19 = 0;
          plVar19[1] = (long)unaff_x25;
          *(int *)(plVar19 + 2) = iVar28;
          plVar19[3] = 0;
          fVar31 = (float)(*(long *)(param_1 + 0x1a) + 1);
          dVar38 = (double)(ulong)(uint)fVar31;
          if ((plVar17 == (long *)0x0) || ((float)param_1[0x1c] * (float)plVar17 < fVar31)) {
            uVar14 = 1;
            if ((long *)0x2 < plVar17) {
              uVar14 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
            }
            uVar14 = uVar14 | (long)plVar17 << 1;
            fVar31 = fVar31 / (float)param_1[0x1c];
            dVar38 = (double)(ulong)(uint)fVar31;
            uVar29 = (ulong)fVar31;
            if (uVar14 <= uVar29) {
              uVar14 = uVar29;
            }
            FUN_109920770(param_1 + 0x14,uVar14);
            plVar17 = *(long **)(param_1 + 0x16);
            if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
              plVar30 = (long *)((long)plVar17 - 1U & (ulong)unaff_x25);
            }
            else {
              plVar30 = unaff_x25;
              if (plVar17 <= unaff_x25) {
                uVar14 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar14 = (ulong)unaff_x25 / (ulong)plVar17;
                }
                plVar30 = (long *)((long)unaff_x25 - uVar14 * (long)plVar17);
              }
            }
          }
          lVar11 = *(long *)(param_1 + 0x14);
          plVar23 = *(long **)(lVar11 + (long)plVar30 * 8);
          if (plVar23 == (long *)0x0) {
            *plVar19 = *plVar12;
            *plVar12 = (long)plVar19;
            *(long **)(lVar11 + (long)plVar30 * 8) = plVar12;
            if (*plVar19 != 0) {
              plVar23 = *(long **)(*plVar19 + 8);
              if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
                plVar23 = (long *)((ulong)plVar23 & (long)plVar17 - 1U);
              }
              else if (plVar17 <= plVar23) {
                uVar14 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar14 = (ulong)plVar23 / (ulong)plVar17;
                }
                plVar23 = (long *)((long)plVar23 - uVar14 * (long)plVar17);
              }
              plVar23 = (long *)(*(long *)(param_1 + 0x14) + (long)plVar23 * 8);
              goto LAB_10991fa40;
            }
          }
          else {
            *plVar19 = *plVar23;
LAB_10991fa40:
            *plVar23 = (long)plVar19;
          }
          *(long *)(param_1 + 0x1a) = *(long *)(param_1 + 0x1a) + 1;
LAB_10991fa50:
          plVar19[3] = (long)dVar33;
        }
        dVar33 = dVar38;
      }
      if (plStack_128 == (long *)0x0) goto LAB_10991fa68;
      goto LAB_10991f09c;
    }
  }
LAB_109920190:
  uStack_e0 = 0;
  uStack_88 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  FUN_1099a9f0c(&uStack_e0,&UNK_10f589c92,0x3f,3,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f589d12,0x25);
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  goto LAB_10992048c;
LAB_10991f488:
  pplVar10 = (long **)*pplVar10;
  if (pplVar10 == (long **)0x0) goto LAB_10991f598;
  goto LAB_10991f444;
  while (*(int *)(plVar23 + 2) != *(int *)((long)plVar19 + 0x14)) {
LAB_10991ff4c:
    plVar23 = (long *)*plVar23;
    if (plVar23 == (long *)0x0) goto LAB_1099202cc;
    plVar24 = (long *)plVar23[1];
    if (plVar24 != plVar8) {
      if (((ulong)plStack_108 & uVar14) == 0) {
        plVar24 = (long *)((ulong)plVar24 & uVar14);
      }
      else if (plStack_108 <= plVar24) {
        uVar29 = 0;
        if (plStack_108 != (long *)0x0) {
          uVar29 = (ulong)plVar24 / (ulong)plStack_108;
        }
        plVar24 = (long *)((long)plVar24 - uVar29 * (long)plStack_108);
      }
      if (plVar24 != plVar17) goto LAB_1099202cc;
      goto LAB_10991ff4c;
    }
  }
  uVar14 = (ulong)*(uint *)((long)plVar23 + 0x14) << 0x20;
LAB_10991fd4c:
  plVar8 = (long *)param_5[1];
  if (plVar8 != (long *)0x0) {
    uVar29 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar29) == 0) {
      unaff_x27 = (long *)(uVar29 & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar8 <= plVar16) {
        uVar18 = 0;
        if (plVar8 != (long *)0x0) {
          uVar18 = (ulong)plVar16 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar18 * (long)plVar8);
      }
    }
    plVar17 = *(long **)(*param_5 + (long)unaff_x27 * 8);
    if (plVar17 != (long *)0x0) {
      do {
        while( true ) {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_10991fddc;
          plVar19 = (long *)plVar17[1];
          if (plVar19 != plVar16) break;
          if (*(uint *)(plVar17 + 2) == uVar3) {
            uStack_e0 = 0;
            uStack_88 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_90 = 0;
            FUN_1099a9f0c(&uStack_e0,&UNK_10f589c92,0x7d,3,FUN_1099aa768,0);
            FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f58a61b,0x3f);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            goto LAB_10992048c;
          }
        }
        if (((ulong)plVar8 & uVar29) == 0) {
          plVar19 = (long *)((ulong)plVar19 & uVar29);
        }
        else if (plVar8 <= plVar19) {
          uVar18 = 0;
          if (plVar8 != (long *)0x0) {
            uVar18 = (ulong)plVar19 / (ulong)plVar8;
          }
          plVar19 = (long *)((long)plVar19 - uVar18 * (long)plVar8);
        }
      } while (plVar19 == unaff_x27);
    }
  }
LAB_10991fddc:
  plVar17 = (long *)0x18;
  __Znwm();
  *plVar17 = 0;
  plVar17[1] = (long)plVar16;
  plVar17[2] = uVar14 | uVar3;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_5 + 4) * (float)plVar8 < (float)(param_5[3] + 1))
     ) {
    uVar14 = 1;
    if ((long *)0x2 < plVar8) {
      uVar14 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar14 = uVar14 | (long)plVar8 << 1;
    uVar29 = (ulong)((float)(param_5[3] + 1) / *(float *)(param_5 + 4));
    if (uVar14 <= uVar29) {
      uVar14 = uVar29;
    }
    FUN_1093c8d00(param_5,uVar14);
    plVar8 = (long *)param_5[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar8 <= plVar16) {
        uVar14 = 0;
        if (plVar8 != (long *)0x0) {
          uVar14 = (ulong)plVar16 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar14 * (long)plVar8);
      }
    }
  }
  lVar11 = *param_5;
  plVar16 = *(long **)(lVar11 + (long)unaff_x27 * 8);
  if (plVar16 == (long *)0x0) {
    *plVar17 = *plVar30;
    *plVar30 = (long)plVar17;
    *(long **)(lVar11 + (long)unaff_x27 * 8) = plVar30;
    if (*plVar17 == 0) goto LAB_10991fef4;
    plVar16 = *(long **)(*plVar17 + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar16 = (long *)((ulong)plVar16 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar16) {
      uVar14 = 0;
      if (plVar8 != (long *)0x0) {
        uVar14 = (ulong)plVar16 / (ulong)plVar8;
      }
      plVar16 = (long *)((long)plVar16 - uVar14 * (long)plVar8);
    }
    plVar16 = (long *)(*param_5 + (long)plVar16 * 8);
  }
  else {
    *plVar17 = *plVar16;
  }
  *plVar16 = (long)plVar17;
LAB_10991fef4:
  param_5[3] = param_5[3] + 1;
  plVar12 = (long *)*plVar12;
  dVar33 = dStack_110;
  plVar8 = plStack_100;
  if (plVar12 == (long *)0x0) goto joined_r0x00010991ffac;
  goto LAB_10991fcb4;
LAB_1099202cc:
  uStack_e0 = 0;
  uStack_88 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  FUN_1099a9f0c(&uStack_e0,&UNK_10f589c92,0x3f,3,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f589d12,0x25);
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  goto LAB_10992048c;
}



/* Entry: 1099204a8; end: 109920517;  */

long FUN_1099204a8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x60);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109920518; end: 10992076f;  */

undefined8 FUN_109920518(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  iVar1 = *param_2;
  uVar4 = (ulong)iVar1;
  iVar2 = *param_3;
  uVar5 = (ulong)iVar2;
  if (iVar1 < iVar2) {
    uVar6 = *(ulong *)(param_1 + 0x80);
    if (uVar6 != 0) {
      uVar4 = (uVar4 + 0x1f73e299748a907e) - uVar5 ^ uVar5 >> 0x2b;
      uVar8 = 0xe08c1d668b756f82 - (uVar4 + uVar5) ^ uVar4 << 9;
      uVar9 = uVar5 - (uVar4 + uVar8) ^ uVar8 >> 8;
      uVar4 = uVar4 - (uVar8 + uVar9) ^ uVar9 >> 0x26;
      uVar5 = uVar8 - (uVar9 + uVar4) ^ uVar4 << 0x17;
      uVar8 = uVar9 - (uVar4 + uVar5) ^ uVar5 >> 5;
      uVar4 = uVar4 - (uVar5 + uVar8) ^ uVar8 >> 0x23;
      uVar5 = uVar5 - (uVar8 + uVar4) ^ uVar4 << 0x31;
      uVar4 = uVar8 - (uVar4 + uVar5) ^ uVar5 >> 0xb;
      uVar5 = uVar6 - 1;
      if ((uVar6 & uVar5) == 0) {
        uVar8 = uVar5 & uVar4;
      }
      else {
        uVar8 = uVar4;
        if (uVar6 <= uVar4) {
          uVar8 = 0;
          if (uVar6 != 0) {
            uVar8 = uVar4 / uVar6;
          }
          uVar8 = uVar4 - uVar8 * uVar6;
        }
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x78) + uVar8 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          while( true ) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return 0;
            }
            uVar9 = plVar7[1];
            if (uVar4 != uVar9) break;
            if (*(int *)(plVar7 + 2) == iVar1 && *(int *)((long)plVar7 + 0x14) == iVar2) {
LAB_109920768:
              return *(undefined8 *)((long)plVar7 + 0x18);
            }
          }
          if ((uVar6 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar6 <= uVar9) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar9 / uVar6;
            }
            uVar9 = uVar9 - uVar3 * uVar6;
          }
        } while (uVar9 == uVar8);
      }
    }
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x80);
    if (uVar6 != 0) {
      uVar5 = (uVar5 - uVar4) + 0x1f73e299748a907e ^ uVar4 >> 0x2b;
      uVar8 = 0xe08c1d668b756f82 - (uVar5 + uVar4) ^ uVar5 << 9;
      uVar9 = uVar4 - (uVar5 + uVar8) ^ uVar8 >> 8;
      uVar4 = uVar5 - (uVar8 + uVar9) ^ uVar9 >> 0x26;
      uVar5 = uVar8 - (uVar9 + uVar4) ^ uVar4 << 0x17;
      uVar8 = uVar9 - (uVar4 + uVar5) ^ uVar5 >> 5;
      uVar4 = uVar4 - (uVar5 + uVar8) ^ uVar8 >> 0x23;
      uVar5 = uVar5 - (uVar8 + uVar4) ^ uVar4 << 0x31;
      uVar4 = uVar8 - (uVar4 + uVar5) ^ uVar5 >> 0xb;
      uVar5 = uVar6 - 1;
      if ((uVar6 & uVar5) == 0) {
        uVar8 = uVar5 & uVar4;
      }
      else {
        uVar8 = uVar4;
        if (uVar6 <= uVar4) {
          uVar8 = 0;
          if (uVar6 != 0) {
            uVar8 = uVar4 / uVar6;
          }
          uVar8 = uVar4 - uVar8 * uVar6;
        }
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x78) + uVar8 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          while( true ) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return 0;
            }
            uVar9 = plVar7[1];
            if (uVar4 != uVar9) break;
            if (*(int *)(plVar7 + 2) == iVar2 && *(int *)((long)plVar7 + 0x14) == iVar1)
            goto LAB_109920768;
          }
          if ((uVar6 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar6 <= uVar9) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar9 / uVar6;
            }
            uVar9 = uVar9 - uVar3 * uVar6;
          }
        } while (uVar9 == uVar8);
      }
    }
  }
  return 0;
}



/* Entry: 109920770; end: 109920a57;  */

long * FUN_109920770(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar2 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    plVar9 = (long *)param_1[1];
    param_2 = (long *)0x2;
    if (plVar9 < (long *)0x2) {
LAB_1099207d4:
      lVar3 = (long)param_2 << 3;
      __Znwm();
      plVar2 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar2 != (long *)0x0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 == (long *)0x0) {
        return plVar2;
      }
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar3 + (long)plVar8 * 8);
            **(long **)(lVar3 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
      return plVar2;
    }
  }
  else {
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar2 = param_2;
    }
    plVar9 = (long *)param_1[1];
    if (plVar9 < param_2) {
      if ((ulong)param_2 >> 0x3d == 0) goto LAB_1099207d4;
      goto LAB_109920a54;
    }
  }
  if (param_2 < plVar9) {
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (param_2 < plVar9) {
      if (param_2 == (long *)0x0) {
        plVar2 = (long *)*param_1;
        *param_1 = 0;
        if (plVar2 != (long *)0x0) {
          __ZdlPv();
        }
        param_1[1] = 0;
      }
      else {
        if ((ulong)param_2 >> 0x3d != 0) {
LAB_109920a54:
          func_0x000104c4f740();
          pcStack_38 = FUN_109920a58;
          plVar2[3] = 0;
          plVar2[2] = 0;
          plVar2[5] = 0;
          plVar2[4] = 0;
          plVar2[7] = 0;
          plVar2[6] = 0;
          plVar2[10] = 0;
          plVar2[8] = 0;
          plVar2[9] = (long)(plVar2 + 10);
          plVar2[0xb] = 0;
          *plVar2 = (long)&PTR_DAT_110b1d6b0;
          plVar2[1] = 0x32aaaba7;
          lVar11 = plVar4[1];
          lVar10 = *plVar4;
          lVar13 = plVar4[3];
          lVar12 = plVar4[2];
          lVar3 = plVar4[4];
          plVar2[0x11] = 0;
          *(int *)(plVar2 + 0x10) = (int)lVar3;
          plVar2[0xf] = lVar13;
          plVar2[0xe] = lVar12;
          plVar2[0xd] = lVar11;
          plVar2[0xc] = lVar10;
          plVar2[0x12] = 0;
          plVar2[0x13] = 0;
          lVar3 = plVar4[5];
          plVar2[0x12] = plVar4[6];
          plVar2[0x11] = lVar3;
          plVar2[0x13] = plVar4[7];
          plVar4[6] = 0;
          plVar4[7] = 0;
          plVar4[5] = 0;
          lVar11 = plVar4[9];
          lVar10 = plVar4[8];
          lVar12 = plVar4[10];
          lVar3 = plVar4[0xc];
          plVar2[0x17] = plVar4[0xb];
          plVar2[0x16] = lVar12;
          plVar2[0x15] = lVar11;
          plVar2[0x14] = lVar10;
          plVar2[0x18] = lVar3;
          plVar2[0x19] = 0;
          if ((1 < *(uint *)((long)plVar2 + 100)) && (*(uint *)((long)plVar2 + 100) != 5)) {
            lStack_b0 = 0;
            uStack_58 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_60 = 0;
            plStack_50 = param_2;
            plStack_48 = param_1;
            puStack_40 = &stack0xfffffffffffffff0;
            FUN_1099a9f0c(&lStack_b0,&UNK_10f58a66b,0x35,3,FUN_1099aa768,0);
            lVar3 = lStack_a8 + 0x7540;
            FUN_1092b4db8(lVar3,&UNK_10f58a6ef,0x11);
            plVar9 = (long *)(ulong)*(uint *)((long)plVar2 + 100);
            func_0x0001099a1efc();
            plVar4 = plVar9;
            _strlen();
            FUN_1092b4db8(lVar3,plVar9,plVar4);
            FUN_1092b4db8();
            FUN_109365950();
            plVar4 = &lStack_b0;
            func_0x0001099ab7c0();
            plVar6 = (long *)plVar2[0x19];
            plVar2[0x19] = 0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 8))();
            }
            if (*plVar9 != 0) {
              plVar2[0x12] = *plVar9;
              __ZdlPv();
            }
            FUN_109920bf4(plVar2);
            __Unwind_Resume();
            *plVar4 = (long)&PTR_FUN_110b1d718;
            FUN_1099215c8(plVar4 + 9,plVar4[10]);
            __ZNSt3__15mutexD1Ev(plVar4 + 1);
            return plVar4;
          }
          return plVar2;
        }
        lVar3 = (long)param_2 << 3;
        __Znwm();
        plVar2 = (long *)*param_1;
        *param_1 = lVar3;
        if (plVar2 != (long *)0x0) {
          __ZdlPv();
        }
        plVar4 = (long *)0x0;
        param_1[1] = (long)param_2;
        do {
          *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
          plVar4 = (long *)((long)plVar4 + 1);
        } while (param_2 != plVar4);
        plVar4 = (long *)param_1[2];
        if (plVar4 != (long *)0x0) {
          plVar9 = (long *)plVar4[1];
          uVar5 = (long)param_2 - 1;
          if (((ulong)param_2 & uVar5) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar5);
          }
          else if (param_2 <= plVar9) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar9 / (ulong)param_2;
            }
            plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
          }
          *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
          plVar6 = (long *)*plVar4;
          while (plVar6 != (long *)0x0) {
            plVar8 = (long *)plVar6[1];
            if (((ulong)param_2 & uVar5) == 0) {
              plVar8 = (long *)((ulong)plVar8 & uVar5);
            }
            else if (param_2 <= plVar8) {
              uVar1 = 0;
              if (param_2 != (long *)0x0) {
                uVar1 = (ulong)plVar8 / (ulong)param_2;
              }
              plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
            }
            plVar7 = plVar6;
            if (plVar8 != plVar9) {
              lVar3 = *param_1;
              if (*(long *)(lVar3 + (long)plVar8 * 8) == 0) {
                *(long **)(lVar3 + (long)plVar8 * 8) = plVar4;
                plVar9 = plVar8;
              }
              else {
                *plVar4 = *plVar6;
                *plVar6 = **(undefined8 **)(lVar3 + (long)plVar8 * 8);
                **(long **)(lVar3 + (long)plVar8 * 8) = (long)plVar6;
                plVar7 = plVar4;
              }
            }
            plVar4 = plVar7;
            plVar6 = (long *)*plVar7;
          }
        }
      }
    }
  }
  return plVar2;
}



/* Entry: 109920a58; end: 109920bf3;  */

undefined8 * FUN_109920a58(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  *param_1 = &PTR_DAT_110b1d6b0;
  param_1[1] = 0x32aaaba7;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  param_1[0xf] = uVar9;
  param_1[0xe] = uVar8;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar6 = param_2[5];
  param_1[0x12] = param_2[6];
  param_1[0x11] = uVar6;
  param_1[0x13] = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  uVar9 = param_2[10];
  uVar6 = param_2[0xc];
  param_1[0x17] = param_2[0xb];
  param_1[0x16] = uVar9;
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x18] = uVar6;
  param_1[0x19] = 0;
  if ((1 < *(uint *)((long)param_1 + 100)) && (*(uint *)((long)param_1 + 100) != 5)) {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58a66b,0x35,3,FUN_1099aa768,0);
    lVar2 = lStack_78 + 0x7540;
    FUN_1092b4db8(lVar2,&UNK_10f58a6ef,0x11);
    plVar3 = (long *)(ulong)*(uint *)((long)param_1 + 100);
    func_0x0001099a1efc();
    plVar5 = plVar3;
    _strlen();
    FUN_1092b4db8(lVar2,plVar3,plVar5);
    FUN_1092b4db8();
    FUN_109365950();
    puVar4 = &uStack_80;
    func_0x0001099ab7c0();
    plVar5 = (long *)param_1[0x19];
    param_1[0x19] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (*plVar3 != 0) {
      param_1[0x12] = *plVar3;
      __ZdlPv();
    }
    FUN_109920bf4(param_1);
    __Unwind_Resume();
    *puVar4 = &PTR_FUN_110b1d718;
    FUN_1099215c8(puVar4 + 9,puVar4[10]);
    __ZNSt3__15mutexD1Ev(puVar4 + 1);
    return puVar4;
  }
  return param_1;
}



/* Entry: 109920bf4; end: 109920d03;  */

undefined8 * FUN_109920bf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1d718;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 109920d04; end: 1099211db;  */

void FUN_109920d04(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uStack_168;
  undefined2 uStack_164;
  undefined2 uStack_162;
  char cStack_151;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [56];
  
  uStack_140 = CONCAT17(0x11,(undefined7)uStack_140);
  uStack_148 = 0x766c6f533a3a7265;
  ppuStack_150 = (undefined **)0x766c6f53726e6743;
  uStack_140 = CONCAT62(uStack_140._2_6_,0x65);
  FUN_109997918(auStack_98,&ppuStack_150);
  if (uStack_140 < 0) {
    __ZdlPv(ppuStack_150);
  }
  if ((int)*(uint *)((long)param_3 + 0xc) < 1) {
    lVar7 = 0;
  }
  else {
    lVar7 = 1;
    _calloc(1,(ulong)*(uint *)((long)param_3 + 0xc) << 3);
    if (lVar7 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099210ec;
    }
  }
  FUN_10991cbf0(param_3,param_4);
  plVar12 = *(long **)(param_2 + 200);
  if (plVar12 == (long *)0x0) {
    if (*(int *)(param_2 + 100) == 5) {
      uVar2 = *(undefined4 *)(param_2 + 0xb8);
      uVar3 = *(undefined4 *)(param_2 + 0x70);
      uVar5 = *(undefined1 *)(param_2 + 0x74);
      uVar4 = *(undefined4 *)(param_2 + 0x80);
      uVar10 = *(undefined8 *)(param_2 + 0xc0);
      plVar12 = (long *)0x68;
      __Znwm();
      ppuStack_150 = (undefined **)0x5;
      uStack_148 = CONCAT44(uVar2,uVar3);
      uStack_140 = CONCAT71(uStack_140._1_7_,uVar5);
      uStack_140 = CONCAT44(uVar4,(undefined4)uStack_140);
      lStack_138 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_120 = 0xffffffffffffffff;
      lStack_118 = CONCAT44(lStack_118._4_4_,0xffffffff);
      lStack_110 = uVar10;
      FUN_109988eb4();
      if (lStack_138 != 0) {
        __ZdlPv();
      }
LAB_1099210c0:
      plVar8 = *(long **)(param_2 + 200);
      *(long **)(param_2 + 200) = plVar12;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
        plVar12 = *(long **)(param_2 + 200);
        if (plVar12 == (long *)0x0) goto LAB_1099210e0;
      }
      goto LAB_109920dd8;
    }
    if (*(int *)(param_2 + 100) == 1) {
      plVar12 = (long *)0x10;
      __Znwm();
      FUN_109916c8c();
      goto LAB_1099210c0;
    }
LAB_1099210e0:
    uStack_b8 = 0;
  }
  else {
LAB_109920dd8:
    (**(code **)(*plVar12 + 0x30))(plVar12,param_3,*param_5);
    uStack_b8 = *(undefined8 *)(param_2 + 200);
  }
  uStack_c0 = *param_5;
  uStack_a8 = param_5[3];
  uStack_b0 = param_5[2];
  uVar14 = (ulong)*(int *)((long)param_3 + 0xc);
  uVar9 = param_6 >> 3 & 1;
  if ((long)uVar14 <= (long)uVar9) {
    uVar9 = uVar14;
  }
  if ((param_6 & 7) != 0) {
    uVar9 = uVar14;
  }
  lVar13 = uVar14 - uVar9;
  if (0 < (long)uVar9) {
    _bzero(param_6,uVar9 << 3);
  }
  lVar11 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar9;
  if (1 < lVar13) {
    lVar1 = lVar11;
    if (lVar11 <= (long)(uVar9 + 2)) {
      lVar1 = uVar9 + 2;
    }
    _bzero(param_6 + uVar9 * 8,(lVar1 + ~uVar9 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  if (lVar11 < (long)uVar14) {
    _bzero(param_6 + (lVar13 / 2) * 0x10 + uVar9 * 8,(lVar13 % 2) * 8);
  }
  uStack_d0 = *param_5;
  ppuStack_e0 = &PTR_DAT_110b1d750;
  plStack_d8 = param_3;
  (**(code **)(*param_3 + 0x20))();
  uStack_c8 = -((ulong)param_3 >> 0x1f & 1) & 0xfffffff800000000 |
              ((ulong)param_3 & 0xffffffff) << 3;
  if ((int)param_3 < 0) {
    uStack_c8 = 0xffffffffffffffff;
  }
  __Znam();
  uStack_140 = CONCAT17(5,(undefined7)uStack_140);
  ppuStack_150 = (undefined **)CONCAT26(ppuStack_150._6_2_,0x7075746553);
  FUN_109997c38(auStack_98,&ppuStack_150);
  if (uStack_140 < 0) {
    __ZdlPv(ppuStack_150);
  }
  lVar13 = *(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88);
  if (lVar13 == 0) {
    lVar11 = 0;
    lVar13 = 0;
  }
  else {
    if (lVar13 < 0) {
      FUN_10923f788();
LAB_1099210ec:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1099210f0);
      (*pcVar6)();
    }
    lVar11 = lVar13;
    __Znwm();
    lVar13 = lVar11 + lVar13;
    _memcpy();
  }
  uStack_100 = *(undefined8 *)(param_2 + 0xa8);
  uStack_108 = *(undefined8 *)(param_2 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_2 + 0xb8);
  uStack_f8 = *(undefined8 *)(param_2 + 0xb0);
  uStack_140 = *(undefined8 *)(param_2 + 0x68);
  uStack_148 = *(undefined8 *)(param_2 + 0x60);
  uStack_130 = *(undefined8 *)(param_2 + 0x78);
  lStack_138 = *(undefined8 *)(param_2 + 0x70);
  uStack_e8 = *(undefined8 *)(param_2 + 0xc0);
  ppuStack_150 = &PTR_FUN_110b1d840;
  uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(param_2 + 0x80));
  lStack_120 = lVar11;
  lStack_118 = lVar13;
  lStack_110 = lVar13;
  FUN_10992619c(param_1,&ppuStack_150,&ppuStack_e0,lVar7,&uStack_c0,param_6);
  cStack_151 = '\x05';
  uStack_168 = 0x766c6f53;
  uStack_164 = 0x65;
  FUN_109997c38(auStack_98,&uStack_168);
  if (cStack_151 < '\0') {
    __ZdlPv(CONCAT26(uStack_162,CONCAT24(uStack_164,uStack_168)));
  }
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  uVar9 = uStack_c8;
  uStack_c8 = 0;
  if (uVar9 != 0) {
    __ZdaPv();
  }
  _free(lVar7);
  FUN_109997a28(auStack_98);
  return;
}



/* Entry: 1099211dc; end: 10992123b;  */

long FUN_1099211dc(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10992123c; end: 109921517;  */

void FUN_10992123c(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  double dVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined1 uStack_75;
  char cStack_71;
  long *plStack_70;
  undefined1 uStack_61;
  
  ppuVar6 = &puStack_f0;
  _gettimeofday(&puStack_f0,0);
  dStack_90 = (double)(long)puStack_f0 + (double)iStack_e8 * 1e-06;
  plStack_70 = param_2 + 1;
  uStack_88 = 0x6f537261656e694c;
  uStack_80 = 0x533a3a7265766c;
  uStack_79 = 0x65766c6f;
  uStack_75 = 0;
  cStack_71 = '\x13';
  if (param_3 == 0) {
    puStack_f0 = (undefined8 *)0x0;
    uStack_98 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    FUN_1099a9f0c(&puStack_f0,&UNK_10f58a767,0x138,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_e4,iStack_e8) + 0x7540,&UNK_10f58a7ec,0x1b);
  }
  else if (param_4 == 0) {
    puStack_f0 = (undefined8 *)0x0;
    uStack_98 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    FUN_1099a9f0c(&puStack_f0,&UNK_10f58a767,0x139,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_e4,iStack_e8) + 0x7540,&UNK_10f58a808,0x1b);
  }
  else {
    if (param_6 != 0) {
      (**(code **)(*param_2 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6);
      plVar2 = plStack_70;
      _gettimeofday(&puStack_f0,0);
      dVar1 = dStack_90;
      puVar8 = puStack_f0;
      __ZNSt3__15mutex4lockEv(plVar2);
      puStack_f0 = &uStack_88;
      plVar5 = plVar2 + 8;
      FUN_109921a64(plVar5,puStack_f0,&UNK_10dd5b8f9,&puStack_f0,&uStack_61);
      plVar5[7] = (long)((((double)(long)puVar8 + (double)iStack_e8 * 1e-06) - dVar1) +
                        (double)plVar5[7]);
      *(int *)(plVar5 + 8) = (int)plVar5[8] + 1;
      __ZNSt3__15mutex6unlockEv(plVar2);
      if (cStack_71 < '\0') {
        __ZdlPv(uStack_88);
      }
      return;
    }
    puStack_f0 = (undefined8 *)0x0;
    uStack_98 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    FUN_1099a9f0c(&puStack_f0,&UNK_10f58a767,0x13a,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_e4,iStack_e8) + 0x7540,&UNK_10f58a243,0x1b);
  }
  func_0x0001099ab7c0();
  FUN_109921980(&dStack_90);
  __Unwind_Resume();
  puVar7 = extraout_x8 + 1;
  *puVar7 = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = puVar7;
  puVar8 = *(undefined8 **)((long)ppuVar6 + 0x48);
  while (puVar8 != (undefined8 *)((long)ppuVar6 + 0x50)) {
    FUN_109921df4(extraout_x8,puVar7,puVar8 + 4,puVar8 + 4);
    puVar3 = (undefined8 *)puVar8[1];
    puVar9 = puVar8;
    if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
      do {
        puVar8 = (undefined8 *)puVar9[2];
        bVar4 = (undefined8 *)*puVar8 != puVar9;
        puVar9 = puVar8;
      } while (bVar4);
    }
    else {
      do {
        puVar8 = puVar3;
        puVar3 = (undefined8 *)*puVar8;
      } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
    }
  }
  return;
}



/* Entry: 109921518; end: 1099215bf;  */

void FUN_109921518(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  param_1[2] = 0;
  *param_1 = puVar3;
  plVar4 = *(long **)(param_2 + 0x48);
  while (plVar4 != (long *)(param_2 + 0x50)) {
    FUN_109921df4(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1099215c0; end: 1099215c7;  */

void FUN_1099215c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1099215c4);
  (*pcVar1)();
}



/* Entry: 1099215c8; end: 109921647;  */

void FUN_1099215c8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1099215c8(param_1,*param_2);
    FUN_1099215c8(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109921648; end: 10992195f;  */

void FUN_109921648(long param_1,double *param_2,double *param_3)

{
  long *plVar1;
  double *pdVar2;
  double *pdVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  ulong uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x20))();
  if (0 < (int)plVar1) {
    _bzero(uVar11,((ulong)plVar1 & 0xffffffff) << 3);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_3);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    pdVar3 = *(double **)(param_1 + 0x10);
    uVar5 = (ulong)(int)plVar1;
    uVar4 = (ulong)param_3 >> 3 & 1;
    if ((long)(int)plVar1 <= (long)uVar4) {
      uVar4 = uVar5;
    }
    if (((ulong)param_3 & 7) != 0) {
      uVar4 = uVar5;
    }
    lVar6 = uVar5 - uVar4;
    pdVar2 = param_3;
    pdVar7 = pdVar3;
    pdVar9 = param_2;
    uVar10 = uVar4;
    if (0 < (long)uVar4) {
      do {
        *pdVar2 = *pdVar7 * *pdVar7 * *pdVar9 + *pdVar2;
        uVar10 = uVar10 - 1;
        pdVar2 = pdVar2 + 1;
        pdVar7 = pdVar7 + 1;
        pdVar9 = pdVar9 + 1;
      } while (uVar10 != 0);
    }
    lVar8 = (lVar6 - (lVar6 >> 0x3f) & 0xfffffffffffffffeU) + uVar4;
    if (1 < lVar6) {
      pdVar2 = param_3 + uVar4;
      pdVar7 = param_2 + uVar4;
      pdVar9 = pdVar3 + uVar4;
      uVar10 = uVar4;
      do {
        dVar12 = *pdVar9;
        dVar13 = *pdVar7;
        pdVar2[1] = pdVar2[1] + pdVar9[1] * pdVar9[1] * pdVar7[1];
        *pdVar2 = *pdVar2 + dVar12 * dVar12 * dVar13;
        uVar10 = uVar10 + 2;
        pdVar2 = pdVar2 + 2;
        pdVar7 = pdVar7 + 2;
        pdVar9 = pdVar9 + 2;
      } while ((long)uVar10 < lVar8);
    }
    if (lVar8 < (long)uVar5) {
      lVar8 = lVar6 / 2;
      lVar6 = lVar6 % 2;
      pdVar3 = pdVar3 + uVar4 + lVar8 * 2;
      pdVar2 = param_2 + uVar4 + lVar8 * 2;
      pdVar7 = param_3 + uVar4 + lVar8 * 2;
      do {
        *pdVar7 = *pdVar3 * *pdVar3 * *pdVar2 + *pdVar7;
        lVar6 = lVar6 + -1;
        pdVar3 = pdVar3 + 1;
        pdVar2 = pdVar2 + 1;
        pdVar7 = pdVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  return;
}



/* Entry: 109921960; end: 10992197f;  */

void FUN_109921960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010992196c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 109921980; end: 109921a63;  */

double * FUN_109921980(double *param_1)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined1 uStack_51;
  double *pdStack_50;
  int iStack_48;
  
  dVar4 = param_1[4];
  _gettimeofday(&pdStack_50,0);
  pdVar2 = pdStack_50;
  dVar5 = *param_1;
  __ZNSt3__15mutex4lockEv(dVar4);
  pdVar1 = param_1 + 1;
  lVar3 = (long)dVar4 + 0x40;
  pdStack_50 = pdVar1;
  FUN_109921a64(lVar3,pdVar1,&UNK_10dd5b8f9,&pdStack_50,&uStack_51);
  *(double *)(lVar3 + 0x38) =
       (((double)(long)pdVar2 + (double)iStack_48 * 1e-06) - dVar5) + *(double *)(lVar3 + 0x38);
  *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
  __ZNSt3__15mutex6unlockEv(dVar4);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*pdVar1);
  }
  return param_1;
}



/* Entry: 109921a64; end: 109921da3;  */

undefined1  [16]
FUN_109921a64(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  plVar14 = param_1 + 1;
  plVar8 = (long *)*plVar14;
  plVar10 = plVar14;
  plVar9 = plVar14;
  if (plVar8 != (long *)0x0) {
    puVar13 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar13 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar6 = plVar8;
        uVar2 = plVar6[5];
        plVar8 = (long *)plVar6[4];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          uVar2 = (ulong)*(byte *)((long)plVar6 + 0x37);
          plVar8 = plVar6 + 4;
        }
        uVar3 = uVar2;
        if (uVar1 <= uVar2) {
          uVar3 = uVar1;
        }
        puVar5 = puVar13;
        _memcmp(puVar13,plVar8,uVar3);
        plVar10 = plVar6;
        if ((int)puVar5 == 0) break;
        if ((int)puVar5 < 0) goto LAB_109921b1c;
LAB_109921af8:
        _memcmp(plVar8,puVar13,uVar3);
        if ((int)plVar8 == 0) {
          if (uVar1 <= uVar2) goto LAB_109921c24;
        }
        else if (-1 < (int)plVar8) {
LAB_109921c24:
          uVar7 = 0;
          goto LAB_109921d6c;
        }
        plVar8 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar9 = plVar6 + 1;
          goto LAB_109921b40;
        }
      }
      if (uVar2 <= uVar1) goto LAB_109921af8;
LAB_109921b1c:
      plVar8 = (long *)*plVar6;
      plVar9 = plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_109921b40:
  plVar6 = (long *)0x48;
  __Znwm();
  plVar8 = (long *)*param_4;
  if (*(char *)((long)plVar8 + 0x17) < '\0') {
    func_0x000107c3192c(plVar6 + 4,*plVar8,plVar8[1]);
  }
  else {
    lVar16 = plVar8[1];
    lVar12 = *plVar8;
    plVar6[6] = plVar8[2];
    plVar6[5] = lVar16;
    plVar6[4] = lVar12;
  }
  plVar6[7] = 0;
  plVar6[8] = 0;
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = (long)plVar10;
  *plVar9 = (long)plVar6;
  plVar8 = plVar6;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar8 = (long *)*plVar9;
  }
  plVar14 = (long *)*plVar14;
  bVar4 = plVar8 == plVar14;
  *(bool *)(plVar8 + 3) = bVar4;
  do {
    if ((bVar4) || (plVar10 = (long *)plVar8[2], (*(byte *)(plVar10 + 3) & 1) != 0))
    goto LAB_109921d58;
    plVar9 = (long *)plVar10[2];
    plVar11 = (long *)*plVar9;
    if (plVar11 == plVar10) {
      if ((plVar9[1] == 0) || (plVar15 = (long *)(plVar9[1] + 0x18), *(char *)plVar15 == '\x01')) {
        if ((long *)*plVar10 != plVar8) {
          plVar14 = (long *)plVar10[1];
          lVar12 = *plVar14;
          plVar10[1] = lVar12;
          plVar8 = plVar10;
          if (lVar12 != 0) {
            *(long **)(lVar12 + 0x10) = plVar10;
            plVar9 = (long *)plVar10[2];
            plVar8 = (long *)*plVar9;
          }
          plVar14[2] = (long)plVar9;
          lVar12 = 0;
          if (plVar8 != plVar10) {
            lVar12 = 8;
          }
          *(long **)((long)plVar9 + lVar12) = plVar14;
          *plVar14 = (long)plVar10;
          plVar10[2] = (long)plVar14;
          plVar9 = (long *)plVar14[2];
          plVar11 = (long *)*plVar9;
          plVar10 = plVar14;
        }
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(plVar9 + 3) = 0;
        lVar12 = plVar11[1];
        *plVar9 = lVar12;
        if (lVar12 != 0) {
          *(long **)(lVar12 + 0x10) = plVar9;
        }
        puVar13 = (undefined8 *)plVar9[2];
        plVar11[2] = (long)puVar13;
        lVar12 = 0;
        if ((long *)*puVar13 != plVar9) {
          lVar12 = 8;
        }
        *(long **)((long)puVar13 + lVar12) = plVar11;
        plVar11[1] = (long)plVar9;
        plVar9[2] = (long)plVar11;
        goto LAB_109921d58;
      }
    }
    else if ((plVar11 == (long *)0x0) || (plVar15 = plVar11 + 3, (char)*plVar15 == '\x01')) {
      plVar14 = (long *)*plVar10;
      if (plVar14 == plVar8) {
        lVar12 = plVar14[1];
        *plVar10 = lVar12;
        if (lVar12 != 0) {
          *(long **)(lVar12 + 0x10) = plVar10;
          plVar9 = (long *)plVar10[2];
        }
        plVar14[2] = (long)plVar9;
        lVar12 = 0;
        if ((long *)*plVar9 != plVar10) {
          lVar12 = 8;
        }
        *(long **)((long)plVar9 + lVar12) = plVar14;
        plVar14[1] = (long)plVar10;
        plVar10[2] = (long)plVar14;
        plVar9 = (long *)plVar14[2];
        plVar10 = plVar14;
      }
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(plVar9 + 3) = 0;
      plVar8 = (long *)plVar9[1];
      lVar12 = *plVar8;
      plVar9[1] = lVar12;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 0x10) = plVar9;
      }
      puVar13 = (undefined8 *)plVar9[2];
      plVar8[2] = (long)puVar13;
      lVar12 = 0;
      if ((long *)*puVar13 != plVar9) {
        lVar12 = 8;
      }
      *(long **)((long)puVar13 + lVar12) = plVar8;
      *plVar8 = (long)plVar9;
      plVar9[2] = (long)plVar8;
LAB_109921d58:
      param_1[2] = param_1[2] + 1;
      uVar7 = 1;
LAB_109921d6c:
      auVar17._8_8_ = uVar7;
      auVar17._0_8_ = plVar6;
      return auVar17;
    }
    *(undefined1 *)(plVar10 + 3) = 1;
    bVar4 = plVar9 == plVar14;
    *(bool *)(plVar9 + 3) = bVar4;
    *(char *)plVar15 = '\x01';
    plVar8 = plVar9;
  } while( true );
}



/* Entry: 109921da4; end: 109921df3;  */

long * FUN_109921da4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (((char)param_1[2] == '\x01') && (*(char *)(lVar1 + 0x37) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109921df4; end: 109922087;  */

undefined1  [16] FUN_109921df4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  plVar8 = param_1;
  FUN_109922088(param_1,param_2,&lStack_38,auStack_40,param_3);
  plVar11 = (long *)*plVar8;
  if (plVar11 != (long *)0x0) {
    uVar2 = 0;
LAB_10992205c:
    auVar12._8_8_ = uVar2;
    auVar12._0_8_ = plVar11;
    return auVar12;
  }
  plVar11 = (long *)0x48;
  __Znwm();
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(plVar11 + 4,*param_4,param_4[1]);
  }
  else {
    lVar6 = *param_4;
    plVar11[5] = param_4[1];
    plVar11[4] = lVar6;
    plVar11[6] = param_4[2];
  }
  lVar6 = param_4[3];
  plVar11[8] = param_4[4];
  plVar11[7] = lVar6;
  *plVar11 = 0;
  plVar11[1] = 0;
  plVar11[2] = lStack_38;
  *plVar8 = (long)plVar11;
  plVar9 = plVar11;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar9 = (long *)*plVar8;
  }
  plVar8 = (long *)param_1[1];
  bVar1 = plVar9 == plVar8;
  *(bool *)(plVar9 + 3) = bVar1;
joined_r0x000109921eb0:
  if ((bVar1) || (plVar4 = (long *)plVar9[2], (*(byte *)(plVar4 + 3) & 1) != 0)) goto LAB_10992204c;
  plVar3 = (long *)plVar4[2];
  plVar5 = (long *)*plVar3;
  if (plVar5 == plVar4) {
    if ((plVar3[1] == 0) || (plVar10 = (long *)(plVar3[1] + 0x18), *(char *)plVar10 == '\x01')) {
      if ((long *)*plVar4 != plVar9) {
        plVar9 = (long *)plVar4[1];
        lVar6 = *plVar9;
        plVar4[1] = lVar6;
        plVar8 = plVar4;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar4;
          plVar3 = (long *)plVar4[2];
          plVar8 = (long *)*plVar3;
        }
        plVar9[2] = (long)plVar3;
        lVar6 = 0;
        if (plVar8 != plVar4) {
          lVar6 = 8;
        }
        *(long **)((long)plVar3 + lVar6) = plVar9;
        *plVar9 = (long)plVar4;
        plVar4[2] = (long)plVar9;
        plVar3 = (long *)plVar9[2];
        plVar5 = (long *)*plVar3;
        plVar4 = plVar9;
      }
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar3 + 3) = 0;
      lVar6 = plVar5[1];
      *plVar3 = lVar6;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar3;
      }
      puVar7 = (undefined8 *)plVar3[2];
      plVar5[2] = (long)puVar7;
      lVar6 = 0;
      if ((long *)*puVar7 != plVar3) {
        lVar6 = 8;
      }
      *(long **)((long)puVar7 + lVar6) = plVar5;
      plVar5[1] = (long)plVar3;
      plVar3[2] = (long)plVar5;
      goto LAB_10992204c;
    }
  }
  else if ((plVar5 == (long *)0x0) || (plVar10 = plVar5 + 3, (char)*plVar10 == '\x01')) {
    plVar8 = (long *)*plVar4;
    if (plVar8 == plVar9) {
      lVar6 = plVar8[1];
      *plVar4 = lVar6;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar4;
        plVar3 = (long *)plVar4[2];
      }
      plVar8[2] = (long)plVar3;
      lVar6 = 0;
      if ((long *)*plVar3 != plVar4) {
        lVar6 = 8;
      }
      *(long **)((long)plVar3 + lVar6) = plVar8;
      plVar8[1] = (long)plVar4;
      plVar4[2] = (long)plVar8;
      plVar3 = (long *)plVar8[2];
      plVar4 = plVar8;
    }
    *(undefined1 *)(plVar4 + 3) = 1;
    *(undefined1 *)(plVar3 + 3) = 0;
    plVar8 = (long *)plVar3[1];
    lVar6 = *plVar8;
    plVar3[1] = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 0x10) = plVar3;
    }
    puVar7 = (undefined8 *)plVar3[2];
    plVar8[2] = (long)puVar7;
    lVar6 = 0;
    if ((long *)*puVar7 != plVar3) {
      lVar6 = 8;
    }
    *(long **)((long)puVar7 + lVar6) = plVar8;
    *plVar8 = (long)plVar3;
    plVar3[2] = (long)plVar8;
LAB_10992204c:
    param_1[2] = param_1[2] + 1;
    uVar2 = 1;
    goto LAB_10992205c;
  }
  *(undefined1 *)(plVar4 + 3) = 1;
  bVar1 = plVar3 == plVar8;
  *(bool *)(plVar3 + 3) = bVar1;
  *(char *)plVar10 = '\x01';
  plVar9 = plVar3;
  goto joined_r0x000109921eb0;
}



/* Entry: 109922088; end: 1099225b7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109922088(undefined8 *param_1,long *param_2,long *param_3,long *param_4,
                    undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar1 = param_1 + 1;
  if (plVar1 == param_2) {
LAB_109922150:
    plVar8 = (long *)*param_2;
    plVar10 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar11 = param_2;
      plVar9 = plVar8;
      if (plVar8 == (long *)0x0) {
        do {
          plVar10 = (long *)plVar11[2];
          bVar6 = (long *)*plVar10 == plVar11;
          plVar11 = plVar10;
        } while (bVar6);
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)plVar10[1];
        } while ((long *)plVar10[1] != (long *)0x0);
      }
      uVar2 = plVar10[5];
      plVar11 = (long *)plVar10[4];
      if (-1 < (char)*(byte *)((long)plVar10 + 0x37)) {
        uVar2 = (ulong)*(byte *)((long)plVar10 + 0x37);
        plVar11 = plVar10 + 4;
      }
      uVar3 = param_5[1];
      puVar5 = (undefined8 *)*param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        uVar3 = (ulong)*(byte *)((long)param_5 + 0x17);
        puVar5 = param_5;
      }
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = uVar2;
      }
      _memcmp(plVar11,puVar5,uVar4);
      if ((int)plVar11 == 0) {
        if (uVar3 <= uVar2) goto LAB_1099221e8;
      }
      else if (-1 < (int)plVar11) {
LAB_1099221e8:
        plVar10 = plVar1;
        plVar8 = (long *)*plVar1;
        while (plVar8 != (long *)0x0) {
          uVar2 = plVar8[5];
          plVar11 = (long *)plVar8[4];
          if (-1 < (char)*(byte *)((long)plVar8 + 0x37)) {
            uVar2 = (ulong)*(byte *)((long)plVar8 + 0x37);
            plVar11 = plVar8 + 4;
          }
          uVar4 = uVar2;
          if (uVar3 <= uVar2) {
            uVar4 = uVar3;
          }
          puVar7 = puVar5;
          _memcmp(puVar5,plVar11,uVar4);
          plVar10 = plVar8;
          if ((int)puVar7 == 0) {
            if (uVar2 <= uVar3) goto LAB_109922230;
LAB_109922254:
            plVar1 = plVar8;
            plVar8 = (long *)*plVar8;
          }
          else {
            if ((int)puVar7 < 0) goto LAB_109922254;
LAB_109922230:
            _memcmp(plVar11,puVar5,uVar4);
            if ((int)plVar11 == 0) {
              if (uVar3 <= uVar2) break;
            }
            else if (-1 < (int)plVar11) break;
            plVar1 = plVar8 + 1;
            plVar8 = (long *)plVar8[1];
          }
        }
        *param_3 = (long)plVar10;
        return plVar1;
      }
    }
    if (plVar8 != (long *)0x0) {
      *param_3 = (long)plVar10;
      return plVar10 + 1;
    }
    *param_3 = (long)param_2;
    return param_2;
  }
  uVar2 = param_5[1];
  puVar5 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar5 = param_5;
  }
  uVar3 = param_2[5];
  plVar10 = (long *)param_2[4];
  if (-1 < (char)*(byte *)((long)param_2 + 0x37)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x37);
    plVar10 = param_2 + 4;
  }
  uVar4 = uVar3;
  if (uVar2 <= uVar3) {
    uVar4 = uVar2;
  }
  puVar7 = puVar5;
  _memcmp(puVar5,plVar10,uVar4);
  if ((int)puVar7 == 0) {
    if (uVar2 < uVar3) goto LAB_109922150;
  }
  else if ((int)puVar7 < 0) goto LAB_109922150;
  _memcmp(plVar10,puVar5,uVar4);
  if ((int)plVar10 == 0) {
    if (uVar2 <= uVar3) goto LAB_109922138;
  }
  else if (-1 < (int)plVar10) {
LAB_109922138:
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
    return param_4;
  }
  plVar11 = (long *)param_2[1];
  plVar10 = param_2;
  plVar8 = plVar11;
  if (plVar11 == (long *)0x0) {
    do {
      plVar9 = (long *)plVar10[2];
      bVar6 = (long *)*plVar9 != plVar10;
      plVar10 = plVar9;
    } while (bVar6);
  }
  else {
    do {
      plVar9 = plVar8;
      plVar8 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
  if (plVar9 != plVar1) {
    uVar3 = plVar9[5];
    plVar10 = (long *)plVar9[4];
    if (-1 < (char)*(byte *)((long)plVar9 + 0x37)) {
      uVar3 = (ulong)*(byte *)((long)plVar9 + 0x37);
      plVar10 = plVar9 + 4;
    }
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = uVar2;
    }
    puVar7 = puVar5;
    _memcmp(puVar5,plVar10,uVar4);
    if ((int)puVar7 == 0) {
      if (uVar3 <= uVar2) goto LAB_10992235c;
    }
    else if (-1 < (int)puVar7) {
LAB_10992235c:
      plVar10 = plVar1;
      plVar8 = (long *)*plVar1;
      while (plVar8 != (long *)0x0) {
        uVar3 = plVar8[5];
        plVar11 = (long *)plVar8[4];
        if (-1 < (char)*(byte *)((long)plVar8 + 0x37)) {
          uVar3 = (ulong)*(byte *)((long)plVar8 + 0x37);
          plVar11 = plVar8 + 4;
        }
        uVar4 = uVar3;
        if (uVar2 <= uVar3) {
          uVar4 = uVar2;
        }
        puVar7 = puVar5;
        _memcmp(puVar5,plVar11,uVar4);
        plVar10 = plVar8;
        if ((int)puVar7 == 0) {
          if (uVar3 <= uVar2) goto LAB_1099223a4;
LAB_1099223c8:
          plVar1 = plVar8;
          plVar8 = (long *)*plVar8;
        }
        else {
          if ((int)puVar7 < 0) goto LAB_1099223c8;
LAB_1099223a4:
          _memcmp(plVar11,puVar5,uVar4);
          if ((int)plVar11 == 0) {
            if (uVar2 <= uVar3) break;
          }
          else if (-1 < (int)plVar11) break;
          plVar1 = plVar8 + 1;
          plVar8 = (long *)plVar8[1];
        }
      }
      *param_3 = (long)plVar10;
      return plVar1;
    }
  }
  if (plVar11 != (long *)0x0) {
    *param_3 = (long)plVar9;
    return plVar9;
  }
  *param_3 = (long)param_2;
  return param_2 + 1;
}



/* Entry: 1099225b8; end: 10992285f;  */

undefined8 * FUN_1099225b8(undefined8 *param_1,int param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_DAT_110b1d7a8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(int *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_2 != -1) {
    if (param_2 < -1) {
      FUN_10923f788();
      goto LAB_1099227e0;
    }
    lVar4 = (long)(param_2 + 1) << 2;
    __Znwm();
    _bzero();
    lVar1 = lVar4 + (long)(param_2 + 1) * 4;
    param_1[2] = lVar4;
    param_1[3] = lVar1;
    param_1[4] = lVar1;
  }
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_10923f788();
LAB_1099227e0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1099227e4);
      (*pcVar2)();
    }
    lVar5 = (long)param_4;
    lVar4 = lVar5 << 2;
    __Znwm();
    _bzero();
    lVar1 = lVar4 + lVar5 * 4;
    param_1[5] = lVar4;
    param_1[6] = lVar1;
    param_1[7] = lVar1;
    lVar4 = lVar5 << 3;
    __Znwm();
    _bzero();
    lVar1 = lVar4 + lVar5 * 8;
    param_1[8] = lVar4;
    param_1[9] = lVar1;
    param_1[10] = lVar1;
  }
  if (piRam000000011373cae0 == (int *)0x0) {
    iVar3 = 0x1373cae0;
    FUN_1099adbb8(0x11373cae0,0x11382bb14,&UNK_10f58a88b,1);
    if (iVar3 == 0) {
      return param_1;
    }
  }
  else if (*piRam000000011373cae0 < 1) {
    return param_1;
  }
  uStack_b0 = 0;
  uStack_58 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  FUN_1099a9f0c(&uStack_b0,&UNK_10f58a88b,0xab,0,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_a8 + 0x7540,&UNK_10f58a920,0xb);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  FUN_1099ab3b0(&uStack_b0);
  return param_1;
}



/* Entry: 109922860; end: 109922bcf;  */

long * FUN_109922860(undefined8 *param_1,long *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *unaff_x19;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
  lVar17 = param_2[5];
  puVar2 = (uint *)(param_2 + 1);
  lVar11 = param_2[3];
  lVar3 = param_2[4];
  if (param_3 != 0) {
    puVar2 = (uint *)((long)param_2 + 0xc);
    lVar11 = param_2[4];
    lVar3 = param_2[3];
  }
  uVar1 = *puVar2;
  plVar14 = (long *)(ulong)uVar1;
  iVar9 = *(int *)((long)param_2 + 0x14);
  lVar15 = (long)iVar9;
  if (iVar9 == 0) {
    unaff_x19 = (long *)0x0;
    plVar16 = (long *)0x0;
  }
  else {
    if (iVar9 < 0) goto LAB_109922b68;
    unaff_x19 = (long *)(lVar15 << 2);
    __Znwm();
    _bzero();
    lVar5 = 0;
    do {
      *(int *)((long)unaff_x19 + lVar5 * 4) = (int)lVar5;
      lVar5 = lVar5 + 1;
    } while (lVar15 != lVar5);
    plVar16 = (long *)((long)unaff_x19 + lVar15 * 4);
  }
  lVar5 = (long)plVar16 - (long)unaff_x19 >> 2;
  lVar15 = 0;
  if (plVar16 != unaff_x19) {
    lVar15 = LZCOUNT(lVar5) * -2 + 0x7e;
  }
  lStack_c8 = lVar11;
  lStack_c0 = lVar3;
  FUN_1099249e8(unaff_x19,plVar16,&lStack_c8,lVar15,1);
  if (piRam000000011373cb00 == (int *)0x0) {
    iVar9 = 0x1373cb00;
    FUN_1099adbb8(0x11373cb00,0x11382bb14,&UNK_10f58a88b,1);
    if (iVar9 != 0) goto LAB_109922964;
  }
  else if (0 < *piRam000000011373cb00) {
LAB_109922964:
    lStack_c8 = 0;
    uStack_70 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_1099a9f0c(&lStack_c8,&UNK_10f58a88b,0xd6,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58a920,0xb);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
    FUN_1099ab3b0(&lStack_c8);
  }
  plVar14 = (long *)0x90;
  __Znwm();
  plVar4 = plVar14;
  FUN_1099225b8();
  *param_1 = plVar14;
  if (uVar1 != 0) {
    piVar6 = (int *)plVar14[2];
    puVar7 = (undefined4 *)plVar14[5];
    puVar10 = (undefined8 *)plVar14[8];
    *piVar6 = 0;
    plVar12 = unaff_x19;
    if (plVar16 != unaff_x19) {
      do {
        lVar15 = (long)(int)*plVar12;
        lVar13 = (long)*(int *)(lVar11 + lVar15 * 4);
        piVar6[lVar13 + 1] = piVar6[lVar13 + 1] + 1;
        *puVar7 = *(undefined4 *)(lVar3 + lVar15 * 4);
        *puVar10 = *(undefined8 *)(lVar17 + lVar15 * 8);
        lVar5 = lVar5 + -1;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        plVar12 = (long *)((long)plVar12 + 4);
      } while (lVar5 != 0);
    }
    if (0 < (int)uVar1) {
      iVar9 = *piVar6;
      lVar11 = (ulong)(uVar1 + 1) - 1;
      piVar8 = piVar6;
      do {
        piVar8 = piVar8 + 1;
        iVar9 = *piVar8 + iVar9;
        *piVar8 = iVar9;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    iStack_64 = *(int *)((long)param_2 + 0x14);
    lStack_c8 = CONCAT44(lStack_c8._4_4_,piVar6[(int)plVar14[1]]);
    if (piVar6[(int)plVar14[1]] != iStack_64) {
      plVar16 = &lStack_c8;
      FUN_109904144(plVar16,&iStack_64,&UNK_10f58a96e);
      plVar4 = (long *)0x0;
      plStack_d0 = plVar16;
      if (plVar16 != (long *)0x0) {
        FUN_1099ab8e4(&lStack_c8,&UNK_10f58a88b,0xf8,&plStack_d0);
        param_2 = &lStack_c8;
        func_0x0001099ab7c0();
LAB_109922b68:
        FUN_10923f788();
        *param_1 = 0;
        (**(code **)(*plVar14 + 8))(plVar14);
        if (unaff_x19 != (long *)0x0) {
          __ZdlPv(unaff_x19);
        }
        __Unwind_Resume();
        return (long *)param_2[8];
      }
    }
  }
  if (unaff_x19 != (long *)0x0) {
    __ZdlPv(unaff_x19);
    plVar4 = unaff_x19;
  }
  return plVar4;
}



/* Entry: 109922bd0; end: 109922be7;  */

undefined8 FUN_109922bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109922be8; end: 109922e5b;  */

undefined8 * FUN_109922be8(undefined8 *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  
  *param_1 = &PTR_DAT_110b1d7a8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  if (param_2 == 0) {
    uStack_c8 = 0;
    uStack_70 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_1099a9f0c(&uStack_c8,&UNK_10f58a88b,0xfe,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58a99d,0x22);
LAB_109922df8:
    puVar4 = &uStack_c8;
    func_0x0001099ab7c0();
    if (param_1[0xf] != 0) {
      param_1[0x10] = param_1[0xf];
      __ZdlPv();
    }
    lVar8 = param_1[0xc];
    if (lVar8 != 0) {
      param_1[0xd] = lVar8;
      __ZdlPv();
    }
    if (param_1[8] != 0) {
      param_1[9] = param_1[8];
      __ZdlPv();
    }
    if (param_1[5] != 0) {
      param_1[6] = param_1[5];
      __ZdlPv();
    }
    lVar8 = param_1[2];
    if (lVar8 != 0) {
      param_1[3] = lVar8;
      __ZdlPv();
    }
    __Unwind_Resume();
    *puVar4 = &PTR_DAT_110b1d7a8;
    if (puVar4[0xf] != 0) {
      puVar4[0x10] = puVar4[0xf];
      __ZdlPv();
    }
    if (puVar4[0xc] != 0) {
      puVar4[0xd] = puVar4[0xc];
      __ZdlPv();
    }
    if (puVar4[8] != 0) {
      puVar4[9] = puVar4[8];
      __ZdlPv();
    }
    if (puVar4[5] != 0) {
      puVar4[6] = puVar4[5];
      __ZdlPv();
    }
    if (puVar4[2] != 0) {
      puVar4[3] = puVar4[2];
      __ZdlPv();
    }
    return puVar4;
  }
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((0xfffffffe < param_3) || ((int)param_3 < -1)) {
    FUN_10923f788();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109922dec);
    (*pcVar2)();
  }
  lVar8 = (long)(int)(param_3 + 1);
  puVar7 = (undefined4 *)(lVar8 * 4);
  __Znwm();
  _bzero();
  param_1[2] = puVar7;
  param_1[3] = puVar7 + lVar8;
  param_1[4] = puVar7 + lVar8;
  if (param_3 == 0) {
    uVar5 = 0;
    *puVar7 = 0;
  }
  else {
    uVar9 = (ulong)param_3;
    lVar8 = uVar9 * 4;
    __Znwm();
    _bzero();
    param_1[5] = lVar8;
    param_1[6] = lVar8 + uVar9 * 4;
    param_1[7] = lVar8 + uVar9 * 4;
    lVar3 = uVar9 * 8;
    __Znwm();
    param_1[8] = lVar3;
    param_1[9] = lVar3 + uVar9 * 8;
    param_1[10] = lVar3 + uVar9 * 8;
    *puVar7 = 0;
    _memcpy();
    uVar6 = 0;
    do {
      *(int *)(lVar8 + uVar6 * 4) = (int)uVar6;
      uVar1 = uVar6 + 1;
      puVar7[uVar6 + 1] = (int)uVar1;
      uVar6 = uVar1;
    } while (uVar9 != uVar1);
    uVar5 = puVar7[uVar9];
  }
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar5);
  if (uVar5 != param_3) {
    puVar4 = &uStack_c8;
    uStack_64 = param_3;
    FUN_109904144(puVar4,&uStack_64,&UNK_10f58a9c0);
    if (puVar4 != (undefined8 *)0x0) {
      puStack_d0 = puVar4;
      FUN_1099ab8e4(&uStack_c8,&UNK_10f58a88b,0x10e,&puStack_d0);
      goto LAB_109922df8;
    }
  }
  return param_1;
}



/* Entry: 109922e5c; end: 109922fcf;  */

undefined8 * FUN_109922e5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b1d7a8;
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109922fd0; end: 109922fef;  */

void FUN_109922fd0(long param_1)

{
  if (0 < *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)();
    return;
  }
  return;
}



/* Entry: 109922ff0; end: 10992330f;  */

int * FUN_109922ff0(int *param_1,undefined *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  double *pdVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  int *piVar27;
  int *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  int *piVar28;
  ulong unaff_x25;
  int iVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  double dVar30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (param_2 == (undefined *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x11b,3,
                    FUN_1099aa768,0);
      param_2 = &UNK_10f58a9db;
      param_3 = 0x1b;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540);
    }
    else if (param_3 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x11c,3,
                    FUN_1099aa768,0);
      param_2 = &UNK_10f58a9f7;
      param_3 = 0x1b;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540);
    }
    else {
      iVar9 = param_1[0x16];
      if (iVar9 == 0) {
        uVar13 = param_1[2];
        if (0 < (int)uVar13) {
          piVar16 = *(int **)(param_1 + 4);
          uVar14 = 0;
          iVar9 = *piVar16;
          do {
            uVar20 = uVar14 + 1;
            iVar29 = piVar16[uVar20];
            if (iVar9 < iVar29) {
              dVar30 = *(double *)(param_3 + uVar14 * 8);
              lVar25 = (long)iVar29 - (long)iVar9;
              piVar4 = (int *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
              pdVar18 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8);
              do {
                dVar30 = dVar30 + *(double *)(param_2 + (long)*piVar4 * 8) * *pdVar18;
                *(double *)(param_3 + uVar14 * 8) = dVar30;
                lVar25 = lVar25 + -1;
                piVar4 = piVar4 + 1;
                pdVar18 = pdVar18 + 1;
              } while (lVar25 != 0);
            }
            uVar14 = uVar20;
            iVar9 = iVar29;
          } while (uVar20 != uVar13);
        }
        return param_1;
      }
      if (iVar9 == 2) {
        uVar13 = param_1[2];
        if ((int)uVar13 < 1) {
          return param_1;
        }
        piVar16 = *(int **)(param_1 + 4);
        uVar14 = 0;
        iVar9 = *piVar16;
        do {
          uVar20 = uVar14 + 1;
          iVar29 = piVar16[uVar20];
          if (iVar9 < iVar29) {
            lVar25 = (long)iVar29 - (long)iVar9;
            piVar4 = (int *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
            do {
              if ((long)uVar14 <= (long)*piVar4) goto LAB_1099230fc;
              iVar9 = iVar9 + 1;
              lVar25 = lVar25 + -1;
              piVar4 = piVar4 + 1;
            } while (lVar25 != 0);
          }
          else {
LAB_1099230fc:
            if (iVar9 < iVar29) {
              lVar25 = (long)iVar29 - (long)iVar9;
              puVar23 = (uint *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
              pdVar18 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8);
              do {
                uVar2 = *puVar23;
                dVar30 = *pdVar18;
                *(double *)(param_3 + uVar14 * 8) =
                     *(double *)(param_3 + uVar14 * 8) +
                     *(double *)(param_2 + (long)(int)uVar2 * 8) * dVar30;
                if (uVar14 != uVar2) {
                  *(double *)(param_3 + (long)(int)uVar2 * 8) =
                       *(double *)(param_3 + (long)(int)uVar2 * 8) +
                       *(double *)(param_2 + uVar14 * 8) * dVar30;
                }
                lVar25 = lVar25 + -1;
                puVar23 = puVar23 + 1;
                pdVar18 = pdVar18 + 1;
              } while (lVar25 != 0);
            }
          }
          uVar14 = uVar20;
          iVar9 = iVar29;
          if (uVar20 == uVar13) {
            return param_1;
          }
        } while( true );
      }
      if (iVar9 == 1) {
        uVar13 = param_1[2];
        if ((int)uVar13 < 1) {
          return param_1;
        }
        piVar16 = *(int **)(param_1 + 4);
        uVar14 = 0;
        iVar9 = *piVar16;
        do {
          uVar20 = uVar14 + 1;
          iVar29 = piVar16[uVar20];
          iVar15 = iVar29 - iVar9;
          if (iVar15 != 0 && iVar9 <= iVar29) {
            lVar24 = *(long *)(param_1 + 10);
            lVar25 = (long)iVar9;
            do {
              uVar2 = *(uint *)(lVar24 + lVar25 * 4);
              lVar26 = (long)(int)uVar2;
              if ((long)uVar14 < lVar26) break;
              dVar30 = *(double *)(*(long *)(param_1 + 0x10) + lVar25 * 8);
              *(double *)(param_3 + uVar14 * 8) =
                   *(double *)(param_3 + uVar14 * 8) + *(double *)(param_2 + lVar26 * 8) * dVar30;
              if (uVar14 != uVar2) {
                *(double *)(param_3 + lVar26 * 8) =
                     *(double *)(param_3 + lVar26 * 8) + *(double *)(param_2 + uVar14 * 8) * dVar30;
              }
              lVar25 = lVar25 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          uVar14 = uVar20;
          iVar9 = iVar29;
          if (uVar20 == uVar13) {
            return param_1;
          }
        } while( true );
      }
      *(int **)((long)register0x00000008 + -0x78) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x153,3,
                    FUN_1099aa768,0);
      param_3 = 0x16;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540,&UNK_10f58aa13);
      param_2 = (undefined *)(ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x78) + 0x58);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    }
    param_1 = (int *)((long)register0x00000008 + -0x70);
    func_0x0001099ab7c0();
    piVar16 = (int *)((long)register0x00000008 + -0xf0);
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_109923310;
    if (param_2 == (undefined *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0xf0),&UNK_10f58a88b,0x158,3,
                    FUN_1099aa768,0);
      piVar4 = (int *)&UNK_10f58a9db;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0xe8) + 0x7540,&UNK_10f58a9db,0x1b);
LAB_109923470:
      func_0x0001099ab7c0();
      piVar17 = (int *)((long)register0x00000008 + -0x170);
      *(int **)((long)register0x00000008 + -0x110) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x108) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x100) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(code **)((long)register0x00000008 + -0xf8) = FUN_109923478;
      if (piVar4 == (int *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
        FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x170),&UNK_10f58a88b,0x168,3,
                      FUN_1099aa768,0);
        puVar10 = &UNK_10f58a9db;
        FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x168) + 0x7540,&UNK_10f58a9db,0x1b);
      }
      else {
        piVar27 = piVar16;
        if (0 < piVar16[3]) {
          piVar27 = piVar4;
          _bzero(piVar4,(ulong)(uint)piVar16[3] << 3);
        }
        iVar9 = piVar16[0x16];
        if (iVar9 == 0) {
          uVar13 = *(uint *)(*(long *)(piVar16 + 4) + (long)piVar16[2] * 4);
          uVar14 = (ulong)uVar13;
          if ((int)uVar13 < 1) {
            return piVar27;
          }
          pdVar18 = *(double **)(piVar16 + 0x10);
          piVar16 = *(int **)(piVar16 + 10);
          do {
            *(double *)(piVar4 + (long)*piVar16 * 2) =
                 *(double *)(piVar4 + (long)*piVar16 * 2) + *pdVar18 * *pdVar18;
            uVar14 = uVar14 - 1;
            pdVar18 = pdVar18 + 1;
            piVar16 = piVar16 + 1;
          } while (uVar14 != 0);
          return piVar27;
        }
        if (iVar9 == 2) {
          uVar13 = piVar16[2];
          if ((int)uVar13 < 1) {
            return piVar27;
          }
          piVar17 = *(int **)(piVar16 + 4);
          uVar14 = 0;
          iVar9 = *piVar17;
          do {
            uVar20 = uVar14 + 1;
            iVar29 = piVar17[uVar20];
            if (iVar9 < iVar29) {
              piVar8 = (int *)(*(long *)(piVar16 + 10) + (long)iVar9 * 4);
              do {
                if ((long)uVar14 <= (long)*piVar8) goto LAB_10992359c;
                iVar9 = iVar9 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar29 != iVar9);
            }
            else {
LAB_10992359c:
              if (iVar9 < iVar29) {
                lVar25 = (long)iVar29 - (long)iVar9;
                puVar23 = (uint *)(*(long *)(piVar16 + 10) + (long)iVar9 * 4);
                pdVar18 = (double *)(*(long *)(piVar16 + 0x10) + (long)iVar9 * 8);
                do {
                  uVar2 = *puVar23;
                  dVar30 = *pdVar18 * *pdVar18;
                  *(double *)(piVar4 + (long)(int)uVar2 * 2) =
                       *(double *)(piVar4 + (long)(int)uVar2 * 2) + dVar30;
                  if (uVar14 != uVar2) {
                    *(double *)(piVar4 + uVar14 * 2) = dVar30 + *(double *)(piVar4 + uVar14 * 2);
                  }
                  lVar25 = lVar25 + -1;
                  puVar23 = puVar23 + 1;
                  pdVar18 = pdVar18 + 1;
                } while (lVar25 != 0);
              }
            }
            uVar14 = uVar20;
            iVar9 = iVar29;
            if (uVar20 == uVar13) {
              return piVar27;
            }
          } while( true );
        }
        if (iVar9 == 1) {
          uVar13 = piVar16[2];
          if (0 < (int)uVar13) {
            piVar17 = *(int **)(piVar16 + 4);
            uVar14 = 0;
            iVar9 = *piVar17;
            do {
              uVar20 = uVar14 + 1;
              iVar29 = piVar17[uVar20];
              iVar15 = iVar29 - iVar9;
              if (iVar15 != 0 && iVar9 <= iVar29) {
                lVar24 = *(long *)(piVar16 + 10);
                lVar25 = (long)iVar9;
                do {
                  uVar2 = *(uint *)(lVar24 + lVar25 * 4);
                  lVar26 = (long)(int)uVar2;
                  if ((long)uVar14 < lVar26) break;
                  dVar30 = *(double *)(*(long *)(piVar16 + 0x10) + lVar25 * 8);
                  dVar30 = dVar30 * dVar30;
                  *(double *)(piVar4 + lVar26 * 2) = *(double *)(piVar4 + lVar26 * 2) + dVar30;
                  if (uVar14 != uVar2) {
                    *(double *)(piVar4 + uVar14 * 2) = dVar30 + *(double *)(piVar4 + uVar14 * 2);
                  }
                  lVar25 = lVar25 + 1;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
              uVar14 = uVar20;
              iVar9 = iVar29;
            } while (uVar20 != uVar13);
          }
          return piVar27;
        }
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
        FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x170),&UNK_10f58a88b,0x19c,3,
                      FUN_1099aa768,0);
        FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x168) + 0x7540,&UNK_10f58aa13,0x16);
        puVar10 = (undefined *)(ulong)(uint)piVar16[0x16];
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        unaff_x19 = piVar16;
        unaff_x20 = piVar4;
      }
      func_0x0001099ab7c0();
      piVar16 = (int *)((long)register0x00000008 + -0x1e0);
      *(undefined1 **)((long)register0x00000008 + -0x180) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      *(code **)((long)register0x00000008 + -0x178) = FUN_109923714;
      if (puVar10 != (undefined *)0x0) {
        uVar13 = *(uint *)(*(long *)(piVar17 + 4) + (long)piVar17[2] * 4);
        uVar14 = (ulong)uVar13;
        if (0 < (int)uVar13) {
          piVar16 = *(int **)(piVar17 + 10);
          pdVar18 = *(double **)(piVar17 + 0x10);
          do {
            *pdVar18 = *(double *)(puVar10 + (long)*piVar16 * 8) * *pdVar18;
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 1;
            pdVar18 = pdVar18 + 1;
          } while (uVar14 != 0);
        }
        return piVar17;
      }
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
      *(undefined4 *)((long)register0x00000008 + -400) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x1e0),&UNK_10f58a88b,0x1a0,3,
                    FUN_1099aa768,0);
      plVar11 = (long *)&UNK_10f58a27b;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x1d8) + 0x7540,&UNK_10f58a27b,0x1f);
      func_0x0001099ab7c0();
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x280);
      *(ulong *)((long)register0x00000008 + -0x220) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x218) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x210) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x208) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x200) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x1f8) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x1f0) =
           (undefined1 *)((long)register0x00000008 + -0x180);
      *(code **)((long)register0x00000008 + -0x1e8) = FUN_1099237cc;
      if (plVar11 != (long *)0x0) {
        iVar9 = piVar16[2];
        iVar29 = piVar16[3];
        lVar25 = (long)iVar29;
        if (iVar9 != 0 && iVar29 != 0) {
          lVar24 = 0;
          if (lVar25 != 0) {
            lVar24 = 0x7fffffffffffffff / lVar25;
          }
          if (iVar9 <= lVar24) goto LAB_109923818;
          goto LAB_109923850;
        }
LAB_109923818:
        unaff_x23 = (long)iVar29 * (long)iVar9;
        piVar4 = piVar16;
        if (plVar11[2] * plVar11[1] - unaff_x23 == 0) goto LAB_109923878;
        _free(*plVar11);
        if ((long)unaff_x23 < 1) {
LAB_109923870:
          piVar4 = (int *)0x0;
        }
        else {
          if (unaff_x23 >> 0x3d != 0) {
LAB_109923850:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109923870;
          }
          piVar4 = (int *)(unaff_x23 * 8);
          _malloc();
          if (piVar4 == (int *)0x0) goto LAB_109923850;
        }
        *plVar11 = (long)piVar4;
LAB_109923878:
        plVar11[1] = (long)iVar9;
        plVar11[2] = lVar25;
        if (0 < (long)unaff_x23) {
          piVar4 = (int *)*plVar11;
          _bzero(piVar4,unaff_x23 << 3);
        }
        uVar13 = piVar16[2];
        if (0 < (int)uVar13) {
          piVar17 = *(int **)(piVar16 + 4);
          uVar14 = 0;
          iVar9 = *piVar17;
          do {
            uVar20 = uVar14 + 1;
            iVar29 = piVar17[uVar20];
            if (iVar9 < iVar29) {
              lVar26 = *plVar11;
              lVar24 = (long)iVar29 - (long)iVar9;
              puVar22 = (undefined8 *)(*(long *)(piVar16 + 0x10) + (long)iVar9 * 8);
              piVar27 = (int *)(*(long *)(piVar16 + 10) + (long)iVar9 * 4);
              do {
                *(undefined8 *)(lVar26 + uVar14 * lVar25 * 8 + (long)*piVar27 * 8) = *puVar22;
                lVar24 = lVar24 + -1;
                puVar22 = puVar22 + 1;
                piVar27 = piVar27 + 1;
              } while (lVar24 != 0);
            }
            uVar14 = uVar20;
            iVar9 = iVar29;
          } while (uVar20 != uVar13);
        }
        return piVar4;
      }
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
      *(undefined8 *)((long)register0x00000008 + -600) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x230) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x280),&UNK_10f58a88b,0x1a8,3,
                    FUN_1099aa768,0);
      piVar16 = (int *)&UNK_10f58a29b;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x278) + 0x7540,&UNK_10f58a29b,0x26);
      func_0x0001099ab7c0();
      *(undefined8 *)((long)register0x00000008 + -0x2d0) = unaff_x26;
      *(ulong *)((long)register0x00000008 + -0x2c8) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x2c0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x2b8) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x2b0) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x2a8) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x2a0) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x298) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x290) =
           (undefined1 *)((long)register0x00000008 + -0x1f0);
      *(code **)((long)register0x00000008 + -0x288) = FUN_10992397c;
      iVar9 = (int)piVar16;
      *(int *)((long)register0x00000008 + -0x338) = iVar9;
      *(undefined4 *)((long)register0x00000008 + -0x2d8) = 0;
      piVar4 = piVar16;
      if (-1 < iVar9) {
LAB_1099239ac:
        iVar29 = *(int *)(puVar5 + 8);
        *(int *)((long)register0x00000008 + -0x338) = iVar9;
        *(int *)((long)register0x00000008 + -0x2d8) = iVar29;
        if (iVar29 < iVar9) {
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x338);
          piVar4 = (int *)((long)register0x00000008 + -0x2d8);
          FUN_109904144(puVar6,piVar4,&UNK_10f58aa3a);
          *(undefined1 **)((long)register0x00000008 + -0x2d8) = puVar6;
          if (puVar6 != (undefined1 *)0x0) {
            uVar12 = 0x1b5;
            goto LAB_109923b94;
          }
        }
        piVar17 = (int *)(puVar5 + 0x58);
        iVar29 = *piVar17;
        *(undefined4 *)((long)register0x00000008 + -0x338) = 0;
        if (iVar29 != 0) {
          piVar4 = (int *)((long)register0x00000008 + -0x338);
          FUN_1099260f8(piVar17,piVar4,&UNK_10f58aa52);
          *(int **)((long)register0x00000008 + -0x2d8) = piVar17;
          bVar1 = piVar17 != (int *)0x0;
          piVar17 = (int *)0x0;
          if (bVar1) {
            uVar12 = 0x1b6;
            goto LAB_109923b94;
          }
        }
        iVar29 = *(int *)(puVar5 + 8);
        iVar15 = (int)((long)iVar29 - (long)iVar9);
        *(int *)(puVar5 + 8) = iVar15;
        uVar14 = ((long)iVar29 - (long)iVar9) + 1;
        piVar16 = *(int **)(puVar5 + 0x10);
        unaff_x22 = *(int **)(puVar5 + 0x18);
        unaff_x21 = (long)unaff_x22 - (long)piVar16;
        uVar20 = unaff_x21 >> 2;
        if (uVar20 < uVar14) {
          unaff_x24 = uVar14 - uVar20;
          if ((ulong)(*(long *)(puVar5 + 0x20) - (long)unaff_x22 >> 2) < unaff_x24) {
            if (iVar15 < -1) goto LAB_109923ba0;
            uVar20 = *(long *)(puVar5 + 0x20) - (long)piVar16;
            unaff_x25 = (long)uVar20 >> 1;
            if (unaff_x25 <= uVar14) {
              unaff_x25 = uVar14;
            }
            if (0x7ffffffffffffffb < uVar20) {
              unaff_x25 = 0x3fffffffffffffff;
            }
            if (unaff_x25 >> 0x3e == 0) {
              piVar4 = (int *)(unaff_x25 << 2);
              __Znwm();
              _bzero((undefined *)((long)piVar4 + unaff_x21),unaff_x24 * 4);
              piVar17 = piVar4;
              _memcpy(piVar4,piVar16,unaff_x21);
              *(int **)(puVar5 + 0x10) = piVar4;
              *(undefined **)(puVar5 + 0x18) =
                   (undefined *)((long)piVar4 + unaff_x21) + unaff_x24 * 4;
              *(int **)(puVar5 + 0x20) = piVar4 + unaff_x25;
              if (piVar16 != (int *)0x0) {
                __ZdlPv(piVar16);
                piVar17 = piVar16;
              }
              goto LAB_109923aa8;
            }
            goto LAB_109923ba4;
          }
          piVar17 = unaff_x22;
          _bzero(unaff_x22,unaff_x24 * 4);
          piVar16 = unaff_x22 + unaff_x24;
        }
        else {
          if (uVar20 <= uVar14) goto LAB_109923aa8;
          piVar16 = piVar16 + uVar14;
        }
        *(int **)(puVar5 + 0x18) = piVar16;
LAB_109923aa8:
        piVar16 = *(int **)(puVar5 + 0x60);
        if (piVar16 == *(int **)(puVar5 + 0x68)) {
          return piVar17;
        }
        iVar9 = 0;
        lVar25 = (long)*(int **)(puVar5 + 0x68) - (long)piVar16 >> 2;
        do {
          if (*(int *)(puVar5 + 8) <= iVar9) {
            *(int **)(puVar5 + 0x68) = piVar16;
            return piVar17;
          }
          iVar9 = *piVar16 + iVar9;
          lVar25 = lVar25 + -1;
          piVar16 = piVar16 + 1;
        } while (lVar25 != 0);
        return piVar17;
      }
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x338);
      piVar4 = (int *)((long)register0x00000008 + -0x2d8);
      FUN_109904144(puVar6,piVar4,&UNK_10f58aa2a);
      *(undefined1 **)((long)register0x00000008 + -0x2d8) = puVar6;
      if (puVar6 == (undefined1 *)0x0) goto LAB_1099239ac;
      uVar12 = 0x1b4;
LAB_109923b94:
      piVar4 = (int *)&UNK_10f58a88b;
      FUN_1099ab8e4((undefined1 *)((long)register0x00000008 + -0x338),&UNK_10f58a88b,uVar12,
                    (undefined1 *)((long)register0x00000008 + -0x2d8));
      piVar17 = (int *)((long)register0x00000008 + -0x338);
      func_0x0001099ab7c0();
LAB_109923ba0:
      FUN_10923f788();
LAB_109923ba4:
      func_0x000104c4f740();
      *(undefined8 *)((long)register0x00000008 + -0x3a0) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x398) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x390) = unaff_x26;
      *(ulong *)((long)register0x00000008 + -0x388) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x380) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x378) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x370) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x368) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x360) = piVar16;
      *(undefined1 **)((long)register0x00000008 + -0x358) = puVar5;
      *(undefined1 **)((long)register0x00000008 + -0x350) =
           (undefined1 *)((long)register0x00000008 + -0x290);
      *(code **)((long)register0x00000008 + -0x348) = FUN_109923ba8;
      piVar16 = piVar17 + 0x16;
      iVar9 = *piVar16;
      *(undefined4 *)((long)register0x00000008 + -0x408) = 0;
      if (iVar9 != 0) {
        FUN_1099260f8(piVar16,(undefined1 *)((long)register0x00000008 + -0x408),&UNK_10f58aa52);
        *(int **)((long)register0x00000008 + -0x3a8) = piVar16;
        bVar1 = piVar16 == (int *)0x0;
        piVar16 = (int *)0x0;
        if (bVar1) goto LAB_109923bdc;
        uVar12 = 0x1ce;
LAB_10992413c:
        FUN_1099ab8e4((undefined1 *)((long)register0x00000008 + -0x408),&UNK_10f58a88b,uVar12,
                      (undefined1 *)((long)register0x00000008 + -0x3a8));
        goto LAB_109924224;
      }
LAB_109923bdc:
      iVar9 = piVar4[3];
      iVar29 = piVar17[3];
      *(int *)((long)register0x00000008 + -0x408) = iVar9;
      *(int *)((long)register0x00000008 + -0x3a8) = iVar29;
      if (iVar9 != iVar29) {
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x408);
        FUN_109904144(puVar5,(undefined1 *)((long)register0x00000008 + -0x3a8),&UNK_10f58aa6f);
        *(undefined1 **)((long)register0x00000008 + -0x3a8) = puVar5;
        piVar16 = (int *)0x0;
        if (puVar5 != (undefined1 *)0x0) {
          uVar12 = 0x1cf;
          goto LAB_10992413c;
        }
      }
      if ((*(long *)(piVar17 + 0x18) == *(long *)(piVar17 + 0x1a)) !=
          (*(long *)(piVar4 + 0x18) == *(long *)(piVar4 + 0x1a))) {
        *(undefined8 *)((long)register0x00000008 + -0x408) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3f0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3f8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3e0) = 0;
        *(undefined8 *)((long)register0x00000008 + -1000) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3d0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3d8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3c0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x3c8) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x3b8) = 0;
        FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x408),&UNK_10f58a88b,0x1d2,3,
                      FUN_1099aa768,0);
        FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x400) + 0x7540,&UNK_10f58aa89,0x73);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
        FUN_1092b4db8();
        goto LAB_109924224;
      }
      iVar9 = piVar4[2];
      if (iVar9 == 0) {
        return piVar16;
      }
      lVar24 = (long)iVar9;
      piVar8 = *(int **)(piVar17 + 10);
      piVar7 = *(int **)(piVar17 + 0xc);
      iVar29 = piVar17[2];
      piVar27 = *(int **)(piVar17 + 4);
      lVar25 = (long)piVar7 - (long)piVar8;
      uVar14 = (long)*(int *)(*(long *)(piVar4 + 4) + lVar24 * 4) + (long)piVar27[iVar29];
      if ((ulong)(lVar25 >> 2) < uVar14) {
        uVar20 = uVar14 - (lVar25 >> 2);
        if ((ulong)(*(long *)(piVar17 + 0xe) - (long)piVar7 >> 2) < uVar20) {
          if ((int)uVar14 < 0) goto LAB_10992421c;
          uVar19 = *(long *)(piVar17 + 0xe) - (long)piVar8;
          uVar21 = (long)uVar19 >> 1;
          if (uVar21 <= uVar14) {
            uVar21 = uVar14;
          }
          if (0x7ffffffffffffffb < uVar19) {
            uVar21 = 0x3fffffffffffffff;
          }
          if (uVar21 >> 0x3e != 0) goto LAB_109924218;
          piVar7 = (int *)(uVar21 << 2);
          __Znwm();
          _bzero((undefined *)((long)piVar7 + lVar25),uVar20 * 4);
          piVar16 = piVar7;
          _memcpy(piVar7,piVar8,lVar25);
          *(int **)(piVar17 + 10) = piVar7;
          *(undefined **)(piVar17 + 0xc) = (undefined *)((long)piVar7 + lVar25) + uVar20 * 4;
          *(int **)(piVar17 + 0xe) = piVar7 + uVar21;
          if (piVar8 != (int *)0x0) {
            __ZdlPv(piVar8);
            piVar27 = *(int **)(piVar17 + 4);
            piVar16 = piVar8;
          }
        }
        else {
          piVar16 = piVar7;
          _bzero(piVar7,uVar20 * 4);
          *(int **)(piVar17 + 0xc) = piVar7 + uVar20;
        }
        iVar29 = piVar17[2];
        iVar9 = piVar4[2];
        lVar24 = (long)iVar9;
        uVar14 = (long)*(int *)(*(long *)(piVar4 + 4) + (long)iVar9 * 4) + (long)piVar27[iVar29];
        piVar8 = *(int **)(piVar17 + 0x10);
        piVar7 = *(int **)(piVar17 + 0x12);
        lVar25 = (long)piVar7 - (long)piVar8;
        uVar20 = lVar25 >> 3;
        if (uVar20 < uVar14) {
          uVar20 = uVar14 - uVar20;
          if ((ulong)(*(long *)(piVar17 + 0x14) - (long)piVar7 >> 3) < uVar20) {
            if ((int)uVar14 < 0) goto LAB_109924220;
            uVar19 = *(long *)(piVar17 + 0x14) - (long)piVar8;
            uVar21 = (long)uVar19 >> 2;
            if (uVar21 <= uVar14) {
              uVar21 = uVar14;
            }
            if (0x7ffffffffffffff7 < uVar19) {
              uVar21 = 0x1fffffffffffffff;
            }
            if (uVar21 >> 0x3d != 0) goto LAB_109924218;
            piVar7 = (int *)(uVar21 << 3);
            *(ulong *)((long)register0x00000008 + -0x410) = uVar21;
            __Znwm();
            *(undefined **)((long)register0x00000008 + -0x418) =
                 (undefined *)((long)piVar7 + lVar25);
            *(int **)((long)register0x00000008 + -0x410) =
                 piVar7 + *(long *)((long)register0x00000008 + -0x410) * 2;
            _bzero((undefined *)((long)piVar7 + lVar25),uVar20 * 8);
            lVar26 = *(long *)((long)register0x00000008 + -0x418);
            piVar16 = piVar7;
            _memcpy(piVar7,piVar8,lVar25);
            *(int **)(piVar17 + 0x10) = piVar7;
            *(ulong *)(piVar17 + 0x12) = lVar26 + uVar20 * 8;
            *(undefined8 *)(piVar17 + 0x14) = *(undefined8 *)((long)register0x00000008 + -0x410);
            if (piVar8 != (int *)0x0) {
              __ZdlPv(piVar8);
              iVar9 = piVar4[2];
              lVar24 = (long)iVar9;
              iVar29 = piVar17[2];
              piVar27 = *(int **)(piVar17 + 4);
              piVar16 = piVar8;
            }
          }
          else {
            piVar16 = piVar7;
            _bzero(piVar7,uVar20 * 8);
            piVar8 = piVar7 + uVar20 * 2;
LAB_109923df0:
            *(int **)(piVar17 + 0x12) = piVar8;
          }
        }
        else if (uVar14 < uVar20) {
          piVar8 = piVar8 + uVar14 * 2;
          goto LAB_109923df0;
        }
      }
      uVar13 = *(uint *)(*(long *)(piVar4 + 4) + lVar24 * 4);
      if (0 < (int)uVar13) {
        piVar16 = (int *)(*(long *)(piVar17 + 10) + (long)piVar27[iVar29] * 4);
        _memmove(piVar16,*(undefined8 *)(piVar4 + 10),(ulong)uVar13 << 2);
        iVar9 = piVar4[2];
        iVar15 = *(int *)(*(long *)(piVar4 + 4) + (long)iVar9 * 4);
        iVar29 = piVar17[2];
        piVar27 = *(int **)(piVar17 + 4);
        if (iVar15 != 0) {
          piVar16 = (int *)(*(long *)(piVar17 + 0x10) + (long)piVar27[iVar29] * 8);
          _memmove(piVar16,*(undefined8 *)(piVar4 + 0x10),(long)iVar15 << 3);
          iVar29 = piVar17[2];
          iVar9 = piVar4[2];
          piVar27 = *(int **)(piVar17 + 4);
        }
      }
      uVar14 = (ulong)(iVar29 + iVar9 + 1);
      piVar7 = *(int **)(piVar17 + 6);
      lVar25 = (long)piVar7 - (long)piVar27;
      uVar20 = lVar25 >> 2;
      piVar8 = piVar27;
      if (uVar20 < uVar14) {
        uVar20 = uVar14 - uVar20;
        if ((ulong)(*(long *)(piVar17 + 8) - (long)piVar7 >> 2) < uVar20) {
          if (iVar29 + iVar9 < -1) goto LAB_10992421c;
          uVar19 = *(long *)(piVar17 + 8) - (long)piVar27;
          uVar21 = (long)uVar19 >> 1;
          if (uVar21 <= uVar14) {
            uVar21 = uVar14;
          }
          if (0x7ffffffffffffffb < uVar19) {
            uVar21 = 0x3fffffffffffffff;
          }
          if (uVar21 >> 0x3e != 0) goto LAB_109924218;
          piVar8 = (int *)(uVar21 << 2);
          __Znwm();
          _bzero((undefined *)((long)piVar8 + lVar25),uVar20 * 4);
          piVar16 = piVar8;
          _memcpy(piVar8,piVar27,lVar25);
          *(int **)(piVar17 + 4) = piVar8;
          *(undefined **)(piVar17 + 6) = (undefined *)((long)piVar8 + lVar25) + uVar20 * 4;
          *(int **)(piVar17 + 8) = piVar8 + uVar21;
          if (piVar27 != (int *)0x0) {
            __ZdlPv(piVar27);
            piVar16 = piVar27;
            piVar8 = *(int **)(piVar17 + 4);
          }
        }
        else {
          piVar16 = piVar7;
          _bzero(piVar7,uVar20 * 4);
          piVar27 = piVar7 + uVar20;
LAB_109923f30:
          *(int **)(piVar17 + 6) = piVar27;
        }
      }
      else if (uVar14 < uVar20) {
        piVar27 = piVar27 + uVar14;
        goto LAB_109923f30;
      }
      uVar13 = piVar4[2];
      if (0 < (long)((-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2) + 4) >> 2)
      {
        iVar9 = piVar8[piVar17[2]];
        uVar14 = (long)(int)uVar13 + 2;
        piVar27 = piVar8 + piVar17[2];
        do {
          *piVar27 = iVar9;
          uVar14 = uVar14 - 1;
          piVar27 = piVar27 + 1;
        } while (1 < uVar14);
        uVar13 = piVar4[2];
      }
      if (-1 < (int)uVar13) {
        lVar24 = *(long *)(piVar4 + 4);
        lVar25 = 0;
        do {
          piVar8[lVar25 + piVar17[2]] = piVar8[lVar25 + piVar17[2]] + *(int *)(lVar24 + lVar25 * 4);
          uVar13 = piVar4[2];
          bVar1 = lVar25 < (int)uVar13;
          lVar25 = lVar25 + 1;
        } while (bVar1);
      }
      piVar17[2] = piVar17[2] + uVar13;
      piVar27 = *(int **)(piVar17 + 0x18);
      piVar8 = *(int **)(piVar17 + 0x1a);
      if (piVar27 == piVar8) {
        return piVar16;
      }
      piVar7 = *(int **)(piVar4 + 0x18);
      piVar4 = *(int **)(piVar4 + 0x1a);
      lVar25 = (long)piVar4 - (long)piVar7;
      if (lVar25 >> 2 < 1) {
        return piVar16;
      }
      if (lVar25 <= *(long *)(piVar17 + 0x1c) - (long)piVar8) {
        piVar27 = piVar8;
        if (piVar7 != piVar4) {
          piVar27 = (int *)(((long)piVar4 + (long)piVar8) - (long)piVar7);
          do {
            piVar28 = piVar7 + 1;
            *piVar8 = *piVar7;
            piVar8 = piVar8 + 1;
            piVar7 = piVar28;
          } while (piVar28 != piVar4);
        }
        *(int **)(piVar17 + 0x1a) = piVar27;
        return piVar16;
      }
      lVar24 = (long)piVar8 - (long)piVar27;
      uVar14 = (lVar25 >> 2) + (lVar24 >> 2);
      if (uVar14 >> 0x3e == 0) {
        uVar21 = *(long *)(piVar17 + 0x1c) - (long)piVar27;
        uVar20 = (long)uVar21 >> 1;
        if (uVar20 <= uVar14) {
          uVar20 = uVar14;
        }
        if (0x7ffffffffffffffb < uVar21) {
          uVar20 = 0x3fffffffffffffff;
        }
        if (uVar20 == 0) {
          piVar16 = (int *)0x0;
LAB_109924070:
          lVar3 = lVar25 + lVar24;
          lVar26 = lVar24;
          do {
            *(int *)((long)piVar16 + lVar26) = *piVar7;
            lVar26 = lVar26 + 4;
            lVar25 = lVar25 + -4;
            piVar7 = piVar7 + 1;
          } while (lVar25 != 0);
          *(int **)(piVar17 + 0x1a) = piVar8;
          piVar4 = piVar16;
          _memcpy(piVar16,piVar27,lVar24);
          *(int **)(piVar17 + 0x18) = piVar16;
          *(long *)(piVar17 + 0x1a) = (long)piVar16 + lVar3;
          *(int **)(piVar17 + 0x1c) = piVar16 + uVar20;
          if (piVar27 != (int *)0x0) {
            __ZdlPv(piVar27);
            piVar4 = piVar27;
          }
          return piVar4;
        }
        if (uVar20 >> 0x3e == 0) {
          piVar16 = (int *)(uVar20 << 2);
          __Znwm();
          goto LAB_109924070;
        }
LAB_109924218:
        func_0x000104c4f740();
      }
LAB_10992421c:
      FUN_10923f788();
LAB_109924220:
      FUN_1092d2ba8();
LAB_109924224:
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x408);
      func_0x0001099ab7c0();
      return (int *)(ulong)*(uint *)(puVar5 + 0xc);
    }
    if (param_3 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0xf0),&UNK_10f58a88b,0x159,3,
                    FUN_1099aa768,0);
      piVar4 = (int *)&UNK_10f58a9f7;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0xe8) + 0x7540,&UNK_10f58a9f7,0x1b);
      goto LAB_109923470;
    }
    if (param_1[0x16] == 0) {
      uVar13 = param_1[2];
      if (0 < (int)uVar13) {
        piVar16 = *(int **)(param_1 + 4);
        uVar14 = 0;
        iVar9 = *piVar16;
        do {
          uVar20 = uVar14 + 1;
          iVar29 = piVar16[uVar20];
          if (iVar9 < iVar29) {
            lVar25 = (long)iVar29 - (long)iVar9;
            pdVar18 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8);
            piVar4 = (int *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
            do {
              *(double *)(param_3 + (long)*piVar4 * 8) =
                   *(double *)(param_3 + (long)*piVar4 * 8) +
                   *(double *)(param_2 + uVar14 * 8) * *pdVar18;
              lVar25 = lVar25 + -1;
              pdVar18 = pdVar18 + 1;
              piVar4 = piVar4 + 1;
            } while (lVar25 != 0);
          }
          uVar14 = uVar20;
          iVar9 = iVar29;
        } while (uVar20 != uVar13);
      }
      return param_1;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 109923310; end: 109923477;  */

int * FUN_109923310(int *param_1,undefined *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  double *pdVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  int *piVar27;
  int *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  int *piVar28;
  ulong unaff_x25;
  int iVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar30;
  
  while( true ) {
    piVar16 = (int *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (param_2 == (undefined *)0x0) break;
    if (param_3 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x159,3,
                    FUN_1099aa768,0);
      piVar4 = (int *)&UNK_10f58a9f7;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540,&UNK_10f58a9f7,0x1b);
      goto LAB_109923470;
    }
    if (param_1[0x16] == 0) {
      uVar13 = param_1[2];
      if (0 < (int)uVar13) {
        piVar16 = *(int **)(param_1 + 4);
        uVar14 = 0;
        iVar9 = *piVar16;
        do {
          uVar20 = uVar14 + 1;
          iVar29 = piVar16[uVar20];
          if (iVar9 < iVar29) {
            lVar25 = (long)iVar29 - (long)iVar9;
            pdVar18 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8);
            piVar4 = (int *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
            do {
              *(double *)(param_3 + (long)*piVar4 * 8) =
                   *(double *)(param_3 + (long)*piVar4 * 8) +
                   *(double *)(param_2 + uVar14 * 8) * *pdVar18;
              lVar25 = lVar25 + -1;
              pdVar18 = pdVar18 + 1;
              piVar4 = piVar4 + 1;
            } while (lVar25 != 0);
          }
          uVar14 = uVar20;
          iVar9 = iVar29;
        } while (uVar20 != uVar13);
      }
      return param_1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (param_2 == (undefined *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x11b,3,
                    FUN_1099aa768,0);
      param_2 = &UNK_10f58a9db;
      param_3 = 0x1b;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540);
    }
    else if (param_3 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x11c,3,
                    FUN_1099aa768,0);
      param_2 = &UNK_10f58a9f7;
      param_3 = 0x1b;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540);
    }
    else {
      iVar9 = param_1[0x16];
      if (iVar9 == 0) {
        uVar13 = param_1[2];
        if (0 < (int)uVar13) {
          piVar16 = *(int **)(param_1 + 4);
          uVar14 = 0;
          iVar9 = *piVar16;
          do {
            uVar20 = uVar14 + 1;
            iVar29 = piVar16[uVar20];
            if (iVar9 < iVar29) {
              dVar30 = *(double *)(param_3 + uVar14 * 8);
              lVar25 = (long)iVar29 - (long)iVar9;
              piVar4 = (int *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
              pdVar18 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8);
              do {
                dVar30 = dVar30 + *(double *)(param_2 + (long)*piVar4 * 8) * *pdVar18;
                *(double *)(param_3 + uVar14 * 8) = dVar30;
                lVar25 = lVar25 + -1;
                piVar4 = piVar4 + 1;
                pdVar18 = pdVar18 + 1;
              } while (lVar25 != 0);
            }
            uVar14 = uVar20;
            iVar9 = iVar29;
          } while (uVar20 != uVar13);
        }
        return param_1;
      }
      if (iVar9 == 2) {
        uVar13 = param_1[2];
        if ((int)uVar13 < 1) {
          return param_1;
        }
        piVar16 = *(int **)(param_1 + 4);
        uVar14 = 0;
        iVar9 = *piVar16;
        do {
          uVar20 = uVar14 + 1;
          iVar29 = piVar16[uVar20];
          if (iVar9 < iVar29) {
            lVar25 = (long)iVar29 - (long)iVar9;
            piVar4 = (int *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
            do {
              if ((long)uVar14 <= (long)*piVar4) goto LAB_1099230fc;
              iVar9 = iVar9 + 1;
              lVar25 = lVar25 + -1;
              piVar4 = piVar4 + 1;
            } while (lVar25 != 0);
          }
          else {
LAB_1099230fc:
            if (iVar9 < iVar29) {
              lVar25 = (long)iVar29 - (long)iVar9;
              puVar23 = (uint *)(*(long *)(param_1 + 10) + (long)iVar9 * 4);
              pdVar18 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8);
              do {
                uVar2 = *puVar23;
                dVar30 = *pdVar18;
                *(double *)(param_3 + uVar14 * 8) =
                     *(double *)(param_3 + uVar14 * 8) +
                     *(double *)(param_2 + (long)(int)uVar2 * 8) * dVar30;
                if (uVar14 != uVar2) {
                  *(double *)(param_3 + (long)(int)uVar2 * 8) =
                       *(double *)(param_3 + (long)(int)uVar2 * 8) +
                       *(double *)(param_2 + uVar14 * 8) * dVar30;
                }
                lVar25 = lVar25 + -1;
                puVar23 = puVar23 + 1;
                pdVar18 = pdVar18 + 1;
              } while (lVar25 != 0);
            }
          }
          uVar14 = uVar20;
          iVar9 = iVar29;
          if (uVar20 == uVar13) {
            return param_1;
          }
        } while( true );
      }
      if (iVar9 == 1) {
        uVar13 = param_1[2];
        if ((int)uVar13 < 1) {
          return param_1;
        }
        piVar16 = *(int **)(param_1 + 4);
        uVar14 = 0;
        iVar9 = *piVar16;
        do {
          uVar20 = uVar14 + 1;
          iVar29 = piVar16[uVar20];
          iVar15 = iVar29 - iVar9;
          if (iVar15 != 0 && iVar9 <= iVar29) {
            lVar24 = *(long *)(param_1 + 10);
            lVar25 = (long)iVar9;
            do {
              uVar2 = *(uint *)(lVar24 + lVar25 * 4);
              lVar26 = (long)(int)uVar2;
              if ((long)uVar14 < lVar26) break;
              dVar30 = *(double *)(*(long *)(param_1 + 0x10) + lVar25 * 8);
              *(double *)(param_3 + uVar14 * 8) =
                   *(double *)(param_3 + uVar14 * 8) + *(double *)(param_2 + lVar26 * 8) * dVar30;
              if (uVar14 != uVar2) {
                *(double *)(param_3 + lVar26 * 8) =
                     *(double *)(param_3 + lVar26 * 8) + *(double *)(param_2 + uVar14 * 8) * dVar30;
              }
              lVar25 = lVar25 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          uVar14 = uVar20;
          iVar9 = iVar29;
          if (uVar20 == uVar13) {
            return param_1;
          }
        } while( true );
      }
      *(int **)((long)register0x00000008 + -0x78) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x153,3,
                    FUN_1099aa768,0);
      param_3 = 0x16;
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540,&UNK_10f58aa13);
      param_2 = (undefined *)(ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x78) + 0x58);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    }
    param_1 = (int *)((long)register0x00000008 + -0x70);
    unaff_x30 = FUN_109923310;
    func_0x0001099ab7c0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x20) = 0;
  FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x70),&UNK_10f58a88b,0x158,3,
                FUN_1099aa768,0);
  piVar4 = (int *)&UNK_10f58a9db;
  FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x68) + 0x7540,&UNK_10f58a9db,0x1b);
LAB_109923470:
  func_0x0001099ab7c0();
  piVar17 = (int *)((long)register0x00000008 + -0xf0);
  *(int **)((long)register0x00000008 + -0x90) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x88) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_109923478;
  if (piVar4 == (int *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 0;
    FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0xf0),&UNK_10f58a88b,0x168,3,
                  FUN_1099aa768,0);
    puVar10 = &UNK_10f58a9db;
    FUN_1092b4db8(*(long *)((long)register0x00000008 + -0xe8) + 0x7540,&UNK_10f58a9db,0x1b);
  }
  else {
    piVar27 = piVar16;
    if (0 < piVar16[3]) {
      piVar27 = piVar4;
      _bzero(piVar4,(ulong)(uint)piVar16[3] << 3);
    }
    iVar9 = piVar16[0x16];
    if (iVar9 == 0) {
      uVar13 = *(uint *)(*(long *)(piVar16 + 4) + (long)piVar16[2] * 4);
      uVar14 = (ulong)uVar13;
      if (0 < (int)uVar13) {
        pdVar18 = *(double **)(piVar16 + 0x10);
        piVar16 = *(int **)(piVar16 + 10);
        do {
          *(double *)(piVar4 + (long)*piVar16 * 2) =
               *(double *)(piVar4 + (long)*piVar16 * 2) + *pdVar18 * *pdVar18;
          uVar14 = uVar14 - 1;
          pdVar18 = pdVar18 + 1;
          piVar16 = piVar16 + 1;
        } while (uVar14 != 0);
      }
      return piVar27;
    }
    if (iVar9 == 2) {
      uVar13 = piVar16[2];
      if ((int)uVar13 < 1) {
        return piVar27;
      }
      piVar17 = *(int **)(piVar16 + 4);
      uVar14 = 0;
      iVar9 = *piVar17;
      do {
        uVar20 = uVar14 + 1;
        iVar29 = piVar17[uVar20];
        if (iVar9 < iVar29) {
          piVar8 = (int *)(*(long *)(piVar16 + 10) + (long)iVar9 * 4);
          do {
            if ((long)uVar14 <= (long)*piVar8) goto LAB_10992359c;
            iVar9 = iVar9 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar29 != iVar9);
        }
        else {
LAB_10992359c:
          if (iVar9 < iVar29) {
            lVar25 = (long)iVar29 - (long)iVar9;
            puVar23 = (uint *)(*(long *)(piVar16 + 10) + (long)iVar9 * 4);
            pdVar18 = (double *)(*(long *)(piVar16 + 0x10) + (long)iVar9 * 8);
            do {
              uVar2 = *puVar23;
              dVar30 = *pdVar18 * *pdVar18;
              *(double *)(piVar4 + (long)(int)uVar2 * 2) =
                   *(double *)(piVar4 + (long)(int)uVar2 * 2) + dVar30;
              if (uVar14 != uVar2) {
                *(double *)(piVar4 + uVar14 * 2) = dVar30 + *(double *)(piVar4 + uVar14 * 2);
              }
              lVar25 = lVar25 + -1;
              puVar23 = puVar23 + 1;
              pdVar18 = pdVar18 + 1;
            } while (lVar25 != 0);
          }
        }
        uVar14 = uVar20;
        iVar9 = iVar29;
        if (uVar20 == uVar13) {
          return piVar27;
        }
      } while( true );
    }
    if (iVar9 == 1) {
      uVar13 = piVar16[2];
      if ((int)uVar13 < 1) {
        return piVar27;
      }
      piVar17 = *(int **)(piVar16 + 4);
      uVar14 = 0;
      iVar9 = *piVar17;
      do {
        uVar20 = uVar14 + 1;
        iVar29 = piVar17[uVar20];
        iVar15 = iVar29 - iVar9;
        if (iVar15 != 0 && iVar9 <= iVar29) {
          lVar24 = *(long *)(piVar16 + 10);
          lVar25 = (long)iVar9;
          do {
            uVar2 = *(uint *)(lVar24 + lVar25 * 4);
            lVar26 = (long)(int)uVar2;
            if ((long)uVar14 < lVar26) break;
            dVar30 = *(double *)(*(long *)(piVar16 + 0x10) + lVar25 * 8);
            dVar30 = dVar30 * dVar30;
            *(double *)(piVar4 + lVar26 * 2) = *(double *)(piVar4 + lVar26 * 2) + dVar30;
            if (uVar14 != uVar2) {
              *(double *)(piVar4 + uVar14 * 2) = dVar30 + *(double *)(piVar4 + uVar14 * 2);
            }
            lVar25 = lVar25 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        uVar14 = uVar20;
        iVar9 = iVar29;
        if (uVar20 == uVar13) {
          return piVar27;
        }
      } while( true );
    }
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 0;
    FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0xf0),&UNK_10f58a88b,0x19c,3,
                  FUN_1099aa768,0);
    FUN_1092b4db8(*(long *)((long)register0x00000008 + -0xe8) + 0x7540,&UNK_10f58aa13,0x16);
    puVar10 = (undefined *)(ulong)(uint)piVar16[0x16];
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    unaff_x19 = piVar16;
    unaff_x20 = piVar4;
  }
  func_0x0001099ab7c0();
  piVar16 = (int *)((long)register0x00000008 + -0x160);
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(code **)((long)register0x00000008 + -0xf8) = FUN_109923714;
  if (puVar10 != (undefined *)0x0) {
    uVar13 = *(uint *)(*(long *)(piVar17 + 4) + (long)piVar17[2] * 4);
    uVar14 = (ulong)uVar13;
    if (0 < (int)uVar13) {
      piVar16 = *(int **)(piVar17 + 10);
      pdVar18 = *(double **)(piVar17 + 0x10);
      do {
        *pdVar18 = *(double *)(puVar10 + (long)*piVar16 * 8) * *pdVar18;
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 1;
        pdVar18 = pdVar18 + 1;
      } while (uVar14 != 0);
    }
    return piVar17;
  }
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x110) = 0;
  FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x160),&UNK_10f58a88b,0x1a0,3,
                FUN_1099aa768,0);
  plVar11 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x158) + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x200);
  *(ulong *)((long)register0x00000008 + -0x1a0) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x198) = unaff_x23;
  *(int **)((long)register0x00000008 + -400) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x188) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x180) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x178) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x170) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(code **)((long)register0x00000008 + -0x168) = FUN_1099237cc;
  if (plVar11 == (long *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x1b0) = 0;
    FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x200),&UNK_10f58a88b,0x1a8,3,
                  FUN_1099aa768,0);
    piVar16 = (int *)&UNK_10f58a29b;
    FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x1f8) + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    *(undefined8 *)((long)register0x00000008 + -0x250) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x248) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x240) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x238) = unaff_x23;
    *(int **)((long)register0x00000008 + -0x230) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x228) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x220) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x218) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x210) =
         (undefined1 *)((long)register0x00000008 + -0x170);
    *(code **)((long)register0x00000008 + -0x208) = FUN_10992397c;
    iVar9 = (int)piVar16;
    *(int *)((long)register0x00000008 + -0x2b8) = iVar9;
    *(undefined4 *)((long)register0x00000008 + -600) = 0;
    piVar4 = piVar16;
    if (-1 < iVar9) {
LAB_1099239ac:
      iVar29 = *(int *)(puVar5 + 8);
      *(int *)((long)register0x00000008 + -0x2b8) = iVar9;
      *(int *)((long)register0x00000008 + -600) = iVar29;
      if (iVar29 < iVar9) {
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x2b8);
        piVar4 = (int *)((long)register0x00000008 + -600);
        FUN_109904144(puVar6,piVar4,&UNK_10f58aa3a);
        *(undefined1 **)((long)register0x00000008 + -600) = puVar6;
        if (puVar6 != (undefined1 *)0x0) {
          uVar12 = 0x1b5;
          goto LAB_109923b94;
        }
      }
      piVar17 = (int *)(puVar5 + 0x58);
      iVar29 = *piVar17;
      *(undefined4 *)((long)register0x00000008 + -0x2b8) = 0;
      if (iVar29 != 0) {
        piVar4 = (int *)((long)register0x00000008 + -0x2b8);
        FUN_1099260f8(piVar17,piVar4,&UNK_10f58aa52);
        *(int **)((long)register0x00000008 + -600) = piVar17;
        bVar1 = piVar17 != (int *)0x0;
        piVar17 = (int *)0x0;
        if (bVar1) {
          uVar12 = 0x1b6;
          goto LAB_109923b94;
        }
      }
      iVar29 = *(int *)(puVar5 + 8);
      iVar15 = (int)((long)iVar29 - (long)iVar9);
      *(int *)(puVar5 + 8) = iVar15;
      uVar14 = ((long)iVar29 - (long)iVar9) + 1;
      piVar16 = *(int **)(puVar5 + 0x10);
      unaff_x22 = *(int **)(puVar5 + 0x18);
      unaff_x21 = (long)unaff_x22 - (long)piVar16;
      uVar20 = unaff_x21 >> 2;
      if (uVar20 < uVar14) {
        unaff_x24 = uVar14 - uVar20;
        if ((ulong)(*(long *)(puVar5 + 0x20) - (long)unaff_x22 >> 2) < unaff_x24) {
          if (iVar15 < -1) goto LAB_109923ba0;
          uVar20 = *(long *)(puVar5 + 0x20) - (long)piVar16;
          unaff_x25 = (long)uVar20 >> 1;
          if (unaff_x25 <= uVar14) {
            unaff_x25 = uVar14;
          }
          if (0x7ffffffffffffffb < uVar20) {
            unaff_x25 = 0x3fffffffffffffff;
          }
          if (unaff_x25 >> 0x3e == 0) {
            piVar4 = (int *)(unaff_x25 << 2);
            __Znwm();
            _bzero((undefined *)((long)piVar4 + unaff_x21),unaff_x24 * 4);
            piVar17 = piVar4;
            _memcpy(piVar4,piVar16,unaff_x21);
            *(int **)(puVar5 + 0x10) = piVar4;
            *(undefined **)(puVar5 + 0x18) = (undefined *)((long)piVar4 + unaff_x21) + unaff_x24 * 4
            ;
            *(int **)(puVar5 + 0x20) = piVar4 + unaff_x25;
            if (piVar16 != (int *)0x0) {
              __ZdlPv(piVar16);
              piVar17 = piVar16;
            }
            goto LAB_109923aa8;
          }
          goto LAB_109923ba4;
        }
        piVar17 = unaff_x22;
        _bzero(unaff_x22,unaff_x24 * 4);
        piVar16 = unaff_x22 + unaff_x24;
      }
      else {
        if (uVar20 <= uVar14) goto LAB_109923aa8;
        piVar16 = piVar16 + uVar14;
      }
      *(int **)(puVar5 + 0x18) = piVar16;
LAB_109923aa8:
      piVar16 = *(int **)(puVar5 + 0x60);
      if (piVar16 != *(int **)(puVar5 + 0x68)) {
        iVar9 = 0;
        lVar25 = (long)*(int **)(puVar5 + 0x68) - (long)piVar16 >> 2;
        do {
          if (*(int *)(puVar5 + 8) <= iVar9) {
            *(int **)(puVar5 + 0x68) = piVar16;
            return piVar17;
          }
          iVar9 = *piVar16 + iVar9;
          lVar25 = lVar25 + -1;
          piVar16 = piVar16 + 1;
        } while (lVar25 != 0);
      }
      return piVar17;
    }
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    piVar4 = (int *)((long)register0x00000008 + -600);
    FUN_109904144(puVar6,piVar4,&UNK_10f58aa2a);
    *(undefined1 **)((long)register0x00000008 + -600) = puVar6;
    if (puVar6 == (undefined1 *)0x0) goto LAB_1099239ac;
    uVar12 = 0x1b4;
LAB_109923b94:
    piVar4 = (int *)&UNK_10f58a88b;
    FUN_1099ab8e4((undefined1 *)((long)register0x00000008 + -0x2b8),&UNK_10f58a88b,uVar12,
                  (undefined1 *)((long)register0x00000008 + -600));
    piVar17 = (int *)((long)register0x00000008 + -0x2b8);
    func_0x0001099ab7c0();
LAB_109923ba0:
    FUN_10923f788();
LAB_109923ba4:
    func_0x000104c4f740();
    *(undefined8 *)((long)register0x00000008 + -800) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x318) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x310) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x308) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x300) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x2f8) = unaff_x23;
    *(int **)((long)register0x00000008 + -0x2f0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x2e8) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x2e0) = piVar16;
    *(undefined1 **)((long)register0x00000008 + -0x2d8) = puVar5;
    *(undefined1 **)((long)register0x00000008 + -0x2d0) =
         (undefined1 *)((long)register0x00000008 + -0x210);
    *(code **)((long)register0x00000008 + -0x2c8) = FUN_109923ba8;
    piVar16 = piVar17 + 0x16;
    iVar9 = *piVar16;
    *(undefined4 *)((long)register0x00000008 + -0x388) = 0;
    if (iVar9 != 0) {
      FUN_1099260f8(piVar16,(undefined1 *)((long)register0x00000008 + -0x388),&UNK_10f58aa52);
      *(int **)((long)register0x00000008 + -0x328) = piVar16;
      bVar1 = piVar16 == (int *)0x0;
      piVar16 = (int *)0x0;
      if (bVar1) goto LAB_109923bdc;
      uVar12 = 0x1ce;
LAB_10992413c:
      FUN_1099ab8e4((undefined1 *)((long)register0x00000008 + -0x388),&UNK_10f58a88b,uVar12,
                    (undefined1 *)((long)register0x00000008 + -0x328));
      goto LAB_109924224;
    }
LAB_109923bdc:
    iVar9 = piVar4[3];
    iVar29 = piVar17[3];
    *(int *)((long)register0x00000008 + -0x388) = iVar9;
    *(int *)((long)register0x00000008 + -0x328) = iVar29;
    if (iVar9 != iVar29) {
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x388);
      FUN_109904144(puVar5,(undefined1 *)((long)register0x00000008 + -0x328),&UNK_10f58aa6f);
      *(undefined1 **)((long)register0x00000008 + -0x328) = puVar5;
      piVar16 = (int *)0x0;
      if (puVar5 != (undefined1 *)0x0) {
        uVar12 = 0x1cf;
        goto LAB_10992413c;
      }
    }
    if ((*(long *)(piVar17 + 0x18) == *(long *)(piVar17 + 0x1a)) !=
        (*(long *)(piVar4 + 0x18) == *(long *)(piVar4 + 0x1a))) {
      *(undefined8 *)((long)register0x00000008 + -0x388) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x330) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x370) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x378) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x360) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x368) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x350) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x338) = 0;
      FUN_1099a9f0c((undefined1 *)((long)register0x00000008 + -0x388),&UNK_10f58a88b,0x1d2,3,
                    FUN_1099aa768,0);
      FUN_1092b4db8(*(long *)((long)register0x00000008 + -0x380) + 0x7540,&UNK_10f58aa89,0x73);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      goto LAB_109924224;
    }
    iVar9 = piVar4[2];
    if (iVar9 == 0) {
      return piVar16;
    }
    lVar24 = (long)iVar9;
    piVar8 = *(int **)(piVar17 + 10);
    piVar7 = *(int **)(piVar17 + 0xc);
    iVar29 = piVar17[2];
    piVar27 = *(int **)(piVar17 + 4);
    lVar25 = (long)piVar7 - (long)piVar8;
    uVar14 = (long)*(int *)(*(long *)(piVar4 + 4) + lVar24 * 4) + (long)piVar27[iVar29];
    if ((ulong)(lVar25 >> 2) < uVar14) {
      uVar20 = uVar14 - (lVar25 >> 2);
      if ((ulong)(*(long *)(piVar17 + 0xe) - (long)piVar7 >> 2) < uVar20) {
        if (-1 < (int)uVar14) {
          uVar19 = *(long *)(piVar17 + 0xe) - (long)piVar8;
          uVar21 = (long)uVar19 >> 1;
          if (uVar21 <= uVar14) {
            uVar21 = uVar14;
          }
          if (0x7ffffffffffffffb < uVar19) {
            uVar21 = 0x3fffffffffffffff;
          }
          if (uVar21 >> 0x3e == 0) {
            piVar7 = (int *)(uVar21 << 2);
            __Znwm();
            _bzero((undefined *)((long)piVar7 + lVar25),uVar20 * 4);
            piVar16 = piVar7;
            _memcpy(piVar7,piVar8,lVar25);
            *(int **)(piVar17 + 10) = piVar7;
            *(undefined **)(piVar17 + 0xc) = (undefined *)((long)piVar7 + lVar25) + uVar20 * 4;
            *(int **)(piVar17 + 0xe) = piVar7 + uVar21;
            if (piVar8 != (int *)0x0) {
              __ZdlPv(piVar8);
              piVar27 = *(int **)(piVar17 + 4);
              piVar16 = piVar8;
            }
            goto LAB_109923cf4;
          }
          goto LAB_109924218;
        }
        goto LAB_10992421c;
      }
      piVar16 = piVar7;
      _bzero(piVar7,uVar20 * 4);
      *(int **)(piVar17 + 0xc) = piVar7 + uVar20;
LAB_109923cf4:
      iVar29 = piVar17[2];
      iVar9 = piVar4[2];
      lVar24 = (long)iVar9;
      uVar14 = (long)*(int *)(*(long *)(piVar4 + 4) + (long)iVar9 * 4) + (long)piVar27[iVar29];
      piVar8 = *(int **)(piVar17 + 0x10);
      piVar7 = *(int **)(piVar17 + 0x12);
      lVar25 = (long)piVar7 - (long)piVar8;
      uVar20 = lVar25 >> 3;
      if (uVar14 <= uVar20) {
        if (uVar20 <= uVar14) goto LAB_109923df4;
        piVar8 = piVar8 + uVar14 * 2;
LAB_109923df0:
        *(int **)(piVar17 + 0x12) = piVar8;
        goto LAB_109923df4;
      }
      uVar20 = uVar14 - uVar20;
      if (uVar20 <= (ulong)(*(long *)(piVar17 + 0x14) - (long)piVar7 >> 3)) {
        piVar16 = piVar7;
        _bzero(piVar7,uVar20 * 8);
        piVar8 = piVar7 + uVar20 * 2;
        goto LAB_109923df0;
      }
      if (-1 < (int)uVar14) {
        uVar19 = *(long *)(piVar17 + 0x14) - (long)piVar8;
        uVar21 = (long)uVar19 >> 2;
        if (uVar21 <= uVar14) {
          uVar21 = uVar14;
        }
        if (0x7ffffffffffffff7 < uVar19) {
          uVar21 = 0x1fffffffffffffff;
        }
        if (uVar21 >> 0x3d != 0) goto LAB_109924218;
        piVar7 = (int *)(uVar21 << 3);
        *(ulong *)((long)register0x00000008 + -0x390) = uVar21;
        __Znwm();
        *(undefined **)((long)register0x00000008 + -0x398) = (undefined *)((long)piVar7 + lVar25);
        *(int **)((long)register0x00000008 + -0x390) =
             piVar7 + *(long *)((long)register0x00000008 + -0x390) * 2;
        _bzero((undefined *)((long)piVar7 + lVar25),uVar20 * 8);
        lVar26 = *(long *)((long)register0x00000008 + -0x398);
        piVar16 = piVar7;
        _memcpy(piVar7,piVar8,lVar25);
        *(int **)(piVar17 + 0x10) = piVar7;
        *(ulong *)(piVar17 + 0x12) = lVar26 + uVar20 * 8;
        *(undefined8 *)(piVar17 + 0x14) = *(undefined8 *)((long)register0x00000008 + -0x390);
        if (piVar8 != (int *)0x0) {
          __ZdlPv(piVar8);
          iVar9 = piVar4[2];
          lVar24 = (long)iVar9;
          iVar29 = piVar17[2];
          piVar27 = *(int **)(piVar17 + 4);
          piVar16 = piVar8;
        }
        goto LAB_109923df4;
      }
    }
    else {
LAB_109923df4:
      uVar13 = *(uint *)(*(long *)(piVar4 + 4) + lVar24 * 4);
      if (0 < (int)uVar13) {
        piVar16 = (int *)(*(long *)(piVar17 + 10) + (long)piVar27[iVar29] * 4);
        _memmove(piVar16,*(undefined8 *)(piVar4 + 10),(ulong)uVar13 << 2);
        iVar9 = piVar4[2];
        iVar15 = *(int *)(*(long *)(piVar4 + 4) + (long)iVar9 * 4);
        iVar29 = piVar17[2];
        piVar27 = *(int **)(piVar17 + 4);
        if (iVar15 != 0) {
          piVar16 = (int *)(*(long *)(piVar17 + 0x10) + (long)piVar27[iVar29] * 8);
          _memmove(piVar16,*(undefined8 *)(piVar4 + 0x10),(long)iVar15 << 3);
          iVar29 = piVar17[2];
          iVar9 = piVar4[2];
          piVar27 = *(int **)(piVar17 + 4);
        }
      }
      uVar14 = (ulong)(iVar29 + iVar9 + 1);
      piVar7 = *(int **)(piVar17 + 6);
      lVar25 = (long)piVar7 - (long)piVar27;
      uVar20 = lVar25 >> 2;
      piVar8 = piVar27;
      if (uVar20 < uVar14) {
        uVar20 = uVar14 - uVar20;
        if ((ulong)(*(long *)(piVar17 + 8) - (long)piVar7 >> 2) < uVar20) {
          if (iVar29 + iVar9 < -1) goto LAB_10992421c;
          uVar19 = *(long *)(piVar17 + 8) - (long)piVar27;
          uVar21 = (long)uVar19 >> 1;
          if (uVar21 <= uVar14) {
            uVar21 = uVar14;
          }
          if (0x7ffffffffffffffb < uVar19) {
            uVar21 = 0x3fffffffffffffff;
          }
          if (uVar21 >> 0x3e != 0) goto LAB_109924218;
          piVar8 = (int *)(uVar21 << 2);
          __Znwm();
          _bzero((undefined *)((long)piVar8 + lVar25),uVar20 * 4);
          piVar16 = piVar8;
          _memcpy(piVar8,piVar27,lVar25);
          *(int **)(piVar17 + 4) = piVar8;
          *(undefined **)(piVar17 + 6) = (undefined *)((long)piVar8 + lVar25) + uVar20 * 4;
          *(int **)(piVar17 + 8) = piVar8 + uVar21;
          if (piVar27 != (int *)0x0) {
            __ZdlPv(piVar27);
            piVar16 = piVar27;
            piVar8 = *(int **)(piVar17 + 4);
          }
        }
        else {
          piVar16 = piVar7;
          _bzero(piVar7,uVar20 * 4);
          piVar27 = piVar7 + uVar20;
LAB_109923f30:
          *(int **)(piVar17 + 6) = piVar27;
        }
      }
      else if (uVar14 < uVar20) {
        piVar27 = piVar27 + uVar14;
        goto LAB_109923f30;
      }
      uVar13 = piVar4[2];
      if (0 < (long)((-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2) + 4) >> 2)
      {
        iVar9 = piVar8[piVar17[2]];
        uVar14 = (long)(int)uVar13 + 2;
        piVar27 = piVar8 + piVar17[2];
        do {
          *piVar27 = iVar9;
          uVar14 = uVar14 - 1;
          piVar27 = piVar27 + 1;
        } while (1 < uVar14);
        uVar13 = piVar4[2];
      }
      if (-1 < (int)uVar13) {
        lVar24 = *(long *)(piVar4 + 4);
        lVar25 = 0;
        do {
          piVar8[lVar25 + piVar17[2]] = piVar8[lVar25 + piVar17[2]] + *(int *)(lVar24 + lVar25 * 4);
          uVar13 = piVar4[2];
          bVar1 = lVar25 < (int)uVar13;
          lVar25 = lVar25 + 1;
        } while (bVar1);
      }
      piVar17[2] = piVar17[2] + uVar13;
      piVar27 = *(int **)(piVar17 + 0x18);
      piVar8 = *(int **)(piVar17 + 0x1a);
      if (piVar27 == piVar8) {
        return piVar16;
      }
      piVar7 = *(int **)(piVar4 + 0x18);
      piVar4 = *(int **)(piVar4 + 0x1a);
      lVar25 = (long)piVar4 - (long)piVar7;
      if (lVar25 >> 2 < 1) {
        return piVar16;
      }
      if (lVar25 <= *(long *)(piVar17 + 0x1c) - (long)piVar8) {
        piVar27 = piVar8;
        if (piVar7 != piVar4) {
          piVar27 = (int *)(((long)piVar4 + (long)piVar8) - (long)piVar7);
          do {
            piVar28 = piVar7 + 1;
            *piVar8 = *piVar7;
            piVar8 = piVar8 + 1;
            piVar7 = piVar28;
          } while (piVar28 != piVar4);
        }
        *(int **)(piVar17 + 0x1a) = piVar27;
        return piVar16;
      }
      lVar24 = (long)piVar8 - (long)piVar27;
      uVar14 = (lVar25 >> 2) + (lVar24 >> 2);
      if (uVar14 >> 0x3e == 0) {
        uVar21 = *(long *)(piVar17 + 0x1c) - (long)piVar27;
        uVar20 = (long)uVar21 >> 1;
        if (uVar20 <= uVar14) {
          uVar20 = uVar14;
        }
        if (0x7ffffffffffffffb < uVar21) {
          uVar20 = 0x3fffffffffffffff;
        }
        if (uVar20 == 0) {
          piVar16 = (int *)0x0;
LAB_109924070:
          lVar3 = lVar25 + lVar24;
          lVar26 = lVar24;
          do {
            *(int *)((long)piVar16 + lVar26) = *piVar7;
            lVar26 = lVar26 + 4;
            lVar25 = lVar25 + -4;
            piVar7 = piVar7 + 1;
          } while (lVar25 != 0);
          *(int **)(piVar17 + 0x1a) = piVar8;
          piVar4 = piVar16;
          _memcpy(piVar16,piVar27,lVar24);
          *(int **)(piVar17 + 0x18) = piVar16;
          *(long *)(piVar17 + 0x1a) = (long)piVar16 + lVar3;
          *(int **)(piVar17 + 0x1c) = piVar16 + uVar20;
          if (piVar27 != (int *)0x0) {
            __ZdlPv(piVar27);
            piVar4 = piVar27;
          }
          return piVar4;
        }
        if (uVar20 >> 0x3e == 0) {
          piVar16 = (int *)(uVar20 << 2);
          __Znwm();
          goto LAB_109924070;
        }
LAB_109924218:
        func_0x000104c4f740();
      }
LAB_10992421c:
      FUN_10923f788();
    }
    FUN_1092d2ba8();
LAB_109924224:
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x388);
    func_0x0001099ab7c0();
    return (int *)(ulong)*(uint *)(puVar5 + 0xc);
  }
  iVar9 = piVar16[2];
  iVar29 = piVar16[3];
  lVar25 = (long)iVar29;
  if (iVar9 != 0 && iVar29 != 0) {
    lVar24 = 0;
    if (lVar25 != 0) {
      lVar24 = 0x7fffffffffffffff / lVar25;
    }
    if (iVar9 <= lVar24) goto LAB_109923818;
    goto LAB_109923850;
  }
LAB_109923818:
  unaff_x23 = (long)iVar29 * (long)iVar9;
  piVar4 = piVar16;
  if (plVar11[2] * plVar11[1] - unaff_x23 == 0) goto LAB_109923878;
  _free(*plVar11);
  if ((long)unaff_x23 < 1) {
LAB_109923870:
    piVar4 = (int *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_109923850:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109923870;
    }
    piVar4 = (int *)(unaff_x23 * 8);
    _malloc();
    if (piVar4 == (int *)0x0) goto LAB_109923850;
  }
  *plVar11 = (long)piVar4;
LAB_109923878:
  plVar11[1] = (long)iVar9;
  plVar11[2] = lVar25;
  if (0 < (long)unaff_x23) {
    piVar4 = (int *)*plVar11;
    _bzero(piVar4,unaff_x23 << 3);
  }
  uVar13 = piVar16[2];
  if (0 < (int)uVar13) {
    piVar17 = *(int **)(piVar16 + 4);
    uVar14 = 0;
    iVar9 = *piVar17;
    do {
      uVar20 = uVar14 + 1;
      iVar29 = piVar17[uVar20];
      if (iVar9 < iVar29) {
        lVar26 = *plVar11;
        lVar24 = (long)iVar29 - (long)iVar9;
        puVar22 = (undefined8 *)(*(long *)(piVar16 + 0x10) + (long)iVar9 * 8);
        piVar27 = (int *)(*(long *)(piVar16 + 10) + (long)iVar9 * 4);
        do {
          *(undefined8 *)(lVar26 + uVar14 * lVar25 * 8 + (long)*piVar27 * 8) = *puVar22;
          lVar24 = lVar24 + -1;
          puVar22 = puVar22 + 1;
          piVar27 = piVar27 + 1;
        } while (lVar24 != 0);
      }
      uVar14 = uVar20;
      iVar9 = iVar29;
    } while (uVar20 != uVar13);
  }
  return piVar4;
}



/* Entry: 109923478; end: 109923713;  */

int * FUN_109923478(int *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  int *piVar15;
  double *pdVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  ulong unaff_x23;
  int *piVar26;
  int iVar27;
  double dVar28;
  int aiStack_318 [2];
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  int *piStack_2b8;
  int aiStack_248 [24];
  undefined8 uStack_1e8;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  int aiStack_f0 [2];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  piVar15 = aiStack_80;
  if (param_2 == (int *)0x0) {
    aiStack_80[0] = 0;
    aiStack_80[1] = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(aiStack_80,&UNK_10f58a88b,0x168,3,FUN_1099aa768,0);
    puVar9 = &UNK_10f58a9db;
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f58a9db,0x1b);
  }
  else {
    piVar4 = param_1;
    if (0 < param_1[3]) {
      piVar4 = param_2;
      _bzero(param_2,(ulong)(uint)param_1[3] << 3);
    }
    iVar8 = param_1[0x16];
    if (iVar8 == 0) {
      uVar12 = *(uint *)(*(long *)(param_1 + 4) + (long)param_1[2] * 4);
      uVar13 = (ulong)uVar12;
      if (0 < (int)uVar12) {
        pdVar16 = *(double **)(param_1 + 0x10);
        piVar15 = *(int **)(param_1 + 10);
        do {
          *(double *)(param_2 + (long)*piVar15 * 2) =
               *(double *)(param_2 + (long)*piVar15 * 2) + *pdVar16 * *pdVar16;
          uVar13 = uVar13 - 1;
          pdVar16 = pdVar16 + 1;
          piVar15 = piVar15 + 1;
        } while (uVar13 != 0);
      }
      return piVar4;
    }
    if (iVar8 == 2) {
      uVar12 = param_1[2];
      if ((int)uVar12 < 1) {
        return piVar4;
      }
      piVar15 = *(int **)(param_1 + 4);
      uVar13 = 0;
      iVar8 = *piVar15;
      do {
        uVar19 = uVar13 + 1;
        iVar27 = piVar15[uVar19];
        if (iVar8 < iVar27) {
          piVar17 = (int *)(*(long *)(param_1 + 10) + (long)iVar8 * 4);
          do {
            if ((long)uVar13 <= (long)*piVar17) goto LAB_10992359c;
            iVar8 = iVar8 + 1;
            piVar17 = piVar17 + 1;
          } while (iVar27 != iVar8);
        }
        else {
LAB_10992359c:
          if (iVar8 < iVar27) {
            lVar23 = (long)iVar27 - (long)iVar8;
            puVar21 = (uint *)(*(long *)(param_1 + 10) + (long)iVar8 * 4);
            pdVar16 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar8 * 8);
            do {
              uVar2 = *puVar21;
              dVar28 = *pdVar16 * *pdVar16;
              *(double *)(param_2 + (long)(int)uVar2 * 2) =
                   *(double *)(param_2 + (long)(int)uVar2 * 2) + dVar28;
              if (uVar13 != uVar2) {
                *(double *)(param_2 + uVar13 * 2) = dVar28 + *(double *)(param_2 + uVar13 * 2);
              }
              lVar23 = lVar23 + -1;
              puVar21 = puVar21 + 1;
              pdVar16 = pdVar16 + 1;
            } while (lVar23 != 0);
          }
        }
        uVar13 = uVar19;
        iVar8 = iVar27;
        if (uVar19 == uVar12) {
          return piVar4;
        }
      } while( true );
    }
    if (iVar8 == 1) {
      uVar12 = param_1[2];
      if ((int)uVar12 < 1) {
        return piVar4;
      }
      piVar15 = *(int **)(param_1 + 4);
      uVar13 = 0;
      iVar8 = *piVar15;
      do {
        uVar19 = uVar13 + 1;
        iVar27 = piVar15[uVar19];
        iVar14 = iVar27 - iVar8;
        if (iVar14 != 0 && iVar8 <= iVar27) {
          lVar22 = *(long *)(param_1 + 10);
          lVar23 = (long)iVar8;
          do {
            uVar2 = *(uint *)(lVar22 + lVar23 * 4);
            lVar24 = (long)(int)uVar2;
            if ((long)uVar13 < lVar24) break;
            dVar28 = *(double *)(*(long *)(param_1 + 0x10) + lVar23 * 8);
            dVar28 = dVar28 * dVar28;
            *(double *)(param_2 + lVar24 * 2) = *(double *)(param_2 + lVar24 * 2) + dVar28;
            if (uVar13 != uVar2) {
              *(double *)(param_2 + uVar13 * 2) = dVar28 + *(double *)(param_2 + uVar13 * 2);
            }
            lVar23 = lVar23 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        uVar13 = uVar19;
        iVar8 = iVar27;
        if (uVar19 == uVar12) {
          return piVar4;
        }
      } while( true );
    }
    aiStack_80[0] = 0;
    aiStack_80[1] = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(aiStack_80,&UNK_10f58a88b,0x19c,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f58aa13,0x16);
    puVar9 = (undefined *)(ulong)(uint)param_1[0x16];
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  func_0x0001099ab7c0();
  piVar4 = aiStack_f0;
  pcStack_88 = FUN_109923714;
  if (puVar9 != (undefined *)0x0) {
    uVar12 = *(uint *)(*(long *)(piVar15 + 4) + (long)piVar15[2] * 4);
    uVar13 = (ulong)uVar12;
    if (0 < (int)uVar12) {
      piVar4 = *(int **)(piVar15 + 10);
      pdVar16 = *(double **)(piVar15 + 0x10);
      do {
        *pdVar16 = *(double *)(puVar9 + (long)*piVar4 * 8) * *pdVar16;
        uVar13 = uVar13 - 1;
        piVar4 = piVar4 + 1;
        pdVar16 = pdVar16 + 1;
      } while (uVar13 != 0);
    }
    return piVar15;
  }
  aiStack_f0[0] = 0;
  aiStack_f0[1] = 0;
  uStack_98 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_1099a9f0c(aiStack_f0,&UNK_10f58a88b,0x1a0,3,FUN_1099aa768,0);
  plVar10 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_e8 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  puVar5 = &uStack_190;
  if (plVar10 == (long *)0x0) {
    uStack_190 = 0;
    uStack_138 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_140 = 0;
    FUN_1099a9f0c(&uStack_190,&UNK_10f58a88b,0x1a8,3,FUN_1099aa768,0);
    piVar15 = (int *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_188 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    iVar8 = (int)piVar15;
    uStack_1e8 = (int *)((ulong)uStack_1e8._4_4_ << 0x20);
    if (-1 < iVar8) {
LAB_1099239ac:
      uStack_1e8 = (int *)CONCAT44(uStack_1e8._4_4_,*(int *)((long)puVar5 + 8));
      if (*(int *)((long)puVar5 + 8) < iVar8) {
        piVar4 = aiStack_248;
        piVar15 = (int *)&uStack_1e8;
        aiStack_248[0] = iVar8;
        FUN_109904144(piVar4,piVar15,&UNK_10f58aa3a);
        uStack_1e8 = piVar4;
        if (piVar4 != (int *)0x0) {
          uVar11 = 0x1b5;
          goto LAB_109923b94;
        }
      }
      piVar17 = (int *)((long)puVar5 + 0x58);
      aiStack_248[0] = 0;
      piVar4 = piVar17;
      if (*piVar17 != 0) {
        piVar15 = aiStack_248;
        FUN_1099260f8(piVar17,piVar15,&UNK_10f58aa52);
        piVar4 = (int *)0x0;
        uStack_1e8 = piVar17;
        if (piVar17 != (int *)0x0) {
          uVar11 = 0x1b6;
          goto LAB_109923b94;
        }
      }
      iVar27 = *(int *)((long)puVar5 + 8);
      iVar14 = (int)((long)iVar27 - (long)iVar8);
      *(int *)((long)puVar5 + 8) = iVar14;
      uVar13 = ((long)iVar27 - (long)iVar8) + 1;
      piVar17 = *(int **)((long)puVar5 + 0x10);
      piVar25 = *(int **)((long)puVar5 + 0x18);
      lVar23 = (long)piVar25 - (long)piVar17;
      uVar19 = lVar23 >> 2;
      if (uVar19 < uVar13) {
        uVar19 = uVar13 - uVar19;
        if ((ulong)(*(long *)((long)puVar5 + 0x20) - (long)piVar25 >> 2) < uVar19) {
          if (iVar14 < -1) goto LAB_109923ba0;
          uVar18 = *(long *)((long)puVar5 + 0x20) - (long)piVar17;
          uVar20 = (long)uVar18 >> 1;
          if (uVar20 <= uVar13) {
            uVar20 = uVar13;
          }
          if (0x7ffffffffffffffb < uVar18) {
            uVar20 = 0x3fffffffffffffff;
          }
          if (uVar20 >> 0x3e == 0) {
            piVar15 = (int *)(uVar20 << 2);
            __Znwm();
            _bzero((long)piVar15 + lVar23,uVar19 * 4);
            piVar4 = piVar15;
            _memcpy(piVar15,piVar17,lVar23);
            *(int **)((long)puVar5 + 0x10) = piVar15;
            *(ulong *)((long)puVar5 + 0x18) = (long)piVar15 + lVar23 + uVar19 * 4;
            *(int **)((long)puVar5 + 0x20) = piVar15 + uVar20;
            if (piVar17 != (int *)0x0) {
              __ZdlPv(piVar17);
              piVar4 = piVar17;
            }
            goto LAB_109923aa8;
          }
          goto LAB_109923ba4;
        }
        piVar4 = piVar25;
        _bzero(piVar25,uVar19 * 4);
        piVar17 = piVar25 + uVar19;
      }
      else {
        if (uVar19 <= uVar13) goto LAB_109923aa8;
        piVar17 = piVar17 + uVar13;
      }
      *(int **)((long)puVar5 + 0x18) = piVar17;
LAB_109923aa8:
      piVar15 = *(int **)((long)puVar5 + 0x60);
      if (piVar15 != *(int **)((long)puVar5 + 0x68)) {
        iVar8 = 0;
        lVar23 = (long)*(int **)((long)puVar5 + 0x68) - (long)piVar15 >> 2;
        do {
          if (*(int *)((long)puVar5 + 8) <= iVar8) {
            *(int **)((long)puVar5 + 0x68) = piVar15;
            return piVar4;
          }
          iVar8 = *piVar15 + iVar8;
          lVar23 = lVar23 + -1;
          piVar15 = piVar15 + 1;
        } while (lVar23 != 0);
      }
      return piVar4;
    }
    piVar4 = aiStack_248;
    piVar15 = (int *)&uStack_1e8;
    aiStack_248[0] = iVar8;
    FUN_109904144(piVar4,piVar15,&UNK_10f58aa2a);
    uStack_1e8 = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_1099239ac;
    uVar11 = 0x1b4;
LAB_109923b94:
    piVar15 = (int *)&UNK_10f58a88b;
    FUN_1099ab8e4(aiStack_248,&UNK_10f58a88b,uVar11,&uStack_1e8);
    piVar4 = aiStack_248;
    func_0x0001099ab7c0();
LAB_109923ba0:
    FUN_10923f788();
LAB_109923ba4:
    func_0x000104c4f740();
    piVar25 = piVar4 + 0x16;
    aiStack_318[0] = 0;
    piVar17 = piVar25;
    if (*piVar25 != 0) {
      FUN_1099260f8(piVar25,aiStack_318,&UNK_10f58aa52);
      piVar17 = (int *)0x0;
      piStack_2b8 = piVar25;
      if (piVar25 == (int *)0x0) goto LAB_109923bdc;
      uVar11 = 0x1ce;
LAB_10992413c:
      FUN_1099ab8e4(aiStack_318,&UNK_10f58a88b,uVar11,&piStack_2b8);
      goto LAB_109924224;
    }
LAB_109923bdc:
    aiStack_318[0] = piVar15[3];
    piStack_2b8 = (int *)CONCAT44(piStack_2b8._4_4_,piVar4[3]);
    if (aiStack_318[0] != piVar4[3]) {
      piVar25 = aiStack_318;
      FUN_109904144(piVar25,&piStack_2b8,&UNK_10f58aa6f);
      piVar17 = (int *)0x0;
      piStack_2b8 = piVar25;
      if (piVar25 != (int *)0x0) {
        uVar11 = 0x1cf;
        goto LAB_10992413c;
      }
    }
    if ((*(long *)(piVar4 + 0x18) == *(long *)(piVar4 + 0x1a)) !=
        (*(long *)(piVar15 + 0x18) == *(long *)(piVar15 + 0x1a))) {
      aiStack_318[0] = 0;
      aiStack_318[1] = 0;
      uStack_2c0 = 0;
      uStack_300 = 0;
      uStack_308 = 0;
      uStack_2f0 = 0;
      uStack_2f8 = 0;
      uStack_2e0 = 0;
      uStack_2e8 = 0;
      uStack_2d0 = 0;
      uStack_2d8 = 0;
      uStack_2c8 = 0;
      FUN_1099a9f0c(aiStack_318,&UNK_10f58a88b,0x1d2,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_310 + 0x7540,&UNK_10f58aa89,0x73);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      goto LAB_109924224;
    }
    iVar8 = piVar15[2];
    if (iVar8 == 0) {
      return piVar17;
    }
    lVar22 = (long)iVar8;
    piVar7 = *(int **)(piVar4 + 10);
    piVar6 = *(int **)(piVar4 + 0xc);
    iVar27 = piVar4[2];
    piVar25 = *(int **)(piVar4 + 4);
    lVar23 = (long)piVar6 - (long)piVar7;
    uVar13 = (long)*(int *)(*(long *)(piVar15 + 4) + lVar22 * 4) + (long)piVar25[iVar27];
    if ((ulong)(lVar23 >> 2) < uVar13) {
      uVar19 = uVar13 - (lVar23 >> 2);
      if ((ulong)(*(long *)(piVar4 + 0xe) - (long)piVar6 >> 2) < uVar19) {
        if (-1 < (int)uVar13) {
          uVar18 = *(long *)(piVar4 + 0xe) - (long)piVar7;
          uVar20 = (long)uVar18 >> 1;
          if (uVar20 <= uVar13) {
            uVar20 = uVar13;
          }
          if (0x7ffffffffffffffb < uVar18) {
            uVar20 = 0x3fffffffffffffff;
          }
          if (uVar20 >> 0x3e == 0) {
            piVar6 = (int *)(uVar20 << 2);
            __Znwm();
            _bzero((long)piVar6 + lVar23,uVar19 * 4);
            piVar17 = piVar6;
            _memcpy(piVar6,piVar7,lVar23);
            *(int **)(piVar4 + 10) = piVar6;
            *(ulong *)(piVar4 + 0xc) = (long)piVar6 + lVar23 + uVar19 * 4;
            *(int **)(piVar4 + 0xe) = piVar6 + uVar20;
            if (piVar7 != (int *)0x0) {
              __ZdlPv(piVar7);
              piVar25 = *(int **)(piVar4 + 4);
              piVar17 = piVar7;
            }
            goto LAB_109923cf4;
          }
          goto LAB_109924218;
        }
        goto LAB_10992421c;
      }
      piVar17 = piVar6;
      _bzero(piVar6,uVar19 * 4);
      *(int **)(piVar4 + 0xc) = piVar6 + uVar19;
LAB_109923cf4:
      iVar27 = piVar4[2];
      iVar8 = piVar15[2];
      lVar22 = (long)iVar8;
      uVar13 = (long)*(int *)(*(long *)(piVar15 + 4) + (long)iVar8 * 4) + (long)piVar25[iVar27];
      piVar7 = *(int **)(piVar4 + 0x10);
      piVar6 = *(int **)(piVar4 + 0x12);
      lVar23 = (long)piVar6 - (long)piVar7;
      uVar19 = lVar23 >> 3;
      if (uVar13 <= uVar19) {
        if (uVar19 <= uVar13) goto LAB_109923df4;
        piVar7 = piVar7 + uVar13 * 2;
LAB_109923df0:
        *(int **)(piVar4 + 0x12) = piVar7;
        goto LAB_109923df4;
      }
      uVar19 = uVar13 - uVar19;
      if (uVar19 <= (ulong)(*(long *)(piVar4 + 0x14) - (long)piVar6 >> 3)) {
        piVar17 = piVar6;
        _bzero(piVar6,uVar19 * 8);
        piVar7 = piVar6 + uVar19 * 2;
        goto LAB_109923df0;
      }
      if (-1 < (int)uVar13) {
        uVar18 = *(long *)(piVar4 + 0x14) - (long)piVar7;
        uVar20 = (long)uVar18 >> 2;
        if (uVar20 <= uVar13) {
          uVar20 = uVar13;
        }
        if (0x7ffffffffffffff7 < uVar18) {
          uVar20 = 0x1fffffffffffffff;
        }
        if (uVar20 >> 0x3d != 0) goto LAB_109924218;
        piVar6 = (int *)(uVar20 << 3);
        __Znwm();
        _bzero((long)piVar6 + lVar23,uVar19 * 8);
        piVar17 = piVar6;
        _memcpy(piVar6,piVar7,lVar23);
        *(int **)(piVar4 + 0x10) = piVar6;
        *(ulong *)(piVar4 + 0x12) = (long)piVar6 + lVar23 + uVar19 * 8;
        *(int **)(piVar4 + 0x14) = piVar6 + uVar20 * 2;
        if (piVar7 != (int *)0x0) {
          __ZdlPv(piVar7);
          iVar8 = piVar15[2];
          lVar22 = (long)iVar8;
          iVar27 = piVar4[2];
          piVar25 = *(int **)(piVar4 + 4);
          piVar17 = piVar7;
        }
        goto LAB_109923df4;
      }
    }
    else {
LAB_109923df4:
      uVar12 = *(uint *)(*(long *)(piVar15 + 4) + lVar22 * 4);
      if (0 < (int)uVar12) {
        piVar17 = (int *)(*(long *)(piVar4 + 10) + (long)piVar25[iVar27] * 4);
        _memmove(piVar17,*(undefined8 *)(piVar15 + 10),(ulong)uVar12 << 2);
        iVar8 = piVar15[2];
        iVar14 = *(int *)(*(long *)(piVar15 + 4) + (long)iVar8 * 4);
        iVar27 = piVar4[2];
        piVar25 = *(int **)(piVar4 + 4);
        if (iVar14 != 0) {
          piVar17 = (int *)(*(long *)(piVar4 + 0x10) + (long)piVar25[iVar27] * 8);
          _memmove(piVar17,*(undefined8 *)(piVar15 + 0x10),(long)iVar14 << 3);
          iVar27 = piVar4[2];
          iVar8 = piVar15[2];
          piVar25 = *(int **)(piVar4 + 4);
        }
      }
      uVar13 = (ulong)(iVar27 + iVar8 + 1);
      piVar6 = *(int **)(piVar4 + 6);
      lVar23 = (long)piVar6 - (long)piVar25;
      uVar19 = lVar23 >> 2;
      piVar7 = piVar25;
      if (uVar19 < uVar13) {
        uVar19 = uVar13 - uVar19;
        if ((ulong)(*(long *)(piVar4 + 8) - (long)piVar6 >> 2) < uVar19) {
          if (iVar27 + iVar8 < -1) goto LAB_10992421c;
          uVar18 = *(long *)(piVar4 + 8) - (long)piVar25;
          uVar20 = (long)uVar18 >> 1;
          if (uVar20 <= uVar13) {
            uVar20 = uVar13;
          }
          if (0x7ffffffffffffffb < uVar18) {
            uVar20 = 0x3fffffffffffffff;
          }
          if (uVar20 >> 0x3e != 0) goto LAB_109924218;
          piVar7 = (int *)(uVar20 << 2);
          __Znwm();
          _bzero((long)piVar7 + lVar23,uVar19 * 4);
          piVar17 = piVar7;
          _memcpy(piVar7,piVar25,lVar23);
          *(int **)(piVar4 + 4) = piVar7;
          *(ulong *)(piVar4 + 6) = (long)piVar7 + lVar23 + uVar19 * 4;
          *(int **)(piVar4 + 8) = piVar7 + uVar20;
          if (piVar25 != (int *)0x0) {
            __ZdlPv(piVar25);
            piVar17 = piVar25;
            piVar7 = *(int **)(piVar4 + 4);
          }
        }
        else {
          piVar17 = piVar6;
          _bzero(piVar6,uVar19 * 4);
          piVar25 = piVar6 + uVar19;
LAB_109923f30:
          *(int **)(piVar4 + 6) = piVar25;
        }
      }
      else if (uVar13 < uVar19) {
        piVar25 = piVar25 + uVar13;
        goto LAB_109923f30;
      }
      uVar12 = piVar15[2];
      if (0 < (long)((-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2) + 4) >> 2)
      {
        iVar8 = piVar7[piVar4[2]];
        uVar13 = (long)(int)uVar12 + 2;
        piVar25 = piVar7 + piVar4[2];
        do {
          *piVar25 = iVar8;
          uVar13 = uVar13 - 1;
          piVar25 = piVar25 + 1;
        } while (1 < uVar13);
        uVar12 = piVar15[2];
      }
      if (-1 < (int)uVar12) {
        lVar22 = *(long *)(piVar15 + 4);
        lVar23 = 0;
        do {
          piVar7[lVar23 + piVar4[2]] = piVar7[lVar23 + piVar4[2]] + *(int *)(lVar22 + lVar23 * 4);
          uVar12 = piVar15[2];
          bVar1 = lVar23 < (int)uVar12;
          lVar23 = lVar23 + 1;
        } while (bVar1);
      }
      piVar4[2] = piVar4[2] + uVar12;
      piVar25 = *(int **)(piVar4 + 0x18);
      piVar7 = *(int **)(piVar4 + 0x1a);
      if (piVar25 == piVar7) {
        return piVar17;
      }
      piVar6 = *(int **)(piVar15 + 0x18);
      piVar15 = *(int **)(piVar15 + 0x1a);
      lVar23 = (long)piVar15 - (long)piVar6;
      if (lVar23 >> 2 < 1) {
        return piVar17;
      }
      if (lVar23 <= *(long *)(piVar4 + 0x1c) - (long)piVar7) {
        piVar25 = piVar7;
        if (piVar6 != piVar15) {
          piVar25 = (int *)(((long)piVar15 + (long)piVar7) - (long)piVar6);
          do {
            piVar26 = piVar6 + 1;
            *piVar7 = *piVar6;
            piVar7 = piVar7 + 1;
            piVar6 = piVar26;
          } while (piVar26 != piVar15);
        }
        *(int **)(piVar4 + 0x1a) = piVar25;
        return piVar17;
      }
      lVar22 = (long)piVar7 - (long)piVar25;
      uVar13 = (lVar23 >> 2) + (lVar22 >> 2);
      if (uVar13 >> 0x3e == 0) {
        uVar20 = *(long *)(piVar4 + 0x1c) - (long)piVar25;
        uVar19 = (long)uVar20 >> 1;
        if (uVar19 <= uVar13) {
          uVar19 = uVar13;
        }
        if (0x7ffffffffffffffb < uVar20) {
          uVar19 = 0x3fffffffffffffff;
        }
        if (uVar19 == 0) {
          piVar15 = (int *)0x0;
LAB_109924070:
          lVar3 = lVar23 + lVar22;
          lVar24 = lVar22;
          do {
            *(int *)((long)piVar15 + lVar24) = *piVar6;
            lVar24 = lVar24 + 4;
            lVar23 = lVar23 + -4;
            piVar6 = piVar6 + 1;
          } while (lVar23 != 0);
          *(int **)(piVar4 + 0x1a) = piVar7;
          piVar17 = piVar15;
          _memcpy(piVar15,piVar25,lVar22);
          *(int **)(piVar4 + 0x18) = piVar15;
          *(long *)(piVar4 + 0x1a) = (long)piVar15 + lVar3;
          *(int **)(piVar4 + 0x1c) = piVar15 + uVar19;
          if (piVar25 != (int *)0x0) {
            __ZdlPv(piVar25);
            piVar17 = piVar25;
          }
          return piVar17;
        }
        if (uVar19 >> 0x3e == 0) {
          piVar15 = (int *)(uVar19 << 2);
          __Znwm();
          goto LAB_109924070;
        }
LAB_109924218:
        func_0x000104c4f740();
      }
LAB_10992421c:
      FUN_10923f788();
    }
    FUN_1092d2ba8();
LAB_109924224:
    piVar15 = aiStack_318;
    func_0x0001099ab7c0();
    return (int *)(ulong)(uint)piVar15[3];
  }
  iVar8 = piVar4[2];
  iVar27 = piVar4[3];
  lVar23 = (long)iVar27;
  if (iVar8 != 0 && iVar27 != 0) {
    lVar22 = 0;
    if (lVar23 != 0) {
      lVar22 = 0x7fffffffffffffff / lVar23;
    }
    if (iVar8 <= lVar22) goto LAB_109923818;
    goto LAB_109923850;
  }
LAB_109923818:
  unaff_x23 = (long)iVar27 * (long)iVar8;
  piVar15 = piVar4;
  if (plVar10[2] * plVar10[1] - unaff_x23 == 0) goto LAB_109923878;
  _free(*plVar10);
  if ((long)unaff_x23 < 1) {
LAB_109923870:
    piVar15 = (int *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_109923850:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109923870;
    }
    piVar15 = (int *)(unaff_x23 * 8);
    _malloc();
    if (piVar15 == (int *)0x0) goto LAB_109923850;
  }
  *plVar10 = (long)piVar15;
LAB_109923878:
  plVar10[1] = (long)iVar8;
  plVar10[2] = lVar23;
  if (0 < (long)unaff_x23) {
    piVar15 = (int *)*plVar10;
    _bzero(piVar15,unaff_x23 << 3);
  }
  uVar12 = piVar4[2];
  if (0 < (int)uVar12) {
    piVar17 = *(int **)(piVar4 + 4);
    uVar13 = 0;
    iVar8 = *piVar17;
    do {
      uVar19 = uVar13 + 1;
      iVar27 = piVar17[uVar19];
      if (iVar8 < iVar27) {
        lVar24 = *plVar10;
        lVar22 = (long)iVar27 - (long)iVar8;
        puVar5 = (undefined8 *)(*(long *)(piVar4 + 0x10) + (long)iVar8 * 8);
        piVar25 = (int *)(*(long *)(piVar4 + 10) + (long)iVar8 * 4);
        do {
          *(undefined8 *)(lVar24 + uVar13 * lVar23 * 8 + (long)*piVar25 * 8) = *puVar5;
          lVar22 = lVar22 + -1;
          puVar5 = puVar5 + 1;
          piVar25 = piVar25 + 1;
        } while (lVar22 != 0);
      }
      uVar13 = uVar19;
      iVar8 = iVar27;
    } while (uVar19 != uVar12);
  }
  return piVar15;
}



/* Entry: 109923714; end: 1099237cb;  */

int * FUN_109923714(int *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  double *pdVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  ulong unaff_x23;
  int *piVar23;
  int iVar24;
  int aiStack_298 [2];
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  int *piStack_238;
  int aiStack_1c8 [24];
  undefined8 uStack_168;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  int aiStack_70 [2];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  piVar5 = aiStack_70;
  if (param_2 != 0) {
    uVar11 = *(uint *)(*(long *)(param_1 + 4) + (long)param_1[2] * 4);
    uVar12 = (ulong)uVar11;
    if (0 < (int)uVar11) {
      piVar5 = *(int **)(param_1 + 10);
      pdVar16 = *(double **)(param_1 + 0x10);
      do {
        *pdVar16 = *(double *)(param_2 + (long)*piVar5 * 8) * *pdVar16;
        uVar12 = uVar12 - 1;
        piVar5 = piVar5 + 1;
        pdVar16 = pdVar16 + 1;
      } while (uVar12 != 0);
    }
    return param_1;
  }
  aiStack_70[0] = 0;
  aiStack_70[1] = 0;
  uStack_18 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  FUN_1099a9f0c(aiStack_70,&UNK_10f58a88b,0x1a0,3,FUN_1099aa768,0);
  plVar9 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_68 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  puVar4 = &uStack_110;
  if (plVar9 == (long *)0x0) {
    uStack_110 = 0;
    uStack_b8 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0;
    FUN_1099a9f0c(&uStack_110,&UNK_10f58a88b,0x1a8,3,FUN_1099aa768,0);
    piVar5 = (int *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_108 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    iVar8 = (int)piVar5;
    uStack_168 = (int *)((ulong)uStack_168._4_4_ << 0x20);
    if (-1 < iVar8) {
LAB_1099239ac:
      uStack_168 = (int *)CONCAT44(uStack_168._4_4_,*(int *)((long)puVar4 + 8));
      if (*(int *)((long)puVar4 + 8) < iVar8) {
        piVar3 = aiStack_1c8;
        piVar5 = (int *)&uStack_168;
        aiStack_1c8[0] = iVar8;
        FUN_109904144(piVar3,piVar5,&UNK_10f58aa3a);
        uStack_168 = piVar3;
        if (piVar3 != (int *)0x0) {
          uVar10 = 0x1b5;
          goto LAB_109923b94;
        }
      }
      piVar14 = (int *)((long)puVar4 + 0x58);
      aiStack_1c8[0] = 0;
      piVar3 = piVar14;
      if (*piVar14 != 0) {
        piVar5 = aiStack_1c8;
        FUN_1099260f8(piVar14,piVar5,&UNK_10f58aa52);
        piVar3 = (int *)0x0;
        uStack_168 = piVar14;
        if (piVar14 != (int *)0x0) {
          uVar10 = 0x1b6;
          goto LAB_109923b94;
        }
      }
      iVar24 = *(int *)((long)puVar4 + 8);
      iVar13 = (int)((long)iVar24 - (long)iVar8);
      *(int *)((long)puVar4 + 8) = iVar13;
      uVar12 = ((long)iVar24 - (long)iVar8) + 1;
      piVar14 = *(int **)((long)puVar4 + 0x10);
      piVar22 = *(int **)((long)puVar4 + 0x18);
      lVar21 = (long)piVar22 - (long)piVar14;
      uVar17 = lVar21 >> 2;
      if (uVar17 < uVar12) {
        uVar17 = uVar12 - uVar17;
        if ((ulong)(*(long *)((long)puVar4 + 0x20) - (long)piVar22 >> 2) < uVar17) {
          if (iVar13 < -1) goto LAB_109923ba0;
          uVar15 = *(long *)((long)puVar4 + 0x20) - (long)piVar14;
          uVar18 = (long)uVar15 >> 1;
          if (uVar18 <= uVar12) {
            uVar18 = uVar12;
          }
          if (0x7ffffffffffffffb < uVar15) {
            uVar18 = 0x3fffffffffffffff;
          }
          if (uVar18 >> 0x3e == 0) {
            piVar5 = (int *)(uVar18 << 2);
            __Znwm();
            _bzero((long)piVar5 + lVar21,uVar17 * 4);
            piVar3 = piVar5;
            _memcpy(piVar5,piVar14,lVar21);
            *(int **)((long)puVar4 + 0x10) = piVar5;
            *(ulong *)((long)puVar4 + 0x18) = (long)piVar5 + lVar21 + uVar17 * 4;
            *(int **)((long)puVar4 + 0x20) = piVar5 + uVar18;
            if (piVar14 != (int *)0x0) {
              __ZdlPv(piVar14);
              piVar3 = piVar14;
            }
            goto LAB_109923aa8;
          }
          goto LAB_109923ba4;
        }
        piVar3 = piVar22;
        _bzero(piVar22,uVar17 * 4);
        piVar14 = piVar22 + uVar17;
      }
      else {
        if (uVar17 <= uVar12) goto LAB_109923aa8;
        piVar14 = piVar14 + uVar12;
      }
      *(int **)((long)puVar4 + 0x18) = piVar14;
LAB_109923aa8:
      piVar5 = *(int **)((long)puVar4 + 0x60);
      if (piVar5 != *(int **)((long)puVar4 + 0x68)) {
        iVar8 = 0;
        lVar21 = (long)*(int **)((long)puVar4 + 0x68) - (long)piVar5 >> 2;
        do {
          if (*(int *)((long)puVar4 + 8) <= iVar8) {
            *(int **)((long)puVar4 + 0x68) = piVar5;
            return piVar3;
          }
          iVar8 = *piVar5 + iVar8;
          lVar21 = lVar21 + -1;
          piVar5 = piVar5 + 1;
        } while (lVar21 != 0);
      }
      return piVar3;
    }
    piVar3 = aiStack_1c8;
    piVar5 = (int *)&uStack_168;
    aiStack_1c8[0] = iVar8;
    FUN_109904144(piVar3,piVar5,&UNK_10f58aa2a);
    uStack_168 = piVar3;
    if (piVar3 == (int *)0x0) goto LAB_1099239ac;
    uVar10 = 0x1b4;
LAB_109923b94:
    piVar5 = (int *)&UNK_10f58a88b;
    FUN_1099ab8e4(aiStack_1c8,&UNK_10f58a88b,uVar10,&uStack_168);
    piVar3 = aiStack_1c8;
    func_0x0001099ab7c0();
LAB_109923ba0:
    FUN_10923f788();
LAB_109923ba4:
    func_0x000104c4f740();
    piVar22 = piVar3 + 0x16;
    aiStack_298[0] = 0;
    piVar14 = piVar22;
    if (*piVar22 != 0) {
      FUN_1099260f8(piVar22,aiStack_298,&UNK_10f58aa52);
      piVar14 = (int *)0x0;
      piStack_238 = piVar22;
      if (piVar22 == (int *)0x0) goto LAB_109923bdc;
      uVar10 = 0x1ce;
LAB_10992413c:
      FUN_1099ab8e4(aiStack_298,&UNK_10f58a88b,uVar10,&piStack_238);
      goto LAB_109924224;
    }
LAB_109923bdc:
    aiStack_298[0] = piVar5[3];
    piStack_238 = (int *)CONCAT44(piStack_238._4_4_,piVar3[3]);
    if (aiStack_298[0] != piVar3[3]) {
      piVar22 = aiStack_298;
      FUN_109904144(piVar22,&piStack_238,&UNK_10f58aa6f);
      piVar14 = (int *)0x0;
      piStack_238 = piVar22;
      if (piVar22 != (int *)0x0) {
        uVar10 = 0x1cf;
        goto LAB_10992413c;
      }
    }
    if ((*(long *)(piVar3 + 0x18) == *(long *)(piVar3 + 0x1a)) !=
        (*(long *)(piVar5 + 0x18) == *(long *)(piVar5 + 0x1a))) {
      aiStack_298[0] = 0;
      aiStack_298[1] = 0;
      uStack_240 = 0;
      uStack_280 = 0;
      uStack_288 = 0;
      uStack_270 = 0;
      uStack_278 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      uStack_248 = 0;
      FUN_1099a9f0c(aiStack_298,&UNK_10f58a88b,0x1d2,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_290 + 0x7540,&UNK_10f58aa89,0x73);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      goto LAB_109924224;
    }
    iVar8 = piVar5[2];
    if (iVar8 == 0) {
      return piVar14;
    }
    lVar19 = (long)iVar8;
    piVar7 = *(int **)(piVar3 + 10);
    piVar6 = *(int **)(piVar3 + 0xc);
    iVar24 = piVar3[2];
    piVar22 = *(int **)(piVar3 + 4);
    lVar21 = (long)piVar6 - (long)piVar7;
    uVar12 = (long)*(int *)(*(long *)(piVar5 + 4) + lVar19 * 4) + (long)piVar22[iVar24];
    if ((ulong)(lVar21 >> 2) < uVar12) {
      uVar17 = uVar12 - (lVar21 >> 2);
      if ((ulong)(*(long *)(piVar3 + 0xe) - (long)piVar6 >> 2) < uVar17) {
        if (-1 < (int)uVar12) {
          uVar15 = *(long *)(piVar3 + 0xe) - (long)piVar7;
          uVar18 = (long)uVar15 >> 1;
          if (uVar18 <= uVar12) {
            uVar18 = uVar12;
          }
          if (0x7ffffffffffffffb < uVar15) {
            uVar18 = 0x3fffffffffffffff;
          }
          if (uVar18 >> 0x3e == 0) {
            piVar6 = (int *)(uVar18 << 2);
            __Znwm();
            _bzero((long)piVar6 + lVar21,uVar17 * 4);
            piVar14 = piVar6;
            _memcpy(piVar6,piVar7,lVar21);
            *(int **)(piVar3 + 10) = piVar6;
            *(ulong *)(piVar3 + 0xc) = (long)piVar6 + lVar21 + uVar17 * 4;
            *(int **)(piVar3 + 0xe) = piVar6 + uVar18;
            if (piVar7 != (int *)0x0) {
              __ZdlPv(piVar7);
              piVar22 = *(int **)(piVar3 + 4);
              piVar14 = piVar7;
            }
            goto LAB_109923cf4;
          }
          goto LAB_109924218;
        }
        goto LAB_10992421c;
      }
      piVar14 = piVar6;
      _bzero(piVar6,uVar17 * 4);
      *(int **)(piVar3 + 0xc) = piVar6 + uVar17;
LAB_109923cf4:
      iVar24 = piVar3[2];
      iVar8 = piVar5[2];
      lVar19 = (long)iVar8;
      uVar12 = (long)*(int *)(*(long *)(piVar5 + 4) + (long)iVar8 * 4) + (long)piVar22[iVar24];
      piVar7 = *(int **)(piVar3 + 0x10);
      piVar6 = *(int **)(piVar3 + 0x12);
      lVar21 = (long)piVar6 - (long)piVar7;
      uVar17 = lVar21 >> 3;
      if (uVar12 <= uVar17) {
        if (uVar17 <= uVar12) goto LAB_109923df4;
        piVar7 = piVar7 + uVar12 * 2;
LAB_109923df0:
        *(int **)(piVar3 + 0x12) = piVar7;
        goto LAB_109923df4;
      }
      uVar17 = uVar12 - uVar17;
      if (uVar17 <= (ulong)(*(long *)(piVar3 + 0x14) - (long)piVar6 >> 3)) {
        piVar14 = piVar6;
        _bzero(piVar6,uVar17 * 8);
        piVar7 = piVar6 + uVar17 * 2;
        goto LAB_109923df0;
      }
      if (-1 < (int)uVar12) {
        uVar15 = *(long *)(piVar3 + 0x14) - (long)piVar7;
        uVar18 = (long)uVar15 >> 2;
        if (uVar18 <= uVar12) {
          uVar18 = uVar12;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 >> 0x3d != 0) goto LAB_109924218;
        piVar6 = (int *)(uVar18 << 3);
        __Znwm();
        _bzero((long)piVar6 + lVar21,uVar17 * 8);
        piVar14 = piVar6;
        _memcpy(piVar6,piVar7,lVar21);
        *(int **)(piVar3 + 0x10) = piVar6;
        *(ulong *)(piVar3 + 0x12) = (long)piVar6 + lVar21 + uVar17 * 8;
        *(int **)(piVar3 + 0x14) = piVar6 + uVar18 * 2;
        if (piVar7 != (int *)0x0) {
          __ZdlPv(piVar7);
          iVar8 = piVar5[2];
          lVar19 = (long)iVar8;
          iVar24 = piVar3[2];
          piVar22 = *(int **)(piVar3 + 4);
          piVar14 = piVar7;
        }
        goto LAB_109923df4;
      }
    }
    else {
LAB_109923df4:
      uVar11 = *(uint *)(*(long *)(piVar5 + 4) + lVar19 * 4);
      if (0 < (int)uVar11) {
        piVar14 = (int *)(*(long *)(piVar3 + 10) + (long)piVar22[iVar24] * 4);
        _memmove(piVar14,*(undefined8 *)(piVar5 + 10),(ulong)uVar11 << 2);
        iVar8 = piVar5[2];
        iVar13 = *(int *)(*(long *)(piVar5 + 4) + (long)iVar8 * 4);
        iVar24 = piVar3[2];
        piVar22 = *(int **)(piVar3 + 4);
        if (iVar13 != 0) {
          piVar14 = (int *)(*(long *)(piVar3 + 0x10) + (long)piVar22[iVar24] * 8);
          _memmove(piVar14,*(undefined8 *)(piVar5 + 0x10),(long)iVar13 << 3);
          iVar24 = piVar3[2];
          iVar8 = piVar5[2];
          piVar22 = *(int **)(piVar3 + 4);
        }
      }
      uVar12 = (ulong)(iVar24 + iVar8 + 1);
      piVar6 = *(int **)(piVar3 + 6);
      lVar21 = (long)piVar6 - (long)piVar22;
      uVar17 = lVar21 >> 2;
      piVar7 = piVar22;
      if (uVar17 < uVar12) {
        uVar17 = uVar12 - uVar17;
        if ((ulong)(*(long *)(piVar3 + 8) - (long)piVar6 >> 2) < uVar17) {
          if (iVar24 + iVar8 < -1) goto LAB_10992421c;
          uVar15 = *(long *)(piVar3 + 8) - (long)piVar22;
          uVar18 = (long)uVar15 >> 1;
          if (uVar18 <= uVar12) {
            uVar18 = uVar12;
          }
          if (0x7ffffffffffffffb < uVar15) {
            uVar18 = 0x3fffffffffffffff;
          }
          if (uVar18 >> 0x3e != 0) goto LAB_109924218;
          piVar7 = (int *)(uVar18 << 2);
          __Znwm();
          _bzero((long)piVar7 + lVar21,uVar17 * 4);
          piVar14 = piVar7;
          _memcpy(piVar7,piVar22,lVar21);
          *(int **)(piVar3 + 4) = piVar7;
          *(ulong *)(piVar3 + 6) = (long)piVar7 + lVar21 + uVar17 * 4;
          *(int **)(piVar3 + 8) = piVar7 + uVar18;
          if (piVar22 != (int *)0x0) {
            __ZdlPv(piVar22);
            piVar14 = piVar22;
            piVar7 = *(int **)(piVar3 + 4);
          }
        }
        else {
          piVar14 = piVar6;
          _bzero(piVar6,uVar17 * 4);
          piVar22 = piVar6 + uVar17;
LAB_109923f30:
          *(int **)(piVar3 + 6) = piVar22;
        }
      }
      else if (uVar12 < uVar17) {
        piVar22 = piVar22 + uVar12;
        goto LAB_109923f30;
      }
      uVar11 = piVar5[2];
      if (0 < (long)((-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2) + 4) >> 2)
      {
        iVar8 = piVar7[piVar3[2]];
        uVar12 = (long)(int)uVar11 + 2;
        piVar22 = piVar7 + piVar3[2];
        do {
          *piVar22 = iVar8;
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 1;
        } while (1 < uVar12);
        uVar11 = piVar5[2];
      }
      if (-1 < (int)uVar11) {
        lVar19 = *(long *)(piVar5 + 4);
        lVar21 = 0;
        do {
          piVar7[lVar21 + piVar3[2]] = piVar7[lVar21 + piVar3[2]] + *(int *)(lVar19 + lVar21 * 4);
          uVar11 = piVar5[2];
          bVar1 = lVar21 < (int)uVar11;
          lVar21 = lVar21 + 1;
        } while (bVar1);
      }
      piVar3[2] = piVar3[2] + uVar11;
      piVar22 = *(int **)(piVar3 + 0x18);
      piVar7 = *(int **)(piVar3 + 0x1a);
      if (piVar22 == piVar7) {
        return piVar14;
      }
      piVar6 = *(int **)(piVar5 + 0x18);
      piVar5 = *(int **)(piVar5 + 0x1a);
      lVar21 = (long)piVar5 - (long)piVar6;
      if (lVar21 >> 2 < 1) {
        return piVar14;
      }
      if (lVar21 <= *(long *)(piVar3 + 0x1c) - (long)piVar7) {
        piVar22 = piVar7;
        if (piVar6 != piVar5) {
          piVar22 = (int *)(((long)piVar5 + (long)piVar7) - (long)piVar6);
          do {
            piVar23 = piVar6 + 1;
            *piVar7 = *piVar6;
            piVar7 = piVar7 + 1;
            piVar6 = piVar23;
          } while (piVar23 != piVar5);
        }
        *(int **)(piVar3 + 0x1a) = piVar22;
        return piVar14;
      }
      lVar19 = (long)piVar7 - (long)piVar22;
      uVar12 = (lVar21 >> 2) + (lVar19 >> 2);
      if (uVar12 >> 0x3e == 0) {
        uVar18 = *(long *)(piVar3 + 0x1c) - (long)piVar22;
        uVar17 = (long)uVar18 >> 1;
        if (uVar17 <= uVar12) {
          uVar17 = uVar12;
        }
        if (0x7ffffffffffffffb < uVar18) {
          uVar17 = 0x3fffffffffffffff;
        }
        if (uVar17 == 0) {
          piVar5 = (int *)0x0;
LAB_109924070:
          lVar2 = lVar21 + lVar19;
          lVar20 = lVar19;
          do {
            *(int *)((long)piVar5 + lVar20) = *piVar6;
            lVar20 = lVar20 + 4;
            lVar21 = lVar21 + -4;
            piVar6 = piVar6 + 1;
          } while (lVar21 != 0);
          *(int **)(piVar3 + 0x1a) = piVar7;
          piVar14 = piVar5;
          _memcpy(piVar5,piVar22,lVar19);
          *(int **)(piVar3 + 0x18) = piVar5;
          *(long *)(piVar3 + 0x1a) = (long)piVar5 + lVar2;
          *(int **)(piVar3 + 0x1c) = piVar5 + uVar17;
          if (piVar22 != (int *)0x0) {
            __ZdlPv(piVar22);
            piVar14 = piVar22;
          }
          return piVar14;
        }
        if (uVar17 >> 0x3e == 0) {
          piVar5 = (int *)(uVar17 << 2);
          __Znwm();
          goto LAB_109924070;
        }
LAB_109924218:
        func_0x000104c4f740();
      }
LAB_10992421c:
      FUN_10923f788();
    }
    FUN_1092d2ba8();
LAB_109924224:
    piVar5 = aiStack_298;
    func_0x0001099ab7c0();
    return (int *)(ulong)(uint)piVar5[3];
  }
  iVar8 = piVar5[2];
  iVar24 = piVar5[3];
  lVar21 = (long)iVar24;
  if (iVar8 != 0 && iVar24 != 0) {
    lVar19 = 0;
    if (lVar21 != 0) {
      lVar19 = 0x7fffffffffffffff / lVar21;
    }
    if (iVar8 <= lVar19) goto LAB_109923818;
    goto LAB_109923850;
  }
LAB_109923818:
  unaff_x23 = (long)iVar24 * (long)iVar8;
  piVar3 = piVar5;
  if (plVar9[2] * plVar9[1] - unaff_x23 == 0) goto LAB_109923878;
  _free(*plVar9);
  if ((long)unaff_x23 < 1) {
LAB_109923870:
    piVar3 = (int *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_109923850:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109923870;
    }
    piVar3 = (int *)(unaff_x23 * 8);
    _malloc();
    if (piVar3 == (int *)0x0) goto LAB_109923850;
  }
  *plVar9 = (long)piVar3;
LAB_109923878:
  plVar9[1] = (long)iVar8;
  plVar9[2] = lVar21;
  if (0 < (long)unaff_x23) {
    piVar3 = (int *)*plVar9;
    _bzero(piVar3,unaff_x23 << 3);
  }
  uVar11 = piVar5[2];
  if (0 < (int)uVar11) {
    piVar14 = *(int **)(piVar5 + 4);
    uVar12 = 0;
    iVar8 = *piVar14;
    do {
      uVar17 = uVar12 + 1;
      iVar24 = piVar14[uVar17];
      if (iVar8 < iVar24) {
        lVar20 = *plVar9;
        lVar19 = (long)iVar24 - (long)iVar8;
        puVar4 = (undefined8 *)(*(long *)(piVar5 + 0x10) + (long)iVar8 * 8);
        piVar22 = (int *)(*(long *)(piVar5 + 10) + (long)iVar8 * 4);
        do {
          *(undefined8 *)(lVar20 + uVar12 * lVar21 * 8 + (long)*piVar22 * 8) = *puVar4;
          lVar19 = lVar19 + -1;
          puVar4 = puVar4 + 1;
          piVar22 = piVar22 + 1;
        } while (lVar19 != 0);
      }
      uVar12 = uVar17;
      iVar8 = iVar24;
    } while (uVar17 != uVar11);
  }
  return piVar3;
}



/* Entry: 1099237cc; end: 10992397b;  */

int * FUN_1099237cc(int *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ulong unaff_x23;
  int *piVar21;
  int iVar22;
  int iStack_228;
  undefined4 uStack_224;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  int *piStack_1c8;
  int aiStack_158 [24];
  undefined8 uStack_f8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_a0;
  if (param_2 == (long *)0x0) {
    uStack_a0 = 0;
    uStack_48 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    FUN_1099a9f0c(&uStack_a0,&UNK_10f58a88b,0x1a8,3,FUN_1099aa768,0);
    piVar3 = (int *)&UNK_10f58a29b;
    FUN_1092b4db8(lStack_98 + 0x7540,&UNK_10f58a29b,0x26);
    func_0x0001099ab7c0();
    iVar8 = (int)piVar3;
    uStack_f8 = (int *)((ulong)uStack_f8._4_4_ << 0x20);
    if (-1 < iVar8) {
LAB_1099239ac:
      uStack_f8 = (int *)CONCAT44(uStack_f8._4_4_,*(int *)((long)puVar4 + 8));
      if (*(int *)((long)puVar4 + 8) < iVar8) {
        piVar13 = aiStack_158;
        piVar3 = (int *)&uStack_f8;
        aiStack_158[0] = iVar8;
        FUN_109904144(piVar13,piVar3,&UNK_10f58aa3a);
        uStack_f8 = piVar13;
        if (piVar13 != (int *)0x0) {
          uVar9 = 0x1b5;
          goto LAB_109923b94;
        }
      }
      piVar5 = (int *)((long)puVar4 + 0x58);
      aiStack_158[0] = 0;
      piVar13 = piVar5;
      if (*piVar5 != 0) {
        piVar3 = aiStack_158;
        FUN_1099260f8(piVar5,piVar3,&UNK_10f58aa52);
        piVar13 = (int *)0x0;
        uStack_f8 = piVar5;
        if (piVar5 != (int *)0x0) {
          uVar9 = 0x1b6;
          goto LAB_109923b94;
        }
      }
      iVar22 = *(int *)((long)puVar4 + 8);
      iVar12 = (int)((long)iVar22 - (long)iVar8);
      *(int *)((long)puVar4 + 8) = iVar12;
      uVar11 = ((long)iVar22 - (long)iVar8) + 1;
      piVar5 = *(int **)((long)puVar4 + 0x10);
      piVar20 = *(int **)((long)puVar4 + 0x18);
      lVar19 = (long)piVar20 - (long)piVar5;
      uVar15 = lVar19 >> 2;
      if (uVar15 < uVar11) {
        uVar15 = uVar11 - uVar15;
        if ((ulong)(*(long *)((long)puVar4 + 0x20) - (long)piVar20 >> 2) < uVar15) {
          if (iVar12 < -1) goto LAB_109923ba0;
          uVar14 = *(long *)((long)puVar4 + 0x20) - (long)piVar5;
          uVar16 = (long)uVar14 >> 1;
          if (uVar16 <= uVar11) {
            uVar16 = uVar11;
          }
          if (0x7ffffffffffffffb < uVar14) {
            uVar16 = 0x3fffffffffffffff;
          }
          if (uVar16 >> 0x3e == 0) {
            piVar3 = (int *)(uVar16 << 2);
            __Znwm();
            _bzero((long)piVar3 + lVar19,uVar15 * 4);
            piVar13 = piVar3;
            _memcpy(piVar3,piVar5,lVar19);
            *(int **)((long)puVar4 + 0x10) = piVar3;
            *(ulong *)((long)puVar4 + 0x18) = (long)piVar3 + lVar19 + uVar15 * 4;
            *(int **)((long)puVar4 + 0x20) = piVar3 + uVar16;
            if (piVar5 != (int *)0x0) {
              __ZdlPv(piVar5);
              piVar13 = piVar5;
            }
            goto LAB_109923aa8;
          }
          goto LAB_109923ba4;
        }
        piVar13 = piVar20;
        _bzero(piVar20,uVar15 * 4);
        piVar5 = piVar20 + uVar15;
      }
      else {
        if (uVar15 <= uVar11) goto LAB_109923aa8;
        piVar5 = piVar5 + uVar11;
      }
      *(int **)((long)puVar4 + 0x18) = piVar5;
LAB_109923aa8:
      piVar3 = *(int **)((long)puVar4 + 0x60);
      if (piVar3 != *(int **)((long)puVar4 + 0x68)) {
        iVar8 = 0;
        lVar19 = (long)*(int **)((long)puVar4 + 0x68) - (long)piVar3 >> 2;
        do {
          if (*(int *)((long)puVar4 + 8) <= iVar8) {
            *(int **)((long)puVar4 + 0x68) = piVar3;
            return piVar13;
          }
          iVar8 = *piVar3 + iVar8;
          lVar19 = lVar19 + -1;
          piVar3 = piVar3 + 1;
        } while (lVar19 != 0);
      }
      return piVar13;
    }
    piVar13 = aiStack_158;
    piVar3 = (int *)&uStack_f8;
    aiStack_158[0] = iVar8;
    FUN_109904144(piVar13,piVar3,&UNK_10f58aa2a);
    uStack_f8 = piVar13;
    if (piVar13 == (int *)0x0) goto LAB_1099239ac;
    uVar9 = 0x1b4;
LAB_109923b94:
    piVar3 = (int *)&UNK_10f58a88b;
    FUN_1099ab8e4(aiStack_158,&UNK_10f58a88b,uVar9,&uStack_f8);
    piVar13 = aiStack_158;
    func_0x0001099ab7c0();
LAB_109923ba0:
    FUN_10923f788();
LAB_109923ba4:
    func_0x000104c4f740();
    piVar5 = piVar13 + 0x16;
    iStack_228 = 0;
    if (*piVar5 != 0) {
      FUN_1099260f8(piVar5,&iStack_228,&UNK_10f58aa52);
      piStack_1c8 = piVar5;
      bVar1 = piVar5 == (int *)0x0;
      piVar5 = (int *)0x0;
      if (bVar1) goto LAB_109923bdc;
      uVar9 = 0x1ce;
LAB_10992413c:
      FUN_1099ab8e4(&iStack_228,&UNK_10f58a88b,uVar9,&piStack_1c8);
      goto LAB_109924224;
    }
LAB_109923bdc:
    iStack_228 = piVar3[3];
    piStack_1c8 = (int *)CONCAT44(piStack_1c8._4_4_,piVar13[3]);
    if (piVar3[3] != piVar13[3]) {
      piVar20 = &iStack_228;
      FUN_109904144(piVar20,&piStack_1c8,&UNK_10f58aa6f);
      piStack_1c8 = piVar20;
      piVar5 = (int *)0x0;
      if (piVar20 != (int *)0x0) {
        uVar9 = 0x1cf;
        goto LAB_10992413c;
      }
    }
    if ((*(long *)(piVar13 + 0x18) == *(long *)(piVar13 + 0x1a)) !=
        (*(long *)(piVar3 + 0x18) == *(long *)(piVar3 + 0x1a))) {
      iStack_228 = 0;
      uStack_224 = 0;
      uStack_1d0 = 0;
      uStack_210 = 0;
      uStack_218 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      uStack_1d8 = 0;
      FUN_1099a9f0c(&iStack_228,&UNK_10f58a88b,0x1d2,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_220 + 0x7540,&UNK_10f58aa89,0x73);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      FUN_1092b4db8();
      goto LAB_109924224;
    }
    iVar8 = piVar3[2];
    if (iVar8 == 0) {
      return piVar5;
    }
    lVar17 = (long)iVar8;
    piVar7 = *(int **)(piVar13 + 10);
    piVar6 = *(int **)(piVar13 + 0xc);
    iVar22 = piVar13[2];
    piVar20 = *(int **)(piVar13 + 4);
    lVar19 = (long)piVar6 - (long)piVar7;
    uVar11 = (long)*(int *)(*(long *)(piVar3 + 4) + lVar17 * 4) + (long)piVar20[iVar22];
    if ((ulong)(lVar19 >> 2) < uVar11) {
      uVar15 = uVar11 - (lVar19 >> 2);
      if ((ulong)(*(long *)(piVar13 + 0xe) - (long)piVar6 >> 2) < uVar15) {
        if (-1 < (int)uVar11) {
          uVar14 = *(long *)(piVar13 + 0xe) - (long)piVar7;
          uVar16 = (long)uVar14 >> 1;
          if (uVar16 <= uVar11) {
            uVar16 = uVar11;
          }
          if (0x7ffffffffffffffb < uVar14) {
            uVar16 = 0x3fffffffffffffff;
          }
          if (uVar16 >> 0x3e == 0) {
            piVar6 = (int *)(uVar16 << 2);
            __Znwm();
            _bzero((long)piVar6 + lVar19,uVar15 * 4);
            piVar5 = piVar6;
            _memcpy(piVar6,piVar7,lVar19);
            *(int **)(piVar13 + 10) = piVar6;
            *(ulong *)(piVar13 + 0xc) = (long)piVar6 + lVar19 + uVar15 * 4;
            *(int **)(piVar13 + 0xe) = piVar6 + uVar16;
            if (piVar7 != (int *)0x0) {
              __ZdlPv(piVar7);
              piVar20 = *(int **)(piVar13 + 4);
              piVar5 = piVar7;
            }
            goto LAB_109923cf4;
          }
          goto LAB_109924218;
        }
        goto LAB_10992421c;
      }
      piVar5 = piVar6;
      _bzero(piVar6,uVar15 * 4);
      *(int **)(piVar13 + 0xc) = piVar6 + uVar15;
LAB_109923cf4:
      iVar22 = piVar13[2];
      iVar8 = piVar3[2];
      lVar17 = (long)iVar8;
      uVar11 = (long)*(int *)(*(long *)(piVar3 + 4) + (long)iVar8 * 4) + (long)piVar20[iVar22];
      piVar7 = *(int **)(piVar13 + 0x10);
      piVar6 = *(int **)(piVar13 + 0x12);
      lVar19 = (long)piVar6 - (long)piVar7;
      uVar15 = lVar19 >> 3;
      if (uVar11 <= uVar15) {
        if (uVar15 <= uVar11) goto LAB_109923df4;
        piVar7 = piVar7 + uVar11 * 2;
LAB_109923df0:
        *(int **)(piVar13 + 0x12) = piVar7;
        goto LAB_109923df4;
      }
      uVar15 = uVar11 - uVar15;
      if (uVar15 <= (ulong)(*(long *)(piVar13 + 0x14) - (long)piVar6 >> 3)) {
        piVar5 = piVar6;
        _bzero(piVar6,uVar15 * 8);
        piVar7 = piVar6 + uVar15 * 2;
        goto LAB_109923df0;
      }
      if (-1 < (int)uVar11) {
        uVar14 = *(long *)(piVar13 + 0x14) - (long)piVar7;
        uVar16 = (long)uVar14 >> 2;
        if (uVar16 <= uVar11) {
          uVar16 = uVar11;
        }
        if (0x7ffffffffffffff7 < uVar14) {
          uVar16 = 0x1fffffffffffffff;
        }
        if (uVar16 >> 0x3d != 0) goto LAB_109924218;
        piVar6 = (int *)(uVar16 << 3);
        __Znwm();
        _bzero((long)piVar6 + lVar19,uVar15 * 8);
        piVar5 = piVar6;
        _memcpy(piVar6,piVar7,lVar19);
        *(int **)(piVar13 + 0x10) = piVar6;
        *(ulong *)(piVar13 + 0x12) = (long)piVar6 + lVar19 + uVar15 * 8;
        *(int **)(piVar13 + 0x14) = piVar6 + uVar16 * 2;
        if (piVar7 != (int *)0x0) {
          __ZdlPv(piVar7);
          iVar8 = piVar3[2];
          lVar17 = (long)iVar8;
          iVar22 = piVar13[2];
          piVar20 = *(int **)(piVar13 + 4);
          piVar5 = piVar7;
        }
        goto LAB_109923df4;
      }
    }
    else {
LAB_109923df4:
      uVar10 = *(uint *)(*(long *)(piVar3 + 4) + lVar17 * 4);
      if (0 < (int)uVar10) {
        piVar5 = (int *)(*(long *)(piVar13 + 10) + (long)piVar20[iVar22] * 4);
        _memmove(piVar5,*(undefined8 *)(piVar3 + 10),(ulong)uVar10 << 2);
        iVar8 = piVar3[2];
        iVar12 = *(int *)(*(long *)(piVar3 + 4) + (long)iVar8 * 4);
        iVar22 = piVar13[2];
        piVar20 = *(int **)(piVar13 + 4);
        if (iVar12 != 0) {
          piVar5 = (int *)(*(long *)(piVar13 + 0x10) + (long)piVar20[iVar22] * 8);
          _memmove(piVar5,*(undefined8 *)(piVar3 + 0x10),(long)iVar12 << 3);
          iVar22 = piVar13[2];
          iVar8 = piVar3[2];
          piVar20 = *(int **)(piVar13 + 4);
        }
      }
      uVar11 = (ulong)(iVar22 + iVar8 + 1);
      piVar6 = *(int **)(piVar13 + 6);
      lVar19 = (long)piVar6 - (long)piVar20;
      uVar15 = lVar19 >> 2;
      piVar7 = piVar20;
      if (uVar15 < uVar11) {
        uVar15 = uVar11 - uVar15;
        if ((ulong)(*(long *)(piVar13 + 8) - (long)piVar6 >> 2) < uVar15) {
          if (iVar22 + iVar8 < -1) goto LAB_10992421c;
          uVar14 = *(long *)(piVar13 + 8) - (long)piVar20;
          uVar16 = (long)uVar14 >> 1;
          if (uVar16 <= uVar11) {
            uVar16 = uVar11;
          }
          if (0x7ffffffffffffffb < uVar14) {
            uVar16 = 0x3fffffffffffffff;
          }
          if (uVar16 >> 0x3e != 0) goto LAB_109924218;
          piVar7 = (int *)(uVar16 << 2);
          __Znwm();
          _bzero((long)piVar7 + lVar19,uVar15 * 4);
          piVar5 = piVar7;
          _memcpy(piVar7,piVar20,lVar19);
          *(int **)(piVar13 + 4) = piVar7;
          *(ulong *)(piVar13 + 6) = (long)piVar7 + lVar19 + uVar15 * 4;
          *(int **)(piVar13 + 8) = piVar7 + uVar16;
          if (piVar20 != (int *)0x0) {
            __ZdlPv(piVar20);
            piVar5 = piVar20;
            piVar7 = *(int **)(piVar13 + 4);
          }
        }
        else {
          piVar5 = piVar6;
          _bzero(piVar6,uVar15 * 4);
          piVar20 = piVar6 + uVar15;
LAB_109923f30:
          *(int **)(piVar13 + 6) = piVar20;
        }
      }
      else if (uVar11 < uVar15) {
        piVar20 = piVar20 + uVar11;
        goto LAB_109923f30;
      }
      uVar10 = piVar3[2];
      if (0 < (long)((-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2) + 4) >> 2)
      {
        iVar8 = piVar7[piVar13[2]];
        uVar11 = (long)(int)uVar10 + 2;
        piVar20 = piVar7 + piVar13[2];
        do {
          *piVar20 = iVar8;
          uVar11 = uVar11 - 1;
          piVar20 = piVar20 + 1;
        } while (1 < uVar11);
        uVar10 = piVar3[2];
      }
      if (-1 < (int)uVar10) {
        lVar17 = *(long *)(piVar3 + 4);
        lVar19 = 0;
        do {
          piVar7[lVar19 + piVar13[2]] = piVar7[lVar19 + piVar13[2]] + *(int *)(lVar17 + lVar19 * 4);
          uVar10 = piVar3[2];
          bVar1 = lVar19 < (int)uVar10;
          lVar19 = lVar19 + 1;
        } while (bVar1);
      }
      piVar13[2] = piVar13[2] + uVar10;
      piVar20 = *(int **)(piVar13 + 0x18);
      piVar7 = *(int **)(piVar13 + 0x1a);
      if (piVar20 == piVar7) {
        return piVar5;
      }
      piVar6 = *(int **)(piVar3 + 0x18);
      piVar3 = *(int **)(piVar3 + 0x1a);
      lVar19 = (long)piVar3 - (long)piVar6;
      if (lVar19 >> 2 < 1) {
        return piVar5;
      }
      if (lVar19 <= *(long *)(piVar13 + 0x1c) - (long)piVar7) {
        piVar20 = piVar7;
        if (piVar6 != piVar3) {
          piVar20 = (int *)(((long)piVar3 + (long)piVar7) - (long)piVar6);
          do {
            piVar21 = piVar6 + 1;
            *piVar7 = *piVar6;
            piVar7 = piVar7 + 1;
            piVar6 = piVar21;
          } while (piVar21 != piVar3);
        }
        *(int **)(piVar13 + 0x1a) = piVar20;
        return piVar5;
      }
      lVar17 = (long)piVar7 - (long)piVar20;
      uVar11 = (lVar19 >> 2) + (lVar17 >> 2);
      if (uVar11 >> 0x3e == 0) {
        uVar16 = *(long *)(piVar13 + 0x1c) - (long)piVar20;
        uVar15 = (long)uVar16 >> 1;
        if (uVar15 <= uVar11) {
          uVar15 = uVar11;
        }
        if (0x7ffffffffffffffb < uVar16) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 == 0) {
          piVar3 = (int *)0x0;
LAB_109924070:
          lVar2 = lVar19 + lVar17;
          lVar18 = lVar17;
          do {
            *(int *)((long)piVar3 + lVar18) = *piVar6;
            lVar18 = lVar18 + 4;
            lVar19 = lVar19 + -4;
            piVar6 = piVar6 + 1;
          } while (lVar19 != 0);
          *(int **)(piVar13 + 0x1a) = piVar7;
          piVar5 = piVar3;
          _memcpy(piVar3,piVar20,lVar17);
          *(int **)(piVar13 + 0x18) = piVar3;
          *(long *)(piVar13 + 0x1a) = (long)piVar3 + lVar2;
          *(int **)(piVar13 + 0x1c) = piVar3 + uVar15;
          if (piVar20 != (int *)0x0) {
            __ZdlPv(piVar20);
            piVar5 = piVar20;
          }
          return piVar5;
        }
        if (uVar15 >> 0x3e == 0) {
          piVar3 = (int *)(uVar15 << 2);
          __Znwm();
          goto LAB_109924070;
        }
LAB_109924218:
        func_0x000104c4f740();
      }
LAB_10992421c:
      FUN_10923f788();
    }
    FUN_1092d2ba8();
LAB_109924224:
    piVar3 = &iStack_228;
    func_0x0001099ab7c0();
    return (int *)(ulong)(uint)piVar3[3];
  }
  iVar8 = param_1[2];
  iVar22 = param_1[3];
  lVar19 = (long)iVar22;
  if (iVar8 != 0 && iVar22 != 0) {
    lVar17 = 0;
    if (lVar19 != 0) {
      lVar17 = 0x7fffffffffffffff / lVar19;
    }
    if (iVar8 <= lVar17) goto LAB_109923818;
    goto LAB_109923850;
  }
LAB_109923818:
  unaff_x23 = (long)iVar22 * (long)iVar8;
  piVar3 = param_1;
  if (param_2[2] * param_2[1] - unaff_x23 == 0) goto LAB_109923878;
  _free(*param_2);
  if ((long)unaff_x23 < 1) {
LAB_109923870:
    piVar3 = (int *)0x0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_109923850:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109923870;
    }
    piVar3 = (int *)(unaff_x23 * 8);
    _malloc();
    if (piVar3 == (int *)0x0) goto LAB_109923850;
  }
  *param_2 = (long)piVar3;
LAB_109923878:
  param_2[1] = (long)iVar8;
  param_2[2] = lVar19;
  if (0 < (long)unaff_x23) {
    piVar3 = (int *)*param_2;
    _bzero(piVar3,unaff_x23 << 3);
  }
  uVar10 = param_1[2];
  if (0 < (int)uVar10) {
    piVar13 = *(int **)(param_1 + 4);
    uVar11 = 0;
    iVar8 = *piVar13;
    do {
      uVar15 = uVar11 + 1;
      iVar22 = piVar13[uVar15];
      if (iVar8 < iVar22) {
        lVar18 = *param_2;
        lVar17 = (long)iVar22 - (long)iVar8;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar8 * 8);
        piVar5 = (int *)(*(long *)(param_1 + 10) + (long)iVar8 * 4);
        do {
          *(undefined8 *)(lVar18 + uVar11 * lVar19 * 8 + (long)*piVar5 * 8) = *puVar4;
          lVar17 = lVar17 + -1;
          puVar4 = puVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (lVar17 != 0);
      }
      uVar11 = uVar15;
      iVar8 = iVar22;
    } while (uVar15 != uVar10);
  }
  return piVar3;
}



/* Entry: 10992397c; end: 109923ba7;  */

/* WARNING: Type propagation algorithm not settling */

int **** FUN_10992397c(long param_1,int ****param_2)

{
  bool bVar1;
  int ***pppiVar2;
  int iVar3;
  long lVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  int ****ppppiVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  int ***pppiVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int ****ppppiVar20;
  int ***pppiVar21;
  int iVar22;
  long lVar23;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  int ****ppppiStack_128;
  int aiStack_b8 [24];
  int ****ppppiStack_58;
  
  iVar10 = (int)param_2;
  ppppiStack_58 = (int ****)((ulong)ppppiStack_58 & 0xffffffff00000000);
  if (-1 < iVar10) {
LAB_1099239ac:
    ppppiStack_58 = (int ****)CONCAT44(ppppiStack_58._4_4_,*(int *)(param_1 + 8));
    if (*(int *)(param_1 + 8) < iVar10) {
      ppppiVar7 = (int ****)aiStack_b8;
      param_2 = (int ****)&ppppiStack_58;
      aiStack_b8[0] = iVar10;
      FUN_109904144(ppppiVar7,param_2,&UNK_10f58aa3a);
      ppppiStack_58 = ppppiVar7;
      if (ppppiVar7 != (int ****)0x0) {
        uVar11 = 0x1b5;
        goto LAB_109923b94;
      }
    }
    ppppiVar5 = (int ****)(param_1 + 0x58);
    aiStack_b8[0] = 0;
    ppppiVar7 = ppppiVar5;
    if (*(int *)ppppiVar5 != 0) {
      param_2 = (int ****)aiStack_b8;
      FUN_1099260f8(ppppiVar5,param_2,&UNK_10f58aa52);
      ppppiVar7 = (int ****)0x0;
      ppppiStack_58 = ppppiVar5;
      if (ppppiVar5 != (int ****)0x0) {
        uVar11 = 0x1b6;
        goto LAB_109923b94;
      }
    }
    lVar16 = (long)*(int *)(param_1 + 8) - (long)iVar10;
    iVar10 = (int)lVar16;
    *(int *)(param_1 + 8) = iVar10;
    uVar13 = lVar16 + 1;
    ppppiVar5 = *(int *****)(param_1 + 0x10);
    ppppiVar6 = *(int *****)(param_1 + 0x18);
    lVar16 = (long)ppppiVar6 - (long)ppppiVar5;
    uVar18 = lVar16 >> 2;
    if (uVar18 < uVar13) {
      uVar18 = uVar13 - uVar18;
      if ((ulong)(*(long *)(param_1 + 0x20) - (long)ppppiVar6 >> 2) < uVar18) {
        if (iVar10 < -1) goto LAB_109923ba0;
        uVar17 = *(long *)(param_1 + 0x20) - (long)ppppiVar5;
        uVar19 = (long)uVar17 >> 1;
        if (uVar19 <= uVar13) {
          uVar19 = uVar13;
        }
        if (0x7ffffffffffffffb < uVar17) {
          uVar19 = 0x3fffffffffffffff;
        }
        if (uVar19 >> 0x3e == 0) {
          ppppiVar6 = (int ****)(uVar19 << 2);
          __Znwm();
          _bzero((long)ppppiVar6 + lVar16,uVar18 * 4);
          ppppiVar7 = ppppiVar6;
          _memcpy(ppppiVar6,ppppiVar5,lVar16);
          *(int *****)(param_1 + 0x10) = ppppiVar6;
          *(ulong *)(param_1 + 0x18) = (long)ppppiVar6 + lVar16 + uVar18 * 4;
          *(int **)(param_1 + 0x20) = (int *)((long)ppppiVar6 + uVar19 * 4);
          if (ppppiVar5 != (int ****)0x0) {
            __ZdlPv(ppppiVar5);
            ppppiVar7 = ppppiVar5;
          }
          goto LAB_109923aa8;
        }
        goto LAB_109923ba4;
      }
      ppppiVar7 = ppppiVar6;
      _bzero(ppppiVar6,uVar18 * 4);
      piVar9 = (int *)((long)ppppiVar6 + uVar18 * 4);
    }
    else {
      if (uVar18 <= uVar13) goto LAB_109923aa8;
      piVar9 = (int *)((long)ppppiVar5 + uVar13 * 4);
    }
    *(int **)(param_1 + 0x18) = piVar9;
LAB_109923aa8:
    piVar9 = *(int **)(param_1 + 0x60);
    if (piVar9 != *(int **)(param_1 + 0x68)) {
      iVar10 = 0;
      lVar16 = (long)*(int **)(param_1 + 0x68) - (long)piVar9 >> 2;
      do {
        if (*(int *)(param_1 + 8) <= iVar10) {
          *(int **)(param_1 + 0x68) = piVar9;
          return ppppiVar7;
        }
        iVar10 = *piVar9 + iVar10;
        lVar16 = lVar16 + -1;
        piVar9 = piVar9 + 1;
      } while (lVar16 != 0);
    }
    return ppppiVar7;
  }
  ppppiVar7 = (int ****)aiStack_b8;
  param_2 = (int ****)&ppppiStack_58;
  aiStack_b8[0] = iVar10;
  FUN_109904144(ppppiVar7,param_2,&UNK_10f58aa2a);
  ppppiStack_58 = ppppiVar7;
  if (ppppiVar7 == (int ****)0x0) goto LAB_1099239ac;
  uVar11 = 0x1b4;
LAB_109923b94:
  param_2 = (int ****)&UNK_10f58a88b;
  FUN_1099ab8e4(aiStack_b8,&UNK_10f58a88b,uVar11,&ppppiStack_58);
  ppppiVar7 = (int ****)aiStack_b8;
  func_0x0001099ab7c0();
LAB_109923ba0:
  FUN_10923f788();
LAB_109923ba4:
  func_0x000104c4f740();
  ppppiVar6 = ppppiVar7 + 0xb;
  uStack_188._0_4_ = 0;
  ppppiVar5 = ppppiVar6;
  if (*(int *)ppppiVar6 != 0) {
    FUN_1099260f8(ppppiVar6,&uStack_188,&UNK_10f58aa52);
    ppppiVar5 = (int ****)0x0;
    ppppiStack_128 = ppppiVar6;
    if (ppppiVar6 == (int ****)0x0) goto LAB_109923bdc;
    uVar11 = 0x1ce;
LAB_10992413c:
    FUN_1099ab8e4(&uStack_188,&UNK_10f58a88b,uVar11,&ppppiStack_128);
    goto LAB_109924224;
  }
LAB_109923bdc:
  uStack_188._0_4_ = *(int *)((long)param_2 + 0xc);
  ppppiStack_128 = (int ****)CONCAT44(ppppiStack_128._4_4_,*(int *)((long)ppppiVar7 + 0xc));
  if ((int)uStack_188 != *(int *)((long)ppppiVar7 + 0xc)) {
    ppppiVar6 = (int ****)&uStack_188;
    FUN_109904144(ppppiVar6,&ppppiStack_128,&UNK_10f58aa6f);
    ppppiVar5 = (int ****)0x0;
    ppppiStack_128 = ppppiVar6;
    if (ppppiVar6 != (int ****)0x0) {
      uVar11 = 0x1cf;
      goto LAB_10992413c;
    }
  }
  if ((ppppiVar7[0xc] == ppppiVar7[0xd]) != (param_2[0xc] == param_2[0xd])) {
    uStack_188._0_4_ = 0;
    uStack_188._4_4_ = 0;
    uStack_130 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_138 = 0;
    FUN_1099a9f0c(&uStack_188,&UNK_10f58a88b,0x1d2,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_180 + 0x7540,&UNK_10f58aa89,0x73);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
    FUN_1092b4db8();
    goto LAB_109924224;
  }
  iVar10 = *(int *)(param_2 + 1);
  if (iVar10 == 0) {
    return ppppiVar5;
  }
  lVar23 = (long)iVar10;
  ppppiVar6 = (int ****)ppppiVar7[5];
  ppppiVar8 = (int ****)ppppiVar7[6];
  iVar22 = *(int *)(ppppiVar7 + 1);
  ppppiVar20 = (int ****)ppppiVar7[2];
  lVar16 = (long)ppppiVar8 - (long)ppppiVar6;
  uVar13 = (long)*(int *)((long)param_2[2] + lVar23 * 4) +
           (long)*(int *)((long)ppppiVar20 + (long)iVar22 * 4);
  if ((ulong)(lVar16 >> 2) < uVar13) {
    uVar18 = uVar13 - (lVar16 >> 2);
    if ((ulong)((long)ppppiVar7[7] - (long)ppppiVar8 >> 2) < uVar18) {
      if (-1 < (int)uVar13) {
        uVar17 = (long)ppppiVar7[7] - (long)ppppiVar6;
        uVar19 = (long)uVar17 >> 1;
        if (uVar19 <= uVar13) {
          uVar19 = uVar13;
        }
        if (0x7ffffffffffffffb < uVar17) {
          uVar19 = 0x3fffffffffffffff;
        }
        if (uVar19 >> 0x3e == 0) {
          ppppiVar8 = (int ****)(uVar19 << 2);
          __Znwm();
          _bzero((long)ppppiVar8 + lVar16,uVar18 * 4);
          ppppiVar5 = ppppiVar8;
          _memcpy(ppppiVar8,ppppiVar6,lVar16);
          ppppiVar7[5] = (int ***)ppppiVar8;
          ppppiVar7[6] = (int ***)((long)ppppiVar8 + lVar16 + uVar18 * 4);
          ppppiVar7[7] = (int ***)((long)ppppiVar8 + uVar19 * 4);
          if (ppppiVar6 != (int ****)0x0) {
            __ZdlPv(ppppiVar6);
            ppppiVar20 = (int ****)ppppiVar7[2];
            ppppiVar5 = ppppiVar6;
          }
          goto LAB_109923cf4;
        }
        goto LAB_109924218;
      }
      goto LAB_10992421c;
    }
    ppppiVar5 = ppppiVar8;
    _bzero(ppppiVar8,uVar18 * 4);
    ppppiVar7[6] = (int ***)((long)ppppiVar8 + uVar18 * 4);
LAB_109923cf4:
    iVar22 = *(int *)(ppppiVar7 + 1);
    iVar10 = *(int *)(param_2 + 1);
    lVar23 = (long)iVar10;
    uVar13 = (long)*(int *)((long)param_2[2] + (long)iVar10 * 4) +
             (long)*(int *)((long)ppppiVar20 + (long)iVar22 * 4);
    ppppiVar6 = (int ****)ppppiVar7[8];
    ppppiVar8 = (int ****)ppppiVar7[9];
    lVar16 = (long)ppppiVar8 - (long)ppppiVar6;
    uVar18 = lVar16 >> 3;
    if (uVar13 <= uVar18) {
      if (uVar18 <= uVar13) goto LAB_109923df4;
      ppppiVar6 = ppppiVar6 + uVar13;
LAB_109923df0:
      ppppiVar7[9] = (int ***)ppppiVar6;
      goto LAB_109923df4;
    }
    uVar18 = uVar13 - uVar18;
    if (uVar18 <= (ulong)((long)ppppiVar7[10] - (long)ppppiVar8 >> 3)) {
      ppppiVar5 = ppppiVar8;
      _bzero(ppppiVar8,uVar18 * 8);
      ppppiVar6 = ppppiVar8 + uVar18;
      goto LAB_109923df0;
    }
    if (-1 < (int)uVar13) {
      uVar17 = (long)ppppiVar7[10] - (long)ppppiVar6;
      uVar19 = (long)uVar17 >> 2;
      if (uVar19 <= uVar13) {
        uVar19 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar17) {
        uVar19 = 0x1fffffffffffffff;
      }
      if (uVar19 >> 0x3d != 0) goto LAB_109924218;
      ppppiVar8 = (int ****)(uVar19 << 3);
      __Znwm();
      _bzero((long)ppppiVar8 + lVar16,uVar18 * 8);
      ppppiVar5 = ppppiVar8;
      _memcpy(ppppiVar8,ppppiVar6,lVar16);
      ppppiVar7[8] = (int ***)ppppiVar8;
      ppppiVar7[9] = (int ***)((long)ppppiVar8 + lVar16 + uVar18 * 8);
      ppppiVar7[10] = (int ***)(ppppiVar8 + uVar19);
      if (ppppiVar6 != (int ****)0x0) {
        __ZdlPv(ppppiVar6);
        iVar10 = *(int *)(param_2 + 1);
        lVar23 = (long)iVar10;
        iVar22 = *(int *)(ppppiVar7 + 1);
        ppppiVar20 = (int ****)ppppiVar7[2];
        ppppiVar5 = ppppiVar6;
      }
      goto LAB_109923df4;
    }
  }
  else {
LAB_109923df4:
    uVar12 = *(uint *)((long)param_2[2] + lVar23 * 4);
    if (0 < (int)uVar12) {
      ppppiVar5 = (int ****)
                  ((long)ppppiVar7[5] + (long)*(int *)((long)ppppiVar20 + (long)iVar22 * 4) * 4);
      _memmove(ppppiVar5,param_2[5],(ulong)uVar12 << 2);
      iVar10 = *(int *)(param_2 + 1);
      iVar3 = *(int *)((long)param_2[2] + (long)iVar10 * 4);
      iVar22 = *(int *)(ppppiVar7 + 1);
      ppppiVar20 = (int ****)ppppiVar7[2];
      if (iVar3 != 0) {
        ppppiVar5 = (int ****)(ppppiVar7[8] + *(int *)((long)ppppiVar20 + (long)iVar22 * 4));
        _memmove(ppppiVar5,param_2[8],(long)iVar3 << 3);
        iVar22 = *(int *)(ppppiVar7 + 1);
        iVar10 = *(int *)(param_2 + 1);
        ppppiVar20 = (int ****)ppppiVar7[2];
      }
    }
    uVar13 = (ulong)(iVar22 + iVar10 + 1);
    ppppiVar8 = (int ****)ppppiVar7[3];
    lVar16 = (long)ppppiVar8 - (long)ppppiVar20;
    uVar18 = lVar16 >> 2;
    ppppiVar6 = ppppiVar20;
    if (uVar18 < uVar13) {
      uVar18 = uVar13 - uVar18;
      if ((ulong)((long)ppppiVar7[4] - (long)ppppiVar8 >> 2) < uVar18) {
        if (iVar22 + iVar10 < -1) goto LAB_10992421c;
        uVar17 = (long)ppppiVar7[4] - (long)ppppiVar20;
        uVar19 = (long)uVar17 >> 1;
        if (uVar19 <= uVar13) {
          uVar19 = uVar13;
        }
        if (0x7ffffffffffffffb < uVar17) {
          uVar19 = 0x3fffffffffffffff;
        }
        if (uVar19 >> 0x3e != 0) goto LAB_109924218;
        ppppiVar6 = (int ****)(uVar19 << 2);
        __Znwm();
        _bzero((long)ppppiVar6 + lVar16,uVar18 * 4);
        ppppiVar5 = ppppiVar6;
        _memcpy(ppppiVar6,ppppiVar20,lVar16);
        ppppiVar7[2] = (int ***)ppppiVar6;
        ppppiVar7[3] = (int ***)((long)ppppiVar6 + lVar16 + uVar18 * 4);
        ppppiVar7[4] = (int ***)((long)ppppiVar6 + uVar19 * 4);
        if (ppppiVar20 != (int ****)0x0) {
          __ZdlPv(ppppiVar20);
          ppppiVar5 = ppppiVar20;
          ppppiVar6 = (int ****)ppppiVar7[2];
        }
      }
      else {
        ppppiVar5 = ppppiVar8;
        _bzero(ppppiVar8,uVar18 * 4);
        pppiVar14 = (int ***)((long)ppppiVar8 + uVar18 * 4);
LAB_109923f30:
        ppppiVar7[3] = pppiVar14;
      }
    }
    else if (uVar13 < uVar18) {
      pppiVar14 = (int ***)((long)ppppiVar20 + uVar13 * 4);
      goto LAB_109923f30;
    }
    uVar12 = *(uint *)(param_2 + 1);
    if (0 < (long)((-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2) + 4) >> 2) {
      piVar9 = (int *)((long)ppppiVar6 + (long)*(int *)(ppppiVar7 + 1) * 4);
      iVar10 = *piVar9;
      uVar13 = (long)(int)uVar12 + 2;
      do {
        *piVar9 = iVar10;
        uVar13 = uVar13 - 1;
        piVar9 = piVar9 + 1;
      } while (1 < uVar13);
      uVar12 = *(uint *)(param_2 + 1);
    }
    if (-1 < (int)uVar12) {
      pppiVar14 = param_2[2];
      lVar16 = 0;
      do {
        *(int *)((long)ppppiVar6 + (lVar16 + *(int *)(ppppiVar7 + 1)) * 4) =
             *(int *)((long)ppppiVar6 + (lVar16 + *(int *)(ppppiVar7 + 1)) * 4) +
             *(int *)((long)pppiVar14 + lVar16 * 4);
        uVar12 = *(uint *)(param_2 + 1);
        bVar1 = lVar16 < (int)uVar12;
        lVar16 = lVar16 + 1;
      } while (bVar1);
    }
    *(uint *)(ppppiVar7 + 1) = *(int *)(ppppiVar7 + 1) + uVar12;
    ppppiVar6 = (int ****)ppppiVar7[0xc];
    ppppiVar8 = (int ****)ppppiVar7[0xd];
    if (ppppiVar6 == ppppiVar8) {
      return ppppiVar5;
    }
    pppiVar14 = param_2[0xc];
    pppiVar2 = param_2[0xd];
    lVar16 = (long)pppiVar2 - (long)pppiVar14;
    if (lVar16 >> 2 < 1) {
      return ppppiVar5;
    }
    if (lVar16 <= (long)ppppiVar7[0xe] - (long)ppppiVar8) {
      ppppiVar6 = ppppiVar8;
      if (pppiVar14 != pppiVar2) {
        ppppiVar6 = (int ****)(((long)pppiVar2 + (long)ppppiVar8) - (long)pppiVar14);
        do {
          pppiVar21 = (int ***)((long)pppiVar14 + 4);
          *(int *)ppppiVar8 = *(int *)pppiVar14;
          ppppiVar8 = (int ****)((long)ppppiVar8 + 4);
          pppiVar14 = pppiVar21;
        } while (pppiVar21 != pppiVar2);
      }
      ppppiVar7[0xd] = (int ***)ppppiVar6;
      return ppppiVar5;
    }
    lVar23 = (long)ppppiVar8 - (long)ppppiVar6;
    uVar13 = (lVar16 >> 2) + (lVar23 >> 2);
    if (uVar13 >> 0x3e == 0) {
      uVar19 = (long)ppppiVar7[0xe] - (long)ppppiVar6;
      uVar18 = (long)uVar19 >> 1;
      if (uVar18 <= uVar13) {
        uVar18 = uVar13;
      }
      if (0x7ffffffffffffffb < uVar19) {
        uVar18 = 0x3fffffffffffffff;
      }
      if (uVar18 == 0) {
        ppppiVar5 = (int ****)0x0;
LAB_109924070:
        lVar4 = lVar16 + lVar23;
        lVar15 = lVar23;
        do {
          *(int *)((long)ppppiVar5 + lVar15) = *(int *)pppiVar14;
          lVar15 = lVar15 + 4;
          lVar16 = lVar16 + -4;
          pppiVar14 = (int ***)((long)pppiVar14 + 4);
        } while (lVar16 != 0);
        ppppiVar7[0xd] = (int ***)ppppiVar8;
        ppppiVar8 = ppppiVar5;
        _memcpy(ppppiVar5,ppppiVar6,lVar23);
        ppppiVar7[0xc] = (int ***)ppppiVar5;
        ppppiVar7[0xd] = (int ***)((long)ppppiVar5 + lVar4);
        ppppiVar7[0xe] = (int ***)((long)ppppiVar5 + uVar18 * 4);
        if (ppppiVar6 != (int ****)0x0) {
          __ZdlPv(ppppiVar6);
          ppppiVar8 = ppppiVar6;
        }
        return ppppiVar8;
      }
      if (uVar18 >> 0x3e == 0) {
        ppppiVar5 = (int ****)(uVar18 << 2);
        __Znwm();
        goto LAB_109924070;
      }
LAB_109924218:
      func_0x000104c4f740();
    }
LAB_10992421c:
    FUN_10923f788();
  }
  FUN_1092d2ba8();
LAB_109924224:
  piVar9 = (int *)&uStack_188;
  func_0x0001099ab7c0();
  return (int ****)(ulong)(uint)piVar9[3];
}



/* Entry: 109923ba8; end: 10992422b;  */

ulong * FUN_109923ba8(long param_1,long param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  puVar5 = (ulong *)(param_1 + 0x58);
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  puVar7 = puVar5;
  if (*(int *)puVar5 != 0) {
    FUN_1099260f8(puVar5,&uStack_c8,&UNK_10f58aa52);
    puVar7 = (ulong *)0x0;
    puStack_68 = puVar5;
    if (puVar5 == (ulong *)0x0) goto LAB_109923bdc;
    uVar8 = 0x1ce;
LAB_10992413c:
    FUN_1099ab8e4(&uStack_c8,&UNK_10f58a88b,uVar8,&puStack_68);
    goto LAB_109924224;
  }
LAB_109923bdc:
  uStack_c8 = CONCAT44(uStack_c8._4_4_,*(int *)(param_2 + 0xc));
  puStack_68 = (ulong *)CONCAT44(puStack_68._4_4_,*(int *)(param_1 + 0xc));
  if (*(int *)(param_2 + 0xc) != *(int *)(param_1 + 0xc)) {
    puVar5 = &uStack_c8;
    FUN_109904144(puVar5,&puStack_68,&UNK_10f58aa6f);
    puVar7 = (ulong *)0x0;
    puStack_68 = puVar5;
    if (puVar5 != (ulong *)0x0) {
      uVar8 = 0x1cf;
      goto LAB_10992413c;
    }
  }
  if ((*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) !=
      (*(long *)(param_2 + 0x60) == *(long *)(param_2 + 0x68))) {
    uStack_c8 = 0;
    uStack_70 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_1099a9f0c(&uStack_c8,&UNK_10f58a88b,0x1d2,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58aa89,0x73);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
    FUN_1092b4db8();
    goto LAB_109924224;
  }
  iVar22 = *(int *)(param_2 + 8);
  if (iVar22 == 0) {
    return puVar7;
  }
  lVar21 = (long)iVar22;
  puVar5 = *(ulong **)(param_1 + 0x28);
  puVar6 = *(ulong **)(param_1 + 0x30);
  iVar19 = *(int *)(param_1 + 8);
  puVar15 = *(ulong **)(param_1 + 0x10);
  lVar16 = (long)puVar6 - (long)puVar5;
  uVar10 = (long)*(int *)(*(long *)(param_2 + 0x10) + lVar21 * 4) +
           (long)*(int *)((long)puVar15 + (long)iVar19 * 4);
  if ((ulong)(lVar16 >> 2) < uVar10) {
    uVar20 = uVar10 - (lVar16 >> 2);
    if ((ulong)(*(long *)(param_1 + 0x38) - (long)puVar6 >> 2) < uVar20) {
      if (-1 < (int)uVar10) {
        uVar13 = *(long *)(param_1 + 0x38) - (long)puVar5;
        uVar14 = (long)uVar13 >> 1;
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        if (0x7ffffffffffffffb < uVar13) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 >> 0x3e == 0) {
          puVar6 = (ulong *)(uVar14 << 2);
          __Znwm();
          _bzero((long)puVar6 + lVar16,uVar20 * 4);
          puVar7 = puVar6;
          _memcpy(puVar6,puVar5,lVar16);
          *(ulong **)(param_1 + 0x28) = puVar6;
          *(ulong *)(param_1 + 0x30) = (long)puVar6 + lVar16 + uVar20 * 4;
          *(int **)(param_1 + 0x38) = (int *)((long)puVar6 + uVar14 * 4);
          if (puVar5 != (ulong *)0x0) {
            __ZdlPv(puVar5);
            puVar15 = *(ulong **)(param_1 + 0x10);
            puVar7 = puVar5;
          }
          goto LAB_109923cf4;
        }
        goto LAB_109924218;
      }
      goto LAB_10992421c;
    }
    puVar7 = puVar6;
    _bzero(puVar6,uVar20 * 4);
    *(int **)(param_1 + 0x30) = (int *)((long)puVar6 + uVar20 * 4);
LAB_109923cf4:
    iVar19 = *(int *)(param_1 + 8);
    iVar22 = *(int *)(param_2 + 8);
    lVar21 = (long)iVar22;
    uVar10 = (long)*(int *)(*(long *)(param_2 + 0x10) + (long)iVar22 * 4) +
             (long)*(int *)((long)puVar15 + (long)iVar19 * 4);
    puVar5 = *(ulong **)(param_1 + 0x40);
    puVar6 = *(ulong **)(param_1 + 0x48);
    lVar16 = (long)puVar6 - (long)puVar5;
    uVar20 = lVar16 >> 3;
    if (uVar10 <= uVar20) {
      if (uVar20 <= uVar10) goto LAB_109923df4;
      puVar5 = puVar5 + uVar10;
LAB_109923df0:
      *(ulong **)(param_1 + 0x48) = puVar5;
      goto LAB_109923df4;
    }
    uVar20 = uVar10 - uVar20;
    if (uVar20 <= (ulong)(*(long *)(param_1 + 0x50) - (long)puVar6 >> 3)) {
      puVar7 = puVar6;
      _bzero(puVar6,uVar20 * 8);
      puVar5 = puVar6 + uVar20;
      goto LAB_109923df0;
    }
    if (-1 < (int)uVar10) {
      uVar13 = *(long *)(param_1 + 0x50) - (long)puVar5;
      uVar14 = (long)uVar13 >> 2;
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar14 = 0x1fffffffffffffff;
      }
      if (uVar14 >> 0x3d != 0) goto LAB_109924218;
      puVar6 = (ulong *)(uVar14 << 3);
      __Znwm();
      _bzero((long)puVar6 + lVar16,uVar20 * 8);
      puVar7 = puVar6;
      _memcpy(puVar6,puVar5,lVar16);
      *(ulong **)(param_1 + 0x40) = puVar6;
      *(ulong *)(param_1 + 0x48) = (long)puVar6 + lVar16 + uVar20 * 8;
      *(ulong **)(param_1 + 0x50) = puVar6 + uVar14;
      if (puVar5 != (ulong *)0x0) {
        __ZdlPv(puVar5);
        iVar22 = *(int *)(param_2 + 8);
        lVar21 = (long)iVar22;
        iVar19 = *(int *)(param_1 + 8);
        puVar15 = *(ulong **)(param_1 + 0x10);
        puVar7 = puVar5;
      }
      goto LAB_109923df4;
    }
  }
  else {
LAB_109923df4:
    uVar9 = *(uint *)(*(long *)(param_2 + 0x10) + lVar21 * 4);
    if (0 < (int)uVar9) {
      puVar7 = (ulong *)(*(long *)(param_1 + 0x28) +
                        (long)*(int *)((long)puVar15 + (long)iVar19 * 4) * 4);
      _memmove(puVar7,*(undefined8 *)(param_2 + 0x28),(ulong)uVar9 << 2);
      iVar22 = *(int *)(param_2 + 8);
      iVar3 = *(int *)(*(long *)(param_2 + 0x10) + (long)iVar22 * 4);
      iVar19 = *(int *)(param_1 + 8);
      puVar15 = *(ulong **)(param_1 + 0x10);
      if (iVar3 != 0) {
        puVar7 = (ulong *)(*(long *)(param_1 + 0x40) +
                          (long)*(int *)((long)puVar15 + (long)iVar19 * 4) * 8);
        _memmove(puVar7,*(undefined8 *)(param_2 + 0x40),(long)iVar3 << 3);
        iVar19 = *(int *)(param_1 + 8);
        iVar22 = *(int *)(param_2 + 8);
        puVar15 = *(ulong **)(param_1 + 0x10);
      }
    }
    uVar10 = (ulong)(iVar19 + iVar22 + 1);
    puVar6 = *(ulong **)(param_1 + 0x18);
    lVar16 = (long)puVar6 - (long)puVar15;
    uVar20 = lVar16 >> 2;
    puVar5 = puVar15;
    if (uVar20 < uVar10) {
      uVar20 = uVar10 - uVar20;
      if ((ulong)(*(long *)(param_1 + 0x20) - (long)puVar6 >> 2) < uVar20) {
        if (iVar19 + iVar22 < -1) goto LAB_10992421c;
        uVar13 = *(long *)(param_1 + 0x20) - (long)puVar15;
        uVar14 = (long)uVar13 >> 1;
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        if (0x7ffffffffffffffb < uVar13) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 >> 0x3e != 0) goto LAB_109924218;
        puVar5 = (ulong *)(uVar14 << 2);
        __Znwm();
        _bzero((long)puVar5 + lVar16,uVar20 * 4);
        puVar7 = puVar5;
        _memcpy(puVar5,puVar15,lVar16);
        *(ulong **)(param_1 + 0x10) = puVar5;
        *(ulong *)(param_1 + 0x18) = (long)puVar5 + lVar16 + uVar20 * 4;
        *(int **)(param_1 + 0x20) = (int *)((long)puVar5 + uVar14 * 4);
        if (puVar15 != (ulong *)0x0) {
          __ZdlPv(puVar15);
          puVar7 = puVar15;
          puVar5 = *(ulong **)(param_1 + 0x10);
        }
      }
      else {
        puVar7 = puVar6;
        _bzero(puVar6,uVar20 * 4);
        piVar11 = (int *)((long)puVar6 + uVar20 * 4);
LAB_109923f30:
        *(int **)(param_1 + 0x18) = piVar11;
      }
    }
    else if (uVar10 < uVar20) {
      piVar11 = (int *)((long)puVar15 + uVar10 * 4);
      goto LAB_109923f30;
    }
    uVar9 = *(uint *)(param_2 + 8);
    if (0 < (long)((-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2) + 4) >> 2) {
      piVar11 = (int *)((long)puVar5 + (long)*(int *)(param_1 + 8) * 4);
      iVar22 = *piVar11;
      uVar10 = (long)(int)uVar9 + 2;
      do {
        *piVar11 = iVar22;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 1;
      } while (1 < uVar10);
      uVar9 = *(uint *)(param_2 + 8);
    }
    if (-1 < (int)uVar9) {
      lVar21 = *(long *)(param_2 + 0x10);
      lVar16 = 0;
      do {
        lVar12 = lVar16 + *(int *)(param_1 + 8);
        *(int *)((long)puVar5 + lVar12 * 4) =
             *(int *)((long)puVar5 + lVar12 * 4) + *(int *)(lVar21 + lVar16 * 4);
        uVar9 = *(uint *)(param_2 + 8);
        bVar1 = lVar16 < (int)uVar9;
        lVar16 = lVar16 + 1;
      } while (bVar1);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar9;
    puVar5 = *(ulong **)(param_1 + 0x60);
    puVar6 = *(ulong **)(param_1 + 0x68);
    if (puVar5 == puVar6) {
      return puVar7;
    }
    puVar18 = *(undefined4 **)(param_2 + 0x60);
    puVar2 = *(undefined4 **)(param_2 + 0x68);
    lVar16 = (long)puVar2 - (long)puVar18;
    if (lVar16 >> 2 < 1) {
      return puVar7;
    }
    if (lVar16 <= *(long *)(param_1 + 0x70) - (long)puVar6) {
      puVar5 = puVar6;
      if (puVar18 != puVar2) {
        puVar5 = (ulong *)(((long)puVar2 + (long)puVar6) - (long)puVar18);
        do {
          puVar17 = puVar18 + 1;
          *(undefined4 *)puVar6 = *puVar18;
          puVar6 = (ulong *)((long)puVar6 + 4);
          puVar18 = puVar17;
        } while (puVar17 != puVar2);
      }
      *(ulong **)(param_1 + 0x68) = puVar5;
      return puVar7;
    }
    lVar21 = (long)puVar6 - (long)puVar5;
    uVar10 = (lVar16 >> 2) + (lVar21 >> 2);
    if (uVar10 >> 0x3e == 0) {
      uVar14 = *(long *)(param_1 + 0x70) - (long)puVar5;
      uVar20 = (long)uVar14 >> 1;
      if (uVar20 <= uVar10) {
        uVar20 = uVar10;
      }
      if (0x7ffffffffffffffb < uVar14) {
        uVar20 = 0x3fffffffffffffff;
      }
      if (uVar20 == 0) {
        puVar7 = (ulong *)0x0;
LAB_109924070:
        lVar4 = lVar16 + lVar21;
        lVar12 = lVar21;
        do {
          *(undefined4 *)((long)puVar7 + lVar12) = *puVar18;
          lVar12 = lVar12 + 4;
          lVar16 = lVar16 + -4;
          puVar18 = puVar18 + 1;
        } while (lVar16 != 0);
        *(ulong **)(param_1 + 0x68) = puVar6;
        puVar6 = puVar7;
        _memcpy(puVar7,puVar5,lVar21);
        *(ulong **)(param_1 + 0x60) = puVar7;
        *(long *)(param_1 + 0x68) = (long)puVar7 + lVar4;
        *(undefined4 **)(param_1 + 0x70) = (undefined4 *)((long)puVar7 + uVar20 * 4);
        if (puVar5 != (ulong *)0x0) {
          __ZdlPv(puVar5);
          puVar6 = puVar5;
        }
        return puVar6;
      }
      if (uVar20 >> 0x3e == 0) {
        puVar7 = (ulong *)(uVar20 << 2);
        __Znwm();
        goto LAB_109924070;
      }
LAB_109924218:
      func_0x000104c4f740();
    }
LAB_10992421c:
    FUN_10923f788();
  }
  FUN_1092d2ba8();
LAB_109924224:
  puVar7 = &uStack_c8;
  func_0x0001099ab7c0();
  return (ulong *)(ulong)*(uint *)((long)puVar7 + 0xc);
}



/* Entry: 10992422c; end: 109924243;  */

undefined4 FUN_10992422c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 109924244; end: 10992435b;  */

void FUN_109924244(long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *extraout_x8;
  uint *puVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  int iVar29;
  int aiStack_260 [24];
  int *piStack_200;
  int iStack_1f4;
  int aiStack_188 [24];
  undefined8 uStack_128;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    iVar12 = *(int *)(param_1 + 8);
    if (0 < iVar12) {
      lVar22 = 0;
      lVar14 = *(long *)(param_1 + 0x10);
      do {
        iVar21 = *(int *)(lVar14 + lVar22 * 4);
        lVar23 = (long)iVar21;
        lVar22 = lVar22 + 1;
        if (iVar21 < *(int *)(lVar14 + lVar22 * 4)) {
          do {
            _fprintf(param_2,&UNK_10f58a2e1);
            lVar23 = lVar23 + 1;
            lVar14 = *(long *)(param_1 + 0x10);
          } while (lVar23 < *(int *)(lVar14 + lVar22 * 4));
          iVar12 = *(int *)(param_1 + 8);
        }
      } while (lVar22 < iVar12);
    }
    return;
  }
  lStack_a0 = 0;
  uStack_48 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  FUN_1099a9f0c(&lStack_a0,&UNK_10f58a88b,0x200,3,FUN_1099aa768,0);
  plVar13 = (long *)&UNK_10f58a2c2;
  FUN_1092b4db8(lStack_98 + 0x7540,&UNK_10f58a2c2,0x1e);
  plVar8 = &lStack_a0;
  func_0x0001099ab7c0();
  iVar12 = (int)plVar13;
  uStack_128 = (int *)((ulong)uStack_128._4_4_ << 0x20);
  plVar11 = plVar8;
  aiStack_188[0] = iVar12;
  if (iVar12 < 0) {
    piVar28 = aiStack_188;
    plVar13 = &uStack_128;
    FUN_109904144(piVar28,plVar13,&UNK_10f58ab83);
    plVar11 = (long *)0x0;
    uStack_128 = piVar28;
    if (piVar28 == (int *)0x0) goto LAB_109924390;
    plVar13 = (long *)&UNK_10f58a88b;
    FUN_1099ab8e4(aiStack_188,&UNK_10f58a88b,0x216,&uStack_128);
    plVar11 = (long *)aiStack_188;
    func_0x0001099ab7c0();
LAB_109924578:
    func_0x000104c4f740();
LAB_10992457c:
    FUN_10923f788();
  }
  else {
LAB_109924390:
    uVar26 = (ulong)iVar12;
    plVar10 = (long *)plVar8[5];
    plVar9 = (long *)plVar8[6];
    lVar22 = (long)plVar9 - (long)plVar10;
    uVar15 = lVar22 >> 2;
    if (uVar15 < uVar26) {
      uVar15 = uVar26 - uVar15;
      if (uVar15 <= (ulong)(plVar8[7] - (long)plVar9 >> 2)) {
        plVar13 = (long *)(uVar15 * 4);
        plVar11 = plVar9;
        _bzero();
        lVar22 = (long)plVar9 + uVar15 * 4;
        goto LAB_109924454;
      }
      if (-1 < iVar12) {
        uVar16 = plVar8[7] - (long)plVar10;
        uVar18 = (long)uVar16 >> 1;
        if (uVar18 <= uVar26) {
          uVar18 = uVar26;
        }
        if (0x7ffffffffffffffb < uVar16) {
          uVar18 = 0x3fffffffffffffff;
        }
        if (uVar18 >> 0x3e == 0) {
          plVar9 = (long *)(uVar18 << 2);
          __Znwm();
          _bzero((long)plVar9 + lVar22,uVar15 * 4);
          plVar11 = plVar9;
          plVar13 = plVar10;
          _memcpy(plVar9,plVar10,lVar22);
          plVar8[5] = (long)plVar9;
          plVar8[6] = (long)plVar9 + lVar22 + uVar15 * 4;
          plVar8[7] = (long)plVar9 + uVar18 * 4;
          if (plVar10 != (long *)0x0) {
            __ZdlPv();
            plVar11 = plVar10;
          }
          goto LAB_109924458;
        }
        goto LAB_109924578;
      }
      goto LAB_10992457c;
    }
    if (uVar26 < uVar15) {
      lVar22 = (long)plVar10 + uVar26 * 4;
LAB_109924454:
      plVar8[6] = lVar22;
    }
LAB_109924458:
    lVar14 = plVar8[8];
    lVar22 = plVar8[9];
    lVar23 = lVar22 - lVar14;
    uVar15 = lVar23 >> 3;
    if (uVar26 <= uVar15) {
      if (uVar15 <= uVar26) {
        return;
      }
      lVar22 = lVar14 + uVar26 * 8;
LAB_109924518:
      plVar8[9] = lVar22;
      return;
    }
    uVar15 = uVar26 - uVar15;
    if (uVar15 <= (ulong)(plVar8[10] - lVar22 >> 3)) {
      _bzero(lVar22,uVar15 * 8);
      lVar22 = lVar22 + uVar15 * 8;
      goto LAB_109924518;
    }
    if (-1 < iVar12) {
      uVar16 = plVar8[10] - lVar14;
      uVar18 = (long)uVar16 >> 2;
      if (uVar18 <= uVar26) {
        uVar18 = uVar26;
      }
      if (0x7ffffffffffffff7 < uVar16) {
        uVar18 = 0x1fffffffffffffff;
      }
      if (uVar18 >> 0x3d == 0) {
        lVar22 = uVar18 << 3;
        __Znwm();
        _bzero(lVar22 + lVar23,uVar15 * 8);
        _memcpy(lVar22,lVar14,lVar23);
        plVar8[8] = lVar22;
        plVar8[9] = lVar22 + lVar23 + uVar15 * 8;
        plVar8[10] = lVar22 + uVar18 * 8;
        if (lVar14 == 0) {
          return;
        }
        __ZdlPv(lVar14);
        return;
      }
      goto LAB_109924578;
    }
  }
  FUN_1092d2ba8();
  if ((int *)*plVar13 == (int *)plVar13[1]) {
    uVar15 = 0;
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    uVar15 = 0;
    piVar28 = (int *)*plVar13;
    do {
      piVar24 = piVar28 + 1;
      iVar21 = *piVar28;
      iVar12 = iVar21 + iVar12;
      uVar15 = (ulong)(uint)((int)uVar15 + iVar21 * iVar21);
      piVar28 = piVar24;
    } while (piVar24 != (int *)plVar13[1]);
  }
  lVar22 = 0x90;
  __Znwm();
  FUN_1099225b8();
  *extraout_x8 = lVar22;
  piVar28 = *(int **)(lVar22 + 0x10);
  piVar24 = *(int **)(lVar22 + 0x28);
  lVar14 = *(long *)(lVar22 + 0x40);
  iVar21 = (int)uVar15;
  if (iVar21 != 0) {
    _bzero(lVar14,uVar15 << 3);
  }
  puVar2 = (uint *)*plVar13;
  puVar3 = (uint *)plVar13[1];
  if (puVar2 == puVar3) {
    iVar20 = 0;
    iVar29 = 0;
  }
  else {
    iVar29 = 0;
    iVar20 = 0;
    puVar17 = puVar2;
    do {
      uVar5 = *puVar17;
      if (0 < (int)uVar5) {
        uVar15 = 0;
        do {
          *piVar28 = iVar20;
          *(long *)(lVar14 + uVar15 * 8 + (long)iVar20 * 8) = plVar11[(long)iVar29 + uVar15];
          uVar26 = (ulong)uVar5;
          piVar25 = piVar24;
          iVar19 = iVar29;
          do {
            piVar24 = piVar25 + 1;
            *piVar25 = iVar19;
            iVar19 = iVar19 + 1;
            uVar6 = (int)uVar26 - 1;
            uVar26 = (ulong)uVar6;
            piVar25 = piVar24;
          } while (uVar6 != 0);
          piVar28 = piVar28 + 1;
          iVar20 = iVar20 + uVar5;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar5);
      }
      iVar29 = uVar5 + iVar29;
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar3);
  }
  *piVar28 = iVar20;
  if ((long *)(lVar22 + 0x60) != plVar13) {
    uVar26 = (long)puVar3 - (long)puVar2;
    uVar15 = *(ulong *)(lVar22 + 0x70);
    lVar14 = *(long *)(lVar22 + 0x60);
    if (uVar15 - lVar14 < uVar26) {
      uVar18 = (long)uVar26 >> 2;
      if (lVar14 != 0) {
        *(long *)(lVar22 + 0x68) = lVar14;
        __ZdlPv(lVar14);
        uVar15 = 0;
        *(long *)(lVar22 + 0x60) = 0;
        *(undefined8 *)(lVar22 + 0x68) = 0;
        *(undefined8 *)(lVar22 + 0x70) = 0;
      }
      if (uVar18 >> 0x3e != 0) goto LAB_10992499c;
      uVar16 = (long)uVar15 >> 1;
      if ((ulong)((long)uVar15 >> 1) <= uVar18) {
        uVar16 = uVar18;
      }
      if (0x7ffffffffffffffb < uVar15) {
        uVar16 = 0x3fffffffffffffff;
      }
      if (uVar16 >> 0x3e != 0) goto LAB_10992499c;
      lVar23 = uVar16 << 2;
      __Znwm();
      *(long *)(lVar22 + 0x60) = lVar23;
      *(long *)(lVar22 + 0x68) = lVar23;
      *(ulong *)(lVar22 + 0x70) = lVar23 + uVar16 * 4;
      if (puVar2 != puVar3) {
        _memcpy(lVar23,puVar2,uVar26);
      }
      lVar23 = lVar23 + uVar26;
    }
    else {
      lVar23 = *(long *)(lVar22 + 0x68);
      if (uVar26 <= (ulong)(lVar23 - lVar14)) {
        if (puVar2 != puVar3) {
          _memmove(lVar14,puVar2,uVar26);
        }
        *(ulong *)(lVar22 + 0x68) = lVar14 + uVar26;
        goto LAB_1099247cc;
      }
      lVar4 = (long)puVar2 + (lVar23 - lVar14);
      if (lVar23 != lVar14) {
        _memmove(lVar14);
        lVar23 = *(long *)(lVar22 + 0x68);
      }
      lVar14 = (long)puVar3 - lVar4;
      if (lVar14 != 0) {
        _memmove(lVar23,lVar4,lVar14);
      }
      lVar23 = lVar23 + lVar14;
    }
    *(long *)(lVar22 + 0x68) = lVar23;
  }
LAB_1099247cc:
  if ((long *)(lVar22 + 0x78) != plVar13) {
    lVar23 = *plVar13;
    lVar4 = plVar13[1];
    uVar26 = lVar4 - lVar23;
    uVar15 = *(ulong *)(lVar22 + 0x88);
    lVar14 = *(long *)(lVar22 + 0x78);
    if (uVar15 - lVar14 < uVar26) {
      uVar18 = (long)uVar26 >> 2;
      if (lVar14 != 0) {
        *(long *)(lVar22 + 0x80) = lVar14;
        __ZdlPv(lVar14);
        uVar15 = 0;
        *(long *)(lVar22 + 0x78) = 0;
        *(undefined8 *)(lVar22 + 0x80) = 0;
        *(undefined8 *)(lVar22 + 0x88) = 0;
      }
      if (uVar18 >> 0x3e != 0) goto LAB_10992499c;
      uVar16 = (long)uVar15 >> 1;
      if ((ulong)((long)uVar15 >> 1) <= uVar18) {
        uVar16 = uVar18;
      }
      if (0x7ffffffffffffffb < uVar15) {
        uVar16 = 0x3fffffffffffffff;
      }
      if (uVar16 >> 0x3e != 0) goto LAB_10992499c;
      lVar14 = uVar16 << 2;
      __Znwm();
      *(long *)(lVar22 + 0x78) = lVar14;
      *(long *)(lVar22 + 0x80) = lVar14;
      *(ulong *)(lVar22 + 0x88) = lVar14 + uVar16 * 4;
      if (lVar4 != lVar23) {
        _memcpy(lVar14,lVar23,uVar26);
      }
LAB_1099248e0:
      lVar14 = lVar14 + uVar26;
    }
    else {
      lVar27 = *(long *)(lVar22 + 0x80);
      if (uVar26 <= (ulong)(lVar27 - lVar14)) {
        if (lVar4 != lVar23) {
          _memmove(lVar14,lVar23,uVar26);
        }
        goto LAB_1099248e0;
      }
      lVar1 = lVar23 + (lVar27 - lVar14);
      if (lVar27 != lVar14) {
        _memmove(lVar14,lVar23);
        lVar27 = *(long *)(lVar22 + 0x80);
      }
      lVar4 = lVar4 - lVar1;
      if (lVar4 != 0) {
        _memmove(lVar27,lVar1,lVar4);
      }
      lVar14 = lVar27 + lVar4;
    }
    *(long *)(lVar22 + 0x80) = lVar14;
  }
  if (iVar20 == iVar21) {
LAB_1099248f8:
    if (iVar29 == iVar12) {
      return;
    }
    piVar28 = aiStack_260;
    aiStack_260[0] = iVar29;
    iStack_1f4 = iVar12;
    FUN_109904144(piVar28,&iStack_1f4,&UNK_10f58abb0);
    if (piVar28 == (int *)0x0) {
      return;
    }
    piStack_200 = piVar28;
    FUN_1099ab8e4(aiStack_260,&UNK_10f58a88b,0x241,&piStack_200);
  }
  else {
    piVar28 = aiStack_260;
    aiStack_260[0] = iVar20;
    iStack_1f4 = iVar21;
    FUN_109904144(piVar28,&iStack_1f4,&UNK_10f58ab95);
    piStack_200 = piVar28;
    if (piVar28 == (int *)0x0) goto LAB_1099248f8;
    FUN_1099ab8e4(aiStack_260,&UNK_10f58a88b,0x240,&piStack_200);
  }
  func_0x0001099ab7c0(aiStack_260);
LAB_10992499c:
  FUN_10923f788();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1099249a4);
  (*pcVar7)();
}



/* Entry: 10992435c; end: 109924583;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10992435c(long ****param_1,long ****param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long *extraout_x8;
  long ***ppplVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  int iVar25;
  int aiStack_1a0 [24];
  int *piStack_140;
  int iStack_134;
  long ***appplStack_c8 [12];
  long ***ppplStack_68;
  
  iVar11 = (int)param_2;
  ppplStack_68 = (long ***)((ulong)ppplStack_68 & 0xffffffff00000000);
  pppplVar9 = param_1;
  appplStack_c8[0]._0_4_ = iVar11;
  if (iVar11 < 0) {
    ppplVar8 = (long ***)appplStack_c8;
    param_2 = &ppplStack_68;
    FUN_109904144(ppplVar8,param_2,&UNK_10f58ab83);
    pppplVar9 = (long ****)0x0;
    ppplStack_68 = ppplVar8;
    if (ppplVar8 == (long ***)0x0) goto LAB_109924390;
    param_2 = (long ****)&UNK_10f58a88b;
    FUN_1099ab8e4(appplStack_c8,&UNK_10f58a88b,0x216,&ppplStack_68);
    pppplVar9 = appplStack_c8;
    func_0x0001099ab7c0();
LAB_109924578:
    func_0x000104c4f740();
LAB_10992457c:
    FUN_10923f788();
  }
  else {
LAB_109924390:
    uVar22 = (ulong)iVar11;
    pppplVar6 = (long ****)param_1[5];
    pppplVar5 = (long ****)param_1[6];
    lVar19 = (long)pppplVar5 - (long)pppplVar6;
    uVar12 = lVar19 >> 2;
    if (uVar12 < uVar22) {
      uVar12 = uVar22 - uVar12;
      if (uVar12 <= (ulong)((long)param_1[7] - (long)pppplVar5 >> 2)) {
        param_2 = (long ****)(uVar12 * 4);
        pppplVar9 = pppplVar5;
        _bzero();
        ppplVar8 = (long ***)((long)pppplVar5 + uVar12 * 4);
        goto LAB_109924454;
      }
      if (-1 < iVar11) {
        uVar13 = (long)param_1[7] - (long)pppplVar6;
        uVar15 = (long)uVar13 >> 1;
        if (uVar15 <= uVar22) {
          uVar15 = uVar22;
        }
        if (0x7ffffffffffffffb < uVar13) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 >> 0x3e == 0) {
          pppplVar5 = (long ****)(uVar15 << 2);
          __Znwm();
          _bzero((long)pppplVar5 + lVar19,uVar12 * 4);
          pppplVar9 = pppplVar5;
          param_2 = pppplVar6;
          _memcpy(pppplVar5,pppplVar6,lVar19);
          param_1[5] = (long ***)pppplVar5;
          param_1[6] = (long ***)((long)pppplVar5 + lVar19 + uVar12 * 4);
          param_1[7] = (long ***)((long)pppplVar5 + uVar15 * 4);
          if (pppplVar6 != (long ****)0x0) {
            __ZdlPv();
            pppplVar9 = pppplVar6;
          }
          goto LAB_109924458;
        }
        goto LAB_109924578;
      }
      goto LAB_10992457c;
    }
    if (uVar22 < uVar12) {
      ppplVar8 = (long ***)((long)pppplVar6 + uVar22 * 4);
LAB_109924454:
      param_1[6] = ppplVar8;
    }
LAB_109924458:
    ppplVar8 = param_1[8];
    ppplVar7 = param_1[9];
    lVar19 = (long)ppplVar7 - (long)ppplVar8;
    uVar12 = lVar19 >> 3;
    if (uVar22 <= uVar12) {
      if (uVar12 <= uVar22) {
        return;
      }
      ppplVar8 = ppplVar8 + uVar22;
LAB_109924518:
      param_1[9] = ppplVar8;
      return;
    }
    uVar12 = uVar22 - uVar12;
    if (uVar12 <= (ulong)((long)param_1[10] - (long)ppplVar7 >> 3)) {
      _bzero(ppplVar7,uVar12 * 8);
      ppplVar8 = ppplVar7 + uVar12;
      goto LAB_109924518;
    }
    if (-1 < iVar11) {
      uVar13 = (long)param_1[10] - (long)ppplVar8;
      uVar15 = (long)uVar13 >> 2;
      if (uVar15 <= uVar22) {
        uVar15 = uVar22;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 >> 0x3d == 0) {
        ppplVar7 = (long ***)(uVar15 << 3);
        __Znwm();
        _bzero((long)ppplVar7 + lVar19,uVar12 * 8);
        _memcpy(ppplVar7,ppplVar8,lVar19);
        param_1[8] = ppplVar7;
        param_1[9] = (long ***)((long)ppplVar7 + lVar19 + uVar12 * 8);
        param_1[10] = ppplVar7 + uVar15;
        if (ppplVar8 == (long ***)0x0) {
          return;
        }
        __ZdlPv(ppplVar8);
        return;
      }
      goto LAB_109924578;
    }
  }
  FUN_1092d2ba8();
  if (*param_2 == param_2[1]) {
    uVar12 = 0;
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    uVar12 = 0;
    ppplVar8 = *param_2;
    do {
      ppplVar7 = (long ***)((long)ppplVar8 + 4);
      iVar18 = *(int *)ppplVar8;
      iVar11 = iVar18 + iVar11;
      uVar12 = (ulong)(uint)((int)uVar12 + iVar18 * iVar18);
      ppplVar8 = ppplVar7;
    } while (ppplVar7 != param_2[1]);
  }
  lVar19 = 0x90;
  __Znwm();
  FUN_1099225b8();
  *extraout_x8 = lVar19;
  piVar24 = *(int **)(lVar19 + 0x10);
  piVar20 = *(int **)(lVar19 + 0x28);
  lVar23 = *(long *)(lVar19 + 0x40);
  iVar18 = (int)uVar12;
  if (iVar18 != 0) {
    _bzero(lVar23,uVar12 << 3);
  }
  ppplVar8 = *param_2;
  ppplVar7 = param_2[1];
  if (ppplVar8 == ppplVar7) {
    iVar17 = 0;
    iVar25 = 0;
  }
  else {
    iVar25 = 0;
    iVar17 = 0;
    ppplVar14 = ppplVar8;
    do {
      uVar2 = *(uint *)ppplVar14;
      if (0 < (int)uVar2) {
        uVar12 = 0;
        do {
          *piVar24 = iVar17;
          *(long ****)(lVar23 + uVar12 * 8 + (long)iVar17 * 8) = pppplVar9[(long)iVar25 + uVar12];
          uVar22 = (ulong)uVar2;
          piVar21 = piVar20;
          iVar16 = iVar25;
          do {
            piVar20 = piVar21 + 1;
            *piVar21 = iVar16;
            iVar16 = iVar16 + 1;
            uVar3 = (int)uVar22 - 1;
            uVar22 = (ulong)uVar3;
            piVar21 = piVar20;
          } while (uVar3 != 0);
          piVar24 = piVar24 + 1;
          iVar17 = iVar17 + uVar2;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar2);
      }
      iVar25 = uVar2 + iVar25;
      ppplVar14 = (long ***)((long)ppplVar14 + 4);
    } while (ppplVar14 != ppplVar7);
  }
  *piVar24 = iVar17;
  if ((long ****)(lVar19 + 0x60) != param_2) {
    uVar22 = (long)ppplVar7 - (long)ppplVar8;
    uVar12 = *(ulong *)(lVar19 + 0x70);
    lVar23 = *(long *)(lVar19 + 0x60);
    if (uVar12 - lVar23 < uVar22) {
      uVar15 = (long)uVar22 >> 2;
      if (lVar23 != 0) {
        *(long *)(lVar19 + 0x68) = lVar23;
        __ZdlPv(lVar23);
        uVar12 = 0;
        *(long ****)(lVar19 + 0x60) = (long ***)0x0;
        *(undefined8 *)(lVar19 + 0x68) = 0;
        *(undefined8 *)(lVar19 + 0x70) = 0;
      }
      if (uVar15 >> 0x3e != 0) goto LAB_10992499c;
      uVar13 = (long)uVar12 >> 1;
      if ((ulong)((long)uVar12 >> 1) <= uVar15) {
        uVar13 = uVar15;
      }
      if (0x7ffffffffffffffb < uVar12) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 >> 0x3e != 0) goto LAB_10992499c;
      lVar10 = uVar13 << 2;
      __Znwm();
      *(long *)(lVar19 + 0x60) = lVar10;
      *(long *)(lVar19 + 0x68) = lVar10;
      *(ulong *)(lVar19 + 0x70) = lVar10 + uVar13 * 4;
      if (ppplVar8 != ppplVar7) {
        _memcpy(lVar10,ppplVar8,uVar22);
      }
      lVar10 = lVar10 + uVar22;
    }
    else {
      lVar10 = *(long *)(lVar19 + 0x68);
      if (uVar22 <= (ulong)(lVar10 - lVar23)) {
        if (ppplVar8 != ppplVar7) {
          _memmove(lVar23,ppplVar8,uVar22);
        }
        *(ulong *)(lVar19 + 0x68) = lVar23 + uVar22;
        goto LAB_1099247cc;
      }
      lVar1 = (long)ppplVar8 + (lVar10 - lVar23);
      if (lVar10 != lVar23) {
        _memmove(lVar23);
        lVar10 = *(long *)(lVar19 + 0x68);
      }
      lVar23 = (long)ppplVar7 - lVar1;
      if (lVar23 != 0) {
        _memmove(lVar10,lVar1,lVar23);
      }
      lVar10 = lVar10 + lVar23;
    }
    *(long *)(lVar19 + 0x68) = lVar10;
  }
LAB_1099247cc:
  if ((long ****)(lVar19 + 0x78) != param_2) {
    ppplVar8 = *param_2;
    ppplVar7 = param_2[1];
    uVar22 = (long)ppplVar7 - (long)ppplVar8;
    uVar12 = *(ulong *)(lVar19 + 0x88);
    lVar23 = *(long *)(lVar19 + 0x78);
    if (uVar12 - lVar23 < uVar22) {
      uVar15 = (long)uVar22 >> 2;
      if (lVar23 != 0) {
        *(long *)(lVar19 + 0x80) = lVar23;
        __ZdlPv(lVar23);
        uVar12 = 0;
        *(long ****)(lVar19 + 0x78) = (long ***)0x0;
        *(undefined8 *)(lVar19 + 0x80) = 0;
        *(undefined8 *)(lVar19 + 0x88) = 0;
      }
      if (uVar15 >> 0x3e != 0) goto LAB_10992499c;
      uVar13 = (long)uVar12 >> 1;
      if ((ulong)((long)uVar12 >> 1) <= uVar15) {
        uVar13 = uVar15;
      }
      if (0x7ffffffffffffffb < uVar12) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 >> 0x3e != 0) goto LAB_10992499c;
      lVar23 = uVar13 << 2;
      __Znwm();
      *(long *)(lVar19 + 0x78) = lVar23;
      *(long *)(lVar19 + 0x80) = lVar23;
      *(ulong *)(lVar19 + 0x88) = lVar23 + uVar13 * 4;
      if (ppplVar7 != ppplVar8) {
        _memcpy(lVar23,ppplVar8,uVar22);
      }
LAB_1099248e0:
      lVar23 = lVar23 + uVar22;
    }
    else {
      lVar10 = *(long *)(lVar19 + 0x80);
      if (uVar22 <= (ulong)(lVar10 - lVar23)) {
        if (ppplVar7 != ppplVar8) {
          _memmove(lVar23,ppplVar8,uVar22);
        }
        goto LAB_1099248e0;
      }
      lVar1 = (long)ppplVar8 + (lVar10 - lVar23);
      if (lVar10 != lVar23) {
        _memmove(lVar23,ppplVar8);
        lVar10 = *(long *)(lVar19 + 0x80);
      }
      lVar23 = (long)ppplVar7 - lVar1;
      if (lVar23 != 0) {
        _memmove(lVar10,lVar1,lVar23);
      }
      lVar23 = lVar10 + lVar23;
    }
    *(long *)(lVar19 + 0x80) = lVar23;
  }
  if (iVar17 == iVar18) {
LAB_1099248f8:
    if (iVar25 == iVar11) {
      return;
    }
    piVar24 = aiStack_1a0;
    aiStack_1a0[0] = iVar25;
    iStack_134 = iVar11;
    FUN_109904144(piVar24,&iStack_134,&UNK_10f58abb0);
    if (piVar24 == (int *)0x0) {
      return;
    }
    piStack_140 = piVar24;
    FUN_1099ab8e4(aiStack_1a0,&UNK_10f58a88b,0x241,&piStack_140);
  }
  else {
    piVar24 = aiStack_1a0;
    aiStack_1a0[0] = iVar17;
    iStack_134 = iVar18;
    FUN_109904144(piVar24,&iStack_134,&UNK_10f58ab95);
    piStack_140 = piVar24;
    if (piVar24 == (int *)0x0) goto LAB_1099248f8;
    FUN_1099ab8e4(aiStack_1a0,&UNK_10f58a88b,0x240,&piStack_140);
  }
  func_0x0001099ab7c0(aiStack_1a0);
LAB_10992499c:
  FUN_10923f788();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1099249a4);
  (*pcVar4)();
}



/* Entry: 109924584; end: 1099249e7;  */

void FUN_109924584(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  int iVar24;
  int aiStack_d0 [24];
  int *piStack_70;
  int iStack_64;
  
  if ((int *)*param_3 == (int *)param_3[1]) {
    uVar17 = 0;
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    uVar17 = 0;
    piVar22 = (int *)*param_3;
    do {
      piVar18 = piVar22 + 1;
      iVar16 = *piVar22;
      iVar15 = iVar16 + iVar15;
      uVar17 = (ulong)(uint)((int)uVar17 + iVar16 * iVar16);
      piVar22 = piVar18;
    } while (piVar18 != (int *)param_3[1]);
  }
  lVar9 = 0x90;
  __Znwm();
  FUN_1099225b8();
  *param_1 = lVar9;
  piVar22 = *(int **)(lVar9 + 0x10);
  piVar18 = *(int **)(lVar9 + 0x28);
  lVar20 = *(long *)(lVar9 + 0x40);
  iVar16 = (int)uVar17;
  if (iVar16 != 0) {
    _bzero(lVar20,uVar17 << 3);
  }
  puVar3 = (uint *)*param_3;
  puVar4 = (uint *)param_3[1];
  if (puVar3 == puVar4) {
    iVar14 = 0;
    iVar24 = 0;
  }
  else {
    iVar24 = 0;
    iVar14 = 0;
    puVar11 = puVar3;
    do {
      uVar6 = *puVar11;
      if (0 < (int)uVar6) {
        uVar17 = 0;
        do {
          *piVar22 = iVar14;
          *(undefined8 *)(lVar20 + uVar17 * 8 + (long)iVar14 * 8) =
               *(undefined8 *)(param_2 + (long)iVar24 * 8 + uVar17 * 8);
          uVar13 = (ulong)uVar6;
          piVar19 = piVar18;
          iVar12 = iVar24;
          do {
            piVar18 = piVar19 + 1;
            *piVar19 = iVar12;
            iVar12 = iVar12 + 1;
            uVar7 = (int)uVar13 - 1;
            uVar13 = (ulong)uVar7;
            piVar19 = piVar18;
          } while (uVar7 != 0);
          piVar22 = piVar22 + 1;
          iVar14 = iVar14 + uVar6;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar6);
      }
      iVar24 = uVar6 + iVar24;
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar4);
  }
  *piVar22 = iVar14;
  if ((long *)(lVar9 + 0x60) != param_3) {
    uVar13 = (long)puVar4 - (long)puVar3;
    uVar17 = *(ulong *)(lVar9 + 0x70);
    lVar20 = *(long *)(lVar9 + 0x60);
    if (uVar17 - lVar20 < uVar13) {
      uVar23 = (long)uVar13 >> 2;
      if (lVar20 != 0) {
        *(long *)(lVar9 + 0x68) = lVar20;
        __ZdlPv(lVar20);
        uVar17 = 0;
        *(long *)(lVar9 + 0x60) = 0;
        *(undefined8 *)(lVar9 + 0x68) = 0;
        *(undefined8 *)(lVar9 + 0x70) = 0;
      }
      if (uVar23 >> 0x3e != 0) goto LAB_10992499c;
      uVar2 = (long)uVar17 >> 1;
      if ((ulong)((long)uVar17 >> 1) <= uVar23) {
        uVar2 = uVar23;
      }
      if (0x7ffffffffffffffb < uVar17) {
        uVar2 = 0x3fffffffffffffff;
      }
      if (uVar2 >> 0x3e != 0) goto LAB_10992499c;
      lVar10 = uVar2 << 2;
      __Znwm();
      *(long *)(lVar9 + 0x60) = lVar10;
      *(long *)(lVar9 + 0x68) = lVar10;
      *(ulong *)(lVar9 + 0x70) = lVar10 + uVar2 * 4;
      if (puVar3 != puVar4) {
        _memcpy(lVar10,puVar3,uVar13);
      }
      lVar10 = lVar10 + uVar13;
    }
    else {
      lVar10 = *(long *)(lVar9 + 0x68);
      if (uVar13 <= (ulong)(lVar10 - lVar20)) {
        if (puVar3 != puVar4) {
          _memmove(lVar20,puVar3,uVar13);
        }
        *(ulong *)(lVar9 + 0x68) = lVar20 + uVar13;
        goto LAB_1099247cc;
      }
      lVar5 = (long)puVar3 + (lVar10 - lVar20);
      if (lVar10 != lVar20) {
        _memmove(lVar20);
        lVar10 = *(long *)(lVar9 + 0x68);
      }
      lVar20 = (long)puVar4 - lVar5;
      if (lVar20 != 0) {
        _memmove(lVar10,lVar5,lVar20);
      }
      lVar10 = lVar10 + lVar20;
    }
    *(long *)(lVar9 + 0x68) = lVar10;
  }
LAB_1099247cc:
  if ((long *)(lVar9 + 0x78) != param_3) {
    lVar10 = *param_3;
    lVar5 = param_3[1];
    uVar13 = lVar5 - lVar10;
    uVar17 = *(ulong *)(lVar9 + 0x88);
    lVar20 = *(long *)(lVar9 + 0x78);
    if (uVar17 - lVar20 < uVar13) {
      uVar23 = (long)uVar13 >> 2;
      if (lVar20 != 0) {
        *(long *)(lVar9 + 0x80) = lVar20;
        __ZdlPv(lVar20);
        uVar17 = 0;
        *(long *)(lVar9 + 0x78) = 0;
        *(undefined8 *)(lVar9 + 0x80) = 0;
        *(undefined8 *)(lVar9 + 0x88) = 0;
      }
      if (uVar23 >> 0x3e != 0) goto LAB_10992499c;
      uVar2 = (long)uVar17 >> 1;
      if ((ulong)((long)uVar17 >> 1) <= uVar23) {
        uVar2 = uVar23;
      }
      if (0x7ffffffffffffffb < uVar17) {
        uVar2 = 0x3fffffffffffffff;
      }
      if (uVar2 >> 0x3e != 0) goto LAB_10992499c;
      lVar20 = uVar2 << 2;
      __Znwm();
      *(long *)(lVar9 + 0x78) = lVar20;
      *(long *)(lVar9 + 0x80) = lVar20;
      *(ulong *)(lVar9 + 0x88) = lVar20 + uVar2 * 4;
      if (lVar5 != lVar10) {
        _memcpy(lVar20,lVar10,uVar13);
      }
LAB_1099248e0:
      lVar20 = lVar20 + uVar13;
    }
    else {
      lVar21 = *(long *)(lVar9 + 0x80);
      if (uVar13 <= (ulong)(lVar21 - lVar20)) {
        if (lVar5 != lVar10) {
          _memmove(lVar20,lVar10,uVar13);
        }
        goto LAB_1099248e0;
      }
      lVar1 = lVar10 + (lVar21 - lVar20);
      if (lVar21 != lVar20) {
        _memmove(lVar20,lVar10);
        lVar21 = *(long *)(lVar9 + 0x80);
      }
      lVar5 = lVar5 - lVar1;
      if (lVar5 != 0) {
        _memmove(lVar21,lVar1,lVar5);
      }
      lVar20 = lVar21 + lVar5;
    }
    *(long *)(lVar9 + 0x80) = lVar20;
  }
  if (iVar14 == iVar16) {
LAB_1099248f8:
    if (iVar24 == iVar15) {
      return;
    }
    piVar22 = aiStack_d0;
    aiStack_d0[0] = iVar24;
    iStack_64 = iVar15;
    FUN_109904144(piVar22,&iStack_64,&UNK_10f58abb0);
    if (piVar22 == (int *)0x0) {
      return;
    }
    piStack_70 = piVar22;
    FUN_1099ab8e4(aiStack_d0,&UNK_10f58a88b,0x241,&piStack_70);
  }
  else {
    piVar22 = aiStack_d0;
    aiStack_d0[0] = iVar14;
    iStack_64 = iVar16;
    FUN_109904144(piVar22,&iStack_64,&UNK_10f58ab95);
    piStack_70 = piVar22;
    if (piVar22 == (int *)0x0) goto LAB_1099248f8;
    FUN_1099ab8e4(aiStack_d0,&UNK_10f58a88b,0x240,&piStack_70);
  }
  func_0x0001099ab7c0(aiStack_d0);
LAB_10992499c:
  FUN_10923f788();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1099249a4);
  (*pcVar8)();
}



/* Entry: 1099249e8; end: 1099259b7;  */

void FUN_1099249e8(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  
LAB_109924a18:
  puVar12 = param_2 + -1;
  puVar11 = param_1;
LAB_109924a20:
  do {
    param_1 = puVar11;
    uVar13 = (long)param_2 - (long)param_1 >> 2;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        uVar16 = param_2[-1];
        uVar10 = *param_1;
        iVar3 = *(int *)(*param_3 + (long)(int)uVar16 * 4);
        iVar18 = *(int *)(*param_3 + (long)(int)uVar10 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          return;
        }
        *param_1 = uVar16;
LAB_1099258c4:
        param_2[-1] = uVar10;
        return;
      }
    }
    else {
      if (uVar13 == 3) {
        uVar10 = *param_1;
        uVar16 = param_1[1];
        lVar8 = *param_3;
        iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
        iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          iVar18 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar19,iVar18);
          iVar19 = iVar19 - iVar18;
        }
        if (iVar19 < 0 == bVar4) {
          uVar10 = param_2[-1];
          iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar18,iVar3);
          iVar19 = iVar18 - iVar3;
          if (iVar18 == iVar3) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) {
            return;
          }
          param_1[1] = uVar10;
          param_2[-1] = uVar16;
          uVar10 = *param_1;
          uVar16 = param_1[1];
          iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) {
            return;
          }
          *param_1 = uVar16;
          param_1[1] = uVar10;
          return;
        }
        uVar15 = param_2[-1];
        iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar15 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          *param_1 = uVar16;
          param_1[1] = uVar10;
          uVar16 = param_2[-1];
          iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) {
            return;
          }
          param_1[1] = uVar16;
        }
        else {
          *param_1 = uVar15;
        }
        goto LAB_1099258c4;
      }
      if (uVar13 == 4) {
        puVar11 = param_1 + 1;
        uVar10 = *puVar11;
        puVar12 = param_1 + 2;
        uVar16 = *param_1;
        lVar25 = *param_3;
        lVar21 = (long)(int)uVar10;
        iVar3 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
        lVar8 = (long)(int)uVar16;
        iVar18 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(param_3[1] + lVar21 * 4);
          iVar18 = *(int *)(param_3[1] + lVar8 * 4);
          bVar4 = SBORROW4(iVar19,iVar18);
          iVar19 = iVar19 - iVar18;
        }
        if (iVar19 < 0 == bVar4) {
          uVar15 = *puVar12;
          lVar7 = (long)(int)uVar15;
          iVar18 = *(int *)(lVar25 + (long)(int)uVar15 * 4);
          bVar4 = SBORROW4(iVar18,iVar3);
          iVar19 = iVar18 - iVar3;
          if (iVar18 == iVar3) {
            iVar19 = *(int *)(param_3[1] + lVar7 * 4);
            iVar3 = *(int *)(param_3[1] + lVar21 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          uVar17 = uVar15;
          if (iVar19 < 0 == bVar4) goto LAB_109925910;
          *puVar11 = uVar15;
          *puVar12 = uVar10;
          iVar3 = *(int *)(lVar25 + lVar7 * 4);
          iVar18 = *(int *)(lVar25 + lVar8 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + lVar7 * 4);
            iVar3 = *(int *)(param_3[1] + lVar8 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          lVar7 = lVar21;
          uVar17 = uVar10;
          if (iVar19 < 0 == bVar4) goto LAB_109925910;
          *param_1 = uVar15;
          puVar14 = puVar11;
          lVar8 = lVar21;
        }
        else {
          uVar17 = *puVar12;
          lVar7 = (long)(int)uVar17;
          iVar18 = *(int *)(lVar25 + (long)(int)uVar17 * 4);
          bVar4 = SBORROW4(iVar18,iVar3);
          iVar19 = iVar18 - iVar3;
          if (iVar18 == iVar3) {
            iVar19 = *(int *)(param_3[1] + lVar7 * 4);
            iVar3 = *(int *)(param_3[1] + lVar21 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          puVar14 = puVar12;
          if (iVar19 < 0 == bVar4) {
            *param_1 = uVar10;
            param_1[1] = uVar16;
            iVar3 = *(int *)(lVar25 + lVar7 * 4);
            iVar18 = *(int *)(lVar25 + lVar8 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(param_3[1] + lVar7 * 4);
              iVar3 = *(int *)(param_3[1] + lVar8 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            if (iVar19 < 0 == bVar4) goto LAB_109925910;
            *puVar11 = uVar17;
            uVar10 = uVar16;
          }
          else {
            *param_1 = uVar17;
            uVar10 = uVar16;
          }
        }
        *puVar14 = uVar16;
        lVar7 = lVar8;
        uVar17 = uVar10;
LAB_109925910:
        uVar10 = param_2[-1];
        iVar3 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
        iVar18 = *(int *)(lVar25 + lVar7 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          iVar3 = *(int *)(param_3[1] + lVar7 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          return;
        }
        *puVar12 = uVar10;
        param_2[-1] = uVar17;
        uVar10 = *puVar12;
        uVar16 = *puVar11;
        iVar3 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
        iVar18 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          return;
        }
        param_1[1] = uVar10;
        param_1[2] = uVar16;
        uVar16 = *param_1;
        iVar3 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
        iVar18 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          return;
        }
        *param_1 = uVar10;
        param_1[1] = uVar16;
        return;
      }
      if (uVar13 == 5) {
        lVar8 = *param_3;
        lVar25 = param_3[1];
        puVar11 = param_1 + 1;
        puVar14 = param_1 + 2;
        puVar5 = param_1 + 3;
        uVar10 = *puVar11;
        lVar21 = (long)(int)uVar10;
        iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        uVar16 = *param_1;
        lVar7 = (long)(int)uVar16;
        iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(lVar25 + lVar21 * 4);
          iVar18 = *(int *)(lVar25 + lVar7 * 4);
          bVar4 = SBORROW4(iVar19,iVar18);
          iVar19 = iVar19 - iVar18;
        }
        if (iVar19 < 0 == bVar4) {
          uVar15 = *puVar14;
          lVar23 = (long)(int)uVar15;
          iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
          bVar4 = SBORROW4(iVar18,iVar3);
          iVar19 = iVar18 - iVar3;
          if (iVar18 == iVar3) {
            iVar19 = *(int *)(lVar25 + lVar23 * 4);
            iVar3 = *(int *)(lVar25 + lVar21 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            *puVar11 = uVar15;
            *puVar14 = uVar10;
            uVar16 = *puVar11;
            uVar17 = *param_1;
            iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
            iVar18 = *(int *)(lVar8 + (long)(int)uVar17 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
              iVar3 = *(int *)(lVar25 + (long)(int)uVar17 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            lVar23 = lVar21;
            uVar15 = uVar10;
            if (iVar19 < 0 != bVar4) {
              *param_1 = uVar16;
              *puVar11 = uVar17;
              lVar23 = (long)(int)*puVar14;
              uVar15 = *puVar14;
            }
          }
        }
        else {
          uVar15 = *puVar14;
          iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
          bVar4 = SBORROW4(iVar18,iVar3);
          iVar19 = iVar18 - iVar3;
          if (iVar18 == iVar3) {
            iVar19 = *(int *)(lVar25 + (long)(int)uVar15 * 4);
            iVar3 = *(int *)(lVar25 + lVar21 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) {
            *param_1 = uVar10;
            *puVar11 = uVar16;
            uVar15 = *puVar14;
            iVar3 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
            iVar18 = *(int *)(lVar8 + lVar7 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(lVar25 + (long)(int)uVar15 * 4);
              iVar3 = *(int *)(lVar25 + lVar7 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            lVar23 = (long)(int)uVar15;
            if (iVar19 < 0 == bVar4) goto LAB_109925ab8;
            *puVar11 = uVar15;
          }
          else {
            *param_1 = uVar15;
          }
          *puVar14 = uVar16;
          lVar23 = lVar7;
          uVar15 = uVar16;
        }
LAB_109925ab8:
        uVar10 = *puVar5;
        iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        iVar18 = *(int *)(lVar8 + lVar23 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
          iVar3 = *(int *)(lVar25 + lVar23 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 != bVar4) {
          *puVar14 = uVar10;
          *puVar5 = uVar15;
          uVar10 = *puVar14;
          uVar16 = *puVar11;
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            *puVar11 = uVar10;
            *puVar14 = uVar16;
            uVar10 = *puVar11;
            uVar16 = *param_1;
            iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
            iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
              iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            if (iVar19 < 0 != bVar4) {
              *param_1 = uVar10;
              *puVar11 = uVar16;
            }
          }
        }
        uVar10 = *puVar12;
        uVar16 = *puVar5;
        iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
          iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 != bVar4) {
          *puVar5 = uVar10;
          *puVar12 = uVar16;
          uVar10 = *puVar5;
          uVar16 = *puVar14;
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            *puVar14 = uVar10;
            *puVar5 = uVar16;
            uVar10 = *puVar14;
            uVar16 = *puVar11;
            iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
            iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
              iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            if (iVar19 < 0 != bVar4) {
              *puVar11 = uVar10;
              *puVar14 = uVar16;
              uVar10 = *puVar11;
              uVar16 = *param_1;
              iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
              iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
              bVar4 = SBORROW4(iVar3,iVar18);
              iVar19 = iVar3 - iVar18;
              if (iVar3 == iVar18) {
                iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
                iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
                bVar4 = SBORROW4(iVar19,iVar3);
                iVar19 = iVar19 - iVar3;
              }
              if (iVar19 < 0 != bVar4) {
                *param_1 = uVar10;
                *puVar11 = uVar16;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar13 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 1 == param_2) {
          return;
        }
        lVar8 = *param_3;
        lVar25 = param_3[1];
        puVar11 = param_1 + 1;
        do {
          puVar12 = puVar11;
          uVar10 = *param_1;
          uVar16 = param_1[1];
          iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
            iVar3 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            lVar21 = param_3[1];
            do {
              puVar11 = param_1;
              uVar15 = puVar11[-1];
              puVar11[1] = uVar10;
              iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
              iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
              bVar4 = SBORROW4(iVar3,iVar18);
              iVar19 = iVar3 - iVar18;
              if (iVar3 == iVar18) {
                iVar19 = *(int *)(lVar21 + (long)(int)uVar16 * 4);
                iVar3 = *(int *)(lVar21 + (long)(int)uVar15 * 4);
                bVar4 = SBORROW4(iVar19,iVar3);
                iVar19 = iVar19 - iVar3;
              }
              param_1 = puVar11 + -1;
              uVar10 = uVar15;
            } while (iVar19 < 0 != bVar4);
            *puVar11 = uVar16;
          }
          puVar11 = puVar12 + 1;
          param_1 = puVar12;
        } while (puVar11 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 1 == param_2) {
        return;
      }
      lVar8 = 0;
      lVar25 = *param_3;
      lVar21 = param_3[1];
      puVar11 = param_1;
      puVar12 = param_1 + 1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar9 = uVar13 - 2 >> 1;
      lVar8 = *param_3;
      lVar25 = param_3[1];
      uVar26 = uVar9;
      do {
        if ((long)uVar26 <= (long)uVar9) {
          uVar24 = (uVar26 & 0x3fffffffffffffff) << 1 | 1;
          puVar11 = param_1 + uVar24;
          uVar20 = (uVar26 & 0x3fffffffffffffff) * 2 + 2;
          if ((long)uVar20 < (long)uVar13) {
            lVar21 = (long)(int)puVar11[1];
            iVar3 = *(int *)(lVar8 + (long)(int)*puVar11 * 4);
            iVar18 = *(int *)(lVar8 + lVar21 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(lVar25 + (long)(int)*puVar11 * 4);
              iVar3 = *(int *)(lVar25 + lVar21 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            if (iVar19 < 0 != bVar4) {
              puVar11 = puVar11 + 1;
              uVar24 = uVar20;
            }
          }
          uVar16 = param_1[uVar26];
          uVar10 = *puVar11;
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) {
            param_1[uVar26] = uVar10;
            if (uVar24 <= uVar9) {
              lVar21 = param_3[1];
              do {
                uVar1 = (uVar24 & 0x3fffffffffffffff) << 1 | 1;
                puVar12 = param_1 + uVar1;
                uVar20 = uVar24 * 2 + 2;
                uVar24 = uVar1;
                if ((long)uVar20 < (long)uVar13) {
                  lVar7 = (long)(int)puVar12[1];
                  iVar3 = *(int *)(lVar8 + (long)(int)*puVar12 * 4);
                  iVar18 = *(int *)(lVar8 + lVar7 * 4);
                  bVar4 = SBORROW4(iVar3,iVar18);
                  iVar19 = iVar3 - iVar18;
                  if (iVar3 == iVar18) {
                    iVar19 = *(int *)(lVar21 + (long)(int)*puVar12 * 4);
                    iVar3 = *(int *)(lVar21 + lVar7 * 4);
                    bVar4 = SBORROW4(iVar19,iVar3);
                    iVar19 = iVar19 - iVar3;
                  }
                  if (iVar19 < 0 != bVar4) {
                    uVar24 = uVar20;
                    puVar12 = puVar12 + 1;
                  }
                }
                uVar10 = *puVar12;
                iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
                iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
                bVar4 = SBORROW4(iVar3,iVar18);
                iVar19 = iVar3 - iVar18;
                if (iVar3 == iVar18) {
                  iVar19 = *(int *)(lVar21 + (long)(int)uVar10 * 4);
                  iVar3 = *(int *)(lVar21 + (long)(int)uVar16 * 4);
                  bVar4 = SBORROW4(iVar19,iVar3);
                  iVar19 = iVar19 - iVar3;
                }
              } while ((iVar19 < 0 == bVar4) &&
                      (*puVar11 = uVar10, puVar11 = puVar12, (long)uVar24 <= (long)uVar9));
            }
            *puVar11 = uVar16;
          }
        }
        bVar4 = 0 < (long)uVar26;
        uVar26 = uVar26 - 1;
      } while (bVar4);
      do {
        uVar10 = *param_1;
        lVar8 = *param_3;
        lVar25 = param_3[1];
        puVar11 = param_1;
        uVar26 = 0;
        do {
          uVar20 = uVar26 << 1 | 1;
          uVar9 = uVar26 * 2 + 2;
          puVar12 = puVar11 + uVar26 + 1;
          if ((long)uVar9 < (long)uVar13) {
            lVar21 = (long)(int)puVar11[uVar26 + 2];
            iVar3 = *(int *)(lVar8 + (long)(int)puVar11[uVar26 + 1] * 4);
            iVar18 = *(int *)(lVar8 + lVar21 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(lVar25 + (long)(int)puVar11[uVar26 + 1] * 4);
              iVar3 = *(int *)(lVar25 + lVar21 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            if (iVar19 < 0 != bVar4) {
              puVar12 = puVar11 + uVar26 + 2;
              uVar20 = uVar9;
            }
          }
          *puVar11 = *puVar12;
          puVar11 = puVar12;
          uVar26 = uVar20;
        } while ((long)uVar20 <= (long)(uVar13 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar12 == param_2) {
          *puVar12 = uVar10;
        }
        else {
          *puVar12 = *param_2;
          *param_2 = uVar10;
          lVar21 = (long)puVar12 + (4 - (long)param_1) >> 2;
          uVar26 = lVar21 - 2;
          if (1 < lVar21) {
            uVar9 = uVar26 >> 1;
            puVar11 = param_1 + uVar9;
            uVar10 = *puVar11;
            uVar16 = *puVar12;
            iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
            iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar19 = iVar3 - iVar18;
            if (iVar3 == iVar18) {
              iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
              iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
              bVar4 = SBORROW4(iVar19,iVar3);
              iVar19 = iVar19 - iVar3;
            }
            if (iVar19 < 0 != bVar4) {
              *puVar12 = uVar10;
              if (1 < uVar26) {
                lVar25 = param_3[1];
                do {
                  uVar26 = uVar9 - 1;
                  uVar9 = uVar26 >> 1;
                  puVar12 = param_1 + uVar9;
                  uVar10 = *puVar12;
                  iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
                  iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
                  bVar4 = SBORROW4(iVar3,iVar18);
                  iVar19 = iVar3 - iVar18;
                  if (iVar3 == iVar18) {
                    iVar19 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
                    iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
                    bVar4 = SBORROW4(iVar19,iVar3);
                    iVar19 = iVar19 - iVar3;
                  }
                } while ((iVar19 < 0 != bVar4) && (*puVar11 = uVar10, puVar11 = puVar12, 1 < uVar26)
                        );
              }
              *puVar11 = uVar16;
            }
          }
        }
        bVar4 = 2 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar4);
      return;
    }
    puVar11 = param_1 + (uVar13 >> 1);
    lVar8 = *param_3;
    if (uVar13 < 0x81) {
      uVar10 = *param_1;
      uVar16 = *puVar11;
      iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
      iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
      bVar4 = SBORROW4(iVar3,iVar18);
      iVar19 = iVar3 - iVar18;
      if (iVar3 == iVar18) {
        iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
        iVar18 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar19,iVar18);
        iVar19 = iVar19 - iVar18;
      }
      if (iVar19 < 0 == bVar4) {
        uVar16 = *puVar12;
        iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 != bVar4) {
          *param_1 = uVar16;
          *puVar12 = uVar10;
          uVar10 = *param_1;
          uVar16 = *puVar11;
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            *puVar11 = uVar10;
            *param_1 = uVar16;
          }
        }
      }
      else {
        uVar15 = *puVar12;
        iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar15 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          *puVar11 = uVar10;
          *param_1 = uVar16;
          uVar10 = *puVar12;
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) goto LAB_109924f5c;
          *param_1 = uVar10;
        }
        else {
          *puVar11 = uVar15;
        }
        *puVar12 = uVar16;
      }
    }
    else {
      uVar10 = *puVar11;
      uVar16 = *param_1;
      iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
      iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
      bVar4 = SBORROW4(iVar3,iVar18);
      iVar19 = iVar3 - iVar18;
      if (iVar3 == iVar18) {
        iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
        iVar18 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar19,iVar18);
        iVar19 = iVar19 - iVar18;
      }
      if (iVar19 < 0 == bVar4) {
        uVar16 = *puVar12;
        iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 != bVar4) {
          *puVar11 = uVar16;
          *puVar12 = uVar10;
          uVar10 = *puVar11;
          uVar16 = *param_1;
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            *param_1 = uVar10;
            *puVar11 = uVar16;
          }
        }
      }
      else {
        uVar15 = *puVar12;
        iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar15 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          *param_1 = uVar10;
          *puVar11 = uVar16;
          uVar10 = *puVar12;
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) goto LAB_109924c2c;
          *puVar11 = uVar10;
        }
        else {
          *param_1 = uVar15;
        }
        *puVar12 = uVar16;
      }
LAB_109924c2c:
      uVar16 = puVar11[-1];
      uVar10 = param_1[1];
      iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
      iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
      bVar4 = SBORROW4(iVar3,iVar18);
      iVar19 = iVar3 - iVar18;
      if (iVar3 == iVar18) {
        iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
        iVar18 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
        bVar4 = SBORROW4(iVar19,iVar18);
        iVar19 = iVar19 - iVar18;
      }
      if (iVar19 < 0 == bVar4) {
        uVar10 = param_2[-2];
        iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 != bVar4) {
          puVar11[-1] = uVar10;
          param_2[-2] = uVar16;
          uVar16 = puVar11[-1];
          uVar10 = param_1[1];
          iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            param_1[1] = uVar16;
            puVar11[-1] = uVar10;
          }
        }
      }
      else {
        uVar15 = param_2[-2];
        iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar15 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          param_1[1] = uVar16;
          puVar11[-1] = uVar10;
          uVar16 = param_2[-2];
          iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) goto LAB_109924d5c;
          puVar11[-1] = uVar16;
        }
        else {
          param_1[1] = uVar15;
        }
        param_2[-2] = uVar10;
      }
LAB_109924d5c:
      puVar14 = puVar11 + 1;
      uVar16 = *puVar14;
      uVar10 = param_1[2];
      iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
      iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
      bVar4 = SBORROW4(iVar3,iVar18);
      iVar19 = iVar3 - iVar18;
      if (iVar3 == iVar18) {
        iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
        iVar18 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
        bVar4 = SBORROW4(iVar19,iVar18);
        iVar19 = iVar19 - iVar18;
      }
      if (iVar19 < 0 == bVar4) {
        uVar10 = param_2[-3];
        iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 != bVar4) {
          *puVar14 = uVar10;
          param_2[-3] = uVar16;
          uVar10 = *puVar14;
          uVar16 = param_1[2];
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) {
            param_1[2] = uVar10;
            *puVar14 = uVar16;
          }
        }
      }
      else {
        uVar15 = param_2[-3];
        iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar15 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) {
          param_1[2] = uVar16;
          *puVar14 = uVar10;
          uVar16 = param_2[-3];
          iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
            iVar3 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 == bVar4) goto LAB_109924e54;
          *puVar14 = uVar16;
        }
        else {
          param_1[2] = uVar15;
        }
        param_2[-3] = uVar10;
      }
LAB_109924e54:
      uVar10 = puVar11[-1];
      uVar16 = *puVar11;
      iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
      iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
      bVar4 = SBORROW4(iVar3,iVar18);
      iVar19 = iVar3 - iVar18;
      if (iVar3 == iVar18) {
        iVar19 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
        iVar18 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
        bVar4 = SBORROW4(iVar19,iVar18);
        iVar19 = iVar19 - iVar18;
      }
      if (iVar19 < 0 == bVar4) {
        uVar15 = *puVar14;
        iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
        bVar4 = SBORROW4(iVar18,iVar3);
        iVar19 = iVar18 - iVar3;
        if (iVar18 == iVar3) {
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar15 * 4);
          iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 != bVar4) {
          *puVar11 = uVar15;
          puVar11[1] = uVar16;
          iVar19 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
          iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          uVar16 = uVar15;
          if (iVar19 == iVar3) {
            if (*(int *)(param_3[1] + (long)(int)uVar15 * 4) <
                *(int *)(param_3[1] + (long)(int)uVar10 * 4)) {
LAB_109924f30:
              puVar11[-1] = uVar15;
              puVar14 = puVar11;
              uVar15 = uVar10;
              goto LAB_109924f4c;
            }
          }
          else if (iVar19 < iVar3) goto LAB_109924f30;
        }
        goto LAB_109924f50;
      }
      uVar15 = *puVar14;
      iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
      bVar4 = SBORROW4(iVar18,iVar3);
      iVar19 = iVar18 - iVar3;
      if (iVar18 == iVar3) {
        iVar19 = *(int *)(param_3[1] + (long)(int)uVar15 * 4);
        iVar3 = *(int *)(param_3[1] + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar19,iVar3);
        iVar19 = iVar19 - iVar3;
      }
      if (iVar19 < 0 == bVar4) {
        puVar11[-1] = uVar16;
        *puVar11 = uVar10;
        iVar19 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
        iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        uVar16 = uVar10;
        if (iVar19 == iVar3) {
          if (*(int *)(param_3[1] + (long)(int)uVar15 * 4) <
              *(int *)(param_3[1] + (long)(int)uVar10 * 4)) {
LAB_109924f44:
            *puVar11 = uVar15;
            goto LAB_109924f4c;
          }
        }
        else if (iVar19 < iVar3) goto LAB_109924f44;
      }
      else {
        puVar11[-1] = uVar15;
        uVar15 = uVar16;
LAB_109924f4c:
        *puVar14 = uVar10;
        uVar16 = uVar15;
      }
LAB_109924f50:
      uVar10 = *param_1;
      *param_1 = uVar16;
      *puVar11 = uVar10;
    }
LAB_109924f5c:
    param_4 = param_4 + -1;
    uVar10 = *param_1;
    if ((param_5 & 1) != 0) {
      iVar18 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
LAB_109924fc8:
      lVar25 = 0;
      lVar21 = param_3[1];
      while( true ) {
        uVar16 = *(uint *)((long)param_1 + lVar25 + 4);
        iVar3 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
        bVar4 = SBORROW4(iVar3,iVar18);
        iVar19 = iVar3 - iVar18;
        if (iVar3 == iVar18) {
          iVar19 = *(int *)(lVar21 + (long)(int)uVar16 * 4);
          iVar3 = *(int *)(lVar21 + (long)(int)uVar10 * 4);
          bVar4 = SBORROW4(iVar19,iVar3);
          iVar19 = iVar19 - iVar3;
        }
        if (iVar19 < 0 == bVar4) break;
        lVar25 = lVar25 + 4;
      }
      puVar14 = (uint *)((long)param_1 + lVar25);
      puVar11 = puVar14 + 1;
      puVar5 = puVar12;
      if (lVar25 == 0) {
        puVar6 = puVar12;
        puVar5 = param_2;
        if (puVar11 < param_2) {
          do {
            iVar19 = *(int *)(lVar8 + (long)(int)*puVar6 * 4);
            puVar5 = puVar6;
            if (iVar19 == iVar18) {
              if ((puVar6 <= puVar11) ||
                 (*(int *)(lVar21 + (long)(int)*puVar6 * 4) <
                  *(int *)(lVar21 + (long)(int)uVar10 * 4))) break;
            }
            else if ((puVar6 <= puVar11) || (iVar19 < iVar18)) break;
            puVar6 = puVar6 + -1;
          } while( true );
        }
      }
      else {
        while( true ) {
          iVar3 = *(int *)(lVar8 + (long)(int)*puVar5 * 4);
          bVar4 = SBORROW4(iVar3,iVar18);
          iVar19 = iVar3 - iVar18;
          if (iVar3 == iVar18) {
            iVar19 = *(int *)(lVar21 + (long)(int)*puVar5 * 4);
            iVar3 = *(int *)(lVar21 + (long)(int)uVar10 * 4);
            bVar4 = SBORROW4(iVar19,iVar3);
            iVar19 = iVar19 - iVar3;
          }
          if (iVar19 < 0 != bVar4) break;
          puVar5 = puVar5 + -1;
        }
      }
      if (puVar11 < puVar5) {
        uVar15 = *puVar5;
        puVar6 = puVar11;
        puVar22 = puVar5;
        do {
          *puVar6 = uVar15;
          *puVar22 = uVar16;
          iVar19 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          lVar25 = param_3[1];
          do {
            puVar14 = puVar6;
            puVar6 = puVar14 + 1;
            uVar16 = *puVar6;
            iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar18,iVar19);
            iVar3 = iVar18 - iVar19;
            if (iVar18 == iVar19) {
              iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
              iVar18 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
              bVar4 = SBORROW4(iVar3,iVar18);
              iVar3 = iVar3 - iVar18;
            }
          } while (iVar3 < 0 != bVar4);
          do {
            puVar22 = puVar22 + -1;
            uVar15 = *puVar22;
            iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
            bVar4 = SBORROW4(iVar18,iVar19);
            iVar3 = iVar18 - iVar19;
            if (iVar18 == iVar19) {
              iVar3 = *(int *)(lVar25 + (long)(int)uVar15 * 4);
              iVar18 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
              bVar4 = SBORROW4(iVar3,iVar18);
              iVar3 = iVar3 - iVar18;
            }
          } while (iVar3 < 0 == bVar4);
        } while (puVar6 < puVar22);
      }
      if (puVar14 != param_1) {
        *param_1 = *puVar14;
      }
      *puVar14 = uVar10;
      if (puVar5 <= puVar11) {
        puVar5 = param_1;
        FUN_109925c08(param_1,puVar14,param_3);
        puVar11 = puVar14 + 1;
        puVar6 = puVar11;
        FUN_109925c08(puVar11,param_2,param_3);
        if ((int)puVar6 != 0) goto LAB_1099252a8;
        if (((ulong)puVar5 & 1) != 0) goto LAB_109924a20;
      }
      FUN_1099249e8(param_1,puVar14,param_3,param_4,param_5 & 1);
      param_5 = 0;
      puVar11 = puVar14 + 1;
      goto LAB_109924a20;
    }
    iVar19 = *(int *)(lVar8 + (long)(int)param_1[-1] * 4);
    iVar3 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
    if (iVar19 != iVar3) {
      iVar18 = iVar3;
      if (iVar3 <= iVar19) goto LAB_109924f98;
      goto LAB_109924fc8;
    }
    iVar18 = iVar19;
    if (*(int *)(param_3[1] + (long)(int)param_1[-1] * 4) <
        *(int *)(param_3[1] + (long)(int)uVar10 * 4)) goto LAB_109924fc8;
LAB_109924f98:
    uVar16 = *puVar12;
    uVar13 = (ulong)uVar16;
    iVar19 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
    puVar11 = param_1;
    if (iVar3 == iVar19) {
      lVar25 = param_3[1];
      if (*(int *)(lVar25 + (long)(int)uVar16 * 4) <= *(int *)(lVar25 + (long)(int)uVar10 * 4))
      goto LAB_1099251a4;
LAB_10992517c:
      do {
        puVar11 = puVar11 + 1;
        iVar2 = *(int *)(lVar8 + (long)(int)*puVar11 * 4);
        bVar4 = SBORROW4(iVar3,iVar2);
        iVar18 = iVar3 - iVar2;
        if (iVar3 == iVar2) {
          iVar18 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
          iVar2 = *(int *)(lVar25 + (long)(int)*puVar11 * 4);
          bVar4 = SBORROW4(iVar18,iVar2);
          iVar18 = iVar18 - iVar2;
        }
      } while (iVar18 < 0 == bVar4);
    }
    else {
      if (iVar3 < iVar19) {
        lVar25 = param_3[1];
        goto LAB_10992517c;
      }
LAB_1099251a4:
      puVar11 = param_1 + 1;
      if (puVar11 < param_2) {
        do {
          iVar2 = *(int *)(lVar8 + (long)(int)*puVar11 * 4);
          bVar4 = SBORROW4(iVar3,iVar2);
          iVar18 = iVar3 - iVar2;
          if (iVar3 == iVar2) {
            iVar18 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
            iVar2 = *(int *)(param_3[1] + (long)(int)*puVar11 * 4);
            bVar4 = SBORROW4(iVar18,iVar2);
            iVar18 = iVar18 - iVar2;
          }
        } while ((iVar18 < 0 == bVar4) && (puVar11 = puVar11 + 1, puVar11 < param_2));
      }
    }
    puVar14 = param_2;
    if (puVar11 < param_2) {
      puVar14 = puVar12;
      while( true ) {
        bVar4 = SBORROW4(iVar3,iVar19);
        iVar18 = iVar3 - iVar19;
        if (iVar3 == iVar19) {
          iVar18 = *(int *)(param_3[1] + (long)(int)uVar10 * 4);
          iVar19 = *(int *)(param_3[1] + (long)(int)uVar13 * 4);
          bVar4 = SBORROW4(iVar18,iVar19);
          iVar18 = iVar18 - iVar19;
        }
        if (iVar18 < 0 == bVar4) break;
        puVar14 = puVar14 + -1;
        uVar13 = (ulong)(int)*puVar14;
        iVar19 = *(int *)(lVar8 + uVar13 * 4);
      }
    }
    if (puVar11 < puVar14) {
      uVar16 = *puVar11;
      uVar15 = *puVar14;
      do {
        *puVar11 = uVar15;
        *puVar14 = uVar16;
        iVar19 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        lVar25 = param_3[1];
        do {
          puVar11 = puVar11 + 1;
          uVar16 = *puVar11;
          iVar18 = *(int *)(lVar8 + (long)(int)uVar16 * 4);
          bVar4 = SBORROW4(iVar19,iVar18);
          iVar3 = iVar19 - iVar18;
          if (iVar19 == iVar18) {
            iVar3 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
            iVar18 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar3 = iVar3 - iVar18;
          }
        } while (iVar3 < 0 == bVar4);
        do {
          puVar14 = puVar14 + -1;
          uVar15 = *puVar14;
          iVar18 = *(int *)(lVar8 + (long)(int)uVar15 * 4);
          bVar4 = SBORROW4(iVar19,iVar18);
          iVar3 = iVar19 - iVar18;
          if (iVar19 == iVar18) {
            iVar3 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
            iVar18 = *(int *)(lVar25 + (long)(int)uVar15 * 4);
            bVar4 = SBORROW4(iVar3,iVar18);
            iVar3 = iVar3 - iVar18;
          }
        } while (iVar3 < 0 != bVar4);
      } while (puVar11 < puVar14);
    }
    puVar14 = puVar11 + -1;
    if (puVar14 != param_1) {
      *param_1 = *puVar14;
    }
    param_5 = 0;
    *puVar14 = uVar10;
  } while( true );
LAB_10992540c:
  uVar10 = *puVar11;
  uVar16 = puVar11[1];
  iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
  iVar18 = *(int *)(lVar25 + (long)(int)uVar10 * 4);
  bVar4 = SBORROW4(iVar3,iVar18);
  iVar19 = iVar3 - iVar18;
  if (iVar3 == iVar18) {
    iVar19 = *(int *)(lVar21 + (long)(int)uVar16 * 4);
    iVar3 = *(int *)(lVar21 + (long)(int)uVar10 * 4);
    bVar4 = SBORROW4(iVar19,iVar3);
    iVar19 = iVar19 - iVar3;
  }
  if (iVar19 < 0 != bVar4) {
    puVar11[1] = uVar10;
    puVar14 = param_1;
    if (puVar11 != param_1) {
      lVar23 = param_3[1];
      lVar7 = lVar8;
      do {
        iVar19 = ((int *)((long)param_1 + lVar7))[-1];
        iVar3 = *(int *)(lVar25 + (long)(int)uVar16 * 4);
        iVar18 = *(int *)(lVar25 + (long)iVar19 * 4);
        if (iVar3 == iVar18) {
          puVar14 = puVar11;
          if (*(int *)(lVar23 + (long)iVar19 * 4) <= *(int *)(lVar23 + (long)(int)uVar16 * 4))
          break;
        }
        else if (iVar18 <= iVar3) {
          puVar14 = (uint *)((long)param_1 + lVar7);
          break;
        }
        puVar11 = puVar11 + -1;
        *(int *)((long)param_1 + lVar7) = iVar19;
        lVar7 = lVar7 + -4;
        puVar14 = param_1;
      } while (lVar7 != 0);
    }
    *puVar14 = uVar16;
  }
  puVar14 = puVar12 + 1;
  lVar8 = lVar8 + 4;
  puVar11 = puVar12;
  puVar12 = puVar14;
  if (puVar14 == param_2) {
    return;
  }
  goto LAB_10992540c;
LAB_1099252a8:
  param_2 = puVar14;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto LAB_109924a18;
}


