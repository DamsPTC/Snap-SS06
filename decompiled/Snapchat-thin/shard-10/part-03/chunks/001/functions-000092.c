/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ea96cc; end: 107ea98f7; -[IGListWorkingRangeHandler didEndDisplayingItemAtIndexPath:forListAdapter:] */

void FUN_107ea96cc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar13 = param_3;
  func_0x00010c1554e0();
  uVar14 = param_3;
  func_0x00010c142240();
  uVar3 = param_3;
  func_0x00010bfde980();
  uVar6 = *(ulong *)(param_1 + 0x10);
  if ((uVar6 != 0) && (lVar5 = *(long *)(param_1 + 0x20), lVar5 != 0)) {
    uVar8 = uVar6 - 1;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = uVar8 & uVar3;
    }
    else {
      uVar9 = uVar3;
      if (uVar6 <= uVar3) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar3 / uVar6;
        }
        uVar9 = uVar3 - uVar9 * uVar6;
      }
    }
    lVar7 = *(long *)(param_1 + 8);
    plVar4 = *(long **)(lVar7 + uVar9 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_107ea98ac;
          uVar11 = plVar4[1];
          if (uVar11 != uVar3) break;
          if (plVar4[2] == uVar13 && plVar4[3] == uVar14) {
            lVar10 = *plVar4;
            if ((uVar6 & uVar8) == 0) {
              uVar3 = uVar3 & uVar8;
            }
            else if (uVar6 <= uVar3) {
              uVar13 = 0;
              if (uVar6 != 0) {
                uVar13 = uVar3 / uVar6;
              }
              uVar3 = uVar3 - uVar13 * uVar6;
            }
            plVar2 = *(long **)(lVar7 + uVar3 * 8);
            do {
              plVar12 = plVar2;
              plVar2 = (long *)*plVar12;
            } while ((long *)*plVar12 != plVar4);
            if (plVar12 == (long *)(param_1 + 0x18)) {
LAB_107ea9824:
              if (lVar10 == 0) {
LAB_107ea9858:
                *(undefined8 *)(lVar7 + uVar3 * 8) = 0;
                lVar10 = *plVar4;
                goto LAB_107ea9860;
              }
              uVar13 = *(ulong *)(lVar10 + 8);
              if ((uVar6 & uVar8) == 0) {
                uVar14 = uVar13 & uVar8;
              }
              else {
                uVar14 = uVar13;
                if (uVar6 <= uVar13) {
                  uVar14 = 0;
                  if (uVar6 != 0) {
                    uVar14 = uVar13 / uVar6;
                  }
                  uVar14 = uVar13 - uVar14 * uVar6;
                }
              }
              if (uVar14 != uVar3) goto LAB_107ea9858;
LAB_107ea9868:
              if ((uVar6 & uVar8) == 0) {
                uVar13 = uVar13 & uVar8;
              }
              else if (uVar6 <= uVar13) {
                uVar14 = 0;
                if (uVar6 != 0) {
                  uVar14 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar14 * uVar6;
              }
              if (uVar13 != uVar3) {
                *(long **)(lVar7 + uVar13 * 8) = plVar12;
                lVar10 = *plVar4;
              }
            }
            else {
              uVar13 = plVar12[1];
              if ((uVar6 & uVar8) == 0) {
                uVar13 = uVar13 & uVar8;
              }
              else if (uVar6 <= uVar13) {
                uVar14 = 0;
                if (uVar6 != 0) {
                  uVar14 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar14 * uVar6;
              }
              if (uVar13 != uVar3) goto LAB_107ea9824;
LAB_107ea9860:
              if (lVar10 != 0) {
                uVar13 = *(ulong *)(lVar10 + 8);
                goto LAB_107ea9868;
              }
            }
            *plVar12 = lVar10;
            *(long *)(param_1 + 0x20) = lVar5 + -1;
            __ZdlPv(plVar4);
            goto LAB_107ea98ac;
          }
        }
        if ((uVar6 & uVar8) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar6 <= uVar11) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar11 / uVar6;
          }
          uVar11 = uVar11 - uVar1 * uVar6;
        }
      } while (uVar11 == uVar9);
    }
  }
