/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10946c554; end: 10946c67f;  */

ulong FUN_10946c554(ulong param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long extraout_x8;
  long lVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  float *pfVar15;
  long lVar16;
  ulong unaff_x19;
  long lVar17;
  long *unaff_x20;
  undefined8 unaff_x22;
  float fVar18;
  float fVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long alStack_40 [2];
  
  plVar8 = alStack_40;
  plVar4 = alStack_40;
  alStack_40[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3e == 0) {
    unaff_x19 = param_4;
    if (param_3 == 0) {
      unaff_x20 = (long *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar17 = -(extraout_x8 + 0x1eU & 0xfffffffffffffff0);
        plVar8 = (long *)((long)alStack_40 + lVar17);
        unaff_x20 = (long *)((long)alStack_40 + lVar17);
      }
      else {
        _malloc();
        if (unaff_x20 == (long *)0x0) goto LAB_10946c640;
      }
    }
    else {
      unaff_x20 = (long *)0x0;
      plVar8 = alStack_40;
    }
    plVar9 = (long *)*param_2;
    plVar6 = (long *)param_2[2];
    plVar10 = *(long **)(param_2[3] + 8);
    FUN_1093c6c14();
    if (0x8000 < param_4) {
      plVar6 = unaff_x20;
      _free();
    }
    plVar4 = plVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_40[1]) {
      return param_1;
    }
  }
  else {
LAB_10946c640:
    plVar6 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    plVar9 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    plVar10 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x20);
  }
  plVar8 = plVar6;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar4 + -0x30) = unaff_x22;
  *(long **)((long)plVar4 + -0x28) = plVar6;
  *(long **)((long)plVar4 + -0x20) = unaff_x20;
  *(ulong *)((long)plVar4 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar4 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar4 + -8) = FUN_10946c680;
  lVar17 = plVar10[1];
  puVar2 = (uint *)*plVar8;
  if (puVar2 != (uint *)*plVar10 || plVar8[1] != lVar17) {
    if (0 < lVar17) {
      puVar12 = (uint *)*plVar10;
      piVar14 = (int *)*plVar9;
      do {
        param_1 = (ulong)*puVar12;
        puVar2[*piVar14] = *puVar12;
        lVar17 = lVar17 + -1;
        puVar12 = puVar12 + 1;
        piVar14 = piVar14 + 1;
      } while (lVar17 != 0);
    }
    return param_1;
  }
  lVar17 = plVar9[1];
  if (0 < lVar17) {
    lVar7 = 1;
    _calloc(1,lVar17);
    if (lVar7 == 0) {
      plVar8 = (long *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      *(undefined1 **)((long)plVar4 + -0x40) = (undefined1 *)((long)plVar4 + -0x10);
      *(code **)((long)plVar4 + -0x38) = FUN_10946c78c;
      if ((bRam0000000113732de8 & 1) == 0) {
        iVar5 = 0x13732de8;
        *(long **)((long)plVar4 + -0x48) = plVar8;
        ___cxa_guard_acquire();
        plVar8 = *(long **)((long)plVar4 + -0x48);
        if (iVar5 != 0) {
          fRam0000000113732da0 = 1.0842022e-19;
          ___cxa_guard_release(0x113732de8);
          plVar8 = *(long **)((long)plVar4 + -0x48);
        }
      }
      if ((bRam0000000113732df0 & 1) == 0) {
        iVar5 = 0x13732df0;
        *(long **)((long)plVar4 + -0x48) = plVar8;
        ___cxa_guard_acquire();
        plVar8 = *(long **)((long)plVar4 + -0x48);
        if (iVar5 != 0) {
          fRam0000000113732da4 = 4.5035996e+15;
          ___cxa_guard_release(0x113732df0);
          plVar8 = *(long **)((long)plVar4 + -0x48);
        }
      }
      if ((bRam0000000113732df8 & 1) == 0) {
        iVar5 = 0x13732df8;
        *(long **)((long)plVar4 + -0x48) = plVar8;
        ___cxa_guard_acquire();
        plVar8 = *(long **)((long)plVar4 + -0x48);
        if (iVar5 != 0) {
          fRam0000000113732da8 = 9.223372e+18;
          ___cxa_guard_release(0x113732df8);
          plVar8 = *(long **)((long)plVar4 + -0x48);
        }
      }
      if ((bRam0000000113732e00 & 1) == 0) {
        iVar5 = 0x13732e00;
        *(long **)((long)plVar4 + -0x48) = plVar8;
        ___cxa_guard_acquire();
        plVar8 = *(long **)((long)plVar4 + -0x48);
        if (iVar5 != 0) {
          fRam0000000113732dac = 1.323489e-23;
          ___cxa_guard_release(0x113732e00);
          plVar8 = *(long **)((long)plVar4 + -0x48);
        }
      }
      if ((bRam0000000113732e08 & 1) == 0) {
        iVar5 = 0x13732e08;
        *(long **)((long)plVar4 + -0x48) = plVar8;
        ___cxa_guard_acquire();
        plVar8 = *(long **)((long)plVar4 + -0x48);
        if (iVar5 != 0) {
          fRam0000000113732db0 = 1.1920929e-07;
          ___cxa_guard_release(0x113732e08);
          plVar8 = *(long **)((long)plVar4 + -0x48);
        }
      }
      if ((bRam0000000113732e10 & 1) == 0) {
        iVar5 = 0x13732e10;
        *(long **)((long)plVar4 + -0x48) = plVar8;
        ___cxa_guard_acquire();
        plVar8 = *(long **)((long)plVar4 + -0x48);
        if (iVar5 != 0) {
          fRam0000000113732db4 = SQRT(fRam0000000113732db0);
          ___cxa_guard_release(0x113732e10);
          plVar8 = *(long **)((long)plVar4 + -0x48);
        }
      }
      lVar17 = plVar8[1];
      if (0 < lVar17) {
        fVar18 = (float)lVar17;
        uVar20 = 0;
        fVar23 = 0.0;
        pfVar15 = (float *)*plVar8;
        fVar19 = 0.0;
        do {
          fVar24 = *pfVar15;
          fVar25 = ABS(fVar24);
          fVar22 = fVar19;
          fVar24 = (float)uVar20 + fVar24 * fVar24;
          if (fVar25 < fRam0000000113732da0) {
            fVar22 = fVar19 + fRam0000000113732da8 * fVar25 * fRam0000000113732da8 * fVar25;
            fVar24 = (float)uVar20;
          }
          if (fRam0000000113732da4 / fVar18 < fVar25) {
            fVar23 = fVar23 + fRam0000000113732dac * fVar25 * fRam0000000113732dac * fVar25;
          }
          uVar3 = (ulong)(uint)fVar24;
          if (fRam0000000113732da4 / fVar18 < fVar25) {
            fVar22 = fVar19;
            uVar3 = uVar20;
          }
          uVar20 = uVar3;
          lVar17 = lVar17 + -1;
          pfVar15 = pfVar15 + 1;
          fVar19 = fVar22;
        } while (lVar17 != 0);
        fVar19 = (float)uVar20;
        if (!NAN(fVar19)) {
          if (fVar23 <= 0.0) {
            if (fVar22 <= 0.0) goto LAB_10946c8d4;
            if (fVar19 <= 0.0) {
              return (ulong)(uint)(SQRT(fVar22) / fRam0000000113732da8);
            }
            fVar23 = SQRT(fVar19);
            fVar19 = SQRT(fVar22) / fRam0000000113732da8;
          }
          else {
            fVar23 = SQRT(fVar23);
            if (3.4028235e+38 < fVar23) {
              return (ulong)(uint)fVar23;
            }
            fVar23 = fVar23 / fRam0000000113732dac;
            if (fVar19 <= 0.0) {
              return (ulong)(uint)fVar23;
            }
            fVar19 = SQRT(fVar19);
          }
          fVar18 = fVar19;
          if (fVar23 <= fVar19) {
            fVar18 = fVar23;
          }
          if (fVar19 <= fVar23) {
            fVar19 = fVar23;
          }
          uVar20 = (ulong)(uint)fVar19;
          if (fRam0000000113732db4 * fVar19 < fVar18) {
            return (ulong)(uint)(fVar19 * SQRT((fVar18 / fVar19) * (fVar18 / fVar19) + 1.0));
          }
        }
        return uVar20;
      }
      uVar20 = 0;
LAB_10946c8d4:
      return (ulong)(uint)SQRT((float)uVar20);
    }
    lVar11 = *plVar9;
    lVar13 = 0;
    do {
      lVar1 = lVar13 + 1;
      if (*(char *)(lVar7 + lVar13) != '\x01') {
        *(undefined1 *)(lVar7 + lVar13) = 1;
        lVar16 = (long)*(int *)(lVar11 + lVar13 * 4);
        if (lVar13 != lVar16) {
          param_1 = (ulong)puVar2[lVar13];
          do {
            uVar21 = puVar2[lVar16];
            puVar2[lVar16] = (uint)param_1;
            puVar2[lVar13] = uVar21;
            *(undefined1 *)(lVar7 + lVar16) = 1;
            lVar16 = (long)*(int *)(lVar11 + lVar16 * 4);
            param_1 = (ulong)uVar21;
          } while (lVar13 != lVar16);
        }
      }
      lVar13 = lVar1;
    } while (lVar1 < lVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return param_1;
}



/* Entry: 10946c680; end: 10946c78b;  */

ulong FUN_10946c680(ulong param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar13 = param_4[1];
  puVar2 = (uint *)*param_2;
  if (puVar2 != (uint *)*param_4 || param_2[1] != lVar13) {
    if (0 < lVar13) {
      puVar8 = (uint *)*param_4;
      piVar10 = (int *)*param_3;
      do {
        param_1 = (ulong)*puVar8;
        puVar2[*piVar10] = *puVar8;
        lVar13 = lVar13 + -1;
        puVar8 = puVar8 + 1;
        piVar10 = piVar10 + 1;
      } while (lVar13 != 0);
    }
    return param_1;
  }
  lVar13 = param_3[1];
  if (0 < lVar13) {
    lVar5 = 1;
    _calloc(1,lVar13);
    if (lVar5 == 0) {
      plVar6 = (long *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      if ((bRam0000000113732de8 & 1) == 0) {
        iVar4 = 0x13732de8;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          fRam0000000113732da0 = 1.0842022e-19;
          ___cxa_guard_release(0x113732de8);
        }
      }
      if ((bRam0000000113732df0 & 1) == 0) {
        iVar4 = 0x13732df0;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          fRam0000000113732da4 = 4.5035996e+15;
          ___cxa_guard_release(0x113732df0);
        }
      }
      if ((bRam0000000113732df8 & 1) == 0) {
        iVar4 = 0x13732df8;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          fRam0000000113732da8 = 9.223372e+18;
          ___cxa_guard_release(0x113732df8);
        }
      }
      if ((bRam0000000113732e00 & 1) == 0) {
        iVar4 = 0x13732e00;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          fRam0000000113732dac = 1.323489e-23;
          ___cxa_guard_release(0x113732e00);
        }
      }
      if ((bRam0000000113732e08 & 1) == 0) {
        iVar4 = 0x13732e08;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          fRam0000000113732db0 = 1.1920929e-07;
          ___cxa_guard_release(0x113732e08);
        }
      }
      if ((bRam0000000113732e10 & 1) == 0) {
        iVar4 = 0x13732e10;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          fRam0000000113732db4 = SQRT(fRam0000000113732db0);
          ___cxa_guard_release(0x113732e10);
        }
      }
      lVar13 = plVar6[1];
      if (0 < lVar13) {
        fVar14 = (float)lVar13;
        uVar16 = 0;
        fVar19 = 0.0;
        pfVar11 = (float *)*plVar6;
        fVar15 = 0.0;
        do {
          fVar20 = *pfVar11;
          fVar21 = ABS(fVar20);
          fVar18 = fVar15;
          fVar20 = (float)uVar16 + fVar20 * fVar20;
          if (fVar21 < fRam0000000113732da0) {
            fVar18 = fVar15 + fRam0000000113732da8 * fVar21 * fRam0000000113732da8 * fVar21;
            fVar20 = (float)uVar16;
          }
          if (fRam0000000113732da4 / fVar14 < fVar21) {
            fVar19 = fVar19 + fRam0000000113732dac * fVar21 * fRam0000000113732dac * fVar21;
          }
          uVar3 = (ulong)(uint)fVar20;
          if (fRam0000000113732da4 / fVar14 < fVar21) {
            fVar18 = fVar15;
            uVar3 = uVar16;
          }
          uVar16 = uVar3;
          lVar13 = lVar13 + -1;
          pfVar11 = pfVar11 + 1;
          fVar15 = fVar18;
        } while (lVar13 != 0);
        fVar15 = (float)uVar16;
        if (!NAN(fVar15)) {
          if (fVar19 <= 0.0) {
            if (fVar18 <= 0.0) goto LAB_10946c8d4;
            if (fVar15 <= 0.0) {
              return (ulong)(uint)(SQRT(fVar18) / fRam0000000113732da8);
            }
            fVar19 = SQRT(fVar15);
            fVar15 = SQRT(fVar18) / fRam0000000113732da8;
          }
          else {
            fVar19 = SQRT(fVar19);
            if (3.4028235e+38 < fVar19) {
              return (ulong)(uint)fVar19;
            }
            fVar19 = fVar19 / fRam0000000113732dac;
            if (fVar15 <= 0.0) {
              return (ulong)(uint)fVar19;
            }
            fVar15 = SQRT(fVar15);
          }
          fVar14 = fVar15;
          if (fVar19 <= fVar15) {
            fVar14 = fVar19;
          }
          if (fVar15 <= fVar19) {
            fVar15 = fVar19;
          }
          uVar16 = (ulong)(uint)fVar15;
          if (fRam0000000113732db4 * fVar15 < fVar14) {
            return (ulong)(uint)(fVar15 * SQRT((fVar14 / fVar15) * (fVar14 / fVar15) + 1.0));
          }
        }
        return uVar16;
      }
      uVar16 = 0;
LAB_10946c8d4:
      return (ulong)(uint)SQRT((float)uVar16);
    }
    lVar7 = *param_3;
    lVar9 = 0;
    do {
      lVar1 = lVar9 + 1;
      if (*(char *)(lVar5 + lVar9) != '\x01') {
        *(undefined1 *)(lVar5 + lVar9) = 1;
        lVar12 = (long)*(int *)(lVar7 + lVar9 * 4);
        if (lVar9 != lVar12) {
          param_1 = (ulong)puVar2[lVar9];
          do {
            uVar17 = puVar2[lVar12];
            puVar2[lVar12] = (uint)param_1;
            puVar2[lVar9] = uVar17;
            *(undefined1 *)(lVar5 + lVar12) = 1;
            lVar12 = (long)*(int *)(lVar7 + lVar12 * 4);
            param_1 = (ulong)uVar17;
          } while (lVar9 != lVar12);
        }
      }
      lVar9 = lVar1;
    } while (lVar1 < lVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return param_1;
}



/* Entry: 10946c78c; end: 10946cb2b;  */

float FUN_10946c78c(long *param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000113732de8 & 1) == 0) {
    iVar1 = 0x13732de8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      fRam0000000113732da0 = 1.0842022e-19;
      ___cxa_guard_release(0x113732de8);
    }
  }
  if ((bRam0000000113732df0 & 1) == 0) {
    iVar1 = 0x13732df0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      fRam0000000113732da4 = 4.5035996e+15;
      ___cxa_guard_release(0x113732df0);
    }
  }
  if ((bRam0000000113732df8 & 1) == 0) {
    iVar1 = 0x13732df8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      fRam0000000113732da8 = 9.223372e+18;
      ___cxa_guard_release(0x113732df8);
    }
  }
  if ((bRam0000000113732e00 & 1) == 0) {
    iVar1 = 0x13732e00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      fRam0000000113732dac = 1.323489e-23;
      ___cxa_guard_release(0x113732e00);
    }
  }
  if ((bRam0000000113732e08 & 1) == 0) {
    iVar1 = 0x13732e08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      fRam0000000113732db0 = 1.1920929e-07;
      ___cxa_guard_release(0x113732e08);
    }
  }
  if ((bRam0000000113732e10 & 1) == 0) {
    iVar1 = 0x13732e10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      fRam0000000113732db4 = SQRT(fRam0000000113732db0);
      ___cxa_guard_release(0x113732e10);
    }
  }
  lVar2 = param_1[1];
  if (0 < lVar2) {
    fVar4 = (float)lVar2;
    fVar5 = 0.0;
    fVar8 = 0.0;
    pfVar3 = (float *)*param_1;
    fVar6 = 0.0;
    do {
      fVar9 = *pfVar3;
      fVar10 = ABS(fVar9);
      fVar7 = fVar6;
      fVar9 = fVar5 + fVar9 * fVar9;
      if (fVar10 < fRam0000000113732da0) {
        fVar7 = fVar6 + fRam0000000113732da8 * fVar10 * fRam0000000113732da8 * fVar10;
        fVar9 = fVar5;
      }
      if (fRam0000000113732da4 / fVar4 < fVar10) {
        fVar7 = fVar6;
        fVar9 = fVar5;
        fVar8 = fVar8 + fRam0000000113732dac * fVar10 * fRam0000000113732dac * fVar10;
      }
      fVar5 = fVar9;
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 1;
      fVar6 = fVar7;
    } while (lVar2 != 0);
    if (!NAN(fVar5)) {
      if (fVar8 <= 0.0) {
        if (fVar7 <= 0.0) goto LAB_10946c8d4;
        if (fVar5 <= 0.0) {
          return SQRT(fVar7) / fRam0000000113732da8;
        }
        fVar8 = SQRT(fVar5);
        fVar5 = SQRT(fVar7) / fRam0000000113732da8;
      }
      else {
        fVar8 = SQRT(fVar8);
        if (3.4028235e+38 < fVar8) {
          return fVar8;
        }
        fVar8 = fVar8 / fRam0000000113732dac;
        if (fVar5 <= 0.0) {
          return fVar8;
        }
        fVar5 = SQRT(fVar5);
      }
      fVar6 = fVar5;
      if (fVar8 <= fVar5) {
        fVar6 = fVar8;
      }
      if (fVar5 <= fVar8) {
        fVar5 = fVar8;
      }
      if (fRam0000000113732db4 * fVar5 < fVar6) {
        return fVar5 * SQRT((fVar6 / fVar5) * (fVar6 / fVar5) + 1.0);
      }
    }
    return fVar5;
  }
  fVar5 = 0.0;
LAB_10946c8d4:
  return SQRT(fVar5);
}



/* Entry: 10946cb2c; end: 10946ce0f;  */

void FUN_10946cb2c(float param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  code *pcVar11;
  long **pplVar12;
  long **pplVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  float *pfVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  ulong extraout_x14;
  ulong uVar29;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *puVar30;
  long *plVar31;
  undefined4 *puVar32;
  long *unaff_x22;
  float *unaff_x23;
  int *piVar33;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long lVar34;
  ulong unaff_x27;
  float *pfVar35;
  long unaff_x28;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long *aplStack_b0 [2];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  pplVar12 = aplStack_b0;
  pplVar13 = aplStack_b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_4 >> 0x3e == 0) {
    unaff_x24 = (long *)*param_2;
    uStack_a0 = param_2[1];
    unaff_x19 = (long *)param_2[3];
    aplStack_b0[1] = param_4;
    if (param_3 == (long *)0x0) {
      plVar15 = (long *)((long)param_4 << 2);
      if (param_4 < (long *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar34 = -((long)plVar15 + 0x1eU & 0xfffffffffffffff0);
        pplVar12 = (long **)((long)aplStack_b0 + lVar34);
        plVar15 = (long *)((long)aplStack_b0 + lVar34);
        uVar19 = extraout_x14;
        unaff_x20 = plVar15;
      }
      else {
        _malloc();
        uVar19 = uStack_a0;
        unaff_x20 = plVar15;
        if (plVar15 == (long *)0x0) goto LAB_10946cdcc;
      }
    }
    else {
      plVar15 = (long *)0x0;
      pplVar12 = aplStack_b0;
      uVar19 = uStack_a0;
      unaff_x20 = param_3;
    }
    aplStack_b0[0] = plVar15;
    if (0 < (long)uVar19) {
      unaff_x22 = (long *)0x0;
      unaff_x26 = unaff_x19[1];
      lStack_98 = unaff_x26 * 0x20 + 0x20;
      unaff_x28 = unaff_x26 * 4;
      uVar29 = uVar19;
      plVar14 = unaff_x20;
      unaff_x25 = unaff_x24;
      do {
        unaff_x27 = uVar29;
        if ((long)uVar29 < 2) {
          unaff_x27 = 1;
        }
        if (7 < (long)unaff_x27) {
          unaff_x27 = 8;
        }
        unaff_x19 = (long *)(uVar19 - (long)unaff_x22);
        unaff_x23 = (float *)((long)unaff_x20 + (long)unaff_x22 * 4);
        if (unaff_x22 != (long *)0x0) {
          lStack_78 = (long)unaff_x24 + (long)unaff_x22 * unaff_x26 * 4;
          plVar15 = unaff_x19;
          if (7 < (long)unaff_x19) {
            plVar15 = (long *)0x8;
          }
          uStack_80 = 1;
          param_4 = &lStack_78;
          param_1 = -1.0;
          param_3 = unaff_x22;
          uStack_90 = uVar29;
          plStack_88 = unaff_x20;
          lStack_70 = unaff_x26;
          FUN_1093c55d4(0xbf800000);
          uVar19 = uStack_a0;
          uVar29 = uStack_90;
        }
        if (0 < (long)unaff_x19) {
          uVar18 = 0;
          plVar16 = unaff_x25;
          do {
            lVar34 = uVar18 + (long)unaff_x22;
            if (uVar18 == 0) {
              param_1 = *(float *)((long)unaff_x20 + lVar34 * 4);
            }
            else {
              pfVar35 = (float *)((long)unaff_x24 + lVar34 * unaff_x26 * 4 + (long)unaff_x22 * 4);
              if (uVar18 < 4) {
                param_1 = *pfVar35 * *unaff_x23;
                if (uVar18 != 1) {
                  uVar26 = 1;
                  do {
                    param_1 = param_1 + *(float *)((long)plVar16 + uVar26 * 4) *
                                        *(float *)((long)plVar14 + uVar26 * 4);
                    uVar26 = uVar26 + 1;
                  } while (uVar18 != uVar26);
                }
              }
              else {
                uVar26 = uVar18 & 0x7ffffffffffffffc;
                fVar36 = (float)*(undefined8 *)pfVar35 * *unaff_x23;
                fVar38 = (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) * unaff_x23[1];
                fVar39 = (float)*(undefined8 *)(pfVar35 + 2) * unaff_x23[2];
                fVar40 = (float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) * unaff_x23[3];
                auVar41._4_4_ = fVar38;
                auVar41._0_4_ = fVar36;
                auVar41._8_4_ = fVar39;
                auVar41._12_4_ = fVar40;
                auVar8._4_4_ = fVar38;
                auVar8._0_4_ = fVar36;
                auVar8._8_4_ = fVar39;
                auVar8._12_4_ = fVar40;
                auVar41 = NEON_ext(auVar41,auVar8,8,1);
                param_1 = fVar36 + auVar41._0_4_ + fVar38 + auVar41._4_4_;
                for (; uVar26 != uVar18; uVar26 = uVar26 + 1) {
                  param_1 = param_1 + *(float *)((long)plVar16 + uVar26 * 4) *
                                      *(float *)((long)plVar14 + uVar26 * 4);
                }
              }
              param_1 = *(float *)((long)unaff_x20 + lVar34 * 4) - param_1;
              *(float *)((long)unaff_x20 + lVar34 * 4) = param_1;
            }
            if (param_1 != 0.0) {
              param_1 = param_1 / *(float *)((long)unaff_x24 + lVar34 * unaff_x26 * 4 + lVar34 * 4);
              *(float *)((long)unaff_x20 + lVar34 * 4) = param_1;
            }
            uVar18 = uVar18 + 1;
            plVar16 = (long *)((long)plVar16 + unaff_x28);
          } while (uVar18 != unaff_x27);
        }
        unaff_x22 = unaff_x22 + 1;
        uVar29 = uVar29 - 8;
        plVar14 = plVar14 + 4;
        unaff_x25 = (long *)((long)unaff_x25 + lStack_98);
      } while ((long)unaff_x22 < (long)uVar19);
    }
    if ((long *)0x8000 < aplStack_b0[1]) {
      plVar15 = aplStack_b0[0];
      _free();
    }
    pplVar13 = pplVar12;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
LAB_10946cdcc:
    plVar15 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    param_3 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    param_4 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *)0x8000 < aplStack_b0[1]) {
    _free(aplStack_b0[0]);
  }
  plVar16 = plVar15;
  __Unwind_Resume();
  *(long *)((long)pplVar13 + -0x60) = unaff_x28;
  *(ulong *)((long)pplVar13 + -0x58) = unaff_x27;
  *(long *)((long)pplVar13 + -0x50) = unaff_x26;
  *(long **)((long)pplVar13 + -0x48) = unaff_x25;
  *(long **)((long)pplVar13 + -0x40) = unaff_x24;
  *(float **)((long)pplVar13 + -0x38) = unaff_x23;
  *(long **)((long)pplVar13 + -0x30) = unaff_x22;
  *(long **)((long)pplVar13 + -0x28) = plVar15;
  *(long **)((long)pplVar13 + -0x20) = unaff_x20;
  *(long **)((long)pplVar13 + -0x18) = unaff_x19;
  *(undefined1 **)((long)pplVar13 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)pplVar13 + -8) = FUN_10946ce10;
  plVar15 = (long *)((long)pplVar13 + -0xa0);
  plVar14 = (long *)((long)pplVar13 + -0xa0);
  *(undefined8 *)((long)pplVar13 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_4 >> 0x3e == 0) {
    unaff_x23 = (float *)*plVar16;
    unaff_x19 = (long *)plVar16[1];
    unaff_x20 = (long *)plVar16[3];
    *(long **)((long)pplVar13 + -0x90) = param_4;
    if (param_3 == (long *)0x0) {
      plVar16 = (long *)((long)param_4 << 2);
      if (param_4 < (long *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        plVar15 = (long *)((long)pplVar13 + (-0xa0 - ((long)plVar16 + 0x1eU & 0xfffffffffffffff0)));
        *(long **)((long)pplVar13 + -0x98) = plVar15;
        plVar31 = plVar15;
      }
      else {
        _malloc();
        *(long **)((long)pplVar13 + -0x98) = plVar16;
        plVar31 = plVar16;
        if (plVar16 == (long *)0x0) goto LAB_10946d0b0;
      }
    }
    else {
      *(undefined8 *)((long)pplVar13 + -0x98) = 0;
      plVar15 = (long *)((long)pplVar13 + -0xa0);
      plVar31 = param_3;
    }
    if (0 < (long)unaff_x19) {
      uVar29 = unaff_x20[1];
      lVar34 = (long)plVar31 + (long)unaff_x19 * 4;
      pfVar35 = unaff_x23 + (long)(uVar29 * ((long)unaff_x19 + -1) + (long)unaff_x19);
      uVar19 = ~uVar29;
      unaff_x20 = (long *)(uVar19 * 4);
      plVar14 = unaff_x19;
      do {
        unaff_x22 = plVar14;
        if ((long *)0x7 < plVar14) {
          unaff_x22 = (long *)0x8;
        }
        param_3 = (long *)((long)unaff_x19 - (long)plVar14);
        if (param_3 != (long *)0x0) {
          *(float **)((long)pplVar13 + -0x78) =
               unaff_x23 + (long)((long)plVar14 + ((long)plVar14 - (long)unaff_x22) * uVar29);
          *(ulong *)((long)pplVar13 + -0x70) = uVar29;
          *(long *)((long)pplVar13 + -0x88) = (long)plVar31 + (long)plVar14 * 4;
          *(undefined8 *)((long)pplVar13 + -0x80) = 1;
          param_4 = (long *)((long)pplVar13 + -0x78);
          plVar16 = unaff_x22;
          FUN_1093c55d4(0xbf800000);
        }
        plVar20 = (long *)0x0;
        pfVar22 = pfVar35;
        lVar23 = lVar34;
        do {
          lVar27 = (long)plVar14 - (long)plVar20;
          lVar25 = lVar27 + -1;
          if (plVar20 == (long *)0x0) {
            param_1 = *(float *)((long)plVar31 + lVar25 * 4);
          }
          else {
            pfVar2 = unaff_x23 + lVar25 * uVar29 + lVar27;
            pfVar3 = (float *)((long)plVar31 + lVar27 * 4);
            if (plVar20 < (long *)0x4) {
              param_1 = *pfVar2 * *pfVar3;
              if (plVar20 != (long *)0x1) {
                lVar27 = 0;
                do {
                  param_1 = param_1 + pfVar22[lVar27 + 1] * *(float *)(lVar23 + lVar27 * 4 + 4);
                  lVar27 = lVar27 + 1;
                } while ((long)plVar20 + -1 != lVar27);
              }
            }
            else {
              plVar28 = (long *)((ulong)plVar20 & 0x7ffffffffffffffc);
              fVar36 = (float)*(undefined8 *)pfVar2 * *pfVar3;
              fVar38 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) * pfVar3[1];
              fVar39 = (float)*(undefined8 *)(pfVar2 + 2) * pfVar3[2];
              fVar40 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) * pfVar3[3];
              auVar6._4_4_ = fVar38;
              auVar6._0_4_ = fVar36;
              auVar6._8_4_ = fVar39;
              auVar6._12_4_ = fVar40;
              auVar7._4_4_ = fVar38;
              auVar7._0_4_ = fVar36;
              auVar7._8_4_ = fVar39;
              auVar7._12_4_ = fVar40;
              auVar41 = NEON_ext(auVar6,auVar7,8,1);
              param_1 = fVar36 + auVar41._0_4_ + fVar38 + auVar41._4_4_;
              for (; plVar28 != plVar20; plVar28 = (long *)((long)plVar28 + 1)) {
                param_1 = param_1 + pfVar22[(long)plVar28] * *(float *)(lVar23 + (long)plVar28 * 4);
              }
            }
            param_1 = *(float *)((long)plVar31 + lVar25 * 4) - param_1;
            *(float *)((long)plVar31 + lVar25 * 4) = param_1;
          }
          if (param_1 != 0.0) {
            param_1 = param_1 / unaff_x23[lVar25 + lVar25 * uVar29];
            *(float *)((long)plVar31 + lVar25 * 4) = param_1;
          }
          plVar20 = (long *)((long)plVar20 + 1);
          lVar23 = lVar23 + -4;
          pfVar22 = pfVar22 + uVar19;
        } while (plVar20 != unaff_x22);
        lVar34 = lVar34 + -0x20;
        pfVar35 = pfVar35 + uVar19 * 8;
        unaff_x24 = plVar14 + -1;
        bVar1 = 7 < (long)plVar14;
        plVar14 = unaff_x24;
      } while (unaff_x24 != (long *)0x0 && bVar1);
    }
    if (0x8000 < *(ulong *)((long)pplVar13 + -0x90)) {
      plVar16 = *(long **)((long)pplVar13 + -0x98);
      _free();
    }
    plVar14 = plVar15;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar13 + -0x68)) {
      return;
    }
  }
  else {
LAB_10946d0b0:
    plVar16 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    param_3 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    param_4 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < *(ulong *)((long)pplVar13 + -0x90)) {
    _free(*(undefined8 *)((long)pplVar13 + -0x98));
  }
  plVar15 = plVar16;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar14 + -0x50) = unaff_d9;
  *(undefined8 *)((long)plVar14 + -0x48) = unaff_d8;
  *(long **)((long)plVar14 + -0x40) = unaff_x24;
  *(float **)((long)plVar14 + -0x38) = unaff_x23;
  *(long **)((long)plVar14 + -0x30) = unaff_x22;
  *(long **)((long)plVar14 + -0x28) = plVar16;
  *(long **)((long)plVar14 + -0x20) = unaff_x20;
  *(long **)((long)plVar14 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar14 + -0x10) = (undefined1 *)((long)pplVar13 + -0x10);
  *(code **)((long)plVar14 + -8) = FUN_10946d0f4;
  *(undefined8 *)((long)plVar14 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)plVar14 + -0x68) = 0;
  *(undefined8 *)((long)plVar14 + -0x60) = 0;
  FUN_1093c61bc((undefined1 *)((long)plVar14 + -0x68),*(undefined8 *)(*param_3 + 8),1);
  puVar21 = (undefined8 *)*param_3;
  lVar23 = puVar21[1];
  lVar34 = lVar23;
  if (*(long *)((long)plVar14 + -0x60) != lVar23) {
    FUN_1093c61bc((undefined1 *)((long)plVar14 + -0x68),lVar23,1);
    puVar21 = (undefined8 *)*param_3;
    lVar23 = *(long *)((long)plVar14 + -0x60);
    lVar34 = puVar21[1];
  }
  puVar32 = *(undefined4 **)((long)plVar14 + -0x68);
  piVar33 = (int *)*puVar21;
  puVar4 = *(undefined4 **)param_3[1];
  lVar25 = ((long *)param_3[1])[1];
  if (puVar32 == puVar4 && lVar23 == lVar25) {
    if (lVar34 < 1) {
LAB_10946d240:
      _free();
      goto LAB_10946d244;
    }
    lVar23 = 1;
    _calloc(1,lVar34);
    if (lVar23 != 0) {
      lVar25 = 0;
      do {
        lVar27 = lVar25 + 1;
        if (*(char *)(lVar23 + lVar25) != '\x01') {
          *(undefined1 *)(lVar23 + lVar25) = 1;
          iVar5 = piVar33[lVar25];
          lVar10 = lVar25;
          while (lVar9 = (long)iVar5, lVar25 != lVar9) {
            uVar37 = puVar32[lVar9];
            puVar32[lVar9] = puVar32[lVar10];
            puVar32[lVar10] = uVar37;
            *(undefined1 *)(lVar23 + lVar9) = 1;
            lVar10 = lVar9;
            iVar5 = piVar33[lVar9];
          }
        }
        lVar25 = lVar27;
      } while (lVar27 < lVar34);
      goto LAB_10946d240;
    }
  }
  else {
    puVar24 = puVar32;
    if (0 < lVar25) {
      do {
        *puVar24 = puVar4[*piVar33];
        lVar25 = lVar25 + -1;
        puVar24 = puVar24 + 1;
        piVar33 = piVar33 + 1;
      } while (lVar25 != 0);
    }
LAB_10946d244:
    uVar19 = param_4[1];
    if (uVar19 >> 0x3e != 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10946d380;
    }
    puVar17 = (undefined1 *)*param_4;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)(uVar19 << 2);
      if (uVar19 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar17 = (undefined1 *)
                  ((long)plVar14 + (-0x70 - ((ulong)(puVar17 + 0x1e) & 0xfffffffffffffff0)));
        puVar30 = puVar17;
      }
      else {
        _malloc();
        puVar30 = puVar17;
        if (puVar17 == (undefined1 *)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946d380;
        }
      }
    }
    else {
      puVar30 = (undefined1 *)0x0;
    }
    FUN_10946d3c4(param_1,plVar15[1],plVar15[2],*plVar15,plVar15[1],puVar32,puVar17);
    if (0x8000 < uVar19) {
      _free(puVar30);
    }
    _free(*(undefined8 *)((long)plVar14 + -0x68));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar14 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10946d380:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10946d384);
  (*pcVar11)();
}



/* Entry: 10946ce10; end: 10946d0f3;  */

void FUN_10946ce10(float param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *puVar19;
  long *plVar20;
  undefined4 *puVar21;
  long *unaff_x22;
  long lVar22;
  long unaff_x23;
  int *piVar23;
  long *unaff_x24;
  ulong uVar24;
  long lVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  plVar8 = &lStack_a0;
  plVar9 = &lStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_4 >> 0x3e == 0) {
    unaff_x23 = *param_2;
    unaff_x19 = (long *)param_2[1];
    unaff_x20 = param_2[3];
    plStack_90 = param_4;
    if (param_3 == (long *)0x0) {
      param_2 = (long *)((long)param_4 << 2);
      if (param_4 < (long *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar25 = -((long)param_2 + 0x1eU & 0xfffffffffffffff0);
        plVar8 = (long *)((long)&lStack_a0 + lVar25);
        plStack_98 = (long *)((long)&lStack_a0 + lVar25);
        plVar20 = plStack_98;
      }
      else {
        _malloc();
        plVar20 = param_2;
        plStack_98 = param_2;
        if (param_2 == (long *)0x0) goto LAB_10946d0b0;
      }
    }
    else {
      plStack_98 = (long *)0x0;
      plVar8 = &lStack_a0;
      plVar20 = param_3;
    }
    if (0 < (long)unaff_x19) {
      uVar24 = *(ulong *)(unaff_x20 + 8);
      lVar25 = (long)plVar20 + (long)unaff_x19 * 4;
      lVar22 = unaff_x23 + (long)unaff_x19 * 4 + uVar24 * ((long)unaff_x19 + -1) * 4;
      unaff_x20 = ~uVar24 * 4;
      plVar9 = unaff_x19;
      do {
        unaff_x22 = plVar9;
        if ((long *)0x7 < plVar9) {
          unaff_x22 = (long *)0x8;
        }
        param_3 = (long *)((long)unaff_x19 - (long)plVar9);
        if (param_3 != (long *)0x0) {
          lStack_78 = unaff_x23 + (long)plVar9 * 4 + ((long)plVar9 - (long)unaff_x22) * uVar24 * 4;
          lStack_88 = (long)plVar20 + (long)plVar9 * 4;
          uStack_80 = 1;
          param_4 = &lStack_78;
          param_2 = unaff_x22;
          uStack_70 = uVar24;
          FUN_1093c55d4(0xbf800000);
        }
        plVar11 = (long *)0x0;
        lVar13 = lVar22;
        lVar14 = lVar25;
        do {
          lVar16 = ((long)plVar9 - (long)plVar11) + -1;
          if (plVar11 == (long *)0x0) {
            param_1 = *(float *)((long)plVar20 + lVar16 * 4);
          }
          else {
            lVar17 = ((long)plVar9 - (long)plVar11) * 4;
            pfVar2 = (float *)(unaff_x23 + lVar16 * uVar24 * 4 + lVar17);
            pfVar3 = (float *)((long)plVar20 + lVar17);
            if (plVar11 < (long *)0x4) {
              param_1 = *pfVar2 * *pfVar3;
              if (plVar11 != (long *)0x1) {
                lVar17 = 0;
                do {
                  param_1 = param_1 + *(float *)(lVar13 + lVar17 * 4 + 4) *
                                      *(float *)(lVar14 + lVar17 * 4 + 4);
                  lVar17 = lVar17 + 1;
                } while ((long)plVar11 + -1 != lVar17);
              }
            }
            else {
              plVar18 = (long *)((ulong)plVar11 & 0x7ffffffffffffffc);
              fVar26 = (float)*(undefined8 *)pfVar2 * *pfVar3;
              fVar28 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) * pfVar3[1];
              fVar29 = (float)*(undefined8 *)(pfVar2 + 2) * pfVar3[2];
              fVar30 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) * pfVar3[3];
              auVar31._4_4_ = fVar28;
              auVar31._0_4_ = fVar26;
              auVar31._8_4_ = fVar29;
              auVar31._12_4_ = fVar30;
              auVar6._4_4_ = fVar28;
              auVar6._0_4_ = fVar26;
              auVar6._8_4_ = fVar29;
              auVar6._12_4_ = fVar30;
              auVar31 = NEON_ext(auVar31,auVar6,8,1);
              param_1 = fVar26 + auVar31._0_4_ + fVar28 + auVar31._4_4_;
              for (; plVar18 != plVar11; plVar18 = (long *)((long)plVar18 + 1)) {
                param_1 = param_1 + *(float *)(lVar13 + (long)plVar18 * 4) *
                                    *(float *)(lVar14 + (long)plVar18 * 4);
              }
            }
            param_1 = *(float *)((long)plVar20 + lVar16 * 4) - param_1;
            *(float *)((long)plVar20 + lVar16 * 4) = param_1;
          }
          if (param_1 != 0.0) {
            param_1 = param_1 / *(float *)(unaff_x23 + lVar16 * 4 + lVar16 * uVar24 * 4);
            *(float *)((long)plVar20 + lVar16 * 4) = param_1;
          }
          plVar11 = (long *)((long)plVar11 + 1);
          lVar14 = lVar14 + -4;
          lVar13 = lVar13 + unaff_x20;
        } while (plVar11 != unaff_x22);
        lVar25 = lVar25 + -0x20;
        lVar22 = lVar22 + ~uVar24 * 0x20;
        unaff_x24 = plVar9 + -1;
        bVar1 = 7 < (long)plVar9;
        plVar9 = unaff_x24;
      } while (unaff_x24 != (long *)0x0 && bVar1);
    }
    if ((long *)0x8000 < plStack_90) {
      param_2 = plStack_98;
      _free();
    }
    plVar9 = plVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
LAB_10946d0b0:
    param_2 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    param_3 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    param_4 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *)0x8000 < plStack_90) {
    _free(plStack_98);
  }
  plVar8 = param_2;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar9 + -0x50) = unaff_d9;
  *(undefined8 *)((long)plVar9 + -0x48) = unaff_d8;
  *(long **)((long)plVar9 + -0x40) = unaff_x24;
  *(long *)((long)plVar9 + -0x38) = unaff_x23;
  *(long **)((long)plVar9 + -0x30) = unaff_x22;
  *(long **)((long)plVar9 + -0x28) = param_2;
  *(long *)((long)plVar9 + -0x20) = unaff_x20;
  *(long **)((long)plVar9 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar9 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar9 + -8) = FUN_10946d0f4;
  *(undefined8 *)((long)plVar9 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)plVar9 + -0x68) = 0;
  *(undefined8 *)((long)plVar9 + -0x60) = 0;
  FUN_1093c61bc((undefined1 *)((long)plVar9 + -0x68),*(undefined8 *)(*param_3 + 8),1);
  puVar12 = (undefined8 *)*param_3;
  lVar22 = puVar12[1];
  lVar25 = lVar22;
  if (*(long *)((long)plVar9 + -0x60) != lVar22) {
    FUN_1093c61bc((undefined1 *)((long)plVar9 + -0x68),lVar22,1);
    puVar12 = (undefined8 *)*param_3;
    lVar22 = *(long *)((long)plVar9 + -0x60);
    lVar25 = puVar12[1];
  }
  puVar21 = *(undefined4 **)((long)plVar9 + -0x68);
  piVar23 = (int *)*puVar12;
  puVar4 = *(undefined4 **)param_3[1];
  lVar13 = ((long *)param_3[1])[1];
  if (puVar21 == puVar4 && lVar22 == lVar13) {
    if (lVar25 < 1) {
LAB_10946d240:
      _free();
      goto LAB_10946d244;
    }
    lVar22 = 1;
    _calloc(1,lVar25);
    if (lVar22 != 0) {
      lVar13 = 0;
      do {
        lVar14 = lVar13 + 1;
        if (*(char *)(lVar22 + lVar13) != '\x01') {
          *(undefined1 *)(lVar22 + lVar13) = 1;
          iVar5 = piVar23[lVar13];
          lVar16 = lVar13;
          while (lVar17 = (long)iVar5, lVar13 != lVar17) {
            uVar27 = puVar21[lVar17];
            puVar21[lVar17] = puVar21[lVar16];
            puVar21[lVar16] = uVar27;
            *(undefined1 *)(lVar22 + lVar17) = 1;
            lVar16 = lVar17;
            iVar5 = piVar23[lVar17];
          }
        }
        lVar13 = lVar14;
      } while (lVar14 < lVar25);
      goto LAB_10946d240;
    }
  }
  else {
    puVar15 = puVar21;
    if (0 < lVar13) {
      do {
        *puVar15 = puVar4[*piVar23];
        lVar13 = lVar13 + -1;
        puVar15 = puVar15 + 1;
        piVar23 = piVar23 + 1;
      } while (lVar13 != 0);
    }
LAB_10946d244:
    uVar24 = param_4[1];
    if (uVar24 >> 0x3e != 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10946d380;
    }
    puVar10 = (undefined1 *)*param_4;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)(uVar24 << 2);
      if (uVar24 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar10 = (undefined1 *)
                  ((long)plVar9 + (-0x70 - ((ulong)(puVar10 + 0x1e) & 0xfffffffffffffff0)));
        puVar19 = puVar10;
      }
      else {
        _malloc();
        puVar19 = puVar10;
        if (puVar10 == (undefined1 *)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946d380;
        }
      }
    }
    else {
      puVar19 = (undefined1 *)0x0;
    }
    FUN_10946d3c4(param_1,plVar8[1],plVar8[2],*plVar8,plVar8[1],puVar21,puVar10);
    if (0x8000 < uVar24) {
      _free(puVar19);
    }
    _free(*(undefined8 *)((long)plVar9 + -0x68));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar9 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10946d380:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10946d384);
  (*pcVar7)();
}



/* Entry: 10946d0f4; end: 10946d3c3;  */

void FUN_10946d0f4(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined1 auStack_70 [8];
  undefined4 *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_68 = (undefined4 *)0x0;
  lStack_60 = 0;
  FUN_1093c61bc(&puStack_68,*(undefined8 *)(*param_3 + 8),1);
  puVar9 = (undefined8 *)*param_3;
  lVar13 = puVar9[1];
  lVar14 = lVar13;
  if (lStack_60 != lVar13) {
    FUN_1093c61bc(&puStack_68,lVar13,1);
    puVar9 = (undefined8 *)*param_3;
    lVar13 = lStack_60;
    lVar14 = puVar9[1];
  }
  puVar6 = puStack_68;
  piVar16 = (int *)*puVar9;
  puVar2 = *(undefined4 **)param_3[1];
  lVar10 = ((long *)param_3[1])[1];
  if (puStack_68 == puVar2 && lVar13 == lVar10) {
    if (lVar14 < 1) {
LAB_10946d240:
      _free();
      goto LAB_10946d244;
    }
    lVar13 = 1;
    _calloc(1,lVar14);
    if (lVar13 != 0) {
      lVar10 = 0;
      do {
        lVar1 = lVar10 + 1;
        if (*(char *)(lVar13 + lVar10) != '\x01') {
          *(undefined1 *)(lVar13 + lVar10) = 1;
          iVar3 = piVar16[lVar10];
          lVar5 = lVar10;
          while (lVar4 = (long)iVar3, lVar10 != lVar4) {
            uVar17 = puVar6[lVar4];
            puVar6[lVar4] = puVar6[lVar5];
            puVar6[lVar5] = uVar17;
            *(undefined1 *)(lVar13 + lVar4) = 1;
            lVar5 = lVar4;
            iVar3 = piVar16[lVar4];
          }
        }
        lVar10 = lVar1;
      } while (lVar1 < lVar14);
      goto LAB_10946d240;
    }
  }
  else {
    puVar11 = puStack_68;
    if (0 < lVar10) {
      do {
        *puVar11 = puVar2[*piVar16];
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 1;
        piVar16 = piVar16 + 1;
      } while (lVar10 != 0);
    }
LAB_10946d244:
    uVar15 = param_4[1];
    if (uVar15 >> 0x3e != 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10946d380;
    }
    puVar8 = (undefined1 *)*param_4;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)(uVar15 << 2);
      if (uVar15 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar8 = auStack_70 + -((ulong)(puVar8 + 0x1e) & 0xfffffffffffffff0);
        puVar12 = puVar8;
      }
      else {
        _malloc();
        puVar12 = puVar8;
        if (puVar8 == (undefined1 *)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946d380;
        }
      }
    }
    else {
      puVar12 = (undefined1 *)0x0;
    }
    FUN_10946d3c4(param_1,param_2[1],param_2[2],*param_2,param_2[1],puVar6,puVar8);
    if (0x8000 < uVar15) {
      _free(puVar12);
    }
    _free(puStack_68);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10946d380:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10946d384);
  (*pcVar7)();
}



/* Entry: 10946d3c4; end: 10946d76b;  */

void FUN_10946d3c4(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long alStack_90 [3];
  long lStack_78;
  
  lVar4 = param_3;
  if (param_2 <= param_3) {
    lVar4 = param_2;
  }
  if (0 < lVar4) {
    lVar31 = 0;
    lVar30 = 0;
    lVar1 = param_5 * 0x20 + 0x20;
    lVar28 = param_5 * 4;
    puVar27 = (undefined8 *)(param_4 + 0x10);
    puVar24 = (undefined8 *)(param_7 + 0x10);
    uVar25 = param_7;
    lVar26 = lVar4;
    lVar29 = param_4;
    do {
      lVar7 = lVar26;
      if (lVar26 < 2) {
        lVar7 = 1;
      }
      if (7 < lVar7) {
        lVar7 = 8;
      }
      lVar16 = lVar4 - lVar30;
      lVar5 = lVar16;
      if (7 < lVar16) {
        lVar5 = 8;
      }
      if (0 < lVar16) {
        uVar3 = param_7 + lVar31 * 0x20;
        lVar21 = lVar1 * lVar31;
        uVar17 = (ulong)-((uint)param_7 >> 2) & 3;
        lVar16 = 1;
        lVar8 = 0;
        lVar22 = lVar29;
        puVar23 = puVar27;
        do {
          uVar10 = param_4 + lVar21 + lVar28 * lVar8;
          lVar2 = lVar8 + 1;
          fVar33 = (float)param_1 * *(float *)(param_6 + (lVar8 + lVar30) * 4);
          uVar9 = uVar17;
          if (lVar2 <= (long)uVar17) {
            uVar9 = lVar8 + 1;
          }
          if ((param_7 & 3) != 0) {
            uVar9 = lVar8 + 1;
          }
          uVar13 = lVar2 - uVar9;
          uVar6 = uVar13 + 3;
          if ((long)uVar9 <= lVar2) {
            uVar6 = uVar13;
          }
          if (uVar9 != 0) {
            if ((uVar9 < 8) || ((uVar3 < uVar10 + uVar9 * 4 && (uVar10 < uVar3 + uVar9 * 4)))) {
              uVar18 = 0;
            }
            else {
              uVar18 = uVar9 & 0x7ffffffffffffff8;
              uVar12 = uVar18;
              puVar15 = puVar24;
              puVar32 = puVar23;
              do {
                uVar34 = puVar32[-2];
                uVar36 = puVar32[1];
                uVar35 = *puVar32;
                puVar15[-1] = CONCAT44((float)((ulong)puVar32[-1] >> 0x20) * fVar33 +
                                       (float)((ulong)puVar15[-1] >> 0x20),
                                       (float)puVar32[-1] * fVar33 + (float)puVar15[-1]);
                puVar15[-2] = CONCAT44((float)((ulong)uVar34 >> 0x20) * fVar33 +
                                       (float)((ulong)puVar15[-2] >> 0x20),
                                       (float)uVar34 * fVar33 + (float)puVar15[-2]);
                puVar15[1] = CONCAT44((float)((ulong)uVar36 >> 0x20) * fVar33 +
                                      (float)((ulong)puVar15[1] >> 0x20),
                                      (float)uVar36 * fVar33 + (float)puVar15[1]);
                *puVar15 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar33 +
                                    (float)((ulong)*puVar15 >> 0x20),
                                    (float)uVar35 * fVar33 + (float)*puVar15);
                puVar32 = puVar32 + 4;
                puVar15 = puVar15 + 4;
                uVar12 = uVar12 - 8;
              } while (uVar12 != 0);
              if (uVar9 == uVar18) goto LAB_10946d598;
            }
            lVar14 = uVar9 - uVar18;
            pfVar11 = (float *)(uVar25 + uVar18 * 4);
            pfVar19 = (float *)(lVar22 + uVar18 * 4);
            do {
              *pfVar11 = fVar33 * *pfVar19 + *pfVar11;
              lVar14 = lVar14 + -1;
              pfVar11 = pfVar11 + 1;
              pfVar19 = pfVar19 + 1;
            } while (lVar14 != 0);
          }
LAB_10946d598:
          uVar18 = uVar6 & 0xfffffffffffffffc;
          lVar14 = uVar18 + uVar9;
          if (3 < (long)uVar13) {
            lVar20 = uVar9 << 2;
            uVar13 = uVar9;
            do {
              uVar35 = ((undefined8 *)(lVar22 + lVar20))[1];
              uVar34 = *(undefined8 *)(lVar22 + lVar20);
              uVar37 = ((undefined8 *)(uVar25 + lVar20))[1];
              uVar36 = *(undefined8 *)(uVar25 + lVar20);
              ((undefined8 *)(uVar25 + lVar20))[1] =
                   CONCAT44((float)((ulong)uVar37 >> 0x20) + (float)((ulong)uVar35 >> 0x20) * fVar33
                            ,(float)uVar37 + (float)uVar35 * fVar33);
              *(undefined8 *)(uVar25 + lVar20) =
                   CONCAT44((float)((ulong)uVar36 >> 0x20) + (float)((ulong)uVar34 >> 0x20) * fVar33
                            ,(float)uVar36 + (float)uVar34 * fVar33);
              uVar13 = uVar13 + 4;
              lVar20 = lVar20 + 0x10;
            } while ((long)uVar13 < lVar14);
          }
          if (lVar14 <= lVar8) {
            uVar13 = lVar2 - (uVar9 + uVar18);
            if ((7 < uVar13) &&
               ((lVar20 = ((long)uVar6 >> 2) * 0x10 + uVar9 * 4,
                (ulong)(param_4 + 4 + lVar21 + (lVar28 + 4) * lVar8) <= uVar3 + lVar20 ||
                (param_7 + 4 + lVar31 * 0x20 + lVar8 * 4 <= uVar10 + lVar20)))) {
              lVar14 = lVar14 + (uVar13 & 0xfffffffffffffff8);
              uVar9 = (lVar16 - uVar9) - uVar18 & 0xfffffffffffffff8;
              do {
                puVar32 = (undefined8 *)((long)puVar24 + lVar20);
                puVar15 = (undefined8 *)(lVar22 + lVar20);
                uVar34 = *puVar15;
                uVar36 = puVar15[3];
                uVar35 = puVar15[2];
                puVar32[-1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) * fVar33 +
                                       (float)((ulong)puVar32[-1] >> 0x20),
                                       (float)puVar15[1] * fVar33 + (float)puVar32[-1]);
                puVar32[-2] = CONCAT44((float)((ulong)uVar34 >> 0x20) * fVar33 +
                                       (float)((ulong)puVar32[-2] >> 0x20),
                                       (float)uVar34 * fVar33 + (float)puVar32[-2]);
                puVar32[1] = CONCAT44((float)((ulong)uVar36 >> 0x20) * fVar33 +
                                      (float)((ulong)puVar32[1] >> 0x20),
                                      (float)uVar36 * fVar33 + (float)puVar32[1]);
                *puVar32 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar33 +
                                    (float)((ulong)*puVar32 >> 0x20),
                                    (float)uVar35 * fVar33 + (float)*puVar32);
                lVar20 = lVar20 + 0x20;
                uVar9 = uVar9 - 8;
              } while (uVar9 != 0);
              if (uVar13 == (uVar13 & 0xfffffffffffffff8)) goto LAB_10946d4f8;
            }
            do {
              *(float *)(uVar25 + lVar14 * 4) =
                   fVar33 * *(float *)(lVar22 + lVar14 * 4) + *(float *)(uVar25 + lVar14 * 4);
              lVar14 = lVar14 + 1;
            } while (lVar16 != lVar14);
          }
LAB_10946d4f8:
          puVar23 = (undefined8 *)((long)puVar23 + lVar28);
          lVar22 = lVar22 + lVar28;
          lVar16 = lVar16 + 1;
          lVar8 = lVar2;
        } while (lVar2 != lVar7);
      }
      if (lVar30 != 0) {
        FUN_10946d76c(param_1,lVar30,lVar5,param_4 + lVar30 * param_5 * 4,param_5,
                      param_6 + lVar30 * 4,1,param_7);
      }
      lVar30 = lVar30 + 8;
      lVar26 = lVar26 + -8;
      lVar31 = lVar31 + 1;
      puVar27 = puVar27 + param_5 * 4 + 4;
      puVar24 = puVar24 + 4;
      lVar29 = lVar29 + lVar1;
      uVar25 = uVar25 + 0x20;
    } while (lVar30 < lVar4);
  }
  if (param_2 < param_3) {
    alStack_90[2] = param_4 + param_5 * lVar4 * 4;
    alStack_90[0] = param_6 + lVar4 * 4;
    alStack_90[1] = 1;
    lStack_78 = param_5;
    FUN_10946ddac(param_1,lVar4,param_3 - lVar4,alStack_90 + 2,alStack_90,param_7,1);
  }
  return;
}



/* Entry: 10946d76c; end: 10946ddab;  */

void FUN_10946d76c(float param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                  float *param_6,long param_7,long param_8)

{
  ulong uVar1;
  float *pfVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  if ((long)param_3 < 1) {
    return;
  }
  if ((long)param_2 < 0x20) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    uVar3 = 0;
    do {
      puVar4 = (undefined8 *)(param_4 + lVar5);
      fVar43 = *param_6;
      fVar31 = (float)*puVar4 * fVar43 + 0.0;
      fVar32 = (float)((ulong)*puVar4 >> 0x20) * fVar43 + 0.0;
      fVar33 = (float)puVar4[1] * fVar43 + 0.0;
      fVar34 = (float)((ulong)puVar4[1] >> 0x20) * fVar43 + 0.0;
      fVar39 = (float)puVar4[2] * fVar43 + 0.0;
      fVar40 = (float)((ulong)puVar4[2] >> 0x20) * fVar43 + 0.0;
      fVar41 = (float)puVar4[3] * fVar43 + 0.0;
      fVar42 = (float)((ulong)puVar4[3] >> 0x20) * fVar43 + 0.0;
      fVar23 = (float)puVar4[4] * fVar43 + 0.0;
      fVar24 = (float)((ulong)puVar4[4] >> 0x20) * fVar43 + 0.0;
      fVar25 = (float)puVar4[5] * fVar43 + 0.0;
      fVar26 = (float)((ulong)puVar4[5] >> 0x20) * fVar43 + 0.0;
      fVar35 = (float)puVar4[6] * fVar43 + 0.0;
      fVar36 = (float)((ulong)puVar4[6] >> 0x20) * fVar43 + 0.0;
      fVar37 = (float)puVar4[7] * fVar43 + 0.0;
      fVar38 = (float)((ulong)puVar4[7] >> 0x20) * fVar43 + 0.0;
      fVar14 = (float)puVar4[8] * fVar43 + 0.0;
      fVar16 = (float)((ulong)puVar4[8] >> 0x20) * fVar43 + 0.0;
      fVar17 = (float)puVar4[9] * fVar43 + 0.0;
      fVar19 = (float)((ulong)puVar4[9] >> 0x20) * fVar43 + 0.0;
      fVar27 = (float)puVar4[10] * fVar43 + 0.0;
      fVar28 = (float)((ulong)puVar4[10] >> 0x20) * fVar43 + 0.0;
      fVar29 = (float)puVar4[0xb] * fVar43 + 0.0;
      fVar30 = (float)((ulong)puVar4[0xb] >> 0x20) * fVar43 + 0.0;
      fVar10 = (float)puVar4[0xc] * fVar43 + 0.0;
      fVar11 = (float)((ulong)puVar4[0xc] >> 0x20) * fVar43 + 0.0;
      fVar12 = (float)puVar4[0xd] * fVar43 + 0.0;
      fVar13 = (float)((ulong)puVar4[0xd] >> 0x20) * fVar43 + 0.0;
      fVar20 = (float)puVar4[0xe] * fVar43 + 0.0;
      fVar21 = (float)((ulong)puVar4[0xe] >> 0x20) * fVar43 + 0.0;
      fVar22 = (float)puVar4[0xf] * fVar43 + 0.0;
      fVar43 = (float)((ulong)puVar4[0xf] >> 0x20) * fVar43 + 0.0;
      if (param_3 != 1) {
        fVar44 = param_6[param_7];
        puVar4 = (undefined8 *)(param_4 + param_5 * 4 + lVar5);
        fVar31 = fVar31 + (float)*puVar4 * fVar44;
        fVar32 = fVar32 + (float)((ulong)*puVar4 >> 0x20) * fVar44;
        fVar33 = fVar33 + (float)puVar4[1] * fVar44;
        fVar34 = fVar34 + (float)((ulong)puVar4[1] >> 0x20) * fVar44;
        fVar39 = fVar39 + (float)puVar4[2] * fVar44;
        fVar40 = fVar40 + (float)((ulong)puVar4[2] >> 0x20) * fVar44;
        fVar41 = fVar41 + (float)puVar4[3] * fVar44;
        fVar42 = fVar42 + (float)((ulong)puVar4[3] >> 0x20) * fVar44;
        fVar23 = fVar23 + (float)puVar4[4] * fVar44;
        fVar24 = fVar24 + (float)((ulong)puVar4[4] >> 0x20) * fVar44;
        fVar25 = fVar25 + (float)puVar4[5] * fVar44;
        fVar26 = fVar26 + (float)((ulong)puVar4[5] >> 0x20) * fVar44;
        fVar35 = fVar35 + (float)puVar4[6] * fVar44;
        fVar36 = fVar36 + (float)((ulong)puVar4[6] >> 0x20) * fVar44;
        fVar37 = fVar37 + (float)puVar4[7] * fVar44;
        fVar38 = fVar38 + (float)((ulong)puVar4[7] >> 0x20) * fVar44;
        fVar14 = fVar14 + (float)puVar4[8] * fVar44;
        fVar16 = fVar16 + (float)((ulong)puVar4[8] >> 0x20) * fVar44;
        fVar17 = fVar17 + (float)puVar4[9] * fVar44;
        fVar19 = fVar19 + (float)((ulong)puVar4[9] >> 0x20) * fVar44;
        fVar27 = fVar27 + (float)puVar4[10] * fVar44;
        fVar28 = fVar28 + (float)((ulong)puVar4[10] >> 0x20) * fVar44;
        fVar29 = fVar29 + (float)puVar4[0xb] * fVar44;
        fVar30 = fVar30 + (float)((ulong)puVar4[0xb] >> 0x20) * fVar44;
        fVar10 = fVar10 + (float)puVar4[0xc] * fVar44;
        fVar11 = fVar11 + (float)((ulong)puVar4[0xc] >> 0x20) * fVar44;
        fVar12 = fVar12 + (float)puVar4[0xd] * fVar44;
        fVar13 = fVar13 + (float)((ulong)puVar4[0xd] >> 0x20) * fVar44;
        fVar20 = fVar20 + (float)puVar4[0xe] * fVar44;
        fVar21 = fVar21 + (float)((ulong)puVar4[0xe] >> 0x20) * fVar44;
        fVar22 = fVar22 + (float)puVar4[0xf] * fVar44;
        fVar43 = fVar43 + (float)((ulong)puVar4[0xf] >> 0x20) * fVar44;
        if (param_3 != 2) {
          fVar44 = param_6[param_7 * 2];
          puVar4 = (undefined8 *)(param_4 + param_5 * 8 + lVar5);
          fVar31 = fVar31 + (float)*puVar4 * fVar44;
          fVar32 = fVar32 + (float)((ulong)*puVar4 >> 0x20) * fVar44;
          fVar33 = fVar33 + (float)puVar4[1] * fVar44;
          fVar34 = fVar34 + (float)((ulong)puVar4[1] >> 0x20) * fVar44;
          fVar39 = fVar39 + (float)puVar4[2] * fVar44;
          fVar40 = fVar40 + (float)((ulong)puVar4[2] >> 0x20) * fVar44;
          fVar41 = fVar41 + (float)puVar4[3] * fVar44;
          fVar42 = fVar42 + (float)((ulong)puVar4[3] >> 0x20) * fVar44;
          fVar23 = fVar23 + (float)puVar4[4] * fVar44;
          fVar24 = fVar24 + (float)((ulong)puVar4[4] >> 0x20) * fVar44;
          fVar25 = fVar25 + (float)puVar4[5] * fVar44;
          fVar26 = fVar26 + (float)((ulong)puVar4[5] >> 0x20) * fVar44;
          fVar35 = fVar35 + (float)puVar4[6] * fVar44;
          fVar36 = fVar36 + (float)((ulong)puVar4[6] >> 0x20) * fVar44;
          fVar37 = fVar37 + (float)puVar4[7] * fVar44;
          fVar38 = fVar38 + (float)((ulong)puVar4[7] >> 0x20) * fVar44;
          fVar14 = fVar14 + (float)puVar4[8] * fVar44;
          fVar16 = fVar16 + (float)((ulong)puVar4[8] >> 0x20) * fVar44;
          fVar17 = fVar17 + (float)puVar4[9] * fVar44;
          fVar19 = fVar19 + (float)((ulong)puVar4[9] >> 0x20) * fVar44;
          fVar27 = fVar27 + (float)puVar4[10] * fVar44;
          fVar28 = fVar28 + (float)((ulong)puVar4[10] >> 0x20) * fVar44;
          fVar29 = fVar29 + (float)puVar4[0xb] * fVar44;
          fVar30 = fVar30 + (float)((ulong)puVar4[0xb] >> 0x20) * fVar44;
          fVar10 = fVar10 + (float)puVar4[0xc] * fVar44;
          fVar11 = fVar11 + (float)((ulong)puVar4[0xc] >> 0x20) * fVar44;
          fVar12 = fVar12 + (float)puVar4[0xd] * fVar44;
          fVar13 = fVar13 + (float)((ulong)puVar4[0xd] >> 0x20) * fVar44;
          fVar20 = fVar20 + (float)puVar4[0xe] * fVar44;
          fVar21 = fVar21 + (float)((ulong)puVar4[0xe] >> 0x20) * fVar44;
          fVar22 = fVar22 + (float)puVar4[0xf] * fVar44;
          fVar43 = fVar43 + (float)((ulong)puVar4[0xf] >> 0x20) * fVar44;
          if (param_3 != 3) {
            fVar44 = param_6[param_7 * 3];
            puVar4 = (undefined8 *)(param_4 + param_5 * 0xc + lVar5);
            fVar31 = fVar31 + (float)*puVar4 * fVar44;
            fVar32 = fVar32 + (float)((ulong)*puVar4 >> 0x20) * fVar44;
            fVar33 = fVar33 + (float)puVar4[1] * fVar44;
            fVar34 = fVar34 + (float)((ulong)puVar4[1] >> 0x20) * fVar44;
            fVar39 = fVar39 + (float)puVar4[2] * fVar44;
            fVar40 = fVar40 + (float)((ulong)puVar4[2] >> 0x20) * fVar44;
            fVar41 = fVar41 + (float)puVar4[3] * fVar44;
            fVar42 = fVar42 + (float)((ulong)puVar4[3] >> 0x20) * fVar44;
            fVar23 = fVar23 + (float)puVar4[4] * fVar44;
            fVar24 = fVar24 + (float)((ulong)puVar4[4] >> 0x20) * fVar44;
            fVar25 = fVar25 + (float)puVar4[5] * fVar44;
            fVar26 = fVar26 + (float)((ulong)puVar4[5] >> 0x20) * fVar44;
            fVar35 = fVar35 + (float)puVar4[6] * fVar44;
            fVar36 = fVar36 + (float)((ulong)puVar4[6] >> 0x20) * fVar44;
            fVar37 = fVar37 + (float)puVar4[7] * fVar44;
            fVar38 = fVar38 + (float)((ulong)puVar4[7] >> 0x20) * fVar44;
            fVar14 = fVar14 + (float)puVar4[8] * fVar44;
            fVar16 = fVar16 + (float)((ulong)puVar4[8] >> 0x20) * fVar44;
            fVar17 = fVar17 + (float)puVar4[9] * fVar44;
            fVar19 = fVar19 + (float)((ulong)puVar4[9] >> 0x20) * fVar44;
            fVar27 = fVar27 + (float)puVar4[10] * fVar44;
            fVar28 = fVar28 + (float)((ulong)puVar4[10] >> 0x20) * fVar44;
            fVar29 = fVar29 + (float)puVar4[0xb] * fVar44;
            fVar30 = fVar30 + (float)((ulong)puVar4[0xb] >> 0x20) * fVar44;
            fVar10 = fVar10 + (float)puVar4[0xc] * fVar44;
            fVar11 = fVar11 + (float)((ulong)puVar4[0xc] >> 0x20) * fVar44;
            fVar12 = fVar12 + (float)puVar4[0xd] * fVar44;
            fVar13 = fVar13 + (float)((ulong)puVar4[0xd] >> 0x20) * fVar44;
            fVar20 = fVar20 + (float)puVar4[0xe] * fVar44;
            fVar21 = fVar21 + (float)((ulong)puVar4[0xe] >> 0x20) * fVar44;
            fVar22 = fVar22 + (float)puVar4[0xf] * fVar44;
            fVar43 = fVar43 + (float)((ulong)puVar4[0xf] >> 0x20) * fVar44;
            if (param_3 != 4) {
              fVar44 = param_6[param_7 * 4];
              puVar4 = (undefined8 *)(param_4 + param_5 * 0x10 + lVar5);
              fVar31 = fVar31 + (float)*puVar4 * fVar44;
              fVar32 = fVar32 + (float)((ulong)*puVar4 >> 0x20) * fVar44;
              fVar33 = fVar33 + (float)puVar4[1] * fVar44;
              fVar34 = fVar34 + (float)((ulong)puVar4[1] >> 0x20) * fVar44;
              fVar39 = fVar39 + (float)puVar4[2] * fVar44;
              fVar40 = fVar40 + (float)((ulong)puVar4[2] >> 0x20) * fVar44;
              fVar41 = fVar41 + (float)puVar4[3] * fVar44;
              fVar42 = fVar42 + (float)((ulong)puVar4[3] >> 0x20) * fVar44;
              fVar23 = fVar23 + (float)puVar4[4] * fVar44;
              fVar24 = fVar24 + (float)((ulong)puVar4[4] >> 0x20) * fVar44;
              fVar25 = fVar25 + (float)puVar4[5] * fVar44;
              fVar26 = fVar26 + (float)((ulong)puVar4[5] >> 0x20) * fVar44;
              fVar35 = fVar35 + (float)puVar4[6] * fVar44;
              fVar36 = fVar36 + (float)((ulong)puVar4[6] >> 0x20) * fVar44;
              fVar37 = fVar37 + (float)puVar4[7] * fVar44;
              fVar38 = fVar38 + (float)((ulong)puVar4[7] >> 0x20) * fVar44;
              fVar14 = fVar14 + (float)puVar4[8] * fVar44;
              fVar16 = fVar16 + (float)((ulong)puVar4[8] >> 0x20) * fVar44;
              fVar17 = fVar17 + (float)puVar4[9] * fVar44;
              fVar19 = fVar19 + (float)((ulong)puVar4[9] >> 0x20) * fVar44;
              fVar27 = fVar27 + (float)puVar4[10] * fVar44;
              fVar28 = fVar28 + (float)((ulong)puVar4[10] >> 0x20) * fVar44;
              fVar29 = fVar29 + (float)puVar4[0xb] * fVar44;
              fVar30 = fVar30 + (float)((ulong)puVar4[0xb] >> 0x20) * fVar44;
              fVar10 = fVar10 + (float)puVar4[0xc] * fVar44;
              fVar11 = fVar11 + (float)((ulong)puVar4[0xc] >> 0x20) * fVar44;
              fVar12 = fVar12 + (float)puVar4[0xd] * fVar44;
              fVar13 = fVar13 + (float)((ulong)puVar4[0xd] >> 0x20) * fVar44;
              fVar20 = fVar20 + (float)puVar4[0xe] * fVar44;
              fVar21 = fVar21 + (float)((ulong)puVar4[0xe] >> 0x20) * fVar44;
              fVar22 = fVar22 + (float)puVar4[0xf] * fVar44;
              fVar43 = fVar43 + (float)((ulong)puVar4[0xf] >> 0x20) * fVar44;
              if (param_3 != 5) {
                fVar44 = param_6[param_7 * 5];
                puVar4 = (undefined8 *)(param_4 + param_5 * 0x14 + lVar5);
                fVar31 = fVar31 + (float)*puVar4 * fVar44;
                fVar32 = fVar32 + (float)((ulong)*puVar4 >> 0x20) * fVar44;
                fVar33 = fVar33 + (float)puVar4[1] * fVar44;
                fVar34 = fVar34 + (float)((ulong)puVar4[1] >> 0x20) * fVar44;
                fVar39 = fVar39 + (float)puVar4[2] * fVar44;
                fVar40 = fVar40 + (float)((ulong)puVar4[2] >> 0x20) * fVar44;
                fVar41 = fVar41 + (float)puVar4[3] * fVar44;
                fVar42 = fVar42 + (float)((ulong)puVar4[3] >> 0x20) * fVar44;
                fVar23 = fVar23 + (float)puVar4[4] * fVar44;
                fVar24 = fVar24 + (float)((ulong)puVar4[4] >> 0x20) * fVar44;
                fVar25 = fVar25 + (float)puVar4[5] * fVar44;
                fVar26 = fVar26 + (float)((ulong)puVar4[5] >> 0x20) * fVar44;
                fVar35 = fVar35 + (float)puVar4[6] * fVar44;
                fVar36 = fVar36 + (float)((ulong)puVar4[6] >> 0x20) * fVar44;
                fVar37 = fVar37 + (float)puVar4[7] * fVar44;
                fVar38 = fVar38 + (float)((ulong)puVar4[7] >> 0x20) * fVar44;
                fVar14 = fVar14 + (float)puVar4[8] * fVar44;
                fVar16 = fVar16 + (float)((ulong)puVar4[8] >> 0x20) * fVar44;
                fVar17 = fVar17 + (float)puVar4[9] * fVar44;
                fVar19 = fVar19 + (float)((ulong)puVar4[9] >> 0x20) * fVar44;
                fVar27 = fVar27 + (float)puVar4[10] * fVar44;
                fVar28 = fVar28 + (float)((ulong)puVar4[10] >> 0x20) * fVar44;
                fVar29 = fVar29 + (float)puVar4[0xb] * fVar44;
                fVar30 = fVar30 + (float)((ulong)puVar4[0xb] >> 0x20) * fVar44;
                fVar10 = fVar10 + (float)puVar4[0xc] * fVar44;
                fVar11 = fVar11 + (float)((ulong)puVar4[0xc] >> 0x20) * fVar44;
                fVar12 = fVar12 + (float)puVar4[0xd] * fVar44;
                fVar13 = fVar13 + (float)((ulong)puVar4[0xd] >> 0x20) * fVar44;
                fVar20 = fVar20 + (float)puVar4[0xe] * fVar44;
                fVar21 = fVar21 + (float)((ulong)puVar4[0xe] >> 0x20) * fVar44;
                fVar22 = fVar22 + (float)puVar4[0xf] * fVar44;
                fVar43 = fVar43 + (float)((ulong)puVar4[0xf] >> 0x20) * fVar44;
                if (param_3 != 6) {
                  fVar44 = param_6[param_7 * 6];
                  puVar4 = (undefined8 *)(param_4 + param_5 * 0x18 + 0x70 + lVar5);
                  fVar31 = fVar31 + (float)puVar4[-0xe] * fVar44;
                  fVar32 = fVar32 + (float)((ulong)puVar4[-0xe] >> 0x20) * fVar44;
                  fVar33 = fVar33 + (float)puVar4[-0xd] * fVar44;
                  fVar34 = fVar34 + (float)((ulong)puVar4[-0xd] >> 0x20) * fVar44;
                  fVar39 = fVar39 + (float)puVar4[-0xc] * fVar44;
                  fVar40 = fVar40 + (float)((ulong)puVar4[-0xc] >> 0x20) * fVar44;
                  fVar41 = fVar41 + (float)puVar4[-0xb] * fVar44;
                  fVar42 = fVar42 + (float)((ulong)puVar4[-0xb] >> 0x20) * fVar44;
                  fVar23 = fVar23 + (float)puVar4[-10] * fVar44;
                  fVar24 = fVar24 + (float)((ulong)puVar4[-10] >> 0x20) * fVar44;
                  fVar25 = fVar25 + (float)puVar4[-9] * fVar44;
                  fVar26 = fVar26 + (float)((ulong)puVar4[-9] >> 0x20) * fVar44;
                  fVar35 = fVar35 + (float)puVar4[-8] * fVar44;
                  fVar36 = fVar36 + (float)((ulong)puVar4[-8] >> 0x20) * fVar44;
                  fVar37 = fVar37 + (float)puVar4[-7] * fVar44;
                  fVar38 = fVar38 + (float)((ulong)puVar4[-7] >> 0x20) * fVar44;
                  fVar14 = fVar14 + (float)puVar4[-6] * fVar44;
                  fVar16 = fVar16 + (float)((ulong)puVar4[-6] >> 0x20) * fVar44;
                  fVar17 = fVar17 + (float)puVar4[-5] * fVar44;
                  fVar19 = fVar19 + (float)((ulong)puVar4[-5] >> 0x20) * fVar44;
                  fVar27 = fVar27 + (float)puVar4[-4] * fVar44;
                  fVar28 = fVar28 + (float)((ulong)puVar4[-4] >> 0x20) * fVar44;
                  fVar29 = fVar29 + (float)puVar4[-3] * fVar44;
                  fVar30 = fVar30 + (float)((ulong)puVar4[-3] >> 0x20) * fVar44;
                  fVar10 = fVar10 + (float)puVar4[-2] * fVar44;
                  fVar11 = fVar11 + (float)((ulong)puVar4[-2] >> 0x20) * fVar44;
                  fVar12 = fVar12 + (float)puVar4[-1] * fVar44;
                  fVar13 = fVar13 + (float)((ulong)puVar4[-1] >> 0x20) * fVar44;
                  fVar20 = fVar20 + (float)*puVar4 * fVar44;
                  fVar21 = fVar21 + (float)((ulong)*puVar4 >> 0x20) * fVar44;
                  fVar22 = fVar22 + (float)puVar4[1] * fVar44;
                  fVar43 = fVar43 + (float)((ulong)puVar4[1] >> 0x20) * fVar44;
                  if (param_3 != 7) {
                    fVar44 = param_6[param_7 * 7];
                    puVar4 = (undefined8 *)(param_4 + param_5 * 0x1c + 0x70 + lVar5);
                    fVar31 = fVar31 + (float)puVar4[-0xe] * fVar44;
                    fVar32 = fVar32 + (float)((ulong)puVar4[-0xe] >> 0x20) * fVar44;
                    fVar33 = fVar33 + (float)puVar4[-0xd] * fVar44;
                    fVar34 = fVar34 + (float)((ulong)puVar4[-0xd] >> 0x20) * fVar44;
                    fVar39 = fVar39 + (float)puVar4[-0xc] * fVar44;
                    fVar40 = fVar40 + (float)((ulong)puVar4[-0xc] >> 0x20) * fVar44;
                    fVar41 = fVar41 + (float)puVar4[-0xb] * fVar44;
                    fVar42 = fVar42 + (float)((ulong)puVar4[-0xb] >> 0x20) * fVar44;
                    fVar23 = fVar23 + (float)puVar4[-10] * fVar44;
                    fVar24 = fVar24 + (float)((ulong)puVar4[-10] >> 0x20) * fVar44;
                    fVar25 = fVar25 + (float)puVar4[-9] * fVar44;
                    fVar26 = fVar26 + (float)((ulong)puVar4[-9] >> 0x20) * fVar44;
                    fVar35 = fVar35 + (float)puVar4[-8] * fVar44;
                    fVar36 = fVar36 + (float)((ulong)puVar4[-8] >> 0x20) * fVar44;
                    fVar37 = fVar37 + (float)puVar4[-7] * fVar44;
                    fVar38 = fVar38 + (float)((ulong)puVar4[-7] >> 0x20) * fVar44;
                    fVar14 = fVar14 + (float)puVar4[-6] * fVar44;
                    fVar16 = fVar16 + (float)((ulong)puVar4[-6] >> 0x20) * fVar44;
                    fVar17 = fVar17 + (float)puVar4[-5] * fVar44;
                    fVar19 = fVar19 + (float)((ulong)puVar4[-5] >> 0x20) * fVar44;
                    fVar27 = fVar27 + (float)puVar4[-4] * fVar44;
                    fVar28 = fVar28 + (float)((ulong)puVar4[-4] >> 0x20) * fVar44;
                    fVar29 = fVar29 + (float)puVar4[-3] * fVar44;
                    fVar30 = fVar30 + (float)((ulong)puVar4[-3] >> 0x20) * fVar44;
                    fVar10 = fVar10 + (float)puVar4[-2] * fVar44;
                    fVar11 = fVar11 + (float)((ulong)puVar4[-2] >> 0x20) * fVar44;
                    fVar12 = fVar12 + (float)puVar4[-1] * fVar44;
                    fVar13 = fVar13 + (float)((ulong)puVar4[-1] >> 0x20) * fVar44;
                    fVar20 = fVar20 + (float)*puVar4 * fVar44;
                    fVar21 = fVar21 + (float)((ulong)*puVar4 >> 0x20) * fVar44;
                    fVar22 = fVar22 + (float)puVar4[1] * fVar44;
                    fVar43 = fVar43 + (float)((ulong)puVar4[1] >> 0x20) * fVar44;
                  }
                }
              }
            }
          }
        }
      }
      puVar4 = (undefined8 *)(param_8 + 0x70 + lVar5);
      puVar4[-0xd] = CONCAT44((float)((ulong)puVar4[-0xd] >> 0x20) + fVar34 * param_1,
                              (float)puVar4[-0xd] + fVar33 * param_1);
      puVar4[-0xe] = CONCAT44((float)((ulong)puVar4[-0xe] >> 0x20) + fVar32 * param_1,
                              (float)puVar4[-0xe] + fVar31 * param_1);
      puVar4[-0xb] = CONCAT44((float)((ulong)puVar4[-0xb] >> 0x20) + fVar42 * param_1,
                              (float)puVar4[-0xb] + fVar41 * param_1);
      puVar4[-0xc] = CONCAT44((float)((ulong)puVar4[-0xc] >> 0x20) + fVar40 * param_1,
                              (float)puVar4[-0xc] + fVar39 * param_1);
      puVar4[-9] = CONCAT44((float)((ulong)puVar4[-9] >> 0x20) + fVar26 * param_1,
                            (float)puVar4[-9] + fVar25 * param_1);
      puVar4[-10] = CONCAT44((float)((ulong)puVar4[-10] >> 0x20) + fVar24 * param_1,
                             (float)puVar4[-10] + fVar23 * param_1);
      puVar4[-7] = CONCAT44((float)((ulong)puVar4[-7] >> 0x20) + fVar38 * param_1,
                            (float)puVar4[-7] + fVar37 * param_1);
      puVar4[-8] = CONCAT44((float)((ulong)puVar4[-8] >> 0x20) + fVar36 * param_1,
                            (float)puVar4[-8] + fVar35 * param_1);
      puVar4[-5] = CONCAT44((float)((ulong)puVar4[-5] >> 0x20) + fVar19 * param_1,
                            (float)puVar4[-5] + fVar17 * param_1);
      puVar4[-6] = CONCAT44((float)((ulong)puVar4[-6] >> 0x20) + fVar16 * param_1,
                            (float)puVar4[-6] + fVar14 * param_1);
      puVar4[-3] = CONCAT44((float)((ulong)puVar4[-3] >> 0x20) + fVar30 * param_1,
                            (float)puVar4[-3] + fVar29 * param_1);
      puVar4[-4] = CONCAT44((float)((ulong)puVar4[-4] >> 0x20) + fVar28 * param_1,
                            (float)puVar4[-4] + fVar27 * param_1);
      puVar4[-1] = CONCAT44((float)((ulong)puVar4[-1] >> 0x20) + fVar13 * param_1,
                            (float)puVar4[-1] + fVar12 * param_1);
      puVar4[-2] = CONCAT44((float)((ulong)puVar4[-2] >> 0x20) + fVar11 * param_1,
                            (float)puVar4[-2] + fVar10 * param_1);
      puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) + fVar43 * param_1,
                           (float)puVar4[1] + fVar22 * param_1);
      *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + fVar21 * param_1,
                         (float)*puVar4 + fVar20 * param_1);
      uVar3 = uVar3 + 0x20;
      lVar5 = lVar5 + 0x80;
    } while ((long)uVar3 < (long)(param_2 - 0x1f));
  }
  lVar5 = param_5 * 4;
  if ((long)uVar3 < (long)(param_2 - 0xf)) {
    puVar4 = (undefined8 *)(param_4 + uVar3 * 4 + 0x20);
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar43 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar19 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    pfVar9 = param_6;
    uVar6 = param_3;
    do {
      fVar27 = *pfVar9;
      pfVar9 = pfVar9 + param_7;
      fVar20 = fVar20 + fVar27 * (float)puVar4[-4];
      fVar21 = fVar21 + fVar27 * (float)((ulong)puVar4[-4] >> 0x20);
      fVar22 = fVar22 + fVar27 * (float)puVar4[-3];
      fVar43 = fVar43 + fVar27 * (float)((ulong)puVar4[-3] >> 0x20);
      fVar23 = fVar23 + fVar27 * (float)puVar4[-2];
      fVar24 = fVar24 + fVar27 * (float)((ulong)puVar4[-2] >> 0x20);
      fVar25 = fVar25 + fVar27 * (float)puVar4[-1];
      fVar26 = fVar26 + fVar27 * (float)((ulong)puVar4[-1] >> 0x20);
      fVar14 = fVar14 + fVar27 * (float)*puVar4;
      fVar16 = fVar16 + fVar27 * (float)((ulong)*puVar4 >> 0x20);
      fVar17 = fVar17 + fVar27 * (float)puVar4[1];
      fVar19 = fVar19 + fVar27 * (float)((ulong)puVar4[1] >> 0x20);
      fVar10 = fVar10 + fVar27 * (float)puVar4[2];
      fVar11 = fVar11 + fVar27 * (float)((ulong)puVar4[2] >> 0x20);
      fVar12 = fVar12 + fVar27 * (float)puVar4[3];
      fVar13 = fVar13 + fVar27 * (float)((ulong)puVar4[3] >> 0x20);
      puVar4 = (undefined8 *)((long)puVar4 + lVar5);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar4 = (undefined8 *)(param_8 + uVar3 * 4);
    puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) + fVar43 * param_1,
                         (float)puVar4[1] + fVar22 * param_1);
    *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + fVar21 * param_1,
                       (float)*puVar4 + fVar20 * param_1);
    puVar4[3] = CONCAT44((float)((ulong)puVar4[3] >> 0x20) + fVar26 * param_1,
                         (float)puVar4[3] + fVar25 * param_1);
    puVar4[2] = CONCAT44((float)((ulong)puVar4[2] >> 0x20) + fVar24 * param_1,
                         (float)puVar4[2] + fVar23 * param_1);
    puVar4[5] = CONCAT44((float)((ulong)puVar4[5] >> 0x20) + fVar19 * param_1,
                         (float)puVar4[5] + fVar17 * param_1);
    puVar4[4] = CONCAT44((float)((ulong)puVar4[4] >> 0x20) + fVar16 * param_1,
                         (float)puVar4[4] + fVar14 * param_1);
    puVar4[7] = CONCAT44((float)((ulong)puVar4[7] >> 0x20) + fVar13 * param_1,
                         (float)puVar4[7] + fVar12 * param_1);
    puVar4[6] = CONCAT44((float)((ulong)puVar4[6] >> 0x20) + fVar11 * param_1,
                         (float)puVar4[6] + fVar10 * param_1);
    uVar3 = uVar3 | 0x10;
    if ((long)(param_2 - 0xb) <= (long)uVar3) goto LAB_10946da94;
LAB_10946db3c:
    puVar4 = (undefined8 *)(param_4 + uVar3 * 4 + 0x20);
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar43 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar19 = 0.0;
    pfVar9 = param_6;
    uVar6 = param_3;
    do {
      fVar23 = *pfVar9;
      pfVar9 = pfVar9 + param_7;
      fVar10 = fVar10 + fVar23 * (float)puVar4[-4];
      fVar11 = fVar11 + fVar23 * (float)((ulong)puVar4[-4] >> 0x20);
      fVar12 = fVar12 + fVar23 * (float)puVar4[-3];
      fVar13 = fVar13 + fVar23 * (float)((ulong)puVar4[-3] >> 0x20);
      fVar20 = fVar20 + fVar23 * (float)puVar4[-2];
      fVar21 = fVar21 + fVar23 * (float)((ulong)puVar4[-2] >> 0x20);
      fVar22 = fVar22 + fVar23 * (float)puVar4[-1];
      fVar43 = fVar43 + fVar23 * (float)((ulong)puVar4[-1] >> 0x20);
      fVar14 = fVar14 + fVar23 * (float)*puVar4;
      fVar16 = fVar16 + fVar23 * (float)((ulong)*puVar4 >> 0x20);
      fVar17 = fVar17 + fVar23 * (float)puVar4[1];
      fVar19 = fVar19 + fVar23 * (float)((ulong)puVar4[1] >> 0x20);
      puVar4 = (undefined8 *)((long)puVar4 + lVar5);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar4 = (undefined8 *)(param_8 + uVar3 * 4);
    puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) + fVar13 * param_1,
                         (float)puVar4[1] + fVar12 * param_1);
    *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + fVar11 * param_1,
                       (float)*puVar4 + fVar10 * param_1);
    puVar4[3] = CONCAT44((float)((ulong)puVar4[3] >> 0x20) + fVar43 * param_1,
                         (float)puVar4[3] + fVar22 * param_1);
    puVar4[2] = CONCAT44((float)((ulong)puVar4[2] >> 0x20) + fVar21 * param_1,
                         (float)puVar4[2] + fVar20 * param_1);
    puVar4[5] = CONCAT44((float)((ulong)puVar4[5] >> 0x20) + fVar19 * param_1,
                         (float)puVar4[5] + fVar17 * param_1);
    puVar4[4] = CONCAT44((float)((ulong)puVar4[4] >> 0x20) + fVar16 * param_1,
                         (float)puVar4[4] + fVar14 * param_1);
    uVar3 = uVar3 + 0xc;
    if ((long)(param_2 - 7) <= (long)uVar3) goto LAB_10946daa0;
LAB_10946dbac:
    puVar4 = (undefined8 *)(param_4 + uVar3 * 4 + 0x10);
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar19 = 0.0;
    pfVar9 = param_6;
    uVar6 = param_3;
    do {
      fVar20 = *pfVar9;
      pfVar9 = pfVar9 + param_7;
      fVar10 = fVar10 + fVar20 * (float)puVar4[-2];
      fVar11 = fVar11 + fVar20 * (float)((ulong)puVar4[-2] >> 0x20);
      fVar12 = fVar12 + fVar20 * (float)puVar4[-1];
      fVar13 = fVar13 + fVar20 * (float)((ulong)puVar4[-1] >> 0x20);
      fVar14 = fVar14 + fVar20 * (float)*puVar4;
      fVar16 = fVar16 + fVar20 * (float)((ulong)*puVar4 >> 0x20);
      fVar17 = fVar17 + fVar20 * (float)puVar4[1];
      fVar19 = fVar19 + fVar20 * (float)((ulong)puVar4[1] >> 0x20);
      puVar4 = (undefined8 *)((long)puVar4 + lVar5);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar4 = (undefined8 *)(param_8 + uVar3 * 4);
    puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) + fVar13 * param_1,
                         (float)puVar4[1] + fVar12 * param_1);
    *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + fVar11 * param_1,
                       (float)*puVar4 + fVar10 * param_1);
    puVar4[3] = CONCAT44((float)((ulong)puVar4[3] >> 0x20) + fVar19 * param_1,
                         (float)puVar4[3] + fVar17 * param_1);
    puVar4[2] = CONCAT44((float)((ulong)puVar4[2] >> 0x20) + fVar16 * param_1,
                         (float)puVar4[2] + fVar14 * param_1);
    uVar3 = uVar3 + 8;
    if ((long)(param_2 - 3) <= (long)uVar3) goto LAB_10946daac;
LAB_10946dc04:
    puVar4 = (undefined8 *)(param_4 + uVar3 * 4);
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    pfVar9 = param_6;
    uVar6 = param_3;
    do {
      fVar14 = *pfVar9;
      fVar10 = fVar10 + (float)*puVar4 * fVar14;
      fVar11 = fVar11 + (float)((ulong)*puVar4 >> 0x20) * fVar14;
      fVar12 = fVar12 + (float)puVar4[1] * fVar14;
      fVar13 = fVar13 + (float)((ulong)puVar4[1] >> 0x20) * fVar14;
      puVar4 = (undefined8 *)((long)puVar4 + lVar5);
      pfVar9 = pfVar9 + param_7;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar4 = (undefined8 *)(param_8 + uVar3 * 4);
    uVar18 = puVar4[1];
    uVar15 = *puVar4;
    puVar4 = (undefined8 *)(param_8 + uVar3 * 4);
    puVar4[1] = CONCAT44((float)((ulong)uVar18 >> 0x20) + fVar13 * param_1,
                         (float)uVar18 + fVar12 * param_1);
    *puVar4 = CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar11 * param_1,
                       (float)uVar15 + fVar10 * param_1);
    uVar3 = uVar3 + 4;
    if ((long)(param_2 - 1) <= (long)uVar3) goto joined_r0x00010946dc90;
  }
  else {
    if ((long)uVar3 < (long)(param_2 - 0xb)) goto LAB_10946db3c;
LAB_10946da94:
    if ((long)uVar3 < (long)(param_2 - 7)) goto LAB_10946dbac;
LAB_10946daa0:
    if ((long)uVar3 < (long)(param_2 - 3)) goto LAB_10946dc04;
LAB_10946daac:
    if ((long)(param_2 - 1) <= (long)uVar3) goto joined_r0x00010946dc90;
  }
  puVar4 = (undefined8 *)(param_4 + uVar3 * 4);
  fVar10 = 0.0;
  fVar11 = 0.0;
  pfVar9 = param_6;
  uVar6 = param_3;
  do {
    fVar10 = fVar10 + (float)*puVar4 * *pfVar9;
    fVar11 = fVar11 + (float)((ulong)*puVar4 >> 0x20) * *pfVar9;
    puVar4 = (undefined8 *)((long)puVar4 + lVar5);
    pfVar9 = pfVar9 + param_7;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  uVar15 = *(undefined8 *)(param_8 + uVar3 * 4);
  *(ulong *)(param_8 + uVar3 * 4) =
       CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar11 * param_1,(float)uVar15 + fVar10 * param_1);
  uVar3 = uVar3 + 2;
joined_r0x00010946dc90:
  if ((long)uVar3 < (long)param_2) {
    uVar6 = param_3 & 0x7ffffffffffffff8;
    param_4 = param_4 + uVar3 * 4;
    puVar4 = (undefined8 *)(param_4 + 0x10);
    do {
      if (param_3 < 8 || (param_5 != 1 || param_7 != 1)) {
        fVar10 = 0.0;
        uVar1 = 0;
LAB_10946dd64:
        lVar8 = param_3 - uVar1;
        pfVar9 = (float *)((long)param_6 + param_7 * 4 * uVar1);
        pfVar2 = (float *)(param_4 + lVar5 * uVar1);
        do {
          fVar10 = fVar10 + *pfVar2 * *pfVar9;
          pfVar9 = pfVar9 + param_7;
          pfVar2 = pfVar2 + param_5;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else {
        fVar10 = 0.0;
        uVar1 = uVar6;
        puVar7 = puVar4;
        pfVar9 = param_6 + 4;
        do {
          fVar10 = fVar10 + (float)puVar7[-2] * (float)*(undefined8 *)(pfVar9 + -4) +
                   (float)((ulong)puVar7[-2] >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20) +
                   (float)puVar7[-1] * (float)*(undefined8 *)(pfVar9 + -2) +
                   (float)((ulong)puVar7[-1] >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20) +
                   (float)*puVar7 * (float)*(undefined8 *)pfVar9 +
                   (float)((ulong)*puVar7 >> 0x20) * (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) +
                   (float)puVar7[1] * (float)*(undefined8 *)(pfVar9 + 2) +
                   (float)((ulong)puVar7[1] >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
          pfVar9 = pfVar9 + 8;
          puVar7 = puVar7 + 4;
          uVar1 = uVar1 - 8;
        } while (uVar1 != 0);
        uVar1 = uVar6;
        if (param_3 != uVar6) goto LAB_10946dd64;
      }
      *(float *)(param_8 + uVar3 * 4) = *(float *)(param_8 + uVar3 * 4) + fVar10 * param_1;
      uVar3 = uVar3 + 1;
      puVar4 = (undefined8 *)((long)puVar4 + 4);
      param_4 = param_4 + 4;
    } while (uVar3 != param_2);
  }
  return;
}



/* Entry: 10946ddac; end: 10946e35f;  */

void FUN_10946ddac(float param_1,ulong param_2,long param_3,long *param_4,long *param_5,long param_6
                  )

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined8 uVar37;
  float fVar39;
  float fVar41;
  undefined8 uVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  long lStack_68;
  
  uVar11 = param_4[1];
  lVar23 = 0x10;
  if (0x7c < (uVar11 >> 6 & 0xffffffffffffff)) {
    lVar23 = 4;
  }
  lVar2 = param_3;
  if (0x7f < param_3) {
    lVar2 = lVar23;
  }
  if (0 < param_3) {
    lStack_68 = 0;
    lVar19 = 0;
    lVar20 = 0;
    lVar28 = *param_4;
    lVar10 = uVar11 * 4;
    lVar18 = lVar2 * 4;
    puVar22 = (undefined8 *)(lVar28 + 0x40);
    lVar12 = lVar2 * uVar11 * 4;
    lVar23 = lVar28 + 0x10;
    lVar24 = 1;
    lVar25 = 0x10;
    lVar27 = lVar2;
    lVar29 = lVar28;
    lVar30 = 0;
    do {
      lVar3 = param_3;
      if (lVar27 <= param_3) {
        lVar3 = lVar27;
      }
      if (lVar3 <= lVar24) {
        lVar3 = lVar24;
      }
      lVar1 = lVar2 + lVar30;
      lVar4 = param_3;
      if (lVar1 <= param_3) {
        lVar4 = lVar1;
      }
      lVar17 = lVar4;
      if (lVar4 <= lVar30 + 1) {
        lVar17 = lVar30 + 1;
      }
      if ((long)param_2 < 0x20) {
        uVar31 = 0;
        if (0 < (long)(param_2 - 0xf)) goto LAB_10946e008;
      }
      else {
        uVar31 = 0;
        puVar7 = puVar22;
        do {
          fVar50 = 0.0;
          fVar51 = 0.0;
          fVar52 = 0.0;
          fVar53 = 0.0;
          fVar62 = 0.0;
          fVar63 = 0.0;
          fVar64 = 0.0;
          fVar65 = 0.0;
          pfVar14 = (float *)(*param_5 + lVar19 * param_5[1]);
          fVar58 = 0.0;
          fVar59 = 0.0;
          fVar60 = 0.0;
          fVar61 = 0.0;
          fVar54 = 0.0;
          fVar55 = 0.0;
          fVar56 = 0.0;
          fVar57 = 0.0;
          fVar46 = 0.0;
          fVar47 = 0.0;
          fVar48 = 0.0;
          fVar49 = 0.0;
          fVar42 = 0.0;
          fVar43 = 0.0;
          fVar44 = 0.0;
          fVar45 = 0.0;
          fVar36 = 0.0;
          fVar38 = 0.0;
          fVar39 = 0.0;
          fVar41 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
          lVar6 = lVar30;
          puVar8 = puVar7;
          do {
            fVar5 = *pfVar14;
            pfVar14 = pfVar14 + param_5[1];
            fVar50 = fVar50 + fVar5 * (float)puVar8[-8];
            fVar51 = fVar51 + fVar5 * (float)((ulong)puVar8[-8] >> 0x20);
            fVar52 = fVar52 + fVar5 * (float)puVar8[-7];
            fVar53 = fVar53 + fVar5 * (float)((ulong)puVar8[-7] >> 0x20);
            fVar62 = fVar62 + fVar5 * (float)puVar8[-6];
            fVar63 = fVar63 + fVar5 * (float)((ulong)puVar8[-6] >> 0x20);
            fVar64 = fVar64 + fVar5 * (float)puVar8[-5];
            fVar65 = fVar65 + fVar5 * (float)((ulong)puVar8[-5] >> 0x20);
            fVar58 = fVar58 + fVar5 * (float)puVar8[-4];
            fVar59 = fVar59 + fVar5 * (float)((ulong)puVar8[-4] >> 0x20);
            fVar60 = fVar60 + fVar5 * (float)puVar8[-3];
            fVar61 = fVar61 + fVar5 * (float)((ulong)puVar8[-3] >> 0x20);
            fVar54 = fVar54 + fVar5 * (float)puVar8[-2];
            fVar55 = fVar55 + fVar5 * (float)((ulong)puVar8[-2] >> 0x20);
            fVar56 = fVar56 + fVar5 * (float)puVar8[-1];
            fVar57 = fVar57 + fVar5 * (float)((ulong)puVar8[-1] >> 0x20);
            fVar46 = fVar46 + fVar5 * (float)*puVar8;
            fVar47 = fVar47 + fVar5 * (float)((ulong)*puVar8 >> 0x20);
            fVar48 = fVar48 + fVar5 * (float)puVar8[1];
            fVar49 = fVar49 + fVar5 * (float)((ulong)puVar8[1] >> 0x20);
            fVar42 = fVar42 + fVar5 * (float)puVar8[2];
            fVar43 = fVar43 + fVar5 * (float)((ulong)puVar8[2] >> 0x20);
            fVar44 = fVar44 + fVar5 * (float)puVar8[3];
            fVar45 = fVar45 + fVar5 * (float)((ulong)puVar8[3] >> 0x20);
            fVar36 = fVar36 + fVar5 * (float)puVar8[4];
            fVar38 = fVar38 + fVar5 * (float)((ulong)puVar8[4] >> 0x20);
            fVar39 = fVar39 + fVar5 * (float)puVar8[5];
            fVar41 = fVar41 + fVar5 * (float)((ulong)puVar8[5] >> 0x20);
            fVar32 = fVar32 + fVar5 * (float)puVar8[6];
            fVar33 = fVar33 + fVar5 * (float)((ulong)puVar8[6] >> 0x20);
            fVar34 = fVar34 + fVar5 * (float)puVar8[7];
            fVar35 = fVar35 + fVar5 * (float)((ulong)puVar8[7] >> 0x20);
            lVar6 = lVar6 + 1;
            puVar8 = (undefined8 *)((long)puVar8 + lVar10);
          } while (lVar6 < lVar4);
          puVar8 = (undefined8 *)(param_6 + uVar31 * 4);
          puVar8[1] = CONCAT44((float)((ulong)puVar8[1] >> 0x20) + fVar53 * param_1,
                               (float)puVar8[1] + fVar52 * param_1);
          *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) + fVar51 * param_1,
                             (float)*puVar8 + fVar50 * param_1);
          puVar8[3] = CONCAT44((float)((ulong)puVar8[3] >> 0x20) + fVar65 * param_1,
                               (float)puVar8[3] + fVar64 * param_1);
          puVar8[2] = CONCAT44((float)((ulong)puVar8[2] >> 0x20) + fVar63 * param_1,
                               (float)puVar8[2] + fVar62 * param_1);
          puVar8[5] = CONCAT44((float)((ulong)puVar8[5] >> 0x20) + fVar61 * param_1,
                               (float)puVar8[5] + fVar60 * param_1);
          puVar8[4] = CONCAT44((float)((ulong)puVar8[4] >> 0x20) + fVar59 * param_1,
                               (float)puVar8[4] + fVar58 * param_1);
          puVar8[7] = CONCAT44((float)((ulong)puVar8[7] >> 0x20) + fVar57 * param_1,
                               (float)puVar8[7] + fVar56 * param_1);
          puVar8[6] = CONCAT44((float)((ulong)puVar8[6] >> 0x20) + fVar55 * param_1,
                               (float)puVar8[6] + fVar54 * param_1);
          puVar8[9] = CONCAT44((float)((ulong)puVar8[9] >> 0x20) + fVar49 * param_1,
                               (float)puVar8[9] + fVar48 * param_1);
          puVar8[8] = CONCAT44((float)((ulong)puVar8[8] >> 0x20) + fVar47 * param_1,
                               (float)puVar8[8] + fVar46 * param_1);
          puVar8[0xb] = CONCAT44((float)((ulong)puVar8[0xb] >> 0x20) + fVar45 * param_1,
                                 (float)puVar8[0xb] + fVar44 * param_1);
          puVar8[10] = CONCAT44((float)((ulong)puVar8[10] >> 0x20) + fVar43 * param_1,
                                (float)puVar8[10] + fVar42 * param_1);
          puVar8[0xd] = CONCAT44((float)((ulong)puVar8[0xd] >> 0x20) + fVar41 * param_1,
                                 (float)puVar8[0xd] + fVar39 * param_1);
          puVar8[0xc] = CONCAT44((float)((ulong)puVar8[0xc] >> 0x20) + fVar38 * param_1,
                                 (float)puVar8[0xc] + fVar36 * param_1);
          puVar8[0xf] = CONCAT44((float)((ulong)puVar8[0xf] >> 0x20) + fVar35 * param_1,
                                 (float)puVar8[0xf] + fVar34 * param_1);
          puVar8[0xe] = CONCAT44((float)((ulong)puVar8[0xe] >> 0x20) + fVar33 * param_1,
                                 (float)puVar8[0xe] + fVar32 * param_1);
          uVar31 = uVar31 + 0x20;
          puVar7 = puVar7 + 0x10;
        } while ((long)uVar31 < (long)(param_2 - 0x1f));
        if ((long)uVar31 < (long)(param_2 - 0xf)) {
LAB_10946e008:
          pfVar14 = (float *)(*param_5 + param_5[1] * lVar19);
          lVar15 = uVar31 << 2;
          fVar42 = 0.0;
          fVar43 = 0.0;
          fVar44 = 0.0;
          fVar45 = 0.0;
          fVar46 = 0.0;
          fVar47 = 0.0;
          fVar48 = 0.0;
          fVar49 = 0.0;
          fVar36 = 0.0;
          fVar38 = 0.0;
          fVar39 = 0.0;
          fVar41 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
          lVar6 = lVar30;
          do {
            fVar50 = *pfVar14;
            pfVar14 = pfVar14 + param_5[1];
            puVar7 = (undefined8 *)(lVar29 + lVar15);
            fVar42 = fVar42 + fVar50 * (float)*puVar7;
            fVar43 = fVar43 + fVar50 * (float)((ulong)*puVar7 >> 0x20);
            fVar44 = fVar44 + fVar50 * (float)puVar7[1];
            fVar45 = fVar45 + fVar50 * (float)((ulong)puVar7[1] >> 0x20);
            fVar46 = fVar46 + fVar50 * (float)puVar7[2];
            fVar47 = fVar47 + fVar50 * (float)((ulong)puVar7[2] >> 0x20);
            fVar48 = fVar48 + fVar50 * (float)puVar7[3];
            fVar49 = fVar49 + fVar50 * (float)((ulong)puVar7[3] >> 0x20);
            fVar36 = fVar36 + fVar50 * (float)puVar7[4];
            fVar38 = fVar38 + fVar50 * (float)((ulong)puVar7[4] >> 0x20);
            fVar39 = fVar39 + fVar50 * (float)puVar7[5];
            fVar41 = fVar41 + fVar50 * (float)((ulong)puVar7[5] >> 0x20);
            fVar32 = fVar32 + fVar50 * (float)puVar7[6];
            fVar33 = fVar33 + fVar50 * (float)((ulong)puVar7[6] >> 0x20);
            fVar34 = fVar34 + fVar50 * (float)puVar7[7];
            fVar35 = fVar35 + fVar50 * (float)((ulong)puVar7[7] >> 0x20);
            lVar6 = lVar6 + 1;
            lVar15 = lVar15 + lVar10;
          } while (lVar6 < lVar4);
          puVar7 = (undefined8 *)(param_6 + uVar31 * 4);
          puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + fVar45 * param_1,
                               (float)puVar7[1] + fVar44 * param_1);
          *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar43 * param_1,
                             (float)*puVar7 + fVar42 * param_1);
          puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) + fVar49 * param_1,
                               (float)puVar7[3] + fVar48 * param_1);
          puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) + fVar47 * param_1,
                               (float)puVar7[2] + fVar46 * param_1);
          puVar7[5] = CONCAT44((float)((ulong)puVar7[5] >> 0x20) + fVar41 * param_1,
                               (float)puVar7[5] + fVar39 * param_1);
          puVar7[4] = CONCAT44((float)((ulong)puVar7[4] >> 0x20) + fVar38 * param_1,
                               (float)puVar7[4] + fVar36 * param_1);
          puVar7[7] = CONCAT44((float)((ulong)puVar7[7] >> 0x20) + fVar35 * param_1,
                               (float)puVar7[7] + fVar34 * param_1);
          puVar7[6] = CONCAT44((float)((ulong)puVar7[6] >> 0x20) + fVar33 * param_1,
                               (float)puVar7[6] + fVar32 * param_1);
          uVar31 = uVar31 | 0x10;
        }
      }
      if ((long)uVar31 < (long)(param_2 - 0xb)) {
        lVar15 = uVar31 << 2;
        pfVar14 = (float *)(*param_5 + param_5[1] * lVar19);
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar44 = 0.0;
        fVar45 = 0.0;
        fVar36 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar41 = 0.0;
        lVar6 = lVar30;
        do {
          fVar46 = *pfVar14;
          pfVar14 = pfVar14 + param_5[1];
          puVar7 = (undefined8 *)(lVar29 + lVar15);
          fVar32 = fVar32 + fVar46 * (float)*puVar7;
          fVar33 = fVar33 + fVar46 * (float)((ulong)*puVar7 >> 0x20);
          fVar34 = fVar34 + fVar46 * (float)puVar7[1];
          fVar35 = fVar35 + fVar46 * (float)((ulong)puVar7[1] >> 0x20);
          fVar42 = fVar42 + fVar46 * (float)puVar7[2];
          fVar43 = fVar43 + fVar46 * (float)((ulong)puVar7[2] >> 0x20);
          fVar44 = fVar44 + fVar46 * (float)puVar7[3];
          fVar45 = fVar45 + fVar46 * (float)((ulong)puVar7[3] >> 0x20);
          fVar36 = fVar36 + fVar46 * (float)puVar7[4];
          fVar38 = fVar38 + fVar46 * (float)((ulong)puVar7[4] >> 0x20);
          fVar39 = fVar39 + fVar46 * (float)puVar7[5];
          fVar41 = fVar41 + fVar46 * (float)((ulong)puVar7[5] >> 0x20);
          lVar6 = lVar6 + 1;
          lVar15 = lVar15 + lVar10;
        } while (lVar6 < lVar4);
        puVar7 = (undefined8 *)(param_6 + uVar31 * 4);
        puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + fVar35 * param_1,
                             (float)puVar7[1] + fVar34 * param_1);
        *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar33 * param_1,
                           (float)*puVar7 + fVar32 * param_1);
        puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) + fVar45 * param_1,
                             (float)puVar7[3] + fVar44 * param_1);
        puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) + fVar43 * param_1,
                             (float)puVar7[2] + fVar42 * param_1);
        puVar7[5] = CONCAT44((float)((ulong)puVar7[5] >> 0x20) + fVar41 * param_1,
                             (float)puVar7[5] + fVar39 * param_1);
        puVar7[4] = CONCAT44((float)((ulong)puVar7[4] >> 0x20) + fVar38 * param_1,
                             (float)puVar7[4] + fVar36 * param_1);
        uVar31 = uVar31 + 0xc;
      }
      if ((long)uVar31 < (long)(param_2 - 7)) {
        lVar15 = uVar31 << 2;
        pfVar14 = (float *)(*param_5 + param_5[1] * lVar19);
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar41 = 0.0;
        lVar6 = lVar30;
        do {
          fVar42 = *pfVar14;
          pfVar14 = pfVar14 + param_5[1];
          puVar7 = (undefined8 *)(lVar29 + lVar15);
          fVar32 = fVar32 + fVar42 * (float)*puVar7;
          fVar33 = fVar33 + fVar42 * (float)((ulong)*puVar7 >> 0x20);
          fVar34 = fVar34 + fVar42 * (float)puVar7[1];
          fVar35 = fVar35 + fVar42 * (float)((ulong)puVar7[1] >> 0x20);
          fVar36 = fVar36 + fVar42 * (float)puVar7[2];
          fVar38 = fVar38 + fVar42 * (float)((ulong)puVar7[2] >> 0x20);
          fVar39 = fVar39 + fVar42 * (float)puVar7[3];
          fVar41 = fVar41 + fVar42 * (float)((ulong)puVar7[3] >> 0x20);
          lVar6 = lVar6 + 1;
          lVar15 = lVar15 + lVar10;
        } while (lVar6 < lVar4);
        puVar7 = (undefined8 *)(param_6 + uVar31 * 4);
        puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + fVar35 * param_1,
                             (float)puVar7[1] + fVar34 * param_1);
        *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar33 * param_1,
                           (float)*puVar7 + fVar32 * param_1);
        puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) + fVar41 * param_1,
                             (float)puVar7[3] + fVar39 * param_1);
        puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) + fVar38 * param_1,
                             (float)puVar7[2] + fVar36 * param_1);
        uVar31 = uVar31 + 8;
      }
      if ((long)uVar31 < (long)(param_2 - 3)) {
        lVar16 = uVar31 * 4;
        pfVar14 = (float *)(*param_5 + param_5[1] * lVar19);
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        lVar6 = lVar30;
        lVar15 = lVar16;
        do {
          uVar40 = ((undefined8 *)(lVar29 + lVar15))[1];
          uVar37 = *(undefined8 *)(lVar29 + lVar15);
          fVar36 = *pfVar14;
          fVar32 = fVar32 + (float)uVar37 * fVar36;
          fVar33 = fVar33 + (float)((ulong)uVar37 >> 0x20) * fVar36;
          fVar34 = fVar34 + (float)uVar40 * fVar36;
          fVar35 = fVar35 + (float)((ulong)uVar40 >> 0x20) * fVar36;
          lVar6 = lVar6 + 1;
          lVar15 = lVar15 + lVar10;
          pfVar14 = pfVar14 + param_5[1];
        } while (lVar6 < lVar4);
        uVar40 = ((undefined8 *)(param_6 + lVar16))[1];
        uVar37 = *(undefined8 *)(param_6 + lVar16);
        ((undefined8 *)(param_6 + lVar16))[1] =
             CONCAT44((float)((ulong)uVar40 >> 0x20) + fVar35 * param_1,
                      (float)uVar40 + fVar34 * param_1);
        *(undefined8 *)(param_6 + lVar16) =
             CONCAT44((float)((ulong)uVar37 >> 0x20) + fVar33 * param_1,
                      (float)uVar37 + fVar32 * param_1);
        uVar31 = uVar31 + 4;
      }
      if ((long)uVar31 < (long)(param_2 - 1)) {
        lVar16 = uVar31 * 4;
        pfVar14 = (float *)(*param_5 + param_5[1] * lVar19);
        fVar32 = 0.0;
        fVar33 = 0.0;
        lVar6 = lVar30;
        lVar15 = lVar16;
        do {
          fVar32 = fVar32 + (float)*(undefined8 *)(lVar29 + lVar15) * *pfVar14;
          fVar33 = fVar33 + (float)((ulong)*(undefined8 *)(lVar29 + lVar15) >> 0x20) * *pfVar14;
          lVar6 = lVar6 + 1;
          lVar15 = lVar15 + lVar10;
          pfVar14 = pfVar14 + param_5[1];
        } while (lVar6 < lVar4);
        *(ulong *)(param_6 + lVar16) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_6 + lVar16) >> 0x20) + fVar33 * param_1,
                      (float)*(undefined8 *)(param_6 + lVar16) + fVar32 * param_1);
        uVar31 = uVar31 + 2;
      }
      if ((long)uVar31 < (long)param_2) {
        uVar13 = lVar17 - lVar2 * lVar20;
        lVar6 = *param_5;
        lVar15 = param_5[1];
        puVar7 = (undefined8 *)(lVar23 + uVar31 * 4);
        lVar17 = lVar28 + uVar31 * 4;
        do {
          fVar32 = 0.0;
          puVar8 = puVar7;
          uVar21 = lVar3 + lStack_68 & 0xfffffffffffffff8;
          lVar16 = lVar30;
          puVar26 = (undefined8 *)(lVar6 + lVar25);
          if (uVar13 < 8 || (uVar11 != 1 || lVar15 != 1)) {
LAB_10946e310:
            pfVar14 = (float *)(lVar6 + lVar15 * 4 * lVar16);
            pfVar9 = (float *)(lVar17 + lVar10 * lVar16);
            do {
              fVar32 = fVar32 + *pfVar9 * *pfVar14;
              lVar16 = lVar16 + 1;
              pfVar14 = pfVar14 + lVar15;
              pfVar9 = pfVar9 + uVar11;
            } while (lVar16 < lVar4);
          }
          else {
            do {
              fVar32 = fVar32 + (float)puVar8[-2] * (float)puVar26[-2] +
                       (float)((ulong)puVar8[-2] >> 0x20) * (float)((ulong)puVar26[-2] >> 0x20) +
                       (float)puVar8[-1] * (float)puVar26[-1] +
                       (float)((ulong)puVar8[-1] >> 0x20) * (float)((ulong)puVar26[-1] >> 0x20) +
                       (float)*puVar8 * (float)*puVar26 +
                       (float)((ulong)*puVar8 >> 0x20) * (float)((ulong)*puVar26 >> 0x20) +
                       (float)puVar8[1] * (float)puVar26[1] +
                       (float)((ulong)puVar8[1] >> 0x20) * (float)((ulong)puVar26[1] >> 0x20);
              uVar21 = uVar21 - 8;
              puVar8 = puVar8 + 4;
              puVar26 = puVar26 + 4;
            } while (uVar21 != 0);
            lVar16 = lVar30 + (uVar13 & 0xfffffffffffffff8);
            if (uVar13 != (uVar13 & 0xfffffffffffffff8)) goto LAB_10946e310;
          }
          *(float *)(param_6 + uVar31 * 4) = *(float *)(param_6 + uVar31 * 4) + fVar32 * param_1;
          uVar31 = uVar31 + 1;
          puVar7 = (undefined8 *)((long)puVar7 + 4);
          lVar17 = lVar17 + 4;
        } while (uVar31 != param_2);
      }
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + lVar18;
      puVar22 = (undefined8 *)((long)puVar22 + lVar12);
      lVar29 = lVar29 + lVar12;
      lVar27 = lVar27 + lVar2;
      lVar24 = lVar24 + lVar2;
      lStack_68 = lStack_68 - lVar2;
      lVar23 = lVar23 + lVar18;
      lVar25 = lVar25 + lVar18;
      lVar30 = lVar1;
    } while (lVar1 < param_3);
  }
  return;
}



/* Entry: 10946e360; end: 10946e43f;  */

undefined8 * FUN_10946e360(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 6) == 0) {
    param_1[5] = 0;
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10946e440; end: 10946e797;  */

undefined8 * FUN_10946e440(long param_1,long *param_2,double *param_3,long *param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 auStack_370 [2];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  double adStack_1f0 [2];
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 auStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar4 = *(double **)(param_1 + 0x28);
  if (param_4 == (long *)0x0) {
    pdVar2 = (double *)*param_2;
    dVar7 = *pdVar2;
    dVar8 = pdVar2[1];
    dVar15 = pdVar2[2];
    dVar5 = dVar8 * dVar8 + dVar7 * dVar7 + dVar15 * dVar15;
    dVar6 = 2.220446049250313e-16;
    if (dVar5 <= 2.220446049250313e-16) {
      dVar9 = dVar15 + dVar8 * 0.0 + 0.0;
      dVar10 = dVar7 * -0.0 + dVar15 * 0.0 + -1.0;
      dVar5 = (dVar8 * -0.0 - dVar7) + 0.0;
    }
    else {
      dVar5 = SQRT(dVar5);
      dVar11 = dVar5;
      ___sincos_stret();
      dVar5 = 1.0 / dVar5;
      dVar7 = dVar7 * dVar5;
      dVar8 = dVar8 * dVar5;
      dVar15 = dVar15 * dVar5;
      dVar5 = (1.0 - dVar6) * ((dVar7 * 0.0 - dVar8) + dVar15 * 0.0);
      dVar9 = dVar11 * (dVar15 + dVar8 * 0.0) + dVar6 * 0.0 + dVar5 * dVar7;
      dVar10 = (dVar11 * (dVar7 * -0.0 + dVar15 * 0.0) - dVar6) + dVar5 * dVar8;
      dVar5 = dVar11 * (dVar8 * -0.0 - dVar7) + dVar6 * 0.0 + dVar5 * dVar15;
    }
    *param_3 = pdVar4[3] * (1.0 - (dVar10 * pdVar4[1] + dVar9 * *pdVar4 + dVar5 * pdVar4[2]));
  }
  else {
    puVar1 = (undefined8 *)*param_2;
    auStack_370[0] = *puVar1;
    uStack_360 = 0x3ff0000000000000;
    uStack_350 = 0;
    uStack_358 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_338 = 0;
    uStack_330 = puVar1[1];
    uStack_320 = 0;
    uStack_318 = 0x3ff0000000000000;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2f0 = puVar1[2];
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0x3ff0000000000000;
    uStack_2c8 = 0;
    uStack_2b0 = puVar1[3];
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0x3ff0000000000000;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = puVar1[4];
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0x3ff0000000000000;
    uStack_230 = puVar1[5];
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0x3ff0000000000000;
    auStack_130[0] = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_f0 = 0xbff0000000000000;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    adStack_1f0[0] = 0.0;
    dStack_158 = 0.0;
    dStack_160 = 0.0;
    dStack_148 = 0.0;
    dStack_150 = 0.0;
    dStack_138 = 0.0;
    dStack_140 = 0.0;
    dStack_1d8 = 0.0;
    dStack_1e0 = 0.0;
    dStack_1c8 = 0.0;
    dStack_1d0 = 0.0;
    dStack_1b8 = 0.0;
    dStack_1c0 = 0.0;
    dStack_1b0 = 0.0;
    dStack_198 = 0.0;
    dStack_1a0 = 0.0;
    dStack_188 = 0.0;
    dStack_190 = 0.0;
    dStack_178 = 0.0;
    dStack_180 = 0.0;
    dStack_170 = 0.0;
    FUN_10943db44(auStack_370,auStack_130,adStack_1f0);
    dVar5 = *pdVar4;
    dVar6 = pdVar4[1];
    dVar7 = pdVar4[2];
    dVar8 = pdVar4[3];
    dVar15 = 1.0 - (dVar5 * adStack_1f0[0] + dVar6 * dStack_1b0 + dVar7 * dStack_170);
    *param_3 = dVar15 * dVar8;
    pdVar4 = (double *)*param_4;
    if (pdVar4 != (double *)0x0) {
      dVar16 = dVar15 * 0.0;
      dVar15 = dVar15 * 0.0;
      dVar9 = adStack_1f0[0] * 0.0;
      dVar10 = adStack_1f0[0] * 0.0;
      dVar11 = dStack_1b0 * 0.0;
      dVar12 = dStack_1b0 * 0.0;
      dVar13 = dStack_170 * 0.0;
      dVar14 = dStack_170 * 0.0;
      pdVar4[1] = dVar15 + (0.0 - (dStack_1d8 * dVar5 + dVar10 + dStack_198 * dVar6 + dVar12 +
                                  dStack_158 * dVar7 + dVar14)) * dVar8;
      *pdVar4 = dVar16 + (0.0 - (dStack_1e0 * dVar5 + dVar9 + dStack_1a0 * dVar6 + dVar11 +
                                dStack_160 * dVar7 + dVar13)) * dVar8;
      pdVar4[3] = dVar15 + (0.0 - (dStack_1c8 * dVar5 + dVar10 + dStack_188 * dVar6 + dVar12 +
                                  dStack_148 * dVar7 + dVar14)) * dVar8;
      pdVar4[2] = dVar16 + (0.0 - (dStack_1d0 * dVar5 + dVar9 + dStack_190 * dVar6 + dVar11 +
                                  dStack_150 * dVar7 + dVar13)) * dVar8;
      pdVar4[5] = dVar15 + (0.0 - (dVar10 + dStack_1b8 * dVar5 + dVar12 + dStack_178 * dVar6 +
                                  dVar14 + dStack_138 * dVar7)) * dVar8;
      pdVar4[4] = dVar16 + (0.0 - (dVar9 + dStack_1c0 * dVar5 + dVar11 + dStack_180 * dVar6 +
                                  dVar13 + dStack_140 * dVar7)) * dVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar1 = (undefined8 *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    if (*(int *)(puVar1 + 6) == 0) {
      puVar1[5] = 0;
      *puVar1 = &PTR_DAT_110b1dad0;
      lVar3 = puVar1[1];
    }
    else {
      lVar3 = puVar1[5];
      puVar1[5] = 0;
      if (lVar3 != 0) {
        _free(*(undefined8 *)(lVar3 + 0x98));
        __ZdlPv(lVar3);
      }
      *puVar1 = &PTR_DAT_110b1dad0;
      lVar3 = puVar1[1];
    }
    if (lVar3 != 0) {
      puVar1[2] = lVar3;
      __ZdlPv();
    }
    return puVar1;
  }
  return (undefined8 *)0x1;
}



/* Entry: 10946e798; end: 10946e7ab;  */

undefined8 * FUN_10946e798(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(int *)(puVar1 + 6) == 0) {
    puVar1[5] = 0;
    *puVar1 = &PTR_DAT_110b1dad0;
    lVar2 = puVar1[1];
  }
  else {
    lVar2 = puVar1[5];
    puVar1[5] = 0;
    if (lVar2 != 0) {
      _free(*(undefined8 *)(lVar2 + 0x98));
      __ZdlPv(lVar2);
    }
    *puVar1 = &PTR_DAT_110b1dad0;
    lVar2 = puVar1[1];
  }
  if (lVar2 != 0) {
    puVar1[2] = lVar2;
    __ZdlPv();
  }
  return puVar1;
}



/* Entry: 10946e7ac; end: 10946e8a3;  */

undefined8 * FUN_10946e7ac(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 6) == 0) {
    param_1[5] = 0;
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      _free(*(undefined8 *)(lVar1 + 0x98));
      __ZdlPv(lVar1);
    }
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10946e8a4; end: 10946ee4b;  */

undefined8 *** FUN_10946e8a4(long *param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 **ppuVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  long *plVar14;
  undefined8 ***pppuVar15;
  uint uVar16;
  double *pdVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *plVar21;
  undefined8 *extraout_x8;
  long **pplVar22;
  ulong uVar23;
  ulong uVar24;
  double *pdVar25;
  double *pdVar26;
  long lVar27;
  ulong uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined8 uStack_490;
  undefined **ppuStack_480;
  long lStack_478;
  undefined8 uStack_470;
  int iStack_468;
  long *plStack_460;
  undefined8 **ppuStack_458;
  undefined8 **ppuStack_450;
  undefined8 **ppuStack_440;
  long *plStack_438;
  undefined8 **ppuStack_430;
  undefined8 **ppuStack_428;
  undefined8 **ppuStack_420;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  long alStack_390 [2];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  double dStack_2d0;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double adStack_210 [2];
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double adStack_150 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  plVar14 = alStack_390;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar26 = (double *)param_1[5];
  if (param_4 == (undefined8 *)0x0) {
    pdVar25 = (double *)*param_2;
    unaff_d11 = *pdVar26;
    unaff_d10 = pdVar26[1];
    unaff_d9 = pdVar26[2];
    dVar47 = *pdVar25;
    dVar62 = pdVar25[1];
    dVar50 = pdVar25[2];
    dVar51 = dVar62 * dVar62 + dVar47 * dVar47 + dVar50 * dVar50;
    dVar46 = 2.220446049250313e-16;
    pdVar17 = param_3;
    if (dVar51 <= 2.220446049250313e-16) {
      dVar52 = unaff_d11 + -(dVar50 * unaff_d10) + unaff_d9 * dVar62;
      dVar54 = unaff_d10 + -(dVar47 * unaff_d9) + unaff_d11 * dVar50;
      dVar51 = unaff_d9 + -(dVar62 * unaff_d11) + unaff_d10 * dVar47;
      uVar29 = SUB81(dVar51,0);
      uVar30 = (undefined1)((ulong)dVar51 >> 8);
      uVar31 = (undefined1)((ulong)dVar51 >> 0x10);
      uVar32 = (undefined1)((ulong)dVar51 >> 0x18);
      uVar33 = (undefined1)((ulong)dVar51 >> 0x20);
      uVar34 = (undefined1)((ulong)dVar51 >> 0x28);
      uVar35 = (undefined1)((ulong)dVar51 >> 0x30);
      uVar36 = (undefined1)((ulong)dVar51 >> 0x38);
    }
    else {
      unaff_d8 = SQRT(dVar51);
      uVar29 = SUB81(unaff_d8,0);
      uVar30 = (undefined1)((ulong)unaff_d8 >> 8);
      uVar31 = (undefined1)((ulong)unaff_d8 >> 0x10);
      uVar32 = (undefined1)((ulong)unaff_d8 >> 0x18);
      uVar33 = (undefined1)((ulong)unaff_d8 >> 0x20);
      uVar34 = (undefined1)((ulong)unaff_d8 >> 0x28);
      uVar35 = (undefined1)((ulong)unaff_d8 >> 0x30);
      uVar36 = (undefined1)((ulong)unaff_d8 >> 0x38);
      ___sincos_stret();
      dVar51 = 1.0 / unaff_d8;
      dVar47 = dVar47 * dVar51;
      dVar62 = dVar62 * dVar51;
      dVar50 = dVar50 * dVar51;
      dVar51 = (1.0 - dVar46) * (unaff_d10 * dVar62 + unaff_d11 * dVar47 + unaff_d9 * dVar50);
      dVar52 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                               )) * (-(dVar50 * unaff_d10) + unaff_d9 * dVar62) +
               dVar46 * unaff_d11 + dVar51 * dVar47;
      dVar54 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                               )) * (-(dVar47 * unaff_d9) + unaff_d11 * dVar50) +
               dVar46 * unaff_d10 + dVar51 * dVar62;
      dVar51 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                               )) * (-(dVar62 * unaff_d11) + unaff_d10 * dVar47) +
               dVar46 * unaff_d9 + dVar51 * dVar50;
      uVar29 = SUB81(dVar51,0);
      uVar30 = (undefined1)((ulong)dVar51 >> 8);
      uVar31 = (undefined1)((ulong)dVar51 >> 0x10);
      uVar32 = (undefined1)((ulong)dVar51 >> 0x18);
      uVar33 = (undefined1)((ulong)dVar51 >> 0x20);
      uVar34 = (undefined1)((ulong)dVar51 >> 0x28);
      uVar35 = (undefined1)((ulong)dVar51 >> 0x30);
      uVar36 = (undefined1)((ulong)dVar51 >> 0x38);
    }
    iVar18 = (int)param_4;
    dVar46 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(uVar32
                                                  ,CONCAT12(uVar31,CONCAT11(uVar30,uVar29))))))) +
             pdVar25[5];
    dVar51 = (dVar52 + pdVar25[3]) / dVar46;
    dVar46 = (dVar54 + pdVar25[4]) / dVar46;
    if (*(int *)(pdVar26 + 0x12) == 1) {
      dVar47 = dVar46 * dVar46 + dVar51 * dVar51;
      dVar47 = (pdVar26[0x10] + dVar47 * pdVar26[0x11]) * dVar47 + 1.0;
      dVar62 = pdVar26[0xc] * dVar47;
      dVar47 = pdVar26[0xd] * dVar47;
    }
    else {
      dVar47 = pdVar26[0xd];
      dVar62 = pdVar26[0xc];
    }
    *param_3 = (dVar51 * dVar62 - pdVar26[4]) * pdVar26[6];
    param_3[1] = (dVar46 * dVar47 - pdVar26[5]) * pdVar26[6];
  }
  else {
    plVar21 = (long *)*param_2;
    alStack_390[0] = *plVar21;
    uStack_380 = 0x3ff0000000000000;
    uStack_370 = 0;
    uStack_378 = 0;
    uStack_360 = 0;
    uStack_368 = 0;
    uStack_358 = 0;
    lStack_350 = plVar21[1];
    uStack_340 = 0;
    uStack_338 = 0x3ff0000000000000;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_310 = plVar21[2];
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0x3ff0000000000000;
    uStack_2e8 = 0;
    dStack_2d0 = (double)plVar21[3];
    dStack_2c0 = 0.0;
    dStack_2b8 = 0.0;
    dStack_2b0 = 0.0;
    dStack_2a8 = 1.0;
    dStack_2a0 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = (double)plVar21[4];
    dStack_278 = 0.0;
    dStack_280 = 0.0;
    dStack_268 = 0.0;
    dStack_270 = 0.0;
    dStack_258 = 0.0;
    dStack_260 = 1.0;
    dStack_250 = (double)plVar21[5];
    dStack_238 = 0.0;
    dStack_240 = 0.0;
    dStack_228 = 0.0;
    dStack_230 = 0.0;
    dStack_220 = 0.0;
    dStack_218 = 1.0;
    adStack_150[0] = *pdVar26;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    dStack_110 = pdVar26[1];
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    dStack_d0 = pdVar26[2];
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    adStack_210[0] = 0.0;
    dStack_178 = 0.0;
    dStack_180 = 0.0;
    dStack_168 = 0.0;
    dStack_170 = 0.0;
    dStack_158 = 0.0;
    dStack_160 = 0.0;
    dStack_1f8 = 0.0;
    dStack_200 = 0.0;
    dStack_1e8 = 0.0;
    dStack_1f0 = 0.0;
    dStack_1d8 = 0.0;
    dStack_1e0 = 0.0;
    dStack_1d0 = 0.0;
    dStack_1b8 = 0.0;
    dStack_1c0 = 0.0;
    dStack_1a8 = 0.0;
    dStack_1b0 = 0.0;
    dStack_198 = 0.0;
    dStack_1a0 = 0.0;
    dStack_190 = 0.0;
    param_2 = adStack_150;
    pdVar17 = adStack_210;
    puVar19 = param_4;
    FUN_10943db44();
    iVar18 = (int)puVar19;
    dVar62 = 1.0 / (dStack_190 + dStack_250);
    dVar51 = (adStack_210[0] + dStack_2d0) * dVar62;
    dVar46 = (dStack_1d0 + dStack_290) * dVar62;
    dVar60 = ((dStack_200 + dStack_2c0) - (dStack_180 + dStack_240) * dVar51) * dVar62;
    dVar61 = ((dStack_1f8 + dStack_2b8) - (dStack_178 + dStack_238) * dVar51) * dVar62;
    dVar58 = ((dStack_1f0 + dStack_2b0) - (dStack_170 + dStack_230) * dVar51) * dVar62;
    dVar59 = ((dStack_1e8 + dStack_2a8) - (dStack_168 + dStack_228) * dVar51) * dVar62;
    dVar56 = ((dStack_1e0 + dStack_2a0) - (dStack_160 + dStack_220) * dVar51) * dVar62;
    dVar57 = ((dStack_1d8 + dStack_298) - (dStack_158 + dStack_218) * dVar51) * dVar62;
    dVar54 = ((dStack_1c0 + dStack_280) - (dStack_180 + dStack_240) * dVar46) * dVar62;
    dVar55 = ((dStack_1b8 + dStack_278) - (dStack_178 + dStack_238) * dVar46) * dVar62;
    dVar50 = ((dStack_1b0 + dStack_270) - (dStack_170 + dStack_230) * dVar46) * dVar62;
    dVar52 = ((dStack_1a8 + dStack_268) - (dStack_168 + dStack_228) * dVar46) * dVar62;
    dVar47 = ((dStack_1a0 + dStack_260) - (dStack_160 + dStack_220) * dVar46) * dVar62;
    dVar62 = ((dStack_198 + dStack_258) - (dStack_158 + dStack_218) * dVar46) * dVar62;
    if (*(int *)(pdVar26 + 0x12) == 1) {
      dVar63 = dVar51 * dVar51 + dVar46 * dVar46;
      dVar64 = dVar60 * dVar51 + dVar60 * dVar51 + dVar54 * dVar46 + dVar54 * dVar46;
      dVar66 = dVar61 * dVar51 + dVar61 * dVar51 + dVar55 * dVar46 + dVar55 * dVar46;
      dVar68 = dVar58 * dVar51 + dVar58 * dVar51 + dVar50 * dVar46 + dVar50 * dVar46;
      dVar69 = dVar59 * dVar51 + dVar59 * dVar51 + dVar52 * dVar46 + dVar52 * dVar46;
      dVar70 = dVar56 * dVar51 + dVar56 * dVar51 + dVar47 * dVar46 + dVar47 * dVar46;
      dVar72 = dVar57 * dVar51 + dVar57 * dVar51 + dVar62 * dVar46 + dVar62 * dVar46;
      dVar74 = pdVar26[0x11];
      dVar75 = dVar63 * 0.0;
      dVar76 = dVar63 * 0.0;
      dVar73 = pdVar26[0x10] + dVar63 * dVar74;
      dVar71 = dVar63 * dVar73 + 1.0;
      dVar65 = dVar64 * dVar73 + (dVar75 + dVar64 * dVar74 + 0.0) * dVar63 + 0.0;
      dVar67 = dVar66 * dVar73 + (dVar76 + dVar66 * dVar74 + 0.0) * dVar63 + 0.0;
      dVar68 = dVar68 * dVar73 + (dVar75 + dVar68 * dVar74 + 0.0) * dVar63 + 0.0;
      dVar69 = dVar69 * dVar73 + (dVar76 + dVar69 * dVar74 + 0.0) * dVar63 + 0.0;
      dVar70 = dVar70 * dVar73 + (dVar75 + dVar70 * dVar74 + 0.0) * dVar63 + 0.0;
      dVar72 = dVar72 * dVar73 + (dVar76 + dVar72 * dVar74 + 0.0) * dVar63 + 0.0;
      dVar64 = pdVar26[0xc];
      dVar73 = pdVar26[0xd];
      dVar66 = dVar64 * dVar71;
      dVar74 = dVar71 * 0.0;
      dVar75 = dVar71 * 0.0;
      dVar60 = dVar60 * dVar66 + (dVar74 + dVar65 * dVar64) * dVar51;
      dVar61 = dVar61 * dVar66 + (dVar75 + dVar67 * dVar64) * dVar51;
      dVar58 = dVar58 * dVar66 + (dVar74 + dVar68 * dVar64) * dVar51;
      dVar59 = dVar59 * dVar66 + (dVar75 + dVar69 * dVar64) * dVar51;
      dVar63 = dVar56 * dVar66 + (dVar74 + dVar70 * dVar64) * dVar51;
      dVar64 = dVar57 * dVar66 + (dVar75 + dVar72 * dVar64) * dVar51;
      dVar71 = dVar73 * dVar71;
      dVar54 = dVar54 * dVar71 + (dVar74 + dVar65 * dVar73) * dVar46;
      dVar55 = dVar55 * dVar71 + (dVar75 + dVar67 * dVar73) * dVar46;
      dVar50 = dVar50 * dVar71 + (dVar74 + dVar68 * dVar73) * dVar46;
      dVar52 = dVar52 * dVar71 + (dVar75 + dVar69 * dVar73) * dVar46;
      dVar56 = dVar47 * dVar71 + (dVar74 + dVar70 * dVar73) * dVar46;
      dVar57 = dVar62 * dVar71 + (dVar75 + dVar72 * dVar73) * dVar46;
    }
    else {
      dVar66 = pdVar26[0xc];
      dVar71 = pdVar26[0xd];
      dVar63 = dVar51 * 0.0;
      dVar64 = dVar51 * 0.0;
      dVar60 = dVar63 + dVar60 * dVar66;
      dVar61 = dVar64 + dVar61 * dVar66;
      dVar58 = dVar63 + dVar58 * dVar66;
      dVar59 = dVar64 + dVar59 * dVar66;
      dVar63 = dVar63 + dVar56 * dVar66;
      dVar64 = dVar64 + dVar57 * dVar66;
      dVar56 = dVar46 * 0.0;
      dVar57 = dVar46 * 0.0;
      dVar54 = dVar56 + dVar54 * dVar71;
      dVar55 = dVar57 + dVar55 * dVar71;
      dVar50 = dVar56 + dVar50 * dVar71;
      dVar52 = dVar57 + dVar52 * dVar71;
      dVar56 = dVar56 + dVar47 * dVar71;
      dVar57 = dVar57 + dVar62 * dVar71;
    }
    dVar47 = dVar51 * dVar66 - pdVar26[4];
    dVar51 = pdVar26[6];
    dVar46 = dVar46 * dVar71 - pdVar26[5];
    *param_3 = dVar47 * dVar51;
    param_3[1] = dVar51 * dVar46;
    pdVar26 = (double *)*param_4;
    param_1 = plVar14;
    if (pdVar26 != (double *)0x0) {
      dVar66 = dVar46 * 0.0;
      dVar46 = dVar46 * 0.0;
      dVar62 = dVar47 * 0.0;
      dVar47 = dVar47 * 0.0;
      pdVar26[1] = dVar47 + dVar61 * dVar51;
      *pdVar26 = dVar62 + dVar60 * dVar51;
      pdVar26[3] = dVar47 + dVar59 * dVar51;
      pdVar26[2] = dVar62 + dVar58 * dVar51;
      pdVar26[5] = dVar47 + dVar64 * dVar51;
      pdVar26[4] = dVar62 + dVar63 * dVar51;
      pdVar26[7] = dVar55 * dVar51 + dVar46;
      pdVar26[6] = dVar54 * dVar51 + dVar66;
      pdVar26[9] = dVar52 * dVar51 + dVar46;
      pdVar26[8] = dVar50 * dVar51 + dVar66;
      pdVar26[0xb] = dVar57 * dVar51 + dVar46;
      pdVar26[10] = dVar56 * dVar51 + dVar66;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (undefined8 ***)0x1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuStack_450 = (long **)0x0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0;
  ppuStack_458 = (long **)0x0;
  plStack_460 = (long *)0x0;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  dStack_410 = unaff_d11;
  dStack_408 = unaff_d10;
  dStack_400 = unaff_d9;
  dStack_3f8 = unaff_d8;
  if ((int)((ulong)(lVar6 - lVar5) >> 5) < 1) {
    ppuStack_450 = (long **)0x0;
  }
  else {
    uVar28 = 0;
    uVar16 = (uint)pdVar17;
    dVar51 = param_2[1];
    auVar7[9] = (char)((ulong)dVar51 >> 8);
    auVar7._0_9_ = *(unkbyte9 *)param_2;
    auVar7[10] = (char)((ulong)dVar51 >> 0x10);
    auVar7[0xb] = (char)((ulong)dVar51 >> 0x18);
    auVar7[0xc] = (char)((ulong)dVar51 >> 0x20);
    auVar7[0xd] = (char)((ulong)dVar51 >> 0x28);
    auVar7[0xe] = (char)((ulong)dVar51 >> 0x30);
    auVar7[0xf] = (char)((ulong)dVar51 >> 0x38);
    fVar48 = (float)auVar7._8_8_;
    uStack_490 = CONCAT17((char)((uint)fVar48 >> 0x18),
                          CONCAT16((char)((uint)fVar48 >> 0x10),
                                   CONCAT15((char)((uint)fVar48 >> 8),
                                            CONCAT14(SUB41(fVar48,0),
                                                     (float)(double)*(unkbyte9 *)param_2))));
    do {
      lVar27 = *param_1 + uVar28 * 0x20;
      iVar3 = *(int *)(lVar27 + 0x10);
      iVar4 = *(int *)(lVar27 + 0x14);
      iVar2 = iVar4;
      if (iVar3 <= iVar4) {
        iVar2 = iVar3;
      }
      if (iVar2 < iVar18) break;
      ppuStack_440 = (undefined8 **)CONCAT44(uVar16,uVar16);
      lStack_478 = 0;
      uStack_470 = 0;
      iStack_468 = 0;
      ppuStack_480 = &PTR_FUN_110af4c80;
      func_0x00010938e870(&ppuStack_480,&ppuStack_440);
      ppuVar1 = ppuStack_458;
      fVar48 = (float)((ulong)uStack_490 >> 0x20);
      if (0 < (int)uVar16) {
        uVar20 = 0;
        fVar8 = (float)(iVar3 + -1);
        fVar45 = (float)(iVar4 + -1);
        do {
          uVar23 = 0;
          fVar49 = (fVar48 + (float)uVar20) - (float)((int)uVar16 / 2);
          do {
            uVar29 = 0;
            fVar53 = ((float)uStack_490 + (float)(uVar23 & 0xffffffff)) - (float)((int)uVar16 / 2);
            bVar11 = false;
            bVar12 = false;
            bVar13 = false;
            if (0.0 <= fVar53) {
              bVar11 = false;
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar53) && !NAN(fVar8)) {
                bVar11 = fVar53 < fVar8;
                bVar12 = fVar53 == fVar8;
                bVar13 = false;
              }
            }
            if (bVar12 || bVar11 != bVar13) {
              bVar11 = false;
              bVar12 = false;
              bVar13 = false;
              if (0.0 <= fVar49) {
                bVar11 = false;
                bVar12 = false;
                bVar13 = true;
                if (!NAN(fVar49) && !NAN(fVar45)) {
                  bVar11 = fVar49 < fVar45;
                  bVar12 = fVar49 == fVar45;
                  bVar13 = false;
                }
              }
              if (bVar12 || bVar11 != bVar13) {
                uVar29 = *(undefined1 *)
                          (*(long *)(lVar27 + 8) + (long)*(int *)(lVar27 + 0x18) * (long)(int)fVar49
                          + (long)(int)fVar53);
              }
            }
            *(undefined1 *)(lStack_478 + (long)iStack_468 * (long)(int)uVar20 + uVar23) = uVar29;
            uVar23 = uVar23 + 1;
          } while (((ulong)pdVar17 & 0xffffffff) != uVar23);
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar16);
      }
      if (ppuStack_458 < ppuStack_450) {
        FUN_10939d4b8(ppuStack_458,&ppuStack_480);
        pplVar22 = ppuVar1 + 4;
      }
      else {
        lVar27 = (long)ppuStack_458 - (long)plStack_460;
        uVar23 = (lVar27 >> 5) + 1;
        if (uVar23 >> 0x3b != 0) {
          FUN_10939d3e4();
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10946f134);
          (*pcVar10)();
        }
        uVar24 = (long)ppuStack_450 - (long)plStack_460 >> 4;
        if (uVar24 <= uVar23) {
          uVar24 = uVar23;
        }
        if (0x7fffffffffffffdf < (ulong)((long)ppuStack_450 - (long)plStack_460)) {
          uVar24 = 0x7ffffffffffffff;
        }
        ppuStack_420 = &plStack_460;
        if (uVar24 == 0) {
          pplVar22 = (long **)0x0;
        }
        else {
          pplVar22 = &plStack_460;
          FUN_10939d3f8();
        }
        lVar27 = (long)pplVar22 + lVar27;
        ppuStack_428 = pplVar22 + uVar24 * 4;
        ppuStack_440 = pplVar22;
        plStack_438 = (long *)lVar27;
        ppuStack_430 = (undefined8 **)lVar27;
        FUN_10939d4b8(lVar27,&ppuStack_480);
        ppuStack_430 = (undefined8 **)(lVar27 + 0x20);
        ppuVar1 = (undefined8 **)((long)plStack_460 + (lVar27 - (long)ppuStack_458));
        FUN_1093fd0fc(&plStack_460,plStack_460,ppuStack_458,ppuVar1);
        pplVar22 = ppuStack_430;
        ppuVar9 = ppuStack_450;
        ppuStack_450 = ppuStack_428;
        ppuStack_458 = ppuStack_430;
        ppuStack_430 = (undefined8 **)plStack_460;
        ppuStack_428 = ppuVar9;
        ppuStack_440 = (undefined8 **)plStack_460;
        plStack_438 = plStack_460;
        plStack_460 = (long *)ppuVar1;
        FUN_1093fd1b0(&ppuStack_440);
      }
      ppuStack_480 = &PTR_FUN_110af4c80;
      ppuStack_458 = pplVar22;
      if (lStack_478 != 0) {
        __ZdaPv();
      }
      fVar48 = (fVar48 + 0.5) * 0.5 + -0.5;
      uStack_490 = CONCAT17((char)((uint)fVar48 >> 0x18),
                            CONCAT16((char)((uint)fVar48 >> 0x10),
                                     CONCAT15((char)((uint)fVar48 >> 8),
                                              CONCAT14(SUB41(fVar48,0),
                                                       ((float)uStack_490 + 0.5) * 0.5 + -0.5))));
      uVar28 = uVar28 + 1;
    } while (uVar28 != ((ulong)(lVar6 - lVar5) >> 5 & 0x7fffffff));
    uVar37 = SUB81(ppuStack_458,0);
    uVar38 = (undefined1)((ulong)ppuStack_458 >> 8);
    uVar39 = (undefined1)((ulong)ppuStack_458 >> 0x10);
    uVar40 = (undefined1)((ulong)ppuStack_458 >> 0x18);
    uVar41 = (undefined1)((ulong)ppuStack_458 >> 0x20);
    uVar42 = (undefined1)((ulong)ppuStack_458 >> 0x28);
    uVar43 = (undefined1)((ulong)ppuStack_458 >> 0x30);
    uVar44 = (undefined1)((ulong)ppuStack_458 >> 0x38);
    uVar29 = SUB81(plStack_460,0);
    uVar30 = (undefined1)((ulong)plStack_460 >> 8);
    uVar31 = (undefined1)((ulong)plStack_460 >> 0x10);
    uVar32 = (undefined1)((ulong)plStack_460 >> 0x18);
    uVar33 = (undefined1)((ulong)plStack_460 >> 0x20);
    uVar34 = (undefined1)((ulong)plStack_460 >> 0x28);
    uVar35 = (undefined1)((ulong)plStack_460 >> 0x30);
    uVar36 = (undefined1)((ulong)plStack_460 >> 0x38);
  }
  extraout_x8[1] =
       CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,CONCAT12(
                                                  uVar39,CONCAT11(uVar38,uVar37)))))));
  *extraout_x8 = CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(uVar32,
                                                  CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))));
  extraout_x8[2] = ppuStack_450;
  ppuStack_458 = (undefined8 **)0x0;
  ppuStack_450 = (undefined8 **)0x0;
  plStack_460 = (long *)0x0;
  ppuStack_440 = &plStack_460;
  pppuVar15 = &ppuStack_440;
  FUN_10939d590(pppuVar15);
  return pppuVar15;
}



/* Entry: 10946ee4c; end: 10946f18f;  */

void FUN_10946ee4c(undefined8 *param_1,long *param_2,unkbyte9 *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uStack_100;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  
  plStack_c0 = (long *)0x0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  plStack_c8 = (long *)0x0;
  lStack_d0 = 0;
  lVar4 = *param_2;
  lVar5 = param_2[1];
  if ((int)((ulong)(lVar5 - lVar4) >> 5) < 1) {
    plStack_c0 = (long *)0x0;
  }
  else {
    uVar19 = 0;
    uVar8 = *(undefined8 *)((long)param_3 + 8);
    auVar6[9] = (char)((ulong)uVar8 >> 8);
    auVar6._0_9_ = *param_3;
    auVar6[10] = (char)((ulong)uVar8 >> 0x10);
    auVar6[0xb] = (char)((ulong)uVar8 >> 0x18);
    auVar6[0xc] = (char)((ulong)uVar8 >> 0x20);
    auVar6[0xd] = (char)((ulong)uVar8 >> 0x28);
    auVar6[0xe] = (char)((ulong)uVar8 >> 0x30);
    auVar6[0xf] = (char)((ulong)uVar8 >> 0x38);
    fVar37 = (float)auVar6._8_8_;
    uStack_100 = CONCAT17((char)((uint)fVar37 >> 0x18),
                          CONCAT16((char)((uint)fVar37 >> 0x10),
                                   CONCAT15((char)((uint)fVar37 >> 8),
                                            CONCAT14(SUB41(fVar37,0),(float)(double)*param_3))));
    do {
      lVar18 = *param_2 + uVar19 * 0x20;
      iVar2 = *(int *)(lVar18 + 0x10);
      iVar3 = *(int *)(lVar18 + 0x14);
      iVar1 = iVar3;
      if (iVar2 <= iVar3) {
        iVar1 = iVar2;
      }
      if (iVar1 < param_5) break;
      uStack_b0 = (long *)CONCAT44(param_4,param_4);
      lStack_e8 = 0;
      uStack_e0 = 0;
      iStack_d8 = 0;
      ppuStack_f0 = &PTR_FUN_110af4c80;
      func_0x00010938e870(&ppuStack_f0,&uStack_b0);
      plVar15 = plStack_c8;
      fVar37 = (float)((ulong)uStack_100 >> 0x20);
      if (0 < (int)param_4) {
        uVar14 = 0;
        fVar7 = (float)(iVar2 + -1);
        fVar36 = (float)(iVar3 + -1);
        do {
          uVar16 = 0;
          fVar38 = (fVar37 + (float)uVar14) - (float)((int)param_4 / 2);
          do {
            uVar20 = 0;
            fVar39 = ((float)uStack_100 + (float)(uVar16 & 0xffffffff)) - (float)((int)param_4 / 2);
            bVar11 = false;
            bVar12 = false;
            bVar13 = false;
            if (0.0 <= fVar39) {
              bVar11 = false;
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar39) && !NAN(fVar7)) {
                bVar11 = fVar39 < fVar7;
                bVar12 = fVar39 == fVar7;
                bVar13 = false;
              }
            }
            if (bVar12 || bVar11 != bVar13) {
              bVar11 = false;
              bVar12 = false;
              bVar13 = false;
              if (0.0 <= fVar38) {
                bVar11 = false;
                bVar12 = false;
                bVar13 = true;
                if (!NAN(fVar38) && !NAN(fVar36)) {
                  bVar11 = fVar38 < fVar36;
                  bVar12 = fVar38 == fVar36;
                  bVar13 = false;
                }
              }
              if (bVar12 || bVar11 != bVar13) {
                uVar20 = *(undefined1 *)
                          (*(long *)(lVar18 + 8) + (long)*(int *)(lVar18 + 0x18) * (long)(int)fVar38
                          + (long)(int)fVar39);
              }
            }
            *(undefined1 *)(lStack_e8 + (long)iStack_d8 * (long)(int)uVar14 + uVar16) = uVar20;
            uVar16 = uVar16 + 1;
          } while (param_4 != uVar16);
          uVar14 = uVar14 + 1;
        } while (uVar14 != param_4);
      }
      if (plStack_c8 < plStack_c0) {
        FUN_10939d4b8(plStack_c8,&ppuStack_f0);
        plVar15 = plVar15 + 4;
      }
      else {
        lVar18 = (long)plStack_c8 - lStack_d0;
        uVar16 = (lVar18 >> 5) + 1;
        if (uVar16 >> 0x3b != 0) {
          FUN_10939d3e4();
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10946f134);
          (*pcVar10)();
        }
        uVar17 = (long)plStack_c0 - lStack_d0 >> 4;
        if (uVar17 <= uVar16) {
          uVar17 = uVar16;
        }
        if (0x7fffffffffffffdf < (ulong)((long)plStack_c0 - lStack_d0)) {
          uVar17 = 0x7ffffffffffffff;
        }
        plStack_90 = &lStack_d0;
        if (uVar17 == 0) {
          plVar15 = (long *)0x0;
        }
        else {
          plVar15 = &lStack_d0;
          FUN_10939d3f8();
        }
        lVar18 = (long)plVar15 + lVar18;
        plStack_98 = plVar15 + uVar17 * 4;
        uStack_b0 = plVar15;
        lStack_a8 = lVar18;
        plStack_a0 = (long *)lVar18;
        FUN_10939d4b8(lVar18,&ppuStack_f0);
        plStack_a0 = (long *)(lVar18 + 0x20);
        lVar18 = lVar18 + (lStack_d0 - (long)plStack_c8);
        FUN_1093fd0fc(&lStack_d0,lStack_d0,plStack_c8,lVar18);
        plVar15 = plStack_a0;
        plVar9 = plStack_c0;
        plStack_c0 = plStack_98;
        plStack_c8 = plStack_a0;
        plStack_a0 = (long *)lStack_d0;
        plStack_98 = plVar9;
        uStack_b0 = (long *)lStack_d0;
        lStack_a8 = lStack_d0;
        lStack_d0 = lVar18;
        FUN_1093fd1b0(&uStack_b0);
      }
      ppuStack_f0 = &PTR_FUN_110af4c80;
      plStack_c8 = plVar15;
      if (lStack_e8 != 0) {
        __ZdaPv();
      }
      fVar37 = (fVar37 + 0.5) * 0.5 + -0.5;
      uStack_100 = CONCAT17((char)((uint)fVar37 >> 0x18),
                            CONCAT16((char)((uint)fVar37 >> 0x10),
                                     CONCAT15((char)((uint)fVar37 >> 8),
                                              CONCAT14(SUB41(fVar37,0),
                                                       ((float)uStack_100 + 0.5) * 0.5 + -0.5))));
      uVar19 = uVar19 + 1;
    } while (uVar19 != ((ulong)(lVar5 - lVar4) >> 5 & 0x7fffffff));
    uVar28 = SUB81(plStack_c8,0);
    uVar29 = (undefined1)((ulong)plStack_c8 >> 8);
    uVar30 = (undefined1)((ulong)plStack_c8 >> 0x10);
    uVar31 = (undefined1)((ulong)plStack_c8 >> 0x18);
    uVar32 = (undefined1)((ulong)plStack_c8 >> 0x20);
    uVar33 = (undefined1)((ulong)plStack_c8 >> 0x28);
    uVar34 = (undefined1)((ulong)plStack_c8 >> 0x30);
    uVar35 = (undefined1)((ulong)plStack_c8 >> 0x38);
    uVar20 = (undefined1)lStack_d0;
    uVar21 = (undefined1)((ulong)lStack_d0 >> 8);
    uVar22 = (undefined1)((ulong)lStack_d0 >> 0x10);
    uVar23 = (undefined1)((ulong)lStack_d0 >> 0x18);
    uVar24 = (undefined1)((ulong)lStack_d0 >> 0x20);
    uVar25 = (undefined1)((ulong)lStack_d0 >> 0x28);
    uVar26 = (undefined1)((ulong)lStack_d0 >> 0x30);
    uVar27 = (undefined1)((ulong)lStack_d0 >> 0x38);
  }
  param_1[1] = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,CONCAT13(uVar31,
                                                  CONCAT12(uVar30,CONCAT11(uVar29,uVar28)))))));
  *param_1 = CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(uVar23,
                                                  CONCAT12(uVar22,CONCAT11(uVar21,uVar20)))))));
  param_1[2] = plStack_c0;
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  lStack_d0 = 0;
  uStack_b0 = &lStack_d0;
  FUN_10939d590(&uStack_b0);
  return;
}



/* Entry: 10946f190; end: 10946fe13;  */

void FUN_10946f190(double *****param_1,long *param_2,int *param_3,undefined8 *param_4,long *param_5,
                  undefined8 *param_6,long param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  uint3 uVar4;
  double ***pppdVar5;
  double ***pppdVar6;
  double ***pppdVar7;
  double ***pppdVar8;
  double ***pppdVar9;
  long *plVar10;
  code *pcVar11;
  bool bVar12;
  double ****ppppdVar13;
  int *piVar14;
  double *****pppppdVar15;
  double ****ppppdVar16;
  double *****pppppdVar17;
  int iVar18;
  long lVar19;
  double *****pppppdVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  double ****ppppdVar24;
  double ****ppppdVar25;
  uint uVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  int iVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  double dVar53;
  double dVar54;
  undefined8 uVar55;
  double ****ppppdVar56;
  undefined1 auVar57 [16];
  double ****ppppdVar58;
  double dVar59;
  undefined1 auVar60 [16];
  double dVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  uint uVar68;
  undefined8 uVar69;
  double ****extraout_d25;
  int iVar70;
  uint uVar71;
  undefined8 uVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  undefined4 uStack_2a4;
  uint uStack_280;
  int iStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double ***pppdStack_248;
  undefined4 *puStack_240;
  double *pdStack_238;
  double dStack_230;
  undefined8 uStack_228;
  double dStack_220;
  double dStack_218;
  double ****ppppdStack_210;
  double ****ppppdStack_208;
  double ****ppppdStack_200;
  undefined4 auStack_1f8 [2];
  uint *puStack_1f0;
  undefined8 uStack_1e8;
  double ****ppppdStack_1e0;
  double ***pppdStack_1d8;
  double ***pppdStack_1d0;
  double ***pppdStack_1c8;
  double ***pppdStack_1c0;
  double ***pppdStack_1b8;
  double ***pppdStack_1b0;
  double ***pppdStack_1a8;
  double ***pppdStack_1a0;
  double ***pppdStack_198;
  double ***pppdStack_190;
  double ***pppdStack_188;
  undefined8 uStack_180;
  double ***pppdStack_178;
  double ***pppdStack_170;
  double ***pppdStack_168;
  double ***pppdStack_160;
  double ***pppdStack_158;
  double ***pppdStack_150;
  double ***pppdStack_148;
  double ***pppdStack_140;
  double *pdStack_138;
  double dStack_130;
  double dStack_128;
  double ***pppdStack_120;
  double ***pppdStack_110;
  double ***pppdStack_108;
  double ***pppdStack_100;
  double ***pppdStack_f8;
  double ***pppdStack_f0;
  double ***pppdStack_e8;
  double ***pppdStack_e0;
  double ***pppdStack_d0;
  double ***pppdStack_c8;
  double ***pppdStack_c0;
  double ***pppdStack_b8;
  double ***pppdStack_b0;
  double ***pppdStack_a8;
  double ***pppdStack_a0;
  double ***pppdStack_98;
  double ***pppdStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppdStack_210 = (double ****)0x0;
  ppppdStack_208 = (double ****)0x0;
  pppdStack_110 = (double ***)*param_4;
  pppdStack_108 = (double ***)param_4[1];
  pppdStack_100 = (double ***)param_4[2];
  pppdStack_f8 = (double ***)param_4[3];
  pppdStack_f0 = (double ***)param_4[4];
  pppdStack_e8 = (double ***)param_4[5];
  pppdStack_e0 = (double ***)param_4[6];
  pppdStack_b0 = (double ***)param_4[0xc];
  pppdStack_a8 = (double ***)param_4[0xd];
  pppdStack_a0 = (double ***)param_4[0xe];
  pppdStack_98 = (double ***)param_4[0xf];
  pppdStack_90 = (double ***)param_4[0x10];
  pppdStack_d0 = (double ***)param_4[8];
  pppdStack_c8 = (double ***)param_4[9];
  pppdStack_c0 = (double ***)param_4[10];
  pppdStack_b8 = (double ***)param_4[0xb];
  lVar34 = 2;
  auVar60 = NEON_fmov(0x3fe0000000000000,8);
  auVar57 = NEON_fmov(0xbfe0000000000000,8);
  ppppdStack_200 = (double ****)0x0;
  pppppdVar17 = (double *****)ppppdStack_208;
  pppppdVar15 = (double *****)ppppdStack_210;
  do {
    for (; pppppdVar17 != pppppdVar15; pppppdVar17 = pppppdVar17 + -0x1a) {
      if (pppppdVar17[-7] != (double ****)0x0) {
        piVar14 = (int *)((long)pppppdVar17[-7] + 0x14);
        do {
          iVar22 = *piVar14;
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar12) {
            *piVar14 = iVar22 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar22 + -1 == 0) {
          if (pppppdVar17[-7] != (double ****)0x0) {
            ppppdVar13 = (double ****)pppppdVar17[-7][1];
            if (((ppppdVar13 == (double ****)0x0) &&
                (ppppdVar13 = pppppdVar17[-8], pppppdVar17[-8] == (double ****)0x0)) &&
               (ppppdVar13 = ppppdRam000000011382bb80, ppppdRam000000011382bb80 == (double ****)0x0)
               ) {
              FUN_109a83e3c();
              ppppdVar13 = ppppdRam000000011382bb80;
            }
            (*(code *)(*ppppdVar13)[6])();
          }
          pppppdVar17[-7] = (double ****)0x0;
        }
      }
      pppppdVar17[-7] = (double ****)0x0;
      pppppdVar17[-0xb] = (double ****)0x0;
      pppppdVar17[-0xc] = (double ****)0x0;
      pppppdVar17[-9] = (double ****)0x0;
      pppppdVar17[-10] = (double ****)0x0;
      if (0 < *(int *)((long)pppppdVar17 + -0x6c)) {
        lVar19 = 0;
        ppppdVar13 = pppppdVar17[-6];
        do {
          *(undefined4 *)((long)ppppdVar13 + lVar19 * 4) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)((long)pppppdVar17 + -0x6c));
      }
      pppppdVar20 = (double *****)pppppdVar17[-5];
      if (pppppdVar20 != pppppdVar17 + -4 && pppppdVar20 != (double *****)0x0) {
        _free(pppppdVar20[-1]);
      }
    }
    plVar31 = (long *)*param_6;
    ppppdStack_208 = (double ****)pppppdVar15;
    if (plVar31 != param_6 + 1) {
      dVar53 = (double)(1 << (ulong)((uint)lVar34 & 0x1f));
      ppppdVar13 = (double ****)_ldexp(0x3ff0000000000000,lVar34);
      do {
        lVar33 = *param_5 + (long)(int)plVar31[4] * 0xd0;
        lVar19 = *(long *)(lVar33 + 8);
        dVar54 = *(double *)(lVar19 + 8);
        dVar59 = *(double *)(lVar19 + 0x10);
        dVar61 = *(double *)(lVar19 + 0x18);
        ppppdStack_1e0 =
             (double ****)
             ((double)pppdStack_d0 * dVar54 + (double)pppdStack_b8 * dVar59 +
              (double)pppdStack_a0 * dVar61 + (double)pppdStack_f0);
        pppdStack_1d8 =
             (double ***)
             ((double)pppdStack_c8 * dVar54 + (double)pppdStack_b0 * dVar59 +
              (double)pppdStack_98 * dVar61 + (double)pppdStack_e8);
        pppdStack_1d0 =
             (double ***)
             (dVar54 * (double)pppdStack_c0 +
              dVar59 * (double)pppdStack_a8 + dVar61 * (double)pppdStack_90 + (double)pppdStack_e0);
        piVar14 = param_3;
        FUN_10937d5c4(param_3,&dStack_220,&ppppdStack_1e0);
        if ((((int)piVar14 != 0) && (0.0 <= dStack_220)) &&
           ((0.0 <= dStack_218 &&
            ((dStack_220 <= (double)(*param_3 + -1) && (dStack_218 <= (double)(param_3[1] + -1))))))
           ) {
          dStack_220 = (dStack_220 + auVar60._0_8_) / dVar53 + auVar57._0_8_;
          dStack_218 = (dStack_218 + auVar60._8_8_) / dVar53 + auVar57._8_8_;
          lVar19 = *param_2;
          iVar18 = (int)((ulong)(param_2[1] - lVar19) >> 5);
          iVar22 = (int)((ulong)(plVar31[6] - plVar31[5]) >> 5);
          if (iVar18 <= iVar22) {
            iVar22 = iVar18;
          }
          if (lVar34 < iVar22) {
            lVar23 = lVar19 + lVar34 * 0x20;
            iVar22 = *(int *)(lVar23 + 0x10);
            if (((((7 < iVar22) && (iVar18 = *(int *)(lVar23 + 0x14), 7 < iVar18)) &&
                 (0.0 <= dStack_220)) &&
                ((0.0 <= dStack_218 && (dStack_220 <= (double)(iVar22 - 1))))) &&
               (dStack_218 <= (double)(iVar18 - 1))) {
              dVar54 = (double)(*(int *)(&UNK_10dfcaf50 + lVar34 * 4) / 2);
              uVar2 = (int)(dStack_220 - dVar54) &
                      ((int)(dStack_220 - dVar54) >> 0x1f ^ 0xffffffffU);
              uVar71 = (int)(dStack_218 - dVar54) &
                       ((int)(dStack_218 - dVar54) >> 0x1f ^ 0xffffffffU);
              uVar21 = (ulong)uVar71;
              if ((int)(dStack_220 + dVar54) <= iVar22) {
                iVar22 = (int)(dStack_220 + dVar54);
              }
              if ((int)(dStack_218 + dVar54) <= iVar18) {
                iVar18 = (int)(dStack_218 + dVar54);
              }
              if (((7 < (int)(iVar22 - uVar2) && 7 < (int)(iVar18 - uVar71)) &&
                  ((int)uVar71 < (int)(iVar18 - 8U))) && ((int)uVar2 < iVar22 + -8)) {
                lVar19 = lVar19 + lVar34 * 0x20;
                lVar23 = plVar31[5] + lVar34 * 0x20;
                puVar27 = *(undefined8 **)(lVar23 + 8);
                iVar30 = *(int *)(lVar23 + 0x18);
                lVar28 = (long)iVar30;
                lVar23 = (long)*(int *)(lVar19 + 0x18);
                uVar55 = *puVar27;
                bVar35 = (byte)((ulong)uVar55 >> 8);
                uVar62 = *(undefined8 *)((long)puVar27 + lVar28);
                uVar4 = CONCAT12((char)((ulong)uVar62 >> 8),(short)uVar62) & 0xff00ff;
                bVar45 = (byte)((ulong)uVar62 >> 0x28);
                uVar63 = *(undefined8 *)((long)puVar27 + lVar28 * 2);
                bVar36 = (byte)((ulong)uVar63 >> 8);
                bVar46 = (byte)((ulong)uVar63 >> 0x28);
                uVar64 = *(undefined8 *)((long)puVar27 + lVar28 * 3);
                bVar37 = (byte)((ulong)uVar64 >> 8);
                bVar47 = (byte)((ulong)uVar64 >> 0x28);
                uVar65 = *(undefined8 *)((long)puVar27 + lVar28 * 4);
                bVar38 = (byte)((ulong)uVar65 >> 8);
                bVar48 = (byte)((ulong)uVar65 >> 0x28);
                uVar66 = *(undefined8 *)((long)puVar27 + lVar28 * 5);
                bVar39 = (byte)((ulong)uVar66 >> 8);
                bVar49 = (byte)((ulong)uVar66 >> 0x28);
                uVar67 = *(undefined8 *)((long)puVar27 + (long)iVar30 * 6);
                bVar40 = (byte)((ulong)uVar67 >> 8);
                bVar50 = (byte)((ulong)uVar67 >> 0x28);
                uVar69 = *(undefined8 *)((long)puVar27 + lVar28 * 7);
                bVar41 = (byte)((ulong)uVar69 >> 8);
                bVar43 = (byte)((ulong)uVar69 >> 0x10);
                uVar68 = (uint)(CONCAT12(bVar41,(short)uVar69) & 0xff00ff);
                bVar44 = (byte)((ulong)uVar69 >> 0x18);
                ppppdVar25 = (double ****)(ulong)CONCAT16(bVar44,(uint6)CONCAT14(bVar43,uVar68));
                bVar51 = (byte)((ulong)uVar69 >> 0x28);
                puVar27 = (undefined8 *)(*(long *)(lVar19 + 8) + (ulong)uVar2 + lVar23 * uVar21);
                uVar71 = 0xffffffff;
                ppppdVar16 = extraout_d25;
                do {
                  lVar19 = (long)(iVar22 + -8) - (ulong)uVar2;
                  puVar29 = puVar27;
                  iVar30 = uVar2 + 4;
                  uVar26 = uVar71;
                  do {
                    uVar72 = *puVar29;
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar76 = (CONCAT12(bVar35,(ushort)(byte)uVar55) & 0xffff) -
                             ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar80 = (uint)bVar35 - (uint)bVar42;
                    iVar84 = (uint)(byte)((ulong)uVar55 >> 0x10) -
                             (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar88 = (uint)(byte)((ulong)uVar55 >> 0x18) -
                             (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar70 = (uint)(byte)((ulong)uVar55 >> 0x20) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar73 = (uint)(byte)((ulong)uVar55 >> 0x28) - (uint)bVar52;
                    iVar74 = (uint)(byte)((ulong)uVar55 >> 0x30) -
                             (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar75 = (uint)(byte)((ulong)uVar55 >> 0x38) -
                             (uint)(byte)((ulong)uVar72 >> 0x38);
                    uVar72 = *(undefined8 *)((long)puVar29 + lVar23);
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar92 = (uVar4 & 0xffff) -
                             ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar99 = (uint)(byte)(uVar4 >> 0x10) - (uint)bVar42;
                    iVar106 = (uint)(byte)((ulong)uVar62 >> 0x10) -
                              (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar113 = (uint)(byte)((ulong)uVar62 >> 0x18) -
                              (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar77 = (CONCAT12(bVar45,(ushort)(byte)((ulong)uVar62 >> 0x20)) & 0xffff) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar81 = (uint)bVar45 - (uint)bVar52;
                    iVar85 = (uint)(byte)((ulong)uVar62 >> 0x30) -
                             (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar89 = (uint)(byte)((ulong)uVar62 >> 0x38) -
                             (uint)(byte)((ulong)uVar72 >> 0x38);
                    puVar1 = (undefined8 *)((long)puVar29 + lVar23 + lVar23);
                    uVar72 = *puVar1;
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar93 = (CONCAT12(bVar36,(ushort)(byte)uVar63) & 0xffff) -
                             ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar100 = (uint)bVar36 - (uint)bVar42;
                    iVar107 = (uint)(byte)((ulong)uVar63 >> 0x10) -
                              (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar114 = (uint)(byte)((ulong)uVar63 >> 0x18) -
                              (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar78 = (CONCAT12(bVar46,(ushort)(byte)((ulong)uVar63 >> 0x20)) & 0xffff) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar82 = (uint)bVar46 - (uint)bVar52;
                    iVar86 = (uint)(byte)((ulong)uVar63 >> 0x30) -
                             (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar90 = (uint)(byte)((ulong)uVar63 >> 0x38) -
                             (uint)(byte)((ulong)uVar72 >> 0x38);
                    puVar1 = (undefined8 *)((long)puVar1 + lVar23);
                    uVar72 = *puVar1;
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar94 = (CONCAT12(bVar37,(ushort)(byte)uVar64) & 0xffff) -
                             ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar101 = (uint)bVar37 - (uint)bVar42;
                    iVar108 = (uint)(byte)((ulong)uVar64 >> 0x10) -
                              (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar115 = (uint)(byte)((ulong)uVar64 >> 0x18) -
                              (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar79 = (CONCAT12(bVar47,(ushort)(byte)((ulong)uVar64 >> 0x20)) & 0xffff) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar83 = (uint)bVar47 - (uint)bVar52;
                    iVar87 = (uint)(byte)((ulong)uVar64 >> 0x30) -
                             (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar91 = (uint)(byte)((ulong)uVar64 >> 0x38) -
                             (uint)(byte)((ulong)uVar72 >> 0x38);
                    puVar1 = (undefined8 *)((long)puVar1 + lVar23);
                    uVar72 = *puVar1;
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar120 = (CONCAT12(bVar38,(ushort)(byte)uVar65) & 0xffff) -
                              ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar124 = (uint)bVar38 - (uint)bVar42;
                    iVar128 = (uint)(byte)((ulong)uVar65 >> 0x10) -
                              (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar132 = (uint)(byte)((ulong)uVar65 >> 0x18) -
                              (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar95 = (CONCAT12(bVar48,(ushort)(byte)((ulong)uVar65 >> 0x20)) & 0xffff) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar102 = (uint)bVar48 - (uint)bVar52;
                    iVar109 = (uint)(byte)((ulong)uVar65 >> 0x30) -
                              (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar116 = (uint)(byte)((ulong)uVar65 >> 0x38) -
                              (uint)(byte)((ulong)uVar72 >> 0x38);
                    puVar1 = (undefined8 *)((long)puVar1 + lVar23);
                    uVar72 = *puVar1;
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar121 = (CONCAT12(bVar39,(ushort)(byte)uVar66) & 0xffff) -
                              ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar125 = (uint)bVar39 - (uint)bVar42;
                    iVar129 = (uint)(byte)((ulong)uVar66 >> 0x10) -
                              (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar133 = (uint)(byte)((ulong)uVar66 >> 0x18) -
                              (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar96 = (CONCAT12(bVar49,(ushort)(byte)((ulong)uVar66 >> 0x20)) & 0xffff) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar103 = (uint)bVar49 - (uint)bVar52;
                    iVar110 = (uint)(byte)((ulong)uVar66 >> 0x30) -
                              (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar117 = (uint)(byte)((ulong)uVar66 >> 0x38) -
                              (uint)(byte)((ulong)uVar72 >> 0x38);
                    puVar1 = (undefined8 *)((long)puVar1 + lVar23);
                    uVar72 = *puVar1;
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar122 = (CONCAT12(bVar40,(ushort)(byte)uVar67) & 0xffff) -
                              ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar126 = (uint)bVar40 - (uint)bVar42;
                    iVar130 = (uint)(byte)((ulong)uVar67 >> 0x10) -
                              (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar134 = (uint)(byte)((ulong)uVar67 >> 0x18) -
                              (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar97 = (CONCAT12(bVar50,(ushort)(byte)((ulong)uVar67 >> 0x20)) & 0xffff) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar104 = (uint)bVar50 - (uint)bVar52;
                    iVar111 = (uint)(byte)((ulong)uVar67 >> 0x30) -
                              (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar118 = (uint)(byte)((ulong)uVar67 >> 0x38) -
                              (uint)(byte)((ulong)uVar72 >> 0x38);
                    uVar72 = *(undefined8 *)((long)puVar1 + lVar23);
                    bVar42 = (byte)((ulong)uVar72 >> 8);
                    bVar52 = (byte)((ulong)uVar72 >> 0x28);
                    iVar123 = (uVar68 & 0xffff) -
                              ((CONCAT12(bVar42,(short)uVar72) & 0xff00ff) & 0xffff);
                    iVar127 = (uint)bVar41 - (uint)bVar42;
                    iVar131 = (uint)bVar43 - (uint)(byte)((ulong)uVar72 >> 0x10);
                    iVar135 = (uint)bVar44 - (uint)(byte)((ulong)uVar72 >> 0x18);
                    iVar98 = (CONCAT12(bVar51,(ushort)(byte)((ulong)uVar69 >> 0x20)) & 0xffff) -
                             (CONCAT12(bVar52,(ushort)(byte)((ulong)uVar72 >> 0x20)) & 0xffff);
                    iVar105 = (uint)bVar51 - (uint)bVar52;
                    iVar112 = (uint)(byte)((ulong)uVar69 >> 0x30) -
                              (uint)(byte)((ulong)uVar72 >> 0x30);
                    iVar119 = (uint)(byte)((ulong)uVar69 >> 0x38) -
                              (uint)(byte)((ulong)uVar72 >> 0x38);
                    uVar71 = iVar98 * iVar98 + iVar123 * iVar123 +
                             iVar96 * iVar96 + iVar121 * iVar121 +
                             iVar78 * iVar78 + iVar93 * iVar93 +
                             iVar77 * iVar77 + iVar92 * iVar92 + iVar70 * iVar70 + iVar76 * iVar76 +
                             iVar97 * iVar97 + iVar122 * iVar122 +
                             iVar95 * iVar95 + iVar120 * iVar120 + iVar79 * iVar79 + iVar94 * iVar94
                             + iVar105 * iVar105 + iVar127 * iVar127 +
                               iVar103 * iVar103 + iVar125 * iVar125 +
                               iVar82 * iVar82 + iVar100 * iVar100 +
                               iVar81 * iVar81 + iVar99 * iVar99 + iVar73 * iVar73 + iVar80 * iVar80
                               + iVar104 * iVar104 + iVar126 * iVar126 +
                                 iVar102 * iVar102 + iVar124 * iVar124 +
                                 iVar83 * iVar83 + iVar101 * iVar101 +
                             iVar112 * iVar112 + iVar131 * iVar131 +
                             iVar110 * iVar110 + iVar129 * iVar129 +
                             iVar86 * iVar86 + iVar107 * iVar107 +
                             iVar85 * iVar85 + iVar106 * iVar106 + iVar74 * iVar74 + iVar84 * iVar84
                             + iVar111 * iVar111 + iVar130 * iVar130 +
                               iVar109 * iVar109 + iVar128 * iVar128 +
                               iVar87 * iVar87 + iVar108 * iVar108 +
                             iVar119 * iVar119 + iVar135 * iVar135 +
                             iVar117 * iVar117 + iVar133 * iVar133 +
                             iVar90 * iVar90 + iVar114 * iVar114 +
                             iVar89 * iVar89 + iVar113 * iVar113 + iVar75 * iVar75 + iVar88 * iVar88
                             + iVar118 * iVar118 + iVar134 * iVar134 +
                               iVar116 * iVar116 + iVar132 * iVar132 +
                               iVar91 * iVar91 + iVar115 * iVar115;
                    ppppdVar24 = (double ****)(double)iVar30;
                    ppppdVar56 = (double ****)(double)((int)uVar21 + 4);
                    if (uVar26 <= uVar71) {
                      uVar71 = uVar26;
                      ppppdVar24 = ppppdVar16;
                      ppppdVar56 = ppppdVar25;
                    }
                    ppppdVar25 = ppppdVar56;
                    ppppdVar16 = ppppdVar24;
                    iVar30 = iVar30 + 1;
                    puVar29 = (undefined8 *)((long)puVar29 + 1);
                    lVar19 = lVar19 + -1;
                    uVar26 = uVar71;
                  } while (lVar19 != 0);
                  uVar21 = uVar21 + 1;
                  puVar27 = (undefined8 *)((long)puVar27 + lVar23);
                } while (uVar21 != iVar18 - 8U);
                if (uVar71 < 0x1901) {
                  ppppdVar24 = *(double *****)(lVar33 + 8);
                  uStack_280 = 0x42ff0000;
                  uStack_274 = 0;
                  uStack_270 = 0;
                  iStack_27c = 0;
                  uStack_278 = 0;
                  uStack_264 = 0;
                  uStack_260 = 0;
                  uStack_26c = 0;
                  uStack_268 = 0;
                  uStack_254 = 0;
                  uStack_25c = 0;
                  uStack_258 = 0;
                  pppdStack_248 = (double ***)0x0;
                  uStack_250 = 0;
                  uStack_24c = 0;
                  dStack_230 = 0.0;
                  uStack_228 = 0;
                  ppppdVar56 = (double ****)
                               (((double)ppppdVar16 + auVar60._0_8_) * (double)ppppdVar13 +
                               auVar57._0_8_);
                  ppppdVar58 = (double ****)
                               (((double)ppppdVar25 + auVar60._8_8_) * (double)ppppdVar13 +
                               auVar57._8_8_);
                  auStack_1f8[0] = 0x2010000;
                  uStack_1e8 = 0;
                  puStack_240 = &uStack_278;
                  pdStack_238 = &dStack_230;
                  puStack_1f0 = &uStack_280;
                  FUN_109a479a0(lVar33 + 0x60,auStack_1f8);
                  ppppdStack_1e0 = (double ****)CONCAT71(ppppdStack_1e0._1_7_,1);
                  pppdStack_1a8 = (double ***)CONCAT44(uStack_2a4,(uint)lVar34);
                  pppdStack_1b0 = (double ***)0x0;
                  pppdStack_198 = (double ***)0x4000000000000000;
                  pppdStack_1a0 = (double ***)0x0;
                  pppdStack_178 = (double ***)CONCAT44(uStack_274,uStack_278);
                  uStack_180 = (double ****)CONCAT44(iStack_27c,uStack_280);
                  pppdStack_170 = (double ***)CONCAT44(uStack_26c,uStack_270);
                  pppdStack_168 = (double ***)CONCAT44(uStack_264,uStack_268);
                  pppdStack_160 = (double ***)CONCAT44(uStack_25c,uStack_260);
                  pppdStack_158 = (double ***)CONCAT44(uStack_254,uStack_258);
                  pppdStack_150 = (double ***)CONCAT44(uStack_24c,uStack_250);
                  pppdStack_148 = pppdStack_248;
                  dStack_130 = 0.0;
                  dStack_128 = 0.0;
                  if ((double ****)pppdStack_248 != (double ****)0x0) {
                    piVar14 = (int *)((long)pppdStack_248 + 0x14);
                    do {
                      cVar3 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar12) {
                        *piVar14 = *piVar14 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  pppdStack_1d8 = (double ***)ppppdVar24;
                  pppdStack_1d0 = (double ***)ppppdVar16;
                  pppdStack_1c8 = (double ***)ppppdVar25;
                  pppdStack_1c0 = (double ***)ppppdVar56;
                  pppdStack_1b8 = (double ***)ppppdVar58;
                  pppdStack_190 = (double ***)ppppdVar13;
                  pppdStack_188 = (double ***)(1.0 / (double)ppppdVar13);
                  pppdStack_140 = (double ***)&pppdStack_178;
                  pdStack_138 = &dStack_130;
                  if (iStack_27c < 3) {
                    dStack_130 = *pdStack_238;
                    dStack_128 = pdStack_238[1];
                  }
                  else {
                    uStack_180 = (double ****)(ulong)uStack_280;
                    FUN_109a844cc(&uStack_180,iStack_27c,0,0,0);
                    if (0 < uStack_180._4_4_) {
                      lVar19 = 0;
                      do {
                        *(undefined4 *)((long)pppdStack_140 + lVar19 * 4) = puStack_240[lVar19];
                        pdStack_138[lVar19] = pdStack_238[lVar19];
                        lVar19 = lVar19 + 1;
                      } while (lVar19 < uStack_180._4_4_);
                    }
                  }
                  pppdStack_120 = (double ***)0xbff0000000000000;
                  if ((double ****)pppdStack_248 != (double ****)0x0) {
                    piVar14 = (int *)((long)pppdStack_248 + 0x14);
                    do {
                      iVar22 = *piVar14;
                      cVar3 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar12) {
                        *piVar14 = iVar22 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if ((iVar22 + -1 == 0) && ((double ****)pppdStack_248 != (double ****)0x0)) {
                      ppppdVar16 = (double ****)pppdStack_248[1];
                      if (((double ****)pppdStack_248[1] == (double ****)0x0) &&
                         ((ppppdVar16 = (double ****)CONCAT44(uStack_24c,uStack_250),
                          (double ****)CONCAT44(uStack_24c,uStack_250) == (double ****)0x0 &&
                          (ppppdVar16 = ppppdRam000000011382bb80,
                          ppppdRam000000011382bb80 == (double ****)0x0)))) {
                        FUN_109a83e3c();
                        ppppdVar16 = ppppdRam000000011382bb80;
                      }
                      (*(code *)(*ppppdVar16)[6])();
                    }
                  }
                  pppdStack_248 = (double ***)0x0;
                  uStack_268 = 0;
                  uStack_264 = 0;
                  uStack_270 = 0;
                  uStack_26c = 0;
                  uStack_258 = 0;
                  uStack_254 = 0;
                  uStack_260 = 0;
                  uStack_25c = 0;
                  if (0 < iStack_27c) {
                    lVar19 = 0;
                    do {
                      puStack_240[lVar19] = 0;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 < iStack_27c);
                  }
                  if (pdStack_238 != &dStack_230 && pdStack_238 != (double *)0x0) {
                    _free(pdStack_238[-1]);
                  }
                  ppppdVar25 = ppppdStack_1e0;
                  ppppdVar16 = ppppdStack_208;
                  if (ppppdStack_208 < ppppdStack_200) {
                    ppppdStack_208[1] = pppdStack_1d8;
                    *ppppdVar16 = (double ***)ppppdVar25;
                    pppdVar5 = pppdStack_1d0;
                    ppppdVar16[3] = pppdStack_1c8;
                    ppppdVar16[2] = pppdVar5;
                    pppdVar5 = pppdStack_1c0;
                    ppppdVar16[5] = pppdStack_1b8;
                    ppppdVar16[4] = pppdVar5;
                    pppdVar9 = pppdStack_188;
                    pppdVar8 = pppdStack_190;
                    pppdVar7 = pppdStack_1a0;
                    pppdVar6 = pppdStack_1a8;
                    pppdVar5 = pppdStack_1b0;
                    ppppdVar16[9] = pppdStack_198;
                    ppppdVar16[8] = pppdVar7;
                    ppppdVar16[0xb] = pppdVar9;
                    ppppdVar16[10] = pppdVar8;
                    ppppdVar16[7] = pppdVar6;
                    ppppdVar16[6] = pppdVar5;
                    ppppdVar25 = uStack_180;
                    iVar22 = uStack_180._4_4_;
                    ppppdVar16[0xd] = pppdStack_178;
                    ppppdVar16[0xc] = (double ***)ppppdVar25;
                    pppdVar5 = pppdStack_170;
                    ppppdVar16[0xf] = pppdStack_168;
                    ppppdVar16[0xe] = pppdVar5;
                    pppdVar5 = pppdStack_160;
                    ppppdVar16[0x11] = pppdStack_158;
                    ppppdVar16[0x10] = pppdVar5;
                    pppdVar6 = pppdStack_148;
                    ppppdVar16[0x16] = (double ***)0x0;
                    pppdVar5 = pppdStack_150;
                    ppppdVar16[0x13] = pppdStack_148;
                    ppppdVar16[0x12] = pppdVar5;
                    ppppdVar16[0x14] = (double ***)(ppppdVar16 + 0xd);
                    ppppdVar16[0x15] = (double ***)(ppppdVar16 + 0x16);
                    ppppdVar16[0x17] = (double ***)0x0;
                    if ((double ****)pppdVar6 != (double ****)0x0) {
                      piVar14 = (int *)((long)pppdVar6 + 0x14);
                      do {
                        cVar3 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                        if (bVar12) {
                          *piVar14 = *piVar14 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      iVar22 = uStack_180._4_4_;
                    }
                    if (iVar22 < 3) {
                      ppppdVar25 = (double ****)ppppdVar16[0x15];
                      *ppppdVar25 = (double ***)*pdStack_138;
                      ppppdVar25[1] = (double ***)pdStack_138[1];
                    }
                    else {
                      *(undefined4 *)((long)ppppdVar16 + 100) = 0;
                      FUN_109a844cc(ppppdVar16 + 0xc,uStack_180._4_4_,0,0,0);
                      if (0 < *(int *)((long)ppppdVar16 + 100)) {
                        lVar19 = 0;
                        ppppdVar25 = (double ****)ppppdVar16[0x14];
                        ppppdVar24 = (double ****)ppppdVar16[0x15];
                        do {
                          *(undefined4 *)((long)ppppdVar25 + lVar19 * 4) =
                               *(undefined4 *)((long)pppdStack_140 + lVar19 * 4);
                          ppppdVar24[lVar19] = (double ***)pdStack_138[lVar19];
                          lVar19 = lVar19 + 1;
                        } while (lVar19 < *(int *)((long)ppppdVar16 + 100));
                      }
                    }
                    ppppdVar16[0x18] = pppdStack_120;
                    ppppdStack_208 = ppppdVar16 + 0x1a;
                  }
                  else {
                    pppppdVar15 = &ppppdStack_210;
                    FUN_10942cbb8(pppppdVar15,&ppppdStack_1e0);
                    ppppdStack_208 = (double ****)pppppdVar15;
                  }
                  if ((double ****)pppdStack_148 != (double ****)0x0) {
                    piVar14 = (int *)((long)pppdStack_148 + 0x14);
                    do {
                      iVar22 = *piVar14;
                      cVar3 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar12) {
                        *piVar14 = iVar22 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if ((iVar22 + -1 == 0) && ((double ****)pppdStack_148 != (double ****)0x0)) {
                      ppppdVar16 = (double ****)pppdStack_148[1];
                      if (((double ****)pppdStack_148[1] == (double ****)0x0) &&
                         ((ppppdVar16 = (double ****)pppdStack_150,
                          (double ****)pppdStack_150 == (double ****)0x0 &&
                          (ppppdVar16 = ppppdRam000000011382bb80,
                          ppppdRam000000011382bb80 == (double ****)0x0)))) {
                        FUN_109a83e3c();
                        ppppdVar16 = ppppdRam000000011382bb80;
                      }
                      (*(code *)(*ppppdVar16)[6])();
                    }
                  }
                  pppdStack_148 = (double ***)0x0;
                  pppdStack_168 = (double ***)0x0;
                  pppdStack_170 = (double ***)0x0;
                  pppdStack_158 = (double ***)0x0;
                  pppdStack_160 = (double ***)0x0;
                  if (0 < uStack_180._4_4_) {
                    lVar19 = 0;
                    do {
                      *(undefined4 *)((long)pppdStack_140 + lVar19 * 4) = 0;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 < uStack_180._4_4_);
                  }
                  if (pdStack_138 != &dStack_130 && pdStack_138 != (double *)0x0) {
                    _free(pdStack_138[-1]);
                  }
                }
              }
            }
          }
        }
        plVar10 = (long *)plVar31[1];
        plVar32 = plVar31;
        if ((long *)plVar31[1] == (long *)0x0) {
          do {
            plVar31 = (long *)plVar32[2];
            bVar12 = (long *)*plVar31 != plVar32;
            plVar32 = plVar31;
          } while (bVar12);
        }
        else {
          do {
            plVar31 = plVar10;
            plVar10 = (long *)*plVar31;
          } while ((long *)*plVar31 != (long *)0x0);
        }
      } while (plVar31 != param_6 + 1);
    }
    if (0x13 < (int)((ulong)((long)ppppdStack_208 - (long)ppppdStack_210) >> 4) * -0x3b13b13b) {
      if (*(char *)(param_7 + 0x18) == '\x01') {
        FUN_10946b1d4(&ppppdStack_1e0,0x3ff0000000000000,param_3,&ppppdStack_210,&pppdStack_110,
                      param_7,5,0);
      }
      else {
        FUN_109466534(&ppppdStack_1e0,0x3ff0000000000000,param_3,&ppppdStack_210,&pppdStack_110,1,2,
                      0);
      }
      pppdStack_108 = pppdStack_1d8;
      pppdStack_110 = (double ***)ppppdStack_1e0;
      pppdStack_f8 = pppdStack_1c8;
      pppdStack_100 = pppdStack_1d0;
      pppdStack_e8 = pppdStack_1b8;
      pppdStack_f0 = pppdStack_1c0;
      pppdStack_e0 = pppdStack_1b0;
      pppdStack_a8 = pppdStack_178;
      pppdStack_b0 = (double ***)uStack_180;
      pppdStack_98 = pppdStack_168;
      pppdStack_a0 = pppdStack_170;
      pppdStack_90 = pppdStack_160;
      pppdStack_c8 = pppdStack_198;
      pppdStack_d0 = pppdStack_1a0;
      pppdStack_b8 = pppdStack_188;
      pppdStack_c0 = pppdStack_190;
    }
    ppppdVar16 = ppppdStack_208;
    ppppdVar13 = ppppdStack_210;
    bVar12 = lVar34 != 0;
    lVar34 = lVar34 + -1;
    pppppdVar17 = (double *****)ppppdStack_208;
    pppppdVar15 = (double *****)ppppdStack_210;
  } while (bVar12 && lVar34 != 0);
  *param_1 = (double ****)0x0;
  param_1[1] = (double ****)0x0;
  param_1[2] = (double ****)0x0;
  pppdStack_1d8 = (double ***)((ulong)pppdStack_1d8 & 0xffffffffffffff00);
  lVar34 = (long)ppppdStack_208 - (long)ppppdStack_210;
  if (lVar34 != 0) {
    uVar21 = (lVar34 >> 4) * 0x4ec4ec4ec4ec4ec5;
    ppppdStack_1e0 = (double ****)param_1;
    if (0x13b13b13b13b13b < uVar21) goto LAB_10946fd88;
    pppppdVar15 = param_1;
    FUN_109428814(param_1,uVar21,0);
    *param_1 = (double ****)pppppdVar15;
    param_1[1] = (double ****)pppppdVar15;
    param_1[2] = (double ****)((long)pppppdVar15 + lVar34);
    pppppdVar17 = param_1;
    FUN_10942857c(param_1,ppppdVar13,ppppdVar16,pppppdVar15);
    param_1[1] = (double ****)pppppdVar17;
  }
  param_1[5] = (double ****)pppdStack_108;
  param_1[4] = (double ****)pppdStack_110;
  param_1[7] = (double ****)pppdStack_f8;
  param_1[6] = (double ****)pppdStack_100;
  param_1[9] = (double ****)pppdStack_e8;
  param_1[8] = (double ****)pppdStack_f0;
  param_1[10] = (double ****)pppdStack_e0;
  param_1[0x11] = (double ****)pppdStack_a8;
  param_1[0x10] = (double ****)pppdStack_b0;
  param_1[0x13] = (double ****)pppdStack_98;
  param_1[0x12] = (double ****)pppdStack_a0;
  param_1[0x14] = (double ****)pppdStack_90;
  param_1[0xd] = (double ****)pppdStack_c8;
  param_1[0xc] = (double ****)pppdStack_d0;
  param_1[0xf] = (double ****)pppdStack_b8;
  param_1[0xe] = (double ****)pppdStack_c0;
  ppppdStack_1e0 = (double ****)&ppppdStack_210;
  FUN_10942a570(&ppppdStack_1e0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
LAB_10946fd88:
  FUN_109428800();
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10946fd90);
  (*pcVar11)();
}



/* Entry: 10946fe14; end: 109470703;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10946fe14(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  undefined8 *******pppppppuVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  undefined8 *****pppppuVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *****pppppuVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long *plStack_108;
  undefined8 *****pppppuStack_100;
  undefined8 *****pppppuStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  undefined8 ******ppppppuStack_78;
  undefined1 uStack_70;
  
  lStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  pppppppuStack_b8 = (undefined8 *******)0x0;
  lStack_b0 = 0;
  lVar13 = *param_3;
  lVar28 = param_3[1];
  pppppppuStack_c0 = &pppppppuStack_b8;
  if (lVar28 == lVar13) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pppppuStack_100 = (undefined8 *****)((ulong)pppppuStack_100 & 0xffffffffffffff00);
    plStack_108 = param_1;
  }
  else {
    uVar17 = 0;
    iVar20 = 0;
    do {
      plVar6 = plStack_a0;
      pbVar23 = (byte *)(lVar13 + uVar17 * 0xd0);
      if ((*pbVar23 & 1) != 0) {
        if (plStack_a0 < plStack_98) {
          lVar13 = *(long *)pbVar23;
          plStack_a0[1] = *(long *)(pbVar23 + 8);
          *plVar6 = lVar13;
          lVar13 = *(long *)(pbVar23 + 0x10);
          plVar6[3] = *(long *)(pbVar23 + 0x18);
          plVar6[2] = lVar13;
          lVar13 = *(long *)(pbVar23 + 0x20);
          plVar6[5] = *(long *)(pbVar23 + 0x28);
          plVar6[4] = lVar13;
          lVar28 = *(long *)(pbVar23 + 0x38);
          lVar13 = *(long *)(pbVar23 + 0x30);
          lVar29 = *(long *)(pbVar23 + 0x40);
          lVar31 = *(long *)(pbVar23 + 0x58);
          lVar30 = *(long *)(pbVar23 + 0x50);
          plVar6[9] = *(long *)(pbVar23 + 0x48);
          plVar6[8] = lVar29;
          plVar6[0xb] = lVar31;
          plVar6[10] = lVar30;
          plVar6[7] = lVar28;
          plVar6[6] = lVar13;
          lVar29 = *(long *)(pbVar23 + 0x68);
          lVar28 = *(long *)(pbVar23 + 0x60);
          lVar13 = *(long *)(pbVar23 + 0x70);
          plVar6[0xf] = *(long *)(pbVar23 + 0x78);
          plVar6[0xe] = lVar13;
          lVar13 = *(long *)(pbVar23 + 0x80);
          plVar6[0x11] = *(long *)(pbVar23 + 0x88);
          plVar6[0x10] = lVar13;
          lVar13 = *(long *)(pbVar23 + 0x98);
          lVar31 = *(long *)(pbVar23 + 0x98);
          lVar30 = *(long *)(pbVar23 + 0x90);
          plVar6[0x16] = 0;
          plVar6[0x13] = lVar31;
          plVar6[0x12] = lVar30;
          plVar6[0x14] = (long)(plVar6 + 0xd);
          plVar6[0x15] = (long)(plVar6 + 0x16);
          plVar6[0x17] = 0;
          plVar6[0xd] = lVar29;
          plVar6[0xc] = lVar28;
          if (lVar13 != 0) {
            piVar1 = (int *)(lVar13 + 0x14);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)(pbVar23 + 100) < 3) {
            puVar14 = *(undefined8 **)(pbVar23 + 0xa8);
            puVar16 = (undefined8 *)plVar6[0x15];
            *puVar16 = *puVar14;
            puVar16[1] = puVar14[1];
          }
          else {
            *(undefined4 *)((long)plVar6 + 100) = 0;
            FUN_109a844cc(plVar6 + 0xc,*(undefined4 *)(pbVar23 + 100),0,0,0);
            if (0 < *(int *)((long)plVar6 + 100)) {
              lVar13 = 0;
              lVar28 = *(long *)(pbVar23 + 0xa0);
              lVar30 = *(long *)(pbVar23 + 0xa8);
              lVar29 = plVar6[0x14];
              lVar31 = plVar6[0x15];
              do {
                *(undefined4 *)(lVar29 + lVar13 * 4) = *(undefined4 *)(lVar28 + lVar13 * 4);
                *(undefined8 *)(lVar31 + lVar13 * 8) = *(undefined8 *)(lVar30 + lVar13 * 8);
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)((long)plVar6 + 100));
            }
          }
          plVar6[0x18] = *(long *)(pbVar23 + 0xc0);
          plVar6 = plVar6 + 0x1a;
        }
        else {
          plVar6 = &lStack_a8;
          FUN_10942cbb8(plVar6,pbVar23);
        }
        uStack_c8 = *(undefined8 *)(pbVar23 + 0x28);
        uStack_d0 = *(undefined8 *)(pbVar23 + 0x20);
        plStack_a0 = plVar6;
        FUN_10946ee4c(&puStack_e8,param_2,&uStack_d0,8,0x50);
        puVar16 = puStack_e0;
        puVar14 = puStack_e8;
        plStack_108 = (long *)CONCAT44(plStack_108._4_4_,iVar20);
        pppppuStack_f8 = (undefined8 *****)0x0;
        lStack_f0 = 0;
        pppppuStack_100 = (undefined8 *****)0x0;
        pppppppuStack_88 = (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
        pppppuVar18 = (undefined8 *****)((long)puStack_e0 - (long)puStack_e8);
        ppppppuStack_90 = &pppppuStack_100;
        pppppppuVar15 = &pppppppuStack_b8;
        if (pppppuVar18 == (undefined8 *****)0x0) {
          pppppuVar24 = (undefined8 *****)0x0;
          pppppppuVar3 = pppppppuStack_b8;
          iVar21 = iVar20;
        }
        else {
          if ((long)pppppuVar18 < 0) {
            FUN_10939d3e4();
            goto LAB_109470598;
          }
          pppppuVar24 = pppppuVar18;
          __Znwm();
          lStack_f0 = (long)pppppuVar24 + (long)pppppuVar18;
          pppppuStack_100 = pppppuVar24;
          pppppuStack_f8 = pppppuVar24;
          do {
            uVar26 = puVar14[2];
            pppppuVar18 = pppppuVar24 + 1;
            *pppppuVar18 = (undefined8 ****)0x0;
            pppppuVar24[2] = (undefined8 ****)0x0;
            *(undefined4 *)(pppppuVar24 + 3) = 0;
            *pppppuVar24 = (undefined8 ****)&PTR_FUN_110af4c80;
            if (uVar26 == 0) {
              uVar25 = puVar14[2];
              iVar21 = (int)(uVar25 >> 0x20);
              if (uVar25 >> 0x20 == 0 && (int)uVar25 == 0) goto LAB_109470070;
LAB_109470110:
              *pppppuVar18 = (undefined8 ****)0x0;
              pppppuVar24[2] = (undefined8 ****)0x0;
              *(undefined4 *)(pppppuVar24 + 3) = 0;
              iVar22 = (int)uVar25;
              ppppuVar7 = (undefined8 ****)(long)(iVar22 * iVar21);
              __Znam();
              pppppuVar24[1] = ppppuVar7;
              *(int *)(pppppuVar24 + 2) = iVar22;
              *(int *)((long)pppppuVar24 + 0x14) = iVar21;
              *(int *)(pppppuVar24 + 3) = iVar22;
LAB_109470130:
              if (0 < iVar21) {
                iVar21 = 0;
                do {
                  _memcpy((undefined8 ****)
                          ((long)pppppuVar24[1] + (long)*(int *)(pppppuVar24 + 3) * (long)iVar21),
                          puVar14[1] + (long)*(int *)(puVar14 + 3) * (long)iVar21,
                          (long)*(int *)(pppppuVar24 + 2));
                  iVar21 = iVar21 + 1;
                } while (iVar21 < *(int *)((long)pppppuVar24 + 0x14));
              }
            }
            else {
              iVar21 = (int)(uVar26 >> 0x20);
              iVar22 = (int)uVar26;
              ppppuVar7 = (undefined8 ****)(long)(iVar22 * iVar21);
              __Znam();
              pppppuVar24[1] = ppppuVar7;
              *(int *)(pppppuVar24 + 2) = iVar22;
              *(int *)((long)pppppuVar24 + 0x14) = iVar21;
              *(int *)(pppppuVar24 + 3) = iVar22;
              uVar25 = puVar14[2];
              iVar21 = (int)(uVar25 >> 0x20);
              if (uVar25 >> 0x20 != 0 || (int)uVar25 != 0) {
                if ((iVar22 != (int)uVar25) || (uVar26 >> 0x20 != uVar25 >> 0x20)) {
                  __ZdaPv();
                  goto LAB_109470110;
                }
                goto LAB_109470130;
              }
              __ZdaPv();
LAB_109470070:
              *pppppuVar18 = (undefined8 ****)0x0;
              pppppuVar24[2] = (undefined8 ****)0x0;
              *(undefined4 *)(pppppuVar24 + 3) = 0;
            }
            puVar14 = puVar14 + 4;
            pppppuVar24 = pppppuVar24 + 4;
          } while (puVar14 != puVar16);
          pppppppuVar3 = pppppppuStack_b8;
          iVar21 = (int)plStack_108;
        }
        while (pppppppuVar19 = pppppppuVar15, pppppuStack_f8 = pppppuVar24,
              pppppppuVar3 != (undefined8 *******)0x0) {
          while (pppppppuVar19 = pppppppuVar3, *(int *)(pppppppuVar19 + 4) <= iVar21) {
            if (iVar21 <= *(int *)(pppppppuVar19 + 4)) goto LAB_1094703a0;
            pppppppuVar3 = (undefined8 *******)pppppppuVar19[1];
            if ((undefined8 *******)pppppppuVar19[1] == (undefined8 *******)0x0) {
              pppppppuVar15 = pppppppuVar19 + 1;
              goto LAB_1094701dc;
            }
          }
          pppppppuVar15 = pppppppuVar19;
          pppppppuVar3 = (undefined8 *******)*pppppppuVar19;
        }
LAB_1094701dc:
        ppppppuVar8 = (undefined8 ******)0x40;
        __Znwm();
        pppppuVar18 = pppppuStack_100;
        pppppppuStack_88 = &pppppppuStack_c0;
        *(int *)(ppppppuVar8 + 4) = iVar21;
        ppppppuVar8[6] = (undefined8 *****)0x0;
        ppppppuVar8[7] = (undefined8 *****)0x0;
        ppppppuStack_78 = ppppppuVar8 + 5;
        *ppppppuStack_78 = (undefined8 *****)0x0;
        uStack_80 = 0;
        uStack_70 = 0;
        pppppuVar27 = (undefined8 *****)((long)pppppuVar24 - (long)pppppuStack_100);
        ppppppuStack_90 = ppppppuVar8;
        if (pppppuVar27 != (undefined8 *****)0x0) {
          if ((long)pppppuVar27 < 0) {
            FUN_10939d3e4();
            goto LAB_109470598;
          }
          pppppuVar9 = pppppuVar27;
          __Znwm();
          ppppppuVar8[5] = pppppuVar9;
          ppppppuVar8[6] = pppppuVar9;
          ppppppuVar8[7] = (undefined8 *****)((long)pppppuVar9 + (long)pppppuVar27);
          do {
            ppppuVar7 = pppppuVar18[2];
            pppppuVar27 = pppppuVar9 + 1;
            *pppppuVar27 = (undefined8 ****)0x0;
            pppppuVar9[2] = (undefined8 ****)0x0;
            *(undefined4 *)(pppppuVar9 + 3) = 0;
            *pppppuVar9 = (undefined8 ****)&PTR_FUN_110af4c80;
            if (ppppuVar7 == (undefined8 ****)0x0) {
              ppppuVar10 = pppppuVar18[2];
              iVar21 = (int)((ulong)ppppuVar10 >> 0x20);
              if ((ulong)ppppuVar10 >> 0x20 == 0 && (int)ppppuVar10 == 0) goto LAB_109470250;
LAB_1094702f0:
              *pppppuVar27 = (undefined8 ****)0x0;
              pppppuVar9[2] = (undefined8 ****)0x0;
              *(undefined4 *)(pppppuVar9 + 3) = 0;
              iVar22 = (int)ppppuVar10;
              ppppuVar7 = (undefined8 ****)(long)(iVar22 * iVar21);
              __Znam();
              pppppuVar9[1] = ppppuVar7;
              *(int *)(pppppuVar9 + 2) = iVar22;
              *(int *)((long)pppppuVar9 + 0x14) = iVar21;
              *(int *)(pppppuVar9 + 3) = iVar22;
LAB_109470310:
              if (0 < iVar21) {
                iVar21 = 0;
                do {
                  _memcpy((undefined8 ****)
                          ((long)pppppuVar9[1] + (long)*(int *)(pppppuVar9 + 3) * (long)iVar21),
                          (undefined8 ****)
                          ((long)pppppuVar18[1] + (long)*(int *)(pppppuVar18 + 3) * (long)iVar21),
                          (long)*(int *)(pppppuVar9 + 2));
                  iVar21 = iVar21 + 1;
                } while (iVar21 < *(int *)((long)pppppuVar9 + 0x14));
              }
            }
            else {
              iVar21 = (int)((ulong)ppppuVar7 >> 0x20);
              iVar22 = (int)ppppuVar7;
              ppppuVar10 = (undefined8 ****)(long)(iVar22 * iVar21);
              __Znam();
              pppppuVar9[1] = ppppuVar10;
              *(int *)(pppppuVar9 + 2) = iVar22;
              *(int *)((long)pppppuVar9 + 0x14) = iVar21;
              *(int *)(pppppuVar9 + 3) = iVar22;
              ppppuVar10 = pppppuVar18[2];
              iVar21 = (int)((ulong)ppppuVar10 >> 0x20);
              if ((ulong)ppppuVar10 >> 0x20 != 0 || (int)ppppuVar10 != 0) {
                if ((iVar22 != (int)ppppuVar10) ||
                   ((ulong)ppppuVar7 >> 0x20 != (ulong)ppppuVar10 >> 0x20)) {
                  __ZdaPv();
                  goto LAB_1094702f0;
                }
                goto LAB_109470310;
              }
              __ZdaPv();
LAB_109470250:
              *pppppuVar27 = (undefined8 ****)0x0;
              pppppuVar9[2] = (undefined8 ****)0x0;
              *(undefined4 *)(pppppuVar9 + 3) = 0;
            }
            pppppuVar18 = pppppuVar18 + 4;
            pppppuVar9 = pppppuVar9 + 4;
          } while (pppppuVar18 != pppppuVar24);
          ppppppuVar8[6] = pppppuVar9;
        }
        *ppppppuVar8 = (undefined8 *****)0x0;
        ppppppuVar8[1] = (undefined8 *****)0x0;
        ppppppuVar8[2] = pppppppuVar19;
        *pppppppuVar15 = ppppppuVar8;
        if ((undefined8 *******)*pppppppuStack_c0 != (undefined8 *******)0x0) {
          ppppppuVar8 = *pppppppuVar15;
          pppppppuStack_c0 = (undefined8 *******)*pppppppuStack_c0;
        }
        func_0x000107c27d40(pppppppuStack_b8,ppppppuVar8);
        lStack_b0 = lStack_b0 + 1;
LAB_1094703a0:
        pppppuVar24 = pppppuStack_100;
        pppppuVar18 = pppppuStack_f8;
        if (pppppuStack_100 != (undefined8 *****)0x0) {
          while (pppppuVar18 != pppppuVar24) {
            pppppuVar18 = pppppuVar18 + -4;
            (*(code *)**pppppuVar18)(pppppuVar18);
          }
          pppppuStack_f8 = pppppuVar24;
          __ZdlPv(pppppuStack_100);
        }
        puVar16 = puStack_e8;
        puVar14 = puStack_e0;
        if (puStack_e8 != (undefined8 *)0x0) {
          while (puVar14 != puVar16) {
            puVar14 = puVar14 + -4;
            (**(code **)*puVar14)(puVar14);
          }
          puStack_e0 = puVar16;
          __ZdlPv(puStack_e8);
        }
        iVar20 = iVar20 + 1;
        lVar13 = *param_3;
        lVar28 = param_3[1];
      }
      plVar6 = plStack_a0;
      lVar29 = lStack_a8;
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulong)((lVar28 - lVar13 >> 4) * 0x4ec4ec4ec4ec4ec5));
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pppppuStack_100 = (undefined8 *****)((ulong)pppppuStack_100 & 0xffffffffffffff00);
    lVar13 = (long)plStack_a0 - lStack_a8;
    plStack_108 = param_1;
    if (lVar13 != 0) {
      uVar17 = (lVar13 >> 4) * 0x4ec4ec4ec4ec4ec5;
      if (0x13b13b13b13b13b < uVar17) {
        FUN_109428800();
LAB_109470598:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10947059c);
        (*pcVar4)();
      }
      plVar11 = param_1;
      FUN_109428814(param_1,uVar17,0);
      *param_1 = (long)plVar11;
      param_1[1] = (long)plVar11;
      param_1[2] = (long)plVar11 + lVar13;
      plVar12 = param_1;
      FUN_10942857c(param_1,lVar29,plVar6,plVar11);
      param_1[1] = (long)plVar12;
    }
  }
  plVar6 = param_1 + 4;
  *plVar6 = 0;
  param_1[3] = (long)plVar6;
  param_1[5] = 0;
  pppppppuVar15 = pppppppuStack_c0;
  while ((undefined8 ********)pppppppuVar15 != &pppppppuStack_b8) {
    FUN_10947086c(param_1 + 3,plVar6,pppppppuVar15 + 4,pppppppuVar15 + 4);
    pppppppuVar3 = (undefined8 *******)pppppppuVar15[1];
    pppppppuVar19 = pppppppuVar15;
    if ((undefined8 *******)pppppppuVar15[1] == (undefined8 *******)0x0) {
      do {
        pppppppuVar15 = (undefined8 *******)pppppppuVar19[2];
        bVar5 = (undefined8 *******)*pppppppuVar15 != pppppppuVar19;
        pppppppuVar19 = pppppppuVar15;
      } while (bVar5);
    }
    else {
      do {
        pppppppuVar15 = pppppppuVar3;
        pppppppuVar3 = (undefined8 *******)*pppppppuVar15;
      } while ((undefined8 *******)*pppppppuVar15 != (undefined8 *******)0x0);
    }
  }
  func_0x000109436028(&pppppppuStack_c0,pppppppuStack_b8);
  plStack_108 = &lStack_a8;
  FUN_10942a570(&plStack_108);
  return;
}



/* Entry: 109470704; end: 1094707e3;  */

long FUN_109470704(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -4;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 1094707e4; end: 10947086b;  */

undefined8 * FUN_1094707e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar3 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)*puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar3[1];
      puVar1 = puVar4;
      if (puVar2 != puVar4) {
        do {
          puVar2 = puVar2 + -4;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar4);
        puVar1 = *(undefined8 **)*param_1;
      }
      puVar3[1] = puVar4;
      __ZdlPv(puVar1);
    }
  }
  return param_1;
}



/* Entry: 10947086c; end: 109470a03;  */

undefined1  [16]
FUN_10947086c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  
  plVar5 = param_1;
  FUN_109470a04(param_1,param_2,&uStack_68,auStack_70,param_3);
  puVar9 = (undefined8 *)*plVar5;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x40;
    __Znwm();
    *(undefined4 *)(puVar9 + 4) = *param_4;
    puStack_60 = puVar9 + 5;
    *puStack_60 = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    lVar1 = *(long *)(param_4 + 2);
    lVar2 = *(long *)(param_4 + 4);
    uStack_58 = 0;
    lVar3 = lVar2 - lVar1;
    if (lVar3 != 0) {
      if (lVar3 < 0) {
        FUN_10939d3e4();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1094709a0);
        (*pcVar4)();
      }
      lVar6 = lVar3;
      __Znwm();
      lVar10 = 0;
      puVar9[5] = lVar6;
      puVar9[6] = lVar6;
      puVar9[7] = lVar6 + lVar3;
      do {
        FUN_10939d4b8(lVar6 + lVar10,lVar1 + lVar10);
        lVar10 = lVar10 + 0x20;
      } while (lVar1 + lVar10 != lVar2);
      puVar9[6] = lVar6 + lVar10;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = uStack_68;
    *plVar5 = (long)puVar9;
    puVar8 = puVar9;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar8 = (undefined8 *)*plVar5;
    }
    func_0x000107c27d40(param_1[1],puVar8);
    param_1[2] = param_1[2] + 1;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = puVar9;
  return auVar11;
}



/* Entry: 109470a04; end: 109470bb3;  */

long * FUN_109470a04(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar7[2];
          bVar2 = (long *)*plVar3 != plVar7;
          plVar7 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 == plVar4) || (iVar1 < (int)plVar3[4])) {
        if (plVar6 == (long *)0x0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
        *param_3 = (long)plVar3;
        return plVar3;
      }
      plVar7 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      do {
        while (plVar5 = plVar7, iVar1 < (int)plVar5[4]) {
          plVar4 = plVar5;
          plVar7 = (long *)*plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_109470b9c;
        }
        if (iVar1 <= (int)plVar5[4]) break;
        plVar4 = plVar5 + 1;
        plVar7 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_109470b9c:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar2 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    iVar1 = *param_5;
    if (iVar1 <= (int)plVar7[4]) {
      plVar7 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      do {
        while (plVar5 = plVar7, iVar1 < (int)plVar5[4]) {
          plVar4 = plVar5;
          plVar7 = (long *)*plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_109470af4;
        }
        if (iVar1 <= (int)plVar5[4]) break;
        plVar4 = plVar5 + 1;
        plVar7 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_109470af4:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar7;
  return plVar7 + 1;
}



/* Entry: 109470bb4; end: 109470c4b;  */

long * FUN_109470bb4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    if (((char)param_1[2] == '\x01') &&
       (puVar4 = *(undefined8 **)(lVar3 + 0x28), puVar4 != (undefined8 *)0x0)) {
      puVar2 = *(undefined8 **)(lVar3 + 0x30);
      puVar1 = puVar4;
      if (puVar2 != puVar4) {
        do {
          puVar2 = puVar2 + -4;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar4);
        puVar1 = *(undefined8 **)(lVar3 + 0x28);
      }
      *(undefined8 **)(lVar3 + 0x30) = puVar4;
      __ZdlPv(puVar1);
    }
    __ZdlPv(lVar3);
  }
  return param_1;
}



/* Entry: 109470c4c; end: 109470daf;  */

long * FUN_109470c4c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *extraout_x8;
  long *plVar8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_130;
  long lStack_128;
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0xd20;
  __Znwm();
  FUN_109470fb4();
  lStack_98 = lVar2;
  FUN_10944b3b0(lVar2 + 0x10,param_4,param_5,param_3,2);
  FUN_10944c9e4(lVar2 + 0x10,param_3);
  lVar1 = lStack_98;
  if (*(int *)(lStack_98 + 0x98) == 2) {
    uStack_a0 = 0;
    lStack_98 = 0;
    pppuStack_70 = appuStack_88;
    lStack_90 = lVar1;
    appuStack_88[0] = &PTR_FUN_110af64f0;
    pppuStack_50 = appuStack_68;
    appuStack_68[0] = &PTR_DAT_110af6580;
    FUN_109470ec4(param_1,&lStack_90);
    FUN_109471184(&lStack_90);
    func_0x0001094710ec(&uStack_a0,0);
  }
  else {
    *param_1 = 0;
    param_1[0x48] = 0;
  }
  plVar3 = &lStack_98;
  func_0x0001094710ec(plVar3,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail();
  FUN_109471184(&lStack_90);
  func_0x0001094710ec(&uStack_a0,0);
  plVar6 = (long *)0x0;
  func_0x0001094710ec(&lStack_98);
  plVar4 = plVar3;
  __Unwind_Resume();
  plVar7 = &lStack_1c0;
  pcStack_a8 = FUN_109470db0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*plVar6;
  plVar5 = (long *)((long)plVar8 + 0x10);
  uStack_d0 = param_5;
  lStack_c8 = lVar2;
  uStack_c0 = param_3;
  plStack_b8 = plVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10944c9e4();
  if (*(int *)((long)plVar8 + 0x98) == 0) {
    *extraout_x8 = 0;
    extraout_x8[0xe0] = 0;
  }
  else {
    uStack_1b8 = *(undefined8 *)((long)plVar8 + 0xa8);
    lStack_1c0 = *(long *)((long)plVar8 + 0xa0);
    uStack_1a8 = *(undefined8 *)((long)plVar8 + 0xb8);
    uStack_1b0 = *(undefined8 *)((long)plVar8 + 0xb0);
    uStack_198 = *(undefined8 *)((long)plVar8 + 200);
    uStack_1a0 = *(undefined8 *)((long)plVar8 + 0xc0);
    uStack_190 = *(undefined8 *)((long)plVar8 + 0xd0);
    uStack_158 = *(undefined8 *)((long)plVar8 + 0x108);
    uStack_160 = *(undefined8 *)((long)plVar8 + 0x100);
    uStack_148 = *(undefined8 *)((long)plVar8 + 0x118);
    uStack_150 = *(undefined8 *)((long)plVar8 + 0x110);
    uStack_140 = *(undefined8 *)((long)plVar8 + 0x120);
    uStack_178 = *(undefined8 *)((long)plVar8 + 0xe8);
    uStack_180 = *(undefined8 *)((long)plVar8 + 0xe0);
    uStack_168 = *(undefined8 *)((long)plVar8 + 0xf8);
    uStack_170 = *(undefined8 *)((long)plVar8 + 0xf0);
    uStack_130 = (uint)(*(int *)((long)plVar8 + 0x98) != 2);
    uStack_e8 = 0;
    lStack_128 = *plVar6;
    uStack_108 = 0;
    *plVar6 = 0;
    FUN_109471f54(auStack_100,plVar6 + 5);
    FUN_1094720c0(auStack_120,plVar6 + 1);
    func_0x000109470f18(extraout_x8);
    plVar5 = &lStack_128;
    FUN_109471184();
    plVar4 = plVar7;
    plVar8 = &lStack_1c0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_109471184((undefined1 *)((long)plVar8 + 0x98));
  __Unwind_Resume();
  *plVar5 = 0;
  plVar5[4] = 0;
  plVar5[8] = 0;
  *plVar5 = *plVar4;
  *plVar4 = 0;
  FUN_109471f54(plVar5 + 5,plVar4 + 5);
  FUN_1094720c0(plVar5 + 1,plVar4 + 1);
  *(undefined1 *)(plVar5 + 9) = 1;
  return plVar5;
}



/* Entry: 109470db0; end: 109470ec3;  */

undefined8 * FUN_109470db0(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  long lStack_38;
  
  puVar2 = &uStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)((long)puVar3 + 0x10);
  FUN_10944c9e4();
  if (*(int *)((long)puVar3 + 0x98) == 0) {
    *param_1 = 0;
    param_1[0xe0] = 0;
  }
  else {
    uStack_118 = *(undefined8 *)((long)puVar3 + 0xa8);
    uStack_120 = *(undefined8 *)((long)puVar3 + 0xa0);
    uStack_108 = *(undefined8 *)((long)puVar3 + 0xb8);
    uStack_110 = *(undefined8 *)((long)puVar3 + 0xb0);
    uStack_f8 = *(undefined8 *)((long)puVar3 + 200);
    uStack_100 = *(undefined8 *)((long)puVar3 + 0xc0);
    uStack_f0 = *(undefined8 *)((long)puVar3 + 0xd0);
    uStack_b8 = *(undefined8 *)((long)puVar3 + 0x108);
    uStack_c0 = *(undefined8 *)((long)puVar3 + 0x100);
    uStack_a8 = *(undefined8 *)((long)puVar3 + 0x118);
    uStack_b0 = *(undefined8 *)((long)puVar3 + 0x110);
    uStack_a0 = *(undefined8 *)((long)puVar3 + 0x120);
    uStack_d8 = *(undefined8 *)((long)puVar3 + 0xe8);
    uStack_e0 = *(undefined8 *)((long)puVar3 + 0xe0);
    uStack_c8 = *(undefined8 *)((long)puVar3 + 0xf8);
    uStack_d0 = *(undefined8 *)((long)puVar3 + 0xf0);
    uStack_90 = (uint)(*(int *)((long)puVar3 + 0x98) != 2);
    uStack_48 = 0;
    uStack_88 = *param_3;
    uStack_68 = 0;
    *param_3 = 0;
    FUN_109471f54(auStack_60,param_3 + 5);
    FUN_1094720c0(auStack_80,param_3 + 1);
    func_0x000109470f18(param_1);
    puVar1 = &uStack_88;
    FUN_109471184();
    param_2 = puVar2;
    puVar3 = &uStack_120;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_109471184((undefined1 *)((long)puVar3 + 0x98));
  __Unwind_Resume();
  *puVar1 = 0;
  puVar1[4] = 0;
  puVar1[8] = 0;
  *puVar1 = *param_2;
  *param_2 = 0;
  FUN_109471f54(puVar1 + 5,param_2 + 5);
  FUN_1094720c0(puVar1 + 1,param_2 + 1);
  *(undefined1 *)(puVar1 + 9) = 1;
  return puVar1;
}



/* Entry: 109470ec4; end: 109470fb3;  */

undefined8 * FUN_109470ec4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_109471f54(param_1 + 5,param_2 + 5);
  FUN_1094720c0(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



/* Entry: 109470fb4; end: 109471093;  */

long * FUN_109470fb4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar5 = *param_2;
  lVar2 = param_2[1];
  *param_1 = lVar5;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *param_2;
  }
  uStack_a0 = 5;
  uStack_98 = 3;
  uStack_90 = 0x4000000000000000;
  uStack_80 = 0xa00000001;
  uStack_88 = 0x1f400000014;
  uStack_70 = 0x4010000000000000;
  uStack_78 = 0x4014000000000000;
  uStack_60 = 0x3fd0000000000000;
  uStack_68 = 0x400c000000000000;
  uStack_50 = 3000;
  uStack_58 = 1000;
  uStack_40 = 5;
  uStack_48 = 3;
  uStack_30 = 0x14;
  uStack_38 = 0x5dc;
  uStack_28 = 0x1e00000046;
  FUN_10944ade4(param_1 + 2,*(undefined8 *)(lVar5 + 0xf0),&uStack_a0);
  return param_1;
}



/* Entry: 109471094; end: 109471183;  */

long FUN_109471094(long param_1)

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



/* Entry: 109471184; end: 109471227;  */

undefined8 * FUN_109471184(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1094711e8;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1094711e8:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
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



/* Entry: 109471228; end: 10947122f;  */

void FUN_109471228(void)

{
  return;
}



/* Entry: 109471230; end: 109471253;  */

void FUN_109471230(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110af64f0;
  return;
}



/* Entry: 109471254; end: 10947126b;  */

void FUN_109471254(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110af64f0;
  return;
}



/* Entry: 10947126c; end: 1094712e3;  */

void FUN_10947126c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_109435f4c(lVar1 + 0x10);
    FUN_109471094(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1094712e4; end: 1094712f7;  */

undefined ** FUN_1094712e4(void)

{
  return &PTR_DAT_110af6560;
}



/* Entry: 1094712f8; end: 10947131b;  */

void FUN_1094712f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af6580;
  return;
}



/* Entry: 10947131c; end: 109471333;  */

void FUN_10947131c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110af6580;
  return;
}



/* Entry: 109471334; end: 109471dbb;  */

undefined8 * FUN_109471334(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  
  puVar5 = (undefined8 *)0xd20;
  __Znwm();
  lVar8 = param_2[1];
  uVar21 = *param_2;
  puVar5[1] = param_2[1];
  *puVar5 = uVar21;
  if (lVar8 != 0) {
    plVar15 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar21 = param_2[0xe];
  uVar26 = param_2[0x11];
  uVar23 = param_2[0x10];
  puVar5[0xf] = param_2[0xf];
  puVar5[0xe] = uVar21;
  puVar5[0x11] = uVar26;
  puVar5[0x10] = uVar23;
  uVar21 = *(undefined8 *)((long)param_2 + 0x8c);
  *(undefined8 *)((long)puVar5 + 0x94) = *(undefined8 *)((long)param_2 + 0x94);
  *(undefined8 *)((long)puVar5 + 0x8c) = uVar21;
  uVar21 = param_2[6];
  uVar26 = param_2[9];
  uVar23 = param_2[8];
  puVar5[7] = param_2[7];
  puVar5[6] = uVar21;
  puVar5[9] = uVar26;
  puVar5[8] = uVar23;
  uVar26 = param_2[10];
  uVar23 = param_2[0xd];
  uVar21 = param_2[0xc];
  puVar5[0xb] = param_2[0xb];
  puVar5[10] = uVar26;
  puVar5[0xd] = uVar23;
  puVar5[0xc] = uVar21;
  uVar26 = param_2[2];
  uVar23 = param_2[5];
  uVar21 = param_2[4];
  puVar5[3] = param_2[3];
  puVar5[2] = uVar26;
  puVar5[5] = uVar23;
  puVar5[4] = uVar21;
  uVar21 = param_2[0x14];
  uVar26 = param_2[0x17];
  uVar23 = param_2[0x16];
  puVar5[0x15] = param_2[0x15];
  puVar5[0x14] = uVar21;
  puVar5[0x17] = uVar26;
  puVar5[0x16] = uVar23;
  uVar21 = param_2[0x18];
  puVar5[0x19] = param_2[0x19];
  puVar5[0x18] = uVar21;
  puVar5[0x1a] = param_2[0x1a];
  uVar21 = param_2[0x20];
  uVar26 = param_2[0x23];
  uVar23 = param_2[0x22];
  puVar5[0x21] = param_2[0x21];
  puVar5[0x20] = uVar21;
  puVar5[0x23] = uVar26;
  puVar5[0x22] = uVar23;
  puVar5[0x24] = param_2[0x24];
  uVar26 = param_2[0x1c];
  uVar23 = param_2[0x1f];
  uVar21 = param_2[0x1e];
  puVar5[0x1d] = param_2[0x1d];
  puVar5[0x1c] = uVar26;
  puVar5[0x1f] = uVar23;
  puVar5[0x1e] = uVar21;
  puVar5[0x28] = param_2[0x28];
  uVar21 = param_2[0x26];
  puVar5[0x27] = param_2[0x27];
  puVar5[0x26] = uVar21;
  FUN_10939d4b8(puVar5 + 0x29,param_2 + 0x29);
  FUN_10939d4b8(puVar5 + 0x2d,param_2 + 0x2d);
  puVar5[0x32] = param_2[0x32];
  uVar21 = param_2[0x34];
  uVar26 = param_2[0x37];
  uVar23 = param_2[0x36];
  puVar5[0x35] = param_2[0x35];
  puVar5[0x34] = uVar21;
  puVar5[0x37] = uVar26;
  puVar5[0x36] = uVar23;
  uVar21 = param_2[0x38];
  uVar26 = param_2[0x3b];
  uVar23 = param_2[0x3a];
  puVar5[0x39] = param_2[0x39];
  puVar5[0x38] = uVar21;
  puVar5[0x3b] = uVar26;
  puVar5[0x3a] = uVar23;
  *(undefined4 *)(puVar5 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  FUN_10937da58(puVar5 + 0x3d,param_2 + 0x3d);
  puVar14 = puVar5 + 0x40;
  puVar5[0x42] = 0;
  puVar5[0x41] = 0;
  puVar5[0x40] = 0;
  FUN_109471e04(puVar14,param_2[0x40],param_2[0x41],
                ((long)(param_2[0x41] - param_2[0x40]) >> 4) * 0x4ec4ec4ec4ec4ec5);
  *(undefined1 *)(puVar5 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  puVar5[0x44] = 0;
  puVar5[0x46] = 0;
  puVar5[0x45] = 0;
  FUN_109471edc(puVar5 + 0x44,param_2[0x44],param_2[0x45],(long)(param_2[0x45] - param_2[0x44]) >> 3
               );
  puVar5[0x49] = 0;
  puVar5[0x48] = 0;
  puVar5[0x47] = 0;
  FUN_109471edc(puVar5 + 0x47,param_2[0x47],param_2[0x48],(long)(param_2[0x48] - param_2[0x47]) >> 3
               );
  puVar5[0x4c] = 0;
  puVar5[0x4b] = 0;
  puVar5[0x4a] = 0;
  FUN_109471edc(puVar5 + 0x4a,param_2[0x4a],param_2[0x4b],(long)(param_2[0x4b] - param_2[0x4a]) >> 3
               );
  puVar5[0x4f] = 0;
  puVar5[0x4e] = 0;
  puVar5[0x4d] = 0;
  FUN_109378600(puVar5 + 0x4d,param_2[0x4d],param_2[0x4e],(long)(param_2[0x4e] - param_2[0x4d]) >> 2
               );
  plVar15 = puVar5 + 0x50;
  puVar5[0x51] = 0;
  puVar5[0x50] = 0;
  puVar5[0x53] = 0;
  puVar5[0x52] = 0;
  *(undefined4 *)(puVar5 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  FUN_10946615c(plVar15,param_2[0x51]);
  plVar18 = (long *)param_2[0x52];
  puVar19 = param_2;
  if (plVar18 != (long *)0x0) {
    plVar16 = puVar5 + 0x52;
    do {
      puVar19 = (undefined8 *)(long)(int)plVar18[2];
      puVar20 = (undefined8 *)puVar5[0x51];
      if (puVar20 != (undefined8 *)0x0) {
        uVar9 = (long)puVar20 - 1;
        if (((ulong)puVar20 & uVar9) == 0) {
          puVar14 = (undefined8 *)(uVar9 & (ulong)puVar19);
        }
        else {
          puVar14 = puVar19;
          if (puVar20 <= puVar19) {
            uVar12 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              uVar12 = (ulong)puVar19 / (ulong)puVar20;
            }
            puVar14 = (undefined8 *)((long)puVar19 - uVar12 * (long)puVar20);
          }
        }
        plVar11 = *(long **)(*plVar15 + (long)puVar14 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_1094715e8;
              puVar13 = (undefined8 *)plVar11[1];
              if (puVar13 != puVar19) break;
              if (*(int *)(plVar11 + 2) == (int)plVar18[2]) goto LAB_109471850;
            }
            if (((ulong)puVar20 & uVar9) == 0) {
              puVar13 = (undefined8 *)((ulong)puVar13 & uVar9);
            }
            else if (puVar20 <= puVar13) {
              uVar12 = 0;
              if (puVar20 != (undefined8 *)0x0) {
                uVar12 = (ulong)puVar13 / (ulong)puVar20;
              }
              puVar13 = (undefined8 *)((long)puVar13 - uVar12 * (long)puVar20);
            }
          } while (puVar13 == puVar14);
        }
      }
LAB_1094715e8:
      plVar11 = (long *)0xa68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = (long)puVar19;
      lVar8 = plVar18[2];
      plVar10 = plVar11 + 3;
      *plVar10 = 0;
      *(int *)(plVar11 + 2) = (int)lVar8;
      plVar11[4] = 0;
      plVar11[5] = 0;
      lVar8 = plVar18[4] - plVar18[3];
      if (lVar8 != 0) {
        uVar9 = lVar8 >> 2;
        if (uVar9 >> 0x3e != 0) {
          FUN_1094539e4();
          goto LAB_109471b80;
        }
        FUN_1094539f8();
        plVar11[3] = (long)plVar10;
        plVar11[4] = (long)plVar10;
        plVar11[5] = (long)plVar10 + uVar9 * 4;
        _memmove();
        plVar11[4] = (long)plVar10 + lVar8;
      }
      plVar10 = plVar11 + 6;
      *plVar10 = 0;
      plVar11[7] = 0;
      plVar11[8] = 0;
      lVar8 = plVar18[7] - plVar18[6];
      if (lVar8 != 0) {
        uVar9 = lVar8 >> 2;
        if (uVar9 >> 0x3e != 0) {
          FUN_109453a2c();
          goto LAB_109471b80;
        }
        FUN_109453a40();
        plVar11[6] = (long)plVar10;
        plVar11[7] = (long)plVar10;
        plVar11[8] = (long)plVar10 + uVar9 * 4;
        _memmove();
        plVar11[7] = (long)plVar10 + lVar8;
      }
      plVar11[9] = 0;
      plVar11[10] = 0;
      plVar11[0xb] = 0;
      FUN_109285684(plVar11 + 9,plVar18[9],plVar18[10],plVar18[10] - plVar18[9] >> 2);
      lVar24 = plVar18[0xd];
      lVar22 = plVar18[0xc];
      lVar27 = plVar18[0xf];
      lVar25 = plVar18[0xe];
      lVar8 = plVar18[0x10];
      plVar6 = plVar11 + 0x11;
      *plVar6 = 0;
      *(int *)(plVar11 + 0x10) = (int)lVar8;
      plVar11[0xf] = lVar27;
      plVar11[0xe] = lVar25;
      plVar11[0xd] = lVar24;
      plVar11[0xc] = lVar22;
      plVar11[0x12] = 0;
      plVar11[0x13] = 0;
      plVar10 = (long *)plVar18[0x11];
      plVar1 = (long *)plVar18[0x12];
      lVar8 = (long)plVar1 - (long)plVar10;
      if (lVar8 != 0) {
        uVar9 = lVar8 >> 3;
        if (uVar9 >> 0x3d != 0) {
          FUN_10945399c();
LAB_109471b80:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x109471b84);
          (*pcVar3)();
        }
        FUN_1094539b0();
        plVar11[0x11] = (long)plVar6;
        plVar11[0x12] = (long)plVar6;
        plVar11[0x13] = (long)(plVar6 + uVar9);
        do {
          plVar17 = plVar10 + 1;
          plVar7 = plVar6 + 1;
          *plVar6 = *plVar10;
          plVar6 = plVar7;
          plVar10 = plVar17;
        } while (plVar17 != plVar1);
        plVar11[0x12] = (long)plVar7;
      }
      _memcpy(plVar11 + 0x14,plVar18 + 0x14,0x9c8);
      if ((puVar20 == (undefined8 *)0x0) ||
         (*(float *)(puVar5 + 0x54) * (float)puVar20 < (float)(puVar5[0x53] + 1))) {
        uVar9 = 1;
        if ((undefined8 *)0x2 < puVar20) {
          uVar9 = (ulong)(((ulong)puVar20 & (long)puVar20 - 1U) != 0);
        }
        uVar9 = uVar9 | (long)puVar20 << 1;
        uVar12 = (ulong)((float)(puVar5[0x53] + 1) / *(float *)(puVar5 + 0x54));
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        FUN_10946615c(plVar15,uVar9);
        puVar20 = (undefined8 *)puVar5[0x51];
        if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
          puVar14 = (undefined8 *)((long)puVar20 - 1U & (ulong)puVar19);
        }
        else {
          puVar14 = puVar19;
          if (puVar20 <= puVar19) {
            uVar9 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              uVar9 = (ulong)puVar19 / (ulong)puVar20;
            }
            puVar14 = (undefined8 *)((long)puVar19 - uVar9 * (long)puVar20);
          }
        }
      }
      lVar8 = *plVar15;
      plVar10 = *(long **)(lVar8 + (long)puVar14 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar11 = *plVar16;
        *plVar16 = (long)plVar11;
        *(long **)(lVar8 + (long)puVar14 * 8) = plVar16;
        if (*plVar11 != 0) {
          puVar13 = *(undefined8 **)(*plVar11 + 8);
          if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
            puVar13 = (undefined8 *)((ulong)puVar13 & (long)puVar20 - 1U);
          }
          else if (puVar20 <= puVar13) {
            uVar9 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              uVar9 = (ulong)puVar13 / (ulong)puVar20;
            }
            puVar13 = (undefined8 *)((long)puVar13 - uVar9 * (long)puVar20);
          }
          *(long **)(*plVar15 + (long)puVar13 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar10;
        *plVar10 = (long)plVar11;
      }
      puVar5[0x53] = puVar5[0x53] + 1;
LAB_109471850:
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  puVar5[0x57] = 0;
  puVar5[0x56] = 0;
  puVar5[0x55] = 0;
  FUN_109285684(puVar5 + 0x55,param_2[0x55],param_2[0x56],(long)(param_2[0x56] - param_2[0x55]) >> 2
               );
  plVar15 = puVar5 + 0x58;
  puVar5[0x59] = 0;
  puVar5[0x58] = 0;
  puVar5[0x5b] = 0;
  puVar5[0x5a] = 0;
  *(undefined4 *)(puVar5 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  FUN_109465d5c(plVar15,param_2[0x59]);
  plVar18 = (long *)param_2[0x5a];
  if (plVar18 != (long *)0x0) {
    plVar16 = puVar5 + 0x5a;
    puVar14 = (undefined8 *)puVar5[0x59];
    do {
      puVar20 = (undefined8 *)(long)(int)plVar18[2];
      lVar8 = plVar18[2];
      if (puVar14 != (undefined8 *)0x0) {
        uVar9 = (long)puVar14 - 1;
        if (((ulong)puVar14 & uVar9) == 0) {
          puVar19 = (undefined8 *)(uVar9 & (ulong)puVar20);
        }
        else {
          puVar19 = puVar20;
          if (puVar14 <= puVar20) {
            uVar12 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar12 = (ulong)puVar20 / (ulong)puVar14;
            }
            puVar19 = (undefined8 *)((long)puVar20 - uVar12 * (long)puVar14);
          }
        }
        plVar11 = *(long **)(*plVar15 + (long)puVar19 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_109471948;
              puVar13 = (undefined8 *)plVar11[1];
              if (puVar13 != puVar20) break;
              if (*(int *)(plVar11 + 2) == (int)plVar18[2]) goto LAB_109471a60;
            }
            if (((ulong)puVar14 & uVar9) == 0) {
              puVar13 = (undefined8 *)((ulong)puVar13 & uVar9);
            }
            else if (puVar14 <= puVar13) {
              uVar12 = 0;
              if (puVar14 != (undefined8 *)0x0) {
                uVar12 = (ulong)puVar13 / (ulong)puVar14;
              }
              puVar13 = (undefined8 *)((long)puVar13 - uVar12 * (long)puVar14);
            }
          } while (puVar13 == puVar19);
        }
      }
LAB_109471948:
      plVar11 = (long *)0x18;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = (long)puVar20;
      plVar11[2] = lVar8;
      if ((puVar14 == (undefined8 *)0x0) ||
         (*(float *)(puVar5 + 0x5c) * (float)puVar14 < (float)(puVar5[0x5b] + 1))) {
        uVar9 = 1;
        if ((undefined8 *)0x2 < puVar14) {
          uVar9 = (ulong)(((ulong)puVar14 & (long)puVar14 - 1U) != 0);
        }
        uVar9 = uVar9 | (long)puVar14 << 1;
        uVar12 = (ulong)((float)(puVar5[0x5b] + 1) / *(float *)(puVar5 + 0x5c));
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        FUN_109465d5c(plVar15,uVar9);
        puVar14 = (undefined8 *)puVar5[0x59];
        if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
          puVar19 = (undefined8 *)((long)puVar14 - 1U & (ulong)puVar20);
        }
        else {
          puVar19 = puVar20;
          if (puVar14 <= puVar20) {
            uVar9 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar9 = (ulong)puVar20 / (ulong)puVar14;
            }
            puVar19 = (undefined8 *)((long)puVar20 - uVar9 * (long)puVar14);
          }
        }
      }
      lVar8 = *plVar15;
      plVar10 = *(long **)(lVar8 + (long)puVar19 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar11 = *plVar16;
        *plVar16 = (long)plVar11;
        *(long **)(lVar8 + (long)puVar19 * 8) = plVar16;
        if (*plVar11 != 0) {
          puVar20 = *(undefined8 **)(*plVar11 + 8);
          if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
            puVar20 = (undefined8 *)((ulong)puVar20 & (long)puVar14 - 1U);
          }
          else if (puVar14 <= puVar20) {
            uVar9 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar9 = (ulong)puVar20 / (ulong)puVar14;
            }
            puVar20 = (undefined8 *)((long)puVar20 - uVar9 * (long)puVar14);
          }
          plVar10 = (long *)(*plVar15 + (long)puVar20 * 8);
          goto LAB_109471a4c;
        }
      }
      else {
        *plVar11 = *plVar10;
LAB_109471a4c:
        *plVar10 = (long)plVar11;
      }
      puVar5[0x5b] = puVar5[0x5b] + 1;
LAB_109471a60:
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  *(undefined4 *)(puVar5 + 0x5d) = *(undefined4 *)(param_2 + 0x5d);
  puVar5[0x5e] = 0;
  puVar5[0x60] = 0;
  puVar5[0x5f] = 0;
  FUN_109285684(puVar5 + 0x5e,param_2[0x5e],param_2[0x5f],(long)(param_2[0x5f] - param_2[0x5e]) >> 2
               );
  puVar5[99] = 0;
  puVar5[0x62] = 0;
  puVar5[0x61] = 0;
  FUN_109285684();
  _memcpy(puVar5 + 100,param_2 + 100,0x9d8);
  puVar5[0x1a1] = 0;
  puVar5[0x1a0] = 0;
  puVar5[0x19f] = puVar5 + 0x1a0;
  plVar15 = (long *)param_2[0x19f];
  while (plVar15 != param_2 + 0x1a0) {
    FUN_10947086c(puVar5 + 0x19f,puVar5 + 0x1a0,plVar15 + 4,plVar15 + 4);
    plVar18 = (long *)plVar15[1];
    plVar16 = plVar15;
    if ((long *)plVar15[1] == (long *)0x0) {
      do {
        plVar15 = (long *)plVar16[2];
        bVar4 = (long *)*plVar15 != plVar16;
        plVar16 = plVar15;
      } while (bVar4);
    }
    else {
      do {
        plVar15 = plVar18;
        plVar18 = (long *)*plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
    }
  }
  *(undefined4 *)(puVar5 + 0x1a2) = *(undefined4 *)(param_2 + 0x1a2);
  return puVar5;
}



/* Entry: 109471dbc; end: 109471df7;  */

long FUN_109471dbc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af65f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109471df8; end: 109471e03;  */

undefined ** FUN_109471df8(void)

{
  return &PTR_DAT_110af65f0;
}



/* Entry: 109471e04; end: 109471e87;  */

void FUN_109471e04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109471e88(param_1,param_4);
    lVar1 = param_1;
    FUN_10942857c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109471e88; end: 109471edb;  */

void FUN_109471e88(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 0x13b13b13b13b13c) {
    plVar1 = param_1;
    FUN_109428814(param_1,param_2,0);
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x1a);
    return;
  }
  FUN_109428800();
  if (param_4 != 0) {
    FUN_1092d4d38();
    lVar2 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 109471edc; end: 109471f53;  */

void FUN_109471edc(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1092d4d38(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 109471f54; end: 1094720bf;  */

/* WARNING: Possible PIC construction at 0x0001094724c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094724cc) */

undefined8 ** FUN_109471f54(undefined8 **param_1,undefined8 **param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 *extraout_x8;
  undefined8 **extraout_x8_00;
  undefined *puVar12;
  undefined8 **unaff_x19;
  undefined8 **unaff_x20;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  uint uStack_200;
  undefined **ppuStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 **ppuStack_198;
  undefined ***pppuStack_190;
  undefined8 **ppuStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **appuStack_108 [3];
  undefined ***pppuStack_f0;
  undefined **appuStack_e8 [3];
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 *apuStack_80 [3];
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *apuStack_40 [3];
  long lStack_28;
  
  ppuVar5 = apuStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_1;
  ppuVar8 = param_2;
  if (param_2 != param_1) {
    ppuVar4 = (undefined8 **)param_1[3];
    ppuVar10 = (undefined8 **)param_2[3];
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (ppuVar4 == param_1) {
      if (ppuVar10 == param_2) {
        (*(code *)(*ppuVar4)[3])(ppuVar4,apuStack_40);
        (**(code **)(*param_1[3] + 0x20))();
        param_1[3] = (undefined8 *)0x0;
        (**(code **)(*param_2[3] + 0x18))(param_2[3],param_1);
        (**(code **)(*param_2[3] + 0x20))();
        param_2[3] = (undefined8 *)0x0;
        param_1[3] = param_1;
        (*(code *)apuStack_40[0][3])(apuStack_40);
        (*(code *)apuStack_40[0][4])();
      }
      else {
        (*(code *)(*ppuVar4)[3])();
        ppuVar5 = (undefined8 **)param_1[3];
        (*(code *)(*ppuVar5)[4])();
        param_1[3] = param_2[3];
      }
      param_2[3] = param_2;
      ppuVar4 = ppuVar5;
    }
    else if (ppuVar10 == param_2) {
      ppuVar8 = param_1;
      (*(code *)(*ppuVar10)[3])(ppuVar10);
      ppuVar4 = (undefined8 **)param_2[3];
      (*(code *)(*ppuVar4)[4])();
      param_2[3] = param_1[3];
      param_1[3] = param_1;
    }
    else {
      param_1[3] = ppuVar10;
      param_2[3] = ppuVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  ppuVar10 = apuStack_80;
  ppuStack_60 = unaff_x20;
  ppuStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  pcStack_48 = FUN_1094720c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar8;
  if (ppuVar8 != ppuVar4) {
    ppuVar6 = (undefined8 **)ppuVar4[3];
    ppuVar11 = (undefined8 **)ppuVar8[3];
    if (ppuVar6 == ppuVar4) {
      if (ppuVar11 == ppuVar8) {
        (*(code *)(*ppuVar6)[3])(ppuVar6,apuStack_80);
        (**(code **)(*ppuVar4[3] + 0x20))();
        ppuVar4[3] = (undefined8 *)0x0;
        (**(code **)(*ppuVar8[3] + 0x18))(ppuVar8[3],ppuVar4);
        (**(code **)(*ppuVar8[3] + 0x20))();
        ppuVar8[3] = (undefined8 *)0x0;
        ppuVar4[3] = ppuVar4;
        (*(code *)apuStack_80[0][3])(apuStack_80);
        (*(code *)apuStack_80[0][4])();
      }
      else {
        (*(code *)(*ppuVar6)[3])();
        ppuVar10 = (undefined8 **)ppuVar4[3];
        (*(code *)(*ppuVar10)[4])();
        ppuVar4[3] = ppuVar8[3];
      }
      ppuVar8[3] = ppuVar8;
      ppuVar4 = ppuVar10;
    }
    else if (ppuVar11 == ppuVar8) {
      ppuVar5 = ppuVar4;
      (*(code *)(*ppuVar11)[3])(ppuVar11);
      ppuVar10 = (undefined8 **)ppuVar8[3];
      (*(code *)(*ppuVar10)[4])();
      ppuVar8[3] = ppuVar4[3];
      ppuVar4[3] = ppuVar4;
      ppuVar4 = ppuVar10;
    }
    else {
      ppuVar4[3] = ppuVar11;
      ppuVar8[3] = ppuVar6;
      ppuVar4 = ppuVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((int)ppuVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    ppuStack_90 = &puStack_50;
    pcStack_88 = FUN_10947222c;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    auStack_158[0] = 1;
    uStack_148 = 0x3fe8000000000000;
    uStack_150 = 0x3fe6666666666666;
    uStack_140 = 1;
    uStack_120 = 0x3fd0000000000000;
    uStack_128 = 0x4004000000000000;
    uStack_118 = 0x3fe0000000000000;
    uStack_134 = 0x200000012;
    uStack_13c = 0x9600000032;
    puVar14 = *ppuVar4;
    puVar7 = (undefined8 *)0x2f0;
    __Znwm();
    uStack_110 = puVar14[0x1e];
    ppuVar13 = (undefined **)puVar14[0x1f];
    if (ppuVar13 == (undefined **)0x0) {
      *puVar7 = uStack_110;
      puVar7[1] = 0;
    }
    else {
      ppuVar1 = ppuVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = uStack_110;
      puVar7[1] = ppuVar13;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    appuStack_108[0] = ppuVar13;
    FUN_10949ef00(puVar7 + 2,uStack_110,auStack_158);
    puStack_160 = puVar7;
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar1 = ppuVar13 + 1;
      do {
        puVar12 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = puVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    puVar7 = puStack_160;
    FUN_1094a0010(puStack_160 + 2,ppuVar5,param_3);
    uStack_168 = 0;
    puStack_160 = (undefined8 *)0x0;
    appuStack_e8[0] = &PTR_DAT_110af66a0;
    pppuStack_d0 = appuStack_e8;
    extraout_x8[4] = 0;
    extraout_x8[8] = 0;
    *extraout_x8 = puVar7;
    uStack_110 = 0;
    appuStack_108[0] = &PTR_FUN_110af6610;
    pppuStack_f0 = appuStack_108;
    FUN_109472a80(extraout_x8 + 5);
    pppuVar9 = appuStack_108;
    FUN_109472bec(extraout_x8 + 1);
    *(undefined1 *)(extraout_x8 + 9) = 1;
    FUN_1094729dc(&uStack_110);
    func_0x000109472618(&uStack_168);
    ppuVar4 = &puStack_160;
    func_0x000109472618();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      func_0x000109472618(&puStack_160);
      ppuVar10 = ppuVar4;
      __Unwind_Resume();
      puStack_1a0 = puVar7;
      pcStack_178 = FUN_109472410;
      lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar13 = *pppuVar9;
      ppuVar8 = (undefined8 **)(ppuVar13 + 2);
      ppuStack_198 = ppuVar5;
      pppuStack_190 = appuStack_108;
      ppuStack_188 = ppuVar4;
      pppuStack_180 = &ppuStack_90;
      FUN_1094a09f0();
      if (*(int *)(ppuVar13 + 0xc) == 0) {
        *(undefined1 *)extraout_x8_00 = 0;
        *(undefined1 *)(extraout_x8_00 + 0x1c) = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
          return ppuVar8;
        }
        ___stack_chk_fail();
        FUN_1094729dc(ppuVar13 + 0x13);
        __Unwind_Resume();
      }
      else {
        puStack_288 = ppuVar13[0xf];
        puStack_290 = (undefined8 *)ppuVar13[0xe];
        puStack_278 = ppuVar13[0x11];
        puStack_280 = ppuVar13[0x10];
        puStack_268 = ppuVar13[0x13];
        puStack_270 = ppuVar13[0x12];
        puStack_260 = ppuVar13[0x14];
        puStack_228 = ppuVar13[0x1b];
        puStack_230 = ppuVar13[0x1a];
        puStack_218 = ppuVar13[0x1d];
        puStack_220 = ppuVar13[0x1c];
        puStack_210 = ppuVar13[0x1e];
        puStack_248 = ppuVar13[0x17];
        puStack_250 = ppuVar13[0x16];
        puStack_238 = ppuVar13[0x19];
        puStack_240 = ppuVar13[0x18];
        uStack_200 = (uint)(*(int *)(ppuVar13 + 0xc) != 2);
        uStack_1b8 = 0;
        ppuStack_1f8 = *pppuVar9;
        uStack_1d8 = 0;
        *pppuVar9 = (undefined **)0x0;
        FUN_109472a80(auStack_1d0,pppuVar9 + 5);
        FUN_109472bec(auStack_1f0,pppuVar9 + 1);
        ppuVar8 = extraout_x8_00;
        ppuVar10 = &puStack_290;
      }
      puVar7 = *ppuVar10;
      puVar15 = ppuVar10[3];
      puVar14 = ppuVar10[2];
      ppuVar8[1] = ppuVar10[1];
      *ppuVar8 = puVar7;
      ppuVar8[3] = puVar15;
      ppuVar8[2] = puVar14;
      puVar14 = ppuVar10[5];
      puVar7 = ppuVar10[4];
      ppuVar8[6] = ppuVar10[6];
      ppuVar8[5] = puVar14;
      ppuVar8[4] = puVar7;
      puVar7 = ppuVar10[8];
      ppuVar8[9] = ppuVar10[9];
      ppuVar8[8] = puVar7;
      puVar14 = ppuVar10[0xb];
      puVar7 = ppuVar10[10];
      puVar16 = ppuVar10[0xd];
      puVar15 = ppuVar10[0xc];
      puVar18 = ppuVar10[0xf];
      puVar17 = ppuVar10[0xe];
      ppuVar8[0x10] = ppuVar10[0x10];
      ppuVar8[0xd] = puVar16;
      ppuVar8[0xc] = puVar15;
      ppuVar8[0xf] = puVar18;
      ppuVar8[0xe] = puVar17;
      ppuVar8[0xb] = puVar14;
      ppuVar8[10] = puVar7;
      *(undefined4 *)(ppuVar8 + 0x12) = *(undefined4 *)(ppuVar10 + 0x12);
      ppuVar8[0x13] = (undefined8 *)0x0;
      ppuVar8[0x17] = (undefined8 *)0x0;
      ppuVar8[0x1b] = (undefined8 *)0x0;
      ppuVar8[0x13] = ppuVar10[0x13];
      ppuVar10[0x13] = (undefined8 *)0x0;
      FUN_109472a80(ppuVar8 + 0x18,ppuVar10 + 0x18);
      FUN_109472bec(ppuVar8 + 0x14,ppuVar10 + 0x14);
      *(undefined1 *)(ppuVar8 + 0x1c) = 1;
      return ppuVar8;
    }
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 1094720c0; end: 10947222b;  */

/* WARNING: Possible PIC construction at 0x0001094724c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094724cc) */

undefined8 ** FUN_1094720c0(undefined8 **param_1,undefined8 **param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined ***pppuVar8;
  undefined8 **ppuVar9;
  undefined8 *extraout_x8;
  undefined8 **extraout_x8_00;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  uint uStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 **ppuStack_158;
  undefined ***pppuStack_150;
  undefined8 **ppuStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **appuStack_c8 [3];
  undefined ***pppuStack_b0;
  undefined **appuStack_a8 [3];
  undefined ***pppuStack_90;
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *apuStack_40 [3];
  long lStack_28;
  
  ppuVar5 = apuStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_2;
  if (param_2 != param_1) {
    ppuVar4 = (undefined8 **)param_1[3];
    ppuVar9 = (undefined8 **)param_2[3];
    if (ppuVar4 == param_1) {
      if (ppuVar9 == param_2) {
        (*(code *)(*ppuVar4)[3])(ppuVar4,apuStack_40);
        (**(code **)(*param_1[3] + 0x20))();
        param_1[3] = (undefined8 *)0x0;
        (**(code **)(*param_2[3] + 0x18))(param_2[3],param_1);
        (**(code **)(*param_2[3] + 0x20))();
        param_2[3] = (undefined8 *)0x0;
        param_1[3] = param_1;
        (*(code *)apuStack_40[0][3])(apuStack_40);
        (*(code *)apuStack_40[0][4])();
      }
      else {
        (*(code *)(*ppuVar4)[3])();
        ppuVar5 = (undefined8 **)param_1[3];
        (*(code *)(*ppuVar5)[4])();
        param_1[3] = param_2[3];
      }
      param_2[3] = param_2;
      param_1 = ppuVar5;
    }
    else if (ppuVar9 == param_2) {
      ppuVar7 = param_1;
      (*(code *)(*ppuVar9)[3])(ppuVar9);
      ppuVar5 = (undefined8 **)param_2[3];
      (*(code *)(*ppuVar5)[4])();
      param_2[3] = param_1[3];
      param_1[3] = param_1;
      param_1 = ppuVar5;
    }
    else {
      param_1[3] = ppuVar9;
      param_2[3] = ppuVar4;
      param_1 = ppuVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puStack_50 = &stack0xfffffffffffffff0;
  pcStack_48 = FUN_10947222c;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_118[0] = 1;
  uStack_108 = 0x3fe8000000000000;
  uStack_110 = 0x3fe6666666666666;
  uStack_100 = 1;
  uStack_e0 = 0x3fd0000000000000;
  uStack_e8 = 0x4004000000000000;
  uStack_d8 = 0x3fe0000000000000;
  uStack_f4 = 0x200000012;
  uStack_fc = 0x9600000032;
  puVar12 = *param_1;
  puVar6 = (undefined8 *)0x2f0;
  __Znwm();
  uStack_d0 = puVar12[0x1e];
  ppuVar11 = (undefined **)puVar12[0x1f];
  if (ppuVar11 == (undefined **)0x0) {
    *puVar6 = uStack_d0;
    puVar6[1] = 0;
  }
  else {
    ppuVar1 = ppuVar11 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *puVar6 = uStack_d0;
    puVar6[1] = ppuVar11;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  appuStack_c8[0] = ppuVar11;
  FUN_10949ef00(puVar6 + 2,uStack_d0,auStack_118);
  puStack_120 = puVar6;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar1 = ppuVar11 + 1;
    do {
      puVar10 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
    }
  }
  puVar6 = puStack_120;
  FUN_1094a0010(puStack_120 + 2,ppuVar7,param_3);
  uStack_128 = 0;
  puStack_120 = (undefined8 *)0x0;
  appuStack_a8[0] = &PTR_DAT_110af66a0;
  pppuStack_90 = appuStack_a8;
  extraout_x8[4] = 0;
  extraout_x8[8] = 0;
  *extraout_x8 = puVar6;
  uStack_d0 = 0;
  appuStack_c8[0] = &PTR_FUN_110af6610;
  pppuStack_b0 = appuStack_c8;
  FUN_109472a80(extraout_x8 + 5);
  pppuVar8 = appuStack_c8;
  FUN_109472bec(extraout_x8 + 1);
  *(undefined1 *)(extraout_x8 + 9) = 1;
  FUN_1094729dc(&uStack_d0);
  func_0x000109472618(&uStack_128);
  ppuVar5 = &puStack_120;
  func_0x000109472618();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    func_0x000109472618(&puStack_120);
    ppuVar9 = ppuVar5;
    __Unwind_Resume();
    puStack_160 = puVar6;
    pcStack_138 = FUN_109472410;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar11 = *pppuVar8;
    ppuVar4 = (undefined8 **)(ppuVar11 + 2);
    ppuStack_158 = ppuVar7;
    pppuStack_150 = appuStack_c8;
    ppuStack_148 = ppuVar5;
    ppuStack_140 = &puStack_50;
    FUN_1094a09f0();
    if (*(int *)(ppuVar11 + 0xc) == 0) {
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 0x1c) = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
        return ppuVar4;
      }
      ___stack_chk_fail();
      FUN_1094729dc(ppuVar11 + 0x13);
      __Unwind_Resume();
    }
    else {
      puStack_248 = ppuVar11[0xf];
      puStack_250 = (undefined8 *)ppuVar11[0xe];
      puStack_238 = ppuVar11[0x11];
      puStack_240 = ppuVar11[0x10];
      puStack_228 = ppuVar11[0x13];
      puStack_230 = ppuVar11[0x12];
      puStack_220 = ppuVar11[0x14];
      puStack_1e8 = ppuVar11[0x1b];
      puStack_1f0 = ppuVar11[0x1a];
      puStack_1d8 = ppuVar11[0x1d];
      puStack_1e0 = ppuVar11[0x1c];
      puStack_1d0 = ppuVar11[0x1e];
      puStack_208 = ppuVar11[0x17];
      puStack_210 = ppuVar11[0x16];
      puStack_1f8 = ppuVar11[0x19];
      puStack_200 = ppuVar11[0x18];
      uStack_1c0 = (uint)(*(int *)(ppuVar11 + 0xc) != 2);
      uStack_178 = 0;
      ppuStack_1b8 = *pppuVar8;
      uStack_198 = 0;
      *pppuVar8 = (undefined **)0x0;
      FUN_109472a80(auStack_190,pppuVar8 + 5);
      FUN_109472bec(auStack_1b0,pppuVar8 + 1);
      ppuVar4 = extraout_x8_00;
      ppuVar9 = &puStack_250;
    }
    puVar6 = *ppuVar9;
    puVar13 = ppuVar9[3];
    puVar12 = ppuVar9[2];
    ppuVar4[1] = ppuVar9[1];
    *ppuVar4 = puVar6;
    ppuVar4[3] = puVar13;
    ppuVar4[2] = puVar12;
    puVar12 = ppuVar9[5];
    puVar6 = ppuVar9[4];
    ppuVar4[6] = ppuVar9[6];
    ppuVar4[5] = puVar12;
    ppuVar4[4] = puVar6;
    puVar6 = ppuVar9[8];
    ppuVar4[9] = ppuVar9[9];
    ppuVar4[8] = puVar6;
    puVar12 = ppuVar9[0xb];
    puVar6 = ppuVar9[10];
    puVar14 = ppuVar9[0xd];
    puVar13 = ppuVar9[0xc];
    puVar16 = ppuVar9[0xf];
    puVar15 = ppuVar9[0xe];
    ppuVar4[0x10] = ppuVar9[0x10];
    ppuVar4[0xd] = puVar14;
    ppuVar4[0xc] = puVar13;
    ppuVar4[0xf] = puVar16;
    ppuVar4[0xe] = puVar15;
    ppuVar4[0xb] = puVar12;
    ppuVar4[10] = puVar6;
    *(undefined4 *)(ppuVar4 + 0x12) = *(undefined4 *)(ppuVar9 + 0x12);
    ppuVar4[0x13] = (undefined8 *)0x0;
    ppuVar4[0x17] = (undefined8 *)0x0;
    ppuVar4[0x1b] = (undefined8 *)0x0;
    ppuVar4[0x13] = ppuVar9[0x13];
    ppuVar9[0x13] = (undefined8 *)0x0;
    FUN_109472a80(ppuVar4 + 0x18,ppuVar9 + 0x18);
    FUN_109472bec(ppuVar4 + 0x14,ppuVar9 + 0x14);
    *(undefined1 *)(ppuVar4 + 0x1c) = 1;
    return ppuVar4;
  }
  return ppuVar5;
}



/* Entry: 10947222c; end: 10947240f;  */

/* WARNING: Possible PIC construction at 0x0001094724c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094724cc) */

undefined8 ** FUN_10947222c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined ***pppuVar8;
  undefined8 **extraout_x8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  uint uStack_180;
  undefined **ppuStack_178;
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined ***pppuStack_110;
  undefined8 **ppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_d8[0] = 1;
  uStack_c8 = 0x3fe8000000000000;
  uStack_d0 = 0x3fe6666666666666;
  uStack_c0 = 1;
  uStack_a0 = 0x3fd0000000000000;
  uStack_a8 = 0x4004000000000000;
  uStack_98 = 0x3fe0000000000000;
  uStack_b4 = 0x200000012;
  uStack_bc = 0x9600000032;
  lVar11 = *param_2;
  puVar4 = (undefined8 *)0x2f0;
  __Znwm();
  uStack_90 = *(undefined8 *)(lVar11 + 0xf0);
  ppuVar10 = *(undefined ***)(lVar11 + 0xf8);
  if (ppuVar10 == (undefined **)0x0) {
    *puVar4 = uStack_90;
    puVar4[1] = 0;
  }
  else {
    ppuVar1 = ppuVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *puVar4 = uStack_90;
    puVar4[1] = ppuVar10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  appuStack_88[0] = ppuVar10;
  FUN_10949ef00(puVar4 + 2,uStack_90,auStack_d8);
  puStack_e0 = puVar4;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10 + 1;
    do {
      puVar9 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  puVar4 = puStack_e0;
  FUN_1094a0010(puStack_e0 + 2,param_3,param_4);
  uStack_e8 = 0;
  puStack_e0 = (undefined8 *)0x0;
  appuStack_68[0] = &PTR_DAT_110af66a0;
  pppuStack_50 = appuStack_68;
  param_1[4] = 0;
  param_1[8] = 0;
  *param_1 = puVar4;
  uStack_90 = 0;
  appuStack_88[0] = &PTR_FUN_110af6610;
  pppuStack_70 = appuStack_88;
  FUN_109472a80(param_1 + 5);
  pppuVar8 = appuStack_88;
  FUN_109472bec(param_1 + 1);
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_1094729dc(&uStack_90);
  func_0x000109472618(&uStack_e8);
  ppuVar5 = &puStack_e0;
  func_0x000109472618();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x000109472618(&puStack_e0);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    puStack_120 = puVar4;
    pcStack_f8 = FUN_109472410;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = *pppuVar8;
    ppuVar7 = (undefined8 **)(ppuVar10 + 2);
    uStack_118 = param_3;
    pppuStack_110 = appuStack_88;
    ppuStack_108 = ppuVar5;
    puStack_100 = &stack0xfffffffffffffff0;
    FUN_1094a09f0();
    if (*(int *)(ppuVar10 + 0xc) == 0) {
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 0x1c) = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
        return ppuVar7;
      }
      ___stack_chk_fail();
      FUN_1094729dc(ppuVar10 + 0x13);
      __Unwind_Resume();
    }
    else {
      puStack_208 = ppuVar10[0xf];
      puStack_210 = (undefined8 *)ppuVar10[0xe];
      puStack_1f8 = ppuVar10[0x11];
      puStack_200 = ppuVar10[0x10];
      puStack_1e8 = ppuVar10[0x13];
      puStack_1f0 = ppuVar10[0x12];
      puStack_1e0 = ppuVar10[0x14];
      puStack_1a8 = ppuVar10[0x1b];
      puStack_1b0 = ppuVar10[0x1a];
      puStack_198 = ppuVar10[0x1d];
      puStack_1a0 = ppuVar10[0x1c];
      puStack_190 = ppuVar10[0x1e];
      puStack_1c8 = ppuVar10[0x17];
      puStack_1d0 = ppuVar10[0x16];
      puStack_1b8 = ppuVar10[0x19];
      puStack_1c0 = ppuVar10[0x18];
      uStack_180 = (uint)(*(int *)(ppuVar10 + 0xc) != 2);
      uStack_138 = 0;
      ppuStack_178 = *pppuVar8;
      uStack_158 = 0;
      *pppuVar8 = (undefined **)0x0;
      FUN_109472a80(auStack_150,pppuVar8 + 5);
      FUN_109472bec(auStack_170,pppuVar8 + 1);
      ppuVar7 = extraout_x8;
      ppuVar6 = &puStack_210;
    }
    puVar4 = *ppuVar6;
    puVar13 = ppuVar6[3];
    puVar12 = ppuVar6[2];
    ppuVar7[1] = ppuVar6[1];
    *ppuVar7 = puVar4;
    ppuVar7[3] = puVar13;
    ppuVar7[2] = puVar12;
    puVar12 = ppuVar6[5];
    puVar4 = ppuVar6[4];
    ppuVar7[6] = ppuVar6[6];
    ppuVar7[5] = puVar12;
    ppuVar7[4] = puVar4;
    puVar4 = ppuVar6[8];
    ppuVar7[9] = ppuVar6[9];
    ppuVar7[8] = puVar4;
    puVar12 = ppuVar6[0xb];
    puVar4 = ppuVar6[10];
    puVar14 = ppuVar6[0xd];
    puVar13 = ppuVar6[0xc];
    puVar16 = ppuVar6[0xf];
    puVar15 = ppuVar6[0xe];
    ppuVar7[0x10] = ppuVar6[0x10];
    ppuVar7[0xd] = puVar14;
    ppuVar7[0xc] = puVar13;
    ppuVar7[0xf] = puVar16;
    ppuVar7[0xe] = puVar15;
    ppuVar7[0xb] = puVar12;
    ppuVar7[10] = puVar4;
    *(undefined4 *)(ppuVar7 + 0x12) = *(undefined4 *)(ppuVar6 + 0x12);
    ppuVar7[0x13] = (undefined8 *)0x0;
    ppuVar7[0x17] = (undefined8 *)0x0;
    ppuVar7[0x1b] = (undefined8 *)0x0;
    ppuVar7[0x13] = ppuVar6[0x13];
    ppuVar6[0x13] = (undefined8 *)0x0;
    FUN_109472a80(ppuVar7 + 0x18,ppuVar6 + 0x18);
    FUN_109472bec(ppuVar7 + 0x14,ppuVar6 + 0x14);
    *(undefined1 *)(ppuVar7 + 0x1c) = 1;
    return ppuVar7;
  }
  return ppuVar5;
}



/* Entry: 109472410; end: 109472523;  */

undefined8 * FUN_109472410(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  long lStack_38;
  
  puVar2 = &uStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)((long)puVar3 + 0x10);
  FUN_1094a09f0();
  if (*(int *)((long)puVar3 + 0x60) == 0) {
    *param_1 = 0;
    param_1[0xe0] = 0;
  }
  else {
    uStack_118 = *(undefined8 *)((long)puVar3 + 0x78);
    uStack_120 = *(undefined8 *)((long)puVar3 + 0x70);
    uStack_108 = *(undefined8 *)((long)puVar3 + 0x88);
    uStack_110 = *(undefined8 *)((long)puVar3 + 0x80);
    uStack_f8 = *(undefined8 *)((long)puVar3 + 0x98);
    uStack_100 = *(undefined8 *)((long)puVar3 + 0x90);
    uStack_f0 = *(undefined8 *)((long)puVar3 + 0xa0);
    uStack_b8 = *(undefined8 *)((long)puVar3 + 0xd8);
    uStack_c0 = *(undefined8 *)((long)puVar3 + 0xd0);
    uStack_a8 = *(undefined8 *)((long)puVar3 + 0xe8);
    uStack_b0 = *(undefined8 *)((long)puVar3 + 0xe0);
    uStack_a0 = *(undefined8 *)((long)puVar3 + 0xf0);
    uStack_d8 = *(undefined8 *)((long)puVar3 + 0xb8);
    uStack_e0 = *(undefined8 *)((long)puVar3 + 0xb0);
    uStack_c8 = *(undefined8 *)((long)puVar3 + 200);
    uStack_d0 = *(undefined8 *)((long)puVar3 + 0xc0);
    uStack_90 = (uint)(*(int *)((long)puVar3 + 0x60) != 2);
    uStack_48 = 0;
    uStack_88 = *param_3;
    uStack_68 = 0;
    *param_3 = 0;
    FUN_109472a80(auStack_60,param_3 + 5);
    FUN_109472bec(auStack_80,param_3 + 1);
    FUN_109472524(param_1);
    puVar1 = &uStack_88;
    FUN_1094729dc();
    param_2 = puVar2;
    puVar3 = &uStack_120;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_1094729dc((undefined1 *)((long)puVar3 + 0x98));
  __Unwind_Resume();
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  puVar1[6] = param_2[6];
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar4 = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[8] = uVar4;
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  uVar9 = param_2[0xf];
  uVar8 = param_2[0xe];
  puVar1[0x10] = param_2[0x10];
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar9;
  puVar1[0xe] = uVar8;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
  *(undefined4 *)(puVar1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  puVar1[0x13] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  FUN_109472a80(puVar1 + 0x18,param_2 + 0x18);
  FUN_109472bec(puVar1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(puVar1 + 0x1c) = 1;
  return puVar1;
}



/* Entry: 109472524; end: 109472657;  */

undefined8 * FUN_109472524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  FUN_109472a80(param_1 + 0x18,param_2 + 0x18);
  FUN_109472bec(param_1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return param_1;
}



/* Entry: 109472658; end: 109472797;  */

long FUN_109472658(long param_1)

{
  long lStack_38;
  
  lStack_38 = param_1 + 0x2c8;
  func_0x000109472728(&lStack_38);
  FUN_109472798(param_1 + 0x2a0);
  lStack_38 = param_1 + 0x288;
  FUN_10942a570(&lStack_38);
  if (*(long *)(param_1 + 0x270) != 0) {
    *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x270);
    __ZdlPv();
  }
  lStack_38 = param_1 + 600;
  func_0x0001094606b4(&lStack_38);
  lStack_38 = param_1 + 0x240;
  FUN_10939cb28(&lStack_38);
  _free(*(undefined8 *)(param_1 + 0x228));
  *(undefined ***)(param_1 + 0x1a8) = &PTR_FUN_110af4c80;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined ***)(param_1 + 0x188) = &PTR_FUN_110af4c80;
  if (*(long *)(param_1 + 400) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  return param_1;
}



/* Entry: 109472798; end: 109472813;  */

long * FUN_109472798(long *param_1)

{
  long lVar1;
  
  func_0x0001094727d0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109472814; end: 10947281b;  */

void FUN_109472814(void)

{
  return;
}



/* Entry: 10947281c; end: 10947283f;  */

void FUN_10947281c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110af6610;
  return;
}



/* Entry: 109472840; end: 109472857;  */

void FUN_109472840(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110af6610;
  return;
}



/* Entry: 109472858; end: 1094728cf;  */

void FUN_109472858(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_109472658(lVar1 + 0x10);
    func_0x0001094725c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1094728d0; end: 1094728e3;  */

undefined ** FUN_1094728d0(void)

{
  return &PTR_DAT_110af6680;
}



/* Entry: 1094728e4; end: 109472907;  */

void FUN_1094728e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af66a0;
  return;
}



/* Entry: 109472908; end: 10947291f;  */

void FUN_109472908(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110af66a0;
  return;
}



/* Entry: 109472920; end: 109472993;  */

undefined8 * FUN_109472920(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x2f0;
  __Znwm();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
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
  FUN_10949f52c(puVar4 + 2,param_2 + 2);
  return puVar4;
}



/* Entry: 109472994; end: 1094729cf;  */

long FUN_109472994(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af6710);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094729d0; end: 1094729db;  */

undefined ** FUN_1094729d0(void)

{
  return &PTR_DAT_110af6710;
}



/* Entry: 1094729dc; end: 109472a7f;  */

undefined8 * FUN_1094729dc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109472a40;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109472a40:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
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



/* Entry: 109472a80; end: 109472beb;  */

double FUN_109472a80(double param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *unaff_x19;
  double *unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long alStack_80 [3];
  long lStack_68;
  double *pdStack_60;
  double *pdStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  double adStack_40 [3];
  long lStack_28;
  
  pdVar2 = adStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = param_2;
  pdVar3 = param_3;
  if (param_3 != param_2) {
    pdVar1 = (double *)param_2[3];
    pdVar4 = (double *)param_3[3];
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    if (pdVar1 == param_2) {
      if (pdVar4 == param_3) {
        (**(code **)((long)*pdVar1 + 0x18))(pdVar1,adStack_40);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0.0;
        (**(code **)(*(long *)param_3[3] + 0x18))((long *)param_3[3],param_2);
        (**(code **)(*(long *)param_3[3] + 0x20))();
        param_3[3] = 0.0;
        param_2[3] = (double)param_2;
        (**(code **)((long)adStack_40[0] + 0x18))(adStack_40);
        (**(code **)((long)adStack_40[0] + 0x20))();
      }
      else {
        (**(code **)((long)*pdVar1 + 0x18))();
        pdVar2 = (double *)param_2[3];
        (**(code **)((long)*pdVar2 + 0x20))();
        param_2[3] = param_3[3];
      }
      param_3[3] = (double)param_3;
      pdVar1 = pdVar2;
    }
    else if (pdVar4 == param_3) {
      pdVar3 = param_2;
      (**(code **)((long)*pdVar4 + 0x18))(pdVar4);
      pdVar1 = (double *)param_3[3];
      (**(code **)((long)*pdVar1 + 0x20))();
      param_3[3] = param_2[3];
      param_2[3] = (double)param_2;
    }
    else {
      param_2[3] = (double)pdVar4;
      param_3[3] = (double)pdVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)pdVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_48 = FUN_109472bec;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar2 = pdVar3;
  pdStack_60 = unaff_x20;
  pdStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  if (pdVar3 != pdVar1) {
    pdVar4 = (double *)pdVar1[3];
    pdVar5 = (double *)pdVar3[3];
    if (pdVar4 == pdVar1) {
      if (pdVar5 == pdVar3) {
        (**(code **)((long)*pdVar4 + 0x18))(pdVar4,alStack_80);
        (**(code **)(*(long *)pdVar1[3] + 0x20))();
        pdVar1[3] = 0.0;
        (**(code **)(*(long *)pdVar3[3] + 0x18))((long *)pdVar3[3],pdVar1);
        (**(code **)(*(long *)pdVar3[3] + 0x20))();
        pdVar3[3] = 0.0;
        pdVar1[3] = (double)pdVar1;
        (**(code **)(alStack_80[0] + 0x18))(alStack_80);
        (**(code **)(alStack_80[0] + 0x20))(alStack_80);
      }
      else {
        (**(code **)((long)*pdVar4 + 0x18))();
        (**(code **)(*(long *)pdVar1[3] + 0x20))();
        pdVar1[3] = pdVar3[3];
      }
      pdVar3[3] = (double)pdVar3;
    }
    else if (pdVar5 == pdVar3) {
      pdVar2 = pdVar1;
      (**(code **)((long)*pdVar5 + 0x18))(pdVar5);
      (**(code **)(*(long *)pdVar3[3] + 0x20))();
      pdVar3[3] = pdVar1[3];
      pdVar1[3] = (double)pdVar1;
    }
    else {
      pdVar1[3] = (double)pdVar5;
      pdVar3[3] = (double)pdVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)pdVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  dVar7 = pdVar2[1];
  dVar9 = (*pdVar2 / 180.0) * 3.141592653589793;
  dVar8 = param_4[1];
  dVar10 = (*param_4 / 180.0) * 3.141592653589793;
  dVar6 = (dVar10 - dVar9) * 0.5;
  _sin(dVar6);
  _cos(dVar10);
  _cos(dVar9);
  dVar7 = ((dVar8 / 180.0) * 3.141592653589793 - (dVar7 / 180.0) * 3.141592653589793) * 0.5;
  _sin(dVar7);
  dVar10 = dVar6 * dVar6 + dVar7 * dVar7 * dVar9 * dVar10;
  dVar6 = SQRT(dVar10);
  _atan2(dVar6,SQRT(1.0 - dVar10));
  return ABS(dVar6 + dVar6) * 6371377.06;
}



/* Entry: 109472bec; end: 109472d57;  */

double FUN_109472bec(double param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar2 = param_3;
  if (param_3 != param_2) {
    pdVar1 = (double *)param_2[3];
    pdVar3 = (double *)param_3[3];
    if (pdVar1 == param_2) {
      if (pdVar3 == param_3) {
        (**(code **)((long)*pdVar1 + 0x18))(pdVar1,alStack_40);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0.0;
        (**(code **)(*(long *)param_3[3] + 0x18))((long *)param_3[3],param_2);
        (**(code **)(*(long *)param_3[3] + 0x20))();
        param_3[3] = 0.0;
        param_2[3] = (double)param_2;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)((long)*pdVar1 + 0x18))();
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = param_3[3];
      }
      param_3[3] = (double)param_3;
    }
    else if (pdVar3 == param_3) {
      pdVar2 = param_2;
      (**(code **)((long)*pdVar3 + 0x18))(pdVar3);
      (**(code **)(*(long *)param_3[3] + 0x20))();
      param_3[3] = param_2[3];
      param_2[3] = (double)param_2;
    }
    else {
      param_2[3] = (double)pdVar3;
      param_3[3] = (double)pdVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)pdVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  dVar5 = pdVar2[1];
  dVar7 = (*pdVar2 / 180.0) * 3.141592653589793;
  dVar6 = param_4[1];
  dVar8 = (*param_4 / 180.0) * 3.141592653589793;
  dVar4 = (dVar8 - dVar7) * 0.5;
  _sin(dVar4);
  _cos(dVar8);
  _cos(dVar7);
  dVar5 = ((dVar6 / 180.0) * 3.141592653589793 - (dVar5 / 180.0) * 3.141592653589793) * 0.5;
  _sin(dVar5);
  dVar8 = dVar4 * dVar4 + dVar5 * dVar5 * dVar7 * dVar8;
  dVar4 = SQRT(dVar8);
  _atan2(dVar4,SQRT(1.0 - dVar8));
  return ABS(dVar4 + dVar4) * 6371377.06;
}



/* Entry: 109472d58; end: 109472e1f;  */

double FUN_109472d58(undefined8 param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_2[1];
  dVar4 = (*param_2 / 180.0) * 3.141592653589793;
  dVar3 = param_3[1];
  dVar5 = (*param_3 / 180.0) * 3.141592653589793;
  dVar1 = (dVar5 - dVar4) * 0.5;
  _sin(dVar1);
  _cos(dVar5);
  _cos(dVar4);
  dVar2 = ((dVar3 / 180.0) * 3.141592653589793 - (dVar2 / 180.0) * 3.141592653589793) * 0.5;
  _sin(dVar2);
  dVar5 = dVar1 * dVar1 + dVar2 * dVar2 * dVar4 * dVar5;
  dVar1 = SQRT(dVar5);
  _atan2(dVar1,SQRT(1.0 - dVar5));
  return ABS(dVar1 + dVar1) * 6371377.06;
}



/* Entry: 109472e20; end: 109472f13;  */

long * FUN_109472e20(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((long *)(param_1 + 0x18) != param_2) {
    FUN_1094730e0();
  }
  lVar4 = *param_2;
  lVar2 = param_2[1];
  if (lVar4 == lVar2) {
LAB_109472e84:
    if (lVar4 != lVar2) {
      plVar1 = (long *)(param_1 + 0x88);
      if (*(char *)(param_1 + 0xd8) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,lVar4);
        uVar6 = *(undefined8 *)(lVar4 + 0x2c);
        uVar5 = *(undefined8 *)(lVar4 + 0x24);
        uVar7 = *(undefined8 *)(lVar4 + 0x18);
        *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(param_1 + 0xa0) = uVar7;
        *(undefined8 *)(param_1 + 0xb4) = uVar6;
        *(undefined8 *)(param_1 + 0xac) = uVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1 + 0xc0,lVar4 + 0x38);
      }
      else {
        FUN_109473468(plVar1,lVar4);
        *(undefined1 *)(param_1 + 0xd8) = 1;
      }
      return plVar1;
    }
  }
  else {
    do {
      if (*(int *)(lVar4 + 0x30) == 1) goto LAB_109472e84;
      lVar4 = lVar4 + 0x50;
    } while (lVar4 != lVar2);
  }
  plVar1 = (long *)(param_1 + 0x88);
  plVar3 = plVar1;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    if (*(char *)(param_1 + 0xd7) < '\0') {
      plVar3 = *(long **)(param_1 + 0xc0);
      __ZdlPv(plVar3);
    }
    if (*(char *)(param_1 + 0x9f) < '\0') {
      plVar3 = (long *)*plVar1;
      __ZdlPv(plVar3);
    }
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return plVar3;
}



/* Entry: 109472f14; end: 109473077;  */

undefined8 FUN_109472f14(double param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar6 = param_2[3];
  lVar10 = param_2[4];
  if ((lVar6 == lVar10) ||
     ((bVar2 = *(byte *)(param_2 + 0x10), bVar2 == 1 &&
      ((param_4 - param_2[0x1c] < *param_2 * 1000000 ||
       (FUN_109472d58(param_2,param_2 + 9,param_3), param_1 <= (double)param_2[0xb])))))) {
LAB_109473040:
    uVar4 = 0;
  }
  else {
    if (lVar6 + 0x50 != lVar10) {
      lVar7 = lVar6 + 0x68;
      lVar5 = lVar6;
      dVar8 = param_1;
      do {
        FUN_109472d58();
        param_1 = dVar8;
        FUN_109472d58();
        lVar6 = lVar7 + -0x18;
        if (param_1 <= dVar8) {
          lVar6 = lVar5;
        }
        lVar1 = lVar7 + 0x38;
        lVar7 = lVar7 + 0x50;
        lVar5 = lVar6;
        dVar8 = param_1;
      } while (lVar1 != lVar10);
    }
    if (((char)param_2[0x1b] == '\x01') && (FUN_109472d58(), (double)param_2[1] < param_1)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2 + 0x11)
      ;
      uVar9 = *(undefined8 *)((long)param_2 + 0xb4);
      uVar4 = *(undefined8 *)((long)param_2 + 0xac);
      lVar10 = param_2[0x14];
      *(long *)(lVar6 + 0x20) = param_2[0x15];
      *(long *)(lVar6 + 0x18) = lVar10;
      *(undefined8 *)(lVar6 + 0x2c) = uVar9;
      *(undefined8 *)(lVar6 + 0x24) = uVar4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar6 + 0x38,param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x10) & 1;
    }
    if (bVar2 != 0) {
      plVar3 = param_2 + 6;
      FUN_109473554(plVar3,lVar6);
      if (((ulong)plVar3 & 1) != 0) goto LAB_109473040;
    }
    FUN_109473078(param_2 + 6,lVar6);
    param_2[0x1c] = param_4;
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 109473078; end: 1094730df;  */

long FUN_109473078(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x2c);
    uVar1 = *(undefined8 *)(param_2 + 0x24);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x2c) = uVar2;
    *(undefined8 *)(param_1 + 0x24) = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x38,param_2 + 0x38);
  }
  else {
    FUN_109473300(param_1,param_2);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return param_1;
}



/* Entry: 1094730e0; end: 10947327b;  */

long * FUN_1094730e0(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  lVar4 = param_1[2];
  plVar6 = (long *)*param_1;
  if (param_4 <= (ulong)((lVar4 - (long)plVar6 >> 4) * -0x3333333333333333)) {
    lVar4 = param_1[1] - (long)plVar6;
    if (param_4 <= (ulong)((lVar4 >> 4) * -0x3333333333333333)) {
      FUN_1094733e4(param_2,param_3,plVar6);
      plVar6 = (long *)param_1[1];
      plVar1 = param_2;
      while (plVar6 != param_2) {
        plVar6 = plVar6 + -10;
        plVar1 = plVar6;
        FUN_1094733a0(plVar6);
      }
      param_1[1] = (long)param_2;
      return plVar1;
    }
    FUN_1094733e4(param_2,(long)param_2 + lVar4,plVar6);
    param_2 = (long *)((long)param_2 + lVar4);
    FUN_10947327c(param_2,param_3,param_1[1]);
LAB_109473218:
    param_1[1] = (long)param_2;
    return param_2;
  }
  plVar1 = param_1;
  plVar2 = param_2;
  plVar3 = param_3;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)param_1[1];
    plVar1 = plVar6;
    if (plVar7 != plVar6) {
      do {
        plVar7 = plVar7 + -10;
        FUN_1094733a0(plVar7);
      } while (plVar7 != plVar6);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = (long)plVar6;
    __ZdlPv();
    lVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x333333333333334) {
    uVar5 = (lVar4 >> 4) * -0x6666666666666666;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x199999999999998 < (ulong)((lVar4 >> 4) * -0x3333333333333333)) {
      uVar5 = 0x333333333333333;
    }
    if (uVar5 < 0x333333333333334) {
      lVar4 = uVar5 * 0x50;
      __Znwm();
      *param_1 = lVar4;
      param_1[1] = lVar4;
      param_1[2] = lVar4 + uVar5 * 0x50;
      FUN_10947327c(param_2,param_3,lVar4);
      goto LAB_109473218;
    }
  }
  FUN_109473454();
  param_1[1] = param_4;
  __Unwind_Resume();
  for (; plVar1 != plVar2; plVar1 = plVar1 + 10) {
    FUN_109473300(plVar3,plVar1);
    plVar3 = plVar3 + 10;
  }
  return plVar3;
}



/* Entry: 10947327c; end: 1094732ff;  */

long FUN_10947327c(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_109473300(param_3,param_1);
    param_3 = param_3 + 0x50;
  }
  return param_3;
}



/* Entry: 109473300; end: 10947339f;  */

undefined8 * FUN_109473300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 1094733a0; end: 1094733e3;  */

void FUN_1094733a0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094733e4; end: 109473453;  */

long FUN_1094733e4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x2c);
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    *(undefined8 *)(param_3 + 0x2c) = uVar2;
    *(undefined8 *)(param_3 + 0x24) = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 0x38,param_1 + 0x38);
    param_3 = param_3 + 0x50;
  }
  return param_3;
}



/* Entry: 109473454; end: 109473467;  */

undefined8 * FUN_109473454(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  uVar4 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)puVar1 + 0x24) = uVar4;
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(puVar1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    puVar1[9] = param_2[9];
    puVar1[8] = uVar3;
    puVar1[7] = uVar2;
  }
  return puVar1;
}



/* Entry: 109473468; end: 109473507;  */

undefined8 * FUN_109473468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 109473508; end: 109473553;  */

void FUN_109473508(undefined8 *param_1)

{
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



/* Entry: 109473554; end: 1094735bf;  */

bool FUN_109473554(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 1094735c0; end: 109473617;  */

undefined1 * FUN_1094735c0(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x50] = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_109473468(param_1);
    param_1[0x50] = 1;
  }
  return param_1;
}



/* Entry: 109473618; end: 109473663;  */

undefined8 * FUN_109473618(undefined8 *param_1)

{
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 109473664; end: 1094737f7;  */

undefined8 * FUN_109473664(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_DAT_110af6730;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xe) = 0;
  uStack_90 = *(undefined8 *)(param_2 + 0x10);
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  func_0x00010938e870(&ppuStack_68,&uStack_90);
  func_0x0001093fb138(param_2,&ppuStack_68);
  ppuStack_b0 = &PTR_FUN_110af4c80;
  lStack_a8 = lStack_60;
  uStack_a0 = uStack_58;
  uStack_98 = uStack_50;
  uStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_1093fb548(&uStack_90,&ppuStack_b0,8);
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  puVar1[2] = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_70 = 0;
  FUN_10939d61c(param_1 + 1);
  FUN_10939d61c(&uStack_70,0);
  puStack_48 = &uStack_90;
  FUN_10939d590(&puStack_48);
  ppuStack_b0 = &PTR_FUN_110af4c80;
  if (lStack_a8 != 0) {
    __ZdaPv();
  }
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  if (lStack_60 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 1094737f8; end: 1094739db;  */

undefined8 * FUN_1094737f8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  int iStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_DAT_110af6730;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xe) = 0;
  uStack_90 = *(undefined8 *)(param_2 + 0x10);
  lStack_60 = 0;
  uStack_58 = 0;
  iStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  func_0x00010938e870(&ppuStack_68,&uStack_90);
  uStack_90 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010938e870(&ppuStack_68,&uStack_90);
  if (0 < uStack_58._4_4_) {
    iVar2 = 0;
    do {
      _memcpy(lStack_60 + (long)iStack_50 * (long)iVar2,
              *(long *)(param_2 + 8) + (long)*(int *)(param_2 + 0x18) * (long)iVar2,
              (long)(int)uStack_58);
      iVar2 = iVar2 + 1;
    } while (iVar2 < uStack_58._4_4_);
  }
  ppuStack_b0 = &PTR_FUN_110af4c80;
  lStack_a8 = lStack_60;
  uStack_a0 = CONCAT44(uStack_58._4_4_,(int)uStack_58);
  iStack_98 = iStack_50;
  iStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_1093fb548(&uStack_90,&ppuStack_b0,8);
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  puVar1[2] = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_70 = 0;
  FUN_10939d61c(param_1 + 1);
  FUN_10939d61c(&uStack_70,0);
  puStack_48 = &uStack_90;
  FUN_10939d590(&puStack_48);
  ppuStack_b0 = &PTR_FUN_110af4c80;
  if (lStack_a8 != 0) {
    __ZdaPv();
  }
  lStack_a8 = 0;
  uStack_a0 = 0;
  iStack_98 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  if (lStack_60 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 1094739dc; end: 109473a13;  */

void FUN_1094739dc(long param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_2[1];
  dVar3 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x30);
  *param_3 = (*param_2 + *(double *)(param_1 + 0x20) * -0.5) * dVar2;
  param_3[1] = -((dVar1 + dVar3 * -0.5) * dVar2);
  param_3[2] = 0.0;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0x3ff0000000000000;
  return;
}



/* Entry: 109473a14; end: 109473a97;  */

void FUN_109473a14(long param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = param_2[1];
  dVar5 = *(double *)(param_1 + 0x28);
  dVar6 = *(double *)(param_1 + 0x30);
  dVar2 = (*param_2 + *(double *)(param_1 + 0x20) * -0.5) * dVar6;
  dVar1 = dVar2 * 6.283185307179586;
  ___sincos_stret();
  dVar4 = *(double *)(param_1 + 0x38);
  *param_3 = dVar4 * dVar1;
  param_3[1] = -((dVar3 + dVar5 * -0.5) * dVar6);
  param_3[2] = dVar4 * dVar2;
  *param_4 = dVar1;
  param_4[1] = 0.0;
  param_4[2] = dVar2;
  return;
}



/* Entry: 109473a98; end: 109473b67;  */

undefined8 * FUN_109473a98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110af6730;
  FUN_10939d61c(param_1 + 1,0);
  return param_1;
}



/* Entry: 109473b68; end: 109473f53;  */

long * FUN_109473b68(long *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lStack_2c0;
  long *plStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_228;
  long *plStack_220;
  undefined8 *puStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [144];
  undefined1 uStack_110;
  uint uStack_100;
  undefined1 uStack_fc;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 uStack_70;
  long lStack_58;
  
  plVar8 = &lStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_3;
  lVar17 = param_3[3];
  lVar16 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = lVar12;
  param_1[3] = lVar17;
  param_1[2] = lVar16;
  if (*(char *)((long)param_3 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_3[4],param_3[5]);
  }
  else {
    lVar16 = param_3[5];
    lVar12 = param_3[4];
    param_1[6] = param_3[6];
    param_1[5] = lVar16;
    param_1[4] = lVar12;
  }
  puVar3 = (undefined8 *)0x0;
  plVar14 = param_1 + 8;
  param_1[9] = 0;
  *plVar14 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  plVar13 = param_1 + 0x14;
  param_1[0x15] = 0;
  *plVar13 = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x1d] = 0x3ff0000000000000;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3ff0000000000000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x3ff0000000000000;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x60] = 0x3ff0000000000000;
  param_1[99] = 0;
  param_1[100] = 0x3ff0000000000000;
  param_1[0x67] = 0;
  param_1[0x68] = 0x3ff0000000000000;
  param_1[0x6e] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0x3ff0000000000000;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0x3ff0000000000000;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x78] = 0x3ff0000000000000;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0x3ff0000000000000;
  param_1[0x7f] = 0;
  param_1[0x80] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x91] = 0x403e000000000000;
  param_1[0x92] = 0x403e000000000000;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined2 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  if (*(char *)((long)param_3 + 1) == '\x01') {
    puVar3 = (undefined8 *)0x70;
    __Znwm();
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[6] = 0x32aaaba7;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
  }
  param_1[0x9c] = (long)puVar3;
  param_1[0x9d] = 0;
  plVar15 = (long *)param_2[1];
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  if (plVar15 != (long *)0x0) {
    plVar10 = plVar15 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_e8 = 0;
  lStack_e0 = 0;
  uStack_100 = *(uint *)((long)param_3 + 0xc);
  uStack_fc = 1;
  lStack_f8 = param_3[3];
  uStack_f0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_f0,param_3 + 4);
  FUN_1095b77d8(param_1 + 0x9e,&uStack_1b0,&uStack_100,param_1 + 0x9c);
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if (plVar15 != (long *)0x0) {
    plVar10 = plVar15 + 1;
    do {
      lVar12 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uStack_100 = uStack_100 & 0xffffff00;
  uStack_70 = 0;
  auStack_1a0[0] = 0;
  uStack_110 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puVar9 = &uStack_100;
  plVar10 = (long *)auStack_1a0;
  iVar11 = 0;
  plVar4 = param_1;
  FUN_109473f54();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_109477570(param_1 + 0x9a);
  FUN_109458ce0(param_1 + 0x48);
  FUN_109474290(plVar13);
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  FUN_109477774(plVar14);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  plVar5 = plVar4;
  __Unwind_Resume();
  plVar6 = &lStack_2c0;
  plVar7 = &lStack_2c0;
  plStack_220 = plVar15;
  puStack_218 = param_2;
  plStack_210 = plVar4;
  plStack_208 = plVar13;
  plStack_200 = plVar14;
  plStack_1f8 = param_1;
  puStack_1f0 = &stack0xfffffffffffffff0;
  pcStack_1e8 = FUN_109473f54;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar5 + 0x14;
  lVar16 = plVar8[1];
  lVar12 = *plVar8;
  lVar18 = plVar8[3];
  lVar17 = plVar8[2];
  uVar19 = *(undefined8 *)((long)plVar8 + 0x1c);
  *(undefined8 *)((long)plVar5 + 0x21c) = *(undefined8 *)((long)plVar8 + 0x24);
  *(undefined8 *)((long)plVar5 + 0x214) = uVar19;
  plVar5[0x40] = lVar16;
  plVar5[0x3f] = lVar12;
  plVar5[0x42] = lVar18;
  plVar5[0x41] = lVar17;
  if ((char)puVar9[0x24] == '\x01') {
    plVar8 = plVar5 + 8;
    FUN_109477814(plVar8,plVar5 + 0xd);
    if (plVar8 != (long *)0x0) {
      lVar12 = plVar8[5];
      *(char *)((long)plVar5 + 0x1f1) = (char)plVar10[0x12];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar14,plVar5 + 0xd)
      ;
      plVar8 = plVar5 + 0x17;
      FUN_109475e4c(plVar8,lVar12);
      *(bool *)(plVar5 + 0x3e) = (int)plVar5[0x46] == 0;
      *(undefined4 *)(plVar5 + 0x45) = *(undefined4 *)(*(long *)(lVar12 + 0x58) + 0x204);
      if (iVar11 == 0) {
        lVar12 = *(long *)puVar9;
        plVar5[0x1b] = *(long *)(puVar9 + 2);
        plVar5[0x1a] = lVar12;
        lVar12 = *(long *)(puVar9 + 4);
        plVar5[0x1d] = *(long *)(puVar9 + 6);
        plVar5[0x1c] = lVar12;
        lVar12 = *(long *)(puVar9 + 8);
        plVar5[0x1f] = *(long *)(puVar9 + 10);
        plVar5[0x1e] = lVar12;
        plVar5[0x20] = *(long *)(puVar9 + 0xc);
        lVar12 = *(long *)(puVar9 + 0x10);
        plVar5[0x23] = *(long *)(puVar9 + 0x12);
        plVar5[0x22] = lVar12;
        lVar12 = *(long *)(puVar9 + 0x14);
        plVar5[0x25] = *(long *)(puVar9 + 0x16);
        plVar5[0x24] = lVar12;
        lVar12 = *(long *)(puVar9 + 0x18);
        plVar5[0x27] = *(long *)(puVar9 + 0x1a);
        plVar5[0x26] = lVar12;
        lVar12 = *(long *)(puVar9 + 0x1c);
        plVar5[0x29] = *(long *)(puVar9 + 0x1e);
        plVar5[0x28] = lVar12;
        plVar5[0x2a] = *(long *)(puVar9 + 0x20);
        if ((*(byte *)(plVar10 + 0x12) & 1) != 0) {
          lVar12 = *plVar10;
          plVar5[0x2d] = plVar10[1];
          plVar5[0x2c] = lVar12;
          lVar12 = plVar10[2];
          plVar5[0x2f] = plVar10[3];
          plVar5[0x2e] = lVar12;
          lVar12 = plVar10[4];
          plVar5[0x31] = plVar10[5];
          plVar5[0x30] = lVar12;
          plVar5[0x32] = plVar10[6];
          lVar12 = plVar10[8];
          plVar5[0x35] = plVar10[9];
          plVar5[0x34] = lVar12;
          lVar12 = plVar10[10];
          plVar5[0x37] = plVar10[0xb];
          plVar5[0x36] = lVar12;
          lVar12 = plVar10[0xc];
          plVar5[0x39] = plVar10[0xd];
          plVar5[0x38] = lVar12;
          lVar12 = plVar10[0xe];
          plVar5[0x3b] = plVar10[0xf];
          plVar5[0x3a] = lVar12;
          plVar5[0x3c] = plVar10[0x10];
          goto LAB_109474258;
        }
      }
      else {
        FUN_109475c10(&lStack_2c0,puVar9);
        plVar5[0x1b] = (long)plStack_2b8;
        plVar5[0x1a] = lStack_2c0;
        plVar5[0x1d] = lStack_2a8;
        plVar5[0x1c] = lStack_2b0;
        plVar5[0x1f] = lStack_298;
        plVar5[0x1e] = lStack_2a0;
        plVar5[0x20] = lStack_290;
        plVar5[0x27] = lStack_258;
        plVar5[0x26] = lStack_260;
        plVar5[0x29] = lStack_248;
        plVar5[0x28] = lStack_250;
        plVar5[0x2a] = lStack_240;
        plVar5[0x23] = lStack_278;
        plVar5[0x22] = lStack_280;
        plVar5[0x25] = lStack_268;
        plVar5[0x24] = lStack_270;
        plVar8 = plVar6;
        if ((*(byte *)(plVar10 + 0x12) & 1) != 0) {
          FUN_109475c10(&lStack_2c0,plVar10);
          plVar5[0x2d] = (long)plStack_2b8;
          plVar5[0x2c] = lStack_2c0;
          plVar5[0x2f] = lStack_2a8;
          plVar5[0x2e] = lStack_2b0;
          plVar5[0x31] = lStack_298;
          plVar5[0x30] = lStack_2a0;
          plVar5[0x32] = lStack_290;
          plVar5[0x39] = lStack_258;
          plVar5[0x38] = lStack_260;
          plVar5[0x3b] = lStack_248;
          plVar5[0x3a] = lStack_250;
          plVar5[0x3c] = lStack_240;
          plVar5[0x35] = lStack_278;
          plVar5[0x34] = lStack_280;
          plVar5[0x37] = lStack_268;
          plVar5[0x36] = lStack_270;
          plVar8 = plVar7;
          goto LAB_109474258;
        }
      }
      plVar5[0x2c] = 0;
      plVar5[0x2d] = 0;
      plVar5[0x2e] = 0;
      plVar5[0x2f] = 0x3ff0000000000000;
      plVar5[0x31] = 0;
      plVar5[0x32] = 0;
      plVar5[0x30] = 0;
      plVar5[0x34] = 0x3ff0000000000000;
      plVar5[0x35] = 0;
      plVar5[0x36] = 0;
      plVar5[0x37] = 0;
      plVar5[0x38] = 0x3ff0000000000000;
      plVar5[0x39] = 0;
      plVar5[0x3a] = 0;
      plVar5[0x3b] = 0;
      plVar5[0x3c] = 0x3ff0000000000000;
      goto LAB_109474258;
    }
    *(undefined1 *)((long)plVar5 + 0x1f1) = 0;
    if (*(char *)((long)plVar5 + 0xb7) < '\0') {
      plVar5[0x15] = 0;
      plVar14 = (long *)plVar5[0x14];
    }
    else {
      *(undefined1 *)((long)plVar5 + 0xb7) = 0;
    }
    *(undefined1 *)plVar14 = 0;
    lStack_2c0 = 0;
    plStack_2b8 = (long *)0x0;
    plVar8 = plVar5 + 0x17;
    FUN_10947577c(plVar8,&lStack_2c0);
    if (plStack_2b8 != (long *)0x0) {
      plVar14 = plStack_2b8 + 1;
      do {
        lVar12 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_1094741ec;
    }
  }
  else {
    *(undefined1 *)((long)plVar5 + 0x1f1) = 0;
    if (*(char *)((long)plVar5 + 0xb7) < '\0') {
      plVar5[0x15] = 0;
      plVar14 = (long *)plVar5[0x14];
    }
    else {
      *(undefined1 *)((long)plVar5 + 0xb7) = 0;
    }
    *(undefined1 *)plVar14 = 0;
    lStack_2c0 = 0;
    plStack_2b8 = (long *)0x0;
    plVar8 = plVar5 + 0x17;
    FUN_10947577c(plVar8,&lStack_2c0);
    if (plStack_2b8 != (long *)0x0) {
      plVar14 = plStack_2b8 + 1;
      do {
        lVar12 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_1094741ec:
      plVar14 = plStack_2b8;
      if (lVar12 == 0) {
        (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar8 = plVar14;
      }
    }
  }
  plVar5[0x1a] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1d] = 0x3ff0000000000000;
  plVar5[0x1f] = 0;
  plVar5[0x20] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x22] = 0x3ff0000000000000;
  plVar5[0x23] = 0;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  plVar5[0x26] = 0x3ff0000000000000;
  plVar5[0x27] = 0;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  plVar5[0x2a] = 0x3ff0000000000000;
  plVar5[0x2c] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2e] = 0;
  plVar5[0x2f] = 0x3ff0000000000000;
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x30] = 0;
  plVar5[0x34] = 0x3ff0000000000000;
  plVar5[0x35] = 0;
  plVar5[0x36] = 0;
  plVar5[0x37] = 0;
  plVar5[0x38] = 0x3ff0000000000000;
  plVar5[0x39] = 0;
  plVar5[0x3a] = 0;
  plVar5[0x3b] = 0;
  plVar5[0x3c] = 0x3ff0000000000000;
  *(undefined1 *)(plVar5 + 0x3e) = 0;
LAB_109474258:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
    ___stack_chk_fail();
    __Unwind_Resume();
    FUN_10947766c(plVar8 + 3);
    if (*(char *)((long)plVar8 + 0x17) < '\0') {
      __ZdlPv(*plVar8);
    }
    return plVar8;
  }
  return plVar8;
}



/* Entry: 109473f54; end: 10947428f;  */

long * FUN_109473f54(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                    undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  plVar5 = &lStack_e0;
  plVar3 = &lStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined1 *)(param_1 + 0xa0);
  uVar9 = param_5[1];
  uVar8 = *param_5;
  uVar11 = param_5[3];
  uVar10 = param_5[2];
  uVar12 = *(undefined8 *)((long)param_5 + 0x1c);
  *(undefined8 *)(param_1 + 0x21c) = *(undefined8 *)((long)param_5 + 0x24);
  *(undefined8 *)(param_1 + 0x214) = uVar12;
  *(undefined8 *)(param_1 + 0x200) = uVar9;
  *(undefined8 *)(param_1 + 0x1f8) = uVar8;
  *(undefined8 *)(param_1 + 0x210) = uVar11;
  *(undefined8 *)(param_1 + 0x208) = uVar10;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    lVar7 = param_1 + 0x40;
    FUN_109477814(lVar7,param_1 + 0x68);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x28);
      *(undefined1 *)(param_1 + 0x1f1) = *(undefined1 *)(param_3 + 0x12);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar6,param_1 + 0x68);
      plVar4 = (long *)(param_1 + 0xb8);
      FUN_109475e4c(plVar4,lVar7);
      *(bool *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x230) == 0;
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(*(long *)(lVar7 + 0x58) + 0x204);
      if (param_4 == 0) {
        uVar8 = *param_2;
        *(undefined8 *)(param_1 + 0xd8) = param_2[1];
        *(undefined8 *)(param_1 + 0xd0) = uVar8;
        uVar8 = param_2[2];
        *(undefined8 *)(param_1 + 0xe8) = param_2[3];
        *(undefined8 *)(param_1 + 0xe0) = uVar8;
        uVar8 = param_2[4];
        *(undefined8 *)(param_1 + 0xf8) = param_2[5];
        *(undefined8 *)(param_1 + 0xf0) = uVar8;
        *(undefined8 *)(param_1 + 0x100) = param_2[6];
        uVar8 = param_2[8];
        *(undefined8 *)(param_1 + 0x118) = param_2[9];
        *(undefined8 *)(param_1 + 0x110) = uVar8;
        uVar8 = param_2[10];
        *(undefined8 *)(param_1 + 0x128) = param_2[0xb];
        *(undefined8 *)(param_1 + 0x120) = uVar8;
        uVar8 = param_2[0xc];
        *(undefined8 *)(param_1 + 0x138) = param_2[0xd];
        *(undefined8 *)(param_1 + 0x130) = uVar8;
        uVar8 = param_2[0xe];
        *(undefined8 *)(param_1 + 0x148) = param_2[0xf];
        *(undefined8 *)(param_1 + 0x140) = uVar8;
        *(undefined8 *)(param_1 + 0x150) = param_2[0x10];
        if ((*(byte *)(param_3 + 0x12) & 1) != 0) {
          uVar8 = *param_3;
          *(undefined8 *)(param_1 + 0x168) = param_3[1];
          *(undefined8 *)(param_1 + 0x160) = uVar8;
          uVar8 = param_3[2];
          *(undefined8 *)(param_1 + 0x178) = param_3[3];
          *(undefined8 *)(param_1 + 0x170) = uVar8;
          uVar8 = param_3[4];
          *(undefined8 *)(param_1 + 0x188) = param_3[5];
          *(undefined8 *)(param_1 + 0x180) = uVar8;
          *(undefined8 *)(param_1 + 400) = param_3[6];
          uVar8 = param_3[8];
          *(undefined8 *)(param_1 + 0x1a8) = param_3[9];
          *(undefined8 *)(param_1 + 0x1a0) = uVar8;
          uVar8 = param_3[10];
          *(undefined8 *)(param_1 + 0x1b8) = param_3[0xb];
          *(undefined8 *)(param_1 + 0x1b0) = uVar8;
          uVar8 = param_3[0xc];
          *(undefined8 *)(param_1 + 0x1c8) = param_3[0xd];
          *(undefined8 *)(param_1 + 0x1c0) = uVar8;
          uVar8 = param_3[0xe];
          *(undefined8 *)(param_1 + 0x1d8) = param_3[0xf];
          *(undefined8 *)(param_1 + 0x1d0) = uVar8;
          *(undefined8 *)(param_1 + 0x1e0) = param_3[0x10];
          goto LAB_109474258;
        }
      }
      else {
        FUN_109475c10(&lStack_e0,param_2);
        *(long **)(param_1 + 0xd8) = plStack_d8;
        *(long *)(param_1 + 0xd0) = lStack_e0;
        *(undefined8 *)(param_1 + 0xe8) = uStack_c8;
        *(undefined8 *)(param_1 + 0xe0) = uStack_d0;
        *(undefined8 *)(param_1 + 0xf8) = uStack_b8;
        *(undefined8 *)(param_1 + 0xf0) = uStack_c0;
        *(undefined8 *)(param_1 + 0x100) = uStack_b0;
        *(undefined8 *)(param_1 + 0x138) = uStack_78;
        *(undefined8 *)(param_1 + 0x130) = uStack_80;
        *(undefined8 *)(param_1 + 0x148) = uStack_68;
        *(undefined8 *)(param_1 + 0x140) = uStack_70;
        *(undefined8 *)(param_1 + 0x150) = uStack_60;
        *(undefined8 *)(param_1 + 0x118) = uStack_98;
        *(undefined8 *)(param_1 + 0x110) = uStack_a0;
        *(undefined8 *)(param_1 + 0x128) = uStack_88;
        *(undefined8 *)(param_1 + 0x120) = uStack_90;
        plVar4 = plVar5;
        if ((*(byte *)(param_3 + 0x12) & 1) != 0) {
          FUN_109475c10(&lStack_e0,param_3);
          *(long **)(param_1 + 0x168) = plStack_d8;
          *(long *)(param_1 + 0x160) = lStack_e0;
          *(undefined8 *)(param_1 + 0x178) = uStack_c8;
          *(undefined8 *)(param_1 + 0x170) = uStack_d0;
          *(undefined8 *)(param_1 + 0x188) = uStack_b8;
          *(undefined8 *)(param_1 + 0x180) = uStack_c0;
          *(undefined8 *)(param_1 + 400) = uStack_b0;
          *(undefined8 *)(param_1 + 0x1c8) = uStack_78;
          *(undefined8 *)(param_1 + 0x1c0) = uStack_80;
          *(undefined8 *)(param_1 + 0x1d8) = uStack_68;
          *(undefined8 *)(param_1 + 0x1d0) = uStack_70;
          *(undefined8 *)(param_1 + 0x1e0) = uStack_60;
          *(undefined8 *)(param_1 + 0x1a8) = uStack_98;
          *(undefined8 *)(param_1 + 0x1a0) = uStack_a0;
          *(undefined8 *)(param_1 + 0x1b8) = uStack_88;
          *(undefined8 *)(param_1 + 0x1b0) = uStack_90;
          plVar4 = plVar3;
          goto LAB_109474258;
        }
      }
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0x3ff0000000000000;
      goto LAB_109474258;
    }
    *(undefined1 *)(param_1 + 0x1f1) = 0;
    if (*(char *)(param_1 + 0xb7) < '\0') {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      puVar6 = *(undefined1 **)(param_1 + 0xa0);
    }
    else {
      *(undefined1 *)(param_1 + 0xb7) = 0;
    }
    *puVar6 = 0;
    lStack_e0 = 0;
    plStack_d8 = (long *)0x0;
    plVar4 = (long *)(param_1 + 0xb8);
    FUN_10947577c(plVar4,&lStack_e0);
    if (plStack_d8 != (long *)0x0) {
      plVar5 = plStack_d8 + 1;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_1094741ec;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1f1) = 0;
    if (*(char *)(param_1 + 0xb7) < '\0') {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      puVar6 = *(undefined1 **)(param_1 + 0xa0);
    }
    else {
      *(undefined1 *)(param_1 + 0xb7) = 0;
    }
    *puVar6 = 0;
    lStack_e0 = 0;
    plStack_d8 = (long *)0x0;
    plVar4 = (long *)(param_1 + 0xb8);
    FUN_10947577c(plVar4,&lStack_e0);
    if (plStack_d8 != (long *)0x0) {
      plVar5 = plStack_d8 + 1;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_1094741ec:
      plVar5 = plStack_d8;
      if (lVar7 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar4 = plVar5;
      }
    }
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
LAB_109474258:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    FUN_10947766c(plVar4 + 3);
    if (*(char *)((long)plVar4 + 0x17) < '\0') {
      __ZdlPv(*plVar4);
    }
    return plVar4;
  }
  return plVar4;
}



/* Entry: 109474290; end: 1094743a3;  */

undefined8 * FUN_109474290(undefined8 *param_1)

{
  FUN_10947766c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1094743a4; end: 109474577;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1094743a4(long param_1,long *param_2,long *******param_3,long *param_4)

{
  byte ******ppppppbVar1;
  byte ****ppppbVar2;
  long *plVar3;
  byte *****pppppbVar4;
  byte ******ppppppbVar5;
  byte ****ppppbVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  byte ****ppppbVar14;
  undefined8 *puVar15;
  long ******pppppplVar16;
  ulong uVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  undefined **ppuVar20;
  long *plVar21;
  byte *******pppppppbVar22;
  byte *extraout_x8;
  undefined8 *extraout_x8_00;
  byte ***pppbVar23;
  double *pdVar24;
  double *pdVar25;
  long ******pppppplVar26;
  byte *pbVar27;
  long lVar28;
  byte ******ppppppbVar29;
  long *plVar30;
  long *****ppppplVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long *****ppppplVar35;
  double dVar36;
  undefined8 auStack_360 [2];
  char cStack_349;
  undefined *puStack_348;
  long lStack_340;
  long *plStack_338;
  undefined *puStack_328;
  long *****ppppplStack_320;
  long ******pppppplStack_318;
  byte *****pppppbStack_310;
  byte *pbStack_300;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  long alStack_2d8 [3];
  long *plStack_2c0;
  long alStack_2b8 [3];
  long *plStack_2a0;
  undefined1 auStack_290 [152];
  long lStack_1f8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  long ******pppppplStack_188;
  char cStack_180;
  undefined7 uStack_17f;
  long *****ppppplStack_178;
  char cStack_169;
  long alStack_168 [3];
  long *plStack_150;
  long lStack_148;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long ******pppppplStack_108;
  byte *******pppppppbStack_100;
  long *****ppppplStack_f8;
  char cStack_e9;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  long *******ppppppplStack_80;
  long *****ppppplStack_78;
  char cStack_69;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x40;
  plVar21 = param_4;
  FUN_109477814();
  if (param_1 != 0) {
    lVar28 = *(long *)(param_1 + 0x28);
    ppppppplVar12 = (long *******)(lVar28 + 0x28);
    pppppplVar26 = *param_3;
    pppppplVar18 = param_3[1];
    pppppplVar16 = *ppppppplVar12;
    pppppplVar19 = pppppplVar26;
    if ((long)*(long *******)(lVar28 + 0x30) - (long)*ppppppplVar12 ==
        (long)pppppplVar18 - (long)pppppplVar26) {
      do {
        if (pppppplVar16 == *(long *******)(lVar28 + 0x30)) {
          pdVar24 = *(double **)(lVar28 + 0x40);
          pdVar25 = (double *)*param_4;
          if ((long)*(double **)(lVar28 + 0x48) - (long)*(double **)(lVar28 + 0x40) ==
              param_4[1] - *param_4) goto LAB_109474440;
          break;
        }
        ppppplVar31 = *pppppplVar16;
        ppppplVar35 = *pppppplVar19;
        pppppplVar16 = pppppplVar16 + 1;
        pppppplVar19 = pppppplVar19 + 1;
      } while ((double)ppppplVar31 == (double)ppppplVar35);
    }
    goto LAB_10947445c;
  }
  lStack_88 = *param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lStack_88 = (long)param_2;
  }
  FUN_1093780e0(&ppppppplStack_80,&UNK_10f56e1d6,&lStack_88);
  pppppplVar26 = (long ******)&UNK_10f56e137;
  pppppplVar18 = (long ******)&UNK_10f56e1ac;
  ppppppplVar12 = (long *******)0x1;
  plVar21 = (long *)0x7a;
  FUN_109388c6c();
  if (cStack_69 < '\0') {
    ppppppplVar12 = ppppppplStack_80;
    __ZdlPv();
  }
  goto LAB_109474524;
  while( true ) {
    dVar32 = *pdVar24;
    dVar36 = *pdVar25;
    pdVar24 = pdVar24 + 1;
    pdVar25 = pdVar25 + 1;
    if (dVar32 != dVar36) break;
LAB_109474440:
    if (pdVar24 == *(double **)(lVar28 + 0x48)) goto LAB_109474524;
  }
LAB_10947445c:
  if (ppppppplVar12 != param_3) {
    plVar21 = (long *)((long)pppppplVar18 - (long)pppppplVar26 >> 3);
    FUN_109476a04();
  }
  if ((long *)(lVar28 + 0x40) != param_4) {
    pppppplVar18 = (long ******)param_4[1];
    plVar21 = (long *)((long)pppppplVar18 - *param_4 >> 3);
    FUN_109476a04();
  }
  FUN_1095bdd04(&ppppppplStack_80,lVar28 + 0x20);
  ppppppplVar12 = *(long ********)(lVar28 + 0x58);
  *(long ********)(lVar28 + 0x58) = ppppppplStack_80;
  ppppppplStack_80 = ppppppplVar12;
  FUN_1094778f8(lVar28 + 0x80,auStack_58);
  pppppplVar26 = &ppppplStack_78;
  FUN_109477a64(lVar28 + 0x60);
  ppppppplVar12 = (long *******)&ppppppplStack_80;
  FUN_1094775c8();
LAB_109474524:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_69 < '\0') {
    __ZdlPv(ppppppplStack_80);
  }
  ppppppplVar13 = ppppppplVar12;
  __Unwind_Resume();
  pcStack_98 = FUN_109474578;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar13 = ppppppplVar13 + 8;
  pppppplVar16 = pppppplVar26;
  pppppplVar19 = pppppplVar18;
  ppppppplStack_b0 = param_3;
  ppppppplStack_a8 = ppppppplVar12;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_109477814();
  if (ppppppplVar13 == (long *******)0x0) {
    pppppplStack_108 = (long ******)*pppppplVar26;
    if (-1 < *(char *)((long)pppppplVar26 + 0x17)) {
      pppppplStack_108 = pppppplVar26;
    }
    FUN_1093780e0(&pppppppbStack_100,&UNK_10f56e1d6,&pppppplStack_108);
    pppppplVar16 = (long ******)&UNK_10f56e137;
    pppppplVar19 = (long ******)&UNK_10f56e216;
    pppppppbVar22 = (byte *******)0x1;
    plVar21 = (long *)0x87;
    FUN_109388c6c();
    if (cStack_e9 < '\0') {
      pppppppbVar22 = pppppppbStack_100;
      __ZdlPv();
    }
  }
  else {
    pppppplVar26 = ppppppplVar13[5];
    pppppppbVar22 = (byte *******)(pppppplVar26 + 4);
    if ((uint)*(byte *)pppppppbVar22 != (uint)pppppplVar18) {
      *(char *)(pppppplVar26 + 4) = (char)pppppplVar18;
      FUN_1095bdd04(&pppppppbStack_100);
      pppppppbVar22 = (byte *******)pppppplVar26[0xb];
      pppppplVar26[0xb] = (long *****)pppppppbStack_100;
      pppppppbStack_100 = pppppppbVar22;
      FUN_1094778f8(pppppplVar26 + 0x10,auStack_d8);
      pppppplVar16 = &ppppplStack_f8;
      FUN_109477a64(pppppplVar26 + 0xc);
      pppppppbVar22 = (byte *******)&pppppppbStack_100;
      FUN_1094775c8();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_e9 < '\0') {
    __ZdlPv(pppppppbStack_100);
  }
  __Unwind_Resume();
  pcStack_118 = FUN_1094746ac;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppbVar22 = pppppppbVar22 + 8;
  ppuStack_120 = &puStack_a0;
  FUN_109477814();
  if (pppppppbVar22 == (byte *******)0x0) {
    pppppplStack_188 = (long ******)*pppppplVar16;
    if (-1 < *(char *)((long)pppppplVar16 + 0x17)) {
      pppppplStack_188 = pppppplVar16;
    }
    FUN_1093780e0(&cStack_180,&UNK_10f56e261,&pppppplStack_188);
    ppuVar20 = (undefined **)&UNK_10f56e243;
    pppppplVar26 = (long ******)0x1;
    plVar21 = (long *)0xa8;
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f56e243,0xa8,&cStack_180);
    if (cStack_169 < '\0') {
      pppppplVar26 = (long ******)CONCAT71(uStack_17f,cStack_180);
      __ZdlPv();
    }
  }
  else {
    ppppppbVar29 = pppppppbVar22[5];
    ppppppbVar1 = ppppppbVar29 + 0x2b;
    bVar7 = *(byte *)((long)pppppplVar19 + 0x17);
    ppuVar20 = (undefined **)pppppplVar19[1];
    if (-1 < (char)bVar7) {
      ppuVar20 = (undefined **)(ulong)bVar7;
    }
    bVar8 = *(byte *)((long)ppppppbVar29 + 0x16f);
    pppppbVar4 = ppppppbVar29[0x2c];
    if (-1 < (char)bVar8) {
      pppppbVar4 = (byte *****)(ulong)bVar8;
    }
    if ((byte *****)ppuVar20 == pppppbVar4) {
      pppppplVar26 = (long ******)*pppppplVar19;
      if (-1 < (char)bVar7) {
        pppppplVar26 = pppppplVar19;
      }
      ppppppbVar5 = (byte ******)*ppppppbVar1;
      if (-1 < (char)bVar8) {
        ppppppbVar5 = ppppppbVar1;
      }
      _memcmp(pppppplVar26,ppppppbVar5);
      if ((int)pppppplVar26 == 0) goto LAB_109474924;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppppppbVar1,pppppplVar19);
    plStack_150 = (long *)0x0;
    ppuVar20 = (undefined **)0x1;
    plVar21 = (long *)0x0;
    FUN_1094749d8(&cStack_180,pppppplVar19,alStack_168,1,0);
    if (plStack_150 == alStack_168) {
      lVar28 = 0x20;
LAB_1094747e4:
      (**(code **)(*plStack_150 + lVar28))();
    }
    else if (plStack_150 != (long *)0x0) {
      lVar28 = 0x28;
      goto LAB_1094747e4;
    }
    if ((cStack_180 == '\x01') &&
       (FUN_10947a85c(ppppplStack_178,&UNK_10f56e233), ppppplStack_178 != (long *****)0x0)) {
      FUN_10945a80c(&cStack_180,&UNK_10f56e233);
      FUN_10938d198();
      if (((char)pppppplStack_188 == '\x01') && (*ppppppbVar29 != (byte *****)0x0)) {
        ppppbVar14 = **pppppppbVar22[5];
        ppppbVar6 = (*pppppppbVar22[5])[1];
        if (ppppbVar6 != (byte ****)0x0) {
          ppppbVar2 = ppppbVar6 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppbVar2,0x10);
            if (bVar10) {
              *ppppbVar2 = (byte ***)((long)*ppppbVar2 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        if (ppppbVar14 == (byte ****)0x0) {
LAB_1094748e0:
          if (ppppbVar6 == (byte ****)0x0) goto LAB_109474914;
        }
        else {
          ppuVar20 = &PTR_DAT_110af6b58;
          plVar21 = (long *)0x0;
          ___dynamic_cast(ppppbVar14,&PTR_DAT_110af6ad0,&PTR_DAT_110af6b58,0);
          if (ppppbVar14 == (byte ****)0x0) goto LAB_1094748e0;
          if (ppppbVar6 != (byte ****)0x0) {
            ppppbVar2 = ppppbVar6 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppbVar2,0x10);
              if (bVar10) {
                *ppppbVar2 = (byte ***)((long)*ppppbVar2 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          if (ppppbVar14[0x1e] != (byte ***)0x0) {
            *(undefined1 *)(ppppbVar14[0x1e] + 10) = 0;
          }
          if (ppppbVar6 == (byte ****)0x0) goto LAB_109474914;
          ppppbVar14 = ppppbVar6 + 1;
          do {
            pppbVar23 = *ppppbVar14;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppbVar14,0x10);
            if (bVar10) {
              *ppppbVar14 = (byte ***)((long)pppbVar23 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppbVar23 == (byte ***)0x0) {
            (*(code *)(*ppppbVar6)[2])(ppppbVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppbVar6);
          }
        }
        ppppbVar14 = ppppbVar6 + 1;
        do {
          pppbVar23 = *ppppbVar14;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppbVar14,0x10);
          if (bVar10) {
            *ppppbVar14 = (byte ***)((long)pppbVar23 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppbVar23 == (byte ***)0x0) {
          (*(code *)(*ppppbVar6)[2])(ppppbVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppbVar6);
        }
      }
    }
LAB_109474914:
    pppppplVar26 = &ppppplStack_178;
    FUN_109380ffc(pppppplVar26,cStack_180);
  }
LAB_109474924:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_169 < '\0') {
    __ZdlPv(CONCAT71(uStack_17f,cStack_180));
  }
  __Unwind_Resume();
  pcStack_198 = FUN_1094749d8;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  pbVar27 = extraout_x8 + 8;
  pbVar27[0] = 0;
  pbVar27[1] = 0;
  pbVar27[2] = 0;
  pbVar27[3] = 0;
  pbVar27[4] = 0;
  pbVar27[5] = 0;
  pbVar27[6] = 0;
  pbVar27[7] = 0;
  bVar7 = *(byte *)((long)pppppplVar26 + 0x17);
  ppppplVar35 = (long *****)(ulong)bVar7;
  pppppplVar18 = (long ******)*pppppplVar26;
  ppppplVar31 = pppppplVar26[1];
  pppuStack_1a0 = &ppuStack_120;
  FUN_1093830cc(alStack_2d8);
  if (-1 < (char)bVar7) {
    ppppplVar31 = ppppplVar35;
    pppppplVar18 = pppppplVar26;
  }
  FUN_109477bd0(alStack_2b8,pppppplVar18,(undefined *)((long)pppppplVar18 + (long)ppppplVar31),
                alStack_2d8,ppuVar20,plVar21);
  FUN_109477cb8(alStack_2b8,1,extraout_x8);
  FUN_1094790dc(auStack_290);
  if (plStack_2a0 == alStack_2b8) {
    lVar28 = 0x20;
LAB_109474a94:
    (**(code **)(*plStack_2a0 + lVar28))();
  }
  else if (plStack_2a0 != (long *)0x0) {
    lVar28 = 0x28;
    goto LAB_109474a94;
  }
  plVar21 = plStack_2c0;
  if (plStack_2c0 == alStack_2d8) {
    lVar28 = 0x20;
LAB_109474ac0:
    (**(code **)(*plStack_2c0 + lVar28))();
  }
  else if (plStack_2c0 != (long *)0x0) {
    lVar28 = 0x28;
    goto LAB_109474ac0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  FUN_109478158(alStack_2b8);
  if (plStack_2c0 == alStack_2d8) {
    lVar28 = 0x20;
  }
  else {
    if (plStack_2c0 == (long *)0x0) goto LAB_109474b50;
    lVar28 = 0x28;
  }
  (**(code **)(*plStack_2c0 + lVar28))();
LAB_109474b50:
  uVar17 = (ulong)*extraout_x8;
  FUN_109380ffc(pbVar27,uVar17);
  __Unwind_Resume();
  puVar15 = auStack_360;
  pcStack_2e8 = FUN_109474b64;
  lStack_340 = plVar21[0x9a];
  plVar30 = (long *)plVar21[0x9b];
  ppppplStack_320 = ppppplVar35;
  pppppplStack_318 = pppppplVar26;
  pppppbStack_310 = (byte *****)ppuVar20;
  pbStack_300 = pbVar27;
  ppppuStack_2f0 = &pppuStack_1a0;
  if (plVar30 == (long *)0x0) {
    puStack_348 = &UNK_10f56e2a0;
    plStack_338 = (long *)0x0;
    puStack_328 = &UNK_10f56e2a0;
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    plVar3 = plVar30 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *plVar3 = *plVar3 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    puStack_348 = &UNK_10f56e2a0;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *plVar3 = *plVar3 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    puStack_328 = &UNK_10f56e2a0;
    plStack_338 = plVar30;
    __ZNSt3__16chrono12steady_clock3nowEv();
    do {
      lVar28 = *plVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *plVar3 = lVar28 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  __ZNSt3__19to_stringEi(auStack_360,(int)plVar21[0xa0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (auStack_360,0,&UNK_10f56e2bf,9);
  uVar34 = puVar15[1];
  uVar33 = *puVar15;
  extraout_x8_00[2] = puVar15[2];
  extraout_x8_00[1] = uVar34;
  *extraout_x8_00 = uVar33;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = 0;
  if (cStack_349 < '\0') {
    __ZdlPv(auStack_360[0]);
  }
  *(int *)(plVar21 + 0xa0) = (int)plVar21[0xa0] + 1;
  FUN_109474d14(plVar21,extraout_x8_00);
  plVar21 = plVar21 + 8;
  FUN_109477814(plVar21,extraout_x8_00);
  if (plVar21 != (long *)0x0) {
    FUN_109474db0(plVar21[5] + 0x10,uVar17);
    FUN_1095b7388(&puStack_348);
    return;
  }
  FUN_109262df8(&UNK_10f56e356);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109474cd4);
  (*pcVar11)();
}



/* Entry: 109474578; end: 1094746ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109474578(long param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  byte ******ppppppbVar1;
  byte ****ppppbVar2;
  byte *****pppppbVar3;
  byte ******ppppppbVar4;
  byte ****ppppbVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  byte *******pppppppbVar11;
  long *plVar12;
  byte ****ppppbVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined **ppuVar17;
  byte *extraout_x8;
  undefined8 *extraout_x8_00;
  byte ***pppbVar18;
  long lVar19;
  byte *pbVar20;
  byte ******ppppppbVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  undefined *puStack_2b8;
  long lStack_2b0;
  long *plStack_2a8;
  undefined *puStack_298;
  ulong uStack_290;
  long *plStack_288;
  byte *****pppppbStack_280;
  byte *pbStack_270;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  long alStack_248 [3];
  long *plStack_230;
  long alStack_228 [3];
  long *plStack_210;
  undefined1 auStack_200 [152];
  long lStack_168;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 *puStack_f8;
  char cStack_f0;
  undefined7 uStack_ef;
  long lStack_e8;
  char cStack_d9;
  long alStack_d8 [3];
  long *plStack_c0;
  long lStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  byte *******pppppppbStack_70;
  undefined8 uStack_68;
  char cStack_59;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x40;
  puVar15 = param_2;
  plVar14 = param_3;
  FUN_109477814();
  if (param_1 == 0) {
    puStack_78 = (undefined8 *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      puStack_78 = param_2;
    }
    FUN_1093780e0(&pppppppbStack_70,&UNK_10f56e1d6,&puStack_78);
    puVar15 = (undefined8 *)&UNK_10f56e137;
    plVar14 = (long *)&UNK_10f56e216;
    pppppppbVar11 = (byte *******)0x1;
    param_4 = 0x87;
    FUN_109388c6c();
    if (cStack_59 < '\0') {
      pppppppbVar11 = pppppppbStack_70;
      __ZdlPv();
    }
  }
  else {
    lVar19 = *(long *)(param_1 + 0x28);
    pppppppbVar11 = (byte *******)(lVar19 + 0x20);
    if ((uint)*(byte *)pppppppbVar11 != (uint)param_3) {
      *(char *)(lVar19 + 0x20) = (char)param_3;
      FUN_1095bdd04(&pppppppbStack_70);
      pppppppbVar11 = *(byte ********)(lVar19 + 0x58);
      *(byte ********)(lVar19 + 0x58) = pppppppbStack_70;
      pppppppbStack_70 = pppppppbVar11;
      FUN_1094778f8(lVar19 + 0x80,auStack_48);
      puVar15 = &uStack_68;
      FUN_109477a64(lVar19 + 0x60);
      pppppppbVar11 = (byte *******)&pppppppbStack_70;
      FUN_1094775c8();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_59 < '\0') {
    __ZdlPv(pppppppbStack_70);
  }
  __Unwind_Resume();
  pcStack_88 = FUN_1094746ac;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppbVar11 = pppppppbVar11 + 8;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_109477814();
  if (pppppppbVar11 == (byte *******)0x0) {
    puStack_f8 = (undefined8 *)*puVar15;
    if (-1 < *(char *)((long)puVar15 + 0x17)) {
      puStack_f8 = puVar15;
    }
    FUN_1093780e0(&cStack_f0,&UNK_10f56e261,&puStack_f8);
    ppuVar17 = (undefined **)&UNK_10f56e243;
    plVar12 = (long *)0x1;
    param_4 = 0xa8;
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f56e243,0xa8,&cStack_f0);
    if (cStack_d9 < '\0') {
      plVar12 = (long *)CONCAT71(uStack_ef,cStack_f0);
      __ZdlPv();
    }
  }
  else {
    ppppppbVar21 = pppppppbVar11[5];
    ppppppbVar1 = ppppppbVar21 + 0x2b;
    bVar6 = *(byte *)((long)plVar14 + 0x17);
    ppuVar17 = (undefined **)plVar14[1];
    if (-1 < (char)bVar6) {
      ppuVar17 = (undefined **)(ulong)bVar6;
    }
    bVar7 = *(byte *)((long)ppppppbVar21 + 0x16f);
    pppppbVar3 = ppppppbVar21[0x2c];
    if (-1 < (char)bVar7) {
      pppppbVar3 = (byte *****)(ulong)bVar7;
    }
    if ((byte *****)ppuVar17 == pppppbVar3) {
      plVar12 = (long *)*plVar14;
      if (-1 < (char)bVar6) {
        plVar12 = plVar14;
      }
      ppppppbVar4 = (byte ******)*ppppppbVar1;
      if (-1 < (char)bVar7) {
        ppppppbVar4 = ppppppbVar1;
      }
      _memcmp(plVar12,ppppppbVar4);
      if ((int)plVar12 == 0) goto LAB_109474924;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppppppbVar1,plVar14);
    plStack_c0 = (long *)0x0;
    ppuVar17 = (undefined **)0x1;
    param_4 = 0;
    FUN_1094749d8(&cStack_f0,plVar14,alStack_d8,1,0);
    if (plStack_c0 == alStack_d8) {
      lVar19 = 0x20;
LAB_1094747e4:
      (**(code **)(*plStack_c0 + lVar19))();
    }
    else if (plStack_c0 != (long *)0x0) {
      lVar19 = 0x28;
      goto LAB_1094747e4;
    }
    if ((cStack_f0 == '\x01') && (FUN_10947a85c(lStack_e8,&UNK_10f56e233), lStack_e8 != 0)) {
      FUN_10945a80c(&cStack_f0,&UNK_10f56e233);
      FUN_10938d198();
      if (((char)puStack_f8 == '\x01') && (*ppppppbVar21 != (byte *****)0x0)) {
        ppppbVar13 = **pppppppbVar11[5];
        ppppbVar5 = (*pppppppbVar11[5])[1];
        if (ppppbVar5 != (byte ****)0x0) {
          ppppbVar2 = ppppbVar5 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ppppbVar2,0x10);
            if (bVar9) {
              *ppppbVar2 = (byte ***)((long)*ppppbVar2 + 1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if (ppppbVar13 == (byte ****)0x0) {
LAB_1094748e0:
          if (ppppbVar5 == (byte ****)0x0) goto LAB_109474914;
        }
        else {
          ppuVar17 = &PTR_DAT_110af6b58;
          param_4 = 0;
          ___dynamic_cast(ppppbVar13,&PTR_DAT_110af6ad0,&PTR_DAT_110af6b58,0);
          if (ppppbVar13 == (byte ****)0x0) goto LAB_1094748e0;
          if (ppppbVar5 != (byte ****)0x0) {
            ppppbVar2 = ppppbVar5 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppppbVar2,0x10);
              if (bVar9) {
                *ppppbVar2 = (byte ***)((long)*ppppbVar2 + 1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (ppppbVar13[0x1e] != (byte ***)0x0) {
            *(undefined1 *)(ppppbVar13[0x1e] + 10) = 0;
          }
          if (ppppbVar5 == (byte ****)0x0) goto LAB_109474914;
          ppppbVar13 = ppppbVar5 + 1;
          do {
            pppbVar18 = *ppppbVar13;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ppppbVar13,0x10);
            if (bVar9) {
              *ppppbVar13 = (byte ***)((long)pppbVar18 + -1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (pppbVar18 == (byte ***)0x0) {
            (*(code *)(*ppppbVar5)[2])(ppppbVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppbVar5);
          }
        }
        ppppbVar13 = ppppbVar5 + 1;
        do {
          pppbVar18 = *ppppbVar13;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppbVar13,0x10);
          if (bVar9) {
            *ppppbVar13 = (byte ***)((long)pppbVar18 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppbVar18 == (byte ***)0x0) {
          (*(code *)(*ppppbVar5)[2])(ppppbVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppbVar5);
        }
      }
    }
LAB_109474914:
    plVar12 = &lStack_e8;
    FUN_109380ffc(plVar12,cStack_f0);
  }
LAB_109474924:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_d9 < '\0') {
    __ZdlPv(CONCAT71(uStack_ef,cStack_f0));
  }
  __Unwind_Resume();
  pcStack_108 = FUN_1094749d8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  pbVar20 = extraout_x8 + 8;
  pbVar20[0] = 0;
  pbVar20[1] = 0;
  pbVar20[2] = 0;
  pbVar20[3] = 0;
  pbVar20[4] = 0;
  pbVar20[5] = 0;
  pbVar20[6] = 0;
  pbVar20[7] = 0;
  bVar6 = *(byte *)((long)plVar12 + 0x17);
  uVar23 = (ulong)bVar6;
  plVar14 = (long *)*plVar12;
  uVar16 = plVar12[1];
  ppuStack_110 = &puStack_90;
  FUN_1093830cc(alStack_248);
  if (-1 < (char)bVar6) {
    uVar16 = uVar23;
    plVar14 = plVar12;
  }
  FUN_109477bd0(alStack_228,plVar14,(undefined *)((long)plVar14 + uVar16),alStack_248,ppuVar17,
                param_4);
  FUN_109477cb8(alStack_228,1,extraout_x8);
  FUN_1094790dc(auStack_200);
  if (plStack_210 == alStack_228) {
    lVar19 = 0x20;
LAB_109474a94:
    (**(code **)(*plStack_210 + lVar19))();
  }
  else if (plStack_210 != (long *)0x0) {
    lVar19 = 0x28;
    goto LAB_109474a94;
  }
  plVar14 = plStack_230;
  if (plStack_230 == alStack_248) {
    lVar19 = 0x20;
LAB_109474ac0:
    (**(code **)(*plStack_230 + lVar19))();
  }
  else if (plStack_230 != (long *)0x0) {
    lVar19 = 0x28;
    goto LAB_109474ac0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  FUN_109478158(alStack_228);
  if (plStack_230 == alStack_248) {
    lVar19 = 0x20;
  }
  else {
    if (plStack_230 == (long *)0x0) goto LAB_109474b50;
    lVar19 = 0x28;
  }
  (**(code **)(*plStack_230 + lVar19))();
LAB_109474b50:
  uVar16 = (ulong)*extraout_x8;
  FUN_109380ffc(pbVar20,uVar16);
  __Unwind_Resume();
  puVar15 = auStack_2d0;
  pcStack_258 = FUN_109474b64;
  lStack_2b0 = plVar14[0x9a];
  plVar22 = (long *)plVar14[0x9b];
  uStack_290 = uVar23;
  plStack_288 = plVar12;
  pppppbStack_280 = (byte *****)ppuVar17;
  pbStack_270 = pbVar20;
  pppuStack_260 = &ppuStack_110;
  if (plVar22 == (long *)0x0) {
    puStack_2b8 = &UNK_10f56e2a0;
    plStack_2a8 = (long *)0x0;
    puStack_298 = &UNK_10f56e2a0;
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    plVar12 = plVar22 + 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = *plVar12 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    puStack_2b8 = &UNK_10f56e2a0;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = *plVar12 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    puStack_298 = &UNK_10f56e2a0;
    plStack_2a8 = plVar22;
    __ZNSt3__16chrono12steady_clock3nowEv();
    do {
      lVar19 = *plVar12;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  __ZNSt3__19to_stringEi(auStack_2d0,(int)plVar14[0xa0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (auStack_2d0,0,&UNK_10f56e2bf,9);
  uVar25 = puVar15[1];
  uVar24 = *puVar15;
  extraout_x8_00[2] = puVar15[2];
  extraout_x8_00[1] = uVar25;
  *extraout_x8_00 = uVar24;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = 0;
  if (cStack_2b9 < '\0') {
    __ZdlPv(auStack_2d0[0]);
  }
  *(int *)(plVar14 + 0xa0) = (int)plVar14[0xa0] + 1;
  FUN_109474d14(plVar14,extraout_x8_00);
  plVar14 = plVar14 + 8;
  FUN_109477814(plVar14,extraout_x8_00);
  if (plVar14 == (long *)0x0) {
    FUN_109262df8(&UNK_10f56e356);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109474cd4);
    (*pcVar10)();
  }
  FUN_109474db0(plVar14[5] + 0x10,uVar16);
  FUN_1095b7388(&puStack_2b8);
  return;
}



/* Entry: 1094746ac; end: 1094749d7;  */

void FUN_1094746ac(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  byte *extraout_x8;
  undefined8 *extraout_x8_00;
  byte *pbVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_250 [2];
  char cStack_239;
  undefined *puStack_238;
  long lStack_230;
  long *plStack_228;
  undefined *puStack_218;
  ulong uStack_210;
  long *plStack_208;
  undefined **ppuStack_200;
  byte *pbStack_1f0;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  long alStack_1c8 [3];
  long *plStack_1b0;
  long alStack_1a8 [3];
  long *plStack_190;
  undefined1 auStack_180 [152];
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  char cStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  char cStack_59;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x40;
  FUN_109477814();
  if (param_1 == 0) {
    lStack_78 = *param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      lStack_78 = (long)param_2;
    }
    FUN_1093780e0(&cStack_70,&UNK_10f56e261,&lStack_78);
    ppuVar12 = (undefined **)&UNK_10f56e243;
    plVar8 = (long *)0x1;
    param_4 = 0xa8;
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f56e243,0xa8,&cStack_70);
    if (cStack_59 < '\0') {
      plVar8 = (long *)CONCAT71(uStack_6f,cStack_70);
      __ZdlPv();
    }
  }
  else {
    plVar15 = *(long **)(param_1 + 0x28);
    plVar9 = plVar15 + 0x2b;
    bVar3 = *(byte *)((long)param_3 + 0x17);
    ppuVar12 = (undefined **)param_3[1];
    if (-1 < (char)bVar3) {
      ppuVar12 = (undefined **)(ulong)bVar3;
    }
    bVar4 = *(byte *)((long)plVar15 + 0x16f);
    ppuVar1 = (undefined **)plVar15[0x2c];
    if (-1 < (char)bVar4) {
      ppuVar1 = (undefined **)(ulong)bVar4;
    }
    if (ppuVar12 == ppuVar1) {
      plVar8 = (long *)*param_3;
      if (-1 < (char)bVar3) {
        plVar8 = param_3;
      }
      plVar2 = (long *)*plVar9;
      if (-1 < (char)bVar4) {
        plVar2 = plVar9;
      }
      _memcmp(plVar8,plVar2);
      if ((int)plVar8 == 0) goto LAB_109474924;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_3);
    plStack_40 = (long *)0x0;
    ppuVar12 = (undefined **)0x1;
    param_4 = 0;
    FUN_1094749d8(&cStack_70,param_3,alStack_58,1,0);
    if (plStack_40 == alStack_58) {
      lVar13 = 0x20;
LAB_1094747e4:
      (**(code **)(*plStack_40 + lVar13))();
    }
    else if (plStack_40 != (long *)0x0) {
      lVar13 = 0x28;
      goto LAB_1094747e4;
    }
    if ((cStack_70 == '\x01') && (FUN_10947a85c(lStack_68,&UNK_10f56e233), lStack_68 != 0)) {
      FUN_10945a80c(&cStack_70,&UNK_10f56e233);
      FUN_10938d198();
      if (((char)lStack_78 == '\x01') && (*plVar15 != 0)) {
        lVar13 = *(long *)**(undefined8 **)(param_1 + 0x28);
        plVar8 = (long *)((long *)**(undefined8 **)(param_1 + 0x28))[1];
        if (plVar8 != (long *)0x0) {
          plVar9 = plVar8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (lVar13 == 0) {
LAB_1094748e0:
          if (plVar8 == (long *)0x0) goto LAB_109474914;
        }
        else {
          ppuVar12 = &PTR_DAT_110af6b58;
          param_4 = 0;
          ___dynamic_cast(lVar13,&PTR_DAT_110af6ad0,&PTR_DAT_110af6b58,0);
          if (lVar13 == 0) goto LAB_1094748e0;
          if (plVar8 != (long *)0x0) {
            plVar9 = plVar8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = *plVar9 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (*(long *)(lVar13 + 0xf0) != 0) {
            *(undefined1 *)(*(long *)(lVar13 + 0xf0) + 0x50) = 0;
          }
          if (plVar8 == (long *)0x0) goto LAB_109474914;
          plVar9 = plVar8 + 1;
          do {
            lVar13 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar9 = plVar8 + 1;
        do {
          lVar13 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
LAB_109474914:
    plVar8 = &lStack_68;
    FUN_109380ffc(plVar8,cStack_70);
  }
LAB_109474924:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_59 < '\0') {
    __ZdlPv(CONCAT71(uStack_6f,cStack_70));
  }
  __Unwind_Resume();
  pcStack_88 = FUN_1094749d8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  pbVar14 = extraout_x8 + 8;
  pbVar14[0] = 0;
  pbVar14[1] = 0;
  pbVar14[2] = 0;
  pbVar14[3] = 0;
  pbVar14[4] = 0;
  pbVar14[5] = 0;
  pbVar14[6] = 0;
  pbVar14[7] = 0;
  bVar3 = *(byte *)((long)plVar8 + 0x17);
  uVar16 = (ulong)bVar3;
  plVar9 = (long *)*plVar8;
  uVar11 = plVar8[1];
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_1093830cc(alStack_1c8);
  if (-1 < (char)bVar3) {
    uVar11 = uVar16;
    plVar9 = plVar8;
  }
  FUN_109477bd0(alStack_1a8,plVar9,(long)plVar9 + uVar11,alStack_1c8,ppuVar12,param_4);
  FUN_109477cb8(alStack_1a8,1,extraout_x8);
  FUN_1094790dc(auStack_180);
  if (plStack_190 == alStack_1a8) {
    lVar13 = 0x20;
LAB_109474a94:
    (**(code **)(*plStack_190 + lVar13))();
  }
  else if (plStack_190 != (long *)0x0) {
    lVar13 = 0x28;
    goto LAB_109474a94;
  }
  plVar9 = plStack_1b0;
  if (plStack_1b0 == alStack_1c8) {
    lVar13 = 0x20;
LAB_109474ac0:
    (**(code **)(*plStack_1b0 + lVar13))();
  }
  else if (plStack_1b0 != (long *)0x0) {
    lVar13 = 0x28;
    goto LAB_109474ac0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  FUN_109478158(alStack_1a8);
  if (plStack_1b0 == alStack_1c8) {
    lVar13 = 0x20;
  }
  else {
    if (plStack_1b0 == (long *)0x0) goto LAB_109474b50;
    lVar13 = 0x28;
  }
  (**(code **)(*plStack_1b0 + lVar13))();
LAB_109474b50:
  uVar11 = (ulong)*extraout_x8;
  FUN_109380ffc(pbVar14,uVar11);
  __Unwind_Resume();
  puVar10 = auStack_250;
  pcStack_1d8 = FUN_109474b64;
  lStack_230 = plVar9[0x9a];
  plVar15 = (long *)plVar9[0x9b];
  uStack_210 = uVar16;
  plStack_208 = plVar8;
  ppuStack_200 = ppuVar12;
  pbStack_1f0 = pbVar14;
  ppuStack_1e0 = &puStack_90;
  if (plVar15 == (long *)0x0) {
    puStack_238 = &UNK_10f56e2a0;
    plStack_228 = (long *)0x0;
    puStack_218 = &UNK_10f56e2a0;
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    plVar8 = plVar15 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puStack_238 = &UNK_10f56e2a0;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puStack_218 = &UNK_10f56e2a0;
    plStack_228 = plVar15;
    __ZNSt3__16chrono12steady_clock3nowEv();
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  __ZNSt3__19to_stringEi(auStack_250,(int)plVar9[0xa0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (auStack_250,0,&UNK_10f56e2bf,9);
  uVar18 = puVar10[1];
  uVar17 = *puVar10;
  extraout_x8_00[2] = puVar10[2];
  extraout_x8_00[1] = uVar18;
  *extraout_x8_00 = uVar17;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  if (cStack_239 < '\0') {
    __ZdlPv(auStack_250[0]);
  }
  *(int *)(plVar9 + 0xa0) = (int)plVar9[0xa0] + 1;
  FUN_109474d14(plVar9,extraout_x8_00);
  plVar9 = plVar9 + 8;
  FUN_109477814(plVar9,extraout_x8_00);
  if (plVar9 == (long *)0x0) {
    FUN_109262df8(&UNK_10f56e356);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109474cd4);
    (*pcVar7)();
  }
  FUN_109474db0(plVar9[5] + 0x10,uVar11);
  FUN_1095b7388(&puStack_238);
  return;
}



/* Entry: 1094749d8; end: 109474b63;  */

void FUN_1094749d8(byte *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *extraout_x8;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  undefined *puStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined *puStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  byte *pbStack_170;
  byte *pbStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long alStack_148 [3];
  long *plStack_130;
  long alStack_128 [3];
  long *plStack_110;
  undefined1 auStack_100 [152];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  pbVar10 = param_1 + 8;
  pbVar10[0] = 0;
  pbVar10[1] = 0;
  pbVar10[2] = 0;
  pbVar10[3] = 0;
  pbVar10[4] = 0;
  pbVar10[5] = 0;
  pbVar10[6] = 0;
  pbVar10[7] = 0;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar12 = (ulong)bVar2;
  puVar7 = (undefined8 *)*param_2;
  uVar8 = param_2[1];
  FUN_1093830cc(alStack_148);
  if (-1 < (char)bVar2) {
    uVar8 = uVar12;
    puVar7 = param_2;
  }
  FUN_109477bd0(alStack_128,puVar7,(long)puVar7 + uVar8,alStack_148,param_4,param_5);
  FUN_109477cb8(alStack_128,1,param_1);
  FUN_1094790dc(auStack_100);
  if (plStack_110 == alStack_128) {
    lVar9 = 0x20;
LAB_109474a94:
    (**(code **)(*plStack_110 + lVar9))();
  }
  else if (plStack_110 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_109474a94;
  }
  plVar6 = plStack_130;
  if (plStack_130 == alStack_148) {
    lVar9 = 0x20;
LAB_109474ac0:
    (**(code **)(*plStack_130 + lVar9))();
  }
  else if (plStack_130 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_109474ac0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_109478158(alStack_128);
  if (plStack_130 == alStack_148) {
    lVar9 = 0x20;
  }
  else {
    if (plStack_130 == (long *)0x0) goto LAB_109474b50;
    lVar9 = 0x28;
  }
  (**(code **)(*plStack_130 + lVar9))();
LAB_109474b50:
  uVar8 = (ulong)*param_1;
  FUN_109380ffc(pbVar10,uVar8);
  __Unwind_Resume();
  puVar7 = auStack_1d0;
  pcStack_158 = FUN_109474b64;
  lStack_1b0 = plVar6[0x9a];
  plVar11 = (long *)plVar6[0x9b];
  uStack_190 = uVar12;
  puStack_188 = param_2;
  uStack_180 = param_4;
  pbStack_170 = pbVar10;
  pbStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  if (plVar11 == (long *)0x0) {
    puStack_1b8 = &UNK_10f56e2a0;
    plStack_1a8 = (long *)0x0;
    puStack_198 = &UNK_10f56e2a0;
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    plVar1 = plVar11 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puStack_1b8 = &UNK_10f56e2a0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puStack_198 = &UNK_10f56e2a0;
    plStack_1a8 = plVar11;
    __ZNSt3__16chrono12steady_clock3nowEv();
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  __ZNSt3__19to_stringEi(auStack_1d0,(int)plVar6[0xa0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (auStack_1d0,0,&UNK_10f56e2bf,9);
  uVar14 = puVar7[1];
  uVar13 = *puVar7;
  extraout_x8[2] = puVar7[2];
  extraout_x8[1] = uVar14;
  *extraout_x8 = uVar13;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (cStack_1b9 < '\0') {
    __ZdlPv(auStack_1d0[0]);
  }
  *(int *)(plVar6 + 0xa0) = (int)plVar6[0xa0] + 1;
  FUN_109474d14(plVar6,extraout_x8);
  plVar6 = plVar6 + 8;
  FUN_109477814(plVar6,extraout_x8);
  if (plVar6 == (long *)0x0) {
    FUN_109262df8(&UNK_10f56e356);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109474cd4);
    (*pcVar5)();
  }
  FUN_109474db0(plVar6[5] + 0x10,uVar8);
  FUN_1095b7388(&puStack_1b8);
  return;
}



/* Entry: 109474b64; end: 109474d13;  */

void FUN_109474b64(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar6 = auStack_80;
  uStack_60 = *(undefined8 *)(param_2 + 0x4d0);
  plVar8 = *(long **)(param_2 + 0x4d8);
  if (plVar8 == (long *)0x0) {
    puStack_68 = &UNK_10f56e2a0;
    plStack_58 = (long *)0x0;
    puStack_48 = &UNK_10f56e2a0;
    lVar5 = param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    lStack_50 = lVar5;
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_68 = &UNK_10f56e2a0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_48 = &UNK_10f56e2a0;
    lVar5 = param_2;
    plStack_58 = plVar8;
    __ZNSt3__16chrono12steady_clock3nowEv();
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_50 = lVar5;
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  __ZNSt3__19to_stringEi(auStack_80,*(undefined4 *)(param_2 + 0x500));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (auStack_80,0,&UNK_10f56e2bf,9);
  uVar10 = puVar6[1];
  uVar9 = *puVar6;
  param_1[2] = puVar6[2];
  param_1[1] = uVar10;
  *param_1 = uVar9;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  *(int *)(param_2 + 0x500) = *(int *)(param_2 + 0x500) + 1;
  FUN_109474d14(param_2,param_1);
  param_2 = param_2 + 0x40;
  FUN_109477814(param_2,param_1);
  if (param_2 != 0) {
    FUN_109474db0(*(long *)(param_2 + 0x28) + 0x10,param_3);
    FUN_1095b7388(&puStack_68);
    return;
  }
  FUN_109262df8(&UNK_10f56e356);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109474cd4);
  (*pcVar4)();
}



/* Entry: 109474d14; end: 109474daf;  */

void FUN_109474d14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = 0x170;
  __Znwm();
  FUN_10947a988();
  lStack_38 = lVar1;
  FUN_10947aad4(param_1 + 0x40,param_2,param_2,&lStack_38);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x00010947aa60(&lStack_38);
  }
  return;
}



/* Entry: 109474db0; end: 109474e2b;  */

undefined8 * FUN_109474db0(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 109474e2c; end: 109474f77;  */

/* WARNING: Possible PIC construction at 0x000109475304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001094754f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109475204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094754fc) */
/* WARNING: Removing unreachable block (ram,0x000109475504) */
/* WARNING: Removing unreachable block (ram,0x000109475508) */
/* WARNING: Removing unreachable block (ram,0x000109475510) */
/* WARNING: Removing unreachable block (ram,0x000109475518) */
/* WARNING: Removing unreachable block (ram,0x00010947551c) */
/* WARNING: Removing unreachable block (ram,0x000109475534) */
/* WARNING: Removing unreachable block (ram,0x000109475308) */
/* WARNING: Removing unreachable block (ram,0x000109475310) */
/* WARNING: Removing unreachable block (ram,0x000109475314) */
/* WARNING: Removing unreachable block (ram,0x00010947531c) */
/* WARNING: Removing unreachable block (ram,0x000109475324) */
/* WARNING: Removing unreachable block (ram,0x000109475328) */
/* WARNING: Removing unreachable block (ram,0x000109475340) */
/* WARNING: Removing unreachable block (ram,0x000109475208) */
/* WARNING: Removing unreachable block (ram,0x000109475210) */
/* WARNING: Removing unreachable block (ram,0x000109475214) */
/* WARNING: Removing unreachable block (ram,0x00010947521c) */
/* WARNING: Removing unreachable block (ram,0x000109475224) */
/* WARNING: Removing unreachable block (ram,0x000109475228) */

undefined ********
FUN_109474e2c(undefined4 param_1,undefined8 param_2,undefined ********param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined ********ppppppppuVar3;
  undefined *****pppppuVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  ulong uVar14;
  long lVar15;
  undefined *******pppppppuVar16;
  undefined ******ppppppuVar17;
  undefined ********ppppppppuVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined *******pppppppuVar21;
  undefined *******pppppppuVar22;
  undefined *******pppppppuStack_2e8;
  undefined *******pppppppuStack_2e0;
  undefined ******ppppppuStack_2d8;
  undefined ******ppppppuStack_2d0;
  undefined *******pppppppuStack_2c8;
  undefined *******pppppppuStack_2c0;
  undefined4 uStack_2b8;
  undefined *******pppppppuStack_2b0;
  undefined *******pppppppuStack_2a8;
  undefined8 uStack_2a0;
  undefined *******pppppppuStack_270;
  undefined *******pppppppuStack_268;
  undefined ******ppppppuStack_260;
  undefined ******ppppppuStack_258;
  undefined ******ppppppuStack_250;
  undefined ******ppppppuStack_248;
  undefined ******ppppppuStack_240;
  undefined ******ppppppuStack_238;
  undefined ******ppppppuStack_230;
  undefined ******ppppppuStack_220;
  undefined ******ppppppuStack_218;
  undefined ******ppppppuStack_210;
  undefined ******ppppppuStack_208;
  undefined ******ppppppuStack_200;
  undefined ******ppppppuStack_1f8;
  undefined ******ppppppuStack_1f0;
  undefined ******ppppppuStack_1e8;
  undefined ******ppppppuStack_1e0;
  char cStack_1d0;
  char cStack_1c0;
  long lStack_1a8;
  undefined *****pppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined ******ppppppuStack_110;
  long *plStack_108;
  undefined1 uStack_100;
  undefined1 uStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_128 = (undefined *****)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  puVar5 = (undefined8 *)param_4[1];
  for (puVar20 = (undefined8 *)*param_4; puVar20 != puVar5; puVar20 = puVar20 + 2) {
    plStack_108 = (long *)puVar20[1];
    ppppppuStack_110 = (undefined ******)*puVar20;
    if (puVar20[1] != 0) {
      plVar1 = (long *)(puVar20[1] + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = *plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    uStack_100 = 0;
    uStack_70 = 0;
    FUN_109476b2c(&pppppuStack_128,&ppppppuStack_110);
    plVar1 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar2 = plStack_108 + 1;
      do {
        lVar15 = *plVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar15 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  ppppppuVar17 = &pppppuStack_128;
  FUN_109474f78(param_2);
  ppppppppuVar10 = (undefined ********)&ppppppuStack_110;
  ppppppuStack_110 = &pppppuStack_128;
  FUN_109476e28();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppppuVar10;
  }
  ___stack_chk_fail();
  ppppppuStack_110 = &pppppuStack_128;
  FUN_109476e28(&ppppppuStack_110);
  __Unwind_Resume();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = ((long)ppppppuVar17[1] - (long)*ppppppuVar17 >> 4) * 0x2e8ba2e8ba2e8ba3;
  if (1 < uVar14) {
    pppppppuStack_2b0 = *param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      pppppppuStack_2b0 = (undefined *******)param_3;
    }
    pppppppuStack_2e8 = (undefined *******)CONCAT44(pppppppuStack_2e8._4_4_,(int)uVar14);
    FUN_1093890ec(&pppppppuStack_270,&UNK_10f56e2e5,&pppppppuStack_2b0,&pppppppuStack_2e8);
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f56e2c9,0xce,&pppppppuStack_270);
    if ((long)ppppppuStack_260 < 0) {
      __ZdlPv(pppppppuStack_270);
    }
  }
  ppppppppuVar11 = ppppppppuVar10 + 8;
  ppppppppuVar13 = param_3;
  FUN_109477814();
  if (ppppppppuVar11 == (undefined ********)0x0) {
    pppppppuStack_2b0 = *param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      pppppppuStack_2b0 = (undefined *******)param_3;
    }
    FUN_1093780e0(&pppppppuStack_270,&UNK_10f56e32e,&pppppppuStack_2b0);
    ppppppppuVar13 = (undefined ********)&UNK_10f56e137;
    ppppppppuVar18 = (undefined ********)0x1;
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f56e2c9,0xd3,&pppppppuStack_270);
    if ((long)ppppppuStack_260 < 0) {
      ppppppppuVar18 = (undefined ********)pppppppuStack_270;
      __ZdlPv();
    }
  }
  else {
    pppppppuStack_270 = (undefined *******)((ulong)pppppppuStack_270 & 0xffffffffffffff00);
    cStack_1c0 = '\0';
    pppppuVar4 = *ppppppuVar17;
    if (pppppuVar4 == ppppppuVar17[1]) {
      ppppppppuVar18 = (undefined ********)ppppppppuVar11[5];
      if (ppppppppuVar18[0x14] != (undefined *******)0x0) goto LAB_109475270;
      if (*ppppppppuVar18 != (undefined *******)0x0) {
        *(undefined4 *)(ppppppppuVar18 + 0x2a) = 3;
        pppppppuStack_2b0 = (undefined *******)0x0;
        pppppppuStack_2a8 = (undefined *******)0x0;
        ppppppppuVar13 = &pppppppuStack_2b0;
        goto FUN_10947577c;
      }
    }
    else {
      ppppppppuVar12 = (undefined ********)*pppppuVar4;
      pppppppuStack_268 = (undefined *******)pppppuVar4[1];
      pppppppuStack_270 = (undefined *******)ppppppppuVar12;
      if ((undefined ********)pppppppuStack_268 != (undefined ********)0x0) {
        ppppppppuVar18 = (undefined ********)(pppppppuStack_268 + 1);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar18,0x10);
          if (bVar9) {
            *ppppppppuVar18 = (undefined *******)((long)*ppppppppuVar18 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppppppuStack_260 = (undefined ******)((ulong)ppppppuStack_260 & 0xffffffffffffff00);
      cStack_1d0 = 0;
      bVar9 = *(char *)(pppppuVar4 + 0x14) == '\x01';
      if (bVar9) {
        ppppppuStack_258 = (undefined ******)pppppuVar4[3];
        ppppppuStack_260 = (undefined ******)pppppuVar4[2];
        ppppppuStack_248 = (undefined ******)pppppuVar4[5];
        ppppppuStack_250 = (undefined ******)pppppuVar4[4];
        ppppppuStack_238 = (undefined ******)pppppuVar4[7];
        ppppppuStack_240 = (undefined ******)pppppuVar4[6];
        ppppppuStack_218 = (undefined ******)pppppuVar4[0xb];
        ppppppuStack_220 = (undefined ******)pppppuVar4[10];
        ppppppuStack_230 = (undefined ******)pppppuVar4[8];
        ppppppuStack_1e0 = (undefined ******)pppppuVar4[0x12];
        ppppppuStack_1f8 = (undefined ******)pppppuVar4[0xf];
        ppppppuStack_200 = (undefined ******)pppppuVar4[0xe];
        ppppppuStack_1e8 = (undefined ******)pppppuVar4[0x11];
        ppppppuStack_1f0 = (undefined ******)pppppuVar4[0x10];
        ppppppuStack_208 = (undefined ******)pppppuVar4[0xd];
        ppppppuStack_210 = (undefined ******)pppppuVar4[0xc];
        cStack_1d0 = 1;
      }
      cStack_1c0 = '\x01';
      ppppppppuVar18 = (undefined ********)ppppppppuVar11[5];
      cStack_1d0 = bVar9;
      if (ppppppppuVar18[0x14] != (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar18[0x14])[4])(&pppppppuStack_2b0);
        (*(code *)(*ppppppppuVar12)[4])(&pppppppuStack_2e8);
        ppppppuVar17 = ppppppuStack_2d8;
        uVar19 = (uint)(char)uStack_2a0._7_1_;
        ppppppppuVar11 = (undefined ********)pppppppuStack_2a8;
        if (-1 < (int)uVar19) {
          ppppppppuVar11 = (undefined ********)(ulong)uStack_2a0._7_1_;
        }
        ppppppppuVar3 = (undefined ********)pppppppuStack_2e0;
        if (-1 < (long)ppppppuStack_2d8) {
          ppppppppuVar3 = (undefined ********)((ulong)ppppppuStack_2d8 >> 0x38);
        }
        if (ppppppppuVar11 == ppppppppuVar3) {
          ppppppppuVar12 = (undefined ********)pppppppuStack_2b0;
          if (-1 < (int)uVar19) {
            ppppppppuVar12 = &pppppppuStack_2b0;
          }
          ppppppppuVar13 = (undefined ********)pppppppuStack_2e8;
          if (-1 < (long)ppppppuStack_2d8) {
            ppppppppuVar13 = &pppppppuStack_2e8;
          }
          _memcmp();
          bVar9 = (int)ppppppppuVar12 == 0;
          ppppppppuVar11 = (undefined ********)pppppppuStack_2e8;
        }
        else {
          bVar9 = false;
          ppppppppuVar11 = (undefined ********)pppppppuStack_2e8;
        }
        pppppppuStack_2e8 = (undefined *******)ppppppppuVar11;
        if ((long)ppppppuVar17 < 0) {
          __ZdlPv();
          uVar19 = (uint)uStack_2a0._7_1_;
          ppppppppuVar12 = ppppppppuVar11;
        }
        ppppppppuVar11 = ppppppppuVar12;
        if ((uVar19 >> 7 & 1) != 0) {
          ppppppppuVar11 = (undefined ********)pppppppuStack_2b0;
          __ZdlPv();
        }
        if (bVar9) goto LAB_109475644;
      }
LAB_109475270:
      bVar6 = *(byte *)((long)ppppppppuVar10 + 0x97);
      pppppppuVar16 = ppppppppuVar10[0x11];
      if (-1 < (char)bVar6) {
        pppppppuVar16 = (undefined *******)(ulong)bVar6;
      }
      bVar7 = *(byte *)((long)param_3 + 0x17);
      pppppppuVar21 = param_3[1];
      if (-1 < (char)bVar7) {
        pppppppuVar21 = (undefined *******)(ulong)bVar7;
      }
      if (pppppppuVar16 == pppppppuVar21) {
        ppppppppuVar11 = (undefined ********)ppppppppuVar10[0x10];
        if (-1 < (char)bVar6) {
          ppppppppuVar11 = ppppppppuVar10 + 0x10;
        }
        ppppppppuVar13 = (undefined ********)*param_3;
        if (-1 < (char)bVar7) {
          ppppppppuVar13 = param_3;
        }
        _memcmp(ppppppppuVar11,ppppppppuVar13);
        if ((int)ppppppppuVar11 == 0) {
          *(undefined4 *)(ppppppppuVar10 + 7) = 2;
          func_0x000107c31940(&pppppppuStack_2b0,"");
          func_0x0001094757e0(ppppppppuVar10,&pppppppuStack_2b0);
          if ((long)uStack_2a0 < 0) {
            __ZdlPv(pppppppuStack_2b0);
          }
          pppppppuStack_2b0 = (undefined *******)0x0;
          pppppppuStack_2a8 = (undefined *******)0x0;
          ppppppppuVar18 = ppppppppuVar10 + 0x17;
          ppppppppuVar13 = &pppppppuStack_2b0;
          goto FUN_10947577c;
        }
      }
      if (*(int *)(ppppppppuVar10 + 7) == 0) {
        *(undefined4 *)(ppppppppuVar10 + 7) = 2;
      }
      if (cStack_1c0 == '\x01') {
        func_0x000109475840(ppppppppuVar18 + 0x14,pppppppuStack_270,pppppppuStack_268);
        cVar8 = *(char *)(ppppppppuVar18 + 0x28);
        if (cVar8 == cStack_1d0) {
          if (cVar8 != '\0') {
            ppppppppuVar18[0x17] = (undefined *******)ppppppuStack_258;
            ppppppppuVar18[0x16] = (undefined *******)ppppppuStack_260;
            ppppppppuVar18[0x19] = (undefined *******)ppppppuStack_248;
            ppppppppuVar18[0x18] = (undefined *******)ppppppuStack_250;
            ppppppppuVar18[0x1b] = (undefined *******)ppppppuStack_238;
            ppppppppuVar18[0x1a] = (undefined *******)ppppppuStack_240;
            ppppppppuVar18[0x1c] = (undefined *******)ppppppuStack_230;
            ppppppppuVar18[0x1f] = (undefined *******)ppppppuStack_218;
            ppppppppuVar18[0x1e] = (undefined *******)ppppppuStack_220;
            ppppppppuVar18[0x21] = (undefined *******)ppppppuStack_208;
            ppppppppuVar18[0x20] = (undefined *******)ppppppuStack_210;
            ppppppppuVar18[0x23] = (undefined *******)ppppppuStack_1f8;
            ppppppppuVar18[0x22] = (undefined *******)ppppppuStack_200;
            ppppppppuVar18[0x25] = (undefined *******)ppppppuStack_1e8;
            ppppppppuVar18[0x24] = (undefined *******)ppppppuStack_1f0;
            ppppppppuVar18[0x26] = (undefined *******)ppppppuStack_1e0;
          }
        }
        else {
          if (cVar8 == '\0') {
            ppppppppuVar18[0x1c] = (undefined *******)ppppppuStack_230;
            ppppppppuVar18[0x17] = (undefined *******)ppppppuStack_258;
            ppppppppuVar18[0x16] = (undefined *******)ppppppuStack_260;
            ppppppppuVar18[0x19] = (undefined *******)ppppppuStack_248;
            ppppppppuVar18[0x18] = (undefined *******)ppppppuStack_250;
            ppppppppuVar18[0x1b] = (undefined *******)ppppppuStack_238;
            ppppppppuVar18[0x1a] = (undefined *******)ppppppuStack_240;
            ppppppppuVar18[0x23] = (undefined *******)ppppppuStack_1f8;
            ppppppppuVar18[0x22] = (undefined *******)ppppppuStack_200;
            ppppppppuVar18[0x25] = (undefined *******)ppppppuStack_1e8;
            ppppppppuVar18[0x24] = (undefined *******)ppppppuStack_1f0;
            ppppppppuVar18[0x26] = (undefined *******)ppppppuStack_1e0;
            ppppppppuVar18[0x1f] = (undefined *******)ppppppuStack_218;
            ppppppppuVar18[0x1e] = (undefined *******)ppppppuStack_220;
            ppppppppuVar18[0x21] = (undefined *******)ppppppuStack_208;
            ppppppppuVar18[0x20] = (undefined *******)ppppppuStack_210;
            goto LAB_1094754b0;
          }
          *(undefined1 *)(ppppppppuVar18 + 0x28) = 0;
        }
      }
      else {
        pppppppuVar16 = ppppppppuVar18[0x15];
        ppppppppuVar18[0x14] = (undefined *******)0x0;
        ppppppppuVar18[0x15] = (undefined *******)0x0;
        if (pppppppuVar16 != (undefined *******)0x0) {
          pppppppuVar21 = pppppppuVar16 + 1;
          do {
            ppppppuVar17 = *pppppppuVar21;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
            if (bVar9) {
              *pppppppuVar21 = (undefined ******)((long)ppppppuVar17 + -1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (ppppppuVar17 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar16)[2])(pppppppuVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar16);
          }
        }
        ppppppppuVar18[0x16] = (undefined *******)0x0;
        ppppppppuVar18[0x17] = (undefined *******)0x0;
        ppppppppuVar18[0x18] = (undefined *******)0x0;
        ppppppppuVar18[0x19] = (undefined *******)0x3ff0000000000000;
        ppppppppuVar18[0x1b] = (undefined *******)0x0;
        ppppppppuVar18[0x1c] = (undefined *******)0x0;
        ppppppppuVar18[0x1a] = (undefined *******)0x0;
        ppppppppuVar18[0x1e] = (undefined *******)0x3ff0000000000000;
        ppppppppuVar18[0x1f] = (undefined *******)0x0;
        ppppppppuVar18[0x20] = (undefined *******)0x0;
        ppppppppuVar18[0x21] = (undefined *******)0x0;
        ppppppppuVar18[0x22] = (undefined *******)0x3ff0000000000000;
        ppppppppuVar18[0x23] = (undefined *******)0x0;
        ppppppppuVar18[0x24] = (undefined *******)0x0;
        ppppppppuVar18[0x25] = (undefined *******)0x0;
        ppppppppuVar18[0x26] = (undefined *******)0x3ff0000000000000;
        if (((ulong)ppppppppuVar18[0x28] & 1) == 0) {
LAB_1094754b0:
          *(undefined1 *)(ppppppppuVar18 + 0x28) = 1;
        }
      }
      if (cStack_1c0 != '\x01') {
        pppppppuStack_2b0 = (undefined *******)0x0;
        pppppppuStack_2a8 = (undefined *******)0x0;
        ppppppppuVar13 = &pppppppuStack_2b0;
        goto FUN_10947577c;
      }
      *(undefined4 *)(ppppppppuVar18 + 0x2a) = 0;
      pppppppuStack_2e8 = (undefined *******)ppppppppuVar10;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&pppppppuStack_2e0,*param_3,param_3[1]);
      }
      else {
        ppppppuStack_2d8 = (undefined ******)param_3[1];
        pppppppuStack_2e0 = *param_3;
        ppppppuStack_2d0 = (undefined ******)param_3[2];
      }
      pppppppuStack_2c0 = pppppppuStack_268;
      pppppppuStack_2c8 = pppppppuStack_270;
      if ((undefined ********)pppppppuStack_268 != (undefined ********)0x0) {
        ppppppppuVar11 = (undefined ********)(pppppppuStack_268 + 1);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
          if (bVar9) {
            *ppppppppuVar11 = (undefined *******)((long)*ppppppppuVar11 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      pppppppuStack_2b0 = (undefined *******)FUN_10947af40;
      pppppppuStack_2a8 = (undefined *******)&PTR_FUN_110af6810;
      param_3 = (undefined ********)0x38;
      uStack_2b8 = param_1;
      __Znwm();
      *param_3 = pppppppuStack_2e8;
      if ((long)ppppppuStack_2d0 < 0) {
        func_0x000107c3192c(param_3 + 1,pppppppuStack_2e0,ppppppuStack_2d8);
        param_1 = uStack_2b8;
      }
      else {
        param_3[2] = (undefined *******)ppppppuStack_2d8;
        param_3[1] = pppppppuStack_2e0;
        param_3[3] = (undefined *******)ppppppuStack_2d0;
      }
      param_3[5] = pppppppuStack_2c0;
      param_3[4] = pppppppuStack_2c8;
      pppppppuStack_2c8 = (undefined *******)0x0;
      pppppppuStack_2c0 = (undefined *******)0x0;
      *(undefined4 *)(param_3 + 6) = param_1;
      ppppppppuVar13 = &pppppppuStack_2b0;
      uStack_2a0 = param_3;
      FUN_1094758b4(ppppppppuVar10 + 0x9c);
      ppppppppuVar11 = &pppppppuStack_2a8;
      (*(code *)*pppppppuStack_2a8)();
      ppppppppuVar10 = (undefined ********)pppppppuStack_2c0;
      if ((undefined ********)pppppppuStack_2c0 != (undefined ********)0x0) {
        ppppppppuVar18 = (undefined ********)(pppppppuStack_2c0 + 1);
        do {
          pppppppuVar16 = *ppppppppuVar18;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar18,0x10);
          if (bVar9) {
            *ppppppppuVar18 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*pppppppuStack_2c0)[2])(pppppppuStack_2c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar11 = ppppppppuVar10;
        }
      }
      if ((long)ppppppuStack_2d0 < 0) {
        ppppppppuVar11 = (undefined ********)pppppppuStack_2e0;
        __ZdlPv();
      }
    }
LAB_109475644:
    ppppppppuVar10 = (undefined ********)pppppppuStack_268;
    ppppppppuVar18 = ppppppppuVar11;
    if ((cStack_1c0 == '\x01') && ((undefined ********)pppppppuStack_268 != (undefined ********)0x0)
       ) {
      ppppppppuVar11 = (undefined ********)(pppppppuStack_268 + 1);
      do {
        pppppppuVar16 = *ppppppppuVar11;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
        if (bVar9) {
          *ppppppppuVar11 = (undefined *******)((long)pppppppuVar16 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (pppppppuVar16 == (undefined *******)0x0) {
        (*(code *)(*pppppppuStack_268)[2])(pppppppuStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar18 = ppppppppuVar10;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return ppppppppuVar18;
  }
  ___stack_chk_fail();
  __ZdlPv(param_3);
  FUN_109475980(&pppppppuStack_2e8);
  func_0x0001094776c4(&pppppppuStack_270);
  __Unwind_Resume();
FUN_10947577c:
  pppppppuVar22 = ppppppppuVar13[1];
  pppppppuVar21 = *ppppppppuVar13;
  *ppppppppuVar13 = (undefined *******)0x0;
  ppppppppuVar13[1] = (undefined *******)0x0;
  pppppppuVar16 = ppppppppuVar18[1];
  ppppppppuVar18[1] = pppppppuVar22;
  *ppppppppuVar18 = pppppppuVar21;
  if (pppppppuVar16 != (undefined *******)0x0) {
    pppppppuVar21 = pppppppuVar16 + 1;
    do {
      ppppppuVar17 = *pppppppuVar21;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
      if (bVar9) {
        *pppppppuVar21 = (undefined ******)((long)ppppppuVar17 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppppuVar17 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar16)[2])(pppppppuVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar16);
    }
  }
  return ppppppppuVar18;
}



/* Entry: 109474f78; end: 10947577b;  */

/* WARNING: Possible PIC construction at 0x000109475304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001094754f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109475204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094754fc) */
/* WARNING: Removing unreachable block (ram,0x000109475504) */
/* WARNING: Removing unreachable block (ram,0x000109475508) */
/* WARNING: Removing unreachable block (ram,0x000109475510) */
/* WARNING: Removing unreachable block (ram,0x000109475518) */
/* WARNING: Removing unreachable block (ram,0x00010947551c) */
/* WARNING: Removing unreachable block (ram,0x000109475534) */
/* WARNING: Removing unreachable block (ram,0x000109475308) */
/* WARNING: Removing unreachable block (ram,0x000109475310) */
/* WARNING: Removing unreachable block (ram,0x000109475314) */
/* WARNING: Removing unreachable block (ram,0x00010947531c) */
/* WARNING: Removing unreachable block (ram,0x000109475324) */
/* WARNING: Removing unreachable block (ram,0x000109475328) */
/* WARNING: Removing unreachable block (ram,0x000109475340) */
/* WARNING: Removing unreachable block (ram,0x000109475208) */
/* WARNING: Removing unreachable block (ram,0x000109475210) */
/* WARNING: Removing unreachable block (ram,0x000109475214) */
/* WARNING: Removing unreachable block (ram,0x00010947521c) */
/* WARNING: Removing unreachable block (ram,0x000109475224) */
/* WARNING: Removing unreachable block (ram,0x000109475228) */

undefined ********
FUN_109474f78(undefined4 param_1,undefined ********param_2,undefined ********param_3,long *param_4)

{
  undefined ********ppppppppuVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  ulong uVar10;
  undefined *******pppppppuVar11;
  undefined ******ppppppuVar12;
  undefined ********ppppppppuVar13;
  uint uVar14;
  undefined *******pppppppuVar15;
  undefined *******pppppppuVar16;
  undefined *******pppppppuStack_1b8;
  undefined *******pppppppuStack_1b0;
  undefined ******ppppppuStack_1a8;
  undefined ******ppppppuStack_1a0;
  undefined *******pppppppuStack_198;
  undefined *******pppppppuStack_190;
  undefined4 uStack_188;
  undefined *******pppppppuStack_180;
  undefined *******pppppppuStack_178;
  undefined8 uStack_170;
  undefined *******pppppppuStack_140;
  undefined *******pppppppuStack_138;
  undefined ******ppppppuStack_130;
  undefined ******ppppppuStack_128;
  undefined ******ppppppuStack_120;
  undefined ******ppppppuStack_118;
  undefined ******ppppppuStack_110;
  undefined ******ppppppuStack_108;
  undefined ******ppppppuStack_100;
  undefined ******ppppppuStack_f0;
  undefined ******ppppppuStack_e8;
  undefined ******ppppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined ******ppppppuStack_d0;
  undefined ******ppppppuStack_c8;
  undefined ******ppppppuStack_c0;
  undefined ******ppppppuStack_b8;
  undefined ******ppppppuStack_b0;
  char cStack_a0;
  char cStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (param_4[1] - *param_4 >> 4) * 0x2e8ba2e8ba2e8ba3;
  if (1 < uVar10) {
    pppppppuStack_180 = *param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      pppppppuStack_180 = (undefined *******)param_3;
    }
    pppppppuStack_1b8 = (undefined *******)CONCAT44(pppppppuStack_1b8._4_4_,(int)uVar10);
    FUN_1093890ec(&pppppppuStack_140,&UNK_10f56e2e5,&pppppppuStack_180,&pppppppuStack_1b8);
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f56e2c9,0xce,&pppppppuStack_140);
    if ((long)ppppppuStack_130 < 0) {
      __ZdlPv(pppppppuStack_140);
    }
  }
  ppppppppuVar7 = param_2 + 8;
  ppppppppuVar9 = param_3;
  FUN_109477814();
  if (ppppppppuVar7 == (undefined ********)0x0) {
    pppppppuStack_180 = *param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      pppppppuStack_180 = (undefined *******)param_3;
    }
    FUN_1093780e0(&pppppppuStack_140,&UNK_10f56e32e,&pppppppuStack_180);
    ppppppppuVar9 = (undefined ********)&UNK_10f56e137;
    ppppppppuVar13 = (undefined ********)0x1;
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f56e2c9,0xd3,&pppppppuStack_140);
    if ((long)ppppppuStack_130 < 0) {
      ppppppppuVar13 = (undefined ********)pppppppuStack_140;
      __ZdlPv();
    }
  }
  else {
    pppppppuStack_140 = (undefined *******)((ulong)pppppppuStack_140 & 0xffffffffffffff00);
    cStack_90 = '\0';
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 == (undefined8 *)param_4[1]) {
      ppppppppuVar13 = (undefined ********)ppppppppuVar7[5];
      if (ppppppppuVar13[0x14] != (undefined *******)0x0) goto LAB_109475270;
      if (*ppppppppuVar13 != (undefined *******)0x0) {
        *(undefined4 *)(ppppppppuVar13 + 0x2a) = 3;
        pppppppuStack_180 = (undefined *******)0x0;
        pppppppuStack_178 = (undefined *******)0x0;
        ppppppppuVar9 = &pppppppuStack_180;
        goto FUN_10947577c;
      }
    }
    else {
      ppppppppuVar8 = (undefined ********)*puVar2;
      pppppppuStack_138 = (undefined *******)puVar2[1];
      pppppppuStack_140 = (undefined *******)ppppppppuVar8;
      if ((undefined ********)pppppppuStack_138 != (undefined ********)0x0) {
        ppppppppuVar13 = (undefined ********)(pppppppuStack_138 + 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar13,0x10);
          if (bVar6) {
            *ppppppppuVar13 = (undefined *******)((long)*ppppppppuVar13 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuStack_130 = (undefined ******)((ulong)ppppppuStack_130 & 0xffffffffffffff00);
      cStack_a0 = 0;
      bVar6 = *(char *)(puVar2 + 0x14) == '\x01';
      if (bVar6) {
        ppppppuStack_128 = (undefined ******)puVar2[3];
        ppppppuStack_130 = (undefined ******)puVar2[2];
        ppppppuStack_118 = (undefined ******)puVar2[5];
        ppppppuStack_120 = (undefined ******)puVar2[4];
        ppppppuStack_108 = (undefined ******)puVar2[7];
        ppppppuStack_110 = (undefined ******)puVar2[6];
        ppppppuStack_e8 = (undefined ******)puVar2[0xb];
        ppppppuStack_f0 = (undefined ******)puVar2[10];
        ppppppuStack_100 = (undefined ******)puVar2[8];
        ppppppuStack_b0 = (undefined ******)puVar2[0x12];
        ppppppuStack_c8 = (undefined ******)puVar2[0xf];
        ppppppuStack_d0 = (undefined ******)puVar2[0xe];
        ppppppuStack_b8 = (undefined ******)puVar2[0x11];
        ppppppuStack_c0 = (undefined ******)puVar2[0x10];
        ppppppuStack_d8 = (undefined ******)puVar2[0xd];
        ppppppuStack_e0 = (undefined ******)puVar2[0xc];
        cStack_a0 = 1;
      }
      cStack_90 = '\x01';
      ppppppppuVar13 = (undefined ********)ppppppppuVar7[5];
      cStack_a0 = bVar6;
      if (ppppppppuVar13[0x14] != (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar13[0x14])[4])(&pppppppuStack_180);
        (*(code *)(*ppppppppuVar8)[4])(&pppppppuStack_1b8);
        ppppppuVar12 = ppppppuStack_1a8;
        uVar14 = (uint)(char)uStack_170._7_1_;
        ppppppppuVar7 = (undefined ********)pppppppuStack_178;
        if (-1 < (int)uVar14) {
          ppppppppuVar7 = (undefined ********)(ulong)uStack_170._7_1_;
        }
        ppppppppuVar1 = (undefined ********)pppppppuStack_1b0;
        if (-1 < (long)ppppppuStack_1a8) {
          ppppppppuVar1 = (undefined ********)((ulong)ppppppuStack_1a8 >> 0x38);
        }
        if (ppppppppuVar7 == ppppppppuVar1) {
          ppppppppuVar8 = (undefined ********)pppppppuStack_180;
          if (-1 < (int)uVar14) {
            ppppppppuVar8 = &pppppppuStack_180;
          }
          ppppppppuVar9 = (undefined ********)pppppppuStack_1b8;
          if (-1 < (long)ppppppuStack_1a8) {
            ppppppppuVar9 = &pppppppuStack_1b8;
          }
          _memcmp();
          bVar6 = (int)ppppppppuVar8 == 0;
          ppppppppuVar7 = (undefined ********)pppppppuStack_1b8;
        }
        else {
          bVar6 = false;
          ppppppppuVar7 = (undefined ********)pppppppuStack_1b8;
        }
        pppppppuStack_1b8 = (undefined *******)ppppppppuVar7;
        if ((long)ppppppuVar12 < 0) {
          __ZdlPv();
          uVar14 = (uint)uStack_170._7_1_;
          ppppppppuVar8 = ppppppppuVar7;
        }
        ppppppppuVar7 = ppppppppuVar8;
        if ((uVar14 >> 7 & 1) != 0) {
          ppppppppuVar7 = (undefined ********)pppppppuStack_180;
          __ZdlPv();
        }
        if (bVar6) goto LAB_109475644;
      }
LAB_109475270:
      bVar3 = *(byte *)((long)param_2 + 0x97);
      pppppppuVar11 = param_2[0x11];
      if (-1 < (char)bVar3) {
        pppppppuVar11 = (undefined *******)(ulong)bVar3;
      }
      bVar4 = *(byte *)((long)param_3 + 0x17);
      pppppppuVar15 = param_3[1];
      if (-1 < (char)bVar4) {
        pppppppuVar15 = (undefined *******)(ulong)bVar4;
      }
      if (pppppppuVar11 == pppppppuVar15) {
        ppppppppuVar7 = (undefined ********)param_2[0x10];
        if (-1 < (char)bVar3) {
          ppppppppuVar7 = param_2 + 0x10;
        }
        ppppppppuVar9 = (undefined ********)*param_3;
        if (-1 < (char)bVar4) {
          ppppppppuVar9 = param_3;
        }
        _memcmp(ppppppppuVar7,ppppppppuVar9);
        if ((int)ppppppppuVar7 == 0) {
          *(undefined4 *)(param_2 + 7) = 2;
          func_0x000107c31940(&pppppppuStack_180,"");
          func_0x0001094757e0(param_2,&pppppppuStack_180);
          if ((long)uStack_170 < 0) {
            __ZdlPv(pppppppuStack_180);
          }
          pppppppuStack_180 = (undefined *******)0x0;
          pppppppuStack_178 = (undefined *******)0x0;
          ppppppppuVar13 = param_2 + 0x17;
          ppppppppuVar9 = &pppppppuStack_180;
          goto FUN_10947577c;
        }
      }
      if (*(int *)(param_2 + 7) == 0) {
        *(undefined4 *)(param_2 + 7) = 2;
      }
      if (cStack_90 == '\x01') {
        func_0x000109475840(ppppppppuVar13 + 0x14,pppppppuStack_140,pppppppuStack_138);
        cVar5 = *(char *)(ppppppppuVar13 + 0x28);
        if (cVar5 == cStack_a0) {
          if (cVar5 != '\0') {
            ppppppppuVar13[0x17] = (undefined *******)ppppppuStack_128;
            ppppppppuVar13[0x16] = (undefined *******)ppppppuStack_130;
            ppppppppuVar13[0x19] = (undefined *******)ppppppuStack_118;
            ppppppppuVar13[0x18] = (undefined *******)ppppppuStack_120;
            ppppppppuVar13[0x1b] = (undefined *******)ppppppuStack_108;
            ppppppppuVar13[0x1a] = (undefined *******)ppppppuStack_110;
            ppppppppuVar13[0x1c] = (undefined *******)ppppppuStack_100;
            ppppppppuVar13[0x1f] = (undefined *******)ppppppuStack_e8;
            ppppppppuVar13[0x1e] = (undefined *******)ppppppuStack_f0;
            ppppppppuVar13[0x21] = (undefined *******)ppppppuStack_d8;
            ppppppppuVar13[0x20] = (undefined *******)ppppppuStack_e0;
            ppppppppuVar13[0x23] = (undefined *******)ppppppuStack_c8;
            ppppppppuVar13[0x22] = (undefined *******)ppppppuStack_d0;
            ppppppppuVar13[0x25] = (undefined *******)ppppppuStack_b8;
            ppppppppuVar13[0x24] = (undefined *******)ppppppuStack_c0;
            ppppppppuVar13[0x26] = (undefined *******)ppppppuStack_b0;
          }
        }
        else {
          if (cVar5 == '\0') {
            ppppppppuVar13[0x1c] = (undefined *******)ppppppuStack_100;
            ppppppppuVar13[0x17] = (undefined *******)ppppppuStack_128;
            ppppppppuVar13[0x16] = (undefined *******)ppppppuStack_130;
            ppppppppuVar13[0x19] = (undefined *******)ppppppuStack_118;
            ppppppppuVar13[0x18] = (undefined *******)ppppppuStack_120;
            ppppppppuVar13[0x1b] = (undefined *******)ppppppuStack_108;
            ppppppppuVar13[0x1a] = (undefined *******)ppppppuStack_110;
            ppppppppuVar13[0x23] = (undefined *******)ppppppuStack_c8;
            ppppppppuVar13[0x22] = (undefined *******)ppppppuStack_d0;
            ppppppppuVar13[0x25] = (undefined *******)ppppppuStack_b8;
            ppppppppuVar13[0x24] = (undefined *******)ppppppuStack_c0;
            ppppppppuVar13[0x26] = (undefined *******)ppppppuStack_b0;
            ppppppppuVar13[0x1f] = (undefined *******)ppppppuStack_e8;
            ppppppppuVar13[0x1e] = (undefined *******)ppppppuStack_f0;
            ppppppppuVar13[0x21] = (undefined *******)ppppppuStack_d8;
            ppppppppuVar13[0x20] = (undefined *******)ppppppuStack_e0;
            goto LAB_1094754b0;
          }
          *(undefined1 *)(ppppppppuVar13 + 0x28) = 0;
        }
      }
      else {
        pppppppuVar11 = ppppppppuVar13[0x15];
        ppppppppuVar13[0x14] = (undefined *******)0x0;
        ppppppppuVar13[0x15] = (undefined *******)0x0;
        if (pppppppuVar11 != (undefined *******)0x0) {
          pppppppuVar15 = pppppppuVar11 + 1;
          do {
            ppppppuVar12 = *pppppppuVar15;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
            if (bVar6) {
              *pppppppuVar15 = (undefined ******)((long)ppppppuVar12 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar12 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar11);
          }
        }
        ppppppppuVar13[0x16] = (undefined *******)0x0;
        ppppppppuVar13[0x17] = (undefined *******)0x0;
        ppppppppuVar13[0x18] = (undefined *******)0x0;
        ppppppppuVar13[0x19] = (undefined *******)0x3ff0000000000000;
        ppppppppuVar13[0x1b] = (undefined *******)0x0;
        ppppppppuVar13[0x1c] = (undefined *******)0x0;
        ppppppppuVar13[0x1a] = (undefined *******)0x0;
        ppppppppuVar13[0x1e] = (undefined *******)0x3ff0000000000000;
        ppppppppuVar13[0x1f] = (undefined *******)0x0;
        ppppppppuVar13[0x20] = (undefined *******)0x0;
        ppppppppuVar13[0x21] = (undefined *******)0x0;
        ppppppppuVar13[0x22] = (undefined *******)0x3ff0000000000000;
        ppppppppuVar13[0x23] = (undefined *******)0x0;
        ppppppppuVar13[0x24] = (undefined *******)0x0;
        ppppppppuVar13[0x25] = (undefined *******)0x0;
        ppppppppuVar13[0x26] = (undefined *******)0x3ff0000000000000;
        if (((ulong)ppppppppuVar13[0x28] & 1) == 0) {
LAB_1094754b0:
          *(undefined1 *)(ppppppppuVar13 + 0x28) = 1;
        }
      }
      if (cStack_90 != '\x01') {
        pppppppuStack_180 = (undefined *******)0x0;
        pppppppuStack_178 = (undefined *******)0x0;
        ppppppppuVar9 = &pppppppuStack_180;
        goto FUN_10947577c;
      }
      *(undefined4 *)(ppppppppuVar13 + 0x2a) = 0;
      pppppppuStack_1b8 = (undefined *******)param_2;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&pppppppuStack_1b0,*param_3,param_3[1]);
      }
      else {
        ppppppuStack_1a8 = (undefined ******)param_3[1];
        pppppppuStack_1b0 = *param_3;
        ppppppuStack_1a0 = (undefined ******)param_3[2];
      }
      pppppppuStack_190 = pppppppuStack_138;
      pppppppuStack_198 = pppppppuStack_140;
      if ((undefined ********)pppppppuStack_138 != (undefined ********)0x0) {
        ppppppppuVar7 = (undefined ********)(pppppppuStack_138 + 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
          if (bVar6) {
            *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppppppuStack_180 = (undefined *******)FUN_10947af40;
      pppppppuStack_178 = (undefined *******)&PTR_FUN_110af6810;
      param_3 = (undefined ********)0x38;
      uStack_188 = param_1;
      __Znwm();
      *param_3 = pppppppuStack_1b8;
      if ((long)ppppppuStack_1a0 < 0) {
        func_0x000107c3192c(param_3 + 1,pppppppuStack_1b0,ppppppuStack_1a8);
        param_1 = uStack_188;
      }
      else {
        param_3[2] = (undefined *******)ppppppuStack_1a8;
        param_3[1] = pppppppuStack_1b0;
        param_3[3] = (undefined *******)ppppppuStack_1a0;
      }
      param_3[5] = pppppppuStack_190;
      param_3[4] = pppppppuStack_198;
      pppppppuStack_198 = (undefined *******)0x0;
      pppppppuStack_190 = (undefined *******)0x0;
      *(undefined4 *)(param_3 + 6) = param_1;
      ppppppppuVar9 = &pppppppuStack_180;
      uStack_170 = param_3;
      FUN_1094758b4(param_2 + 0x9c);
      ppppppppuVar7 = &pppppppuStack_178;
      (*(code *)*pppppppuStack_178)();
      ppppppppuVar13 = (undefined ********)pppppppuStack_190;
      if ((undefined ********)pppppppuStack_190 != (undefined ********)0x0) {
        ppppppppuVar8 = (undefined ********)(pppppppuStack_190 + 1);
        do {
          pppppppuVar11 = *ppppppppuVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
          if (bVar6) {
            *ppppppppuVar8 = (undefined *******)((long)pppppppuVar11 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar11 == (undefined *******)0x0) {
          (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar7 = ppppppppuVar13;
        }
      }
      if ((long)ppppppuStack_1a0 < 0) {
        ppppppppuVar7 = (undefined ********)pppppppuStack_1b0;
        __ZdlPv();
      }
    }
LAB_109475644:
    ppppppppuVar8 = (undefined ********)pppppppuStack_138;
    ppppppppuVar13 = ppppppppuVar7;
    if ((cStack_90 == '\x01') && ((undefined ********)pppppppuStack_138 != (undefined ********)0x0))
    {
      ppppppppuVar7 = (undefined ********)(pppppppuStack_138 + 1);
      do {
        pppppppuVar11 = *ppppppppuVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
        if (bVar6) {
          *ppppppppuVar7 = (undefined *******)((long)pppppppuVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppppuVar11 == (undefined *******)0x0) {
        (*(code *)(*pppppppuStack_138)[2])(pppppppuStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar13 = ppppppppuVar8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppppppppuVar13;
  }
  ___stack_chk_fail();
  __ZdlPv(param_3);
  FUN_109475980(&pppppppuStack_1b8);
  func_0x0001094776c4(&pppppppuStack_140);
  __Unwind_Resume();
FUN_10947577c:
  pppppppuVar16 = ppppppppuVar9[1];
  pppppppuVar15 = *ppppppppuVar9;
  *ppppppppuVar9 = (undefined *******)0x0;
  ppppppppuVar9[1] = (undefined *******)0x0;
  pppppppuVar11 = ppppppppuVar13[1];
  ppppppppuVar13[1] = pppppppuVar16;
  *ppppppppuVar13 = pppppppuVar15;
  if (pppppppuVar11 != (undefined *******)0x0) {
    pppppppuVar15 = pppppppuVar11 + 1;
    do {
      ppppppuVar12 = *pppppppuVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
      if (bVar6) {
        *pppppppuVar15 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppppuVar12 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar11);
    }
  }
  return ppppppppuVar13;
}



/* Entry: 10947577c; end: 1094758b3;  */

undefined8 * FUN_10947577c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1094758b4; end: 10947597f;  */

void FUN_1094758b4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [8];
  
  if (*param_1 != 0) {
    param_1 = param_1 + 1;
    lVar1 = *param_1;
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x58;
      __Znwm();
      puVar2[2] = 0x32aaaba7;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      *(undefined8 *)((long)puVar2 + 0x49) = 0;
      *(undefined8 *)((long)puVar2 + 0x41) = 0;
      puVar3 = &UNK_10f573308;
      _dispatch_queue_create(&UNK_10f573308,0);
      *puVar2 = puVar3;
      _dispatch_group_create();
      puVar2[1] = puVar3;
      FUN_109476864(param_1,puVar2);
      lVar1 = *param_1;
    }
    FUN_109476e98(auStack_38,lVar1,param_2);
    __ZNSt3__16futureIvED1Ev(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010947597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(0,param_2);
  return;
}



/* Entry: 109475980; end: 1094759b7;  */

long FUN_109475980(long param_1)

{
  func_0x0001094776c4(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1094759b8; end: 1094759ef;  */

undefined8 ** FUN_1094759b8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **appuStack_50 [2];
  char cStack_39;
  undefined8 *puStack_38;
  
  param_1 = param_1 + 0x40;
  FUN_10947bdc8();
  if (param_1 != 0) {
    return (undefined8 **)(ulong)(*(int *)(*(long *)(param_1 + 0x28) + 0x150) == 0);
  }
  puVar1 = &UNK_10f56e356;
  FUN_109262df8(&UNK_10f56e356);
  (**(code **)(*(long *)*param_2 + 0x20))(appuStack_50);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_109474e2c(0x3f800000,puVar1,appuStack_50,&uStack_68);
  ppuVar2 = &puStack_38;
  puStack_38 = &uStack_68;
  FUN_109477320(ppuVar2);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
    ppuVar2 = appuStack_50[0];
  }
  return ppuVar2;
}



/* Entry: 1094759f0; end: 109475a8b;  */

void FUN_1094759f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  undefined8 *puStack_28;
  
  (**(code **)(*(long *)*param_2 + 0x20))(auStack_40);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_109474e2c(0x3f800000,param_1,auStack_40,&uStack_58);
  puStack_28 = &uStack_58;
  FUN_109477320(&puStack_28);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return;
}



/* Entry: 109475a8c; end: 109475c0f;  */

void FUN_109475a8c(long param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double adStack_320 [68];
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  func_0x0001094757e0();
  if (*(char *)(param_1 + 0x97) < '\0') {
    if (*(long *)(param_1 + 0x88) != 0) goto LAB_109475adc;
  }
  else if (*(char *)(param_1 + 0x97) != '\0') {
LAB_109475adc:
    param_1 = param_1 + 0x40;
    puVar7 = param_2;
    FUN_109477814();
    if (param_1 == 0) goto LAB_109475be8;
    param_2 = *(undefined1 **)(param_1 + 0x28);
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 != 0) {
      if (param_4 != 0) {
        FUN_109475c10(auStack_d0,param_3);
        lVar8 = *(long *)(param_2 + 0x10);
      }
      plStack_d8 = *(long **)(param_2 + 0x18);
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_e0 = lVar8;
      FUN_1095bc110(auStack_d0,&lStack_e0,param_3);
      puVar7 = auStack_d0;
      func_0x00010947577c(param_2);
      if (plStack_c8 != (long *)0x0) {
        plVar1 = plStack_c8 + 1;
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
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
        }
      }
      plVar1 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar2 = plStack_d8 + 1;
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
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_109475be8:
  puVar5 = &UNK_10f56e356;
  FUN_109262df8();
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_e8 = FUN_109475c10;
  lVar8 = 0;
  puVar9 = (undefined8 *)(puVar7 + 0x50);
  do {
    uVar10 = puVar9[-2];
    *(undefined8 *)((long)adStack_320 + lVar8 + 0x108) = puVar9[-1];
    *(undefined8 *)((long)adStack_320 + lVar8 + 0x100) = uVar10;
    *(undefined8 *)((long)adStack_320 + lVar8 + 0x110) = *puVar9;
    lVar8 = lVar8 + 0x20;
    puVar9 = puVar9 + 3;
  } while (lVar8 != 0x60);
  lVar8 = 0;
  adStack_320[0x2d] = (double)*(undefined8 *)(puVar7 + 0x28);
  adStack_320[0x2c] = (double)*(undefined8 *)(puVar7 + 0x20);
  adStack_320[0x2e] = (double)*(undefined8 *)(puVar7 + 0x30);
  adStack_320[0x23] = 0.0;
  adStack_320[0x27] = 0.0;
  adStack_320[0x2b] = 0.0;
  adStack_320[0x2f] = 1.0;
  adStack_320[0x11] = 0.0;
  adStack_320[0x10] = -1.0;
  adStack_320[0x13] = 0.0;
  adStack_320[0x12] = 0.0;
  adStack_320[0x15] = 1.0;
  adStack_320[0x14] = 0.0;
  adStack_320[0x17] = 0.0;
  adStack_320[0x16] = 0.0;
  adStack_320[0x19] = 0.0;
  adStack_320[0x18] = 0.0;
  adStack_320[0x1b] = 0.0;
  adStack_320[0x1a] = 1.0;
  adStack_320[0x1d] = 0.0;
  adStack_320[0x1c] = 0.0;
  adStack_320[0x1f] = 1.0;
  adStack_320[0x1e] = 0.0;
  do {
    dVar11 = *(double *)((long)adStack_320 + lVar8 + 0x100);
    dVar12 = *(double *)((long)adStack_320 + lVar8 + 0x108);
    dVar13 = *(double *)((long)adStack_320 + lVar8 + 0x110);
    dVar14 = *(double *)((long)adStack_320 + lVar8 + 0x118);
    *(double *)((long)adStack_320 + lVar8 + 0x188) =
         dVar11 * 0.0 + dVar12 * 1.0 + dVar13 * 0.0 + dVar14 * 0.0;
    *(double *)((long)adStack_320 + lVar8 + 0x180) =
         dVar11 * -1.0 + dVar12 * 0.0 + dVar13 * 0.0 + dVar14 * 0.0;
    *(double *)((long)adStack_320 + lVar8 + 0x198) =
         dVar11 * 0.0 + dVar12 * 0.0 + dVar13 * 0.0 + dVar14 * 1.0;
    *(double *)((long)adStack_320 + lVar8 + 400) =
         dVar11 * 0.0 + dVar12 * 0.0 + dVar13 * 1.0 + dVar14 * 0.0;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x80);
  lVar8 = 0;
  do {
    dVar11 = *(double *)((long)adStack_320 + lVar8 + 0x80);
    dVar12 = *(double *)((long)adStack_320 + lVar8 + 0x88);
    dVar13 = *(double *)((long)adStack_320 + lVar8 + 0x90);
    dVar14 = *(double *)((long)adStack_320 + lVar8 + 0x98);
    *(double *)((long)adStack_320 + lVar8 + 8) =
         adStack_320[0x31] * dVar11 + adStack_320[0x35] * dVar12 + adStack_320[0x39] * dVar13 +
         adStack_320[0x3d] * dVar14;
    *(double *)((long)adStack_320 + lVar8) =
         adStack_320[0x30] * dVar11 + adStack_320[0x34] * dVar12 + adStack_320[0x38] * dVar13 +
         adStack_320[0x3c] * dVar14;
    *(double *)((long)adStack_320 + lVar8 + 0x18) =
         adStack_320[0x33] * dVar11 + adStack_320[0x37] * dVar12 + adStack_320[0x3b] * dVar13 +
         adStack_320[0x3f] * dVar14;
    *(double *)((long)adStack_320 + lVar8 + 0x10) =
         adStack_320[0x32] * dVar11 + adStack_320[0x36] * dVar12 + adStack_320[0x3a] * dVar13 +
         adStack_320[0x3e] * dVar14;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x80);
  puStack_100 = param_2;
  puStack_f8 = puVar5;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_10937fc48(puVar6,adStack_320);
  func_0x00010937fbc4(adStack_320 + 0x30);
  *(double *)(puVar6 + 0x68) = adStack_320[0x35];
  *(double *)(puVar6 + 0x60) = adStack_320[0x34];
  *(double *)(puVar6 + 0x78) = adStack_320[0x37];
  *(double *)(puVar6 + 0x70) = adStack_320[0x36];
  *(double *)(puVar6 + 0x80) = adStack_320[0x38];
  *(double *)(puVar6 + 0x48) = adStack_320[0x31];
  *(double *)(puVar6 + 0x40) = adStack_320[0x30];
  *(double *)(puVar6 + 0x58) = adStack_320[0x33];
  *(double *)(puVar6 + 0x50) = adStack_320[0x32];
  return;
}



/* Entry: 109475c10; end: 109475d83;  */

void FUN_109475c10(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double adStack_240 [68];
  
  lVar1 = 0;
  puVar2 = (undefined8 *)(param_2 + 0x50);
  do {
    uVar3 = puVar2[-2];
    *(undefined8 *)((long)adStack_240 + lVar1 + 0x108) = puVar2[-1];
    *(undefined8 *)((long)adStack_240 + lVar1 + 0x100) = uVar3;
    *(undefined8 *)((long)adStack_240 + lVar1 + 0x110) = *puVar2;
    lVar1 = lVar1 + 0x20;
    puVar2 = puVar2 + 3;
  } while (lVar1 != 0x60);
  lVar1 = 0;
  adStack_240[0x2d] = (double)*(undefined8 *)(param_2 + 0x28);
  adStack_240[0x2c] = (double)*(undefined8 *)(param_2 + 0x20);
  adStack_240[0x2e] = (double)*(undefined8 *)(param_2 + 0x30);
  adStack_240[0x23] = 0.0;
  adStack_240[0x27] = 0.0;
  adStack_240[0x2b] = 0.0;
  adStack_240[0x2f] = 1.0;
  adStack_240[0x11] = 0.0;
  adStack_240[0x10] = -1.0;
  adStack_240[0x13] = 0.0;
  adStack_240[0x12] = 0.0;
  adStack_240[0x15] = 1.0;
  adStack_240[0x14] = 0.0;
  adStack_240[0x17] = 0.0;
  adStack_240[0x16] = 0.0;
  adStack_240[0x19] = 0.0;
  adStack_240[0x18] = 0.0;
  adStack_240[0x1b] = 0.0;
  adStack_240[0x1a] = 1.0;
  adStack_240[0x1d] = 0.0;
  adStack_240[0x1c] = 0.0;
  adStack_240[0x1f] = 1.0;
  adStack_240[0x1e] = 0.0;
  do {
    dVar4 = *(double *)((long)adStack_240 + lVar1 + 0x100);
    dVar5 = *(double *)((long)adStack_240 + lVar1 + 0x108);
    dVar6 = *(double *)((long)adStack_240 + lVar1 + 0x110);
    dVar7 = *(double *)((long)adStack_240 + lVar1 + 0x118);
    *(double *)((long)adStack_240 + lVar1 + 0x188) =
         dVar4 * 0.0 + dVar5 * 1.0 + dVar6 * 0.0 + dVar7 * 0.0;
    *(double *)((long)adStack_240 + lVar1 + 0x180) =
         dVar4 * -1.0 + dVar5 * 0.0 + dVar6 * 0.0 + dVar7 * 0.0;
    *(double *)((long)adStack_240 + lVar1 + 0x198) =
         dVar4 * 0.0 + dVar5 * 0.0 + dVar6 * 0.0 + dVar7 * 1.0;
    *(double *)((long)adStack_240 + lVar1 + 400) =
         dVar4 * 0.0 + dVar5 * 0.0 + dVar6 * 1.0 + dVar7 * 0.0;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x80);
  lVar1 = 0;
  do {
    dVar4 = *(double *)((long)adStack_240 + lVar1 + 0x80);
    dVar5 = *(double *)((long)adStack_240 + lVar1 + 0x88);
    dVar6 = *(double *)((long)adStack_240 + lVar1 + 0x90);
    dVar7 = *(double *)((long)adStack_240 + lVar1 + 0x98);
    *(double *)((long)adStack_240 + lVar1 + 8) =
         adStack_240[0x31] * dVar4 + adStack_240[0x35] * dVar5 + adStack_240[0x39] * dVar6 +
         adStack_240[0x3d] * dVar7;
    *(double *)((long)adStack_240 + lVar1) =
         adStack_240[0x30] * dVar4 + adStack_240[0x34] * dVar5 + adStack_240[0x38] * dVar6 +
         adStack_240[0x3c] * dVar7;
    *(double *)((long)adStack_240 + lVar1 + 0x18) =
         adStack_240[0x33] * dVar4 + adStack_240[0x37] * dVar5 + adStack_240[0x3b] * dVar6 +
         adStack_240[0x3f] * dVar7;
    *(double *)((long)adStack_240 + lVar1 + 0x10) =
         adStack_240[0x32] * dVar4 + adStack_240[0x36] * dVar5 + adStack_240[0x3a] * dVar6 +
         adStack_240[0x3e] * dVar7;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x80);
  FUN_10937fc48(param_1,adStack_240);
  func_0x00010937fbc4(adStack_240 + 0x30);
  *(double *)(param_1 + 0x68) = adStack_240[0x35];
  *(double *)(param_1 + 0x60) = adStack_240[0x34];
  *(double *)(param_1 + 0x78) = adStack_240[0x37];
  *(double *)(param_1 + 0x70) = adStack_240[0x36];
  *(double *)(param_1 + 0x80) = adStack_240[0x38];
  *(double *)(param_1 + 0x48) = adStack_240[0x31];
  *(double *)(param_1 + 0x40) = adStack_240[0x30];
  *(double *)(param_1 + 0x58) = adStack_240[0x33];
  *(double *)(param_1 + 0x50) = adStack_240[0x32];
  return;
}