LAB_107ea98ac:
  func_0x00010bee50a0(param_1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ea98f8; end: 107ea9f6f; -[IGListWorkingRangeHandler _updateWorkingRangesWithListAdapter:] */

void FUN_107ea98f8(long param_1,undefined8 param_2,undefined8 *******param_3)

{
  bool bVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 uVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  long *plVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 ******ppppppuVar17;
  long *plVar18;
  undefined8 ******ppppppuStack_c8;
  long lStack_c0;
  undefined8 ******ppppppuStack_b8;
  long *plStack_b0;
  long lStack_a8;
  float fStack_a0;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  ppppppuStack_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  pppppppuVar10 = &ppppppuStack_88;
  plVar12 = (long *)(param_1 + 0x18);
  ppppppuStack_90 = pppppppuVar10;
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
    func_0x0001004d7630(&ppppppuStack_90,plVar12 + 2,plVar12 + 2);
  }
  if (uStack_80 == 0) {
    pppppppuVar13 = (undefined8 *******)0x0;
    ppppppuStack_c8 = (undefined8 *******)0x0;
    uVar6 = 1;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x58);
    pppppppuVar13 = (undefined8 *******)((long)ppppppuStack_90[4] - lVar14);
    if (pppppppuVar13 == (undefined8 *******)0x0 || (long)ppppppuStack_90[4] < lVar14) {
      pppppppuVar13 = (undefined8 *******)0x0;
    }
    pppppppuVar2 = pppppppuVar10;
    pppppppuVar3 = (undefined8 *******)ppppppuStack_88;
    if ((undefined8 *******)ppppppuStack_88 == (undefined8 *******)0x0) {
      do {
        pppppppuVar5 = (undefined8 *******)pppppppuVar2[2];
        bVar1 = pppppppuVar2 == (undefined8 *******)*pppppppuVar5;
        pppppppuVar2 = pppppppuVar5;
      } while (bVar1);
    }
    else {
      do {
        pppppppuVar5 = pppppppuVar3;
        pppppppuVar3 = (undefined8 *******)pppppppuVar5[1];
      } while ((undefined8 *******)pppppppuVar5[1] != (undefined8 *******)0x0);
    }
    ppppppuVar17 = pppppppuVar5[4];
    pppppppuVar2 = param_3;
    func_0x00010c0e0300();
    _objc_retainAutoreleasedReturnValue();
    pppppppuVar3 = pppppppuVar2;
    func_0x00010bf529e0();
    if ((long)ppppppuVar17 + lVar14 + 1 < (long)pppppppuVar3) {
      pppppppuVar3 = (undefined8 *******)ppppppuStack_88;
      if ((undefined8 *******)ppppppuStack_88 == (undefined8 *******)0x0) {
        do {
          pppppppuVar5 = (undefined8 *******)pppppppuVar10[2];
          bVar1 = pppppppuVar10 == (undefined8 *******)*pppppppuVar5;
          pppppppuVar10 = pppppppuVar5;
        } while (bVar1);
      }
      else {
        do {
          pppppppuVar5 = pppppppuVar3;
          pppppppuVar3 = (undefined8 *******)pppppppuVar5[1];
        } while ((undefined8 *******)pppppppuVar5[1] != (undefined8 *******)0x0);
      }
      ppppppuStack_c8 = (undefined8 ******)((long)pppppppuVar5[4] + *(long *)(param_1 + 0x58) + 1);
    }
    else {
      pppppppuVar3 = param_3;
      func_0x00010c0e0300();
      _objc_retainAutoreleasedReturnValue();
      ppppppuStack_c8 = pppppppuVar3;
      func_0x00010bf529e0();
      _objc_release(pppppppuVar3);
    }
    _objc_release(pppppppuVar2);
    uVar6 = uStack_80;
    if (uStack_80 < 2) {
      uVar6 = 1;
    }
  }
  ppppppuStack_b8 = (undefined8 *******)0x0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  fStack_a0 = 1.0;
  FUN_107ea9fec(&lStack_c0,uVar6);
  plVar12 = plStack_b0;
  if ((long)pppppppuVar13 < (long)ppppppuStack_c8) {
    do {
      pppppppuVar3 = param_3;
      func_0x00010c0dfd60(param_3);
      _objc_retainAutoreleasedReturnValue();
      pppppppuVar5 = param_3;
      func_0x00010c155800();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      pppppppuVar8 = pppppppuVar5;
      func_0x00010bfde980();
      pppppppuVar2 = (undefined8 *******)ppppppuStack_b8;
      if ((undefined8 *******)ppppppuStack_b8 != (undefined8 *******)0x0) {
        uVar6 = (long)ppppppuStack_b8 - 1;
        if (((ulong)ppppppuStack_b8 & uVar6) == 0) {
          pppppppuVar10 = (undefined8 *******)(uVar6 & (ulong)pppppppuVar8);
        }
        else {
          pppppppuVar10 = pppppppuVar8;
          if (ppppppuStack_b8 <= pppppppuVar8) {
            uVar7 = 0;
            if ((undefined8 *******)ppppppuStack_b8 != (undefined8 *******)0x0) {
              uVar7 = (ulong)pppppppuVar8 / (ulong)ppppppuStack_b8;
            }
            pppppppuVar10 = (undefined8 *******)((long)pppppppuVar8 - uVar7 * (long)ppppppuStack_b8)
            ;
          }
        }
        plVar12 = *(long **)(lStack_c0 + (long)pppppppuVar10 * 8);
        if (plVar12 != (long *)0x0) {
          do {
            while( true ) {
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) goto LAB_107ea9b50;
              pppppppuVar9 = (undefined8 *******)plVar12[1];
              if (pppppppuVar9 != pppppppuVar8) break;
              pppppppuVar9 = pppppppuVar5;
              if ((undefined8 *******)plVar12[2] == pppppppuVar5) goto LAB_107ea9c80;
            }
            if (((ulong)ppppppuStack_b8 & uVar6) == 0) {
              pppppppuVar9 = (undefined8 *******)((ulong)pppppppuVar9 & uVar6);
            }
            else if (ppppppuStack_b8 <= pppppppuVar9) {
              uVar7 = 0;
              if ((undefined8 *******)ppppppuStack_b8 != (undefined8 *******)0x0) {
                uVar7 = (ulong)pppppppuVar9 / (ulong)ppppppuStack_b8;
              }
              pppppppuVar9 = (undefined8 *******)
                             ((long)pppppppuVar9 - uVar7 * (long)ppppppuStack_b8);
            }
          } while (pppppppuVar9 == pppppppuVar10);
        }
      }
LAB_107ea9b50:
      plVar12 = (long *)0x18;
      __Znwm();
      uStack_68 = 1;
      *plVar12 = 0;
      plVar12[1] = (long)pppppppuVar8;
      plVar12[2] = (long)pppppppuVar5;
      pplStack_70 = &plStack_b0;
      if ((pppppppuVar2 == (undefined8 *******)0x0) ||
         (fStack_a0 * (float)pppppppuVar2 < (float)(lStack_a8 + 1))) {
        uVar6 = 1;
        if ((undefined8 *******)0x2 < pppppppuVar2) {
          uVar6 = (ulong)(((ulong)pppppppuVar2 & (long)pppppppuVar2 - 1U) != 0);
        }
        uVar6 = uVar6 | (long)pppppppuVar2 << 1;
        uVar7 = (ulong)((float)(lStack_a8 + 1) / fStack_a0);
        if (uVar6 <= uVar7) {
          uVar6 = uVar7;
        }
        plStack_78 = plVar12;
        FUN_107ea9fec(&lStack_c0,uVar6);
        pppppppuVar2 = (undefined8 *******)ppppppuStack_b8;
        if (((ulong)ppppppuStack_b8 & (long)ppppppuStack_b8 - 1U) == 0) {
          pppppppuVar10 = (undefined8 *******)((long)ppppppuStack_b8 - 1U & (ulong)pppppppuVar8);
        }
        else {
          pppppppuVar10 = pppppppuVar8;
          if (ppppppuStack_b8 <= pppppppuVar8) {
            uVar6 = 0;
            if ((undefined8 *******)ppppppuStack_b8 != (undefined8 *******)0x0) {
              uVar6 = (ulong)pppppppuVar8 / (ulong)ppppppuStack_b8;
            }
            pppppppuVar10 = (undefined8 *******)((long)pppppppuVar8 - uVar6 * (long)ppppppuStack_b8)
            ;
          }
        }
      }
      plVar18 = *(long **)(lStack_c0 + (long)pppppppuVar10 * 8);
      if (plVar18 == (long *)0x0) {
        *plVar12 = (long)plStack_b0;
        *(long ***)(lStack_c0 + (long)pppppppuVar10 * 8) = &plStack_b0;
        plStack_b0 = plVar12;
        if (*plVar12 != 0) {
          pppppppuVar8 = *(undefined8 ********)(*plVar12 + 8);
          if (((ulong)pppppppuVar2 & (long)pppppppuVar2 - 1U) == 0) {
            pppppppuVar8 = (undefined8 *******)((ulong)pppppppuVar8 & (long)pppppppuVar2 - 1U);
          }
          else if (pppppppuVar2 <= pppppppuVar8) {
            uVar6 = 0;
            if (pppppppuVar2 != (undefined8 *******)0x0) {
              uVar6 = (ulong)pppppppuVar8 / (ulong)pppppppuVar2;
            }
            pppppppuVar8 = (undefined8 *******)((long)pppppppuVar8 - uVar6 * (long)pppppppuVar2);
          }
          *(long **)(lStack_c0 + (long)pppppppuVar8 * 8) = plVar12;
        }
      }
      else {
        *plVar12 = *plVar18;
        *plVar18 = (long)plVar12;
      }
      plStack_78 = (long *)0x0;
      lStack_a8 = lStack_a8 + 1;
      func_0x000107eaa224(&plStack_78);
      pppppppuVar9 = (undefined8 *******)0x0;
LAB_107ea9c80:
      _objc_release(pppppppuVar9);
      _objc_release(pppppppuVar5);
      _objc_release(pppppppuVar3);
      pppppppuVar13 = (undefined8 *******)((long)pppppppuVar13 + 1);
      plVar12 = plStack_b0;
    } while (pppppppuVar13 != (undefined8 *******)ppppppuStack_c8);
  }
  for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    lVar14 = param_1 + 0x30;
    FUN_107eaa26c(lVar14,plVar12 + 2);
    if (lVar14 == 0) {
      lVar14 = plVar12[2];
      func_0x00010c2bd540(lVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099ca0();
      _objc_release(lVar14);
    }
  }
  plVar18 = plStack_b0;
  for (plVar12 = *(long **)(param_1 + 0x40); plStack_b0 = plVar18, plVar12 != (long *)0x0;
      plVar12 = (long *)*plVar12) {
    plVar18 = &lStack_c0;
    FUN_107eaa26c(plVar18,plVar12 + 2);
    if (plVar18 == (long *)0x0) {
      uVar4 = plVar12[2];
      func_0x00010c2bd540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099c60();
      _objc_release(uVar4);
    }
    plVar18 = plStack_b0;
  }
  plVar12 = (long *)(param_1 + 0x30);
  if (plVar12 != &lStack_c0) {
    *(float *)(param_1 + 0x50) = fStack_a0;
    if (*(long *)(param_1 + 0x38) != 0) {
      _bzero(*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x38) << 3);
      plVar15 = *(long **)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      if ((plVar15 != (long *)0x0) && (plVar16 = plVar15, plVar18 != (long *)0x0)) {
        do {
          lVar11 = plVar18[2];
          _objc_retain(lVar11);
          lVar14 = plVar16[2];
          plVar16[2] = lVar11;
          _objc_release(lVar14);
          plVar15 = (long *)*plVar16;
          FUN_107eaa344(plVar12,plVar16);
          plVar18 = (long *)*plVar18;
          plVar16 = plVar15;
        } while (plVar15 != (long *)0x0 && plVar18 != (long *)0x0);
      }
      func_0x000107eaa1e8(plVar15);
    }
    for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      lVar14 = plVar18[2];
      plVar15 = (long *)0x18;
      __Znwm();
      uStack_68 = 1;
      *plVar15 = 0;
      plVar15[1] = 0;
      plStack_78 = plVar15;
      pplStack_70 = (long **)(param_1 + 0x40);
      _objc_retain(lVar14);
      plVar15[2] = lVar14;
      func_0x00010bfde980();
      plVar15[1] = lVar14;
      FUN_107eaa344(plVar12,plVar15);
      plStack_78 = (long *)0x0;
      func_0x000107eaa224(&plStack_78);
    }
  }
  func_0x000107eaa1e8(plStack_b0);
  lVar14 = lStack_c0;
  lStack_c0 = 0;
  if (lVar14 != 0) {
    __ZdlPv();
  }
  func_0x0001078f0080(&ppppppuStack_90,ppppppuStack_88);
  _objc_release(param_3);
  return;
}



/* Entry: 107ea9f70; end: 107ea9f77; -[IGListWorkingRangeHandler workingRangeSize] */

undefined8 FUN_107ea9f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107ea9f78; end: 107ea9fcb; -[IGListWorkingRangeHandler .cxx_destruct] */

void FUN_107ea9f78(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_107eaa1b0(param_1 + 0x30);
  plVar1 = *(long **)(param_1 + 0x18);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107ea9fcc; end: 107ea9feb; -[IGListWorkingRangeHandler .cxx_construct] */

void FUN_107ea9fcc(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  return;
}



/* Entry: 107ea9fec; end: 107eaa1af;  */

long * FUN_107ea9fec(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar10 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar10;
    }
    plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar10) {
      plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
    }
    if (param_2 <= plVar10) {
      param_2 = plVar10;
    }
    if (plVar9 <= param_2) {
      return plVar10;
    }
    if (param_2 == (long *)0x0) {
      plVar10 = (long *)*param_1;
      *param_1 = 0;
      if (plVar10 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar10;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar10 = (long *)((long)param_2 << 3);
    __Znwm();
    lVar2 = *param_1;
    *param_1 = (long)plVar10;
    if (lVar2 != 0) {
      __ZdlPv();
      plVar10 = (long *)*param_1;
    }
    param_1[1] = (long)param_2;
    plVar3 = plVar10;
    _bzero(plVar10,(long *)((long)param_2 << 3));
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      plVar10[(long)plVar5] = (long)(param_1 + 2);
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          if (plVar10[(long)plVar8] == 0) {
            plVar10[(long)plVar8] = (long)plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = *(undefined8 *)plVar10[(long)plVar8];
            *(long **)plVar10[(long)plVar8] = plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000104bd35f4();
  func_0x000107eaa1e8(plVar10[2]);
  lVar2 = *plVar10;
  *plVar10 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar10;
}



/* Entry: 107eaa1b0; end: 107eaa26b;  */

long * FUN_107eaa1b0(long *param_1)

{
  long lVar1;
  
  func_0x000107eaa1e8(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107eaa26c; end: 107eaa343;  */

long * FUN_107eaa26c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if ((uVar7 != 0) && (param_1[3] != 0)) {
    uVar2 = *param_2;
    func_0x00010bfde980();
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar5 = uVar2 & uVar4;
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar5 = uVar2 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      do {
        uVar6 = plVar3[1];
        if (uVar6 == uVar2) {
          if (plVar3[2] == *param_2) {
            return plVar3;
          }
        }
        else {
          if ((uVar7 & uVar4) == 0) {
            uVar6 = uVar6 & uVar4;
          }
          else if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return (long *)0x0;
}



/* Entry: 107eaa344; end: 107eaa713;  */

undefined1 *
FUN_107eaa344(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  bool bVar18;
  ulong *puVar19;
  ulong *puVar20;
  undefined8 unaff_x23;
  undefined1 *puVar21;
  undefined8 unaff_x24;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  
  puVar5 = (undefined1 *)param_2[2];
  func_0x00010bfde980();
  param_2[1] = (ulong)puVar5;
  puVar21 = (undefined1 *)param_1[1];
  puVar7 = puVar5;
  if ((puVar21 == (undefined1 *)0x0) ||
     (*(float *)(param_1 + 4) * (float)puVar21 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if ((undefined1 *)0x2 < puVar21) {
      uVar6 = (ulong)(((ulong)puVar21 & (ulong)(puVar21 + -1)) != 0);
    }
    puVar11 = (undefined1 *)(uVar6 | (long)puVar21 << 1);
    puVar13 = (undefined1 *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (puVar11 <= puVar13) {
      puVar11 = puVar13;
    }
    if (puVar11 + -1 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x2;
    }
    else if (((ulong)puVar11 & (ulong)(puVar11 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
      puVar21 = (undefined1 *)param_1[1];
      puVar7 = puVar11;
    }
    if (puVar21 < puVar11) {
LAB_107eaa3f8:
      if ((ulong)puVar11 >> 0x3d != 0) {
        func_0x000104bd35f4();
        ppuVar8 = &puStack_b0;
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_6);
        _objc_retain(param_7);
        _objc_retain(param_8);
        _objc_retain(unaff_x24);
        _objc_retain(unaff_x23);
        puStack_a8 = PTR_PTR_1126fb8f0;
        puStack_b0 = puVar7;
        _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
        if (ppuVar8 != (undefined1 **)0x0) {
          _objc_retain(param_3);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 8);
          *(undefined8 *)((long)ppuVar8 + 8) = param_3;
          _objc_release(uVar9);
          _objc_retain(param_4);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x10);
          *(undefined8 *)((long)ppuVar8 + 0x10) = param_4;
          _objc_release(uVar9);
          _objc_retain(param_5);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x18);
          *(undefined8 *)((long)ppuVar8 + 0x18) = param_5;
          _objc_release(uVar9);
          _objc_retain(param_6);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x20);
          *(undefined8 *)((long)ppuVar8 + 0x20) = param_6;
          _objc_release(uVar9);
          _objc_retain(param_7);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x28);
          *(undefined8 *)((long)ppuVar8 + 0x28) = param_7;
          _objc_release(uVar9);
          _objc_retain(param_8);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x30);
          *(undefined8 *)((long)ppuVar8 + 0x30) = param_8;
          _objc_release(uVar9);
          _objc_retain(unaff_x24);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x38);
          *(undefined8 *)((long)ppuVar8 + 0x38) = unaff_x24;
          _objc_release(uVar9);
          _objc_retain(unaff_x23);
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x40);
          *(undefined8 *)((long)ppuVar8 + 0x40) = unaff_x23;
          _objc_release(uVar9);
          puVar10 = PTR_PTR_1126ae810;
          _objc_opt_new();
          uVar9 = *(undefined8 *)((long)ppuVar8 + 0x48);
          *(undefined **)((long)ppuVar8 + 0x48) = puVar10;
          _objc_release(uVar9);
        }
        _objc_release(unaff_x23);
        _objc_release(unaff_x24);
        _objc_release(param_8);
        _objc_release(param_7);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
        return (undefined1 *)ppuVar8;
      }
      puVar13 = (undefined1 *)((long)puVar11 << 3);
      __Znwm();
      uVar6 = *param_1;
      *param_1 = (ulong)puVar13;
      if (uVar6 != 0) {
        __ZdlPv();
        puVar13 = (undefined1 *)*param_1;
      }
      param_1[1] = (ulong)puVar11;
      puVar7 = puVar13;
      _bzero(puVar13,(undefined1 *)((long)puVar11 << 3));
      puVar12 = (ulong *)param_1[2];
      puVar21 = puVar11;
      if (puVar12 != (ulong *)0x0) {
        puVar15 = (undefined1 *)puVar12[1];
        puVar14 = puVar11 + -1;
        if (((ulong)puVar11 & (ulong)puVar14) == 0) {
          puVar15 = (undefined1 *)((ulong)puVar15 & (ulong)puVar14);
        }
        else if (puVar11 <= puVar15) {
          uVar6 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar6 = (ulong)puVar15 / (ulong)puVar11;
          }
          puVar15 = puVar15 + -(uVar6 * (long)puVar11);
        }
        *(ulong **)(puVar13 + (long)puVar15 * 8) = param_1 + 2;
        while (puVar16 = puVar12, puVar12 = (ulong *)*puVar16, puVar12 != (ulong *)0x0) {
          puVar17 = (undefined1 *)puVar12[1];
          if (((ulong)puVar11 & (ulong)puVar14) == 0) {
            puVar17 = (undefined1 *)((ulong)puVar17 & (ulong)puVar14);
          }
          else if (puVar11 <= puVar17) {
            uVar6 = 0;
            if (puVar11 != (undefined1 *)0x0) {
              uVar6 = (ulong)puVar17 / (ulong)puVar11;
            }
            puVar17 = puVar17 + -(uVar6 * (long)puVar11);
          }
          if (puVar17 != puVar15) {
            puVar20 = puVar12;
            if (*(long *)(puVar13 + (long)puVar17 * 8) == 0) {
              *(ulong **)(puVar13 + (long)puVar17 * 8) = puVar16;
              puVar15 = puVar17;
            }
            else {
              do {
                puVar19 = puVar20;
                puVar20 = (ulong *)*puVar19;
                if (puVar20 == (ulong *)0x0) break;
              } while (puVar12[2] == puVar20[2]);
              *puVar16 = (ulong)puVar20;
              *puVar19 = **(ulong **)(puVar13 + (long)puVar17 * 8);
              **(ulong **)(puVar13 + (long)puVar17 * 8) = (ulong)puVar12;
              puVar12 = puVar16;
            }
          }
        }
      }
    }
    else if (puVar11 < puVar21) {
      puVar7 = (undefined1 *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
      if ((puVar21 < (undefined1 *)0x3) || (((ulong)puVar21 & (ulong)(puVar21 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined1 *)0x1 < puVar7) {
        puVar7 = (undefined1 *)(1L << (-LZCOUNT(puVar7 + -1) & 0x3fU));
      }
      if (puVar11 <= puVar7) {
        puVar11 = puVar7;
      }
      if (puVar11 < puVar21) {
        if (puVar11 != (undefined1 *)0x0) goto LAB_107eaa3f8;
        puVar7 = (undefined1 *)*param_1;
        *param_1 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        puVar21 = (undefined1 *)0x0;
      }
      else {
        puVar21 = (undefined1 *)param_1[1];
      }
    }
  }
  puVar11 = puVar21 + -1;
  if (((ulong)puVar21 & (ulong)puVar11) == 0) {
    puVar13 = (undefined1 *)((ulong)puVar11 & (ulong)puVar5);
  }
  else {
    puVar13 = puVar5;
    if (puVar21 <= puVar5) {
      uVar6 = 0;
      if (puVar21 != (undefined1 *)0x0) {
        uVar6 = (ulong)puVar5 / (ulong)puVar21;
      }
      puVar13 = puVar5 + -(uVar6 * (long)puVar21);
    }
  }
  uVar6 = *param_1;
  puVar12 = *(ulong **)(uVar6 + (long)puVar13 * 8);
  if (puVar12 == (ulong *)0x0) {
    puVar16 = (ulong *)0x0;
  }
  else {
    bVar18 = false;
    bVar2 = 0;
    do {
      puVar16 = puVar12;
      puVar12 = (ulong *)*puVar16;
      if (puVar12 == (ulong *)0x0) break;
      puVar15 = (undefined1 *)puVar12[1];
      if (((ulong)puVar21 & (ulong)puVar11) == 0) {
        puVar14 = (undefined1 *)((ulong)puVar15 & (ulong)puVar11);
      }
      else {
        puVar14 = puVar15;
        if (puVar21 <= puVar15) {
          uVar1 = 0;
          if (puVar21 != (undefined1 *)0x0) {
            uVar1 = (ulong)puVar15 / (ulong)puVar21;
          }
          puVar14 = puVar15 + -(uVar1 * (long)puVar21);
        }
      }
      if (puVar14 != puVar13) break;
      if (puVar15 == puVar5) {
        bVar3 = puVar12[2] == param_2[2];
      }
      else {
        bVar3 = false;
      }
      bVar4 = bVar3 != bVar18;
      bVar3 = (bool)(bVar2 & bVar4);
      bVar18 = (bool)(bVar18 | bVar4);
      bVar2 = bVar2 | bVar4;
    } while (!bVar3);
  }
  puVar5 = (undefined1 *)param_2[1];
  if (((ulong)puVar21 & (ulong)puVar11) == 0) {
    puVar5 = (undefined1 *)((ulong)puVar11 & (ulong)puVar5);
    if (puVar16 == (ulong *)0x0) goto LAB_107eaa660;
LAB_107eaa624:
    *param_2 = *puVar16;
    *puVar16 = (ulong)param_2;
    if (*param_2 == 0) goto LAB_107eaa6b4;
    puVar13 = *(undefined1 **)(*param_2 + 8);
    if (((ulong)puVar21 & (ulong)puVar11) == 0) {
      puVar13 = (undefined1 *)((ulong)puVar13 & (ulong)puVar11);
    }
    else if (puVar21 <= puVar13) {
      uVar1 = 0;
      if (puVar21 != (undefined1 *)0x0) {
        uVar1 = (ulong)puVar13 / (ulong)puVar21;
      }
      puVar13 = puVar13 + -(uVar1 * (long)puVar21);
    }
    if (puVar13 == puVar5) goto LAB_107eaa6b4;
  }
  else {
    if (puVar21 <= puVar5) {
      uVar1 = 0;
      if (puVar21 != (undefined1 *)0x0) {
        uVar1 = (ulong)puVar5 / (ulong)puVar21;
      }
      puVar5 = puVar5 + -(uVar1 * (long)puVar21);
    }
    if (puVar16 != (ulong *)0x0) goto LAB_107eaa624;
LAB_107eaa660:
    puVar12 = param_1 + 2;
    *param_2 = *puVar12;
    *puVar12 = (ulong)param_2;
    *(ulong **)(uVar6 + (long)puVar5 * 8) = puVar12;
    if (*param_2 == 0) goto LAB_107eaa6b4;
    puVar13 = *(undefined1 **)(*param_2 + 8);
    if (((ulong)puVar21 & (ulong)puVar11) == 0) {
      puVar13 = (undefined1 *)((ulong)puVar13 & (ulong)puVar11);
    }
    else if (puVar21 <= puVar13) {
      uVar1 = 0;
      if (puVar21 != (undefined1 *)0x0) {
        uVar1 = (ulong)puVar13 / (ulong)puVar21;
      }
      puVar13 = puVar13 + -(uVar1 * (long)puVar21);
    }
  }
  *(ulong **)(uVar6 + (long)puVar13 * 8) = param_2;
LAB_107eaa6b4:
  param_1[3] = param_1[3] + 1;
  return puVar7;
}



/* Entry: 107eaa714; end: 107eaa8d7; -[SCCloudSyncBackgroundUploadScheduler initWithDependencyProvider:dataObjectContext:dataVault:networker:thumbnailFileGenerator:networkConnectivityMonitor:experimentService:timeProvider:] */

undefined1 *
FUN_107eaa714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fb8f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107eaa8d8; end: 107eaab17; -[SCCloudSyncBackgroundUploadScheduler scheduleBackgroundMediaUploadForOperation:] */

void FUN_107eaa8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107eaab18;
  puStack_98 = &UNK_11084f340;
  uStack_90 = uVar2;
  _objc_retain(param_3);
  uStack_88 = param_3;
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0e0ea0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar6;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107eaab78;
  puStack_c0 = &UNK_110a10a78;
  _objc_copyWeak(auStack_b8,auStack_80);
  puVar6 = puVar5;
  func_0x00010bfb2660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,auStack_80);
  puVar7 = puVar6;
  func_0x00010c0b8600(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107eaab18; end: 107eaab77;  */

void FUN_107eaab18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0a1600(uVar1);
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107eaab78; end: 107eaac4b;  */

void FUN_107eaab78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 5;
    FUN_107f59f90(5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    puVar4 = puVar1;
    func_0x00010bddd360(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107eaac4c; end: 107eaac93;  */

void FUN_107eaac4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58260();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107eaac94; end: 107eab2ab; -[SCCloudSyncBackgroundUploadScheduler _checkAndScheduleUploadForOperation:] */

undefined * FUN_107eaac94(undefined *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1600();
  _objc_release(uVar9);
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x30);
  uVar14 = param_3;
  FUN_107eac73c(param_3,uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38));
  if ((uVar14 & 1) == 0) {
    uVar14 = 3;
    FUN_107f59f90();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_3;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010bfed480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0320();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf6f620();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0320();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c0ce260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0320();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar5 = uVar6;
    func_0x00010c0b8600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126bc810;
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar11 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    puVar15 = puVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar10);
        }
        uVar3 = *(undefined8 *)((long)puVar19 * 8);
        uVar9 = uVar3;
        func_0x00010bf19ac0();
        if ((uint)uVar9 < 6 && (1 << (ulong)((uint)uVar9 & 0x1f) & 0x26U) != 0) {
          func_0x00010c241220(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecde0(uVar5);
          func_0x00010bef92c0(puVar11);
          _objc_release(uVar3);
        }
        puVar19 = puVar19 + 1;
      } while (puVar15 != puVar19);
      puVar15 = puVar10;
      func_0x00010bf52a60();
    }
    _objc_release(puVar10);
    func_0x00010c12d480(uVar6);
    func_0x00010c12d480(uVar7);
    func_0x00010c12d480(uVar8);
    uVar12 = uVar6;
    uVar4 = uVar7;
    FUN_107ee8930(uVar6,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_3;
    func_0x00010bf97260();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar16);
    puVar15 = PTR_PTR_1126af4c0;
    if (uVar13 == 0) {
      bVar2 = false;
      puVar15 = (undefined *)0x0;
    }
    else {
      uVar16 = param_3;
      func_0x00010bf97260(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar13);
      _objc_release(uVar16);
      puVar19 = puVar15;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      bVar2 = puVar19 == (undefined *)0x8;
    }
    uVar16 = uVar6;
    func_0x00010bf529e0();
    if ((uVar16 == 0) || (bVar2)) {
      uVar16 = 4;
      FUN_107f59f90(4);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar16 = uVar12;
      func_0x00010bf51e00(uVar12);
      puVar19 = *(undefined **)(param_1 + 8);
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      func_0x00010be9ae00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_1;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar14);
    uVar14 = param_3;
  }
  _objc_release(uVar14);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return puVar19;
  }
  ___stack_chk_fail();
  func_0x00010bf8b0c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined *)(ulong)(uVar4 == 0);
}



/* Entry: 107eab2ac; end: 107eab2e3;  */

bool FUN_107eab2ac(undefined8 param_1,long param_2)

{
  func_0x00010bf8b0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 107eab2e4; end: 107eab2eb;  */

void FUN_107eab2e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107eab2ec; end: 107eab323;  */

void FUN_107eab2ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c0a1600(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107eab324; end: 107eab3e7; -[SCCloudSyncBackgroundUploadScheduler _logSchedulingResult:] */

void FUN_107eab324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1600();
  _objc_release(uVar1);
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107eab3ec;
  puStack_40 = &UNK_110849810;
  lStack_38 = param_1;
  func_0x00010c0c0800(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a10b08,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107eab3e8; end: 107eab3eb;  */

void FUN_107eab3e8(void)

{
  return;
}



/* Entry: 107eab3ec; end: 107eab47b;  */

void FUN_107eab3ec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf3ec40();
  if (0 < lVar1) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c0b3760(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_2);
    func_0x00010c0a15e0(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eab47c; end: 107eab877; -[SCCloudSyncBackgroundUploadScheduler _scheduleCUPSBackgroundMediaUploadForAddSnapEntities:entry:] */

void FUN_107eab47c(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1600();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = param_4;
  func_0x00010bf529e0();
  if ((puVar2 == (undefined *)0x1) && (param_5 != 0)) {
    puVar11 = param_4;
    func_0x000107eac894(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e3e0();
    _objc_release(uVar3);
    puVar12 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c077640();
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0c7dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0b3760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0f98a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    FUN_107f00410(param_1,puVar2,uVar4,puVar11,uVar1,uVar7,*(undefined8 *)(param_2 + 0x40),uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_initWeak(auStack_80,param_2);
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107eab878;
    puStack_98 = &UNK_1108648d8;
    _objc_copyWeak(auStack_88,auStack_80);
    puVar9 = puVar8;
    puStack_90 = puVar11;
    func_0x00010bfb2660(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar12;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x107eab950;
    puStack_c8 = &UNK_1108648d8;
    _objc_copyWeak(auStack_b8,auStack_80);
    puVar10 = puVar9;
    puStack_c0 = puVar11;
    func_0x00010bfb2660(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_retain(param_4);
    _objc_retain(param_5);
    puVar12 = puVar10;
    func_0x00010bfb2660(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_e8);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar8);
  }
  else {
    puVar11 = (undefined *)0x6;
    FUN_107f59f90(6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107eab878; end: 107eabb57;  */

void FUN_107eab878(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 5;
    FUN_107f59f90(5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    puVar4 = puVar1;
    func_0x00010be1bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107eabb58; end: 107eabc9b; -[SCCloudSyncBackgroundUploadScheduler _generateStepsWithInitialDBWriteResult:initialStepData:] */

void FUN_107eabb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107eabc9c;
  uStack_60 = 0x107eabcac;
  uStack_58 = 0;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eabc9c; end: 107eabcb3;  */

void FUN_107eabc9c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107eabcb4; end: 107eabd83;  */

void FUN_107eabcb4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e3e0();
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ef8034(param_1,uVar5,uVar2,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40),
                *(undefined8 *)(param_2 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107eabd84; end: 107eabd93;  */

void FUN_107eabd84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2619f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af5d0,PTR_s_successWithObject__1126760a0,param_2);
  return;
}



/* Entry: 107eabd94; end: 107eabdff;  */

void FUN_107eabd94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eabe00; end: 107eabf43; -[SCCloudSyncBackgroundUploadScheduler _startOrchestrationWithStepGenerationResult:initialStepData:] */

void FUN_107eabe00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107eabc9c;
  uStack_60 = 0x107eabcac;
  uStack_58 = 0;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eabf44; end: 107eabfff;  */

void FUN_107eabf44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  func_0x00010c0dc640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_107f10fbc(param_2,uVar2,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107eac000; end: 107eac00f;  */

void FUN_107eac000(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2619f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af5d0,PTR_s_successWithObject__1126760a0,param_2);
  return;
}



/* Entry: 107eac010; end: 107eac07b;  */

void FUN_107eac010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eac07c; end: 107eac1af; -[SCCloudSyncBackgroundUploadScheduler _processUploadSchedulingResult:analyticsType:snap:entry:] */

void FUN_107eac07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6b8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107eac1b0;
  puStack_70 = &UNK_110a10be8;
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = uVar2;
  uStack_50 = param_6;
  uStack_48 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107eac1b0; end: 107eac33f;  */

void FUN_107eac1b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_107eabc9c;
  uStack_70 = 0x107eabcac;
  uStack_68 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  func_0x00010c0c0800(uVar1);
  func_0x00010c0d9840(param_2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107eac340; end: 107eac503;  */

void FUN_107eac340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c253720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b5fa34c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1760(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0a16c0(*(undefined8 *)(param_1 + 0x28));
  uVar3 = param_2;
  func_0x00010c2537c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  func_0x00010c0c0800(uVar3);
  func_0x00010c0a1660(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar5);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107eac504; end: 107eac5e3;  */

void FUN_107eac504(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(*(long *)(puVar2 + 0x28) + 8) + 0x18) = 0;
  uVar1 = 8;
  FUN_107f59f90(8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x30) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar2 + 0x30) + 8) + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107eac5e4; end: 107eac6b7;  */

void FUN_107eac5e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  uVar1 = 8;
  FUN_107f59f90(8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107eac6b8; end: 107eac73b; -[SCCloudSyncBackgroundUploadScheduler .cxx_destruct] */

void FUN_107eac6b8(long param_1)

{
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



/* Entry: 107eac73c; end: 107eac9cb;  */

bool FUN_107eac73c(ulong param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c06cf20();
  _objc_release(param_4);
  puVar1 = PTR_DAT_1126a5a48;
  if ((uVar3 & 1) != 0) {
    bVar2 = false;
    goto LAB_107eac834;
  }
  _objc_retain(param_1);
  uVar4 = param_1;
  func_0x00010010fab4(param_1,puVar1);
  uVar3 = param_1;
  if ((uint)uVar4 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  if (param_1 == 0) {
LAB_107eac828:
    bVar2 = false;
  }
  else {
    uVar5 = param_1;
    func_0x00010bf879c0();
    if ((((uint)uVar5 ^ 1) & (uint)uVar4) != 1) goto LAB_107eac828;
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    FUN_107eeeb20(param_1,uVar6);
    _objc_release(uVar6);
    if ((uVar4 & 1) != 0) goto LAB_107eac828;
    lVar7 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf48f60();
    _objc_release(lVar7);
    bVar2 = lVar8 != 2;
  }
  _objc_release(uVar3);
LAB_107eac834:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar2;
}



/* Entry: 107eac9cc; end: 107eaca73;  */

undefined8 FUN_107eac9cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d81c8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c0035c0();
  _objc_release(param_2);
  uVar2 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c06cf00(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 107eaca74; end: 107eacf03;  */

/* WARNING: Possible PIC construction at 0x000107eacba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107eacba4) */
/* WARNING: Removing unreachable block (ram,0x000107eacbd0) */
/* WARNING: Removing unreachable block (ram,0x000107eacb74) */

void FUN_107eaca74(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_3;
  uVar10 = param_7;
  uVar11 = param_8;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  _objc_retain(param_3);
  uVar9 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar2 == 0) {
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x00010bf54280();
      _objc_retainAutoreleasedReturnValue();
      param_1 = uVar13;
    }
    else {
      puVar3 = puVar1;
      lVar6 = param_5;
      FUN_107effdb0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = uVar13;
    }
    lVar8 = 1;
    puVar4 = puVar3;
    lVar2 = param_5;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto _objc_autoreleaseReturnValue;
    ___stack_chk_fail();
    lVar7 = lVar6;
    param_4 = lVar2;
    param_5 = lVar8;
    param_6 = uVar9;
    param_7 = uVar10;
    param_8 = uVar11;
  }
  _objc_retain();
  _objc_retain(lVar7);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c0a4980(param_6);
  func_0x00010bf5fd80(param_8);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(lVar7);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000107f1951c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_107f62728(param_1,puVar3,puVar5,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(lVar7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(lVar7);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107eacf04; end: 107eacf73;  */

void FUN_107eacf04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107eacf74; end: 107ead0cb;  */

void FUN_107eacf74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c28b7e0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ead0cc; end: 107ead187;  */

void FUN_107ead0cc(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c155420(param_1 - *(double *)(param_2 + 0x50),puVar1);
  func_0x00010c0a49a0(*(undefined8 *)(param_2 + 0x28));
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ead188; end: 107ead3eb;  */

void FUN_107ead188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c0a4980(param_6);
  func_0x00010bf5fd80(param_8);
  puVar1 = PTR_PTR_1126d81d0;
  _objc_alloc();
  func_0x00010bff43c0();
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000107f194fc();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_107f62728(param_1,puVar3,puVar4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ead3ec; end: 107ead543;  */

void FUN_107ead3ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c066b40(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ead544; end: 107ead5ff;  */

void FUN_107ead544(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c155420(param_1 - *(double *)(param_2 + 0x50),puVar1);
  func_0x00010c0a49a0(*(undefined8 *)(param_2 + 0x28));
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ead600; end: 107eadbcf;  */

/* WARNING: Removing unreachable block (ram,0x000107ead8c4) */

void FUN_107ead600(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar1 = param_1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c5180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      puVar5 = param_2;
      func_0x00010bf529e0();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar5 == (undefined *)0x1) {
        puVar9 = param_2;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        lVar1 = lVar2;
        func_0x00010c241220(lVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar8;
        func_0x00010c0720c0();
        _objc_release(lVar1);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (((ulong)puVar6 & 1) == 0) {
          lVar1 = lVar2;
          func_0x00010c241220(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          FUN_107eadbd0();
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(lVar1);
        }
        else {
          lVar1 = lVar2;
          func_0x00010c0efae0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(lVar1);
          lVar1 = lVar2;
          func_0x00010bf0bae0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(lVar1);
          puVar9 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar9;
          func_0x00010c0c6f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078d80();
          _objc_release(puVar5);
          puVar5 = puVar9;
          func_0x00010c0efe40(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078d80();
          _objc_release(puVar5);
          puVar5 = puVar9;
          func_0x00010c26e500(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078d80();
          _objc_release(puVar5);
          puVar5 = puVar9;
          func_0x00010bf0bae0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = puVar6;
          func_0x00010c08fa60();
          if (puVar5 != (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126d81e0;
            _objc_alloc();
            func_0x00010c008360();
            puVar10 = puVar7;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08fa60();
            _objc_release(puVar10);
            _objc_release(puVar7);
            _objc_release(puVar5);
          }
          _objc_release(puVar6);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar7);
          _objc_release(puVar6);
          FUN_107eadbd0(puVar5,param_3);
          _objc_release(puVar5);
          _objc_release(puVar9);
        }
      }
      else {
        func_0x00010bf529e0(param_2);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar9);
        _objc_retainAutoreleasedReturnValue();
        FUN_107eadbd0();
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107eadbd0; end: 107eadccb;  */

void FUN_107eadbd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d81d8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c298b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010c0c8760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eadccc; end: 107eadd0b;  */

void FUN_107eadccc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd2500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107eadd0c; end: 107eadf43; -[SCCloudSyncBackgroundUploadSchedulingServiceProvider _backgroundUploadScheduler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eadd0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126d81f0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar15 = 0;
    lVar10 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112770ee0;
    _objc_loadWeakRetained(lVar15);
    lVar10 = param_1 + _DAT_112770ee4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112770ee8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112770eec;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar12;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112770ef0;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar13;
  func_0x00010c266780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112770ef4;
    _objc_loadWeakRetained(lVar14);
  }
  lVar6 = lVar14;
  func_0x00010c0d79a0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112770ef8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  func_0x00010c00b780(puVar1,param_2,lVar15,lVar2,lVar3,lVar4,lVar5,lVar6,lVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eadf44; end: 107eae003; -[SCCloudSyncBackgroundUploadSchedulingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eadf44(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770ef8);
  _objc_destroyWeak(param_1 + _DAT_112770ef4);
  _objc_destroyWeak(param_1 + _DAT_112770ef0);
  _objc_destroyWeak(param_1 + _DAT_112770eec);
  _objc_destroyWeak(param_1 + _DAT_112770ee8);
  _objc_destroyWeak(param_1 + _DAT_112770ee4);
  _objc_destroyWeak(param_1 + _DAT_112770ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770edc);
  return;
}



/* Entry: 107eae004; end: 107eae217; -[SCCloudSyncLoggingServiceProvider _cloudSyncLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eae004(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d8200;
  _objc_alloc(PTR_PTR_1126d8200);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112770f00;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112770f04;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112770f08;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar12;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112770f0c;
    _objc_loadWeakRetained(lVar14);
  }
  lVar6 = lVar14;
  func_0x00010bf53fa0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112770f10;
    _objc_loadWeakRetained(lVar13);
  }
  lVar7 = lVar13;
  func_0x00010c0c8780(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = param_1 + _DAT_112770f14;
    _objc_loadWeakRetained(lVar9);
  }
  func_0x00010c035280(puVar1,param_2,lVar3,lVar4,lVar5,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eae218; end: 107eae28b; -[SCCloudSyncLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eae218(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770f14);
  _objc_destroyWeak(param_1 + _DAT_112770f10);
  _objc_destroyWeak(param_1 + _DAT_112770f0c);
  _objc_destroyWeak(param_1 + _DAT_112770f08);
  _objc_destroyWeak(param_1 + _DAT_112770f04);
  _objc_destroyWeak(param_1 + _DAT_112770f00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770efc);
  return;
}



/* Entry: 107eae28c; end: 107eae39b; -[SCCloudSyncServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eae28c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_112770f18;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06f880();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  puStack_38 = PTR_PTR_1126fb8f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eae39c; end: 107eae4c3; -[SCCloudSyncServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eae39c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770f6c);
  _objc_destroyWeak(param_1 + _DAT_112770f68);
  _objc_destroyWeak(param_1 + _DAT_112770f64);
  _objc_destroyWeak(param_1 + _DAT_112770f60);
  _objc_destroyWeak(param_1 + _DAT_112770f5c);
  _objc_destroyWeak(param_1 + _DAT_112770f58);
  _objc_destroyWeak(param_1 + _DAT_112770f54);
  _objc_destroyWeak(param_1 + _DAT_112770f50);
  _objc_destroyWeak(param_1 + _DAT_112770f4c);
  _objc_destroyWeak(param_1 + _DAT_112770f48);
  _objc_destroyWeak(param_1 + _DAT_112770f44);
  _objc_destroyWeak(param_1 + _DAT_112770f40);
  _objc_destroyWeak(param_1 + _DAT_112770f3c);
  _objc_destroyWeak(param_1 + _DAT_112770f38);
  _objc_destroyWeak(param_1 + _DAT_112770f34);
  _objc_destroyWeak(param_1 + _DAT_112770f30);
  _objc_destroyWeak(param_1 + _DAT_112770f2c);
  _objc_destroyWeak(param_1 + _DAT_112770f28);
  _objc_destroyWeak(param_1 + _DAT_112770f24);
  _objc_destroyWeak(param_1 + _DAT_112770f20);
  _objc_destroyWeak(param_1 + _DAT_112770f1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770f18);
  return;
}



/* Entry: 107eae4c4; end: 107eae507; -[SCMemoriesBackupServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eae4c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770f78);
  _objc_destroyWeak(param_1 + _DAT_112770f74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770f70);
  return;
}



/* Entry: 107eae508; end: 107eae693; -[SCCloudSyncLoggerImpl initWithPerformer:userTrackedLogger:grapheneRegistry:crashLogger:dataObjectContext:dreamsSessionService:] */

undefined1 *
FUN_107eae508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb900;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107eae694; end: 107eae797; -[SCCloudSyncLoggerImpl beginUploadForURL:snapId:contentType:dataSizeInBytes:] */

void FUN_107eae694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107eae798;
  puStack_88 = &UNK_1108e75b8;
  uStack_80 = param_3;
  puStack_78 = puVar1;
  uStack_70 = param_4;
  lStack_68 = param_1;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107eae798; end: 107eae817;  */

void FUN_107eae798(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d8228;
    _objc_alloc(PTR_PTR_1126d8228);
    func_0x00010bff7640();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10),param_2,puVar2,lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107eae818; end: 107eae93b; -[SCCloudSyncLoggerImpl beginUploadForURL:snapId:assetDescriptor:dataSizeInBytes:] */

void FUN_107eae818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107eae93c;
  puStack_88 = &UNK_110891e80;
  uStack_80 = param_3;
  puStack_78 = puVar1;
  uStack_70 = param_4;
  uStack_68 = param_5;
  lStack_60 = param_1;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107eae93c; end: 107eae9bb;  */

void FUN_107eae93c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d8228;
    _objc_alloc(PTR_PTR_1126d8228);
    func_0x00010bff7640();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10),param_2,puVar2,lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107eae9bc; end: 107eaeaaf; -[SCCloudSyncLoggerImpl endUploadForURL:succeeded:statusCode:parameters:] */

void FUN_107eae9bc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107eaeab0;
  puStack_88 = &UNK_11094eca0;
  uStack_80 = param_3;
  lStack_78 = param_1;
  puStack_70 = puVar1;
  uStack_68 = uVar2;
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_a0);
  _objc_release(puStack_70);
  _objc_release(uStack_80);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107eaeab0; end: 107eaedf3;  */

void FUN_107eaeab0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x10);
    func_0x00010c0e00e0(lVar3,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10),param_3,lVar2);
    puVar10 = PTR_PTR_1126b24e0;
    if (lVar3 != 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x40);
      ppuVar4 = *(undefined ***)(param_2 + 0x20);
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf529e0();
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar6 = ppuVar5;
        func_0x00010c0dfd40(ppuVar5,param_3,0);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar5);
      lVar7 = lVar3;
      func_0x00010bf4dac0(lVar3);
      func_0x000107f186a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      lVar8 = lVar3;
      func_0x00010bf18c20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar14,param_3,lVar8);
      lVar9 = lVar3;
      func_0x00010bf643c0(lVar3);
      func_0x00010bfb04c0(param_1,puVar10,param_3,uVar13,ppuVar6,lVar7,lVar9,
                          *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x28));
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
      dVar15 = 10.0;
      if (*(char *)(param_2 + 0x48) == '\0') {
        dVar15 = 100.0;
      }
      iVar1 = (int)*(undefined8 *)(param_2 + 0x28);
      func_0x00010beb54a0(dVar15);
      if (iVar1 != 0) {
        puVar10 = PTR_PTR_1126d8230;
        _objc_opt_new(PTR_PTR_1126d8230);
        lVar7 = lVar3;
        func_0x00010bf643c0(lVar3);
        func_0x00010c202cc0(puVar10,param_3,lVar7);
        uVar13 = *(undefined8 *)(param_2 + 0x30);
        lVar7 = lVar3;
        func_0x00010bf18c20(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(uVar13,param_3,lVar7);
        func_0x00010c1b92e0(puVar10,param_3,(long)(dVar15 * 1000.0));
        _objc_release(lVar7);
        func_0x00010c20a3c0(puVar10,param_3,*(undefined8 *)(param_2 + 0x40));
        lVar7 = lVar3;
        func_0x00010bf4dac0();
        if (lVar7 - 3U < 3) {
          uVar13 = *(undefined8 *)(&UNK_10dee8240 + (lVar7 - 3U) * 8);
        }
        else {
          uVar13 = 0;
        }
        func_0x00010c16a960(puVar10,param_3,uVar13);
        lVar7 = lVar3;
        func_0x00010bf0b100(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16a860(puVar10,param_3,lVar7);
        _objc_release(lVar7);
        lVar7 = lVar3;
        func_0x00010c241220(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c204680(puVar10,param_3,lVar7);
        _objc_release(lVar7);
        uVar13 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bfe4420(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9200(puVar10,param_3,uVar13);
        _objc_release(uVar13);
        puVar11 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
        _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
        func_0x00010c057bc0();
        puVar12 = puVar11;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21d460(puVar10,param_3,puVar12);
        _objc_release(puVar12);
        _objc_release(puVar11);
        uVar13 = *(undefined8 *)(param_2 + 0x38);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar13);
        _objc_release(puVar10);
      }
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107eaedf4; end: 107eaf503; -[SCCloudSyncLoggerImpl logNewQueuedOperationWithParams:queueLength:blockedDurationInSec:] */

void FUN_107eaedf4(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_4;
    func_0x00010c0d3c80();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d8238;
  _objc_opt_new(PTR_PTR_1126d8238);
  func_0x00010c171d20();
  func_0x00010c1e6780(puVar2);
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    func_0x00010c0b4ca0(puVar3);
    _objc_release(puVar3);
    func_0x00010c196ac0(puVar2);
  }
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    func_0x00010c1968c0(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    func_0x00010c2046e0(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c067ec0(puVar3);
    _objc_release(puVar3);
    func_0x000108dfcb04(puVar4);
    func_0x00010c196b80(puVar2);
  }
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    func_0x00010bf1f3c0(puVar3);
    _objc_release(puVar3);
    func_0x00010c1b3960(puVar2);
  }
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    func_0x00010c21e120(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    func_0x00010bafc254(puVar3);
    _objc_release(puVar3);
    func_0x00010c1d5a60(puVar2);
  }
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  _objc_release(puVar3);
  if ((((ulong)puVar5 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    func_0x00010c1ebbc0(puVar2);
    _objc_release(puVar3);
  }
  puVar4 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar3);
  puVar3 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c1ebd20(puVar2);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  func_0x00010bfb0280(param_1,PTR_PTR_1126b24e0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107eaf504; end: 107eaf5c7; -[SCCloudSyncLoggerImpl logFinishedOperationWithOperationType:totalTimeInSec:networkProcessingTimeInSec:queueLength:logContexts:tempCellularBackupEnabled:] */

void FUN_107eaf504(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b24e0;
  lVar2 = param_2;
  func_0x00010bde9080(param_2,param_3,param_4);
  func_0x00010bafc234();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb02c0(param_1,puVar1,param_3,param_5,lVar2,*(undefined8 *)(param_2 + 0x28));
  _objc_release(lVar2);
  if (param_4 != 2) {
    func_0x00010be53f40(param_1,param_2,param_3,param_6,param_7,0,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107eaf5c8; end: 107eaf6fb; -[SCCloudSyncLoggerImpl logBlizzardAbandonOperation:entryId:snapId:mediaId:operationType:abandonReason:detail:] */

void FUN_107eaf5c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8240;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c204680();
  _objc_release(param_5);
  func_0x00010c1968c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1c4880(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1ebd20(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1d5a60(puVar1,param_2,param_7);
  func_0x00010c197240(puVar1,param_2,param_8);
  func_0x00010c1971a0(puVar1,param_2,param_9);
  _objc_release(param_9);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eaf6fc; end: 107eaf773; -[SCCloudSyncLoggerImpl logSkipedOperationsFromOutOfOrderDeletion:logContexts:deleteEntryIds:backupNowEnabled:operationType:] */

void FUN_107eaf6fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b24e0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010bfb0420(puVar1,param_2,uVar2);
  func_0x00010be53f40(0,param_1,param_2,param_4,param_6,1,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107eaf774; end: 107eaf777; -[SCCloudSyncLoggerImpl cloudSyncDidPerformStep:consoleParam:] */

void FUN_107eaf774(void)

{
  return;
}



/* Entry: 107eaf778; end: 107eaf89f; -[SCCloudSyncLoggerImpl logBackupNetworkErrorWithStatusCode:detailStatusCode:retryCount:retryPolicy:backupStatus:analyticsType:] */

void FUN_107eaf778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b24e0;
  _objc_retain(param_4);
  func_0x00010c067fc0(param_3);
  uVar2 = param_4;
  func_0x00010c067fc0(param_4);
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bde18e0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f188d4(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bde1880(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f59710(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb0180(puVar1,param_2,param_3,uVar2,lVar3,param_6,lVar4,param_8,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_8);
  _objc_release(lVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107eaf8a0; end: 107eafa6f; -[SCCloudSyncLoggerImpl logBackupCloudFileLocalAvailability:IsSnapDuplicated:uploadState:analyticsType:] */

void FUN_107eaf8a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  func_0x00010bf149c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec23d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec23f8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010bde18a0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec2418,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar4);
  FUN_107f59710(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2438,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107eafa70; end: 107eafb6f; -[SCCloudSyncLoggerImpl logBackupCloudFileMissingErrorWithCloudFileLocalAvailability:IsSnapDuplicated:uploadState:analyticsType:] */

void FUN_107eafa70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  func_0x00010bf14b00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f59710(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde18a0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,param_6,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107eafb70; end: 107eafc47; -[SCCloudSyncLoggerImpl logBlizzardBackupError:fromRetry:errorMessage:statusCode:detailStatusCode:] */

void FUN_107eafb70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d8248;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1a0fe0();
  lVar2 = param_1;
  func_0x00010bde9080(param_1,param_2,param_3);
  func_0x00010c1d5a60(puVar1,param_2,lVar2);
  func_0x00010c1971a0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c20a3c0(puVar1,param_2,param_6);
  func_0x00010c18c5a0(puVar1,param_2,param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eafc48; end: 107eafc5b; -[SCCloudSyncLoggerImpl logServletResponseErrorWithEntryType:] */

void FUN_107eafc48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b24e0,PTR_s_fireServletResponseErrorWithEntr_1125c9b20,param_3,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107eafc5c; end: 107eafc6f; -[SCCloudSyncLoggerImpl logBackupSnapDocError:] */

void FUN_107eafc5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb00b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b24e0,PTR_s_fireBackupSnapDocError_grapheneR_1125c99d0,param_3,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107eafc70; end: 107eafd87; -[SCCloudSyncLoggerImpl logBackupNonFatalError:errorCategory:] */

void FUN_107eafc70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_4);
  func_0x00010bf14a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde9080(param_1,param_2,param_3);
  func_0x00010bafc234();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2238,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daeeb8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eafd88; end: 107eafe4b; -[SCCloudSyncLoggerImpl logBackupTranscodingError:] */

void FUN_107eafd88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14e20(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107f19b84(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daeeb8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107eafe4c; end: 107eb0167; -[SCCloudSyncLoggerImpl logSkipTranscodingReasonsWithSelectionMetrics:] */

void FUN_107eafe4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  func_0x00010c29b2a0(param_3);
  func_0x00010c29b2c0(param_3);
  func_0x00010c29b2e0(param_3);
  func_0x00010c29b280(param_3);
  func_0x00010c29b320();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14e80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14e80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14e80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14e80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14e80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107eb0168; end: 107eb0293; -[SCCloudSyncLoggerImpl logBackupFatalRetry:retriedSnapCount:coreDataUpdateDidSucceed:] */

void FUN_107eb0168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14ae0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde9080(param_1,param_2,param_3);
  func_0x00010bafc234();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2238,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec2298,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107eb0294; end: 107eb02a7; -[SCCloudSyncLoggerImpl logLegacyEditsSize:mediaType:] */

void FUN_107eb0294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b24e0,PTR_s_fireLegacyEditsSize_mediaType_gr_1125c9af8,param_3,param_4,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107eb02a8; end: 107eb04df; -[SCCloudSyncLoggerImpl logBackupStepLatencies:mediaType:operationType:] */

void FUN_107eb02a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar9 = &uStack_130;
  puVar10 = auStack_f0;
  uVar11 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        uVar14 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        puVar2 = PTR_PTR_1126b2438;
        func_0x00010bf14d60();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_5;
        FUN_107f59710(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec2238,uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(uVar11);
        puVar2 = puVar3;
        func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,uVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar2;
        func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9478,param_4)
        ;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c067ec0();
        func_0x00010befbfe0(uVar11,param_2,puVar3,(long)(int)lVar6);
        _objc_release(lVar5);
        _objc_release(uVar11);
        _objc_release(uVar4);
        _objc_release(puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar9 = &uStack_130;
      puVar10 = auStack_f0;
      uVar11 = 0x10;
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2438;
  _objc_retain(uVar11);
  _objc_retain(puVar10);
  func_0x00010bf14d40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daeeb8,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(puVar2);
  puVar7 = (undefined *)0x1;
  func_0x00010bafc234(1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010c0720c0(puVar9,param_2,puVar7);
  puVar2 = puVar3;
  if (((ulong)puVar8 & 1) == 0) {
    uVar11 = 0xc;
    func_0x00010bafc234(0xc);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c0720c0(puVar9,param_2,uVar11);
    if ((int)puVar8 == 0) {
      uVar4 = 2;
      func_0x00010bafc234(2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010c0720c0(puVar9,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar11);
      _objc_release(puVar7);
      if (((ulong)puVar8 & 1) != 0) goto LAB_107eb068c;
      func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9478,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
    }
    else {
      _objc_release(uVar11);
    }
  }
  _objc_release(puVar7);
  puVar3 = puVar2;
LAB_107eb068c:
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107eb04e0; end: 107eb06f7; -[SCCloudSyncLoggerImpl logBackupStepFailureForOperationType:step:errorCategory:mediaType:] */

void FUN_107eb04e0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf14d40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daeeb8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar3 = (undefined *)0x1;
  func_0x00010bafc234(1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar3);
  puVar1 = puVar2;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0xc;
    func_0x00010bafc234(0xc);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar5);
    if ((int)uVar4 == 0) {
      uVar6 = 2;
      func_0x00010bafc234(2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0(param_3,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar3);
      if ((uVar4 & 1) != 0) goto LAB_107eb068c;
      func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9478,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
    }
    else {
      _objc_release(uVar5);
    }
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
LAB_107eb068c:
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107eb06f8; end: 107eb08f7; -[SCCloudSyncLoggerImpl logBackupLatency:mediaType:operationType:] */

void FUN_107eb06f8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        iVar1 = (int)*(undefined8 *)(lStack_128 + lVar11 * 8);
        func_0x00010c067ec0();
        iVar8 = iVar8 + iVar1;
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      uVar9 = 0x10;
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf14b80();
  _objc_retainAutoreleasedReturnValue();
  FUN_107f59710(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec2238,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_5);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db9478,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010befbfe0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126b2438;
    _objc_retain(uVar9);
    func_0x00010bf149e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_107f59710(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec2238,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,iVar8 != 0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db9478,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar9);
    _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107eb08f8; end: 107eb0a57; -[SCCloudSyncLoggerImpl logBackupCompleteForOperationType:isSuccess:mediaType:] */

void FUN_107eb08f8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  func_0x00010bf149e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f59710(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2238,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9478,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eb0a58; end: 107eb0b63; -[SCCloudSyncLoggerImpl logBackupAttemptForOperationType:mediaType:] */

void FUN_107eb0a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_4);
  func_0x00010bf14980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f59710(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2238,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9478,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eb0b64; end: 107eb0c43; -[SCCloudSyncLoggerImpl logDbAttemptBegin:operation:snapState:] */

void FUN_107eb0b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf65860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdc6780(param_1,param_2,puVar1,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107eb0c44; end: 107eb0e33; -[SCCloudSyncLoggerImpl logDbAttemptEnd:operation:snapState:success:dbLatencyMs:] */

void FUN_107eb0c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf65880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdc6780(param_1,param_2,puVar2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lVar4 = lVar3;
  func_0x00010c2ac460(lVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf658a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdc6780(param_1,param_2,puVar2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  lVar7 = lVar3;
  func_0x00010c2ac460(lVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107eb0e34; end: 107eb1157; -[SCCloudSyncLoggerImpl logDedupeAddSnapsResult:entryType:isReplacingSnap:analytics:] */

void FUN_107eb0e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_208;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar5 = &uStack_1b0;
  lStack_208 = param_6;
  func_0x00010bf52a60(param_6,param_2,puVar5,auStack_f0,0x10);
  if (lStack_208 != 0) {
    lVar8 = *plStack_1a0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(param_6);
        }
        lVar12 = *(long *)(lStack_1a8 + lVar9 * 8);
        puVar1 = PTR_PTR_1126b2438;
        func_0x00010bf14a20(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar12;
        func_0x00010bf16060(lVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar12;
        func_0x00010c071000(lVar12);
        func_0x00010be52320(param_1,param_2,puVar1,param_3,param_4,lVar2,param_5,lVar3);
        _objc_release(lVar2);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126b2438;
        func_0x00010bf14a60(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar12;
        func_0x00010c26d780(lVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar12;
        func_0x00010c071000(lVar12);
        func_0x00010be52320(param_1,param_2,puVar1,param_3,param_4,lVar2,param_5,lVar3);
        _objc_release(lVar2);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126b2438;
        func_0x00010bf14a40(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar12;
        func_0x00010c0ef4e0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar12;
        func_0x00010c071000(lVar12);
        func_0x00010be52320(param_1,param_2,puVar1,param_3,param_4,lVar2,param_5,lVar3);
        _objc_release(lVar2);
        _objc_release(puVar1);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        lVar2 = lVar12;
        func_0x00010bfc0c80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar10 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar2);
              }
              uVar13 = *(undefined8 *)(lStack_1e8 + lVar10 * 8);
              puVar1 = PTR_PTR_1126b2438;
              func_0x00010bf14a00(PTR_PTR_1126b2438);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar12;
              func_0x00010c071000(lVar12);
              func_0x00010be52320(param_1,param_2,puVar1,param_3,param_4,uVar13,param_5,lVar4);
              _objc_release(puVar1);
              lVar10 = lVar10 + 1;
            } while (lVar3 != lVar10);
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lStack_208);
      puVar5 = &uStack_1b0;
      lStack_208 = param_6;
      func_0x00010bf52a60(param_6,param_2,puVar5,auStack_f0,0x10);
    } while (lStack_208 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107f59f68(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14700(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_6 + 0x28);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar13);
  _objc_release(uVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107eb1158; end: 107eb1213; -[SCCloudSyncLoggerImpl logBackgroundUploadError:] */

void FUN_107eb1158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107f59f68(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14700(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107eb1214; end: 107eb12cf; -[SCCloudSyncLoggerImpl logBackgroundUploadStep:] */

void FUN_107eb1214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_107f1866c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf147a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107eb12d0; end: 107eb135b; -[SCCloudSyncLoggerImpl logBackupJobAppendLatencyInSeconds:] */

void FUN_107eb12d0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14b60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eb135c; end: 107eb156b; -[SCCloudSyncLoggerImpl _logDedupeAddSnapsResultForMetric:operationType:entryType:analytics:isReplacedSnap:isDuplicatedSnap:] */

void FUN_107eb135c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,int param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar4 = param_6;
  func_0x00010bfd5ae0();
  if ((int)uVar4 != 0) {
    FUN_107f59710();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if (param_7 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110dad378;
    if (param_8 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dad398;
    }
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar1);
    uVar4 = param_3;
    func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110ec2238,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010b5faa7c(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110e29c38,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010c2ac460(uVar5,param_2,&PTR____CFConstantStringClassReference_110ec22d8,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110ec22f8,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010c235120();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)uVar4 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dad398;
    }
    param_3 = uVar5;
    func_0x00010c2ac460(uVar5,param_2,&PTR____CFConstantStringClassReference_110ec2318,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(ppuVar2);
    _objc_release(param_5);
    _objc_release(ppuVar1);
    _objc_release(param_4);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107eb156c; end: 107eb1577; -[SCCloudSyncLoggerImpl _shouldReportBlizzardEvent:] */

void FUN_107eb156c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIDevice_1126aeb10,PTR_s_shouldReportForPercentage__11266a3e8);
  return;
}



/* Entry: 107eb1578; end: 107eb16db; -[SCCloudSyncLoggerImpl _logGallerySnapUploadMetrics:totalTimeInSec:tempCellularBackupEnabled:skipOperation:operationType:] */

void FUN_107eb1578(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
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
  
  puVar8 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar14 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar9 = auStack_f8;
  uVar10 = 0x10;
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        lVar11 = *(long *)(lStack_138 + lVar13 * 8);
        func_0x00010bf97860();
        func_0x00010b5fa33c();
        uVar14 = param_1;
        if (lVar11 == 8) {
          func_0x00010be59cc0(param_1,param_2);
        }
        else {
          func_0x00010be58b80(param_1,param_2);
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar9 = auStack_f8;
      uVar10 = 0x10;
      lVar2 = param_4;
      puVar8 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010c241220(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar8;
  func_0x00010bf31200(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar8;
  func_0x00010c0c5180(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar8;
  func_0x00010bf97200(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860(puVar8);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07c60(uVar14,param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126b24e0;
  puVar3 = (undefined1 *)puVar8;
  func_0x00010c073dc0(puVar8);
  puVar4 = (undefined1 *)puVar8;
  func_0x00010bf97860(puVar8);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bfb04b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_fireGallerySnapUploadMetricWithT_1125c9ad0,puVar9,uVar10,puVar3,puVar4,
             *(undefined8 *)(param_4 + 0x28));
  return;
}



/* Entry: 107eb16dc; end: 107eb183f; -[SCCloudSyncLoggerImpl _logSnapGallerySnapUpload:totalTimeInSec:tempCellularBackupEnabled:skipOperation:] */

void FUN_107eb16dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf31200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf97200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860(param_4);
  uVar6 = param_4;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07c60(param_1,param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b24e0;
  uVar2 = param_4;
  func_0x00010c073dc0(param_4);
  uVar3 = param_4;
  func_0x00010bf97860(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bfb04b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_fireGallerySnapUploadMetricWithT_1125c9ad0,param_5,param_6,uVar2,uVar3,
             *(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 107eb1840; end: 107eb1997; -[SCCloudSyncLoggerImpl _logTimelineDraftGallerySnapUpload:totalTimeInSec:tempCellularBackupEnabled:skipOperation:operationType:] */

void FUN_107eb1840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  if (param_7 - 0xbU < 2) {
    func_0x00010be08500(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else if ((param_7 == 9) && ((int)param_6 != 0)) {
    uVar1 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf31200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf97200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010bf97860(param_4);
    uVar6 = param_4;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07c60(param_1,param_2,param_3,uVar1,uVar2,uVar3,uVar4,uVar5,1,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107eb1998; end: 107eb1c1f; -[SCCloudSyncLoggerImpl _emitTimelineDraftGallerySnapUpload:totalTimeInSec:tempCellularBackupEnabled:skipOperation:] */

void FUN_107eb1998(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 *puStack_160;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = param_1;
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126b24e0;
  puVar12 = param_4;
  func_0x00010c073dc0();
  puVar1 = param_4;
  func_0x00010bf97860(param_4);
  puVar13 = *(undefined8 **)(param_2 + 0x28);
  puVar11 = param_6;
  func_0x00010bfb04a0(puVar3,param_3,param_5,param_6,puVar12,puVar1,puVar13);
  puVar3 = PTR_PTR_1126af4c0;
  if (((ulong)param_6 & 1) == 0) {
    puVar2 = param_4;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = *(undefined1 **)(param_2 + 0x18);
    param_5 = puVar2;
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380(PTR_PTR_1126af4d0,param_3,puVar3,*(undefined8 *)(param_2 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      dVar17 = 0.0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      param_5 = &uStack_140;
      puVar11 = auStack_100;
      puVar12 = (undefined8 *)0x10;
      puVar5 = puVar4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar15 = *plStack_130;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar15) {
              _objc_enumerationMutation(puVar4);
            }
            uVar16 = *(undefined8 *)(lStack_138 + (long)puVar14 * 8);
            uVar10 = uVar16;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = param_4;
            func_0x00010bf31200();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = param_4;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = param_4;
            func_0x00010bf97860();
            puStack_160 = param_4;
            func_0x00010c135700();
            _objc_retainAutoreleasedReturnValue();
            param_9 = 0;
            puVar1 = puVar2;
            dVar17 = param_1;
            func_0x00010be07c60(param_1,param_2,param_3,uVar10,puVar12,uVar16,puVar2,puVar13);
            _objc_release(puStack_160);
            _objc_release(puVar2);
            _objc_release(uVar16);
            _objc_release(puVar12);
            _objc_release(uVar10);
            puVar14 = puVar14 + 1;
          } while (puVar5 != puVar14);
          param_5 = &uStack_140;
          puVar11 = auStack_100;
          puVar12 = (undefined8 *)0x10;
          puVar5 = puVar4;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(puVar12);
  puVar3 = PTR_PTR_1126d8250;
  _objc_retain(puStack_160);
  _objc_retain(puVar1);
  _objc_retain(puVar11);
  _objc_opt_new(puVar3);
  func_0x00010c179280();
  _objc_release(puVar11);
  func_0x00010c204680(puVar3,param_3,param_5);
  func_0x00010c1c4880(puVar3,param_3,puVar12);
  func_0x00010c1968c0(puVar3,param_3,puVar1);
  _objc_release(puVar1);
  func_0x000108dfcb04(puVar13);
  func_0x00010c196b80(puVar3,param_3,puVar13);
  func_0x00010c1ebd20(puVar3,param_3,puStack_160);
  _objc_release(puStack_160);
  func_0x00010c1b4ea0(puVar3,param_3,0);
  if (param_9 == 0) {
    func_0x00010c155420(dVar17,PTR_PTR_1126afec0);
    func_0x00010c1f5aa0(puVar3,param_3,(long)dVar17);
  }
  else {
    func_0x00010c2030e0(puVar3,param_3,0);
  }
  lVar6 = param_4[4];
  func_0x00010bf8a8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar15;
  func_0x00010bf60020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar6);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_5 != (undefined8 *)0x0) {
    func_0x00010befa120(puVar4,param_3,param_5);
  }
  if (puVar12 != (undefined8 *)0x0) {
    func_0x00010befa120(puVar4,param_3,puVar12);
  }
  lVar8 = param_4[4];
  func_0x00010bf8a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  lVar6 = lVar15;
  func_0x00010bf8a860(lVar15,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar15);
  _objc_release(lVar8);
  lVar15 = lVar6;
  if (lVar7 != 0) {
    lVar15 = lVar7;
  }
  _objc_retain(lVar15);
  _objc_release(lVar7);
  if (lVar15 != 0) {
    func_0x00010c191e80(puVar3,param_3,lVar15);
  }
  puVar5 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0(PTR_PTR_1126af4d0,param_3,param_5,param_4[3]);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 != (undefined *)0x0) {
    puVar9 = puVar14;
    func_0x00010bf8a7e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe120(puVar3,param_3,puVar9);
    _objc_release(puVar9);
    puVar9 = puVar14;
    func_0x00010bf8a400(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar3,param_3,puVar9);
    _objc_release(puVar9);
  }
  uVar10 = param_4[7];
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar10);
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release(puVar3);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107eb1c20; end: 107eb1f3f; -[SCCloudSyncLoggerImpl _emitGallerySnapUploadWithSnapId:captureSessionId:mediaId:entryId:entryType:totalTimeInSec:skipOperation:requestId:] */

void FUN_107eb1c20(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,int param_9,undefined8 param_10
                  )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8250;
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c179280();
  _objc_release(param_5);
  func_0x00010c204680(puVar1,param_3,param_4);
  func_0x00010c1c4880(puVar1,param_3,param_6);
  func_0x00010c1968c0(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x000108dfcb04(param_8);
  func_0x00010c196b80(puVar1,param_3,param_8);
  func_0x00010c1ebd20(puVar1,param_3,param_10);
  _objc_release(param_10);
  func_0x00010c1b4ea0(puVar1,param_3,0);
  if (param_9 == 0) {
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010c1f5aa0(puVar1,param_3,(long)param_1);
  }
  else {
    func_0x00010c2030e0(puVar1,param_3,0);
  }
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010bf8a8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_4 != 0) {
    func_0x00010befa120(puVar5,param_3,param_4);
  }
  if (param_6 != 0) {
    func_0x00010befa120(puVar5,param_3,param_6);
  }
  lVar6 = *(long *)(param_2 + 0x20);
  func_0x00010bf8a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf51e00(puVar5);
  lVar2 = lVar3;
  func_0x00010bf8a860(lVar3,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  lVar3 = lVar2;
  if (lVar4 != 0) {
    lVar3 = lVar4;
  }
  _objc_retain(lVar3);
  _objc_release(lVar4);
  if (lVar3 != 0) {
    func_0x00010c191e80(puVar1,param_3,lVar3);
  }
  puVar7 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0(PTR_PTR_1126af4d0,param_3,param_4,*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    puVar9 = puVar8;
    func_0x00010bf8a7e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe120(puVar1,param_3,puVar9);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010bf8a400(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar1,param_3,puVar9);
    _objc_release(puVar9);
  }
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107eb1f40; end: 107eb1f5f; -[SCCloudSyncLoggerImpl _convertCloudSyncOperationType:] */

undefined8 FUN_107eb1f40(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xd) {
    return *(undefined8 *)(&UNK_10dee8258 + param_3 * 8);
  }
  return 3;
}



/* Entry: 107eb1f60; end: 107eb2067; -[SCCloudSyncLoggerImpl _addDbAttemptDimensions:stepName:operation:snapState:] */

void FUN_107eb1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_6);
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 - 1U < 4) {
    ppuVar3 = (undefined **)(&PTR_PTR_110a10e28)[param_5 - 1U];
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec2458;
  }
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110ec2238,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  if (param_6 != 0) {
    func_0x00010bde18a0(param_1,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110ec22b8,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


